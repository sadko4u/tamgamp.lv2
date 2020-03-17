/*
 * Simulation of Guitarix tonestack chain
 * 
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
 * Copyright (C) 2011 Pete Shorthose <http://guitarix.org/>
 * This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */


declare id          "tone";
declare version     "0.01";
declare author      "Hermann Meyer";
declare license     "BSD";
declare copyright   "(C) Hermann Meyer 2008";

import("stdfaust.lib");
import("amp_sim.lib");

/**-----------------------------------------------
              The default tone control
   Low and high shelf filters, from Robert Bristow-Johnson's "Audio
   EQ Cookbook", see http://www.musicdsp.org/files/Audio-EQ-Cookbook.txt.
-----------------------------------------------*/

filter(b0,b1,b2,a0,a1,a2)   = f : (+ ~ g)
with {
    f(x)    = (b0/a0)*x+(b1/a0)*x'+(b2/a0)*x'';
    g(y)    = 0-(a1/a0)*y-(a2/a0)*y';
};

gxlow_shelf(f0,g)       = filter(b0,b1,b2,a0,a1,a2)
with {
    S       = 1;
    A       = pow(10,g/40);
    w0      = 2*ma.PI*f0/ma.SR;
    alpha   = sin(w0)/2 * sqrt( (A + 1/A)*(1/S - 1) + 2 );

    b0      =    A*( (A+1) - (A-1)*cos(w0) + 2*sqrt(A)*alpha );
    b1      =  2*A*( (A-1) - (A+1)*cos(w0)                   );
    b2      =    A*( (A+1) - (A-1)*cos(w0) - 2*sqrt(A)*alpha );
    a0      =        (A+1) + (A-1)*cos(w0) + 2*sqrt(A)*alpha;
    a1      =   -2*( (A-1) + (A+1)*cos(w0)                   );
    a2      =        (A+1) + (A-1)*cos(w0) - 2*sqrt(A)*alpha;
};

gxhigh_shelf(f0,g)  = filter(b0,b1,b2,a0,a1,a2)
with {
    S       = 1;
    A       = pow(10,g/40);
    w0      = 2*ma.PI*f0/ma.SR;
    alpha   = sin(w0)/2 * sqrt( (A + 1/A)*(1/S - 1) + 2 );

    b0      =    A*( (A+1) + (A-1)*cos(w0) + 2*sqrt(A)*alpha );
    b1      = -2*A*( (A-1) + (A+1)*cos(w0)                   );
    b2      =    A*( (A+1) + (A-1)*cos(w0) - 2*sqrt(A)*alpha );
    a0      =        (A+1) - (A-1)*cos(w0) + 2*sqrt(A)*alpha;
    a1      =    2*( (A-1) - (A+1)*cos(w0)                   );
    a2      =        (A+1) - (A-1)*cos(w0) - 2*sqrt(A)*alpha;
};

/* Fixed bass and treble frequencies.*/
bass_freq   = 600;
treble_freq = 2400;

bass_gain   = vslider("bass", 0, -20, 20, 0.1);
mid_gain    = vslider("middle", 0, -20, 20, 0.1)/2;
treble_gain = vslider("treble", 0, -20, 20, 0.1);

tone(b,m,t)     = gxlow_shelf(bass_freq,b-m) :
                  gxlow_shelf(treble_freq,m):
                  gxhigh_shelf(bass_freq,m) :
                  gxhigh_shelf(treble_freq,t-m);
process     = add_dc :
                  gxlow_shelf(bass_freq,bass_gain-mid_gain) :
                  gxlow_shelf(treble_freq,mid_gain):
                  gxhigh_shelf(bass_freq,mid_gain) :
                  gxhigh_shelf(treble_freq,treble_gain-mid_gain);
