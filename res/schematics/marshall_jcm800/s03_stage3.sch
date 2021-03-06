v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 45300 44500 1 90 0 resistor-2.sym
{
T 44950 44900 5 10 0 0 90 0 1
device=RESISTOR
T 45700 45200 5 10 1 1 180 0 1
refdes=R12
T 45400 44700 5 10 1 1 0 0 1
value=820
}
C 40900 48400 1 0 0 input-1.sym
{
T 40900 48700 5 10 0 0 0 0 1
device=INPUT
T 40900 48400 5 10 1 1 0 0 1
refdes=IN1
}
C 53600 46200 1 180 1 output-1.sym
{
T 53700 45900 5 10 0 0 180 6 1
device=OUTPUT
T 53800 46200 5 10 1 1 180 6 1
refdes=OUT1
}
C 45100 49000 1 90 0 resistor-2.sym
{
T 44750 49400 5 10 0 0 90 0 1
device=RESISTOR
T 44800 49700 5 10 1 1 180 0 1
refdes=R15
T 44400 49300 5 10 1 1 0 0 1
value=100k
}
C 45300 43700 1 0 1 gnd-1.sym
C 47700 45500 1 90 0 resistor-2.sym
{
T 47350 45900 5 10 0 0 90 0 1
device=RESISTOR
T 47400 46300 5 10 1 1 180 0 1
refdes=R16
T 47100 45800 5 10 1 1 0 0 1
value=100k
}
C 42600 45000 1 0 0 triode.sym
{
T 45000 47100 5 10 0 1 0 0 1
device=TRIODE
T 45400 47800 5 10 1 1 0 0 1
refdes=U2a
T 45300 47500 5 10 1 1 0 0 1
value=12ax7
}
C 45000 46300 1 0 0 triode.sym
{
T 47400 48400 5 10 0 1 0 0 1
device=TRIODE
T 47800 49100 5 10 1 1 0 0 1
refdes=U2b
T 47700 48800 5 10 1 1 0 0 1
value=12ax7
}
N 45000 49000 45000 47800 4
N 45000 50100 45000 49900 4
N 47400 50400 47400 49100 4
N 45200 45400 45200 46300 4
N 47600 46400 47600 47600 4
N 45200 44000 45200 44500 4
N 47600 45500 47600 44200 4
N 47600 44200 45200 44200 4
N 46600 48300 45000 48300 4
C 47200 50400 1 0 0 generic-power-1.sym
{
T 47200 50400 5 10 0 0 0 0 1
device=POWER
T 47200 50700 5 10 1 1 0 0 1
refdes=Vcc2
T 47700 50700 5 10 1 1 0 0 1
value=348V
}
N 47400 50100 45000 50100 4
C 42500 47200 1 90 0 resistor-2.sym
{
T 42150 47600 5 10 0 0 90 0 1
device=RESISTOR
T 42200 47900 5 10 1 1 180 0 1
refdes=R1
T 41800 47500 5 10 1 1 0 0 1
value=470k
}
C 43200 48100 1 270 0 capacitor-1.sym
{
T 43900 47900 5 10 0 0 270 0 1
device=CAPACITOR
T 44100 47900 5 10 0 0 270 0 1
symversion=0.1
T 43300 47900 5 10 1 1 180 0 1
refdes=C1
T 43500 47800 5 10 1 1 0 0 1
value=470p
}
N 42400 48100 42400 48500 4
N 43400 48100 43400 48500 4
C 42500 45100 1 90 0 resistor-2.sym
{
T 42150 45500 5 10 0 0 90 0 1
device=RESISTOR
T 42200 45800 5 10 1 1 180 0 1
refdes=R2
T 41800 45400 5 10 1 1 0 0 1
value=470k
}
N 42400 46000 42400 47200 4
N 42400 47000 44200 47000 4
N 41700 48500 43400 48500 4
N 43400 47200 43400 47000 4
N 42400 45100 42400 44200 4
N 42400 44200 45200 44200 4
C 51200 45400 1 180 0 capacitor-1.sym
{
T 51000 44700 5 10 0 0 180 0 1
device=CAPACITOR
T 51000 44500 5 10 0 0 180 0 1
symversion=0.1
T 50300 45400 5 10 1 1 0 0 1
refdes=C10
T 51000 44900 5 10 1 1 180 0 1
value=0.022u
}
C 52000 42600 1 90 0 resistor-variable-2.sym
{
T 51100 43400 5 10 0 1 90 0 1
device=VARIABLE_RESISTOR
T 52350 42900 5 10 1 1 180 0 1
refdes=P4
T 52100 42600 5 10 1 1 180 6 1
value=value=22k,var=middle
}
C 51200 47000 1 180 0 capacitor-1.sym
{
T 51000 46300 5 10 0 0 180 0 1
device=CAPACITOR
T 51000 46100 5 10 0 0 180 0 1
symversion=0.1
T 50400 46900 5 10 1 1 0 0 1
refdes=C9
T 51000 46500 5 10 1 1 180 0 1
value=470p
}
C 51800 45600 1 270 1 resistor-variable-2.sym
{
T 52700 46400 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 51450 46300 5 10 1 1 180 6 1
refdes=P3
T 53900 46500 5 10 1 1 180 0 1
value=value=220k,var=treble
}
C 51800 44000 1 270 1 resistor-variable-2.sym
{
T 52700 44800 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 52050 44400 5 10 1 1 180 6 1
refdes=P5
T 53700 44100 5 10 1 1 180 0 1
value=value=1M,var=bass
}
C 51200 43300 1 180 0 capacitor-1.sym
{
T 51000 42600 5 10 0 0 180 0 1
device=CAPACITOR
T 51000 42400 5 10 0 0 180 0 1
symversion=0.1
T 50300 43300 5 10 1 1 0 0 1
refdes=C11
T 51000 42800 5 10 1 1 180 0 1
value=0.022u
}
C 52000 41700 1 0 1 gnd-1.sym
C 49900 45600 1 90 0 resistor-2.sym
{
T 49550 46000 5 10 0 0 90 0 1
device=RESISTOR
T 50300 46300 5 10 1 1 180 0 1
refdes=R17
T 50000 45900 5 10 1 1 0 0 1
value=33k
}
N 51200 46800 51900 46800 4
N 51900 46800 51900 46500 4
N 51900 45600 51900 44900 4
N 51900 44000 51900 43500 4
N 51900 42600 51900 42000 4
N 49800 43100 49800 45600 4
N 49800 46500 49800 46800 4
N 50300 45200 49800 45200 4
N 51200 45200 51900 45200 4
N 51900 45200 52400 45200 4
N 52400 45200 52400 44500 4
N 51200 43100 51400 43100 4
N 50300 43100 49800 43100 4
N 47600 46800 50300 46800 4
N 53600 46100 52400 46100 4
