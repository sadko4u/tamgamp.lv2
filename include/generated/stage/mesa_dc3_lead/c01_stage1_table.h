
// c01_stage1_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  5.406380
 // --table_op  1.000000

struct tablec01_stage1 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tablec01_stage1_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tablec01_stage1&() const { return *(tablec01_stage1*)this; }
};

static tablec01_stage1_imp<2048> c01_stage1_table __rt_data = {
	0,-0.833333,204.7,2048, {
	0.000000000000,-0.034373005970,-0.068520740106,-0.102444804846,-0.136146793065,
	-0.169628288063,-0.202890863564,-0.235936083715,-0.268765503081,-0.301380666655,
	-0.333783109853,-0.365974358527,-0.397955928966,-0.429729327912,-0.461296052561,
	-0.492657590584,-0.523815420135,-0.554771009869,-0.585525818954,-0.616081297094,
	-0.646438884545,-0.676600012133,-0.706566101280,-0.736338564024,-0.765918803042,
	-0.795308211674,-0.824508173951,-0.853520064622,-0.882345249177,-0.910985083882,
	-0.939440915800,-0.967714082832,-0.995805913738,-1.023717728174,-1.051450836723,
	-1.079006540930,-1.106386133333,-1.133590897501,-1.160622108064,-1.187481030756,
	-1.214168922445,-1.240687031174,-1.267036596195,-1.293218848011,-1.319235008411,
	-1.345086290509,-1.370773898787,-1.396299029130,-1.421662868868,-1.446866596819,
	-1.471911383324,-1.496798390293,-1.521528771247,-1.546103671353,-1.570524227474,
	-1.594791568208,-1.618906813927,-1.642871076825,-1.666685460960,-1.690351062294,
	-1.713868968738,-1.737240260197,-1.760466008610,-1.783547277998,-1.806485124503,
	-1.829280596437,-1.851934734322,-1.874448570935,-1.896823131355,-1.919059433002,
	-1.941158485686,-1.963121291649,-1.984948845610,-2.006642134809,-2.028202139050,
	-2.049629830749,-2.070926174976,-2.092092129497,-2.113128644825,-2.134036664255,
	-2.154817123917,-2.175470952816,-2.195999072873,-2.216402398977,-2.236681839023,
	-2.256838293954,-2.276872657814,-2.296785817780,-2.316578654216,-2.336252040708,
	-2.355806844114,-2.375243924604,-2.394564135701,-2.413768324330,-2.432857330856,
	-2.451831989127,-2.470693126520,-2.489441563980,-2.508078116062,-2.526603590978,
	-2.545018790631,-2.563324510666,-2.581521540503,-2.599610663385,-2.617592656415,
	-2.635468290601,-2.653238330892,-2.670903536222,-2.688464659551,-2.705922447904,
	-2.723277642412,-2.740530978348,-2.757683185175,-2.774734986578,-2.791687100505,
	-2.808540239210,-2.825295109287,-2.841952411711,-2.858512841877,-2.874977089637,
	-2.891345839339,-2.907619769864,-2.923799554664,-2.939885861800,-2.955879353979,
	-2.971780688589,-2.987590517739,-3.003309488292,-3.018938241905,-3.034474969996,
	-3.049917633376,-3.065269120386,-3.080530696142,-3.095703315508,-3.110787808902,
	-3.125784939800,-3.140695429605,-3.155519970471,-3.170259232684,-3.184913869279,
	-3.199484519088,-3.213971808855,-3.228376354761,-3.242698763551,-3.256939633398,
	-3.271099554572,-3.285179109978,-3.299178875584,-3.313099420780,-3.326941308671,
	-3.340705096332,-3.354391335018,-3.368000570350,-3.381533342479,-3.394990186225,
	-3.408371631206,-3.421678201949,-3.434910417995,-3.448068793990,-3.461153839772,
	-3.474166060445,-3.487105956457,-3.499974023663,-3.512770753391,-3.525496632500,
	-3.538152143432,-3.550737764272,-3.563253968791,-3.575701226497,-3.588080002681,
	-3.600390758457,-3.612633950808,-3.624810032623,-3.636919452735,-3.648962655963,
	-3.660940083143,-3.672852171165,-3.684699353007,-3.696482057768,-3.708200710700,
	-3.719855733237,-3.731447543030,-3.742976553973,-3.754443176232,-3.765847816275,
	-3.777190876898,-3.788472757254,-3.799693852878,-3.810854555710,-3.821955254129,
	-3.832996332968,-3.843978173543,-3.854901153679,-3.865765647729,-3.876572026599,
	-3.887320657771,-3.898011905325,-3.908646129960,-3.919223689015,-3.929744936492,
	-3.940210223074,-3.950619896149,-3.960974299822,-3.971273774946,-3.981518659131,
	-3.991709286767,-4.001845989042,-4.011929093962,-4.021958926366,-4.031935807942,
	-4.041860057250,-4.051731989733,-4.061551917737,-4.071320150525,-4.081036994293,
	-4.090702752188,-4.100317724320,-4.109882207780,-4.119396496651,-4.128860882025,
	-4.138275652018,-4.147641091779,-4.156957483509,-4.166225106469,-4.175444236999,
	-4.184615148523,-4.193738111568,-4.202813393771,-4.211841259894,-4.220821971833,
	-4.229755788632,-4.238642966491,-4.247483758775,-4.256278416031,-4.265027185989,
	-4.273730313580,-4.282388040940,-4.291000607418,-4.299568249591,-4.308091201266,
	-4.316569693493,-4.325003954568,-4.333394210046,-4.341740682744,-4.350043592749,
	-4.358303157427,-4.366519591427,-4.374693106688,-4.382823912443,-4.390912215229,
	-4.398958218887,-4.406962124571,-4.414924130750,-4.422844433214,-4.430723225077,
	-4.438560696781,-4.446357036102,-4.454112428147,-4.461827055364,-4.469501097539,
	-4.477134731803,-4.484728132629,-4.492281471837,-4.499794918596,-4.507268639421,
	-4.514702798179,-4.522097556084,-4.529453071702,-4.536769500947,-4.544046997085,
	-4.551285710726,-4.558485789832,-4.565647379707,-4.572770623001,-4.579855659705,
	-4.586902627151,-4.593911660007,-4.600882890275,-4.607816447288,-4.614712457705,
	-4.621571045508,-4.628392331999,-4.635176435793,-4.641923472814,-4.648633556291,
	-4.655306796749,-4.661943302006,-4.668543177169,-4.675106524619,-4.681633444015,
	-4.688124032277,-4.694578383585,-4.700996589369,-4.707378738299,-4.713724916279,
	-4.720035206437,-4.726309689117,-4.732548441865,-4.738751539426,-4.744919053729,
	-4.751051053876,-4.757147606135,-4.763208773926,-4.769234617808,-4.775225195472,
	-4.781180561723,-4.787100768473,-4.792985864723,-4.798835896553,-4.804650907107,
	-4.810430936581,-4.816176022207,-4.821886198239,-4.827561495937,-4.833201943554,
	-4.838807566321,-4.844378386426,-4.849914423004,-4.855415692119,-4.860882206745,
	-4.866313976749,-4.871711008879,-4.877073306740,-4.882400870777,-4.887693698261,
	-4.892951783267,-4.898175116655,-4.903363686055,-4.908517475840,-4.913636467114,
	-4.918720637691,-4.923769962069,-4.928784411417,-4.933763953551,-4.938708552912,
	-4.943618170547,-4.948492764090,-4.953332287735,-4.958136692218,-4.962905924797,
	-4.967639929223,-4.972338645729,-4.977002010995,-4.981629958137,-4.986222416678,
	-4.990779312527,-4.995300567956,-4.999786101578,-5.004235828326,-5.008649659425,
	-5.013027502374,-5.017369260921,-5.021674835043,-5.025944120917,-5.030177010905,
	-5.034373393525,-5.038533153432,-5.042656171395,-5.046742324274,-5.050791484999,
	-5.054803522547,-5.058778301921,-5.062715684128,-5.066615526159,-5.070477680967,
	-5.074301997449,-5.078088320422,-5.081836490608,-5.085546344609,-5.089217714894,
	-5.092850429780,-5.096444313411,-5.099999185742,-5.103514862528,-5.106991155299,
	-5.110427871355,-5.113824813744,-5.117181781253,-5.120498568395,-5.123774965396,
	-5.127010758187,-5.130205728391,-5.133359653319,-5.136472305959,-5.139543454972,
	-5.142572864686,-5.145560295094,-5.148505501850,-5.151408236269,-5.154268245330,
	-5.157085271676,-5.159859053616,-5.162589325137,-5.165275815906,-5.167918251279,
	-5.170516352317,-5.173069835796,-5.175578414223,-5.178041795850,-5.180459684701,
	-5.182831780587,-5.185157779134,-5.187437371807,-5.189670245942,-5.191856084775,
	-5.193994567482,-5.196085369207,-5.198128161110,-5.200122610409,-5.202068380421,
	-5.203965130618,-5.205812516674,-5.207610190524,-5.209357800421,-5.211054991000,
	-5.212701403341,-5.214296675043,-5.215840440295,-5.217332329950,-5.218771971613,
	-5.220158989717,-5.221493005621,-5.222773637695,-5.224000501421,-5.225173209495,
	-5.226291371928,-5.227354596161,-5.228362487178,-5.229314647623,-5.230210677923,
	-5.231050176419,-5.231832739498,-5.232557961726,-5.233225435996,-5.233834753670,
	-5.234385504734,-5.234877277952,-5.235309661028,-5.235682240773,-5.235994603274,
	-5.236246334073,-5.236437018344,-5.236566241081,-5.236633587289,-5.236638642177,
	-5.236580991359,-5.236460221060,-5.236275918324,-5.236027671229,-5.235715069105,
	-5.235337702758,-5.234895164699,-5.234387049372,-5.233812953393,-5.233172475793,
	-5.232465218256,-5.231690785372,-5.230848784887,-5.229938827961,-5.228960529424,
	-5.227913508037,-5.226797386763,-5.225611793031,-5.224356359005,-5.223030721861,
	-5.221634524062,-5.220167413633,-5.218629044443,-5.217019076482,-5.215337176148,
	-5.213583016525,-5.211756277671,-5.209856646898,-5.207883819058,-5.205837496828,
	-5.203717390991,-5.201523220720,-5.199254713861,-5.196911607208,-5.194493646789,
	-5.192000588132,-5.189432196548,-5.186788247395,-5.184068526351,-5.181272829673,
	-5.178400964459,-5.175452748903,-5.172428012550,-5.169326596537,-5.166148353836,
	-5.162893149490,-5.159560860841,-5.156151377754,-5.152664602833,-5.149100451629,
	-5.145458852842,-5.141739748517,-5.137943094228,-5.134068859257,-5.130117026764,
	-5.126087593946,-5.121980572188,-5.117795987207,-5.113533879182,-5.109194302880,
	-5.104777327765,-5.100283038101,-5.095711533045,-5.091062926725,-5.086337348316,
	-5.081534942092,-5.076655867481,-5.071700299097,-5.066668426769,-5.061560455555,
	-5.056376605743,-5.051117112847,-5.045782227583,-5.040372215839,-5.034887358636,
	-5.029327952069,-5.023694307246,-5.017986750208,-5.012205621846,-5.006351277799,
	-5.000424088344,-4.994424438280,-4.988352726794,-4.982209367319,-4.975994787387,
	-4.969709428464,-4.963353745778,-4.956928208143,-4.950433297765,-4.943869510045,
	-4.937237353370,-4.930537348898,-4.923770030332,-4.916935943691,-4.910035647066,
	-4.903069710376,-4.896038715115,-4.888943254087,-4.881783931143,-4.874561360910,
	-4.867276168509,-4.859928989272,-4.852520468459,-4.845051260960,-4.837522031001,
	-4.829933451844,-4.822286205482,-4.814580982335,-4.806818480938,-4.798999407632,
	-4.791124476247,-4.783194407793,-4.775209930137,-4.767171777690,-4.759080691090,
	-4.750937416880,-4.742742707195,-4.734497319440,-4.726202015978,-4.717857563808,
	-4.709464734259,-4.701024302669,-4.692537048077,-4.684003752916,-4.675425202705,
	-4.666802185743,-4.658135492812,-4.649425916873,-4.640674252778,-4.631881296973,
	-4.623047847216,-4.614174702286,-4.605262661710,-4.596312525482,-4.587325093799,
	-4.578301166785,-4.569241544235,-4.560147025360,-4.551018408526,-4.541856491014,
	-4.532662068777,-4.523435936198,-4.514178885863,-4.504891708332,-4.495575191919,
	-4.486230122476,-4.476857283180,-4.467457454332,-4.458031413156,-4.448579933606,
	-4.439103786176,-4.429603737718,-4.420080551268,-4.410534985869,-4.400967796410,
	-4.391379733464,-4.381771543132,-4.372143966894,-4.362497741468,-4.352833598666,
	-4.343152265267,-4.333454462883,-4.323740907841,-4.314012311065,-4.304269377960,
	-4.294512808311,-4.284743296174,-4.274961529785,-4.265168191464,-4.255363957527,
	-4.245549498206,-4.235725477568,-4.225892553444,-4.216051377357,-4.206202594458,
	-4.196346843469,-4.186484756620,-4.176616959602,-4.166744071519,-4.156866704840,
	-4.146985465361,-4.137100952169,-4.127213757609,-4.117324467252,-4.107433659874,
	-4.097541907430,-4.087649775033,-4.077757820945,-4.067866596558,-4.057976646386,
	-4.048088508061,-4.038202712326,-4.028319783033,-4.018440237149,-4.008564584757,
	-3.998693329062,-3.988826966405,-3.978965986269,-3.969110871294,-3.959262097298,
	-3.949420133289,-3.939585441488,-3.929758477352,-3.919939689596,-3.910129520221,
	-3.900328404540,-3.890536771209,-3.880755042257,-3.870983633119,-3.861222952670,
	-3.851473403259,-3.841735380750,-3.832009274554,-3.822295467673,-3.812594336741,
	-3.802906252061,-3.793231577652,-3.783570671291,-3.773923884557,-3.764291562877,
	-3.754674045576,-3.745071665917,-3.735484751154,-3.725913622581,-3.716358595578,
	-3.706819979664,-3.697298078546,-3.687793190168,-3.678305606767,-3.668835614923,
	-3.659383495609,-3.649949524247,-3.640533970759,-3.631137099621,-3.621759169918,
	-3.612400435395,-3.603061144515,-3.593741540507,-3.584441861429,-3.575162340215,
	-3.565903204734,-3.556664677841,-3.547446977436,-3.538250316517,-3.529074903232,
	-3.519920940940,-3.510788628257,-3.501678159120,-3.492589722834,-3.483523504130,
	-3.474479683219,-3.465458435847,-3.456459933344,-3.447484342685,-3.438531826539,
	-3.429602543323,-3.420696647255,-3.411814288410,-3.402955612767,-3.394120762268,
	-3.385309874864,-3.376523084570,-3.367760521519,-3.359022312007,-3.350308578550,
	-3.341619439930,-3.332955011250,-3.324315403978,-3.315700726004,-3.307111081681,
	-3.298546571883,-3.290007294044,-3.281493342215,-3.273004807105,-3.264541776133,
	-3.256104333471,-3.247692560095,-3.239306533829,-3.230946329390,-3.222612018436,
	-3.214303669607,-3.206021348576,-3.197765118085,-3.189535037997,-3.181331165334,
	-3.173153554322,-3.165002256434,-3.156877320431,-3.148778792405,-3.140706715817,
	-3.132661131545,-3.124642077917,-3.116649590755,-3.108683703415,-3.100744446822,
	-3.092831849517,-3.084945937685,-3.077086735203,-3.069254263671,-3.061448542451,
	-3.053669588705,-3.045917417430,-3.038192041494,-3.030493471672,-3.022821716681,
	-3.015176783216,-3.007558675981,-2.999967397726,-2.992402949280,-2.984865329583,
	-2.977354535720,-2.969870562952,-2.962413404749,-2.954983052821,-2.947579497150,
	-2.940202726020,-2.932852726047,-2.925529482210,-2.918232977881,-2.910963194852,
	-2.903720113368,-2.896503712151,-2.889313968431,-2.882150857973,-2.875014355105,
	-2.867904432743,-2.860821062421,-2.853764214317,-2.846733857274,-2.839729958834,
	-2.832752485256,-2.825801401545,-2.818876671475,-2.811978257617,-2.805106121357,
	-2.798260222924,-2.791440521413,-2.784646974805,-2.777879539996,-2.771138172813,
	-2.764422828038,-2.757733459435,-2.751070019761,-2.744432460799,-2.737820733369,
	-2.731234787356,-2.724674571727,-2.718140034550,-2.711631123016,-2.705147783458,
	-2.698689961371,-2.692257601428,-2.685850647501,-2.679469042679,-2.673112729289,
	-2.666781648906,-2.660475742381,-2.654194949848,-2.647939210751,-2.641708463853,
	-2.635502647257,-2.629321698420,-2.623165554171,-2.617034150726,-2.610927423703,
	-2.604845308139,-2.598787738505,-2.592754648718,-2.586745972161,-2.580761641692,
	-2.574801589661,-2.568865747926,-2.562954047863,-2.557066420382,-2.551202795940,
	-2.545363104553,-2.539547275812,-2.533755238892,-2.527986922568,-2.522242255225,
	-2.516521164872,-2.510823579152,-2.505149425358,-2.499498630437,-2.493871121012,
	-2.488266823382,-2.482685663543,-2.477127567192,-2.471592459741,-2.466080266329,
	-2.460590911827,-2.455124320853,-2.449680417782,-2.444259126754,-2.438860371683,
	-2.433484076270,-2.428130164010,-2.422798558199,-2.417489181951,-2.412201958198,
	-2.406936809703,-2.401693659071,-2.396472428752,-2.391273041053,-2.386095418147,
	-2.380939482078,-2.375805154771,-2.370692358042,-2.365601013599,-2.360531043057,
	-2.355482367941,-2.350454909694,-2.345448589687,-2.340463329220,-2.335499049538,
	-2.330555671827,-2.325633117230,-2.320731306848,-2.315850161750,-2.310989602977,
	-2.306149551547,-2.301329928466,-2.296530654728,-2.291751651328,-2.286992839259,
	-2.282254139526,-2.277535473147,-2.272836761158,-2.268157924621,-2.263498884630,
	-2.258859562311,-2.254239878832,-2.249639755408,-2.245059113301,-2.240497873830,
	-2.235955958375,-2.231433288378,-2.226929785352,-2.222445370882,-2.217979966631,
	-2.213533494345,-2.209105875855,-2.204697033084,-2.200306888048,-2.195935362861,
	-2.191582379741,-2.187247861010,-2.182931729101,-2.178633906561,-2.174354316051,
	-2.170092880354,-2.165849522379,-2.161624165159,-2.157416731858,-2.153227145775,
	-2.149055330344,-2.144901209141,-2.140764705881,-2.136645744430,-2.132544248798,
	-2.128460143148,-2.124393351799,-2.120343799223,-2.116311410056,-2.112296109093,
	-2.108297821293,-2.104316471785,-2.100351985864,-2.096404289001,-2.092473306835,
	-2.088558965187,-2.084661190053,-2.080779907611,-2.076915044221,-2.073066526428,
	-2.069234280962,-2.065418234743,-2.061618314882,-2.057834448681,-2.054066563635,
	-2.050314587437,-2.046578447976,-2.042858073339,-2.039153391816,-2.035464331897,
	-2.031790822276,-2.028132791853,-2.024490169735,-2.020862885233,-2.017250867873,
	-2.013654047387,-2.010072353720,-2.006505717030,-2.002954067691,-1.999417336289,
	-1.995895453629,-1.992388350733,-1.988895958840,-1.985418209410,-1.981955034124,
	-1.978506364882,-1.975072133809,-1.971652273253,-1.968246715783,-1.964855394197,
	-1.961478241515,-1.958115190986,-1.954766176084,-1.951431130513,-1.948109988204,
	-1.944802683316,-1.941509150240,-1.938229323596,-1.934963138234,-1.931710529237,
	-1.928471431918,-1.925245781823,-1.922033514731,-1.918834566654,-1.915648873836,
	-1.912476372757,-1.909317000130,-1.906170692902,-1.903037388256,-1.899917023608,
	-1.896809536612,-1.893714865156,-1.890632947364,-1.887563721595,-1.884507126445,
	-1.881463100747,-1.878431583568,-1.875412514214,-1.872405832227,-1.869411477383,
	-1.866429389699,-1.863459509424,-1.860501777048,-1.857556133295,-1.854622519126,
	-1.851700875740,-1.848791144571,-1.845893267290,-1.843007185805,-1.840132842259,
	-1.837270179034,-1.834419138744,-1.831579664243,-1.828751698617,-1.825935185191,
	-1.823130067523,-1.820336289407,-1.817553794872,-1.814782528182,-1.812022433836,
	-1.809273456565,-1.806535541335,-1.803808633348,-1.801092678037,-1.798387621068,
	-1.795693408341,-1.793009985988,-1.790337300372,-1.787675298089,-1.785023925967,
	-1.782383131064,-1.779752860668,-1.777133062299,-1.774523683706,-1.771924672868,
	-1.769335977991,-1.766757547512,-1.764189330096,-1.761631274633,-1.759083330245,
	-1.756545446277,-1.754017572301,-1.751499658117,-1.748991653747,-1.746493509441,
	-1.744005175672,-1.741526603136,-1.739057742755,-1.736598545672,-1.734148963252,
	-1.731708947083,-1.729278448973,-1.726857420953,-1.724445815270,-1.722043584396,
	-1.719650681018,-1.717267058042,-1.714892668594,-1.712527466015,-1.710171403864,
	-1.707824435916,-1.705486516161,-1.703157598805,-1.700837638266,-1.698526589179,
	-1.696224406390,-1.693931044958,-1.691646460153,-1.689370607457,-1.687103442564,
	-1.684844921376,-1.682595000005,-1.680353634771,-1.678120782203,-1.675896399037,
	-1.673680442217,-1.671472868891,-1.669273636413,-1.667082702342,-1.664900024442,
	-1.662725560680,-1.660559269224,-1.658401108447,-1.656251036921,-1.654109013419,
	-1.651974996917,-1.649848946586,-1.647730821799,-1.645620582125,-1.643518187332,
	-1.641423597383,-1.639336772438,-1.637257672852,-1.635186259175,-1.633122492149,
	-1.631066332713,-1.629017741993,-1.626976681312,-1.624943112181,-1.622916996303,
	-1.620898295568,-1.618886972059,-1.616882988043,-1.614886305978,-1.612896888507,
	-1.610914698459,-1.608939698850,-1.606971852878,-1.605011123929,-1.603057475568,
	-1.601110871545,-1.599171275792,-1.597238652420,-1.595312965724,-1.593394180175,
	-1.591482260426,-1.589577171307,-1.587678877824,-1.585787345163,-1.583902538684,
	-1.582024423923,-1.580152966591,-1.578288132574,-1.576429887929,-1.574578198887,
	-1.572733031852,-1.570894353396,-1.569062130265,-1.567236329372,-1.565416917802,
	-1.563603862804,-1.561797131800,-1.559996692375,-1.558202512282,-1.556414559439,
	-1.554632801928,-1.552857207997,-1.551087746056,-1.549324384678,-1.547567092599,
	-1.545815838715,-1.544070592083,-1.542331321920,-1.540597997603,-1.538870588666,
	-1.537149064802,-1.535433395861,-1.533723551849,-1.532019502929,-1.530321219417,
	-1.528628671785,-1.526941830659,-1.525260666816,-1.523585151187,-1.521915254854,
	-1.520250949051,-1.518592205161,-1.516938994717,-1.515291289401,-1.513649061044,
	-1.512012281623,-1.510380923263,-1.508754958235,-1.507134358956,-1.505519097987,
	-1.503909148034,-1.502304481945,-1.500705072714,-1.499110893475,-1.497521917503,
	-1.495938118216,-1.494359469171,-1.492785944064,-1.491217516731,-1.489654161147,
	-1.488095851423,-1.486542561807,-1.484994266686,-1.483450940579,-1.481912558142,
	-1.480379094167,-1.478850523576,-1.477326821428,-1.475807962911,-1.474293923349,
	-1.472784678193,-1.471280203027,-1.469780473566,-1.468285465651,-1.466795155255,
	-1.465309518477,-1.463828531545,-1.462352170814,-1.460880412763,-1.459413233999,
	-1.457950611254,-1.456492521382,-1.455038941364,-1.453589848303,-1.452145219424,
	-1.450705032075,-1.449269263723,-1.447837891960,-1.446410894496,-1.444988249159,
	-1.443569933899,-1.442155926783,-1.440746205995,-1.439340749839,-1.437939536734,
	-1.436542545214,-1.435149753931,-1.433761141649,-1.432376687251,-1.430996369728,
	-1.429620168189,-1.428248061854,-1.426880030055,-1.425516052235,-1.424156107949,
	-1.422800176862,-1.421448238749,-1.420100273495,-1.418756261093,-1.417416181643,
	-1.416080015356,-1.414747742547,-1.413419343639,-1.412094799160,-1.410774089746,
	-1.409457196135,-1.408144099171,-1.406834779802,-1.405529219079,-1.404227398156,
	-1.402929298288,-1.401634900833,-1.400344187252,-1.399057139104,-1.397773738048,
	-1.396493965845,-1.395217804355,-1.393945235534,-1.392676241439,-1.391410804223,
	-1.390148906137,-1.388890529528,-1.387635656841,-1.386384270613,-1.385136353481,
	-1.383891888172,-1.382650857509,-1.381413244411,-1.380179031886,-1.378948203038,
	-1.377720741061,-1.376496629243,-1.375275850961,-1.374058389683,-1.372844228970,
	-1.371633352470,-1.370425743921,-1.369221387150,-1.368020266073,-1.366822364693,
	-1.365627667101,-1.364436157475,-1.363247820080,-1.362062639267,-1.360880599471,
	-1.359701685214,-1.358525881103,-1.357353171827,-1.356183542162,-1.355016976965,
	-1.353853461176,-1.352692979820,-1.351535518001,-1.350381060907,-1.349229593805,
	-1.348081102045,-1.346935571055,-1.345792986346,-1.344653333505,-1.343516598201,
	-1.342382766180,-1.341251823266,-1.340123755363,-1.338998548449,-1.337876188582,
	-1.336756661894,-1.335639954596,-1.334526052973,-1.333414943384,-1.332306612266,
	-1.331201046128,-1.330098231554,-1.328998155203,-1.327900803804,-1.326806164163,
	-1.325714223156,-1.324624967730,-1.323538384908,-1.322454461780,-1.321373185508,
	-1.320294543328,-1.319218522541,-1.318145110521,-1.317074294711,-1.316006062622,
	-1.314940401835,-1.313877300000,-1.312816744832,-1.311758724115,-1.310703225702,
	-1.309650237511,-1.308599747526,-1.307551743798,-1.306506214445,-1.305463147647,
	-1.304422531652,-1.303384354772,-1.302348605383,-1.301315271925,-1.300284342901,
	-1.299255806879,-1.298229652488,-1.297205868421,-1.296184443432,-1.295165366337,
	-1.294148626016,-1.293134211407,-1.292122111510,-1.291112315387,-1.290104812157,
	-1.289099591003,-1.288096641163,-1.287095951939,-1.286097512688,-1.285101312827,
	-1.284107341832,-1.283115589236,-1.282126044629,-1.281138697660,-1.280153538035,
	-1.279170555513,-1.278189739915,-1.277211081114,-1.276234569039,-1.275260193676,
	-1.274287945065,-1.273317813302,-1.272349788536,-1.271383860971,-1.270420020864,
	-1.269458258528,-1.268498564326,-1.267540928676,-1.266585342049,-1.265631794968,
	-1.264680278007,-1.263730781792,-1.262783297003,-1.261837814369,-1.260894324669,
	-1.259952818737,-1.259013287452,-1.258075721747,-1.257140112603,-1.256206451051,
	-1.255274728172,-1.254344935096,-1.253417062999,-1.252491103110,-1.251567046703,
	-1.250644885100,-1.249724609672,-1.248806211838,-1.247889683061,-1.246975014854,
	-1.246062198775,-1.245151226429,-1.244242089466,-1.243334779585,-1.242429288526,
	-1.241525608078,-1.240623730072,-1.239723646388,-1.238825348945,-1.237928829712,
	-1.237034080698,-1.236141093958,-1.235249861589,-1.234360375733,-1.233472628573,
	-1.232586612336,-1.231702319293,-1.230819741755,-1.229938872077,-1.229059702654,
	-1.228182225923,-1.227306434365,-1.226432320499,-1.225559876886,-1.224689096129,
	-1.223819970869,-1.222952493790,-1.222086657613,-1.221222455102,-1.220359879059,
	-1.219498922325,-1.218639577780,-1.217781838344,-1.216925696975,-1.216071146671,
	-1.215218180465,-1.214366791431,-1.213516972680,-1.212668717360,-1.211822018657,
	-1.210976869794,-1.210133264031,-1.209291194666,-1.208450655030,-1.207611638495,
	-1.206774138466,-1.205938148384,-1.205103661728,-1.204270672011,-1.203439172781,
	-1.202609157622,-1.201780620153,-1.200953554026,-1.200127952930,-1.199303810588,
	-1.198481120755,-1.197659877222,-1.196840073813,-1.196021704386,-1.195204762833,
	-1.194389243077,-1.193575139076,-1.192762444821,-1.191951154334,-1.191141261671,
	-1.190332760919,-1.189525646198,-1.188719911660,-1.187915551488,-1.187112559897,
	-1.186310931134,-1.185510659475,-1.184711739231,-1.183914164739,-1.183117930370,
	-1.182323030525,-1.181529459635,-1.180737212160,-1.179946282591,-1.179156665450,
	-1.178368355287,-1.177581346682,-1.176795634244,-1.176011212611,-1.175228076451,
	-1.174446220461,-1.173665639364,-1.172886327914,-1.172108280893,-1.171331493111,
	-1.170555959405,-1.169781674641,-1.169008633712,-1.168236831540,-1.167466263072,
	-1.166696923283,-1.165928807177,-1.165161909783,-1.164396226156,-1.163631751380,
	-1.162868480564,-1.162106408843,-1.161345531379,-1.160585843359,-1.159827339997,
	-1.159070016533,-1.158313868230,-1.157558890380,-1.156805078297,-1.156052427323,
	-1.155300932822,-1.154550590186,-1.153801394828,-1.153053342190,-1.152306427735,
	-1.151560646951,-1.150815995352,-1.150072468472,-1.149330061874,-1.148588771140,
	-1.147848591880,-1.147109519723,-1.146371550325,-1.145634679363,-1.144898902538,
	-1.144164215573,-1.143430614216,-1.142698094235,-1.141966651423,-1.141236281593,
	-1.140506980582,-1.139778744248,-1.139051568473,-1.138325449159,-1.137600382229,
	-1.136876363631,-1.136153389332,-1.135431455321,-1.134710557607,-1.133990692224,
	-1.133271855222,-1.132554042677,-1.131837250681,-1.131121475350,-1.130406712819,
	-1.129692959245,-1.128980210804,-1.128268463693,-1.127557714127,-1.126847958345,
	-1.126139192602,-1.125431413176,-1.124724616361,-1.124018798474,-1.123313955850,
	-1.122610084844,-1.121907181827,-1.121205243195,-1.120504265358,-1.119804244746,
	-1.119105177810,-1.118407061017,-1.117709890854,-1.117013663826,-1.116318376457,
	-1.115624025288,-1.114930606879,-1.114238117809,-1.113546554673,-1.112855914084,
	-1.112166192675,-1.111477387095,-1.110789494010,-1.110102510105,-1.109416432080,
	-1.108731256655,-1.108046980565,-1.107363600564,-1.106681113422,-1.105999515925,
	-1.105318804876,-1.104638977096,-1.103960029422,-1.103281958707,-1.102604761820,
	-1.101928435648,-1.101252977092,-1.100578383072,-1.099904650520,-1.099231776388,
	-1.098559757641,-1.097888591262,-1.097218274247,-1.096548803609,-1.095880176378,
	-1.095212389597,-1.094545440325,-1.093879325636,-1.093214042621,-1.092549588383,
	-1.091885960043,-1.091223154734,-1.090561169606,-1.089900001824,-1.089239648564,
	-1.088580107022,-1.087921374403,-1.087263447930,-1.086606324840,-1.085950002383,
	-1.085294477823,-1.084639748439,-1.083985811523,-1.083332664383,-1.082680304338,
	-1.082028728724,-1.081377934886,-1.080727920187,-1.080078682002,-1.079430217719,
	-1.078782524739,-1.078135600478,-1.077489442364,-1.076844047837,-1.076199414352,
	-1.075555539377,-1.074912420392,-1.074270054890,-1.073628440376,-1.072987574369,
	-1.072347454401,-1.071708078014,-1.071069442766,-1.070431546224,-1.069794385970,
	-1.069157959597,-1.068522264710,-1.067887298927,-1.067253059877,-1.066619545202,
	-1.065986752555,-1.065354679602,-1.064723324020,-1.064092683498,-1.063462755736,
	-1.062833538447,-1.062205029354,-1.061577226192,-1.060950126709,-1.060323728661,
	-1.059698029818,-1.059073027960,-1.058448720879,-1.057825106378,-1.057202182269,
	-1.056579946379,-1.055958396541,-1.055337530603,-1.054717346421,-1.054097841864,
	-1.053479014809,-1.052860863146,-1.052243384775,-1.051626577605,-1.051010439557,
	-1.050394968562,-1.049780162561,-1.049166019505,-1.048552537356,-1.047939714086,
	-1.047327547676,-1.046716036119,-1.046105177416,-1.045494969578,-1.044885410627,
	-1.044276498595,-1.043668231523,-1.043060607460,-1.042453624469,-1.041847280618,
	-1.041241573987,-1.040636502664,-1.040032064749,-1.039428258350,-1.038825081582,
	-1.038222532572,-1.037620609456,-1.037019310378,-1.036418633493,-1.035818576963,
	-1.035219138959,-1.034620317663,-1.034022111264,-1.033424517960,-1.032827535960,
	-1.032231163479,-1.031635398741,-1.031040239981,-1.030445685440,-1.029851733369,
	-1.029258382028,-1.028665629682,-1.028073474610,-1.027481915095,-1.026890949429,
	-1.026300575914,-1.025710792859,-1.025121598582,-1.024532991407,-1.023944969669,
	-1.023357531709,-1.022770675878,-1.022184400532,-1.021598704037,-1.021013584767,
	-1.020429041103,-1.019845071434,-1.019261674157,-1.018678847677,-1.018096590405,
	-1.017514900762,-1.016933777175,-1.016353218078,-1.015773221915,-1.015193787135,
	-1.014614912195,-1.014036595560,-1.013458835702,-1.012881631100,-1.012304980241,
	-1.011728881618,-1.011153333732,-1.010578335091,-1.010003884211,-1.009429979613,
	-1.008856619827,-1.008283803388,-1.007711528839,-1.007139794732,-1.006568599621,
	-1.005997942072,-1.005427820653,-1.004858233943,-1.004289180526,-1.003720658991,
	-1.003152667935,-1.002585205964,-1.002018271686,-1.001451863719,-1.000885980686,
	-1.000320621216,-0.999755783946,-0.999191467519,-0.998627670582,-0.998064391792,
	-0.997501629810,-0.996939383304,-0.996377650947,-0.995816431420,-0.995255723408,
	-0.994695525605,-0.994135836708,-0.993576655422,-0.993017980458,-0.992459810531,
	-0.991902144365,-0.991344980687,-0.990788318232,-0.990232155740,-0.989676491956,
	-0.989121325632,-0.988566655526,-0.988012480400,-0.987458799023,-0.986905610170,
	-0.986352912620,-0.985800705160,-0.985248986580,-0.984697755677,-0.984147011253,
	-0.983596752117,-0.983046977080,-0.982497684962,-0.981948874587,-0.981400544784,
	-0.980852694387,-0.980305322236,-0.979758427177,-0.979212008060,-0.978666063740,
	-0.978120593078,-0.977575594941,-0.977031068199,-0.976487011729,-0.975943424412,
	-0.975400305133,-0.974857652785,-0.974315466263,-0.973773744470,-0.973232486310,
	-0.972691690696,-0.972151356543,-0.971611482771,-0.971072068308,-0.970533112082,
	-0.969994613030,-0.969456570092,-0.968918982211,-0.968381848338,-0.967845167426,
	-0.967308938435,-0.966773160328,-0.966237832072,-0.965702952640,-0.965168521010,
	-0.964634536163,-0.964100997085,-0.963567902766,-0.963035252203,-0.962503044393,
	-0.961971278341,-0.961439953056,-0.960909067550,-0.960378620840,-0.959848611947,
	-0.959319039897,-0.958789903719,-0.958261202448,-0.957732935123,-0.957205100784,
	-0.956677698480,-0.956150727261,-0.955624186181,-0.955098074301,-0.954572390682,
	-0.954047134393,-0.953522304505,-0.952997900092,-0.952473920234,-0.951950364015,
	-0.951427230522,-0.950904518845,-0.950382228080,-0.949860357325,-0.949338905684,
	-0.948817872264,-0.948297256174,-0.947777056529,-0.947257272447,-0.946737903051,
	-0.946218947465,-0.945700404819,-0.945182274247,-0.944664554884,-0.944147245872,
	-0.943630346355,-0.943113855480,-0.942597772398,-0.942082096265,-0.941566826240,
	-0.941051961483,-0.940537501161,-0.940023444444,-0.939509790503,-0.938996538514,
	-0.938483687659,-0.937971237118,-0.937459186080,-0.936947533733,-0.936436279272,
	-0.935925421892,-0.935414960794,-0.934904895181,-0.934395224260,-0.933885947240,
	-0.933377063336,-0.932868571763,-0.932360471742,-0.931852762495,-0.931345443248,
	-0.930838513232,-0.930331971678,-0.929825817823,-0.929320050906,-0.928814670167,
	-0.928309674854,-0.927805064214,-0.927300837498,-0.926796993961,-0.926293532860,
	-0.925790453456,-0.925287755013,-0.924785436797,-0.924283498078,-0.923781938128,
	-0.923280756223,-0.922779951642,-0.922279523664,-0.921779471576,-0.921279794664,
	-0.920780492218,-0.920281563532,-0.919783007900,-0.919284824622,-0.918787013000,
	-0.918289572336,-0.917792501939,-0.917295801119,-0.916799469187,-0.916303505460,
	-0.915807909256,-0.915312679894,-0.914817816700,-0.914323318999,-0.913829186120,
	-0.913335417394,-0.912842012157,-0.912348969744,-0.911856289495,-0.911363970753,
	-0.910872012863,-0.910380415170,-0.909889177027,-0.909398297784,-0.908907776797,
	-0.908417613423,-0.907927807023,-0.907438356959,-0.906949262596,-0.906460523302,
	-0.905972138447,-0.905484107403,-0.904996429544,-0.904509104250,-0.904022130898,
	-0.903535508872,-0.903049237556,-0.902563316337,-0.902077744604,-0.901592521749,
	-0.901107647166,-0.900623120251,-0.900138940404,-0.899655107024,-0.899171619516,
	-0.898688477285,-0.898205679739,-0.897723226288,-0.897241116344,-0.896759349322,
	-0.896277924639,-0.895796841713,-0.895316099967,-0.894835698824,-0.894355637709,
	-0.893875916051,-0.893396533278,-0.892917488824,-0.892438782123,-0.891960412610,
	-0.891482379726,-0.891004682909,-0.890527321604,-0.890050295255,-0.889573603309,
	-0.889097245214,-0.888621220423,-0.888145528388,-0.887670168563,-0.887195140408,
	-0.886720443379,-0.886246076940,-0.885772040552,-0.885298333682,-0.884824955795,
	-0.884351906362,-0.883879184854,-0.883406790743,-0.882934723504,-0.882462982615,
	-0.881991567553,-0.881520477801,-0.881049712840,-0.880579272154,-0.880109155232,
	-0.879639361559,-0.879169890627,-0.878700741928,-0.878231914956,-0.877763409205,
	-0.877295224174,-0.876827359361,-0.876359814269,-0.875892588399,-0.875425681257,
	-0.874959092349,-0.874492821182,-0.874026867268,-0.873561230118,-0.873095909245,
	-0.872630904165,-0.872166214394,-0.871701839451,-0.871237778857,-0.870774032134,
	-0.870310598805,-0.869847478396,-0.869384670434,-0.868922174448,-0.868459989968,
	-0.867998116527,-0.867536553658,-0.867075300897,-0.866614357781,-0.866153723847,
	-0.865693398638,-0.865233381694,-0.864773672559,-0.864314270778,-0.863855175898,
	-0.863396387467,-0.862937905035,-0.862479728153,-0.862021856374,-0.861564289252,
	-0.861107026344,-0.860650067207,-0.860193411399,-0.859737058483,-0.859281008019,
	-0.858825259571,-0.858369812704,-0.857914666986,-0.857459821983,-0.857005277265,
	-0.856551032403,-0.856097086971,-0.855643440540,-0.855190092688,-0.854737042990,
	-0.854284291024,-0.853831836371,-0.853379678611,-0.852927817327,-0.852476252103,
	-0.852024982523,-0.851574008174,-0.851123328645,-0.850672943524,-0.850222852403,
	-0.849773054873,-0.849323550528,-0.848874338963,-0.848425419774,-0.847976792558,
	-0.847528456914,-0.847080412442,-0.846632658744,-0.846185195422,-0.845738022081,
	-0.845291138325,-0.844844543762,-0.844398238000,-0.843952220647,-0.843506491314,
	-0.843061049613,-0.842615895157,-0.842171027560,-0.841726446437,-0.841282151407,
	-0.840838142085,-0.840394418093,-0.839950979049,-0.839507824577,-0.839064954298,
	-0.838622367837,-0.838180064819,-0.837738044872,-0.837296307621,-0.836854852697,
	-0.836413679729,-0.835972788350,-0.835532178190,-0.835091848884,-0.834651800066,
	-0.834212031373,-0.833772542441,-0.833333332909
	}
};

double always_inline c01_stage1clip(double x) {
    double f = fabs(x);
    f = f * c01_stage1_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = c01_stage1_table.data[0];
    } else if (i >= c01_stage1_table.size-1) {
        f = c01_stage1_table.data[c01_stage1_table.size-1];
    } else {
        f -= i;
        f = c01_stage1_table.data[i]*(1-f) + c01_stage1_table.data[i+1]*f;
    }
    return copysign(f, x);
}

