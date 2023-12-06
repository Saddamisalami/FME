#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameZ1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 342052:
    {
        returnValue = F("Z-Weg");
        break;
    }
    case 342053:
    {
        returnValue = F("ZBE FBB");
        break;
    }
    case 342054:
    {
        returnValue = F("ZG-Str.");
        break;
    }
    case 342055:
    {
        returnValue = F("ZOB 2 (nur Ausstieg)");
        break;
    }
    case 342056:
    {
        returnValue = F("ZOB Burgstr.");
        break;
    }
    case 342057:
    {
        returnValue = F("ZOB Otterndorf 1");
        break;
    }
    case 342058:
    {
        returnValue = F("ZOB Otterndorf 3");
        break;
    }
    case 342059:
    {
        returnValue = F("ZOB Otterndorf 4");
        break;
    }
    case 342060:
    {
        returnValue = F("ZOB Otterndorf 5");
        break;
    }
    case 342061:
    {
        returnValue = F("ZOB Otterndorf 6");
        break;
    }
    case 342062:
    {
        returnValue = F("ZOB Otterndorf 7");
        break;
    }
    case 342063:
    {
        returnValue = F("ZOB Otterndorf 8");
        break;
    }
    case 342064:
    {
        returnValue = F("ZOB Otterndorf 9");
        break;
    }
    case 342065:
    {
        returnValue = F("ZOB/Bahnhof (Steig 10)");
        break;
    }
    case 342066:
    {
        returnValue = F("ZOOM Erlebniswelt Afrika");
        break;
    }
    case 342067:
    {
        returnValue = F("ZOOM Erlebniswelt Alaska");
        break;
    }
    case 342068:
    {
        returnValue = F("ZOOM Erlebniswelt Asien");
        break;
    }
    case 342069:
    {
        returnValue = F("ZOOM Erlebniswelt Grimberger Hof");
        break;
    }
    case 342070:
    {
        returnValue = F("Zaacko");
        break;
    }
    case 342071:
    {
        returnValue = F("Zaackoer Weg");
        break;
    }
    case 342072:
    {
        returnValue = F("Zaanstader Str.");
        break;
    }
    case 342073:
    {
        returnValue = F("Zaascher Str.");
        break;
    }
    case 342074:
    {
        returnValue = F("Zaascher Weg");
        break;
    }
    case 342075:
    {
        returnValue = F("Zaatzker Chaussee");
        break;
    }
    case 342076:
    {
        returnValue = F("Zaatzker Dorfstr.");
        break;
    }
    case 342077:
    {
        returnValue = F("Zaatzker Str.");
        break;
    }
    case 342078:
    {
        returnValue = F("Zaatzker Weg");
        break;
    }
    case 342079:
    {
        returnValue = F("Zaballig");
        break;
    }
    case 342080:
    {
        returnValue = F("Zabelsbergpromenade");
        break;
    }
    case 342081:
    {
        returnValue = F("Zabelsdorfer Birkenweg");
        break;
    }
    case 342082:
    {
        returnValue = F("Zabelsdorfer Chaussee");
        break;
    }
    case 342083:
    {
        returnValue = F("Zabelsdorfer Dorfstr.");
        break;
    }
    case 342084:
    {
        returnValue = F("Zabelsdorfer Kiefernweg");
        break;
    }
    case 342085:
    {
        returnValue = F("Zabelsdorfer Lindenweg");
        break;
    }
    case 342086:
    {
        returnValue = F("Zabelsdorfer Str.");
        break;
    }
    case 342087:
    {
        returnValue = F("Zabelsdorfer Tannenweg");
        break;
    }
    case 342088:
    {
        returnValue = F("Zabelsteinstr.");
        break;
    }
    case 342089:
    {
        returnValue = F("Zabelstr.");
        break;
    }
    case 342090:
    {
        returnValue = F("Zabeltitzer Str.");
        break;
    }
    case 342091:
    {
        returnValue = F("Zabelweg");
        break;
    }
    case 342092:
    {
        returnValue = F("Zabenstedter Chaussee");
        break;
    }
    case 342093:
    {
        returnValue = F("Zabenstedter Str.");
        break;
    }
    case 342094:
    {
        returnValue = F("Zabenstedter Weg");
        break;
    }
    case 342095:
    {
        returnValue = F("Zaberfelder Str.");
        break;
    }
    case 342096:
    {
        returnValue = F("Zaberfelder Weg");
        break;
    }
    case 342097:
    {
        returnValue = F("Zabergäu");
        break;
    }
    case 342098:
    {
        returnValue = F("Zabergäustr.");
        break;
    }
    case 342099:
    {
        returnValue = F("Zabergäuweg");
        break;
    }
    case 342100:
    {
        returnValue = F("Zaberhaldestr.");
        break;
    }
    case 342101:
    {
        returnValue = F("Zaberner Str.");
        break;
    }
    case 342102:
    {
        returnValue = F("Zabernstr.");
        break;
    }
    case 342103:
    {
        returnValue = F("Zabershöfer Weg");
        break;
    }
    case 342104:
    {
        returnValue = F("Zaberstr.");
        break;
    }
    case 342105:
    {
        returnValue = F("Zaberweg");
        break;
    }
    case 342106:
    {
        returnValue = F("Zabitzer Chaussee");
        break;
    }
    case 342107:
    {
        returnValue = F("Zabitzer Str.");
        break;
    }
    case 342108:
    {
        returnValue = F("Zabnoer Str.");
        break;
    }
    case 342109:
    {
        returnValue = F("Zabo-Kreisel");
        break;
    }
    case 342110:
    {
        returnValue = F("Zachariae");
        break;
    }
    case 342111:
    {
        returnValue = F("Zachariaestr.");
        break;
    }
    case 342112:
    {
        returnValue = F("Zacharias-Becker-Str.");
        break;
    }
    case 342113:
    {
        returnValue = F("Zacharias-Frank-Str.");
        break;
    }
    case 342114:
    {
        returnValue = F("Zacharias-Hildebrandt-Str.");
        break;
    }
    case 342115:
    {
        returnValue = F("Zacharias-Junker-Str.");
        break;
    }
    case 342116:
    {
        returnValue = F("Zacharias-Kempe-Eck");
        break;
    }
    case 342117:
    {
        returnValue = F("Zacharias-Kresse-Hof");
        break;
    }
    case 342118:
    {
        returnValue = F("Zacharias-Kresse-Str.");
        break;
    }
    case 342119:
    {
        returnValue = F("Zacharias-Löbbecke-Str.");
        break;
    }
    case 342120:
    {
        returnValue = F("Zacharias-Manz-Weg");
        break;
    }
    case 342121:
    {
        returnValue = F("Zacharias-Rosbach-Weg");
        break;
    }
    case 342122:
    {
        returnValue = F("Zacharias-Spier-Str.");
        break;
    }
    case 342123:
    {
        returnValue = F("Zacharias-Werner-Str.");
        break;
    }
    case 342124:
    {
        returnValue = F("Zachariasstr.");
        break;
    }
    case 342125:
    {
        returnValue = F("Zachauskamp");
        break;
    }
    case 342126:
    {
        returnValue = F("Zachenberger Str.");
        break;
    }
    case 342127:
    {
        returnValue = F("Zachenbügerlweg");
        break;
    }
    case 342128:
    {
        returnValue = F("Zachengrundring");
        break;
    }
    case 342129:
    {
        returnValue = F("Zachenried");
        break;
    }
    case 342130:
    {
        returnValue = F("Zachenweg");
        break;
    }
    case 342131:
    {
        returnValue = F("Zachenöd");
        break;
    }
    case 342132:
    {
        returnValue = F("Zachergässle");
        break;
    }
    case 342133:
    {
        returnValue = F("Zacherhöhe");
        break;
    }
    case 342134:
    {
        returnValue = F("Zacherl-Geräumt");
        break;
    }
    case 342135:
    {
        returnValue = F("Zacherlgasse");
        break;
    }
    case 342136:
    {
        returnValue = F("Zacherlmühle");
        break;
    }
    case 342137:
    {
        returnValue = F("Zacherlstr.");
        break;
    }
    case 342138:
    {
        returnValue = F("Zacherlweg");
        break;
    }
    case 342139:
    {
        returnValue = F("Zacherlwimm");
        break;
    }
    case 342140:
    {
        returnValue = F("Zachermättleweg");
        break;
    }
    case 342141:
    {
        returnValue = F("Zachersdorfer Str.");
        break;
    }
    case 342142:
    {
        returnValue = F("Zachersdorfstr.");
        break;
    }
    case 342143:
    {
        returnValue = F("Zachersklingenstr.");
        break;
    }
    case 342144:
    {
        returnValue = F("Zachersweg");
        break;
    }
    case 342145:
    {
        returnValue = F("Zacherweg");
        break;
    }
    case 342146:
    {
        returnValue = F("Zachmannstr.");
        break;
    }
    case 342147:
    {
        returnValue = F("Zachow");
        break;
    }
    case 342148:
    {
        returnValue = F("Zachower Feldstr.");
        break;
    }
    case 342149:
    {
        returnValue = F("Zachower Havelweg");
        break;
    }
    case 342150:
    {
        returnValue = F("Zachower Str.");
        break;
    }
    case 342151:
    {
        returnValue = F("Zachowstr.");
        break;
    }
    case 342152:
    {
        returnValue = F("Zackelbergstr.");
        break;
    }
    case 342153:
    {
        returnValue = F("Zackenhagen");
        break;
    }
    case 342154:
    {
        returnValue = F("Zacking");
        break;
    }
    case 342155:
    {
        returnValue = F("Zackmünde");
        break;
    }
    case 342156:
    {
        returnValue = F("Zackmünder Str.");
        break;
    }
    case 342157:
    {
        returnValue = F("Zackmünder Weg");
        break;
    }
    case 342158:
    {
        returnValue = F("Zacksteige");
        break;
    }
    case 342159:
    {
        returnValue = F("Zadelsdorf");
        break;
    }
    case 342160:
    {
        returnValue = F("Zaderastr.");
        break;
    }
    case 342161:
    {
        returnValue = F("Zaderfeldstr.");
        break;
    }
    case 342162:
    {
        returnValue = F("Zaderlehde");
        break;
    }
    case 342163:
    {
        returnValue = F("Zadestr.");
        break;
    }
    case 342164:
    {
        returnValue = F("Zadlerstr.");
        break;
    }
    case 342165:
    {
        returnValue = F("Zagelsdorf");
        break;
    }
    case 342166:
    {
        returnValue = F("Zagelsdorfer Damm");
        break;
    }
    case 342167:
    {
        returnValue = F("Zagelstr.");
        break;
    }
    case 342168:
    {
        returnValue = F("Zagelweg");
        break;
    }
    case 342169:
    {
        returnValue = F("Zaglau");
        break;
    }
    case 342170:
    {
        returnValue = F("Zahlbacher Steig");
        break;
    }
    case 342171:
    {
        returnValue = F("Zahlenstr.");
        break;
    }
    case 342172:
    {
        returnValue = F("Zahlfeldstr.");
        break;
    }
    case 342173:
    {
        returnValue = F("Zahlgasse");
        break;
    }
    case 342174:
    {
        returnValue = F("Zahlinger Str.");
        break;
    }
    case 342175:
    {
        returnValue = F("Zahlinger Weg");
        break;
    }
    case 342176:
    {
        returnValue = F("Zahlweg");
        break;
    }
    case 342177:
    {
        returnValue = F("Zahlweingarten");
        break;
    }
    case 342178:
    {
        returnValue = F("Zahmener Str.");
        break;
    }
    case 342179:
    {
        returnValue = F("Zahmer Grübleweg");
        break;
    }
    case 342180:
    {
        returnValue = F("Zahmer Kauder");
        break;
    }
    case 342181:
    {
        returnValue = F("Zahn-Nopper-Str.");
        break;
    }
    case 342182:
    {
        returnValue = F("Zahnaer Gartenstr.");
        break;
    }
    case 342183:
    {
        returnValue = F("Zahnaer Landstr.");
        break;
    }
    case 342184:
    {
        returnValue = F("Zahnaer Str.");
        break;
    }
    case 342185:
    {
        returnValue = F("Zahnaer Waldweg");
        break;
    }
    case 342186:
    {
        returnValue = F("Zahnbergweg");
        break;
    }
    case 342187:
    {
        returnValue = F("Zahnengartenstr.");
        break;
    }
    case 342188:
    {
        returnValue = F("Zahngasse");
        break;
    }
    case 342189:
    {
        returnValue = F("Zahnkäppeleweg");
        break;
    }
    case 342190:
    {
        returnValue = F("Zahnleitnerstr.");
        break;
    }
    case 342191:
    {
        returnValue = F("Zahnrad");
        break;
    }
    case 342192:
    {
        returnValue = F("Zahnradbahnweg");
        break;
    }
    case 342193:
    {
        returnValue = F("Zahnsberg");
        break;
    }
    case 342194:
    {
        returnValue = F("Zahnsgrund");
        break;
    }
    case 342195:
    {
        returnValue = F("Zahnstr.");
        break;
    }
    case 342196:
    {
        returnValue = F("Zahrener Str.");
        break;
    }
    case 342197:
    {
        returnValue = F("Zahrenholzer Str.");
        break;
    }
    case 342198:
    {
        returnValue = F("Zahrenholzer Weg");
        break;
    }
    case 342199:
    {
        returnValue = F("Zahrenhusenstr.");
        break;
    }
    case 342200:
    {
        returnValue = F("Zahrenhusenweg");
        break;
    }
    case 342201:
    {
        returnValue = F("Zahrenkamp");
        break;
    }
    case 342202:
    {
        returnValue = F("Zahrensdorfer Weg");
        break;
    }
    case 342203:
    {
        returnValue = F("Zahrenser Weg");
        break;
    }
    case 342204:
    {
        returnValue = F("Zahsower Str.");
        break;
    }
    case 342205:
    {
        returnValue = F("Zahsower Weg");
        break;
    }
    case 342206:
    {
        returnValue = F("Zain");
        break;
    }
    case 342207:
    {
        returnValue = F("Zainenerweg");
        break;
    }
    case 342208:
    {
        returnValue = F("Zainerstr.");
        break;
    }
    case 342209:
    {
        returnValue = F("Zainerweg");
        break;
    }
    case 342210:
    {
        returnValue = F("Zainestr.");
        break;
    }
    case 342211:
    {
        returnValue = F("Zainhammer");
        break;
    }
    case 342212:
    {
        returnValue = F("Zainhammerstr.");
        break;
    }
    case 342213:
    {
        returnValue = F("Zainhammerweg");
        break;
    }
    case 342214:
    {
        returnValue = F("Zaininger Steige");
        break;
    }
    case 342215:
    {
        returnValue = F("Zaininger Str.");
        break;
    }
    case 342216:
    {
        returnValue = F("Zaininger Weg");
        break;
    }
    case 342217:
    {
        returnValue = F("Zainingerstr.");
        break;
    }
    case 342218:
    {
        returnValue = F("Zainschmiedeweg");
        break;
    }
    case 342219:
    {
        returnValue = F("Zainweg");
        break;
    }
    case 342220:
    {
        returnValue = F("Zaiselgasse");
        break;
    }
    case 342221:
    {
        returnValue = F("Zaisenhäuser Weg");
        break;
    }
    case 342222:
    {
        returnValue = F("Zaisenmühlstr.");
        break;
    }
    case 342223:
    {
        returnValue = F("Zaisental");
        break;
    }
    case 342224:
    {
        returnValue = F("Zaisentalstr.");
        break;
    }
    case 342225:
    {
        returnValue = F("Zaisenweg");
        break;
    }
    case 342226:
    {
        returnValue = F("Zaisersweiher Str.");
        break;
    }
    case 342227:
    {
        returnValue = F("Zaisersweiherstr.");
        break;
    }
    case 342228:
    {
        returnValue = F("Zaisersweiherweg");
        break;
    }
    case 342229:
    {
        returnValue = F("Zaisertshofener Str.");
        break;
    }
    case 342230:
    {
        returnValue = F("Zaisgasse");
        break;
    }
    case 342231:
    {
        returnValue = F("Zaisholfstr.");
        break;
    }
    case 342232:
    {
        returnValue = F("Zaislenweg");
        break;
    }
    case 342233:
    {
        returnValue = F("Zaitzkofen");
        break;
    }
    case 342234:
    {
        returnValue = F("Zaitzkofener Str.");
        break;
    }
    case 342235:
    {
        returnValue = F("Zaißinger Weg");
        break;
    }
    case 342236:
    {
        returnValue = F("Zalaweg");
        break;
    }
    case 342237:
    {
        returnValue = F("Zalfenstr.");
        break;
    }
    case 342238:
    {
        returnValue = F("Zalingerstr.");
        break;
    }
    case 342239:
    {
        returnValue = F("Zallmsdorf");
        break;
    }
    case 342240:
    {
        returnValue = F("Zallmsdorfer Str.");
        break;
    }
    case 342241:
    {
        returnValue = F("Zaltbommeler Str.");
        break;
    }
    case 342242:
    {
        returnValue = F("Zambellistr.");
        break;
    }
    case 342243:
    {
        returnValue = F("Zamboninistr.");
        break;
    }
    case 342244:
    {
        returnValue = F("Zamborstr.");
        break;
    }
    case 342245:
    {
        returnValue = F("Zamdorfer Str.");
        break;
    }
    case 342246:
    {
        returnValue = F("Zamenhof");
        break;
    }
    case 342247:
    {
        returnValue = F("Zamenhofstr.");
        break;
    }
    case 342248:
    {
        returnValue = F("Zamenhofweg");
        break;
    }
    case 342249:
    {
        returnValue = F("Zamescheid");
        break;
    }
    case 342250:
    {
        returnValue = F("Zametzer Steig");
        break;
    }
    case 342251:
    {
        returnValue = F("Zamilapark");
        break;
    }
    case 342252:
    {
        returnValue = F("Zamminerschneise");
        break;
    }
    case 342253:
    {
        returnValue = F("Zamosc-Weg");
        break;
    }
    case 342254:
    {
        returnValue = F("Zamośćer Str.");
        break;
    }
    case 342255:
    {
        returnValue = F("Zamárdi Str.");
        break;
    }
    case 342256:
    {
        returnValue = F("Zand");
        break;
    }
    case 342257:
    {
        returnValue = F("Zander'sche Koppel");
        break;
    }
    case 342258:
    {
        returnValue = F("Zanderbogen");
        break;
    }
    case 342259:
    {
        returnValue = F("Zandergasse");
        break;
    }
    case 342260:
    {
        returnValue = F("Zandershäger Weg");
        break;
    }
    case 342261:
    {
        returnValue = F("Zandershöfe");
        break;
    }
    case 342262:
    {
        returnValue = F("Zandersstr.");
        break;
    }
    case 342263:
    {
        returnValue = F("Zanderstieg");
        break;
    }
    case 342264:
    {
        returnValue = F("Zanderstr.");
        break;
    }
    case 342265:
    {
        returnValue = F("Zandersweg");
        break;
    }
    case 342266:
    {
        returnValue = F("Zanderweg");
        break;
    }
    case 342267:
    {
        returnValue = F("Zanderwinkel");
        break;
    }
    case 342268:
    {
        returnValue = F("Zandirgasse");
        break;
    }
    case 342269:
    {
        returnValue = F("Zandtengasse");
        break;
    }
    case 342270:
    {
        returnValue = F("Zandter Steig");
        break;
    }
    case 342271:
    {
        returnValue = F("Zandter Str.");
        break;
    }
    case 342272:
    {
        returnValue = F("Zandtstr.");
        break;
    }
    case 342273:
    {
        returnValue = F("Zanellastr.");
        break;
    }
    case 342274:
    {
        returnValue = F("Zangberger Str.");
        break;
    }
    case 342275:
    {
        returnValue = F("Zange");
        break;
    }
    case 342276:
    {
        returnValue = F("Zangellucken-Geräumt");
        break;
    }
    case 342277:
    {
        returnValue = F("Zangenbachweg");
        break;
    }
    case 342278:
    {
        returnValue = F("Zangenbergerweg");
        break;
    }
    case 342279:
    {
        returnValue = F("Zangenborn");
        break;
    }
    case 342280:
    {
        returnValue = F("Zangenhalde");
        break;
    }
    case 342281:
    {
        returnValue = F("Zangenstr.");
        break;
    }
    case 342282:
    {
        returnValue = F("Zanger Hauptstr.");
        break;
    }
    case 342283:
    {
        returnValue = F("Zanger Str.");
        break;
    }
    case 342284:
    {
        returnValue = F("Zanger Weg");
        break;
    }
    case 342285:
    {
        returnValue = F("Zangerbergweg");
        break;
    }
    case 342286:
    {
        returnValue = F("Zangererstr.");
        break;
    }
    case 342287:
    {
        returnValue = F("Zangerstr.");
        break;
    }
    case 342288:
    {
        returnValue = F("Zangersträßle");
        break;
    }
    case 342289:
    {
        returnValue = F("Zangeweg");
        break;
    }
    case 342290:
    {
        returnValue = F("Zanggasse");
        break;
    }
    case 342291:
    {
        returnValue = F("Zangler");
        break;
    }
    case 342292:
    {
        returnValue = F("Zangmeisterstr.");
        break;
    }
    case 342293:
    {
        returnValue = F("Zangstr.");
        break;
    }
    case 342294:
    {
        returnValue = F("Zank-Gericke-Weg");
        break;
    }
    case 342295:
    {
        returnValue = F("Zankenburg");
        break;
    }
    case 342296:
    {
        returnValue = F("Zankendorf");
        break;
    }
    case 342297:
    {
        returnValue = F("Zankenfeld");
        break;
    }
    case 342298:
    {
        returnValue = F("Zankenhausener Str.");
        break;
    }
    case 342299:
    {
        returnValue = F("Zankenhauser Str.");
        break;
    }
    case 342300:
    {
        returnValue = F("Zankenlohstr.");
        break;
    }
    case 342301:
    {
        returnValue = F("Zankerbrücke");
        break;
    }
    case 342302:
    {
        returnValue = F("Zankergasse");
        break;
    }
    case 342303:
    {
        returnValue = F("Zankerstr.");
        break;
    }
    case 342304:
    {
        returnValue = F("Zankerweg");
        break;
    }
    case 342305:
    {
        returnValue = F("Zankerwiesen");
        break;
    }
    case 342306:
    {
        returnValue = F("Zankhofweg");
        break;
    }
    case 342307:
    {
        returnValue = F("Zankholzweg");
        break;
    }
    case 342308:
    {
        returnValue = F("Zankhölzleweg");
        break;
    }
    case 342309:
    {
        returnValue = F("Zanklgartenstr.");
        break;
    }
    case 342310:
    {
        returnValue = F("Zanklweg");
        break;
    }
    case 342311:
    {
        returnValue = F("Zankwaldweg");
        break;
    }
    case 342312:
    {
        returnValue = F("Zankweg");
        break;
    }
    case 342313:
    {
        returnValue = F("Zankwiesenweg");
        break;
    }
    case 342314:
    {
        returnValue = F("Zanotelliweg");
        break;
    }
    case 342315:
    {
        returnValue = F("Zansebuhrer Chaussee");
        break;
    }
    case 342316:
    {
        returnValue = F("Zant");
        break;
    }
    case 342317:
    {
        returnValue = F("Zanterbachstr.");
        break;
    }
    case 342318:
    {
        returnValue = F("Zanthiersgarten");
        break;
    }
    case 342319:
    {
        returnValue = F("Zapeler Weg");
        break;
    }
    case 342320:
    {
        returnValue = F("Zapfenbahn");
        break;
    }
    case 342321:
    {
        returnValue = F("Zapfendorfer Str.");
        break;
    }
    case 342322:
    {
        returnValue = F("Zapfendorfstr.");
        break;
    }
    case 342323:
    {
        returnValue = F("Zapfengasse");
        break;
    }
    case 342324:
    {
        returnValue = F("Zapfenleite");
        break;
    }
    case 342325:
    {
        returnValue = F("Zapfenried");
        break;
    }
    case 342326:
    {
        returnValue = F("Zapfenstr.");
        break;
    }
    case 342327:
    {
        returnValue = F("Zapfenweg");
        break;
    }
    case 342328:
    {
        returnValue = F("Zapfenzug");
        break;
    }
    case 342329:
    {
        returnValue = F("Zapfenäckerstr.");
        break;
    }
    case 342330:
    {
        returnValue = F("Zapfeweg");
        break;
    }
    case 342331:
    {
        returnValue = F("Zapfholzweg");
        break;
    }
    case 342332:
    {
        returnValue = F("Zapflweg");
        break;
    }
    case 342333:
    {
        returnValue = F("Zapfweg");
        break;
    }
    case 342334:
    {
        returnValue = F("Zapkendorf");
        break;
    }
    case 342335:
    {
        returnValue = F("Zappenburg");
        break;
    }
    case 342336:
    {
        returnValue = F("Zappendorfer Feldstr.");
        break;
    }
    case 342337:
    {
        returnValue = F("Zappenweg");
        break;
    }
    case 342338:
    {
        returnValue = F("Zarah-Leander-Str.");
        break;
    }
    case 342339:
    {
        returnValue = F("Zarchliner Str.");
        break;
    }
    case 342340:
    {
        returnValue = F("Zarchliner Weg");
        break;
    }
    case 342341:
    {
        returnValue = F("Zardunastr.");
        break;
    }
    case 342342:
    {
        returnValue = F("Zarenthiner Ausbau");
        break;
    }
    case 342343:
    {
        returnValue = F("Zarenweg");
        break;
    }
    case 342344:
    {
        returnValue = F("Zaretzkystr.");
        break;
    }
    case 342345:
    {
        returnValue = F("Zargenweg");
        break;
    }
    case 342346:
    {
        returnValue = F("Zargesstr.");
        break;
    }
    case 342347:
    {
        returnValue = F("Zarlachstr.");
        break;
    }
    case 342348:
    {
        returnValue = F("Zarnekla");
        break;
    }
    case 342349:
    {
        returnValue = F("Zarnekow");
        break;
    }
    case 342350:
    {
        returnValue = F("Zarnekowstr.");
        break;
    }
    case 342351:
    {
        returnValue = F("Zarnester Str.");
        break;
    }
    case 342352:
    {
        returnValue = F("Zarnewanzer Ausbau");
        break;
    }
    case 342353:
    {
        returnValue = F("Zarnewanzer Str.");
        break;
    }
    case 342354:
    {
        returnValue = F("Zarnewenzweg");
        break;
    }
    case 342355:
    {
        returnValue = F("Zarnezweg");
        break;
    }
    case 342356:
    {
        returnValue = F("Zarnitz Hof");
        break;
    }
    case 342357:
    {
        returnValue = F("Zarnowhufe");
        break;
    }
    case 342358:
    {
        returnValue = F("Zarowmühl");
        break;
    }
    case 342359:
    {
        returnValue = F("Zarpener Weg");
        break;
    }
    case 342360:
    {
        returnValue = F("Zarpenerhof");
        break;
    }
    case 342361:
    {
        returnValue = F("Zarrendorfer Str.");
        break;
    }
    case 342362:
    {
        returnValue = F("Zarrendorfer Weg");
        break;
    }
    case 342363:
    {
        returnValue = F("Zarrenthin");
        break;
    }
    case 342364:
    {
        returnValue = F("Zarrenthiner Weg");
        break;
    }
    case 342365:
    {
        returnValue = F("Zarrentin");
        break;
    }
    case 342366:
    {
        returnValue = F("Zarrentiner Str.");
        break;
    }
    case 342367:
    {
        returnValue = F("Zarrentiner Weg");
        break;
    }
    case 342368:
    {
        returnValue = F("Zarrerweg");
        break;
    }
    case 342369:
    {
        returnValue = F("Zarsweg");
        break;
    }
    case 342370:
    {
        returnValue = F("Zartauer Weg");
        break;
    }
    case 342371:
    {
        returnValue = F("Zartenbachweg");
        break;
    }
    case 342372:
    {
        returnValue = F("Zartener Str.");
        break;
    }
    case 342373:
    {
        returnValue = F("Zartenstrom");
        break;
    }
    case 342374:
    {
        returnValue = F("Zaschbergstr.");
        break;
    }
    case 342375:
    {
        returnValue = F("Zaschendorfer Str.");
        break;
    }
    case 342376:
    {
        returnValue = F("Zaschendorfer Weg");
        break;
    }
    case 342377:
    {
        returnValue = F("Zaschkahof");
        break;
    }
    case 342378:
    {
        returnValue = F("Zaschwitz");
        break;
    }
    case 342379:
    {
        returnValue = F("Zaschwitzer Dorfstr.");
        break;
    }
    case 342380:
    {
        returnValue = F("Zasingerstr.");
        break;
    }
    case 342381:
    {
        returnValue = F("Zasiusstr.");
        break;
    }
    case 342382:
    {
        returnValue = F("Zassenhausweg");
        break;
    }
    case 342383:
    {
        returnValue = F("Zassenrainweg");
        break;
    }
    case 342384:
    {
        returnValue = F("Zastlerhütteweg");
        break;
    }
    case 342385:
    {
        returnValue = F("Zastrowstr.");
        break;
    }
    case 342386:
    {
        returnValue = F("Zattlerstr.");
        break;
    }
    case 342387:
    {
        returnValue = F("Zauberflöte");
        break;
    }
    case 342388:
    {
        returnValue = F("Zauberflötenbrücke");
        break;
    }
    case 342389:
    {
        returnValue = F("Zaubergarten");
        break;
    }
    case 342390:
    {
        returnValue = F("Zaubergasse");
        break;
    }
    case 342391:
    {
        returnValue = F("Zaubergeigenstr.");
        break;
    }
    case 342392:
    {
        returnValue = F("Zauberkuhle");
        break;
    }
    case 342393:
    {
        returnValue = F("Zauberland");
        break;
    }
    case 342394:
    {
        returnValue = F("Zaubernussweg");
        break;
    }
    case 342395:
    {
        returnValue = F("Zaubernußplatz");
        break;
    }
    case 342396:
    {
        returnValue = F("Zaubernußweg");
        break;
    }
    case 342397:
    {
        returnValue = F("Zauberwaldpfad");
        break;
    }
    case 342398:
    {
        returnValue = F("Zauberwaldstr.");
        break;
    }
    case 342399:
    {
        returnValue = F("Zauberweg");
        break;
    }
    case 342400:
    {
        returnValue = F("Zaubzerstr.");
        break;
    }
    case 342401:
    {
        returnValue = F("Zaucheblick");
        break;
    }
    case 342402:
    {
        returnValue = F("Zauchenplatz");
        break;
    }
    case 342403:
    {
        returnValue = F("Zauchenweg");
        break;
    }
    case 342404:
    {
        returnValue = F("Zaucher Brücke");
        break;
    }
    case 342405:
    {
        returnValue = F("Zaucher Weg");
        break;
    }
    case 342406:
    {
        returnValue = F("Zauchestr.");
        break;
    }
    case 342407:
    {
        returnValue = F("Zaucheweg");
        break;
    }
    case 342408:
    {
        returnValue = F("Zauchwitzer Dorfstr.");
        break;
    }
    case 342409:
    {
        returnValue = F("Zauchwitzer Str.");
        break;
    }
    case 342410:
    {
        returnValue = F("Zauckeroder Str.");
        break;
    }
    case 342411:
    {
        returnValue = F("Zaugendorf");
        break;
    }
    case 342412:
    {
        returnValue = F("Zaukenstr.");
        break;
    }
    case 342413:
    {
        returnValue = F("Zaukenweg");
        break;
    }
    case 342414:
    {
        returnValue = F("Zaulsdorfer Str.");
        break;
    }
    case 342415:
    {
        returnValue = F("Zaulsdorfer Weg");
        break;
    }
    case 342416:
    {
        returnValue = F("Zaun");
        break;
    }
    case 342417:
    {
        returnValue = F("Zaunacker");
        break;
    }
    case 342418:
    {
        returnValue = F("Zaunackerstr.");
        break;
    }
    case 342419:
    {
        returnValue = F("Zaunbrechl");
        break;
    }
    case 342420:
    {
        returnValue = F("Zaunbusch");
        break;
    }
    case 342421:
    {
        returnValue = F("Zaundorf");
        break;
    }
    case 342422:
    {
        returnValue = F("Zauneckerplatz");
        break;
    }
    case 342423:
    {
        returnValue = F("Zauneidechsenweg");
        break;
    }
    case 342424:
    {
        returnValue = F("Zauner");
        break;
    }
    case 342425:
    {
        returnValue = F("Zaunerstr.");
        break;
    }
    case 342426:
    {
        returnValue = F("Zaunewiese");
        break;
    }
    case 342427:
    {
        returnValue = F("Zaungartenstr.");
        break;
    }
    case 342428:
    {
        returnValue = F("Zaungasse");
        break;
    }
    case 342429:
    {
        returnValue = F("Zaungässle");
        break;
    }
    case 342430:
    {
        returnValue = F("Zaunhaldenweg");
        break;
    }
    case 342431:
    {
        returnValue = F("Zaunheimer Str.");
        break;
    }
    case 342432:
    {
        returnValue = F("Zaunhofstr.");
        break;
    }
    case 342433:
    {
        returnValue = F("Zaunholzbusch");
        break;
    }
    case 342434:
    {
        returnValue = F("Zaunhäuser Weg");
        break;
    }
    case 342435:
    {
        returnValue = F("Zaunhölzleweg");
        break;
    }
    case 342436:
    {
        returnValue = F("Zaunkönig");
        break;
    }
    case 342437:
    {
        returnValue = F("Zaunköniggasse");
        break;
    }
    case 342438:
    {
        returnValue = F("Zaunkönigring");
        break;
    }
    case 342439:
    {
        returnValue = F("Zaunkönigsteg");
        break;
    }
    case 342440:
    {
        returnValue = F("Zaunkönigsteig");
        break;
    }
    case 342441:
    {
        returnValue = F("Zaunkönigstr.");
        break;
    }
    case 342442:
    {
        returnValue = F("Zaunkönigsweg");
        break;
    }
    case 342443:
    {
        returnValue = F("Zaunkönigweg");
        break;
    }
    case 342444:
    {
        returnValue = F("Zaunlücke");
        break;
    }
    case 342445:
    {
        returnValue = F("Zaunmüllerweg");
        break;
    }
    case 342446:
    {
        returnValue = F("Zaunriedenstr.");
        break;
    }
    case 342447:
    {
        returnValue = F("Zaunrosenweg");
        break;
    }
    case 342448:
    {
        returnValue = F("Zaunröder Str.");
        break;
    }
    case 342449:
    {
        returnValue = F("Zaunröder Weg");
        break;
    }
    case 342450:
    {
        returnValue = F("Zaunschneise");
        break;
    }
    case 342451:
    {
        returnValue = F("Zaunstr.");
        break;
    }
    case 342452:
    {
        returnValue = F("Zaunstätte");
        break;
    }
    case 342453:
    {
        returnValue = F("Zaunswinkelstr.");
        break;
    }
    case 342454:
    {
        returnValue = F("Zaunsöder Weg");
        break;
    }
    case 342455:
    {
        returnValue = F("Zaunweg");
        break;
    }
    case 342456:
    {
        returnValue = F("Zaunwiese");
        break;
    }
    case 342457:
    {
        returnValue = F("Zaunwiesen");
        break;
    }
    case 342458:
    {
        returnValue = F("Zaunwiesenschneise");
        break;
    }
    case 342459:
    {
        returnValue = F("Zaunwiesenweg");
        break;
    }
    case 342460:
    {
        returnValue = F("Zaunwiesstr.");
        break;
    }
    case 342461:
    {
        returnValue = F("Zaunäcker");
        break;
    }
    case 342462:
    {
        returnValue = F("Zaunäckerstr.");
        break;
    }
    case 342463:
    {
        returnValue = F("Zaunäckerweg");
        break;
    }
    case 342464:
    {
        returnValue = F("Zauschengrundweg");
        break;
    }
    case 342465:
    {
        returnValue = F("Zauschwitzer Str.");
        break;
    }
    case 342466:
    {
        returnValue = F("Zauschwitzer Weg");
        break;
    }
    case 342467:
    {
        returnValue = F("Zauselweg");
        break;
    }
    case 342468:
    {
        returnValue = F("Zauserweg");
        break;
    }
    case 342469:
    {
        returnValue = F("Zautendorf");
        break;
    }
    case 342470:
    {
        returnValue = F("Zaußwitzer Str.");
        break;
    }
    case 342471:
    {
        returnValue = F("Zavelsteiner Str.");
        break;
    }
    case 342472:
    {
        returnValue = F("Zavelsteiner Weg");
        break;
    }
    case 342473:
    {
        returnValue = F("Zavelsteinstr.");
        break;
    }
    case 342474:
    {
        returnValue = F("Zavelsteinweg");
        break;
    }
    case 342475:
    {
        returnValue = F("Zaybachstr.");
        break;
    }
    case 342476:
    {
        returnValue = F("Zaystr.");
        break;
    }
    case 342477:
    {
        returnValue = F("Zebelinger Weg");
        break;
    }
    case 342478:
    {
        returnValue = F("Zebertstr.");
        break;
    }
    case 342479:
    {
        returnValue = F("Zebischberg");
        break;
    }
    case 342480:
    {
        returnValue = F("Zebramanguste");
        break;
    }
    case 342481:
    {
        returnValue = F("Zebraweg");
        break;
    }
    case 342482:
    {
        returnValue = F("Zechauer Str.");
        break;
    }
    case 342483:
    {
        returnValue = F("Zeche");
        break;
    }
    case 342484:
    {
        returnValue = F("Zeche Antonie");
        break;
    }
    case 342485:
    {
        returnValue = F("Zeche Carl");
        break;
    }
    case 342486:
    {
        returnValue = F("Zeche Crone");
        break;
    }
    case 342487:
    {
        returnValue = F("Zeche Eiberg");
        break;
    }
    case 342488:
    {
        returnValue = F("Zeche Ernestine");
        break;
    }
    case 342489:
    {
        returnValue = F("Zeche Gustav");
        break;
    }
    case 342490:
    {
        returnValue = F("Zeche Hugo Schachtanlage 2/5");
        break;
    }
    case 342491:
    {
        returnValue = F("Zeche Katharina");
        break;
    }
    case 342492:
    {
        returnValue = F("Zeche Marie");
        break;
    }
    case 342493:
    {
        returnValue = F("Zeche Nachtigall");
        break;
    }
    case 342494:
    {
        returnValue = F("Zeche Oespel");
        break;
    }
    case 342495:
    {
        returnValue = F("Zeche Sterkrade");
        break;
    }
    case 342496:
    {
        returnValue = F("Zeche Zollverein");
        break;
    }
    case 342497:
    {
        returnValue = F("Zeche-Hermann-Wall");
        break;
    }
    case 342498:
    {
        returnValue = F("Zeche-Holland-Str.");
        break;
    }
    case 342499:
    {
        returnValue = F("Zeche-Kaiser-Friedrich-Str.");
        break;
    }
    case 342500:
    {
        returnValue = F("Zeche-Margarete-Str.");
        break;
    }
    case 342501:
    {
        returnValue = F("Zeche-Marie-Weg");
        break;
    }
    case 342502:
    {
        returnValue = F("Zeche-Norm-Str.");
        break;
    }
    case 342503:
    {
        returnValue = F("Zechelsweg");
        break;
    }
    case 342504:
    {
        returnValue = F("Zechenau");
        break;
    }
    case 342505:
    {
        returnValue = F("Zechenbachweg");
        break;
    }
    case 342506:
    {
        returnValue = F("Zechenbahn");
        break;
    }
    case 342507:
    {
        returnValue = F("Zechenbahnweg");
        break;
    }
    case 342508:
    {
        returnValue = F("Zechenfeld");
        break;
    }
    case 342509:
    {
        returnValue = F("Zechengasse");
        break;
    }
    case 342510:
    {
        returnValue = F("Zechengrund");
        break;
    }
    case 342511:
    {
        returnValue = F("Zechengrundweg");
        break;
    }
    case 342512:
    {
        returnValue = F("Zechenhaus");
        break;
    }
    case 342513:
    {
        returnValue = F("Zechenhausstr.");
        break;
    }
    case 342514:
    {
        returnValue = F("Zechenhausweg");
        break;
    }
    case 342515:
    {
        returnValue = F("Zechenhäuschen");
        break;
    }
    case 342516:
    {
        returnValue = F("Zechenhäuser Weg");
        break;
    }
    case 342517:
    {
        returnValue = F("Zechenpark");
        break;
    }
    case 342518:
    {
        returnValue = F("Zechenplatz");
        break;
    }
    case 342519:
    {
        returnValue = F("Zechenring");
        break;
    }
    case 342520:
    {
        returnValue = F("Zechensteig");
        break;
    }
    case 342521:
    {
        returnValue = F("Zechenstr.");
        break;
    }
    case 342522:
    {
        returnValue = F("Zechental");
        break;
    }
    case 342523:
    {
        returnValue = F("Zechenwaldplatz");
        break;
    }
    case 342524:
    {
        returnValue = F("Zechenwaldstr.");
        break;
    }
    case 342525:
    {
        returnValue = F("Zechenweg");
        break;
    }
    case 342526:
    {
        returnValue = F("Zechenwihlstr.");
        break;
    }
    case 342527:
    {
        returnValue = F("Zecher Weg");
        break;
    }
    case 342528:
    {
        returnValue = F("Zecherin");
        break;
    }
    case 342529:
    {
        returnValue = F("Zecheriner Dorfstr.");
        break;
    }
    case 342530:
    {
        returnValue = F("Zecheriner Weg");
        break;
    }
    case 342531:
    {
        returnValue = F("Zecherweg");
        break;
    }
    case 342532:
    {
        returnValue = F("Zechgartenweg");
        break;
    }
    case 342533:
    {
        returnValue = F("Zechgraben");
        break;
    }
    case 342534:
    {
        returnValue = F("Zechiner Chaussee");
        break;
    }
    case 342535:
    {
        returnValue = F("Zechiner Str.");
        break;
    }
    case 342536:
    {
        returnValue = F("Zechliner Chaussee");
        break;
    }
    case 342537:
    {
        returnValue = F("Zechliner Str.");
        break;
    }
    case 342538:
    {
        returnValue = F("Zechlinerhütter Landstr.");
        break;
    }
    case 342539:
    {
        returnValue = F("Zechlinstr.");
        break;
    }
    case 342540:
    {
        returnValue = F("Zechnerweg");
        break;
    }
    case 342541:
    {
        returnValue = F("Zechs Weg");
        break;
    }
    case 342542:
    {
        returnValue = F("Zechsteinring");
        break;
    }
    case 342543:
    {
        returnValue = F("Zechsteinweg");
        break;
    }
    case 342544:
    {
        returnValue = F("Zechstr.");
        break;
    }
    case 342545:
    {
        returnValue = F("Zechthof");
        break;
    }
    case 342546:
    {
        returnValue = F("Zechwaldstr.");
        break;
    }
    case 342547:
    {
        returnValue = F("Zechweg");
        break;
    }
    case 342548:
    {
        returnValue = F("Zeckenberg");
        break;
    }
    case 342549:
    {
        returnValue = F("Zeckendorfer Str.");
        break;
    }
    case 342550:
    {
        returnValue = F("Zeckenmühle");
        break;
    }
    case 342551:
    {
        returnValue = F("Zeckenweg");
        break;
    }
    case 342552:
    {
        returnValue = F("Zeckeriner Dorfstr.");
        break;
    }
    case 342553:
    {
        returnValue = F("Zeckeriner Str.");
        break;
    }
    case 342554:
    {
        returnValue = F("Zecklstr.");
        break;
    }
    case 342555:
    {
        returnValue = F("Zeckritzer Wiesen Weg");
        break;
    }
    case 342556:
    {
        returnValue = F("Zeckritzer-Wiesen-Weg");
        break;
    }
    case 342557:
    {
        returnValue = F("Zedauer Weg");
        break;
    }
    case 342558:
    {
        returnValue = F("Zeddenicker Weg");
        break;
    }
    case 342559:
    {
        returnValue = F("Zedeliusstr.");
        break;
    }
    case 342560:
    {
        returnValue = F("Zederbräupassage");
        break;
    }
    case 342561:
    {
        returnValue = F("Zedernholz");
        break;
    }
    case 342562:
    {
        returnValue = F("Zedernholzweg");
        break;
    }
    case 342563:
    {
        returnValue = F("Zedernring");
        break;
    }
    case 342564:
    {
        returnValue = F("Zedernstr.");
        break;
    }
    case 342565:
    {
        returnValue = F("Zedernweg");
        break;
    }
    case 342566:
    {
        returnValue = F("Zederweg");
        break;
    }
    case 342567:
    {
        returnValue = F("Zedimtsweg");
        break;
    }
    case 342568:
    {
        returnValue = F("Zedlig");
        break;
    }
    case 342569:
    {
        returnValue = F("Zedlitz");
        break;
    }
    case 342570:
    {
        returnValue = F("Zedlitzstr.");
        break;
    }
    case 342571:
    {
        returnValue = F("Zedlitzweg");
        break;
    }
    case 342572:
    {
        returnValue = F("Zedtlerstr.");
        break;
    }
    case 342573:
    {
        returnValue = F("Zedtlitzer Weg");
        break;
    }
    case 342574:
    {
        returnValue = F("Zedtwitzer Str.");
        break;
    }
    case 342575:
    {
        returnValue = F("Zedtwitzpark");
        break;
    }
    case 342576:
    {
        returnValue = F("Zedtwitzstr.");
        break;
    }
    case 342577:
    {
        returnValue = F("Zeegenstreek");
        break;
    }
    case 342578:
    {
        returnValue = F("Zeekenstr.");
        break;
    }
    case 342579:
    {
        returnValue = F("Zeesener Str.");
        break;
    }
    case 342580:
    {
        returnValue = F("Zeesenweg");
        break;
    }
    case 342581:
    {
        returnValue = F("Zeestower Chaussee");
        break;
    }
    case 342582:
    {
        returnValue = F("Zeestower Str.");
        break;
    }
    case 342583:
    {
        returnValue = F("Zegasttalstr.");
        break;
    }
    case 342584:
    {
        returnValue = F("Zegen Esch");
        break;
    }
    case 342585:
    {
        returnValue = F("Zegers Höffte");
        break;
    }
    case 342586:
    {
        returnValue = F("Zegginstr.");
        break;
    }
    case 342587:
    {
        returnValue = F("Zehbitzer Str.");
        break;
    }
    case 342588:
    {
        returnValue = F("Zehbitzer Weg");
        break;
    }
    case 342589:
    {
        returnValue = F("Zehdalweg");
        break;
    }
    case 342590:
    {
        returnValue = F("Zehdenicker Chaussee");
        break;
    }
    case 342591:
    {
        returnValue = F("Zehdenicker Str.");
        break;
    }
    case 342592:
    {
        returnValue = F("Zehdenicker Weg");
        break;
    }
    case 342593:
    {
        returnValue = F("Zehdenicker Ziegeleiweg");
        break;
    }
    case 342594:
    {
        returnValue = F("Zehenderstr.");
        break;
    }
    case 342595:
    {
        returnValue = F("Zehenderweg");
        break;
    }
    case 342596:
    {
        returnValue = F("Zehentbauernstr.");
        break;
    }
    case 342597:
    {
        returnValue = F("Zehentgasse");
        break;
    }
    case 342598:
    {
        returnValue = F("Zehenthof");
        break;
    }
    case 342599:
    {
        returnValue = F("Zehentholz");
        break;
    }
    case 342600:
    {
        returnValue = F("Zehentmeierstr.");
        break;
    }
    case 342601:
    {
        returnValue = F("Zehentplatz");
        break;
    }
    case 342602:
    {
        returnValue = F("Zehentreith");
        break;
    }
    case 342603:
    {
        returnValue = F("Zehentstadel");
        break;
    }
    case 342604:
    {
        returnValue = F("Zehentstadelweg");
        break;
    }
    case 342605:
    {
        returnValue = F("Zehentstr.");
        break;
    }
    case 342606:
    {
        returnValue = F("Zehentweg");
        break;
    }
    case 342607:
    {
        returnValue = F("Zeheterstr.");
        break;
    }
    case 342608:
    {
        returnValue = F("Zehethof");
        break;
    }
    case 342609:
    {
        returnValue = F("Zehetmaierstr.");
        break;
    }
    case 342610:
    {
        returnValue = F("Zehetmair Weg");
        break;
    }
    case 342611:
    {
        returnValue = F("Zehetmayrstr.");
        break;
    }
    case 342612:
    {
        returnValue = F("Zehetmeierstr.");
        break;
    }
    case 342613:
    {
        returnValue = F("Zehistaer Siedlung");
        break;
    }
    case 342614:
    {
        returnValue = F("Zehistaer Str.");
        break;
    }
    case 342615:
    {
        returnValue = F("Zehlen");
        break;
    }
    case 342616:
    {
        returnValue = F("Zehlendorf");
        break;
    }
    case 342617:
    {
        returnValue = F("Zehlendorfer Chaussee");
        break;
    }
    case 342618:
    {
        returnValue = F("Zehlendorfer Damm");
        break;
    }
    case 342619:
    {
        returnValue = F("Zehlendorfer Platz");
        break;
    }
    case 342620:
    {
        returnValue = F("Zehlendorfer Str.");
        break;
    }
    case 342621:
    {
        returnValue = F("Zehlendorfer Weg");
        break;
    }
    case 342622:
    {
        returnValue = F("Zehlendorfweg");
        break;
    }
    case 342623:
    {
        returnValue = F("Zehlickestr.");
        break;
    }
    case 342624:
    {
        returnValue = F("Zehlinger Weg");
        break;
    }
    case 342625:
    {
        returnValue = F("Zehma");
        break;
    }
    case 342626:
    {
        returnValue = F("Zehmaer Str.");
        break;
    }
    case 342627:
    {
        returnValue = F("Zehmener Str.");
        break;
    }
    case 342628:
    {
        returnValue = F("Zehmener Weg");
        break;
    }
    case 342629:
    {
        returnValue = F("Zehmenstr.");
        break;
    }
    case 342630:
    {
        returnValue = F("Zehmerstr.");
        break;
    }
    case 342631:
    {
        returnValue = F("Zehmigkauer Str.");
        break;
    }
    case 342632:
    {
        returnValue = F("Zehmischstr.");
        break;
    }
    case 342633:
    {
        returnValue = F("Zehmitzer Str.");
        break;
    }
    case 342634:
    {
        returnValue = F("Zehn Jaucherten");
        break;
    }
    case 342635:
    {
        returnValue = F("Zehn Jeuch");
        break;
    }
    case 342636:
    {
        returnValue = F("Zehn Morgen");
        break;
    }
    case 342637:
    {
        returnValue = F("Zehn Ruten");
        break;
    }
    case 342638:
    {
        returnValue = F("Zehnackerweg");
        break;
    }
    case 342639:
    {
        returnValue = F("Zehnaer Weg");
        break;
    }
    case 342640:
    {
        returnValue = F("Zehnangerweg");
        break;
    }
    case 342641:
    {
        returnValue = F("Zehnbrückerstr.");
        break;
    }
    case 342642:
    {
        returnValue = F("Zehnbuchensträßle");
        break;
    }
    case 342643:
    {
        returnValue = F("Zehnebeck");
        break;
    }
    case 342644:
    {
        returnValue = F("Zehnerflügel");
        break;
    }
    case 342645:
    {
        returnValue = F("Zehnerstr.");
        break;
    }
    case 342646:
    {
        returnValue = F("Zehnerweg");
        break;
    }
    case 342647:
    {
        returnValue = F("Zehnesweg");
        break;
    }
    case 342648:
    {
        returnValue = F("Zehnetfrei");
        break;
    }
    case 342649:
    {
        returnValue = F("Zehngrafenstr.");
        break;
    }
    case 342650:
    {
        returnValue = F("Zehnhoffstr.");
        break;
    }
    case 342651:
    {
        returnValue = F("Zehnhäuser Weg");
        break;
    }
    case 342652:
    {
        returnValue = F("Zehnhäuserweg");
        break;
    }
    case 342653:
    {
        returnValue = F("Zehnminutenweg");
        break;
    }
    case 342654:
    {
        returnValue = F("Zehnmorgen");
        break;
    }
    case 342655:
    {
        returnValue = F("Zehnmorgenstr.");
        break;
    }
    case 342656:
    {
        returnValue = F("Zehnmorgenweg");
        break;
    }
    case 342657:
    {
        returnValue = F("Zehnpfuhlweg");
        break;
    }
    case 342658:
    {
        returnValue = F("Zehnrech");
        break;
    }
    case 342659:
    {
        returnValue = F("Zehnrutenweg");
        break;
    }
    case 342660:
    {
        returnValue = F("Zehnruthen");
        break;
    }
    case 342661:
    {
        returnValue = F("Zehnstelle");
        break;
    }
    case 342662:
    {
        returnValue = F("Zehnstück");
        break;
    }
    case 342663:
    {
        returnValue = F("Zehnstücken");
        break;
    }
    case 342664:
    {
        returnValue = F("Zehnt");
        break;
    }
    case 342665:
    {
        returnValue = F("Zehntacker");
        break;
    }
    case 342666:
    {
        returnValue = F("Zehntberg");
        break;
    }
    case 342667:
    {
        returnValue = F("Zehntbergstr.");
        break;
    }
    case 342668:
    {
        returnValue = F("Zehntbergweg");
        break;
    }
    case 342669:
    {
        returnValue = F("Zehntbreite");
        break;
    }
    case 342670:
    {
        returnValue = F("Zehntbrücke");
        break;
    }
    case 342671:
    {
        returnValue = F("Zehntbrückerstr.");
        break;
    }
    case 342672:
    {
        returnValue = F("Zehntel");
        break;
    }
    case 342673:
    {
        returnValue = F("Zehnten Wiesen");
        break;
    }
    case 342674:
    {
        returnValue = F("Zehntengasse");
        break;
    }
    case 342675:
    {
        returnValue = F("Zehntenhofstr.");
        break;
    }
    case 342676:
    {
        returnValue = F("Zehntenplatz");
        break;
    }
    case 342677:
    {
        returnValue = F("Zehntenscheuerstr.");
        break;
    }
    case 342678:
    {
        returnValue = F("Zehntenstr.");
        break;
    }
    case 342679:
    {
        returnValue = F("Zehntenweg");
        break;
    }
    case 342680:
    {
        returnValue = F("Zehntergässchen");
        break;
    }
    case 342681:
    {
        returnValue = F("Zehntfeld");
        break;
    }
    case 342682:
    {
        returnValue = F("Zehntfeldstr.");
        break;
    }
    case 342683:
    {
        returnValue = F("Zehntfeldweg");
        break;
    }
    case 342684:
    {
        returnValue = F("Zehntfreie Höfe");
        break;
    }
    case 342685:
    {
        returnValue = F("Zehntfreistr.");
        break;
    }
    case 342686:
    {
        returnValue = F("Zehntgasse");
        break;
    }
    case 342687:
    {
        returnValue = F("Zehntgasse/Im Letzfeld");
        break;
    }
    case 342688:
    {
        returnValue = F("Zehntgrafstr.");
        break;
    }
    case 342689:
    {
        returnValue = F("Zehntgässchen");
        break;
    }
    case 342690:
    {
        returnValue = F("Zehnthausstr.");
        break;
    }
    case 342691:
    {
        returnValue = F("Zehnthausweg");
        break;
    }
    case 342692:
    {
        returnValue = F("Zehnthof");
        break;
    }
    case 342693:
    {
        returnValue = F("Zehnthof-Platz");
        break;
    }
    case 342694:
    {
        returnValue = F("Zehnthofgasse");
        break;
    }
    case 342695:
    {
        returnValue = F("Zehnthofstr.");
        break;
    }
    case 342696:
    {
        returnValue = F("Zehnthofweg");
        break;
    }
    case 342697:
    {
        returnValue = F("Zehntjörgen");
        break;
    }
    case 342698:
    {
        returnValue = F("Zehntkamp");
        break;
    }
    case 342699:
    {
        returnValue = F("Zehntmark");
        break;
    }
    case 342700:
    {
        returnValue = F("Zehntmauerstr.");
        break;
    }
    case 342701:
    {
        returnValue = F("Zehntnerhofweg");
        break;
    }
    case 342702:
    {
        returnValue = F("Zehntnerstr.");
        break;
    }
    case 342703:
    {
        returnValue = F("Zehntpfad");
        break;
    }
    case 342704:
    {
        returnValue = F("Zehntplatz");
        break;
    }
    case 342705:
    {
        returnValue = F("Zehntpöschweg");
        break;
    }
    case 342706:
    {
        returnValue = F("Zehntrasen");
        break;
    }
    case 342707:
    {
        returnValue = F("Zehntschauer");
        break;
    }
    case 342708:
    {
        returnValue = F("Zehntscheuer");
        break;
    }
    case 342709:
    {
        returnValue = F("Zehntscheuergasse");
        break;
    }
    case 342710:
    {
        returnValue = F("Zehntscheuergässle");
        break;
    }
    case 342711:
    {
        returnValue = F("Zehntscheuerstr.");
        break;
    }
    case 342712:
    {
        returnValue = F("Zehntscheuerweg");
        break;
    }
    case 342713:
    {
        returnValue = F("Zehntscheune");
        break;
    }
    case 342714:
    {
        returnValue = F("Zehntstadelgasse");
        break;
    }
    case 342715:
    {
        returnValue = F("Zehntstadelweg");
        break;
    }
    case 342716:
    {
        returnValue = F("Zehntsteig");
        break;
    }
    case 342717:
    {
        returnValue = F("Zehntsteinweg");
        break;
    }
    case 342718:
    {
        returnValue = F("Zehntstr.");
        break;
    }
    case 342719:
    {
        returnValue = F("Zehntwaldstr.");
        break;
    }
    case 342720:
    {
        returnValue = F("Zehntwall");
        break;
    }
    case 342721:
    {
        returnValue = F("Zehntweg");
        break;
    }
    case 342722:
    {
        returnValue = F("Zehntwiesenstr.");
        break;
    }
    case 342723:
    {
        returnValue = F("Zehnweg");
        break;
    }
    case 342724:
    {
        returnValue = F("Zehnäcker");
        break;
    }
    case 342725:
    {
        returnValue = F("Zeholfinger Str.");
        break;
    }
    case 342726:
    {
        returnValue = F("Zehrbrunnen");
        break;
    }
    case 342727:
    {
        returnValue = F("Zehrendorf-Burg Raben");
        break;
    }
    case 342728:
    {
        returnValue = F("Zehrener Dorfstr.");
        break;
    }
    case 342729:
    {
        returnValue = F("Zehrener Str.");
        break;
    }
    case 342730:
    {
        returnValue = F("Zehrensdorfer Str.");
        break;
    }
    case 342731:
    {
        returnValue = F("Zehrensdorfer Weg");
        break;
    }
    case 342732:
    {
        returnValue = F("Zehringer Weg");
        break;
    }
    case 342733:
    {
        returnValue = F("Zehstr.");
        break;
    }
    case 342734:
    {
        returnValue = F("Zeibgasse");
        break;
    }
    case 342735:
    {
        returnValue = F("Zeibstr.");
        break;
    }
    case 342736:
    {
        returnValue = F("Zeichaer Str.");
        break;
    }
    case 342737:
    {
        returnValue = F("Zeichenstr.");
        break;
    }
    case 342738:
    {
        returnValue = F("Zeichenweg");
        break;
    }
    case 342739:
    {
        returnValue = F("Zeichingerweg");
        break;
    }
    case 342740:
    {
        returnValue = F("Zeickhorner Str.");
        break;
    }
    case 342741:
    {
        returnValue = F("Zeickhorner Weg");
        break;
    }
    case 342742:
    {
        returnValue = F("Zeidelweide");
        break;
    }
    case 342743:
    {
        returnValue = F("Zeidenweidelweg");
        break;
    }
    case 342744:
    {
        returnValue = F("Zeidler Gang");
        break;
    }
    case 342745:
    {
        returnValue = F("Zeidlerberg");
        break;
    }
    case 342746:
    {
        returnValue = F("Zeidlergäßchen");
        break;
    }
    case 342747:
    {
        returnValue = F("Zeidlersiedlung");
        break;
    }
    case 342748:
    {
        returnValue = F("Zeidlerstr.");
        break;
    }
    case 342749:
    {
        returnValue = F("Zeidlerweg");
        break;
    }
    case 342750:
    {
        returnValue = F("Zeidlholzweg");
        break;
    }
    case 342751:
    {
        returnValue = F("Zeidlweidweg");
        break;
    }
    case 342752:
    {
        returnValue = F("Zeiering");
        break;
    }
    case 342753:
    {
        returnValue = F("Zeigerheim");
        break;
    }
    case 342754:
    {
        returnValue = F("Zeigerheimer Str.");
        break;
    }
    case 342755:
    {
        returnValue = F("Zeigerheimer Weg");
        break;
    }
    case 342756:
    {
        returnValue = F("Zeigerstr.");
        break;
    }
    case 342757:
    {
        returnValue = F("Zeigerstrasse");
        break;
    }
    case 342758:
    {
        returnValue = F("Zeiglwiesenweg");
        break;
    }
    case 342759:
    {
        returnValue = F("Zeigweg");
        break;
    }
    case 342760:
    {
        returnValue = F("Zeigwiese");
        break;
    }
    case 342761:
    {
        returnValue = F("Zeil");
        break;
    }
    case 342762:
    {
        returnValue = F("Zeilachstr.");
        break;
    }
    case 342763:
    {
        returnValue = F("Zeilacker");
        break;
    }
    case 342764:
    {
        returnValue = F("Zeilackerweg");
        break;
    }
    case 342765:
    {
        returnValue = F("Zeilbach");
        break;
    }
    case 342766:
    {
        returnValue = F("Zeilbacher Str.");
        break;
    }
    case 342767:
    {
        returnValue = F("Zeilbaum");
        break;
    }
    case 342768:
    {
        returnValue = F("Zeilbaumstr.");
        break;
    }
    case 342769:
    {
        returnValue = F("Zeilbaumweg");
        break;
    }
    case 342770:
    {
        returnValue = F("Zeilbeckweg");
        break;
    }
    case 342771:
    {
        returnValue = F("Zeilbergsiedlung");
        break;
    }
    case 342772:
    {
        returnValue = F("Zeilbergstr.");
        break;
    }
    case 342773:
    {
        returnValue = F("Zeilbergweg");
        break;
    }
    case 342774:
    {
        returnValue = F("Zeilbäume");
        break;
    }
    case 342775:
    {
        returnValue = F("Zeilbäumerstr.");
        break;
    }
    case 342776:
    {
        returnValue = F("Zeilbäumerweg");
        break;
    }
    case 342777:
    {
        returnValue = F("Zeile");
        break;
    }
    case 342778:
    {
        returnValue = F("Zeileckweg");
        break;
    }
    case 342779:
    {
        returnValue = F("Zeileichstr.");
        break;
    }
    case 342780:
    {
        returnValue = F("Zeilein");
        break;
    }
    case 342781:
    {
        returnValue = F("Zeilen");
        break;
    }
    case 342782:
    {
        returnValue = F("Zeilenstr.");
        break;
    }
    case 342783:
    {
        returnValue = F("Zeiler Str.");
        break;
    }
    case 342784:
    {
        returnValue = F("Zeiler Weg");
        break;
    }
    case 342785:
    {
        returnValue = F("Zeilerberg");
        break;
    }
    case 342786:
    {
        returnValue = F("Zeilerbergstr.");
        break;
    }
    case 342787:
    {
        returnValue = F("Zeilerbruck");
        break;
    }
    case 342788:
    {
        returnValue = F("Zeilerfeldweg");
        break;
    }
    case 342789:
    {
        returnValue = F("Zeilerstr.");
        break;
    }
    case 342790:
    {
        returnValue = F("Zeilertal");
        break;
    }
    case 342791:
    {
        returnValue = F("Zeilerweg");
        break;
    }
    case 342792:
    {
        returnValue = F("Zeilestr.");
        break;
    }
    case 342793:
    {
        returnValue = F("Zeilfelder Str.");
        break;
    }
    case 342794:
    {
        returnValue = F("Zeilgasse");
        break;
    }
    case 342795:
    {
        returnValue = F("Zeilharder Str.");
        break;
    }
    case 342796:
    {
        returnValue = F("Zeilheck");
        break;
    }
    case 342797:
    {
        returnValue = F("Zeilhecke");
        break;
    }
    case 342798:
    {
        returnValue = F("Zeilhofener Str.");
        break;
    }
    case 342799:
    {
        returnValue = F("Zeilhofweg");
        break;
    }
    case 342800:
    {
        returnValue = F("Zeiligstr.");
        break;
    }
    case 342801:
    {
        returnValue = F("Zeilinger Weg");
        break;
    }
    case 342802:
    {
        returnValue = F("Zeilitzheimer Pfad");
        break;
    }
    case 342803:
    {
        returnValue = F("Zeilitzheimer Str.");
        break;
    }
    case 342804:
    {
        returnValue = F("Zeiller Str.");
        break;
    }
    case 342805:
    {
        returnValue = F("Zeillerstr.");
        break;
    }
    case 342806:
    {
        returnValue = F("Zeiloch");
        break;
    }
    case 342807:
    {
        returnValue = F("Zeilrainweg");
        break;
    }
    case 342808:
    {
        returnValue = F("Zeilranken");
        break;
    }
    case 342809:
    {
        returnValue = F("Zeilring");
        break;
    }
    case 342810:
    {
        returnValue = F("Zeilsheimer Str.");
        break;
    }
    case 342811:
    {
        returnValue = F("Zeilsheimer Weg");
        break;
    }
    case 342812:
    {
        returnValue = F("Zeilstr.");
        break;
    }
    case 342813:
    {
        returnValue = F("Zeiltorstr.");
        break;
    }
    case 342814:
    {
        returnValue = F("Zeilweg");
        break;
    }
    case 342815:
    {
        returnValue = F("Zeilwiesen");
        break;
    }
    case 342816:
    {
        returnValue = F("Zeiläckerstr.");
        break;
    }
    case 342817:
    {
        returnValue = F("Zeiläckerweg");
        break;
    }
    case 342818:
    {
        returnValue = F("Zeindlweg");
        break;
    }
    case 342819:
    {
        returnValue = F("Zeinenweg");
        break;
    }
    case 342820:
    {
        returnValue = F("Zeinerhof");
        break;
    }
    case 342821:
    {
        returnValue = F("Zeininger Weg");
        break;
    }
    case 342822:
    {
        returnValue = F("Zeinried");
        break;
    }
    case 342823:
    {
        returnValue = F("Zeinrieder Str.");
        break;
    }
    case 342824:
    {
        returnValue = F("Zeinrieder Weg");
        break;
    }
    case 342825:
    {
        returnValue = F("Zeintlmühler Str.");
        break;
    }
    case 342826:
    {
        returnValue = F("Zeis");
        break;
    }
    case 342827:
    {
        returnValue = F("Zeisbuschweg");
        break;
    }
    case 342828:
    {
        returnValue = F("Zeischaer Weg");
        break;
    }
    case 342829:
    {
        returnValue = F("Zeisdorfer Str.");
        break;
    }
    case 342830:
    {
        returnValue = F("Zeise");
        break;
    }
    case 342831:
    {
        returnValue = F("Zeiselbachdammweg");
        break;
    }
    case 342832:
    {
        returnValue = F("Zeiselbachweg");
        break;
    }
    case 342833:
    {
        returnValue = F("Zeiselhalde");
        break;
    }
    case 342834:
    {
        returnValue = F("Zeiseltal");
        break;
    }
    case 342835:
    {
        returnValue = F("Zeisenberg");
        break;
    }
    case 342836:
    {
        returnValue = F("Zeisenried");
        break;
    }
    case 342837:
    {
        returnValue = F("Zeisenweg");
        break;
    }
    case 342838:
    {
        returnValue = F("Zeisertsweiler");
        break;
    }
    case 342839:
    {
        returnValue = F("Zeisestr.");
        break;
    }
    case 342840:
    {
        returnValue = F("Zeiseweg");
        break;
    }
    case 342841:
    {
        returnValue = F("Zeisig");
        break;
    }
    case 342842:
    {
        returnValue = F("Zeisigberg");
        break;
    }
    case 342843:
    {
        returnValue = F("Zeisigbusch");
        break;
    }
    case 342844:
    {
        returnValue = F("Zeisigeck");
        break;
    }
    case 342845:
    {
        returnValue = F("Zeisiggasse");
        break;
    }
    case 342846:
    {
        returnValue = F("Zeisighagen");
        break;
    }
    case 342847:
    {
        returnValue = F("Zeisighof");
        break;
    }
    case 342848:
    {
        returnValue = F("Zeisighäuser");
        break;
    }
    case 342849:
    {
        returnValue = F("Zeisighügel");
        break;
    }
    case 342850:
    {
        returnValue = F("Zeisigpfad");
        break;
    }
    case 342851:
    {
        returnValue = F("Zeisigring");
        break;
    }
    case 342852:
    {
        returnValue = F("Zeisigsteg");
        break;
    }
    case 342853:
    {
        returnValue = F("Zeisigsteig");
        break;
    }
    case 342854:
    {
        returnValue = F("Zeisigsteinweg");
        break;
    }
    case 342855:
    {
        returnValue = F("Zeisigstr.");
        break;
    }
    case 342856:
    {
        returnValue = F("Zeisigwaldstr.");
        break;
    }
    case 342857:
    {
        returnValue = F("Zeisigweg");
        break;
    }
    case 342858:
    {
        returnValue = F("Zeisigwinkel");
        break;
    }
    case 342859:
    {
        returnValue = F("Zeiskamer Schneise");
        break;
    }
    case 342860:
    {
        returnValue = F("Zeiskamer Str.");
        break;
    }
    case 342861:
    {
        returnValue = F("Zeiskamer Zeile");
        break;
    }
    case 342862:
    {
        returnValue = F("Zeislanger");
        break;
    }
    case 342863:
    {
        returnValue = F("Zeislerweg");
        break;
    }
    case 342864:
    {
        returnValue = F("Zeislstr.");
        break;
    }
    case 342865:
    {
        returnValue = F("Zeismeringer Str.");
        break;
    }
    case 342866:
    {
        returnValue = F("Zeisopshäldeweg");
        break;
    }
    case 342867:
    {
        returnValue = F("Zeiss Planetarium und Volkssternwarte Drebach");
        break;
    }
    case 342868:
    {
        returnValue = F("Zeiss-Abbe-Str.");
        break;
    }
    case 342869:
    {
        returnValue = F("Zeiss-Str.");
        break;
    }
    case 342870:
    {
        returnValue = F("Zeisselstr.");
        break;
    }
    case 342871:
    {
        returnValue = F("Zeisslerstr.");
        break;
    }
    case 342872:
    {
        returnValue = F("Zeissring");
        break;
    }
    case 342873:
    {
        returnValue = F("Zeissstr.");
        break;
    }
    case 342874:
    {
        returnValue = F("Zeissweg");
        break;
    }
    case 342875:
    {
        returnValue = F("Zeister Str.");
        break;
    }
    case 342876:
    {
        returnValue = F("Zeisterstr.");
        break;
    }
    case 342877:
    {
        returnValue = F("Zeisweilerhof");
        break;
    }
    case 342878:
    {
        returnValue = F("Zeisweilerweg");
        break;
    }
    case 342879:
    {
        returnValue = F("Zeitbeerenweg");
        break;
    }
    case 342880:
    {
        returnValue = F("Zeitblomstr.");
        break;
    }
    case 342881:
    {
        returnValue = F("Zeitblomweg");
        break;
    }
    case 342882:
    {
        returnValue = F("Zeitelbachweg");
        break;
    }
    case 342883:
    {
        returnValue = F("Zeitelhansenweg");
        break;
    }
    case 342884:
    {
        returnValue = F("Zeiten");
        break;
    }
    case 342885:
    {
        returnValue = F("Zeitentalstr.");
        break;
    }
    case 342886:
    {
        returnValue = F("Zeitenwendeplatz");
        break;
    }
    case 342887:
    {
        returnValue = F("Zeitenwiesenstr.");
        break;
    }
    case 342888:
    {
        returnValue = F("Zeitersweg");
        break;
    }
    case 342889:
    {
        returnValue = F("Zeiterweg");
        break;
    }
    case 342890:
    {
        returnValue = F("Zeitgasse");
        break;
    }
    case 342891:
    {
        returnValue = F("Zeithainer Str.");
        break;
    }
    case 342892:
    {
        returnValue = F("Zeithstr.");
        break;
    }
    case 342893:
    {
        returnValue = F("Zeititzer Weg");
        break;
    }
    case 342894:
    {
        returnValue = F("Zeitlarn");
        break;
    }
    case 342895:
    {
        returnValue = F("Zeitlarner Str.");
        break;
    }
    case 342896:
    {
        returnValue = F("Zeitlarner Weg");
        break;
    }
    case 342897:
    {
        returnValue = F("Zeitlbacher Str.");
        break;
    }
    case 342898:
    {
        returnValue = F("Zeitlbachstr.");
        break;
    }
    case 342899:
    {
        returnValue = F("Zeitlbergstr.");
        break;
    }
    case 342900:
    {
        returnValue = F("Zeitlerstr.");
        break;
    }
    case 342901:
    {
        returnValue = F("Zeitlhof");
        break;
    }
    case 342902:
    {
        returnValue = F("Zeitlhofweg");
        break;
    }
    case 342903:
    {
        returnValue = F("Zeitlstadt");
        break;
    }
    case 342904:
    {
        returnValue = F("Zeitlsäge");
        break;
    }
    case 342905:
    {
        returnValue = F("Zeitschneise");
        break;
    }
    case 342906:
    {
        returnValue = F("Zeitsteg");
        break;
    }
    case 342907:
    {
        returnValue = F("Zeitstr.");
        break;
    }
    case 342908:
    {
        returnValue = F("Zeitstrahlweg");
        break;
    }
    case 342909:
    {
        returnValue = F("Zeittunnel");
        break;
    }
    case 342910:
    {
        returnValue = F("Zeitz");
        break;
    }
    case 342911:
    {
        returnValue = F("Zeitzenhofer Str.");
        break;
    }
    case 342912:
    {
        returnValue = F("Zeitzer Gärten");
        break;
    }
    case 342913:
    {
        returnValue = F("Zeitzer Landstr.");
        break;
    }
    case 342914:
    {
        returnValue = F("Zeitzer Str.");
        break;
    }
    case 342915:
    {
        returnValue = F("Zeitzer Weg");
        break;
    }
    case 342916:
    {
        returnValue = F("Zeitzgasse");
        break;
    }
    case 342917:
    {
        returnValue = F("Zeitzgrund");
        break;
    }
    case 342918:
    {
        returnValue = F("Zeitzgrundblick");
        break;
    }
    case 342919:
    {
        returnValue = F("Zeiweg");
        break;
    }
    case 342920:
    {
        returnValue = F("Zeißbogen");
        break;
    }
    case 342921:
    {
        returnValue = F("Zeißelstr.");
        break;
    }
    case 342922:
    {
        returnValue = F("Zeißenberg");
        break;
    }
    case 342923:
    {
        returnValue = F("Zeißholzer Str.");
        break;
    }
    case 342924:
    {
        returnValue = F("Zeißigstr.");
        break;
    }
    case 342925:
    {
        returnValue = F("Zeißigweg");
        break;
    }
    case 342926:
    {
        returnValue = F("Zeißingstr.");
        break;
    }
    case 342927:
    {
        returnValue = F("Zeißlerweg");
        break;
    }
    case 342928:
    {
        returnValue = F("Zeißstr.");
        break;
    }
    case 342929:
    {
        returnValue = F("Zeißweg");
        break;
    }
    case 342930:
    {
        returnValue = F("Zelchstr.");
        break;
    }
    case 342931:
    {
        returnValue = F("Zelchweg");
        break;
    }
    case 342932:
    {
        returnValue = F("Zelckstr.");
        break;
    }
    case 342933:
    {
        returnValue = F("Zelemer Weg");
        break;
    }
    case 342934:
    {
        returnValue = F("Zelenkastr.");
        break;
    }
    case 342935:
    {
        returnValue = F("Zelgenweg");
        break;
    }
    case 342936:
    {
        returnValue = F("Zelger Berg");
        break;
    }
    case 342937:
    {
        returnValue = F("Zelgle");
        break;
    }
    case 342938:
    {
        returnValue = F("Zelglestr.");
        break;
    }
    case 342939:
    {
        returnValue = F("Zelgleweg");
        break;
    }
    case 342940:
    {
        returnValue = F("Zelgmadenstr.");
        break;
    }
    case 342941:
    {
        returnValue = F("Zelgstr.");
        break;
    }
    case 342942:
    {
        returnValue = F("Zelgweg");
        break;
    }
    case 342943:
    {
        returnValue = F("Zelkesgasse");
        break;
    }
    case 342944:
    {
        returnValue = F("Zell");
        break;
    }
    case 342945:
    {
        returnValue = F("Zell B");
        break;
    }
    case 342946:
    {
        returnValue = F("Zell C");
        break;
    }
    case 342947:
    {
        returnValue = F("Zell D");
        break;
    }
    case 342948:
    {
        returnValue = F("Zell E");
        break;
    }
    case 342949:
    {
        returnValue = F("Zell F");
        break;
    }
    case 342950:
    {
        returnValue = F("Zell G");
        break;
    }
    case 342951:
    {
        returnValue = F("Zell H");
        break;
    }
    case 342952:
    {
        returnValue = F("Zell K");
        break;
    }
    case 342953:
    {
        returnValue = F("Zella-Mehlis, Bahnhof");
        break;
    }
    case 342954:
    {
        returnValue = F("Zella-Mehlis-Hof");
        break;
    }
    case 342955:
    {
        returnValue = F("Zella-Mehliser-Str.");
        break;
    }
    case 342956:
    {
        returnValue = F("Zella-Meininger-Str.");
        break;
    }
    case 342957:
    {
        returnValue = F("Zellaer Höhe");
        break;
    }
    case 342958:
    {
        returnValue = F("Zellaer Markt");
        break;
    }
    case 342959:
    {
        returnValue = F("Zellaer Str.");
        break;
    }
    case 342960:
    {
        returnValue = F("Zellaer Weg");
        break;
    }
    case 342961:
    {
        returnValue = F("Zellauerweg");
        break;
    }
    case 342962:
    {
        returnValue = F("Zellauweg");
        break;
    }
    case 342963:
    {
        returnValue = F("Zellbach");
        break;
    }
    case 342964:
    {
        returnValue = F("Zellbachstr.");
        break;
    }
    case 342965:
    {
        returnValue = F("Zellberg");
        break;
    }
    case 342966:
    {
        returnValue = F("Zellbergsheideweg");
        break;
    }
    case 342967:
    {
        returnValue = F("Zellbergstr.");
        break;
    }
    case 342968:
    {
        returnValue = F("Zellboden");
        break;
    }
    case 342969:
    {
        returnValue = F("Zelle");
        break;
    }
    case 342970:
    {
        returnValue = F("Zelleleweg");
        break;
    }
    case 342971:
    {
        returnValue = F("Zellen");
        break;
    }
    case 342972:
    {
        returnValue = F("Zellendorf");
        break;
    }
    case 342973:
    {
        returnValue = F("Zellendorfer Str.");
        break;
    }
    case 342974:
    {
        returnValue = F("Zellendorfstr.");
        break;
    }
    case 342975:
    {
        returnValue = F("Zellenpfützstr.");
        break;
    }
    case 342976:
    {
        returnValue = F("Zellenweg");
        break;
    }
    case 342977:
    {
        returnValue = F("Zeller Bachstr.");
        break;
    }
    case 342978:
    {
        returnValue = F("Zeller Gaß");
        break;
    }
    case 342979:
    {
        returnValue = F("Zeller Gewerbezentrum");
        break;
    }
    case 342980:
    {
        returnValue = F("Zeller Grund");
        break;
    }
    case 342981:
    {
        returnValue = F("Zeller Hauptstr.");
        break;
    }
    case 342982:
    {
        returnValue = F("Zeller Holzweg");
        break;
    }
    case 342983:
    {
        returnValue = F("Zeller Kehr");
        break;
    }
    case 342984:
    {
        returnValue = F("Zeller Kirchweg");
        break;
    }
    case 342985:
    {
        returnValue = F("Zeller Laubenweg");
        break;
    }
    case 342986:
    {
        returnValue = F("Zeller Mühle");
        break;
    }
    case 342987:
    {
        returnValue = F("Zeller Rain");
        break;
    }
    case 342988:
    {
        returnValue = F("Zeller Ring");
        break;
    }
    case 342989:
    {
        returnValue = F("Zeller Str.");
        break;
    }
    case 342990:
    {
        returnValue = F("Zeller Talweg");
        break;
    }
    case 342991:
    {
        returnValue = F("Zeller Tor");
        break;
    }
    case 342992:
    {
        returnValue = F("Zeller Waldweg");
        break;
    }
    case 342993:
    {
        returnValue = F("Zeller Weg");
        break;
    }
    case 342994:
    {
        returnValue = F("Zeller-Ebene-Weg");
        break;
    }
    case 342995:
    {
        returnValue = F("Zeller-Kopf-Weg");
        break;
    }
    case 342996:
    {
        returnValue = F("Zelleracker");
        break;
    }
    case 342997:
    {
        returnValue = F("Zellerauer Marktplatz");
        break;
    }
    case 342998:
    {
        returnValue = F("Zellerbach");
        break;
    }
    case 342999:
    {
        returnValue = F("Zellerbachstr.");
        break;
    }
    case 343000:
    {
        returnValue = F("Zellerberg");
        break;
    }
    case 343001:
    {
        returnValue = F("Zellerbergstr.");
        break;
    }
    case 343002:
    {
        returnValue = F("Zellerfeld");
        break;
    }
    case 343003:
    {
        returnValue = F("Zellerfelder Allee");
        break;
    }
    case 343004:
    {
        returnValue = F("Zellerfelder Str.");
        break;
    }
    case 343005:
    {
        returnValue = F("Zellerfelder Talstr.");
        break;
    }
    case 343006:
    {
        returnValue = F("Zellerfelder Weg");
        break;
    }
    case 343007:
    {
        returnValue = F("Zellerfeldweg");
        break;
    }
    case 343008:
    {
        returnValue = F("Zellergasse");
        break;
    }
    case 343009:
    {
        returnValue = F("Zellerhof");
        break;
    }
    case 343010:
    {
        returnValue = F("Zellerhornstr.");
        break;
    }
    case 343011:
    {
        returnValue = F("Zellerie");
        break;
    }
    case 343012:
    {
        returnValue = F("Zellermattweg");
        break;
    }
    case 343013:
    {
        returnValue = F("Zellermoosstr.");
        break;
    }
    case 343014:
    {
        returnValue = F("Zellermoosweg");
        break;
    }
    case 343015:
    {
        returnValue = F("Zellerodaer Weg");
        break;
    }
    case 343016:
    {
        returnValue = F("Zellerseeweg");
        break;
    }
    case 343017:
    {
        returnValue = F("Zellershof");
        break;
    }
    case 343018:
    {
        returnValue = F("Zellersteg");
        break;
    }
    case 343019:
    {
        returnValue = F("Zellerstr.");
        break;
    }
    case 343020:
    {
        returnValue = F("Zellertal");
        break;
    }
    case 343021:
    {
        returnValue = F("Zellertalstr.");
        break;
    }
    case 343022:
    {
        returnValue = F("Zellertstr.");
        break;
    }
    case 343023:
    {
        returnValue = F("Zellerwaldweg");
        break;
    }
    case 343024:
    {
        returnValue = F("Zellerweg");
        break;
    }
    case 343025:
    {
        returnValue = F("Zellerwegfeld");
        break;
    }
    case 343026:
    {
        returnValue = F("Zellerwiesen");
        break;
    }
    case 343027:
    {
        returnValue = F("Zellerwiesenstr.");
        break;
    }
    case 343028:
    {
        returnValue = F("Zellescher Weg");
        break;
    }
    case 343029:
    {
        returnValue = F("Zellesmühle");
        break;
    }
    case 343030:
    {
        returnValue = F("Zellewitz");
        break;
    }
    case 343031:
    {
        returnValue = F("Zellewitzer Weg");
        break;
    }
    case 343032:
    {
        returnValue = F("Zellgraben");
        break;
    }
    case 343033:
    {
        returnValue = F("Zellhaldweg");
        break;
    }
    case 343034:
    {
        returnValue = F("Zellhofstr.");
        break;
    }
    case 343035:
    {
        returnValue = F("Zellhuber Ring");
        break;
    }
    case 343036:
    {
        returnValue = F("Zellhuber Str.");
        break;
    }
    case 343037:
    {
        returnValue = F("Zellhutweg");
        break;
    }
    case 343038:
    {
        returnValue = F("Zellhäuser");
        break;
    }
    case 343039:
    {
        returnValue = F("Zellhäuser Str.");
        break;
    }
    case 343040:
    {
        returnValue = F("Zellhäuser Strasse");
        break;
    }
    case 343041:
    {
        returnValue = F("Zellingen");
        break;
    }
    case 343042:
    {
        returnValue = F("Zellinger Str.");
        break;
    }
    case 343043:
    {
        returnValue = F("Zellistr.");
        break;
    }
    case 343044:
    {
        returnValue = F("Zellmarkstr.");
        break;
    }
    case 343045:
    {
        returnValue = F("Zellmarkweg");
        break;
    }
    case 343046:
    {
        returnValue = F("Zellmühle");
        break;
    }
    case 343047:
    {
        returnValue = F("Zellnerweg");
        break;
    }
    case 343048:
    {
        returnValue = F("Zellschner Str.");
        break;
    }
    case 343049:
    {
        returnValue = F("Zellsee");
        break;
    }
    case 343050:
    {
        returnValue = F("Zellsteig");
        break;
    }
    case 343051:
    {
        returnValue = F("Zellstoffstr.");
        break;
    }
    case 343052:
    {
        returnValue = F("Zellstr.");
        break;
    }
    case 343053:
    {
        returnValue = F("Zellwaldring");
        break;
    }
    case 343054:
    {
        returnValue = F("Zellweg");
        break;
    }
    case 343055:
    {
        returnValue = F("Zellwegerstr.");
        break;
    }
    case 343056:
    {
        returnValue = F("Zellwiesenweg");
        break;
    }
    case 343057:
    {
        returnValue = F("Zellwollbrücke");
        break;
    }
    case 343058:
    {
        returnValue = F("Zellwolleweg");
        break;
    }
    case 343059:
    {
        returnValue = F("Zeltberg");
        break;
    }
    case 343060:
    {
        returnValue = F("Zeltenallee");
        break;
    }
    case 343061:
    {
        returnValue = F("Zeltendorf");
        break;
    }
    case 343062:
    {
        returnValue = F("Zeltendorfer Weg");
        break;
    }
    case 343063:
    {
        returnValue = F("Zeltengasse");
        break;
    }
    case 343064:
    {
        returnValue = F("Zelterstr.");
        break;
    }
    case 343065:
    {
        returnValue = F("Zelterweg");
        break;
    }
    case 343066:
    {
        returnValue = F("Zelthausplatz");
        break;
    }
    case 343067:
    {
        returnValue = F("Zeltinger Str.");
        break;
    }
    case 343068:
    {
        returnValue = F("Zeltinger Weg");
        break;
    }
    case 343069:
    {
        returnValue = F("Zeltlager (beim 24h-Lauf)");
        break;
    }
    case 343070:
    {
        returnValue = F("Zeltnerplatz");
        break;
    }
    case 343071:
    {
        returnValue = F("Zeltnerstr.");
        break;
    }
    case 343072:
    {
        returnValue = F("Zeltplatz");
        break;
    }
    case 343073:
    {
        returnValue = F("Zeltplatzstr.");
        break;
    }
    case 343074:
    {
        returnValue = F("Zeltplatzweg");
        break;
    }
    case 343075:
    {
        returnValue = F("Zeltweg");
        break;
    }
    case 343076:
    {
        returnValue = F("Zeltwiese Am Schacht");
        break;
    }
    case 343077:
    {
        returnValue = F("Zelzater Str.");
        break;
    }
    case 343078:
    {
        returnValue = F("Zelzer Str.");
        break;
    }
    case 343079:
    {
        returnValue = F("Zembergweg");
        break;
    }
    case 343080:
    {
        returnValue = F("Zembschener Weg");
        break;
    }
    case 343081:
    {
        returnValue = F("Zementdörfle");
        break;
    }
    case 343082:
    {
        returnValue = F("Zementfabrik");
        break;
    }
    case 343083:
    {
        returnValue = F("Zementstr.");
        break;
    }
    case 343084:
    {
        returnValue = F("Zementwerk");
        break;
    }
    case 343085:
    {
        returnValue = F("Zementwerkstr.");
        break;
    }
    case 343086:
    {
        returnValue = F("Zemerweg");
        break;
    }
    case 343087:
    {
        returnValue = F("Zemmerer Str.");
        break;
    }
    case 343088:
    {
        returnValue = F("Zemmeweg");
        break;
    }
    case 343089:
    {
        returnValue = F("Zemminer Weg");
        break;
    }
    case 343090:
    {
        returnValue = F("Zemminerseestr.");
        break;
    }
    case 343091:
    {
        returnValue = F("Zemnick");
        break;
    }
    case 343092:
    {
        returnValue = F("Zempiner Str.");
        break;
    }
    case 343093:
    {
        returnValue = F("Zempiner Weg");
        break;
    }
    case 343094:
    {
        returnValue = F("Zempower Dorfstr.");
        break;
    }
    case 343095:
    {
        returnValue = F("Zempower Weg");
        break;
    }
    case 343096:
    {
        returnValue = F("Zenchinger Str.");
        break;
    }
    case 343097:
    {
        returnValue = F("Zenchinger Weg");
        break;
    }
    case 343098:
    {
        returnValue = F("Zenelliring");
        break;
    }
    case 343099:
    {
        returnValue = F("Zenettiplatz");
        break;
    }
    case 343100:
    {
        returnValue = F("Zenettistr.");
        break;
    }
    case 343101:
    {
        returnValue = F("Zenger Moos");
        break;
    }
    case 343102:
    {
        returnValue = F("Zenger Str.");
        break;
    }
    case 343103:
    {
        returnValue = F("Zengergasse");
        break;
    }
    case 343104:
    {
        returnValue = F("Zengerhof");
        break;
    }
    case 343105:
    {
        returnValue = F("Zengerlestr.");
        break;
    }
    case 343106:
    {
        returnValue = F("Zengerstr.");
        break;
    }
    case 343107:
    {
        returnValue = F("Zengerweg");
        break;
    }
    case 343108:
    {
        returnValue = F("Zengerweiherweg");
        break;
    }
    case 343109:
    {
        returnValue = F("Zenith-Str.");
        break;
    }
    case 343110:
    {
        returnValue = F("Zenkergasse");
        break;
    }
    case 343111:
    {
        returnValue = F("Zenkergäßchen");
        break;
    }
    case 343112:
    {
        returnValue = F("Zenkerstr.");
        break;
    }
    case 343113:
    {
        returnValue = F("Zenkerweg");
        break;
    }
    case 343114:
    {
        returnValue = F("Zenkhof");
        break;
    }
    case 343115:
    {
        returnValue = F("Zenlinweg");
        break;
    }
    case 343116:
    {
        returnValue = F("Zennerberg");
        break;
    }
    case 343117:
    {
        returnValue = F("Zennerbrücke");
        break;
    }
    case 343118:
    {
        returnValue = F("Zennerlberg");
        break;
    }
    case 343119:
    {
        returnValue = F("Zennernweg");
        break;
    }
    case 343120:
    {
        returnValue = F("Zennerstr.");
        break;
    }
    case 343121:
    {
        returnValue = F("Zennerwiesen");
        break;
    }
    case 343122:
    {
        returnValue = F("Zennewitzer Platz");
        break;
    }
    case 343123:
    {
        returnValue = F("Zennewitzer Str.");
        break;
    }
    case 343124:
    {
        returnValue = F("Zennhäuser Weg");
        break;
    }
    case 343125:
    {
        returnValue = F("Zennigsweg");
        break;
    }
    case 343126:
    {
        returnValue = F("Zennoase");
        break;
    }
    case 343127:
    {
        returnValue = F("Zenntalradweg");
        break;
    }
    case 343128:
    {
        returnValue = F("Zennweg");
        break;
    }
    case 343129:
    {
        returnValue = F("Zeno-Diemer-Str.");
        break;
    }
    case 343130:
    {
        returnValue = F("Zeno-Kern-Str.");
        break;
    }
    case 343131:
    {
        returnValue = F("Zeno-Pfest-Str.");
        break;
    }
    case 343132:
    {
        returnValue = F("Zeno-Platz");
        break;
    }
    case 343133:
    {
        returnValue = F("Zenomttleweg");
        break;
    }
    case 343134:
    {
        returnValue = F("Zenostr.");
        break;
    }
    case 343135:
    {
        returnValue = F("Zenoweg");
        break;
    }
    case 343136:
    {
        returnValue = F("Zensenweg");
        break;
    }
    case 343137:
    {
        returnValue = F("Zenser Str.");
        break;
    }
    case 343138:
    {
        returnValue = F("Zenser Weg");
        break;
    }
    case 343139:
    {
        returnValue = F("Zenshäuschen");
        break;
    }
    case 343140:
    {
        returnValue = F("Zensweg");
        break;
    }
    case 343141:
    {
        returnValue = F("Zenta-Kopp-Gastl-Weg");
        break;
    }
    case 343142:
    {
        returnValue = F("Zenta-Maurina-Weg");
        break;
    }
    case 343143:
    {
        returnValue = F("Zentastr.");
        break;
    }
    case 343144:
    {
        returnValue = F("Zentaurenstr.");
        break;
    }
    case 343145:
    {
        returnValue = F("Zentaurstr.");
        break;
    }
    case 343146:
    {
        returnValue = F("Zentbechhofener Str.");
        break;
    }
    case 343147:
    {
        returnValue = F("Zentenbüsch");
        break;
    }
    case 343148:
    {
        returnValue = F("Zentendorfer Str.");
        break;
    }
    case 343149:
    {
        returnValue = F("Zenter Str.");
        break;
    }
    case 343150:
    {
        returnValue = F("Zentgasse");
        break;
    }
    case 343151:
    {
        returnValue = F("Zentgraben");
        break;
    }
    case 343152:
    {
        returnValue = F("Zentgrafenstr.");
        break;
    }
    case 343153:
    {
        returnValue = F("Zentgrafstr.");
        break;
    }
    case 343154:
    {
        returnValue = F("Zentheckenweg");
        break;
    }
    case 343155:
    {
        returnValue = F("Zenthofstr.");
        break;
    }
    case 343156:
    {
        returnValue = F("Zentmarkweg");
        break;
    }
    case 343157:
    {
        returnValue = F("Zentnerstr.");
        break;
    }
    case 343158:
    {
        returnValue = F("Zentraler Omnibusbahnhof");
        break;
    }
    case 343159:
    {
        returnValue = F("Zentraler Platz");
        break;
    }
    case 343160:
    {
        returnValue = F("Zentrales Umspannwerk");
        break;
    }
    case 343161:
    {
        returnValue = F("Zentralhof");
        break;
    }
    case 343162:
    {
        returnValue = F("Zentralländstr.");
        break;
    }
    case 343163:
    {
        returnValue = F("Zentralpark");
        break;
    }
    case 343164:
    {
        returnValue = F("Zentralpark Fürstenzell");
        break;
    }
    case 343165:
    {
        returnValue = F("Zentralplatz");
        break;
    }
    case 343166:
    {
        returnValue = F("Zentralschulplatz");
        break;
    }
    case 343167:
    {
        returnValue = F("Zentralschulweg");
        break;
    }
    case 343168:
    {
        returnValue = F("Zentralstr.");
        break;
    }
    case 343169:
    {
        returnValue = F("Zentralweg");
        break;
    }
    case 343170:
    {
        returnValue = F("Zentrum");
        break;
    }
    case 343171:
    {
        returnValue = F("Zentrum für Psychiatrie Winnenden");
        break;
    }
    case 343172:
    {
        returnValue = F("Zentrumspassage");
        break;
    }
    case 343173:
    {
        returnValue = F("Zentrumstr.");
        break;
    }
    case 343174:
    {
        returnValue = F("Zentstr.");
        break;
    }
    case 343175:
    {
        returnValue = F("Zentturmstr.");
        break;
    }
    case 343176:
    {
        returnValue = F("Zentweg");
        break;
    }
    case 343177:
    {
        returnValue = F("Zentwinkelsweg");
        break;
    }
    case 343178:
    {
        returnValue = F("Zenzing");
        break;
    }
    case 343179:
    {
        returnValue = F("Zenzl-Mühsam-Str.");
        break;
    }
    case 343180:
    {
        returnValue = F("Zepeliner Str.");
        break;
    }
    case 343181:
    {
        returnValue = F("Zepernicker Str.");
        break;
    }
    case 343182:
    {
        returnValue = F("Zepfenhaner Str.");
        break;
    }
    case 343183:
    {
        returnValue = F("Zepherinusweg");
        break;
    }
    case 343184:
    {
        returnValue = F("Zeppelin-Park");
        break;
    }
    case 343185:
    {
        returnValue = F("Zeppelin-Ring");
        break;
    }
    case 343186:
    {
        returnValue = F("Zeppelin-Str.");
        break;
    }
    case 343187:
    {
        returnValue = F("Zeppelinallee");
        break;
    }
    case 343188:
    {
        returnValue = F("Zeppelindamm");
        break;
    }
    case 343189:
    {
        returnValue = F("Zeppelinhof");
        break;
    }
    case 343190:
    {
        returnValue = F("Zeppelinpark");
        break;
    }
    case 343191:
    {
        returnValue = F("Zeppelinplatz");
        break;
    }
    case 343192:
    {
        returnValue = F("Zeppelinpromenade");
        break;
    }
    case 343193:
    {
        returnValue = F("Zeppelinring");
        break;
    }
    case 343194:
    {
        returnValue = F("Zeppelinstr.");
        break;
    }
    case 343195:
    {
        returnValue = F("Zeppelinstrasße");
        break;
    }
    case 343196:
    {
        returnValue = F("Zeppelinufer");
        break;
    }
    case 343197:
    {
        returnValue = F("Zeppelinweg");
        break;
    }
    case 343198:
    {
        returnValue = F("Zeppellinstr.");
        break;
    }
    case 343199:
    {
        returnValue = F("Zeppenfeldtstr.");
        break;
    }
    case 343200:
    {
        returnValue = F("Zeppengasse");
        break;
    }
    case 343201:
    {
        returnValue = F("Zeppenheimer Dorfstr.");
        break;
    }
    case 343202:
    {
        returnValue = F("Zeppenheimer Str.");
        break;
    }
    case 343203:
    {
        returnValue = F("Zeppenheimer Viehstr.");
        break;
    }
    case 343204:
    {
        returnValue = F("Zeppenheimer Weg");
        break;
    }
    case 343205:
    {
        returnValue = F("Zeppenweg");
        break;
    }
    case 343206:
    {
        returnValue = F("Zeppernicker Weg");
        break;
    }
    case 343207:
    {
        returnValue = F("Zepperstr.");
        break;
    }
    case 343208:
    {
        returnValue = F("Zepperweg");
        break;
    }
    case 343209:
    {
        returnValue = F("Zepterstr.");
        break;
    }
    case 343210:
    {
        returnValue = F("Zerbener Str.");
        break;
    }
    case 343211:
    {
        returnValue = F("Zerberusstr.");
        break;
    }
    case 343212:
    {
        returnValue = F("Zerbich");
        break;
    }
    case 343213:
    {
        returnValue = F("Zerbster Chaussee");
        break;
    }
    case 343214:
    {
        returnValue = F("Zerbster Str.");
        break;
    }
    case 343215:
    {
        returnValue = F("Zerbster Weg");
        break;
    }
    case 343216:
    {
        returnValue = F("Zerfer Str.");
        break;
    }
    case 343217:
    {
        returnValue = F("Zerfer Weg");
        break;
    }
    case 343218:
    {
        returnValue = F("Zergleweg");
        break;
    }
    case 343219:
    {
        returnValue = F("Zerhusenstr.");
        break;
    }
    case 343220:
    {
        returnValue = F("Zerkaller Str.");
        break;
    }
    case 343221:
    {
        returnValue = F("Zerlachweg");
        break;
    }
    case 343222:
    {
        returnValue = F("Zermatter Klause");
        break;
    }
    case 343223:
    {
        returnValue = F("Zermatter Str.");
        break;
    }
    case 343224:
    {
        returnValue = F("Zernaer Str.");
        break;
    }
    case 343225:
    {
        returnValue = F("Zerneer Str.");
        break;
    }
    case 343226:
    {
        returnValue = F("Zernerweg");
        break;
    }
    case 343227:
    {
        returnValue = F("Zernickow");
        break;
    }
    case 343228:
    {
        returnValue = F("Zernickower Str.");
        break;
    }
    case 343229:
    {
        returnValue = F("Zerniener Str.");
        break;
    }
    case 343230:
    {
        returnValue = F("Zernikower Str.");
        break;
    }
    case 343231:
    {
        returnValue = F("Zerniner Str.");
        break;
    }
    case 343232:
    {
        returnValue = F("Zerninstr.");
        break;
    }
    case 343233:
    {
        returnValue = F("Zernitzer Dorfstr.");
        break;
    }
    case 343234:
    {
        returnValue = F("Zernitzer Str.");
        break;
    }
    case 343235:
    {
        returnValue = F("Zernitzer Weg");
        break;
    }
    case 343236:
    {
        returnValue = F("Zernitzpark");
        break;
    }
    case 343237:
    {
        returnValue = F("Zernowweg");
        break;
    }
    case 343238:
    {
        returnValue = F("Zernsdorfer Str.");
        break;
    }
    case 343239:
    {
        returnValue = F("Zernseeweg");
        break;
    }
    case 343240:
    {
        returnValue = F("Zernstr.");
        break;
    }
    case 343241:
    {
        returnValue = F("Zerpenschleusener Chaussee");
        break;
    }
    case 343242:
    {
        returnValue = F("Zerpenschleuser Chaussee");
        break;
    }
    case 343243:
    {
        returnValue = F("Zerpenschleuser Str.");
        break;
    }
    case 343244:
    {
        returnValue = F("Zerrahns Gang");
        break;
    }
    case 343245:
    {
        returnValue = F("Zerraschweg");
        break;
    }
    case 343246:
    {
        returnValue = F("Zerrennerstr.");
        break;
    }
    case 343247:
    {
        returnValue = F("Zerrenthiner Str.");
        break;
    }
    case 343248:
    {
        returnValue = F("Zerrer Weg");
        break;
    }
    case 343249:
    {
        returnValue = F("Zerrespfad");
        break;
    }
    case 343250:
    {
        returnValue = F("Zerresweg");
        break;
    }
    case 343251:
    {
        returnValue = F("Zerrstr.");
        break;
    }
    case 343252:
    {
        returnValue = F("Zerstörte Planfließbrücke");
        break;
    }
    case 343253:
    {
        returnValue = F("Zerwasstr.");
        break;
    }
    case 343254:
    {
        returnValue = F("Zerwelin");
        break;
    }
    case 343255:
    {
        returnValue = F("Zerzabelshofer Hauptstr.");
        break;
    }
    case 343256:
    {
        returnValue = F("Zerzabelshofstr.");
        break;
    }
    case 343257:
    {
        returnValue = F("Zeschaer Str.");
        break;
    }
    case 343258:
    {
        returnValue = F("Zeschdorfer Str.");
        break;
    }
    case 343259:
    {
        returnValue = F("Zescher Str.");
        break;
    }
    case 343260:
    {
        returnValue = F("Zescher Waldweg");
        break;
    }
    case 343261:
    {
        returnValue = F("Zescher Weg");
        break;
    }
    case 343262:
    {
        returnValue = F("Zeschniger Ortseinfahrt");
        break;
    }
    case 343263:
    {
        returnValue = F("Zeschwitz");
        break;
    }
    case 343264:
    {
        returnValue = F("Zeschwitzer Str.");
        break;
    }
    case 343265:
    {
        returnValue = F("Zesen-Gedenkweg");
        break;
    }
    case 343266:
    {
        returnValue = F("Zesenplatz");
        break;
    }
    case 343267:
    {
        returnValue = F("Zessin");
        break;
    }
    case 343268:
    {
        returnValue = F("Zetastr.");
        break;
    }
    case 343269:
    {
        returnValue = F("Zeteler Str.");
        break;
    }
    case 343270:
    {
        returnValue = F("Zeteler Tuch");
        break;
    }
    case 343271:
    {
        returnValue = F("Zeteler Weg");
        break;
    }
    case 343272:
    {
        returnValue = F("Zetelermarsch");
        break;
    }
    case 343273:
    {
        returnValue = F("Zethau");
        break;
    }
    case 343274:
    {
        returnValue = F("Zethauer Str.");
        break;
    }
    case 343275:
    {
        returnValue = F("Zethlinger Weg");
        break;
    }
    case 343276:
    {
        returnValue = F("Zetkinstr.");
        break;
    }
    case 343277:
    {
        returnValue = F("Zetkinweg");
        break;
    }
    case 343278:
    {
        returnValue = F("Zetta");
        break;
    }
    case 343279:
    {
        returnValue = F("Zettaer Str.");
        break;
    }
    case 343280:
    {
        returnValue = F("Zettelbachweg");
        break;
    }
    case 343281:
    {
        returnValue = F("Zettelberggestell");
        break;
    }
    case 343282:
    {
        returnValue = F("Zettelbergweg");
        break;
    }
    case 343283:
    {
        returnValue = F("Zettelhalde");
        break;
    }
    case 343284:
    {
        returnValue = F("Zettelmattstr.");
        break;
    }
    case 343285:
    {
        returnValue = F("Zettelsdorf");
        break;
    }
    case 343286:
    {
        returnValue = F("Zettelsteig");
        break;
    }
    case 343287:
    {
        returnValue = F("Zetteminer Str.");
        break;
    }
    case 343288:
    {
        returnValue = F("Zetten");
        break;
    }
    case 343289:
    {
        returnValue = F("Zetterberg");
        break;
    }
    case 343290:
    {
        returnValue = F("Zetteritzer Str.");
        break;
    }
    case 343291:
    {
        returnValue = F("Zettinger Str.");
        break;
    }
    case 343292:
    {
        returnValue = F("Zettischer Str.");
        break;
    }
    case 343293:
    {
        returnValue = F("Zettlaign");
        break;
    }
    case 343294:
    {
        returnValue = F("Zettlarsgrüner Str.");
        break;
    }
    case 343295:
    {
        returnValue = F("Zettlerstr.");
        break;
    }
    case 343296:
    {
        returnValue = F("Zettlersweg");
        break;
    }
    case 343297:
    {
        returnValue = F("Zettlitz");
        break;
    }
    case 343298:
    {
        returnValue = F("Zettlitzer Hauptstr.");
        break;
    }
    case 343299:
    {
        returnValue = F("Zettlitzer Str.");
        break;
    }
    case 343300:
    {
        returnValue = F("Zettlitzweg");
        break;
    }
    case 343301:
    {
        returnValue = F("Zettlstr.");
        break;
    }
    case 343302:
    {
        returnValue = F("Zettlweg");
        break;
    }
    case 343303:
    {
        returnValue = F("Zettmannsdorfer Hauptstr.");
        break;
    }
    case 343304:
    {
        returnValue = F("Zettmannsdorfer Str.");
        break;
    }
    case 343305:
    {
        returnValue = F("Zettrichshausen");
        break;
    }
    case 343306:
    {
        returnValue = F("Zettweiler Anger");
        break;
    }
    case 343307:
    {
        returnValue = F("Zettweiler Dorfstr.");
        break;
    }
    case 343308:
    {
        returnValue = F("Zettweiler Hauptstr.");
        break;
    }
    case 343309:
    {
        returnValue = F("Zettweiler Mittelstr.");
        break;
    }
    case 343310:
    {
        returnValue = F("Zetzschaer Str.");
        break;
    }
    case 343311:
    {
        returnValue = F("Zetzschdorf");
        break;
    }
    case 343312:
    {
        returnValue = F("Zetzschdorfer Weg");
        break;
    }
    case 343313:
    {
        returnValue = F("Zetzscher Gasse");
        break;
    }
    case 343314:
    {
        returnValue = F("Zeubach");
        break;
    }
    case 343315:
    {
        returnValue = F("Zeubacher Str.");
        break;
    }
    case 343316:
    {
        returnValue = F("Zeubelrieder Steige");
        break;
    }
    case 343317:
    {
        returnValue = F("Zeuchfelder Str.");
        break;
    }
    case 343318:
    {
        returnValue = F("Zeuchfelder Weg");
        break;
    }
    case 343319:
    {
        returnValue = F("Zeuckritzer Str.");
        break;
    }
    case 343320:
    {
        returnValue = F("Zeudener Dorfstr.");
        break;
    }
    case 343321:
    {
        returnValue = F("Zeudener Str.");
        break;
    }
    case 343322:
    {
        returnValue = F("Zeudener Weg");
        break;
    }
    case 343323:
    {
        returnValue = F("Zeuggasse");
        break;
    }
    case 343324:
    {
        returnValue = F("Zeuggrabenweg");
        break;
    }
    case 343325:
    {
        returnValue = F("Zeughausgarten");
        break;
    }
    case 343326:
    {
        returnValue = F("Zeughausgasse");
        break;
    }
    case 343327:
    {
        returnValue = F("Zeughausgässele");
        break;
    }
    case 343328:
    {
        returnValue = F("Zeughausplan");
        break;
    }
    case 343329:
    {
        returnValue = F("Zeughausplatz");
        break;
    }
    case 343330:
    {
        returnValue = F("Zeughausrasen");
        break;
    }
    case 343331:
    {
        returnValue = F("Zeughausstr.");
        break;
    }
    case 343332:
    {
        returnValue = F("Zeughausweg");
        break;
    }
    case 343333:
    {
        returnValue = F("Zeughof");
        break;
    }
    case 343334:
    {
        returnValue = F("Zeuglesweberweg");
        break;
    }
    case 343335:
    {
        returnValue = F("Zeugmantel");
        break;
    }
    case 343336:
    {
        returnValue = F("Zeugplatz");
        break;
    }
    case 343337:
    {
        returnValue = F("Zeugstr.");
        break;
    }
    case 343338:
    {
        returnValue = F("Zeulenrodaer Str.");
        break;
    }
    case 343339:
    {
        returnValue = F("Zeulichweg");
        break;
    }
    case 343340:
    {
        returnValue = F("Zeulmannweg");
        break;
    }
    case 343341:
    {
        returnValue = F("Zeulnweg");
        break;
    }
    case 343342:
    {
        returnValue = F("Zeulsdorf");
        break;
    }
    case 343343:
    {
        returnValue = F("Zeulsdorfer Str.");
        break;
    }
    case 343344:
    {
        returnValue = F("Zeuläckerstr.");
        break;
    }
    case 343345:
    {
        returnValue = F("Zeumerstr.");
        break;
    }
    case 343346:
    {
        returnValue = F("Zeundorfer Str.");
        break;
    }
    case 343347:
    {
        returnValue = F("Zeunershög");
        break;
    }
    case 343348:
    {
        returnValue = F("Zeunerstr.");
        break;
    }
    case 343349:
    {
        returnValue = F("Zeunerweg");
        break;
    }
    case 343350:
    {
        returnValue = F("Zeunfeldstr.");
        break;
    }
    case 343351:
    {
        returnValue = F("Zeunitz");
        break;
    }
    case 343352:
    {
        returnValue = F("Zeunitzer Str.");
        break;
    }
    case 343353:
    {
        returnValue = F("Zeurengasse");
        break;
    }
    case 343354:
    {
        returnValue = F("Zeusgraben");
        break;
    }
    case 343355:
    {
        returnValue = F("Zeusstr.");
        break;
    }
    case 343356:
    {
        returnValue = F("Zeust");
        break;
    }
    case 343357:
    {
        returnValue = F("Zeusweg");
        break;
    }
    case 343358:
    {
        returnValue = F("Zeuterner Dschungelweg");
        break;
    }
    case 343359:
    {
        returnValue = F("Zeuterner Str.");
        break;
    }
    case 343360:
    {
        returnValue = F("Zeuthener Str.");
        break;
    }
    case 343361:
    {
        returnValue = F("Zevenaarer Str.");
        break;
    }
    case 343362:
    {
        returnValue = F("Zevenaarstr.");
        break;
    }
    case 343363:
    {
        returnValue = F("Zevener Landstr.");
        break;
    }
    case 343364:
    {
        returnValue = F("Zevener Ring");
        break;
    }
    case 343365:
    {
        returnValue = F("Zevener Str.");
        break;
    }
    case 343366:
    {
        returnValue = F("Zewegasse");
        break;
    }
    case 343367:
    {
        returnValue = F("Zewenberg");
        break;
    }
    case 343368:
    {
        returnValue = F("Zewener Str.");
        break;
    }
    case 343369:
    {
        returnValue = F("Zeyestr.");
        break;
    }
    case 343370:
    {
        returnValue = F("Zeyher-Sträßchen");
        break;
    }
    case 343371:
    {
        returnValue = F("Zeyherstr.");
        break;
    }
    case 343372:
    {
        returnValue = F("Zeyherweg");
        break;
    }
    case 343373:
    {
        returnValue = F("Zeystr.");
        break;
    }
    case 343374:
    {
        returnValue = F("Zeßmannsrieth");
        break;
    }
    case 343375:
    {
        returnValue = F("Zi 9");
        break;
    }
    case 343376:
    {
        returnValue = F("Ziallernser Weg");
        break;
    }
    case 343377:
    {
        returnValue = F("Zibardenweg");
        break;
    }
    case 343378:
    {
        returnValue = F("Zibatenweg");
        break;
    }
    case 343379:
    {
        returnValue = F("Zibbericker Str.");
        break;
    }
    case 343380:
    {
        returnValue = F("Zicherieer Str.");
        break;
    }
    case 343381:
    {
        returnValue = F("Zichorieneck");
        break;
    }
    case 343382:
    {
        returnValue = F("Zichorienstr.");
        break;
    }
    case 343383:
    {
        returnValue = F("Zichower Weg");
        break;
    }
    case 343384:
    {
        returnValue = F("Zichtauer Str.");
        break;
    }
    case 343385:
    {
        returnValue = F("Zichtauer Weg");
        break;
    }
    case 343386:
    {
        returnValue = F("Zichterstr.");
        break;
    }
    case 343387:
    {
        returnValue = F("Zichterweg");
        break;
    }
    case 343388:
    {
        returnValue = F("Zichtow");
        break;
    }
    case 343389:
    {
        returnValue = F("Zick");
        break;
    }
    case 343390:
    {
        returnValue = F("Zick-Zack Weg");
        break;
    }
    case 343391:
    {
        returnValue = F("Zick-Zack-Promenade");
        break;
    }
    case 343392:
    {
        returnValue = F("Zick-Zack-Weg");
        break;
    }
    case 343393:
    {
        returnValue = F("ZickZackweg");
        break;
    }
    case 343394:
    {
        returnValue = F("Zickelbachstr.");
        break;
    }
    case 343395:
    {
        returnValue = F("Zickenberg");
        break;
    }
    case 343396:
    {
        returnValue = F("Zickenbrink");
        break;
    }
    case 343397:
    {
        returnValue = F("Zickengasse");
        break;
    }
    case 343398:
    {
        returnValue = F("Zicker");
        break;
    }
    case 343399:
    {
        returnValue = F("Zickerickstr.");
        break;
    }
    case 343400:
    {
        returnValue = F("Zickeritz");
        break;
    }
    case 343401:
    {
        returnValue = F("Zickra");
        break;
    }
    case 343402:
    {
        returnValue = F("Zickstallweg");
        break;
    }
    case 343403:
    {
        returnValue = F("Zickstr.");
        break;
    }
    case 343404:
    {
        returnValue = F("Zickweg");
        break;
    }
    case 343405:
    {
        returnValue = F("Zickzack");
        break;
    }
    case 343406:
    {
        returnValue = F("Zickzack-Weg");
        break;
    }
    case 343407:
    {
        returnValue = F("Zickzackredder");
        break;
    }
    case 343408:
    {
        returnValue = F("Zickzackweg");
        break;
    }
    case 343409:
    {
        returnValue = F("Zickzackwegle");
        break;
    }
    case 343410:
    {
        returnValue = F("Ziddelrasen");
        break;
    }
    case 343411:
    {
        returnValue = F("Ziddelstr.");
        break;
    }
    case 343412:
    {
        returnValue = F("Ziebigker Str.");
        break;
    }
    case 343413:
    {
        returnValue = F("Zieblandstr.");
        break;
    }
    case 343414:
    {
        returnValue = F("Zieboldsgasse");
        break;
    }
    case 343415:
    {
        returnValue = F("Zieburgstr.");
        break;
    }
    case 343416:
    {
        returnValue = F("Ziech");
        break;
    }
    case 343417:
    {
        returnValue = F("Ziechhausweg");
        break;
    }
    case 343418:
    {
        returnValue = F("Ziechstr.");
        break;
    }
    case 343419:
    {
        returnValue = F("Zieckau");
        break;
    }
    case 343420:
    {
        returnValue = F("Zieckauer Chaussee");
        break;
    }
    case 343421:
    {
        returnValue = F("Zieckauer Str.");
        break;
    }
    case 343422:
    {
        returnValue = F("Zieditzer Str.");
        break;
    }
    case 343423:
    {
        returnValue = F("Ziefer-Spange");
        break;
    }
    case 343424:
    {
        returnValue = F("Zieflensberg");
        break;
    }
    case 343425:
    {
        returnValue = F("Ziefles Weg");
        break;
    }
    case 343426:
    {
        returnValue = F("Ziefleweg");
        break;
    }
    case 343427:
    {
        returnValue = F("Ziegbachweg");
        break;
    }
    case 343428:
    {
        returnValue = F("Ziegelacker");
        break;
    }
    case 343429:
    {
        returnValue = F("Ziegelackerstr.");
        break;
    }
    case 343430:
    {
        returnValue = F("Ziegelackerweg");
        break;
    }
    case 343431:
    {
        returnValue = F("Ziegelanger");
        break;
    }
    case 343432:
    {
        returnValue = F("Ziegelangerbergweg");
        break;
    }
    case 343433:
    {
        returnValue = F("Ziegelangerweg");
        break;
    }
    case 343434:
    {
        returnValue = F("Ziegelaue");
        break;
    }
    case 343435:
    {
        returnValue = F("Ziegelaustr.");
        break;
    }
    case 343436:
    {
        returnValue = F("Ziegelbach");
        break;
    }
    case 343437:
    {
        returnValue = F("Ziegelbacher Str.");
        break;
    }
    case 343438:
    {
        returnValue = F("Ziegelbachklinge");
        break;
    }
    case 343439:
    {
        returnValue = F("Ziegelbachstr.");
        break;
    }
    case 343440:
    {
        returnValue = F("Ziegelbahn");
        break;
    }
    case 343441:
    {
        returnValue = F("Ziegelberg");
        break;
    }
    case 343442:
    {
        returnValue = F("Ziegelberger Str.");
        break;
    }
    case 343443:
    {
        returnValue = F("Ziegelbergstr.");
        break;
    }
    case 343444:
    {
        returnValue = F("Ziegelbergsweg");
        break;
    }
    case 343445:
    {
        returnValue = F("Ziegelbergtunnel");
        break;
    }
    case 343446:
    {
        returnValue = F("Ziegelbergweg");
        break;
    }
    case 343447:
    {
        returnValue = F("Ziegelborn");
        break;
    }
    case 343448:
    {
        returnValue = F("Ziegelbornstr.");
        break;
    }
    case 343449:
    {
        returnValue = F("Ziegelbrandstr.");
        break;
    }
    case 343450:
    {
        returnValue = F("Ziegelbreite");
        break;
    }
    case 343451:
    {
        returnValue = F("Ziegelbrennerstr.");
        break;
    }
    case 343452:
    {
        returnValue = F("Ziegelbrennerweg");
        break;
    }
    case 343453:
    {
        returnValue = F("Ziegelbrockenweg");
        break;
    }
    case 343454:
    {
        returnValue = F("Ziegelbronner Str.");
        break;
    }
    case 343455:
    {
        returnValue = F("Ziegelbruch");
        break;
    }
    case 343456:
    {
        returnValue = F("Ziegelbruchweg");
        break;
    }
    case 343457:
    {
        returnValue = F("Ziegelbrunnen");
        break;
    }
    case 343458:
    {
        returnValue = F("Ziegelbrunnenstr.");
        break;
    }
    case 343459:
    {
        returnValue = F("Ziegelbrücke");
        break;
    }
    case 343460:
    {
        returnValue = F("Ziegelbuck");
        break;
    }
    case 343461:
    {
        returnValue = F("Ziegelbuckel");
        break;
    }
    case 343462:
    {
        returnValue = F("Ziegelbuckweg");
        break;
    }
    case 343463:
    {
        returnValue = F("Ziegelburgstr.");
        break;
    }
    case 343464:
    {
        returnValue = F("Ziegelburren");
        break;
    }
    case 343465:
    {
        returnValue = F("Ziegelbusch");
        break;
    }
    case 343466:
    {
        returnValue = F("Ziegelbuschweg");
        break;
    }
    case 343467:
    {
        returnValue = F("Ziegelbäckerweg");
        break;
    }
    case 343468:
    {
        returnValue = F("Ziegelbühlstr.");
        break;
    }
    case 343469:
    {
        returnValue = F("Ziegeldamm");
        break;
    }
    case 343470:
    {
        returnValue = F("Ziegeldobel");
        break;
    }
    case 343471:
    {
        returnValue = F("Ziegeldumpf");
        break;
    }
    case 343472:
    {
        returnValue = F("Ziegeleckstr.");
        break;
    }
    case 343473:
    {
        returnValue = F("Ziegelei");
        break;
    }
    case 343474:
    {
        returnValue = F("Ziegelei Ausbau");
        break;
    }
    case 343475:
    {
        returnValue = F("Ziegelei Frank");
        break;
    }
    case 343476:
    {
        returnValue = F("Ziegelei Rote Burg");
        break;
    }
    case 343477:
    {
        returnValue = F("Ziegelei Werk Abt. 3");
        break;
    }
    case 343478:
    {
        returnValue = F("Ziegelei-Allee");
        break;
    }
    case 343479:
    {
        returnValue = F("Ziegelei-Privatweg");
        break;
    }
    case 343480:
    {
        returnValue = F("Ziegelei-Ring");
        break;
    }
    case 343481:
    {
        returnValue = F("Ziegelei-Töpker-Str.");
        break;
    }
    case 343482:
    {
        returnValue = F("Ziegelei-Weg");
        break;
    }
    case 343483:
    {
        returnValue = F("Ziegeleiberg");
        break;
    }
    case 343484:
    {
        returnValue = F("Ziegeleibrücke");
        break;
    }
    case 343485:
    {
        returnValue = F("Ziegeleidamm");
        break;
    }
    case 343486:
    {
        returnValue = F("Ziegeleiende");
        break;
    }
    case 343487:
    {
        returnValue = F("Ziegeleienpark");
        break;
    }
    case 343488:
    {
        returnValue = F("Ziegeleier Str.");
        break;
    }
    case 343489:
    {
        returnValue = F("Ziegeleifeld");
        break;
    }
    case 343490:
    {
        returnValue = F("Ziegeleigasse");
        break;
    }
    case 343491:
    {
        returnValue = F("Ziegeleigrund");
        break;
    }
    case 343492:
    {
        returnValue = F("Ziegeleihof");
        break;
    }
    case 343493:
    {
        returnValue = F("Ziegeleipark");
        break;
    }
    case 343494:
    {
        returnValue = F("Ziegeleipfad");
        break;
    }
    case 343495:
    {
        returnValue = F("Ziegeleiplatz");
        break;
    }
    case 343496:
    {
        returnValue = F("Ziegeleiring");
        break;
    }
    case 343497:
    {
        returnValue = F("Ziegeleistr.");
        break;
    }
    case 343498:
    {
        returnValue = F("Ziegeleiweg");
        break;
    }
    case 343499:
    {
        returnValue = F("Ziegeleiwiese");
        break;
    }
    case 343500:
    {
        returnValue = F("Ziegelellern");
        break;
    }
    case 343501:
    {
        returnValue = F("Ziegeler Str.");
        break;
    }
    case 343502:
    {
        returnValue = F("Ziegeler Weg");
        break;
    }
    case 343503:
    {
        returnValue = F("Ziegelerden");
        break;
    }
    case 343504:
    {
        returnValue = F("Ziegelespan");
        break;
    }
    case 343505:
    {
        returnValue = F("Ziegelfeld");
        break;
    }
    case 343506:
    {
        returnValue = F("Ziegelfeldstr.");
        break;
    }
    case 343507:
    {
        returnValue = F("Ziegelfeldweg");
        break;
    }
    case 343508:
    {
        returnValue = F("Ziegelfichtenweg");
        break;
    }
    case 343509:
    {
        returnValue = F("Ziegelgarten");
        break;
    }
    case 343510:
    {
        returnValue = F("Ziegelgartenstr.");
        break;
    }
    case 343511:
    {
        returnValue = F("Ziegelgasse");
        break;
    }
    case 343512:
    {
        returnValue = F("Ziegelgassla");
        break;
    }
    case 343513:
    {
        returnValue = F("Ziegelgestell");
        break;
    }
    case 343514:
    {
        returnValue = F("Ziegelgraben");
        break;
    }
    case 343515:
    {
        returnValue = F("Ziegelgrubenstr.");
        break;
    }
    case 343516:
    {
        returnValue = F("Ziegelgrund");
        break;
    }
    case 343517:
    {
        returnValue = F("Ziegelgrundweg");
        break;
    }
    case 343518:
    {
        returnValue = F("Ziegelgärten");
        break;
    }
    case 343519:
    {
        returnValue = F("Ziegelgärtenstr.");
        break;
    }
    case 343520:
    {
        returnValue = F("Ziegelgärtenweg");
        break;
    }
    case 343521:
    {
        returnValue = F("Ziegelgässle");
        break;
    }
    case 343522:
    {
        returnValue = F("Ziegelhalde");
        break;
    }
    case 343523:
    {
        returnValue = F("Ziegelhaldenstr.");
        break;
    }
    case 343524:
    {
        returnValue = F("Ziegelhaldenweg");
        break;
    }
    case 343525:
    {
        returnValue = F("Ziegelhaldeweg");
        break;
    }
    case 343526:
    {
        returnValue = F("Ziegelhausener Str.");
        break;
    }
    case 343527:
    {
        returnValue = F("Ziegelhauserhof");
        break;
    }
    case 343528:
    {
        returnValue = F("Ziegelhausstr.");
        break;
    }
    case 343529:
    {
        returnValue = F("Ziegelhaustr.");
        break;
    }
    case 343530:
    {
        returnValue = F("Ziegelhausweg");
        break;
    }
    case 343531:
    {
        returnValue = F("Ziegelhauweg");
        break;
    }
    case 343532:
    {
        returnValue = F("Ziegelheck");
        break;
    }
    case 343533:
    {
        returnValue = F("Ziegelheider Str.");
        break;
    }
    case 343534:
    {
        returnValue = F("Ziegelhellmer");
        break;
    }
    case 343535:
    {
        returnValue = F("Ziegelhof");
        break;
    }
    case 343536:
    {
        returnValue = F("Ziegelhofbrücke");
        break;
    }
    case 343537:
    {
        returnValue = F("Ziegelhofer Str.");
        break;
    }
    case 343538:
    {
        returnValue = F("Ziegelhofer Weg");
        break;
    }
    case 343539:
    {
        returnValue = F("Ziegelhofgasse");
        break;
    }
    case 343540:
    {
        returnValue = F("Ziegelhofring");
        break;
    }
    case 343541:
    {
        returnValue = F("Ziegelhofstr.");
        break;
    }
    case 343542:
    {
        returnValue = F("Ziegelhofweg");
        break;
    }
    case 343543:
    {
        returnValue = F("Ziegelhohlweg");
        break;
    }
    case 343544:
    {
        returnValue = F("Ziegelholz");
        break;
    }
    case 343545:
    {
        returnValue = F("Ziegelholzstr.");
        break;
    }
    case 343546:
    {
        returnValue = F("Ziegelholzweg");
        break;
    }
    case 343547:
    {
        returnValue = F("Ziegelhorststr.");
        break;
    }
    case 343548:
    {
        returnValue = F("Ziegelhäldenweg");
        break;
    }
    case 343549:
    {
        returnValue = F("Ziegelhäule");
        break;
    }
    case 343550:
    {
        returnValue = F("Ziegelhäuser");
        break;
    }
    case 343551:
    {
        returnValue = F("Ziegelhäuser Landstr.");
        break;
    }
    case 343552:
    {
        returnValue = F("Ziegelhäuser Str.");
        break;
    }
    case 343553:
    {
        returnValue = F("Ziegelhäuslesweg");
        break;
    }
    case 343554:
    {
        returnValue = F("Ziegelhöfer Weg");
        break;
    }
    case 343555:
    {
        returnValue = F("Ziegelhöhe");
        break;
    }
    case 343556:
    {
        returnValue = F("Ziegelhütte");
        break;
    }
    case 343557:
    {
        returnValue = F("Ziegelhütte b. Pettendorf");
        break;
    }
    case 343558:
    {
        returnValue = F("Ziegelhüttegasse");
        break;
    }
    case 343559:
    {
        returnValue = F("Ziegelhüttehauweg");
        break;
    }
    case 343560:
    {
        returnValue = F("Ziegelhütten");
        break;
    }
    case 343561:
    {
        returnValue = F("Ziegelhüttenberg");
        break;
    }
    case 343562:
    {
        returnValue = F("Ziegelhüttener Hang");
        break;
    }
    case 343563:
    {
        returnValue = F("Ziegelhüttener Str.");
        break;
    }
    case 343564:
    {
        returnValue = F("Ziegelhüttengasse");
        break;
    }
    case 343565:
    {
        returnValue = F("Ziegelhüttenplatz");
        break;
    }
    case 343566:
    {
        returnValue = F("Ziegelhüttenstr.");
        break;
    }
    case 343567:
    {
        returnValue = F("Ziegelhüttental");
        break;
    }
    case 343568:
    {
        returnValue = F("Ziegelhüttenweg");
        break;
    }
    case 343569:
    {
        returnValue = F("Ziegelhütter Hauptstr.");
        break;
    }
    case 343570:
    {
        returnValue = F("Ziegelhütter Str.");
        break;
    }
    case 343571:
    {
        returnValue = F("Ziegelhütter Weg");
        break;
    }
    case 343572:
    {
        returnValue = F("Ziegelhütterstr.");
        break;
    }
    case 343573:
    {
        returnValue = F("Ziegelhütterweg");
        break;
    }
    case 343574:
    {
        returnValue = F("Ziegelhüttestr.");
        break;
    }
    case 343575:
    {
        returnValue = F("Ziegelhütteweg");
        break;
    }
    case 343576:
    {
        returnValue = F("Ziegelkamp");
        break;
    }
    case 343577:
    {
        returnValue = F("Ziegelkamper Str.");
        break;
    }
    case 343578:
    {
        returnValue = F("Ziegelkamper Weg");
        break;
    }
    case 343579:
    {
        returnValue = F("Ziegelklingenweg");
        break;
    }
    case 343580:
    {
        returnValue = F("Ziegelkreppenweg");
        break;
    }
    case 343581:
    {
        returnValue = F("Ziegelkämpe");
        break;
    }
    case 343582:
    {
        returnValue = F("Ziegelleite");
        break;
    }
    case 343583:
    {
        returnValue = F("Ziegelloch");
        break;
    }
    case 343584:
    {
        returnValue = F("Ziegellochpfad");
        break;
    }
    case 343585:
    {
        returnValue = F("Ziegelländeweg");
        break;
    }
    case 343586:
    {
        returnValue = F("Ziegelmahdweg");
        break;
    }
    case 343587:
    {
        returnValue = F("Ziegelmasch");
        break;
    }
    case 343588:
    {
        returnValue = F("Ziegelmattenstr.");
        break;
    }
    case 343589:
    {
        returnValue = F("Ziegelmattenweg");
        break;
    }
    case 343590:
    {
        returnValue = F("Ziegelmeierstr.");
        break;
    }
    case 343591:
    {
        returnValue = F("Ziegelmoos");
        break;
    }
    case 343592:
    {
        returnValue = F("Ziegelmoosstr.");
        break;
    }
    case 343593:
    {
        returnValue = F("Ziegelmättle");
        break;
    }
    case 343594:
    {
        returnValue = F("Ziegelmühle");
        break;
    }
    case 343595:
    {
        returnValue = F("Ziegelmühlenweg");
        break;
    }
    case 343596:
    {
        returnValue = F("Ziegelnöbach");
        break;
    }
    case 343597:
    {
        returnValue = F("Ziegelofen");
        break;
    }
    case 343598:
    {
        returnValue = F("Ziegelofenweg");
        break;
    }
    case 343599:
    {
        returnValue = F("Ziegelpfad");
        break;
    }
    case 343600:
    {
        returnValue = F("Ziegelplatz");
        break;
    }
    case 343601:
    {
        returnValue = F("Ziegelrain");
        break;
    }
    case 343602:
    {
        returnValue = F("Ziegelrainweg");
        break;
    }
    case 343603:
    {
        returnValue = F("Ziegelranken");
        break;
    }
    case 343604:
    {
        returnValue = F("Ziegelring");
        break;
    }
    case 343605:
    {
        returnValue = F("Ziegelrodaer Str.");
        break;
    }
    case 343606:
    {
        returnValue = F("Ziegelruh");
        break;
    }
    case 343607:
    {
        returnValue = F("Ziegelrutschweg");
        break;
    }
    case 343608:
    {
        returnValue = F("Ziegelröder Str.");
        break;
    }
    case 343609:
    {
        returnValue = F("Ziegelsberg");
        break;
    }
    case 343610:
    {
        returnValue = F("Ziegelscheuer");
        break;
    }
    case 343611:
    {
        returnValue = F("Ziegelscheune");
        break;
    }
    case 343612:
    {
        returnValue = F("Ziegelscheunenweg");
        break;
    }
    case 343613:
    {
        returnValue = F("Ziegelschlagweg");
        break;
    }
    case 343614:
    {
        returnValue = F("Ziegelschneise");
        break;
    }
    case 343615:
    {
        returnValue = F("Ziegelsdorf");
        break;
    }
    case 343616:
    {
        returnValue = F("Ziegelsdorfer Mühle");
        break;
    }
    case 343617:
    {
        returnValue = F("Ziegelsdorfer Str.");
        break;
    }
    case 343618:
    {
        returnValue = F("Ziegelseestr.");
        break;
    }
    case 343619:
    {
        returnValue = F("Ziegelstadel");
        break;
    }
    case 343620:
    {
        returnValue = F("Ziegelstadelweg");
        break;
    }
    case 343621:
    {
        returnValue = F("Ziegelstadl");
        break;
    }
    case 343622:
    {
        returnValue = F("Ziegelstadlweg");
        break;
    }
    case 343623:
    {
        returnValue = F("Ziegelstatt");
        break;
    }
    case 343624:
    {
        returnValue = F("Ziegelstattstr.");
        break;
    }
    case 343625:
    {
        returnValue = F("Ziegelsteg");
        break;
    }
    case 343626:
    {
        returnValue = F("Ziegelsteige");
        break;
    }
    case 343627:
    {
        returnValue = F("Ziegelsteigle");
        break;
    }
    case 343628:
    {
        returnValue = F("Ziegelsteinbruch");
        break;
    }
    case 343629:
    {
        returnValue = F("Ziegelsteinstr.");
        break;
    }
    case 343630:
    {
        returnValue = F("Ziegelstr.");
        break;
    }
    case 343631:
    {
        returnValue = F("Ziegelstädele");
        break;
    }
    case 343632:
    {
        returnValue = F("Ziegelstätterstr.");
        break;
    }
    case 343633:
    {
        returnValue = F("Ziegeltalstr.");
        break;
    }
    case 343634:
    {
        returnValue = F("Ziegelteich");
        break;
    }
    case 343635:
    {
        returnValue = F("Ziegelteiche");
        break;
    }
    case 343636:
    {
        returnValue = F("Ziegeltorgasse");
        break;
    }
    case 343637:
    {
        returnValue = F("Ziegeltorstr.");
        break;
    }
    case 343638:
    {
        returnValue = F("Ziegeltrath");
        break;
    }
    case 343639:
    {
        returnValue = F("Ziegeltrift");
        break;
    }
    case 343640:
    {
        returnValue = F("Ziegelviebig");
        break;
    }
    case 343641:
    {
        returnValue = F("Ziegelwaldstr.");
        break;
    }
    case 343642:
    {
        returnValue = F("Ziegelwaldweg");
        break;
    }
    case 343643:
    {
        returnValue = F("Ziegelwasen");
        break;
    }
    case 343644:
    {
        returnValue = F("Ziegelwasenstr.");
        break;
    }
    case 343645:
    {
        returnValue = F("Ziegelwasenweg");
        break;
    }
    case 343646:
    {
        returnValue = F("Ziegelweg");
        break;
    }
    case 343647:
    {
        returnValue = F("Ziegelweg/Flügel 20");
        break;
    }
    case 343648:
    {
        returnValue = F("Ziegelweiher");
        break;
    }
    case 343649:
    {
        returnValue = F("Ziegelweiherpark");
        break;
    }
    case 343650:
    {
        returnValue = F("Ziegelweiherstr.");
        break;
    }
    case 343651:
    {
        returnValue = F("Ziegelweinberg");
        break;
    }
    case 343652:
    {
        returnValue = F("Ziegelweinbergweg");
        break;
    }
    case 343653:
    {
        returnValue = F("Ziegelwende");
        break;
    }
    case 343654:
    {
        returnValue = F("Ziegelwerkstr.");
        break;
    }
    case 343655:
    {
        returnValue = F("Ziegelwies");
        break;
    }
    case 343656:
    {
        returnValue = F("Ziegelwiese");
        break;
    }
    case 343657:
    {
        returnValue = F("Ziegelwiesenstr.");
        break;
    }
    case 343658:
    {
        returnValue = F("Ziegelwiesenweg");
        break;
    }
    case 343659:
    {
        returnValue = F("Ziegelwiesstr.");
        break;
    }
    case 343660:
    {
        returnValue = F("Ziegelwäldle");
        break;
    }
    case 343661:
    {
        returnValue = F("Ziegelwöhr");
        break;
    }
    case 343662:
    {
        returnValue = F("Ziegeläcker");
        break;
    }
    case 343663:
    {
        returnValue = F("Ziegeläckerstr.");
        break;
    }
    case 343664:
    {
        returnValue = F("Ziegeläckerweg");
        break;
    }
    case 343665:
    {
        returnValue = F("Ziegelösch");
        break;
    }
    case 343666:
    {
        returnValue = F("Ziegen");
        break;
    }
    case 343667:
    {
        returnValue = F("Ziegen-Kreisel");
        break;
    }
    case 343668:
    {
        returnValue = F("Ziegenallee");
        break;
    }
    case 343669:
    {
        returnValue = F("Ziegenangerweg");
        break;
    }
    case 343670:
    {
        returnValue = F("Ziegenbacher Str.");
        break;
    }
    case 343671:
    {
        returnValue = F("Ziegenbachstr.");
        break;
    }
    case 343672:
    {
        returnValue = F("Ziegenbalgplatz");
        break;
    }
    case 343673:
    {
        returnValue = F("Ziegenbalgstr.");
        break;
    }
    case 343674:
    {
        returnValue = F("Ziegenbauer Str.");
        break;
    }
    case 343675:
    {
        returnValue = F("Ziegenbendgesweg");
        break;
    }
    case 343676:
    {
        returnValue = F("Ziegenberg");
        break;
    }
    case 343677:
    {
        returnValue = F("Ziegenberger - Weg");
        break;
    }
    case 343678:
    {
        returnValue = F("Ziegenberger Pfad");
        break;
    }
    case 343679:
    {
        returnValue = F("Ziegenberger Weg");
        break;
    }
    case 343680:
    {
        returnValue = F("Ziegenbergstr.");
        break;
    }
    case 343681:
    {
        returnValue = F("Ziegenbergsweg");
        break;
    }
    case 343682:
    {
        returnValue = F("Ziegenbergweg");
        break;
    }
    case 343683:
    {
        returnValue = F("Ziegenbocksbrücke");
        break;
    }
    case 343684:
    {
        returnValue = F("Ziegenbocksweg");
        break;
    }
    case 343685:
    {
        returnValue = F("Ziegenbockswiese");
        break;
    }
    case 343686:
    {
        returnValue = F("Ziegenbrink");
        break;
    }
    case 343687:
    {
        returnValue = F("Ziegenbrücke");
        break;
    }
    case 343688:
    {
        returnValue = F("Ziegenburg");
        break;
    }
    case 343689:
    {
        returnValue = F("Ziegenburger Str.");
        break;
    }
    case 343690:
    {
        returnValue = F("Ziegenbuschweg");
        break;
    }
    case 343691:
    {
        returnValue = F("Ziegenbügel");
        break;
    }
    case 343692:
    {
        returnValue = F("Ziegendamm");
        break;
    }
    case 343693:
    {
        returnValue = F("Ziegendorfer Chaussee");
        break;
    }
    case 343694:
    {
        returnValue = F("Ziegendorfer Str.");
        break;
    }
    case 343695:
    {
        returnValue = F("Ziegeneck");
        break;
    }
    case 343696:
    {
        returnValue = F("Ziegengang");
        break;
    }
    case 343697:
    {
        returnValue = F("Ziegengasse");
        break;
    }
    case 343698:
    {
        returnValue = F("Ziegengehege");
        break;
    }
    case 343699:
    {
        returnValue = F("Ziegengraben");
        break;
    }
    case 343700:
    {
        returnValue = F("Ziegengrabenweg");
        break;
    }
    case 343701:
    {
        returnValue = F("Ziegengrund");
        break;
    }
    case 343702:
    {
        returnValue = F("Ziegengrundweg");
        break;
    }
    case 343703:
    {
        returnValue = F("Ziegenhagen");
        break;
    }
    case 343704:
    {
        returnValue = F("Ziegenhagener Str.");
        break;
    }
    case 343705:
    {
        returnValue = F("Ziegenhainer Bahnhofstr.");
        break;
    }
    case 343706:
    {
        returnValue = F("Ziegenhainer Oberweg");
        break;
    }
    case 343707:
    {
        returnValue = F("Ziegenhainer Str.");
        break;
    }
    case 343708:
    {
        returnValue = F("Ziegenhainer Weg");
        break;
    }
    case 343709:
    {
        returnValue = F("Ziegenhalde");
        break;
    }
    case 343710:
    {
        returnValue = F("Ziegenhalser Ring");
        break;
    }
    case 343711:
    {
        returnValue = F("Ziegenhauk");
        break;
    }
    case 343712:
    {
        returnValue = F("Ziegenheidenschneise");
        break;
    }
    case 343713:
    {
        returnValue = F("Ziegenheinrich");
        break;
    }
    case 343714:
    {
        returnValue = F("Ziegenhirtenweg");
        break;
    }
    case 343715:
    {
        returnValue = F("Ziegenhofstr.");
        break;
    }
    case 343716:
    {
        returnValue = F("Ziegenhorn");
        break;
    }
    case 343717:
    {
        returnValue = F("Ziegenhorst");
        break;
    }
    case 343718:
    {
        returnValue = F("Ziegenhügel");
        break;
    }
    case 343719:
    {
        returnValue = F("Ziegeninsel");
        break;
    }
    case 343720:
    {
        returnValue = F("Ziegenkamp");
        break;
    }
    case 343721:
    {
        returnValue = F("Ziegenkampsweg");
        break;
    }
    case 343722:
    {
        returnValue = F("Ziegenkopf");
        break;
    }
    case 343723:
    {
        returnValue = F("Ziegenkruger Weg");
        break;
    }
    case 343724:
    {
        returnValue = F("Ziegenleithe");
        break;
    }
    case 343725:
    {
        returnValue = F("Ziegenliet");
        break;
    }
    case 343726:
    {
        returnValue = F("Ziegenloh");
        break;
    }
    case 343727:
    {
        returnValue = F("Ziegenmarkt");
        break;
    }
    case 343728:
    {
        returnValue = F("Ziegenmoor");
        break;
    }
    case 343729:
    {
        returnValue = F("Ziegenpfad");
        break;
    }
    case 343730:
    {
        returnValue = F("Ziegenplan");
        break;
    }
    case 343731:
    {
        returnValue = F("Ziegenreihe");
        break;
    }
    case 343732:
    {
        returnValue = F("Ziegenrück");
        break;
    }
    case 343733:
    {
        returnValue = F("Ziegenrücken");
        break;
    }
    case 343734:
    {
        returnValue = F("Ziegenrückenstr.");
        break;
    }
    case 343735:
    {
        returnValue = F("Ziegenrückenweg");
        break;
    }
    case 343736:
    {
        returnValue = F("Ziegenrücker Str.");
        break;
    }
    case 343737:
    {
        returnValue = F("Ziegenrückstr.");
        break;
    }
    case 343738:
    {
        returnValue = F("Ziegenrückweg");
        break;
    }
    case 343739:
    {
        returnValue = F("Ziegenschleppe");
        break;
    }
    case 343740:
    {
        returnValue = F("Ziegensteg");
        break;
    }
    case 343741:
    {
        returnValue = F("Ziegensteig");
        break;
    }
    case 343742:
    {
        returnValue = F("Ziegenstr.");
        break;
    }
    case 343743:
    {
        returnValue = F("Ziegental");
        break;
    }
    case 343744:
    {
        returnValue = F("Ziegentaler Weg");
        break;
    }
    case 343745:
    {
        returnValue = F("Ziegentannenweg");
        break;
    }
    case 343746:
    {
        returnValue = F("Ziegenweg");
        break;
    }
    case 343747:
    {
        returnValue = F("Ziegenweide");
        break;
    }
    case 343748:
    {
        returnValue = F("Ziegenwiese");
        break;
    }
    case 343749:
    {
        returnValue = F("Ziegenwinkel");
        break;
    }
    case 343750:
    {
        returnValue = F("Ziegerhof");
        break;
    }
    case 343751:
    {
        returnValue = F("Ziegerhäuser");
        break;
    }
    case 343752:
    {
        returnValue = F("Ziegerich");
        break;
    }
    case 343753:
    {
        returnValue = F("Ziegerstr.");
        break;
    }
    case 343754:
    {
        returnValue = F("Ziegertal");
        break;
    }
    case 343755:
    {
        returnValue = F("Ziegesarstr.");
        break;
    }
    case 343756:
    {
        returnValue = F("Ziegetsdorfer Park");
        break;
    }
    case 343757:
    {
        returnValue = F("Ziegetsdorfer Str.");
        break;
    }
    case 343758:
    {
        returnValue = F("Zieglauer Gassl");
        break;
    }
    case 343759:
    {
        returnValue = F("Zieglauer Steg (Brezensteg)");
        break;
    }
    case 343760:
    {
        returnValue = F("Ziegler");
        break;
    }
    case 343761:
    {
        returnValue = F("Ziegler Nord");
        break;
    }
    case 343762:
    {
        returnValue = F("Zieglerallee");
        break;
    }
    case 343763:
    {
        returnValue = F("Zieglerberg");
        break;
    }
    case 343764:
    {
        returnValue = F("Zieglerfeldstr.");
        break;
    }
    case 343765:
    {
        returnValue = F("Zieglergasse");
        break;
    }
    case 343766:
    {
        returnValue = F("Zieglerhof");
        break;
    }
    case 343767:
    {
        returnValue = F("Zieglers Weiden");
        break;
    }
    case 343768:
    {
        returnValue = F("Zieglerschlag");
        break;
    }
    case 343769:
    {
        returnValue = F("Zieglersgrund");
        break;
    }
    case 343770:
    {
        returnValue = F("Zieglersgrübe");
        break;
    }
    case 343771:
    {
        returnValue = F("Zieglershohle");
        break;
    }
    case 343772:
    {
        returnValue = F("Zieglerskopfweg");
        break;
    }
    case 343773:
    {
        returnValue = F("Zieglerstr.");
        break;
    }
    case 343774:
    {
        returnValue = F("Zieglersweg");
        break;
    }
    case 343775:
    {
        returnValue = F("Zieglertal");
        break;
    }
    case 343776:
    {
        returnValue = F("Zieglerwasen");
        break;
    }
    case 343777:
    {
        returnValue = F("Zieglerweg");
        break;
    }
    case 343778:
    {
        returnValue = F("Zieglerösch");
        break;
    }
    case 343779:
    {
        returnValue = F("Ziegleweg");
        break;
    }
    case 343780:
    {
        returnValue = F("Zieglhaus");
        break;
    }
    case 343781:
    {
        returnValue = F("Zieglhofweg");
        break;
    }
    case 343782:
    {
        returnValue = F("Zieglhäuser");
        break;
    }
    case 343783:
    {
        returnValue = F("Zieglmeierstr.");
        break;
    }
    case 343784:
    {
        returnValue = F("Zieglmeisterweg");
        break;
    }
    case 343785:
    {
        returnValue = F("Zieglreuth");
        break;
    }
    case 343786:
    {
        returnValue = F("Zieglstadl");
        break;
    }
    case 343787:
    {
        returnValue = F("Zieglstadlweg");
        break;
    }
    case 343788:
    {
        returnValue = F("Zieglstattstr.");
        break;
    }
    case 343789:
    {
        returnValue = F("Ziegläcker");
        break;
    }
    case 343790:
    {
        returnValue = F("Zieglöder Str.");
        break;
    }
    case 343791:
    {
        returnValue = F("Zieglöder Weg");
        break;
    }
    case 343792:
    {
        returnValue = F("Ziegquellenweg");
        break;
    }
    case 343793:
    {
        returnValue = F("Ziegraer Str.");
        break;
    }
    case 343794:
    {
        returnValue = F("Ziegwebersberg");
        break;
    }
    case 343795:
    {
        returnValue = F("Ziegweg");
        break;
    }
    case 343796:
    {
        returnValue = F("Ziehberg");
        break;
    }
    case 343797:
    {
        returnValue = F("Ziehborn");
        break;
    }
    case 343798:
    {
        returnValue = F("Ziehbrunnenstr.");
        break;
    }
    case 343799:
    {
        returnValue = F("Ziehbrückenweg");
        break;
    }
    case 343800:
    {
        returnValue = F("Ziehende Länder");
        break;
    }
    case 343801:
    {
        returnValue = F("Ziehenstr.");
        break;
    }
    case 343802:
    {
        returnValue = F("Zieherser Weg");
        break;
    }
    case 343803:
    {
        returnValue = F("Ziehgasse");
        break;
    }
    case 343804:
    {
        returnValue = F("Ziehltenbühndweg");
        break;
    }
    case 343805:
    {
        returnValue = F("Ziehltstr.");
        break;
    }
    case 343806:
    {
        returnValue = F("Ziehopweg");
        break;
    }
    case 343807:
    {
        returnValue = F("Ziehrerstr.");
        break;
    }
    case 343808:
    {
        returnValue = F("Ziehrerweg");
        break;
    }
    case 343809:
    {
        returnValue = F("Ziehring");
        break;
    }
    case 343810:
    {
        returnValue = F("Ziehringer Weg");
        break;
    }
    case 343811:
    {
        returnValue = F("Ziehstr.");
        break;
    }
    case 343812:
    {
        returnValue = F("Ziehtalstr.");
        break;
    }
    case 343813:
    {
        returnValue = F("Ziehtor");
        break;
    }
    case 343814:
    {
        returnValue = F("Ziehwaldstr.");
        break;
    }
    case 343815:
    {
        returnValue = F("Ziehweg");
        break;
    }
    case 343816:
    {
        returnValue = F("Ziekoer Landstr.");
        break;
    }
    case 343817:
    {
        returnValue = F("Zielbergstr.");
        break;
    }
    case 343818:
    {
        returnValue = F("Zieleckstr.");
        break;
    }
    case 343819:
    {
        returnValue = F("Zieleischenweg");
        break;
    }
    case 343820:
    {
        returnValue = F("Zieleitz");
        break;
    }
    case 343821:
    {
        returnValue = F("Zieleitzweg");
        break;
    }
    case 343822:
    {
        returnValue = F("Zielenbacher Weg");
        break;
    }
    case 343823:
    {
        returnValue = F("Zielenweg");
        break;
    }
    case 343824:
    {
        returnValue = F("Zielfinger Str.");
        break;
    }
    case 343825:
    {
        returnValue = F("Zielgass");
        break;
    }
    case 343826:
    {
        returnValue = F("Zielgasse");
        break;
    }
    case 343827:
    {
        returnValue = F("Zielgerade");
        break;
    }
    case 343828:
    {
        returnValue = F("Zielhausweg");
        break;
    }
    case 343829:
    {
        returnValue = F("Zielhecke");
        break;
    }
    case 343830:
    {
        returnValue = F("Zielheimer Str.");
        break;
    }
    case 343831:
    {
        returnValue = F("Zielitzer Str.");
        break;
    }
    case 343832:
    {
        returnValue = F("Zielitzer Weg");
        break;
    }
    case 343833:
    {
        returnValue = F("Zielitzstr.");
        break;
    }
    case 343834:
    {
        returnValue = F("Ziellechen");
        break;
    }
    case 343835:
    {
        returnValue = F("Zielleistge");
        break;
    }
    case 343836:
    {
        returnValue = F("Zielmattstr.");
        break;
    }
    case 343837:
    {
        returnValue = F("Zielona-Gora-Str.");
        break;
    }
    case 343838:
    {
        returnValue = F("Zielower Str.");
        break;
    }
    case 343839:
    {
        returnValue = F("Zielower Weg");
        break;
    }
    case 343840:
    {
        returnValue = F("Zielrebenweg");
        break;
    }
    case 343841:
    {
        returnValue = F("Zielsgasse");
        break;
    }
    case 343842:
    {
        returnValue = F("Zielsteinacker");
        break;
    }
    case 343843:
    {
        returnValue = F("Zielstr.");
        break;
    }
    case 343844:
    {
        returnValue = F("Zielweg");
        break;
    }
    case 343845:
    {
        returnValue = F("Zielwiesen");
        break;
    }
    case 343846:
    {
        returnValue = F("Ziemannsweg");
        break;
    }
    case 343847:
    {
        returnValue = F("Ziemensstr.");
        break;
    }
    case 343848:
    {
        returnValue = F("Ziemerweg");
        break;
    }
    case 343849:
    {
        returnValue = F("Ziemesgartenstr.");
        break;
    }
    case 343850:
    {
        returnValue = F("Ziemetshauser Str.");
        break;
    }
    case 343851:
    {
        returnValue = F("Ziemkendorf");
        break;
    }
    case 343852:
    {
        returnValue = F("Ziemkendorfer Str.");
        break;
    }
    case 343853:
    {
        returnValue = F("Ziemssenstr.");
        break;
    }
    case 343854:
    {
        returnValue = F("Zienauer Weg");
        break;
    }
    case 343855:
    {
        returnValue = F("Zienerweg");
        break;
    }
    case 343856:
    {
        returnValue = F("Zienestr.");
        break;
    }
    case 343857:
    {
        returnValue = F("Zienitzer Weg");
        break;
    }
    case 343858:
    {
        returnValue = F("Zienkener Weg");
        break;
    }
    case 343859:
    {
        returnValue = F("Ziepel");
        break;
    }
    case 343860:
    {
        returnValue = F("Ziepelbrink");
        break;
    }
    case 343861:
    {
        returnValue = F("Ziepeler Weg");
        break;
    }
    case 343862:
    {
        returnValue = F("Ziepelkamp");
        break;
    }
    case 343863:
    {
        returnValue = F("Zierapfelstr.");
        break;
    }
    case 343864:
    {
        returnValue = F("Zierau Nr.");
        break;
    }
    case 343865:
    {
        returnValue = F("Zierauer Weg");
        break;
    }
    case 343866:
    {
        returnValue = F("Zierberg");
        break;
    }
    case 343867:
    {
        returnValue = F("Zierenberg");
        break;
    }
    case 343868:
    {
        returnValue = F("Zierenbergblick");
        break;
    }
    case 343869:
    {
        returnValue = F("Zierenberger Str.");
        break;
    }
    case 343870:
    {
        returnValue = F("Zierenbergstr.");
        break;
    }
    case 343871:
    {
        returnValue = F("Zierergasse");
        break;
    }
    case 343872:
    {
        returnValue = F("Ziererstr.");
        break;
    }
    case 343873:
    {
        returnValue = F("Ziererweg");
        break;
    }
    case 343874:
    {
        returnValue = F("Ziererwiese");
        break;
    }
    case 343875:
    {
        returnValue = F("Ziergarten");
        break;
    }
    case 343876:
    {
        returnValue = F("Ziergartenstr.");
        break;
    }
    case 343877:
    {
        returnValue = F("Ziergartenweg");
        break;
    }
    case 343878:
    {
        returnValue = F("Zierheidchen");
        break;
    }
    case 343879:
    {
        returnValue = F("Zieritz");
        break;
    }
    case 343880:
    {
        returnValue = F("Zierke");
        break;
    }
    case 343881:
    {
        returnValue = F("Zierker Nebenstr.");
        break;
    }
    case 343882:
    {
        returnValue = F("Zierker Seegang");
        break;
    }
    case 343883:
    {
        returnValue = F("Zierker Str.");
        break;
    }
    case 343884:
    {
        returnValue = F("Zierkirschenallee");
        break;
    }
    case 343885:
    {
        returnValue = F("Zierkirschenstr.");
        break;
    }
    case 343886:
    {
        returnValue = F("Zierleinstr.");
        break;
    }
    case 343887:
    {
        returnValue = F("Zierlstr.");
        break;
    }
    case 343888:
    {
        returnValue = F("Zierolshofen Hauptweg");
        break;
    }
    case 343889:
    {
        returnValue = F("Zierower Landstr.");
        break;
    }
    case 343890:
    {
        returnValue = F("Zierower Weg");
        break;
    }
    case 343891:
    {
        returnValue = F("Zierquittenweg");
        break;
    }
    case 343892:
    {
        returnValue = F("Ziersmühlsteg");
        break;
    }
    case 343893:
    {
        returnValue = F("Zierstorf Ausbau");
        break;
    }
    case 343894:
    {
        returnValue = F("Ziertheimer Str.");
        break;
    }
    case 343895:
    {
        returnValue = F("Ziervogelstr.");
        break;
    }
    case 343896:
    {
        returnValue = F("Zierwaldweg");
        break;
    }
    case 343897:
    {
        returnValue = F("Zierweg");
        break;
    }
    case 343898:
    {
        returnValue = F("Zierzower Str.");
        break;
    }
    case 343899:
    {
        returnValue = F("Ziesarer Landstr.");
        break;
    }
    case 343900:
    {
        returnValue = F("Ziesarer Str.");
        break;
    }
    case 343901:
    {
        returnValue = F("Ziesarer Weg");
        break;
    }
    case 343902:
    {
        returnValue = F("Ziesarstr.");
        break;
    }
    case 343903:
    {
        returnValue = F("Zieschestr.");
        break;
    }
    case 343904:
    {
        returnValue = F("Zieschützer Str.");
        break;
    }
    case 343905:
    {
        returnValue = F("Zieseblick");
        break;
    }
    case 343906:
    {
        returnValue = F("Zieselbach");
        break;
    }
    case 343907:
    {
        returnValue = F("Zieselbachstr.");
        break;
    }
    case 343908:
    {
        returnValue = F("Zieselberg");
        break;
    }
    case 343909:
    {
        returnValue = F("Zieselgasse");
        break;
    }
    case 343910:
    {
        returnValue = F("Zieselmatt");
        break;
    }
    case 343911:
    {
        returnValue = F("Zieselsmaarer Str.");
        break;
    }
    case 343912:
    {
        returnValue = F("Zieselsmaarstr.");
        break;
    }
    case 343913:
    {
        returnValue = F("Ziesengasse");
        break;
    }
    case 343914:
    {
        returnValue = F("Ziesenisstr.");
        break;
    }
    case 343915:
    {
        returnValue = F("Ziesenisweg");
        break;
    }
    case 343916:
    {
        returnValue = F("Ziesenißstr.");
        break;
    }
    case 343917:
    {
        returnValue = F("Ziesensgarten");
        break;
    }
    case 343918:
    {
        returnValue = F("Ziesingweg");
        break;
    }
    case 343919:
    {
        returnValue = F("Zieskenbach");
        break;
    }
    case 343920:
    {
        returnValue = F("Zieskovener Str.");
        break;
    }
    case 343921:
    {
        returnValue = F("Zieslübber Weg");
        break;
    }
    case 343922:
    {
        returnValue = F("Ziester");
        break;
    }
    case 343923:
    {
        returnValue = F("Ziestsee");
        break;
    }
    case 343924:
    {
        returnValue = F("Zietenhorst");
        break;
    }
    case 343925:
    {
        returnValue = F("Zietenpark");
        break;
    }
    case 343926:
    {
        returnValue = F("Zietenring");
        break;
    }
    case 343927:
    {
        returnValue = F("Zietenstr.");
        break;
    }
    case 343928:
    {
        returnValue = F("Ziethen-Mühle");
        break;
    }
    case 343929:
    {
        returnValue = F("Ziethener Str.");
        break;
    }
    case 343930:
    {
        returnValue = F("Ziethener Weg");
        break;
    }
    case 343931:
    {
        returnValue = F("Ziethenstr.");
        break;
    }
    case 343932:
    {
        returnValue = F("Ziethenweg");
        break;
    }
    case 343933:
    {
        returnValue = F("Ziethnitzer Höfe");
        break;
    }
    case 343934:
    {
        returnValue = F("Ziethnitzer Weg");
        break;
    }
    case 343935:
    {
        returnValue = F("Zietlitzer Str.");
        break;
    }
    case 343936:
    {
        returnValue = F("Zietlitzer Weg");
        break;
    }
    case 343937:
    {
        returnValue = F("Zieveler Str.");
        break;
    }
    case 343938:
    {
        returnValue = F("Zievericher Mühle");
        break;
    }
    case 343939:
    {
        returnValue = F("Zievericher Str.");
        break;
    }
    case 343940:
    {
        returnValue = F("Ziezelweg");
        break;
    }
    case 343941:
    {
        returnValue = F("Zifferblattweg");
        break;
    }
    case 343942:
    {
        returnValue = F("Zifling");
        break;
    }
    case 343943:
    {
        returnValue = F("Zifling-Bierl");
        break;
    }
    case 343944:
    {
        returnValue = F("Ziflinger Weg");
        break;
    }
    case 343945:
    {
        returnValue = F("Zigarrenmacherstr.");
        break;
    }
    case 343946:
    {
        returnValue = F("Zigarrenweg");
        break;
    }
    case 343947:
    {
        returnValue = F("Zigelskyweg");
        break;
    }
    case 343948:
    {
        returnValue = F("Zigeuner Sträßle");
        break;
    }
    case 343949:
    {
        returnValue = F("Zigeunerbrücke");
        break;
    }
    case 343950:
    {
        returnValue = F("Zigeunerbrünnlesweg");
        break;
    }
    case 343951:
    {
        returnValue = F("Zigeunerbuschweg");
        break;
    }
    case 343952:
    {
        returnValue = F("Zigeunereckweg");
        break;
    }
    case 343953:
    {
        returnValue = F("Zigeunergrabenweg");
        break;
    }
    case 343954:
    {
        returnValue = F("Zigeunergässle");
        break;
    }
    case 343955:
    {
        returnValue = F("Zigeunerhofweg");
        break;
    }
    case 343956:
    {
        returnValue = F("Zigeunerlandwehr");
        break;
    }
    case 343957:
    {
        returnValue = F("Zigeunersbuckelweg");
        break;
    }
    case 343958:
    {
        returnValue = F("Zigeunersträßle");
        break;
    }
    case 343959:
    {
        returnValue = F("Zigeunertannenweg");
        break;
    }
    case 343960:
    {
        returnValue = F("Zigeunerweg");
        break;
    }
    case 343961:
    {
        returnValue = F("Zigeunnersträssle");
        break;
    }
    case 343962:
    {
        returnValue = F("Ziggelmarker Steig");
        break;
    }
    case 343963:
    {
        returnValue = F("Ziggelmarker Weg");
        break;
    }
    case 343964:
    {
        returnValue = F("Zikadenweg");
        break;
    }
    case 343965:
    {
        returnValue = F("Zilcherstr.");
        break;
    }
    case 343966:
    {
        returnValue = F("Zilgendorfer Weg");
        break;
    }
    case 343967:
    {
        returnValue = F("Zilianplatz");
        break;
    }
    case 343968:
    {
        returnValue = F("Zillbacher Str.");
        break;
    }
    case 343969:
    {
        returnValue = F("Zillbecker Str.");
        break;
    }
    case 343970:
    {
        returnValue = F("Zillebeker Platz");
        break;
    }
    case 343971:
    {
        returnValue = F("Zillebogen");
        break;
    }
    case 343972:
    {
        returnValue = F("Zillegasse");
        break;
    }
    case 343973:
    {
        returnValue = F("Zilleichstr.");
        break;
    }
    case 343974:
    {
        returnValue = F("Zillenbachstr.");
        break;
    }
    case 343975:
    {
        returnValue = F("Zillenberger Weg");
        break;
    }
    case 343976:
    {
        returnValue = F("Zillenhardtweg");
        break;
    }
    case 343977:
    {
        returnValue = F("Zillenweg");
        break;
    }
    case 343978:
    {
        returnValue = F("Zilleplatz");
        break;
    }
    case 343979:
    {
        returnValue = F("Zillerhofstr.");
        break;
    }
    case 343980:
    {
        returnValue = F("Zillering");
        break;
    }
    case 343981:
    {
        returnValue = F("Zillerplatz");
        break;
    }
    case 343982:
    {
        returnValue = F("Zillerrieser Str.");
        break;
    }
    case 343983:
    {
        returnValue = F("Zillerstallstr.");
        break;
    }
    case 343984:
    {
        returnValue = F("Zillerstr.");
        break;
    }
    case 343985:
    {
        returnValue = F("Zillertal");
        break;
    }
    case 343986:
    {
        returnValue = F("Zillertaler Str.");
        break;
    }
    case 343987:
    {
        returnValue = F("Zillertalstr.");
        break;
    }
    case 343988:
    {
        returnValue = F("Zillerweg");
        break;
    }
    case 343989:
    {
        returnValue = F("Zillessen-Allee");
        break;
    }
    case 343990:
    {
        returnValue = F("Zillestr.");
        break;
    }
    case 343991:
    {
        returnValue = F("Zilleweg");
        break;
    }
    case 343992:
    {
        returnValue = F("Zillge");
        break;
    }
    case 343993:
    {
        returnValue = F("Zillgentalweg");
        break;
    }
    case 343994:
    {
        returnValue = F("Zillhaldeweg");
        break;
    }
    case 343995:
    {
        returnValue = F("Zillham");
        break;
    }
    case 343996:
    {
        returnValue = F("Zillhauser Landstr.");
        break;
    }
    case 343997:
    {
        returnValue = F("Zillhauser Str.");
        break;
    }
    case 343998:
    {
        returnValue = F("Zillibillerstr.");
        break;
    }
    case 343999:
    {
        returnValue = F("Zillie Gässchen");
        break;
    }
    case 344000:
    {
        returnValue = F("Zilling");
        break;
    }
    case 344001:
    {
        returnValue = F("Zillishauser Str.");
        break;
    }
    case 344002:
    {
        returnValue = F("Zillisteig");
        break;
    }
    case 344003:
    {
        returnValue = F("Zillkeshütte");
        break;
    }
    case 344004:
    {
        returnValue = F("Zillplatz");
        break;
    }
    case 344005:
    {
        returnValue = F("Zillstr.");
        break;
    }
    case 344006:
    {
        returnValue = F("Zillyer Str.");
        break;
    }
    case 344007:
    {
        returnValue = F("Zillyer Weg");
        break;
    }
    case 344008:
    {
        returnValue = F("Zilpzalpweg");
        break;
    }
    case 344009:
    {
        returnValue = F("Zilsdorfer Str.");
        break;
    }
    case 344010:
    {
        returnValue = F("Ziltendorfer Brücke");
        break;
    }
    case 344011:
    {
        returnValue = F("Zilzemühle");
        break;
    }
    case 344012:
    {
        returnValue = F("Zilzkreuz");
        break;
    }
    case 344013:
    {
        returnValue = F("Zimbaweg");
        break;
    }
    case 344014:
    {
        returnValue = F("Zimbergasse");
        break;
    }
    case 344015:
    {
        returnValue = F("Zimbergstr.");
        break;
    }
    case 344016:
    {
        returnValue = F("Zimbergweg");
        break;
    }
    case 344017:
    {
        returnValue = F("Zimberhof");
        break;
    }
    case 344018:
    {
        returnValue = F("Zimbernstr.");
        break;
    }
    case 344019:
    {
        returnValue = F("Zimbernweg");
        break;
    }
    case 344020:
    {
        returnValue = F("Zimelerstr.");
        break;
    }
    case 344021:
    {
        returnValue = F("Zimmer Weg");
        break;
    }
    case 344022:
    {
        returnValue = F("Zimmeracker");
        break;
    }
    case 344023:
    {
        returnValue = F("Zimmerackerstr.");
        break;
    }
    case 344024:
    {
        returnValue = F("Zimmerackerweg");
        break;
    }
    case 344025:
    {
        returnValue = F("Zimmerauer Str.");
        break;
    }
    case 344026:
    {
        returnValue = F("Zimmerbacher Str.");
        break;
    }
    case 344027:
    {
        returnValue = F("Zimmerbacher Weg");
        break;
    }
    case 344028:
    {
        returnValue = F("Zimmerbachstr.");
        break;
    }
    case 344029:
    {
        returnValue = F("Zimmerbachsträßchen");
        break;
    }
    case 344030:
    {
        returnValue = F("Zimmerbachweg");
        break;
    }
    case 344031:
    {
        returnValue = F("Zimmerbahne");
        break;
    }
    case 344032:
    {
        returnValue = F("Zimmerberg");
        break;
    }
    case 344033:
    {
        returnValue = F("Zimmerbergstr.");
        break;
    }
    case 344034:
    {
        returnValue = F("Zimmerbreite");
        break;
    }
    case 344035:
    {
        returnValue = F("Zimmerbuckweg");
        break;
    }
    case 344036:
    {
        returnValue = F("Zimmerchaussee");
        break;
    }
    case 344037:
    {
        returnValue = F("Zimmerecke");
        break;
    }
    case 344038:
    {
        returnValue = F("Zimmereckstr.");
        break;
    }
    case 344039:
    {
        returnValue = F("Zimmereckweg");
        break;
    }
    case 344040:
    {
        returnValue = F("Zimmereiplatz");
        break;
    }
    case 344041:
    {
        returnValue = F("Zimmereistr.");
        break;
    }
    case 344042:
    {
        returnValue = F("Zimmereiweg");
        break;
    }
    case 344043:
    {
        returnValue = F("Zimmerer Höhe");
        break;
    }
    case 344044:
    {
        returnValue = F("Zimmerer Pfad");
        break;
    }
    case 344045:
    {
        returnValue = F("Zimmerer Str.");
        break;
    }
    case 344046:
    {
        returnValue = F("Zimmerergasse");
        break;
    }
    case 344047:
    {
        returnValue = F("Zimmererstr.");
        break;
    }
    case 344048:
    {
        returnValue = F("Zimmererweg");
        break;
    }
    case 344049:
    {
        returnValue = F("Zimmerfeldstr.");
        break;
    }
    case 344050:
    {
        returnValue = F("Zimmergarten");
        break;
    }
    case 344051:
    {
        returnValue = F("Zimmergasse");
        break;
    }
    case 344052:
    {
        returnValue = F("Zimmergemeindeweg");
        break;
    }
    case 344053:
    {
        returnValue = F("Zimmergrundstr.");
        break;
    }
    case 344054:
    {
        returnValue = F("Zimmergässle");
        break;
    }
    case 344055:
    {
        returnValue = F("Zimmergäßchen");
        break;
    }
    case 344056:
    {
        returnValue = F("Zimmerhaldenweg");
        break;
    }
    case 344057:
    {
        returnValue = F("Zimmerhaldeweg");
        break;
    }
    case 344058:
    {
        returnValue = F("Zimmerhansenstr.");
        break;
    }
    case 344059:
    {
        returnValue = F("Zimmerhardtstr.");
        break;
    }
    case 344060:
    {
        returnValue = F("Zimmerhof");
        break;
    }
    case 344061:
    {
        returnValue = F("Zimmerholz");
        break;
    }
    case 344062:
    {
        returnValue = F("Zimmerholzweg");
        break;
    }
    case 344063:
    {
        returnValue = F("Zimmerhöfer Str.");
        break;
    }
    case 344064:
    {
        returnValue = F("Zimmerhügel-Schneise");
        break;
    }
    case 344065:
    {
        returnValue = F("Zimmerhüttenweg");
        break;
    }
    case 344066:
    {
        returnValue = F("Zimmerichsfeld");
        break;
    }
    case 344067:
    {
        returnValue = F("Zimmering");
        break;
    }
    case 344068:
    {
        returnValue = F("Zimmerklinge");
        break;
    }
    case 344069:
    {
        returnValue = F("Zimmerleitenweg");
        break;
    }
    case 344070:
    {
        returnValue = F("Zimmerleiweg");
        break;
    }
    case 344071:
    {
        returnValue = F("Zimmerlenzenanger");
        break;
    }
    case 344072:
    {
        returnValue = F("Zimmerlochweg");
        break;
    }
    case 344073:
    {
        returnValue = F("Zimmerloh");
        break;
    }
    case 344074:
    {
        returnValue = F("Zimmermandling");
        break;
    }
    case 344075:
    {
        returnValue = F("Zimmermann-Weg");
        break;
    }
    case 344076:
    {
        returnValue = F("Zimmermannfelsenweg");
        break;
    }
    case 344077:
    {
        returnValue = F("Zimmermannplatz");
        break;
    }
    case 344078:
    {
        returnValue = F("Zimmermannsgasse");
        break;
    }
    case 344079:
    {
        returnValue = F("Zimmermannsgut");
        break;
    }
    case 344080:
    {
        returnValue = F("Zimmermannshauweg");
        break;
    }
    case 344081:
    {
        returnValue = F("Zimmermannsmühle");
        break;
    }
    case 344082:
    {
        returnValue = F("Zimmermannspark");
        break;
    }
    case 344083:
    {
        returnValue = F("Zimmermannsstr.");
        break;
    }
    case 344084:
    {
        returnValue = F("Zimmermannstr.");
        break;
    }
    case 344085:
    {
        returnValue = F("Zimmermannsweg");
        break;
    }
    case 344086:
    {
        returnValue = F("Zimmermannweg");
        break;
    }
    case 344087:
    {
        returnValue = F("Zimmermeistergasse");
        break;
    }
    case 344088:
    {
        returnValue = F("Zimmern");
        break;
    }
    case 344089:
    {
        returnValue = F("Zimmerner Mühle");
        break;
    }
    case 344090:
    {
        returnValue = F("Zimmerner Str.");
        break;
    }
    case 344091:
    {
        returnValue = F("Zimmerner Talhaus");
        break;
    }
    case 344092:
    {
        returnValue = F("Zimmerner Weg");
        break;
    }
    case 344093:
    {
        returnValue = F("Zimmernstr.");
        break;
    }
    case 344094:
    {
        returnValue = F("Zimmernsupraer Str.");
        break;
    }
    case 344095:
    {
        returnValue = F("Zimmerplan");
        break;
    }
    case 344096:
    {
        returnValue = F("Zimmerplatz");
        break;
    }
    case 344097:
    {
        returnValue = F("Zimmerplatzschneise");
        break;
    }
    case 344098:
    {
        returnValue = F("Zimmerplatzstr.");
        break;
    }
    case 344099:
    {
        returnValue = F("Zimmerplatzweg");
        break;
    }
    case 344100:
    {
        returnValue = F("Zimmerplätzlesweg");
        break;
    }
    case 344101:
    {
        returnValue = F("Zimmerrasen");
        break;
    }
    case 344102:
    {
        returnValue = F("Zimmersacher Steig");
        break;
    }
    case 344103:
    {
        returnValue = F("Zimmersacherstr.");
        break;
    }
    case 344104:
    {
        returnValue = F("Zimmersacherweg");
        break;
    }
    case 344105:
    {
        returnValue = F("Zimmersbrunnen");
        break;
    }
    case 344106:
    {
        returnValue = F("Zimmersche Str.");
        break;
    }
    case 344107:
    {
        returnValue = F("Zimmerscher Weg");
        break;
    }
    case 344108:
    {
        returnValue = F("Zimmerschlag - Weg (Pfreimdtal - Wanderweg)");
        break;
    }
    case 344109:
    {
        returnValue = F("Zimmerschlagweg");
        break;
    }
    case 344110:
    {
        returnValue = F("Zimmerschneise");
        break;
    }
    case 344111:
    {
        returnValue = F("Zimmersdorfer Str.");
        break;
    }
    case 344112:
    {
        returnValue = F("Zimmerseestr.");
        break;
    }
    case 344113:
    {
        returnValue = F("Zimmerseifer Weg");
        break;
    }
    case 344114:
    {
        returnValue = F("Zimmersgasse");
        break;
    }
    case 344115:
    {
        returnValue = F("Zimmersröder Str.");
        break;
    }
    case 344116:
    {
        returnValue = F("Zimmersteige");
        break;
    }
    case 344117:
    {
        returnValue = F("Zimmerstr.");
        break;
    }
    case 344118:
    {
        returnValue = F("Zimmersweg");
        break;
    }
    case 344119:
    {
        returnValue = F("Zimmertal");
        break;
    }
    case 344120:
    {
        returnValue = F("Zimmertalweg");
        break;
    }
    case 344121:
    {
        returnValue = F("Zimmerteichweg");
        break;
    }
    case 344122:
    {
        returnValue = F("Zimmerwaldweg");
        break;
    }
    case 344123:
    {
        returnValue = F("Zimmerweg");
        break;
    }
    case 344124:
    {
        returnValue = F("Zimmerwiesenweg");
        break;
    }
    case 344125:
    {
        returnValue = F("Zimmeräckerstr.");
        break;
    }
    case 344126:
    {
        returnValue = F("Zimmetleite");
        break;
    }
    case 344127:
    {
        returnValue = F("Zimmlerstr.");
        break;
    }
    case 344128:
    {
        returnValue = F("Zimmritz");
        break;
    }
    case 344129:
    {
        returnValue = F("Zimpeler Str.");
        break;
    }
    case 344130:
    {
        returnValue = F("Zimtweg");
        break;
    }
    case 344131:
    {
        returnValue = F("Zinckestr.");
        break;
    }
    case 344132:
    {
        returnValue = F("Zinckstr.");
        break;
    }
    case 344133:
    {
        returnValue = F("Zindelgasse");
        break;
    }
    case 344134:
    {
        returnValue = F("Zindelsteinerstr.");
        break;
    }
    case 344135:
    {
        returnValue = F("Zindelstr.");
        break;
    }
    case 344136:
    {
        returnValue = F("Zindelweg");
        break;
    }
    case 344137:
    {
        returnValue = F("Zindler Weg");
        break;
    }
    case 344138:
    {
        returnValue = F("Zingel");
        break;
    }
    case 344139:
    {
        returnValue = F("Zingelgasse");
        break;
    }
    case 344140:
    {
        returnValue = F("Zingelke");
        break;
    }
    case 344141:
    {
        returnValue = F("Zingelpfad");
        break;
    }
    case 344142:
    {
        returnValue = F("Zingelstr.");
        break;
    }
    case 344143:
    {
        returnValue = F("Zingelweg");
        break;
    }
    case 344144:
    {
        returnValue = F("Zingent");
        break;
    }
    case 344145:
    {
        returnValue = F("Zingerlesmühle");
        break;
    }
    case 344146:
    {
        returnValue = F("Zinggstr.");
        break;
    }
    case 344147:
    {
        returnValue = F("Zinglerbrücke");
        break;
    }
    case 344148:
    {
        returnValue = F("Zinglerstr.");
        break;
    }
    case 344149:
    {
        returnValue = F("Zinglingstr.");
        break;
    }
    case 344150:
    {
        returnValue = F("Zingsbach");
        break;
    }
    case 344151:
    {
        returnValue = F("Zingsheimer Str.");
        break;
    }
    case 344152:
    {
        returnValue = F("Zingsheimer Tal");
        break;
    }
    case 344153:
    {
        returnValue = F("Zingsheimstr.");
        break;
    }
    case 344154:
    {
        returnValue = F("Zingster Ring");
        break;
    }
    case 344155:
    {
        returnValue = F("Zingster Str.");
        break;
    }
    case 344156:
    {
        returnValue = F("Zingstweg");
        break;
    }
    case 344157:
    {
        returnValue = F("Zinhainer Weg");
        break;
    }
    case 344158:
    {
        returnValue = F("Zinienweg");
        break;
    }
    case 344159:
    {
        returnValue = F("Zinkanger");
        break;
    }
    case 344160:
    {
        returnValue = F("Zinkbergweg");
        break;
    }
    case 344161:
    {
        returnValue = F("Zinkbrunnenstr.");
        break;
    }
    case 344162:
    {
        returnValue = F("Zinkel");
        break;
    }
    case 344163:
    {
        returnValue = F("Zinken");
        break;
    }
    case 344164:
    {
        returnValue = F("Zinkenbaumstr.");
        break;
    }
    case 344165:
    {
        returnValue = F("Zinkenbergweg");
        break;
    }
    case 344166:
    {
        returnValue = F("Zinkenbuck");
        break;
    }
    case 344167:
    {
        returnValue = F("Zinkengasse");
        break;
    }
    case 344168:
    {
        returnValue = F("Zinkenstr.");
        break;
    }
    case 344169:
    {
        returnValue = F("Zinkentobelweg");
        break;
    }
    case 344170:
    {
        returnValue = F("Zinkenweg");
        break;
    }
    case 344171:
    {
        returnValue = F("Zinkenwehr");
        break;
    }
    case 344172:
    {
        returnValue = F("Zinkenwehrstr.");
        break;
    }
    case 344173:
    {
        returnValue = F("Zinkenwerderstr.");
        break;
    }
    case 344174:
    {
        returnValue = F("Zinkenwörth");
        break;
    }
    case 344175:
    {
        returnValue = F("Zinkestr.");
        break;
    }
    case 344176:
    {
        returnValue = F("Zinkeysenstr.");
        break;
    }
    case 344177:
    {
        returnValue = F("Zinkgallsweg");
        break;
    }
    case 344178:
    {
        returnValue = F("Zinkgasse");
        break;
    }
    case 344179:
    {
        returnValue = F("Zinkgräfstr.");
        break;
    }
    case 344180:
    {
        returnValue = F("Zinkhof");
        break;
    }
    case 344181:
    {
        returnValue = F("Zinkhohlweg");
        break;
    }
    case 344182:
    {
        returnValue = F("Zinkhüttenstr.");
        break;
    }
    case 344183:
    {
        returnValue = F("Zinkhüttenweg");
        break;
    }
    case 344184:
    {
        returnValue = F("Zinklesweg");
        break;
    }
    case 344185:
    {
        returnValue = F("Zinklmiltach");
        break;
    }
    case 344186:
    {
        returnValue = F("Zinkmattenstr.");
        break;
    }
    case 344187:
    {
        returnValue = F("Zinksgartenstr.");
        break;
    }
    case 344188:
    {
        returnValue = F("Zinkstr.");
        break;
    }
    case 344189:
    {
        returnValue = F("Zinkweilerstr.");
        break;
    }
    case 344190:
    {
        returnValue = F("Zinnackerweg");
        break;
    }
    case 344191:
    {
        returnValue = F("Zinnaer Str.");
        break;
    }
    case 344192:
    {
        returnValue = F("Zinnaer Tor");
        break;
    }
    case 344193:
    {
        returnValue = F("Zinnaer Vorstadt");
        break;
    }
    case 344194:
    {
        returnValue = F("Zinnaer Weg");
        break;
    }
    case 344195:
    {
        returnValue = F("Zinnaglstr.");
        break;
    }
    case 344196:
    {
        returnValue = F("Zinnastr.");
        break;
    }
    case 344197:
    {
        returnValue = F("Zinnbachstr.");
        break;
    }
    case 344198:
    {
        returnValue = F("Zinnberger Str.");
        break;
    }
    case 344199:
    {
        returnValue = F("Zinnbrunnenweg");
        break;
    }
    case 344200:
    {
        returnValue = F("Zinnbrücke");
        break;
    }
    case 344201:
    {
        returnValue = F("Zinndorfer Chaussee");
        break;
    }
    case 344202:
    {
        returnValue = F("Zinndorfer Str.");
        break;
    }
    case 344203:
    {
        returnValue = F("Zinndorfer Weg");
        break;
    }
    case 344204:
    {
        returnValue = F("Zinne");
        break;
    }
    case 344205:
    {
        returnValue = F("Zinnebeis");
        break;
    }
    case 344206:
    {
        returnValue = F("Zinneberger Str.");
        break;
    }
    case 344207:
    {
        returnValue = F("Zinnebergstr.");
        break;
    }
    case 344208:
    {
        returnValue = F("Zinnegäßchen");
        break;
    }
    case 344209:
    {
        returnValue = F("Zinnelschneise");
        break;
    }
    case 344210:
    {
        returnValue = F("Zinnenweg");
        break;
    }
    case 344211:
    {
        returnValue = F("Zinnergasse");
        break;
    }
    case 344212:
    {
        returnValue = F("Zinnernickelweg");
        break;
    }
    case 344213:
    {
        returnValue = F("Zinnersricht");
        break;
    }
    case 344214:
    {
        returnValue = F("Zinnerweg");
        break;
    }
    case 344215:
    {
        returnValue = F("Zinnfeldweg");
        break;
    }
    case 344216:
    {
        returnValue = F("Zinngasse");
        break;
    }
    case 344217:
    {
        returnValue = F("Zinngießer-Weg");
        break;
    }
    case 344218:
    {
        returnValue = F("Zinngießergasse");
        break;
    }
    case 344219:
    {
        returnValue = F("Zinngießerstr.");
        break;
    }
    case 344220:
    {
        returnValue = F("Zinngießerweg");
        break;
    }
    case 344221:
    {
        returnValue = F("Zinngrabenweg");
        break;
    }
    case 344222:
    {
        returnValue = F("Zinngrubenweg");
        break;
    }
    case 344223:
    {
        returnValue = F("Zinngärten");
        break;
    }
    case 344224:
    {
        returnValue = F("Zinnhof");
        break;
    }
    case 344225:
    {
        returnValue = F("Zinniengasse");
        break;
    }
    case 344226:
    {
        returnValue = F("Zinnienstr.");
        break;
    }
    case 344227:
    {
        returnValue = F("Zinnienweg");
        break;
    }
    case 344228:
    {
        returnValue = F("Zinnkopf-Pfad");
        break;
    }
    case 344229:
    {
        returnValue = F("Zinnkopfstr.");
        break;
    }
    case 344230:
    {
        returnValue = F("Zinnkopfweg");
        break;
    }
    case 344231:
    {
        returnValue = F("Zinnkrautweg");
        break;
    }
    case 344232:
    {
        returnValue = F("Zinnleitenweg");
        break;
    }
    case 344233:
    {
        returnValue = F("Zinnoberweg");
        break;
    }
    case 344234:
    {
        returnValue = F("Zinnowitzer Str.");
        break;
    }
    case 344235:
    {
        returnValue = F("Zinnowitzer Weg");
        break;
    }
    case 344236:
    {
        returnValue = F("Zinnschützstr.");
        break;
    }
    case 344237:
    {
        returnValue = F("Zinnsteig");
        break;
    }
    case 344238:
    {
        returnValue = F("Zinnstr.");
        break;
    }
    case 344239:
    {
        returnValue = F("Zinnwald");
        break;
    }
    case 344240:
    {
        returnValue = F("Zinnwalder Str.");
        break;
    }
    case 344241:
    {
        returnValue = F("Zinnweg");
        break;
    }
    case 344242:
    {
        returnValue = F("Zinow");
        break;
    }
    case 344243:
    {
        returnValue = F("Zinsackerweg");
        break;
    }
    case 344244:
    {
        returnValue = F("Zinsbachstr.");
        break;
    }
    case 344245:
    {
        returnValue = F("Zinsbachweg");
        break;
    }
    case 344246:
    {
        returnValue = F("Zinsbachwiesen");
        break;
    }
    case 344247:
    {
        returnValue = F("Zinsbergweg");
        break;
    }
    case 344248:
    {
        returnValue = F("Zinsdorfer Str.");
        break;
    }
    case 344249:
    {
        returnValue = F("Zinsdorfer Weg");
        break;
    }
    case 344250:
    {
        returnValue = F("Zinselgasse");
        break;
    }
    case 344251:
    {
        returnValue = F("Zinselstr.");
        break;
    }
    case 344252:
    {
        returnValue = F("Zinsenbach");
        break;
    }
    case 344253:
    {
        returnValue = F("Zinser Rücken");
        break;
    }
    case 344254:
    {
        returnValue = F("Zinsergasse");
        break;
    }
    case 344255:
    {
        returnValue = F("Zinsersstr.");
        break;
    }
    case 344256:
    {
        returnValue = F("Zinsetal");
        break;
    }
    case 344257:
    {
        returnValue = F("Zinsfelderstr.");
        break;
    }
    case 344258:
    {
        returnValue = F("Zinsgrabenweg");
        break;
    }
    case 344259:
    {
        returnValue = F("Zinsgutstr.");
        break;
    }
    case 344260:
    {
        returnValue = F("Zinshardt");
        break;
    }
    case 344261:
    {
        returnValue = F("Zinshardter Str.");
        break;
    }
    case 344262:
    {
        returnValue = F("Zinshardter Weg");
        break;
    }
    case 344263:
    {
        returnValue = F("Zinsholzstr.");
        break;
    }
    case 344264:
    {
        returnValue = F("Zinsholzweg");
        break;
    }
    case 344265:
    {
        returnValue = F("Zinskenfehner Str.");
        break;
    }
    case 344266:
    {
        returnValue = F("Zinslesbergweg");
        break;
    }
    case 344267:
    {
        returnValue = F("Zinsmeisterstr.");
        break;
    }
    case 344268:
    {
        returnValue = F("Zinsmeisterweg");
        break;
    }
    case 344269:
    {
        returnValue = F("Zinsstücker");
        break;
    }
    case 344270:
    {
        returnValue = F("Zinster Weg");
        break;
    }
    case 344271:
    {
        returnValue = F("Zinsweg");
        break;
    }
    case 344272:
    {
        returnValue = F("Zinsäckerstr.");
        break;
    }
    case 344273:
    {
        returnValue = F("Zintener Str.");
        break;
    }
    case 344274:
    {
        returnValue = F("Zintlhammer");
        break;
    }
    case 344275:
    {
        returnValue = F("Zinzendorfallee");
        break;
    }
    case 344276:
    {
        returnValue = F("Zinzendorfer Str.");
        break;
    }
    case 344277:
    {
        returnValue = F("Zinzendorfer Weg");
        break;
    }
    case 344278:
    {
        returnValue = F("Zinzendorfpark");
        break;
    }
    case 344279:
    {
        returnValue = F("Zinzendorfplatz");
        break;
    }
    case 344280:
    {
        returnValue = F("Zinzendorfstr.");
        break;
    }
    case 344281:
    {
        returnValue = F("Zinzendorfweg");
        break;
    }
    case 344282:
    {
        returnValue = F("Zinzenzeller Weg");
        break;
    }
    case 344283:
    {
        returnValue = F("Zinzinger Str.");
        break;
    }
    case 344284:
    {
        returnValue = F("Zinzow");
        break;
    }
    case 344285:
    {
        returnValue = F("Zinzow Ausbau");
        break;
    }
    case 344286:
    {
        returnValue = F("Zinzower Weg");
        break;
    }
    case 344287:
    {
        returnValue = F("Ziolkowskiring");
        break;
    }
    case 344288:
    {
        returnValue = F("Ziolkowskistr.");
        break;
    }
    case 344289:
    {
        returnValue = F("Zionsweg");
        break;
    }
    case 344290:
    {
        returnValue = F("Zipfel");
        break;
    }
    case 344291:
    {
        returnValue = F("Zipfelbachtal");
        break;
    }
    case 344292:
    {
        returnValue = F("Zipfelgasse");
        break;
    }
    case 344293:
    {
        returnValue = F("Zipfelhofstr.");
        break;
    }
    case 344294:
    {
        returnValue = F("Zipfelmühlenweg");
        break;
    }
    case 344295:
    {
        returnValue = F("Zipfelstr.");
        break;
    }
    case 344296:
    {
        returnValue = F("Zipfelwaldweg");
        break;
    }
    case 344297:
    {
        returnValue = F("Zipfelweg");
        break;
    }
    case 344298:
    {
        returnValue = F("Zipfendobelweg");
        break;
    }
    case 344299:
    {
        returnValue = F("Zipfenschneise");
        break;
    }
    case 344300:
    {
        returnValue = F("Zipfenweg");
        break;
    }
    case 344301:
    {
        returnValue = F("Zipfer am Berg");
        break;
    }
    case 344302:
    {
        returnValue = F("Zipflwiesstr.");
        break;
    }
    case 344303:
    {
        returnValue = F("Zipfweg");
        break;
    }
    case 344304:
    {
        returnValue = F("Zipfäckerstr.");
        break;
    }
    case 344305:
    {
        returnValue = F("Zipkeleben");
        break;
    }
    case 344306:
    {
        returnValue = F("Zipkeleber Weg");
        break;
    }
    case 344307:
    {
        returnValue = F("Zipker Weg");
        break;
    }
    case 344308:
    {
        returnValue = F("Zipollenhagen");
        break;
    }
    case 344309:
    {
        returnValue = F("Zipp");
        break;
    }
    case 344310:
    {
        returnValue = F("Zippammerweg");
        break;
    }
    case 344311:
    {
        returnValue = F("Zippchen");
        break;
    }
    case 344312:
    {
        returnValue = F("Zippe");
        break;
    }
    case 344313:
    {
        returnValue = F("Zippelhornweg");
        break;
    }
    case 344314:
    {
        returnValue = F("Zippelmarkt");
        break;
    }
    case 344315:
    {
        returnValue = F("Zippelow");
        break;
    }
    case 344316:
    {
        returnValue = F("Zippelsförde-Krangen Radweg");
        break;
    }
    case 344317:
    {
        returnValue = F("Zippengasse");
        break;
    }
    case 344318:
    {
        returnValue = F("Zipperersteg");
        break;
    }
    case 344319:
    {
        returnValue = F("Zippererweg");
        break;
    }
    case 344320:
    {
        returnValue = F("Zipperhecke");
        break;
    }
    case 344321:
    {
        returnValue = F("Zipperlingssiepen");
        break;
    }
    case 344322:
    {
        returnValue = F("Zipperstr.");
        break;
    }
    case 344323:
    {
        returnValue = F("Zipplinger Hofwiesen");
        break;
    }
    case 344324:
    {
        returnValue = F("Zipplinger Str.");
        break;
    }
    case 344325:
    {
        returnValue = F("Zipprothplatz");
        break;
    }
    case 344326:
    {
        returnValue = F("Zipsdorfer Str.");
        break;
    }
    case 344327:
    {
        returnValue = F("Zipsendorfer Weg");
        break;
    }
    case 344328:
    {
        returnValue = F("Zipser Str.");
        break;
    }
    case 344329:
    {
        returnValue = F("Zipser Weg");
        break;
    }
    case 344330:
    {
        returnValue = F("Zipserstr.");
        break;
    }
    case 344331:
    {
        returnValue = F("Zipserweg");
        break;
    }
    case 344332:
    {
        returnValue = F("Zipshausen");
        break;
    }
    case 344333:
    {
        returnValue = F("Zipsstr.");
        break;
    }
    case 344334:
    {
        returnValue = F("Zirbelkopfstr.");
        break;
    }
    case 344335:
    {
        returnValue = F("Zirbelkopfweg");
        break;
    }
    case 344336:
    {
        returnValue = F("Zirbelstr.");
        break;
    }
    case 344337:
    {
        returnValue = F("Zirbelweg");
        break;
    }
    case 344338:
    {
        returnValue = F("Zirbenstr.");
        break;
    }
    case 344339:
    {
        returnValue = F("Zirbenweg");
        break;
    }
    case 344340:
    {
        returnValue = F("Zirgesheimer Str.");
        break;
    }
    case 344341:
    {
        returnValue = F("Ziriakenhofstr.");
        break;
    }
    case 344342:
    {
        returnValue = F("Zirkel");
        break;
    }
    case 344343:
    {
        returnValue = F("Zirkeldörfer Str.");
        break;
    }
    case 344344:
    {
        returnValue = F("Zirkelschmiedsgasse");
        break;
    }
    case 344345:
    {
        returnValue = F("Zirkelsteinstr.");
        break;
    }
    case 344346:
    {
        returnValue = F("Zirkelstr.");
        break;
    }
    case 344347:
    {
        returnValue = F("Zirkelweg");
        break;
    }
    case 344348:
    {
        returnValue = F("Zirkelwiesenweg");
        break;
    }
    case 344349:
    {
        returnValue = F("Zirken");
        break;
    }
    case 344350:
    {
        returnValue = F("Zirkenbacher Str.");
        break;
    }
    case 344351:
    {
        returnValue = F("Zirkendorfer Str.");
        break;
    }
    case 344352:
    {
        returnValue = F("Zirkenreuth");
        break;
    }
    case 344353:
    {
        returnValue = F("Zirkenstr.");
        break;
    }
    case 344354:
    {
        returnValue = F("Zirkenteilstr.");
        break;
    }
    case 344355:
    {
        returnValue = F("Zirklstr.");
        break;
    }
    case 344356:
    {
        returnValue = F("Zirkonhof");
        break;
    }
    case 344357:
    {
        returnValue = F("Zirkonstr.");
        break;
    }
    case 344358:
    {
        returnValue = F("Zirkusallee");
        break;
    }
    case 344359:
    {
        returnValue = F("Zirkusplatz");
        break;
    }
    case 344360:
    {
        returnValue = F("Zirkusstr.");
        break;
    }
    case 344361:
    {
        returnValue = F("Zirkuswagencamp der Umweltpiraten");
        break;
    }
    case 344362:
    {
        returnValue = F("Zirler Str.");
        break;
    }
    case 344363:
    {
        returnValue = F("Zirler Weg");
        break;
    }
    case 344364:
    {
        returnValue = F("Zirlweg");
        break;
    }
    case 344365:
    {
        returnValue = F("Zirmgratweg");
        break;
    }
    case 344366:
    {
        returnValue = F("Zirnberger Str.");
        break;
    }
    case 344367:
    {
        returnValue = F("Zirnbergerstr.");
        break;
    }
    case 344368:
    {
        returnValue = F("Zirndorfer Str.");
        break;
    }
    case 344369:
    {
        returnValue = F("Zirndorfer Weg");
        break;
    }
    case 344370:
    {
        returnValue = F("Zirngiblstr.");
        break;
    }
    case 344371:
    {
        returnValue = F("Zirpenweg");
        break;
    }
    case 344372:
    {
        returnValue = F("Zirrer Str.");
        break;
    }
    case 344373:
    {
        returnValue = F("Zirsevitz");
        break;
    }
    case 344374:
    {
        returnValue = F("Zirzipanenweg");
        break;
    }
    case 344375:
    {
        returnValue = F("Zirzower Str.");
        break;
    }
    case 344376:
    {
        returnValue = F("Zischelbrücke");
        break;
    }
    case 344377:
    {
        returnValue = F("Ziskauer Tal");
        break;
    }
    case 344378:
    {
        returnValue = F("Zissekengasse");
        break;
    }
    case 344379:
    {
        returnValue = F("Zissendorfer Str.");
        break;
    }
    case 344380:
    {
        returnValue = F("Zissendorfer Weg");
        break;
    }
    case 344381:
    {
        returnValue = F("Zissener Str.");
        break;
    }
    case 344382:
    {
        returnValue = F("Zissener-Weg");
        break;
    }
    case 344383:
    {
        returnValue = F("Zissenhausener Weg");
        break;
    }
    case 344384:
    {
        returnValue = F("Zissenhauser Weg");
        break;
    }
    case 344385:
    {
        returnValue = F("Zissenstr.");
        break;
    }
    case 344386:
    {
        returnValue = F("Zissenweg");
        break;
    }
    case 344387:
    {
        returnValue = F("Zisser Berg");
        break;
    }
    case 344388:
    {
        returnValue = F("Zissickenwinkel");
        break;
    }
    case 344389:
    {
        returnValue = F("Zistelthalweg");
        break;
    }
    case 344390:
    {
        returnValue = F("Zisternenweg");
        break;
    }
    case 344391:
    {
        returnValue = F("Zisterstr.");
        break;
    }
    case 344392:
    {
        returnValue = F("Zisterzienser-Str.");
        break;
    }
    case 344393:
    {
        returnValue = F("Zisterzienserplatz");
        break;
    }
    case 344394:
    {
        returnValue = F("Zisterzienserstr.");
        break;
    }
    case 344395:
    {
        returnValue = F("Zisterzienserweg");
        break;
    }
    case 344396:
    {
        returnValue = F("Zisthof");
        break;
    }
    case 344397:
    {
        returnValue = F("Ziswingen");
        break;
    }
    case 344398:
    {
        returnValue = F("Ziswinger Str.");
        break;
    }
    case 344399:
    {
        returnValue = F("Zita-Kaiser-Str.");
        break;
    }
    case 344400:
    {
        returnValue = F("Zita-Zehner-Str.");
        break;
    }
    case 344401:
    {
        returnValue = F("Zitadelle");
        break;
    }
    case 344402:
    {
        returnValue = F("Zitadellenweg");
        break;
    }
    case 344403:
    {
        returnValue = F("Zitadellstr.");
        break;
    }
    case 344404:
    {
        returnValue = F("Zitelmannstr.");
        break;
    }
    case 344405:
    {
        returnValue = F("Zitronemannsgäßchen");
        break;
    }
    case 344406:
    {
        returnValue = F("Zitronenapfel-Weg");
        break;
    }
    case 344407:
    {
        returnValue = F("Zitronenbrink");
        break;
    }
    case 344408:
    {
        returnValue = F("Zitronenfalterhof");
        break;
    }
    case 344409:
    {
        returnValue = F("Zitronenfalterstr.");
        break;
    }
    case 344410:
    {
        returnValue = F("Zitronenfalterweg");
        break;
    }
    case 344411:
    {
        returnValue = F("Zitronengässchen");
        break;
    }
    case 344412:
    {
        returnValue = F("Zitronengässle");
        break;
    }
    case 344413:
    {
        returnValue = F("Zitronenweg");
        break;
    }
    case 344414:
    {
        returnValue = F("Zittauer Platz");
        break;
    }
    case 344415:
    {
        returnValue = F("Zittauer Str.");
        break;
    }
    case 344416:
    {
        returnValue = F("Zittauer Weg");
        break;
    }
    case 344417:
    {
        returnValue = F("Zittel");
        break;
    }
    case 344418:
    {
        returnValue = F("Zittelmannstr.");
        break;
    }
    case 344419:
    {
        returnValue = F("Zittelstatt");
        break;
    }
    case 344420:
    {
        returnValue = F("Zittelstr.");
        break;
    }
    case 344421:
    {
        returnValue = F("Zittenhofer Weg");
        break;
    }
    case 344422:
    {
        returnValue = F("Zitter");
        break;
    }
    case 344423:
    {
        returnValue = F("Zitterackerweg");
        break;
    }
    case 344424:
    {
        returnValue = F("Zitterbergweg");
        break;
    }
    case 344425:
    {
        returnValue = F("Zitterdell");
        break;
    }
    case 344426:
    {
        returnValue = F("Zitterfeld");
        break;
    }
    case 344427:
    {
        returnValue = F("Zittergasse");
        break;
    }
    case 344428:
    {
        returnValue = F("Zittergrasweg");
        break;
    }
    case 344429:
    {
        returnValue = F("Zitterhagen");
        break;
    }
    case 344430:
    {
        returnValue = F("Zitterhofstr.");
        break;
    }
    case 344431:
    {
        returnValue = F("Zitterhuck");
        break;
    }
    case 344432:
    {
        returnValue = F("Zitterkopfweg");
        break;
    }
    case 344433:
    {
        returnValue = F("Zitterser Dorfstr.");
        break;
    }
    case 344434:
    {
        returnValue = F("Zitterweg");
        break;
    }
    case 344435:
    {
        returnValue = F("Zittkower Weg");
        break;
    }
    case 344436:
    {
        returnValue = F("Zittower Str.");
        break;
    }
    case 344437:
    {
        returnValue = F("Zittower Weg");
        break;
    }
    case 344438:
    {
        returnValue = F("Zittschower Weg");
        break;
    }
    case 344439:
    {
        returnValue = F("Zittvitz");
        break;
    }
    case 344440:
    {
        returnValue = F("Zitzenbachstr.");
        break;
    }
    case 344441:
    {
        returnValue = F("Zitzer Dorfstr.");
        break;
    }
    case 344442:
    {
        returnValue = F("Zitzer Str.");
        break;
    }
    case 344443:
    {
        returnValue = F("Zitzergasse");
        break;
    }
    case 344444:
    {
        returnValue = F("Zitzewitz-Brücke");
        break;
    }
    case 344445:
    {
        returnValue = F("Zitzmannstr.");
        break;
    }
    case 344446:
    {
        returnValue = F("Zitzmergasse");
        break;
    }
    case 344447:
    {
        returnValue = F("Zitzschewiger Str.");
        break;
    }
    case 344448:
    {
        returnValue = F("Zitzstaudenweg");
        break;
    }
    case 344449:
    {
        returnValue = F("Ziustr.");
        break;
    }
    case 344450:
    {
        returnValue = F("Zixdorfer Weg");
        break;
    }
    case 344451:
    {
        returnValue = F("Zixenberg");
        break;
    }
    case 344452:
    {
        returnValue = F("Zizinger Weg");
        break;
    }
    case 344453:
    {
        returnValue = F("Zißlergasse");
        break;
    }
    case 344454:
    {
        returnValue = F("Zliner Str.");
        break;
    }
    case 344455:
    {
        returnValue = F("Zlotower Str.");
        break;
    }
    case 344456:
    {
        returnValue = F("Znaimer Str.");
        break;
    }
    case 344457:
    {
        returnValue = F("Znaimer Weg");
        break;
    }
    case 344458:
    {
        returnValue = F("Zoahl");
        break;
    }
    case 344459:
    {
        returnValue = F("Zoar");
        break;
    }
    case 344460:
    {
        returnValue = F("Zobelfeld");
        break;
    }
    case 344461:
    {
        returnValue = F("Zobelgasse");
        break;
    }
    case 344462:
    {
        returnValue = F("Zobelmühlenweg");
        break;
    }
    case 344463:
    {
        returnValue = F("Zobelplatz");
        break;
    }
    case 344464:
    {
        returnValue = F("Zobels Gang");
        break;
    }
    case 344465:
    {
        returnValue = F("Zobels Hof");
        break;
    }
    case 344466:
    {
        returnValue = F("Zobelsbachweg");
        break;
    }
    case 344467:
    {
        returnValue = F("Zobelsberg");
        break;
    }
    case 344468:
    {
        returnValue = F("Zobelstr.");
        break;
    }
    case 344469:
    {
        returnValue = F("Zobelweg");
        break;
    }
    case 344470:
    {
        returnValue = F("Zoberberg");
        break;
    }
    case 344471:
    {
        returnValue = F("Zobersdorfer Str.");
        break;
    }
    case 344472:
    {
        returnValue = F("Zobeser Str.");
        break;
    }
    case 344473:
    {
        returnValue = F("Zobeser Weg");
        break;
    }
    case 344474:
    {
        returnValue = F("Zobtensteig");
        break;
    }
    case 344475:
    {
        returnValue = F("Zobtenstr.");
        break;
    }
    case 344476:
    {
        returnValue = F("Zobtenweg");
        break;
    }
    case 344477:
    {
        returnValue = F("Zochastr.");
        break;
    }
    case 344478:
    {
        returnValue = F("Zochauer Heideweg");
        break;
    }
    case 344479:
    {
        returnValue = F("Zochentalweg");
        break;
    }
    case 344480:
    {
        returnValue = F("Zochestr.");
        break;
    }
    case 344481:
    {
        returnValue = F("Zochstr.");
        break;
    }
    case 344482:
    {
        returnValue = F("Zocklersteige");
        break;
    }
    case 344483:
    {
        returnValue = F("Zoderweg");
        break;
    }
    case 344484:
    {
        returnValue = F("Zoeppritz-Weg");
        break;
    }
    case 344485:
    {
        returnValue = F("Zoeppritzhaldeweg");
        break;
    }
    case 344486:
    {
        returnValue = F("Zoeppritzstr.");
        break;
    }
    case 344487:
    {
        returnValue = F("Zoetermeerstr.");
        break;
    }
    case 344488:
    {
        returnValue = F("Zogbaumweg");
        break;
    }
    case 344489:
    {
        returnValue = F("Zogbaunsweg");
        break;
    }
    case 344490:
    {
        returnValue = F("Zogelmannstr.");
        break;
    }
    case 344491:
    {
        returnValue = F("Zogelweg");
        break;
    }
    case 344492:
    {
        returnValue = F("Zogenfeldstr.");
        break;
    }
    case 344493:
    {
        returnValue = F("Zoghaus");
        break;
    }
    case 344494:
    {
        returnValue = F("Zoiglgasse");
        break;
    }
    case 344495:
    {
        returnValue = F("Zoitzbergstr.");
        break;
    }
    case 344496:
    {
        returnValue = F("Zola-Weg");
        break;
    }
    case 344497:
    {
        returnValue = F("Zolaring");
        break;
    }
    case 344498:
    {
        returnValue = F("Zolastr.");
        break;
    }
    case 344499:
    {
        returnValue = F("Zolaweg");
        break;
    }
    case 344500:
    {
        returnValue = F("Zolchower Weg");
        break;
    }
    case 344501:
    {
        returnValue = F("Zolderstr.");
        break;
    }
    case 344502:
    {
        returnValue = F("Zolkendorfer Str.");
        break;
    }
    case 344503:
    {
        returnValue = F("Zolkenweg");
        break;
    }
    case 344504:
    {
        returnValue = F("Zoll");
        break;
    }
    case 344505:
    {
        returnValue = F("Zollackerstr.");
        break;
    }
    case 344506:
    {
        returnValue = F("Zollamtsstr.");
        break;
    }
    case 344507:
    {
        returnValue = F("Zollamtstr.");
        break;
    }
    case 344508:
    {
        returnValue = F("Zollbaum");
        break;
    }
    case 344509:
    {
        returnValue = F("Zollbaumring");
        break;
    }
    case 344510:
    {
        returnValue = F("Zollberg");
        break;
    }
    case 344511:
    {
        returnValue = F("Zollbergsteige");
        break;
    }
    case 344512:
    {
        returnValue = F("Zollbergstr.");
        break;
    }
    case 344513:
    {
        returnValue = F("Zollbruck");
        break;
    }
    case 344514:
    {
        returnValue = F("Zollbruckerstr.");
        break;
    }
    case 344515:
    {
        returnValue = F("Zollbrunn");
        break;
    }
    case 344516:
    {
        returnValue = F("Zollbrücke");
        break;
    }
    case 344517:
    {
        returnValue = F("Zollbrückenstr.");
        break;
    }
    case 344518:
    {
        returnValue = F("Zollbühlweg");
        break;
    }
    case 344519:
    {
        returnValue = F("Zollchower Str.");
        break;
    }
    case 344520:
    {
        returnValue = F("Zolldamm");
        break;
    }
    case 344521:
    {
        returnValue = F("Zollende");
        break;
    }
    case 344522:
    {
        returnValue = F("Zollenreuter Fußweg");
        break;
    }
    case 344523:
    {
        returnValue = F("Zollenreuter Str.");
        break;
    }
    case 344524:
    {
        returnValue = F("Zollensteig");
        break;
    }
    case 344525:
    {
        returnValue = F("Zollensträßchen");
        break;
    }
    case 344526:
    {
        returnValue = F("Zollerbergleweg");
        break;
    }
    case 344527:
    {
        returnValue = F("Zollerbergstr.");
        break;
    }
    case 344528:
    {
        returnValue = F("Zollerblick");
        break;
    }
    case 344529:
    {
        returnValue = F("Zollerblickstr.");
        break;
    }
    case 344530:
    {
        returnValue = F("Zollergarten");
        break;
    }
    case 344531:
    {
        returnValue = F("Zollergasse");
        break;
    }
    case 344532:
    {
        returnValue = F("Zollernblick");
        break;
    }
    case 344533:
    {
        returnValue = F("Zollernblickstr.");
        break;
    }
    case 344534:
    {
        returnValue = F("Zollernblickweg");
        break;
    }
    case 344535:
    {
        returnValue = F("Zollernplatz");
        break;
    }
    case 344536:
    {
        returnValue = F("Zollernring");
        break;
    }
    case 344537:
    {
        returnValue = F("Zollernstr.");
        break;
    }
    case 344538:
    {
        returnValue = F("Zollernweg");
        break;
    }
    case 344539:
    {
        returnValue = F("Zollerplatz");
        break;
    }
    case 344540:
    {
        returnValue = F("Zollersbühnstr.");
        break;
    }
    case 344541:
    {
        returnValue = F("Zollerstr.");
        break;
    }
    case 344542:
    {
        returnValue = F("Zollersweg");
        break;
    }
    case 344543:
    {
        returnValue = F("Zollerwaldringstr.");
        break;
    }
    case 344544:
    {
        returnValue = F("Zollerwaldstr.");
        break;
    }
    case 344545:
    {
        returnValue = F("Zollerweg");
        break;
    }
    case 344546:
    {
        returnValue = F("Zollesstr.");
        break;
    }
    case 344547:
    {
        returnValue = F("Zollgasse");
        break;
    }
    case 344548:
    {
        returnValue = F("Zollhafen");
        break;
    }
    case 344549:
    {
        returnValue = F("Zollhallenstr.");
        break;
    }
    case 344550:
    {
        returnValue = F("Zollhauauffahrt");
        break;
    }
    case 344551:
    {
        returnValue = F("Zollhaukopfweg");
        break;
    }
    case 344552:
    {
        returnValue = F("Zollhaus");
        break;
    }
    case 344553:
    {
        returnValue = F("Zollhauserstr.");
        break;
    }
    case 344554:
    {
        returnValue = F("Zollhausgasse");
        break;
    }
    case 344555:
    {
        returnValue = F("Zollhaushof");
        break;
    }
    case 344556:
    {
        returnValue = F("Zollhausstr.");
        break;
    }
    case 344557:
    {
        returnValue = F("Zollhausträßle");
        break;
    }
    case 344558:
    {
        returnValue = F("Zollhausweg");
        break;
    }
    case 344559:
    {
        returnValue = F("Zollhof");
        break;
    }
    case 344560:
    {
        returnValue = F("Zollhofgarten");
        break;
    }
    case 344561:
    {
        returnValue = F("Zollhofstr.");
        break;
    }
    case 344562:
    {
        returnValue = F("Zollhohle");
        break;
    }
    case 344563:
    {
        returnValue = F("Zollholzweg");
        break;
    }
    case 344564:
    {
        returnValue = F("Zollhäuser");
        break;
    }
    case 344565:
    {
        returnValue = F("Zollhäuser-Str.");
        break;
    }
    case 344566:
    {
        returnValue = F("Zollhäuserstr.");
        break;
    }
    case 344567:
    {
        returnValue = F("Zollhäuserweg");
        break;
    }
    case 344568:
    {
        returnValue = F("Zollhäusleweg");
        break;
    }
    case 344569:
    {
        returnValue = F("Zollhäuslstr.");
        break;
    }
    case 344570:
    {
        returnValue = F("Zollhüttengasse");
        break;
    }
    case 344571:
    {
        returnValue = F("Zollikoferstr.");
        break;
    }
    case 344572:
    {
        returnValue = F("Zollinger Str.");
        break;
    }
    case 344573:
    {
        returnValue = F("Zollinger Weg");
        break;
    }
    case 344574:
    {
        returnValue = F("Zollingerstr.");
        break;
    }
    case 344575:
    {
        returnValue = F("Zollinlandplatz");
        break;
    }
    case 344576:
    {
        returnValue = F("Zollinlandstr.");
        break;
    }
    case 344577:
    {
        returnValue = F("Zollkaje");
        break;
    }
    case 344578:
    {
        returnValue = F("Zollkamp");
        break;
    }
    case 344579:
    {
        returnValue = F("Zollkrug");
        break;
    }
    case 344580:
    {
        returnValue = F("Zollmatt");
        break;
    }
    case 344581:
    {
        returnValue = F("Zollmattenstr.");
        break;
    }
    case 344582:
    {
        returnValue = F("Zollmauerpark");
        break;
    }
    case 344583:
    {
        returnValue = F("Zollmühle");
        break;
    }
    case 344584:
    {
        returnValue = F("Zollnerfeld");
        break;
    }
    case 344585:
    {
        returnValue = F("Zollnerstr.");
        break;
    }
    case 344586:
    {
        returnValue = F("Zollnweg");
        break;
    }
    case 344587:
    {
        returnValue = F("Zolloch");
        break;
    }
    case 344588:
    {
        returnValue = F("Zollpfad");
        break;
    }
    case 344589:
    {
        returnValue = F("ZollpfadWeg");
        break;
    }
    case 344590:
    {
        returnValue = F("Zollplatz");
        break;
    }
    case 344591:
    {
        returnValue = F("Zollrain");
        break;
    }
    case 344592:
    {
        returnValue = F("Zollrainuse_sidepath");
        break;
    }
    case 344593:
    {
        returnValue = F("Zollrainweg");
        break;
    }
    case 344594:
    {
        returnValue = F("Zollschuster");
        break;
    }
    case 344595:
    {
        returnValue = F("Zollschwitz");
        break;
    }
    case 344596:
    {
        returnValue = F("Zollstadlstr.");
        break;
    }
    case 344597:
    {
        returnValue = F("Zollstange");
        break;
    }
    case 344598:
    {
        returnValue = F("Zollstock");
        break;
    }
    case 344599:
    {
        returnValue = F("Zollstockbrunnenweg");
        break;
    }
    case 344600:
    {
        returnValue = F("Zollstockerweg");
        break;
    }
    case 344601:
    {
        returnValue = F("Zollstockgürtel");
        break;
    }
    case 344602:
    {
        returnValue = F("Zollstockmarkt");
        break;
    }
    case 344603:
    {
        returnValue = F("Zollstocksteige");
        break;
    }
    case 344604:
    {
        returnValue = F("Zollstockstr.");
        break;
    }
    case 344605:
    {
        returnValue = F("Zollstocksweg");
        break;
    }
    case 344606:
    {
        returnValue = F("Zollstockweg");
        break;
    }
    case 344607:
    {
        returnValue = F("Zollstr.");
        break;
    }
    case 344608:
    {
        returnValue = F("Zollstädter Str.");
        break;
    }
    case 344609:
    {
        returnValue = F("Zolltafel");
        break;
    }
    case 344610:
    {
        returnValue = F("Zolltenstr.");
        break;
    }
    case 344611:
    {
        returnValue = F("Zollturmstr.");
        break;
    }
    case 344612:
    {
        returnValue = F("Zollverein");
        break;
    }
    case 344613:
    {
        returnValue = F("Zollvereinradweg");
        break;
    }
    case 344614:
    {
        returnValue = F("Zollvereinstr.");
        break;
    }
    case 344615:
    {
        returnValue = F("Zollvereinweg");
        break;
    }
    case 344616:
    {
        returnValue = F("Zollweg");
        break;
    }
    case 344617:
    {
        returnValue = F("Zollwehrsteig");
        break;
    }
    case 344618:
    {
        returnValue = F("Zollwiese");
        break;
    }
    case 344619:
    {
        returnValue = F("Zollwitzer Ring");
        break;
    }
    case 344620:
    {
        returnValue = F("Zollwitzer Str.");
        break;
    }
    case 344621:
    {
        returnValue = F("Zolläckerstr.");
        break;
    }
    case 344622:
    {
        returnValue = F("Zolnhoferweg");
        break;
    }
    case 344623:
    {
        returnValue = F("Zolterweg");
        break;
    }
    case 344624:
    {
        returnValue = F("Zoltinger Str.");
        break;
    }
    case 344625:
    {
        returnValue = F("Zoltmühlweg");
        break;
    }
    case 344626:
    {
        returnValue = F("Zomerngartenstr.");
        break;
    }
    case 344627:
    {
        returnValue = F("Zonser Str.");
        break;
    }
    case 344628:
    {
        returnValue = F("Zoo Dortmund");
        break;
    }
    case 344629:
    {
        returnValue = F("Zoo Duisburg");
        break;
    }
    case 344630:
    {
        returnValue = F("Zoo-Rundweg");
        break;
    }
    case 344631:
    {
        returnValue = F("Zoologischer Stadtgarten");
        break;
    }
    case 344632:
    {
        returnValue = F("Zoopark");
        break;
    }
    case 344633:
    {
        returnValue = F("Zoortstr.");
        break;
    }
    case 344634:
    {
        returnValue = F("Zoostr.");
        break;
    }
    case 344635:
    {
        returnValue = F("Zootzener Damm");
        break;
    }
    case 344636:
    {
        returnValue = F("Zootzener Dorfstr.");
        break;
    }
    case 344637:
    {
        returnValue = F("Zootzener Str.");
        break;
    }
    case 344638:
    {
        returnValue = F("Zootzener Weg");
        break;
    }
    case 344639:
    {
        returnValue = F("Zopfenbeck");
        break;
    }
    case 344640:
    {
        returnValue = F("Zopfstr.");
        break;
    }
    case 344641:
    {
        returnValue = F("Zoppatenstr.");
        break;
    }
    case 344642:
    {
        returnValue = F("Zoppenbroich");
        break;
    }
    case 344643:
    {
        returnValue = F("Zoppenbroicher Park (Bresgespark)");
        break;
    }
    case 344644:
    {
        returnValue = F("Zoppenbroicher Str.");
        break;
    }
    case 344645:
    {
        returnValue = F("Zoppenbrückstr.");
        break;
    }
    case 344646:
    {
        returnValue = F("Zoppoten");
        break;
    }
    case 344647:
    {
        returnValue = F("Zoppoter Str.");
        break;
    }
    case 344648:
    {
        returnValue = F("Zoppoter Weg");
        break;
    }
    case 344649:
    {
        returnValue = F("Zoppotstr.");
        break;
    }
    case 344650:
    {
        returnValue = F("Zoppotweg");
        break;
    }
    case 344651:
    {
        returnValue = F("Zopten");
        break;
    }
    case 344652:
    {
        returnValue = F("Zorbachstr.");
        break;
    }
    case 344653:
    {
        returnValue = F("Zorbauer Bergstr.");
        break;
    }
    case 344654:
    {
        returnValue = F("Zorbauer Hauptstr.");
        break;
    }
    case 344655:
    {
        returnValue = F("Zorbauer Kreisel");
        break;
    }
    case 344656:
    {
        returnValue = F("Zorbauer Weg");
        break;
    }
    case 344657:
    {
        returnValue = F("Zordelstr.");
        break;
    }
    case 344658:
    {
        returnValue = F("Zorenappelweg");
        break;
    }
    case 344659:
    {
        returnValue = F("Zorgelandstr.");
        break;
    }
    case 344660:
    {
        returnValue = F("Zorger Str.");
        break;
    }
    case 344661:
    {
        returnValue = F("Zorger Weg");
        break;
    }
    case 344662:
    {
        returnValue = F("Zorger Wiesen");
        break;
    }
    case 344663:
    {
        returnValue = F("Zorgestr.");
        break;
    }
    case 344664:
    {
        returnValue = F("Zorgeweg");
        break;
    }
    case 344665:
    {
        returnValue = F("Zorndorfer Str.");
        break;
    }
    case 344666:
    {
        returnValue = F("Zorndorfstr.");
        break;
    }
    case 344667:
    {
        returnValue = F("Zornedinger Str.");
        break;
    }
    case 344668:
    {
        returnValue = F("Zornedinger Weg");
        break;
    }
    case 344669:
    {
        returnValue = F("Zorngrabenstr.");
        break;
    }
    case 344670:
    {
        returnValue = F("Zornheimer Str.");
        break;
    }
    case 344671:
    {
        returnValue = F("Zornige Ameise");
        break;
    }
    case 344672:
    {
        returnValue = F("Zornitzer Weg");
        break;
    }
    case 344673:
    {
        returnValue = F("Zorns Gässchen");
        break;
    }
    case 344674:
    {
        returnValue = F("Zornstr.");
        break;
    }
    case 344675:
    {
        returnValue = F("Zornweg");
        break;
    }
    case 344676:
    {
        returnValue = F("Zortrickstr.");
        break;
    }
    case 344677:
    {
        returnValue = F("Zorwiese");
        break;
    }
    case 344678:
    {
        returnValue = F("Zossen");
        break;
    }
    case 344679:
    {
        returnValue = F("Zossener Allee");
        break;
    }
    case 344680:
    {
        returnValue = F("Zossener Chaussee");
        break;
    }
    case 344681:
    {
        returnValue = F("Zossener Damm");
        break;
    }
    case 344682:
    {
        returnValue = F("Zossener Landstr.");
        break;
    }
    case 344683:
    {
        returnValue = F("Zossener Str.");
        break;
    }
    case 344684:
    {
        returnValue = F("Zossener Weg");
        break;
    }
    case 344685:
    {
        returnValue = F("Zossenstr.");
        break;
    }
    case 344686:
    {
        returnValue = F("Zottbachstr.");
        break;
    }
    case 344687:
    {
        returnValue = F("Zottelstedter Str.");
        break;
    }
    case 344688:
    {
        returnValue = F("Zotteneck");
        break;
    }
    case 344689:
    {
        returnValue = F("Zottenjochstr.");
        break;
    }
    case 344690:
    {
        returnValue = F("Zotterangen");
        break;
    }
    case 344691:
    {
        returnValue = F("Zottewitzer Str.");
        break;
    }
    case 344692:
    {
        returnValue = F("Zottmayerstr.");
        break;
    }
    case 344693:
    {
        returnValue = F("Zottnerweg");
        break;
    }
    case 344694:
    {
        returnValue = F("Zotzenbacher Weg");
        break;
    }
    case 344695:
    {
        returnValue = F("Zotzenheimer Str.");
        break;
    }
    case 344696:
    {
        returnValue = F("Zotzenheimer Weg");
        break;
    }
    case 344697:
    {
        returnValue = F("Zotzenmühlweg");
        break;
    }
    case 344698:
    {
        returnValue = F("Zourshof");
        break;
    }
    case 344699:
    {
        returnValue = F("Zoxy-Platz");
        break;
    }
    case 344700:
    {
        returnValue = F("Zoznegger Str.");
        break;
    }
    case 344701:
    {
        returnValue = F("Zrennerstr.");
        break;
    }
    case 344702:
    {
        returnValue = F("Zrititzer Weg");
        break;
    }
    case 344703:
    {
        returnValue = F("Zsambeker Str.");
        break;
    }
    case 344704:
    {
        returnValue = F("Zschaagwitzer Str.");
        break;
    }
    case 344705:
    {
        returnValue = F("Zschachwitzer Str.");
        break;
    }
    case 344706:
    {
        returnValue = F("Zschackwitz");
        break;
    }
    case 344707:
    {
        returnValue = F("Zschackwitzer Str.");
        break;
    }
    case 344708:
    {
        returnValue = F("Zschadraßer Dorfstr.");
        break;
    }
    case 344709:
    {
        returnValue = F("Zschadraßer Hauptstr.");
        break;
    }
    case 344710:
    {
        returnValue = F("Zschagaster Str.");
        break;
    }
    case 344711:
    {
        returnValue = F("Zschaigaer Str.");
        break;
    }
    case 344712:
    {
        returnValue = F("Zschaitzer Str.");
        break;
    }
    case 344713:
    {
        returnValue = F("Zschampertaue");
        break;
    }
    case 344714:
    {
        returnValue = F("Zschauitzer Landstr.");
        break;
    }
    case 344715:
    {
        returnValue = F("Zschauitzer Weg");
        break;
    }
    case 344716:
    {
        returnValue = F("Zschaukegraben");
        break;
    }
    case 344717:
    {
        returnValue = F("Zschaukensteinweg");
        break;
    }
    case 344718:
    {
        returnValue = F("Zschechwitzer Str.");
        break;
    }
    case 344719:
    {
        returnValue = F("Zschechwitzer Weg");
        break;
    }
    case 344720:
    {
        returnValue = F("Zscheilaer Str.");
        break;
    }
    case 344721:
    {
        returnValue = F("Zscheilberg");
        break;
    }
    case 344722:
    {
        returnValue = F("Zscheilitz");
        break;
    }
    case 344723:
    {
        returnValue = F("Zschepaer Hauptstr.");
        break;
    }
    case 344724:
    {
        returnValue = F("Zschepkauer Dorfstr.");
        break;
    }
    case 344725:
    {
        returnValue = F("Zschepkauer Str.");
        break;
    }
    case 344726:
    {
        returnValue = F("Zscheppliner Landstr.");
        break;
    }
    case 344727:
    {
        returnValue = F("Zschepplitz");
        break;
    }
    case 344728:
    {
        returnValue = F("Zschepplitzer Str.");
        break;
    }
    case 344729:
    {
        returnValue = F("Zscherbener Landstr.");
        break;
    }
    case 344730:
    {
        returnValue = F("Zscherbener Str.");
        break;
    }
    case 344731:
    {
        returnValue = F("Zscherndorfer Str.");
        break;
    }
    case 344732:
    {
        returnValue = F("Zscherndorfer Weg");
        break;
    }
    case 344733:
    {
        returnValue = F("Zscherneddel");
        break;
    }
    case 344734:
    {
        returnValue = F("Zschernichen");
        break;
    }
    case 344735:
    {
        returnValue = F("Zschernitzer Weg");
        break;
    }
    case 344736:
    {
        returnValue = F("Zschernitzscher Str.");
        break;
    }
    case 344737:
    {
        returnValue = F("Zschernitzscher Weg");
        break;
    }
    case 344738:
    {
        returnValue = F("Zschernweg");
        break;
    }
    case 344739:
    {
        returnValue = F("Zscherregrund");
        break;
    }
    case 344740:
    {
        returnValue = F("Zschertnitzer Str.");
        break;
    }
    case 344741:
    {
        returnValue = F("Zschertnitzer Weg");
        break;
    }
    case 344742:
    {
        returnValue = F("Zschettgauer Str.");
        break;
    }
    case 344743:
    {
        returnValue = F("Zschiedge");
        break;
    }
    case 344744:
    {
        returnValue = F("Zschiedger Weg");
        break;
    }
    case 344745:
    {
        returnValue = F("Zschiepelmühle");
        break;
    }
    case 344746:
    {
        returnValue = F("Zschierbachstr.");
        break;
    }
    case 344747:
    {
        returnValue = F("Zschierbachweg");
        break;
    }
    case 344748:
    {
        returnValue = F("Zschierener Elbstr.");
        break;
    }
    case 344749:
    {
        returnValue = F("Zschierener Str.");
        break;
    }
    case 344750:
    {
        returnValue = F("Zschiesdorfer Str.");
        break;
    }
    case 344751:
    {
        returnValue = F("Zschillestr.");
        break;
    }
    case 344752:
    {
        returnValue = F("Zschimmering");
        break;
    }
    case 344753:
    {
        returnValue = F("Zschimmerstr.");
        break;
    }
    case 344754:
    {
        returnValue = F("Zschimmerweg");
        break;
    }
    case 344755:
    {
        returnValue = F("Zschippacher Berg");
        break;
    }
    case 344756:
    {
        returnValue = F("Zschippernweg");
        break;
    }
    case 344757:
    {
        returnValue = F("Zschirlaer Blick");
        break;
    }
    case 344758:
    {
        returnValue = F("Zschirlaer Waldstr.");
        break;
    }
    case 344759:
    {
        returnValue = F("Zschirlgasse");
        break;
    }
    case 344760:
    {
        returnValue = F("Zschirnsteinstr.");
        break;
    }
    case 344761:
    {
        returnValue = F("Zschirpestr.");
        break;
    }
    case 344762:
    {
        returnValue = F("Zschirschau");
        break;
    }
    case 344763:
    {
        returnValue = F("Zschochauer Str.");
        break;
    }
    case 344764:
    {
        returnValue = F("Zschochernstr.");
        break;
    }
    case 344765:
    {
        returnValue = F("Zschochersche Allee");
        break;
    }
    case 344766:
    {
        returnValue = F("Zschochersche Str.");
        break;
    }
    case 344767:
    {
        returnValue = F("Zschockau");
        break;
    }
    case 344768:
    {
        returnValue = F("Zschockauer Str.");
        break;
    }
    case 344769:
    {
        returnValue = F("Zschockauer Weg");
        break;
    }
    case 344770:
    {
        returnValue = F("Zschockener Weg");
        break;
    }
    case 344771:
    {
        returnValue = F("Zschockestr.");
        break;
    }
    case 344772:
    {
        returnValue = F("Zschokkestr.");
        break;
    }
    case 344773:
    {
        returnValue = F("Zschoner Ring");
        break;
    }
    case 344774:
    {
        returnValue = F("Zschonerallee");
        break;
    }
    case 344775:
    {
        returnValue = F("Zschonerblick");
        break;
    }
    case 344776:
    {
        returnValue = F("Zschonergrund Lehrpfad");
        break;
    }
    case 344777:
    {
        returnValue = F("Zschonergrundstr.");
        break;
    }
    case 344778:
    {
        returnValue = F("Zschonergrundweg");
        break;
    }
    case 344779:
    {
        returnValue = F("Zschopau Ost");
        break;
    }
    case 344780:
    {
        returnValue = F("Zschopauer Platz");
        break;
    }
    case 344781:
    {
        returnValue = F("Zschopauer Str.");
        break;
    }
    case 344782:
    {
        returnValue = F("Zschopaustr.");
        break;
    }
    case 344783:
    {
        returnValue = F("Zschopautalstr.");
        break;
    }
    case 344784:
    {
        returnValue = F("Zschopautalweg");
        break;
    }
    case 344785:
    {
        returnValue = F("Zschopauweg");
        break;
    }
    case 344786:
    {
        returnValue = F("Zschopenthal");
        break;
    }
    case 344787:
    {
        returnValue = F("Zschopenweg");
        break;
    }
    case 344788:
    {
        returnValue = F("Zschoppacher Str.");
        break;
    }
    case 344789:
    {
        returnValue = F("Zschoppelshainer Str.");
        break;
    }
    case 344790:
    {
        returnValue = F("Zschorgula");
        break;
    }
    case 344791:
    {
        returnValue = F("Zschorgulaer Str.");
        break;
    }
    case 344792:
    {
        returnValue = F("Zschorlauer Str.");
        break;
    }
    case 344793:
    {
        returnValue = F("Zschornaer Str.");
        break;
    }
    case 344794:
    {
        returnValue = F("Zschorta");
        break;
    }
    case 344795:
    {
        returnValue = F("Zschortaer Weg");
        break;
    }
    case 344796:
    {
        returnValue = F("Zschortauer Str.");
        break;
    }
    case 344797:
    {
        returnValue = F("Zschunkenloch");
        break;
    }
    case 344798:
    {
        returnValue = F("Zschöchergen");
        break;
    }
    case 344799:
    {
        returnValue = F("Zschölkauer Weg");
        break;
    }
    case 344800:
    {
        returnValue = F("Zschöllauer Str.");
        break;
    }
    case 344801:
    {
        returnValue = F("Zschöppelstr.");
        break;
    }
    case 344802:
    {
        returnValue = F("Zschöppichen");
        break;
    }
    case 344803:
    {
        returnValue = F("Zschörnelweg");
        break;
    }
    case 344804:
    {
        returnValue = F("Zschörnerstr.");
        break;
    }
    case 344805:
    {
        returnValue = F("Zschörnewitz");
        break;
    }
    case 344806:
    {
        returnValue = F("Zu Aumunds Hof");
        break;
    }
    case 344807:
    {
        returnValue = F("Zu Bludenzer Str. 24-22");
        break;
    }
    case 344808:
    {
        returnValue = F("Zu Boss");
        break;
    }
    case 344809:
    {
        returnValue = F("Zu Brockshus");
        break;
    }
    case 344810:
    {
        returnValue = F("Zu Buch");
        break;
    }
    case 344811:
    {
        returnValue = F("Zu Den Görzen");
        break;
    }
    case 344812:
    {
        returnValue = F("Zu Den Kleingärten");
        break;
    }
    case 344813:
    {
        returnValue = F("Zu Den Saalflecken");
        break;
    }
    case 344814:
    {
        returnValue = F("Zu Dillmannstr.");
        break;
    }
    case 344815:
    {
        returnValue = F("Zu Gehren");
        break;
    }
    case 344816:
    {
        returnValue = F("Zu Hildringhausen");
        break;
    }
    case 344817:
    {
        returnValue = F("Zu Krons Diek");
        break;
    }
    case 344818:
    {
        returnValue = F("Zu Kropps Boren");
        break;
    }
    case 344819:
    {
        returnValue = F("Zu Lachmunds Hof");
        break;
    }
    case 344820:
    {
        returnValue = F("Zu Magney");
        break;
    }
    case 344821:
    {
        returnValue = F("Zu Maria-Eich");
        break;
    }
    case 344822:
    {
        returnValue = F("Zu Meyers Föhr");
        break;
    }
    case 344823:
    {
        returnValue = F("Zu Niederndorf");
        break;
    }
    case 344824:
    {
        returnValue = F("Zu Norden");
        break;
    }
    case 344825:
    {
        returnValue = F("Zu Pastors Kamp");
        break;
    }
    case 344826:
    {
        returnValue = F("Zu St. Bartholomä");
        break;
    }
    case 344827:
    {
        returnValue = F("Zu Thiemanns Kuhle");
        break;
    }
    case 344828:
    {
        returnValue = F("Zu Voigts Mühle");
        break;
    }
    case 344829:
    {
        returnValue = F("Zu Wageners Eiche");
        break;
    }
    case 344830:
    {
        returnValue = F("Zu Wendts Hof");
        break;
    }
    case 344831:
    {
        returnValue = F("Zu Wenigvillmar");
        break;
    }
    case 344832:
    {
        returnValue = F("Zu dem Balken");
        break;
    }
    case 344833:
    {
        returnValue = F("Zu dem Schwanentretbooten");
        break;
    }
    case 344834:
    {
        returnValue = F("Zu den Achtertannen");
        break;
    }
    case 344835:
    {
        returnValue = F("Zu den Alpen");
        break;
    }
    case 344836:
    {
        returnValue = F("Zu den Alstätten");
        break;
    }
    case 344837:
    {
        returnValue = F("Zu den Amtsgärten");
        break;
    }
    case 344838:
    {
        returnValue = F("Zu den Anwesen Föhrenreuth");
        break;
    }
    case 344839:
    {
        returnValue = F("Zu den Aspen");
        break;
    }
    case 344840:
    {
        returnValue = F("Zu den Auen");
        break;
    }
    case 344841:
    {
        returnValue = F("Zu den Auewiesen");
        break;
    }
    case 344842:
    {
        returnValue = F("Zu den Badstuben");
        break;
    }
    case 344843:
    {
        returnValue = F("Zu den Bahngleisen");
        break;
    }
    case 344844:
    {
        returnValue = F("Zu den Beckers");
        break;
    }
    case 344845:
    {
        returnValue = F("Zu den Beeken");
        break;
    }
    case 344846:
    {
        returnValue = F("Zu den Beizwiesen");
        break;
    }
    case 344847:
    {
        returnValue = F("Zu den Benden");
        break;
    }
    case 344848:
    {
        returnValue = F("Zu den Bendengärten");
        break;
    }
    case 344849:
    {
        returnValue = F("Zu den Bergen");
        break;
    }
    case 344850:
    {
        returnValue = F("Zu den Berggärten");
        break;
    }
    case 344851:
    {
        returnValue = F("Zu den Bergwiesen");
        break;
    }
    case 344852:
    {
        returnValue = F("Zu den Bergwingerten");
        break;
    }
    case 344853:
    {
        returnValue = F("Zu den Bettern");
        break;
    }
    case 344854:
    {
        returnValue = F("Zu den Birken");
        break;
    }
    case 344855:
    {
        returnValue = F("Zu den Bitzen");
        break;
    }
    case 344856:
    {
        returnValue = F("Zu den Blanken");
        break;
    }
    case 344857:
    {
        returnValue = F("Zu den Blöcken");
        break;
    }
    case 344858:
    {
        returnValue = F("Zu den Bootshäusern");
        break;
    }
    case 344859:
    {
        returnValue = F("Zu den Bornkauten");
        break;
    }
    case 344860:
    {
        returnValue = F("Zu den Bornwiesen");
        break;
    }
    case 344861:
    {
        returnValue = F("Zu den Braken");
        break;
    }
    case 344862:
    {
        returnValue = F("Zu den Brauckstücken");
        break;
    }
    case 344863:
    {
        returnValue = F("Zu den Breiten");
        break;
    }
    case 344864:
    {
        returnValue = F("Zu den Breitwiesen");
        break;
    }
    case 344865:
    {
        returnValue = F("Zu den Brelinger Bergen");
        break;
    }
    case 344866:
    {
        returnValue = F("Zu den Brembergskotten");
        break;
    }
    case 344867:
    {
        returnValue = F("Zu den Brodwiesen");
        break;
    }
    case 344868:
    {
        returnValue = F("Zu den Bruchwiesen");
        break;
    }
    case 344869:
    {
        returnValue = F("Zu den Brunnen");
        break;
    }
    case 344870:
    {
        returnValue = F("Zu den Brüchen");
        break;
    }
    case 344871:
    {
        returnValue = F("Zu den Brücken");
        break;
    }
    case 344872:
    {
        returnValue = F("Zu den Buchen");
        break;
    }
    case 344873:
    {
        returnValue = F("Zu den Buchholzkämpen");
        break;
    }
    case 344874:
    {
        returnValue = F("Zu den Buerwiesen");
        break;
    }
    case 344875:
    {
        returnValue = F("Zu den Bundesbauten");
        break;
    }
    case 344876:
    {
        returnValue = F("Zu den Buschstücken");
        break;
    }
    case 344877:
    {
        returnValue = F("Zu den Bülten");
        break;
    }
    case 344878:
    {
        returnValue = F("Zu den Bürgerhufen");
        break;
    }
    case 344879:
    {
        returnValue = F("Zu den Dammwiesen");
        break;
    }
    case 344880:
    {
        returnValue = F("Zu den Deichen");
        break;
    }
    case 344881:
    {
        returnValue = F("Zu den Diebesgärten");
        break;
    }
    case 344882:
    {
        returnValue = F("Zu den Diekeskuhlen");
        break;
    }
    case 344883:
    {
        returnValue = F("Zu den Dieven");
        break;
    }
    case 344884:
    {
        returnValue = F("Zu den Dilläckern");
        break;
    }
    case 344885:
    {
        returnValue = F("Zu den Dinkeln");
        break;
    }
    case 344886:
    {
        returnValue = F("Zu den Dolinen");
        break;
    }
    case 344887:
    {
        returnValue = F("Zu den Domwiesen");
        break;
    }
    case 344888:
    {
        returnValue = F("Zu den Dorfwiesen");
        break;
    }
    case 344889:
    {
        returnValue = F("Zu den Drehnitzwiesen");
        break;
    }
    case 344890:
    {
        returnValue = F("Zu den Drei Eichen");
        break;
    }
    case 344891:
    {
        returnValue = F("Zu den Drei Steinen");
        break;
    }
    case 344892:
    {
        returnValue = F("Zu den Dufingwiesen");
        break;
    }
    case 344893:
    {
        returnValue = F("Zu den Duvensteinen");
        break;
    }
    case 344894:
    {
        returnValue = F("Zu den Dörenwiesen");
        break;
    }
    case 344895:
    {
        returnValue = F("Zu den Dörnbachshöfen");
        break;
    }
    case 344896:
    {
        returnValue = F("Zu den Dünen");
        break;
    }
    case 344897:
    {
        returnValue = F("Zu den Eichen");
        break;
    }
    case 344898:
    {
        returnValue = F("Zu den Eichenstangen");
        break;
    }
    case 344899:
    {
        returnValue = F("Zu den Eichwiesen");
        break;
    }
    case 344900:
    {
        returnValue = F("Zu den Einzelnen Bäumen");
        break;
    }
    case 344901:
    {
        returnValue = F("Zu den Elbauen");
        break;
    }
    case 344902:
    {
        returnValue = F("Zu den Elefanten");
        break;
    }
    case 344903:
    {
        returnValue = F("Zu den Elsen");
        break;
    }
    case 344904:
    {
        returnValue = F("Zu den Emsauen");
        break;
    }
    case 344905:
    {
        returnValue = F("Zu den Erbhöfen");
        break;
    }
    case 344906:
    {
        returnValue = F("Zu den Erdelöchern");
        break;
    }
    case 344907:
    {
        returnValue = F("Zu den Erdlöchern");
        break;
    }
    case 344908:
    {
        returnValue = F("Zu den Erlen");
        break;
    }
    case 344909:
    {
        returnValue = F("Zu den Erlewiesen");
        break;
    }
    case 344910:
    {
        returnValue = F("Zu den Erzgruben");
        break;
    }
    case 344911:
    {
        returnValue = F("Zu den Eschen");
        break;
    }
    case 344912:
    {
        returnValue = F("Zu den Feldkämpen");
        break;
    }
    case 344913:
    {
        returnValue = F("Zu den Ferndorfwiesen");
        break;
    }
    case 344914:
    {
        returnValue = F("Zu den Feseltannen");
        break;
    }
    case 344915:
    {
        returnValue = F("Zu den Fichten");
        break;
    }
    case 344916:
    {
        returnValue = F("Zu den Fichtenkaveln");
        break;
    }
    case 344917:
    {
        returnValue = F("Zu den Fierwegen");
        break;
    }
    case 344918:
    {
        returnValue = F("Zu den Finnhütten");
        break;
    }
    case 344919:
    {
        returnValue = F("Zu den Fischerhütten");
        break;
    }
    case 344920:
    {
        returnValue = F("Zu den Fischteichen");
        break;
    }
    case 344921:
    {
        returnValue = F("Zu den Flachsrotten");
        break;
    }
    case 344922:
    {
        returnValue = F("Zu den Flachsstücken");
        break;
    }
    case 344923:
    {
        returnValue = F("Zu den Flussauen");
        break;
    }
    case 344924:
    {
        returnValue = F("Zu den Forellenteichen");
        break;
    }
    case 344925:
    {
        returnValue = F("Zu den Forsten");
        break;
    }
    case 344926:
    {
        returnValue = F("Zu den Fuchshöhlen");
        break;
    }
    case 344927:
    {
        returnValue = F("Zu den Fuhren");
        break;
    }
    case 344928:
    {
        returnValue = F("Zu den Fußfällen");
        break;
    }
    case 344929:
    {
        returnValue = F("Zu den Föhren");
        break;
    }
    case 344930:
    {
        returnValue = F("Zu den Förstertannen");
        break;
    }
    case 344931:
    {
        returnValue = F("Zu den Garagen");
        break;
    }
    case 344932:
    {
        returnValue = F("Zu den Gasehecken");
        break;
    }
    case 344933:
    {
        returnValue = F("Zu den Gehöften");
        break;
    }
    case 344934:
    {
        returnValue = F("Zu den Glockensteinen");
        break;
    }
    case 344935:
    {
        returnValue = F("Zu den Golanhöhen");
        break;
    }
    case 344936:
    {
        returnValue = F("Zu den Grasgärten");
        break;
    }
    case 344937:
    {
        returnValue = F("Zu den Grashöfen");
        break;
    }
    case 344938:
    {
        returnValue = F("Zu den Grenzsteinen");
        break;
    }
    case 344939:
    {
        returnValue = F("Zu den Gruben");
        break;
    }
    case 344940:
    {
        returnValue = F("Zu den Gründen");
        break;
    }
    case 344941:
    {
        returnValue = F("Zu den Grünen Kämpen");
        break;
    }
    case 344942:
    {
        returnValue = F("Zu den Gänseäckern");
        break;
    }
    case 344943:
    {
        returnValue = F("Zu den Gärten");
        break;
    }
    case 344944:
    {
        returnValue = F("Zu den Hagengärten");
        break;
    }
    case 344945:
    {
        returnValue = F("Zu den Hangars");
        break;
    }
    case 344946:
    {
        returnValue = F("Zu den Hatzseen");
        break;
    }
    case 344947:
    {
        returnValue = F("Zu den Havelwiesen");
        break;
    }
    case 344948:
    {
        returnValue = F("Zu den Heestern");
        break;
    }
    case 344949:
    {
        returnValue = F("Zu den Hegebergen");
        break;
    }
    case 344950:
    {
        returnValue = F("Zu den Heidackers");
        break;
    }
    case 344951:
    {
        returnValue = F("Zu den Hellbergen");
        break;
    }
    case 344952:
    {
        returnValue = F("Zu den Hellbergswiesen");
        break;
    }
    case 344953:
    {
        returnValue = F("Zu den Hermetsäckern");
        break;
    }
    case 344954:
    {
        returnValue = F("Zu den Heubergen");
        break;
    }
    case 344955:
    {
        returnValue = F("Zu den Heuwiesen");
        break;
    }
    case 344956:
    {
        returnValue = F("Zu den Hirtenhäusern");
        break;
    }
    case 344957:
    {
        returnValue = F("Zu den Hirtenwiesen");
        break;
    }
    case 344958:
    {
        returnValue = F("Zu den Hitzfichten");
        break;
    }
    case 344959:
    {
        returnValue = F("Zu den Hobern");
        break;
    }
    case 344960:
    {
        returnValue = F("Zu den Hofwiesen");
        break;
    }
    case 344961:
    {
        returnValue = F("Zu den Hohen Felsen");
        break;
    }
    case 344962:
    {
        returnValue = F("Zu den Holzhäusern");
        break;
    }
    case 344963:
    {
        returnValue = F("Zu den Honigäckern");
        break;
    }
    case 344964:
    {
        returnValue = F("Zu den Hopfenhöfen");
        break;
    }
    case 344965:
    {
        returnValue = F("Zu den Hopfenkuhlen");
        break;
    }
    case 344966:
    {
        returnValue = F("Zu den Hufen");
        break;
    }
    case 344967:
    {
        returnValue = F("Zu den Häusern");
        break;
    }
    case 344968:
    {
        returnValue = F("Zu den Höfen");
        break;
    }
    case 344969:
    {
        returnValue = F("Zu den Höfen I");
        break;
    }
    case 344970:
    {
        returnValue = F("Zu den Höfen II");
        break;
    }
    case 344971:
    {
        returnValue = F("Zu den Höhen");
        break;
    }
    case 344972:
    {
        returnValue = F("Zu den Höhlen");
        break;
    }
    case 344973:
    {
        returnValue = F("Zu den Hügelgräbern");
        break;
    }
    case 344974:
    {
        returnValue = F("Zu den Hügeln");
        break;
    }
    case 344975:
    {
        returnValue = F("Zu den Hünengräbern");
        break;
    }
    case 344976:
    {
        returnValue = F("Zu den Hünensteinen");
        break;
    }
    case 344977:
    {
        returnValue = F("Zu den Hütten");
        break;
    }
    case 344978:
    {
        returnValue = F("Zu den Ihlowbergen");
        break;
    }
    case 344979:
    {
        returnValue = F("Zu den Irlen");
        break;
    }
    case 344980:
    {
        returnValue = F("Zu den Jakobsäckern");
        break;
    }
    case 344981:
    {
        returnValue = F("Zu den Jücken");
        break;
    }
    case 344982:
    {
        returnValue = F("Zu den Karlsbergen");
        break;
    }
    case 344983:
    {
        returnValue = F("Zu den Karmelitern");
        break;
    }
    case 344984:
    {
        returnValue = F("Zu den Kasematten");
        break;
    }
    case 344985:
    {
        returnValue = F("Zu den Kaskaden");
        break;
    }
    case 344986:
    {
        returnValue = F("Zu den Kastanien");
        break;
    }
    case 344987:
    {
        returnValue = F("Zu den Katzentreppen");
        break;
    }
    case 344988:
    {
        returnValue = F("Zu den Kauten");
        break;
    }
    case 344989:
    {
        returnValue = F("Zu den Kaveln");
        break;
    }
    case 344990:
    {
        returnValue = F("Zu den Kiefern");
        break;
    }
    case 344991:
    {
        returnValue = F("Zu den Kiesgruben");
        break;
    }
    case 344992:
    {
        returnValue = F("Zu den Kiesteichen");
        break;
    }
    case 344993:
    {
        returnValue = F("Zu den Kikenfuhren");
        break;
    }
    case 344994:
    {
        returnValue = F("Zu den Kirchen");
        break;
    }
    case 344995:
    {
        returnValue = F("Zu den Kirschen");
        break;
    }
    case 344996:
    {
        returnValue = F("Zu den Klampen");
        break;
    }
    case 344997:
    {
        returnValue = F("Zu den Kleingärten");
        break;
    }
    case 344998:
    {
        returnValue = F("Zu den Klinten");
        break;
    }
    case 344999:
    {
        returnValue = F("Zu den Klippen");
        break;
    }
    case 345000:
    {
        returnValue = F("Zu den Klosterwiesen");
        break;
    }
    case 345001:
    {
        returnValue = F("Zu den Klosteräckern");
        break;
    }
    case 345002:
    {
        returnValue = F("Zu den Klünen");
        break;
    }
    case 345003:
    {
        returnValue = F("Zu den Kniekuhlen");
        break;
    }
    case 345004:
    {
        returnValue = F("Zu den Kohlgärten");
        break;
    }
    case 345005:
    {
        returnValue = F("Zu den Koppeln");
        break;
    }
    case 345006:
    {
        returnValue = F("Zu den Koppeltannen");
        break;
    }
    case 345007:
    {
        returnValue = F("Zu den Kranichfeldern");
        break;
    }
    case 345008:
    {
        returnValue = F("Zu den Kreuzbreden");
        break;
    }
    case 345009:
    {
        returnValue = F("Zu den Kreuzen");
        break;
    }
    case 345010:
    {
        returnValue = F("Zu den Kreuzäckern");
        break;
    }
    case 345011:
    {
        returnValue = F("Zu den Krickmeeren");
        break;
    }
    case 345012:
    {
        returnValue = F("Zu den Kronwiesen");
        break;
    }
    case 345013:
    {
        returnValue = F("Zu den Krukenwiesen");
        break;
    }
    case 345014:
    {
        returnValue = F("Zu den Kuhbenden");
        break;
    }
    case 345015:
    {
        returnValue = F("Zu den Kuranlagen");
        break;
    }
    case 345016:
    {
        returnValue = F("Zu den Kämpen");
        break;
    }
    case 345017:
    {
        returnValue = F("Zu den Kölken");
        break;
    }
    case 345018:
    {
        returnValue = F("Zu den Kötnerwiesen");
        break;
    }
    case 345019:
    {
        returnValue = F("Zu den Laasen");
        break;
    }
    case 345020:
    {
        returnValue = F("Zu den Laichgräben");
        break;
    }
    case 345021:
    {
        returnValue = F("Zu den Lehmkuhlen");
        break;
    }
    case 345022:
    {
        returnValue = F("Zu den Leiwischbäumen");
        break;
    }
    case 345023:
    {
        returnValue = F("Zu den Leuchtbergen");
        break;
    }
    case 345024:
    {
        returnValue = F("Zu den Leyen");
        break;
    }
    case 345025:
    {
        returnValue = F("Zu den Leyen / Kyll-Radweg");
        break;
    }
    case 345026:
    {
        returnValue = F("Zu den Linden");
        break;
    }
    case 345027:
    {
        returnValue = F("Zu den Lippewiesen");
        break;
    }
    case 345028:
    {
        returnValue = F("Zu den Lossawiesen");
        break;
    }
    case 345029:
    {
        returnValue = F("Zu den Luchgärten");
        break;
    }
    case 345030:
    {
        returnValue = F("Zu den Lärchen");
        break;
    }
    case 345031:
    {
        returnValue = F("Zu den Löthwiesen");
        break;
    }
    case 345032:
    {
        returnValue = F("Zu den Lücken");
        break;
    }
    case 345033:
    {
        returnValue = F("Zu den Lüften");
        break;
    }
    case 345034:
    {
        returnValue = F("Zu den Maieichen");
        break;
    }
    case 345035:
    {
        returnValue = F("Zu den Mainwiesen");
        break;
    }
    case 345036:
    {
        returnValue = F("Zu den Maschwiesen");
        break;
    }
    case 345037:
    {
        returnValue = F("Zu den Mauerstücken");
        break;
    }
    case 345038:
    {
        returnValue = F("Zu den Meerwiesen");
        break;
    }
    case 345039:
    {
        returnValue = F("Zu den Meierhöfen");
        break;
    }
    case 345040:
    {
        returnValue = F("Zu den Meierwiesen");
        break;
    }
    case 345041:
    {
        returnValue = F("Zu den Mergelbrüchen");
        break;
    }
    case 345042:
    {
        returnValue = F("Zu den Mittelwiesen");
        break;
    }
    case 345043:
    {
        returnValue = F("Zu den Moorhöfen");
        break;
    }
    case 345044:
    {
        returnValue = F("Zu den Moorkämpen");
        break;
    }
    case 345045:
    {
        returnValue = F("Zu den Moorteilen");
        break;
    }
    case 345046:
    {
        returnValue = F("Zu den Moselauen");
        break;
    }
    case 345047:
    {
        returnValue = F("Zu den Mushoren");
        break;
    }
    case 345048:
    {
        returnValue = F("Zu den Mühlen");
        break;
    }
    case 345049:
    {
        returnValue = F("Zu den Mühlenhöfen");
        break;
    }
    case 345050:
    {
        returnValue = F("Zu den Mühlenwegen");
        break;
    }
    case 345051:
    {
        returnValue = F("Zu den Mühlweiden");
        break;
    }
    case 345052:
    {
        returnValue = F("Zu den Müllerbergen");
        break;
    }
    case 345053:
    {
        returnValue = F("Zu den Neckargärten");
        break;
    }
    case 345054:
    {
        returnValue = F("Zu den Neddersten Wiesen");
        break;
    }
    case 345055:
    {
        returnValue = F("Zu den Neubauten");
        break;
    }
    case 345056:
    {
        returnValue = F("Zu den Neuen Wiesen");
        break;
    }
    case 345057:
    {
        returnValue = F("Zu den Norderstücken");
        break;
    }
    case 345058:
    {
        returnValue = F("Zu den Nußbaumäckern");
        break;
    }
    case 345059:
    {
        returnValue = F("Zu den Obstgärten");
        break;
    }
    case 345060:
    {
        returnValue = F("Zu den Ohlwiesen");
        break;
    }
    case 345061:
    {
        returnValue = F("Zu den Ohreauen");
        break;
    }
    case 345062:
    {
        returnValue = F("Zu den Pappeln");
        break;
    }
    case 345063:
    {
        returnValue = F("Zu den Petersbergen");
        break;
    }
    case 345064:
    {
        returnValue = F("Zu den Pfaffenteichen");
        break;
    }
    case 345065:
    {
        returnValue = F("Zu den Pfarreichen");
        break;
    }
    case 345066:
    {
        returnValue = F("Zu den Pfuhlen");
        break;
    }
    case 345067:
    {
        returnValue = F("Zu den Placken");
        break;
    }
    case 345068:
    {
        returnValue = F("Zu den Plätzen");
        break;
    }
    case 345069:
    {
        returnValue = F("Zu den Pottaschwiesen");
        break;
    }
    case 345070:
    {
        returnValue = F("Zu den Priestergärten");
        break;
    }
    case 345071:
    {
        returnValue = F("Zu den Queeren");
        break;
    }
    case 345072:
    {
        returnValue = F("Zu den Quellen");
        break;
    }
    case 345073:
    {
        returnValue = F("Zu den Querwiesen");
        break;
    }
    case 345074:
    {
        returnValue = F("Zu den Radestücken");
        break;
    }
    case 345075:
    {
        returnValue = F("Zu den Rauen");
        break;
    }
    case 345076:
    {
        returnValue = F("Zu den Reben");
        break;
    }
    case 345077:
    {
        returnValue = F("Zu den Rechen");
        break;
    }
    case 345078:
    {
        returnValue = F("Zu den Reetwiesen");
        break;
    }
    case 345079:
    {
        returnValue = F("Zu den Rehwiesen");
        break;
    }
    case 345080:
    {
        returnValue = F("Zu den Rennwiesen");
        break;
    }
    case 345081:
    {
        returnValue = F("Zu den Rohräckern");
        break;
    }
    case 345082:
    {
        returnValue = F("Zu den Rosengärten");
        break;
    }
    case 345083:
    {
        returnValue = F("Zu den Rotten");
        break;
    }
    case 345084:
    {
        returnValue = F("Zu den Ruhrwiesen");
        break;
    }
    case 345085:
    {
        returnValue = F("Zu den Rödelteichen");
        break;
    }
    case 345086:
    {
        returnValue = F("Zu den Salbeifeldern");
        break;
    }
    case 345087:
    {
        returnValue = F("Zu den Salzwiesen");
        break;
    }
    case 345088:
    {
        returnValue = F("Zu den Sandbeeten");
        break;
    }
    case 345089:
    {
        returnValue = F("Zu den Sandenden");
        break;
    }
    case 345090:
    {
        returnValue = F("Zu den Sandknäppen");
        break;
    }
    case 345091:
    {
        returnValue = F("Zu den Schafhofäckern");
        break;
    }
    case 345092:
    {
        returnValue = F("Zu den Schafweiden");
        break;
    }
    case 345093:
    {
        returnValue = F("Zu den Schanzen");
        break;
    }
    case 345094:
    {
        returnValue = F("Zu den Schellerwiesen");
        break;
    }
    case 345095:
    {
        returnValue = F("Zu den Scheperstücken");
        break;
    }
    case 345096:
    {
        returnValue = F("Zu den Scheunen");
        break;
    }
    case 345097:
    {
        returnValue = F("Zu den Schinderfichten");
        break;
    }
    case 345098:
    {
        returnValue = F("Zu den Schloßwiesen");
        break;
    }
    case 345099:
    {
        returnValue = F("Zu den Schmiedewiesen");
        break;
    }
    case 345100:
    {
        returnValue = F("Zu den Schorten");
        break;
    }
    case 345101:
    {
        returnValue = F("Zu den Schrebergärten");
        break;
    }
    case 345102:
    {
        returnValue = F("Zu den Schrennen");
        break;
    }
    case 345103:
    {
        returnValue = F("Zu den Schuhmacherwiesen");
        break;
    }
    case 345104:
    {
        returnValue = F("Zu den Schulwiesen");
        break;
    }
    case 345105:
    {
        returnValue = F("Zu den Schwalmquellen");
        break;
    }
    case 345106:
    {
        returnValue = F("Zu den Schwarzweihern");
        break;
    }
    case 345107:
    {
        returnValue = F("Zu den Schwedenhäusern");
        break;
    }
    case 345108:
    {
        returnValue = F("Zu den Schäferteichen");
        break;
    }
    case 345109:
    {
        returnValue = F("Zu den Schüsseln");
        break;
    }
    case 345110:
    {
        returnValue = F("Zu den Schützenlinden");
        break;
    }
    case 345111:
    {
        returnValue = F("Zu den Sechs Eigen");
        break;
    }
    case 345112:
    {
        returnValue = F("Zu den Seewiesen");
        break;
    }
    case 345113:
    {
        returnValue = F("Zu den Sennhöfen");
        break;
    }
    case 345114:
    {
        returnValue = F("Zu den Sieben Eichen");
        break;
    }
    case 345115:
    {
        returnValue = F("Zu den Sieben Hämmern");
        break;
    }
    case 345116:
    {
        returnValue = F("Zu den Sieben Zwergen");
        break;
    }
    case 345117:
    {
        returnValue = F("Zu den Siebnacher Eichen");
        break;
    }
    case 345118:
    {
        returnValue = F("Zu den Siefen");
        break;
    }
    case 345119:
    {
        returnValue = F("Zu den Silberschächten");
        break;
    }
    case 345120:
    {
        returnValue = F("Zu den Specken");
        break;
    }
    case 345121:
    {
        returnValue = F("Zu den Spiegelwiesen");
        break;
    }
    case 345122:
    {
        returnValue = F("Zu den Spitzäckern");
        break;
    }
    case 345123:
    {
        returnValue = F("Zu den Sportplätzen");
        break;
    }
    case 345124:
    {
        returnValue = F("Zu den Sportstätten");
        break;
    }
    case 345125:
    {
        returnValue = F("Zu den Sprudeln");
        break;
    }
    case 345126:
    {
        returnValue = F("Zu den Stangen");
        break;
    }
    case 345127:
    {
        returnValue = F("Zu den Stationen");
        break;
    }
    case 345128:
    {
        returnValue = F("Zu den Stauwiesen");
        break;
    }
    case 345129:
    {
        returnValue = F("Zu den Steinbergen");
        break;
    }
    case 345130:
    {
        returnValue = F("Zu den Steinbrüchen");
        break;
    }
    case 345131:
    {
        returnValue = F("Zu den Steinkreuzen");
        break;
    }
    case 345132:
    {
        returnValue = F("Zu den Steinwiesen");
        break;
    }
    case 345133:
    {
        returnValue = F("Zu den Steinäckern");
        break;
    }
    case 345134:
    {
        returnValue = F("Zu den Stielwerken");
        break;
    }
    case 345135:
    {
        returnValue = F("Zu den Stockäckern");
        break;
    }
    case 345136:
    {
        returnValue = F("Zu den Straßäckern");
        break;
    }
    case 345137:
    {
        returnValue = F("Zu den Stöcken");
        break;
    }
    case 345138:
    {
        returnValue = F("Zu den Störwiesen");
        break;
    }
    case 345139:
    {
        returnValue = F("Zu den Stücken");
        break;
    }
    case 345140:
    {
        returnValue = F("Zu den Sundern");
        break;
    }
    case 345141:
    {
        returnValue = F("Zu den Söllen");
        break;
    }
    case 345142:
    {
        returnValue = F("Zu den Südhöfen");
        break;
    }
    case 345143:
    {
        returnValue = F("Zu den Südstücken");
        break;
    }
    case 345144:
    {
        returnValue = F("Zu den Tannen");
        break;
    }
    case 345145:
    {
        returnValue = F("Zu den Teichen");
        break;
    }
    case 345146:
    {
        returnValue = F("Zu den Tennisplätzen");
        break;
    }
    case 345147:
    {
        returnValue = F("Zu den Thermen");
        break;
    }
    case 345148:
    {
        returnValue = F("Zu den Thermen (D1/D2)");
        break;
    }
    case 345149:
    {
        returnValue = F("Zu den Thiergärten");
        break;
    }
    case 345150:
    {
        returnValue = F("Zu den Tongruben");
        break;
    }
    case 345151:
    {
        returnValue = F("Zu den Tonlöchern");
        break;
    }
    case 345152:
    {
        returnValue = F("Zu den Trienkuhlen");
        break;
    }
    case 345153:
    {
        returnValue = F("Zu den Trieschern");
        break;
    }
    case 345154:
    {
        returnValue = F("Zu den Trollblumen");
        break;
    }
    case 345155:
    {
        returnValue = F("Zu den Trups");
        break;
    }
    case 345156:
    {
        returnValue = F("Zu den Tränken");
        break;
    }
    case 345157:
    {
        returnValue = F("Zu den Ueser Finien");
        break;
    }
    case 345158:
    {
        returnValue = F("Zu den Unsben");
        break;
    }
    case 345159:
    {
        returnValue = F("Zu den Urhöfen");
        break;
    }
    case 345160:
    {
        returnValue = F("Zu den Vier Höfen");
        break;
    }
    case 345161:
    {
        returnValue = F("Zu den Vierlinden");
        break;
    }
    case 345162:
    {
        returnValue = F("Zu den Vierruten");
        break;
    }
    case 345163:
    {
        returnValue = F("Zu den Visselwiesen");
        break;
    }
    case 345164:
    {
        returnValue = F("Zu den Wacken");
        break;
    }
    case 345165:
    {
        returnValue = F("Zu den Wadeackern");
        break;
    }
    case 345166:
    {
        returnValue = F("Zu den Waldwiesen");
        break;
    }
    case 345167:
    {
        returnValue = F("Zu den Waldäckern");
        break;
    }
    case 345168:
    {
        returnValue = F("Zu den Wallwiesen");
        break;
    }
    case 345169:
    {
        returnValue = F("Zu den Wartenbergen");
        break;
    }
    case 345170:
    {
        returnValue = F("Zu den Wasserfällen");
        break;
    }
    case 345171:
    {
        returnValue = F("Zu den Wasserwiesen");
        break;
    }
    case 345172:
    {
        returnValue = F("Zu den Weeden");
        break;
    }
    case 345173:
    {
        returnValue = F("Zu den Weiden");
        break;
    }
    case 345174:
    {
        returnValue = F("Zu den Weihern");
        break;
    }
    case 345175:
    {
        returnValue = F("Zu den Weinbergen");
        break;
    }
    case 345176:
    {
        returnValue = F("Zu den Weingärten");
        break;
    }
    case 345177:
    {
        returnValue = F("Zu den Wellen");
        break;
    }
    case 345178:
    {
        returnValue = F("Zu den Werkstätten");
        break;
    }
    case 345179:
    {
        returnValue = F("Zu den Westerstücken");
        break;
    }
    case 345180:
    {
        returnValue = F("Zu den Wettelwiesen");
        break;
    }
    case 345181:
    {
        returnValue = F("Zu den Wetteäckern");
        break;
    }
    case 345182:
    {
        returnValue = F("Zu den Wichelstöcken");
        break;
    }
    case 345183:
    {
        returnValue = F("Zu den Wickershöfen");
        break;
    }
    case 345184:
    {
        returnValue = F("Zu den Wiesen");
        break;
    }
    case 345185:
    {
        returnValue = F("Zu den Windhöfen");
        break;
    }
    case 345186:
    {
        returnValue = F("Zu den Winkelwiesen");
        break;
    }
    case 345187:
    {
        returnValue = F("Zu den Wischen");
        break;
    }
    case 345188:
    {
        returnValue = F("Zu den Wohlblöcken");
        break;
    }
    case 345189:
    {
        returnValue = F("Zu den Wolfskuhlen");
        break;
    }
    case 345190:
    {
        returnValue = F("Zu den Zellen");
        break;
    }
    case 345191:
    {
        returnValue = F("Zu den Ziegelteichen");
        break;
    }
    case 345192:
    {
        returnValue = F("Zu den Ziegelwiesen");
        break;
    }
    case 345193:
    {
        returnValue = F("Zu den Ziegenbergen");
        break;
    }
    case 345194:
    {
        returnValue = F("Zu den Zinsäckern");
        break;
    }
    case 345195:
    {
        returnValue = F("Zu den Zuschlägen");
        break;
    }
    case 345196:
    {
        returnValue = F("Zu den acht Äckern");
        break;
    }
    case 345197:
    {
        returnValue = F("Zu den alten Gärten");
        break;
    }
    case 345198:
    {
        returnValue = F("Zu den drei Birken");
        break;
    }
    case 345199:
    {
        returnValue = F("Zu den drei Buchen");
        break;
    }
    case 345200:
    {
        returnValue = F("Zu den drei Bächen");
        break;
    }
    case 345201:
    {
        returnValue = F("Zu den drei Bänken");
        break;
    }
    case 345202:
    {
        returnValue = F("Zu den drei Kreuzen");
        break;
    }
    case 345203:
    {
        returnValue = F("Zu den drei Linden");
        break;
    }
    case 345204:
    {
        returnValue = F("Zu den drei Mohren");
        break;
    }
    case 345205:
    {
        returnValue = F("Zu den fünf Linden");
        break;
    }
    case 345206:
    {
        returnValue = F("Zu den sechs Eichen");
        break;
    }
    case 345207:
    {
        returnValue = F("Zu den sieben Fußfällen");
        break;
    }
    case 345208:
    {
        returnValue = F("Zu den vier Flöthen");
        break;
    }
    case 345209:
    {
        returnValue = F("Zu den Äckern");
        break;
    }
    case 345210:
    {
        returnValue = F("Zu den Ölgärten");
        break;
    }
    case 345211:
    {
        returnValue = F("Zu der Acht");
        break;
    }
    case 345212:
    {
        returnValue = F("Zu der Aue");
        break;
    }
    case 345213:
    {
        returnValue = F("Zu der Kohlgrube");
        break;
    }
    case 345214:
    {
        returnValue = F("Zu dn Linden");
        break;
    }
    case 345215:
    {
        returnValue = F("Zu-Rhein-Str.");
        break;
    }
    case 345216:
    {
        returnValue = F("Zubenstr.");
        break;
    }
    case 345217:
    {
        returnValue = F("Zuberallmend");
        break;
    }
    case 345218:
    {
        returnValue = F("Zubergasse");
        break;
    }
    case 345219:
    {
        returnValue = F("Zubermoosstr.");
        break;
    }
    case 345220:
    {
        returnValue = F("Zuberäcker");
        break;
    }
    case 345221:
    {
        returnValue = F("Zubringer");
        break;
    }
    case 345222:
    {
        returnValue = F("Zubringer Allmendshofen");
        break;
    }
    case 345223:
    {
        returnValue = F("Zubringer Bergheideweg-Wacholderweg");
        break;
    }
    case 345224:
    {
        returnValue = F("Zubringer Hochrhöner");
        break;
    }
    case 345225:
    {
        returnValue = F("Zubringer Nord");
        break;
    }
    case 345226:
    {
        returnValue = F("Zubringer Stadtautobahn");
        break;
    }
    case 345227:
    {
        returnValue = F("Zubringer-Autobahn");
        break;
    }
    case 345228:
    {
        returnValue = F("Zubringerweg");
        break;
    }
    case 345229:
    {
        returnValue = F("Zubzow");
        break;
    }
    case 345230:
    {
        returnValue = F("Zubří-Platz");
        break;
    }
    case 345231:
    {
        returnValue = F("Zuccalliplatz");
        break;
    }
    case 345232:
    {
        returnValue = F("Zuccallistr.");
        break;
    }
    case 345233:
    {
        returnValue = F("Zuccalmaglio-Platz");
        break;
    }
    case 345234:
    {
        returnValue = F("Zuccalmagliostr.");
        break;
    }
    case 345235:
    {
        returnValue = F("Zuchauer Str.");
        break;
    }
    case 345236:
    {
        returnValue = F("Zuchauer Weg");
        break;
    }
    case 345237:
    {
        returnValue = F("Zuchenberger Str.");
        break;
    }
    case 345238:
    {
        returnValue = F("Zucheringer Str.");
        break;
    }
    case 345239:
    {
        returnValue = F("Zucholdweg");
        break;
    }
    case 345240:
    {
        returnValue = F("Zuckelberg");
        break;
    }
    case 345241:
    {
        returnValue = F("Zuckelhausener Ring");
        break;
    }
    case 345242:
    {
        returnValue = F("Zuckelhäuser Str.");
        break;
    }
    case 345243:
    {
        returnValue = F("Zuckenbergweg");
        break;
    }
    case 345244:
    {
        returnValue = F("Zuckenriederstr.");
        break;
    }
    case 345245:
    {
        returnValue = F("Zuckerallee");
        break;
    }
    case 345246:
    {
        returnValue = F("Zuckerbacherweg");
        break;
    }
    case 345247:
    {
        returnValue = F("Zuckerberg");
        break;
    }
    case 345248:
    {
        returnValue = F("Zuckerbergstr.");
        break;
    }
    case 345249:
    {
        returnValue = F("Zuckerbergweg");
        break;
    }
    case 345250:
    {
        returnValue = F("Zuckerbirnengasse");
        break;
    }
    case 345251:
    {
        returnValue = F("Zuckerbirnenweg");
        break;
    }
    case 345252:
    {
        returnValue = F("Zuckerbusch");
        break;
    }
    case 345253:
    {
        returnValue = F("Zuckerdamm");
        break;
    }
    case 345254:
    {
        returnValue = F("Zuckerfabrik");
        break;
    }
    case 345255:
    {
        returnValue = F("Zuckerfabrikstr.");
        break;
    }
    case 345256:
    {
        returnValue = F("Zuckerfabriksweg");
        break;
    }
    case 345257:
    {
        returnValue = F("Zuckergasse");
        break;
    }
    case 345258:
    {
        returnValue = F("Zuckerhut");
        break;
    }
    case 345259:
    {
        returnValue = F("Zuckerhut-Tunnel");
        break;
    }
    case 345260:
    {
        returnValue = F("Zuckerhutstr.");
        break;
    }
    case 345261:
    {
        returnValue = F("Zuckerhügel");
        break;
    }
    case 345262:
    {
        returnValue = F("Zuckerhütchen");
        break;
    }
    case 345263:
    {
        returnValue = F("Zuckerkamp");
        break;
    }
    case 345264:
    {
        returnValue = F("Zuckerkehrchen");
        break;
    }
    case 345265:
    {
        returnValue = F("Zuckerkuchenweg");
        break;
    }
    case 345266:
    {
        returnValue = F("Zuckerlberg");
        break;
    }
    case 345267:
    {
        returnValue = F("Zuckerleweg");
        break;
    }
    case 345268:
    {
        returnValue = F("Zuckermandelweg");
        break;
    }
    case 345269:
    {
        returnValue = F("Zuckermantelstr.");
        break;
    }
    case 345270:
    {
        returnValue = F("Zuckerort");
        break;
    }
    case 345271:
    {
        returnValue = F("Zuckerpad");
        break;
    }
    case 345272:
    {
        returnValue = F("Zuckerpark");
        break;
    }
    case 345273:
    {
        returnValue = F("Zuckerpolderstr.");
        break;
    }
    case 345274:
    {
        returnValue = F("Zuckerpool");
        break;
    }
    case 345275:
    {
        returnValue = F("Zuckerring");
        break;
    }
    case 345276:
    {
        returnValue = F("Zuckerrübenweg");
        break;
    }
    case 345277:
    {
        returnValue = F("Zuckerstr.");
        break;
    }
    case 345278:
    {
        returnValue = F("Zuckertimpen");
        break;
    }
    case 345279:
    {
        returnValue = F("Zuckerweg");
        break;
    }
    case 345280:
    {
        returnValue = F("Zuckerwinkel");
        break;
    }
    case 345281:
    {
        returnValue = F("Zuckmantel");
        break;
    }
    case 345282:
    {
        returnValue = F("Zuckmantelstr.");
        break;
    }
    case 345283:
    {
        returnValue = F("Zuckmantler Weg");
        break;
    }
    case 345284:
    {
        returnValue = F("Zuckmayerstr.");
        break;
    }
    case 345285:
    {
        returnValue = F("Zuckmayerweg");
        break;
    }
    case 345286:
    {
        returnValue = F("Zuckschwerdtstr.");
        break;
    }
    case 345287:
    {
        returnValue = F("Zudarer Str.");
        break;
    }
    case 345288:
    {
        returnValue = F("Zudarer Weg");
        break;
    }
    case 345289:
    {
        returnValue = F("Zuedinger Str.");
        break;
    }
    case 345290:
    {
        returnValue = F("Zufahrt");
        break;
    }
    case 345291:
    {
        returnValue = F("Zufahrt \"Klein Amerika");
        break;
    }
    case 345292:
    {
        returnValue = F("Zufahrt Abwasserpumpstation");
        break;
    }
    case 345293:
    {
        returnValue = F("Zufahrt Bahngelände");
        break;
    }
    case 345294:
    {
        returnValue = F("Zufahrt Bauschuttannahmestelle");
        break;
    }
    case 345295:
    {
        returnValue = F("Zufahrt Besucherparkplatz Rheinmetall");
        break;
    }
    case 345296:
    {
        returnValue = F("Zufahrt Entlastungsbauwerk Burgbach");
        break;
    }
    case 345297:
    {
        returnValue = F("Zufahrt Erzgebirgsferienwohnung Tino Götz");
        break;
    }
    case 345298:
    {
        returnValue = F("Zufahrt FSV1910");
        break;
    }
    case 345299:
    {
        returnValue = F("Zufahrt Fahrerlager Motodrom MSC Siegbachtal");
        break;
    }
    case 345300:
    {
        returnValue = F("Zufahrt Festplatz");
        break;
    }
    case 345301:
    {
        returnValue = F("Zufahrt Feuerwehr");
        break;
    }
    case 345302:
    {
        returnValue = F("Zufahrt Fluggelände Hausäcker");
        break;
    }
    case 345303:
    {
        returnValue = F("Zufahrt Franz-von-Assisi-Platz");
        break;
    }
    case 345304:
    {
        returnValue = F("Zufahrt Freiwillige Feuerwehr");
        break;
    }
    case 345305:
    {
        returnValue = F("Zufahrt Füchsle");
        break;
    }
    case 345306:
    {
        returnValue = F("Zufahrt Gartenanlage");
        break;
    }
    case 345307:
    {
        returnValue = F("Zufahrt Hardtweg");
        break;
    }
    case 345308:
    {
        returnValue = F("Zufahrt Haus Blume");
        break;
    }
    case 345309:
    {
        returnValue = F("Zufahrt Haus zur Stadtecke");
        break;
    }
    case 345310:
    {
        returnValue = F("Zufahrt Häckselplatz");
        break;
    }
    case 345311:
    {
        returnValue = F("Zufahrt Hördter Mühle (Sackgasse)");
        break;
    }
    case 345312:
    {
        returnValue = F("Zufahrt Kiesgrube Leeder");
        break;
    }
    case 345313:
    {
        returnValue = F("Zufahrt Kieswerk");
        break;
    }
    case 345314:
    {
        returnValue = F("Zufahrt Kindergarten");
        break;
    }
    case 345315:
    {
        returnValue = F("Zufahrt Kläranlage");
        break;
    }
    case 345316:
    {
        returnValue = F("Zufahrt Maltiz");
        break;
    }
    case 345317:
    {
        returnValue = F("Zufahrt Mühlenbacher Hof");
        break;
    }
    case 345318:
    {
        returnValue = F("Zufahrt Notaufnahme");
        break;
    }
    case 345319:
    {
        returnValue = F("Zufahrt Plauer See");
        break;
    }
    case 345320:
    {
        returnValue = F("Zufahrt Quellen");
        break;
    }
    case 345321:
    {
        returnValue = F("Zufahrt Reitgar");
        break;
    }
    case 345322:
    {
        returnValue = F("Zufahrt Reitstall");
        break;
    }
    case 345323:
    {
        returnValue = F("Zufahrt Rettungsstollen Notausgang 1+2 des Silberbergtunnels");
        break;
    }
    case 345324:
    {
        returnValue = F("Zufahrt Schencking");
        break;
    }
    case 345325:
    {
        returnValue = F("Zufahrt Schenking");
        break;
    }
    case 345326:
    {
        returnValue = F("Zufahrt Schäfersteig");
        break;
    }
    case 345327:
    {
        returnValue = F("Zufahrt Spielfeld");
        break;
    }
    case 345328:
    {
        returnValue = F("Zufahrt Sportplatz");
        break;
    }
    case 345329:
    {
        returnValue = F("Zufahrt St.-Severin-Schule");
        break;
    }
    case 345330:
    {
        returnValue = F("Zufahrt Strahlenberger Str. 25");
        break;
    }
    case 345331:
    {
        returnValue = F("Zufahrt Tennisplatz");
        break;
    }
    case 345332:
    {
        returnValue = F("Zufahrt Trinscher Hof");
        break;
    }
    case 345333:
    {
        returnValue = F("Zufahrt V1434");
        break;
    }
    case 345334:
    {
        returnValue = F("Zufahrt Versuchsgelände Braunschweiger Flammenfilter GmbH");
        break;
    }
    case 345335:
    {
        returnValue = F("Zufahrt WAZ");
        break;
    }
    case 345336:
    {
        returnValue = F("Zufahrt WEA 1");
        break;
    }
    case 345337:
    {
        returnValue = F("Zufahrt WEA 2");
        break;
    }
    case 345338:
    {
        returnValue = F("Zufahrt WEA 3");
        break;
    }
    case 345339:
    {
        returnValue = F("Zufahrt Waldfriedhof");
        break;
    }
    case 345340:
    {
        returnValue = F("Zufahrt zum Forellenhof");
        break;
    }
    case 345341:
    {
        returnValue = F("Zufahrt zum Golf Club");
        break;
    }
    case 345342:
    {
        returnValue = F("Zufahrt zum Gut");
        break;
    }
    case 345343:
    {
        returnValue = F("Zufahrt zum Löschteich");
        break;
    }
    case 345344:
    {
        returnValue = F("Zufahrt zum Zeltplatz D108");
        break;
    }
    case 345345:
    {
        returnValue = F("Zufahrt zur Reitanlage");
        break;
    }
    case 345346:
    {
        returnValue = F("Zufahrt zur alten Landebahn");
        break;
    }
    case 345347:
    {
        returnValue = F("Zufahrtstr.");
        break;
    }
    case 345348:
    {
        returnValue = F("Zufahrtsweg zu den Häusern");
        break;
    }
    case 345349:
    {
        returnValue = F("Zufahrtsweg zum Sportplatz");
        break;
    }
    case 345350:
    {
        returnValue = F("Zufahrtsweg zur Hainmühle");
        break;
    }
    case 345351:
    {
        returnValue = F("Zufahrtsweg zur Kleingartenanlage");
        break;
    }
    case 345352:
    {
        returnValue = F("Zufallweg");
        break;
    }
    case 345353:
    {
        returnValue = F("Zuffenhauser Str.");
        break;
    }
    case 345354:
    {
        returnValue = F("Zuffenhäuser Heide");
        break;
    }
    case 345355:
    {
        returnValue = F("Zuffenhäuser Kelterplatz");
        break;
    }
    case 345356:
    {
        returnValue = F("Zuflucht");
        break;
    }
    case 345357:
    {
        returnValue = F("Zufriedenheit");
        break;
    }
    case 345358:
    {
        returnValue = F("Zufuhrstr.");
        break;
    }
    case 345359:
    {
        returnValue = F("Zugang");
        break;
    }
    case 345360:
    {
        returnValue = F("Zugang \"Olympia-Camp");
        break;
    }
    case 345361:
    {
        returnValue = F("Zugang 1");
        break;
    }
    case 345362:
    {
        returnValue = F("Zugang 3b");
        break;
    }
    case 345363:
    {
        returnValue = F("Zugang 3c");
        break;
    }
    case 345364:
    {
        returnValue = F("Zugang Badestelle");
        break;
    }
    case 345365:
    {
        returnValue = F("Zugang Birkenstr.");
        break;
    }
    case 345366:
    {
        returnValue = F("Zugang Birkenweg");
        break;
    }
    case 345367:
    {
        returnValue = F("Zugang Deich");
        break;
    }
    case 345368:
    {
        returnValue = F("Zugang Gemüsegarten");
        break;
    }
    case 345369:
    {
        returnValue = F("Zugang Haupteingang FSG");
        break;
    }
    case 345370:
    {
        returnValue = F("Zugang Haus Blume");
        break;
    }
    case 345371:
    {
        returnValue = F("Zugang Herrenhaus Leuchtenburg");
        break;
    }
    case 345372:
    {
        returnValue = F("Zugang IFI OST");
        break;
    }
    case 345373:
    {
        returnValue = F("Zugang Kellerwiese 1");
        break;
    }
    case 345374:
    {
        returnValue = F("Zugang Kellerwiese 3");
        break;
    }
    case 345375:
    {
        returnValue = F("Zugang Kellerwiese 5");
        break;
    }
    case 345376:
    {
        returnValue = F("Zugang Kelzstr. 37 u. 39");
        break;
    }
    case 345377:
    {
        returnValue = F("Zugang Kindertagesstätte");
        break;
    }
    case 345378:
    {
        returnValue = F("Zugang Leskanpark");
        break;
    }
    case 345379:
    {
        returnValue = F("Zugang Naab-Promenadeweg");
        break;
    }
    case 345380:
    {
        returnValue = F("Zugang Naabradweg");
        break;
    }
    case 345381:
    {
        returnValue = F("Zugang Notbahnsteig 2");
        break;
    }
    case 345382:
    {
        returnValue = F("Zugang Oed");
        break;
    }
    case 345383:
    {
        returnValue = F("Zugang Parkplatz Schulzentrum");
        break;
    }
    case 345384:
    {
        returnValue = F("Zugang Praxis Kittel");
        break;
    }
    case 345385:
    {
        returnValue = F("Zugang Romberg zur Balkantrasse");
        break;
    }
    case 345386:
    {
        returnValue = F("Zugang Schornbaumstrasse 2/4");
        break;
    }
    case 345387:
    {
        returnValue = F("Zugang Seniorenwohnheim Kleeblatt");
        break;
    }
    case 345388:
    {
        returnValue = F("Zugang Soldatenfriedhof");
        break;
    }
    case 345389:
    {
        returnValue = F("Zugang St. Martin");
        break;
    }
    case 345390:
    {
        returnValue = F("Zugang St.-Anna-Kapelle");
        break;
    }
    case 345391:
    {
        returnValue = F("Zugang Steg");
        break;
    }
    case 345392:
    {
        returnValue = F("Zugang TechnoZ Freilassing");
        break;
    }
    case 345393:
    {
        returnValue = F("Zugang Tiefgarage");
        break;
    }
    case 345394:
    {
        returnValue = F("Zugang zu den Eingängen Buchenstra. 16-22");
        break;
    }
    case 345395:
    {
        returnValue = F("Zugang zu den Häusern 65, 65a, 67, 67a");
        break;
    }
    case 345396:
    {
        returnValue = F("Zugang zu den Häusern Buchenstr. 2-12");
        break;
    }
    case 345397:
    {
        returnValue = F("Zugang zu den Sporthallen der IGS-Südstadt");
        break;
    }
    case 345398:
    {
        returnValue = F("Zugang zum Haltepunkt");
        break;
    }
    case 345399:
    {
        returnValue = F("Zugang zum Kleingartenverein Silberborn");
        break;
    }
    case 345400:
    {
        returnValue = F("Zugang zum Norma");
        break;
    }
    case 345401:
    {
        returnValue = F("Zugang zum Spielplatz");
        break;
    }
    case 345402:
    {
        returnValue = F("Zugang zum Steinbruch");
        break;
    }
    case 345403:
    {
        returnValue = F("Zugang zum Trave-Wander-Weg");
        break;
    }
    case 345404:
    {
        returnValue = F("Zugang zum Wolfterwanderweg 2");
        break;
    }
    case 345405:
    {
        returnValue = F("Zugang zur Kirche");
        break;
    }
    case 345406:
    {
        returnValue = F("Zugang Ölbachstr.");
        break;
    }
    case 345407:
    {
        returnValue = F("Zugang: Marktgarage");
        break;
    }
    case 345408:
    {
        returnValue = F("Zugangssteg");
        break;
    }
    case 345409:
    {
        returnValue = F("Zugangsstollen Leonberger Str.");
        break;
    }
    case 345410:
    {
        returnValue = F("Zugangsstollen Magstatter Str.");
        break;
    }
    case 345411:
    {
        returnValue = F("Zugangsweg Bauwagenplatz");
        break;
    }
    case 345412:
    {
        returnValue = F("Zugangsweg Bäckerei Braun");
        break;
    }
    case 345413:
    {
        returnValue = F("Zugangsweg Schellbergstr. 47-51");
        break;
    }
    case 345414:
    {
        returnValue = F("Zugarten");
        break;
    }
    case 345415:
    {
        returnValue = F("Zugasse");
        break;
    }
    case 345416:
    {
        returnValue = F("Zugbrücke");
        break;
    }
    case 345417:
    {
        returnValue = F("Zugbrückenstr.");
        break;
    }
    case 345418:
    {
        returnValue = F("Zugelderstr.");
        break;
    }
    case 345419:
    {
        returnValue = F("Zugemachtes Feld");
        break;
    }
    case 345420:
    {
        returnValue = F("Zuger Klause");
        break;
    }
    case 345421:
    {
        returnValue = F("Zuger Str.");
        break;
    }
    case 345422:
    {
        returnValue = F("Zuger Weg");
        break;
    }
    case 345423:
    {
        returnValue = F("Zuggasse");
        break;
    }
    case 345424:
    {
        returnValue = F("Zughübelstr.");
        break;
    }
    case 345425:
    {
        returnValue = F("Zugmantelstr.");
        break;
    }
    case 345426:
    {
        returnValue = F("Zugspitzring");
        break;
    }
    case 345427:
    {
        returnValue = F("Zugspitzstr.");
        break;
    }
    case 345428:
    {
        returnValue = F("Zugspitzweg");
        break;
    }
    case 345429:
    {
        returnValue = F("Zugstr.");
        break;
    }
    case 345430:
    {
        returnValue = F("Zugäckerstr.");
        break;
    }
    case 345431:
    {
        returnValue = F("Zuhangeweg");
        break;
    }
    case 345432:
    {
        returnValue = F("Zuhornstr.");
        break;
    }
    case 345433:
    {
        returnValue = F("Zukunft");
        break;
    }
    case 345434:
    {
        returnValue = F("Zukunftstr.");
        break;
    }
    case 345435:
    {
        returnValue = F("Zukunftsweg");
        break;
    }
    case 345436:
    {
        returnValue = F("Zulehenweg");
        break;
    }
    case 345437:
    {
        returnValue = F("Zultenberg");
        break;
    }
    case 345438:
    {
        returnValue = F("Zultenberger Str.");
        break;
    }
    case 345439:
    {
        returnValue = F("Zum");
        break;
    }
    case 345440:
    {
        returnValue = F("Zum 1. Fischerbuden");
        break;
    }
    case 345441:
    {
        returnValue = F("Zum Aabach");
        break;
    }
    case 345442:
    {
        returnValue = F("Zum Aak");
        break;
    }
    case 345443:
    {
        returnValue = F("Zum Aakhof");
        break;
    }
    case 345444:
    {
        returnValue = F("Zum Aalbach");
        break;
    }
    case 345445:
    {
        returnValue = F("Zum Aansberg");
        break;
    }
    case 345446:
    {
        returnValue = F("Zum Aap");
        break;
    }
    case 345447:
    {
        returnValue = F("Zum Aatal");
        break;
    }
    case 345448:
    {
        returnValue = F("Zum Abelitzschloot");
        break;
    }
    case 345449:
    {
        returnValue = F("Zum Abendberg");
        break;
    }
    case 345450:
    {
        returnValue = F("Zum Abendhorst");
        break;
    }
    case 345451:
    {
        returnValue = F("Zum Abtshof");
        break;
    }
    case 345452:
    {
        returnValue = F("Zum Abtskopf");
        break;
    }
    case 345453:
    {
        returnValue = F("Zum Abtsrain");
        break;
    }
    case 345454:
    {
        returnValue = F("Zum Abtsweingarten");
        break;
    }
    case 345455:
    {
        returnValue = F("Zum Achelstädter Holz");
        break;
    }
    case 345456:
    {
        returnValue = F("Zum Achimer Bahnhof");
        break;
    }
    case 345457:
    {
        returnValue = F("Zum Achterbruch");
        break;
    }
    case 345458:
    {
        returnValue = F("Zum Achterfeld");
        break;
    }
    case 345459:
    {
        returnValue = F("Zum Achterlandsweg");
        break;
    }
    case 345460:
    {
        returnValue = F("Zum Achterwasser");
        break;
    }
    case 345461:
    {
        returnValue = F("Zum Acker");
        break;
    }
    case 345462:
    {
        returnValue = F("Zum Ackerberg");
        break;
    }
    case 345463:
    {
        returnValue = F("Zum Ackerbusch");
        break;
    }
    case 345464:
    {
        returnValue = F("Zum Ackerkoog");
        break;
    }
    case 345465:
    {
        returnValue = F("Zum Ackern");
        break;
    }
    case 345466:
    {
        returnValue = F("Zum Adamsee");
        break;
    }
    case 345467:
    {
        returnValue = F("Zum Adelsberg");
        break;
    }
    case 345468:
    {
        returnValue = F("Zum Adelsbrunnen");
        break;
    }
    case 345469:
    {
        returnValue = F("Zum Adentälchen");
        break;
    }
    case 345470:
    {
        returnValue = F("Zum Adlerhorst");
        break;
    }
    case 345471:
    {
        returnValue = F("Zum Adligen Hof");
        break;
    }
    case 345472:
    {
        returnValue = F("Zum Adolfshof");
        break;
    }
    case 345473:
    {
        returnValue = F("Zum Adonisröschen");
        break;
    }
    case 345474:
    {
        returnValue = F("Zum Affenberg");
        break;
    }
    case 345475:
    {
        returnValue = F("Zum Aggensell");
        break;
    }
    case 345476:
    {
        returnValue = F("Zum Aggerdamm");
        break;
    }
    case 345477:
    {
        returnValue = F("Zum Ahauser Berg");
        break;
    }
    case 345478:
    {
        returnValue = F("Zum Ahfeld");
        break;
    }
    case 345479:
    {
        returnValue = F("Zum Ahl");
        break;
    }
    case 345480:
    {
        returnValue = F("Zum Ahlftener Flatt");
        break;
    }
    case 345481:
    {
        returnValue = F("Zum Ahornhof");
        break;
    }
    case 345482:
    {
        returnValue = F("Zum Ahrblick");
        break;
    }
    case 345483:
    {
        returnValue = F("Zum Ahrenbach");
        break;
    }
    case 345484:
    {
        returnValue = F("Zum Ahrenberg");
        break;
    }
    case 345485:
    {
        returnValue = F("Zum Ahrendberg");
        break;
    }
    case 345486:
    {
        returnValue = F("Zum Ahrensberg");
        break;
    }
    case 345487:
    {
        returnValue = F("Zum Ahrenskamp");
        break;
    }
    case 345488:
    {
        returnValue = F("Zum Ahrtal");
        break;
    }
    case 345489:
    {
        returnValue = F("Zum Ahrweiler Berg");
        break;
    }
    case 345490:
    {
        returnValue = F("Zum Aichahof");
        break;
    }
    case 345491:
    {
        returnValue = F("Zum Aischbach");
        break;
    }
    case 345492:
    {
        returnValue = F("Zum Akazienhain");
        break;
    }
    case 345493:
    {
        returnValue = F("Zum Akazienwäldchen");
        break;
    }
    case 345494:
    {
        returnValue = F("Zum Aktienbrunnen");
        break;
    }
    case 345495:
    {
        returnValue = F("Zum Albach");
        break;
    }
    case 345496:
    {
        returnValue = F("Zum Albesberg");
        break;
    }
    case 345497:
    {
        returnValue = F("Zum Albstädter Bach");
        break;
    }
    case 345498:
    {
        returnValue = F("Zum Alenberg");
        break;
    }
    case 345499:
    {
        returnValue = F("Zum Alertsberg");
        break;
    }
    case 345500:
    {
        returnValue = F("Zum Alet");
        break;
    }
    case 345501:
    {
        returnValue = F("Zum Alheimer");
        break;
    }
    case 345502:
    {
        returnValue = F("Zum Alhopp");
        break;
    }
    case 345503:
    {
        returnValue = F("Zum Allen");
        break;
    }
    case 345504:
    {
        returnValue = F("Zum Allenbach");
        break;
    }
    case 345505:
    {
        returnValue = F("Zum Allenberg");
        break;
    }
    case 345506:
    {
        returnValue = F("Zum Allengrund");
        break;
    }
    case 345507:
    {
        returnValue = F("Zum Allerhafen");
        break;
    }
    case 345508:
    {
        returnValue = F("Zum Allersiek");
        break;
    }
    case 345509:
    {
        returnValue = F("Zum Almen");
        break;
    }
    case 345510:
    {
        returnValue = F("Zum Almsweg");
        break;
    }
    case 345511:
    {
        returnValue = F("Zum Alpenblick");
        break;
    }
    case 345512:
    {
        returnValue = F("Zum Alraftsgraben");
        break;
    }
    case 345513:
    {
        returnValue = F("Zum Alsterbach");
        break;
    }
    case 345514:
    {
        returnValue = F("Zum Altacker");
        break;
    }
    case 345515:
    {
        returnValue = F("Zum Altbach");
        break;
    }
    case 345516:
    {
        returnValue = F("Zum Altberg");
        break;
    }
    case 345517:
    {
        returnValue = F("Zum Alteberg");
        break;
    }
    case 345518:
    {
        returnValue = F("Zum Alten Amtshaus");
        break;
    }
    case 345519:
    {
        returnValue = F("Zum Alten Anker");
        break;
    }
    case 345520:
    {
        returnValue = F("Zum Alten Bad");
        break;
    }
    case 345521:
    {
        returnValue = F("Zum Alten Bahndamm");
        break;
    }
    case 345522:
    {
        returnValue = F("Zum Alten Bahnhof");
        break;
    }
    case 345523:
    {
        returnValue = F("Zum Alten Bauernhof");
        break;
    }
    case 345524:
    {
        returnValue = F("Zum Alten Berg");
        break;
    }
    case 345525:
    {
        returnValue = F("Zum Alten Borg");
        break;
    }
    case 345526:
    {
        returnValue = F("Zum Alten Born");
        break;
    }
    case 345527:
    {
        returnValue = F("Zum Alten Brunnen");
        break;
    }
    case 345528:
    {
        returnValue = F("Zum Alten Dessauer");
        break;
    }
    case 345529:
    {
        returnValue = F("Zum Alten Dorf");
        break;
    }
    case 345530:
    {
        returnValue = F("Zum Alten Dorfkrug");
        break;
    }
    case 345531:
    {
        returnValue = F("Zum Alten Elbufer");
        break;
    }
    case 345532:
    {
        returnValue = F("Zum Alten FC-Sportplatz");
        break;
    }
    case 345533:
    {
        returnValue = F("Zum Alten Feld");
        break;
    }
    case 345534:
    {
        returnValue = F("Zum Alten Felde");
        break;
    }
    case 345535:
    {
        returnValue = F("Zum Alten Flugfeld");
        break;
    }
    case 345536:
    {
        returnValue = F("Zum Alten Flugplatz");
        break;
    }
    case 345537:
    {
        returnValue = F("Zum Alten Forst");
        break;
    }
    case 345538:
    {
        returnValue = F("Zum Alten Forsthaus");
        break;
    }
    case 345539:
    {
        returnValue = F("Zum Alten Friedhof");
        break;
    }
    case 345540:
    {
        returnValue = F("Zum Alten Fritz");
        break;
    }
    case 345541:
    {
        returnValue = F("Zum Alten Garten");
        break;
    }
    case 345542:
    {
        returnValue = F("Zum Alten Gehege");
        break;
    }
    case 345543:
    {
        returnValue = F("Zum Alten Gericht");
        break;
    }
    case 345544:
    {
        returnValue = F("Zum Alten Graben");
        break;
    }
    case 345545:
    {
        returnValue = F("Zum Alten Grund");
        break;
    }
    case 345546:
    {
        returnValue = F("Zum Alten Gut");
        break;
    }
    case 345547:
    {
        returnValue = F("Zum Alten Gutshaus");
        break;
    }
    case 345548:
    {
        returnValue = F("Zum Alten Hafen");
        break;
    }
    case 345549:
    {
        returnValue = F("Zum Alten Hammer");
        break;
    }
    case 345550:
    {
        returnValue = F("Zum Alten Handelsweg");
        break;
    }
    case 345551:
    {
        returnValue = F("Zum Alten Herrgott");
        break;
    }
    case 345552:
    {
        returnValue = F("Zum Alten Hof");
        break;
    }
    case 345553:
    {
        returnValue = F("Zum Alten Hohlweg");
        break;
    }
    case 345554:
    {
        returnValue = F("Zum Alten Kamp");
        break;
    }
    case 345555:
    {
        returnValue = F("Zum Alten Kanal");
        break;
    }
    case 345556:
    {
        returnValue = F("Zum Alten Krug");
        break;
    }
    case 345557:
    {
        returnValue = F("Zum Alten Landrat");
        break;
    }
    case 345558:
    {
        returnValue = F("Zum Alten Mann");
        break;
    }
    case 345559:
    {
        returnValue = F("Zum Alten Moor");
        break;
    }
    case 345560:
    {
        returnValue = F("Zum Alten Park");
        break;
    }
    case 345561:
    {
        returnValue = F("Zum Alten Pastorat");
        break;
    }
    case 345562:
    {
        returnValue = F("Zum Alten Paulshof");
        break;
    }
    case 345563:
    {
        returnValue = F("Zum Alten Postweg");
        break;
    }
    case 345564:
    {
        returnValue = F("Zum Alten Roth");
        break;
    }
    case 345565:
    {
        returnValue = F("Zum Alten Sande");
        break;
    }
    case 345566:
    {
        returnValue = F("Zum Alten Schacht");
        break;
    }
    case 345567:
    {
        returnValue = F("Zum Alten Schloß");
        break;
    }
    case 345568:
    {
        returnValue = F("Zum Alten Schulland");
        break;
    }
    case 345569:
    {
        returnValue = F("Zum Alten Schwimmbad");
        break;
    }
    case 345570:
    {
        returnValue = F("Zum Alten Siepen");
        break;
    }
    case 345571:
    {
        returnValue = F("Zum Alten Sportplatz");
        break;
    }
    case 345572:
    {
        returnValue = F("Zum Alten Stall");
        break;
    }
    case 345573:
    {
        returnValue = F("Zum Alten Stau");
        break;
    }
    case 345574:
    {
        returnValue = F("Zum Alten Steinbruch");
        break;
    }
    case 345575:
    {
        returnValue = F("Zum Alten Sternberg");
        break;
    }
    case 345576:
    {
        returnValue = F("Zum Alten Stolberg");
        break;
    }
    case 345577:
    {
        returnValue = F("Zum Alten Streitfeld");
        break;
    }
    case 345578:
    {
        returnValue = F("Zum Alten Stuhl");
        break;
    }
    case 345579:
    {
        returnValue = F("Zum Alten Tal");
        break;
    }
    case 345580:
    {
        returnValue = F("Zum Alten Teich");
        break;
    }
    case 345581:
    {
        returnValue = F("Zum Alten Tennisplatz");
        break;
    }
    case 345582:
    {
        returnValue = F("Zum Alten Tief");
        break;
    }
    case 345583:
    {
        returnValue = F("Zum Alten Tor");
        break;
    }
    case 345584:
    {
        returnValue = F("Zum Alten Torfwerk");
        break;
    }
    case 345585:
    {
        returnValue = F("Zum Alten Turm");
        break;
    }
    case 345586:
    {
        returnValue = F("Zum Alten Waldhaus");
        break;
    }
    case 345587:
    {
        returnValue = F("Zum Alten Wasserhaus");
        break;
    }
    case 345588:
    {
        returnValue = F("Zum Alten Wasserturm");
        break;
    }
    case 345589:
    {
        returnValue = F("Zum Alten Wasserwerk");
        break;
    }
    case 345590:
    {
        returnValue = F("Zum Alten Wehr");
        break;
    }
    case 345591:
    {
        returnValue = F("Zum Alten Weinberg");
        break;
    }
    case 345592:
    {
        returnValue = F("Zum Alten Zollhaus");
        break;
    }
    case 345593:
    {
        returnValue = F("Zum Altenberg");
        break;
    }
    case 345594:
    {
        returnValue = F("Zum Altenforst");
        break;
    }
    case 345595:
    {
        returnValue = F("Zum Altengarten");
        break;
    }
    case 345596:
    {
        returnValue = F("Zum Altengraben");
        break;
    }
    case 345597:
    {
        returnValue = F("Zum Altensee");
        break;
    }
    case 345598:
    {
        returnValue = F("Zum Altenstein");
        break;
    }
    case 345599:
    {
        returnValue = F("Zum Altenwald");
        break;
    }
    case 345600:
    {
        returnValue = F("Zum Altenweg");
        break;
    }
    case 345601:
    {
        returnValue = F("Zum Alterstein");
        break;
    }
    case 345602:
    {
        returnValue = F("Zum Althof");
        break;
    }
    case 345603:
    {
        returnValue = F("Zum Altmühlspitz");
        break;
    }
    case 345604:
    {
        returnValue = F("Zum Altrhein");
        break;
    }
    case 345605:
    {
        returnValue = F("Zum Altrheinufer");
        break;
    }
    case 345606:
    {
        returnValue = F("Zum Altusknipp");
        break;
    }
    case 345607:
    {
        returnValue = F("Zum Altwasser");
        break;
    }
    case 345608:
    {
        returnValue = F("Zum Altwoog");
        break;
    }
    case 345609:
    {
        returnValue = F("Zum Amboss");
        break;
    }
    case 345610:
    {
        returnValue = F("Zum Ameisenberg");
        break;
    }
    case 345611:
    {
        returnValue = F("Zum Ammerbach");
        break;
    }
    case 345612:
    {
        returnValue = F("Zum Ammistal");
        break;
    }
    case 345613:
    {
        returnValue = F("Zum Amselgrund");
        break;
    }
    case 345614:
    {
        returnValue = F("Zum Amselweg");
        break;
    }
    case 345615:
    {
        returnValue = F("Zum Amt");
        break;
    }
    case 345616:
    {
        returnValue = F("Zum Amtshof");
        break;
    }
    case 345617:
    {
        returnValue = F("Zum Amtswald");
        break;
    }
    case 345618:
    {
        returnValue = F("Zum Andershofer Soll");
        break;
    }
    case 345619:
    {
        returnValue = F("Zum Angelsteg");
        break;
    }
    case 345620:
    {
        returnValue = F("Zum Angelteich");
        break;
    }
    case 345621:
    {
        returnValue = F("Zum Anger");
        break;
    }
    case 345622:
    {
        returnValue = F("Zum Angeracker");
        break;
    }
    case 345623:
    {
        returnValue = F("Zum Angerhof");
        break;
    }
    case 345624:
    {
        returnValue = F("Zum Anglergrund");
        break;
    }
    case 345625:
    {
        returnValue = F("Zum Anglerheim");
        break;
    }
    case 345626:
    {
        returnValue = F("Zum Anker");
        break;
    }
    case 345627:
    {
        returnValue = F("Zum Anleger");
        break;
    }
    case 345628:
    {
        returnValue = F("Zum Annenhof");
        break;
    }
    case 345629:
    {
        returnValue = F("Zum Annental");
        break;
    }
    case 345630:
    {
        returnValue = F("Zum Annesberg");
        break;
    }
    case 345631:
    {
        returnValue = F("Zum Anraffer Grund");
        break;
    }
    case 345632:
    {
        returnValue = F("Zum Anschuß");
        break;
    }
    case 345633:
    {
        returnValue = F("Zum Anspel");
        break;
    }
    case 345634:
    {
        returnValue = F("Zum Antenborn");
        break;
    }
    case 345635:
    {
        returnValue = F("Zum Antennenmeßplatz");
        break;
    }
    case 345636:
    {
        returnValue = F("Zum Antestal");
        break;
    }
    case 345637:
    {
        returnValue = F("Zum Antjebitt");
        break;
    }
    case 345638:
    {
        returnValue = F("Zum Antjehof");
        break;
    }
    case 345639:
    {
        returnValue = F("Zum Antonius");
        break;
    }
    case 345640:
    {
        returnValue = F("Zum Antoniuskreuz");
        break;
    }
    case 345641:
    {
        returnValue = F("Zum Apenberg");
        break;
    }
    case 345642:
    {
        returnValue = F("Zum Apfelgarten");
        break;
    }
    case 345643:
    {
        returnValue = F("Zum Apfelweg");
        break;
    }
    case 345644:
    {
        returnValue = F("Zum Apothekerhof");
        break;
    }
    case 345645:
    {
        returnValue = F("Zum Appelbach");
        break;
    }
    case 345646:
    {
        returnValue = F("Zum Appelhof");
        break;
    }
    case 345647:
    {
        returnValue = F("Zum Aquarium");
        break;
    }
    case 345648:
    {
        returnValue = F("Zum Arlesgarten");
        break;
    }
    case 345649:
    {
        returnValue = F("Zum Arnoldsacker");
        break;
    }
    case 345650:
    {
        returnValue = F("Zum Arnoldsberg");
        break;
    }
    case 345651:
    {
        returnValue = F("Zum Arnsberger Wald");
        break;
    }
    case 345652:
    {
        returnValue = F("Zum Arnstal");
        break;
    }
    case 345653:
    {
        returnValue = F("Zum Asang");
        break;
    }
    case 345654:
    {
        returnValue = F("Zum Asbacher Sportplatz");
        break;
    }
    case 345655:
    {
        returnValue = F("Zum Aschberg");
        break;
    }
    case 345656:
    {
        returnValue = F("Zum Aschenbühl");
        break;
    }
    case 345657:
    {
        returnValue = F("Zum Aschgarten");
        break;
    }
    case 345658:
    {
        returnValue = F("Zum Aspen");
        break;
    }
    case 345659:
    {
        returnValue = F("Zum Aspental");
        break;
    }
    case 345660:
    {
        returnValue = F("Zum Asseberg");
        break;
    }
    case 345661:
    {
        returnValue = F("Zum Attersee");
        break;
    }
    case 345662:
    {
        returnValue = F("Zum Atzmannstein");
        break;
    }
    case 345663:
    {
        returnValue = F("Zum Aubach");
        break;
    }
    case 345664:
    {
        returnValue = F("Zum Aubachtal");
        break;
    }
    case 345665:
    {
        returnValue = F("Zum Auberg");
        break;
    }
    case 345666:
    {
        returnValue = F("Zum Aublick");
        break;
    }
    case 345667:
    {
        returnValue = F("Zum Aubühl");
        break;
    }
    case 345668:
    {
        returnValue = F("Zum Aueberg");
        break;
    }
    case 345669:
    {
        returnValue = F("Zum Auebruch");
        break;
    }
    case 345670:
    {
        returnValue = F("Zum Auehof");
        break;
    }
    case 345671:
    {
        returnValue = F("Zum Auenberg");
        break;
    }
    case 345672:
    {
        returnValue = F("Zum Auenblick");
        break;
    }
    case 345673:
    {
        returnValue = F("Zum Auenwald");
        break;
    }
    case 345674:
    {
        returnValue = F("Zum Auer Wald");
        break;
    }
    case 345675:
    {
        returnValue = F("Zum Auerain");
        break;
    }
    case 345676:
    {
        returnValue = F("Zum Auersberg");
        break;
    }
    case 345677:
    {
        returnValue = F("Zum Auetal");
        break;
    }
    case 345678:
    {
        returnValue = F("Zum Aufeld");
        break;
    }
    case 345679:
    {
        returnValue = F("Zum Aufhauen");
        break;
    }
    case 345680:
    {
        returnValue = F("Zum Aufstieg");
        break;
    }
    case 345681:
    {
        returnValue = F("Zum Augraben");
        break;
    }
    case 345682:
    {
        returnValue = F("Zum Auholz");
        break;
    }
    case 345683:
    {
        returnValue = F("Zum Ausbau");
        break;
    }
    case 345684:
    {
        returnValue = F("Zum Ausblick");
        break;
    }
    case 345685:
    {
        returnValue = F("Zum Aussichtsturm");
        break;
    }
    case 345686:
    {
        returnValue = F("Zum Aussiedler");
        break;
    }
    case 345687:
    {
        returnValue = F("Zum Austeresch");
        break;
    }
    case 345688:
    {
        returnValue = F("Zum Autal");
        break;
    }
    case 345689:
    {
        returnValue = F("Zum Auwald");
        break;
    }
    case 345690:
    {
        returnValue = F("Zum Auweg");
        break;
    }
    case 345691:
    {
        returnValue = F("Zum Auwinkel");
        break;
    }
    case 345692:
    {
        returnValue = F("Zum Außendeich");
        break;
    }
    case 345693:
    {
        returnValue = F("Zum Baaksberg");
        break;
    }
    case 345694:
    {
        returnValue = F("Zum Baalewald");
        break;
    }
    case 345695:
    {
        returnValue = F("Zum Baarstein");
        break;
    }
    case 345696:
    {
        returnValue = F("Zum Bach");
        break;
    }
    case 345697:
    {
        returnValue = F("Zum Bache");
        break;
    }
    case 345698:
    {
        returnValue = F("Zum Bachfeld");
        break;
    }
    case 345699:
    {
        returnValue = F("Zum Bachholz");
        break;
    }
    case 345700:
    {
        returnValue = F("Zum Bachlauf");
        break;
    }
    case 345701:
    {
        returnValue = F("Zum Bachstaden");
        break;
    }
    case 345702:
    {
        returnValue = F("Zum Bachsteg");
        break;
    }
    case 345703:
    {
        returnValue = F("Zum Bachtal");
        break;
    }
    case 345704:
    {
        returnValue = F("Zum Backenberg");
        break;
    }
    case 345705:
    {
        returnValue = F("Zum Backenstein");
        break;
    }
    case 345706:
    {
        returnValue = F("Zum Backhaus");
        break;
    }
    case 345707:
    {
        returnValue = F("Zum Backhausberg");
        break;
    }
    case 345708:
    {
        returnValue = F("Zum Backhausfeld");
        break;
    }
    case 345709:
    {
        returnValue = F("Zum Backofen");
        break;
    }
    case 345710:
    {
        returnValue = F("Zum Bad");
        break;
    }
    case 345711:
    {
        returnValue = F("Zum Bad Anna");
        break;
    }
    case 345712:
    {
        returnValue = F("Zum Bad Anna Weg");
        break;
    }
    case 345713:
    {
        returnValue = F("Zum Badanger");
        break;
    }
    case 345714:
    {
        returnValue = F("Zum Bade");
        break;
    }
    case 345715:
    {
        returnValue = F("Zum Badekoth");
        break;
    }
    case 345716:
    {
        returnValue = F("Zum Badesee");
        break;
    }
    case 345717:
    {
        returnValue = F("Zum Badestrand");
        break;
    }
    case 345718:
    {
        returnValue = F("Zum Badetal");
        break;
    }
    case 345719:
    {
        returnValue = F("Zum Badeteich");
        break;
    }
    case 345720:
    {
        returnValue = F("Zum Badeweiher");
        break;
    }
    case 345721:
    {
        returnValue = F("Zum Baerler Busch");
        break;
    }
    case 345722:
    {
        returnValue = F("Zum Baggersee");
        break;
    }
    case 345723:
    {
        returnValue = F("Zum Bahmert");
        break;
    }
    case 345724:
    {
        returnValue = F("Zum Bahncampus");
        break;
    }
    case 345725:
    {
        returnValue = F("Zum Bahndamm");
        break;
    }
    case 345726:
    {
        returnValue = F("Zum Bahnert");
        break;
    }
    case 345727:
    {
        returnValue = F("Zum Bahnhaus");
        break;
    }
    case 345728:
    {
        returnValue = F("Zum Bahnhof");
        break;
    }
    case 345729:
    {
        returnValue = F("Zum Bahnhof Frellstedt");
        break;
    }
    case 345730:
    {
        returnValue = F("Zum Bahnhof Pirschheide");
        break;
    }
    case 345731:
    {
        returnValue = F("Zum Bahnkolk");
        break;
    }
    case 345732:
    {
        returnValue = F("Zum Bahnsteig");
        break;
    }
    case 345733:
    {
        returnValue = F("Zum Bahnwärterhaus");
        break;
    }
    case 345734:
    {
        returnValue = F("Zum Bahnübergang");
        break;
    }
    case 345735:
    {
        returnValue = F("Zum Bakenbusch");
        break;
    }
    case 345736:
    {
        returnValue = F("Zum Bakenrode");
        break;
    }
    case 345737:
    {
        returnValue = F("Zum Balger Bruch");
        break;
    }
    case 345738:
    {
        returnValue = F("Zum Bandhaus");
        break;
    }
    case 345739:
    {
        returnValue = F("Zum Bannenberg");
        break;
    }
    case 345740:
    {
        returnValue = F("Zum Bansmeer");
        break;
    }
    case 345741:
    {
        returnValue = F("Zum Barge");
        break;
    }
    case 345742:
    {
        returnValue = F("Zum Bargefeld");
        break;
    }
    case 345743:
    {
        returnValue = F("Zum Barnahe");
        break;
    }
    case 345744:
    {
        returnValue = F("Zum Barstein");
        break;
    }
    case 345745:
    {
        returnValue = F("Zum Bartelskamp");
        break;
    }
    case 345746:
    {
        returnValue = F("Zum Bartenberg");
        break;
    }
    case 345747:
    {
        returnValue = F("Zum Bassin");
        break;
    }
    case 345748:
    {
        returnValue = F("Zum Bastgraben");
        break;
    }
    case 345749:
    {
        returnValue = F("Zum Bauckmert");
        break;
    }
    case 345750:
    {
        returnValue = F("Zum Bauerberg");
        break;
    }
    case 345751:
    {
        returnValue = F("Zum Bauerbruch");
        break;
    }
    case 345752:
    {
        returnValue = F("Zum Bauerhagen");
        break;
    }
    case 345753:
    {
        returnValue = F("Zum Bauern");
        break;
    }
    case 345754:
    {
        returnValue = F("Zum Bauernberg");
        break;
    }
    case 345755:
    {
        returnValue = F("Zum Bauernhof");
        break;
    }
    case 345756:
    {
        returnValue = F("Zum Bauernholz");
        break;
    }
    case 345757:
    {
        returnValue = F("Zum Bauernscheid");
        break;
    }
    case 345758:
    {
        returnValue = F("Zum Bauernteich");
        break;
    }
    case 345759:
    {
        returnValue = F("Zum Bauernwald");
        break;
    }
    case 345760:
    {
        returnValue = F("Zum Bauhof");
        break;
    }
    case 345761:
    {
        returnValue = F("Zum Bauholz");
        break;
    }
    case 345762:
    {
        returnValue = F("Zum Baumberg");
        break;
    }
    case 345763:
    {
        returnValue = F("Zum Baumert");
        break;
    }
    case 345764:
    {
        returnValue = F("Zum Baumgarten");
        break;
    }
    case 345765:
    {
        returnValue = F("Zum Bauschhof");
        break;
    }
    case 345766:
    {
        returnValue = F("Zum Bauverein");
        break;
    }
    case 345767:
    {
        returnValue = F("Zum Baybachtal");
        break;
    }
    case 345768:
    {
        returnValue = F("Zum Bayenhof");
        break;
    }
    case 345769:
    {
        returnValue = F("Zum Bayerischen Brückl");
        break;
    }
    case 345770:
    {
        returnValue = F("Zum Baßmerhoop");
        break;
    }
    case 345771:
    {
        returnValue = F("Zum Bechtelsberg");
        break;
    }
    case 345772:
    {
        returnValue = F("Zum Beckenkeller");
        break;
    }
    case 345773:
    {
        returnValue = F("Zum Beekefeld");
        break;
    }
    case 345774:
    {
        returnValue = F("Zum Beekmoor");
        break;
    }
    case 345775:
    {
        returnValue = F("Zum Beeksfeld");
        break;
    }
    case 345776:
    {
        returnValue = F("Zum Beel");
        break;
    }
    case 345777:
    {
        returnValue = F("Zum Beelande");
        break;
    }
    case 345778:
    {
        returnValue = F("Zum Beerberg");
        break;
    }
    case 345779:
    {
        returnValue = F("Zum Beerenboom");
        break;
    }
    case 345780:
    {
        returnValue = F("Zum Beerenscheid");
        break;
    }
    case 345781:
    {
        returnValue = F("Zum Beestental");
        break;
    }
    case 345782:
    {
        returnValue = F("Zum Beetfeld");
        break;
    }
    case 345783:
    {
        returnValue = F("Zum Beetz");
        break;
    }
    case 345784:
    {
        returnValue = F("Zum Beginnental");
        break;
    }
    case 345785:
    {
        returnValue = F("Zum Behlingsee");
        break;
    }
    case 345786:
    {
        returnValue = F("Zum Beiengarten");
        break;
    }
    case 345787:
    {
        returnValue = F("Zum Beilstein");
        break;
    }
    case 345788:
    {
        returnValue = F("Zum Beimoor");
        break;
    }
    case 345789:
    {
        returnValue = F("Zum Belgenbach");
        break;
    }
    case 345790:
    {
        returnValue = F("Zum Bellerhammer");
        break;
    }
    case 345791:
    {
        returnValue = F("Zum Bellinger Bach");
        break;
    }
    case 345792:
    {
        returnValue = F("Zum Belvedere");
        break;
    }
    case 345793:
    {
        returnValue = F("Zum Bendchen");
        break;
    }
    case 345794:
    {
        returnValue = F("Zum Bendt");
        break;
    }
    case 345795:
    {
        returnValue = F("Zum Benningloh");
        break;
    }
    case 345796:
    {
        returnValue = F("Zum Bent");
        break;
    }
    case 345797:
    {
        returnValue = F("Zum Berberg");
        break;
    }
    case 345798:
    {
        returnValue = F("Zum Berg");
        break;
    }
    case 345799:
    {
        returnValue = F("Zum Bergacker");
        break;
    }
    case 345800:
    {
        returnValue = F("Zum Bergblick");
        break;
    }
    case 345801:
    {
        returnValue = F("Zum Berge");
        break;
    }
    case 345802:
    {
        returnValue = F("Zum Bergelchen");
        break;
    }
    case 345803:
    {
        returnValue = F("Zum Berger");
        break;
    }
    case 345804:
    {
        returnValue = F("Zum Berger Hammer");
        break;
    }
    case 345805:
    {
        returnValue = F("Zum Berger See");
        break;
    }
    case 345806:
    {
        returnValue = F("Zum Berger Weiher");
        break;
    }
    case 345807:
    {
        returnValue = F("Zum Bergerhof");
        break;
    }
    case 345808:
    {
        returnValue = F("Zum Bergerholz");
        break;
    }
    case 345809:
    {
        returnValue = F("Zum Bergfeld");
        break;
    }
    case 345810:
    {
        returnValue = F("Zum Bergfried");
        break;
    }
    case 345811:
    {
        returnValue = F("Zum Berggarten");
        break;
    }
    case 345812:
    {
        returnValue = F("Zum Bergham");
        break;
    }
    case 345813:
    {
        returnValue = F("Zum Berghaus");
        break;
    }
    case 345814:
    {
        returnValue = F("Zum Berghof");
        break;
    }
    case 345815:
    {
        returnValue = F("Zum Berghop");
        break;
    }
    case 345816:
    {
        returnValue = F("Zum Bergkamp");
        break;
    }
    case 345817:
    {
        returnValue = F("Zum Bergkloster");
        break;
    }
    case 345818:
    {
        returnValue = F("Zum Bergkreuz");
        break;
    }
    case 345819:
    {
        returnValue = F("Zum Bergle");
        break;
    }
    case 345820:
    {
        returnValue = F("Zum Bergmoor");
        break;
    }
    case 345821:
    {
        returnValue = F("Zum Bergmosis");
        break;
    }
    case 345822:
    {
        returnValue = F("Zum Bergwerk");
        break;
    }
    case 345823:
    {
        returnValue = F("Zum Bergwerkswald");
        break;
    }
    case 345824:
    {
        returnValue = F("Zum Bergwinkel");
        break;
    }
    case 345825:
    {
        returnValue = F("Zum Berkelsmoor");
        break;
    }
    case 345826:
    {
        returnValue = F("Zum Berkenstück");
        break;
    }
    case 345827:
    {
        returnValue = F("Zum Berlepsch");
        break;
    }
    case 345828:
    {
        returnValue = F("Zum Bernsbühl");
        break;
    }
    case 345829:
    {
        returnValue = F("Zum Bernstein");
        break;
    }
    case 345830:
    {
        returnValue = F("Zum Berzberg");
        break;
    }
    case 345831:
    {
        returnValue = F("Zum Besenberg");
        break;
    }
    case 345832:
    {
        returnValue = F("Zum Bessenhof");
        break;
    }
    case 345833:
    {
        returnValue = F("Zum Bettenberg");
        break;
    }
    case 345834:
    {
        returnValue = F("Zum Bettental");
        break;
    }
    case 345835:
    {
        returnValue = F("Zum Betzenberg");
        break;
    }
    case 345836:
    {
        returnValue = F("Zum Beuel");
        break;
    }
    case 345837:
    {
        returnValue = F("Zum Beuert");
        break;
    }
    case 345838:
    {
        returnValue = F("Zum Beul");
        break;
    }
    case 345839:
    {
        returnValue = F("Zum Beulsgarten");
        break;
    }
    case 345840:
    {
        returnValue = F("Zum Beulstein");
        break;
    }
    case 345841:
    {
        returnValue = F("Zum Beverdiek");
        break;
    }
    case 345842:
    {
        returnValue = F("Zum Beverloh");
        break;
    }
    case 345843:
    {
        returnValue = F("Zum Beyerswald");
        break;
    }
    case 345844:
    {
        returnValue = F("Zum Beyn");
        break;
    }
    case 345845:
    {
        returnValue = F("Zum Bibelstück");
        break;
    }
    case 345846:
    {
        returnValue = F("Zum Bibersberg");
        break;
    }
    case 345847:
    {
        returnValue = F("Zum Bichelberg");
        break;
    }
    case 345848:
    {
        returnValue = F("Zum Bichelstock");
        break;
    }
    case 345849:
    {
        returnValue = F("Zum Bicketal");
        break;
    }
    case 345850:
    {
        returnValue = F("Zum Bickplecken");
        break;
    }
    case 345851:
    {
        returnValue = F("Zum Bieberbach");
        break;
    }
    case 345852:
    {
        returnValue = F("Zum Bieberturm");
        break;
    }
    case 345853:
    {
        returnValue = F("Zum Biedenborn");
        break;
    }
    case 345854:
    {
        returnValue = F("Zum Biedenfeld");
        break;
    }
    case 345855:
    {
        returnValue = F("Zum Biegeberg");
        break;
    }
    case 345856:
    {
        returnValue = F("Zum Bienenbusch");
        break;
    }
    case 345857:
    {
        returnValue = F("Zum Bienenecken");
        break;
    }
    case 345858:
    {
        returnValue = F("Zum Bienengarten");
        break;
    }
    case 345859:
    {
        returnValue = F("Zum Bienenhain");
        break;
    }
    case 345860:
    {
        returnValue = F("Zum Bienenhaus");
        break;
    }
    case 345861:
    {
        returnValue = F("Zum Bienenheim");
        break;
    }
    case 345862:
    {
        returnValue = F("Zum Bienenhof");
        break;
    }
    case 345863:
    {
        returnValue = F("Zum Bienenpesch");
        break;
    }
    case 345864:
    {
        returnValue = F("Zum Bierberg");
        break;
    }
    case 345865:
    {
        returnValue = F("Zum Biergraben");
        break;
    }
    case 345866:
    {
        returnValue = F("Zum Bierholz");
        break;
    }
    case 345867:
    {
        returnValue = F("Zum Bierkeller");
        break;
    }
    case 345868:
    {
        returnValue = F("Zum Bierloch");
        break;
    }
    case 345869:
    {
        returnValue = F("Zum Bierweg");
        break;
    }
    case 345870:
    {
        returnValue = F("Zum Biesterfeld");
        break;
    }
    case 345871:
    {
        returnValue = F("Zum Biggersberg");
        break;
    }
    case 345872:
    {
        returnValue = F("Zum Bildacker");
        break;
    }
    case 345873:
    {
        returnValue = F("Zum Bildchen");
        break;
    }
    case 345874:
    {
        returnValue = F("Zum Bildstein");
        break;
    }
    case 345875:
    {
        returnValue = F("Zum Bildstock");
        break;
    }
    case 345876:
    {
        returnValue = F("Zum Bildstöckle");
        break;
    }
    case 345877:
    {
        returnValue = F("Zum Billing");
        break;
    }
    case 345878:
    {
        returnValue = F("Zum Billsteinkopf");
        break;
    }
    case 345879:
    {
        returnValue = F("Zum Bilsbek");
        break;
    }
    case 345880:
    {
        returnValue = F("Zum Bilsenborn");
        break;
    }
    case 345881:
    {
        returnValue = F("Zum Bilsknop");
        break;
    }
    case 345882:
    {
        returnValue = F("Zum Bilstein");
        break;
    }
    case 345883:
    {
        returnValue = F("Zum Bimbach");
        break;
    }
    case 345884:
    {
        returnValue = F("Zum Bind");
        break;
    }
    case 345885:
    {
        returnValue = F("Zum Binnenfeld");
        break;
    }
    case 345886:
    {
        returnValue = F("Zum Biotop");
        break;
    }
    case 345887:
    {
        returnValue = F("Zum Birgel");
        break;
    }
    case 345888:
    {
        returnValue = F("Zum Birgeler Kreuz");
        break;
    }
    case 345889:
    {
        returnValue = F("Zum Birgl");
        break;
    }
    case 345890:
    {
        returnValue = F("Zum Birkenbach");
        break;
    }
    case 345891:
    {
        returnValue = F("Zum Birkenbruch");
        break;
    }
    case 345892:
    {
        returnValue = F("Zum Birkenbusch");
        break;
    }
    case 345893:
    {
        returnValue = F("Zum Birkenfeld");
        break;
    }
    case 345894:
    {
        returnValue = F("Zum Birkengraben");
        break;
    }
    case 345895:
    {
        returnValue = F("Zum Birkengrund");
        break;
    }
    case 345896:
    {
        returnValue = F("Zum Birkenhain");
        break;
    }
    case 345897:
    {
        returnValue = F("Zum Birkenhof");
        break;
    }
    case 345898:
    {
        returnValue = F("Zum Birkenhorst");
        break;
    }
    case 345899:
    {
        returnValue = F("Zum Birkenhübel");
        break;
    }
    case 345900:
    {
        returnValue = F("Zum Birkenkopf");
        break;
    }
    case 345901:
    {
        returnValue = F("Zum Birkenkreuz");
        break;
    }
    case 345902:
    {
        returnValue = F("Zum Birkenköpfchen");
        break;
    }
    case 345903:
    {
        returnValue = F("Zum Birkenpfad");
        break;
    }
    case 345904:
    {
        returnValue = F("Zum Birkenschlag");
        break;
    }
    case 345905:
    {
        returnValue = F("Zum Birkenwald");
        break;
    }
    case 345906:
    {
        returnValue = F("Zum Birkenweg");
        break;
    }
    case 345907:
    {
        returnValue = F("Zum Birkenweiher");
        break;
    }
    case 345908:
    {
        returnValue = F("Zum Birkenwäldchen");
        break;
    }
    case 345909:
    {
        returnValue = F("Zum Birket");
        break;
    }
    case 345910:
    {
        returnValue = F("Zum Birkfeld");
        break;
    }
    case 345911:
    {
        returnValue = F("Zum Birkholz");
        break;
    }
    case 345912:
    {
        returnValue = F("Zum Birkig");
        break;
    }
    case 345913:
    {
        returnValue = F("Zum Birkle");
        break;
    }
    case 345914:
    {
        returnValue = F("Zum Birnbaum");
        break;
    }
    case 345915:
    {
        returnValue = F("Zum Birntal");
        break;
    }
    case 345916:
    {
        returnValue = F("Zum Bisberge");
        break;
    }
    case 345917:
    {
        returnValue = F("Zum Bischling");
        break;
    }
    case 345918:
    {
        returnValue = F("Zum Bismarckturm");
        break;
    }
    case 345919:
    {
        returnValue = F("Zum Bittebach");
        break;
    }
    case 345920:
    {
        returnValue = F("Zum Bitzchen");
        break;
    }
    case 345921:
    {
        returnValue = F("Zum Bitzegarten");
        break;
    }
    case 345922:
    {
        returnValue = F("Zum Bitzen");
        break;
    }
    case 345923:
    {
        returnValue = F("Zum Bitzenberg");
        break;
    }
    case 345924:
    {
        returnValue = F("Zum Blank");
        break;
    }
    case 345925:
    {
        returnValue = F("Zum Blanken");
        break;
    }
    case 345926:
    {
        returnValue = F("Zum Blasius");
        break;
    }
    case 345927:
    {
        returnValue = F("Zum Blau");
        break;
    }
    case 345928:
    {
        returnValue = F("Zum Blauen Kamp");
        break;
    }
    case 345929:
    {
        returnValue = F("Zum Blauen See");
        break;
    }
    case 345930:
    {
        returnValue = F("Zum Blauen Stein");
        break;
    }
    case 345931:
    {
        returnValue = F("Zum Blauen Tempel");
        break;
    }
    case 345932:
    {
        returnValue = F("Zum Blauen Wiener");
        break;
    }
    case 345933:
    {
        returnValue = F("Zum Blauenblick");
        break;
    }
    case 345934:
    {
        returnValue = F("Zum Blauwald");
        break;
    }
    case 345935:
    {
        returnValue = F("Zum Blech");
        break;
    }
    case 345936:
    {
        returnValue = F("Zum Blechen");
        break;
    }
    case 345937:
    {
        returnValue = F("Zum Bleiberg");
        break;
    }
    case 345938:
    {
        returnValue = F("Zum Bleichbrunnen");
        break;
    }
    case 345939:
    {
        returnValue = F("Zum Bleichegarten");
        break;
    }
    case 345940:
    {
        returnValue = F("Zum Bleichrasen");
        break;
    }
    case 345941:
    {
        returnValue = F("Zum Bleichteich");
        break;
    }
    case 345942:
    {
        returnValue = F("Zum Bleichwall");
        break;
    }
    case 345943:
    {
        returnValue = F("Zum Bleichweiher");
        break;
    }
    case 345944:
    {
        returnValue = F("Zum Blick");
        break;
    }
    case 345945:
    {
        returnValue = F("Zum Blickpunkt");
        break;
    }
    case 345946:
    {
        returnValue = F("Zum Blinkfeuer");
        break;
    }
    case 345947:
    {
        returnValue = F("Zum Block");
        break;
    }
    case 345948:
    {
        returnValue = F("Zum Blockbach");
        break;
    }
    case 345949:
    {
        returnValue = F("Zum Blockenloh");
        break;
    }
    case 345950:
    {
        returnValue = F("Zum Blocksberg");
        break;
    }
    case 345951:
    {
        returnValue = F("Zum Blockshornberg");
        break;
    }
    case 345952:
    {
        returnValue = F("Zum Blomenhof");
        break;
    }
    case 345953:
    {
        returnValue = F("Zum Blumenfeld");
        break;
    }
    case 345954:
    {
        returnValue = F("Zum Blumental");
        break;
    }
    case 345955:
    {
        returnValue = F("Zum Blumentobel");
        break;
    }
    case 345956:
    {
        returnValue = F("Zum Blumenweg");
        break;
    }
    case 345957:
    {
        returnValue = F("Zum Bläuling");
        break;
    }
    case 345958:
    {
        returnValue = F("Zum Blöcken");
        break;
    }
    case 345959:
    {
        returnValue = F("Zum Blümling");
        break;
    }
    case 345960:
    {
        returnValue = F("Zum Bobritzschtal");
        break;
    }
    case 345961:
    {
        returnValue = F("Zum Bock");
        break;
    }
    case 345962:
    {
        returnValue = F("Zum Bockekamp");
        break;
    }
    case 345963:
    {
        returnValue = F("Zum Bockhoop");
        break;
    }
    case 345964:
    {
        returnValue = F("Zum Bocksberg");
        break;
    }
    case 345965:
    {
        returnValue = F("Zum Bocksbergwerk");
        break;
    }
    case 345966:
    {
        returnValue = F("Zum Bockstanz");
        break;
    }
    case 345967:
    {
        returnValue = F("Zum Bockstein");
        break;
    }
    case 345968:
    {
        returnValue = F("Zum Bockwinkel");
        break;
    }
    case 345969:
    {
        returnValue = F("Zum Boddenblick");
        break;
    }
    case 345970:
    {
        returnValue = F("Zum Boden");
        break;
    }
    case 345971:
    {
        returnValue = F("Zum Bodenfeld");
        break;
    }
    case 345972:
    {
        returnValue = F("Zum Bodenhölzle");
        break;
    }
    case 345973:
    {
        returnValue = F("Zum Bodenkamp");
        break;
    }
    case 345974:
    {
        returnValue = F("Zum Bodmannstein");
        break;
    }
    case 345975:
    {
        returnValue = F("Zum Bogen");
        break;
    }
    case 345976:
    {
        returnValue = F("Zum Bogenbach");
        break;
    }
    case 345977:
    {
        returnValue = F("Zum Bohnenbach");
        break;
    }
    case 345978:
    {
        returnValue = F("Zum Bohnengarten");
        break;
    }
    case 345979:
    {
        returnValue = F("Zum Bohnenkamp");
        break;
    }
    case 345980:
    {
        returnValue = F("Zum Bohnenkampe");
        break;
    }
    case 345981:
    {
        returnValue = F("Zum Bohnenwerder");
        break;
    }
    case 345982:
    {
        returnValue = F("Zum Bohrerhof");
        break;
    }
    case 345983:
    {
        returnValue = F("Zum Bohrfeld");
        break;
    }
    case 345984:
    {
        returnValue = F("Zum Bohrturm");
        break;
    }
    case 345985:
    {
        returnValue = F("Zum Bollert");
        break;
    }
    case 345986:
    {
        returnValue = F("Zum Bollkasten");
        break;
    }
    case 345987:
    {
        returnValue = F("Zum Bollsee");
        break;
    }
    case 345988:
    {
        returnValue = F("Zum Bollwerk");
        break;
    }
    case 345989:
    {
        returnValue = F("Zum Bolz");
        break;
    }
    case 345990:
    {
        returnValue = F("Zum Bolzenbach");
        break;
    }
    case 345991:
    {
        returnValue = F("Zum Bolzplatz");
        break;
    }
    case 345992:
    {
        returnValue = F("Zum Bongard");
        break;
    }
    case 345993:
    {
        returnValue = F("Zum Bongert");
        break;
    }
    case 345994:
    {
        returnValue = F("Zum Bonifatiusborn");
        break;
    }
    case 345995:
    {
        returnValue = F("Zum Bonland");
        break;
    }
    case 345996:
    {
        returnValue = F("Zum Bonnenfeld");
        break;
    }
    case 345997:
    {
        returnValue = F("Zum Bonnensiefen");
        break;
    }
    case 345998:
    {
        returnValue = F("Zum Bootshafen");
        break;
    }
    case 345999:
    {
        returnValue = F("Zum Bootssteg");
        break;
    }
    case 346000:
    {
        returnValue = F("Zum Borberg");
        break;
    }
    case 346001:
    {
        returnValue = F("Zum Borgfeld");
        break;
    }
    case 346002:
    {
        returnValue = F("Zum Borgwallsee");
        break;
    }
    case 346003:
    {
        returnValue = F("Zum Borken");
        break;
    }
    case 346004:
    {
        returnValue = F("Zum Born");
        break;
    }
    case 346005:
    {
        returnValue = F("Zum Bornacker");
        break;
    }
    case 346006:
    {
        returnValue = F("Zum Bornbach");
        break;
    }
    case 346007:
    {
        returnValue = F("Zum Bornberg");
        break;
    }
    case 346008:
    {
        returnValue = F("Zum Bornbrink");
        break;
    }
    case 346009:
    {
        returnValue = F("Zum Borndal");
        break;
    }
    case 346010:
    {
        returnValue = F("Zum Borne");
        break;
    }
    case 346011:
    {
        returnValue = F("Zum Bornekamp");
        break;
    }
    case 346012:
    {
        returnValue = F("Zum Bornenrain");
        break;
    }
    case 346013:
    {
        returnValue = F("Zum Bornfeld");
        break;
    }
    case 346014:
    {
        returnValue = F("Zum Bornflur");
        break;
    }
    case 346015:
    {
        returnValue = F("Zum Borngraben");
        break;
    }
    case 346016:
    {
        returnValue = F("Zum Bornhof");
        break;
    }
    case 346017:
    {
        returnValue = F("Zum Bornholz");
        break;
    }
    case 346018:
    {
        returnValue = F("Zum Bornshof");
        break;
    }
    case 346019:
    {
        returnValue = F("Zum Bornstück");
        break;
    }
    case 346020:
    {
        returnValue = F("Zum Bortnik");
        break;
    }
    case 346021:
    {
        returnValue = F("Zum Boschhof");
        break;
    }
    case 346022:
    {
        returnValue = F("Zum Boskoop");
        break;
    }
    case 346023:
    {
        returnValue = F("Zum Bossel");
        break;
    }
    case 346024:
    {
        returnValue = F("Zum Bosselbach");
        break;
    }
    case 346025:
    {
        returnValue = F("Zum Botterbusch");
        break;
    }
    case 346026:
    {
        returnValue = F("Zum Boul");
        break;
    }
    case 346027:
    {
        returnValue = F("Zum Boxberg");
        break;
    }
    case 346028:
    {
        returnValue = F("Zum Boxhoop");
        break;
    }
    case 346029:
    {
        returnValue = F("Zum Boxpfad");
        break;
    }
    case 346030:
    {
        returnValue = F("Zum Boyendeich");
        break;
    }
    case 346031:
    {
        returnValue = F("Zum Brachsen");
        break;
    }
    case 346032:
    {
        returnValue = F("Zum Brack");
        break;
    }
    case 346033:
    {
        returnValue = F("Zum Bradenholz");
        break;
    }
    case 346034:
    {
        returnValue = F("Zum Braken");
        break;
    }
    case 346035:
    {
        returnValue = F("Zum Braklandsweg");
        break;
    }
    case 346036:
    {
        returnValue = F("Zum Bramschebach");
        break;
    }
    case 346037:
    {
        returnValue = F("Zum Brand");
        break;
    }
    case 346038:
    {
        returnValue = F("Zum Brandbach");
        break;
    }
    case 346039:
    {
        returnValue = F("Zum Brandberg");
        break;
    }
    case 346040:
    {
        returnValue = F("Zum Brandbusch");
        break;
    }
    case 346041:
    {
        returnValue = F("Zum Brandbühl");
        break;
    }
    case 346042:
    {
        returnValue = F("Zum Brande");
        break;
    }
    case 346043:
    {
        returnValue = F("Zum Branden");
        break;
    }
    case 346044:
    {
        returnValue = F("Zum Brandenberg");
        break;
    }
    case 346045:
    {
        returnValue = F("Zum Brander Kamp");
        break;
    }
    case 346046:
    {
        returnValue = F("Zum Brandgehäge");
        break;
    }
    case 346047:
    {
        returnValue = F("Zum Brandhof");
        break;
    }
    case 346048:
    {
        returnValue = F("Zum Brandholz");
        break;
    }
    case 346049:
    {
        returnValue = F("Zum Brandler Bühl");
        break;
    }
    case 346050:
    {
        returnValue = F("Zum Brandscheider Hof");
        break;
    }
    case 346051:
    {
        returnValue = F("Zum Brandteich");
        break;
    }
    case 346052:
    {
        returnValue = F("Zum Brandwald");
        break;
    }
    case 346053:
    {
        returnValue = F("Zum Brandweiher");
        break;
    }
    case 346054:
    {
        returnValue = F("Zum Braubachtal");
        break;
    }
    case 346055:
    {
        returnValue = F("Zum Brauberg");
        break;
    }
    case 346056:
    {
        returnValue = F("Zum Brauhaus");
        break;
    }
    case 346057:
    {
        returnValue = F("Zum Brauk");
        break;
    }
    case 346058:
    {
        returnValue = F("Zum Braukbach");
        break;
    }
    case 346059:
    {
        returnValue = F("Zum Brauke");
        break;
    }
    case 346060:
    {
        returnValue = F("Zum Braunauer Berg");
        break;
    }
    case 346061:
    {
        returnValue = F("Zum Brauneberg");
        break;
    }
    case 346062:
    {
        returnValue = F("Zum Braunsberg");
        break;
    }
    case 346063:
    {
        returnValue = F("Zum Braunsfeld");
        break;
    }
    case 346064:
    {
        returnValue = F("Zum Breckenhagen");
        break;
    }
    case 346065:
    {
        returnValue = F("Zum Bredbach");
        break;
    }
    case 346066:
    {
        returnValue = F("Zum Breek");
        break;
    }
    case 346067:
    {
        returnValue = F("Zum Breen");
        break;
    }
    case 346068:
    {
        returnValue = F("Zum Breidel");
        break;
    }
    case 346069:
    {
        returnValue = F("Zum Breikedahl");
        break;
    }
    case 346070:
    {
        returnValue = F("Zum Breinhof");
        break;
    }
    case 346071:
    {
        returnValue = F("Zum Breitacker");
        break;
    }
    case 346072:
    {
        returnValue = F("Zum Breitbusch");
        break;
    }
    case 346073:
    {
        returnValue = F("Zum Breiten Busch");
        break;
    }
    case 346074:
    {
        returnValue = F("Zum Breiten Tal");
        break;
    }
    case 346075:
    {
        returnValue = F("Zum Breiten Weg");
        break;
    }
    case 346076:
    {
        returnValue = F("Zum Breitenacker");
        break;
    }
    case 346077:
    {
        returnValue = F("Zum Breitenbach");
        break;
    }
    case 346078:
    {
        returnValue = F("Zum Breitenberg");
        break;
    }
    case 346079:
    {
        returnValue = F("Zum Breitenborn");
        break;
    }
    case 346080:
    {
        returnValue = F("Zum Breitenstrohe");
        break;
    }
    case 346081:
    {
        returnValue = F("Zum Breitfeld");
        break;
    }
    case 346082:
    {
        returnValue = F("Zum Breitfilz");
        break;
    }
    case 346083:
    {
        returnValue = F("Zum Breitling");
        break;
    }
    case 346084:
    {
        returnValue = F("Zum Breitmaar");
        break;
    }
    case 346085:
    {
        returnValue = F("Zum Bremmenfeld");
        break;
    }
    case 346086:
    {
        returnValue = F("Zum Brennthaus");
        break;
    }
    case 346087:
    {
        returnValue = F("Zum Brezelenberg");
        break;
    }
    case 346088:
    {
        returnValue = F("Zum Briesen");
        break;
    }
    case 346089:
    {
        returnValue = F("Zum Brink");
        break;
    }
    case 346090:
    {
        returnValue = F("Zum Brinkesnocken");
        break;
    }
    case 346091:
    {
        returnValue = F("Zum Brinkfeld");
        break;
    }
    case 346092:
    {
        returnValue = F("Zum Brinkhof");
        break;
    }
    case 346093:
    {
        returnValue = F("Zum Brinkmoor");
        break;
    }
    case 346094:
    {
        returnValue = F("Zum Brockenblick");
        break;
    }
    case 346095:
    {
        returnValue = F("Zum Brockhoff");
        break;
    }
    case 346096:
    {
        returnValue = F("Zum Brodbüsch");
        break;
    }
    case 346097:
    {
        returnValue = F("Zum Brodtberg");
        break;
    }
    case 346098:
    {
        returnValue = F("Zum Brokhagen Stau");
        break;
    }
    case 346099:
    {
        returnValue = F("Zum Brombeeracker");
        break;
    }
    case 346100:
    {
        returnValue = F("Zum Brombeerhaag");
        break;
    }
    case 346101:
    {
        returnValue = F("Zum Brommenhof");
        break;
    }
    case 346102:
    {
        returnValue = F("Zum Brook");
        break;
    }
    case 346103:
    {
        returnValue = F("Zum Brookland");
        break;
    }
    case 346104:
    {
        returnValue = F("Zum Brotkübel");
        break;
    }
    case 346105:
    {
        returnValue = F("Zum Bruch");
        break;
    }
    case 346106:
    {
        returnValue = F("Zum Bruchborn");
        break;
    }
    case 346107:
    {
        returnValue = F("Zum Bruchdeich");
        break;
    }
    case 346108:
    {
        returnValue = F("Zum Bruche");
        break;
    }
    case 346109:
    {
        returnValue = F("Zum Bruchfeld");
        break;
    }
    case 346110:
    {
        returnValue = F("Zum Bruchgraben");
        break;
    }
    case 346111:
    {
        returnValue = F("Zum Bruchhahn");
        break;
    }
    case 346112:
    {
        returnValue = F("Zum Bruchkamp");
        break;
    }
    case 346113:
    {
        returnValue = F("Zum Bruchtenberg");
        break;
    }
    case 346114:
    {
        returnValue = F("Zum Bruderhof");
        break;
    }
    case 346115:
    {
        returnValue = F("Zum Brudersbrunn");
        break;
    }
    case 346116:
    {
        returnValue = F("Zum Brummelhoop");
        break;
    }
    case 346117:
    {
        returnValue = F("Zum Brummershop");
        break;
    }
    case 346118:
    {
        returnValue = F("Zum Brummersiel");
        break;
    }
    case 346119:
    {
        returnValue = F("Zum Brunnbach");
        break;
    }
    case 346120:
    {
        returnValue = F("Zum Brunnen");
        break;
    }
    case 346121:
    {
        returnValue = F("Zum Brunnenbiegel");
        break;
    }
    case 346122:
    {
        returnValue = F("Zum Brunnenhof");
        break;
    }
    case 346123:
    {
        returnValue = F("Zum Brunnenplatz");
        break;
    }
    case 346124:
    {
        returnValue = F("Zum Brunnentobel");
        break;
    }
    case 346125:
    {
        returnValue = F("Zum Brunnholz");
        break;
    }
    case 346126:
    {
        returnValue = F("Zum Brunsloh");
        break;
    }
    case 346127:
    {
        returnValue = F("Zum Brunsteich");
        break;
    }
    case 346128:
    {
        returnValue = F("Zum Brunwinkel");
        break;
    }
    case 346129:
    {
        returnValue = F("Zum Brägeler Moor");
        break;
    }
    case 346130:
    {
        returnValue = F("Zum Bräuhaus");
        break;
    }
    case 346131:
    {
        returnValue = F("Zum Brögstreek");
        break;
    }
    case 346132:
    {
        returnValue = F("Zum Bröhl");
        break;
    }
    case 346133:
    {
        returnValue = F("Zum Bröhn");
        break;
    }
    case 346134:
    {
        returnValue = F("Zum Brökeland");
        break;
    }
    case 346135:
    {
        returnValue = F("Zum Brökerbach");
        break;
    }
    case 346136:
    {
        returnValue = F("Zum Brölbach");
        break;
    }
    case 346137:
    {
        returnValue = F("Zum Brüchelchen");
        break;
    }
    case 346138:
    {
        returnValue = F("Zum Brückchen");
        break;
    }
    case 346139:
    {
        returnValue = F("Zum Brückebach");
        break;
    }
    case 346140:
    {
        returnValue = F("Zum Brückelchen");
        break;
    }
    case 346141:
    {
        returnValue = F("Zum Brückenberg");
        break;
    }
    case 346142:
    {
        returnValue = F("Zum Brückenfeld");
        break;
    }
    case 346143:
    {
        returnValue = F("Zum Brückengarten");
        break;
    }
    case 346144:
    {
        returnValue = F("Zum Brückenhof");
        break;
    }
    case 346145:
    {
        returnValue = F("Zum Brückerl");
        break;
    }
    case 346146:
    {
        returnValue = F("Zum Brückle");
        break;
    }
    case 346147:
    {
        returnValue = F("Zum Brühl");
        break;
    }
    case 346148:
    {
        returnValue = F("Zum Brühlsgarten");
        break;
    }
    case 346149:
    {
        returnValue = F("Zum Brüllschlag");
        break;
    }
    case 346150:
    {
        returnValue = F("Zum Brümmenberg");
        break;
    }
    case 346151:
    {
        returnValue = F("Zum Brünnchen");
        break;
    }
    case 346152:
    {
        returnValue = F("Zum Brünneken");
        break;
    }
    case 346153:
    {
        returnValue = F("Zum Brünnerl");
        break;
    }
    case 346154:
    {
        returnValue = F("Zum Brünnle");
        break;
    }
    case 346155:
    {
        returnValue = F("Zum Bubenkreuz");
        break;
    }
    case 346156:
    {
        returnValue = F("Zum Buchberg");
        break;
    }
    case 346157:
    {
        returnValue = F("Zum Buchborn");
        break;
    }
    case 346158:
    {
        returnValue = F("Zum Buchenbach");
        break;
    }
    case 346159:
    {
        returnValue = F("Zum Buchenberg");
        break;
    }
    case 346160:
    {
        returnValue = F("Zum Buchengarten");
        break;
    }
    case 346161:
    {
        returnValue = F("Zum Buchengrund");
        break;
    }
    case 346162:
    {
        returnValue = F("Zum Buchenhain");
        break;
    }
    case 346163:
    {
        returnValue = F("Zum Buchenholz");
        break;
    }
    case 346164:
    {
        returnValue = F("Zum Buchenkopf");
        break;
    }
    case 346165:
    {
        returnValue = F("Zum Buchenwald");
        break;
    }
    case 346166:
    {
        returnValue = F("Zum Buchgraben");
        break;
    }
    case 346167:
    {
        returnValue = F("Zum Buchgrund");
        break;
    }
    case 346168:
    {
        returnValue = F("Zum Buchhagen");
        break;
    }
    case 346169:
    {
        returnValue = F("Zum Buchhof");
        break;
    }
    case 346170:
    {
        returnValue = F("Zum Buchholz");
        break;
    }
    case 346171:
    {
        returnValue = F("Zum Buchhorst");
        break;
    }
    case 346172:
    {
        returnValue = F("Zum Buchrain");
        break;
    }
    case 346173:
    {
        returnValue = F("Zum Buchstein");
        break;
    }
    case 346174:
    {
        returnValue = F("Zum Buchwald");
        break;
    }
    case 346175:
    {
        returnValue = F("Zum Buchwaldskopf");
        break;
    }
    case 346176:
    {
        returnValue = F("Zum Buchwedel");
        break;
    }
    case 346177:
    {
        returnValue = F("Zum Buck");
        break;
    }
    case 346178:
    {
        returnValue = F("Zum Buddenbaum");
        break;
    }
    case 346179:
    {
        returnValue = F("Zum Bugenhagenheim");
        break;
    }
    case 346180:
    {
        returnValue = F("Zum Buhn");
        break;
    }
    case 346181:
    {
        returnValue = F("Zum Buig");
        break;
    }
    case 346182:
    {
        returnValue = F("Zum Bullenberg");
        break;
    }
    case 346183:
    {
        returnValue = F("Zum Bullendorfer Berg");
        break;
    }
    case 346184:
    {
        returnValue = F("Zum Bullhof");
        break;
    }
    case 346185:
    {
        returnValue = F("Zum Bult");
        break;
    }
    case 346186:
    {
        returnValue = F("Zum Bummert");
        break;
    }
    case 346187:
    {
        returnValue = F("Zum Bungalowdorf");
        break;
    }
    case 346188:
    {
        returnValue = F("Zum Bungarten");
        break;
    }
    case 346189:
    {
        returnValue = F("Zum Bungert");
        break;
    }
    case 346190:
    {
        returnValue = F("Zum Bunten Garten");
        break;
    }
    case 346191:
    {
        returnValue = F("Zum Burberg");
        break;
    }
    case 346192:
    {
        returnValue = F("Zum Burbrink");
        break;
    }
    case 346193:
    {
        returnValue = F("Zum Burenend");
        break;
    }
    case 346194:
    {
        returnValue = F("Zum Burgberg");
        break;
    }
    case 346195:
    {
        returnValue = F("Zum Burgberg Nr.11");
        break;
    }
    case 346196:
    {
        returnValue = F("Zum Burgblick");
        break;
    }
    case 346197:
    {
        returnValue = F("Zum Burgenblick");
        break;
    }
    case 346198:
    {
        returnValue = F("Zum Burgfeld");
        break;
    }
    case 346199:
    {
        returnValue = F("Zum Burggarten");
        break;
    }
    case 346200:
    {
        returnValue = F("Zum Burggraben");
        break;
    }
    case 346201:
    {
        returnValue = F("Zum Burghof");
        break;
    }
    case 346202:
    {
        returnValue = F("Zum Burgholz");
        break;
    }
    case 346203:
    {
        returnValue = F("Zum Burgkamp");
        break;
    }
    case 346204:
    {
        returnValue = F("Zum Burglehn");
        break;
    }
    case 346205:
    {
        returnValue = F("Zum Burgring");
        break;
    }
    case 346206:
    {
        returnValue = F("Zum Burgschemm");
        break;
    }
    case 346207:
    {
        returnValue = F("Zum Burgsee");
        break;
    }
    case 346208:
    {
        returnValue = F("Zum Burgstall");
        break;
    }
    case 346209:
    {
        returnValue = F("Zum Burgstuhl");
        break;
    }
    case 346210:
    {
        returnValue = F("Zum Burgstättel");
        break;
    }
    case 346211:
    {
        returnValue = F("Zum Burgteich");
        break;
    }
    case 346212:
    {
        returnValue = F("Zum Burgtor");
        break;
    }
    case 346213:
    {
        returnValue = F("Zum Burgus");
        break;
    }
    case 346214:
    {
        returnValue = F("Zum Burgwall");
        break;
    }
    case 346215:
    {
        returnValue = F("Zum Burgwart");
        break;
    }
    case 346216:
    {
        returnValue = F("Zum Burnkamp");
        break;
    }
    case 346217:
    {
        returnValue = F("Zum Burschl");
        break;
    }
    case 346218:
    {
        returnValue = F("Zum Busch");
        break;
    }
    case 346219:
    {
        returnValue = F("Zum Buschberg");
        break;
    }
    case 346220:
    {
        returnValue = F("Zum Buscheck");
        break;
    }
    case 346221:
    {
        returnValue = F("Zum Buscherhof");
        break;
    }
    case 346222:
    {
        returnValue = F("Zum Buschfeld");
        break;
    }
    case 346223:
    {
        returnValue = F("Zum Buschgraben");
        break;
    }
    case 346224:
    {
        returnValue = F("Zum Buschhof");
        break;
    }
    case 346225:
    {
        returnValue = F("Zum Buschlingsberg");
        break;
    }
    case 346226:
    {
        returnValue = F("Zum Buschort");
        break;
    }
    case 346227:
    {
        returnValue = F("Zum Buschplatz");
        break;
    }
    case 346228:
    {
        returnValue = F("Zum Bussebach");
        break;
    }
    case 346229:
    {
        returnValue = F("Zum Bussen");
        break;
    }
    case 346230:
    {
        returnValue = F("Zum Bussflur");
        break;
    }
    case 346231:
    {
        returnValue = F("Zum Buswendeplatz");
        break;
    }
    case 346232:
    {
        returnValue = F("Zum Butterberg");
        break;
    }
    case 346233:
    {
        returnValue = F("Zum Butterpfad");
        break;
    }
    case 346234:
    {
        returnValue = F("Zum Butzberg");
        break;
    }
    case 346235:
    {
        returnValue = F("Zum Butzen");
        break;
    }
    case 346236:
    {
        returnValue = F("Zum Butzwinkel");
        break;
    }
    case 346237:
    {
        returnValue = F("Zum Bußberg");
        break;
    }
    case 346238:
    {
        returnValue = F("Zum Bäckerberg");
        break;
    }
    case 346239:
    {
        returnValue = F("Zum Bäckerland");
        break;
    }
    case 346240:
    {
        returnValue = F("Zum Bäckerstieg");
        break;
    }
    case 346241:
    {
        returnValue = F("Zum Bähnle");
        break;
    }
    case 346242:
    {
        returnValue = F("Zum Bärberg");
        break;
    }
    case 346243:
    {
        returnValue = F("Zum Bären");
        break;
    }
    case 346244:
    {
        returnValue = F("Zum Bärenacker");
        break;
    }
    case 346245:
    {
        returnValue = F("Zum Bärenbrünnlein");
        break;
    }
    case 346246:
    {
        returnValue = F("Zum Bärengrund");
        break;
    }
    case 346247:
    {
        returnValue = F("Zum Bärenkamp");
        break;
    }
    case 346248:
    {
        returnValue = F("Zum Bärenloch");
        break;
    }
    case 346249:
    {
        returnValue = F("Zum Bärental");
        break;
    }
    case 346250:
    {
        returnValue = F("Zum Bärloch");
        break;
    }
    case 346251:
    {
        returnValue = F("Zum Bärwinkel");
        break;
    }
    case 346252:
    {
        returnValue = F("Zum Bäumchen");
        break;
    }
    case 346253:
    {
        returnValue = F("Zum Böckel");
        break;
    }
    case 346254:
    {
        returnValue = F("Zum Böckelsberg");
        break;
    }
    case 346255:
    {
        returnValue = F("Zum Böckelte");
        break;
    }
    case 346256:
    {
        returnValue = F("Zum Böckenhüvel");
        break;
    }
    case 346257:
    {
        returnValue = F("Zum Bödden");
        break;
    }
    case 346258:
    {
        returnValue = F("Zum Bögenberg");
        break;
    }
    case 346259:
    {
        returnValue = F("Zum Böhl");
        break;
    }
    case 346260:
    {
        returnValue = F("Zum Böhlerberg");
        break;
    }
    case 346261:
    {
        returnValue = F("Zum Böhnler");
        break;
    }
    case 346262:
    {
        returnValue = F("Zum Böllberger Ufer");
        break;
    }
    case 346263:
    {
        returnValue = F("Zum Böning");
        break;
    }
    case 346264:
    {
        returnValue = F("Zum Bördepark");
        break;
    }
    case 346265:
    {
        returnValue = F("Zum Börnchen");
        break;
    }
    case 346266:
    {
        returnValue = F("Zum Börneken");
        break;
    }
    case 346267:
    {
        returnValue = F("Zum Börsfeld");
        break;
    }
    case 346268:
    {
        returnValue = F("Zum Böselstein");
        break;
    }
    case 346269:
    {
        returnValue = F("Zum Büchel");
        break;
    }
    case 346270:
    {
        returnValue = F("Zum Büchig");
        break;
    }
    case 346271:
    {
        returnValue = F("Zum Bückeberg");
        break;
    }
    case 346272:
    {
        returnValue = F("Zum Büdesheimer Pfad");
        break;
    }
    case 346273:
    {
        returnValue = F("Zum Büdneracker");
        break;
    }
    case 346274:
    {
        returnValue = F("Zum Bühl");
        break;
    }
    case 346275:
    {
        returnValue = F("Zum Bühlwengert");
        break;
    }
    case 346276:
    {
        returnValue = F("Zum Bühnenbach");
        break;
    }
    case 346277:
    {
        returnValue = F("Zum Bührener Torfmoor");
        break;
    }
    case 346278:
    {
        returnValue = F("Zum Bülten");
        break;
    }
    case 346279:
    {
        returnValue = F("Zum Bünd");
        break;
    }
    case 346280:
    {
        returnValue = F("Zum Büning");
        break;
    }
    case 346281:
    {
        returnValue = F("Zum Büntenmoor");
        break;
    }
    case 346282:
    {
        returnValue = F("Zum Bürgen");
        break;
    }
    case 346283:
    {
        returnValue = F("Zum Bürgerbusch");
        break;
    }
    case 346284:
    {
        returnValue = F("Zum Bürgerhaus");
        break;
    }
    case 346285:
    {
        returnValue = F("Zum Bürgerpark");
        break;
    }
    case 346286:
    {
        returnValue = F("Zum Bürgerwehr");
        break;
    }
    case 346287:
    {
        returnValue = F("Zum Bürgerzentrum");
        break;
    }
    case 346288:
    {
        returnValue = F("Zum Bürgle");
        break;
    }
    case 346289:
    {
        returnValue = F("Zum Bürlein");
        break;
    }
    case 346290:
    {
        returnValue = F("Zum Büscher Hof");
        break;
    }
    case 346291:
    {
        returnValue = F("Zum Büschersfehn");
        break;
    }
    case 346292:
    {
        returnValue = F("Zum Bütervenn");
        break;
    }
    case 346293:
    {
        returnValue = F("Zum Büttelacker");
        break;
    }
    case 346294:
    {
        returnValue = F("Zum Calenberg");
        break;
    }
    case 346295:
    {
        returnValue = F("Zum Camp");
        break;
    }
    case 346296:
    {
        returnValue = F("Zum Camping");
        break;
    }
    case 346297:
    {
        returnValue = F("Zum Campingplatz");
        break;
    }
    case 346298:
    {
        returnValue = F("Zum Campus Nobel");
        break;
    }
    case 346299:
    {
        returnValue = F("Zum Candelaber");
        break;
    }
    case 346300:
    {
        returnValue = F("Zum Canowsee");
        break;
    }
    case 346301:
    {
        returnValue = F("Zum Carl-Alexander-Park");
        break;
    }
    case 346302:
    {
        returnValue = F("Zum Casino");
        break;
    }
    case 346303:
    {
        returnValue = F("Zum Chiemseemoos");
        break;
    }
    case 346304:
    {
        returnValue = F("Zum Christenstein");
        break;
    }
    case 346305:
    {
        returnValue = F("Zum Christianenfeld");
        break;
    }
    case 346306:
    {
        returnValue = F("Zum Claashäuschen");
        break;
    }
    case 346307:
    {
        returnValue = F("Zum Clausteich");
        break;
    }
    case 346308:
    {
        returnValue = F("Zum Collm");
        break;
    }
    case 346309:
    {
        returnValue = F("Zum Commetsteinchen");
        break;
    }
    case 346310:
    {
        returnValue = F("Zum Container-Terminal");
        break;
    }
    case 346311:
    {
        returnValue = F("Zum Cordesholz");
        break;
    }
    case 346312:
    {
        returnValue = F("Zum Cox Orange");
        break;
    }
    case 346313:
    {
        returnValue = F("Zum Croppenhof");
        break;
    }
    case 346314:
    {
        returnValue = F("Zum Daaskamp");
        break;
    }
    case 346315:
    {
        returnValue = F("Zum Dachsbau");
        break;
    }
    case 346316:
    {
        returnValue = F("Zum Dachsberg");
        break;
    }
    case 346317:
    {
        returnValue = F("Zum Dachsenberg");
        break;
    }
    case 346318:
    {
        returnValue = F("Zum Dachsholz");
        break;
    }
    case 346319:
    {
        returnValue = F("Zum Dachsknock");
        break;
    }
    case 346320:
    {
        returnValue = F("Zum Dachsköppel");
        break;
    }
    case 346321:
    {
        returnValue = F("Zum Dachtelfeld");
        break;
    }
    case 346322:
    {
        returnValue = F("Zum Dahl");
        break;
    }
    case 346323:
    {
        returnValue = F("Zum Dahlhoff");
        break;
    }
    case 346324:
    {
        returnValue = F("Zum Dahnenbach");
        break;
    }
    case 346325:
    {
        returnValue = F("Zum Dahrener Berg");
        break;
    }
    case 346326:
    {
        returnValue = F("Zum Dalkenheck");
        break;
    }
    case 346327:
    {
        returnValue = F("Zum Dallmeierkreuz");
        break;
    }
    case 346328:
    {
        returnValue = F("Zum Dallmorgen");
        break;
    }
    case 346329:
    {
        returnValue = F("Zum Dambecker Moor");
        break;
    }
    case 346330:
    {
        returnValue = F("Zum Damflöschen");
        break;
    }
    case 346331:
    {
        returnValue = F("Zum Damm");
        break;
    }
    case 346332:
    {
        returnValue = F("Zum Dammenrod");
        break;
    }
    case 346333:
    {
        returnValue = F("Zum Dammfeld");
        break;
    }
    case 346334:
    {
        returnValue = F("Zum Dammhammer");
        break;
    }
    case 346335:
    {
        returnValue = F("Zum Dammkrug");
        break;
    }
    case 346336:
    {
        returnValue = F("Zum Dampfkesselbau");
        break;
    }
    case 346337:
    {
        returnValue = F("Zum Danielsgraben");
        break;
    }
    case 346338:
    {
        returnValue = F("Zum Danielshammer");
        break;
    }
    case 346339:
    {
        returnValue = F("Zum Dankenschloot");
        break;
    }
    case 346340:
    {
        returnValue = F("Zum Dankersbühl");
        break;
    }
    case 346341:
    {
        returnValue = F("Zum Dannehof");
        break;
    }
    case 346342:
    {
        returnValue = F("Zum Darloh");
        break;
    }
    case 346343:
    {
        returnValue = F("Zum Dastloch");
        break;
    }
    case 346344:
    {
        returnValue = F("Zum Daubenstock");
        break;
    }
    case 346345:
    {
        returnValue = F("Zum Daupes");
        break;
    }
    case 346346:
    {
        returnValue = F("Zum Deelhof");
        break;
    }
    case 346347:
    {
        returnValue = F("Zum Deerenmoor");
        break;
    }
    case 346348:
    {
        returnValue = F("Zum Deetal");
        break;
    }
    case 346349:
    {
        returnValue = F("Zum Deetzer Knie");
        break;
    }
    case 346350:
    {
        returnValue = F("Zum Degenhardt");
        break;
    }
    case 346351:
    {
        returnValue = F("Zum Deich");
        break;
    }
    case 346352:
    {
        returnValue = F("Zum Deichschaart");
        break;
    }
    case 346353:
    {
        returnValue = F("Zum Deichweg");
        break;
    }
    case 346354:
    {
        returnValue = F("Zum Deipen Feld");
        break;
    }
    case 346355:
    {
        returnValue = F("Zum Dellborn");
        break;
    }
    case 346356:
    {
        returnValue = F("Zum Dellenfeld");
        break;
    }
    case 346357:
    {
        returnValue = F("Zum Delloh");
        break;
    }
    case 346358:
    {
        returnValue = F("Zum Delmestau");
        break;
    }
    case 346359:
    {
        returnValue = F("Zum Demesborn");
        break;
    }
    case 346360:
    {
        returnValue = F("Zum Denkmal");
        break;
    }
    case 346361:
    {
        returnValue = F("Zum Dennefeld");
        break;
    }
    case 346362:
    {
        returnValue = F("Zum Dennewäldchen");
        break;
    }
    case 346363:
    {
        returnValue = F("Zum Dermbach");
        break;
    }
    case 346364:
    {
        returnValue = F("Zum Deviner Haken");
        break;
    }
    case 346365:
    {
        returnValue = F("Zum Dhrontal");
        break;
    }
    case 346366:
    {
        returnValue = F("Zum Dianafelsen");
        break;
    }
    case 346367:
    {
        returnValue = F("Zum Dich");
        break;
    }
    case 346368:
    {
        returnValue = F("Zum Dickbruch");
        break;
    }
    case 346369:
    {
        returnValue = F("Zum Dickbusch");
        break;
    }
    case 346370:
    {
        returnValue = F("Zum Dickeloh");
        break;
    }
    case 346371:
    {
        returnValue = F("Zum Dickelspuhl");
        break;
    }
    case 346372:
    {
        returnValue = F("Zum Dicken");
        break;
    }
    case 346373:
    {
        returnValue = F("Zum Dicken Busch");
        break;
    }
    case 346374:
    {
        returnValue = F("Zum Dicken Holz");
        break;
    }
    case 346375:
    {
        returnValue = F("Zum Dicken Stein");
        break;
    }
    case 346376:
    {
        returnValue = F("Zum Dickenscheid");
        break;
    }
    case 346377:
    {
        returnValue = F("Zum Dickenstroh");
        break;
    }
    case 346378:
    {
        returnValue = F("Zum Dickesloch");
        break;
    }
    case 346379:
    {
        returnValue = F("Zum Dickmoor");
        break;
    }
    case 346380:
    {
        returnValue = F("Zum Diebeskopf");
        break;
    }
    case 346381:
    {
        returnValue = F("Zum Diek");
        break;
    }
    case 346382:
    {
        returnValue = F("Zum Dieker Ort");
        break;
    }
    case 346383:
    {
        returnValue = F("Zum Diekhaus");
        break;
    }
    case 346384:
    {
        returnValue = F("Zum Diekkamp");
        break;
    }
    case 346385:
    {
        returnValue = F("Zum Diekskiel");
        break;
    }
    case 346386:
    {
        returnValue = F("Zum Diemelblick");
        break;
    }
    case 346387:
    {
        returnValue = F("Zum Dienacker");
        break;
    }
    case 346388:
    {
        returnValue = F("Zum Dienstland");
        break;
    }
    case 346389:
    {
        returnValue = F("Zum Dieselsberg");
        break;
    }
    case 346390:
    {
        returnValue = F("Zum Dietlensried");
        break;
    }
    case 346391:
    {
        returnValue = F("Zum Diez");
        break;
    }
    case 346392:
    {
        returnValue = F("Zum Dille");
        break;
    }
    case 346393:
    {
        returnValue = F("Zum Dillsgraben");
        break;
    }
    case 346394:
    {
        returnValue = F("Zum Dippelborn");
        break;
    }
    case 346395:
    {
        returnValue = F("Zum Discholls");
        break;
    }
    case 346396:
    {
        returnValue = F("Zum Distelflecken");
        break;
    }
    case 346397:
    {
        returnValue = F("Zum Dobben");
        break;
    }
    case 346398:
    {
        returnValue = F("Zum Dock");
        break;
    }
    case 346399:
    {
        returnValue = F("Zum Dockenborn");
        break;
    }
    case 346400:
    {
        returnValue = F("Zum Dockenstiel");
        break;
    }
    case 346401:
    {
        returnValue = F("Zum Dodelsberg");
        break;
    }
    case 346402:
    {
        returnValue = F("Zum Doeren");
        break;
    }
    case 346403:
    {
        returnValue = F("Zum Dohm");
        break;
    }
    case 346404:
    {
        returnValue = F("Zum Dohrmannsweg");
        break;
    }
    case 346405:
    {
        returnValue = F("Zum Doktorberg");
        break;
    }
    case 346406:
    {
        returnValue = F("Zum Dolger Berg");
        break;
    }
    case 346407:
    {
        returnValue = F("Zum Dollberg");
        break;
    }
    case 346408:
    {
        returnValue = F("Zum Dollenkirchle");
        break;
    }
    case 346409:
    {
        returnValue = F("Zum Domblick");
        break;
    }
    case 346410:
    {
        returnValue = F("Zum Domfelsen");
        break;
    }
    case 346411:
    {
        returnValue = F("Zum Domherrenwald");
        break;
    }
    case 346412:
    {
        returnValue = F("Zum Domskamp");
        break;
    }
    case 346413:
    {
        returnValue = F("Zum Donaufeld");
        break;
    }
    case 346414:
    {
        returnValue = F("Zum Donaufleet");
        break;
    }
    case 346415:
    {
        returnValue = F("Zum Donnerbach");
        break;
    }
    case 346416:
    {
        returnValue = F("Zum Donnerberg");
        break;
    }
    case 346417:
    {
        returnValue = F("Zum Donnerholz");
        break;
    }
    case 346418:
    {
        returnValue = F("Zum Donnerkeil");
        break;
    }
    case 346419:
    {
        returnValue = F("Zum Donshorn");
        break;
    }
    case 346420:
    {
        returnValue = F("Zum Dopanen Anger");
        break;
    }
    case 346421:
    {
        returnValue = F("Zum Doppen");
        break;
    }
    case 346422:
    {
        returnValue = F("Zum Dorenberg");
        break;
    }
    case 346423:
    {
        returnValue = F("Zum Dorental");
        break;
    }
    case 346424:
    {
        returnValue = F("Zum Dorfanger");
        break;
    }
    case 346425:
    {
        returnValue = F("Zum Dorfblick");
        break;
    }
    case 346426:
    {
        returnValue = F("Zum Dorfborn");
        break;
    }
    case 346427:
    {
        returnValue = F("Zum Dorfbrunnen");
        break;
    }
    case 346428:
    {
        returnValue = F("Zum Dorfe");
        break;
    }
    case 346429:
    {
        returnValue = F("Zum Dorffrieden");
        break;
    }
    case 346430:
    {
        returnValue = F("Zum Dorfgemeinschaftshaus");
        break;
    }
    case 346431:
    {
        returnValue = F("Zum Dorfgraben");
        break;
    }
    case 346432:
    {
        returnValue = F("Zum Dorfgrund");
        break;
    }
    case 346433:
    {
        returnValue = F("Zum Dorfhaus");
        break;
    }
    case 346434:
    {
        returnValue = F("Zum Dorfkrug");
        break;
    }
    case 346435:
    {
        returnValue = F("Zum Dorfladen");
        break;
    }
    case 346436:
    {
        returnValue = F("Zum Dorfpark");
        break;
    }
    case 346437:
    {
        returnValue = F("Zum Dorfplatz");
        break;
    }
    case 346438:
    {
        returnValue = F("Zum Dorfsee");
        break;
    }
    case 346439:
    {
        returnValue = F("Zum Dorfteich");
        break;
    }
    case 346440:
    {
        returnValue = F("Zum Dorfweinberg");
        break;
    }
    case 346441:
    {
        returnValue = F("Zum Dorfzentrum");
        break;
    }
    case 346442:
    {
        returnValue = F("Zum Dormichweiher");
        break;
    }
    case 346443:
    {
        returnValue = F("Zum Dorn");
        break;
    }
    case 346444:
    {
        returnValue = F("Zum Dornacker");
        break;
    }
    case 346445:
    {
        returnValue = F("Zum Dornbach");
        break;
    }
    case 346446:
    {
        returnValue = F("Zum Dornbachtal");
        break;
    }
    case 346447:
    {
        returnValue = F("Zum Dornbusch");
        break;
    }
    case 346448:
    {
        returnValue = F("Zum Dornhagen");
        break;
    }
    case 346449:
    {
        returnValue = F("Zum Dornhof");
        break;
    }
    case 346450:
    {
        returnValue = F("Zum Dornhäule");
        break;
    }
    case 346451:
    {
        returnValue = F("Zum Dornremel");
        break;
    }
    case 346452:
    {
        returnValue = F("Zum Dorotheenhof");
        break;
    }
    case 346453:
    {
        returnValue = F("Zum Drachensteig");
        break;
    }
    case 346454:
    {
        returnValue = F("Zum Drahtzug");
        break;
    }
    case 346455:
    {
        returnValue = F("Zum Draiberg");
        break;
    }
    case 346456:
    {
        returnValue = F("Zum Drehbach");
        break;
    }
    case 346457:
    {
        returnValue = F("Zum Drehkreuz");
        break;
    }
    case 346458:
    {
        returnValue = F("Zum Dreiangel");
        break;
    }
    case 346459:
    {
        returnValue = F("Zum Dreieck");
        break;
    }
    case 346460:
    {
        returnValue = F("Zum Dreifürstenstein");
        break;
    }
    case 346461:
    {
        returnValue = F("Zum Dreiort");
        break;
    }
    case 346462:
    {
        returnValue = F("Zum Dreistelzberg");
        break;
    }
    case 346463:
    {
        returnValue = F("Zum Dresbach");
        break;
    }
    case 346464:
    {
        returnValue = F("Zum Dreschhaus");
        break;
    }
    case 346465:
    {
        returnValue = F("Zum Dreschplatz");
        break;
    }
    case 346466:
    {
        returnValue = F("Zum Dreschteich");
        break;
    }
    case 346467:
    {
        returnValue = F("Zum Driegeltrath");
        break;
    }
    case 346468:
    {
        returnValue = F("Zum Driesch");
        break;
    }
    case 346469:
    {
        returnValue = F("Zum Drillchen");
        break;
    }
    case 346470:
    {
        returnValue = F("Zum Drisselfeld");
        break;
    }
    case 346471:
    {
        returnValue = F("Zum Drohm");
        break;
    }
    case 346472:
    {
        returnValue = F("Zum Drohne");
        break;
    }
    case 346473:
    {
        returnValue = F("Zum Drohner Käppchen");
        break;
    }
    case 346474:
    {
        returnValue = F("Zum Dromling");
        break;
    }
    case 346475:
    {
        returnValue = F("Zum Drosselborn");
        break;
    }
    case 346476:
    {
        returnValue = F("Zum Drostehof");
        break;
    }
    case 346477:
    {
        returnValue = F("Zum Drostenholz");
        break;
    }
    case 346478:
    {
        returnValue = F("Zum Druchhorner Feld");
        break;
    }
    case 346479:
    {
        returnValue = F("Zum Dröbbelsloh");
        break;
    }
    case 346480:
    {
        returnValue = F("Zum Drögenberg");
        break;
    }
    case 346481:
    {
        returnValue = F("Zum Drömling");
        break;
    }
    case 346482:
    {
        returnValue = F("Zum Dschungel-Pfad");
        break;
    }
    case 346483:
    {
        returnValue = F("Zum Dubben");
        break;
    }
    case 346484:
    {
        returnValue = F("Zum Duffesbach");
        break;
    }
    case 346485:
    {
        returnValue = F("Zum Dummen Bruch");
        break;
    }
    case 346486:
    {
        returnValue = F("Zum Dunzelbach");
        break;
    }
    case 346487:
    {
        returnValue = F("Zum Durchgang");
        break;
    }
    case 346488:
    {
        returnValue = F("Zum Dustmeer");
        break;
    }
    case 346489:
    {
        returnValue = F("Zum Dutzenstein");
        break;
    }
    case 346490:
    {
        returnValue = F("Zum Duvenwinkel");
        break;
    }
    case 346491:
    {
        returnValue = F("Zum Dwergter Meer");
        break;
    }
    case 346492:
    {
        returnValue = F("Zum Dyckhoff");
        break;
    }
    case 346493:
    {
        returnValue = F("Zum Dänebach");
        break;
    }
    case 346494:
    {
        returnValue = F("Zum Dänischen Wohld");
        break;
    }
    case 346495:
    {
        returnValue = F("Zum Döbel");
        break;
    }
    case 346496:
    {
        returnValue = F("Zum Döbele");
        break;
    }
    case 346497:
    {
        returnValue = F("Zum Döhren");
        break;
    }
    case 346498:
    {
        returnValue = F("Zum Dölchsee");
        break;
    }
    case 346499:
    {
        returnValue = F("Zum Dönges");
        break;
    }
    case 346500:
    {
        returnValue = F("Zum Dörensborn");
        break;
    }
    case 346501:
    {
        returnValue = F("Zum Dörgänger");
        break;
    }
    case 346502:
    {
        returnValue = F("Zum Dörnbusch");
        break;
    }
    case 346503:
    {
        returnValue = F("Zum Dörnig");
        break;
    }
    case 346504:
    {
        returnValue = F("Zum Dörrberg");
        break;
    }
    case 346505:
    {
        returnValue = F("Zum Dübbelken");
        break;
    }
    case 346506:
    {
        returnValue = F("Zum Düffenbroich");
        break;
    }
    case 346507:
    {
        returnValue = F("Zum Dümelskopf");
        break;
    }
    case 346508:
    {
        returnValue = F("Zum Dümpel");
        break;
    }
    case 346509:
    {
        returnValue = F("Zum Dün");
        break;
    }
    case 346510:
    {
        returnValue = F("Zum Dünenberg");
        break;
    }
    case 346511:
    {
        returnValue = F("Zum Düsterdiek");
        break;
    }
    case 346512:
    {
        returnValue = F("Zum Düsteren Teich");
        break;
    }
    case 346513:
    {
        returnValue = F("Zum Dütekolk");
        break;
    }
    case 346514:
    {
        returnValue = F("Zum Dütestrand");
        break;
    }
    case 346515:
    {
        returnValue = F("Zum Düwelshöpen");
        break;
    }
    case 346516:
    {
        returnValue = F("Zum Eben");
        break;
    }
    case 346517:
    {
        returnValue = F("Zum Ebenbild");
        break;
    }
    case 346518:
    {
        returnValue = F("Zum Ebental");
        break;
    }
    case 346519:
    {
        returnValue = F("Zum Eberhardsfass");
        break;
    }
    case 346520:
    {
        returnValue = F("Zum Ebersberg");
        break;
    }
    case 346521:
    {
        returnValue = F("Zum Ebertswald");
        break;
    }
    case 346522:
    {
        returnValue = F("Zum Ebsbusch");
        break;
    }
    case 346523:
    {
        returnValue = F("Zum Ebsch");
        break;
    }
    case 346524:
    {
        returnValue = F("Zum Echenbühl");
        break;
    }
    case 346525:
    {
        returnValue = F("Zum Echternberg");
        break;
    }
    case 346526:
    {
        returnValue = F("Zum Eck");
        break;
    }
    case 346527:
    {
        returnValue = F("Zum Eckardsberg");
        break;
    }
    case 346528:
    {
        returnValue = F("Zum Eckardtsanger");
        break;
    }
    case 346529:
    {
        returnValue = F("Zum Eckelbusch");
        break;
    }
    case 346530:
    {
        returnValue = F("Zum Eckelchen");
        break;
    }
    case 346531:
    {
        returnValue = F("Zum Eckenspieß");
        break;
    }
    case 346532:
    {
        returnValue = F("Zum Eckergarten");
        break;
    }
    case 346533:
    {
        returnValue = F("Zum Eckergraben");
        break;
    }
    case 346534:
    {
        returnValue = F("Zum Eckernbaum");
        break;
    }
    case 346535:
    {
        returnValue = F("Zum Eckernkamp");
        break;
    }
    case 346536:
    {
        returnValue = F("Zum Eckertsbruch");
        break;
    }
    case 346537:
    {
        returnValue = F("Zum Eckkamp");
        break;
    }
    case 346538:
    {
        returnValue = F("Zum Eckkopf");
        break;
    }
    case 346539:
    {
        returnValue = F("Zum Ecklehen");
        break;
    }
    case 346540:
    {
        returnValue = F("Zum Eckweg");
        break;
    }
    case 346541:
    {
        returnValue = F("Zum Eckwinkel");
        break;
    }
    case 346542:
    {
        returnValue = F("Zum Edelhof");
        break;
    }
    case 346543:
    {
        returnValue = F("Zum Ederblick");
        break;
    }
    case 346544:
    {
        returnValue = F("Zum Ederfeld");
        break;
    }
    case 346545:
    {
        returnValue = F("Zum Edersberg");
        break;
    }
    case 346546:
    {
        returnValue = F("Zum Edersteg");
        break;
    }
    case 346547:
    {
        returnValue = F("Zum Effelten");
        break;
    }
    case 346548:
    {
        returnValue = F("Zum Egerursprung");
        break;
    }
    case 346549:
    {
        returnValue = F("Zum Egg");
        break;
    }
    case 346550:
    {
        returnValue = F("Zum Eggeberg");
        break;
    }
    case 346551:
    {
        returnValue = F("Zum Eggefeld");
        break;
    }
    case 346552:
    {
        returnValue = F("Zum Eglsee");
        break;
    }
    case 346553:
    {
        returnValue = F("Zum Ehranger Wald");
        break;
    }
    case 346554:
    {
        returnValue = F("Zum Ehrenbach");
        break;
    }
    case 346555:
    {
        returnValue = F("Zum Ehrenberg");
        break;
    }
    case 346556:
    {
        returnValue = F("Zum Ehrener Mühlenweg");
        break;
    }
    case 346557:
    {
        returnValue = F("Zum Ehrener Wald");
        break;
    }
    case 346558:
    {
        returnValue = F("Zum Ehrenfriedhof");
        break;
    }
    case 346559:
    {
        returnValue = F("Zum Ehrenhain");
        break;
    }
    case 346560:
    {
        returnValue = F("Zum Ehrenloh");
        break;
    }
    case 346561:
    {
        returnValue = F("Zum Ehrenmal");
        break;
    }
    case 346562:
    {
        returnValue = F("Zum Ehrwäldchen");
        break;
    }
    case 346563:
    {
        returnValue = F("Zum Eiberg");
        break;
    }
    case 346564:
    {
        returnValue = F("Zum Eibhaus");
        break;
    }
    case 346565:
    {
        returnValue = F("Zum Eichbach");
        break;
    }
    case 346566:
    {
        returnValue = F("Zum Eichbaum");
        break;
    }
    case 346567:
    {
        returnValue = F("Zum Eichberg");
        break;
    }
    case 346568:
    {
        returnValue = F("Zum Eichborn");
        break;
    }
    case 346569:
    {
        returnValue = F("Zum Eichbusch");
        break;
    }
    case 346570:
    {
        returnValue = F("Zum Eichelberg");
        break;
    }
    case 346571:
    {
        returnValue = F("Zum Eichelchen");
        break;
    }
    case 346572:
    {
        returnValue = F("Zum Eichelrain");
        break;
    }
    case 346573:
    {
        returnValue = F("Zum Eichelsberg");
        break;
    }
    case 346574:
    {
        returnValue = F("Zum Eichelsee");
        break;
    }
    case 346575:
    {
        returnValue = F("Zum Eichelskamp");
        break;
    }
    case 346576:
    {
        returnValue = F("Zum Eichenberg");
        break;
    }
    case 346577:
    {
        returnValue = F("Zum Eichenbrink");
        break;
    }
    case 346578:
    {
        returnValue = F("Zum Eichenbruche");
        break;
    }
    case 346579:
    {
        returnValue = F("Zum Eichenbrunnen");
        break;
    }
    case 346580:
    {
        returnValue = F("Zum Eichenbusch");
        break;
    }
    case 346581:
    {
        returnValue = F("Zum Eicheneck");
        break;
    }
    case 346582:
    {
        returnValue = F("Zum Eichenfeld");
        break;
    }
    case 346583:
    {
        returnValue = F("Zum Eichenforst");
        break;
    }
    case 346584:
    {
        returnValue = F("Zum Eichengrund");
        break;
    }
    case 346585:
    {
        returnValue = F("Zum Eichenhain");
        break;
    }
    case 346586:
    {
        returnValue = F("Zum Eichenhof");
        break;
    }
    case 346587:
    {
        returnValue = F("Zum Eichenholz");
        break;
    }
    case 346588:
    {
        returnValue = F("Zum Eichenhügel");
        break;
    }
    case 346589:
    {
        returnValue = F("Zum Eichenkamp");
        break;
    }
    case 346590:
    {
        returnValue = F("Zum Eichenkuller");
        break;
    }
    case 346591:
    {
        returnValue = F("Zum Eichenplatz");
        break;
    }
    case 346592:
    {
        returnValue = F("Zum Eichenrück");
        break;
    }
    case 346593:
    {
        returnValue = F("Zum Eichenstock");
        break;
    }
    case 346594:
    {
        returnValue = F("Zum Eichenwald");
        break;
    }
    case 346595:
    {
        returnValue = F("Zum Eichenweg");
        break;
    }
    case 346596:
    {
        returnValue = F("Zum Eicherlgarten");
        break;
    }
    case 346597:
    {
        returnValue = F("Zum Eichet");
        break;
    }
    case 346598:
    {
        returnValue = F("Zum Eichfeld");
        break;
    }
    case 346599:
    {
        returnValue = F("Zum Eichhagen");
        break;
    }
    case 346600:
    {
        returnValue = F("Zum Eichhahn");
        break;
    }
    case 346601:
    {
        returnValue = F("Zum Eichhof");
        break;
    }
    case 346602:
    {
        returnValue = F("Zum Eichholz");
        break;
    }
    case 346603:
    {
        returnValue = F("Zum Eichhornbaum");
        break;
    }
    case 346604:
    {
        returnValue = F("Zum Eichhorst");
        break;
    }
    case 346605:
    {
        returnValue = F("Zum Eichhorstweg");
        break;
    }
    case 346606:
    {
        returnValue = F("Zum Eichicht");
        break;
    }
    case 346607:
    {
        returnValue = F("Zum Eichig");
        break;
    }
    case 346608:
    {
        returnValue = F("Zum Eichkamp");
        break;
    }
    case 346609:
    {
        returnValue = F("Zum Eichsoll");
        break;
    }
    case 346610:
    {
        returnValue = F("Zum Eichstruck");
        break;
    }
    case 346611:
    {
        returnValue = F("Zum Eichtal");
        break;
    }
    case 346612:
    {
        returnValue = F("Zum Eichwald");
        break;
    }
    case 346613:
    {
        returnValue = F("Zum Eichweiher");
        break;
    }
    case 346614:
    {
        returnValue = F("Zum Eichwäldchen");
        break;
    }
    case 346615:
    {
        returnValue = F("Zum Eickenhahn");
        break;
    }
    case 346616:
    {
        returnValue = F("Zum Eickenrode");
        break;
    }
    case 346617:
    {
        returnValue = F("Zum Eickhoffsbrink");
        break;
    }
    case 346618:
    {
        returnValue = F("Zum Eidhagen");
        break;
    }
    case 346619:
    {
        returnValue = F("Zum Eifelblick");
        break;
    }
    case 346620:
    {
        returnValue = F("Zum Eifelkreuz");
        break;
    }
    case 346621:
    {
        returnValue = F("Zum Eigen");
        break;
    }
    case 346622:
    {
        returnValue = F("Zum Eiling");
        break;
    }
    case 346623:
    {
        returnValue = F("Zum Einbollen");
        break;
    }
    case 346624:
    {
        returnValue = F("Zum Einetal");
        break;
    }
    case 346625:
    {
        returnValue = F("Zum Einfang");
        break;
    }
    case 346626:
    {
        returnValue = F("Zum Einfirst");
        break;
    }
    case 346627:
    {
        returnValue = F("Zum Einöder Tal");
        break;
    }
    case 346628:
    {
        returnValue = F("Zum Eisberg");
        break;
    }
    case 346629:
    {
        returnValue = F("Zum Eisenacher Tor");
        break;
    }
    case 346630:
    {
        returnValue = F("Zum Eisenacker");
        break;
    }
    case 346631:
    {
        returnValue = F("Zum Eisenberg");
        break;
    }
    case 346632:
    {
        returnValue = F("Zum Eisengang");
        break;
    }
    case 346633:
    {
        returnValue = F("Zum Eisenhammer");
        break;
    }
    case 346634:
    {
        returnValue = F("Zum Eisenweg");
        break;
    }
    case 346635:
    {
        returnValue = F("Zum Eisenwoog");
        break;
    }
    case 346636:
    {
        returnValue = F("Zum Eiserkuth");
        break;
    }
    case 346637:
    {
        returnValue = F("Zum Eisernen Mann");
        break;
    }
    case 346638:
    {
        returnValue = F("Zum Eishaus");
        break;
    }
    case 346639:
    {
        returnValue = F("Zum Eiskeller");
        break;
    }
    case 346640:
    {
        returnValue = F("Zum Eiskellerberg");
        break;
    }
    case 346641:
    {
        returnValue = F("Zum Eisresch");
        break;
    }
    case 346642:
    {
        returnValue = F("Zum Eisseler See");
        break;
    }
    case 346643:
    {
        returnValue = F("Zum Eistruper Feld");
        break;
    }
    case 346644:
    {
        returnValue = F("Zum Eisvogelpfad");
        break;
    }
    case 346645:
    {
        returnValue = F("Zum Eisweiher");
        break;
    }
    case 346646:
    {
        returnValue = F("Zum Eitzener Bruch");
        break;
    }
    case 346647:
    {
        returnValue = F("Zum Elbblick");
        break;
    }
    case 346648:
    {
        returnValue = F("Zum Elberscheid");
        break;
    }
    case 346649:
    {
        returnValue = F("Zum Elberskamp");
        break;
    }
    case 346650:
    {
        returnValue = F("Zum Elbschlößchen");
        break;
    }
    case 346651:
    {
        returnValue = F("Zum Elbwerder");
        break;
    }
    case 346652:
    {
        returnValue = F("Zum Eldehafen");
        break;
    }
    case 346653:
    {
        returnValue = F("Zum Eleonorenwald");
        break;
    }
    case 346654:
    {
        returnValue = F("Zum Elfenbruch");
        break;
    }
    case 346655:
    {
        returnValue = F("Zum Elfengrund");
        break;
    }
    case 346656:
    {
        returnValue = F("Zum Elfter Kopf");
        break;
    }
    case 346657:
    {
        returnValue = F("Zum Elisabethbrunnen");
        break;
    }
    case 346658:
    {
        returnValue = F("Zum Ellenberg");
        break;
    }
    case 346659:
    {
        returnValue = F("Zum Ellenborn");
        break;
    }
    case 346660:
    {
        returnValue = F("Zum Ellerbach");
        break;
    }
    case 346661:
    {
        returnValue = F("Zum Ellerberg");
        break;
    }
    case 346662:
    {
        returnValue = F("Zum Ellerbrook");
        break;
    }
    case 346663:
    {
        returnValue = F("Zum Ellern");
        break;
    }
    case 346664:
    {
        returnValue = F("Zum Ellernbruch");
        break;
    }
    case 346665:
    {
        returnValue = F("Zum Ellernsoll");
        break;
    }
    case 346666:
    {
        returnValue = F("Zum Elleser Tal");
        break;
    }
    case 346667:
    {
        returnValue = F("Zum Elm");
        break;
    }
    case 346668:
    {
        returnValue = F("Zum Elmarplatz");
        break;
    }
    case 346669:
    {
        returnValue = F("Zum Elnhäuser Grund");
        break;
    }
    case 346670:
    {
        returnValue = F("Zum Elsbruch");
        break;
    }
    case 346671:
    {
        returnValue = F("Zum Elsekamp");
        break;
    }
    case 346672:
    {
        returnValue = F("Zum Elsenberg");
        break;
    }
    case 346673:
    {
        returnValue = F("Zum Elsengarten");
        break;
    }
    case 346674:
    {
        returnValue = F("Zum Elspebach");
        break;
    }
    case 346675:
    {
        returnValue = F("Zum Elstergraben");
        break;
    }
    case 346676:
    {
        returnValue = F("Zum Elstermoor");
        break;
    }
    case 346677:
    {
        returnValue = F("Zum Elysium");
        break;
    }
    case 346678:
    {
        returnValue = F("Zum Elzbach");
        break;
    }
    case 346679:
    {
        returnValue = F("Zum Elzenberg");
        break;
    }
    case 346680:
    {
        returnValue = F("Zum Elzesteg");
        break;
    }
    case 346681:
    {
        returnValue = F("Zum Emderwald");
        break;
    }
    case 346682:
    {
        returnValue = F("Zum Emilieschacht");
        break;
    }
    case 346683:
    {
        returnValue = F("Zum Emondtshof");
        break;
    }
    case 346684:
    {
        returnValue = F("Zum Emsblick");
        break;
    }
    case 346685:
    {
        returnValue = F("Zum Emstal");
        break;
    }
    case 346686:
    {
        returnValue = F("Zum Emsufer");
        break;
    }
    case 346687:
    {
        returnValue = F("Zum Endenberg");
        break;
    }
    case 346688:
    {
        returnValue = F("Zum Engel");
        break;
    }
    case 346689:
    {
        returnValue = F("Zum Engelberg");
        break;
    }
    case 346690:
    {
        returnValue = F("Zum Engelfanger Schacht");
        break;
    }
    case 346691:
    {
        returnValue = F("Zum Engelgrundweiher");
        break;
    }
    case 346692:
    {
        returnValue = F("Zum Engelnkamp");
        break;
    }
    case 346693:
    {
        returnValue = F("Zum Engelsbach");
        break;
    }
    case 346694:
    {
        returnValue = F("Zum Engelsberg");
        break;
    }
    case 346695:
    {
        returnValue = F("Zum Engelsknapp");
        break;
    }
    case 346696:
    {
        returnValue = F("Zum Engelstal");
        break;
    }
    case 346697:
    {
        returnValue = F("Zum England");
        break;
    }
    case 346698:
    {
        returnValue = F("Zum Englischen Wald");
        break;
    }
    case 346699:
    {
        returnValue = F("Zum Enkerhof");
        break;
    }
    case 346700:
    {
        returnValue = F("Zum Enser Krug");
        break;
    }
    case 346701:
    {
        returnValue = F("Zum Ensheimer Gelösch");
        break;
    }
    case 346702:
    {
        returnValue = F("Zum Entenstrauch");
        break;
    }
    case 346703:
    {
        returnValue = F("Zum Ententeich");
        break;
    }
    case 346704:
    {
        returnValue = F("Zum Entenufer");
        break;
    }
    case 346705:
    {
        returnValue = F("Zum Entertal");
        break;
    }
    case 346706:
    {
        returnValue = F("Zum Entsorgungszentrum");
        break;
    }
    case 346707:
    {
        returnValue = F("Zum Erbbegräbnis");
        break;
    }
    case 346708:
    {
        returnValue = F("Zum Erbgericht");
        break;
    }
    case 346709:
    {
        returnValue = F("Zum Erbsenbühl");
        break;
    }
    case 346710:
    {
        returnValue = F("Zum Erbsenstück");
        break;
    }
    case 346711:
    {
        returnValue = F("Zum Erbstollen");
        break;
    }
    case 346712:
    {
        returnValue = F("Zum Erdbeerfeld");
        break;
    }
    case 346713:
    {
        returnValue = F("Zum Erdchen");
        break;
    }
    case 346714:
    {
        returnValue = F("Zum Erdenglück");
        break;
    }
    case 346715:
    {
        returnValue = F("Zum Erdwall");
        break;
    }
    case 346716:
    {
        returnValue = F("Zum Erftufer");
        break;
    }
    case 346717:
    {
        returnValue = F("Zum Erfurter Tal");
        break;
    }
    case 346718:
    {
        returnValue = F("Zum Erholungspark");
        break;
    }
    case 346719:
    {
        returnValue = F("Zum Erikasee");
        break;
    }
    case 346720:
    {
        returnValue = F("Zum Erlau");
        break;
    }
    case 346721:
    {
        returnValue = F("Zum Erlebnispark");
        break;
    }
    case 346722:
    {
        returnValue = F("Zum Erlenanger");
        break;
    }
    case 346723:
    {
        returnValue = F("Zum Erlenborn");
        break;
    }
    case 346724:
    {
        returnValue = F("Zum Erlenbruch");
        break;
    }
    case 346725:
    {
        returnValue = F("Zum Erlenbusch");
        break;
    }
    case 346726:
    {
        returnValue = F("Zum Erlengrund");
        break;
    }
    case 346727:
    {
        returnValue = F("Zum Erlenhof");
        break;
    }
    case 346728:
    {
        returnValue = F("Zum Erlenholz");
        break;
    }
    case 346729:
    {
        returnValue = F("Zum Erlgrund");
        break;
    }
    case 346730:
    {
        returnValue = F("Zum Erlhof");
        break;
    }
    case 346731:
    {
        returnValue = F("Zum Erlich");
        break;
    }
    case 346732:
    {
        returnValue = F("Zum Ernstberg");
        break;
    }
    case 346733:
    {
        returnValue = F("Zum Erpelbrunnen");
        break;
    }
    case 346734:
    {
        returnValue = F("Zum Erzberg");
        break;
    }
    case 346735:
    {
        returnValue = F("Zum Erzengel Michael");
        break;
    }
    case 346736:
    {
        returnValue = F("Zum Erzgebirgsblick");
        break;
    }
    case 346737:
    {
        returnValue = F("Zum Esbach");
        break;
    }
    case 346738:
    {
        returnValue = F("Zum Esch");
        break;
    }
    case 346739:
    {
        returnValue = F("Zum Eschbachsteg");
        break;
    }
    case 346740:
    {
        returnValue = F("Zum Eschbaum");
        break;
    }
    case 346741:
    {
        returnValue = F("Zum Eschberg");
        break;
    }
    case 346742:
    {
        returnValue = F("Zum Eschenbach");
        break;
    }
    case 346743:
    {
        returnValue = F("Zum Eschengrund");
        break;
    }
    case 346744:
    {
        returnValue = F("Zum Eschensiefen");
        break;
    }
    case 346745:
    {
        returnValue = F("Zum Eschenthal");
        break;
    }
    case 346746:
    {
        returnValue = F("Zum Escher Feld");
        break;
    }
    case 346747:
    {
        returnValue = F("Zum Escherberg");
        break;
    }
    case 346748:
    {
        returnValue = F("Zum Escherfeld");
        break;
    }
    case 346749:
    {
        returnValue = F("Zum Escherhof");
        break;
    }
    case 346750:
    {
        returnValue = F("Zum Eschholz");
        break;
    }
    case 346751:
    {
        returnValue = F("Zum Eschilishov");
        break;
    }
    case 346752:
    {
        returnValue = F("Zum Eschkamp");
        break;
    }
    case 346753:
    {
        returnValue = F("Zum Eselrain");
        break;
    }
    case 346754:
    {
        returnValue = F("Zum Eselsbachtal");
        break;
    }
    case 346755:
    {
        returnValue = F("Zum Eselshag");
        break;
    }
    case 346756:
    {
        returnValue = F("Zum Espan");
        break;
    }
    case 346757:
    {
        returnValue = F("Zum Espe");
        break;
    }
    case 346758:
    {
        returnValue = F("Zum Essbach");
        break;
    }
    case 346759:
    {
        returnValue = F("Zum Estenberg");
        break;
    }
    case 346760:
    {
        returnValue = F("Zum Esterstich");
        break;
    }
    case 346761:
    {
        returnValue = F("Zum Etzbachtal");
        break;
    }
    case 346762:
    {
        returnValue = F("Zum Eulchen");
        break;
    }
    case 346763:
    {
        returnValue = F("Zum Eulenberg");
        break;
    }
    case 346764:
    {
        returnValue = F("Zum Eulenbroicher Auel");
        break;
    }
    case 346765:
    {
        returnValue = F("Zum Eulenbruch");
        break;
    }
    case 346766:
    {
        returnValue = F("Zum Eulengrund");
        break;
    }
    case 346767:
    {
        returnValue = F("Zum Eulensiepen");
        break;
    }
    case 346768:
    {
        returnValue = F("Zum Eurich");
        break;
    }
    case 346769:
    {
        returnValue = F("Zum Europahaus");
        break;
    }
    case 346770:
    {
        returnValue = F("Zum Everstein");
        break;
    }
    case 346771:
    {
        returnValue = F("Zum Ewertshahn");
        break;
    }
    case 346772:
    {
        returnValue = F("Zum Ewesberg");
        break;
    }
    case 346773:
    {
        returnValue = F("Zum Ewigen Frieden");
        break;
    }
    case 346774:
    {
        returnValue = F("Zum Ewigen Meer");
        break;
    }
    case 346775:
    {
        returnValue = F("Zum Exerzierhaus");
        break;
    }
    case 346776:
    {
        returnValue = F("Zum Fabigsberg");
        break;
    }
    case 346777:
    {
        returnValue = F("Zum Fahlberg");
        break;
    }
    case 346778:
    {
        returnValue = F("Zum Fahlen Klei");
        break;
    }
    case 346779:
    {
        returnValue = F("Zum Fahnenholz");
        break;
    }
    case 346780:
    {
        returnValue = F("Zum Fahrenbach");
        break;
    }
    case 346781:
    {
        returnValue = F("Zum Fahrenbeck");
        break;
    }
    case 346782:
    {
        returnValue = F("Zum Fahrenberg");
        break;
    }
    case 346783:
    {
        returnValue = F("Zum Fahrenbrink");
        break;
    }
    case 346784:
    {
        returnValue = F("Zum Fahrenholzer Holz");
        break;
    }
    case 346785:
    {
        returnValue = F("Zum Fahrmkamp");
        break;
    }
    case 346786:
    {
        returnValue = F("Zum Falbachtal");
        break;
    }
    case 346787:
    {
        returnValue = F("Zum Falkenkopf");
        break;
    }
    case 346788:
    {
        returnValue = F("Zum Fallgarten");
        break;
    }
    case 346789:
    {
        returnValue = F("Zum Falltor");
        break;
    }
    case 346790:
    {
        returnValue = F("Zum Falsch");
        break;
    }
    case 346791:
    {
        returnValue = F("Zum Familienwohl");
        break;
    }
    case 346792:
    {
        returnValue = F("Zum Fange");
        break;
    }
    case 346793:
    {
        returnValue = F("Zum Farmwinkel");
        break;
    }
    case 346794:
    {
        returnValue = F("Zum Farnstück");
        break;
    }
    case 346795:
    {
        returnValue = F("Zum Farrenstall");
        break;
    }
    case 346796:
    {
        returnValue = F("Zum Farwig");
        break;
    }
    case 346797:
    {
        returnValue = F("Zum Fassler");
        break;
    }
    case 346798:
    {
        returnValue = F("Zum Faulborn");
        break;
    }
    case 346799:
    {
        returnValue = F("Zum Faulen Hund");
        break;
    }
    case 346800:
    {
        returnValue = F("Zum Faulenberg");
        break;
    }
    case 346801:
    {
        returnValue = F("Zum Federfels");
        break;
    }
    case 346802:
    {
        returnValue = F("Zum Feerenberg");
        break;
    }
    case 346803:
    {
        returnValue = F("Zum Fehrenberg");
        break;
    }
    case 346804:
    {
        returnValue = F("Zum Fehrmoor");
        break;
    }
    case 346805:
    {
        returnValue = F("Zum Feierabendheim");
        break;
    }
    case 346806:
    {
        returnValue = F("Zum Feisberg");
        break;
    }
    case 346807:
    {
        returnValue = F("Zum Feiselberg");
        break;
    }
    case 346808:
    {
        returnValue = F("Zum Felchen");
        break;
    }
    case 346809:
    {
        returnValue = F("Zum Felchowsee");
        break;
    }
    case 346810:
    {
        returnValue = F("Zum Feld");
        break;
    }
    case 346811:
    {
        returnValue = F("Zum Feldacker");
        break;
    }
    case 346812:
    {
        returnValue = F("Zum Feldberg");
        break;
    }
    case 346813:
    {
        returnValue = F("Zum Feldblick");
        break;
    }
    case 346814:
    {
        returnValue = F("Zum Feldbrink");
        break;
    }
    case 346815:
    {
        returnValue = F("Zum Feldbusch");
        break;
    }
    case 346816:
    {
        returnValue = F("Zum Feldbüchel");
        break;
    }
    case 346817:
    {
        returnValue = F("Zum Feldchen");
        break;
    }
    case 346818:
    {
        returnValue = F("Zum Felde");
        break;
    }
    case 346819:
    {
        returnValue = F("Zum Felde Weg");
        break;
    }
    case 346820:
    {
        returnValue = F("Zum Feldgarten");
        break;
    }
    case 346821:
    {
        returnValue = F("Zum Feldhang");
        break;
    }
    case 346822:
    {
        returnValue = F("Zum Feldhaus");
        break;
    }
    case 346823:
    {
        returnValue = F("Zum Feldhof");
        break;
    }
    case 346824:
    {
        returnValue = F("Zum Feldholz");
        break;
    }
    case 346825:
    {
        returnValue = F("Zum Feldhook");
        break;
    }
    case 346826:
    {
        returnValue = F("Zum Feldkamp");
        break;
    }
    case 346827:
    {
        returnValue = F("Zum Feldkreuz");
        break;
    }
    case 346828:
    {
        returnValue = F("Zum Feldlager");
        break;
    }
    case 346829:
    {
        returnValue = F("Zum Feldrain");
        break;
    }
    case 346830:
    {
        returnValue = F("Zum Feldweg");
        break;
    }
    case 346831:
    {
        returnValue = F("Zum Fellengarten");
        break;
    }
    case 346832:
    {
        returnValue = F("Zum Fels");
        break;
    }
    case 346833:
    {
        returnValue = F("Zum Felsacker");
        break;
    }
    case 346834:
    {
        returnValue = F("Zum Felsbach");
        break;
    }
    case 346835:
    {
        returnValue = F("Zum Felsberg");
        break;
    }
    case 346836:
    {
        returnValue = F("Zum Felsblick");
        break;
    }
    case 346837:
    {
        returnValue = F("Zum Felsen");
        break;
    }
    case 346838:
    {
        returnValue = F("Zum Felsenberg");
        break;
    }
    case 346839:
    {
        returnValue = F("Zum Felsenbrunnen");
        break;
    }
    case 346840:
    {
        returnValue = F("Zum Felseneck");
        break;
    }
    case 346841:
    {
        returnValue = F("Zum Felsengarten");
        break;
    }
    case 346842:
    {
        returnValue = F("Zum Felsenkeller");
        break;
    }
    case 346843:
    {
        returnValue = F("Zum Felsenmeer");
        break;
    }
    case 346844:
    {
        returnValue = F("Zum Felsensteig");
        break;
    }
    case 346845:
    {
        returnValue = F("Zum Felsenwald");
        break;
    }
    case 346846:
    {
        returnValue = F("Zum Felsenweg");
        break;
    }
    case 346847:
    {
        returnValue = F("Zum Felsenweiher");
        break;
    }
    case 346848:
    {
        returnValue = F("Zum Felsroth");
        break;
    }
    case 346849:
    {
        returnValue = F("Zum Femermann");
        break;
    }
    case 346850:
    {
        returnValue = F("Zum Fenn");
        break;
    }
    case 346851:
    {
        returnValue = F("Zum Fensterberg");
        break;
    }
    case 346852:
    {
        returnValue = F("Zum Ferbitzer Werder");
        break;
    }
    case 346853:
    {
        returnValue = F("Zum Feriengebiet");
        break;
    }
    case 346854:
    {
        returnValue = F("Zum Ferienpark");
        break;
    }
    case 346855:
    {
        returnValue = F("Zum Ferienzentrum");
        break;
    }
    case 346856:
    {
        returnValue = F("Zum Fernblick");
        break;
    }
    case 346857:
    {
        returnValue = F("Zum Fernen Sand");
        break;
    }
    case 346858:
    {
        returnValue = F("Zum Fernsehturm");
        break;
    }
    case 346859:
    {
        returnValue = F("Zum Festplatz");
        break;
    }
    case 346860:
    {
        returnValue = F("Zum Festungsrundweg");
        break;
    }
    case 346861:
    {
        returnValue = F("Zum Feuerkump");
        break;
    }
    case 346862:
    {
        returnValue = F("Zum Feuermoor");
        break;
    }
    case 346863:
    {
        returnValue = F("Zum Feuerstein");
        break;
    }
    case 346864:
    {
        returnValue = F("Zum Feuerwehrhaus");
        break;
    }
    case 346865:
    {
        returnValue = F("Zum Feuerwehrturm");
        break;
    }
    case 346866:
    {
        returnValue = F("Zum Fichtach");
        break;
    }
    case 346867:
    {
        returnValue = F("Zum Fichtenberg");
        break;
    }
    case 346868:
    {
        returnValue = F("Zum Fichtenhain");
        break;
    }
    case 346869:
    {
        returnValue = F("Zum Fichtenhof");
        break;
    }
    case 346870:
    {
        returnValue = F("Zum Fichtenkopf");
        break;
    }
    case 346871:
    {
        returnValue = F("Zum Fichteplatz");
        break;
    }
    case 346872:
    {
        returnValue = F("Zum Fiderol");
        break;
    }
    case 346873:
    {
        returnValue = F("Zum Fielefeld");
        break;
    }
    case 346874:
    {
        returnValue = F("Zum Fierlaßberg");
        break;
    }
    case 346875:
    {
        returnValue = F("Zum Findling");
        break;
    }
    case 346876:
    {
        returnValue = F("Zum Finkenbach");
        break;
    }
    case 346877:
    {
        returnValue = F("Zum Finkenberg");
        break;
    }
    case 346878:
    {
        returnValue = F("Zum Finkenbusch");
        break;
    }
    case 346879:
    {
        returnValue = F("Zum Finkenhain");
        break;
    }
    case 346880:
    {
        returnValue = F("Zum Finkenherd");
        break;
    }
    case 346881:
    {
        returnValue = F("Zum Finkenrain");
        break;
    }
    case 346882:
    {
        returnValue = F("Zum Finkensteg");
        break;
    }
    case 346883:
    {
        returnValue = F("Zum Finkenweg");
        break;
    }
    case 346884:
    {
        returnValue = F("Zum Finkhüttenberg");
        break;
    }
    case 346885:
    {
        returnValue = F("Zum Finnebahndamm");
        break;
    }
    case 346886:
    {
        returnValue = F("Zum Finstern Felde");
        break;
    }
    case 346887:
    {
        returnValue = F("Zum Finstertal");
        break;
    }
    case 346888:
    {
        returnValue = F("Zum Fischbach");
        break;
    }
    case 346889:
    {
        returnValue = F("Zum Fischerberg");
        break;
    }
    case 346890:
    {
        returnValue = F("Zum Fischerbusch");
        break;
    }
    case 346891:
    {
        returnValue = F("Zum Fischereihafen");
        break;
    }
    case 346892:
    {
        returnValue = F("Zum Fischereihof");
        break;
    }
    case 346893:
    {
        returnValue = F("Zum Fischerhafen");
        break;
    }
    case 346894:
    {
        returnValue = F("Zum Fischerhaus");
        break;
    }
    case 346895:
    {
        returnValue = F("Zum Fischerhof");
        break;
    }
    case 346896:
    {
        returnValue = F("Zum Fischerort");
        break;
    }
    case 346897:
    {
        returnValue = F("Zum Fischerteich");
        break;
    }
    case 346898:
    {
        returnValue = F("Zum Fischteich");
        break;
    }
    case 346899:
    {
        returnValue = F("Zum Fiskel Diek");
        break;
    }
    case 346900:
    {
        returnValue = F("Zum Flachsee");
        break;
    }
    case 346901:
    {
        returnValue = F("Zum Flachslande");
        break;
    }
    case 346902:
    {
        returnValue = F("Zum Flachsmeer");
        break;
    }
    case 346903:
    {
        returnValue = F("Zum Flachstal");
        break;
    }
    case 346904:
    {
        returnValue = F("Zum Fladder");
        break;
    }
    case 346905:
    {
        returnValue = F("Zum Flakenbruch");
        break;
    }
    case 346906:
    {
        returnValue = F("Zum Flecken");
        break;
    }
    case 346907:
    {
        returnValue = F("Zum Fleerweg");
        break;
    }
    case 346908:
    {
        returnValue = F("Zum Fleesensee");
        break;
    }
    case 346909:
    {
        returnValue = F("Zum Fleet");
        break;
    }
    case 346910:
    {
        returnValue = F("Zum Fliederbusch");
        break;
    }
    case 346911:
    {
        returnValue = F("Zum Fliegenberg");
        break;
    }
    case 346912:
    {
        returnValue = F("Zum Fliegerhorst");
        break;
    }
    case 346913:
    {
        returnValue = F("Zum Flintenberg");
        break;
    }
    case 346914:
    {
        returnValue = F("Zum Flohberg");
        break;
    }
    case 346915:
    {
        returnValue = F("Zum Flothfeld");
        break;
    }
    case 346916:
    {
        returnValue = F("Zum Floß");
        break;
    }
    case 346917:
    {
        returnValue = F("Zum Floßgraben");
        break;
    }
    case 346918:
    {
        returnValue = F("Zum Floßkanal");
        break;
    }
    case 346919:
    {
        returnValue = F("Zum Flughafen");
        break;
    }
    case 346920:
    {
        returnValue = F("Zum Flugplatz");
        break;
    }
    case 346921:
    {
        returnValue = F("Zum Flurkreuz");
        break;
    }
    case 346922:
    {
        returnValue = F("Zum Flurküppel");
        break;
    }
    case 346923:
    {
        returnValue = F("Zum Flurschütz");
        break;
    }
    case 346924:
    {
        returnValue = F("Zum Flutgraben");
        break;
    }
    case 346925:
    {
        returnValue = F("Zum Flöhatal");
        break;
    }
    case 346926:
    {
        returnValue = F("Zum Flötenkiel");
        break;
    }
    case 346927:
    {
        returnValue = F("Zum Flößchen");
        break;
    }
    case 346928:
    {
        returnValue = F("Zum Flürchen");
        break;
    }
    case 346929:
    {
        returnValue = F("Zum Flürt");
        break;
    }
    case 346930:
    {
        returnValue = F("Zum Fohlenhof");
        break;
    }
    case 346931:
    {
        returnValue = F("Zum Fohndel");
        break;
    }
    case 346932:
    {
        returnValue = F("Zum Folloch");
        break;
    }
    case 346933:
    {
        returnValue = F("Zum Fore");
        break;
    }
    case 346934:
    {
        returnValue = F("Zum Forellenbach");
        break;
    }
    case 346935:
    {
        returnValue = F("Zum Forellenhof");
        break;
    }
    case 346936:
    {
        returnValue = F("Zum Forellenteich");
        break;
    }
    case 346937:
    {
        returnValue = F("Zum Forst");
        break;
    }
    case 346938:
    {
        returnValue = F("Zum Forstamt");
        break;
    }
    case 346939:
    {
        returnValue = F("Zum Forstberg");
        break;
    }
    case 346940:
    {
        returnValue = F("Zum Forsten");
        break;
    }
    case 346941:
    {
        returnValue = F("Zum Forsthaus");
        break;
    }
    case 346942:
    {
        returnValue = F("Zum Forsthaus Salegast");
        break;
    }
    case 346943:
    {
        returnValue = F("Zum Forsthof");
        break;
    }
    case 346944:
    {
        returnValue = F("Zum Forstpohl");
        break;
    }
    case 346945:
    {
        returnValue = F("Zum Forstsiepen");
        break;
    }
    case 346946:
    {
        returnValue = F("Zum Forstweg");
        break;
    }
    case 346947:
    {
        returnValue = F("Zum Forth");
        break;
    }
    case 346948:
    {
        returnValue = F("Zum Forthskamp");
        break;
    }
    case 346949:
    {
        returnValue = F("Zum Frachtzentrum");
        break;
    }
    case 346950:
    {
        returnValue = F("Zum Frankenberg");
        break;
    }
    case 346951:
    {
        returnValue = F("Zum Frankenbrunnen");
        break;
    }
    case 346952:
    {
        returnValue = F("Zum Frankenhof");
        break;
    }
    case 346953:
    {
        returnValue = F("Zum Frankenholz");
        break;
    }
    case 346954:
    {
        returnValue = F("Zum Frankweg");
        break;
    }
    case 346955:
    {
        returnValue = F("Zum Franzenkreuz");
        break;
    }
    case 346956:
    {
        returnValue = F("Zum Franzosenwäldle");
        break;
    }
    case 346957:
    {
        returnValue = F("Zum Franzsee");
        break;
    }
    case 346958:
    {
        returnValue = F("Zum Frauengrund");
        break;
    }
    case 346959:
    {
        returnValue = F("Zum Frauenkopf");
        break;
    }
    case 346960:
    {
        returnValue = F("Zum Frauenlehen");
        break;
    }
    case 346961:
    {
        returnValue = F("Zum Freden");
        break;
    }
    case 346962:
    {
        returnValue = F("Zum Free");
        break;
    }
    case 346963:
    {
        returnValue = F("Zum Freesenweg");
        break;
    }
    case 346964:
    {
        returnValue = F("Zum Freibad");
        break;
    }
    case 346965:
    {
        returnValue = F("Zum Freien Hof");
        break;
    }
    case 346966:
    {
        returnValue = F("Zum Freien Mann");
        break;
    }
    case 346967:
    {
        returnValue = F("Zum Freien Stuhl");
        break;
    }
    case 346968:
    {
        returnValue = F("Zum Freischütz");
        break;
    }
    case 346969:
    {
        returnValue = F("Zum Freisenhagen");
        break;
    }
    case 346970:
    {
        returnValue = F("Zum Freistein");
        break;
    }
    case 346971:
    {
        returnValue = F("Zum Freistuhl");
        break;
    }
    case 346972:
    {
        returnValue = F("Zum Frembeck");
        break;
    }
    case 346973:
    {
        returnValue = F("Zum Frenser Feld");
        break;
    }
    case 346974:
    {
        returnValue = F("Zum Friedbüsch");
        break;
    }
    case 346975:
    {
        returnValue = F("Zum Frieden");
        break;
    }
    case 346976:
    {
        returnValue = F("Zum Friedenskreuz");
        break;
    }
    case 346977:
    {
        returnValue = F("Zum Friedensthal");
        break;
    }
    case 346978:
    {
        returnValue = F("Zum Friedenswald");
        break;
    }
    case 346979:
    {
        returnValue = F("Zum Friedensweiler");
        break;
    }
    case 346980:
    {
        returnValue = F("Zum Friedhof");
        break;
    }
    case 346981:
    {
        returnValue = F("Zum Friedhof Wehl");
        break;
    }
    case 346982:
    {
        returnValue = F("Zum Friedleinsbrunnen");
        break;
    }
    case 346983:
    {
        returnValue = F("Zum Friedrichshof");
        break;
    }
    case 346984:
    {
        returnValue = F("Zum Friedwald");
        break;
    }
    case 346985:
    {
        returnValue = F("Zum Friesenhof");
        break;
    }
    case 346986:
    {
        returnValue = F("Zum Friesental");
        break;
    }
    case 346987:
    {
        returnValue = F("Zum Frischenmut");
        break;
    }
    case 346988:
    {
        returnValue = F("Zum Fritzenberg");
        break;
    }
    case 346989:
    {
        returnValue = F("Zum Fronstein");
        break;
    }
    case 346990:
    {
        returnValue = F("Zum Froschbrücklein");
        break;
    }
    case 346991:
    {
        returnValue = F("Zum Froschgrund");
        break;
    }
    case 346992:
    {
        returnValue = F("Zum Froschkönig");
        break;
    }
    case 346993:
    {
        returnValue = F("Zum Froschmaar");
        break;
    }
    case 346994:
    {
        returnValue = F("Zum Froschteich");
        break;
    }
    case 346995:
    {
        returnValue = F("Zum Fröhling");
        break;
    }
    case 346996:
    {
        returnValue = F("Zum Frühling");
        break;
    }
    case 346997:
    {
        returnValue = F("Zum Frühlingsgarten");
        break;
    }
    case 346998:
    {
        returnValue = F("Zum Frühlingsplätzchen");
        break;
    }
    case 346999:
    {
        returnValue = F("Zum Frühlingsschacht");
        break;
    }
    case 347000:
    {
        returnValue = F("Zum Frühmeßbühl");
        break;
    }
    case 347001:
    {
        returnValue = F("Zum Fuchsbau");
        break;
    }
    case 347002:
    {
        returnValue = F("Zum Fuchsberg");
        break;
    }
    case 347003:
    {
        returnValue = F("Zum Fuchsbiegel");
        break;
    }
    case 347004:
    {
        returnValue = F("Zum Fuchsenbügl");
        break;
    }
    case 347005:
    {
        returnValue = F("Zum Fuchsengraben");
        break;
    }
    case 347006:
    {
        returnValue = F("Zum Fuchsenstein");
        break;
    }
    case 347007:
    {
        returnValue = F("Zum Fuchsgraben");
        break;
    }
    case 347008:
    {
        returnValue = F("Zum Fuchsgrund");
        break;
    }
    case 347009:
    {
        returnValue = F("Zum Fuchshügel");
        break;
    }
    case 347010:
    {
        returnValue = F("Zum Fuchsloch");
        break;
    }
    case 347011:
    {
        returnValue = F("Zum Fuchsmoor");
        break;
    }
    case 347012:
    {
        returnValue = F("Zum Fuchsstein");
        break;
    }
    case 347013:
    {
        returnValue = F("Zum Fuchsstrauch");
        break;
    }
    case 347014:
    {
        returnValue = F("Zum Fugenwinkel");
        break;
    }
    case 347015:
    {
        returnValue = F("Zum Fuggerschloß");
        break;
    }
    case 347016:
    {
        returnValue = F("Zum Fuhrenkamp");
        break;
    }
    case 347017:
    {
        returnValue = F("Zum Fuldablick");
        break;
    }
    case 347018:
    {
        returnValue = F("Zum Funken");
        break;
    }
    case 347019:
    {
        returnValue = F("Zum Funkenbruch");
        break;
    }
    case 347020:
    {
        returnValue = F("Zum Funkental");
        break;
    }
    case 347021:
    {
        returnValue = F("Zum Funkenturm");
        break;
    }
    case 347022:
    {
        returnValue = F("Zum Funkturm");
        break;
    }
    case 347023:
    {
        returnValue = F("Zum Funner");
        break;
    }
    case 347024:
    {
        returnValue = F("Zum Furlbach");
        break;
    }
    case 347025:
    {
        returnValue = F("Zum Furtfeld");
        break;
    }
    case 347026:
    {
        returnValue = F("Zum Furthbrunnen");
        break;
    }
    case 347027:
    {
        returnValue = F("Zum Futterbusch");
        break;
    }
    case 347028:
    {
        returnValue = F("Zum Fußballplatz");
        break;
    }
    case 347029:
    {
        returnValue = F("Zum Fußberg");
        break;
    }
    case 347030:
    {
        returnValue = F("Zum Fährberg");
        break;
    }
    case 347031:
    {
        returnValue = F("Zum Fährmann");
        break;
    }
    case 347032:
    {
        returnValue = F("Zum Fährtenbruch");
        break;
    }
    case 347033:
    {
        returnValue = F("Zum Fährterminal");
        break;
    }
    case 347034:
    {
        returnValue = F("Zum Fährweg");
        break;
    }
    case 347035:
    {
        returnValue = F("Zum Föhrberg");
        break;
    }
    case 347036:
    {
        returnValue = F("Zum Förderturm");
        break;
    }
    case 347037:
    {
        returnValue = F("Zum Försterberg");
        break;
    }
    case 347038:
    {
        returnValue = F("Zum Försterbrückel");
        break;
    }
    case 347039:
    {
        returnValue = F("Zum Försterhaus");
        break;
    }
    case 347040:
    {
        returnValue = F("Zum Försternstein");
        break;
    }
    case 347041:
    {
        returnValue = F("Zum Förstersteig");
        break;
    }
    case 347042:
    {
        returnValue = F("Zum Förstlein");
        break;
    }
    case 347043:
    {
        returnValue = F("Zum Förtschentor");
        break;
    }
    case 347044:
    {
        returnValue = F("Zum Füchselholz");
        break;
    }
    case 347045:
    {
        returnValue = F("Zum Füllerwald");
        break;
    }
    case 347046:
    {
        returnValue = F("Zum Füllort");
        break;
    }
    case 347047:
    {
        returnValue = F("Zum Fürstenbad");
        break;
    }
    case 347048:
    {
        returnValue = F("Zum Fürstenberg");
        break;
    }
    case 347049:
    {
        returnValue = F("Zum Fürstenbusch");
        break;
    }
    case 347050:
    {
        returnValue = F("Zum Fürstendamm");
        break;
    }
    case 347051:
    {
        returnValue = F("Zum Fürstenhof");
        break;
    }
    case 347052:
    {
        returnValue = F("Zum Fürstenholz");
        break;
    }
    case 347053:
    {
        returnValue = F("Zum Gahlener Grind");
        break;
    }
    case 347054:
    {
        returnValue = F("Zum Gai");
        break;
    }
    case 347055:
    {
        returnValue = F("Zum Gain");
        break;
    }
    case 347056:
    {
        returnValue = F("Zum Gaisberg");
        break;
    }
    case 347057:
    {
        returnValue = F("Zum Galberg");
        break;
    }
    case 347058:
    {
        returnValue = F("Zum Galdberg");
        break;
    }
    case 347059:
    {
        returnValue = F("Zum Galgen");
        break;
    }
    case 347060:
    {
        returnValue = F("Zum Galgenberg");
        break;
    }
    case 347061:
    {
        returnValue = F("Zum Galgenhügel");
        break;
    }
    case 347062:
    {
        returnValue = F("Zum Galgenkamp");
        break;
    }
    case 347063:
    {
        returnValue = F("Zum Galgenknapp");
        break;
    }
    case 347064:
    {
        returnValue = F("Zum Galgenmoor");
        break;
    }
    case 347065:
    {
        returnValue = F("Zum Galgentief");
        break;
    }
    case 347066:
    {
        returnValue = F("Zum Galkhausener Bach");
        break;
    }
    case 347067:
    {
        returnValue = F("Zum Gallberg");
        break;
    }
    case 347068:
    {
        returnValue = F("Zum Gallbühl");
        break;
    }
    case 347069:
    {
        returnValue = F("Zum Gallerturm");
        break;
    }
    case 347070:
    {
        returnValue = F("Zum Gallpüsch");
        break;
    }
    case 347071:
    {
        returnValue = F("Zum Gamensee");
        break;
    }
    case 347072:
    {
        returnValue = F("Zum Gansfeld");
        break;
    }
    case 347073:
    {
        returnValue = F("Zum Garbruch");
        break;
    }
    case 347074:
    {
        returnValue = F("Zum Garrelsmeer");
        break;
    }
    case 347075:
    {
        returnValue = F("Zum Garten");
        break;
    }
    case 347076:
    {
        returnValue = F("Zum Gartenblick");
        break;
    }
    case 347077:
    {
        returnValue = F("Zum Gartenbrook");
        break;
    }
    case 347078:
    {
        returnValue = F("Zum Gartenfeld");
        break;
    }
    case 347079:
    {
        returnValue = F("Zum Gartenholz");
        break;
    }
    case 347080:
    {
        returnValue = F("Zum Gassacker");
        break;
    }
    case 347081:
    {
        returnValue = F("Zum Gassl");
        break;
    }
    case 347082:
    {
        returnValue = F("Zum Gasthof");
        break;
    }
    case 347083:
    {
        returnValue = F("Zum Gatter");
        break;
    }
    case 347084:
    {
        returnValue = F("Zum Gauchsbach");
        break;
    }
    case 347085:
    {
        returnValue = F("Zum Gauspaten");
        break;
    }
    case 347086:
    {
        returnValue = F("Zum Gebhardsbrunn");
        break;
    }
    case 347087:
    {
        returnValue = F("Zum Gebrannten Berg");
        break;
    }
    case 347088:
    {
        returnValue = F("Zum Gehege");
        break;
    }
    case 347089:
    {
        returnValue = F("Zum Gehenberg");
        break;
    }
    case 347090:
    {
        returnValue = F("Zum Gehlbacher Hof");
        break;
    }
    case 347091:
    {
        returnValue = F("Zum Gehren");
        break;
    }
    case 347092:
    {
        returnValue = F("Zum Gehölz");
        break;
    }
    case 347093:
    {
        returnValue = F("Zum Geier");
        break;
    }
    case 347094:
    {
        returnValue = F("Zum Geiersberg");
        break;
    }
    case 347095:
    {
        returnValue = F("Zum Geierspiel");
        break;
    }
    case 347096:
    {
        returnValue = F("Zum Geierstein");
        break;
    }
    case 347097:
    {
        returnValue = F("Zum Geigenhau");
        break;
    }
    case 347098:
    {
        returnValue = F("Zum Geigerle");
        break;
    }
    case 347099:
    {
        returnValue = F("Zum Geigersgrund");
        break;
    }
    case 347100:
    {
        returnValue = F("Zum Geisaer Berg");
        break;
    }
    case 347101:
    {
        returnValue = F("Zum Geisberg");
        break;
    }
    case 347102:
    {
        returnValue = F("Zum Geisborn");
        break;
    }
    case 347103:
    {
        returnValue = F("Zum Geiseltalsee");
        break;
    }
    case 347104:
    {
        returnValue = F("Zum Geisküppel");
        break;
    }
    case 347105:
    {
        returnValue = F("Zum Geisspitzweg");
        break;
    }
    case 347106:
    {
        returnValue = F("Zum Geissrech");
        break;
    }
    case 347107:
    {
        returnValue = F("Zum Geisterholz");
        break;
    }
    case 347108:
    {
        returnValue = F("Zum Geiswasser");
        break;
    }
    case 347109:
    {
        returnValue = F("Zum Geißberg");
        break;
    }
    case 347110:
    {
        returnValue = F("Zum Geißplatz");
        break;
    }
    case 347111:
    {
        returnValue = F("Zum Geißrech");
        break;
    }
    case 347112:
    {
        returnValue = F("Zum Gelenberg");
        break;
    }
    case 347113:
    {
        returnValue = F("Zum Gelenk");
        break;
    }
    case 347114:
    {
        returnValue = F("Zum Gemeindebrunnen");
        break;
    }
    case 347115:
    {
        returnValue = F("Zum Gemeindehaus");
        break;
    }
    case 347116:
    {
        returnValue = F("Zum Gemeinschaftshaus");
        break;
    }
    case 347117:
    {
        returnValue = F("Zum Gemsenberg");
        break;
    }
    case 347118:
    {
        returnValue = F("Zum Gemüsehof");
        break;
    }
    case 347119:
    {
        returnValue = F("Zum Genagelten Stein");
        break;
    }
    case 347120:
    {
        returnValue = F("Zum Generationenpark");
        break;
    }
    case 347121:
    {
        returnValue = F("Zum Gensstück");
        break;
    }
    case 347122:
    {
        returnValue = F("Zum Georgentor");
        break;
    }
    case 347123:
    {
        returnValue = F("Zum Gerasteg");
        break;
    }
    case 347124:
    {
        returnValue = F("Zum Gerdautal");
        break;
    }
    case 347125:
    {
        returnValue = F("Zum Gereche");
        break;
    }
    case 347126:
    {
        returnValue = F("Zum Gerems");
        break;
    }
    case 347127:
    {
        returnValue = F("Zum Gerhardschacht");
        break;
    }
    case 347128:
    {
        returnValue = F("Zum Gerhardtsberg");
        break;
    }
    case 347129:
    {
        returnValue = F("Zum Gericht");
        break;
    }
    case 347130:
    {
        returnValue = F("Zum Gerichtsberg");
        break;
    }
    case 347131:
    {
        returnValue = F("Zum Gerichtsrain");
        break;
    }
    case 347132:
    {
        returnValue = F("Zum Gerlen");
        break;
    }
    case 347133:
    {
        returnValue = F("Zum Gerlingsberg");
        break;
    }
    case 347134:
    {
        returnValue = F("Zum Germanendorf");
        break;
    }
    case 347135:
    {
        returnValue = F("Zum Germaniabrunnen");
        break;
    }
    case 347136:
    {
        returnValue = F("Zum Gerstenbach");
        break;
    }
    case 347137:
    {
        returnValue = F("Zum Gerstengarten");
        break;
    }
    case 347138:
    {
        returnValue = F("Zum Gerstenhahn");
        break;
    }
    case 347139:
    {
        returnValue = F("Zum Gerstenkopf");
        break;
    }
    case 347140:
    {
        returnValue = F("Zum Gertraudenhain");
        break;
    }
    case 347141:
    {
        returnValue = F("Zum Gerwischer Baggerloch");
        break;
    }
    case 347142:
    {
        returnValue = F("Zum Gesehr");
        break;
    }
    case 347143:
    {
        returnValue = F("Zum Gesselbusch");
        break;
    }
    case 347144:
    {
        returnValue = F("Zum Gestiefelten Kater");
        break;
    }
    case 347145:
    {
        returnValue = F("Zum Gestüt");
        break;
    }
    case 347146:
    {
        returnValue = F("Zum Gesundbrunnen");
        break;
    }
    case 347147:
    {
        returnValue = F("Zum Getzelborn");
        break;
    }
    case 347148:
    {
        returnValue = F("Zum Getürms");
        break;
    }
    case 347149:
    {
        returnValue = F("Zum Gewerbegebiet");
        break;
    }
    case 347150:
    {
        returnValue = F("Zum Gewerbepark");
        break;
    }
    case 347151:
    {
        returnValue = F("Zum Gewerbering");
        break;
    }
    case 347152:
    {
        returnValue = F("Zum Geyener Kreuz");
        break;
    }
    case 347153:
    {
        returnValue = F("Zum Geyersberg");
        break;
    }
    case 347154:
    {
        returnValue = F("Zum Gibbach");
        break;
    }
    case 347155:
    {
        returnValue = F("Zum Giebelwald");
        break;
    }
    case 347156:
    {
        returnValue = F("Zum Giebichenstein");
        break;
    }
    case 347157:
    {
        returnValue = F("Zum Gierschberg");
        break;
    }
    case 347158:
    {
        returnValue = F("Zum Giersgrund");
        break;
    }
    case 347159:
    {
        returnValue = F("Zum Giersseifen");
        break;
    }
    case 347160:
    {
        returnValue = F("Zum Giertmoos");
        break;
    }
    case 347161:
    {
        returnValue = F("Zum Gieseberg");
        break;
    }
    case 347162:
    {
        returnValue = F("Zum Giesenfeld");
        break;
    }
    case 347163:
    {
        returnValue = F("Zum Giesenhof");
        break;
    }
    case 347164:
    {
        returnValue = F("Zum Gifizsee");
        break;
    }
    case 347165:
    {
        returnValue = F("Zum Gilsablick");
        break;
    }
    case 347166:
    {
        returnValue = F("Zum Gilsatal");
        break;
    }
    case 347167:
    {
        returnValue = F("Zum Ginsterberg");
        break;
    }
    case 347168:
    {
        returnValue = F("Zum Ginsterknöchel");
        break;
    }
    case 347169:
    {
        returnValue = F("Zum Gipelhof");
        break;
    }
    case 347170:
    {
        returnValue = F("Zum Gipfel");
        break;
    }
    case 347171:
    {
        returnValue = F("Zum Gipsberg");
        break;
    }
    case 347172:
    {
        returnValue = F("Zum Glasberg");
        break;
    }
    case 347173:
    {
        returnValue = F("Zum Glaser");
        break;
    }
    case 347174:
    {
        returnValue = F("Zum Glaubensberg");
        break;
    }
    case 347175:
    {
        returnValue = F("Zum Gleichen");
        break;
    }
    case 347176:
    {
        returnValue = F("Zum Gleis-Dreieck");
        break;
    }
    case 347177:
    {
        returnValue = F("Zum Glessener Bach");
        break;
    }
    case 347178:
    {
        returnValue = F("Zum Glessenstein");
        break;
    }
    case 347179:
    {
        returnValue = F("Zum Glindacker");
        break;
    }
    case 347180:
    {
        returnValue = F("Zum Glockenbach");
        break;
    }
    case 347181:
    {
        returnValue = F("Zum Glockenberg");
        break;
    }
    case 347182:
    {
        returnValue = F("Zum Glockenturm");
        break;
    }
    case 347183:
    {
        returnValue = F("Zum Glockenzehnten");
        break;
    }
    case 347184:
    {
        returnValue = F("Zum Glockshimmelsberg");
        break;
    }
    case 347185:
    {
        returnValue = F("Zum Glückfeld");
        break;
    }
    case 347186:
    {
        returnValue = F("Zum Glückmann");
        break;
    }
    case 347187:
    {
        returnValue = F("Zum Goethestein");
        break;
    }
    case 347188:
    {
        returnValue = F("Zum Goetheturm");
        break;
    }
    case 347189:
    {
        returnValue = F("Zum Gogenberg");
        break;
    }
    case 347190:
    {
        returnValue = F("Zum Gogericht");
        break;
    }
    case 347191:
    {
        returnValue = F("Zum Goldacker");
        break;
    }
    case 347192:
    {
        returnValue = F("Zum Goldbach");
        break;
    }
    case 347193:
    {
        returnValue = F("Zum Goldberg");
        break;
    }
    case 347194:
    {
        returnValue = F("Zum Goldborn");
        break;
    }
    case 347195:
    {
        returnValue = F("Zum Goldenberg");
        break;
    }
    case 347196:
    {
        returnValue = F("Zum Goldenen Acker");
        break;
    }
    case 347197:
    {
        returnValue = F("Zum Goldenen Frieden");
        break;
    }
    case 347198:
    {
        returnValue = F("Zum Goldenen Stern");
        break;
    }
    case 347199:
    {
        returnValue = F("Zum Goldesacker");
        break;
    }
    case 347200:
    {
        returnValue = F("Zum Goldesberg");
        break;
    }
    case 347201:
    {
        returnValue = F("Zum Goldfischpfad");
        break;
    }
    case 347202:
    {
        returnValue = F("Zum Goldkreuz");
        break;
    }
    case 347203:
    {
        returnValue = F("Zum Golfpark");
        break;
    }
    case 347204:
    {
        returnValue = F("Zum Golfplatz");
        break;
    }
    case 347205:
    {
        returnValue = F("Zum Golkblick");
        break;
    }
    case 347206:
    {
        returnValue = F("Zum Golzenberg");
        break;
    }
    case 347207:
    {
        returnValue = F("Zum Gorendiek");
        break;
    }
    case 347208:
    {
        returnValue = F("Zum Gosacker");
        break;
    }
    case 347209:
    {
        returnValue = F("Zum Gosebach");
        break;
    }
    case 347210:
    {
        returnValue = F("Zum Gosetal");
        break;
    }
    case 347211:
    {
        returnValue = F("Zum Gothaer Schlossblick");
        break;
    }
    case 347212:
    {
        returnValue = F("Zum Gothenbeek");
        break;
    }
    case 347213:
    {
        returnValue = F("Zum Gottesacker");
        break;
    }
    case 347214:
    {
        returnValue = F("Zum Gottsacker");
        break;
    }
    case 347215:
    {
        returnValue = F("Zum Gottschalkhof");
        break;
    }
    case 347216:
    {
        returnValue = F("Zum Graben");
        break;
    }
    case 347217:
    {
        returnValue = F("Zum Grabengut");
        break;
    }
    case 347218:
    {
        returnValue = F("Zum Grabenhof");
        break;
    }
    case 347219:
    {
        returnValue = F("Zum Grabenstück");
        break;
    }
    case 347220:
    {
        returnValue = F("Zum Grafenthal");
        break;
    }
    case 347221:
    {
        returnValue = F("Zum Grafhorn");
        break;
    }
    case 347222:
    {
        returnValue = F("Zum Gramberg");
        break;
    }
    case 347223:
    {
        returnValue = F("Zum Graner Berg");
        break;
    }
    case 347224:
    {
        returnValue = F("Zum Gransbach");
        break;
    }
    case 347225:
    {
        returnValue = F("Zum Grasbruch");
        break;
    }
    case 347226:
    {
        returnValue = F("Zum Grasegrund");
        break;
    }
    case 347227:
    {
        returnValue = F("Zum Grauen Dorn");
        break;
    }
    case 347228:
    {
        returnValue = F("Zum Grauen Stein");
        break;
    }
    case 347229:
    {
        returnValue = F("Zum Grauenstein");
        break;
    }
    case 347230:
    {
        returnValue = F("Zum Graurock");
        break;
    }
    case 347231:
    {
        returnValue = F("Zum Grausen Baum");
        break;
    }
    case 347232:
    {
        returnValue = F("Zum Gravensteiner");
        break;
    }
    case 347233:
    {
        returnValue = F("Zum Greenberger Kamp");
        break;
    }
    case 347234:
    {
        returnValue = F("Zum Greetler");
        break;
    }
    case 347235:
    {
        returnValue = F("Zum Greffling");
        break;
    }
    case 347236:
    {
        returnValue = F("Zum Greifenstein");
        break;
    }
    case 347237:
    {
        returnValue = F("Zum Grellberg");
        break;
    }
    case 347238:
    {
        returnValue = F("Zum Gremmberg");
        break;
    }
    case 347239:
    {
        returnValue = F("Zum Grengel");
        break;
    }
    case 347240:
    {
        returnValue = F("Zum Grenicher Hof");
        break;
    }
    case 347241:
    {
        returnValue = F("Zum Grenzbach");
        break;
    }
    case 347242:
    {
        returnValue = F("Zum Grenzberg");
        break;
    }
    case 347243:
    {
        returnValue = F("Zum Grenzeberg");
        break;
    }
    case 347244:
    {
        returnValue = F("Zum Grenzfließ");
        break;
    }
    case 347245:
    {
        returnValue = F("Zum Grenzgraben");
        break;
    }
    case 347246:
    {
        returnValue = F("Zum Grenzstein");
        break;
    }
    case 347247:
    {
        returnValue = F("Zum Grenztal");
        break;
    }
    case 347248:
    {
        returnValue = F("Zum Grenzwall");
        break;
    }
    case 347249:
    {
        returnValue = F("Zum Grenzweg");
        break;
    }
    case 347250:
    {
        returnValue = F("Zum Greppiner Wehr");
        break;
    }
    case 347251:
    {
        returnValue = F("Zum Gressenteich");
        break;
    }
    case 347252:
    {
        returnValue = F("Zum Greumesberg");
        break;
    }
    case 347253:
    {
        returnValue = F("Zum Greut");
        break;
    }
    case 347254:
    {
        returnValue = F("Zum Griechel");
        break;
    }
    case 347255:
    {
        returnValue = F("Zum Griepshop");
        break;
    }
    case 347256:
    {
        returnValue = F("Zum Gries");
        break;
    }
    case 347257:
    {
        returnValue = F("Zum Griesenturm");
        break;
    }
    case 347258:
    {
        returnValue = F("Zum Griesle");
        break;
    }
    case 347259:
    {
        returnValue = F("Zum Grillensee");
        break;
    }
    case 347260:
    {
        returnValue = F("Zum Grillplatz");
        break;
    }
    case 347261:
    {
        returnValue = F("Zum Grimmes");
        break;
    }
    case 347262:
    {
        returnValue = F("Zum Grimmewald");
        break;
    }
    case 347263:
    {
        returnValue = F("Zum Grimmseifen");
        break;
    }
    case 347264:
    {
        returnValue = F("Zum Grimmstein");
        break;
    }
    case 347265:
    {
        returnValue = F("Zum Grind");
        break;
    }
    case 347266:
    {
        returnValue = F("Zum Groden");
        break;
    }
    case 347267:
    {
        returnValue = F("Zum Groenewald");
        break;
    }
    case 347268:
    {
        returnValue = F("Zum Grohberg");
        break;
    }
    case 347269:
    {
        returnValue = F("Zum Groll");
        break;
    }
    case 347270:
    {
        returnValue = F("Zum Grossen Berge");
        break;
    }
    case 347271:
    {
        returnValue = F("Zum Großen Ahr");
        break;
    }
    case 347272:
    {
        returnValue = F("Zum Großen Ahren");
        break;
    }
    case 347273:
    {
        returnValue = F("Zum Großen Bruch");
        break;
    }
    case 347274:
    {
        returnValue = F("Zum Großen Busch");
        break;
    }
    case 347275:
    {
        returnValue = F("Zum Großen Deich");
        break;
    }
    case 347276:
    {
        returnValue = F("Zum Großen Esch");
        break;
    }
    case 347277:
    {
        returnValue = F("Zum Großen Feld");
        break;
    }
    case 347278:
    {
        returnValue = F("Zum Großen Flag");
        break;
    }
    case 347279:
    {
        returnValue = F("Zum Großen Freien");
        break;
    }
    case 347280:
    {
        returnValue = F("Zum Großen Herzberg");
        break;
    }
    case 347281:
    {
        returnValue = F("Zum Großen Holz");
        break;
    }
    case 347282:
    {
        returnValue = F("Zum Großen Kamp");
        break;
    }
    case 347283:
    {
        returnValue = F("Zum Großen Karl");
        break;
    }
    case 347284:
    {
        returnValue = F("Zum Großen Lottschesee");
        break;
    }
    case 347285:
    {
        returnValue = F("Zum Großen Moor");
        break;
    }
    case 347286:
    {
        returnValue = F("Zum Großen Pfahl");
        break;
    }
    case 347287:
    {
        returnValue = F("Zum Großen Schlatt");
        break;
    }
    case 347288:
    {
        returnValue = F("Zum Großen See");
        break;
    }
    case 347289:
    {
        returnValue = F("Zum Großen Siek");
        break;
    }
    case 347290:
    {
        returnValue = F("Zum Großen Stein");
        break;
    }
    case 347291:
    {
        returnValue = F("Zum Großen Teich");
        break;
    }
    case 347292:
    {
        returnValue = F("Zum Großen Wald");
        break;
    }
    case 347293:
    {
        returnValue = F("Zum Großen Wasser");
        break;
    }
    case 347294:
    {
        returnValue = F("Zum Großen Zernsee");
        break;
    }
    case 347295:
    {
        returnValue = F("Zum Großen Zug");
        break;
    }
    case 347296:
    {
        returnValue = F("Zum Großenbach");
        break;
    }
    case 347297:
    {
        returnValue = F("Zum Großschlag");
        break;
    }
    case 347298:
    {
        returnValue = F("Zum Großsteingrab");
        break;
    }
    case 347299:
    {
        returnValue = F("Zum Großteich");
        break;
    }
    case 347300:
    {
        returnValue = F("Zum Großwald");
        break;
    }
    case 347301:
    {
        returnValue = F("Zum Grubengraben");
        break;
    }
    case 347302:
    {
        returnValue = F("Zum Grubholz");
        break;
    }
    case 347303:
    {
        returnValue = F("Zum Grubstock");
        break;
    }
    case 347304:
    {
        returnValue = F("Zum Grumbach");
        break;
    }
    case 347305:
    {
        returnValue = F("Zum Grummweg");
        break;
    }
    case 347306:
    {
        returnValue = F("Zum Grund");
        break;
    }
    case 347307:
    {
        returnValue = F("Zum Grundbach");
        break;
    }
    case 347308:
    {
        returnValue = F("Zum Grundbachtal");
        break;
    }
    case 347309:
    {
        returnValue = F("Zum Grundberg");
        break;
    }
    case 347310:
    {
        returnValue = F("Zum Grundbergsee");
        break;
    }
    case 347311:
    {
        returnValue = F("Zum Grunde");
        break;
    }
    case 347312:
    {
        returnValue = F("Zum Grundlosen Schlatt");
        break;
    }
    case 347313:
    {
        returnValue = F("Zum Grundsberg");
        break;
    }
    case 347314:
    {
        returnValue = F("Zum Grundtal");
        break;
    }
    case 347315:
    {
        returnValue = F("Zum Grunewald");
        break;
    }
    case 347316:
    {
        returnValue = F("Zum Gruthügel");
        break;
    }
    case 347317:
    {
        returnValue = F("Zum Gräb");
        break;
    }
    case 347318:
    {
        returnValue = F("Zum Gräfenhof");
        break;
    }
    case 347319:
    {
        returnValue = F("Zum Grühlingsstollen");
        break;
    }
    case 347320:
    {
        returnValue = F("Zum Grünacker");
        break;
    }
    case 347321:
    {
        returnValue = F("Zum Grünbach");
        break;
    }
    case 347322:
    {
        returnValue = F("Zum Grünbusch");
        break;
    }
    case 347323:
    {
        returnValue = F("Zum Gründchen");
        break;
    }
    case 347324:
    {
        returnValue = F("Zum Gründel");
        break;
    }
    case 347325:
    {
        returnValue = F("Zum Gründle");
        break;
    }
    case 347326:
    {
        returnValue = F("Zum Gründlein");
        break;
    }
    case 347327:
    {
        returnValue = F("Zum Grünen");
        break;
    }
    case 347328:
    {
        returnValue = F("Zum Grünen Born");
        break;
    }
    case 347329:
    {
        returnValue = F("Zum Grünen Haus");
        break;
    }
    case 347330:
    {
        returnValue = F("Zum Grünen Hirsch");
        break;
    }
    case 347331:
    {
        returnValue = F("Zum Grünen Moor");
        break;
    }
    case 347332:
    {
        returnValue = F("Zum Grünen Saal");
        break;
    }
    case 347333:
    {
        returnValue = F("Zum Grünen Siefen");
        break;
    }
    case 347334:
    {
        returnValue = F("Zum Grünen Siepen");
        break;
    }
    case 347335:
    {
        returnValue = F("Zum Grünen Sitz");
        break;
    }
    case 347336:
    {
        returnValue = F("Zum Grünen Stern");
        break;
    }
    case 347337:
    {
        returnValue = F("Zum Grünen Tal");
        break;
    }
    case 347338:
    {
        returnValue = F("Zum Grünen Ufer");
        break;
    }
    case 347339:
    {
        returnValue = F("Zum Grünen Wald");
        break;
    }
    case 347340:
    {
        returnValue = F("Zum Grünen Weg");
        break;
    }
    case 347341:
    {
        returnValue = F("Zum Grünen Winkel");
        break;
    }
    case 347342:
    {
        returnValue = F("Zum Grünert");
        break;
    }
    case 347343:
    {
        returnValue = F("Zum Grüngürtel");
        break;
    }
    case 347344:
    {
        returnValue = F("Zum Grünhof");
        break;
    }
    case 347345:
    {
        returnValue = F("Zum Grünnen");
        break;
    }
    case 347346:
    {
        returnValue = F("Zum Grünshof");
        break;
    }
    case 347347:
    {
        returnValue = F("Zum Grüntal");
        break;
    }
    case 347348:
    {
        returnValue = F("Zum Guggenbühl");
        break;
    }
    case 347349:
    {
        returnValue = F("Zum Gumpetal");
        break;
    }
    case 347350:
    {
        returnValue = F("Zum Gunterstal");
        break;
    }
    case 347351:
    {
        returnValue = F("Zum Gut");
        break;
    }
    case 347352:
    {
        returnValue = F("Zum Gut Bade");
        break;
    }
    case 347353:
    {
        returnValue = F("Zum Gut Bohlendorf");
        break;
    }
    case 347354:
    {
        returnValue = F("Zum Gut Heiligendonk");
        break;
    }
    case 347355:
    {
        returnValue = F("Zum Gut Holzkamp");
        break;
    }
    case 347356:
    {
        returnValue = F("Zum Gut Nette");
        break;
    }
    case 347357:
    {
        returnValue = F("Zum Gut Neuhof");
        break;
    }
    case 347358:
    {
        returnValue = F("Zum Gutacker");
        break;
    }
    case 347359:
    {
        returnValue = F("Zum Gute");
        break;
    }
    case 347360:
    {
        returnValue = F("Zum Guten Born");
        break;
    }
    case 347361:
    {
        returnValue = F("Zum Guten Brunnen");
        break;
    }
    case 347362:
    {
        returnValue = F("Zum Guten Hirten");
        break;
    }
    case 347363:
    {
        returnValue = F("Zum Guten Hof");
        break;
    }
    case 347364:
    {
        returnValue = F("Zum Gutewasser");
        break;
    }
    case 347365:
    {
        returnValue = F("Zum Gutshaus");
        break;
    }
    case 347366:
    {
        returnValue = F("Zum Gutshof");
        break;
    }
    case 347367:
    {
        returnValue = F("Zum Gutspark");
        break;
    }
    case 347368:
    {
        returnValue = F("Zum Gußkamp");
        break;
    }
    case 347369:
    {
        returnValue = F("Zum Gymnasium");
        break;
    }
    case 347370:
    {
        returnValue = F("Zum Gänsacker");
        break;
    }
    case 347371:
    {
        returnValue = F("Zum Gänsberg");
        break;
    }
    case 347372:
    {
        returnValue = F("Zum Gänseberg");
        break;
    }
    case 347373:
    {
        returnValue = F("Zum Gänseblümchen");
        break;
    }
    case 347374:
    {
        returnValue = F("Zum Gänseborn");
        break;
    }
    case 347375:
    {
        returnValue = F("Zum Gänsebrunnen");
        break;
    }
    case 347376:
    {
        returnValue = F("Zum Gänsefleck");
        break;
    }
    case 347377:
    {
        returnValue = F("Zum Gänsegarten");
        break;
    }
    case 347378:
    {
        returnValue = F("Zum Gänsegraben");
        break;
    }
    case 347379:
    {
        returnValue = F("Zum Gänseland");
        break;
    }
    case 347380:
    {
        returnValue = F("Zum Gänseteich");
        break;
    }
    case 347381:
    {
        returnValue = F("Zum Gänsewall");
        break;
    }
    case 347382:
    {
        returnValue = F("Zum Gänsholz");
        break;
    }
    case 347383:
    {
        returnValue = F("Zum Gänswies'chen");
        break;
    }
    case 347384:
    {
        returnValue = F("Zum Gärtnerberg");
        break;
    }
    case 347385:
    {
        returnValue = F("Zum Gärtnerland");
        break;
    }
    case 347386:
    {
        returnValue = F("Zum Gässel");
        break;
    }
    case 347387:
    {
        returnValue = F("Zum Gässeler");
        break;
    }
    case 347388:
    {
        returnValue = F("Zum Göhlenteich");
        break;
    }
    case 347389:
    {
        returnValue = F("Zum Göschetal");
        break;
    }
    case 347390:
    {
        returnValue = F("Zum Götterhain");
        break;
    }
    case 347391:
    {
        returnValue = F("Zum Götzenberg");
        break;
    }
    case 347392:
    {
        returnValue = F("Zum Götzenbusch");
        break;
    }
    case 347393:
    {
        returnValue = F("Zum Gürtel");
        break;
    }
    case 347394:
    {
        returnValue = F("Zum Güsgensgraben");
        break;
    }
    case 347395:
    {
        returnValue = F("Zum Güterbahnhof");
        break;
    }
    case 347396:
    {
        returnValue = F("Zum Haag");
        break;
    }
    case 347397:
    {
        returnValue = F("Zum Haakenholz");
        break;
    }
    case 347398:
    {
        returnValue = F("Zum Haarberg");
        break;
    }
    case 347399:
    {
        returnValue = F("Zum Haarstrang");
        break;
    }
    case 347400:
    {
        returnValue = F("Zum Habberg");
        break;
    }
    case 347401:
    {
        returnValue = F("Zum Haberfeld");
        break;
    }
    case 347402:
    {
        returnValue = F("Zum Haberland");
        break;
    }
    case 347403:
    {
        returnValue = F("Zum Habichtsfang");
        break;
    }
    case 347404:
    {
        returnValue = F("Zum Habichtstal");
        break;
    }
    case 347405:
    {
        returnValue = F("Zum Habichtswald");
        break;
    }
    case 347406:
    {
        returnValue = F("Zum Habuche");
        break;
    }
    case 347407:
    {
        returnValue = F("Zum Hach");
        break;
    }
    case 347408:
    {
        returnValue = F("Zum Hachenbach");
        break;
    }
    case 347409:
    {
        returnValue = F("Zum Hachepark");
        break;
    }
    case 347410:
    {
        returnValue = F("Zum Hachetal");
        break;
    }
    case 347411:
    {
        returnValue = F("Zum Hachthal");
        break;
    }
    case 347412:
    {
        returnValue = F("Zum Hachtsgraben");
        break;
    }
    case 347413:
    {
        returnValue = F("Zum Hackeberg");
        break;
    }
    case 347414:
    {
        returnValue = F("Zum Hackelberg");
        break;
    }
    case 347415:
    {
        returnValue = F("Zum Hackerhof");
        break;
    }
    case 347416:
    {
        returnValue = F("Zum Hafen");
        break;
    }
    case 347417:
    {
        returnValue = F("Zum Hafergrund");
        break;
    }
    case 347418:
    {
        returnValue = F("Zum Haferkamp");
        break;
    }
    case 347419:
    {
        returnValue = F("Zum Haff");
        break;
    }
    case 347420:
    {
        returnValue = F("Zum Haffblick");
        break;
    }
    case 347421:
    {
        returnValue = F("Zum Hafkorn");
        break;
    }
    case 347422:
    {
        returnValue = F("Zum Hagebrook");
        break;
    }
    case 347423:
    {
        returnValue = F("Zum Hagelkreuz");
        break;
    }
    case 347424:
    {
        returnValue = F("Zum Hagen");
        break;
    }
    case 347425:
    {
        returnValue = F("Zum Hagenbach");
        break;
    }
    case 347426:
    {
        returnValue = F("Zum Hahletal");
        break;
    }
    case 347427:
    {
        returnValue = F("Zum Hahn");
        break;
    }
    case 347428:
    {
        returnValue = F("Zum Hahnacker");
        break;
    }
    case 347429:
    {
        returnValue = F("Zum Hahnberg");
        break;
    }
    case 347430:
    {
        returnValue = F("Zum Hahndorn");
        break;
    }
    case 347431:
    {
        returnValue = F("Zum Hahnefehn");
        break;
    }
    case 347432:
    {
        returnValue = F("Zum Hahnekamp");
        break;
    }
    case 347433:
    {
        returnValue = F("Zum Hahnel");
        break;
    }
    case 347434:
    {
        returnValue = F("Zum Hahnenbach");
        break;
    }
    case 347435:
    {
        returnValue = F("Zum Hahnenberg");
        break;
    }
    case 347436:
    {
        returnValue = F("Zum Hahnenbusch");
        break;
    }
    case 347437:
    {
        returnValue = F("Zum Hahnengrund");
        break;
    }
    case 347438:
    {
        returnValue = F("Zum Hahnenhügel");
        break;
    }
    case 347439:
    {
        returnValue = F("Zum Hahnenkamp");
        break;
    }
    case 347440:
    {
        returnValue = F("Zum Hahnenmoor");
        break;
    }
    case 347441:
    {
        returnValue = F("Zum Hahnenschrei");
        break;
    }
    case 347442:
    {
        returnValue = F("Zum Hahnershof");
        break;
    }
    case 347443:
    {
        returnValue = F("Zum Hahnes");
        break;
    }
    case 347444:
    {
        returnValue = F("Zum Hahnkopf");
        break;
    }
    case 347445:
    {
        returnValue = F("Zum Haidenfeld");
        break;
    }
    case 347446:
    {
        returnValue = F("Zum Haideteich");
        break;
    }
    case 347447:
    {
        returnValue = F("Zum Haidküppel");
        break;
    }
    case 347448:
    {
        returnValue = F("Zum Haidorn");
        break;
    }
    case 347449:
    {
        returnValue = F("Zum Haidwald");
        break;
    }
    case 347450:
    {
        returnValue = F("Zum Hain");
        break;
    }
    case 347451:
    {
        returnValue = F("Zum Hainbach");
        break;
    }
    case 347452:
    {
        returnValue = F("Zum Hainberg");
        break;
    }
    case 347453:
    {
        returnValue = F("Zum Hainbruch");
        break;
    }
    case 347454:
    {
        returnValue = F("Zum Hainbusch");
        break;
    }
    case 347455:
    {
        returnValue = F("Zum Haingraben");
        break;
    }
    case 347456:
    {
        returnValue = F("Zum Hainhof");
        break;
    }
    case 347457:
    {
        returnValue = F("Zum Hainholz");
        break;
    }
    case 347458:
    {
        returnValue = F("Zum Hainich");
        break;
    }
    case 347459:
    {
        returnValue = F("Zum Hainsgraben");
        break;
    }
    case 347460:
    {
        returnValue = F("Zum Haintor");
        break;
    }
    case 347461:
    {
        returnValue = F("Zum Hakelberg");
        break;
    }
    case 347462:
    {
        returnValue = F("Zum Haken");
        break;
    }
    case 347463:
    {
        returnValue = F("Zum Hakenberg");
        break;
    }
    case 347464:
    {
        returnValue = F("Zum Hakenstal");
        break;
    }
    case 347465:
    {
        returnValue = F("Zum Halben Mond");
        break;
    }
    case 347466:
    {
        returnValue = F("Zum Halberg");
        break;
    }
    case 347467:
    {
        returnValue = F("Zum Halbmond");
        break;
    }
    case 347468:
    {
        returnValue = F("Zum Halbser Teich");
        break;
    }
    case 347469:
    {
        returnValue = F("Zum Haldenblick");
        break;
    }
    case 347470:
    {
        returnValue = F("Zum Haldenbrunnen");
        break;
    }
    case 347471:
    {
        returnValue = F("Zum Halfensberg");
        break;
    }
    case 347472:
    {
        returnValue = F("Zum Halkstein");
        break;
    }
    case 347473:
    {
        returnValue = F("Zum Hallenbad");
        break;
    }
    case 347474:
    {
        returnValue = F("Zum Hallenberg");
        break;
    }
    case 347475:
    {
        returnValue = F("Zum Hallerbach");
        break;
    }
    case 347476:
    {
        returnValue = F("Zum Hallerberg");
        break;
    }
    case 347477:
    {
        returnValue = F("Zum Hallert");
        break;
    }
    case 347478:
    {
        returnValue = F("Zum Hallgarten");
        break;
    }
    case 347479:
    {
        returnValue = F("Zum Haltenhübel");
        break;
    }
    case 347480:
    {
        returnValue = F("Zum Haltepunkt");
        break;
    }
    case 347481:
    {
        returnValue = F("Zum Hambach");
        break;
    }
    case 347482:
    {
        returnValue = F("Zum Hamberg");
        break;
    }
    case 347483:
    {
        returnValue = F("Zum Hamborn");
        break;
    }
    case 347484:
    {
        returnValue = F("Zum Hambusch");
        break;
    }
    case 347485:
    {
        returnValue = F("Zum Hambühre");
        break;
    }
    case 347486:
    {
        returnValue = F("Zum Hammelsberg");
        break;
    }
    case 347487:
    {
        returnValue = F("Zum Hammer");
        break;
    }
    case 347488:
    {
        returnValue = F("Zum Hammerbach");
        break;
    }
    case 347489:
    {
        returnValue = F("Zum Hammerfeld");
        break;
    }
    case 347490:
    {
        returnValue = F("Zum Hammergrund");
        break;
    }
    case 347491:
    {
        returnValue = F("Zum Hammerseifen");
        break;
    }
    case 347492:
    {
        returnValue = F("Zum Hammrich");
        break;
    }
    case 347493:
    {
        returnValue = F("Zum Hampberg");
        break;
    }
    case 347494:
    {
        returnValue = F("Zum Handenberg");
        break;
    }
    case 347495:
    {
        returnValue = F("Zum Handgemahl");
        break;
    }
    case 347496:
    {
        returnValue = F("Zum Handsteg");
        break;
    }
    case 347497:
    {
        returnValue = F("Zum Handtuch");
        break;
    }
    case 347498:
    {
        returnValue = F("Zum Handwald");
        break;
    }
    case 347499:
    {
        returnValue = F("Zum Handweiser");
        break;
    }
    case 347500:
    {
        returnValue = F("Zum Handwerkerhof");
        break;
    }
    case 347501:
    {
        returnValue = F("Zum Hanekay");
        break;
    }
    case 347502:
    {
        returnValue = F("Zum Hang");
        break;
    }
    case 347503:
    {
        returnValue = F("Zum Hangenberg");
        break;
    }
    case 347504:
    {
        returnValue = F("Zum Hannems Born");
        break;
    }
    case 347505:
    {
        returnValue = F("Zum Hannenberg");
        break;
    }
    case 347506:
    {
        returnValue = F("Zum Hansberg");
        break;
    }
    case 347507:
    {
        returnValue = F("Zum Harbel");
        break;
    }
    case 347508:
    {
        returnValue = F("Zum Hardautal");
        break;
    }
    case 347509:
    {
        returnValue = F("Zum Hardenberger Schloß");
        break;
    }
    case 347510:
    {
        returnValue = F("Zum Hardt");
        break;
    }
    case 347511:
    {
        returnValue = F("Zum Hardtbühl");
        break;
    }
    case 347512:
    {
        returnValue = F("Zum Hardtchen");
        break;
    }
    case 347513:
    {
        returnValue = F("Zum Hardtkopf");
        break;
    }
    case 347514:
    {
        returnValue = F("Zum Hardtwald");
        break;
    }
    case 347515:
    {
        returnValue = F("Zum Hargesheimer Pfad");
        break;
    }
    case 347516:
    {
        returnValue = F("Zum Harlich");
        break;
    }
    case 347517:
    {
        returnValue = F("Zum Harnisch");
        break;
    }
    case 347518:
    {
        returnValue = F("Zum Harpenscheid");
        break;
    }
    case 347519:
    {
        returnValue = F("Zum Harrasfelsen");
        break;
    }
    case 347520:
    {
        returnValue = F("Zum Harsbach");
        break;
    }
    case 347521:
    {
        returnValue = F("Zum Harsebruch");
        break;
    }
    case 347522:
    {
        returnValue = F("Zum Harster Gutshof");
        break;
    }
    case 347523:
    {
        returnValue = F("Zum Hart");
        break;
    }
    case 347524:
    {
        returnValue = F("Zum Hartfeld");
        break;
    }
    case 347525:
    {
        returnValue = F("Zum Harthof");
        break;
    }
    case 347526:
    {
        returnValue = F("Zum Harthsgrund");
        break;
    }
    case 347527:
    {
        returnValue = F("Zum Hartlmühlberg");
        break;
    }
    case 347528:
    {
        returnValue = F("Zum Hartsteinwerk");
        break;
    }
    case 347529:
    {
        returnValue = F("Zum Hartwedel");
        break;
    }
    case 347530:
    {
        returnValue = F("Zum Hartzberg");
        break;
    }
    case 347531:
    {
        returnValue = F("Zum Harzblick");
        break;
    }
    case 347532:
    {
        returnValue = F("Zum Harzeck");
        break;
    }
    case 347533:
    {
        returnValue = F("Zum Harzeckweg");
        break;
    }
    case 347534:
    {
        returnValue = F("Zum Hasbach");
        break;
    }
    case 347535:
    {
        returnValue = F("Zum Hasebruch");
        break;
    }
    case 347536:
    {
        returnValue = F("Zum Hasekamp");
        break;
    }
    case 347537:
    {
        returnValue = F("Zum Hasel");
        break;
    }
    case 347538:
    {
        returnValue = F("Zum Haselauer Moor");
        break;
    }
    case 347539:
    {
        returnValue = F("Zum Haselborn");
        break;
    }
    case 347540:
    {
        returnValue = F("Zum Haselbusch");
        break;
    }
    case 347541:
    {
        returnValue = F("Zum Haseler Berg");
        break;
    }
    case 347542:
    {
        returnValue = F("Zum Haselfeld");
        break;
    }
    case 347543:
    {
        returnValue = F("Zum Haselgraben");
        break;
    }
    case 347544:
    {
        returnValue = F("Zum Haselhorst");
        break;
    }
    case 347545:
    {
        returnValue = F("Zum Haselloh");
        break;
    }
    case 347546:
    {
        returnValue = F("Zum Haselsee");
        break;
    }
    case 347547:
    {
        returnValue = F("Zum Haseltal");
        break;
    }
    case 347548:
    {
        returnValue = F("Zum Hasen");
        break;
    }
    case 347549:
    {
        returnValue = F("Zum Hasenacker");
        break;
    }
    case 347550:
    {
        returnValue = F("Zum Hasenanger");
        break;
    }
    case 347551:
    {
        returnValue = F("Zum Hasenberg");
        break;
    }
    case 347552:
    {
        returnValue = F("Zum Hasenborn");
        break;
    }
    case 347553:
    {
        returnValue = F("Zum Hasenbusch");
        break;
    }
    case 347554:
    {
        returnValue = F("Zum Hasenfeld");
        break;
    }
    case 347555:
    {
        returnValue = F("Zum Hasenforst");
        break;
    }
    case 347556:
    {
        returnValue = F("Zum Hasengarten");
        break;
    }
    case 347557:
    {
        returnValue = F("Zum Hasengraben");
        break;
    }
    case 347558:
    {
        returnValue = F("Zum Hasengrund");
        break;
    }
    case 347559:
    {
        returnValue = F("Zum Hasenholt");
        break;
    }
    case 347560:
    {
        returnValue = F("Zum Hasenhölzken");
        break;
    }
    case 347561:
    {
        returnValue = F("Zum Hasenkamp");
        break;
    }
    case 347562:
    {
        returnValue = F("Zum Hasenkampsplatz");
        break;
    }
    case 347563:
    {
        returnValue = F("Zum Hasenkippel");
        break;
    }
    case 347564:
    {
        returnValue = F("Zum Hasenkopf");
        break;
    }
    case 347565:
    {
        returnValue = F("Zum Hasenloch");
        break;
    }
    case 347566:
    {
        returnValue = F("Zum Hasenmoos");
        break;
    }
    case 347567:
    {
        returnValue = F("Zum Hasenpohl");
        break;
    }
    case 347568:
    {
        returnValue = F("Zum Hasenrech");
        break;
    }
    case 347569:
    {
        returnValue = F("Zum Hasensprung");
        break;
    }
    case 347570:
    {
        returnValue = F("Zum Hasenstock");
        break;
    }
    case 347571:
    {
        returnValue = F("Zum Hasenwinkel");
        break;
    }
    case 347572:
    {
        returnValue = F("Zum Hasenwäldchen");
        break;
    }
    case 347573:
    {
        returnValue = F("Zum Hasenwäldle");
        break;
    }
    case 347574:
    {
        returnValue = F("Zum Hasetal");
        break;
    }
    case 347575:
    {
        returnValue = F("Zum Haskenstein");
        break;
    }
    case 347576:
    {
        returnValue = F("Zum Haskert");
        break;
    }
    case 347577:
    {
        returnValue = F("Zum Haspel");
        break;
    }
    case 347578:
    {
        returnValue = F("Zum Hasseer Bahnhof");
        break;
    }
    case 347579:
    {
        returnValue = F("Zum Hassel");
        break;
    }
    case 347580:
    {
        returnValue = F("Zum Hasselbach");
        break;
    }
    case 347581:
    {
        returnValue = F("Zum Hasselberg");
        break;
    }
    case 347582:
    {
        returnValue = F("Zum Hasselndahle");
        break;
    }
    case 347583:
    {
        returnValue = F("Zum Hasselweg");
        break;
    }
    case 347584:
    {
        returnValue = F("Zum Hassenborn");
        break;
    }
    case 347585:
    {
        returnValue = F("Zum Hattenberg");
        break;
    }
    case 347586:
    {
        returnValue = F("Zum Hatzenbüsch");
        break;
    }
    case 347587:
    {
        returnValue = F("Zum Hau");
        break;
    }
    case 347588:
    {
        returnValue = F("Zum Haubert");
        break;
    }
    case 347589:
    {
        returnValue = F("Zum Hauenstein");
        break;
    }
    case 347590:
    {
        returnValue = F("Zum Hauental");
        break;
    }
    case 347591:
    {
        returnValue = F("Zum Haufbuck");
        break;
    }
    case 347592:
    {
        returnValue = F("Zum Haug");
        break;
    }
    case 347593:
    {
        returnValue = F("Zum Hauk");
        break;
    }
    case 347594:
    {
        returnValue = F("Zum Haun");
        break;
    }
    case 347595:
    {
        returnValue = F("Zum Haunert");
        break;
    }
    case 347596:
    {
        returnValue = F("Zum Hauptbad");
        break;
    }
    case 347597:
    {
        returnValue = F("Zum Hauptfriedhof");
        break;
    }
    case 347598:
    {
        returnValue = F("Zum Hauptmannsberg");
        break;
    }
    case 347599:
    {
        returnValue = F("Zum Haus Hülsdonk");
        break;
    }
    case 347600:
    {
        returnValue = F("Zum Haus Millen");
        break;
    }
    case 347601:
    {
        returnValue = F("Zum Hausberg");
        break;
    }
    case 347602:
    {
        returnValue = F("Zum Hausbergturm");
        break;
    }
    case 347603:
    {
        returnValue = F("Zum Hauseberg");
        break;
    }
    case 347604:
    {
        returnValue = F("Zum Hausenborn");
        break;
    }
    case 347605:
    {
        returnValue = F("Zum Hausholz");
        break;
    }
    case 347606:
    {
        returnValue = F("Zum Havelblick");
        break;
    }
    case 347607:
    {
        returnValue = F("Zum Havelhorn");
        break;
    }
    case 347608:
    {
        returnValue = F("Zum Havelpark");
        break;
    }
    case 347609:
    {
        returnValue = F("Zum Havelstrand");
        break;
    }
    case 347610:
    {
        returnValue = F("Zum Havergo");
        break;
    }
    case 347611:
    {
        returnValue = F("Zum Haverkamp");
        break;
    }
    case 347612:
    {
        returnValue = F("Zum Hawinkel");
        break;
    }
    case 347613:
    {
        returnValue = F("Zum Haxhorn");
        break;
    }
    case 347614:
    {
        returnValue = F("Zum Haxtumerfeld");
        break;
    }
    case 347615:
    {
        returnValue = F("Zum Hebach");
        break;
    }
    case 347616:
    {
        returnValue = F("Zum Hebsack");
        break;
    }
    case 347617:
    {
        returnValue = F("Zum Hechelberg");
        break;
    }
    case 347618:
    {
        returnValue = F("Zum Hecht");
        break;
    }
    case 347619:
    {
        returnValue = F("Zum Heckeberg");
        break;
    }
    case 347620:
    {
        returnValue = F("Zum Heckelchen");
        break;
    }
    case 347621:
    {
        returnValue = F("Zum Heckenborn");
        break;
    }
    case 347622:
    {
        returnValue = F("Zum Heckenbühl");
        break;
    }
    case 347623:
    {
        returnValue = F("Zum Heckerbusch");
        break;
    }
    case 347624:
    {
        returnValue = F("Zum Heckerhof");
        break;
    }
    case 347625:
    {
        returnValue = F("Zum Heckersberg");
        break;
    }
    case 347626:
    {
        returnValue = F("Zum Heckgraben");
        break;
    }
    case 347627:
    {
        returnValue = F("Zum Heckplatz");
        break;
    }
    case 347628:
    {
        returnValue = F("Zum Heeg");
        break;
    }
    case 347629:
    {
        returnValue = F("Zum Heegwald");
        break;
    }
    case 347630:
    {
        returnValue = F("Zum Heekamp");
        break;
    }
    case 347631:
    {
        returnValue = F("Zum Heerenberg");
        break;
    }
    case 347632:
    {
        returnValue = F("Zum Heerenfeld");
        break;
    }
    case 347633:
    {
        returnValue = F("Zum Heers");
        break;
    }
    case 347634:
    {
        returnValue = F("Zum Heersiepen");
        break;
    }
    case 347635:
    {
        returnValue = F("Zum Heerweg");
        break;
    }
    case 347636:
    {
        returnValue = F("Zum Heeseberg");
        break;
    }
    case 347637:
    {
        returnValue = F("Zum Heesen");
        break;
    }
    case 347638:
    {
        returnValue = F("Zum Heestern");
        break;
    }
    case 347639:
    {
        returnValue = F("Zum Hegberg");
        break;
    }
    case 347640:
    {
        returnValue = F("Zum Hegebruch");
        break;
    }
    case 347641:
    {
        returnValue = F("Zum Hegebusch");
        break;
    }
    case 347642:
    {
        returnValue = F("Zum Hegeholz");
        break;
    }
    case 347643:
    {
        returnValue = F("Zum Hegenwohld");
        break;
    }
    case 347644:
    {
        returnValue = F("Zum Hegergrund");
        break;
    }
    case 347645:
    {
        returnValue = F("Zum Hegesiefen");
        break;
    }
    case 347646:
    {
        returnValue = F("Zum Hegewinkel");
        break;
    }
    case 347647:
    {
        returnValue = F("Zum Hegwald");
        break;
    }
    case 347648:
    {
        returnValue = F("Zum Hehlinger Holz");
        break;
    }
    case 347649:
    {
        returnValue = F("Zum Hehrhain");
        break;
    }
    case 347650:
    {
        returnValue = F("Zum Heidacker");
        break;
    }
    case 347651:
    {
        returnValue = F("Zum Heidberg");
        break;
    }
    case 347652:
    {
        returnValue = F("Zum Heidblech");
        break;
    }
    case 347653:
    {
        returnValue = F("Zum Heidborn");
        break;
    }
    case 347654:
    {
        returnValue = F("Zum Heidchen");
        break;
    }
    case 347655:
    {
        returnValue = F("Zum Heidebach");
        break;
    }
    case 347656:
    {
        returnValue = F("Zum Heidebad");
        break;
    }
    case 347657:
    {
        returnValue = F("Zum Heideberg");
        break;
    }
    case 347658:
    {
        returnValue = F("Zum Heideblick");
        break;
    }
    case 347659:
    {
        returnValue = F("Zum Heidebuckel");
        break;
    }
    case 347660:
    {
        returnValue = F("Zum Heidedamm");
        break;
    }
    case 347661:
    {
        returnValue = F("Zum Heidefeld");
        break;
    }
    case 347662:
    {
        returnValue = F("Zum Heidegarten");
        break;
    }
    case 347663:
    {
        returnValue = F("Zum Heidehof");
        break;
    }
    case 347664:
    {
        returnValue = F("Zum Heidehübel");
        break;
    }
    case 347665:
    {
        returnValue = F("Zum Heidehügel");
        break;
    }
    case 347666:
    {
        returnValue = F("Zum Heidekamp");
        break;
    }
    case 347667:
    {
        returnValue = F("Zum Heidekopf");
        break;
    }
    case 347668:
    {
        returnValue = F("Zum Heidekornfeld");
        break;
    }
    case 347669:
    {
        returnValue = F("Zum Heidekreuz");
        break;
    }
    case 347670:
    {
        returnValue = F("Zum Heideköppel");
        break;
    }
    case 347671:
    {
        returnValue = F("Zum Heidelbach");
        break;
    }
    case 347672:
    {
        returnValue = F("Zum Heidenberg");
        break;
    }
    case 347673:
    {
        returnValue = F("Zum Heidenfeld");
        break;
    }
    case 347674:
    {
        returnValue = F("Zum Heidengraben");
        break;
    }
    case 347675:
    {
        returnValue = F("Zum Heidenholt");
        break;
    }
    case 347676:
    {
        returnValue = F("Zum Heidenholz");
        break;
    }
    case 347677:
    {
        returnValue = F("Zum Heidenhäuschen");
        break;
    }
    case 347678:
    {
        returnValue = F("Zum Heidenhübel");
        break;
    }
    case 347679:
    {
        returnValue = F("Zum Heidenkapf");
        break;
    }
    case 347680:
    {
        returnValue = F("Zum Heidenkopf");
        break;
    }
    case 347681:
    {
        returnValue = F("Zum Heidenloh");
        break;
    }
    case 347682:
    {
        returnValue = F("Zum Heidenpeter");
        break;
    }
    case 347683:
    {
        returnValue = F("Zum Heidensee");
        break;
    }
    case 347684:
    {
        returnValue = F("Zum Heidentempel");
        break;
    }
    case 347685:
    {
        returnValue = F("Zum Heider Busch");
        break;
    }
    case 347686:
    {
        returnValue = F("Zum Heiderhof");
        break;
    }
    case 347687:
    {
        returnValue = F("Zum Heidetal");
        break;
    }
    case 347688:
    {
        returnValue = F("Zum Heideweg");
        break;
    }
    case 347689:
    {
        returnValue = F("Zum Heidgarten");
        break;
    }
    case 347690:
    {
        returnValue = F("Zum Heidhof");
        break;
    }
    case 347691:
    {
        returnValue = F("Zum Heidhorst");
        break;
    }
    case 347692:
    {
        returnValue = F("Zum Heidkamp");
        break;
    }
    case 347693:
    {
        returnValue = F("Zum Heidkoppel");
        break;
    }
    case 347694:
    {
        returnValue = F("Zum Heidköppel");
        break;
    }
    case 347695:
    {
        returnValue = F("Zum Heidland");
        break;
    }
    case 347696:
    {
        returnValue = F("Zum Heidloh");
        break;
    }
    case 347697:
    {
        returnValue = F("Zum Heidmoor");
        break;
    }
    case 347698:
    {
        returnValue = F("Zum Heidort");
        break;
    }
    case 347699:
    {
        returnValue = F("Zum Heidrücken");
        break;
    }
    case 347700:
    {
        returnValue = F("Zum Heidtfeld");
        break;
    }
    case 347701:
    {
        returnValue = F("Zum Heidum");
        break;
    }
    case 347702:
    {
        returnValue = F("Zum Heidwald");
        break;
    }
    case 347703:
    {
        returnValue = F("Zum Heilbach");
        break;
    }
    case 347704:
    {
        returnValue = F("Zum Heilberg");
        break;
    }
    case 347705:
    {
        returnValue = F("Zum Heilborn");
        break;
    }
    case 347706:
    {
        returnValue = F("Zum Heilbrunnen");
        break;
    }
    case 347707:
    {
        returnValue = F("Zum Heiligen Grund");
        break;
    }
    case 347708:
    {
        returnValue = F("Zum Heiligenberg");
        break;
    }
    case 347709:
    {
        returnValue = F("Zum Heiligenfeld");
        break;
    }
    case 347710:
    {
        returnValue = F("Zum Heiligenholz");
        break;
    }
    case 347711:
    {
        returnValue = F("Zum Heiligenhäuschen");
        break;
    }
    case 347712:
    {
        returnValue = F("Zum Heiligenplatz");
        break;
    }
    case 347713:
    {
        returnValue = F("Zum Heiligenstock");
        break;
    }
    case 347714:
    {
        returnValue = F("Zum Heilighäuschen");
        break;
    }
    case 347715:
    {
        returnValue = F("Zum Heiligloch");
        break;
    }
    case 347716:
    {
        returnValue = F("Zum Heim");
        break;
    }
    case 347717:
    {
        returnValue = F("Zum Heimberg");
        break;
    }
    case 347718:
    {
        returnValue = F("Zum Heimbuch");
        break;
    }
    case 347719:
    {
        returnValue = F("Zum Heimerich");
        break;
    }
    case 347720:
    {
        returnValue = F("Zum Heimgarten");
        break;
    }
    case 347721:
    {
        returnValue = F("Zum Heimischberg");
        break;
    }
    case 347722:
    {
        returnValue = F("Zum Heinebach");
        break;
    }
    case 347723:
    {
        returnValue = F("Zum Heinenberg");
        break;
    }
    case 347724:
    {
        returnValue = F("Zum Heinjes Meer");
        break;
    }
    case 347725:
    {
        returnValue = F("Zum Heinrichsglück");
        break;
    }
    case 347726:
    {
        returnValue = F("Zum Heister");
        break;
    }
    case 347727:
    {
        returnValue = F("Zum Heisterhagen");
        break;
    }
    case 347728:
    {
        returnValue = F("Zum Heisterholz");
        break;
    }
    case 347729:
    {
        returnValue = F("Zum Heisterstück");
        break;
    }
    case 347730:
    {
        returnValue = F("Zum Heistert");
        break;
    }
    case 347731:
    {
        returnValue = F("Zum Heiteren Blick");
        break;
    }
    case 347732:
    {
        returnValue = F("Zum Heitersberg");
        break;
    }
    case 347733:
    {
        returnValue = F("Zum Heitkamp");
        break;
    }
    case 347734:
    {
        returnValue = F("Zum Heitzhausen");
        break;
    }
    case 347735:
    {
        returnValue = F("Zum Heizhaus");
        break;
    }
    case 347736:
    {
        returnValue = F("Zum Heizwerk");
        break;
    }
    case 347737:
    {
        returnValue = F("Zum Heißen Stein");
        break;
    }
    case 347738:
    {
        returnValue = F("Zum Heldrastein");
        break;
    }
    case 347739:
    {
        returnValue = F("Zum Heleken");
        break;
    }
    case 347740:
    {
        returnValue = F("Zum Helenenstein");
        break;
    }
    case 347741:
    {
        returnValue = F("Zum Helfenstein");
        break;
    }
    case 347742:
    {
        returnValue = F("Zum Helgesbrunnen");
        break;
    }
    case 347743:
    {
        returnValue = F("Zum Hellbach");
        break;
    }
    case 347744:
    {
        returnValue = F("Zum Hellberg");
        break;
    }
    case 347745:
    {
        returnValue = F("Zum Hellborn");
        break;
    }
    case 347746:
    {
        returnValue = F("Zum Hellbruch");
        break;
    }
    case 347747:
    {
        returnValue = F("Zum Hellbusch");
        break;
    }
    case 347748:
    {
        returnValue = F("Zum Hellchen");
        break;
    }
    case 347749:
    {
        returnValue = F("Zum Hellebach");
        break;
    }
    case 347750:
    {
        returnValue = F("Zum Hellenberg");
        break;
    }
    case 347751:
    {
        returnValue = F("Zum Heller");
        break;
    }
    case 347752:
    {
        returnValue = F("Zum Hellesbach");
        break;
    }
    case 347753:
    {
        returnValue = F("Zum Helmbach");
        break;
    }
    case 347754:
    {
        returnValue = F("Zum Helmestal");
        break;
    }
    case 347755:
    {
        returnValue = F("Zum Helpenstein");
        break;
    }
    case 347756:
    {
        returnValue = F("Zum Hemberg");
        break;
    }
    case 347757:
    {
        returnValue = F("Zum Hemmberg");
        break;
    }
    case 347758:
    {
        returnValue = F("Zum Hempelsberg");
        break;
    }
    case 347759:
    {
        returnValue = F("Zum Hengemühlensee");
        break;
    }
    case 347760:
    {
        returnValue = F("Zum Hengsbach");
        break;
    }
    case 347761:
    {
        returnValue = F("Zum Hengstbachtal");
        break;
    }
    case 347762:
    {
        returnValue = F("Zum Henneköpfchen");
        break;
    }
    case 347763:
    {
        returnValue = F("Zum Henninghof");
        break;
    }
    case 347764:
    {
        returnValue = F("Zum Herbacher Wald");
        break;
    }
    case 347765:
    {
        returnValue = F("Zum Herbstbrink");
        break;
    }
    case 347766:
    {
        returnValue = F("Zum Herchenwies");
        break;
    }
    case 347767:
    {
        returnValue = F("Zum Herdringer Schloß");
        break;
    }
    case 347768:
    {
        returnValue = F("Zum Herlitzberg");
        break;
    }
    case 347769:
    {
        returnValue = F("Zum Hermannsbrünnle");
        break;
    }
    case 347770:
    {
        returnValue = F("Zum Hermannsteg");
        break;
    }
    case 347771:
    {
        returnValue = F("Zum Hermannsweg");
        break;
    }
    case 347772:
    {
        returnValue = F("Zum Hermel");
        break;
    }
    case 347773:
    {
        returnValue = F("Zum Herrchen");
        break;
    }
    case 347774:
    {
        returnValue = F("Zum Herrenberg");
        break;
    }
    case 347775:
    {
        returnValue = F("Zum Herrenbusch");
        break;
    }
    case 347776:
    {
        returnValue = F("Zum Herrengarten");
        break;
    }
    case 347777:
    {
        returnValue = F("Zum Herrenhassel");
        break;
    }
    case 347778:
    {
        returnValue = F("Zum Herrenhaus");
        break;
    }
    case 347779:
    {
        returnValue = F("Zum Herrenhof");
        break;
    }
    case 347780:
    {
        returnValue = F("Zum Herrenholz");
        break;
    }
    case 347781:
    {
        returnValue = F("Zum Herrenmoor");
        break;
    }
    case 347782:
    {
        returnValue = F("Zum Herrenried");
        break;
    }
    case 347783:
    {
        returnValue = F("Zum Herrensand");
        break;
    }
    case 347784:
    {
        returnValue = F("Zum Herrenteich");
        break;
    }
    case 347785:
    {
        returnValue = F("Zum Herrentor");
        break;
    }
    case 347786:
    {
        returnValue = F("Zum Herrenwald");
        break;
    }
    case 347787:
    {
        returnValue = F("Zum Herrgottsgraben");
        break;
    }
    case 347788:
    {
        returnValue = F("Zum Herrlesgrund");
        break;
    }
    case 347789:
    {
        returnValue = F("Zum Herrnacker");
        break;
    }
    case 347790:
    {
        returnValue = F("Zum Herrnberg");
        break;
    }
    case 347791:
    {
        returnValue = F("Zum Herrnholz");
        break;
    }
    case 347792:
    {
        returnValue = F("Zum Herrnsee");
        break;
    }
    case 347793:
    {
        returnValue = F("Zum Herrnsteg");
        break;
    }
    case 347794:
    {
        returnValue = F("Zum Herrnteich");
        break;
    }
    case 347795:
    {
        returnValue = F("Zum Herrschaftswald");
        break;
    }
    case 347796:
    {
        returnValue = F("Zum Herthateich");
        break;
    }
    case 347797:
    {
        returnValue = F("Zum Herthum");
        break;
    }
    case 347798:
    {
        returnValue = F("Zum Hertlehof");
        break;
    }
    case 347799:
    {
        returnValue = F("Zum Herzberg");
        break;
    }
    case 347800:
    {
        returnValue = F("Zum Herzfeld");
        break;
    }
    case 347801:
    {
        returnValue = F("Zum Herzsiefen");
        break;
    }
    case 347802:
    {
        returnValue = F("Zum Heseberg");
        break;
    }
    case 347803:
    {
        returnValue = F("Zum Heselbrink");
        break;
    }
    case 347804:
    {
        returnValue = F("Zum Hesenbühl");
        break;
    }
    case 347805:
    {
        returnValue = F("Zum Hespeloh");
        break;
    }
    case 347806:
    {
        returnValue = F("Zum Hesselberg");
        break;
    }
    case 347807:
    {
        returnValue = F("Zum Hessenberg");
        break;
    }
    case 347808:
    {
        returnValue = F("Zum Hessenbusch");
        break;
    }
    case 347809:
    {
        returnValue = F("Zum Hessenholz");
        break;
    }
    case 347810:
    {
        returnValue = F("Zum Hessental");
        break;
    }
    case 347811:
    {
        returnValue = F("Zum Hessenturm");
        break;
    }
    case 347812:
    {
        returnValue = F("Zum Hesterbusch");
        break;
    }
    case 347813:
    {
        returnValue = F("Zum Hestern");
        break;
    }
    case 347814:
    {
        returnValue = F("Zum Hettelwald");
        break;
    }
    case 347815:
    {
        returnValue = F("Zum Hettensee");
        break;
    }
    case 347816:
    {
        returnValue = F("Zum Heubach");
        break;
    }
    case 347817:
    {
        returnValue = F("Zum Heudepot");
        break;
    }
    case 347818:
    {
        returnValue = F("Zum Heuenfeld");
        break;
    }
    case 347819:
    {
        returnValue = F("Zum Heuern");
        break;
    }
    case 347820:
    {
        returnValue = F("Zum Heuland");
        break;
    }
    case 347821:
    {
        returnValue = F("Zum Heun");
        break;
    }
    case 347822:
    {
        returnValue = F("Zum Heussen");
        break;
    }
    case 347823:
    {
        returnValue = F("Zum Heutal");
        break;
    }
    case 347824:
    {
        returnValue = F("Zum Heuweg");
        break;
    }
    case 347825:
    {
        returnValue = F("Zum Heuwinkel");
        break;
    }
    case 347826:
    {
        returnValue = F("Zum Hexelberg");
        break;
    }
    case 347827:
    {
        returnValue = F("Zum Hexenberg");
        break;
    }
    case 347828:
    {
        returnValue = F("Zum Hexenbusch");
        break;
    }
    case 347829:
    {
        returnValue = F("Zum Hexenhübel");
        break;
    }
    case 347830:
    {
        returnValue = F("Zum Hexenkotten");
        break;
    }
    case 347831:
    {
        returnValue = F("Zum Hexenthorn");
        break;
    }
    case 347832:
    {
        returnValue = F("Zum Heyerstieg");
        break;
    }
    case 347833:
    {
        returnValue = F("Zum Hiddinghof");
        break;
    }
    case 347834:
    {
        returnValue = F("Zum Hiebersch");
        break;
    }
    case 347835:
    {
        returnValue = F("Zum Hilgenbrink");
        break;
    }
    case 347836:
    {
        returnValue = F("Zum Hilgenflach");
        break;
    }
    case 347837:
    {
        returnValue = F("Zum Hilgenland");
        break;
    }
    case 347838:
    {
        returnValue = F("Zum Hilgenmoor");
        break;
    }
    case 347839:
    {
        returnValue = F("Zum Hilgenscheid");
        break;
    }
    case 347840:
    {
        returnValue = F("Zum Hillekopf");
        break;
    }
    case 347841:
    {
        returnValue = F("Zum Hillenwasser");
        break;
    }
    case 347842:
    {
        returnValue = F("Zum Hilligen Born");
        break;
    }
    case 347843:
    {
        returnValue = F("Zum Hilscheider Gipfelblick");
        break;
    }
    case 347844:
    {
        returnValue = F("Zum Hiltenkamp");
        break;
    }
    case 347845:
    {
        returnValue = F("Zum Hiltruper See");
        break;
    }
    case 347846:
    {
        returnValue = F("Zum Himmelberg");
        break;
    }
    case 347847:
    {
        returnValue = F("Zum Himmelreich");
        break;
    }
    case 347848:
    {
        returnValue = F("Zum Himmelsfels");
        break;
    }
    case 347849:
    {
        returnValue = F("Zum Himmerich");
        break;
    }
    case 347850:
    {
        returnValue = F("Zum Himmlischen Seifen");
        break;
    }
    case 347851:
    {
        returnValue = F("Zum Himmrich");
        break;
    }
    case 347852:
    {
        returnValue = F("Zum Hinhart");
        break;
    }
    case 347853:
    {
        returnValue = F("Zum Hinkelstein");
        break;
    }
    case 347854:
    {
        returnValue = F("Zum Hinterborn");
        break;
    }
    case 347855:
    {
        returnValue = F("Zum Hinterdorf");
        break;
    }
    case 347856:
    {
        returnValue = F("Zum Hinteren Berg");
        break;
    }
    case 347857:
    {
        returnValue = F("Zum Hinterfeld");
        break;
    }
    case 347858:
    {
        returnValue = F("Zum Hinterhag");
        break;
    }
    case 347859:
    {
        returnValue = F("Zum Hintertal");
        break;
    }
    case 347860:
    {
        returnValue = F("Zum Hinterwinkel");
        break;
    }
    case 347861:
    {
        returnValue = F("Zum Hippenkreuz");
        break;
    }
    case 347862:
    {
        returnValue = F("Zum Hirdenberg");
        break;
    }
    case 347863:
    {
        returnValue = F("Zum Hirschberg");
        break;
    }
    case 347864:
    {
        returnValue = F("Zum Hirschborn");
        break;
    }
    case 347865:
    {
        returnValue = F("Zum Hirschdamm");
        break;
    }
    case 347866:
    {
        returnValue = F("Zum Hirschenbuck");
        break;
    }
    case 347867:
    {
        returnValue = F("Zum Hirschgrund");
        break;
    }
    case 347868:
    {
        returnValue = F("Zum Hirschweiher");
        break;
    }
    case 347869:
    {
        returnValue = F("Zum Hirsenberg");
        break;
    }
    case 347870:
    {
        returnValue = F("Zum Hirtehäusle");
        break;
    }
    case 347871:
    {
        returnValue = F("Zum Hirtenacker");
        break;
    }
    case 347872:
    {
        returnValue = F("Zum Hirtenberg");
        break;
    }
    case 347873:
    {
        returnValue = F("Zum Hirtenborn");
        break;
    }
    case 347874:
    {
        returnValue = F("Zum Hirtenbrunnen");
        break;
    }
    case 347875:
    {
        returnValue = F("Zum Hirtengarten");
        break;
    }
    case 347876:
    {
        returnValue = F("Zum Hirtenhaus");
        break;
    }
    case 347877:
    {
        returnValue = F("Zum Hirtenhof");
        break;
    }
    case 347878:
    {
        returnValue = F("Zum Hirtenkamp");
        break;
    }
    case 347879:
    {
        returnValue = F("Zum Hirtenweg");
        break;
    }
    case 347880:
    {
        returnValue = F("Zum Hirtzborn");
        break;
    }
    case 347881:
    {
        returnValue = F("Zum Hirtzwald");
        break;
    }
    case 347882:
    {
        returnValue = F("Zum Hirzel");
        break;
    }
    case 347883:
    {
        returnValue = F("Zum Hirzenberg");
        break;
    }
    case 347884:
    {
        returnValue = F("Zum Hirzfeld");
        break;
    }
    case 347885:
    {
        returnValue = F("Zum Hoambarg");
        break;
    }
    case 347886:
    {
        returnValue = F("Zum Hoch");
        break;
    }
    case 347887:
    {
        returnValue = F("Zum Hochbehälter");
        break;
    }
    case 347888:
    {
        returnValue = F("Zum Hochberg");
        break;
    }
    case 347889:
    {
        returnValue = F("Zum Hochbuchwasen");
        break;
    }
    case 347890:
    {
        returnValue = F("Zum Hochfeld");
        break;
    }
    case 347891:
    {
        returnValue = F("Zum Hochfels");
        break;
    }
    case 347892:
    {
        returnValue = F("Zum Hochgericht");
        break;
    }
    case 347893:
    {
        returnValue = F("Zum Hochholz");
        break;
    }
    case 347894:
    {
        returnValue = F("Zum Hochhäusl");
        break;
    }
    case 347895:
    {
        returnValue = F("Zum Hochkamp");
        break;
    }
    case 347896:
    {
        returnValue = F("Zum Hochkelberg");
        break;
    }
    case 347897:
    {
        returnValue = F("Zum Hochkreuz");
        break;
    }
    case 347898:
    {
        returnValue = F("Zum Hochland");
        break;
    }
    case 347899:
    {
        returnValue = F("Zum Hochmoor");
        break;
    }
    case 347900:
    {
        returnValue = F("Zum Hochrech");
        break;
    }
    case 347901:
    {
        returnValue = F("Zum Hochstein");
        break;
    }
    case 347902:
    {
        returnValue = F("Zum Hochufer");
        break;
    }
    case 347903:
    {
        returnValue = F("Zum Hochwald");
        break;
    }
    case 347904:
    {
        returnValue = F("Zum Hoestchen");
        break;
    }
    case 347905:
    {
        returnValue = F("Zum Hof");
        break;
    }
    case 347906:
    {
        returnValue = F("Zum Hof Lienesch");
        break;
    }
    case 347907:
    {
        returnValue = F("Zum Hofacker");
        break;
    }
    case 347908:
    {
        returnValue = F("Zum Hofbach");
        break;
    }
    case 347909:
    {
        returnValue = F("Zum Hofborn");
        break;
    }
    case 347910:
    {
        returnValue = F("Zum Hofe");
        break;
    }
    case 347911:
    {
        returnValue = F("Zum Hoffeld");
        break;
    }
    case 347912:
    {
        returnValue = F("Zum Hofgarten");
        break;
    }
    case 347913:
    {
        returnValue = F("Zum Hofgraben");
        break;
    }
    case 347914:
    {
        returnValue = F("Zum Hofgrath");
        break;
    }
    case 347915:
    {
        returnValue = F("Zum Hofgut");
        break;
    }
    case 347916:
    {
        returnValue = F("Zum Hofrain");
        break;
    }
    case 347917:
    {
        returnValue = F("Zum Hofsee");
        break;
    }
    case 347918:
    {
        returnValue = F("Zum Hofstück");
        break;
    }
    case 347919:
    {
        returnValue = F("Zum Hogenbreden");
        break;
    }
    case 347920:
    {
        returnValue = F("Zum Hogfeld");
        break;
    }
    case 347921:
    {
        returnValue = F("Zum Hohberg");
        break;
    }
    case 347922:
    {
        returnValue = F("Zum Hohen Berg");
        break;
    }
    case 347923:
    {
        returnValue = F("Zum Hohen Brand");
        break;
    }
    case 347924:
    {
        returnValue = F("Zum Hohen Brunnen");
        break;
    }
    case 347925:
    {
        returnValue = F("Zum Hohen Bröhl");
        break;
    }
    case 347926:
    {
        returnValue = F("Zum Hohen Bühl");
        break;
    }
    case 347927:
    {
        returnValue = F("Zum Hohen Eimberg");
        break;
    }
    case 347928:
    {
        returnValue = F("Zum Hohen Esch");
        break;
    }
    case 347929:
    {
        returnValue = F("Zum Hohen Felde");
        break;
    }
    case 347930:
    {
        returnValue = F("Zum Hohen Fels");
        break;
    }
    case 347931:
    {
        returnValue = F("Zum Hohen Hagen");
        break;
    }
    case 347932:
    {
        returnValue = F("Zum Hohen Hahn");
        break;
    }
    case 347933:
    {
        returnValue = F("Zum Hohen Hof");
        break;
    }
    case 347934:
    {
        returnValue = F("Zum Hohen Holz");
        break;
    }
    case 347935:
    {
        returnValue = F("Zum Hohen Kreuz");
        break;
    }
    case 347936:
    {
        returnValue = F("Zum Hohen Küppel");
        break;
    }
    case 347937:
    {
        returnValue = F("Zum Hohen Moor");
        break;
    }
    case 347938:
    {
        returnValue = F("Zum Hohen Nacken");
        break;
    }
    case 347939:
    {
        returnValue = F("Zum Hohen Oerel");
        break;
    }
    case 347940:
    {
        returnValue = F("Zum Hohen Ort");
        break;
    }
    case 347941:
    {
        returnValue = F("Zum Hohen Rad");
        break;
    }
    case 347942:
    {
        returnValue = F("Zum Hohen Rain");
        break;
    }
    case 347943:
    {
        returnValue = F("Zum Hohen Ranken");
        break;
    }
    case 347944:
    {
        returnValue = F("Zum Hohen Roth");
        break;
    }
    case 347945:
    {
        returnValue = F("Zum Hohen Schaden");
        break;
    }
    case 347946:
    {
        returnValue = F("Zum Hohen Schirm");
        break;
    }
    case 347947:
    {
        returnValue = F("Zum Hohen Stein");
        break;
    }
    case 347948:
    {
        returnValue = F("Zum Hohen Stieg");
        break;
    }
    case 347949:
    {
        returnValue = F("Zum Hohen Tor");
        break;
    }
    case 347950:
    {
        returnValue = F("Zum Hohen Ufer");
        break;
    }
    case 347951:
    {
        returnValue = F("Zum Hohenberg");
        break;
    }
    case 347952:
    {
        returnValue = F("Zum Hohenbogen");
        break;
    }
    case 347953:
    {
        returnValue = F("Zum Hohenrain");
        break;
    }
    case 347954:
    {
        returnValue = F("Zum Hohenstein");
        break;
    }
    case 347955:
    {
        returnValue = F("Zum Hohensturz");
        break;
    }
    case 347956:
    {
        returnValue = F("Zum Hoherot");
        break;
    }
    case 347957:
    {
        returnValue = F("Zum Hohl");
        break;
    }
    case 347958:
    {
        returnValue = F("Zum Hohle");
        break;
    }
    case 347959:
    {
        returnValue = F("Zum Hohlen Berg");
        break;
    }
    case 347960:
    {
        returnValue = F("Zum Hohlen Morgen");
        break;
    }
    case 347961:
    {
        returnValue = F("Zum Hohlen Rain");
        break;
    }
    case 347962:
    {
        returnValue = F("Zum Hohlen Stein");
        break;
    }
    case 347963:
    {
        returnValue = F("Zum Hohlen Weg");
        break;
    }
    case 347964:
    {
        returnValue = F("Zum Hohlenstein");
        break;
    }
    case 347965:
    {
        returnValue = F("Zum Hohlseifen");
        break;
    }
    case 347966:
    {
        returnValue = F("Zum Hohlweg");
        break;
    }
    case 347967:
    {
        returnValue = F("Zum Hohn");
        break;
    }
    case 347968:
    {
        returnValue = F("Zum Holderbachtal");
        break;
    }
    case 347969:
    {
        returnValue = F("Zum Holderbild");
        break;
    }
    case 347970:
    {
        returnValue = F("Zum Holderbusch");
        break;
    }
    case 347971:
    {
        returnValue = F("Zum Holdersberg");
        break;
    }
    case 347972:
    {
        returnValue = F("Zum Holg");
        break;
    }
    case 347973:
    {
        returnValue = F("Zum Holland");
        break;
    }
    case 347974:
    {
        returnValue = F("Zum Hollberg");
        break;
    }
    case 347975:
    {
        returnValue = F("Zum Hollemoor");
        break;
    }
    case 347976:
    {
        returnValue = F("Zum Hollen");
        break;
    }
    case 347977:
    {
        returnValue = F("Zum Hollenbach");
        break;
    }
    case 347978:
    {
        returnValue = F("Zum Hollenstein");
        break;
    }
    case 347979:
    {
        returnValue = F("Zum Hollerbusch");
        break;
    }
    case 347980:
    {
        returnValue = F("Zum Hollergrund");
        break;
    }
    case 347981:
    {
        returnValue = F("Zum Hollernstrauch");
        break;
    }
    case 347982:
    {
        returnValue = F("Zum Holländer");
        break;
    }
    case 347983:
    {
        returnValue = F("Zum Holschenböhl");
        break;
    }
    case 347984:
    {
        returnValue = F("Zum Holschenrain");
        break;
    }
    case 347985:
    {
        returnValue = F("Zum Holtberg");
        break;
    }
    case 347986:
    {
        returnValue = F("Zum Holte");
        break;
    }
    case 347987:
    {
        returnValue = F("Zum Holthof");
        break;
    }
    case 347988:
    {
        returnValue = F("Zum Holtkamp");
        break;
    }
    case 347989:
    {
        returnValue = F("Zum Holtmicker Berge");
        break;
    }
    case 347990:
    {
        returnValue = F("Zum Holtroper Busch");
        break;
    }
    case 347991:
    {
        returnValue = F("Zum Holz");
        break;
    }
    case 347992:
    {
        returnValue = F("Zum Holzbach");
        break;
    }
    case 347993:
    {
        returnValue = F("Zum Holzbachtal");
        break;
    }
    case 347994:
    {
        returnValue = F("Zum Holzberg");
        break;
    }
    case 347995:
    {
        returnValue = F("Zum Holze");
        break;
    }
    case 347996:
    {
        returnValue = F("Zum Holzenberg");
        break;
    }
    case 347997:
    {
        returnValue = F("Zum Holzer Feld");
        break;
    }
    case 347998:
    {
        returnValue = F("Zum Holzfeld");
        break;
    }
    case 347999:
    {
        returnValue = F("Zum Holzfelde");
        break;
    }
    case 348000:
    {
        returnValue = F("Zum Holzgraben");
        break;
    }
    case 348001:
    {
        returnValue = F("Zum Holzhof");
        break;
    }
    case 348002:
    {
        returnValue = F("Zum Holzkamp");
        break;
    }
    case 348003:
    {
        returnValue = F("Zum Holzkenmaker");
        break;
    }
    case 348004:
    {
        returnValue = F("Zum Holzplatz");
        break;
    }
    case 348005:
    {
        returnValue = F("Zum Holzpütz");
        break;
    }
    case 348006:
    {
        returnValue = F("Zum Holzschlag");
        break;
    }
    case 348007:
    {
        returnValue = F("Zum Hombach");
        break;
    }
    case 348008:
    {
        returnValue = F("Zum Homberg");
        break;
    }
    case 348009:
    {
        returnValue = F("Zum Homberger Born");
        break;
    }
    case 348010:
    {
        returnValue = F("Zum Homburger Felde");
        break;
    }
    case 348011:
    {
        returnValue = F("Zum Homersch");
        break;
    }
    case 348012:
    {
        returnValue = F("Zum Hommen End");
        break;
    }
    case 348013:
    {
        returnValue = F("Zum Hommerholz");
        break;
    }
    case 348014:
    {
        returnValue = F("Zum Hommling");
        break;
    }
    case 348015:
    {
        returnValue = F("Zum Honig");
        break;
    }
    case 348016:
    {
        returnValue = F("Zum Honigborn");
        break;
    }
    case 348017:
    {
        returnValue = F("Zum Honigrangen");
        break;
    }
    case 348018:
    {
        returnValue = F("Zum Honigsack");
        break;
    }
    case 348019:
    {
        returnValue = F("Zum Hoop");
        break;
    }
    case 348020:
    {
        returnValue = F("Zum Hoope");
        break;
    }
    case 348021:
    {
        returnValue = F("Zum Hoover Feld");
        break;
    }
    case 348022:
    {
        returnValue = F("Zum Hopfenberg");
        break;
    }
    case 348023:
    {
        returnValue = F("Zum Hopfengarten");
        break;
    }
    case 348024:
    {
        returnValue = F("Zum Hopfenhof");
        break;
    }
    case 348025:
    {
        returnValue = F("Zum Hoppberg");
        break;
    }
    case 348026:
    {
        returnValue = F("Zum Hoppecker Berg");
        break;
    }
    case 348027:
    {
        returnValue = F("Zum Hoppelberg");
        break;
    }
    case 348028:
    {
        returnValue = F("Zum Hoppenberg");
        break;
    }
    case 348029:
    {
        returnValue = F("Zum Hoppengarten");
        break;
    }
    case 348030:
    {
        returnValue = F("Zum Horet");
        break;
    }
    case 348031:
    {
        returnValue = F("Zum Horkaer Teich");
        break;
    }
    case 348032:
    {
        returnValue = F("Zum Horkamp");
        break;
    }
    case 348033:
    {
        returnValue = F("Zum Horn");
        break;
    }
    case 348034:
    {
        returnValue = F("Zum Hornacker");
        break;
    }
    case 348035:
    {
        returnValue = F("Zum Hornberg");
        break;
    }
    case 348036:
    {
        returnValue = F("Zum Hornbruch");
        break;
    }
    case 348037:
    {
        returnValue = F("Zum Hornbühl");
        break;
    }
    case 348038:
    {
        returnValue = F("Zum Horngraben");
        break;
    }
    case 348039:
    {
        returnValue = F("Zum Hornsberg");
        break;
    }
    case 348040:
    {
        returnValue = F("Zum Horpke");
        break;
    }
    case 348041:
    {
        returnValue = F("Zum Horst");
        break;
    }
    case 348042:
    {
        returnValue = F("Zum Horstacker");
        break;
    }
    case 348043:
    {
        returnValue = F("Zum Horstberg");
        break;
    }
    case 348044:
    {
        returnValue = F("Zum Horstet");
        break;
    }
    case 348045:
    {
        returnValue = F("Zum Horstfeld");
        break;
    }
    case 348046:
    {
        returnValue = F("Zum Horsthof");
        break;
    }
    case 348047:
    {
        returnValue = F("Zum Horstweg");
        break;
    }
    case 348048:
    {
        returnValue = F("Zum Hort");
        break;
    }
    case 348049:
    {
        returnValue = F("Zum Hospital");
        break;
    }
    case 348050:
    {
        returnValue = F("Zum Hospitalgraben");
        break;
    }
    case 348051:
    {
        returnValue = F("Zum Hostenturm");
        break;
    }
    case 348052:
    {
        returnValue = F("Zum Hostert");
        break;
    }
    case 348053:
    {
        returnValue = F("Zum Hottenbergsfeld");
        break;
    }
    case 348054:
    {
        returnValue = F("Zum Hotzendrees");
        break;
    }
    case 348055:
    {
        returnValue = F("Zum Hubensgut");
        break;
    }
    case 348056:
    {
        returnValue = F("Zum Hubertus");
        break;
    }
    case 348057:
    {
        returnValue = F("Zum Hubhof");
        break;
    }
    case 348058:
    {
        returnValue = F("Zum Huchtinger Bahnhof");
        break;
    }
    case 348059:
    {
        returnValue = F("Zum Hucklenbruch");
        break;
    }
    case 348060:
    {
        returnValue = F("Zum Hudewald");
        break;
    }
    case 348061:
    {
        returnValue = F("Zum Hufeisen");
        break;
    }
    case 348062:
    {
        returnValue = F("Zum Hufeisensee");
        break;
    }
    case 348063:
    {
        returnValue = F("Zum Hufenberg");
        break;
    }
    case 348064:
    {
        returnValue = F("Zum Hufschmied");
        break;
    }
    case 348065:
    {
        returnValue = F("Zum Hukoven");
        break;
    }
    case 348066:
    {
        returnValue = F("Zum Hulideil");
        break;
    }
    case 348067:
    {
        returnValue = F("Zum Hullen");
        break;
    }
    case 348068:
    {
        returnValue = F("Zum Hullerweg");
        break;
    }
    case 348069:
    {
        returnValue = F("Zum Hummel");
        break;
    }
    case 348070:
    {
        returnValue = F("Zum Hummelbusch");
        break;
    }
    case 348071:
    {
        returnValue = F("Zum Hummelsberg");
        break;
    }
    case 348072:
    {
        returnValue = F("Zum Hummenwald");
        break;
    }
    case 348073:
    {
        returnValue = F("Zum Hummerich");
        break;
    }
    case 348074:
    {
        returnValue = F("Zum Hummertsbach");
        break;
    }
    case 348075:
    {
        returnValue = F("Zum Hund");
        break;
    }
    case 348076:
    {
        returnValue = F("Zum Hundeicken");
        break;
    }
    case 348077:
    {
        returnValue = F("Zum Hundezagel");
        break;
    }
    case 348078:
    {
        returnValue = F("Zum Hundsberg");
        break;
    }
    case 348079:
    {
        returnValue = F("Zum Hundsbockel");
        break;
    }
    case 348080:
    {
        returnValue = F("Zum Hundshop");
        break;
    }
    case 348081:
    {
        returnValue = F("Zum Hundsrück");
        break;
    }
    case 348082:
    {
        returnValue = F("Zum Hundsrücken");
        break;
    }
    case 348083:
    {
        returnValue = F("Zum Hungerberg");
        break;
    }
    case 348084:
    {
        returnValue = F("Zum Hungerborn");
        break;
    }
    case 348085:
    {
        returnValue = F("Zum Hunnenberg");
        break;
    }
    case 348086:
    {
        returnValue = F("Zum Hunsrück");
        break;
    }
    case 348087:
    {
        returnValue = F("Zum Hunstein");
        break;
    }
    case 348088:
    {
        returnValue = F("Zum Hunteufer");
        break;
    }
    case 348089:
    {
        returnValue = F("Zum Husarengarten");
        break;
    }
    case 348090:
    {
        returnValue = F("Zum Hussenstein");
        break;
    }
    case 348091:
    {
        returnValue = F("Zum Husterbruch");
        break;
    }
    case 348092:
    {
        returnValue = F("Zum Hutacker");
        break;
    }
    case 348093:
    {
        returnValue = F("Zum Hutanger");
        break;
    }
    case 348094:
    {
        returnValue = F("Zum Hutberg");
        break;
    }
    case 348095:
    {
        returnValue = F("Zum Hutberger Graben");
        break;
    }
    case 348096:
    {
        returnValue = F("Zum Huthübel");
        break;
    }
    case 348097:
    {
        returnValue = F("Zum Häfele");
        break;
    }
    case 348098:
    {
        returnValue = F("Zum Häfern");
        break;
    }
    case 348099:
    {
        returnValue = F("Zum Hägerdorn");
        break;
    }
    case 348100:
    {
        returnValue = F("Zum Hähnchen");
        break;
    }
    case 348101:
    {
        returnValue = F("Zum Hähnlein");
        break;
    }
    case 348102:
    {
        returnValue = F("Zum Häldele");
        break;
    }
    case 348103:
    {
        returnValue = F("Zum Hälleken");
        break;
    }
    case 348104:
    {
        returnValue = F("Zum Hälversprung");
        break;
    }
    case 348105:
    {
        returnValue = F("Zum Hämeler Wald");
        break;
    }
    case 348106:
    {
        returnValue = F("Zum Hängesteg");
        break;
    }
    case 348107:
    {
        returnValue = F("Zum Hänselstein");
        break;
    }
    case 348108:
    {
        returnValue = F("Zum Häpper");
        break;
    }
    case 348109:
    {
        returnValue = F("Zum Härdle");
        break;
    }
    case 348110:
    {
        returnValue = F("Zum Härengarten");
        break;
    }
    case 348111:
    {
        returnValue = F("Zum Häsebusch");
        break;
    }
    case 348112:
    {
        returnValue = F("Zum Häspelesholz");
        break;
    }
    case 348113:
    {
        returnValue = F("Zum Häster Soll");
        break;
    }
    case 348114:
    {
        returnValue = F("Zum Häubchen");
        break;
    }
    case 348115:
    {
        returnValue = F("Zum Häuptle");
        break;
    }
    case 348116:
    {
        returnValue = F("Zum Häusel");
        break;
    }
    case 348117:
    {
        returnValue = F("Zum Häuserstein");
        break;
    }
    case 348118:
    {
        returnValue = F("Zum Höben");
        break;
    }
    case 348119:
    {
        returnValue = F("Zum Höchst");
        break;
    }
    case 348120:
    {
        returnValue = F("Zum Höchsten");
        break;
    }
    case 348121:
    {
        returnValue = F("Zum Höfchen");
        break;
    }
    case 348122:
    {
        returnValue = F("Zum Höffelfeld");
        break;
    }
    case 348123:
    {
        returnValue = F("Zum Höfgesgarten");
        break;
    }
    case 348124:
    {
        returnValue = F("Zum Höft");
        break;
    }
    case 348125:
    {
        returnValue = F("Zum Höftersbusch");
        break;
    }
    case 348126:
    {
        returnValue = F("Zum Högerlsee");
        break;
    }
    case 348127:
    {
        returnValue = F("Zum Höhbergblick");
        break;
    }
    case 348128:
    {
        returnValue = F("Zum Höhbückel");
        break;
    }
    case 348129:
    {
        returnValue = F("Zum Höhenberg");
        break;
    }
    case 348130:
    {
        returnValue = F("Zum Höhenblick");
        break;
    }
    case 348131:
    {
        returnValue = F("Zum Höhenfreibad");
        break;
    }
    case 348132:
    {
        returnValue = F("Zum Höhenstein");
        break;
    }
    case 348133:
    {
        returnValue = F("Zum Höhenweg");
        break;
    }
    case 348134:
    {
        returnValue = F("Zum Höhlchen");
        break;
    }
    case 348135:
    {
        returnValue = F("Zum Höhlengrund");
        break;
    }
    case 348136:
    {
        returnValue = F("Zum Hölderle");
        break;
    }
    case 348137:
    {
        returnValue = F("Zum Höllbach");
        break;
    }
    case 348138:
    {
        returnValue = F("Zum Höllbachtal");
        break;
    }
    case 348139:
    {
        returnValue = F("Zum Höllberg");
        break;
    }
    case 348140:
    {
        returnValue = F("Zum Hölln");
        break;
    }
    case 348141:
    {
        returnValue = F("Zum Höltchen");
        break;
    }
    case 348142:
    {
        returnValue = F("Zum Hölzchen");
        break;
    }
    case 348143:
    {
        returnValue = F("Zum Hölzle");
        break;
    }
    case 348144:
    {
        returnValue = F("Zum Hömberg");
        break;
    }
    case 348145:
    {
        returnValue = F("Zum Hönerbrock");
        break;
    }
    case 348146:
    {
        returnValue = F("Zum Hönig");
        break;
    }
    case 348147:
    {
        returnValue = F("Zum Höpen");
        break;
    }
    case 348148:
    {
        returnValue = F("Zum Höre");
        break;
    }
    case 348149:
    {
        returnValue = F("Zum Hörgarten");
        break;
    }
    case 348150:
    {
        returnValue = F("Zum Höring");
        break;
    }
    case 348151:
    {
        returnValue = F("Zum Hörn");
        break;
    }
    case 348152:
    {
        returnValue = F("Zum Hörner Moor");
        break;
    }
    case 348153:
    {
        returnValue = F("Zum Hörnle");
        break;
    }
    case 348154:
    {
        returnValue = F("Zum Höst");
        break;
    }
    case 348155:
    {
        returnValue = F("Zum Hövelchen");
        break;
    }
    case 348156:
    {
        returnValue = F("Zum Hübbel");
        break;
    }
    case 348157:
    {
        returnValue = F("Zum Hübler Holz");
        break;
    }
    case 348158:
    {
        returnValue = F("Zum Hückedahl");
        break;
    }
    case 348159:
    {
        returnValue = F("Zum Hügel");
        break;
    }
    case 348160:
    {
        returnValue = F("Zum Hügelskopf");
        break;
    }
    case 348161:
    {
        returnValue = F("Zum Hüggel");
        break;
    }
    case 348162:
    {
        returnValue = F("Zum Hühnerberg");
        break;
    }
    case 348163:
    {
        returnValue = F("Zum Hühnerbühl");
        break;
    }
    case 348164:
    {
        returnValue = F("Zum Hühnerbünd");
        break;
    }
    case 348165:
    {
        returnValue = F("Zum Hühnergott");
        break;
    }
    case 348166:
    {
        returnValue = F("Zum Hüllenstück");
        break;
    }
    case 348167:
    {
        returnValue = F("Zum Hülseberg");
        break;
    }
    case 348168:
    {
        returnValue = F("Zum Hülsen");
        break;
    }
    case 348169:
    {
        returnValue = F("Zum Hündchen");
        break;
    }
    case 348170:
    {
        returnValue = F("Zum Hünengrab");
        break;
    }
    case 348171:
    {
        returnValue = F("Zum Hüppel");
        break;
    }
    case 348172:
    {
        returnValue = F("Zum Hüschenberg");
        break;
    }
    case 348173:
    {
        returnValue = F("Zum Hüttberg");
        break;
    }
    case 348174:
    {
        returnValue = F("Zum Hüttenberg");
        break;
    }
    case 348175:
    {
        returnValue = F("Zum Hüttenholz");
        break;
    }
    case 348176:
    {
        returnValue = F("Zum Hüttenkopf");
        break;
    }
    case 348177:
    {
        returnValue = F("Zum Hüttenplatz");
        break;
    }
    case 348178:
    {
        returnValue = F("Zum Hüttensteig");
        break;
    }
    case 348179:
    {
        returnValue = F("Zum Hüttental");
        break;
    }
    case 348180:
    {
        returnValue = F("Zum Ibengarten");
        break;
    }
    case 348181:
    {
        returnValue = F("Zum Ibigrain");
        break;
    }
    case 348182:
    {
        returnValue = F("Zum Ickelhans");
        break;
    }
    case 348183:
    {
        returnValue = F("Zum Ickelsbach");
        break;
    }
    case 348184:
    {
        returnValue = F("Zum Ickerkolk");
        break;
    }
    case 348185:
    {
        returnValue = F("Zum Idar");
        break;
    }
    case 348186:
    {
        returnValue = F("Zum Igelbach");
        break;
    }
    case 348187:
    {
        returnValue = F("Zum Igelberg");
        break;
    }
    case 348188:
    {
        returnValue = F("Zum Igelsborn");
        break;
    }
    case 348189:
    {
        returnValue = F("Zum Igelsbusch");
        break;
    }
    case 348190:
    {
        returnValue = F("Zum Igelsrod");
        break;
    }
    case 348191:
    {
        returnValue = F("Zum Ihlenphul");
        break;
    }
    case 348192:
    {
        returnValue = F("Zum Ihnedieck");
        break;
    }
    case 348193:
    {
        returnValue = F("Zum Ikenbusch");
        break;
    }
    case 348194:
    {
        returnValue = F("Zum Ilkental");
        break;
    }
    case 348195:
    {
        returnValue = F("Zum Illbruckshof");
        break;
    }
    case 348196:
    {
        returnValue = F("Zum Illerfeld");
        break;
    }
    case 348197:
    {
        returnValue = F("Zum Illergries");
        break;
    }
    case 348198:
    {
        returnValue = F("Zum Ilsetal");
        break;
    }
    case 348199:
    {
        returnValue = F("Zum Ilskopf");
        break;
    }
    case 348200:
    {
        returnValue = F("Zum Ilztal");
        break;
    }
    case 348201:
    {
        returnValue = F("Zum Imberg");
        break;
    }
    case 348202:
    {
        returnValue = F("Zum Imbusch");
        break;
    }
    case 348203:
    {
        returnValue = F("Zum Immelag");
        break;
    }
    case 348204:
    {
        returnValue = F("Zum Immenhof");
        break;
    }
    case 348205:
    {
        returnValue = F("Zum Immenschauer");
        break;
    }
    case 348206:
    {
        returnValue = F("Zum Immensteg");
        break;
    }
    case 348207:
    {
        returnValue = F("Zum Immentun");
        break;
    }
    case 348208:
    {
        returnValue = F("Zum Immhof");
        break;
    }
    case 348209:
    {
        returnValue = F("Zum Industriehafen");
        break;
    }
    case 348210:
    {
        returnValue = F("Zum Industriepark");
        break;
    }
    case 348211:
    {
        returnValue = F("Zum Innenring");
        break;
    }
    case 348212:
    {
        returnValue = F("Zum Inselparadies");
        break;
    }
    case 348213:
    {
        returnValue = F("Zum Inselsee");
        break;
    }
    case 348214:
    {
        returnValue = F("Zum Inselseekanal");
        break;
    }
    case 348215:
    {
        returnValue = F("Zum Irrgarten");
        break;
    }
    case 348216:
    {
        returnValue = F("Zum Irrtum");
        break;
    }
    case 348217:
    {
        returnValue = F("Zum Isarkraftwerk");
        break;
    }
    case 348218:
    {
        returnValue = F("Zum Isetal");
        break;
    }
    case 348219:
    {
        returnValue = F("Zum Issel");
        break;
    }
    case 348220:
    {
        returnValue = F("Zum Isselstein");
        break;
    }
    case 348221:
    {
        returnValue = F("Zum Ith");
        break;
    }
    case 348222:
    {
        returnValue = F("Zum Itzbachtal");
        break;
    }
    case 348223:
    {
        returnValue = F("Zum Jadebusen");
        break;
    }
    case 348224:
    {
        returnValue = F("Zum Jagdberg");
        break;
    }
    case 348225:
    {
        returnValue = F("Zum Jagdbogen");
        break;
    }
    case 348226:
    {
        returnValue = F("Zum Jagdfeld");
        break;
    }
    case 348227:
    {
        returnValue = F("Zum Jagdhaus");
        break;
    }
    case 348228:
    {
        returnValue = F("Zum Jagdschloß");
        break;
    }
    case 348229:
    {
        returnValue = F("Zum Jagdthof");
        break;
    }
    case 348230:
    {
        returnValue = F("Zum Jagenstein");
        break;
    }
    case 348231:
    {
        returnValue = F("Zum Jagsttal");
        break;
    }
    case 348232:
    {
        returnValue = F("Zum Jagstursprung");
        break;
    }
    case 348233:
    {
        returnValue = F("Zum Jahnatal");
        break;
    }
    case 348234:
    {
        returnValue = F("Zum Jahnsportplatz");
        break;
    }
    case 348235:
    {
        returnValue = F("Zum Jahnstein");
        break;
    }
    case 348236:
    {
        returnValue = F("Zum Jakobsbrunnen");
        break;
    }
    case 348237:
    {
        returnValue = F("Zum Jakobsbörnchen");
        break;
    }
    case 348238:
    {
        returnValue = F("Zum Jarßumer Hafen");
        break;
    }
    case 348239:
    {
        returnValue = F("Zum Jasenberg");
        break;
    }
    case 348240:
    {
        returnValue = F("Zum Jaydthof");
        break;
    }
    case 348241:
    {
        returnValue = F("Zum Jedenbruch");
        break;
    }
    case 348242:
    {
        returnValue = F("Zum Jelsloch");
        break;
    }
    case 348243:
    {
        returnValue = F("Zum Jettenbach");
        break;
    }
    case 348244:
    {
        returnValue = F("Zum Jettholz");
        break;
    }
    case 348245:
    {
        returnValue = F("Zum Jidwedel");
        break;
    }
    case 348246:
    {
        returnValue = F("Zum Jockelberg");
        break;
    }
    case 348247:
    {
        returnValue = F("Zum Johanneshof");
        break;
    }
    case 348248:
    {
        returnValue = F("Zum Johanneskopf");
        break;
    }
    case 348249:
    {
        returnValue = F("Zum Johannesstift");
        break;
    }
    case 348250:
    {
        returnValue = F("Zum Johannisberg");
        break;
    }
    case 348251:
    {
        returnValue = F("Zum Johannisbruch");
        break;
    }
    case 348252:
    {
        returnValue = F("Zum Johannisstein");
        break;
    }
    case 348253:
    {
        returnValue = F("Zum Johannistal");
        break;
    }
    case 348254:
    {
        returnValue = F("Zum Josefshäuschen");
        break;
    }
    case 348255:
    {
        returnValue = F("Zum Josefskreuz");
        break;
    }
    case 348256:
    {
        returnValue = F("Zum Judenfriedhof");
        break;
    }
    case 348257:
    {
        returnValue = F("Zum Jugendheim");
        break;
    }
    case 348258:
    {
        returnValue = F("Zum Jugendzentrum");
        break;
    }
    case 348259:
    {
        returnValue = F("Zum Jungenwald");
        break;
    }
    case 348260:
    {
        returnValue = F("Zum Jungfernbach");
        break;
    }
    case 348261:
    {
        returnValue = F("Zum Jungfernholz");
        break;
    }
    case 348262:
    {
        returnValue = F("Zum Jungischt");
        break;
    }
    case 348263:
    {
        returnValue = F("Zum Junkenholz");
        break;
    }
    case 348264:
    {
        returnValue = F("Zum Junkerhof");
        break;
    }
    case 348265:
    {
        returnValue = F("Zum Junkernplatz");
        break;
    }
    case 348266:
    {
        returnValue = F("Zum Junkernwald");
        break;
    }
    case 348267:
    {
        returnValue = F("Zum Junkersbusch");
        break;
    }
    case 348268:
    {
        returnValue = F("Zum Junkerstrauch");
        break;
    }
    case 348269:
    {
        returnValue = F("Zum Junkholz");
        break;
    }
    case 348270:
    {
        returnValue = F("Zum Jutenstrauch");
        break;
    }
    case 348271:
    {
        returnValue = F("Zum Jägerberg");
        break;
    }
    case 348272:
    {
        returnValue = F("Zum Jägerborn");
        break;
    }
    case 348273:
    {
        returnValue = F("Zum Jägerbrunnen");
        break;
    }
    case 348274:
    {
        returnValue = F("Zum Jägerdiek");
        break;
    }
    case 348275:
    {
        returnValue = F("Zum Jägerfeld");
        break;
    }
    case 348276:
    {
        returnValue = F("Zum Jägerhain");
        break;
    }
    case 348277:
    {
        returnValue = F("Zum Jägerhof");
        break;
    }
    case 348278:
    {
        returnValue = F("Zum Jägerort");
        break;
    }
    case 348279:
    {
        returnValue = F("Zum Jägersteig");
        break;
    }
    case 348280:
    {
        returnValue = F("Zum Jägerstein");
        break;
    }
    case 348281:
    {
        returnValue = F("Zum Jägerswald");
        break;
    }
    case 348282:
    {
        returnValue = F("Zum Jägertal");
        break;
    }
    case 348283:
    {
        returnValue = F("Zum Jähen Rain");
        break;
    }
    case 348284:
    {
        returnValue = F("Zum Jüttebruch");
        break;
    }
    case 348285:
    {
        returnValue = F("Zum KAP");
        break;
    }
    case 348286:
    {
        returnValue = F("Zum Kaarbach");
        break;
    }
    case 348287:
    {
        returnValue = F("Zum Kabachhof");
        break;
    }
    case 348288:
    {
        returnValue = F("Zum Kabel");
        break;
    }
    case 348289:
    {
        returnValue = F("Zum Kadelhof");
        break;
    }
    case 348290:
    {
        returnValue = F("Zum Kahlberg");
        break;
    }
    case 348291:
    {
        returnValue = F("Zum Kahleberg");
        break;
    }
    case 348292:
    {
        returnValue = F("Zum Kahlen");
        break;
    }
    case 348293:
    {
        returnValue = F("Zum Kahlen Berg");
        break;
    }
    case 348294:
    {
        returnValue = F("Zum Kahlen Felde");
        break;
    }
    case 348295:
    {
        returnValue = F("Zum Kahlenberg");
        break;
    }
    case 348296:
    {
        returnValue = F("Zum Kahlenborn");
        break;
    }
    case 348297:
    {
        returnValue = F("Zum Kahnteich");
        break;
    }
    case 348298:
    {
        returnValue = F("Zum Kahrener Sportplatz");
        break;
    }
    case 348299:
    {
        returnValue = F("Zum Kaibach");
        break;
    }
    case 348300:
    {
        returnValue = F("Zum Kaien");
        break;
    }
    case 348301:
    {
        returnValue = F("Zum Kailbachtal");
        break;
    }
    case 348302:
    {
        returnValue = F("Zum Kaiserblick");
        break;
    }
    case 348303:
    {
        returnValue = F("Zum Kaiserbusch");
        break;
    }
    case 348304:
    {
        returnValue = F("Zum Kaisergarten");
        break;
    }
    case 348305:
    {
        returnValue = F("Zum Kaiserort");
        break;
    }
    case 348306:
    {
        returnValue = F("Zum Kaisersfeld");
        break;
    }
    case 348307:
    {
        returnValue = F("Zum Kaiserstuhl");
        break;
    }
    case 348308:
    {
        returnValue = F("Zum Kaisertal");
        break;
    }
    case 348309:
    {
        returnValue = F("Zum Kaiserteich");
        break;
    }
    case 348310:
    {
        returnValue = F("Zum Kakauer Berg");
        break;
    }
    case 348311:
    {
        returnValue = F("Zum Kakelberg");
        break;
    }
    case 348312:
    {
        returnValue = F("Zum Kalabrich");
        break;
    }
    case 348313:
    {
        returnValue = F("Zum Kalber Holz");
        break;
    }
    case 348314:
    {
        returnValue = F("Zum Kalberkamp");
        break;
    }
    case 348315:
    {
        returnValue = F("Zum Kalerkreuz");
        break;
    }
    case 348316:
    {
        returnValue = F("Zum Kalfertshaus");
        break;
    }
    case 348317:
    {
        returnValue = F("Zum Kaliberg");
        break;
    }
    case 348318:
    {
        returnValue = F("Zum Kalk");
        break;
    }
    case 348319:
    {
        returnValue = F("Zum Kalkberg");
        break;
    }
    case 348320:
    {
        returnValue = F("Zum Kalkfeld");
        break;
    }
    case 348321:
    {
        returnValue = F("Zum Kalkflachmoor");
        break;
    }
    case 348322:
    {
        returnValue = F("Zum Kalkgraben");
        break;
    }
    case 348323:
    {
        returnValue = F("Zum Kalkofen");
        break;
    }
    case 348324:
    {
        returnValue = F("Zum Kalkrain");
        break;
    }
    case 348325:
    {
        returnValue = F("Zum Kalkstollen");
        break;
    }
    case 348326:
    {
        returnValue = F("Zum Kalkwerk");
        break;
    }
    case 348327:
    {
        returnValue = F("Zum Kallenberg");
        break;
    }
    case 348328:
    {
        returnValue = F("Zum Kallenborn");
        break;
    }
    case 348329:
    {
        returnValue = F("Zum Kallenfelser Hof");
        break;
    }
    case 348330:
    {
        returnValue = F("Zum Kallin");
        break;
    }
    case 348331:
    {
        returnValue = F("Zum Kalltal");
        break;
    }
    case 348332:
    {
        returnValue = F("Zum Kalossen");
        break;
    }
    case 348333:
    {
        returnValue = F("Zum Kalten Brunnen");
        break;
    }
    case 348334:
    {
        returnValue = F("Zum Kalten Feld");
        break;
    }
    case 348335:
    {
        returnValue = F("Zum Kalten Frosch");
        break;
    }
    case 348336:
    {
        returnValue = F("Zum Kaltenberg");
        break;
    }
    case 348337:
    {
        returnValue = F("Zum Kaltenborn");
        break;
    }
    case 348338:
    {
        returnValue = F("Zum Kalthaus");
        break;
    }
    case 348339:
    {
        returnValue = F("Zum Kaltwassereichbaum");
        break;
    }
    case 348340:
    {
        returnValue = F("Zum Kalvarienberg");
        break;
    }
    case 348341:
    {
        returnValue = F("Zum Kalverhof");
        break;
    }
    case 348342:
    {
        returnValue = F("Zum Kammerberg");
        break;
    }
    case 348343:
    {
        returnValue = F("Zum Kammerforst");
        break;
    }
    case 348344:
    {
        returnValue = F("Zum Kammergarten");
        break;
    }
    case 348345:
    {
        returnValue = F("Zum Kammerwald");
        break;
    }
    case 348346:
    {
        returnValue = F("Zum Kamp");
        break;
    }
    case 348347:
    {
        returnValue = F("Zum Kampbusch");
        break;
    }
    case 348348:
    {
        returnValue = F("Zum Kampe");
        break;
    }
    case 348349:
    {
        returnValue = F("Zum Kamper Tal -neu-");
        break;
    }
    case 348350:
    {
        returnValue = F("Zum Kamphook");
        break;
    }
    case 348351:
    {
        returnValue = F("Zum Kampohl");
        break;
    }
    case 348352:
    {
        returnValue = F("Zum Kanal");
        break;
    }
    case 348353:
    {
        returnValue = F("Zum Kanaldamm");
        break;
    }
    case 348354:
    {
        returnValue = F("Zum Kanaldeich");
        break;
    }
    case 348355:
    {
        returnValue = F("Zum Kannebach");
        break;
    }
    case 348356:
    {
        returnValue = F("Zum Kannenbach");
        break;
    }
    case 348357:
    {
        returnValue = F("Zum Kanzelschlag");
        break;
    }
    case 348358:
    {
        returnValue = F("Zum Kanzelstein");
        break;
    }
    case 348359:
    {
        returnValue = F("Zum Kap");
        break;
    }
    case 348360:
    {
        returnValue = F("Zum Kapellchen");
        break;
    }
    case 348361:
    {
        returnValue = F("Zum Kapellenbarg");
        break;
    }
    case 348362:
    {
        returnValue = F("Zum Kapellenberg");
        break;
    }
    case 348363:
    {
        returnValue = F("Zum Kapellenpesch");
        break;
    }
    case 348364:
    {
        returnValue = F("Zum Kapellenwald");
        break;
    }
    case 348365:
    {
        returnValue = F("Zum Kapf");
        break;
    }
    case 348366:
    {
        returnValue = F("Zum Kappelsberg");
        break;
    }
    case 348367:
    {
        returnValue = F("Zum Kappenberg");
        break;
    }
    case 348368:
    {
        returnValue = F("Zum Kappensteig");
        break;
    }
    case 348369:
    {
        returnValue = F("Zum Karfreitag");
        break;
    }
    case 348370:
    {
        returnValue = F("Zum Karlsberg");
        break;
    }
    case 348371:
    {
        returnValue = F("Zum Karnberg");
        break;
    }
    case 348372:
    {
        returnValue = F("Zum Karolsfeld");
        break;
    }
    case 348373:
    {
        returnValue = F("Zum Karpfen");
        break;
    }
    case 348374:
    {
        returnValue = F("Zum Karpfenteich");
        break;
    }
    case 348375:
    {
        returnValue = F("Zum Karren");
        break;
    }
    case 348376:
    {
        returnValue = F("Zum Karrenbusch");
        break;
    }
    case 348377:
    {
        returnValue = F("Zum Kartoffelhof");
        break;
    }
    case 348378:
    {
        returnValue = F("Zum Kartoffelmoor");
        break;
    }
    case 348379:
    {
        returnValue = F("Zum Kartoffelstein");
        break;
    }
    case 348380:
    {
        returnValue = F("Zum Karussell");
        break;
    }
    case 348381:
    {
        returnValue = F("Zum Karwinkel");
        break;
    }
    case 348382:
    {
        returnValue = F("Zum Kasberg");
        break;
    }
    case 348383:
    {
        returnValue = F("Zum Kasbruchtal");
        break;
    }
    case 348384:
    {
        returnValue = F("Zum Kasparsberg");
        break;
    }
    case 348385:
    {
        returnValue = F("Zum Kaspersberg");
        break;
    }
    case 348386:
    {
        returnValue = F("Zum Kassebusch");
        break;
    }
    case 348387:
    {
        returnValue = F("Zum Kastanienbaum");
        break;
    }
    case 348388:
    {
        returnValue = F("Zum Kastanienfeld");
        break;
    }
    case 348389:
    {
        returnValue = F("Zum Kastanienplatz");
        break;
    }
    case 348390:
    {
        returnValue = F("Zum Kastanienweg");
        break;
    }
    case 348391:
    {
        returnValue = F("Zum Kastel");
        break;
    }
    case 348392:
    {
        returnValue = F("Zum Kastell");
        break;
    }
    case 348393:
    {
        returnValue = F("Zum Kastellrech");
        break;
    }
    case 348394:
    {
        returnValue = F("Zum Katamaran");
        break;
    }
    case 348395:
    {
        returnValue = F("Zum Katen");
        break;
    }
    case 348396:
    {
        returnValue = F("Zum Katt");
        break;
    }
    case 348397:
    {
        returnValue = F("Zum Kattenmeer");
        break;
    }
    case 348398:
    {
        returnValue = F("Zum Kattenstein");
        break;
    }
    case 348399:
    {
        returnValue = F("Zum Kattewall");
        break;
    }
    case 348400:
    {
        returnValue = F("Zum Katzbach");
        break;
    }
    case 348401:
    {
        returnValue = F("Zum Katzenberg");
        break;
    }
    case 348402:
    {
        returnValue = F("Zum Katzenböhl");
        break;
    }
    case 348403:
    {
        returnValue = F("Zum Katzengrund");
        break;
    }
    case 348404:
    {
        returnValue = F("Zum Katzenkopf");
        break;
    }
    case 348405:
    {
        returnValue = F("Zum Katzenloch");
        break;
    }
    case 348406:
    {
        returnValue = F("Zum Katzenrech");
        break;
    }
    case 348407:
    {
        returnValue = F("Zum Katzenstein");
        break;
    }
    case 348408:
    {
        returnValue = F("Zum Katzensturz");
        break;
    }
    case 348409:
    {
        returnValue = F("Zum Kaulberg");
        break;
    }
    case 348410:
    {
        returnValue = F("Zum Kavalierhaus");
        break;
    }
    case 348411:
    {
        returnValue = F("Zum Kavenkamp");
        break;
    }
    case 348412:
    {
        returnValue = F("Zum Kavian");
        break;
    }
    case 348413:
    {
        returnValue = F("Zum Kegelberg");
        break;
    }
    case 348414:
    {
        returnValue = F("Zum Kegelsköpfchen");
        break;
    }
    case 348415:
    {
        returnValue = F("Zum Kegelspiel");
        break;
    }
    case 348416:
    {
        returnValue = F("Zum Keglerheim");
        break;
    }
    case 348417:
    {
        returnValue = F("Zum Kehlberg");
        break;
    }
    case 348418:
    {
        returnValue = F("Zum Kehr");
        break;
    }
    case 348419:
    {
        returnValue = F("Zum Kehrnagel");
        break;
    }
    case 348420:
    {
        returnValue = F("Zum Keilberg");
        break;
    }
    case 348421:
    {
        returnValue = F("Zum Keiler");
        break;
    }
    case 348422:
    {
        returnValue = F("Zum Keising");
        break;
    }
    case 348423:
    {
        returnValue = F("Zum Keitelberg");
        break;
    }
    case 348424:
    {
        returnValue = F("Zum Kelderberg");
        break;
    }
    case 348425:
    {
        returnValue = F("Zum Kelkerbach");
        break;
    }
    case 348426:
    {
        returnValue = F("Zum Kellenberg");
        break;
    }
    case 348427:
    {
        returnValue = F("Zum Keller");
        break;
    }
    case 348428:
    {
        returnValue = F("Zum Kellerbach");
        break;
    }
    case 348429:
    {
        returnValue = F("Zum Kellerbaum");
        break;
    }
    case 348430:
    {
        returnValue = F("Zum Kellerberg");
        break;
    }
    case 348431:
    {
        returnValue = F("Zum Kellerbühl");
        break;
    }
    case 348432:
    {
        returnValue = F("Zum Kellerdamm");
        break;
    }
    case 348433:
    {
        returnValue = F("Zum Kellerhals");
        break;
    }
    case 348434:
    {
        returnValue = F("Zum Kellerhof");
        break;
    }
    case 348435:
    {
        returnValue = F("Zum Kellerhäusl");
        break;
    }
    case 348436:
    {
        returnValue = F("Zum Kellerpfad");
        break;
    }
    case 348437:
    {
        returnValue = F("Zum Keltenring");
        break;
    }
    case 348438:
    {
        returnValue = F("Zum Kelterberg");
        break;
    }
    case 348439:
    {
        returnValue = F("Zum Kemmer Berg");
        break;
    }
    case 348440:
    {
        returnValue = F("Zum Kempenberg");
        break;
    }
    case 348441:
    {
        returnValue = F("Zum Kendele");
        break;
    }
    case 348442:
    {
        returnValue = F("Zum Kerbeplatz");
        break;
    }
    case 348443:
    {
        returnValue = F("Zum Kerbtal");
        break;
    }
    case 348444:
    {
        returnValue = F("Zum Kerlesgrund");
        break;
    }
    case 348445:
    {
        returnValue = F("Zum Kerner See");
        break;
    }
    case 348446:
    {
        returnValue = F("Zum Kernersgraben");
        break;
    }
    case 348447:
    {
        returnValue = F("Zum Kerschenborn");
        break;
    }
    case 348448:
    {
        returnValue = F("Zum Kespohl");
        break;
    }
    case 348449:
    {
        returnValue = F("Zum Kessel");
        break;
    }
    case 348450:
    {
        returnValue = F("Zum Kesselberg");
        break;
    }
    case 348451:
    {
        returnValue = F("Zum Kesselbrunnen");
        break;
    }
    case 348452:
    {
        returnValue = F("Zum Kesselchen");
        break;
    }
    case 348453:
    {
        returnValue = F("Zum Kesselort");
        break;
    }
    case 348454:
    {
        returnValue = F("Zum Ketelsberg");
        break;
    }
    case 348455:
    {
        returnValue = F("Zum Kettenacker");
        break;
    }
    case 348456:
    {
        returnValue = F("Zum Ketzerstein");
        break;
    }
    case 348457:
    {
        returnValue = F("Zum Kewelsberg");
        break;
    }
    case 348458:
    {
        returnValue = F("Zum Kiebitz Moor");
        break;
    }
    case 348459:
    {
        returnValue = F("Zum Kiebitzberg");
        break;
    }
    case 348460:
    {
        returnValue = F("Zum Kiebitzgrund");
        break;
    }
    case 348461:
    {
        returnValue = F("Zum Kiebitzluch");
        break;
    }
    case 348462:
    {
        returnValue = F("Zum Kiebitzmoor");
        break;
    }
    case 348463:
    {
        returnValue = F("Zum Kiebitznest");
        break;
    }
    case 348464:
    {
        returnValue = F("Zum Kiebitzsee");
        break;
    }
    case 348465:
    {
        returnValue = F("Zum Kiefberg");
        break;
    }
    case 348466:
    {
        returnValue = F("Zum Kieferchen");
        break;
    }
    case 348467:
    {
        returnValue = F("Zum Kiefernberg");
        break;
    }
    case 348468:
    {
        returnValue = F("Zum Kieferngrund");
        break;
    }
    case 348469:
    {
        returnValue = F("Zum Kiefernloch");
        break;
    }
    case 348470:
    {
        returnValue = F("Zum Kiefernwald");
        break;
    }
    case 348471:
    {
        returnValue = F("Zum Kiefernwäldchen");
        break;
    }
    case 348472:
    {
        returnValue = F("Zum Kiefmoor");
        break;
    }
    case 348473:
    {
        returnValue = F("Zum Kiehnkenberg");
        break;
    }
    case 348474:
    {
        returnValue = F("Zum Kiekutsee");
        break;
    }
    case 348475:
    {
        returnValue = F("Zum Kieler Hafen");
        break;
    }
    case 348476:
    {
        returnValue = F("Zum Kielmoor");
        break;
    }
    case 348477:
    {
        returnValue = F("Zum Kienberg");
        break;
    }
    case 348478:
    {
        returnValue = F("Zum Kienbusch");
        break;
    }
    case 348479:
    {
        returnValue = F("Zum Kienmoor");
        break;
    }
    case 348480:
    {
        returnValue = F("Zum Kierberg");
        break;
    }
    case 348481:
    {
        returnValue = F("Zum Kiesberg");
        break;
    }
    case 348482:
    {
        returnValue = F("Zum Kiesel");
        break;
    }
    case 348483:
    {
        returnValue = F("Zum Kiesgrüble");
        break;
    }
    case 348484:
    {
        returnValue = F("Zum Kiessee");
        break;
    }
    case 348485:
    {
        returnValue = F("Zum Kiesteich");
        break;
    }
    case 348486:
    {
        returnValue = F("Zum Kiesweiher");
        break;
    }
    case 348487:
    {
        returnValue = F("Zum Kieswerk");
        break;
    }
    case 348488:
    {
        returnValue = F("Zum Kietz");
        break;
    }
    case 348489:
    {
        returnValue = F("Zum Killenberg");
        break;
    }
    case 348490:
    {
        returnValue = F("Zum Kim");
        break;
    }
    case 348491:
    {
        returnValue = F("Zum Kindergarten");
        break;
    }
    case 348492:
    {
        returnValue = F("Zum Kindergartenberg");
        break;
    }
    case 348493:
    {
        returnValue = F("Zum Kinderland");
        break;
    }
    case 348494:
    {
        returnValue = F("Zum Kinderzentrum");
        break;
    }
    case 348495:
    {
        returnValue = F("Zum Kindstein");
        break;
    }
    case 348496:
    {
        returnValue = F("Zum Kinzigdamm");
        break;
    }
    case 348497:
    {
        returnValue = F("Zum Kippertal");
        break;
    }
    case 348498:
    {
        returnValue = F("Zum Kippkesberg");
        break;
    }
    case 348499:
    {
        returnValue = F("Zum Kirchberg");
        break;
    }
    case 348500:
    {
        returnValue = F("Zum Kirchblick");
        break;
    }
    case 348501:
    {
        returnValue = F("Zum Kirchborn");
        break;
    }
    case 348502:
    {
        returnValue = F("Zum Kirchbühl");
        break;
    }
    case 348503:
    {
        returnValue = F("Zum Kirchenholz");
        break;
    }
    case 348504:
    {
        returnValue = F("Zum Kirchenpfad");
        break;
    }
    case 348505:
    {
        returnValue = F("Zum Kirchenpättchen");
        break;
    }
    case 348506:
    {
        returnValue = F("Zum Kirchenstieg");
        break;
    }
    case 348507:
    {
        returnValue = F("Zum Kirchenwald");
        break;
    }
    case 348508:
    {
        returnValue = F("Zum Kirchenwäldchen");
        break;
    }
    case 348509:
    {
        returnValue = F("Zum Kirchfeld");
        break;
    }
    case 348510:
    {
        returnValue = F("Zum Kirchhof");
        break;
    }
    case 348511:
    {
        returnValue = F("Zum Kirchhof I");
        break;
    }
    case 348512:
    {
        returnValue = F("Zum Kirchhof II");
        break;
    }
    case 348513:
    {
        returnValue = F("Zum Kirchhof III");
        break;
    }
    case 348514:
    {
        returnValue = F("Zum Kirchhof IV");
        break;
    }
    case 348515:
    {
        returnValue = F("Zum Kirchholz");
        break;
    }
    case 348516:
    {
        returnValue = F("Zum Kirchplatz");
        break;
    }
    case 348517:
    {
        returnValue = F("Zum Kirchsiefen");
        break;
    }
    case 348518:
    {
        returnValue = F("Zum Kirchsteg");
        break;
    }
    case 348519:
    {
        returnValue = F("Zum Kirchsteig");
        break;
    }
    case 348520:
    {
        returnValue = F("Zum Kirchsteigfeld");
        break;
    }
    case 348521:
    {
        returnValue = F("Zum Kirchweg");
        break;
    }
    case 348522:
    {
        returnValue = F("Zum Kirchwegle");
        break;
    }
    case 348523:
    {
        returnValue = F("Zum Kirchweyher See");
        break;
    }
    case 348524:
    {
        returnValue = F("Zum Kirmesplatz");
        break;
    }
    case 348525:
    {
        returnValue = F("Zum Kirschbaum");
        break;
    }
    case 348526:
    {
        returnValue = F("Zum Kirschberg");
        break;
    }
    case 348527:
    {
        returnValue = F("Zum Kirschborn");
        break;
    }
    case 348528:
    {
        returnValue = F("Zum Kirschbuckel");
        break;
    }
    case 348529:
    {
        returnValue = F("Zum Kirschbäumchen");
        break;
    }
    case 348530:
    {
        returnValue = F("Zum Kirschenberg");
        break;
    }
    case 348531:
    {
        returnValue = F("Zum Kirschengraben");
        break;
    }
    case 348532:
    {
        returnValue = F("Zum Kirschenhof");
        break;
    }
    case 348533:
    {
        returnValue = F("Zum Kirschenwäldchen");
        break;
    }
    case 348534:
    {
        returnValue = F("Zum Kirschgarten");
        break;
    }
    case 348535:
    {
        returnValue = F("Zum Kissel");
        break;
    }
    case 348536:
    {
        returnValue = F("Zum Kisselwörth");
        break;
    }
    case 348537:
    {
        returnValue = F("Zum Kittel");
        break;
    }
    case 348538:
    {
        returnValue = F("Zum Kiwitt");
        break;
    }
    case 348539:
    {
        returnValue = F("Zum Kißling");
        break;
    }
    case 348540:
    {
        returnValue = F("Zum Klan");
        break;
    }
    case 348541:
    {
        returnValue = F("Zum Klapperhaus");
        break;
    }
    case 348542:
    {
        returnValue = F("Zum Klaskerl");
        break;
    }
    case 348543:
    {
        returnValue = F("Zum Klausenhorn");
        break;
    }
    case 348544:
    {
        returnValue = F("Zum Klausental");
        break;
    }
    case 348545:
    {
        returnValue = F("Zum Klauskirchl");
        break;
    }
    case 348546:
    {
        returnValue = F("Zum Klautzkesee");
        break;
    }
    case 348547:
    {
        returnValue = F("Zum Klay");
        break;
    }
    case 348548:
    {
        returnValue = F("Zum Klee");
        break;
    }
    case 348549:
    {
        returnValue = F("Zum Kleeberg");
        break;
    }
    case 348550:
    {
        returnValue = F("Zum Kleeblatt");
        break;
    }
    case 348551:
    {
        returnValue = F("Zum Kleebusch");
        break;
    }
    case 348552:
    {
        returnValue = F("Zum Kleebühl");
        break;
    }
    case 348553:
    {
        returnValue = F("Zum Kleegarten");
        break;
    }
    case 348554:
    {
        returnValue = F("Zum Kleekamp");
        break;
    }
    case 348555:
    {
        returnValue = F("Zum Kleerain");
        break;
    }
    case 348556:
    {
        returnValue = F("Zum Kleerasen");
        break;
    }
    case 348557:
    {
        returnValue = F("Zum Kleeverblock");
        break;
    }
    case 348558:
    {
        returnValue = F("Zum Klei");
        break;
    }
    case 348559:
    {
        returnValue = F("Zum Kleiberg");
        break;
    }
    case 348560:
    {
        returnValue = F("Zum Kleihügel");
        break;
    }
    case 348561:
    {
        returnValue = F("Zum Kleinbahnhof");
        break;
    }
    case 348562:
    {
        returnValue = F("Zum Kleinen Aap");
        break;
    }
    case 348563:
    {
        returnValue = F("Zum Kleinen Ahren");
        break;
    }
    case 348564:
    {
        returnValue = F("Zum Kleinen Arboretum");
        break;
    }
    case 348565:
    {
        returnValue = F("Zum Kleinen Atzmann");
        break;
    }
    case 348566:
    {
        returnValue = F("Zum Kleinen Deichfluss");
        break;
    }
    case 348567:
    {
        returnValue = F("Zum Kleinen Dorfplan");
        break;
    }
    case 348568:
    {
        returnValue = F("Zum Kleinen Dänholm");
        break;
    }
    case 348569:
    {
        returnValue = F("Zum Kleinen Esch");
        break;
    }
    case 348570:
    {
        returnValue = F("Zum Kleinen Feld");
        break;
    }
    case 348571:
    {
        returnValue = F("Zum Kleinen Lottschesee");
        break;
    }
    case 348572:
    {
        returnValue = F("Zum Kleinen Oelberg");
        break;
    }
    case 348573:
    {
        returnValue = F("Zum Kleinen Siek");
        break;
    }
    case 348574:
    {
        returnValue = F("Zum Kleinen Wiebusch");
        break;
    }
    case 348575:
    {
        returnValue = F("Zum Kleingarten");
        break;
    }
    case 348576:
    {
        returnValue = F("Zum Kleinstberg");
        break;
    }
    case 348577:
    {
        returnValue = F("Zum Kleitsch");
        break;
    }
    case 348578:
    {
        returnValue = F("Zum Klemmloch");
        break;
    }
    case 348579:
    {
        returnValue = F("Zum Kleppchen");
        break;
    }
    case 348580:
    {
        returnValue = F("Zum Klettergarten");
        break;
    }
    case 348581:
    {
        returnValue = F("Zum Kletterpoth");
        break;
    }
    case 348582:
    {
        returnValue = F("Zum Kleverberg");
        break;
    }
    case 348583:
    {
        returnValue = F("Zum Kliff");
        break;
    }
    case 348584:
    {
        returnValue = F("Zum Klingelberg");
        break;
    }
    case 348585:
    {
        returnValue = F("Zum Klingelborn");
        break;
    }
    case 348586:
    {
        returnValue = F("Zum Klingelpfad");
        break;
    }
    case 348587:
    {
        returnValue = F("Zum Klingenberg");
        break;
    }
    case 348588:
    {
        returnValue = F("Zum Klingerbour");
        break;
    }
    case 348589:
    {
        returnValue = F("Zum Klingergraben");
        break;
    }
    case 348590:
    {
        returnValue = F("Zum Klingertal");
        break;
    }
    case 348591:
    {
        returnValue = F("Zum Klinglein");
        break;
    }
    case 348592:
    {
        returnValue = F("Zum Klinker");
        break;
    }
    case 348593:
    {
        returnValue = F("Zum Klinkerberg");
        break;
    }
    case 348594:
    {
        returnValue = F("Zum Klinkgraben");
        break;
    }
    case 348595:
    {
        returnValue = F("Zum Klint");
        break;
    }
    case 348596:
    {
        returnValue = F("Zum Klitzenbach");
        break;
    }
    case 348597:
    {
        returnValue = F("Zum Klopp");
        break;
    }
    case 348598:
    {
        returnValue = F("Zum Kloschwitzer Grund");
        break;
    }
    case 348599:
    {
        returnValue = F("Zum Klosterbach");
        break;
    }
    case 348600:
    {
        returnValue = F("Zum Klosterbrühl");
        break;
    }
    case 348601:
    {
        returnValue = F("Zum Klosterbusch");
        break;
    }
    case 348602:
    {
        returnValue = F("Zum Klosterflur");
        break;
    }
    case 348603:
    {
        returnValue = F("Zum Klostergut");
        break;
    }
    case 348604:
    {
        returnValue = F("Zum Klosterhof");
        break;
    }
    case 348605:
    {
        returnValue = F("Zum Klostersee");
        break;
    }
    case 348606:
    {
        returnValue = F("Zum Klosterstein");
        break;
    }
    case 348607:
    {
        returnValue = F("Zum Klotz");
        break;
    }
    case 348608:
    {
        returnValue = F("Zum Klump");
        break;
    }
    case 348609:
    {
        returnValue = F("Zum Klusberg");
        break;
    }
    case 348610:
    {
        returnValue = F("Zum Klusenberg");
        break;
    }
    case 348611:
    {
        returnValue = F("Zum Kluuten");
        break;
    }
    case 348612:
    {
        returnValue = F("Zum Kluxfeld");
        break;
    }
    case 348613:
    {
        returnValue = F("Zum Klärteich");
        break;
    }
    case 348614:
    {
        returnValue = F("Zum Klärwerk");
        break;
    }
    case 348615:
    {
        returnValue = F("Zum Klättling");
        break;
    }
    case 348616:
    {
        returnValue = F("Zum Kläuschen");
        break;
    }
    case 348617:
    {
        returnValue = F("Zum Klöwer");
        break;
    }
    case 348618:
    {
        returnValue = F("Zum Klüfgen");
        break;
    }
    case 348619:
    {
        returnValue = F("Zum Klümoor");
        break;
    }
    case 348620:
    {
        returnValue = F("Zum Klützenberg");
        break;
    }
    case 348621:
    {
        returnValue = F("Zum Knabbert");
        break;
    }
    case 348622:
    {
        returnValue = F("Zum Knapp");
        break;
    }
    case 348623:
    {
        returnValue = F("Zum Knappe");
        break;
    }
    case 348624:
    {
        returnValue = F("Zum Knappsberg");
        break;
    }
    case 348625:
    {
        returnValue = F("Zum Knausholzschacht");
        break;
    }
    case 348626:
    {
        returnValue = F("Zum Knechelsberg");
        break;
    }
    case 348627:
    {
        returnValue = F("Zum Kneppen");
        break;
    }
    case 348628:
    {
        returnValue = F("Zum Knick");
        break;
    }
    case 348629:
    {
        returnValue = F("Zum Knicken");
        break;
    }
    case 348630:
    {
        returnValue = F("Zum Knicksborn");
        break;
    }
    case 348631:
    {
        returnValue = F("Zum Kniepacker");
        break;
    }
    case 348632:
    {
        returnValue = F("Zum Kniepbusch");
        break;
    }
    case 348633:
    {
        returnValue = F("Zum Kniepschloot");
        break;
    }
    case 348634:
    {
        returnValue = F("Zum Kniesahlen");
        break;
    }
    case 348635:
    {
        returnValue = F("Zum Knipp");
        break;
    }
    case 348636:
    {
        returnValue = F("Zum Knippberg");
        break;
    }
    case 348637:
    {
        returnValue = F("Zum Knippen");
        break;
    }
    case 348638:
    {
        returnValue = F("Zum Knittberg");
        break;
    }
    case 348639:
    {
        returnValue = F("Zum Knock");
        break;
    }
    case 348640:
    {
        returnValue = F("Zum Knollbuck");
        break;
    }
    case 348641:
    {
        returnValue = F("Zum Knollen");
        break;
    }
    case 348642:
    {
        returnValue = F("Zum Knopp");
        break;
    }
    case 348643:
    {
        returnValue = F("Zum Knorren");
        break;
    }
    case 348644:
    {
        returnValue = F("Zum Knupp");
        break;
    }
    case 348645:
    {
        returnValue = F("Zum Knuttenberg");
        break;
    }
    case 348646:
    {
        returnValue = F("Zum Knäppchen");
        break;
    }
    case 348647:
    {
        returnValue = F("Zum Knöll");
        break;
    }
    case 348648:
    {
        returnValue = F("Zum Knöschen");
        break;
    }
    case 348649:
    {
        returnValue = F("Zum Knüll");
        break;
    }
    case 348650:
    {
        returnValue = F("Zum Knüllfeld");
        break;
    }
    case 348651:
    {
        returnValue = F("Zum Kobelberg");
        break;
    }
    case 348652:
    {
        returnValue = F("Zum Kochsberg");
        break;
    }
    case 348653:
    {
        returnValue = F("Zum Kohlberg");
        break;
    }
    case 348654:
    {
        returnValue = F("Zum Kohlbruch");
        break;
    }
    case 348655:
    {
        returnValue = F("Zum Kohlbusch");
        break;
    }
    case 348656:
    {
        returnValue = F("Zum Kohlenberg");
        break;
    }
    case 348657:
    {
        returnValue = F("Zum Kohletal");
        break;
    }
    case 348658:
    {
        returnValue = F("Zum Kohlgrund");
        break;
    }
    case 348659:
    {
        returnValue = F("Zum Kohlhain");
        break;
    }
    case 348660:
    {
        returnValue = F("Zum Kohlkamp");
        break;
    }
    case 348661:
    {
        returnValue = F("Zum Kohlpott");
        break;
    }
    case 348662:
    {
        returnValue = F("Zum Kohlsteig");
        break;
    }
    case 348663:
    {
        returnValue = F("Zum Kohlwald");
        break;
    }
    case 348664:
    {
        returnValue = F("Zum Kohlwaldfeld");
        break;
    }
    case 348665:
    {
        returnValue = F("Zum Kolben");
        break;
    }
    case 348666:
    {
        returnValue = F("Zum Kolbengraben");
        break;
    }
    case 348667:
    {
        returnValue = F("Zum Kolberich");
        break;
    }
    case 348668:
    {
        returnValue = F("Zum Kolk");
        break;
    }
    case 348669:
    {
        returnValue = F("Zum Kollbach");
        break;
    }
    case 348670:
    {
        returnValue = F("Zum Kollhof");
        break;
    }
    case 348671:
    {
        returnValue = F("Zum Kolonenweg");
        break;
    }
    case 348672:
    {
        returnValue = F("Zum Kolpinghaus");
        break;
    }
    case 348673:
    {
        returnValue = F("Zum Komarhof");
        break;
    }
    case 348674:
    {
        returnValue = F("Zum Konraderhof");
        break;
    }
    case 348675:
    {
        returnValue = F("Zum Kopp");
        break;
    }
    case 348676:
    {
        returnValue = F("Zum Koppelberg");
        break;
    }
    case 348677:
    {
        returnValue = F("Zum Koppen");
        break;
    }
    case 348678:
    {
        returnValue = F("Zum Koppenhau");
        break;
    }
    case 348679:
    {
        returnValue = F("Zum Koppenkopf");
        break;
    }
    case 348680:
    {
        returnValue = F("Zum Korbermättle");
        break;
    }
    case 348681:
    {
        returnValue = F("Zum Kordigast");
        break;
    }
    case 348682:
    {
        returnValue = F("Zum Kornacker");
        break;
    }
    case 348683:
    {
        returnValue = F("Zum Kornberg");
        break;
    }
    case 348684:
    {
        returnValue = F("Zum Kornbühl");
        break;
    }
    case 348685:
    {
        returnValue = F("Zum Kornfeld");
        break;
    }
    case 348686:
    {
        returnValue = F("Zum Kornowsee");
        break;
    }
    case 348687:
    {
        returnValue = F("Zum Kosattenweg");
        break;
    }
    case 348688:
    {
        returnValue = F("Zum Kosef");
        break;
    }
    case 348689:
    {
        returnValue = F("Zum Kosenowsee");
        break;
    }
    case 348690:
    {
        returnValue = F("Zum Kothenholz");
        break;
    }
    case 348691:
    {
        returnValue = F("Zum Kottland");
        break;
    }
    case 348692:
    {
        returnValue = F("Zum Krabach");
        break;
    }
    case 348693:
    {
        returnValue = F("Zum Kraftwerk");
        break;
    }
    case 348694:
    {
        returnValue = F("Zum Kranacker");
        break;
    }
    case 348695:
    {
        returnValue = F("Zum Krang");
        break;
    }
    case 348696:
    {
        returnValue = F("Zum Kratt");
        break;
    }
    case 348697:
    {
        returnValue = F("Zum Krauser");
        break;
    }
    case 348698:
    {
        returnValue = F("Zum Krautberg");
        break;
    }
    case 348699:
    {
        returnValue = F("Zum Krautfels");
        break;
    }
    case 348700:
    {
        returnValue = F("Zum Krautgarten");
        break;
    }
    case 348701:
    {
        returnValue = F("Zum Krebsbach");
        break;
    }
    case 348702:
    {
        returnValue = F("Zum Krebsenbach");
        break;
    }
    case 348703:
    {
        returnValue = F("Zum Kreckelberg");
        break;
    }
    case 348704:
    {
        returnValue = F("Zum Kreideberg");
        break;
    }
    case 348705:
    {
        returnValue = F("Zum Kreienberg");
        break;
    }
    case 348706:
    {
        returnValue = F("Zum Kreimberg");
        break;
    }
    case 348707:
    {
        returnValue = F("Zum Kreimertsberg");
        break;
    }
    case 348708:
    {
        returnValue = F("Zum Kreisel");
        break;
    }
    case 348709:
    {
        returnValue = F("Zum Kreisgarten");
        break;
    }
    case 348710:
    {
        returnValue = F("Zum Kreiswasserwerk");
        break;
    }
    case 348711:
    {
        returnValue = F("Zum Kreschberg");
        break;
    }
    case 348712:
    {
        returnValue = F("Zum Kretz");
        break;
    }
    case 348713:
    {
        returnValue = F("Zum Kretzer");
        break;
    }
    case 348714:
    {
        returnValue = F("Zum Kreutberg");
        break;
    }
    case 348715:
    {
        returnValue = F("Zum Kreuz");
        break;
    }
    case 348716:
    {
        returnValue = F("Zum Kreuzacker");
        break;
    }
    case 348717:
    {
        returnValue = F("Zum Kreuzbaum");
        break;
    }
    case 348718:
    {
        returnValue = F("Zum Kreuzberg");
        break;
    }
    case 348719:
    {
        returnValue = F("Zum Kreuzblick");
        break;
    }
    case 348720:
    {
        returnValue = F("Zum Kreuzbusch");
        break;
    }
    case 348721:
    {
        returnValue = F("Zum Kreuzbühl");
        break;
    }
    case 348722:
    {
        returnValue = F("Zum Kreuzhagen");
        break;
    }
    case 348723:
    {
        returnValue = F("Zum Kreuzholz");
        break;
    }
    case 348724:
    {
        returnValue = F("Zum Kreuzhäule");
        break;
    }
    case 348725:
    {
        returnValue = F("Zum Kreuzkamp");
        break;
    }
    case 348726:
    {
        returnValue = F("Zum Kreuzle");
        break;
    }
    case 348727:
    {
        returnValue = F("Zum Kreuzmorgen");
        break;
    }
    case 348728:
    {
        returnValue = F("Zum Kreuzpfuhl");
        break;
    }
    case 348729:
    {
        returnValue = F("Zum Kreuzplatz");
        break;
    }
    case 348730:
    {
        returnValue = F("Zum Kreuzstein");
        break;
    }
    case 348731:
    {
        returnValue = F("Zum Kreuzweg");
        break;
    }
    case 348732:
    {
        returnValue = F("Zum Kreyenkamp");
        break;
    }
    case 348733:
    {
        returnValue = F("Zum Kriegerdamm");
        break;
    }
    case 348734:
    {
        returnValue = F("Zum Kriegswald");
        break;
    }
    case 348735:
    {
        returnValue = F("Zum Kries");
        break;
    }
    case 348736:
    {
        returnValue = F("Zum Kriesenberg");
        break;
    }
    case 348737:
    {
        returnValue = F("Zum Krietzen");
        break;
    }
    case 348738:
    {
        returnValue = F("Zum Krispelt");
        break;
    }
    case 348739:
    {
        returnValue = F("Zum Kritzchen");
        break;
    }
    case 348740:
    {
        returnValue = F("Zum Kromberg");
        break;
    }
    case 348741:
    {
        returnValue = F("Zum Kronacher Teich");
        break;
    }
    case 348742:
    {
        returnValue = F("Zum Kronbertsanger");
        break;
    }
    case 348743:
    {
        returnValue = F("Zum Kronenberg");
        break;
    }
    case 348744:
    {
        returnValue = F("Zum Kronenborn");
        break;
    }
    case 348745:
    {
        returnValue = F("Zum Kronensee");
        break;
    }
    case 348746:
    {
        returnValue = F("Zum Kronenweiher");
        break;
    }
    case 348747:
    {
        returnValue = F("Zum Kronprinz");
        break;
    }
    case 348748:
    {
        returnValue = F("Zum Kronsberg");
        break;
    }
    case 348749:
    {
        returnValue = F("Zum Krug");
        break;
    }
    case 348750:
    {
        returnValue = F("Zum Krugacker");
        break;
    }
    case 348751:
    {
        returnValue = F("Zum Krugpark");
        break;
    }
    case 348752:
    {
        returnValue = F("Zum Krummacker");
        break;
    }
    case 348753:
    {
        returnValue = F("Zum Krummauel");
        break;
    }
    case 348754:
    {
        returnValue = F("Zum Krummen Feld");
        break;
    }
    case 348755:
    {
        returnValue = F("Zum Krummen Nacken");
        break;
    }
    case 348756:
    {
        returnValue = F("Zum Krummen Pfuhl");
        break;
    }
    case 348757:
    {
        returnValue = F("Zum Krummen Schneider");
        break;
    }
    case 348758:
    {
        returnValue = F("Zum Krummen Wandel");
        break;
    }
    case 348759:
    {
        returnValue = F("Zum Krummfuhr");
        break;
    }
    case 348760:
    {
        returnValue = F("Zum Krummhof");
        break;
    }
    case 348761:
    {
        returnValue = F("Zum Krummvordel");
        break;
    }
    case 348762:
    {
        returnValue = F("Zum Krummwall");
        break;
    }
    case 348763:
    {
        returnValue = F("Zum Krusen");
        break;
    }
    case 348764:
    {
        returnValue = F("Zum Krähberg");
        break;
    }
    case 348765:
    {
        returnValue = F("Zum Krähenacker");
        break;
    }
    case 348766:
    {
        returnValue = F("Zum Krähenberg");
        break;
    }
    case 348767:
    {
        returnValue = F("Zum Krähenbrink");
        break;
    }
    case 348768:
    {
        returnValue = F("Zum Krähenbusch");
        break;
    }
    case 348769:
    {
        returnValue = F("Zum Krähenfeld");
        break;
    }
    case 348770:
    {
        returnValue = F("Zum Krähenholz");
        break;
    }
    case 348771:
    {
        returnValue = F("Zum Krähennocken");
        break;
    }
    case 348772:
    {
        returnValue = F("Zum Krähenschnabel");
        break;
    }
    case 348773:
    {
        returnValue = F("Zum Krähentisch");
        break;
    }
    case 348774:
    {
        returnValue = F("Zum Krämel");
        break;
    }
    case 348775:
    {
        returnValue = F("Zum Krämersberg");
        break;
    }
    case 348776:
    {
        returnValue = F("Zum Kränholm");
        break;
    }
    case 348777:
    {
        returnValue = F("Zum Kränzberg");
        break;
    }
    case 348778:
    {
        returnValue = F("Zum Kräutergarten");
        break;
    }
    case 348779:
    {
        returnValue = F("Zum Krötenpfuhl");
        break;
    }
    case 348780:
    {
        returnValue = F("Zum Krückaupark");
        break;
    }
    case 348781:
    {
        returnValue = F("Zum Krückelsberg");
        break;
    }
    case 348782:
    {
        returnValue = F("Zum Krücker");
        break;
    }
    case 348783:
    {
        returnValue = F("Zum Krümpel");
        break;
    }
    case 348784:
    {
        returnValue = F("Zum Kuchenduft");
        break;
    }
    case 348785:
    {
        returnValue = F("Zum Kuchenstein");
        break;
    }
    case 348786:
    {
        returnValue = F("Zum Kuckental");
        break;
    }
    case 348787:
    {
        returnValue = F("Zum Kuckeral");
        break;
    }
    case 348788:
    {
        returnValue = F("Zum Kuckeshof");
        break;
    }
    case 348789:
    {
        returnValue = F("Zum Kuckshörn");
        break;
    }
    case 348790:
    {
        returnValue = F("Zum Kuckuck");
        break;
    }
    case 348791:
    {
        returnValue = F("Zum Kuckucksberg");
        break;
    }
    case 348792:
    {
        returnValue = F("Zum Kuckuckstein");
        break;
    }
    case 348793:
    {
        returnValue = F("Zum Kuckuckswald");
        break;
    }
    case 348794:
    {
        returnValue = F("Zum Kudensee");
        break;
    }
    case 348795:
    {
        returnValue = F("Zum Kugelplatz");
        break;
    }
    case 348796:
    {
        returnValue = F("Zum Kuhberg");
        break;
    }
    case 348797:
    {
        returnValue = F("Zum Kuhfeld");
        break;
    }
    case 348798:
    {
        returnValue = F("Zum Kuhlberg");
        break;
    }
    case 348799:
    {
        returnValue = F("Zum Kuhlen");
        break;
    }
    case 348800:
    {
        returnValue = F("Zum Kuhlenberg");
        break;
    }
    case 348801:
    {
        returnValue = F("Zum Kuhmarkt");
        break;
    }
    case 348802:
    {
        returnValue = F("Zum Kuhschott");
        break;
    }
    case 348803:
    {
        returnValue = F("Zum Kuhsee");
        break;
    }
    case 348804:
    {
        returnValue = F("Zum Kuhseifen");
        break;
    }
    case 348805:
    {
        returnValue = F("Zum Kuhteich");
        break;
    }
    case 348806:
    {
        returnValue = F("Zum Kuhturm");
        break;
    }
    case 348807:
    {
        returnValue = F("Zum Kuhwald");
        break;
    }
    case 348808:
    {
        returnValue = F("Zum Kuks");
        break;
    }
    case 348809:
    {
        returnValue = F("Zum Kuksberg");
        break;
    }
    case 348810:
    {
        returnValue = F("Zum Kulcke");
        break;
    }
    case 348811:
    {
        returnValue = F("Zum Kulm");
        break;
    }
    case 348812:
    {
        returnValue = F("Zum Kumberg");
        break;
    }
    case 348813:
    {
        returnValue = F("Zum Kummerbrink");
        break;
    }
    case 348814:
    {
        returnValue = F("Zum Kump");
        break;
    }
    case 348815:
    {
        returnValue = F("Zum Kunkskopf");
        break;
    }
    case 348816:
    {
        returnValue = F("Zum Kunststück");
        break;
    }
    case 348817:
    {
        returnValue = F("Zum Kunstteich");
        break;
    }
    case 348818:
    {
        returnValue = F("Zum Kupferhammer");
        break;
    }
    case 348819:
    {
        returnValue = F("Zum Kupfersteg");
        break;
    }
    case 348820:
    {
        returnValue = F("Zum Kuppenfeld");
        break;
    }
    case 348821:
    {
        returnValue = F("Zum Kurgarten");
        break;
    }
    case 348822:
    {
        returnValue = F("Zum Kurmittelhaus");
        break;
    }
    case 348823:
    {
        returnValue = F("Zum Kurpark");
        break;
    }
    case 348824:
    {
        returnValue = F("Zum Kurparkblick");
        break;
    }
    case 348825:
    {
        returnValue = F("Zum Kurtenwald");
        break;
    }
    case 348826:
    {
        returnValue = F("Zum Kurwald");
        break;
    }
    case 348827:
    {
        returnValue = F("Zum Kurzbeul");
        break;
    }
    case 348828:
    {
        returnValue = F("Zum Kurzen Feld");
        break;
    }
    case 348829:
    {
        returnValue = F("Zum Kurzentrum");
        break;
    }
    case 348830:
    {
        returnValue = F("Zum Kutterhafen");
        break;
    }
    case 348831:
    {
        returnValue = F("Zum Kuxberg");
        break;
    }
    case 348832:
    {
        returnValue = F("Zum Kylltal");
        break;
    }
    case 348833:
    {
        returnValue = F("Zum Kyrbach");
        break;
    }
    case 348834:
    {
        returnValue = F("Zum Kälberboscha");
        break;
    }
    case 348835:
    {
        returnValue = F("Zum Kälberkamp");
        break;
    }
    case 348836:
    {
        returnValue = F("Zum Kälterhaus");
        break;
    }
    case 348837:
    {
        returnValue = F("Zum Kämerken");
        break;
    }
    case 348838:
    {
        returnValue = F("Zum Kämpchen");
        break;
    }
    case 348839:
    {
        returnValue = F("Zum Kämpen");
        break;
    }
    case 348840:
    {
        returnValue = F("Zum Kämpken");
        break;
    }
    case 348841:
    {
        returnValue = F("Zum Känzele");
        break;
    }
    case 348842:
    {
        returnValue = F("Zum Käppelchen");
        break;
    }
    case 348843:
    {
        returnValue = F("Zum Käppele");
        break;
    }
    case 348844:
    {
        returnValue = F("Zum Käppelesgrund");
        break;
    }
    case 348845:
    {
        returnValue = F("Zum Käsberg");
        break;
    }
    case 348846:
    {
        returnValue = F("Zum Käseküppel");
        break;
    }
    case 348847:
    {
        returnValue = F("Zum Käsperschen Grund");
        break;
    }
    case 348848:
    {
        returnValue = F("Zum Kätnerholz");
        break;
    }
    case 348849:
    {
        returnValue = F("Zum Käulchen");
        break;
    }
    case 348850:
    {
        returnValue = F("Zum Köberg");
        break;
    }
    case 348851:
    {
        returnValue = F("Zum Kögl");
        break;
    }
    case 348852:
    {
        returnValue = F("Zum Köhler");
        break;
    }
    case 348853:
    {
        returnValue = F("Zum Köhlerberg");
        break;
    }
    case 348854:
    {
        returnValue = F("Zum Köhlerbruch");
        break;
    }
    case 348855:
    {
        returnValue = F("Zum Köhlergrund");
        break;
    }
    case 348856:
    {
        returnValue = F("Zum Köhlersgrund");
        break;
    }
    case 348857:
    {
        returnValue = F("Zum Kölpiensee");
        break;
    }
    case 348858:
    {
        returnValue = F("Zum Kölpinsee");
        break;
    }
    case 348859:
    {
        returnValue = F("Zum König");
        break;
    }
    case 348860:
    {
        returnValue = F("Zum Königsberg");
        break;
    }
    case 348861:
    {
        returnValue = F("Zum Königsborn");
        break;
    }
    case 348862:
    {
        returnValue = F("Zum Königsfarn");
        break;
    }
    case 348863:
    {
        returnValue = F("Zum Königsfeld");
        break;
    }
    case 348864:
    {
        returnValue = F("Zum Königsgraben");
        break;
    }
    case 348865:
    {
        returnValue = F("Zum Königsgrund");
        break;
    }
    case 348866:
    {
        returnValue = F("Zum Königshof");
        break;
    }
    case 348867:
    {
        returnValue = F("Zum Königsholz");
        break;
    }
    case 348868:
    {
        returnValue = F("Zum Königskeil");
        break;
    }
    case 348869:
    {
        returnValue = F("Zum Königsmoor");
        break;
    }
    case 348870:
    {
        returnValue = F("Zum Königspfad");
        break;
    }
    case 348871:
    {
        returnValue = F("Zum Königssee");
        break;
    }
    case 348872:
    {
        returnValue = F("Zum Königsstuhl");
        break;
    }
    case 348873:
    {
        returnValue = F("Zum Königstal");
        break;
    }
    case 348874:
    {
        returnValue = F("Zum Königsweg");
        break;
    }
    case 348875:
    {
        returnValue = F("Zum Köpfchen");
        break;
    }
    case 348876:
    {
        returnValue = F("Zum Köpfel");
        break;
    }
    case 348877:
    {
        returnValue = F("Zum Köpfle");
        break;
    }
    case 348878:
    {
        returnValue = F("Zum Köpfwasen");
        break;
    }
    case 348879:
    {
        returnValue = F("Zum Köppchen");
        break;
    }
    case 348880:
    {
        returnValue = F("Zum Köppel");
        break;
    }
    case 348881:
    {
        returnValue = F("Zum Köppelchen");
        break;
    }
    case 348882:
    {
        returnValue = F("Zum Köppelschen Berg");
        break;
    }
    case 348883:
    {
        returnValue = F("Zum Köpperner Tal");
        break;
    }
    case 348884:
    {
        returnValue = F("Zum Köppken");
        break;
    }
    case 348885:
    {
        returnValue = F("Zum Körfergarten");
        break;
    }
    case 348886:
    {
        returnValue = F("Zum Körle");
        break;
    }
    case 348887:
    {
        returnValue = F("Zum Kösserner Rittergut");
        break;
    }
    case 348888:
    {
        returnValue = F("Zum Kösteracker");
        break;
    }
    case 348889:
    {
        returnValue = F("Zum Kötherbusch");
        break;
    }
    case 348890:
    {
        returnValue = F("Zum Köttinger See");
        break;
    }
    case 348891:
    {
        returnValue = F("Zum Kötztal");
        break;
    }
    case 348892:
    {
        returnValue = F("Zum Küchenwald");
        break;
    }
    case 348893:
    {
        returnValue = F("Zum Kühl");
        break;
    }
    case 348894:
    {
        returnValue = F("Zum Kühlen Grund");
        break;
    }
    case 348895:
    {
        returnValue = F("Zum Kühlen Grunde");
        break;
    }
    case 348896:
    {
        returnValue = F("Zum Kühlen Morgen");
        break;
    }
    case 348897:
    {
        returnValue = F("Zum Kühlhaus");
        break;
    }
    case 348898:
    {
        returnValue = F("Zum Kühling");
        break;
    }
    case 348899:
    {
        returnValue = F("Zum Kühnelberg");
        break;
    }
    case 348900:
    {
        returnValue = F("Zum Kükenberg");
        break;
    }
    case 348901:
    {
        returnValue = F("Zum Külmitz");
        break;
    }
    case 348902:
    {
        returnValue = F("Zum Kültershof");
        break;
    }
    case 348903:
    {
        returnValue = F("Zum Küppchen");
        break;
    }
    case 348904:
    {
        returnValue = F("Zum Küppel");
        break;
    }
    case 348905:
    {
        returnValue = F("Zum Küselberg");
        break;
    }
    case 348906:
    {
        returnValue = F("Zum Küsterberg");
        break;
    }
    case 348907:
    {
        returnValue = F("Zum Küsterland");
        break;
    }
    case 348908:
    {
        returnValue = F("Zum Küstersumpf");
        break;
    }
    case 348909:
    {
        returnValue = F("Zum LIesertal");
        break;
    }
    case 348910:
    {
        returnValue = F("Zum Laakkanal");
        break;
    }
    case 348911:
    {
        returnValue = F("Zum Laarschen Weg");
        break;
    }
    case 348912:
    {
        returnValue = F("Zum Lachenwald");
        break;
    }
    case 348913:
    {
        returnValue = F("Zum Lachenwäldle");
        break;
    }
    case 348914:
    {
        returnValue = F("Zum Lackfeld");
        break;
    }
    case 348915:
    {
        returnValue = F("Zum Lafferder Busch");
        break;
    }
    case 348916:
    {
        returnValue = F("Zum Lager");
        break;
    }
    case 348917:
    {
        returnValue = F("Zum Lah");
        break;
    }
    case 348918:
    {
        returnValue = F("Zum Lahnberg");
        break;
    }
    case 348919:
    {
        returnValue = F("Zum Lahnblick");
        break;
    }
    case 348920:
    {
        returnValue = F("Zum Lahnufer");
        break;
    }
    case 348921:
    {
        returnValue = F("Zum Lahwald");
        break;
    }
    case 348922:
    {
        returnValue = F("Zum Laibachtal");
        break;
    }
    case 348923:
    {
        returnValue = F("Zum Laile");
        break;
    }
    case 348924:
    {
        returnValue = F("Zum Lamersthal");
        break;
    }
    case 348925:
    {
        returnValue = F("Zum Lamitzgrund");
        break;
    }
    case 348926:
    {
        returnValue = F("Zum Lampert");
        break;
    }
    case 348927:
    {
        returnValue = F("Zum Landberg");
        break;
    }
    case 348928:
    {
        returnValue = F("Zum Landeck");
        break;
    }
    case 348929:
    {
        returnValue = F("Zum Landerkamp");
        break;
    }
    case 348930:
    {
        returnValue = F("Zum Landesteg");
        break;
    }
    case 348931:
    {
        returnValue = F("Zum Landgraben");
        break;
    }
    case 348932:
    {
        returnValue = F("Zum Landgut");
        break;
    }
    case 348933:
    {
        returnValue = F("Zum Landgöding");
        break;
    }
    case 348934:
    {
        returnValue = F("Zum Landhaus");
        break;
    }
    case 348935:
    {
        returnValue = F("Zum Landjugendheim");
        break;
    }
    case 348936:
    {
        returnValue = F("Zum Landrain");
        break;
    }
    case 348937:
    {
        returnValue = F("Zum Landrichter");
        break;
    }
    case 348938:
    {
        returnValue = F("Zum Landsitz");
        break;
    }
    case 348939:
    {
        returnValue = F("Zum Landsitzle");
        break;
    }
    case 348940:
    {
        returnValue = F("Zum Landungssteg");
        break;
    }
    case 348941:
    {
        returnValue = F("Zum Landwehrgraben");
        break;
    }
    case 348942:
    {
        returnValue = F("Zum Lanferbach");
        break;
    }
    case 348943:
    {
        returnValue = F("Zum Langeloh");
        break;
    }
    case 348944:
    {
        returnValue = F("Zum Langemoor");
        break;
    }
    case 348945:
    {
        returnValue = F("Zum Langen Berg");
        break;
    }
    case 348946:
    {
        returnValue = F("Zum Langen Damm");
        break;
    }
    case 348947:
    {
        returnValue = F("Zum Langen Feld");
        break;
    }
    case 348948:
    {
        returnValue = F("Zum Langen Felde");
        break;
    }
    case 348949:
    {
        returnValue = F("Zum Langen Garten");
        break;
    }
    case 348950:
    {
        returnValue = F("Zum Langen Gras");
        break;
    }
    case 348951:
    {
        returnValue = F("Zum Langen Hofe");
        break;
    }
    case 348952:
    {
        returnValue = F("Zum Langen Holz");
        break;
    }
    case 348953:
    {
        returnValue = F("Zum Langen Kreuz");
        break;
    }
    case 348954:
    {
        returnValue = F("Zum Langen Land");
        break;
    }
    case 348955:
    {
        returnValue = F("Zum Langen Maß");
        break;
    }
    case 348956:
    {
        returnValue = F("Zum Langen Plan");
        break;
    }
    case 348957:
    {
        returnValue = F("Zum Langen See");
        break;
    }
    case 348958:
    {
        returnValue = F("Zum Langen Stein");
        break;
    }
    case 348959:
    {
        returnValue = F("Zum Langenacker");
        break;
    }
    case 348960:
    {
        returnValue = F("Zum Langenackersfeld");
        break;
    }
    case 348961:
    {
        returnValue = F("Zum Langenbach");
        break;
    }
    case 348962:
    {
        returnValue = F("Zum Langenberg");
        break;
    }
    case 348963:
    {
        returnValue = F("Zum Langenbruch");
        break;
    }
    case 348964:
    {
        returnValue = F("Zum Langenfeld");
        break;
    }
    case 348965:
    {
        returnValue = F("Zum Langenloh");
        break;
    }
    case 348966:
    {
        returnValue = F("Zum Langenstein");
        break;
    }
    case 348967:
    {
        returnValue = F("Zum Langental");
        break;
    }
    case 348968:
    {
        returnValue = F("Zum Langenweiher");
        break;
    }
    case 348969:
    {
        returnValue = F("Zum Langerhof");
        break;
    }
    case 348970:
    {
        returnValue = F("Zum Langetal");
        break;
    }
    case 348971:
    {
        returnValue = F("Zum Langgewann");
        break;
    }
    case 348972:
    {
        returnValue = F("Zum Langholz");
        break;
    }
    case 348973:
    {
        returnValue = F("Zum Langhorst");
        break;
    }
    case 348974:
    {
        returnValue = F("Zum Langkreuz");
        break;
    }
    case 348975:
    {
        returnValue = F("Zum Langwieser See");
        break;
    }
    case 348976:
    {
        returnValue = F("Zum Langwingert");
        break;
    }
    case 348977:
    {
        returnValue = F("Zum Lanzenbühl");
        break;
    }
    case 348978:
    {
        returnValue = F("Zum Lanzental");
        break;
    }
    case 348979:
    {
        returnValue = F("Zum Lappentascher Hof");
        break;
    }
    case 348980:
    {
        returnValue = F("Zum Lattersberg");
        break;
    }
    case 348981:
    {
        returnValue = F("Zum Lau");
        break;
    }
    case 348982:
    {
        returnValue = F("Zum Laubelt");
        break;
    }
    case 348983:
    {
        returnValue = F("Zum Laubesberg");
        break;
    }
    case 348984:
    {
        returnValue = F("Zum Laubrangen");
        break;
    }
    case 348985:
    {
        returnValue = F("Zum Laubwald");
        break;
    }
    case 348986:
    {
        returnValue = F("Zum Lauchwald");
        break;
    }
    case 348987:
    {
        returnValue = F("Zum Laudenberg");
        break;
    }
    case 348988:
    {
        returnValue = F("Zum Laufenburgblick");
        break;
    }
    case 348989:
    {
        returnValue = F("Zum Laufhagen");
        break;
    }
    case 348990:
    {
        returnValue = F("Zum Laugele");
        break;
    }
    case 348991:
    {
        returnValue = F("Zum Laurenburger Hof");
        break;
    }
    case 348992:
    {
        returnValue = F("Zum Laurenzisbrunnen");
        break;
    }
    case 348993:
    {
        returnValue = F("Zum Lausbühl");
        break;
    }
    case 348994:
    {
        returnValue = F("Zum Lauseberg");
        break;
    }
    case 348995:
    {
        returnValue = F("Zum Lausebrink");
        break;
    }
    case 348996:
    {
        returnValue = F("Zum Lausebusch");
        break;
    }
    case 348997:
    {
        returnValue = F("Zum Lausheimer Weiher");
        break;
    }
    case 348998:
    {
        returnValue = F("Zum Lauterbacher Steinbruch");
        break;
    }
    case 348999:
    {
        returnValue = F("Zum Lautergraben");
        break;
    }
    case 349000:
    {
        returnValue = F("Zum Lautergrund");
        break;
    }
    case 349001:
    {
        returnValue = F("Zum Lautsbach");
        break;
    }
    case 349002:
    {
        returnValue = F("Zum Layenberg");
        break;
    }
    case 349003:
    {
        returnValue = F("Zum Lebensbaum");
        break;
    }
    case 349004:
    {
        returnValue = F("Zum Lech");
        break;
    }
    case 349005:
    {
        returnValue = F("Zum Leckeberg");
        break;
    }
    case 349006:
    {
        returnValue = F("Zum Ledigenheim");
        break;
    }
    case 349007:
    {
        returnValue = F("Zum Leeborn");
        break;
    }
    case 349008:
    {
        returnValue = F("Zum Leegefeld");
        break;
    }
    case 349009:
    {
        returnValue = F("Zum Leeger Grund");
        break;
    }
    case 349010:
    {
        returnValue = F("Zum Leegmoor");
        break;
    }
    case 349011:
    {
        returnValue = F("Zum Leempelk");
        break;
    }
    case 349012:
    {
        returnValue = F("Zum Legen Esch");
        break;
    }
    case 349013:
    {
        returnValue = F("Zum Lehbesch");
        break;
    }
    case 349014:
    {
        returnValue = F("Zum Lehen");
        break;
    }
    case 349015:
    {
        returnValue = F("Zum Lehengarten");
        break;
    }
    case 349016:
    {
        returnValue = F("Zum Lehmberg");
        break;
    }
    case 349017:
    {
        returnValue = F("Zum Lehmboy");
        break;
    }
    case 349018:
    {
        returnValue = F("Zum Lehmbrink");
        break;
    }
    case 349019:
    {
        returnValue = F("Zum Lehmbusch");
        break;
    }
    case 349020:
    {
        returnValue = F("Zum Lehmenohl");
        break;
    }
    case 349021:
    {
        returnValue = F("Zum Lehmfeld");
        break;
    }
    case 349022:
    {
        returnValue = F("Zum Lehmformer");
        break;
    }
    case 349023:
    {
        returnValue = F("Zum Lehmkamp");
        break;
    }
    case 349024:
    {
        returnValue = F("Zum Lehmoos");
        break;
    }
    case 349025:
    {
        returnValue = F("Zum Lehmsaal");
        break;
    }
    case 349026:
    {
        returnValue = F("Zum Lehmstich");
        break;
    }
    case 349027:
    {
        returnValue = F("Zum Lehnerz");
        break;
    }
    case 349028:
    {
        returnValue = F("Zum Lehnsgut");
        break;
    }
    case 349029:
    {
        returnValue = F("Zum Lehrberg");
        break;
    }
    case 349030:
    {
        returnValue = F("Zum Lehrpfad");
        break;
    }
    case 349031:
    {
        returnValue = F("Zum Leienhof");
        break;
    }
    case 349032:
    {
        returnValue = F("Zum Leier Hölzchen");
        break;
    }
    case 349033:
    {
        returnValue = F("Zum Leimacker");
        break;
    }
    case 349034:
    {
        returnValue = F("Zum Leimberg");
        break;
    }
    case 349035:
    {
        returnValue = F("Zum Leimen");
        break;
    }
    case 349036:
    {
        returnValue = F("Zum Leimenhorten");
        break;
    }
    case 349037:
    {
        returnValue = F("Zum Leimfelde");
        break;
    }
    case 349038:
    {
        returnValue = F("Zum Leinenpfad");
        break;
    }
    case 349039:
    {
        returnValue = F("Zum Leiner");
        break;
    }
    case 349040:
    {
        returnValue = F("Zum Leineufer");
        break;
    }
    case 349041:
    {
        returnValue = F("Zum Leininger Ring");
        break;
    }
    case 349042:
    {
        returnValue = F("Zum Leinkamp");
        break;
    }
    case 349043:
    {
        returnValue = F("Zum Leinpfad");
        break;
    }
    case 349044:
    {
        returnValue = F("Zum Leinweber");
        break;
    }
    case 349045:
    {
        returnValue = F("Zum Leisen Steg");
        break;
    }
    case 349046:
    {
        returnValue = F("Zum Leisterplatz");
        break;
    }
    case 349047:
    {
        returnValue = F("Zum Leistersberg");
        break;
    }
    case 349048:
    {
        returnValue = F("Zum Leitenholz");
        break;
    }
    case 349049:
    {
        returnValue = F("Zum Leitenschlag");
        break;
    }
    case 349050:
    {
        returnValue = F("Zum Leitle");
        break;
    }
    case 349051:
    {
        returnValue = F("Zum Leitlein");
        break;
    }
    case 349052:
    {
        returnValue = F("Zum Lemmholt");
        break;
    }
    case 349053:
    {
        returnValue = F("Zum Lenchenholz");
        break;
    }
    case 349054:
    {
        returnValue = F("Zum Lengder Grund");
        break;
    }
    case 349055:
    {
        returnValue = F("Zum Lengenbach");
        break;
    }
    case 349056:
    {
        returnValue = F("Zum Lengener Meer");
        break;
    }
    case 349057:
    {
        returnValue = F("Zum Lennchen");
        break;
    }
    case 349058:
    {
        returnValue = F("Zum Lenzbach");
        break;
    }
    case 349059:
    {
        returnValue = F("Zum Lenzenkamp -neu-");
        break;
    }
    case 349060:
    {
        returnValue = F("Zum Leppetal");
        break;
    }
    case 349061:
    {
        returnValue = F("Zum Lerchenacker");
        break;
    }
    case 349062:
    {
        returnValue = F("Zum Lerchenberg");
        break;
    }
    case 349063:
    {
        returnValue = F("Zum Lerchenfeld");
        break;
    }
    case 349064:
    {
        returnValue = F("Zum Lerchenhof");
        break;
    }
    case 349065:
    {
        returnValue = F("Zum Lerchenhügel");
        break;
    }
    case 349066:
    {
        returnValue = F("Zum Lerchental");
        break;
    }
    case 349067:
    {
        returnValue = F("Zum Lerchl");
        break;
    }
    case 349068:
    {
        returnValue = F("Zum Letten");
        break;
    }
    case 349069:
    {
        returnValue = F("Zum Leuchtenberg");
        break;
    }
    case 349070:
    {
        returnValue = F("Zum Leuchtfeuer");
        break;
    }
    case 349071:
    {
        returnValue = F("Zum Leuchtturm");
        break;
    }
    case 349072:
    {
        returnValue = F("Zum Leukbachtal");
        break;
    }
    case 349073:
    {
        returnValue = F("Zum Leyberg");
        break;
    }
    case 349074:
    {
        returnValue = F("Zum Leychen");
        break;
    }
    case 349075:
    {
        returnValue = F("Zum Leß");
        break;
    }
    case 349076:
    {
        returnValue = F("Zum Lichtenberg");
        break;
    }
    case 349077:
    {
        returnValue = F("Zum Lichtenbruch");
        break;
    }
    case 349078:
    {
        returnValue = F("Zum Lichtenhof");
        break;
    }
    case 349079:
    {
        returnValue = F("Zum Lichtenstein");
        break;
    }
    case 349080:
    {
        returnValue = F("Zum Lichtloch");
        break;
    }
    case 349081:
    {
        returnValue = F("Zum Liebberg");
        break;
    }
    case 349082:
    {
        returnValue = F("Zum Liebeneck");
        break;
    }
    case 349083:
    {
        returnValue = F("Zum Lieberg");
        break;
    }
    case 349084:
    {
        returnValue = F("Zum Liebesdörfel");
        break;
    }
    case 349085:
    {
        returnValue = F("Zum Liebholz");
        break;
    }
    case 349086:
    {
        returnValue = F("Zum Lieblingstal");
        break;
    }
    case 349087:
    {
        returnValue = F("Zum Liebower See");
        break;
    }
    case 349088:
    {
        returnValue = F("Zum Lieneschberge");
        break;
    }
    case 349089:
    {
        returnValue = F("Zum Lienstück");
        break;
    }
    case 349090:
    {
        returnValue = F("Zum Liesertal");
        break;
    }
    case 349091:
    {
        returnValue = F("Zum Liethberg");
        break;
    }
    case 349092:
    {
        returnValue = F("Zum Liethgrund");
        break;
    }
    case 349093:
    {
        returnValue = F("Zum Liethof");
        break;
    }
    case 349094:
    {
        returnValue = F("Zum Lietzberg");
        break;
    }
    case 349095:
    {
        returnValue = F("Zum Lievenhaan");
        break;
    }
    case 349096:
    {
        returnValue = F("Zum Likedeeler");
        break;
    }
    case 349097:
    {
        returnValue = F("Zum Limberg");
        break;
    }
    case 349098:
    {
        returnValue = F("Zum Limes");
        break;
    }
    case 349099:
    {
        returnValue = F("Zum Limmer");
        break;
    }
    case 349100:
    {
        returnValue = F("Zum Limmerborn");
        break;
    }
    case 349101:
    {
        returnValue = F("Zum Lind");
        break;
    }
    case 349102:
    {
        returnValue = F("Zum Lindacker");
        break;
    }
    case 349103:
    {
        returnValue = F("Zum Lindchen");
        break;
    }
    case 349104:
    {
        returnValue = F("Zum Lindenbach");
        break;
    }
    case 349105:
    {
        returnValue = F("Zum Lindenbaum");
        break;
    }
    case 349106:
    {
        returnValue = F("Zum Lindenberg");
        break;
    }
    case 349107:
    {
        returnValue = F("Zum Lindenborn");
        break;
    }
    case 349108:
    {
        returnValue = F("Zum Lindenbrunnen");
        break;
    }
    case 349109:
    {
        returnValue = F("Zum Lindenbusch");
        break;
    }
    case 349110:
    {
        returnValue = F("Zum Lindenfeld");
        break;
    }
    case 349111:
    {
        returnValue = F("Zum Lindengarten");
        break;
    }
    case 349112:
    {
        returnValue = F("Zum Lindengut");
        break;
    }
    case 349113:
    {
        returnValue = F("Zum Lindenhof");
        break;
    }
    case 349114:
    {
        returnValue = F("Zum Lindenholz");
        break;
    }
    case 349115:
    {
        returnValue = F("Zum Lindenkreis");
        break;
    }
    case 349116:
    {
        returnValue = F("Zum Lindenkreuz");
        break;
    }
    case 349117:
    {
        returnValue = F("Zum Lindenplatz");
        break;
    }
    case 349118:
    {
        returnValue = F("Zum Lindenrain");
        break;
    }
    case 349119:
    {
        returnValue = F("Zum Lindenrondell");
        break;
    }
    case 349120:
    {
        returnValue = F("Zum Lindenseifen");
        break;
    }
    case 349121:
    {
        returnValue = F("Zum Lindenstein");
        break;
    }
    case 349122:
    {
        returnValue = F("Zum Lindental");
        break;
    }
    case 349123:
    {
        returnValue = F("Zum Lindentor");
        break;
    }
    case 349124:
    {
        returnValue = F("Zum Lindenweiler");
        break;
    }
    case 349125:
    {
        returnValue = F("Zum Linderfeld");
        break;
    }
    case 349126:
    {
        returnValue = F("Zum Lindert");
        break;
    }
    case 349127:
    {
        returnValue = F("Zum Lindholze");
        break;
    }
    case 349128:
    {
        returnValue = F("Zum Lindhorn");
        break;
    }
    case 349129:
    {
        returnValue = F("Zum Lindicht");
        break;
    }
    case 349130:
    {
        returnValue = F("Zum Lindig");
        break;
    }
    case 349131:
    {
        returnValue = F("Zum Lindscheid");
        break;
    }
    case 349132:
    {
        returnValue = F("Zum Lindwall");
        break;
    }
    case 349133:
    {
        returnValue = F("Zum Lindwurmhügel");
        break;
    }
    case 349134:
    {
        returnValue = F("Zum Linnegraben");
        break;
    }
    case 349135:
    {
        returnValue = F("Zum Linnenberg");
        break;
    }
    case 349136:
    {
        returnValue = F("Zum Linnert");
        break;
    }
    case 349137:
    {
        returnValue = F("Zum Linngarten");
        break;
    }
    case 349138:
    {
        returnValue = F("Zum Linslerhof");
        break;
    }
    case 349139:
    {
        returnValue = F("Zum Lintlarhof");
        break;
    }
    case 349140:
    {
        returnValue = F("Zum Lippersbach");
        break;
    }
    case 349141:
    {
        returnValue = F("Zum Lippesteg");
        break;
    }
    case 349142:
    {
        returnValue = F("Zum Listersee");
        break;
    }
    case 349143:
    {
        returnValue = F("Zum Litberg");
        break;
    }
    case 349144:
    {
        returnValue = F("Zum Lith");
        break;
    }
    case 349145:
    {
        returnValue = F("Zum Litzelbach");
        break;
    }
    case 349146:
    {
        returnValue = F("Zum Litzelsee");
        break;
    }
    case 349147:
    {
        returnValue = F("Zum Litzfürst");
        break;
    }
    case 349148:
    {
        returnValue = F("Zum Loag");
        break;
    }
    case 349149:
    {
        returnValue = F("Zum Lochacker");
        break;
    }
    case 349150:
    {
        returnValue = F("Zum Lochfeld");
        break;
    }
    case 349151:
    {
        returnValue = F("Zum Lochholz");
        break;
    }
    case 349152:
    {
        returnValue = F("Zum Lockhütter Weg");
        break;
    }
    case 349153:
    {
        returnValue = F("Zum Logport");
        break;
    }
    case 349154:
    {
        returnValue = F("Zum Loh");
        break;
    }
    case 349155:
    {
        returnValue = F("Zum Lohbau");
        break;
    }
    case 349156:
    {
        returnValue = F("Zum Lohberg");
        break;
    }
    case 349157:
    {
        returnValue = F("Zum Lohbusch");
        break;
    }
    case 349158:
    {
        returnValue = F("Zum Loheck");
        break;
    }
    case 349159:
    {
        returnValue = F("Zum Lohfeld");
        break;
    }
    case 349160:
    {
        returnValue = F("Zum Lohn");
        break;
    }
    case 349161:
    {
        returnValue = F("Zum Lohof");
        break;
    }
    case 349162:
    {
        returnValue = F("Zum Lohr");
        break;
    }
    case 349163:
    {
        returnValue = F("Zum Lohteich");
        break;
    }
    case 349164:
    {
        returnValue = F("Zum Lohwald");
        break;
    }
    case 349165:
    {
        returnValue = F("Zum Lohwäldchen");
        break;
    }
    case 349166:
    {
        returnValue = F("Zum Lokschuppen");
        break;
    }
    case 349167:
    {
        returnValue = F("Zum Lonnenhohl");
        break;
    }
    case 349168:
    {
        returnValue = F("Zum Loog");
        break;
    }
    case 349169:
    {
        returnValue = F("Zum Loopetal");
        break;
    }
    case 349170:
    {
        returnValue = F("Zum Looseberg");
        break;
    }
    case 349171:
    {
        returnValue = F("Zum Lopautal");
        break;
    }
    case 349172:
    {
        returnValue = F("Zum Lorenzberg");
        break;
    }
    case 349173:
    {
        returnValue = F("Zum Losskamp");
        break;
    }
    case 349174:
    {
        returnValue = F("Zum Lothsholz");
        break;
    }
    case 349175:
    {
        returnValue = F("Zum Lottenberg");
        break;
    }
    case 349176:
    {
        returnValue = F("Zum Lotter Bahnhof");
        break;
    }
    case 349177:
    {
        returnValue = F("Zum Lotterberg");
        break;
    }
    case 349178:
    {
        returnValue = F("Zum Lowisch");
        break;
    }
    case 349179:
    {
        returnValue = F("Zum Loxterort");
        break;
    }
    case 349180:
    {
        returnValue = F("Zum Lubst");
        break;
    }
    case 349181:
    {
        returnValue = F("Zum Luchfeld");
        break;
    }
    case 349182:
    {
        returnValue = F("Zum Ludwigskanal");
        break;
    }
    case 349183:
    {
        returnValue = F("Zum Ludwigstal");
        break;
    }
    case 349184:
    {
        returnValue = F("Zum Luftschacht");
        break;
    }
    case 349185:
    {
        returnValue = F("Zum Lugthook");
        break;
    }
    case 349186:
    {
        returnValue = F("Zum Luhberg");
        break;
    }
    case 349187:
    {
        returnValue = F("Zum Luisengut");
        break;
    }
    case 349188:
    {
        returnValue = F("Zum Luisenhof");
        break;
    }
    case 349189:
    {
        returnValue = F("Zum Luisenthaler Wasserfall");
        break;
    }
    case 349190:
    {
        returnValue = F("Zum Lumbach");
        break;
    }
    case 349191:
    {
        returnValue = F("Zum Lunebogen");
        break;
    }
    case 349192:
    {
        returnValue = F("Zum Luppedamm");
        break;
    }
    case 349193:
    {
        returnValue = F("Zum Lurchenberg");
        break;
    }
    case 349194:
    {
        returnValue = F("Zum Lustgarten");
        break;
    }
    case 349195:
    {
        returnValue = F("Zum Lutherhof");
        break;
    }
    case 349196:
    {
        returnValue = F("Zum Läger");
        break;
    }
    case 349197:
    {
        returnValue = F("Zum Lähr");
        break;
    }
    case 349198:
    {
        returnValue = F("Zum Lämmerbrunnen");
        break;
    }
    case 349199:
    {
        returnValue = F("Zum Längsee");
        break;
    }
    case 349200:
    {
        returnValue = F("Zum Lärcheborn");
        break;
    }
    case 349201:
    {
        returnValue = F("Zum Lärchenaltholz");
        break;
    }
    case 349202:
    {
        returnValue = F("Zum Lärchenberg");
        break;
    }
    case 349203:
    {
        returnValue = F("Zum Lärcheneck");
        break;
    }
    case 349204:
    {
        returnValue = F("Zum Lärchengarten");
        break;
    }
    case 349205:
    {
        returnValue = F("Zum Lärchenwald");
        break;
    }
    case 349206:
    {
        returnValue = F("Zum Läusbusch");
        break;
    }
    case 349207:
    {
        returnValue = F("Zum Löbauer Wasser");
        break;
    }
    case 349208:
    {
        returnValue = F("Zum Löbitzsee");
        break;
    }
    case 349209:
    {
        returnValue = F("Zum Löh");
        break;
    }
    case 349210:
    {
        returnValue = F("Zum Löhken");
        break;
    }
    case 349211:
    {
        returnValue = F("Zum Löhlein");
        break;
    }
    case 349212:
    {
        returnValue = F("Zum Löhrhof");
        break;
    }
    case 349213:
    {
        returnValue = F("Zum Lönsberg");
        break;
    }
    case 349214:
    {
        returnValue = F("Zum Löps");
        break;
    }
    case 349215:
    {
        returnValue = F("Zum Lösch- und Ladeplatz");
        break;
    }
    case 349216:
    {
        returnValue = F("Zum Löschert");
        break;
    }
    case 349217:
    {
        returnValue = F("Zum Löschteich");
        break;
    }
    case 349218:
    {
        returnValue = F("Zum Lösterblick");
        break;
    }
    case 349219:
    {
        returnValue = F("Zum Lötz");
        break;
    }
    case 349220:
    {
        returnValue = F("Zum Lövekamp");
        break;
    }
    case 349221:
    {
        returnValue = F("Zum Löwen");
        break;
    }
    case 349222:
    {
        returnValue = F("Zum Löwengrund");
        break;
    }
    case 349223:
    {
        returnValue = F("Zum Löwerholz");
        break;
    }
    case 349224:
    {
        returnValue = F("Zum Lüchting");
        break;
    }
    case 349225:
    {
        returnValue = F("Zum Lückner");
        break;
    }
    case 349226:
    {
        returnValue = F("Zum Lüdekenwinkel");
        break;
    }
    case 349227:
    {
        returnValue = F("Zum Lülle");
        break;
    }
    case 349228:
    {
        returnValue = F("Zum Lüngert");
        break;
    }
    case 349229:
    {
        returnValue = F("Zum Lüngmoor");
        break;
    }
    case 349230:
    {
        returnValue = F("Zum Lünsberg");
        break;
    }
    case 349231:
    {
        returnValue = F("Zum Lütal");
        break;
    }
    case 349232:
    {
        returnValue = F("Zum Lüttinger Feld");
        break;
    }
    case 349233:
    {
        returnValue = F("Zum Maar");
        break;
    }
    case 349234:
    {
        returnValue = F("Zum Mackenroth");
        break;
    }
    case 349235:
    {
        returnValue = F("Zum Magazin");
        break;
    }
    case 349236:
    {
        returnValue = F("Zum Mahlberg");
        break;
    }
    case 349237:
    {
        returnValue = F("Zum Mahracker");
        break;
    }
    case 349238:
    {
        returnValue = F("Zum Maiacker");
        break;
    }
    case 349239:
    {
        returnValue = F("Zum Maiborn");
        break;
    }
    case 349240:
    {
        returnValue = F("Zum Maidlebach");
        break;
    }
    case 349241:
    {
        returnValue = F("Zum Maierberg");
        break;
    }
    case 349242:
    {
        returnValue = F("Zum Maiergrund");
        break;
    }
    case 349243:
    {
        returnValue = F("Zum Maierhof");
        break;
    }
    case 349244:
    {
        returnValue = F("Zum Maierle");
        break;
    }
    case 349245:
    {
        returnValue = F("Zum Maindamm");
        break;
    }
    case 349246:
    {
        returnValue = F("Zum Mainholz");
        break;
    }
    case 349247:
    {
        returnValue = F("Zum Mainzer Rad");
        break;
    }
    case 349248:
    {
        returnValue = F("Zum Mainzern");
        break;
    }
    case 349249:
    {
        returnValue = F("Zum Maiplatz");
        break;
    }
    case 349250:
    {
        returnValue = F("Zum Maisfeld");
        break;
    }
    case 349251:
    {
        returnValue = F("Zum Maiwald");
        break;
    }
    case 349252:
    {
        returnValue = F("Zum Mal");
        break;
    }
    case 349253:
    {
        returnValue = F("Zum Malberg");
        break;
    }
    case 349254:
    {
        returnValue = F("Zum Malerhoop");
        break;
    }
    case 349255:
    {
        returnValue = F("Zum Malerweg");
        break;
    }
    case 349256:
    {
        returnValue = F("Zum Mallersdorfer Grund");
        break;
    }
    case 349257:
    {
        returnValue = F("Zum Mammutbaum");
        break;
    }
    case 349258:
    {
        returnValue = F("Zum Mandelschlag");
        break;
    }
    case 349259:
    {
        returnValue = F("Zum Mandelstück");
        break;
    }
    case 349260:
    {
        returnValue = F("Zum Mannsberg");
        break;
    }
    case 349261:
    {
        returnValue = F("Zum Mannsiefen");
        break;
    }
    case 349262:
    {
        returnValue = F("Zum Mannstal");
        break;
    }
    case 349263:
    {
        returnValue = F("Zum Manntal");
        break;
    }
    case 349264:
    {
        returnValue = F("Zum Margarethenzehnten");
        break;
    }
    case 349265:
    {
        returnValue = F("Zum Maria-Hauptschacht");
        break;
    }
    case 349266:
    {
        returnValue = F("Zum Marienhof");
        break;
    }
    case 349267:
    {
        returnValue = F("Zum Marienhäuschen");
        break;
    }
    case 349268:
    {
        returnValue = F("Zum Marienköpfchen");
        break;
    }
    case 349269:
    {
        returnValue = F("Zum Markenbach");
        break;
    }
    case 349270:
    {
        returnValue = F("Zum Markenberg");
        break;
    }
    case 349271:
    {
        returnValue = F("Zum Markt");
        break;
    }
    case 349272:
    {
        returnValue = F("Zum Marktberg");
        break;
    }
    case 349273:
    {
        returnValue = F("Zum Marktplatz");
        break;
    }
    case 349274:
    {
        returnValue = F("Zum Marktsteig");
        break;
    }
    case 349275:
    {
        returnValue = F("Zum Marktstein");
        break;
    }
    case 349276:
    {
        returnValue = F("Zum Markwald");
        break;
    }
    case 349277:
    {
        returnValue = F("Zum Markweg");
        break;
    }
    case 349278:
    {
        returnValue = F("Zum Marmorbruch");
        break;
    }
    case 349279:
    {
        returnValue = F("Zum Marrah");
        break;
    }
    case 349280:
    {
        returnValue = F("Zum Marschfeld");
        break;
    }
    case 349281:
    {
        returnValue = F("Zum Marstall");
        break;
    }
    case 349282:
    {
        returnValue = F("Zum Martinsberg");
        break;
    }
    case 349283:
    {
        returnValue = F("Zum Marxbauer");
        break;
    }
    case 349284:
    {
        returnValue = F("Zum Maschinenhof");
        break;
    }
    case 349285:
    {
        returnValue = F("Zum Massenberg");
        break;
    }
    case 349286:
    {
        returnValue = F("Zum Mattenberg");
        break;
    }
    case 349287:
    {
        returnValue = F("Zum Matzenberg");
        break;
    }
    case 349288:
    {
        returnValue = F("Zum Matzenborn");
        break;
    }
    case 349289:
    {
        returnValue = F("Zum Mauergarten");
        break;
    }
    case 349290:
    {
        returnValue = F("Zum Mauseberg");
        break;
    }
    case 349291:
    {
        returnValue = F("Zum Mausetal");
        break;
    }
    case 349292:
    {
        returnValue = F("Zum Mautzbach");
        break;
    }
    case 349293:
    {
        returnValue = F("Zum Meckelmoor");
        break;
    }
    case 349294:
    {
        returnValue = F("Zum Meckenheimer Weg");
        break;
    }
    case 349295:
    {
        returnValue = F("Zum Mediskamp");
        break;
    }
    case 349296:
    {
        returnValue = F("Zum Meer");
        break;
    }
    case 349297:
    {
        returnValue = F("Zum Meerbach");
        break;
    }
    case 349298:
    {
        returnValue = F("Zum Meerbruch");
        break;
    }
    case 349299:
    {
        returnValue = F("Zum Meeresstrand");
        break;
    }
    case 349300:
    {
        returnValue = F("Zum Meersahl");
        break;
    }
    case 349301:
    {
        returnValue = F("Zum Meersefeld");
        break;
    }
    case 349302:
    {
        returnValue = F("Zum Meerwald");
        break;
    }
    case 349303:
    {
        returnValue = F("Zum Meeschensee");
        break;
    }
    case 349304:
    {
        returnValue = F("Zum Mehlacker");
        break;
    }
    case 349305:
    {
        returnValue = F("Zum Mehrenkamp");
        break;
    }
    case 349306:
    {
        returnValue = F("Zum Mehrkamp");
        break;
    }
    case 349307:
    {
        returnValue = F("Zum Meierberg");
        break;
    }
    case 349308:
    {
        returnValue = F("Zum Meierhof");
        break;
    }
    case 349309:
    {
        returnValue = F("Zum Meinet");
        break;
    }
    case 349310:
    {
        returnValue = F("Zum Meisbüsch");
        break;
    }
    case 349311:
    {
        returnValue = F("Zum Meisenhübel");
        break;
    }
    case 349312:
    {
        returnValue = F("Zum Meisental");
        break;
    }
    case 349313:
    {
        returnValue = F("Zum Meisterreitel");
        break;
    }
    case 349314:
    {
        returnValue = F("Zum Melkstand");
        break;
    }
    case 349315:
    {
        returnValue = F("Zum Melm");
        break;
    }
    case 349316:
    {
        returnValue = F("Zum Menthal");
        break;
    }
    case 349317:
    {
        returnValue = F("Zum Mentruper Hof");
        break;
    }
    case 349318:
    {
        returnValue = F("Zum Merchtal");
        break;
    }
    case 349319:
    {
        returnValue = F("Zum Mergelborn");
        break;
    }
    case 349320:
    {
        returnValue = F("Zum Mergelbruch");
        break;
    }
    case 349321:
    {
        returnValue = F("Zum Merlbach");
        break;
    }
    case 349322:
    {
        returnValue = F("Zum Mersch");
        break;
    }
    case 349323:
    {
        returnValue = F("Zum Merschbach");
        break;
    }
    case 349324:
    {
        returnValue = F("Zum Mertesberg");
        break;
    }
    case 349325:
    {
        returnValue = F("Zum Messeberg");
        break;
    }
    case 349326:
    {
        returnValue = F("Zum Messeplatz");
        break;
    }
    case 349327:
    {
        returnValue = F("Zum Messplatz");
        break;
    }
    case 349328:
    {
        returnValue = F("Zum Metzenmüller");
        break;
    }
    case 349329:
    {
        returnValue = F("Zum Metzewinkel");
        break;
    }
    case 349330:
    {
        returnValue = F("Zum Meulenwald");
        break;
    }
    case 349331:
    {
        returnValue = F("Zum Meyerhof");
        break;
    }
    case 349332:
    {
        returnValue = F("Zum Meyerholz");
        break;
    }
    case 349333:
    {
        returnValue = F("Zum Meyerschen Hafen");
        break;
    }
    case 349334:
    {
        returnValue = F("Zum Michael");
        break;
    }
    case 349335:
    {
        returnValue = F("Zum Michaelsberg");
        break;
    }
    case 349336:
    {
        returnValue = F("Zum Miesbühel");
        break;
    }
    case 349337:
    {
        returnValue = F("Zum Milchhof");
        break;
    }
    case 349338:
    {
        returnValue = F("Zum Milchwinkel");
        break;
    }
    case 349339:
    {
        returnValue = F("Zum Mildenitztal");
        break;
    }
    case 349340:
    {
        returnValue = F("Zum Millinger Meer");
        break;
    }
    case 349341:
    {
        returnValue = F("Zum Milmert");
        break;
    }
    case 349342:
    {
        returnValue = F("Zum Milzgrund");
        break;
    }
    case 349343:
    {
        returnValue = F("Zum Milzgrund/Marktplatz");
        break;
    }
    case 349344:
    {
        returnValue = F("Zum Mindelsee");
        break;
    }
    case 349345:
    {
        returnValue = F("Zum Mineralbad");
        break;
    }
    case 349346:
    {
        returnValue = F("Zum Ministerhügel");
        break;
    }
    case 349347:
    {
        returnValue = F("Zum Mittelbusch");
        break;
    }
    case 349348:
    {
        returnValue = F("Zum Mitteldorf");
        break;
    }
    case 349349:
    {
        returnValue = F("Zum Mittelfeld");
        break;
    }
    case 349350:
    {
        returnValue = F("Zum Mittelhangweg");
        break;
    }
    case 349351:
    {
        returnValue = F("Zum Mittelhaus");
        break;
    }
    case 349352:
    {
        returnValue = F("Zum Mittelholz");
        break;
    }
    case 349353:
    {
        returnValue = F("Zum Mittelhoop");
        break;
    }
    case 349354:
    {
        returnValue = F("Zum Mittelprendener");
        break;
    }
    case 349355:
    {
        returnValue = F("Zum Mittelpunkt");
        break;
    }
    case 349356:
    {
        returnValue = F("Zum Mittelsteig");
        break;
    }
    case 349357:
    {
        returnValue = F("Zum Mittelteich");
        break;
    }
    case 349358:
    {
        returnValue = F("Zum Mittelweg");
        break;
    }
    case 349359:
    {
        returnValue = F("Zum Mitterfeld");
        break;
    }
    case 349360:
    {
        returnValue = F("Zum Mitterweg");
        break;
    }
    case 349361:
    {
        returnValue = F("Zum Modellflugplatz");
        break;
    }
    case 349362:
    {
        returnValue = F("Zum Monarchenhügel");
        break;
    }
    case 349363:
    {
        returnValue = F("Zum Monbachtal");
        break;
    }
    case 349364:
    {
        returnValue = F("Zum Mondschein");
        break;
    }
    case 349365:
    {
        returnValue = F("Zum Mont Royal");
        break;
    }
    case 349366:
    {
        returnValue = F("Zum Moor");
        break;
    }
    case 349367:
    {
        returnValue = F("Zum Mooracker");
        break;
    }
    case 349368:
    {
        returnValue = F("Zum Moorberg");
        break;
    }
    case 349369:
    {
        returnValue = F("Zum Moorbruch");
        break;
    }
    case 349370:
    {
        returnValue = F("Zum Moordamm");
        break;
    }
    case 349371:
    {
        returnValue = F("Zum Moore");
        break;
    }
    case 349372:
    {
        returnValue = F("Zum Moorfeld");
        break;
    }
    case 349373:
    {
        returnValue = F("Zum Moorhof");
        break;
    }
    case 349374:
    {
        returnValue = F("Zum Moorkamp");
        break;
    }
    case 349375:
    {
        returnValue = F("Zum Moorkanal");
        break;
    }
    case 349376:
    {
        returnValue = F("Zum Moorland");
        break;
    }
    case 349377:
    {
        returnValue = F("Zum Moorschlatt");
        break;
    }
    case 349378:
    {
        returnValue = F("Zum Moortal");
        break;
    }
    case 349379:
    {
        returnValue = F("Zum Moos");
        break;
    }
    case 349380:
    {
        returnValue = F("Zum Moosacker");
        break;
    }
    case 349381:
    {
        returnValue = F("Zum Moosbruch");
        break;
    }
    case 349382:
    {
        returnValue = F("Zum Moosfirst");
        break;
    }
    case 349383:
    {
        returnValue = F("Zum Moospfuhl");
        break;
    }
    case 349384:
    {
        returnValue = F("Zum Mordsiek");
        break;
    }
    case 349385:
    {
        returnValue = F("Zum Morgengraben");
        break;
    }
    case 349386:
    {
        returnValue = F("Zum Morgenland");
        break;
    }
    case 349387:
    {
        returnValue = F("Zum Morgenloch");
        break;
    }
    case 349388:
    {
        returnValue = F("Zum Moselufer");
        break;
    }
    case 349389:
    {
        returnValue = F("Zum Mottenbaum");
        break;
    }
    case 349390:
    {
        returnValue = F("Zum Mottengraben");
        break;
    }
    case 349391:
    {
        returnValue = F("Zum Muhlienberg");
        break;
    }
    case 349392:
    {
        returnValue = F("Zum Muldenblick");
        break;
    }
    case 349393:
    {
        returnValue = F("Zum Multen");
        break;
    }
    case 349394:
    {
        returnValue = F("Zum Mummenkamp");
        break;
    }
    case 349395:
    {
        returnValue = F("Zum Mummental");
        break;
    }
    case 349396:
    {
        returnValue = F("Zum Murgdamm");
        break;
    }
    case 349397:
    {
        returnValue = F("Zum Musbach");
        break;
    }
    case 349398:
    {
        returnValue = F("Zum Muttenplatz");
        break;
    }
    case 349399:
    {
        returnValue = F("Zum Mutterbachtal");
        break;
    }
    case 349400:
    {
        returnValue = F("Zum Muttergottesbild");
        break;
    }
    case 349401:
    {
        returnValue = F("Zum Mußenbach");
        break;
    }
    case 349402:
    {
        returnValue = F("Zum Märchen");
        break;
    }
    case 349403:
    {
        returnValue = F("Zum Märchenland");
        break;
    }
    case 349404:
    {
        returnValue = F("Zum Märchenteich");
        break;
    }
    case 349405:
    {
        returnValue = F("Zum Mäusbach");
        break;
    }
    case 349406:
    {
        returnValue = F("Zum Mäuseberg");
        break;
    }
    case 349407:
    {
        returnValue = F("Zum Mäusetal");
        break;
    }
    case 349408:
    {
        returnValue = F("Zum Möhnerschen");
        break;
    }
    case 349409:
    {
        returnValue = F("Zum Möhnewehr");
        break;
    }
    case 349410:
    {
        returnValue = F("Zum Mölbitzer Holz");
        break;
    }
    case 349411:
    {
        returnValue = F("Zum Mönchacker");
        break;
    }
    case 349412:
    {
        returnValue = F("Zum Mönchguter Tor");
        break;
    }
    case 349413:
    {
        returnValue = F("Zum Mönchsee");
        break;
    }
    case 349414:
    {
        returnValue = F("Zum Mönchsweg");
        break;
    }
    case 349415:
    {
        returnValue = F("Zum Mönchtal");
        break;
    }
    case 349416:
    {
        returnValue = F("Zum Mörken");
        break;
    }
    case 349417:
    {
        returnValue = F("Zum Mörtelwerk");
        break;
    }
    case 349418:
    {
        returnValue = F("Zum Möwenort");
        break;
    }
    case 349419:
    {
        returnValue = F("Zum Möwenteich");
        break;
    }
    case 349420:
    {
        returnValue = F("Zum Mückenberg");
        break;
    }
    case 349421:
    {
        returnValue = F("Zum Mückenplatz");
        break;
    }
    case 349422:
    {
        returnValue = F("Zum Mückensee");
        break;
    }
    case 349423:
    {
        returnValue = F("Zum Müggenberg");
        break;
    }
    case 349424:
    {
        returnValue = F("Zum Mühlacker");
        break;
    }
    case 349425:
    {
        returnValue = F("Zum Mühlbach");
        break;
    }
    case 349426:
    {
        returnValue = F("Zum Mühlbachtal");
        break;
    }
    case 349427:
    {
        returnValue = F("Zum Mühlberg");
        break;
    }
    case 349428:
    {
        returnValue = F("Zum Mühlbusch");
        break;
    }
    case 349429:
    {
        returnValue = F("Zum Mühlchen");
        break;
    }
    case 349430:
    {
        returnValue = F("Zum Mühleholz");
        break;
    }
    case 349431:
    {
        returnValue = F("Zum Mühlenacker");
        break;
    }
    case 349432:
    {
        returnValue = F("Zum Mühlenbach");
        break;
    }
    case 349433:
    {
        returnValue = F("Zum Mühlenberg");
        break;
    }
    case 349434:
    {
        returnValue = F("Zum Mühlenblick");
        break;
    }
    case 349435:
    {
        returnValue = F("Zum Mühlenborn");
        break;
    }
    case 349436:
    {
        returnValue = F("Zum Mühlenbrink");
        break;
    }
    case 349437:
    {
        returnValue = F("Zum Mühlenbruch");
        break;
    }
    case 349438:
    {
        returnValue = F("Zum Mühlendriesch");
        break;
    }
    case 349439:
    {
        returnValue = F("Zum Mühlenfeld");
        break;
    }
    case 349440:
    {
        returnValue = F("Zum Mühlenfels");
        break;
    }
    case 349441:
    {
        returnValue = F("Zum Mühlenfließ");
        break;
    }
    case 349442:
    {
        returnValue = F("Zum Mühlengraben");
        break;
    }
    case 349443:
    {
        returnValue = F("Zum Mühlengrund");
        break;
    }
    case 349444:
    {
        returnValue = F("Zum Mühlenheck");
        break;
    }
    case 349445:
    {
        returnValue = F("Zum Mühlenhof");
        break;
    }
    case 349446:
    {
        returnValue = F("Zum Mühlenkamp");
        break;
    }
    case 349447:
    {
        returnValue = F("Zum Mühlenkopf");
        break;
    }
    case 349448:
    {
        returnValue = F("Zum Mühlenrad");
        break;
    }
    case 349449:
    {
        returnValue = F("Zum Mühlenschlag");
        break;
    }
    case 349450:
    {
        returnValue = F("Zum Mühlensiek");
        break;
    }
    case 349451:
    {
        returnValue = F("Zum Mühlenstrang");
        break;
    }
    case 349452:
    {
        returnValue = F("Zum Mühlenstück");
        break;
    }
    case 349453:
    {
        returnValue = F("Zum Mühlental");
        break;
    }
    case 349454:
    {
        returnValue = F("Zum Mühlenteich");
        break;
    }
    case 349455:
    {
        returnValue = F("Zum Mühlenwald");
        break;
    }
    case 349456:
    {
        returnValue = F("Zum Mühlenweg");
        break;
    }
    case 349457:
    {
        returnValue = F("Zum Mühlenweiher");
        break;
    }
    case 349458:
    {
        returnValue = F("Zum Mühlenwerk");
        break;
    }
    case 349459:
    {
        returnValue = F("Zum Mühler");
        break;
    }
    case 349460:
    {
        returnValue = F("Zum Mühlfeld");
        break;
    }
    case 349461:
    {
        returnValue = F("Zum Mühlgraben");
        break;
    }
    case 349462:
    {
        returnValue = F("Zum Mühlgrund");
        break;
    }
    case 349463:
    {
        returnValue = F("Zum Mühlgut");
        break;
    }
    case 349464:
    {
        returnValue = F("Zum Mühlhof");
        break;
    }
    case 349465:
    {
        returnValue = F("Zum Mühlhölzle");
        break;
    }
    case 349466:
    {
        returnValue = F("Zum Mühlkanal");
        break;
    }
    case 349467:
    {
        returnValue = F("Zum Mühlkotten");
        break;
    }
    case 349468:
    {
        returnValue = F("Zum Mühlrain");
        break;
    }
    case 349469:
    {
        returnValue = F("Zum Mühlrand");
        break;
    }
    case 349470:
    {
        returnValue = F("Zum Mühlsberg");
        break;
    }
    case 349471:
    {
        returnValue = F("Zum Mühlsteinbruch");
        break;
    }
    case 349472:
    {
        returnValue = F("Zum Mühltal");
        break;
    }
    case 349473:
    {
        returnValue = F("Zum Mühlwald");
        break;
    }
    case 349474:
    {
        returnValue = F("Zum Mühlweg");
        break;
    }
    case 349475:
    {
        returnValue = F("Zum Mühlöschle");
        break;
    }
    case 349476:
    {
        returnValue = F("Zum Müller");
        break;
    }
    case 349477:
    {
        returnValue = F("Zum Müllerbek");
        break;
    }
    case 349478:
    {
        returnValue = F("Zum Müllerberg");
        break;
    }
    case 349479:
    {
        returnValue = F("Zum Münchshof");
        break;
    }
    case 349480:
    {
        returnValue = F("Zum Münsterblick");
        break;
    }
    case 349481:
    {
        returnValue = F("Zum Münzmeister");
        break;
    }
    case 349482:
    {
        returnValue = F("Zum Mütterheim");
        break;
    }
    case 349483:
    {
        returnValue = F("Zum Mütterle");
        break;
    }
    case 349484:
    {
        returnValue = F("Zum Naabberg");
        break;
    }
    case 349485:
    {
        returnValue = F("Zum Naabtalhaus");
        break;
    }
    case 349486:
    {
        returnValue = F("Zum Naafbach");
        break;
    }
    case 349487:
    {
        returnValue = F("Zum Nabu-Haus");
        break;
    }
    case 349488:
    {
        returnValue = F("Zum Nachbarschulte");
        break;
    }
    case 349489:
    {
        returnValue = F("Zum Nachtbühl");
        break;
    }
    case 349490:
    {
        returnValue = F("Zum Nachtigallental");
        break;
    }
    case 349491:
    {
        returnValue = F("Zum Nackberg");
        break;
    }
    case 349492:
    {
        returnValue = F("Zum Nagelbrunnen");
        break;
    }
    case 349493:
    {
        returnValue = F("Zum Nagoldblick");
        break;
    }
    case 349494:
    {
        returnValue = F("Zum Naheblick");
        break;
    }
    case 349495:
    {
        returnValue = F("Zum Nassauer Graben");
        break;
    }
    case 349496:
    {
        returnValue = F("Zum Nationalpark-Tor");
        break;
    }
    case 349497:
    {
        returnValue = F("Zum Natten");
        break;
    }
    case 349498:
    {
        returnValue = F("Zum Naturbad");
        break;
    }
    case 349499:
    {
        returnValue = F("Zum Naturfreundehaus");
        break;
    }
    case 349500:
    {
        returnValue = F("Zum Naturpfad");
        break;
    }
    case 349501:
    {
        returnValue = F("Zum Naturschutzgebiet");
        break;
    }
    case 349502:
    {
        returnValue = F("Zum Natzental");
        break;
    }
    case 349503:
    {
        returnValue = F("Zum Naubour");
        break;
    }
    case 349504:
    {
        returnValue = F("Zum Nautzschketal");
        break;
    }
    case 349505:
    {
        returnValue = F("Zum Neeser");
        break;
    }
    case 349506:
    {
        returnValue = F("Zum Neetzekanal");
        break;
    }
    case 349507:
    {
        returnValue = F("Zum Neffelbach");
        break;
    }
    case 349508:
    {
        returnValue = F("Zum Neidhardt");
        break;
    }
    case 349509:
    {
        returnValue = F("Zum Neidling");
        break;
    }
    case 349510:
    {
        returnValue = F("Zum Neißehafen");
        break;
    }
    case 349511:
    {
        returnValue = F("Zum Nesberg");
        break;
    }
    case 349512:
    {
        returnValue = F("Zum Nesselberg");
        break;
    }
    case 349513:
    {
        returnValue = F("Zum Nethegarten");
        break;
    }
    case 349514:
    {
        returnValue = F("Zum Netling");
        break;
    }
    case 349515:
    {
        returnValue = F("Zum Netter Busch");
        break;
    }
    case 349516:
    {
        returnValue = F("Zum Nettetal");
        break;
    }
    case 349517:
    {
        returnValue = F("Zum Netzboden");
        break;
    }
    case 349518:
    {
        returnValue = F("Zum Netzetrockenplatz");
        break;
    }
    case 349519:
    {
        returnValue = F("Zum Neuberg");
        break;
    }
    case 349520:
    {
        returnValue = F("Zum Neudorfer Moor");
        break;
    }
    case 349521:
    {
        returnValue = F("Zum Neuen Damm");
        break;
    }
    case 349522:
    {
        returnValue = F("Zum Neuen Felde");
        break;
    }
    case 349523:
    {
        returnValue = F("Zum Neuen Friedhof");
        break;
    }
    case 349524:
    {
        returnValue = F("Zum Neuen Garten");
        break;
    }
    case 349525:
    {
        returnValue = F("Zum Neuen Hieb");
        break;
    }
    case 349526:
    {
        returnValue = F("Zum Neuen Hof");
        break;
    }
    case 349527:
    {
        returnValue = F("Zum Neuen Kamp");
        break;
    }
    case 349528:
    {
        returnValue = F("Zum Neuen Kloster");
        break;
    }
    case 349529:
    {
        returnValue = F("Zum Neuen Land");
        break;
    }
    case 349530:
    {
        returnValue = F("Zum Neuen Lande");
        break;
    }
    case 349531:
    {
        returnValue = F("Zum Neuen Weg");
        break;
    }
    case 349532:
    {
        returnValue = F("Zum Neufnachtal");
        break;
    }
    case 349533:
    {
        returnValue = F("Zum Neuhof");
        break;
    }
    case 349534:
    {
        returnValue = F("Zum Neuland");
        break;
    }
    case 349535:
    {
        returnValue = F("Zum Neuner");
        break;
    }
    case 349536:
    {
        returnValue = F("Zum Neuntagwerk");
        break;
    }
    case 349537:
    {
        returnValue = F("Zum Neusatz");
        break;
    }
    case 349538:
    {
        returnValue = F("Zum Neuselsberg");
        break;
    }
    case 349539:
    {
        returnValue = F("Zum Neutal");
        break;
    }
    case 349540:
    {
        returnValue = F("Zum Neuteich");
        break;
    }
    case 349541:
    {
        returnValue = F("Zum Neuweiher");
        break;
    }
    case 349542:
    {
        returnValue = F("Zum Neuß");
        break;
    }
    case 349543:
    {
        returnValue = F("Zum Niddersteg");
        break;
    }
    case 349544:
    {
        returnValue = F("Zum Niebegarten");
        break;
    }
    case 349545:
    {
        returnValue = F("Zum Niederberg");
        break;
    }
    case 349546:
    {
        returnValue = F("Zum Niederdorf");
        break;
    }
    case 349547:
    {
        returnValue = F("Zum Niederfeld");
        break;
    }
    case 349548:
    {
        returnValue = F("Zum Niederhof");
        break;
    }
    case 349549:
    {
        returnValue = F("Zum Niedernfeld");
        break;
    }
    case 349550:
    {
        returnValue = F("Zum Niederntor");
        break;
    }
    case 349551:
    {
        returnValue = F("Zum Niederwald-Denkmal");
        break;
    }
    case 349552:
    {
        returnValue = F("Zum Niedwehr");
        break;
    }
    case 349553:
    {
        returnValue = F("Zum Nierfeld");
        break;
    }
    case 349554:
    {
        returnValue = F("Zum Niklotstadion");
        break;
    }
    case 349555:
    {
        returnValue = F("Zum Nikolausbrunnen");
        break;
    }
    case 349556:
    {
        returnValue = F("Zum Noll");
        break;
    }
    case 349557:
    {
        returnValue = F("Zum Nollenberg");
        break;
    }
    case 349558:
    {
        returnValue = F("Zum Nonnenberg");
        break;
    }
    case 349559:
    {
        returnValue = F("Zum Nonnenbusch");
        break;
    }
    case 349560:
    {
        returnValue = F("Zum Nonnengarten");
        break;
    }
    case 349561:
    {
        returnValue = F("Zum Nonnengraben");
        break;
    }
    case 349562:
    {
        returnValue = F("Zum Nonnenkamp");
        break;
    }
    case 349563:
    {
        returnValue = F("Zum Nonnenstein");
        break;
    }
    case 349564:
    {
        returnValue = F("Zum Nonnhof");
        break;
    }
    case 349565:
    {
        returnValue = F("Zum Nordbahnhof");
        break;
    }
    case 349566:
    {
        returnValue = F("Zum Nordermoor");
        break;
    }
    case 349567:
    {
        returnValue = F("Zum Nordhang");
        break;
    }
    case 349568:
    {
        returnValue = F("Zum Nordkai");
        break;
    }
    case 349569:
    {
        returnValue = F("Zum Nordkanal");
        break;
    }
    case 349570:
    {
        returnValue = F("Zum Nordschacht");
        break;
    }
    case 349571:
    {
        returnValue = F("Zum Nordstrand");
        break;
    }
    case 349572:
    {
        returnValue = F("Zum Nubbental");
        break;
    }
    case 349573:
    {
        returnValue = F("Zum Nullmoor");
        break;
    }
    case 349574:
    {
        returnValue = F("Zum Nussbaum");
        break;
    }
    case 349575:
    {
        returnValue = F("Zum Nußacker");
        break;
    }
    case 349576:
    {
        returnValue = F("Zum Nußberg");
        break;
    }
    case 349577:
    {
        returnValue = F("Zum Nußwäldchen");
        break;
    }
    case 349578:
    {
        returnValue = F("Zum Nöchel");
        break;
    }
    case 349579:
    {
        returnValue = F("Zum Nöringer Feld");
        break;
    }
    case 349580:
    {
        returnValue = F("Zum Nöthof");
        break;
    }
    case 349581:
    {
        returnValue = F("Zum Nüchel");
        break;
    }
    case 349582:
    {
        returnValue = F("Zum Nühren");
        break;
    }
    case 349583:
    {
        returnValue = F("Zum Nürnberger Hof");
        break;
    }
    case 349584:
    {
        returnValue = F("Zum Nüsttal");
        break;
    }
    case 349585:
    {
        returnValue = F("Zum Oberbach");
        break;
    }
    case 349586:
    {
        returnValue = F("Zum Oberberg");
        break;
    }
    case 349587:
    {
        returnValue = F("Zum Oberbäumle");
        break;
    }
    case 349588:
    {
        returnValue = F("Zum Oberdorf");
        break;
    }
    case 349589:
    {
        returnValue = F("Zum Oberen Felde");
        break;
    }
    case 349590:
    {
        returnValue = F("Zum Oberen Gewend");
        break;
    }
    case 349591:
    {
        returnValue = F("Zum Oberen Siekenberg");
        break;
    }
    case 349592:
    {
        returnValue = F("Zum Oberen Teich");
        break;
    }
    case 349593:
    {
        returnValue = F("Zum Oberen Tobel");
        break;
    }
    case 349594:
    {
        returnValue = F("Zum Oberen Tor");
        break;
    }
    case 349595:
    {
        returnValue = F("Zum Oberfeld");
        break;
    }
    case 349596:
    {
        returnValue = F("Zum Oberhain");
        break;
    }
    case 349597:
    {
        returnValue = F("Zum Oberland");
        break;
    }
    case 349598:
    {
        returnValue = F("Zum Oberloh");
        break;
    }
    case 349599:
    {
        returnValue = F("Zum Oberntor");
        break;
    }
    case 349600:
    {
        returnValue = F("Zum Obersee");
        break;
    }
    case 349601:
    {
        returnValue = F("Zum Obersten Hof");
        break;
    }
    case 349602:
    {
        returnValue = F("Zum Obersten Wäldchen");
        break;
    }
    case 349603:
    {
        returnValue = F("Zum Oberwald");
        break;
    }
    case 349604:
    {
        returnValue = F("Zum Oberwerk");
        break;
    }
    case 349605:
    {
        returnValue = F("Zum Obstbau");
        break;
    }
    case 349606:
    {
        returnValue = F("Zum Obstgarten");
        break;
    }
    case 349607:
    {
        returnValue = F("Zum Obstgartenhof");
        break;
    }
    case 349608:
    {
        returnValue = F("Zum Obsthof");
        break;
    }
    case 349609:
    {
        returnValue = F("Zum Obstrain");
        break;
    }
    case 349610:
    {
        returnValue = F("Zum Ochsenberg");
        break;
    }
    case 349611:
    {
        returnValue = F("Zum Ochsengrund");
        break;
    }
    case 349612:
    {
        returnValue = F("Zum Ochsenkopf");
        break;
    }
    case 349613:
    {
        returnValue = F("Zum Ochsenläger");
        break;
    }
    case 349614:
    {
        returnValue = F("Zum Ochsenrain");
        break;
    }
    case 349615:
    {
        returnValue = F("Zum Ochsenstein");
        break;
    }
    case 349616:
    {
        returnValue = F("Zum Ochsentriftmoor");
        break;
    }
    case 349617:
    {
        returnValue = F("Zum Odenheimer Bach");
        break;
    }
    case 349618:
    {
        returnValue = F("Zum Oder-Havel-Kanal");
        break;
    }
    case 349619:
    {
        returnValue = F("Zum Oderhang");
        break;
    }
    case 349620:
    {
        returnValue = F("Zum Odin");
        break;
    }
    case 349621:
    {
        returnValue = F("Zum Oehrenbach");
        break;
    }
    case 349622:
    {
        returnValue = F("Zum Oelfeld");
        break;
    }
    case 349623:
    {
        returnValue = F("Zum Oelhafen");
        break;
    }
    case 349624:
    {
        returnValue = F("Zum Ofensetzer");
        break;
    }
    case 349625:
    {
        returnValue = F("Zum Offenstall");
        break;
    }
    case 349626:
    {
        returnValue = F("Zum Offerbach");
        break;
    }
    case 349627:
    {
        returnValue = F("Zum Offizierskasino");
        break;
    }
    case 349628:
    {
        returnValue = F("Zum Ohl");
        break;
    }
    case 349629:
    {
        returnValue = F("Zum Ohligsbach");
        break;
    }
    case 349630:
    {
        returnValue = F("Zum Ohmbach");
        break;
    }
    case 349631:
    {
        returnValue = F("Zum Ohmsberg");
        break;
    }
    case 349632:
    {
        returnValue = F("Zum Ohrberg");
        break;
    }
    case 349633:
    {
        returnValue = F("Zum Ohrtal");
        break;
    }
    case 349634:
    {
        returnValue = F("Zum Okerstrand");
        break;
    }
    case 349635:
    {
        returnValue = F("Zum Olbetal");
        break;
    }
    case 349636:
    {
        returnValue = F("Zum Oldehof");
        break;
    }
    case 349637:
    {
        returnValue = F("Zum Ole Heeg");
        break;
    }
    case 349638:
    {
        returnValue = F("Zum Olof-Palme-Ring");
        break;
    }
    case 349639:
    {
        returnValue = F("Zum Olympischen Dorf");
        break;
    }
    case 349640:
    {
        returnValue = F("Zum Ommelstal");
        break;
    }
    case 349641:
    {
        returnValue = F("Zum Opferrain");
        break;
    }
    case 349642:
    {
        returnValue = F("Zum Opferstein");
        break;
    }
    case 349643:
    {
        returnValue = F("Zum Opferteich");
        break;
    }
    case 349644:
    {
        returnValue = F("Zum Orchideenkamp");
        break;
    }
    case 349645:
    {
        returnValue = F("Zum Ordenswald");
        break;
    }
    case 349646:
    {
        returnValue = F("Zum Ordung");
        break;
    }
    case 349647:
    {
        returnValue = F("Zum Orkelsfels");
        break;
    }
    case 349648:
    {
        returnValue = F("Zum Orketal");
        break;
    }
    case 349649:
    {
        returnValue = F("Zum Ortberg");
        break;
    }
    case 349650:
    {
        returnValue = F("Zum Ortenbrink");
        break;
    }
    case 349651:
    {
        returnValue = F("Zum Ortloh");
        break;
    }
    case 349652:
    {
        returnValue = F("Zum Ortsbach");
        break;
    }
    case 349653:
    {
        returnValue = F("Zum Ortsiefen");
        break;
    }
    case 349654:
    {
        returnValue = F("Zum Ortsstruck");
        break;
    }
    case 349655:
    {
        returnValue = F("Zum Ortsteich");
        break;
    }
    case 349656:
    {
        returnValue = F("Zum Ossenkamp");
        break;
    }
    case 349657:
    {
        returnValue = F("Zum Ostbahnhof");
        break;
    }
    case 349658:
    {
        returnValue = F("Zum Ostenberg");
        break;
    }
    case 349659:
    {
        returnValue = F("Zum Ostendorfer Kamp");
        break;
    }
    case 349660:
    {
        returnValue = F("Zum Ostentor");
        break;
    }
    case 349661:
    {
        returnValue = F("Zum Osterbach");
        break;
    }
    case 349662:
    {
        returnValue = F("Zum Osterberg");
        break;
    }
    case 349663:
    {
        returnValue = F("Zum Osterberge");
        break;
    }
    case 349664:
    {
        returnValue = F("Zum Osterborn");
        break;
    }
    case 349665:
    {
        returnValue = F("Zum Osterbrauke");
        break;
    }
    case 349666:
    {
        returnValue = F("Zum Osterbrunnen");
        break;
    }
    case 349667:
    {
        returnValue = F("Zum Osterbrünnele");
        break;
    }
    case 349668:
    {
        returnValue = F("Zum Osteresch");
        break;
    }
    case 349669:
    {
        returnValue = F("Zum Osterfeld");
        break;
    }
    case 349670:
    {
        returnValue = F("Zum Osterfeuer");
        break;
    }
    case 349671:
    {
        returnValue = F("Zum Osterkamp");
        break;
    }
    case 349672:
    {
        returnValue = F("Zum Osterkamp Eisten");
        break;
    }
    case 349673:
    {
        returnValue = F("Zum Ostermoor");
        break;
    }
    case 349674:
    {
        returnValue = F("Zum Ostermoos");
        break;
    }
    case 349675:
    {
        returnValue = F("Zum Osterplatz");
        break;
    }
    case 349676:
    {
        returnValue = F("Zum Ostersiek");
        break;
    }
    case 349677:
    {
        returnValue = F("Zum Osterstein");
        break;
    }
    case 349678:
    {
        returnValue = F("Zum Ostertal");
        break;
    }
    case 349679:
    {
        returnValue = F("Zum Osthorn");
        break;
    }
    case 349680:
    {
        returnValue = F("Zum Ostlandkreuz");
        break;
    }
    case 349681:
    {
        returnValue = F("Zum Ostrasche");
        break;
    }
    case 349682:
    {
        returnValue = F("Zum Ottenberg");
        break;
    }
    case 349683:
    {
        returnValue = F("Zum Ottenhof");
        break;
    }
    case 349684:
    {
        returnValue = F("Zum Otterbach");
        break;
    }
    case 349685:
    {
        returnValue = F("Zum Ottersberg");
        break;
    }
    case 349686:
    {
        returnValue = F("Zum Otterstein");
        break;
    }
    case 349687:
    {
        returnValue = F("Zum Overhagen");
        break;
    }
    case 349688:
    {
        returnValue = F("Zum Overing");
        break;
    }
    case 349689:
    {
        returnValue = F("Zum Paddelteich");
        break;
    }
    case 349690:
    {
        returnValue = F("Zum Pagenberg");
        break;
    }
    case 349691:
    {
        returnValue = F("Zum Pageskampe");
        break;
    }
    case 349692:
    {
        returnValue = F("Zum Pahmberg");
        break;
    }
    case 349693:
    {
        returnValue = F("Zum Palhügel");
        break;
    }
    case 349694:
    {
        returnValue = F("Zum Pallert");
        break;
    }
    case 349695:
    {
        returnValue = F("Zum Palmer Ort");
        break;
    }
    case 349696:
    {
        returnValue = F("Zum Pannenkotten");
        break;
    }
    case 349697:
    {
        returnValue = F("Zum Panoramablick");
        break;
    }
    case 349698:
    {
        returnValue = F("Zum Panzenberg");
        break;
    }
    case 349699:
    {
        returnValue = F("Zum Papenacker");
        break;
    }
    case 349700:
    {
        returnValue = F("Zum Papenberg");
        break;
    }
    case 349701:
    {
        returnValue = F("Zum Papenbrink");
        break;
    }
    case 349702:
    {
        returnValue = F("Zum Papenbruch");
        break;
    }
    case 349703:
    {
        returnValue = F("Zum Papenbusch");
        break;
    }
    case 349704:
    {
        returnValue = F("Zum Papenkamp");
        break;
    }
    case 349705:
    {
        returnValue = F("Zum Papenmoor");
        break;
    }
    case 349706:
    {
        returnValue = F("Zum Papensee");
        break;
    }
    case 349707:
    {
        returnValue = F("Zum Papenteich");
        break;
    }
    case 349708:
    {
        returnValue = F("Zum Pappelberg");
        break;
    }
    case 349709:
    {
        returnValue = F("Zum Pappeldamm");
        break;
    }
    case 349710:
    {
        returnValue = F("Zum Pappelgraben");
        break;
    }
    case 349711:
    {
        returnValue = F("Zum Pappelgrund");
        break;
    }
    case 349712:
    {
        returnValue = F("Zum Pappershof");
        break;
    }
    case 349713:
    {
        returnValue = F("Zum Paradies");
        break;
    }
    case 349714:
    {
        returnValue = F("Zum Park");
        break;
    }
    case 349715:
    {
        returnValue = F("Zum Parkteich");
        break;
    }
    case 349716:
    {
        returnValue = F("Zum Parkweg");
        break;
    }
    case 349717:
    {
        returnValue = F("Zum Parmberg");
        break;
    }
    case 349718:
    {
        returnValue = F("Zum Parrig");
        break;
    }
    case 349719:
    {
        returnValue = F("Zum Parsteinsee");
        break;
    }
    case 349720:
    {
        returnValue = F("Zum Pascheberg");
        break;
    }
    case 349721:
    {
        returnValue = F("Zum Pastorat");
        break;
    }
    case 349722:
    {
        returnValue = F("Zum Pastoratsacker");
        break;
    }
    case 349723:
    {
        returnValue = F("Zum Pastorenbusch");
        break;
    }
    case 349724:
    {
        returnValue = F("Zum Pastorensee");
        break;
    }
    case 349725:
    {
        returnValue = F("Zum Pastorhaus");
        break;
    }
    case 349726:
    {
        returnValue = F("Zum Pastorsweiher");
        break;
    }
    case 349727:
    {
        returnValue = F("Zum Patersoll");
        break;
    }
    case 349728:
    {
        returnValue = F("Zum Paus");
        break;
    }
    case 349729:
    {
        returnValue = F("Zum Pavillon");
        break;
    }
    case 349730:
    {
        returnValue = F("Zum Paßhof");
        break;
    }
    case 349731:
    {
        returnValue = F("Zum Pechofen");
        break;
    }
    case 349732:
    {
        returnValue = F("Zum Peckenkamp");
        break;
    }
    case 349733:
    {
        returnValue = F("Zum Peddenhoek");
        break;
    }
    case 349734:
    {
        returnValue = F("Zum Peenetal");
        break;
    }
    case 349735:
    {
        returnValue = F("Zum Pekenberg");
        break;
    }
    case 349736:
    {
        returnValue = F("Zum Penkertal");
        break;
    }
    case 349737:
    {
        returnValue = F("Zum Perdaukel");
        break;
    }
    case 349738:
    {
        returnValue = F("Zum Perhagen");
        break;
    }
    case 349739:
    {
        returnValue = F("Zum Perk");
        break;
    }
    case 349740:
    {
        returnValue = F("Zum Pesch");
        break;
    }
    case 349741:
    {
        returnValue = F("Zum Peschekamp");
        break;
    }
    case 349742:
    {
        returnValue = F("Zum Peschkensgraben");
        break;
    }
    case 349743:
    {
        returnValue = F("Zum Pestfriedhof");
        break;
    }
    case 349744:
    {
        returnValue = F("Zum Petersacker");
        break;
    }
    case 349745:
    {
        returnValue = F("Zum Petersberg");
        break;
    }
    case 349746:
    {
        returnValue = F("Zum Petersbrunnen");
        break;
    }
    case 349747:
    {
        returnValue = F("Zum Petersdorfer Anger");
        break;
    }
    case 349748:
    {
        returnValue = F("Zum Petzenfeld");
        break;
    }
    case 349749:
    {
        returnValue = F("Zum Pfaffenacker");
        break;
    }
    case 349750:
    {
        returnValue = F("Zum Pfaffenberg");
        break;
    }
    case 349751:
    {
        returnValue = F("Zum Pfaffenborn");
        break;
    }
    case 349752:
    {
        returnValue = F("Zum Pfaffengrund");
        break;
    }
    case 349753:
    {
        returnValue = F("Zum Pfaffenhof");
        break;
    }
    case 349754:
    {
        returnValue = F("Zum Pfaffenmal");
        break;
    }
    case 349755:
    {
        returnValue = F("Zum Pfaffensteg");
        break;
    }
    case 349756:
    {
        returnValue = F("Zum Pfaffenstrauch");
        break;
    }
    case 349757:
    {
        returnValue = F("Zum Pfaffental");
        break;
    }
    case 349758:
    {
        returnValue = F("Zum Pfaffenweiher");
        break;
    }
    case 349759:
    {
        returnValue = F("Zum Pfafftal");
        break;
    }
    case 349760:
    {
        returnValue = F("Zum Pfahl");
        break;
    }
    case 349761:
    {
        returnValue = F("Zum Pfahlberg");
        break;
    }
    case 349762:
    {
        returnValue = F("Zum Pfahlgraben");
        break;
    }
    case 349763:
    {
        returnValue = F("Zum Pfahlkreuz");
        break;
    }
    case 349764:
    {
        returnValue = F("Zum Pfahlweiher");
        break;
    }
    case 349765:
    {
        returnValue = F("Zum Pfannenstiel");
        break;
    }
    case 349766:
    {
        returnValue = F("Zum Pfarracker");
        break;
    }
    case 349767:
    {
        returnValue = F("Zum Pfarrboden");
        break;
    }
    case 349768:
    {
        returnValue = F("Zum Pfarrgarten");
        break;
    }
    case 349769:
    {
        returnValue = F("Zum Pfarrgraben");
        break;
    }
    case 349770:
    {
        returnValue = F("Zum Pfarrgrund");
        break;
    }
    case 349771:
    {
        returnValue = F("Zum Pfarrhag");
        break;
    }
    case 349772:
    {
        returnValue = F("Zum Pfarrhaus");
        break;
    }
    case 349773:
    {
        returnValue = F("Zum Pfarrhof");
        break;
    }
    case 349774:
    {
        returnValue = F("Zum Pfarrlehen");
        break;
    }
    case 349775:
    {
        returnValue = F("Zum Pfarrturm");
        break;
    }
    case 349776:
    {
        returnValue = F("Zum Pfarrwald");
        break;
    }
    case 349777:
    {
        returnValue = F("Zum Pfarrwäldchen");
        break;
    }
    case 349778:
    {
        returnValue = F("Zum Pfauenturm");
        break;
    }
    case 349779:
    {
        returnValue = F("Zum Pfeifer");
        break;
    }
    case 349780:
    {
        returnValue = F("Zum Pfeifferberg");
        break;
    }
    case 349781:
    {
        returnValue = F("Zum Pferdeberg");
        break;
    }
    case 349782:
    {
        returnValue = F("Zum Pferdehagen");
        break;
    }
    case 349783:
    {
        returnValue = F("Zum Pferdehof");
        break;
    }
    case 349784:
    {
        returnValue = F("Zum Pferdemarkt");
        break;
    }
    case 349785:
    {
        returnValue = F("Zum Pferderied");
        break;
    }
    case 349786:
    {
        returnValue = F("Zum Pferderieth");
        break;
    }
    case 349787:
    {
        returnValue = F("Zum Pferdetal");
        break;
    }
    case 349788:
    {
        returnValue = F("Zum Pfieffer Berg");
        break;
    }
    case 349789:
    {
        returnValue = F("Zum Pfieffrain");
        break;
    }
    case 349790:
    {
        returnValue = F("Zum Pfiff");
        break;
    }
    case 349791:
    {
        returnValue = F("Zum Pfingstanger");
        break;
    }
    case 349792:
    {
        returnValue = F("Zum Pfingstberg");
        break;
    }
    case 349793:
    {
        returnValue = F("Zum Pfingstborn");
        break;
    }
    case 349794:
    {
        returnValue = F("Zum Pfingstbuckel");
        break;
    }
    case 349795:
    {
        returnValue = F("Zum Pfingstgraben");
        break;
    }
    case 349796:
    {
        returnValue = F("Zum Pflanzgarten");
        break;
    }
    case 349797:
    {
        returnValue = F("Zum Pflugberg");
        break;
    }
    case 349798:
    {
        returnValue = F("Zum Pflästerling");
        break;
    }
    case 349799:
    {
        returnValue = F("Zum Pfohlacker");
        break;
    }
    case 349800:
    {
        returnValue = F("Zum Pfortacker");
        break;
    }
    case 349801:
    {
        returnValue = F("Zum Pförtchen");
        break;
    }
    case 349802:
    {
        returnValue = F("Zum Pfützenteich");
        break;
    }
    case 349803:
    {
        returnValue = F("Zum Philippsgarten");
        break;
    }
    case 349804:
    {
        returnValue = F("Zum Pickenrech");
        break;
    }
    case 349805:
    {
        returnValue = F("Zum Piepenkerl");
        break;
    }
    case 349806:
    {
        returnValue = F("Zum Piepenmoor");
        break;
    }
    case 349807:
    {
        returnValue = F("Zum Pier");
        break;
    }
    case 349808:
    {
        returnValue = F("Zum Pilgerspfad");
        break;
    }
    case 349809:
    {
        returnValue = F("Zum Pilgerweg");
        break;
    }
    case 349810:
    {
        returnValue = F("Zum Pilgram");
        break;
    }
    case 349811:
    {
        returnValue = F("Zum Pilsterhof");
        break;
    }
    case 349812:
    {
        returnValue = F("Zum Pinzigberg");
        break;
    }
    case 349813:
    {
        returnValue = F("Zum Pionierlager");
        break;
    }
    case 349814:
    {
        returnValue = F("Zum Pionierpark");
        break;
    }
    case 349815:
    {
        returnValue = F("Zum Piraten");
        break;
    }
    case 349816:
    {
        returnValue = F("Zum Pitschgrund");
        break;
    }
    case 349817:
    {
        returnValue = F("Zum Pivitsfeld");
        break;
    }
    case 349818:
    {
        returnValue = F("Zum Placken");
        break;
    }
    case 349819:
    {
        returnValue = F("Zum Plan");
        break;
    }
    case 349820:
    {
        returnValue = F("Zum Planetarium");
        break;
    }
    case 349821:
    {
        returnValue = F("Zum Planfließ");
        break;
    }
    case 349822:
    {
        returnValue = F("Zum Planitzwald");
        break;
    }
    case 349823:
    {
        returnValue = F("Zum Planteurhaus");
        break;
    }
    case 349824:
    {
        returnValue = F("Zum Plasskamp");
        break;
    }
    case 349825:
    {
        returnValue = F("Zum Plasten");
        break;
    }
    case 349826:
    {
        returnValue = F("Zum Platenau");
        break;
    }
    case 349827:
    {
        returnValue = F("Zum Plattenberg");
        break;
    }
    case 349828:
    {
        returnValue = F("Zum Plattenhof");
        break;
    }
    case 349829:
    {
        returnValue = F("Zum Plattenteich");
        break;
    }
    case 349830:
    {
        returnValue = F("Zum Plauderbaum");
        break;
    }
    case 349831:
    {
        returnValue = F("Zum Plaßfeld");
        break;
    }
    case 349832:
    {
        returnValue = F("Zum Pless");
        break;
    }
    case 349833:
    {
        returnValue = F("Zum Pleßbach");
        break;
    }
    case 349834:
    {
        returnValue = F("Zum Pleßkamp");
        break;
    }
    case 349835:
    {
        returnValue = F("Zum Plietenberger Moor");
        break;
    }
    case 349836:
    {
        returnValue = F("Zum Plom");
        break;
    }
    case 349837:
    {
        returnValue = F("Zum Plümer");
        break;
    }
    case 349838:
    {
        returnValue = F("Zum Pocheweiher");
        break;
    }
    case 349839:
    {
        returnValue = F("Zum Poetenweg");
        break;
    }
    case 349840:
    {
        returnValue = F("Zum Poggenpfuhl");
        break;
    }
    case 349841:
    {
        returnValue = F("Zum Poggenpoel");
        break;
    }
    case 349842:
    {
        returnValue = F("Zum Poggenpohlsand");
        break;
    }
    case 349843:
    {
        returnValue = F("Zum Poggenpohlsmoor");
        break;
    }
    case 349844:
    {
        returnValue = F("Zum Pohl");
        break;
    }
    case 349845:
    {
        returnValue = F("Zum Poisenwald");
        break;
    }
    case 349846:
    {
        returnValue = F("Zum Poll");
        break;
    }
    case 349847:
    {
        returnValue = F("Zum Polle");
        break;
    }
    case 349848:
    {
        returnValue = F("Zum Poller");
        break;
    }
    case 349849:
    {
        returnValue = F("Zum Pollhof");
        break;
    }
    case 349850:
    {
        returnValue = F("Zum Ponnholz");
        break;
    }
    case 349851:
    {
        returnValue = F("Zum Poppschen Gut");
        break;
    }
    case 349852:
    {
        returnValue = F("Zum Portsmouthplatz");
        break;
    }
    case 349853:
    {
        returnValue = F("Zum Postbotensteig");
        break;
    }
    case 349854:
    {
        returnValue = F("Zum Postbruch");
        break;
    }
    case 349855:
    {
        returnValue = F("Zum Postbühl");
        break;
    }
    case 349856:
    {
        returnValue = F("Zum Postweg");
        break;
    }
    case 349857:
    {
        returnValue = F("Zum Postweiher");
        break;
    }
    case 349858:
    {
        returnValue = F("Zum Pott Diek");
        break;
    }
    case 349859:
    {
        returnValue = F("Zum Pottberg");
        break;
    }
    case 349860:
    {
        returnValue = F("Zum Predigtstuhl");
        break;
    }
    case 349861:
    {
        returnValue = F("Zum Preußenkopf");
        break;
    }
    case 349862:
    {
        returnValue = F("Zum Priesterberg");
        break;
    }
    case 349863:
    {
        returnValue = F("Zum Priestergraben");
        break;
    }
    case 349864:
    {
        returnValue = F("Zum Primsbach");
        break;
    }
    case 349865:
    {
        returnValue = F("Zum Prinzendamm");
        break;
    }
    case 349866:
    {
        returnValue = F("Zum Prinzenwäldchen");
        break;
    }
    case 349867:
    {
        returnValue = F("Zum Prinzgärtchen");
        break;
    }
    case 349868:
    {
        returnValue = F("Zum Prosperpark");
        break;
    }
    case 349869:
    {
        returnValue = F("Zum Prumenbrink");
        break;
    }
    case 349870:
    {
        returnValue = F("Zum Pröpstinghof");
        break;
    }
    case 349871:
    {
        returnValue = F("Zum Puddelhammer");
        break;
    }
    case 349872:
    {
        returnValue = F("Zum Puddelwerk");
        break;
    }
    case 349873:
    {
        returnValue = F("Zum Puhlbruch");
        break;
    }
    case 349874:
    {
        returnValue = F("Zum Pulheimer Bach");
        break;
    }
    case 349875:
    {
        returnValue = F("Zum Pulverberg");
        break;
    }
    case 349876:
    {
        returnValue = F("Zum Pulverrain");
        break;
    }
    case 349877:
    {
        returnValue = F("Zum Pulverturm");
        break;
    }
    case 349878:
    {
        returnValue = F("Zum Pumpenhaus");
        break;
    }
    case 349879:
    {
        returnValue = F("Zum Pumpwerk");
        break;
    }
    case 349880:
    {
        returnValue = F("Zum Purren");
        break;
    }
    case 349881:
    {
        returnValue = F("Zum Puttenholz");
        break;
    }
    case 349882:
    {
        returnValue = F("Zum Pyer Moor");
        break;
    }
    case 349883:
    {
        returnValue = F("Zum Pöhlbergblick");
        break;
    }
    case 349884:
    {
        returnValue = F("Zum Pölz");
        break;
    }
    case 349885:
    {
        returnValue = F("Zum Pön");
        break;
    }
    case 349886:
    {
        returnValue = F("Zum Püchitz");
        break;
    }
    case 349887:
    {
        returnValue = F("Zum Pütter See");
        break;
    }
    case 349888:
    {
        returnValue = F("Zum Pütz");
        break;
    }
    case 349889:
    {
        returnValue = F("Zum Pützberg");
        break;
    }
    case 349890:
    {
        returnValue = F("Zum Quaaler Hof");
        break;
    }
    case 349891:
    {
        returnValue = F("Zum Quaduxenbarg");
        break;
    }
    case 349892:
    {
        returnValue = F("Zum Queckenberg");
        break;
    }
    case 349893:
    {
        returnValue = F("Zum Queichanger");
        break;
    }
    case 349894:
    {
        returnValue = F("Zum Queienberg");
        break;
    }
    case 349895:
    {
        returnValue = F("Zum Quellenberg");
        break;
    }
    case 349896:
    {
        returnValue = F("Zum Quellenpark");
        break;
    }
    case 349897:
    {
        returnValue = F("Zum Quellental");
        break;
    }
    case 349898:
    {
        returnValue = F("Zum Quellmühlenbach");
        break;
    }
    case 349899:
    {
        returnValue = F("Zum Quellsee");
        break;
    }
    case 349900:
    {
        returnValue = F("Zum Quengel");
        break;
    }
    case 349901:
    {
        returnValue = F("Zum Quenzsee");
        break;
    }
    case 349902:
    {
        returnValue = F("Zum Querdamm");
        break;
    }
    case 349903:
    {
        returnValue = F("Zum Querhoop");
        break;
    }
    case 349904:
    {
        returnValue = F("Zum Querland");
        break;
    }
    case 349905:
    {
        returnValue = F("Zum Quillow");
        break;
    }
    case 349906:
    {
        returnValue = F("Zum Quirinsborn");
        break;
    }
    case 349907:
    {
        returnValue = F("Zum Quirl");
        break;
    }
    case 349908:
    {
        returnValue = F("Zum Quitzdorfer See");
        break;
    }
    case 349909:
    {
        returnValue = F("Zum Rabenberg");
        break;
    }
    case 349910:
    {
        returnValue = F("Zum Rabenfels");
        break;
    }
    case 349911:
    {
        returnValue = F("Zum Rabenhain");
        break;
    }
    case 349912:
    {
        returnValue = F("Zum Rabenstein");
        break;
    }
    case 349913:
    {
        returnValue = F("Zum Rachel");
        break;
    }
    case 349914:
    {
        returnValue = F("Zum Rachental");
        break;
    }
    case 349915:
    {
        returnValue = F("Zum Rackither Sportplatz");
        break;
    }
    case 349916:
    {
        returnValue = F("Zum Rad");
        break;
    }
    case 349917:
    {
        returnValue = F("Zum Radbaum");
        break;
    }
    case 349918:
    {
        returnValue = F("Zum Radberg");
        break;
    }
    case 349919:
    {
        returnValue = F("Zum Radeberg");
        break;
    }
    case 349920:
    {
        returnValue = F("Zum Radeck");
        break;
    }
    case 349921:
    {
        returnValue = F("Zum Rademächen");
        break;
    }
    case 349922:
    {
        returnValue = F("Zum Raden");
        break;
    }
    case 349923:
    {
        returnValue = F("Zum Radstein");
        break;
    }
    case 349924:
    {
        returnValue = F("Zum Rah");
        break;
    }
    case 349925:
    {
        returnValue = F("Zum Rahen");
        break;
    }
    case 349926:
    {
        returnValue = F("Zum Rahn");
        break;
    }
    case 349927:
    {
        returnValue = F("Zum Rain");
        break;
    }
    case 349928:
    {
        returnValue = F("Zum Rainberg");
        break;
    }
    case 349929:
    {
        returnValue = F("Zum Rainsborn");
        break;
    }
    case 349930:
    {
        returnValue = F("Zum Ralandsmoor");
        break;
    }
    case 349931:
    {
        returnValue = F("Zum Ramberg");
        break;
    }
    case 349932:
    {
        returnValue = F("Zum Raming");
        break;
    }
    case 349933:
    {
        returnValue = F("Zum Rampendahl");
        break;
    }
    case 349934:
    {
        returnValue = F("Zum Rangengrund");
        break;
    }
    case 349935:
    {
        returnValue = F("Zum Raschauer Grund");
        break;
    }
    case 349936:
    {
        returnValue = F("Zum Rasenberg");
        break;
    }
    case 349937:
    {
        returnValue = F("Zum Rastel");
        break;
    }
    case 349938:
    {
        returnValue = F("Zum Rasthof A 9");
        break;
    }
    case 349939:
    {
        returnValue = F("Zum Ratberg");
        break;
    }
    case 349940:
    {
        returnValue = F("Zum Rathaus");
        break;
    }
    case 349941:
    {
        returnValue = F("Zum Ratswäldchen");
        break;
    }
    case 349942:
    {
        returnValue = F("Zum Raubertsborn");
        break;
    }
    case 349943:
    {
        returnValue = F("Zum Rauenhübel");
        break;
    }
    case 349944:
    {
        returnValue = F("Zum Rauert");
        break;
    }
    case 349945:
    {
        returnValue = F("Zum Rauhbrunnen");
        break;
    }
    case 349946:
    {
        returnValue = F("Zum Rauhen Berg");
        break;
    }
    case 349947:
    {
        returnValue = F("Zum Rauhen Brauke");
        break;
    }
    case 349948:
    {
        returnValue = F("Zum Rauhen Hahn");
        break;
    }
    case 349949:
    {
        returnValue = F("Zum Rauhen Luch");
        break;
    }
    case 349950:
    {
        returnValue = F("Zum Rauhen See");
        break;
    }
    case 349951:
    {
        returnValue = F("Zum Raukler");
        break;
    }
    case 349952:
    {
        returnValue = F("Zum Raumwäldchen");
        break;
    }
    case 349953:
    {
        returnValue = F("Zum Raupenborn");
        break;
    }
    case 349954:
    {
        returnValue = F("Zum Rauschberg");
        break;
    }
    case 349955:
    {
        returnValue = F("Zum Rauwald");
        break;
    }
    case 349956:
    {
        returnValue = F("Zum Ravenhorst");
        break;
    }
    case 349957:
    {
        returnValue = F("Zum Ravensberg");
        break;
    }
    case 349958:
    {
        returnValue = F("Zum Raßberg");
        break;
    }
    case 349959:
    {
        returnValue = F("Zum Rebberg");
        break;
    }
    case 349960:
    {
        returnValue = F("Zum Rebbergweg");
        break;
    }
    case 349961:
    {
        returnValue = F("Zum Rebstockbad");
        break;
    }
    case 349962:
    {
        returnValue = F("Zum Rebösch");
        break;
    }
    case 349963:
    {
        returnValue = F("Zum Rech");
        break;
    }
    case 349964:
    {
        returnValue = F("Zum Rechberg");
        break;
    }
    case 349965:
    {
        returnValue = F("Zum Rechen");
        break;
    }
    case 349966:
    {
        returnValue = F("Zum Rechenberg");
        break;
    }
    case 349967:
    {
        returnValue = F("Zum Recken");
        break;
    }
    case 349968:
    {
        returnValue = F("Zum Reckhammer");
        break;
    }
    case 349969:
    {
        returnValue = F("Zum Recknitztal");
        break;
    }
    case 349970:
    {
        returnValue = F("Zum Redder");
        break;
    }
    case 349971:
    {
        returnValue = F("Zum Reetgaar");
        break;
    }
    case 349972:
    {
        returnValue = F("Zum Reetmoor");
        break;
    }
    case 349973:
    {
        returnValue = F("Zum Regen");
        break;
    }
    case 349974:
    {
        returnValue = F("Zum Regiopark");
        break;
    }
    case 349975:
    {
        returnValue = F("Zum Rehberg");
        break;
    }
    case 349976:
    {
        returnValue = F("Zum Rehbergle");
        break;
    }
    case 349977:
    {
        returnValue = F("Zum Rehblick");
        break;
    }
    case 349978:
    {
        returnValue = F("Zum Rehbusch");
        break;
    }
    case 349979:
    {
        returnValue = F("Zum Rehbüchel");
        break;
    }
    case 349980:
    {
        returnValue = F("Zum Rehkopf");
        break;
    }
    case 349981:
    {
        returnValue = F("Zum Rehkreuz");
        break;
    }
    case 349982:
    {
        returnValue = F("Zum Rehlengraben");
        break;
    }
    case 349983:
    {
        returnValue = F("Zum Rehlos");
        break;
    }
    case 349984:
    {
        returnValue = F("Zum Rehm");
        break;
    }
    case 349985:
    {
        returnValue = F("Zum Rehmer Eck");
        break;
    }
    case 349986:
    {
        returnValue = F("Zum Rehmsee");
        break;
    }
    case 349987:
    {
        returnValue = F("Zum Rehnberg");
        break;
    }
    case 349988:
    {
        returnValue = F("Zum Rehsiek");
        break;
    }
    case 349989:
    {
        returnValue = F("Zum Reiderbach");
        break;
    }
    case 349990:
    {
        returnValue = F("Zum Reiherbruch");
        break;
    }
    case 349991:
    {
        returnValue = F("Zum Reiherhorst");
        break;
    }
    case 349992:
    {
        returnValue = F("Zum Reihersrech");
        break;
    }
    case 349993:
    {
        returnValue = F("Zum Reiherstand");
        break;
    }
    case 349994:
    {
        returnValue = F("Zum Reiperts");
        break;
    }
    case 349995:
    {
        returnValue = F("Zum Reisberg");
        break;
    }
    case 349996:
    {
        returnValue = F("Zum Reistenberg");
        break;
    }
    case 349997:
    {
        returnValue = F("Zum Reiterbruch");
        break;
    }
    case 349998:
    {
        returnValue = F("Zum Reiterhof");
        break;
    }
    case 349999:
    {
        returnValue = F("Zum Reiterweg");
        break;
    }
    case 350000:
    {
        returnValue = F("Zum Reith");
        break;
    }
    case 350001:
    {
        returnValue = F("Zum Reitplatz");
        break;
    }
    case 350002:
    {
        returnValue = F("Zum Reitsiek");
        break;
    }
    case 350003:
    {
        returnValue = F("Zum Reitstall");
        break;
    }
    case 350004:
    {
        returnValue = F("Zum Reitweg");
        break;
    }
    case 350005:
    {
        returnValue = F("Zum Reitzenberg");
        break;
    }
    case 350006:
    {
        returnValue = F("Zum Reizen");
        break;
    }
    case 350007:
    {
        returnValue = F("Zum Remberg");
        break;
    }
    case 350008:
    {
        returnValue = F("Zum Remel");
        break;
    }
    case 350009:
    {
        returnValue = F("Zum Remstal");
        break;
    }
    case 350010:
    {
        returnValue = F("Zum Rendel");
        break;
    }
    case 350011:
    {
        returnValue = F("Zum Rengelden");
        break;
    }
    case 350012:
    {
        returnValue = F("Zum Rennebach");
        break;
    }
    case 350013:
    {
        returnValue = F("Zum Rennefeld");
        break;
    }
    case 350014:
    {
        returnValue = F("Zum Rennerkreuz");
        break;
    }
    case 350015:
    {
        returnValue = F("Zum Renneshof");
        break;
    }
    case 350016:
    {
        returnValue = F("Zum Renngraben");
        break;
    }
    case 350017:
    {
        returnValue = F("Zum Rennplatz");
        break;
    }
    case 350018:
    {
        returnValue = F("Zum Rennsteig");
        break;
    }
    case 350019:
    {
        returnValue = F("Zum Rental");
        break;
    }
    case 350020:
    {
        returnValue = F("Zum Reppin");
        break;
    }
    case 350021:
    {
        returnValue = F("Zum Resborn");
        break;
    }
    case 350022:
    {
        returnValue = F("Zum Resthof");
        break;
    }
    case 350023:
    {
        returnValue = F("Zum Reutacker");
        break;
    }
    case 350024:
    {
        returnValue = F("Zum Reutebach");
        break;
    }
    case 350025:
    {
        returnValue = F("Zum Reuteholz");
        break;
    }
    case 350026:
    {
        returnValue = F("Zum Reuteplatz");
        break;
    }
    case 350027:
    {
        returnValue = F("Zum Reuter");
        break;
    }
    case 350028:
    {
        returnValue = F("Zum Reuteranger");
        break;
    }
    case 350029:
    {
        returnValue = F("Zum Reuterbusch");
        break;
    }
    case 350030:
    {
        returnValue = F("Zum Reuthsee");
        break;
    }
    case 350031:
    {
        returnValue = F("Zum Reygers Hof");
        break;
    }
    case 350032:
    {
        returnValue = F("Zum Rhaland");
        break;
    }
    case 350033:
    {
        returnValue = F("Zum Rhein");
        break;
    }
    case 350034:
    {
        returnValue = F("Zum Rhein-Main-Donau-Kanal");
        break;
    }
    case 356746:
    {
        returnValue = F("z.Z. nicht begehbar wegen umgestürzter Bäume");
        break;
    }
    case 356747:
    {
        returnValue = F("zu Kalmreuth");
        break;
    }
    case 356748:
    {
        returnValue = F("zu Rathausstr.");
        break;
    }
    case 356749:
    {
        returnValue = F("zu den Römerhöfen");
        break;
    }
    case 356750:
    {
        returnValue = F("zufahrt Lange Reute Str.");
        break;
    }
    case 356751:
    {
        returnValue = F("zugang Pfarrbüro");
        break;
    }
    case 356752:
    {
        returnValue = F("zugewachsen");
        break;
    }
    case 356753:
    {
        returnValue = F("zum Ankenbuck");
        break;
    }
    case 356754:
    {
        returnValue = F("zum Campingplatz");
        break;
    }
    case 356755:
    {
        returnValue = F("zum Erzweg");
        break;
    }
    case 356756:
    {
        returnValue = F("zum Fetzerbrunnen");
        break;
    }
    case 356757:
    {
        returnValue = F("zum Friedhof");
        break;
    }
    case 356758:
    {
        returnValue = F("zum Ginsterweg");
        break;
    }
    case 356759:
    {
        returnValue = F("zum Gipfelkreuz");
        break;
    }
    case 356760:
    {
        returnValue = F("zum Modellflugplatz");
        break;
    }
    case 356761:
    {
        returnValue = F("zum Riewendsee");
        break;
    }
    case 356762:
    {
        returnValue = F("zum Ringwall");
        break;
    }
    case 356763:
    {
        returnValue = F("zum Rodelhang");
        break;
    }
    case 356764:
    {
        returnValue = F("zum Steinbruch");
        break;
    }
    case 356765:
    {
        returnValue = F("zum Stieberweg");
        break;
    }
    case 356766:
    {
        returnValue = F("zum Submissionsplatz");
        break;
    }
    case 356767:
    {
        returnValue = F("zum Ulmtal");
        break;
    }
    case 356768:
    {
        returnValue = F("zum Wiesengrund");
        break;
    }
    case 356769:
    {
        returnValue = F("zur Alm");
        break;
    }
    case 356770:
    {
        returnValue = F("zur Badestelle");
        break;
    }
    case 356771:
    {
        returnValue = F("zur Florian Hütte");
        break;
    }
    case 356772:
    {
        returnValue = F("zur Helle");
        break;
    }
    case 356773:
    {
        returnValue = F("zur Hindenburgstr.");
        break;
    }
    case 356774:
    {
        returnValue = F("zur Huysburg");
        break;
    }
    case 356775:
    {
        returnValue = F("zur Juchhöh");
        break;
    }
    case 356776:
    {
        returnValue = F("zur Katzbrui-Mühle");
        break;
    }
    case 356777:
    {
        returnValue = F("zur Kirchenallee");
        break;
    }
    case 356778:
    {
        returnValue = F("zur Königsmarckstr.");
        break;
    }
    case 356779:
    {
        returnValue = F("zur Montfortstr.");
        break;
    }
    case 356780:
    {
        returnValue = F("zur Selkemündung");
        break;
    }
    case 356781:
    {
        returnValue = F("zur Sommerrodelbahn");
        break;
    }
    case 356782:
    {
        returnValue = F("zur Steinfurter Hauptstr.");
        break;
    }
    case 356783:
    {
        returnValue = F("zur Steinfurther Hauptstr.");
        break;
    }
    case 356784:
    {
        returnValue = F("zur Steinfurther Rosen-Union");
        break;
    }
    case 356785:
    {
        returnValue = F("zur Trift");
        break;
    }
    case 356786:
    {
        returnValue = F("zur Urbanstr.");
        break;
    }
    case 356787:
    {
        returnValue = F("zur Villa");
        break;
    }
    case 356788:
    {
        returnValue = F("zur ehem. Starkenmühle");
        break;
    }
    case 356789:
    {
        returnValue = F("zur schönen Aussicht");
        break;
    }
    case 356790:
    {
        returnValue = F("zweiter Heuweg");
        break;
    }
    case 356791:
    {
        returnValue = F("zwischen den Türmen");
        break;
    }
    case 356792:
    {
        returnValue = F("zwischerfeller");
        break;
    }
    }
    return returnValue;
}
