#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameH4(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 150015:
    {
        returnValue = F("Hopfengäßchen");
        break;
    }
    case 150016:
    {
        returnValue = F("Hopfenheller Str.");
        break;
    }
    case 150017:
    {
        returnValue = F("Hopfenhof");
        break;
    }
    case 150018:
    {
        returnValue = F("Hopfenhofstr.");
        break;
    }
    case 150019:
    {
        returnValue = F("Hopfenhofweg");
        break;
    }
    case 150020:
    {
        returnValue = F("Hopfenhoher Str.");
        break;
    }
    case 150021:
    {
        returnValue = F("Hopfenhorst");
        break;
    }
    case 150022:
    {
        returnValue = F("Hopfenhorster Str.");
        break;
    }
    case 150023:
    {
        returnValue = F("Hopfenhöfe");
        break;
    }
    case 150024:
    {
        returnValue = F("Hopfenkamp");
        break;
    }
    case 150025:
    {
        returnValue = F("Hopfenkampweg");
        break;
    }
    case 150026:
    {
        returnValue = F("Hopfenkrug");
        break;
    }
    case 150027:
    {
        returnValue = F("Hopfenkuhle");
        break;
    }
    case 150028:
    {
        returnValue = F("Hopfenleite");
        break;
    }
    case 150029:
    {
        returnValue = F("Hopfenleithe");
        break;
    }
    case 150030:
    {
        returnValue = F("Hopfenlohestr.");
        break;
    }
    case 150031:
    {
        returnValue = F("Hopfenmarkt");
        break;
    }
    case 150032:
    {
        returnValue = F("Hopfenmühle");
        break;
    }
    case 150033:
    {
        returnValue = F("Hopfenoher Str.");
        break;
    }
    case 150034:
    {
        returnValue = F("Hopfenrebe");
        break;
    }
    case 150035:
    {
        returnValue = F("Hopfenring");
        break;
    }
    case 150036:
    {
        returnValue = F("Hopfenröthe");
        break;
    }
    case 150037:
    {
        returnValue = F("Hopfenseestr.");
        break;
    }
    case 150038:
    {
        returnValue = F("Hopfensoll");
        break;
    }
    case 150039:
    {
        returnValue = F("Hopfenspirg");
        break;
    }
    case 150040:
    {
        returnValue = F("Hopfensteg");
        break;
    }
    case 150041:
    {
        returnValue = F("Hopfensteig");
        break;
    }
    case 150042:
    {
        returnValue = F("Hopfensteige");
        break;
    }
    case 150043:
    {
        returnValue = F("Hopfenstieg");
        break;
    }
    case 150044:
    {
        returnValue = F("Hopfenstr.");
        break;
    }
    case 150045:
    {
        returnValue = F("Hopfenstück");
        break;
    }
    case 150046:
    {
        returnValue = F("Hopfental");
        break;
    }
    case 150047:
    {
        returnValue = F("Hopfentunnel");
        break;
    }
    case 150048:
    {
        returnValue = F("Hopfentwete");
        break;
    }
    case 150049:
    {
        returnValue = F("Hopfenweg");
        break;
    }
    case 150050:
    {
        returnValue = F("Hopfenweilerweg");
        break;
    }
    case 150051:
    {
        returnValue = F("Hopfenwiese");
        break;
    }
    case 150052:
    {
        returnValue = F("Hopfenwiesenweg");
        break;
    }
    case 150053:
    {
        returnValue = F("Hopfenwinkel");
        break;
    }
    case 150054:
    {
        returnValue = F("Hopfenzaun");
        break;
    }
    case 150055:
    {
        returnValue = F("Hopfenzell");
        break;
    }
    case 150056:
    {
        returnValue = F("Hopfenäcker");
        break;
    }
    case 150057:
    {
        returnValue = F("Hopferbacher Str.");
        break;
    }
    case 150058:
    {
        returnValue = F("Hopferstadter Str.");
        break;
    }
    case 150059:
    {
        returnValue = F("Hopferstr.");
        break;
    }
    case 150060:
    {
        returnValue = F("Hopfgarten");
        break;
    }
    case 150061:
    {
        returnValue = F("Hopfgartenbrücke");
        break;
    }
    case 150062:
    {
        returnValue = F("Hopfgartener Str.");
        break;
    }
    case 150063:
    {
        returnValue = F("Hopfgartener Weg");
        break;
    }
    case 150064:
    {
        returnValue = F("Hopfgartenstr.");
        break;
    }
    case 150065:
    {
        returnValue = F("Hopfgartenweg");
        break;
    }
    case 150066:
    {
        returnValue = F("Hopfgasse");
        break;
    }
    case 150067:
    {
        returnValue = F("Hopfmannsfelder Str.");
        break;
    }
    case 150068:
    {
        returnValue = F("Hopfner-Feld");
        break;
    }
    case 150069:
    {
        returnValue = F("Hopfnerweg");
        break;
    }
    case 150070:
    {
        returnValue = F("Hopfweg");
        break;
    }
    case 150071:
    {
        returnValue = F("Hopfwiesenweg");
        break;
    }
    case 150072:
    {
        returnValue = F("Hopgarten");
        break;
    }
    case 150073:
    {
        returnValue = F("Hopkamp");
        break;
    }
    case 150074:
    {
        returnValue = F("Hopmannweg");
        break;
    }
    case 150075:
    {
        returnValue = F("Hoppberg");
        break;
    }
    case 150076:
    {
        returnValue = F("Hoppe");
        break;
    }
    case 150077:
    {
        returnValue = F("Hoppebergstr.");
        break;
    }
    case 150078:
    {
        returnValue = F("Hoppebergweg");
        break;
    }
    case 150079:
    {
        returnValue = F("Hoppecke-Berg");
        break;
    }
    case 150080:
    {
        returnValue = F("Hoppecker Str.");
        break;
    }
    case 150081:
    {
        returnValue = F("Hoppeckestr.");
        break;
    }
    case 150082:
    {
        returnValue = F("Hoppecketalstr.");
        break;
    }
    case 150083:
    {
        returnValue = F("Hoppeditz-Allee");
        break;
    }
    case 150084:
    {
        returnValue = F("Hoppegarten");
        break;
    }
    case 150085:
    {
        returnValue = F("Hoppegartener Str.");
        break;
    }
    case 150086:
    {
        returnValue = F("Hoppegartenring");
        break;
    }
    case 150087:
    {
        returnValue = F("Hoppekatsweg");
        break;
    }
    case 150088:
    {
        returnValue = F("Hoppelberg");
        break;
    }
    case 150089:
    {
        returnValue = F("Hoppelberg-Kammwanderweg");
        break;
    }
    case 150090:
    {
        returnValue = F("Hoppelbergweg");
        break;
    }
    case 150091:
    {
        returnValue = F("Hoppeleshaldestr.");
        break;
    }
    case 150092:
    {
        returnValue = F("Hoppelesklingensträßchen");
        break;
    }
    case 150093:
    {
        returnValue = F("Hoppelgasse");
        break;
    }
    case 150094:
    {
        returnValue = F("Hoppenbarg");
        break;
    }
    case 150095:
    {
        returnValue = F("Hoppenberg");
        break;
    }
    case 150096:
    {
        returnValue = F("Hoppenberger Weg");
        break;
    }
    case 150097:
    {
        returnValue = F("Hoppenbergweg");
        break;
    }
    case 150098:
    {
        returnValue = F("Hoppenbichlerstr.");
        break;
    }
    case 150099:
    {
        returnValue = F("Hoppenbichlstr.");
        break;
    }
    case 150100:
    {
        returnValue = F("Hoppenbrook");
        break;
    }
    case 150101:
    {
        returnValue = F("Hoppenfeld");
        break;
    }
    case 150102:
    {
        returnValue = F("Hoppengarten");
        break;
    }
    case 150103:
    {
        returnValue = F("Hoppengartener Str.");
        break;
    }
    case 150104:
    {
        returnValue = F("Hoppengasse");
        break;
    }
    case 150105:
    {
        returnValue = F("Hoppengrabenstr.");
        break;
    }
    case 150106:
    {
        returnValue = F("Hoppengrund");
        break;
    }
    case 150107:
    {
        returnValue = F("Hoppenhardter Weg");
        break;
    }
    case 150108:
    {
        returnValue = F("Hoppenhof");
        break;
    }
    case 150109:
    {
        returnValue = F("Hoppenhofweg");
        break;
    }
    case 150110:
    {
        returnValue = F("Hoppenhuus");
        break;
    }
    case 150111:
    {
        returnValue = F("Hoppenkamp");
        break;
    }
    case 150112:
    {
        returnValue = F("Hoppenmeer");
        break;
    }
    case 150113:
    {
        returnValue = F("Hoppenrader Allee");
        break;
    }
    case 150114:
    {
        returnValue = F("Hoppenrader Str.");
        break;
    }
    case 150115:
    {
        returnValue = F("Hoppenrader Weg");
        break;
    }
    case 150116:
    {
        returnValue = F("Hoppenradweg");
        break;
    }
    case 150117:
    {
        returnValue = F("Hoppenriedweg");
        break;
    }
    case 150118:
    {
        returnValue = F("Hoppensack");
        break;
    }
    case 150119:
    {
        returnValue = F("Hoppenser Allee");
        break;
    }
    case 150120:
    {
        returnValue = F("Hoppenstaken");
        break;
    }
    case 150121:
    {
        returnValue = F("Hoppenstedter Str.");
        break;
    }
    case 150122:
    {
        returnValue = F("Hoppenstiege");
        break;
    }
    case 150123:
    {
        returnValue = F("Hoppenstr.");
        break;
    }
    case 150124:
    {
        returnValue = F("Hoppentun");
        break;
    }
    case 150125:
    {
        returnValue = F("Hoppenwall");
        break;
    }
    case 150126:
    {
        returnValue = F("Hoppenweg");
        break;
    }
    case 150127:
    {
        returnValue = F("Hopperfeldring");
        break;
    }
    case 150128:
    {
        returnValue = F("Hoppers");
        break;
    }
    case 150129:
    {
        returnValue = F("Hopperstr.");
        break;
    }
    case 150130:
    {
        returnValue = F("Hoppersweg");
        break;
    }
    case 150131:
    {
        returnValue = F("Hoppestr.");
        break;
    }
    case 150132:
    {
        returnValue = F("Hopplabergl");
        break;
    }
    case 150133:
    {
        returnValue = F("Hoppmannsweg");
        break;
    }
    case 150134:
    {
        returnValue = F("Hopps-Steig");
        break;
    }
    case 150135:
    {
        returnValue = F("Hoppstädter Pfad");
        break;
    }
    case 150136:
    {
        returnValue = F("Hopptal");
        break;
    }
    case 150137:
    {
        returnValue = F("Hopscheider Weg");
        break;
    }
    case 150138:
    {
        returnValue = F("Hopsfeld");
        break;
    }
    case 150139:
    {
        returnValue = F("Hopstener Damm");
        break;
    }
    case 150140:
    {
        returnValue = F("Hopstener Str.");
        break;
    }
    case 150141:
    {
        returnValue = F("Hopwischerweg");
        break;
    }
    case 150142:
    {
        returnValue = F("Horabacher Str.");
        break;
    }
    case 150143:
    {
        returnValue = F("Horaffenstr.");
        break;
    }
    case 150144:
    {
        returnValue = F("Horandstr.");
        break;
    }
    case 150145:
    {
        returnValue = F("Horazweg");
        break;
    }
    case 150146:
    {
        returnValue = F("Horb");
        break;
    }
    case 150147:
    {
        returnValue = F("Horba");
        break;
    }
    case 150148:
    {
        returnValue = F("Horbach");
        break;
    }
    case 150149:
    {
        returnValue = F("Horbach-Sträßle");
        break;
    }
    case 150150:
    {
        returnValue = F("Horbacher Str.");
        break;
    }
    case 150151:
    {
        returnValue = F("Horbacher Weg");
        break;
    }
    case 150152:
    {
        returnValue = F("Horbachpark");
        break;
    }
    case 150153:
    {
        returnValue = F("Horbachstr.");
        break;
    }
    case 150154:
    {
        returnValue = F("Horbachtalweg");
        break;
    }
    case 150155:
    {
        returnValue = F("Horbachweg");
        break;
    }
    case 150156:
    {
        returnValue = F("Horbaer Weg");
        break;
    }
    case 150157:
    {
        returnValue = F("Horbeck");
        break;
    }
    case 150158:
    {
        returnValue = F("Horbeller Str.");
        break;
    }
    case 150159:
    {
        returnValue = F("Horbenacker");
        break;
    }
    case 150160:
    {
        returnValue = F("Horbenbachweg");
        break;
    }
    case 150161:
    {
        returnValue = F("Horbener Str.");
        break;
    }
    case 150162:
    {
        returnValue = F("Horbenstr.");
        break;
    }
    case 150163:
    {
        returnValue = F("Horber Gäßle");
        break;
    }
    case 150164:
    {
        returnValue = F("Horber Steige");
        break;
    }
    case 150165:
    {
        returnValue = F("Horber Str.");
        break;
    }
    case 150166:
    {
        returnValue = F("Horber Weg");
        break;
    }
    case 150167:
    {
        returnValue = F("Horbhof");
        break;
    }
    case 150168:
    {
        returnValue = F("Horbisgasse");
        break;
    }
    case 150169:
    {
        returnValue = F("Horbkesweg");
        break;
    }
    case 150170:
    {
        returnValue = F("Horbstr.");
        break;
    }
    case 150171:
    {
        returnValue = F("Horburger Str.");
        break;
    }
    case 150172:
    {
        returnValue = F("Horburger Weg");
        break;
    }
    case 150173:
    {
        returnValue = F("Horchemsweg");
        break;
    }
    case 150174:
    {
        returnValue = F("Horchheimer Höll");
        break;
    }
    case 150175:
    {
        returnValue = F("Horchheimer Str.");
        break;
    }
    case 150176:
    {
        returnValue = F("Horchlerstr.");
        break;
    }
    case 150177:
    {
        returnValue = F("Horchstr.");
        break;
    }
    case 150178:
    {
        returnValue = F("Horchweg");
        break;
    }
    case 150179:
    {
        returnValue = F("Hordengestell");
        break;
    }
    case 150180:
    {
        returnValue = F("Hordenstr.");
        break;
    }
    case 150181:
    {
        returnValue = F("Hordisstr.");
        break;
    }
    case 150182:
    {
        returnValue = F("Hordorfer Str.");
        break;
    }
    case 150183:
    {
        returnValue = F("Hordorfer Weg");
        break;
    }
    case 150184:
    {
        returnValue = F("Hordt");
        break;
    }
    case 150185:
    {
        returnValue = F("Hordthang");
        break;
    }
    case 150186:
    {
        returnValue = F("Hordthohl");
        break;
    }
    case 150187:
    {
        returnValue = F("Hordtstr.");
        break;
    }
    case 150188:
    {
        returnValue = F("Horebstr.");
        break;
    }
    case 150189:
    {
        returnValue = F("Horemansstr.");
        break;
    }
    case 150190:
    {
        returnValue = F("Horen");
        break;
    }
    case 150191:
    {
        returnValue = F("Horeth");
        break;
    }
    case 150192:
    {
        returnValue = F("Horgauer Str.");
        break;
    }
    case 150193:
    {
        returnValue = F("Horgauer Weg");
        break;
    }
    case 150194:
    {
        returnValue = F("Horgener Str.");
        break;
    }
    case 150195:
    {
        returnValue = F("Horgener Weg");
        break;
    }
    case 150196:
    {
        returnValue = F("Horgesaustr.");
        break;
    }
    case 150197:
    {
        returnValue = F("Horheimer Grenzweg");
        break;
    }
    case 150198:
    {
        returnValue = F("Horheimer Str.");
        break;
    }
    case 150199:
    {
        returnValue = F("Horhäuser Weg");
        break;
    }
    case 150200:
    {
        returnValue = F("Horionstr.");
        break;
    }
    case 150201:
    {
        returnValue = F("Horizontalstr.");
        break;
    }
    case 150202:
    {
        returnValue = F("Horizontalweg");
        break;
    }
    case 150203:
    {
        returnValue = F("Horkaer Landstr.");
        break;
    }
    case 150204:
    {
        returnValue = F("Horkaer Str.");
        break;
    }
    case 150205:
    {
        returnValue = F("Horkaer Weg");
        break;
    }
    case 150206:
    {
        returnValue = F("Horkenbergweg");
        break;
    }
    case 150207:
    {
        returnValue = F("Horkenklingenweg");
        break;
    }
    case 150208:
    {
        returnValue = F("Horkenstr.");
        break;
    }
    case 150209:
    {
        returnValue = F("Horkenweg");
        break;
    }
    case 150210:
    {
        returnValue = F("Horkheimer Str.");
        break;
    }
    case 150211:
    {
        returnValue = F("Horkheimer Weg");
        break;
    }
    case 150212:
    {
        returnValue = F("Horkheimerstr.");
        break;
    }
    case 150213:
    {
        returnValue = F("Horlache");
        break;
    }
    case 150214:
    {
        returnValue = F("Horlachenstr.");
        break;
    }
    case 150215:
    {
        returnValue = F("Horlachenweg");
        break;
    }
    case 150216:
    {
        returnValue = F("Horlbeckstr.");
        break;
    }
    case 150217:
    {
        returnValue = F("Horloffstr.");
        break;
    }
    case 150218:
    {
        returnValue = F("Horlofftalstr.");
        break;
    }
    case 150219:
    {
        returnValue = F("Hormannsweg");
        break;
    }
    case 150220:
    {
        returnValue = F("Hormeckestr.");
        break;
    }
    case 150221:
    {
        returnValue = F("Hormer Str.");
        break;
    }
    case 150222:
    {
        returnValue = F("Hormer Weg");
        break;
    }
    case 150223:
    {
        returnValue = F("Hormersdorfer Anger");
        break;
    }
    case 150224:
    {
        returnValue = F("Hormersdorfer Hauptstr.");
        break;
    }
    case 150225:
    {
        returnValue = F("Hormersdorfer Str.");
        break;
    }
    case 150226:
    {
        returnValue = F("Hormersdorfer Weg");
        break;
    }
    case 150227:
    {
        returnValue = F("Horn");
        break;
    }
    case 150228:
    {
        returnValue = F("Horn-Balsweg");
        break;
    }
    case 150229:
    {
        returnValue = F("Horn-Bockumer Str.");
        break;
    }
    case 150230:
    {
        returnValue = F("Horn-Brokweg");
        break;
    }
    case 150231:
    {
        returnValue = F("Horn-Capeller Str.");
        break;
    }
    case 150232:
    {
        returnValue = F("Horn-Heidkamp");
        break;
    }
    case 150233:
    {
        returnValue = F("Horn-Horneweg");
        break;
    }
    case 150234:
    {
        returnValue = F("Horn-Hülsberger Str.");
        break;
    }
    case 150235:
    {
        returnValue = F("Horn-Kiwitzkottenweg");
        break;
    }
    case 150236:
    {
        returnValue = F("Horn-St. Georgsstiege");
        break;
    }
    case 150237:
    {
        returnValue = F("Horn-Uhlenweg");
        break;
    }
    case 150238:
    {
        returnValue = F("Horn-Werner Str.");
        break;
    }
    case 150239:
    {
        returnValue = F("Horn-Westerwinkel");
        break;
    }
    case 150240:
    {
        returnValue = F("Horn-Wietheidweg");
        break;
    }
    case 150241:
    {
        returnValue = F("Hornacher Str.");
        break;
    }
    case 150242:
    {
        returnValue = F("Hornacker");
        break;
    }
    case 150243:
    {
        returnValue = F("Hornackerplatz");
        break;
    }
    case 150244:
    {
        returnValue = F("Hornackerstr.");
        break;
    }
    case 150245:
    {
        returnValue = F("Hornadl´s-Gässla");
        break;
    }
    case 150246:
    {
        returnValue = F("Hornau");
        break;
    }
    case 150247:
    {
        returnValue = F("Hornauer Weg");
        break;
    }
    case 150248:
    {
        returnValue = F("Hornausenacker");
        break;
    }
    case 150249:
    {
        returnValue = F("Hornaustr.");
        break;
    }
    case 150250:
    {
        returnValue = F("Hornbacher Landstr.");
        break;
    }
    case 150251:
    {
        returnValue = F("Hornbacher Str.");
        break;
    }
    case 150252:
    {
        returnValue = F("Hornbachpark");
        break;
    }
    case 150253:
    {
        returnValue = F("Hornbachstr.");
        break;
    }
    case 150254:
    {
        returnValue = F("Hornbachweg");
        break;
    }
    case 150255:
    {
        returnValue = F("Hornbeker Str.");
        break;
    }
    case 150256:
    {
        returnValue = F("Hornberg");
        break;
    }
    case 150257:
    {
        returnValue = F("Hornbergblick");
        break;
    }
    case 150258:
    {
        returnValue = F("Hornbergdurchlass");
        break;
    }
    case 150259:
    {
        returnValue = F("Hornberger Str.");
        break;
    }
    case 150260:
    {
        returnValue = F("Hornberger Weg");
        break;
    }
    case 150261:
    {
        returnValue = F("Hornbergerweg");
        break;
    }
    case 150262:
    {
        returnValue = F("Hornbergsteige");
        break;
    }
    case 150263:
    {
        returnValue = F("Hornbergstr.");
        break;
    }
    case 150264:
    {
        returnValue = F("Hornbergtunnel");
        break;
    }
    case 150265:
    {
        returnValue = F("Hornbergweg");
        break;
    }
    case 150266:
    {
        returnValue = F("Hornblick");
        break;
    }
    case 150267:
    {
        returnValue = F("Hornboden");
        break;
    }
    case 150268:
    {
        returnValue = F("Hornbosteler Str.");
        break;
    }
    case 150269:
    {
        returnValue = F("Hornbostelweg");
        break;
    }
    case 150270:
    {
        returnValue = F("Hornbrooker Str.");
        break;
    }
    case 150271:
    {
        returnValue = F("Hornbruch");
        break;
    }
    case 150272:
    {
        returnValue = F("Hornbruchweg");
        break;
    }
    case 150273:
    {
        returnValue = F("Hornbrunnen");
        break;
    }
    case 150274:
    {
        returnValue = F("Hornbrunnenweg");
        break;
    }
    case 150275:
    {
        returnValue = F("Hornbrücke");
        break;
    }
    case 150276:
    {
        returnValue = F("Hornbuckelweg");
        break;
    }
    case 150277:
    {
        returnValue = F("Hornburg");
        break;
    }
    case 150278:
    {
        returnValue = F("Hornburger Str.");
        break;
    }
    case 150279:
    {
        returnValue = F("Hornburger Weg");
        break;
    }
    case 150280:
    {
        returnValue = F("Hornburgstr.");
        break;
    }
    case 150281:
    {
        returnValue = F("Hornburgweg");
        break;
    }
    case 150282:
    {
        returnValue = F("Hornbusch");
        break;
    }
    case 150283:
    {
        returnValue = F("Hornbühlweg");
        break;
    }
    case 150284:
    {
        returnValue = F("Horndorfer Weg");
        break;
    }
    case 150285:
    {
        returnValue = F("Horndreherberg");
        break;
    }
    case 150286:
    {
        returnValue = F("Horne");
        break;
    }
    case 150287:
    {
        returnValue = F("Hornebachweg");
        break;
    }
    case 150288:
    {
        returnValue = F("Horneburg");
        break;
    }
    case 150289:
    {
        returnValue = F("Horneburger Str.");
        break;
    }
    case 150290:
    {
        returnValue = F("Horneck");
        break;
    }
    case 150291:
    {
        returnValue = F("Hornecker Str.");
        break;
    }
    case 150292:
    {
        returnValue = F("Horneckgasse");
        break;
    }
    case 150293:
    {
        returnValue = F("Horneckstr.");
        break;
    }
    case 150294:
    {
        returnValue = F("Horneichenschneise");
        break;
    }
    case 150295:
    {
        returnValue = F("Hornemoosweg");
        break;
    }
    case 150296:
    {
        returnValue = F("Hornenheidchenstr.");
        break;
    }
    case 150297:
    {
        returnValue = F("Hornensteigstr.");
        break;
    }
    case 150298:
    {
        returnValue = F("Horner Bogen");
        break;
    }
    case 150299:
    {
        returnValue = F("Horner Damm");
        break;
    }
    case 150300:
    {
        returnValue = F("Horner Kamp");
        break;
    }
    case 150301:
    {
        returnValue = F("Horner Kirchweg");
        break;
    }
    case 150302:
    {
        returnValue = F("Horner Str.");
        break;
    }
    case 150303:
    {
        returnValue = F("Horner Weg");
        break;
    }
    case 150304:
    {
        returnValue = F("Hornestiege");
        break;
    }
    case 150305:
    {
        returnValue = F("Horneweg");
        break;
    }
    case 150306:
    {
        returnValue = F("Hornewinkel");
        break;
    }
    case 150307:
    {
        returnValue = F("Hornfeld");
        break;
    }
    case 150308:
    {
        returnValue = F("Hornfelsenweg");
        break;
    }
    case 150309:
    {
        returnValue = F("Horngasse");
        break;
    }
    case 150310:
    {
        returnValue = F("Horngraben");
        break;
    }
    case 150311:
    {
        returnValue = F("Horngrabenweg");
        break;
    }
    case 150312:
    {
        returnValue = F("Horngratweg");
        break;
    }
    case 150313:
    {
        returnValue = F("Hornhauck");
        break;
    }
    case 150314:
    {
        returnValue = F("Hornheider Weg");
        break;
    }
    case 150315:
    {
        returnValue = F("Hornholzer Weg");
        break;
    }
    case 150316:
    {
        returnValue = F("Hornhäuser Str.");
        break;
    }
    case 150317:
    {
        returnValue = F("Hornigweg");
        break;
    }
    case 150318:
    {
        returnValue = F("Horning");
        break;
    }
    case 150319:
    {
        returnValue = F("Hornisgrindestr.");
        break;
    }
    case 150320:
    {
        returnValue = F("Hornisgrindeweg");
        break;
    }
    case 150321:
    {
        returnValue = F("Hornissenstr.");
        break;
    }
    case 150322:
    {
        returnValue = F("Hornissenweg");
        break;
    }
    case 150323:
    {
        returnValue = F("Hornkampsweg");
        break;
    }
    case 150324:
    {
        returnValue = F("Hornkatener Str.");
        break;
    }
    case 150325:
    {
        returnValue = F("Hornkleeweg");
        break;
    }
    case 150326:
    {
        returnValue = F("Hornkopfweg");
        break;
    }
    case 150327:
    {
        returnValue = F("Hornkoppel");
        break;
    }
    case 150328:
    {
        returnValue = F("Hornköpfleweg");
        break;
    }
    case 150329:
    {
        returnValue = F("Hornmoldstr.");
        break;
    }
    case 150330:
    {
        returnValue = F("Hornmoorstr.");
        break;
    }
    case 150331:
    {
        returnValue = F("Hornmühle");
        break;
    }
    case 150332:
    {
        returnValue = F("Hornmühlenweg");
        break;
    }
    case 150333:
    {
        returnValue = F("Hornoer Str.");
        break;
    }
    case 150334:
    {
        returnValue = F("Hornoer Weg");
        break;
    }
    case 150335:
    {
        returnValue = F("Hornower Dorfstr.");
        break;
    }
    case 150336:
    {
        returnValue = F("Hornrain");
        break;
    }
    case 150337:
    {
        returnValue = F("Horns Hof");
        break;
    }
    case 150338:
    {
        returnValue = F("Horns Weg");
        break;
    }
    case 150339:
    {
        returnValue = F("Hornsbachweg");
        break;
    }
    case 150340:
    {
        returnValue = F("Hornsberg");
        break;
    }
    case 150341:
    {
        returnValue = F("Hornsbergstr.");
        break;
    }
    case 150342:
    {
        returnValue = F("Hornsche Str.");
        break;
    }
    case 150343:
    {
        returnValue = F("Hornschneise");
        break;
    }
    case 150344:
    {
        returnValue = F("Hornschuchallee");
        break;
    }
    case 150345:
    {
        returnValue = F("Hornschuchhöhe");
        break;
    }
    case 150346:
    {
        returnValue = F("Hornschuchstr.");
        break;
    }
    case 150347:
    {
        returnValue = F("Hornschuhgasse");
        break;
    }
    case 150348:
    {
        returnValue = F("Hornschuhweg");
        break;
    }
    case 150349:
    {
        returnValue = F("Hornschänke");
        break;
    }
    case 150350:
    {
        returnValue = F("Hornschänkenweg");
        break;
    }
    case 150351:
    {
        returnValue = F("Hornsdorfer Hof");
        break;
    }
    case 150352:
    {
        returnValue = F("Hornsegener Str.");
        break;
    }
    case 150353:
    {
        returnValue = F("Hornser Str.");
        break;
    }
    case 150354:
    {
        returnValue = F("Hornsgasse");
        break;
    }
    case 150355:
    {
        returnValue = F("Hornshagen");
        break;
    }
    case 150356:
    {
        returnValue = F("Hornsiek");
        break;
    }
    case 150357:
    {
        returnValue = F("Hornsinke");
        break;
    }
    case 150358:
    {
        returnValue = F("Hornskamp");
        break;
    }
    case 150359:
    {
        returnValue = F("Hornskuhle");
        break;
    }
    case 150360:
    {
        returnValue = F("Hornsmann-Geräumt");
        break;
    }
    case 150361:
    {
        returnValue = F("Hornsmühle");
        break;
    }
    case 150362:
    {
        returnValue = F("Hornsredder");
        break;
    }
    case 150363:
    {
        returnValue = F("Hornstaaderstr.");
        break;
    }
    case 150364:
    {
        returnValue = F("Hornsteg");
        break;
    }
    case 150365:
    {
        returnValue = F("Hornsteige");
        break;
    }
    case 150366:
    {
        returnValue = F("Hornsteiner Str.");
        break;
    }
    case 150367:
    {
        returnValue = F("Hornsteinstr.");
        break;
    }
    case 150368:
    {
        returnValue = F("Hornsteinweg");
        break;
    }
    case 150369:
    {
        returnValue = F("Hornstolzer Str.");
        break;
    }
    case 150370:
    {
        returnValue = F("Hornstorf");
        break;
    }
    case 150371:
    {
        returnValue = F("Hornstr.");
        break;
    }
    case 150372:
    {
        returnValue = F("Hornsweg");
        break;
    }
    case 150373:
    {
        returnValue = F("Horntalstr.");
        break;
    }
    case 150374:
    {
        returnValue = F("Hornteichweg");
        break;
    }
    case 150375:
    {
        returnValue = F("Hornteichwiesen");
        break;
    }
    case 150376:
    {
        returnValue = F("Hornum");
        break;
    }
    case 150377:
    {
        returnValue = F("Hornumer Str.");
        break;
    }
    case 150378:
    {
        returnValue = F("Hornungsbergstr.");
        break;
    }
    case 150379:
    {
        returnValue = F("Hornungsgasse");
        break;
    }
    case 150380:
    {
        returnValue = F("Hornungshofer Weg");
        break;
    }
    case 150381:
    {
        returnValue = F("Hornungsrain");
        break;
    }
    case 150382:
    {
        returnValue = F("Hornungsrainweg");
        break;
    }
    case 150383:
    {
        returnValue = F("Hornungstr.");
        break;
    }
    case 150384:
    {
        returnValue = F("Hornungswiesenweg");
        break;
    }
    case 150385:
    {
        returnValue = F("Hornussenweg");
        break;
    }
    case 150386:
    {
        returnValue = F("Hornwaldweg");
        break;
    }
    case 150387:
    {
        returnValue = F("Hornweg");
        break;
    }
    case 150388:
    {
        returnValue = F("Hornwerkstr.");
        break;
    }
    case 150389:
    {
        returnValue = F("Hornwiesen");
        break;
    }
    case 150390:
    {
        returnValue = F("Hornwiesenring");
        break;
    }
    case 150391:
    {
        returnValue = F("Hornwiesenstr.");
        break;
    }
    case 150392:
    {
        returnValue = F("Hornwiesenweg");
        break;
    }
    case 150393:
    {
        returnValue = F("Hornzackenbrücke");
        break;
    }
    case 150394:
    {
        returnValue = F("Hornäcker");
        break;
    }
    case 150395:
    {
        returnValue = F("Hornäckerweg");
        break;
    }
    case 150396:
    {
        returnValue = F("Horpestr.");
        break;
    }
    case 150397:
    {
        returnValue = F("Horpkestr.");
        break;
    }
    case 150398:
    {
        returnValue = F("Horrackerstr.");
        break;
    }
    case 150399:
    {
        returnValue = F("Horreck");
        break;
    }
    case 150400:
    {
        returnValue = F("Horremer Str.");
        break;
    }
    case 150401:
    {
        returnValue = F("Horremer Weg");
        break;
    }
    case 150402:
    {
        returnValue = F("Horrenberger Str.");
        break;
    }
    case 150403:
    {
        returnValue = F("Horrender-Weg");
        break;
    }
    case 150404:
    {
        returnValue = F("Horrer Weg");
        break;
    }
    case 150405:
    {
        returnValue = F("Horresser Berg");
        break;
    }
    case 150406:
    {
        returnValue = F("Horresser Str.");
        break;
    }
    case 150407:
    {
        returnValue = F("Horrheimer Str.");
        break;
    }
    case 150408:
    {
        returnValue = F("Horrig");
        break;
    }
    case 150409:
    {
        returnValue = F("Horriger Acker");
        break;
    }
    case 150410:
    {
        returnValue = F("Horriger Weg");
        break;
    }
    case 150411:
    {
        returnValue = F("Horriswiesenweg");
        break;
    }
    case 150412:
    {
        returnValue = F("Horrweiler Str.");
        break;
    }
    case 150413:
    {
        returnValue = F("Horrweiler-Weg");
        break;
    }
    case 150414:
    {
        returnValue = F("Horsastr.");
        break;
    }
    case 150415:
    {
        returnValue = F("Horsatal");
        break;
    }
    case 150416:
    {
        returnValue = F("Horsbjerg");
        break;
    }
    case 150417:
    {
        returnValue = F("Horsbüller Str.");
        break;
    }
    case 150418:
    {
        returnValue = F("Horsbüller Weg");
        break;
    }
    case 150419:
    {
        returnValue = F("Horschbacher Str.");
        break;
    }
    case 150420:
    {
        returnValue = F("Horschelweg");
        break;
    }
    case 150421:
    {
        returnValue = F("Horschfeldstr.");
        break;
    }
    case 150422:
    {
        returnValue = F("Horschhof");
        break;
    }
    case 150423:
    {
        returnValue = F("Horschmühlenweg");
        break;
    }
    case 150424:
    {
        returnValue = F("Horschstr.");
        break;
    }
    case 150425:
    {
        returnValue = F("Horsdorf");
        break;
    }
    case 150426:
    {
        returnValue = F("Horsdorfer Totenweg");
        break;
    }
    case 150427:
    {
        returnValue = F("Horsenkrog");
        break;
    }
    case 150428:
    {
        returnValue = F("Horseshoe Trail");
        break;
    }
    case 150429:
    {
        returnValue = F("Horsmarer Hauptstr.");
        break;
    }
    case 150430:
    {
        returnValue = F("Horsmarer Str.");
        break;
    }
    case 150431:
    {
        returnValue = F("Horsmarweg");
        break;
    }
    case 150432:
    {
        returnValue = F("Horst");
        break;
    }
    case 150433:
    {
        returnValue = F("Horst am Schulzensee");
        break;
    }
    case 150434:
    {
        returnValue = F("Horst-Becker-Str.");
        break;
    }
    case 150435:
    {
        returnValue = F("Horst-Bieger-Weg");
        break;
    }
    case 150436:
    {
        returnValue = F("Horst-Brandstätter-Str.");
        break;
    }
    case 150437:
    {
        returnValue = F("Horst-Embacher-Allee");
        break;
    }
    case 150438:
    {
        returnValue = F("Horst-Heilmann-Str.");
        break;
    }
    case 150439:
    {
        returnValue = F("Horst-Hoffmann-Str.");
        break;
    }
    case 150440:
    {
        returnValue = F("Horst-Jonas-Str.");
        break;
    }
    case 150441:
    {
        returnValue = F("Horst-Kochendörfer-Platz");
        break;
    }
    case 150442:
    {
        returnValue = F("Horst-Korber-Weg");
        break;
    }
    case 150443:
    {
        returnValue = F("Horst-Köhler-Str.");
        break;
    }
    case 150444:
    {
        returnValue = F("Horst-Niebuhr-Ring");
        break;
    }
    case 150445:
    {
        returnValue = F("Horst-Olk-Str.");
        break;
    }
    case 150446:
    {
        returnValue = F("Horst-Otten-Str.");
        break;
    }
    case 150447:
    {
        returnValue = F("Horst-Prinzbach-Str.");
        break;
    }
    case 150448:
    {
        returnValue = F("Horst-Scheipers-Weg");
        break;
    }
    case 150449:
    {
        returnValue = F("Horst-Schleese-Str.");
        break;
    }
    case 150450:
    {
        returnValue = F("Horst-Schmidt-Ring");
        break;
    }
    case 150451:
    {
        returnValue = F("Horst-Schmidt-Str.");
        break;
    }
    case 150452:
    {
        returnValue = F("Horst-Spengler-Ring");
        break;
    }
    case 150453:
    {
        returnValue = F("Horst-Stern-Uferweg");
        break;
    }
    case 150454:
    {
        returnValue = F("Horst-Strohbach-Str.");
        break;
    }
    case 150455:
    {
        returnValue = F("Horst-Uhlig-Str.");
        break;
    }
    case 150456:
    {
        returnValue = F("Horst-Viedt-Str.");
        break;
    }
    case 150457:
    {
        returnValue = F("Horst-Wagner-Str.");
        break;
    }
    case 150458:
    {
        returnValue = F("Horst-Waßmann-Str.");
        break;
    }
    case 150459:
    {
        returnValue = F("Horst-Wolfram-Geißler-Weg");
        break;
    }
    case 150460:
    {
        returnValue = F("Horst-und-Ursula-Gall-Weg");
        break;
    }
    case 150461:
    {
        returnValue = F("Horst-von-Jagemann-Str.");
        break;
    }
    case 150462:
    {
        returnValue = F("Horstberg");
        break;
    }
    case 150463:
    {
        returnValue = F("Horstblick");
        break;
    }
    case 150464:
    {
        returnValue = F("Horstdorfer Str.");
        break;
    }
    case 150465:
    {
        returnValue = F("Horstdorfer Weg");
        break;
    }
    case 150466:
    {
        returnValue = F("Horstedter Chaussee");
        break;
    }
    case 150467:
    {
        returnValue = F("Horstedter Dorfstr.");
        break;
    }
    case 150468:
    {
        returnValue = F("Horstedter Str.");
        break;
    }
    case 150469:
    {
        returnValue = F("Horstedter Weg");
        break;
    }
    case 150470:
    {
        returnValue = F("Horsteler Weg");
        break;
    }
    case 150471:
    {
        returnValue = F("Horstenweg");
        break;
    }
    case 150472:
    {
        returnValue = F("Horster Berg");
        break;
    }
    case 150473:
    {
        returnValue = F("Horster Dyk");
        break;
    }
    case 150474:
    {
        returnValue = F("Horster Feld");
        break;
    }
    case 150475:
    {
        returnValue = F("Horster Graben");
        break;
    }
    case 150476:
    {
        returnValue = F("Horster Höhe");
        break;
    }
    case 150477:
    {
        returnValue = F("Horster Landstr.");
        break;
    }
    case 150478:
    {
        returnValue = F("Horster Str.");
        break;
    }
    case 150479:
    {
        returnValue = F("Horster Weg");
        break;
    }
    case 150480:
    {
        returnValue = F("Horstermanscamp");
        break;
    }
    case 150481:
    {
        returnValue = F("Horsterstr.");
        break;
    }
    case 150482:
    {
        returnValue = F("Horstertstr.");
        break;
    }
    case 150483:
    {
        returnValue = F("Horstesch");
        break;
    }
    case 150484:
    {
        returnValue = F("Horstfeld");
        break;
    }
    case 150485:
    {
        returnValue = F("Horstfelder Dorfstr.");
        break;
    }
    case 150486:
    {
        returnValue = F("Horstfelder Str.");
        break;
    }
    case 150487:
    {
        returnValue = F("Horstfeldstr.");
        break;
    }
    case 150488:
    {
        returnValue = F("Horstfeldweg");
        break;
    }
    case 150489:
    {
        returnValue = F("Horstgraben");
        break;
    }
    case 150490:
    {
        returnValue = F("Horstheide");
        break;
    }
    case 150491:
    {
        returnValue = F("Horstheider Weg");
        break;
    }
    case 150492:
    {
        returnValue = F("Horsthöfe");
        break;
    }
    case 150493:
    {
        returnValue = F("Horstigstr.");
        break;
    }
    case 150494:
    {
        returnValue = F("Horstigweg");
        break;
    }
    case 150495:
    {
        returnValue = F("Horstkamp");
        break;
    }
    case 150496:
    {
        returnValue = F("Horstkampstr.");
        break;
    }
    case 150497:
    {
        returnValue = F("Horstkottenknapp");
        break;
    }
    case 150498:
    {
        returnValue = F("Horstloh");
        break;
    }
    case 150499:
    {
        returnValue = F("Horstlohsheide");
        break;
    }
    case 150500:
    {
        returnValue = F("Horstmannring");
        break;
    }
    case 150501:
    {
        returnValue = F("Horstmannsmühle");
        break;
    }
    case 150502:
    {
        returnValue = F("Horstmannstr.");
        break;
    }
    case 150503:
    {
        returnValue = F("Horstmarer Landweg");
        break;
    }
    case 150504:
    {
        returnValue = F("Horstmarer Str.");
        break;
    }
    case 150505:
    {
        returnValue = F("Horstmersch");
        break;
    }
    case 150506:
    {
        returnValue = F("Horstmoor");
        break;
    }
    case 150507:
    {
        returnValue = F("Horstmoorweg");
        break;
    }
    case 150508:
    {
        returnValue = F("Horstmühle");
        break;
    }
    case 150509:
    {
        returnValue = F("Horstpfad");
        break;
    }
    case 150510:
    {
        returnValue = F("Horstredder");
        break;
    }
    case 150511:
    {
        returnValue = F("Horstring");
        break;
    }
    case 150512:
    {
        returnValue = F("Horstschanze");
        break;
    }
    case 150513:
    {
        returnValue = F("Horstsee");
        break;
    }
    case 150514:
    {
        returnValue = F("Horstsiedlung");
        break;
    }
    case 150515:
    {
        returnValue = F("Horstsiek");
        break;
    }
    case 150516:
    {
        returnValue = F("Horststr.");
        break;
    }
    case 150517:
    {
        returnValue = F("Horstwalder Str.");
        break;
    }
    case 150518:
    {
        returnValue = F("Horstweg");
        break;
    }
    case 150519:
    {
        returnValue = F("Horstweg Saalow");
        break;
    }
    case 150520:
    {
        returnValue = F("Horstweinberge");
        break;
    }
    case 150521:
    {
        returnValue = F("Horstwiesen");
        break;
    }
    case 150522:
    {
        returnValue = F("Horstwiesenweg");
        break;
    }
    case 150523:
    {
        returnValue = F("Hortenseweg");
        break;
    }
    case 150524:
    {
        returnValue = F("Hortensienhof");
        break;
    }
    case 150525:
    {
        returnValue = F("Hortensienstr.");
        break;
    }
    case 150526:
    {
        returnValue = F("Hortensienweg");
        break;
    }
    case 150527:
    {
        returnValue = F("Horterhof");
        break;
    }
    case 150528:
    {
        returnValue = F("Horteweg");
        break;
    }
    case 150529:
    {
        returnValue = F("Hortgasse");
        break;
    }
    case 150530:
    {
        returnValue = F("Horthackerstr.");
        break;
    }
    case 150531:
    {
        returnValue = F("Hortmannsweg");
        break;
    }
    case 150532:
    {
        returnValue = F("Hortmarstr.");
        break;
    }
    case 150533:
    {
        returnValue = F("Hortstr.");
        break;
    }
    case 150534:
    {
        returnValue = F("Hortwaldstr.");
        break;
    }
    case 150535:
    {
        returnValue = F("Hortweg");
        break;
    }
    case 150536:
    {
        returnValue = F("Hortwinkler Weg");
        break;
    }
    case 150537:
    {
        returnValue = F("Horwedelsweg");
        break;
    }
    case 150538:
    {
        returnValue = F("Horwiedener Str.");
        break;
    }
    case 150539:
    {
        returnValue = F("Hosaeusweg");
        break;
    }
    case 150540:
    {
        returnValue = F("Hosangweg");
        break;
    }
    case 150541:
    {
        returnValue = F("Hosbachstr.");
        break;
    }
    case 150542:
    {
        returnValue = F("Hoscheit");
        break;
    }
    case 150543:
    {
        returnValue = F("Hoscheiter Str.");
        break;
    }
    case 150544:
    {
        returnValue = F("Hoschestr.");
        break;
    }
    case 150545:
    {
        returnValue = F("Hoschket-Kreisel");
        break;
    }
    case 150546:
    {
        returnValue = F("Hoschmiweg");
        break;
    }
    case 150547:
    {
        returnValue = F("Hosemannstr.");
        break;
    }
    case 150548:
    {
        returnValue = F("Hosenbachstr.");
        break;
    }
    case 150549:
    {
        returnValue = F("Hosenbein");
        break;
    }
    case 150550:
    {
        returnValue = F("Hosenbändel");
        break;
    }
    case 150551:
    {
        returnValue = F("Hosenfelder Str.");
        break;
    }
    case 150552:
    {
        returnValue = F("Hosengasse");
        break;
    }
    case 150553:
    {
        returnValue = F("Hosenmarkt");
        break;
    }
    case 150554:
    {
        returnValue = F("Hosenmattenweg");
        break;
    }
    case 150555:
    {
        returnValue = F("Hosenäcker");
        break;
    }
    case 150556:
    {
        returnValue = F("Hoserweg");
        break;
    }
    case 150557:
    {
        returnValue = F("Hoske");
        break;
    }
    case 150558:
    {
        returnValue = F("Hosker Str.");
        break;
    }
    case 150559:
    {
        returnValue = F("Hosleite");
        break;
    }
    case 150560:
    {
        returnValue = F("Hospacher Steig");
        break;
    }
    case 150561:
    {
        returnValue = F("Hosperseck");
        break;
    }
    case 150562:
    {
        returnValue = F("Hospertstr.");
        break;
    }
    case 150563:
    {
        returnValue = F("Hospet");
        break;
    }
    case 150564:
    {
        returnValue = F("Hospitalanger");
        break;
    }
    case 150565:
    {
        returnValue = F("Hospitalberg");
        break;
    }
    case 150566:
    {
        returnValue = F("Hospitalbreite");
        break;
    }
    case 150567:
    {
        returnValue = F("Hospitalbrunnen");
        break;
    }
    case 150568:
    {
        returnValue = F("Hospitalgarten");
        break;
    }
    case 150569:
    {
        returnValue = F("Hospitalgasse");
        break;
    }
    case 150570:
    {
        returnValue = F("Hospitalgrund");
        break;
    }
    case 150571:
    {
        returnValue = F("Hospitalmühlenweg");
        break;
    }
    case 150572:
    {
        returnValue = F("Hospitalplatz");
        break;
    }
    case 150573:
    {
        returnValue = F("Hospitalstr.");
        break;
    }
    case 150574:
    {
        returnValue = F("Hospitalweg");
        break;
    }
    case 150575:
    {
        returnValue = F("Hospitalweiher");
        break;
    }
    case 150576:
    {
        returnValue = F("Hospitälergasse");
        break;
    }
    case 150577:
    {
        returnValue = F("Hospizpad");
        break;
    }
    case 150578:
    {
        returnValue = F("Hospizplatz");
        break;
    }
    case 150579:
    {
        returnValue = F("Hossbarg");
        break;
    }
    case 150580:
    {
        returnValue = F("Hossbrink");
        break;
    }
    case 150581:
    {
        returnValue = F("Hossenbergstr.");
        break;
    }
    case 150582:
    {
        returnValue = F("Hossenriedstr.");
        break;
    }
    case 150583:
    {
        returnValue = F("Hossinger Str.");
        break;
    }
    case 150584:
    {
        returnValue = F("Host");
        break;
    }
    case 150585:
    {
        returnValue = F("Hostackerweg");
        break;
    }
    case 150586:
    {
        returnValue = F("Hostauer Str.");
        break;
    }
    case 150587:
    {
        returnValue = F("Hoste");
        break;
    }
    case 150588:
    {
        returnValue = F("Hostebergstr.");
        break;
    }
    case 150589:
    {
        returnValue = F("Hosteler Str.");
        break;
    }
    case 150590:
    {
        returnValue = F("Hostemoster Str.");
        break;
    }
    case 150591:
    {
        returnValue = F("Hostenbacher Park");
        break;
    }
    case 150592:
    {
        returnValue = F("Hostenbacher Str.");
        break;
    }
    case 150593:
    {
        returnValue = F("Hostener Str.");
        break;
    }
    case 150594:
    {
        returnValue = F("Hoster");
        break;
    }
    case 150595:
    {
        returnValue = F("Hosterbornstr.");
        break;
    }
    case 150596:
    {
        returnValue = F("Hostergasse");
        break;
    }
    case 150597:
    {
        returnValue = F("Hostergäßle");
        break;
    }
    case 150598:
    {
        returnValue = F("Hostert");
        break;
    }
    case 150599:
    {
        returnValue = F("Hostertsgasse");
        break;
    }
    case 150600:
    {
        returnValue = F("Hostertsgäßchen");
        break;
    }
    case 150601:
    {
        returnValue = F("Hostertstr.");
        break;
    }
    case 150602:
    {
        returnValue = F("Hostertsweg");
        break;
    }
    case 150603:
    {
        returnValue = F("Hostmannstr.");
        break;
    }
    case 150604:
    {
        returnValue = F("Hoststr.");
        break;
    }
    case 150605:
    {
        returnValue = F("Hostweg");
        break;
    }
    case 150606:
    {
        returnValue = F("Hosüner Sand");
        break;
    }
    case 150607:
    {
        returnValue = F("Hotelgarten");
        break;
    }
    case 150608:
    {
        returnValue = F("Hotelpark");
        break;
    }
    case 150609:
    {
        returnValue = F("Hotelstr.");
        break;
    }
    case 150610:
    {
        returnValue = F("Hotelweg");
        break;
    }
    case 150611:
    {
        returnValue = F("Hotelzufahrt");
        break;
    }
    case 150612:
    {
        returnValue = F("Hoterheideweg");
        break;
    }
    case 150613:
    {
        returnValue = F("Hoteser Weg");
        break;
    }
    case 150614:
    {
        returnValue = F("Hotherstr.");
        break;
    }
    case 150615:
    {
        returnValue = F("Hotschenbergstr.");
        break;
    }
    case 150616:
    {
        returnValue = F("Hotschlagweg");
        break;
    }
    case 150617:
    {
        returnValue = F("Hotte");
        break;
    }
    case 150618:
    {
        returnValue = F("Hotte-Lotte-Weg");
        break;
    }
    case 150619:
    {
        returnValue = F("Hottelner Str.");
        break;
    }
    case 150620:
    {
        returnValue = F("Hottelstedt");
        break;
    }
    case 150621:
    {
        returnValue = F("Hottelstedter Str.");
        break;
    }
    case 150622:
    {
        returnValue = F("Hottenbach");
        break;
    }
    case 150623:
    {
        returnValue = F("Hottenberg");
        break;
    }
    case 150624:
    {
        returnValue = F("Hottenbergweg");
        break;
    }
    case 150625:
    {
        returnValue = F("Hottenbühl");
        break;
    }
    case 150626:
    {
        returnValue = F("Hottendorf");
        break;
    }
    case 150627:
    {
        returnValue = F("Hottendorfer Str.");
        break;
    }
    case 150628:
    {
        returnValue = F("Hottendorfer Weg");
        break;
    }
    case 150629:
    {
        returnValue = F("Hotteraweg");
        break;
    }
    case 150630:
    {
        returnValue = F("Hotterlochweg");
        break;
    }
    case 150631:
    {
        returnValue = F("Hotterweg");
        break;
    }
    case 150632:
    {
        returnValue = F("Hottomannsdeich");
        break;
    }
    case 150633:
    {
        returnValue = F("Hottorfer Mühle");
        break;
    }
    case 150634:
    {
        returnValue = F("Hottorfer Str.");
        break;
    }
    case 150635:
    {
        returnValue = F("Hottzieke");
        break;
    }
    case 150636:
    {
        returnValue = F("Hotzelgasse");
        break;
    }
    case 150637:
    {
        returnValue = F("Hotzelgrund");
        break;
    }
    case 150638:
    {
        returnValue = F("Hotzelweg");
        break;
    }
    case 150639:
    {
        returnValue = F("Hotzelwiese");
        break;
    }
    case 150640:
    {
        returnValue = F("Hotzenrundweg");
        break;
    }
    case 150641:
    {
        returnValue = F("Hotzenstr.");
        break;
    }
    case 150642:
    {
        returnValue = F("Hotzental");
        break;
    }
    case 150643:
    {
        returnValue = F("Hotzenwaldstr.");
        break;
    }
    case 150644:
    {
        returnValue = F("Hotzenweg");
        break;
    }
    case 150645:
    {
        returnValue = F("Houbenskamp");
        break;
    }
    case 150646:
    {
        returnValue = F("Houbenweg");
        break;
    }
    case 150647:
    {
        returnValue = F("Houbirgstr.");
        break;
    }
    case 150648:
    {
        returnValue = F("Hougenlann");
        break;
    }
    case 150649:
    {
        returnValue = F("Houkweg");
        break;
    }
    case 150650:
    {
        returnValue = F("Houpeweg");
        break;
    }
    case 150651:
    {
        returnValue = F("Houverather Str.");
        break;
    }
    case 150652:
    {
        returnValue = F("Houverathsgasse");
        break;
    }
    case 150653:
    {
        returnValue = F("Hove");
        break;
    }
    case 150654:
    {
        returnValue = F("Hovedisser Str.");
        break;
    }
    case 150655:
    {
        returnValue = F("Hoveler Str.");
        break;
    }
    case 150656:
    {
        returnValue = F("Hovelfeldweg");
        break;
    }
    case 150657:
    {
        returnValue = F("Hoveloh");
        break;
    }
    case 150658:
    {
        returnValue = F("Hoven");
        break;
    }
    case 150659:
    {
        returnValue = F("Hovener Hof");
        break;
    }
    case 150660:
    {
        returnValue = F("Hovener Kirchpfad");
        break;
    }
    case 150661:
    {
        returnValue = F("Hovener Str.");
        break;
    }
    case 150662:
    {
        returnValue = F("Hovener Weg");
        break;
    }
    case 150663:
    {
        returnValue = F("Hovenerweg");
        break;
    }
    case 150664:
    {
        returnValue = F("Hovenweg");
        break;
    }
    case 150665:
    {
        returnValue = F("Hover Brand");
        break;
    }
    case 150666:
    {
        returnValue = F("Hover Garten");
        break;
    }
    case 150667:
    {
        returnValue = F("Hover Kull");
        break;
    }
    case 150668:
    {
        returnValue = F("Hover Weg");
        break;
    }
    case 150669:
    {
        returnValue = F("Hover Wiese");
        break;
    }
    case 150670:
    {
        returnValue = F("Hoverdengasse");
        break;
    }
    case 150671:
    {
        returnValue = F("Hoverhof");
        break;
    }
    case 150672:
    {
        returnValue = F("Hovering");
        break;
    }
    case 150673:
    {
        returnValue = F("Hoverkamp");
        break;
    }
    case 150674:
    {
        returnValue = F("Hoverkampstr.");
        break;
    }
    case 150675:
    {
        returnValue = F("Hoverstr.");
        break;
    }
    case 150676:
    {
        returnValue = F("Hoverweg");
        break;
    }
    case 150677:
    {
        returnValue = F("Hovesaat");
        break;
    }
    case 150678:
    {
        returnValue = F("Hoveskamp");
        break;
    }
    case 150679:
    {
        returnValue = F("Hovestadt");
        break;
    }
    case 150680:
    {
        returnValue = F("Hovestr.");
        break;
    }
    case 150681:
    {
        returnValue = F("Hovestädter Str.");
        break;
    }
    case 150682:
    {
        returnValue = F("Hovestädter Weg");
        break;
    }
    case 150683:
    {
        returnValue = F("Hovscheweg");
        break;
    }
    case 150684:
    {
        returnValue = F("Howackerweg");
        break;
    }
    case 150685:
    {
        returnValue = F("Howake");
        break;
    }
    case 150686:
    {
        returnValue = F("Howarde");
        break;
    }
    case 150687:
    {
        returnValue = F("Howaschenweg");
        break;
    }
    case 150688:
    {
        returnValue = F("Howesträßchen");
        break;
    }
    case 150689:
    {
        returnValue = F("Howick");
        break;
    }
    case 150690:
    {
        returnValue = F("Howieker Flach");
        break;
    }
    case 150691:
    {
        returnValue = F("Howieker Kamp");
        break;
    }
    case 150692:
    {
        returnValue = F("Howieker Ring");
        break;
    }
    case 150693:
    {
        returnValue = F("Howieker Str.");
        break;
    }
    case 150694:
    {
        returnValue = F("Howieker Wall");
        break;
    }
    case 150695:
    {
        returnValue = F("Howisch");
        break;
    }
    case 150696:
    {
        returnValue = F("Hoxbergstr.");
        break;
    }
    case 150697:
    {
        returnValue = F("Hoxdelle");
        break;
    }
    case 150698:
    {
        returnValue = F("Hoxenbergstr.");
        break;
    }
    case 150699:
    {
        returnValue = F("Hoxfelder Str.");
        break;
    }
    case 150700:
    {
        returnValue = F("Hoxfelder Weg");
        break;
    }
    case 150701:
    {
        returnValue = F("Hoxhof");
        break;
    }
    case 150702:
    {
        returnValue = F("Hoxhöfe");
        break;
    }
    case 150703:
    {
        returnValue = F("Hoxter Weg");
        break;
    }
    case 150704:
    {
        returnValue = F("Hoxtrup");
        break;
    }
    case 150705:
    {
        returnValue = F("Hoxtrupfeld");
        break;
    }
    case 150706:
    {
        returnValue = F("Hoyaer Str.");
        break;
    }
    case 150707:
    {
        returnValue = F("Hoyastr.");
        break;
    }
    case 150708:
    {
        returnValue = F("Hoydorfer Weg");
        break;
    }
    case 150709:
    {
        returnValue = F("Hoyer Bogen");
        break;
    }
    case 150710:
    {
        returnValue = F("Hoyerbergstr.");
        break;
    }
    case 150711:
    {
        returnValue = F("Hoyerbergweg");
        break;
    }
    case 150712:
    {
        returnValue = F("Hoyergasse");
        break;
    }
    case 150713:
    {
        returnValue = F("Hoyerhagener Str.");
        break;
    }
    case 150714:
    {
        returnValue = F("Hoyermannstr.");
        break;
    }
    case 150715:
    {
        returnValue = F("Hoyers Eck");
        break;
    }
    case 150716:
    {
        returnValue = F("Hoyers Gang");
        break;
    }
    case 150717:
    {
        returnValue = F("Hoyersburger Landstr.");
        break;
    }
    case 150718:
    {
        returnValue = F("Hoyersburger Str.");
        break;
    }
    case 150719:
    {
        returnValue = F("Hoyersdorf");
        break;
    }
    case 150720:
    {
        returnValue = F("Hoyersdorfer Dorfstr.");
        break;
    }
    case 150721:
    {
        returnValue = F("Hoyerskamp");
        break;
    }
    case 150722:
    {
        returnValue = F("Hoyerstig");
        break;
    }
    case 150723:
    {
        returnValue = F("Hoyerstr.");
        break;
    }
    case 150724:
    {
        returnValue = F("Hoyerstännleweg");
        break;
    }
    case 150725:
    {
        returnValue = F("Hoyerswerdaer Ring");
        break;
    }
    case 150726:
    {
        returnValue = F("Hoyerswerdaer Str.");
        break;
    }
    case 150727:
    {
        returnValue = F("Hoyerweg");
        break;
    }
    case 150728:
    {
        returnValue = F("Hoyerwiesenweg");
        break;
    }
    case 150729:
    {
        returnValue = F("Hoymer Chaussee");
        break;
    }
    case 150730:
    {
        returnValue = F("Hoymer Str.");
        break;
    }
    case 150731:
    {
        returnValue = F("Hoymer Weg");
        break;
    }
    case 150732:
    {
        returnValue = F("Hoynckallee");
        break;
    }
    case 150733:
    {
        returnValue = F("Hoyner Heide");
        break;
    }
    case 150734:
    {
        returnValue = F("Hoysinghausen");
        break;
    }
    case 150735:
    {
        returnValue = F("Hoysinghauser Str.");
        break;
    }
    case 150736:
    {
        returnValue = F("Hoyweg");
        break;
    }
    case 150737:
    {
        returnValue = F("Hozenbühlstr.");
        break;
    }
    case 150738:
    {
        returnValue = F("Hoßberg");
        break;
    }
    case 150739:
    {
        returnValue = F("Hoßbergweg");
        break;
    }
    case 150740:
    {
        returnValue = F("Hoßfeldweg");
        break;
    }
    case 150741:
    {
        returnValue = F("Hoßkircher Str.");
        break;
    }
    case 150742:
    {
        returnValue = F("Hrabanusstr.");
        break;
    }
    case 150743:
    {
        returnValue = F("Hradeker Str.");
        break;
    }
    case 150744:
    {
        returnValue = F("Hradschin");
        break;
    }
    case 150745:
    {
        returnValue = F("Hradschinweg");
        break;
    }
    case 150746:
    {
        returnValue = F("Hub");
        break;
    }
    case 150747:
    {
        returnValue = F("Hub-Park");
        break;
    }
    case 150748:
    {
        returnValue = F("Hub-Weg");
        break;
    }
    case 150749:
    {
        returnValue = F("Hubachstr.");
        break;
    }
    case 150750:
    {
        returnValue = F("Hubackerweg");
        break;
    }
    case 150751:
    {
        returnValue = F("Hubaldstr.");
        break;
    }
    case 150752:
    {
        returnValue = F("Hubaleck-Siedlung");
        break;
    }
    case 150753:
    {
        returnValue = F("Hubbauernhof");
        break;
    }
    case 150754:
    {
        returnValue = F("Hubbauerweg");
        break;
    }
    case 150755:
    {
        returnValue = F("Hubbele");
        break;
    }
    case 150756:
    {
        returnValue = F("Hubbelrather Weg");
        break;
    }
    case 150757:
    {
        returnValue = F("Hubberggäßchen");
        break;
    }
    case 150758:
    {
        returnValue = F("Hubbergstr.");
        break;
    }
    case 150759:
    {
        returnValue = F("Hubbergweg");
        break;
    }
    case 150760:
    {
        returnValue = F("Hubbrücke Forststr.nbrücke");
        break;
    }
    case 150761:
    {
        returnValue = F("Hube");
        break;
    }
    case 150762:
    {
        returnValue = F("Hubelspfad");
        break;
    }
    case 150763:
    {
        returnValue = F("Hubenberg");
        break;
    }
    case 150764:
    {
        returnValue = F("Hubeneck");
        break;
    }
    case 150765:
    {
        returnValue = F("Hubener Weg");
        break;
    }
    case 150766:
    {
        returnValue = F("Hubenmühle");
        break;
    }
    case 150767:
    {
        returnValue = F("Hubenröder Str.");
        break;
    }
    case 150768:
    {
        returnValue = F("Hubenröderweg");
        break;
    }
    case 150769:
    {
        returnValue = F("Hubensteinerstr.");
        break;
    }
    case 150770:
    {
        returnValue = F("Hubenweg");
        break;
    }
    case 150771:
    {
        returnValue = F("Huber Weg");
        break;
    }
    case 150772:
    {
        returnValue = F("Huber-Jakl-Weg");
        break;
    }
    case 150773:
    {
        returnValue = F("Huberbergstr.");
        break;
    }
    case 150774:
    {
        returnValue = F("Huberbräugasse");
        break;
    }
    case 150775:
    {
        returnValue = F("Huberfeldstr.");
        break;
    }
    case 150776:
    {
        returnValue = F("Huberg");
        break;
    }
    case 150777:
    {
        returnValue = F("Hubergasse");
        break;
    }
    case 150778:
    {
        returnValue = F("Huberhofstr.");
        break;
    }
    case 150779:
    {
        returnValue = F("Huberhöh");
        break;
    }
    case 150780:
    {
        returnValue = F("Hubermoos");
        break;
    }
    case 150781:
    {
        returnValue = F("Hubersgasse");
        break;
    }
    case 150782:
    {
        returnValue = F("Huberspitzweg");
        break;
    }
    case 150783:
    {
        returnValue = F("Huberstr.");
        break;
    }
    case 150784:
    {
        returnValue = F("Hubert Beier Park");
        break;
    }
    case 150785:
    {
        returnValue = F("Hubert Eble Weg");
        break;
    }
    case 150786:
    {
        returnValue = F("Hubert Henke Weg");
        break;
    }
    case 150787:
    {
        returnValue = F("Hubert Wopperer-Weg");
        break;
    }
    case 150788:
    {
        returnValue = F("Hubert-Axer-Str.");
        break;
    }
    case 150789:
    {
        returnValue = F("Hubert-Beuke-Weg");
        break;
    }
    case 150790:
    {
        returnValue = F("Hubert-Biernat-Str.");
        break;
    }
    case 150791:
    {
        returnValue = F("Hubert-Blessing-Weg");
        break;
    }
    case 150792:
    {
        returnValue = F("Hubert-Burda-Platz");
        break;
    }
    case 150793:
    {
        returnValue = F("Hubert-Dehler-Str.");
        break;
    }
    case 150794:
    {
        returnValue = F("Hubert-Deschler-Str.");
        break;
    }
    case 150795:
    {
        returnValue = F("Hubert-Drecker-Str.");
        break;
    }
    case 150796:
    {
        returnValue = F("Hubert-Fassbender-Anlage");
        break;
    }
    case 150797:
    {
        returnValue = F("Hubert-Fichte-Str.");
        break;
    }
    case 150798:
    {
        returnValue = F("Hubert-Fink-Str.");
        break;
    }
    case 150799:
    {
        returnValue = F("Hubert-Franken-Str.");
        break;
    }
    case 150800:
    {
        returnValue = F("Hubert-Gasper-Str.");
        break;
    }
    case 150801:
    {
        returnValue = F("Hubert-Geuer-Str.");
        break;
    }
    case 150802:
    {
        returnValue = F("Hubert-Granderath-Platz");
        break;
    }
    case 150803:
    {
        returnValue = F("Hubert-Hachenberg-Str.");
        break;
    }
    case 150804:
    {
        returnValue = F("Hubert-Haider-Str.");
        break;
    }
    case 150805:
    {
        returnValue = F("Hubert-Harth-Str.");
        break;
    }
    case 150806:
    {
        returnValue = F("Hubert-Heil-Str.");
        break;
    }
    case 150807:
    {
        returnValue = F("Hubert-Hopf-Str.");
        break;
    }
    case 150808:
    {
        returnValue = F("Hubert-Houben-Str.");
        break;
    }
    case 150809:
    {
        returnValue = F("Hubert-Klär-Str.");
        break;
    }
    case 150810:
    {
        returnValue = F("Hubert-Lux-Str.");
        break;
    }
    case 150811:
    {
        returnValue = F("Hubert-Meisel-Str.");
        break;
    }
    case 150812:
    {
        returnValue = F("Hubert-Minz-Str.");
        break;
    }
    case 150813:
    {
        returnValue = F("Hubert-Netzer-Weg");
        break;
    }
    case 150814:
    {
        returnValue = F("Hubert-Neufeld-Weg");
        break;
    }
    case 150815:
    {
        returnValue = F("Hubert-Offermann-Str.");
        break;
    }
    case 150816:
    {
        returnValue = F("Hubert-Pfeiffer-Weg");
        break;
    }
    case 150817:
    {
        returnValue = F("Hubert-Prim-Str.");
        break;
    }
    case 150818:
    {
        returnValue = F("Hubert-Prott-Str.");
        break;
    }
    case 150819:
    {
        returnValue = F("Hubert-Rahm-Weg");
        break;
    }
    case 150820:
    {
        returnValue = F("Hubert-Reißner-Str.");
        break;
    }
    case 150821:
    {
        returnValue = F("Hubert-Rheinfeld-Platz");
        break;
    }
    case 150822:
    {
        returnValue = F("Hubert-Roggendorf-Str.");
        break;
    }
    case 150823:
    {
        returnValue = F("Hubert-Rüttger-Str.");
        break;
    }
    case 150824:
    {
        returnValue = F("Hubert-Salentin-Str.");
        break;
    }
    case 150825:
    {
        returnValue = F("Hubert-Schmidt-Str.");
        break;
    }
    case 150826:
    {
        returnValue = F("Hubert-Schreiner-Str.");
        break;
    }
    case 150827:
    {
        returnValue = F("Hubert-Stupp-Str.");
        break;
    }
    case 150828:
    {
        returnValue = F("Hubert-Stürzl-Steig");
        break;
    }
    case 150829:
    {
        returnValue = F("Hubert-Thelen-Str.");
        break;
    }
    case 150830:
    {
        returnValue = F("Hubert-Trimborn-Str.");
        break;
    }
    case 150831:
    {
        returnValue = F("Hubert-Underberg-Allee");
        break;
    }
    case 150832:
    {
        returnValue = F("Hubert-Vallender-Str.");
        break;
    }
    case 150833:
    {
        returnValue = F("Hubert-Vergölst-Str.");
        break;
    }
    case 150834:
    {
        returnValue = F("Hubert-Vilz-Platz");
        break;
    }
    case 150835:
    {
        returnValue = F("Hubert-Wagner-Str.");
        break;
    }
    case 150836:
    {
        returnValue = F("Hubert-Wallich-Str.");
        break;
    }
    case 150837:
    {
        returnValue = F("Hubert-Weidman-Str.");
        break;
    }
    case 150838:
    {
        returnValue = F("Hubert-Weisser-Str.");
        break;
    }
    case 150839:
    {
        returnValue = F("Hubert-Zettelmeyer-Str.");
        break;
    }
    case 150840:
    {
        returnValue = F("Hubert-und-Ursula-Herberger-Platz");
        break;
    }
    case 150841:
    {
        returnValue = F("Hubert-von-Herkomer-Passage");
        break;
    }
    case 150842:
    {
        returnValue = F("Hubert-von-Herkomer-Str.");
        break;
    }
    case 150843:
    {
        returnValue = F("Huberta-Roggendorf-Str.");
        break;
    }
    case 150844:
    {
        returnValue = F("Hubertine-Roosen-Str.");
        break;
    }
    case 150845:
    {
        returnValue = F("Hubertsgasse");
        break;
    }
    case 150846:
    {
        returnValue = F("Hubertshalde");
        break;
    }
    case 150847:
    {
        returnValue = F("Hubertshofener Str.");
        break;
    }
    case 150848:
    {
        returnValue = F("Hubertstr.");
        break;
    }
    case 150849:
    {
        returnValue = F("Hubertus");
        break;
    }
    case 150850:
    {
        returnValue = F("Hubertus-Pfad");
        break;
    }
    case 150851:
    {
        returnValue = F("Hubertus-Zimmer-Weg");
        break;
    }
    case 150852:
    {
        returnValue = F("Hubertus-von-Nell-Str.");
        break;
    }
    case 150853:
    {
        returnValue = F("Hubertusallee");
        break;
    }
    case 150854:
    {
        returnValue = F("Hubertusanlage");
        break;
    }
    case 150855:
    {
        returnValue = F("Hubertusatraße");
        break;
    }
    case 150856:
    {
        returnValue = F("Hubertusberg");
        break;
    }
    case 150857:
    {
        returnValue = F("Hubertusblick");
        break;
    }
    case 150858:
    {
        returnValue = F("Hubertusbrücke");
        break;
    }
    case 150859:
    {
        returnValue = F("Hubertusburger Str.");
        break;
    }
    case 150860:
    {
        returnValue = F("Hubertusgasse");
        break;
    }
    case 150861:
    {
        returnValue = F("Hubertushang");
        break;
    }
    case 150862:
    {
        returnValue = F("Hubertushof");
        break;
    }
    case 150863:
    {
        returnValue = F("Hubertushöhe");
        break;
    }
    case 150864:
    {
        returnValue = F("Hubertuskamp");
        break;
    }
    case 150865:
    {
        returnValue = F("Hubertuskreuz");
        break;
    }
    case 150866:
    {
        returnValue = F("Hubertusmühle");
        break;
    }
    case 150867:
    {
        returnValue = F("Hubertusplatz");
        break;
    }
    case 150868:
    {
        returnValue = F("Hubertusring");
        break;
    }
    case 150869:
    {
        returnValue = F("Hubertusrunde");
        break;
    }
    case 150870:
    {
        returnValue = F("Hubertusschulweg");
        break;
    }
    case 150871:
    {
        returnValue = F("Hubertussteig");
        break;
    }
    case 150872:
    {
        returnValue = F("Hubertusstieg");
        break;
    }
    case 150873:
    {
        returnValue = F("Hubertusstock");
        break;
    }
    case 150874:
    {
        returnValue = F("Hubertusstr.");
        break;
    }
    case 150875:
    {
        returnValue = F("Hubertustal");
        break;
    }
    case 150876:
    {
        returnValue = F("Hubertustr.");
        break;
    }
    case 150877:
    {
        returnValue = F("Hubertusweg");
        break;
    }
    case 150878:
    {
        returnValue = F("Huberweg");
        break;
    }
    case 150879:
    {
        returnValue = F("Huberweid");
        break;
    }
    case 150880:
    {
        returnValue = F("Huberäcker");
        break;
    }
    case 150881:
    {
        returnValue = F("Huberöschweg");
        break;
    }
    case 150882:
    {
        returnValue = F("Hubeweg");
        break;
    }
    case 150883:
    {
        returnValue = F("Hubfeldstr.");
        break;
    }
    case 150884:
    {
        returnValue = F("Hubgasse");
        break;
    }
    case 150885:
    {
        returnValue = F("Hubhof");
        break;
    }
    case 150886:
    {
        returnValue = F("Hubhofstr.");
        break;
    }
    case 150887:
    {
        returnValue = F("Hubholzweg");
        break;
    }
    case 150888:
    {
        returnValue = F("Hubing");
        break;
    }
    case 150889:
    {
        returnValue = F("Hubiweg");
        break;
    }
    case 150890:
    {
        returnValue = F("Hublandstr.");
        break;
    }
    case 150891:
    {
        returnValue = F("Hubmannsegger Weg");
        break;
    }
    case 150892:
    {
        returnValue = F("Hubmannstr.");
        break;
    }
    case 150893:
    {
        returnValue = F("Hubmannwöhrl");
        break;
    }
    case 150894:
    {
        returnValue = F("Hubmattstr.");
        break;
    }
    case 150895:
    {
        returnValue = F("Hubmersberg");
        break;
    }
    case 150896:
    {
        returnValue = F("Hubrichstr.");
        break;
    }
    case 150897:
    {
        returnValue = F("Hubrigsteg");
        break;
    }
    case 150898:
    {
        returnValue = F("Hubstr.");
        break;
    }
    case 150899:
    {
        returnValue = F("Hubweg");
        break;
    }
    case 150900:
    {
        returnValue = F("Hubwieschen");
        break;
    }
    case 150901:
    {
        returnValue = F("Hubwiesenweg");
        break;
    }
    case 150902:
    {
        returnValue = F("Hubäcker");
        break;
    }
    case 150903:
    {
        returnValue = F("Hubäckerring");
        break;
    }
    case 150904:
    {
        returnValue = F("Hubäckerweg");
        break;
    }
    case 150905:
    {
        returnValue = F("Hubödstr.");
        break;
    }
    case 150906:
    {
        returnValue = F("Huchelwieser Str.");
        break;
    }
    case 150907:
    {
        returnValue = F("Huchenstr.");
        break;
    }
    case 150908:
    {
        returnValue = F("Huchenweg");
        break;
    }
    case 150909:
    {
        returnValue = F("Huchhemmel");
        break;
    }
    case 150910:
    {
        returnValue = F("Huchtfeld");
        break;
    }
    case 150911:
    {
        returnValue = F("Huchtingsdamm");
        break;
    }
    case 150912:
    {
        returnValue = F("Huchtweg");
        break;
    }
    case 150913:
    {
        returnValue = F("Huchzener Str.");
        break;
    }
    case 150914:
    {
        returnValue = F("Huckbergstr.");
        break;
    }
    case 150915:
    {
        returnValue = F("Huckelheimer Str.");
        break;
    }
    case 150916:
    {
        returnValue = F("Huckelheimer Weg");
        break;
    }
    case 150917:
    {
        returnValue = F("Huckelrieder Damm");
        break;
    }
    case 150918:
    {
        returnValue = F("Huckels Gründe");
        break;
    }
    case 150919:
    {
        returnValue = F("Huckenbachweg");
        break;
    }
    case 150920:
    {
        returnValue = F("Huckenbröler Str.");
        break;
    }
    case 150921:
    {
        returnValue = F("Huckenham");
        break;
    }
    case 150922:
    {
        returnValue = F("Huckenhausener Str.");
        break;
    }
    case 150923:
    {
        returnValue = F("Huckenhofer Weg");
        break;
    }
    case 150924:
    {
        returnValue = F("Huckenrieth");
        break;
    }
    case 150925:
    {
        returnValue = F("Huckenweg");
        break;
    }
    case 150926:
    {
        returnValue = F("Hucker Str.");
        break;
    }
    case 150927:
    {
        returnValue = F("Huckerhofer Weg");
        break;
    }
    case 150928:
    {
        returnValue = F("Hucketal");
        break;
    }
    case 150929:
    {
        returnValue = F("Huckeweg");
        break;
    }
    case 150930:
    {
        returnValue = F("Huckingerstr.");
        break;
    }
    case 150931:
    {
        returnValue = F("Huckingshof");
        break;
    }
    case 150932:
    {
        returnValue = F("Huckrieden Esch");
        break;
    }
    case 150933:
    {
        returnValue = F("Huckstede");
        break;
    }
    case 150934:
    {
        returnValue = F("Huckstorfer Str.");
        break;
    }
    case 150935:
    {
        returnValue = F("Huckstorfer Weg");
        break;
    }
    case 150936:
    {
        returnValue = F("Huckstr.");
        break;
    }
    case 150937:
    {
        returnValue = F("Hucksweg");
        break;
    }
    case 150938:
    {
        returnValue = F("Huckweg");
        break;
    }
    case 150939:
    {
        returnValue = F("Hudaweg");
        break;
    }
    case 150940:
    {
        returnValue = F("Huddelberg");
        break;
    }
    case 150941:
    {
        returnValue = F("Hude");
        break;
    }
    case 150942:
    {
        returnValue = F("Hudehof");
        break;
    }
    case 150943:
    {
        returnValue = F("Hudekamp");
        break;
    }
    case 150944:
    {
        returnValue = F("Hudeligaässle");
        break;
    }
    case 150945:
    {
        returnValue = F("Hudeligässle");
        break;
    }
    case 150946:
    {
        returnValue = F("Hudelweg");
        break;
    }
    case 150947:
    {
        returnValue = F("Hudemühlen-Burg");
        break;
    }
    case 150948:
    {
        returnValue = F("Hudenbarg");
        break;
    }
    case 150949:
    {
        returnValue = F("Hudener Weg");
        break;
    }
    case 150950:
    {
        returnValue = F("Hudenfeld");
        break;
    }
    case 150951:
    {
        returnValue = F("Hudenkamp");
        break;
    }
    case 150952:
    {
        returnValue = F("Hudenweg");
        break;
    }
    case 150953:
    {
        returnValue = F("Huder Furth");
        break;
    }
    case 150954:
    {
        returnValue = F("Huder Str.");
        break;
    }
    case 150955:
    {
        returnValue = F("Huder Weg");
        break;
    }
    case 150956:
    {
        returnValue = F("Hudering");
        break;
    }
    case 150957:
    {
        returnValue = F("Huderkamp");
        break;
    }
    case 150958:
    {
        returnValue = F("Huderstr.");
        break;
    }
    case 150959:
    {
        returnValue = F("Hudewald");
        break;
    }
    case 150960:
    {
        returnValue = F("Hudeweg");
        break;
    }
    case 150961:
    {
        returnValue = F("Hudlacher Weg");
        break;
    }
    case 150962:
    {
        returnValue = F("Hudsonstr.");
        break;
    }
    case 150963:
    {
        returnValue = F("Hudsonweg");
        break;
    }
    case 150964:
    {
        returnValue = F("Hudüpkenweg");
        break;
    }
    case 150965:
    {
        returnValue = F("Huebackerstr.");
        break;
    }
    case 150966:
    {
        returnValue = F("Huebberg");
        break;
    }
    case 150967:
    {
        returnValue = F("Hueberstr.");
        break;
    }
    case 150968:
    {
        returnValue = F("Huebstr.");
        break;
    }
    case 150969:
    {
        returnValue = F("Huehenweg");
        break;
    }
    case 150970:
    {
        returnValue = F("Hueleken");
        break;
    }
    case 150971:
    {
        returnValue = F("Huer");
        break;
    }
    case 150972:
    {
        returnValue = F("Hueskamp");
        break;
    }
    case 150973:
    {
        returnValue = F("Hueskampstr.");
        break;
    }
    case 150974:
    {
        returnValue = F("Hueskeweg");
        break;
    }
    case 150975:
    {
        returnValue = F("Huestr.");
        break;
    }
    case 150976:
    {
        returnValue = F("Hueth'sche Str.");
        break;
    }
    case 150977:
    {
        returnValue = F("Huf");
        break;
    }
    case 150978:
    {
        returnValue = F("Hufacker");
        break;
    }
    case 150979:
    {
        returnValue = F("Hufe");
        break;
    }
    case 150980:
    {
        returnValue = F("Hufe 6 und 7");
        break;
    }
    case 150981:
    {
        returnValue = F("Hufe IV");
        break;
    }
    case 150982:
    {
        returnValue = F("Hufe-Ost");
        break;
    }
    case 150983:
    {
        returnValue = F("Hufe-West");
        break;
    }
    case 150984:
    {
        returnValue = F("Hufeisen");
        break;
    }
    case 150985:
    {
        returnValue = F("Hufeisenring");
        break;
    }
    case 150986:
    {
        returnValue = F("Hufeisenstr.");
        break;
    }
    case 150987:
    {
        returnValue = F("Hufeisenweg");
        break;
    }
    case 150988:
    {
        returnValue = F("Hufelandstr.");
        break;
    }
    case 150989:
    {
        returnValue = F("Hufelandweg");
        break;
    }
    case 150990:
    {
        returnValue = F("Hufelsweg");
        break;
    }
    case 150991:
    {
        returnValue = F("Hufen");
        break;
    }
    case 150992:
    {
        returnValue = F("Hufenausbau");
        break;
    }
    case 150993:
    {
        returnValue = F("Hufenbergweg");
        break;
    }
    case 150994:
    {
        returnValue = F("Hufenfeldweg");
        break;
    }
    case 150995:
    {
        returnValue = F("Hufenkamp");
        break;
    }
    case 150996:
    {
        returnValue = F("Hufenkampweg");
        break;
    }
    case 150997:
    {
        returnValue = F("Hufenstuhl");
        break;
    }
    case 150998:
    {
        returnValue = F("Hufenweg");
        break;
    }
    case 150999:
    {
        returnValue = F("Hufer Berg");
        break;
    }
    case 151000:
    {
        returnValue = F("Hufer Garten");
        break;
    }
    case 151001:
    {
        returnValue = F("Hufer Mittelweg");
        break;
    }
    case 151002:
    {
        returnValue = F("Hufer Oberdorf");
        break;
    }
    case 151003:
    {
        returnValue = F("Hufer Unterdorf");
        break;
    }
    case 151004:
    {
        returnValue = F("Hufer Weg");
        break;
    }
    case 151005:
    {
        returnValue = F("Huferberg");
        break;
    }
    case 151006:
    {
        returnValue = F("Huferhof");
        break;
    }
    case 151007:
    {
        returnValue = F("Hufering");
        break;
    }
    case 151008:
    {
        returnValue = F("Hufestr.");
        break;
    }
    case 151009:
    {
        returnValue = F("Hufeweg");
        break;
    }
    case 151010:
    {
        returnValue = F("Hufewinkel");
        break;
    }
    case 151011:
    {
        returnValue = F("Huffelmannweg");
        break;
    }
    case 151012:
    {
        returnValue = F("Huffelsheck");
        break;
    }
    case 151013:
    {
        returnValue = F("Huffert");
        break;
    }
    case 151014:
    {
        returnValue = F("Hufgarten");
        break;
    }
    case 151015:
    {
        returnValue = F("Huflar");
        break;
    }
    case 151016:
    {
        returnValue = F("Huflarer Weg");
        break;
    }
    case 151017:
    {
        returnValue = F("Huflarweg");
        break;
    }
    case 151018:
    {
        returnValue = F("Huflattichstr.");
        break;
    }
    case 151019:
    {
        returnValue = F("Huflattichweg");
        break;
    }
    case 151020:
    {
        returnValue = F("Hufnaglweg");
        break;
    }
    case 151021:
    {
        returnValue = F("Hufnerstr.");
        break;
    }
    case 151022:
    {
        returnValue = F("Hufnerweg");
        break;
    }
    case 151023:
    {
        returnValue = F("Hufring");
        break;
    }
    case 151024:
    {
        returnValue = F("Hufsche Weg");
        break;
    }
    case 151025:
    {
        returnValue = F("Hufschlag");
        break;
    }
    case 151026:
    {
        returnValue = F("Hufschmiedeweg");
        break;
    }
    case 151027:
    {
        returnValue = F("Hufschmiedgasse");
        break;
    }
    case 151028:
    {
        returnValue = F("Hufschmiedskamp");
        break;
    }
    case 151029:
    {
        returnValue = F("Hufschmiedstr.");
        break;
    }
    case 151030:
    {
        returnValue = F("Hufschmiedweg");
        break;
    }
    case 151031:
    {
        returnValue = F("Hufstr.");
        break;
    }
    case 151032:
    {
        returnValue = F("Huftenstr.");
        break;
    }
    case 151033:
    {
        returnValue = F("Hufweg");
        break;
    }
    case 151034:
    {
        returnValue = F("Hug");
        break;
    }
    case 151035:
    {
        returnValue = F("Hugelitzer Weg");
        break;
    }
    case 151036:
    {
        returnValue = F("Hugenbergweg");
        break;
    }
    case 151037:
    {
        returnValue = F("Hugenhauser Weg");
        break;
    }
    case 151038:
    {
        returnValue = F("Hugenhof");
        break;
    }
    case 151039:
    {
        returnValue = F("Hugenhofweg");
        break;
    }
    case 151040:
    {
        returnValue = F("Hugenkotten");
        break;
    }
    case 151041:
    {
        returnValue = F("Hugenmattweg");
        break;
    }
    case 151042:
    {
        returnValue = F("Hugenmoor");
        break;
    }
    case 151043:
    {
        returnValue = F("Hugenottenallee");
        break;
    }
    case 151044:
    {
        returnValue = F("Hugenottenpark");
        break;
    }
    case 151045:
    {
        returnValue = F("Hugenottenplatz");
        break;
    }
    case 151046:
    {
        returnValue = F("Hugenottenstr.");
        break;
    }
    case 151047:
    {
        returnValue = F("Hugenottenweg");
        break;
    }
    case 151048:
    {
        returnValue = F("Hugenpoth");
        break;
    }
    case 151049:
    {
        returnValue = F("Hugenwaldweg");
        break;
    }
    case 151050:
    {
        returnValue = F("Hugesweg");
        break;
    }
    case 151051:
    {
        returnValue = F("Huggasse");
        break;
    }
    case 151052:
    {
        returnValue = F("Huggenberger-Str.");
        break;
    }
    case 151053:
    {
        returnValue = F("Huggenlaubacher Str.");
        break;
    }
    case 151054:
    {
        returnValue = F("Huggenlaubacher Weg");
        break;
    }
    case 151055:
    {
        returnValue = F("Huglfinger Str.");
        break;
    }
    case 151056:
    {
        returnValue = F("Hugo Peus Weg");
        break;
    }
    case 151057:
    {
        returnValue = F("Hugo Schatt Weg");
        break;
    }
    case 151058:
    {
        returnValue = F("Hugo-Ackermann-Str.");
        break;
    }
    case 151059:
    {
        returnValue = F("Hugo-Amelung-Str.");
        break;
    }
    case 151060:
    {
        returnValue = F("Hugo-Ament-Str.");
        break;
    }
    case 151061:
    {
        returnValue = F("Hugo-Asbach-Str.");
        break;
    }
    case 151062:
    {
        returnValue = F("Hugo-Banniza-Str.");
        break;
    }
    case 151063:
    {
        returnValue = F("Hugo-Beyerle-Str.");
        break;
    }
    case 151064:
    {
        returnValue = F("Hugo-Borbeck-Str.");
        break;
    }
    case 151065:
    {
        returnValue = F("Hugo-Boss-Str.");
        break;
    }
    case 151066:
    {
        returnValue = F("Hugo-Braasch-Weg");
        break;
    }
    case 151067:
    {
        returnValue = F("Hugo-Broßmer-Str.");
        break;
    }
    case 151068:
    {
        returnValue = F("Hugo-Brunner-Str.");
        break;
    }
    case 151069:
    {
        returnValue = F("Hugo-Brunninger-Str.");
        break;
    }
    case 151070:
    {
        returnValue = F("Hugo-Busch-Str.");
        break;
    }
    case 151071:
    {
        returnValue = F("Hugo-Buschmann-Str.");
        break;
    }
    case 151072:
    {
        returnValue = F("Hugo-Bücking-Str.");
        break;
    }
    case 151073:
    {
        returnValue = F("Hugo-Colditz-Str.");
        break;
    }
    case 151074:
    {
        returnValue = F("Hugo-Distler-Weg");
        break;
    }
    case 151075:
    {
        returnValue = F("Hugo-Donder-Str.");
        break;
    }
    case 151076:
    {
        returnValue = F("Hugo-Droste-Str.");
        break;
    }
    case 151077:
    {
        returnValue = F("Hugo-Duphorn-Str.");
        break;
    }
    case 151078:
    {
        returnValue = F("Hugo-Eberhardt-Weg");
        break;
    }
    case 151079:
    {
        returnValue = F("Hugo-Eberle-Str.");
        break;
    }
    case 151080:
    {
        returnValue = F("Hugo-Eckener-Allee");
        break;
    }
    case 151081:
    {
        returnValue = F("Hugo-Eckener-Ring");
        break;
    }
    case 151082:
    {
        returnValue = F("Hugo-Eckener-Str.");
        break;
    }
    case 151083:
    {
        returnValue = F("Hugo-Elsner-Str.");
        break;
    }
    case 151084:
    {
        returnValue = F("Hugo-Engelmann-Str.");
        break;
    }
    case 151085:
    {
        returnValue = F("Hugo-Erfurt-Str.");
        break;
    }
    case 151086:
    {
        returnValue = F("Hugo-Faßbender-Weg");
        break;
    }
    case 151087:
    {
        returnValue = F("Hugo-Finke-Str.");
        break;
    }
    case 151088:
    {
        returnValue = F("Hugo-Fischer-Weg");
        break;
    }
    case 151089:
    {
        returnValue = F("Hugo-Friedrich-Hartmann-Str.");
        break;
    }
    case 151090:
    {
        returnValue = F("Hugo-Gast-Siedlung");
        break;
    }
    case 151091:
    {
        returnValue = F("Hugo-Gehrts-Str.");
        break;
    }
    case 151092:
    {
        returnValue = F("Hugo-Geiger-Siedlung");
        break;
    }
    case 151093:
    {
        returnValue = F("Hugo-Geiger-Str.");
        break;
    }
    case 151094:
    {
        returnValue = F("Hugo-Grana-Str.");
        break;
    }
    case 151095:
    {
        returnValue = F("Hugo-Greger-Str.");
        break;
    }
    case 151096:
    {
        returnValue = F("Hugo-Grotius-Str.");
        break;
    }
    case 151097:
    {
        returnValue = F("Hugo-Grotius-Weg");
        break;
    }
    case 151098:
    {
        returnValue = F("Hugo-Haase-Str.");
        break;
    }
    case 151099:
    {
        returnValue = F("Hugo-Hagenkötter-Str.");
        break;
    }
    case 151100:
    {
        returnValue = F("Hugo-Halt-Weg");
        break;
    }
    case 151101:
    {
        returnValue = F("Hugo-Hartung-Weg");
        break;
    }
    case 151102:
    {
        returnValue = F("Hugo-Hatzler-Str.");
        break;
    }
    case 151103:
    {
        returnValue = F("Hugo-Heinemann-Str.");
        break;
    }
    case 151104:
    {
        returnValue = F("Hugo-Heinrich-Weg");
        break;
    }
    case 151105:
    {
        returnValue = F("Hugo-Helfritz-Str.");
        break;
    }
    case 151106:
    {
        returnValue = F("Hugo-Herden-Ring");
        break;
    }
    case 151107:
    {
        returnValue = F("Hugo-Herfeldt-Str.");
        break;
    }
    case 151108:
    {
        returnValue = F("Hugo-Herrmann-Str.");
        break;
    }
    case 151109:
    {
        returnValue = F("Hugo-Hesse-Str.");
        break;
    }
    case 151110:
    {
        returnValue = F("Hugo-Hoffmann-Ring");
        break;
    }
    case 151111:
    {
        returnValue = F("Hugo-Hofmann-Str.");
        break;
    }
    case 151112:
    {
        returnValue = F("Hugo-Häring-Str.");
        break;
    }
    case 151113:
    {
        returnValue = F("Hugo-Jacobi-Str.");
        break;
    }
    case 151114:
    {
        returnValue = F("Hugo-Jacobs-Str.");
        break;
    }
    case 151115:
    {
        returnValue = F("Hugo-Jentsch-Str.");
        break;
    }
    case 151116:
    {
        returnValue = F("Hugo-Joachim-Str.");
        break;
    }
    case 151117:
    {
        returnValue = F("Hugo-Junkers-Ring");
        break;
    }
    case 151118:
    {
        returnValue = F("Hugo-Junkers-Str.");
        break;
    }
    case 151119:
    {
        returnValue = F("Hugo-Jäckel-Platz");
        break;
    }
    case 151120:
    {
        returnValue = F("Hugo-Kauffmann-Str.");
        break;
    }
    case 151121:
    {
        returnValue = F("Hugo-Keller-Str.");
        break;
    }
    case 151122:
    {
        returnValue = F("Hugo-Koch-Str.");
        break;
    }
    case 151123:
    {
        returnValue = F("Hugo-Köcke-Weg");
        break;
    }
    case 151124:
    {
        returnValue = F("Hugo-König-Str.");
        break;
    }
    case 151125:
    {
        returnValue = F("Hugo-Lassalle-Str.");
        break;
    }
    case 151126:
    {
        returnValue = F("Hugo-Loersch-Str.");
        break;
    }
    case 151127:
    {
        returnValue = F("Hugo-Lützner-Str.");
        break;
    }
    case 151128:
    {
        returnValue = F("Hugo-Mathe-Str.");
        break;
    }
    case 151129:
    {
        returnValue = F("Hugo-Matthiessen-Weg");
        break;
    }
    case 151130:
    {
        returnValue = F("Hugo-Mense-Str.");
        break;
    }
    case 151131:
    {
        returnValue = F("Hugo-Merckens-Str.");
        break;
    }
    case 151132:
    {
        returnValue = F("Hugo-Meroth-Str.");
        break;
    }
    case 151133:
    {
        returnValue = F("Hugo-Merten-Weg");
        break;
    }
    case 151134:
    {
        returnValue = F("Hugo-Michel-Str.");
        break;
    }
    case 151135:
    {
        returnValue = F("Hugo-Männel-Weg");
        break;
    }
    case 151136:
    {
        returnValue = F("Hugo-Mäulen-Str.");
        break;
    }
    case 151137:
    {
        returnValue = F("Hugo-Müller-Str.");
        break;
    }
    case 151138:
    {
        returnValue = F("Hugo-Neufeld-Str.");
        break;
    }
    case 151139:
    {
        returnValue = F("Hugo-Otto-Zimmer-Str.");
        break;
    }
    case 151140:
    {
        returnValue = F("Hugo-Pawlecki-Str.");
        break;
    }
    case 151141:
    {
        returnValue = F("Hugo-Peters-Str.");
        break;
    }
    case 151142:
    {
        returnValue = F("Hugo-Post-Str.");
        break;
    }
    case 151143:
    {
        returnValue = F("Hugo-Preuß-Platz");
        break;
    }
    case 151144:
    {
        returnValue = F("Hugo-Preuß-Str.");
        break;
    }
    case 151145:
    {
        returnValue = F("Hugo-Recken-Str.");
        break;
    }
    case 151146:
    {
        returnValue = F("Hugo-Reich-Str.");
        break;
    }
    case 151147:
    {
        returnValue = F("Hugo-Remmert-Str.");
        break;
    }
    case 151148:
    {
        returnValue = F("Hugo-Riechers-Str.");
        break;
    }
    case 151149:
    {
        returnValue = F("Hugo-Riemann-Str.");
        break;
    }
    case 151150:
    {
        returnValue = F("Hugo-Rimmelspacher-Platz");
        break;
    }
    case 151151:
    {
        returnValue = F("Hugo-Rosenthal-Weg");
        break;
    }
    case 151152:
    {
        returnValue = F("Hugo-Rupf-Str.");
        break;
    }
    case 151153:
    {
        returnValue = F("Hugo-Ruppe-Str.");
        break;
    }
    case 151154:
    {
        returnValue = F("Hugo-Römpler-Str.");
        break;
    }
    case 151155:
    {
        returnValue = F("Hugo-Sachs-Str.");
        break;
    }
    case 151156:
    {
        returnValue = F("Hugo-Salzmann-Str.");
        break;
    }
    case 151157:
    {
        returnValue = F("Hugo-Schilling-Weg");
        break;
    }
    case 151158:
    {
        returnValue = F("Hugo-Schmidt-Str.");
        break;
    }
    case 151159:
    {
        returnValue = F("Hugo-Schmöle-Str.");
        break;
    }
    case 151160:
    {
        returnValue = F("Hugo-Schrott-Str.");
        break;
    }
    case 151161:
    {
        returnValue = F("Hugo-Sellheim-Str.");
        break;
    }
    case 151162:
    {
        returnValue = F("Hugo-Spiegel-Str.");
        break;
    }
    case 151163:
    {
        returnValue = F("Hugo-Trinckler-Str.");
        break;
    }
    case 151164:
    {
        returnValue = F("Hugo-Vogt-Str.");
        break;
    }
    case 151165:
    {
        returnValue = F("Hugo-Wachter-Str.");
        break;
    }
    case 151166:
    {
        returnValue = F("Hugo-Walther-Str.");
        break;
    }
    case 151167:
    {
        returnValue = F("Hugo-Wilz-Str.");
        break;
    }
    case 151168:
    {
        returnValue = F("Hugo-Winckler-Str.");
        break;
    }
    case 151169:
    {
        returnValue = F("Hugo-Wolf-Str.");
        break;
    }
    case 151170:
    {
        returnValue = F("Hugo-Wolf-Weg");
        break;
    }
    case 151171:
    {
        returnValue = F("Hugo-Wolff-Str.");
        break;
    }
    case 151172:
    {
        returnValue = F("Hugo-Wolfram-Platz");
        break;
    }
    case 151173:
    {
        returnValue = F("Hugo-Zade-Weg");
        break;
    }
    case 151174:
    {
        returnValue = F("Hugo-Zang-Weg");
        break;
    }
    case 151175:
    {
        returnValue = F("Hugo-Zschau-Str.");
        break;
    }
    case 151176:
    {
        returnValue = F("Hugo-von-Eltz-Str.");
        break;
    }
    case 151177:
    {
        returnValue = F("Hugo-von-Königsegg-Str.");
        break;
    }
    case 151178:
    {
        returnValue = F("Hugo-von-Trimberg-Str.");
        break;
    }
    case 151179:
    {
        returnValue = F("Hugo-von-Zobel-Str.");
        break;
    }
    case 151180:
    {
        returnValue = F("Hugolinus-Dörr-Str.");
        break;
    }
    case 151181:
    {
        returnValue = F("Hugoring");
        break;
    }
    case 151182:
    {
        returnValue = F("Hugostr.");
        break;
    }
    case 151183:
    {
        returnValue = F("Hugoweg");
        break;
    }
    case 151184:
    {
        returnValue = F("Hugsgasse");
        break;
    }
    case 151185:
    {
        returnValue = F("Hugstetter Str.");
        break;
    }
    case 151186:
    {
        returnValue = F("Hugstr.");
        break;
    }
    case 151187:
    {
        returnValue = F("Hugswaldweg");
        break;
    }
    case 151188:
    {
        returnValue = F("Hugsweierer Hauptstr.");
        break;
    }
    case 151189:
    {
        returnValue = F("Hugsweierer Kirchstr.");
        break;
    }
    case 151190:
    {
        returnValue = F("Hugweg");
        break;
    }
    case 151191:
    {
        returnValue = F("Huhbrücke");
        break;
    }
    case 151192:
    {
        returnValue = F("Huhestr.");
        break;
    }
    case 151193:
    {
        returnValue = F("Huhlbergweg");
        break;
    }
    case 151194:
    {
        returnValue = F("Huhle");
        break;
    }
    case 151195:
    {
        returnValue = F("Huhlenmarkt");
        break;
    }
    case 151196:
    {
        returnValue = F("Huhngraben");
        break;
    }
    case 151197:
    {
        returnValue = F("Huhnsberg");
        break;
    }
    case 151198:
    {
        returnValue = F("Huhnsecke");
        break;
    }
    case 151199:
    {
        returnValue = F("Huhnstr.");
        break;
    }
    case 151200:
    {
        returnValue = F("Huhnweg");
        break;
    }
    case 151201:
    {
        returnValue = F("Huhnwiese");
        break;
    }
    case 151202:
    {
        returnValue = F("Hui-Karl-Steg");
        break;
    }
    case 151203:
    {
        returnValue = F("Huisheimer Str.");
        break;
    }
    case 151204:
    {
        returnValue = F("Huisingas Lohne");
        break;
    }
    case 151205:
    {
        returnValue = F("Huiskensstr.");
        break;
    }
    case 151206:
    {
        returnValue = F("Huissenstr.");
        break;
    }
    case 151207:
    {
        returnValue = F("Hujetsweg");
        break;
    }
    case 151208:
    {
        returnValue = F("Huk");
        break;
    }
    case 151209:
    {
        returnValue = F("Hukensiel");
        break;
    }
    case 151210:
    {
        returnValue = F("Hulbenweg");
        break;
    }
    case 151211:
    {
        returnValue = F("Huldengarten");
        break;
    }
    case 151212:
    {
        returnValue = F("Huldsessener Str.");
        break;
    }
    case 151213:
    {
        returnValue = F("Huldstr.");
        break;
    }
    case 151214:
    {
        returnValue = F("Hulenfeldstr.");
        break;
    }
    case 151215:
    {
        returnValue = F("Hullenweg");
        break;
    }
    case 151216:
    {
        returnValue = F("Hullenwiesenstr.");
        break;
    }
    case 151217:
    {
        returnValue = F("Huller");
        break;
    }
    case 151218:
    {
        returnValue = F("Hullerberg");
        break;
    }
    case 151219:
    {
        returnValue = F("Hullerbusch");
        break;
    }
    case 151220:
    {
        returnValue = F("Hullerbuscher Weg");
        break;
    }
    case 151221:
    {
        returnValue = F("Hullerner Str.");
        break;
    }
    case 151222:
    {
        returnValue = F("Hullerweg");
        break;
    }
    case 151223:
    {
        returnValue = F("Hullmanns Damm");
        break;
    }
    case 151224:
    {
        returnValue = F("Hulocherweg");
        break;
    }
    case 151225:
    {
        returnValue = F("Hulpenkamp");
        break;
    }
    case 151226:
    {
        returnValue = F("Hulsbachweg");
        break;
    }
    case 151227:
    {
        returnValue = F("Hulst");
        break;
    }
    case 151228:
    {
        returnValue = F("Hulster Str.");
        break;
    }
    case 151229:
    {
        returnValue = F("Hultroper Dorfstr.");
        break;
    }
    case 151230:
    {
        returnValue = F("Hultroper Str.");
        break;
    }
    case 151231:
    {
        returnValue = F("Hulverscheidt");
        break;
    }
    case 151232:
    {
        returnValue = F("Humannsweg");
        break;
    }
    case 151233:
    {
        returnValue = F("Humbach");
        break;
    }
    case 151234:
    {
        returnValue = F("Humbacher Str.");
        break;
    }
    case 151235:
    {
        returnValue = F("Humbachstr.");
        break;
    }
    case 151236:
    {
        returnValue = F("Humberg");
        break;
    }
    case 151237:
    {
        returnValue = F("Humberger Landsweg");
        break;
    }
    case 151238:
    {
        returnValue = F("Humberger Weg");
        break;
    }
    case 151239:
    {
        returnValue = F("Humbergweg");
        break;
    }
    case 151240:
    {
        returnValue = F("Humberstr.");
        break;
    }
    case 151241:
    {
        returnValue = F("Humbertstr.");
        break;
    }
    case 151242:
    {
        returnValue = F("Humbold Park");
        break;
    }
    case 151243:
    {
        returnValue = F("Humboldredder");
        break;
    }
    case 151244:
    {
        returnValue = F("Humboldstr.");
        break;
    }
    case 151245:
    {
        returnValue = F("Humboldt-Str.");
        break;
    }
    case 151246:
    {
        returnValue = F("Humboldtallee");
        break;
    }
    case 151247:
    {
        returnValue = F("Humboldtbrücke");
        break;
    }
    case 151248:
    {
        returnValue = F("Humboldthain");
        break;
    }
    case 151249:
    {
        returnValue = F("Humboldthöhe");
        break;
    }
    case 151250:
    {
        returnValue = F("Humboldtring");
        break;
    }
    case 151251:
    {
        returnValue = F("Humboldtstr.");
        break;
    }
    case 151252:
    {
        returnValue = F("Humboldtweg");
        break;
    }
    case 151253:
    {
        returnValue = F("Humboldweg");
        break;
    }
    case 151254:
    {
        returnValue = F("Humbrechtser Str.");
        break;
    }
    case 151255:
    {
        returnValue = F("Humbrechtweg");
        break;
    }
    case 151256:
    {
        returnValue = F("Humbrink");
        break;
    }
    case 151257:
    {
        returnValue = F("Humbroich-Platz");
        break;
    }
    case 151258:
    {
        returnValue = F("Humbroichweg");
        break;
    }
    case 151259:
    {
        returnValue = F("Humbusch");
        break;
    }
    case 151260:
    {
        returnValue = F("Humecke");
        break;
    }
    case 151261:
    {
        returnValue = F("Humenser Str.");
        break;
    }
    case 151262:
    {
        returnValue = F("Humerichtstr.");
        break;
    }
    case 151263:
    {
        returnValue = F("Humeser Str.");
        break;
    }
    case 151264:
    {
        returnValue = F("Humesgarten");
        break;
    }
    case 151265:
    {
        returnValue = F("Humesstr.");
        break;
    }
    case 151266:
    {
        returnValue = F("Humesweg");
        break;
    }
    case 151267:
    {
        returnValue = F("Humeweg");
        break;
    }
    case 151268:
    {
        returnValue = F("Humfelder Str.");
        break;
    }
    case 151269:
    {
        returnValue = F("Humkenberg");
        break;
    }
    case 151270:
    {
        returnValue = F("Humlanger Str.");
        break;
    }
    case 151271:
    {
        returnValue = F("Hummel");
        break;
    }
    case 151272:
    {
        returnValue = F("Hummel-Zehnt-Str.");
        break;
    }
    case 151273:
    {
        returnValue = F("Hummelau");
        break;
    }
    case 151274:
    {
        returnValue = F("Hummelbachtal");
        break;
    }
    case 151275:
    {
        returnValue = F("Hummelbachweg");
        break;
    }
    case 151276:
    {
        returnValue = F("Hummelbaum");
        break;
    }
    case 151277:
    {
        returnValue = F("Hummelberg");
        break;
    }
    case 151278:
    {
        returnValue = F("Hummelbergebeneweg");
        break;
    }
    case 151279:
    {
        returnValue = F("Hummelberghof");
        break;
    }
    case 151280:
    {
        returnValue = F("Hummelberghüttenweg");
        break;
    }
    case 151281:
    {
        returnValue = F("Hummelbergstr.");
        break;
    }
    case 151282:
    {
        returnValue = F("Hummelbergweg");
        break;
    }
    case 151283:
    {
        returnValue = F("Hummelbühl");
        break;
    }
    case 151284:
    {
        returnValue = F("Hummelbühlstr.");
        break;
    }
    case 151285:
    {
        returnValue = F("Hummelbühlweg");
        break;
    }
    case 151286:
    {
        returnValue = F("Hummelecke");
        break;
    }
    case 151287:
    {
        returnValue = F("Hummelenlochweg");
        break;
    }
    case 151288:
    {
        returnValue = F("Hummelflug");
        break;
    }
    case 151289:
    {
        returnValue = F("Hummelgasse");
        break;
    }
    case 151290:
    {
        returnValue = F("Hummelgäßle");
        break;
    }
    case 151291:
    {
        returnValue = F("Hummelkopfweg");
        break;
    }
    case 151292:
    {
        returnValue = F("Hummellochweg");
        break;
    }
    case 151293:
    {
        returnValue = F("Hummelmühleweg");
        break;
    }
    case 151294:
    {
        returnValue = F("Hummelnstück");
        break;
    }
    case 151295:
    {
        returnValue = F("Hummelrainweg");
        break;
    }
    case 151296:
    {
        returnValue = F("Hummelring");
        break;
    }
    case 151297:
    {
        returnValue = F("Hummelroi");
        break;
    }
    case 151298:
    {
        returnValue = F("Hummelrütteweg");
        break;
    }
    case 151299:
    {
        returnValue = F("Hummelsberg");
        break;
    }
    case 151300:
    {
        returnValue = F("Hummelsberg Rundweg");
        break;
    }
    case 151301:
    {
        returnValue = F("Hummelsberger Str.");
        break;
    }
    case 151302:
    {
        returnValue = F("Hummelsbergstr.");
        break;
    }
    case 151303:
    {
        returnValue = F("Hummelsbrunnenweg");
        break;
    }
    case 151304:
    {
        returnValue = F("Hummelsbütteler Steindamm");
        break;
    }
    case 151305:
    {
        returnValue = F("Hummelsgasse");
        break;
    }
    case 151306:
    {
        returnValue = F("Hummelsklingenweg");
        break;
    }
    case 151307:
    {
        returnValue = F("Hummelskuppe");
        break;
    }
    case 151308:
    {
        returnValue = F("Hummelsteert");
        break;
    }
    case 151309:
    {
        returnValue = F("Hummelsteig");
        break;
    }
    case 151310:
    {
        returnValue = F("Hummelsterstr.");
        break;
    }
    case 151311:
    {
        returnValue = F("Hummelstieg");
        break;
    }
    case 151312:
    {
        returnValue = F("Hummelstr.");
        break;
    }
    case 151313:
    {
        returnValue = F("Hummelswaldweg");
        break;
    }
    case 151314:
    {
        returnValue = F("Hummelsweg");
        break;
    }
    case 151315:
    {
        returnValue = F("Hummelswiese");
        break;
    }
    case 151316:
    {
        returnValue = F("Hummelswiesenweg");
        break;
    }
    case 151317:
    {
        returnValue = F("Hummelteichweg");
        break;
    }
    case 151318:
    {
        returnValue = F("Hummeltstr.");
        break;
    }
    case 151319:
    {
        returnValue = F("Hummelweeth");
        break;
    }
    case 151320:
    {
        returnValue = F("Hummelweg");
        break;
    }
    case 151321:
    {
        returnValue = F("Hummelweiherstr.");
        break;
    }
    case 151322:
    {
        returnValue = F("Hummelwiese");
        break;
    }
    case 151323:
    {
        returnValue = F("Hummelwiesenlinie");
        break;
    }
    case 151324:
    {
        returnValue = F("Hummelwiesenweg");
        break;
    }
    case 151325:
    {
        returnValue = F("Hummenberg");
        break;
    }
    case 151326:
    {
        returnValue = F("Hummendorfer Str.");
        break;
    }
    case 151327:
    {
        returnValue = F("Hummentalerweg");
        break;
    }
    case 151328:
    {
        returnValue = F("Hummeratsried");
        break;
    }
    case 151329:
    {
        returnValue = F("Hummerbank");
        break;
    }
    case 151330:
    {
        returnValue = F("Hummerbrucher Str.");
        break;
    }
    case 151331:
    {
        returnValue = F("Hummergrund");
        break;
    }
    case 151332:
    {
        returnValue = F("Hummerich");
        break;
    }
    case 151333:
    {
        returnValue = F("Hummerichstr.");
        break;
    }
    case 151334:
    {
        returnValue = F("Hummering");
        break;
    }
    case 151335:
    {
        returnValue = F("Hummerleite");
        break;
    }
    case 151336:
    {
        returnValue = F("Hummersgasse");
        break;
    }
    case 151337:
    {
        returnValue = F("Hummerskamp");
        break;
    }
    case 151338:
    {
        returnValue = F("Hummersteinstr.");
        break;
    }
    case 151339:
    {
        returnValue = F("Hummerts Kamp");
        break;
    }
    case 151340:
    {
        returnValue = F("Hummertsesch");
        break;
    }
    case 151341:
    {
        returnValue = F("Hummertsrieder Str.");
        break;
    }
    case 151342:
    {
        returnValue = F("Hummerweg");
        break;
    }
    case 151343:
    {
        returnValue = F("Hummesgasse");
        break;
    }
    case 151344:
    {
        returnValue = F("Hummetröther Str.");
        break;
    }
    case 151345:
    {
        returnValue = F("Hummitzschberg");
        break;
    }
    case 151346:
    {
        returnValue = F("Hummler Str.");
        break;
    }
    case 151347:
    {
        returnValue = F("Humperdinckstr.");
        break;
    }
    case 151348:
    {
        returnValue = F("Humperdinckweg");
        break;
    }
    case 151349:
    {
        returnValue = F("Humpertweg");
        break;
    }
    case 151350:
    {
        returnValue = F("Humpesgarten");
        break;
    }
    case 151351:
    {
        returnValue = F("Humpisstr.");
        break;
    }
    case 151352:
    {
        returnValue = F("Humpisweg");
        break;
    }
    case 151353:
    {
        returnValue = F("Humpißweg");
        break;
    }
    case 151354:
    {
        returnValue = F("Humplgassl");
        break;
    }
    case 151355:
    {
        returnValue = F("Humplmayrweg");
        break;
    }
    case 151356:
    {
        returnValue = F("Humprechtsau");
        break;
    }
    case 151357:
    {
        returnValue = F("Humprechtshäusener Str.");
        break;
    }
    case 151358:
    {
        returnValue = F("Humprechtshäuser Str.");
        break;
    }
    case 151359:
    {
        returnValue = F("Humprehtstr.");
        break;
    }
    case 151360:
    {
        returnValue = F("Humsterdorf");
        break;
    }
    case 151361:
    {
        returnValue = F("Humweilerstr.");
        break;
    }
    case 151362:
    {
        returnValue = F("Hunas");
        break;
    }
    case 151363:
    {
        returnValue = F("Hunaustr.");
        break;
    }
    case 151364:
    {
        returnValue = F("Hunauweg");
        break;
    }
    case 151365:
    {
        returnValue = F("Hunboldtstr.");
        break;
    }
    case 151366:
    {
        returnValue = F("Hunburgstr.");
        break;
    }
    case 151367:
    {
        returnValue = F("Hund");
        break;
    }
    case 151368:
    {
        returnValue = F("Hund (Seemannstr.)");
        break;
    }
    case 151369:
    {
        returnValue = F("Hundauweg");
        break;
    }
    case 151370:
    {
        returnValue = F("Hunde-Allee");
        break;
    }
    case 151371:
    {
        returnValue = F("Hundeausbildung Elze");
        break;
    }
    case 151372:
    {
        returnValue = F("Hundebachweg");
        break;
    }
    case 151373:
    {
        returnValue = F("Hundeberg");
        break;
    }
    case 151374:
    {
        returnValue = F("Hundebollegass");
        break;
    }
    case 151375:
    {
        returnValue = F("Hundebreite");
        break;
    }
    case 151376:
    {
        returnValue = F("Hundebrink");
        break;
    }
    case 151377:
    {
        returnValue = F("Hundebusch");
        break;
    }
    case 151378:
    {
        returnValue = F("Hundegang");
        break;
    }
    case 151379:
    {
        returnValue = F("Hundegasse");
        break;
    }
    case 151380:
    {
        returnValue = F("Hundegrube");
        break;
    }
    case 151381:
    {
        returnValue = F("Hundehäger Weg");
        break;
    }
    case 151382:
    {
        returnValue = F("Hundeicker Str.");
        break;
    }
    case 151383:
    {
        returnValue = F("Hundeköttelweg");
        break;
    }
    case 151384:
    {
        returnValue = F("Hundelaufanlage");
        break;
    }
    case 151385:
    {
        returnValue = F("Hundelpfädchen");
        break;
    }
    case 151386:
    {
        returnValue = F("Hundelsgasse");
        break;
    }
    case 151387:
    {
        returnValue = F("Hundemacher Weg");
        break;
    }
    case 151388:
    {
        returnValue = F("Hundemarkt");
        break;
    }
    case 151389:
    {
        returnValue = F("Hundemstr.");
        break;
    }
    case 151390:
    {
        returnValue = F("Hundemühle");
        break;
    }
    case 151391:
    {
        returnValue = F("Hundener Str.");
        break;
    }
    case 151392:
    {
        returnValue = F("Hundepfuhl");
        break;
    }
    case 151393:
    {
        returnValue = F("Hundepfuhlsweg");
        break;
    }
    case 151394:
    {
        returnValue = F("Hundeplatz");
        break;
    }
    case 151395:
    {
        returnValue = F("Hundeplatz Westhofen");
        break;
    }
    case 151396:
    {
        returnValue = F("Hunderdorf");
        break;
    }
    case 151397:
    {
        returnValue = F("Hunderdorfer Str.");
        break;
    }
    case 151398:
    {
        returnValue = F("Hundersinger Str.");
        break;
    }
    case 151399:
    {
        returnValue = F("Hundert Beete");
        break;
    }
    case 151400:
    {
        returnValue = F("Hundert Morgen");
        break;
    }
    case 151401:
    {
        returnValue = F("Hundert Ruten");
        break;
    }
    case 151402:
    {
        returnValue = F("Hundert Stufen");
        break;
    }
    case 151403:
    {
        returnValue = F("Hundert-Morgen-Schneise");
        break;
    }
    case 151404:
    {
        returnValue = F("Hundert-Morgen-Str.");
        break;
    }
    case 151405:
    {
        returnValue = F("Hundertdiematsweg");
        break;
    }
    case 151406:
    {
        returnValue = F("Hundertjückweg");
        break;
    }
    case 151407:
    {
        returnValue = F("Hundertmorgen-Schneise");
        break;
    }
    case 151408:
    {
        returnValue = F("Hundertmorgenring");
        break;
    }
    case 151409:
    {
        returnValue = F("Hundertmorgenschneise");
        break;
    }
    case 151410:
    {
        returnValue = F("Hundertmorgenstr.");
        break;
    }
    case 151411:
    {
        returnValue = F("Hundertmorgenweg");
        break;
    }
    case 151412:
    {
        returnValue = F("Hundertwasser-Weg");
        break;
    }
    case 151413:
    {
        returnValue = F("Hundertwasserallee");
        break;
    }
    case 151414:
    {
        returnValue = F("Hundertwasserstr.");
        break;
    }
    case 151415:
    {
        returnValue = F("Hundeschule");
        break;
    }
    case 151416:
    {
        returnValue = F("Hundesgasse");
        break;
    }
    case 151417:
    {
        returnValue = F("Hundeshagen");
        break;
    }
    case 151418:
    {
        returnValue = F("Hundeshagener Str.");
        break;
    }
    case 151419:
    {
        returnValue = F("Hundesteert");
        break;
    }
    case 151420:
    {
        returnValue = F("Hundestr.");
        break;
    }
    case 151421:
    {
        returnValue = F("Hundestrand");
        break;
    }
    case 151422:
    {
        returnValue = F("Hundetraining");
        break;
    }
    case 151423:
    {
        returnValue = F("Hundeweg");
        break;
    }
    case 151424:
    {
        returnValue = F("Hundewick");
        break;
    }
    case 151425:
    {
        returnValue = F("Hundewiese");
        break;
    }
    case 151426:
    {
        returnValue = F("Hundewiese Achern");
        break;
    }
    case 151427:
    {
        returnValue = F("Hundeübungsplatz");
        break;
    }
    case 151428:
    {
        returnValue = F("Hundforter Benden");
        break;
    }
    case 151429:
    {
        returnValue = F("Hundforter Weg");
        break;
    }
    case 151430:
    {
        returnValue = F("Hundgasse");
        break;
    }
    case 151431:
    {
        returnValue = F("Hundhaupten");
        break;
    }
    case 151432:
    {
        returnValue = F("Hundhausener Str.");
        break;
    }
    case 151433:
    {
        returnValue = F("Hundhausenstr.");
        break;
    }
    case 151434:
    {
        returnValue = F("Hundheim");
        break;
    }
    case 151435:
    {
        returnValue = F("Hundheimer Str.");
        break;
    }
    case 151436:
    {
        returnValue = F("Hundheimer Weg");
        break;
    }
    case 151437:
    {
        returnValue = F("Hundinger Str.");
        break;
    }
    case 151438:
    {
        returnValue = F("Hundisburger Str.");
        break;
    }
    case 151439:
    {
        returnValue = F("Hundisburger Weg");
        break;
    }
    case 151440:
    {
        returnValue = F("Hundloh");
        break;
    }
    case 151441:
    {
        returnValue = F("Hundlohweg");
        break;
    }
    case 151442:
    {
        returnValue = F("Hundorfer Str.");
        break;
    }
    case 151443:
    {
        returnValue = F("Hundorfer Weg");
        break;
    }
    case 151444:
    {
        returnValue = F("Hundrieweg");
        break;
    }
    case 151445:
    {
        returnValue = F("Hundsackerweg");
        break;
    }
    case 151446:
    {
        returnValue = F("Hundsanger");
        break;
    }
    case 151447:
    {
        returnValue = F("Hundsanger Str.");
        break;
    }
    case 151448:
    {
        returnValue = F("Hundsbach");
        break;
    }
    case 151449:
    {
        returnValue = F("Hundsbacher Weg");
        break;
    }
    case 151450:
    {
        returnValue = F("Hundsbarg");
        break;
    }
    case 151451:
    {
        returnValue = F("Hundsberg");
        break;
    }
    case 151452:
    {
        returnValue = F("Hundsberger Str.");
        break;
    }
    case 151453:
    {
        returnValue = F("Hundsberger Sägmühle");
        break;
    }
    case 151454:
    {
        returnValue = F("Hundsbergstr.");
        break;
    }
    case 151455:
    {
        returnValue = F("Hundsbergweg");
        break;
    }
    case 151456:
    {
        returnValue = F("Hundsbichel");
        break;
    }
    case 151457:
    {
        returnValue = F("Hundsboden");
        break;
    }
    case 151458:
    {
        returnValue = F("Hundsbrunnenweg");
        break;
    }
    case 151459:
    {
        returnValue = F("Hundsbrunnertalstr.");
        break;
    }
    case 151460:
    {
        returnValue = F("Hundsbuckelweg");
        break;
    }
    case 151461:
    {
        returnValue = F("Hundsbusch");
        break;
    }
    case 151462:
    {
        returnValue = F("Hundsbühl");
        break;
    }
    case 151463:
    {
        returnValue = F("Hundscheiderweg");
        break;
    }
    case 151464:
    {
        returnValue = F("Hundscher Weg");
        break;
    }
    case 151465:
    {
        returnValue = F("Hundschneise");
        break;
    }
    case 151466:
    {
        returnValue = F("Hundsdorf");
        break;
    }
    case 151467:
    {
        returnValue = F("Hundsdorfer Str.");
        break;
    }
    case 151468:
    {
        returnValue = F("Hundsdorfer Weg");
        break;
    }
    case 151469:
    {
        returnValue = F("Hundseck");
        break;
    }
    case 151470:
    {
        returnValue = F("Hundseckstr.");
        break;
    }
    case 151471:
    {
        returnValue = F("Hundsfelde");
        break;
    }
    case 151472:
    {
        returnValue = F("Hundsfelder Str.");
        break;
    }
    case 151473:
    {
        returnValue = F("Hundsfelsstr.");
        break;
    }
    case 151474:
    {
        returnValue = F("Hundsgarten");
        break;
    }
    case 151475:
    {
        returnValue = F("Hundsgasse");
        break;
    }
    case 151476:
    {
        returnValue = F("Hundsgraben");
        break;
    }
    case 151477:
    {
        returnValue = F("Hundsgrüner Str.");
        break;
    }
    case 151478:
    {
        returnValue = F("Hundsgäßchen");
        break;
    }
    case 151479:
    {
        returnValue = F("Hundshager Weg");
        break;
    }
    case 151480:
    {
        returnValue = F("Hundshaldenweg");
        break;
    }
    case 151481:
    {
        returnValue = F("Hundshauser Str.");
        break;
    }
    case 151482:
    {
        returnValue = F("Hundshenkeweg");
        break;
    }
    case 151483:
    {
        returnValue = F("Hundshof");
        break;
    }
    case 151484:
    {
        returnValue = F("Hundshäuser Weg");
        break;
    }
    case 151485:
    {
        returnValue = F("Hundshübler Grenzflügel");
        break;
    }
    case 151486:
    {
        returnValue = F("Hundshübler Steig");
        break;
    }
    case 151487:
    {
        returnValue = F("Hundshübler Str.");
        break;
    }
    case 151488:
    {
        returnValue = F("Hundskehlenweg");
        break;
    }
    case 151489:
    {
        returnValue = F("Hundsklingenweg");
        break;
    }
    case 151490:
    {
        returnValue = F("Hundskopfstr.");
        break;
    }
    case 151491:
    {
        returnValue = F("Hundskopfsträßle");
        break;
    }
    case 151492:
    {
        returnValue = F("Hundskopfweg");
        break;
    }
    case 151493:
    {
        returnValue = F("Hundsleyweg");
        break;
    }
    case 151494:
    {
        returnValue = F("Hundslocher Pfad");
        break;
    }
    case 151495:
    {
        returnValue = F("Hundslochfuhre");
        break;
    }
    case 151496:
    {
        returnValue = F("Hundsloh");
        break;
    }
    case 151497:
    {
        returnValue = F("Hundslohe");
        break;
    }
    case 151498:
    {
        returnValue = F("Hundsmarkt");
        break;
    }
    case 151499:
    {
        returnValue = F("Hundsmarterflügel");
        break;
    }
    case 151500:
    {
        returnValue = F("Hundsmaul");
        break;
    }
    case 151501:
    {
        returnValue = F("Hundsmoor");
        break;
    }
    case 151502:
    {
        returnValue = F("Hundsmühler Landstr.");
        break;
    }
    case 151503:
    {
        returnValue = F("Hundspoint");
        break;
    }
    case 151504:
    {
        returnValue = F("Hundsreute");
        break;
    }
    case 151505:
    {
        returnValue = F("Hundsruck");
        break;
    }
    case 151506:
    {
        returnValue = F("Hundsruckenstr.");
        break;
    }
    case 151507:
    {
        returnValue = F("Hundsruckweg");
        break;
    }
    case 151508:
    {
        returnValue = F("Hundsrück");
        break;
    }
    case 151509:
    {
        returnValue = F("Hundsrücken");
        break;
    }
    case 151510:
    {
        returnValue = F("Hundsrückenstr.");
        break;
    }
    case 151511:
    {
        returnValue = F("Hundsrückenweg");
        break;
    }
    case 151512:
    {
        returnValue = F("Hundsrückstr.");
        break;
    }
    case 151513:
    {
        returnValue = F("Hundsrückweg");
        break;
    }
    case 151514:
    {
        returnValue = F("Hundsschleidener Weg");
        break;
    }
    case 151515:
    {
        returnValue = F("Hundsschweifer Str.");
        break;
    }
    case 151516:
    {
        returnValue = F("Hundsstrauch");
        break;
    }
    case 151517:
    {
        returnValue = F("Hundstallweg");
        break;
    }
    case 151518:
    {
        returnValue = F("Hundstalsträßchen");
        break;
    }
    case 151519:
    {
        returnValue = F("Hundstalweg");
        break;
    }
    case 151520:
    {
        returnValue = F("Hundsteert");
        break;
    }
    case 151521:
    {
        returnValue = F("Hundsteichstr.");
        break;
    }
    case 151522:
    {
        returnValue = F("Hundstr.");
        break;
    }
    case 151523:
    {
        returnValue = F("Hundstädter Str.");
        break;
    }
    case 151524:
    {
        returnValue = F("Hundsweg");
        break;
    }
    case 151525:
    {
        returnValue = F("Hundszell");
        break;
    }
    case 151526:
    {
        returnValue = F("Hundsäcker");
        break;
    }
    case 151527:
    {
        returnValue = F("Hundsäckerweg");
        break;
    }
    case 151528:
    {
        returnValue = F("Hundsänger Str.");
        break;
    }
    case 151529:
    {
        returnValue = F("Hundtelgen");
        break;
    }
    case 151530:
    {
        returnValue = F("Hundtengäßchen");
        break;
    }
    case 151531:
    {
        returnValue = F("Hundtgasse");
        break;
    }
    case 151532:
    {
        returnValue = F("Hundtsgasse");
        break;
    }
    case 151533:
    {
        returnValue = F("Hundweg");
        break;
    }
    case 151534:
    {
        returnValue = F("Hundweilerplatz");
        break;
    }
    case 151535:
    {
        returnValue = F("Hundweilerstr.");
        break;
    }
    case 151536:
    {
        returnValue = F("Hundwies");
        break;
    }
    case 151537:
    {
        returnValue = F("Hundzell");
        break;
    }
    case 151538:
    {
        returnValue = F("Hunelsweg");
        break;
    }
    case 151539:
    {
        returnValue = F("Hunenkamp");
        break;
    }
    case 151540:
    {
        returnValue = F("Hungebergweg");
        break;
    }
    case 151541:
    {
        returnValue = F("Hungener Str.");
        break;
    }
    case 151542:
    {
        returnValue = F("Hungener Weg");
        break;
    }
    case 151543:
    {
        returnValue = F("Hungenrother Weg");
        break;
    }
    case 151544:
    {
        returnValue = F("Hungerbachgasse");
        break;
    }
    case 151545:
    {
        returnValue = F("Hungerbachstr.");
        break;
    }
    case 151546:
    {
        returnValue = F("Hungerbachweg");
        break;
    }
    case 151547:
    {
        returnValue = F("Hungerberg");
        break;
    }
    case 151548:
    {
        returnValue = F("Hungerberg Weg");
        break;
    }
    case 151549:
    {
        returnValue = F("Hungerbergstr.");
        break;
    }
    case 151550:
    {
        returnValue = F("Hungerbergweg");
        break;
    }
    case 151551:
    {
        returnValue = F("Hungerbichlweg");
        break;
    }
    case 151552:
    {
        returnValue = F("Hungerborn");
        break;
    }
    case 151553:
    {
        returnValue = F("Hungerbornstr.");
        break;
    }
    case 151554:
    {
        returnValue = F("Hungerbornweg");
        break;
    }
    case 151555:
    {
        returnValue = F("Hungerbrunnenweg");
        break;
    }
    case 151556:
    {
        returnValue = F("Hungerbühl");
        break;
    }
    case 151557:
    {
        returnValue = F("Hungerbühlweg");
        break;
    }
    case 151558:
    {
        returnValue = F("Hungerfeldstr.");
        break;
    }
    case 151559:
    {
        returnValue = F("Hungerfennenweg");
        break;
    }
    case 151560:
    {
        returnValue = F("Hungergasse");
        break;
    }
    case 151561:
    {
        returnValue = F("Hungergraben");
        break;
    }
    case 151562:
    {
        returnValue = F("Hungerhaldenweg");
        break;
    }
    case 151563:
    {
        returnValue = F("Hungerkamp");
        break;
    }
    case 151564:
    {
        returnValue = F("Hungerkamper Weg");
        break;
    }
    case 151565:
    {
        returnValue = F("Hungerpfuhl");
        break;
    }
    case 151566:
    {
        returnValue = F("Hungersbergweg");
        break;
    }
    case 151567:
    {
        returnValue = F("Hungersbuschweg");
        break;
    }
    case 151568:
    {
        returnValue = F("Hungerstorf");
        break;
    }
    case 151569:
    {
        returnValue = F("Hungertal");
        break;
    }
    case 151570:
    {
        returnValue = F("Hungertwiete");
        break;
    }
    case 151571:
    {
        returnValue = F("Hungerweg");
        break;
    }
    case 151572:
    {
        returnValue = F("Hungerwiesen");
        break;
    }
    case 151573:
    {
        returnValue = F("Hungerwolfsweg");
        break;
    }
    case 151574:
    {
        returnValue = F("Hungholzrundweg");
        break;
    }
    case 151575:
    {
        returnValue = F("Hungraben");
        break;
    }
    case 151576:
    {
        returnValue = F("Hungriger Wolf");
        break;
    }
    case 151577:
    {
        returnValue = F("Hungstr.");
        break;
    }
    case 151578:
    {
        returnValue = F("Hungststr.");
        break;
    }
    case 151579:
    {
        returnValue = F("Hunhoi");
        break;
    }
    case 151580:
    {
        returnValue = F("Hunhorn");
        break;
    }
    case 151581:
    {
        returnValue = F("Huniburg");
        break;
    }
    case 151582:
    {
        returnValue = F("Hunikastr.");
        break;
    }
    case 151583:
    {
        returnValue = F("Huningweg");
        break;
    }
    case 151584:
    {
        returnValue = F("Hunisweg");
        break;
    }
    case 151585:
    {
        returnValue = F("Hunne");
        break;
    }
    case 151586:
    {
        returnValue = F("Hunnebieke");
        break;
    }
    case 151587:
    {
        returnValue = F("Hunnebreite");
        break;
    }
    case 151588:
    {
        returnValue = F("Hunnebrink");
        break;
    }
    case 151589:
    {
        returnValue = F("Hunnehopstr.");
        break;
    }
    case 151590:
    {
        returnValue = F("Hunnenbarg");
        break;
    }
    case 151591:
    {
        returnValue = F("Hunnenbarths Weg");
        break;
    }
    case 151592:
    {
        returnValue = F("Hunnenberg");
        break;
    }
    case 151593:
    {
        returnValue = F("Hunnenbergring");
        break;
    }
    case 151594:
    {
        returnValue = F("Hunnenbergstege");
        break;
    }
    case 151595:
    {
        returnValue = F("Hunnenbergstr.");
        break;
    }
    case 151596:
    {
        returnValue = F("Hunnenburg");
        break;
    }
    case 151597:
    {
        returnValue = F("Hunnenburgweg");
        break;
    }
    case 151598:
    {
        returnValue = F("Hunnengasse");
        break;
    }
    case 151599:
    {
        returnValue = F("Hunnenkamp");
        break;
    }
    case 151600:
    {
        returnValue = F("Hunnenkopfstr.");
        break;
    }
    case 151601:
    {
        returnValue = F("Hunnenkuhle");
        break;
    }
    case 151602:
    {
        returnValue = F("Hunnenmoorsweg");
        break;
    }
    case 151603:
    {
        returnValue = F("Hunnenring");
        break;
    }
    case 151604:
    {
        returnValue = F("Hunnenringstr.");
        break;
    }
    case 151605:
    {
        returnValue = F("Hunnenringweg");
        break;
    }
    case 151606:
    {
        returnValue = F("Hunnenstr.");
        break;
    }
    case 151607:
    {
        returnValue = F("Hunnenweg");
        break;
    }
    case 151608:
    {
        returnValue = F("Hunnkamp");
        break;
    }
    case 151609:
    {
        returnValue = F("Hunnmoorweg");
        break;
    }
    case 151610:
    {
        returnValue = F("Hunnsgasse");
        break;
    }
    case 151611:
    {
        returnValue = F("Hunnshörn");
        break;
    }
    case 151612:
    {
        returnValue = F("Hunold-Rump-Str.");
        break;
    }
    case 151613:
    {
        returnValue = F("Hunoldstaler Str.");
        break;
    }
    case 151614:
    {
        returnValue = F("Hunoldstaler Weg");
        break;
    }
    case 151615:
    {
        returnValue = F("Hunoldstr.");
        break;
    }
    case 151616:
    {
        returnValue = F("Hunoldtstr.");
        break;
    }
    case 151617:
    {
        returnValue = F("Hunolsteiner Str.");
        break;
    }
    case 151618:
    {
        returnValue = F("Hunostr.");
        break;
    }
    case 151619:
    {
        returnValue = F("Hunoweg");
        break;
    }
    case 151620:
    {
        returnValue = F("Hunpad");
        break;
    }
    case 151621:
    {
        returnValue = F("Hunrain");
        break;
    }
    case 151622:
    {
        returnValue = F("Hunsbachstr.");
        break;
    }
    case 151623:
    {
        returnValue = F("Hunsberg");
        break;
    }
    case 151624:
    {
        returnValue = F("Hunsbrückstr.");
        break;
    }
    case 151625:
    {
        returnValue = F("Hunschlade");
        break;
    }
    case 151626:
    {
        returnValue = F("Hunsdorfer Weg");
        break;
    }
    case 151627:
    {
        returnValue = F("Hunselweg");
        break;
    }
    case 151628:
    {
        returnValue = F("Hunsgasse");
        break;
    }
    case 151629:
    {
        returnValue = F("Hunsheimer Str.");
        break;
    }
    case 151630:
    {
        returnValue = F("Hunsrück");
        break;
    }
    case 151631:
    {
        returnValue = F("Hunsrückblick");
        break;
    }
    case 151632:
    {
        returnValue = F("Hunsrücker Str.");
        break;
    }
    case 151633:
    {
        returnValue = F("Hunsrücker Weg");
        break;
    }
    case 151634:
    {
        returnValue = F("Hunsrückhöhenstr.");
        break;
    }
    case 151635:
    {
        returnValue = F("Hunsrückstr.");
        break;
    }
    case 151636:
    {
        returnValue = F("Hunsrückweg");
        break;
    }
    case 151637:
    {
        returnValue = F("Hunstätterweg");
        break;
    }
    case 151638:
    {
        returnValue = F("Hunteaue");
        break;
    }
    case 151639:
    {
        returnValue = F("Huntebrück");
        break;
    }
    case 151640:
    {
        returnValue = F("Huntebrücker Hellmer");
        break;
    }
    case 151641:
    {
        returnValue = F("Huntebrücker Str.");
        break;
    }
    case 151642:
    {
        returnValue = F("Hunteburg");
        break;
    }
    case 151643:
    {
        returnValue = F("Hunteburger Str.");
        break;
    }
    case 151644:
    {
        returnValue = F("Hunteburger Weg");
        break;
    }
    case 151645:
    {
        returnValue = F("Hunteeck");
        break;
    }
    case 151646:
    {
        returnValue = F("Huntekamp");
        break;
    }
    case 151647:
    {
        returnValue = F("Huntepadd");
        break;
    }
    case 151648:
    {
        returnValue = F("Huntestr.");
        break;
    }
    case 151649:
    {
        returnValue = F("Huntetor");
        break;
    }
    case 151650:
    {
        returnValue = F("Hunteweg");
        break;
    }
    case 151651:
    {
        returnValue = F("Huntewinkel");
        break;
    }
    case 151652:
    {
        returnValue = F("Huntingdonring");
        break;
    }
    case 151653:
    {
        returnValue = F("Huntloser Moorweg");
        break;
    }
    case 151654:
    {
        returnValue = F("Huntloser Str.");
        break;
    }
    case 151655:
    {
        returnValue = F("Huntorf");
        break;
    }
    case 151656:
    {
        returnValue = F("Huntorfer Hellmer");
        break;
    }
    case 151657:
    {
        returnValue = F("Huntorfer Querweg");
        break;
    }
    case 151658:
    {
        returnValue = F("Huntorfer Weg");
        break;
    }
    case 151659:
    {
        returnValue = F("Huntsteerter Weg");
        break;
    }
    case 151660:
    {
        returnValue = F("Huntstr.");
        break;
    }
    case 151661:
    {
        returnValue = F("Huntzelstr.");
        break;
    }
    case 151662:
    {
        returnValue = F("Hunwesstr.");
        break;
    }
    case 151663:
    {
        returnValue = F("Hunzelweg");
        break;
    }
    case 151664:
    {
        returnValue = F("Hunzenbachstr.");
        break;
    }
    case 151665:
    {
        returnValue = F("Hunäusstr.");
        break;
    }
    case 151666:
    {
        returnValue = F("Huosiweg");
        break;
    }
    case 151667:
    {
        returnValue = F("Hupaldingerstr.");
        break;
    }
    case 151668:
    {
        returnValue = F("Hupaldweg");
        break;
    }
    case 151669:
    {
        returnValue = F("Hupenkamp");
        break;
    }
    case 151670:
    {
        returnValue = F("Hupfauer Anger");
        break;
    }
    case 151671:
    {
        returnValue = F("Hupferberg");
        break;
    }
    case 151672:
    {
        returnValue = F("Hupferpark");
        break;
    }
    case 151673:
    {
        returnValue = F("Hupfleitenweg");
        break;
    }
    case 151674:
    {
        returnValue = F("Hupoldweg");
        break;
    }
    case 151675:
    {
        returnValue = F("Huppach");
        break;
    }
    case 151676:
    {
        returnValue = F("Huppelrather Str.");
        break;
    }
    case 151677:
    {
        returnValue = F("Huppenbergstr.");
        break;
    }
    case 151678:
    {
        returnValue = F("Huppendorf");
        break;
    }
    case 151679:
    {
        returnValue = F("Huppendorfer Str.");
        break;
    }
    case 151680:
    {
        returnValue = F("Hupperather Schneise");
        break;
    }
    case 151681:
    {
        returnValue = F("Hupperather Str.");
        break;
    }
    case 151682:
    {
        returnValue = F("Hupperichweg");
        break;
    }
    case 151683:
    {
        returnValue = F("Hupperskamp");
        break;
    }
    case 151684:
    {
        returnValue = F("Hupperter Pfad");
        break;
    }
    case 151685:
    {
        returnValue = F("Huppertstaler Weg");
        break;
    }
    case 151686:
    {
        returnValue = F("Hupperweg");
        break;
    }
    case 151687:
    {
        returnValue = F("Hurdstr.");
        break;
    }
    case 151688:
    {
        returnValue = F("Hurenpfad");
        break;
    }
    case 151689:
    {
        returnValue = F("Hurenschneise");
        break;
    }
    case 151690:
    {
        returnValue = F("Hurlacher Str.");
        break;
    }
    case 151691:
    {
        returnValue = F("Hurleallee");
        break;
    }
    case 151692:
    {
        returnValue = F("Hurler Str.");
        break;
    }
    case 151693:
    {
        returnValue = F("Hurlings Kamp");
        break;
    }
    case 151694:
    {
        returnValue = F("Hurnloherstr.");
        break;
    }
    case 151695:
    {
        returnValue = F("Huron Court");
        break;
    }
    case 151696:
    {
        returnValue = F("Hurreler Weg");
        break;
    }
    case 151697:
    {
        returnValue = F("Hurringsweg");
        break;
    }
    case 151698:
    {
        returnValue = F("Hurschelwiese");
        break;
    }
    case 151699:
    {
        returnValue = F("Hurschstr.");
        break;
    }
    case 151700:
    {
        returnValue = F("Hursegang");
        break;
    }
    case 151701:
    {
        returnValue = F("Hurst");
        break;
    }
    case 151702:
    {
        returnValue = F("Hursterhofstr.");
        break;
    }
    case 151703:
    {
        returnValue = F("Hurststr.");
        break;
    }
    case 151704:
    {
        returnValue = F("Hurstweg");
        break;
    }
    case 151705:
    {
        returnValue = F("Hurt");
        break;
    }
    case 151706:
    {
        returnValue = F("Hurtenstr.");
        break;
    }
    case 151707:
    {
        returnValue = F("Hurterstr.");
        break;
    }
    case 151708:
    {
        returnValue = F("Hurthümes");
        break;
    }
    case 151709:
    {
        returnValue = F("Hurtweg");
        break;
    }
    case 151710:
    {
        returnValue = F("Hurwinstr.");
        break;
    }
    case 151711:
    {
        returnValue = F("Hurzfurtweg");
        break;
    }
    case 151712:
    {
        returnValue = F("Hus-Aren-Weg");
        break;
    }
    case 151713:
    {
        returnValue = F("Husadelstr.");
        break;
    }
    case 151714:
    {
        returnValue = F("Husar-Schulz-Weg");
        break;
    }
    case 151715:
    {
        returnValue = F("Husarenallee");
        break;
    }
    case 151716:
    {
        returnValue = F("Husarendamm");
        break;
    }
    case 151717:
    {
        returnValue = F("Husarendobelweg");
        break;
    }
    case 151718:
    {
        returnValue = F("Husarengasse");
        break;
    }
    case 151719:
    {
        returnValue = F("Husarenhof");
        break;
    }
    case 151720:
    {
        returnValue = F("Husarenhofstr.");
        break;
    }
    case 151721:
    {
        returnValue = F("Husarenpark");
        break;
    }
    case 151722:
    {
        returnValue = F("Husarenschneise");
        break;
    }
    case 151723:
    {
        returnValue = F("Husarensteig");
        break;
    }
    case 151724:
    {
        returnValue = F("Husarenstr.");
        break;
    }
    case 151725:
    {
        returnValue = F("Husarenweg");
        break;
    }
    case 151726:
    {
        returnValue = F("Husbarg");
        break;
    }
    case 151727:
    {
        returnValue = F("Husbargen");
        break;
    }
    case 151728:
    {
        returnValue = F("Husberg");
        break;
    }
    case 151729:
    {
        returnValue = F("Husberger Weg");
        break;
    }
    case 151730:
    {
        returnValue = F("Husbergermoor");
        break;
    }
    case 151731:
    {
        returnValue = F("Husby Wanderweg");
        break;
    }
    case 151732:
    {
        returnValue = F("Husbyfelder Str.");
        break;
    }
    case 151733:
    {
        returnValue = F("Husbyries");
        break;
    }
    case 151734:
    {
        returnValue = F("Huschweg");
        break;
    }
    case 151735:
    {
        returnValue = F("Husdahl");
        break;
    }
    case 151736:
    {
        returnValue = F("Husemanngasse");
        break;
    }
    case 151737:
    {
        returnValue = F("Husemannplatz");
        break;
    }
    case 151738:
    {
        returnValue = F("Husemanns Weg");
        break;
    }
    case 151739:
    {
        returnValue = F("Husemannstr.");
        break;
    }
    case 151740:
    {
        returnValue = F("Husener Str.");
        break;
    }
    case 151741:
    {
        returnValue = F("Husener Weg");
        break;
    }
    case 151742:
    {
        returnValue = F("Husenweg");
        break;
    }
    case 151743:
    {
        returnValue = F("Huser Feld");
        break;
    }
    case 151744:
    {
        returnValue = F("Husingstr.");
        break;
    }
    case 151745:
    {
        returnValue = F("Huskamp");
        break;
    }
    case 151746:
    {
        returnValue = F("Huskoppel");
        break;
    }
    case 151747:
    {
        returnValue = F("Huskoppelallee");
        break;
    }
    case 151748:
    {
        returnValue = F("Husmann-Weg");
        break;
    }
    case 151749:
    {
        returnValue = F("Husmanns Höhe");
        break;
    }
    case 151750:
    {
        returnValue = F("Husmannstr.");
        break;
    }
    case 151751:
    {
        returnValue = F("Husmeedenweg");
        break;
    }
    case 151752:
    {
        returnValue = F("Husmeer");
        break;
    }
    case 151753:
    {
        returnValue = F("Husselstr.");
        break;
    }
    case 151754:
    {
        returnValue = F("Hussenbierlstr.");
        break;
    }
    case 151755:
    {
        returnValue = F("Hussengasse");
        break;
    }
    case 151756:
    {
        returnValue = F("Hussenstr.");
        break;
    }
    case 151757:
    {
        returnValue = F("Husserweg");
        break;
    }
    case 151758:
    {
        returnValue = F("Hussitengasse");
        break;
    }
    case 151759:
    {
        returnValue = F("Hussitenplatz");
        break;
    }
    case 151760:
    {
        returnValue = F("Hussitenstr.");
        break;
    }
    case 151761:
    {
        returnValue = F("Hussitenweg");
        break;
    }
    case 151762:
    {
        returnValue = F("Husstä");
        break;
    }
    case 151763:
    {
        returnValue = F("Husstäenweg");
        break;
    }
    case 151764:
    {
        returnValue = F("Hustede");
        break;
    }
    case 151765:
    {
        returnValue = F("Hustedter Dorfstr.");
        break;
    }
    case 151766:
    {
        returnValue = F("Hustedter Ring");
        break;
    }
    case 151767:
    {
        returnValue = F("Hustedter Str.");
        break;
    }
    case 151768:
    {
        returnValue = F("Hustedter Weg");
        break;
    }
    case 151769:
    {
        returnValue = F("Hustedterweg");
        break;
    }
    case 151770:
    {
        returnValue = F("Hustedtstr.");
        break;
    }
    case 151771:
    {
        returnValue = F("Husteedenweg");
        break;
    }
    case 151772:
    {
        returnValue = F("Hustehnweg");
        break;
    }
    case 151773:
    {
        returnValue = F("Husteinweg");
        break;
    }
    case 151774:
    {
        returnValue = F("Hustener Str.");
        break;
    }
    case 151775:
    {
        returnValue = F("Hustenfeld");
        break;
    }
    case 151776:
    {
        returnValue = F("Hustenhof");
        break;
    }
    case 151777:
    {
        returnValue = F("Husterhöhstr.");
        break;
    }
    case 151778:
    {
        returnValue = F("Husterstr.");
        break;
    }
    case 151779:
    {
        returnValue = F("Hustert");
        break;
    }
    case 151780:
    {
        returnValue = F("Husthalstr.");
        break;
    }
    case 151781:
    {
        returnValue = F("Hustweg");
        break;
    }
    case 151782:
    {
        returnValue = F("Hustädter Str.");
        break;
    }
    case 151783:
    {
        returnValue = F("Hustäenweg");
        break;
    }
    case 151784:
    {
        returnValue = F("Husumer Baum");
        break;
    }
    case 151785:
    {
        returnValue = F("Husumer Chaussee");
        break;
    }
    case 151786:
    {
        returnValue = F("Husumer Feld");
        break;
    }
    case 151787:
    {
        returnValue = F("Husumer Hörn");
        break;
    }
    case 151788:
    {
        returnValue = F("Husumer Str.");
        break;
    }
    case 151789:
    {
        returnValue = F("Husumer Weg");
        break;
    }
    case 151790:
    {
        returnValue = F("Husumweg");
        break;
    }
    case 151791:
    {
        returnValue = F("Husweg");
        break;
    }
    case 151792:
    {
        returnValue = F("Huswisch");
        break;
    }
    case 151793:
    {
        returnValue = F("Hut");
        break;
    }
    case 151794:
    {
        returnValue = F("Hutacker");
        break;
    }
    case 151795:
    {
        returnValue = F("Hutackerstr.");
        break;
    }
    case 151796:
    {
        returnValue = F("Hutackerweg");
        break;
    }
    case 151797:
    {
        returnValue = F("Hutanger");
        break;
    }
    case 151798:
    {
        returnValue = F("Hutbaindt");
        break;
    }
    case 151799:
    {
        returnValue = F("Hutberg");
        break;
    }
    case 151800:
    {
        returnValue = F("Hutbergblick");
        break;
    }
    case 151801:
    {
        returnValue = F("Hutberggasse");
        break;
    }
    case 151802:
    {
        returnValue = F("Hutbergstr.");
        break;
    }
    case 151803:
    {
        returnValue = F("Hutbergweg");
        break;
    }
    case 151804:
    {
        returnValue = F("Hutbühlstr.");
        break;
    }
    case 151805:
    {
        returnValue = F("Hute");
        break;
    }
    case 151806:
    {
        returnValue = F("Hutenweg");
        break;
    }
    case 151807:
    {
        returnValue = F("Hutergasse");
        break;
    }
    case 151808:
    {
        returnValue = F("Hutersgasse");
        break;
    }
    case 151809:
    {
        returnValue = F("Hutestr.");
        break;
    }
    case 151810:
    {
        returnValue = F("Hutewald");
        break;
    }
    case 151811:
    {
        returnValue = F("Huteweg");
        break;
    }
    case 151812:
    {
        returnValue = F("Hutfeld");
        break;
    }
    case 151813:
    {
        returnValue = F("Hutfeldstr.");
        break;
    }
    case 151814:
    {
        returnValue = F("Hutfeldweg");
        break;
    }
    case 151815:
    {
        returnValue = F("Hutgartenweg");
        break;
    }
    case 151816:
    {
        returnValue = F("Hutgasse");
        break;
    }
    case 151817:
    {
        returnValue = F("Hutgraben");
        break;
    }
    case 151818:
    {
        returnValue = F("Hutha");
        break;
    }
    case 151819:
    {
        returnValue = F("Huthaer Weg");
        break;
    }
    case 151820:
    {
        returnValue = F("Huther Weg");
        break;
    }
    case 151821:
    {
        returnValue = F("Huthergasse");
        break;
    }
    case 151822:
    {
        returnValue = F("Huthfeld");
        break;
    }
    case 151823:
    {
        returnValue = F("Huthgartenstr.");
        break;
    }
    case 151824:
    {
        returnValue = F("Huthmacherhof");
        break;
    }
    case 151825:
    {
        returnValue = F("Huthmacherstr.");
        break;
    }
    case 151826:
    {
        returnValue = F("Huthscher Weg");
        break;
    }
    case 151827:
    {
        returnValue = F("Huthstr.");
        break;
    }
    case 151828:
    {
        returnValue = F("Huthweg");
        break;
    }
    case 151829:
    {
        returnValue = F("Huthüttenweg");
        break;
    }
    case 151830:
    {
        returnValue = F("Hutknapp");
        break;
    }
    case 151831:
    {
        returnValue = F("Hutlerbergweg");
        break;
    }
    case 151832:
    {
        returnValue = F("Hutloher Str.");
        break;
    }
    case 151833:
    {
        returnValue = F("Hutmacherdobel");
        break;
    }
    case 151834:
    {
        returnValue = F("Hutmachergasse");
        break;
    }
    case 151835:
    {
        returnValue = F("Hutmacherstr.");
        break;
    }
    case 151836:
    {
        returnValue = F("Hutmacherweg");
        break;
    }
    case 151837:
    {
        returnValue = F("Hutmattenstr.");
        break;
    }
    case 151838:
    {
        returnValue = F("Hutmattstr.");
        break;
    }
    case 151839:
    {
        returnValue = F("Hutneck");
        break;
    }
    case 151840:
    {
        returnValue = F("Hutpfad");
        break;
    }
    case 151841:
    {
        returnValue = F("Hutpfadweg");
        break;
    }
    case 151842:
    {
        returnValue = F("Hutschdorf");
        break;
    }
    case 151843:
    {
        returnValue = F("Hutschdorfer Str.");
        break;
    }
    case 151844:
    {
        returnValue = F("Hutschengässle");
        break;
    }
    case 151845:
    {
        returnValue = F("Hutschenreuther Str.");
        break;
    }
    case 151846:
    {
        returnValue = F("Hutschenweihergäßle");
        break;
    }
    case 151847:
    {
        returnValue = F("Hutschwinkel");
        break;
    }
    case 151848:
    {
        returnValue = F("Hutstr.");
        break;
    }
    case 151849:
    {
        returnValue = F("Hutteilstr.");
        break;
    }
    case 151850:
    {
        returnValue = F("Huttenbach");
        break;
    }
    case 151851:
    {
        returnValue = F("Huttenburgweg");
        break;
    }
    case 151852:
    {
        returnValue = F("Huttener Str.");
        break;
    }
    case 151853:
    {
        returnValue = F("Huttengasse");
        break;
    }
    case 151854:
    {
        returnValue = F("Huttengrund");
        break;
    }
    case 151855:
    {
        returnValue = F("Huttengrundstr.");
        break;
    }
    case 151856:
    {
        returnValue = F("Huttenheegstr.");
        break;
    }
    case 151857:
    {
        returnValue = F("Huttenheimer Landstr.");
        break;
    }
    case 151858:
    {
        returnValue = F("Huttenheimer Str.");
        break;
    }
    case 151859:
    {
        returnValue = F("Huttenkreuz");
        break;
    }
    case 151860:
    {
        returnValue = F("Huttenkreuzstr.");
        break;
    }
    case 151861:
    {
        returnValue = F("Huttenplatz");
        break;
    }
    case 151862:
    {
        returnValue = F("Huttenrainweg");
        break;
    }
    case 151863:
    {
        returnValue = F("Huttenstr.");
        break;
    }
    case 151864:
    {
        returnValue = F("Huttentalstr.");
        break;
    }
    case 151865:
    {
        returnValue = F("Huttenweg");
        break;
    }
    case 151866:
    {
        returnValue = F("Hutterdorf");
        break;
    }
    case 151867:
    {
        returnValue = F("Hutterer");
        break;
    }
    case 151868:
    {
        returnValue = F("Hutterer Weg");
        break;
    }
    case 151869:
    {
        returnValue = F("Hutterhof");
        break;
    }
    case 151870:
    {
        returnValue = F("Huttersbühlstr.");
        break;
    }
    case 151871:
    {
        returnValue = F("Huttfleth");
        break;
    }
    case 151872:
    {
        returnValue = F("Huttflether Weg");
        break;
    }
    case 151873:
    {
        returnValue = F("Hutthurmer Str.");
        break;
    }
    case 151874:
    {
        returnValue = F("Huttinger Weg");
        break;
    }
    case 151875:
    {
        returnValue = F("Huttorweg");
        break;
    }
    case 151876:
    {
        returnValue = F("Hutung");
        break;
    }
    case 151877:
    {
        returnValue = F("Hutungstr.");
        break;
    }
    case 151878:
    {
        returnValue = F("Hutweg");
        break;
    }
    case 151879:
    {
        returnValue = F("Hutweide");
        break;
    }
    case 151880:
    {
        returnValue = F("Hutweidenweg");
        break;
    }
    case 151881:
    {
        returnValue = F("Hutweidstr.");
        break;
    }
    case 151882:
    {
        returnValue = F("Hutwiese");
        break;
    }
    case 151883:
    {
        returnValue = F("Hutwiesenstr.");
        break;
    }
    case 151884:
    {
        returnValue = F("Hutwiesenweg");
        break;
    }
    case 151885:
    {
        returnValue = F("Hutwigsgrundweg");
        break;
    }
    case 151886:
    {
        returnValue = F("Hutzbergstr.");
        break;
    }
    case 151887:
    {
        returnValue = F("Hutzdorfer Str.");
        break;
    }
    case 151888:
    {
        returnValue = F("Hutzelberg");
        break;
    }
    case 151889:
    {
        returnValue = F("Hutzelbrunnen");
        break;
    }
    case 151890:
    {
        returnValue = F("Hutzelgasse");
        break;
    }
    case 151891:
    {
        returnValue = F("Hutzelhofweg");
        break;
    }
    case 151892:
    {
        returnValue = F("Hutzelmannstr.");
        break;
    }
    case 151893:
    {
        returnValue = F("Hutzelstr.");
        break;
    }
    case 151894:
    {
        returnValue = F("Hutzelwaldweg");
        break;
    }
    case 151895:
    {
        returnValue = F("Hutzelweg");
        break;
    }
    case 151896:
    {
        returnValue = F("Hutzenthal");
        break;
    }
    case 151897:
    {
        returnValue = F("Hutzlmühlstr.");
        break;
    }
    case 151898:
    {
        returnValue = F("Hutäcker");
        break;
    }
    case 151899:
    {
        returnValue = F("Hutäckerstr.");
        break;
    }
    case 151900:
    {
        returnValue = F("Huule");
        break;
    }
    case 151901:
    {
        returnValue = F("Huuskoppel");
        break;
    }
    case 151902:
    {
        returnValue = F("Huven");
        break;
    }
    case 151903:
    {
        returnValue = F("Huvenhoopstr.");
        break;
    }
    case 151904:
    {
        returnValue = F("Huvenweg");
        break;
    }
    case 151905:
    {
        returnValue = F("Huverheide");
        break;
    }
    case 151906:
    {
        returnValue = F("Huveskath");
        break;
    }
    case 151907:
    {
        returnValue = F("Huweg");
        break;
    }
    case 151908:
    {
        returnValue = F("Huwelslay");
        break;
    }
    case 151909:
    {
        returnValue = F("Huwinkelstr.");
        break;
    }
    case 151910:
    {
        returnValue = F("Huxel");
        break;
    }
    case 151911:
    {
        returnValue = F("Huxelrebenweg");
        break;
    }
    case 151912:
    {
        returnValue = F("Huxelstr.");
        break;
    }
    case 151913:
    {
        returnValue = F("Huxelweg");
        break;
    }
    case 151914:
    {
        returnValue = F("Huxerweg");
        break;
    }
    case 151915:
    {
        returnValue = F("Huxfelder See");
        break;
    }
    case 151916:
    {
        returnValue = F("Huxfelder Str.");
        break;
    }
    case 151917:
    {
        returnValue = F("Huxhagenweg");
        break;
    }
    case 151918:
    {
        returnValue = F("Huxhardt");
        break;
    }
    case 151919:
    {
        returnValue = F("Huxmattenweg");
        break;
    }
    case 151920:
    {
        returnValue = F("Huxol");
        break;
    }
    case 151921:
    {
        returnValue = F("Huxoll");
        break;
    }
    case 151922:
    {
        returnValue = F("Huxwiedestr.");
        break;
    }
    case 151923:
    {
        returnValue = F("Huy");
        break;
    }
    case 151924:
    {
        returnValue = F("Huy-Neinstedter Str.");
        break;
    }
    case 151925:
    {
        returnValue = F("Huylandstr.");
        break;
    }
    case 151926:
    {
        returnValue = F("Huysauallee");
        break;
    }
    case 151927:
    {
        returnValue = F("Huyskensstr.");
        break;
    }
    case 151928:
    {
        returnValue = F("Huyssenstr.");
        break;
    }
    case 151929:
    {
        returnValue = F("Huystr.");
        break;
    }
    case 151930:
    {
        returnValue = F("Huyweg");
        break;
    }
    case 151931:
    {
        returnValue = F("Hußmannplatz");
        break;
    }
    case 151932:
    {
        returnValue = F("Hußmannsweg");
        break;
    }
    case 151933:
    {
        returnValue = F("Hußstr.");
        break;
    }
    case 151934:
    {
        returnValue = F("Hußweilerstr.");
        break;
    }
    case 151935:
    {
        returnValue = F("Hußwiesenweg");
        break;
    }
    case 151936:
    {
        returnValue = F("Hyazinthenring");
        break;
    }
    case 151937:
    {
        returnValue = F("Hyazinthenstr.");
        break;
    }
    case 151938:
    {
        returnValue = F("Hyazinthenweg");
        break;
    }
    case 151939:
    {
        returnValue = F("Hyddenburg");
        break;
    }
    case 151940:
    {
        returnValue = F("Hydepark");
        break;
    }
    case 151941:
    {
        returnValue = F("Hye");
        break;
    }
    case 151942:
    {
        returnValue = F("Hyeholz");
        break;
    }
    case 151943:
    {
        returnValue = F("Hygin-Kiene-Str.");
        break;
    }
    case 151944:
    {
        returnValue = F("Hygstetter Str.");
        break;
    }
    case 151945:
    {
        returnValue = F("Hyholmer Weg");
        break;
    }
    case 151946:
    {
        returnValue = F("Hykamp");
        break;
    }
    case 151947:
    {
        returnValue = F("Hyklint");
        break;
    }
    case 151948:
    {
        returnValue = F("Hylenstr.");
        break;
    }
    case 151949:
    {
        returnValue = F("Hylken");
        break;
    }
    case 151950:
    {
        returnValue = F("Hymerring");
        break;
    }
    case 151951:
    {
        returnValue = F("Hynzinthenweg");
        break;
    }
    case 151952:
    {
        returnValue = F("Hytht");
        break;
    }
    case 151953:
    {
        returnValue = F("Häbenerstr.");
        break;
    }
    case 151954:
    {
        returnValue = F("Häberle-Planie");
        break;
    }
    case 151955:
    {
        returnValue = F("Häberlenstr.");
        break;
    }
    case 151956:
    {
        returnValue = F("Häberlesbrücke");
        break;
    }
    case 151957:
    {
        returnValue = F("Häberlestr.");
        break;
    }
    case 151958:
    {
        returnValue = F("Häberlinstr.");
        break;
    }
    case 151959:
    {
        returnValue = F("Häberlinweg");
        break;
    }
    case 151960:
    {
        returnValue = F("Häberlstr.");
        break;
    }
    case 151961:
    {
        returnValue = F("Häbernstr.");
        break;
    }
    case 151962:
    {
        returnValue = F("Häbernweg");
        break;
    }
    case 151963:
    {
        returnValue = F("Häbersteig");
        break;
    }
    case 151964:
    {
        returnValue = F("Häckelchen");
        break;
    }
    case 151965:
    {
        returnValue = F("Häckeltches Weg");
        break;
    }
    case 151966:
    {
        returnValue = F("Häckergasse");
        break;
    }
    case 151967:
    {
        returnValue = F("Häckergrund");
        break;
    }
    case 151968:
    {
        returnValue = F("Häckerlingsgasse");
        break;
    }
    case 151969:
    {
        returnValue = F("Häckerspfad");
        break;
    }
    case 151970:
    {
        returnValue = F("Häckersteig");
        break;
    }
    case 151971:
    {
        returnValue = F("Häckersteige");
        break;
    }
    case 151972:
    {
        returnValue = F("Häckerstr.");
        break;
    }
    case 151973:
    {
        returnValue = F("Häckerweg");
        break;
    }
    case 151974:
    {
        returnValue = F("Häckgasse");
        break;
    }
    case 151975:
    {
        returnValue = F("Häcklbreitenweg");
        break;
    }
    case 151976:
    {
        returnValue = F("Häcklerweiher");
        break;
    }
    case 151977:
    {
        returnValue = F("Häcklestr.");
        break;
    }
    case 151978:
    {
        returnValue = F("Häcklesweg");
        break;
    }
    case 151979:
    {
        returnValue = F("Häckleszeil");
        break;
    }
    case 151980:
    {
        returnValue = F("Häcklgasse");
        break;
    }
    case 151981:
    {
        returnValue = F("Häcklinger Str.");
        break;
    }
    case 151982:
    {
        returnValue = F("Häcklinger Weg");
        break;
    }
    case 151983:
    {
        returnValue = F("Häcklstr.");
        break;
    }
    case 151984:
    {
        returnValue = F("Häcksbilstein");
        break;
    }
    case 151985:
    {
        returnValue = F("Häckselweg");
        break;
    }
    case 151986:
    {
        returnValue = F("Hädchenshof");
        break;
    }
    case 151987:
    {
        returnValue = F("Hädrichweg");
        break;
    }
    case 151988:
    {
        returnValue = F("Häere Rott");
        break;
    }
    case 151989:
    {
        returnValue = F("Häfchenweg");
        break;
    }
    case 151990:
    {
        returnValue = F("Häfeleweg");
        break;
    }
    case 151991:
    {
        returnValue = F("Häfelishofstr.");
        break;
    }
    case 151992:
    {
        returnValue = F("Häfengasse");
        break;
    }
    case 151993:
    {
        returnValue = F("Häfenmarkt");
        break;
    }
    case 151994:
    {
        returnValue = F("Häfenweg");
        break;
    }
    case 151995:
    {
        returnValue = F("Häffegass");
        break;
    }
    case 151996:
    {
        returnValue = F("Häfkerstr.");
        break;
    }
    case 151997:
    {
        returnValue = F("Häfner Gäßchen");
        break;
    }
    case 151998:
    {
        returnValue = F("Häfner Markt");
        break;
    }
    case 151999:
    {
        returnValue = F("Häfner-Ohnhaus-Str.");
        break;
    }
    case 152000:
    {
        returnValue = F("Häfnerdeich");
        break;
    }
    case 152001:
    {
        returnValue = F("Häfnergang");
        break;
    }
    case 152002:
    {
        returnValue = F("Häfnergasse");
        break;
    }
    case 152003:
    {
        returnValue = F("Häfnergärten");
        break;
    }
    case 152004:
    {
        returnValue = F("Häfnergässchen");
        break;
    }
    case 152005:
    {
        returnValue = F("Häfnergäßchen");
        break;
    }
    case 152006:
    {
        returnValue = F("Häfnerhaslacher Steig");
        break;
    }
    case 152007:
    {
        returnValue = F("Häfnerhaslacher Str.");
        break;
    }
    case 152008:
    {
        returnValue = F("Häfnerhaslacher Weg");
        break;
    }
    case 152009:
    {
        returnValue = F("Häfnerhof");
        break;
    }
    case 152010:
    {
        returnValue = F("Häfnermarkt");
        break;
    }
    case 152011:
    {
        returnValue = F("Häfnersberg");
        break;
    }
    case 152012:
    {
        returnValue = F("Häfnersbuck");
        break;
    }
    case 152013:
    {
        returnValue = F("Häfnersbuckel");
        break;
    }
    case 152014:
    {
        returnValue = F("Häfnerschlagweg");
        break;
    }
    case 152015:
    {
        returnValue = F("Häfnerschneise");
        break;
    }
    case 152016:
    {
        returnValue = F("Häfnersgasse");
        break;
    }
    case 152017:
    {
        returnValue = F("Häfnersgehrenweg");
        break;
    }
    case 152018:
    {
        returnValue = F("Häfnersgässchen");
        break;
    }
    case 152019:
    {
        returnValue = F("Häfnersleite");
        break;
    }
    case 152020:
    {
        returnValue = F("Häfnersplatz");
        break;
    }
    case 152021:
    {
        returnValue = F("Häfnersteige");
        break;
    }
    case 152022:
    {
        returnValue = F("Häfnerstr.");
        break;
    }
    case 152023:
    {
        returnValue = F("Häfnersweg");
        break;
    }
    case 152024:
    {
        returnValue = F("Häfnerweg");
        break;
    }
    case 152025:
    {
        returnValue = F("Häfnetkopfweg");
        break;
    }
    case 152026:
    {
        returnValue = F("Häfnetstr.");
        break;
    }
    case 152027:
    {
        returnValue = F("Häfnetweg");
        break;
    }
    case 152028:
    {
        returnValue = F("Häge");
        break;
    }
    case 152029:
    {
        returnValue = F("Hägebüchstr.");
        break;
    }
    case 152030:
    {
        returnValue = F("Hägedörnsträßchen");
        break;
    }
    case 152031:
    {
        returnValue = F("Hägefeld");
        break;
    }
    case 152032:
    {
        returnValue = F("Hägelbergstr.");
        break;
    }
    case 152033:
    {
        returnValue = F("Hägelbergweg");
        break;
    }
    case 152034:
    {
        returnValue = F("Hägele");
        break;
    }
    case 152035:
    {
        returnValue = F("Hägelemattweg");
        break;
    }
    case 152036:
    {
        returnValue = F("Hägelesgasse");
        break;
    }
    case 152037:
    {
        returnValue = F("Hägelesweg");
        break;
    }
    case 152038:
    {
        returnValue = F("Hägeleweg");
        break;
    }
    case 152039:
    {
        returnValue = F("Hägenau");
        break;
    }
    case 152040:
    {
        returnValue = F("Hägener Kamp");
        break;
    }
    case 152041:
    {
        returnValue = F("Hägener Mühle");
        break;
    }
    case 152042:
    {
        returnValue = F("Hägener Str.");
        break;
    }
    case 152043:
    {
        returnValue = F("Hägenhorstweg");
        break;
    }
    case 152044:
    {
        returnValue = F("Hägenichstr.");
        break;
    }
    case 152045:
    {
        returnValue = F("Hägenisbusch-Querweg");
        break;
    }
    case 152046:
    {
        returnValue = F("Hägenisbuschweg");
        break;
    }
    case 152047:
    {
        returnValue = F("Hägenmarkpfad");
        break;
    }
    case 152048:
    {
        returnValue = F("Hägenstr.");
        break;
    }
    case 152049:
    {
        returnValue = F("Hägenwiesen");
        break;
    }
    case 152050:
    {
        returnValue = F("Häger Döp");
        break;
    }
    case 152051:
    {
        returnValue = F("Häger Marktplatz");
        break;
    }
    case 152052:
    {
        returnValue = F("Häger Mühle");
        break;
    }
    case 152053:
    {
        returnValue = F("Häger Str.");
        break;
    }
    case 152054:
    {
        returnValue = F("Häger Weg");
        break;
    }
    case 152055:
    {
        returnValue = F("Hägerburg");
        break;
    }
    case 152056:
    {
        returnValue = F("Hägerende");
        break;
    }
    case 152057:
    {
        returnValue = F("Hägerfeld");
        break;
    }
    case 152058:
    {
        returnValue = F("Hägerfelder Str.");
        break;
    }
    case 152059:
    {
        returnValue = F("Hägerfelder Weg");
        break;
    }
    case 152060:
    {
        returnValue = F("Hägerhof");
        break;
    }
    case 152061:
    {
        returnValue = F("Hägerle");
        break;
    }
    case 152062:
    {
        returnValue = F("Hägermauer");
        break;
    }
    case 152063:
    {
        returnValue = F("Hägerpohl");
        break;
    }
    case 152064:
    {
        returnValue = F("Hägers Mühle");
        break;
    }
    case 152065:
    {
        returnValue = F("Hägerstieg");
        break;
    }
    case 152066:
    {
        returnValue = F("Hägerstr.");
        break;
    }
    case 152067:
    {
        returnValue = F("Hägerweg");
        break;
    }
    case 152068:
    {
        returnValue = F("Hägewiesen");
        break;
    }
    case 152069:
    {
        returnValue = F("Hägichtweg");
        break;
    }
    case 152070:
    {
        returnValue = F("Hägisstr.");
        break;
    }
    case 152071:
    {
        returnValue = F("Hägiweg");
        break;
    }
    case 152072:
    {
        returnValue = F("Hägkampsweg");
        break;
    }
    case 152073:
    {
        returnValue = F("Hägle");
        break;
    }
    case 152074:
    {
        returnValue = F("Hägle-Weg");
        break;
    }
    case 152075:
    {
        returnValue = F("Hägleinsweg");
        break;
    }
    case 152076:
    {
        returnValue = F("Häglenstr.");
        break;
    }
    case 152077:
    {
        returnValue = F("Häglenweg");
        break;
    }
    case 152078:
    {
        returnValue = F("Häglestr.");
        break;
    }
    case 152079:
    {
        returnValue = F("Häglesträßle");
        break;
    }
    case 152080:
    {
        returnValue = F("Häglesweg");
        break;
    }
    case 152081:
    {
        returnValue = F("Hägleweg");
        break;
    }
    case 152082:
    {
        returnValue = F("Häglsbergerstr.");
        break;
    }
    case 152083:
    {
        returnValue = F("Hägmatt");
        break;
    }
    case 152084:
    {
        returnValue = F("Hägnach");
        break;
    }
    case 152085:
    {
        returnValue = F("Hägnachrainweg");
        break;
    }
    case 152086:
    {
        returnValue = F("Hägstall");
        break;
    }
    case 152087:
    {
        returnValue = F("Hägstellweg");
        break;
    }
    case 152088:
    {
        returnValue = F("Hägstelweg");
        break;
    }
    case 152089:
    {
        returnValue = F("Hägsterweg");
        break;
    }
    case 152090:
    {
        returnValue = F("Häherfall");
        break;
    }
    case 152091:
    {
        returnValue = F("Häherstr.");
        break;
    }
    case 152092:
    {
        returnValue = F("Häherweg");
        break;
    }
    case 152093:
    {
        returnValue = F("Hählganser Str.");
        break;
    }
    case 152094:
    {
        returnValue = F("Hähnchen");
        break;
    }
    case 152095:
    {
        returnValue = F("Hähnchenborn");
        break;
    }
    case 152096:
    {
        returnValue = F("Hähnchenstr.");
        break;
    }
    case 152097:
    {
        returnValue = F("Hähnchenweg");
        break;
    }
    case 152098:
    {
        returnValue = F("Hähnelgrund");
        break;
    }
    case 152099:
    {
        returnValue = F("Hähnelstr.");
        break;
    }
    case 152100:
    {
        returnValue = F("Hähnelweg");
        break;
    }
    case 152101:
    {
        returnValue = F("Hähnen");
        break;
    }
    case 152102:
    {
        returnValue = F("Hähnenkamp");
        break;
    }
    case 152103:
    {
        returnValue = F("Hähner Weg");
        break;
    }
    case 152104:
    {
        returnValue = F("Hähnerhofweg");
        break;
    }
    case 152105:
    {
        returnValue = F("Hähnerweg");
        break;
    }
    case 152106:
    {
        returnValue = F("Hähneweg");
        break;
    }
    case 152107:
    {
        returnValue = F("Hähnichener Str.");
        break;
    }
    case 152108:
    {
        returnValue = F("Hähnkamp");
        break;
    }
    case 152109:
    {
        returnValue = F("Hähnlebrunnen");
        break;
    }
    case 152110:
    {
        returnValue = F("Hähnlehofstr.");
        break;
    }
    case 152111:
    {
        returnValue = F("Hähnleiner Str.");
        break;
    }
    case 152112:
    {
        returnValue = F("Hähnlestr.");
        break;
    }
    case 152113:
    {
        returnValue = F("Hähnsaler Hof");
        break;
    }
    case 152114:
    {
        returnValue = F("Häkenstr.");
        break;
    }
    case 152115:
    {
        returnValue = F("Häktweg");
        break;
    }
    case 152116:
    {
        returnValue = F("Hälblingweg");
        break;
    }
    case 152117:
    {
        returnValue = F("Hälde");
        break;
    }
    case 152118:
    {
        returnValue = F("Häldebeneweg");
        break;
    }
    case 152119:
    {
        returnValue = F("Häldele");
        break;
    }
    case 152120:
    {
        returnValue = F("Häldelesberg");
        break;
    }
    case 152121:
    {
        returnValue = F("Häldelesweg");
        break;
    }
    case 152122:
    {
        returnValue = F("Häldeleweg");
        break;
    }
    case 152123:
    {
        returnValue = F("Hälden");
        break;
    }
    case 152124:
    {
        returnValue = F("Häldengarten");
        break;
    }
    case 152125:
    {
        returnValue = F("Häldengärten");
        break;
    }
    case 152126:
    {
        returnValue = F("Häldenkopfstr.");
        break;
    }
    case 152127:
    {
        returnValue = F("Häldenrain");
        break;
    }
    case 152128:
    {
        returnValue = F("Häldenrainweg");
        break;
    }
    case 152129:
    {
        returnValue = F("Häldensteige");
        break;
    }
    case 152130:
    {
        returnValue = F("Häldenstr.");
        break;
    }
    case 152131:
    {
        returnValue = F("Häldenweg");
        break;
    }
    case 152132:
    {
        returnValue = F("Hälderlingweg");
        break;
    }
    case 152133:
    {
        returnValue = F("Häldes");
        break;
    }
    case 152134:
    {
        returnValue = F("Häldestr.");
        break;
    }
    case 152135:
    {
        returnValue = F("Häldeweg");
        break;
    }
    case 152136:
    {
        returnValue = F("Häldlenstr.");
        break;
    }
    case 152137:
    {
        returnValue = F("Häldleweg");
        break;
    }
    case 152138:
    {
        returnValue = F("Häldäckerstr.");
        break;
    }
    case 152139:
    {
        returnValue = F("Hälftbuchenweg");
        break;
    }
    case 152140:
    {
        returnValue = F("Hällesweg");
        break;
    }
    case 152141:
    {
        returnValue = F("Hällische Str.");
        break;
    }
    case 152142:
    {
        returnValue = F("Hälsber Weg");
        break;
    }
    case 152143:
    {
        returnValue = F("Hälsbergstr.");
        break;
    }
    case 152144:
    {
        returnValue = F("Hältergasse");
        break;
    }
    case 152145:
    {
        returnValue = F("Hälterstr.");
        break;
    }
    case 152146:
    {
        returnValue = F("Hälverstr.");
        break;
    }
    case 152147:
    {
        returnValue = F("Hämbacher Str.");
        break;
    }
    case 152148:
    {
        returnValue = F("Hämeenlinnaer Str.");
        break;
    }
    case 152149:
    {
        returnValue = F("Hämeenlinnastr.");
        break;
    }
    case 152150:
    {
        returnValue = F("Hämeler Brink");
        break;
    }
    case 152151:
    {
        returnValue = F("Hämelerwalder Str.");
        break;
    }
    case 152152:
    {
        returnValue = F("Hämelerwaldstr.");
        break;
    }
    case 152153:
    {
        returnValue = F("Hämelheide");
        break;
    }
    case 152154:
    {
        returnValue = F("Hämelheider Str.");
        break;
    }
    case 152155:
    {
        returnValue = F("Hämelinger Str.");
        break;
    }
    case 152156:
    {
        returnValue = F("Hämelschenburger Str.");
        break;
    }
    case 152157:
    {
        returnValue = F("Hämelseestr.");
        break;
    }
    case 152158:
    {
        returnValue = F("Hämelstr.");
        break;
    }
    case 152159:
    {
        returnValue = F("Hämergasse");
        break;
    }
    case 152160:
    {
        returnValue = F("Hämingkamp");
        break;
    }
    case 152161:
    {
        returnValue = F("Hämmelgasse");
        break;
    }
    case 152162:
    {
        returnValue = F("Hämmelsgasse");
        break;
    }
    case 152163:
    {
        returnValue = F("Hämmerbergstr.");
        break;
    }
    case 152164:
    {
        returnValue = F("Hämmerchen");
        break;
    }
    case 152165:
    {
        returnValue = F("Hämmerchensgäßchen");
        break;
    }
    case 152166:
    {
        returnValue = F("Hämmerer Ortsstr.");
        break;
    }
    case 152167:
    {
        returnValue = F("Hämmerer Str.");
        break;
    }
    case 152168:
    {
        returnValue = F("Hämmerle");
        break;
    }
    case 152169:
    {
        returnValue = F("Hämmerlegässle");
        break;
    }
    case 152170:
    {
        returnValue = F("Hämmerleinsmühle");
        break;
    }
    case 152171:
    {
        returnValue = F("Hämmerleinsmühlstr.");
        break;
    }
    case 152172:
    {
        returnValue = F("Hämmerlesbergweg");
        break;
    }
    case 152173:
    {
        returnValue = F("Hämmerlestr.");
        break;
    }
    case 152174:
    {
        returnValue = F("Hämmerleweg");
        break;
    }
    case 152175:
    {
        returnValue = F("Hämmerling");
        break;
    }
    case 152176:
    {
        returnValue = F("Hämmerlinggasse");
        break;
    }
    case 152177:
    {
        returnValue = F("Hämmerlingstr.");
        break;
    }
    case 152178:
    {
        returnValue = F("Hämmerlingweg");
        break;
    }
    case 152179:
    {
        returnValue = F("Hämmern");
        break;
    }
    case 152180:
    {
        returnValue = F("Hämmernplatz");
        break;
    }
    case 152181:
    {
        returnValue = F("Hämmerweg");
        break;
    }
    case 152182:
    {
        returnValue = F("Hämmes Brink");
        break;
    }
    case 152183:
    {
        returnValue = F("Hämmweg");
        break;
    }
    case 152184:
    {
        returnValue = F("Hämpfergasse");
        break;
    }
    case 152185:
    {
        returnValue = F("Hämpstraat");
        break;
    }
    case 152186:
    {
        returnValue = F("Hänchener Str.");
        break;
    }
    case 152187:
    {
        returnValue = F("Hänchenweg");
        break;
    }
    case 152188:
    {
        returnValue = F("Händelallee");
        break;
    }
    case 152189:
    {
        returnValue = F("Händelerstr.");
        break;
    }
    case 152190:
    {
        returnValue = F("Händelgalerie");
        break;
    }
    case 152191:
    {
        returnValue = F("Händelhof");
        break;
    }
    case 152192:
    {
        returnValue = F("Händelplatz");
        break;
    }
    case 152193:
    {
        returnValue = F("Händelstr.");
        break;
    }
    case 152194:
    {
        returnValue = F("Händelweg");
        break;
    }
    case 152195:
    {
        returnValue = F("Händlbauerngasse");
        break;
    }
    case 152196:
    {
        returnValue = F("Händrichweg");
        break;
    }
    case 152197:
    {
        returnValue = F("Hänel-Steig");
        break;
    }
    case 152198:
    {
        returnValue = F("Hänelberg");
        break;
    }
    case 152199:
    {
        returnValue = F("Hänelpark");
        break;
    }
    case 152200:
    {
        returnValue = F("Hänelstr.");
        break;
    }
    case 152201:
    {
        returnValue = F("Hänferstr.");
        break;
    }
    case 152202:
    {
        returnValue = F("Hänfigstr.");
        break;
    }
    case 152203:
    {
        returnValue = F("Hänflingsberg");
        break;
    }
    case 152204:
    {
        returnValue = F("Hänflingsteig");
        break;
    }
    case 152205:
    {
        returnValue = F("Hänflingstr.");
        break;
    }
    case 152206:
    {
        returnValue = F("Hänflingsweg");
        break;
    }
    case 152207:
    {
        returnValue = F("Hänflingweg");
        break;
    }
    case 152208:
    {
        returnValue = F("Hängbachstr.");
        break;
    }
    case 152209:
    {
        returnValue = F("Hängbergstr.");
        break;
    }
    case 152210:
    {
        returnValue = F("Hängebank");
        break;
    }
    case 152211:
    {
        returnValue = F("Hängebauchschweine");
        break;
    }
    case 152212:
    {
        returnValue = F("Hängebauchschweingehege");
        break;
    }
    case 152213:
    {
        returnValue = F("Hängebergsweg");
        break;
    }
    case 152214:
    {
        returnValue = F("Hängebrücke");
        break;
    }
    case 152215:
    {
        returnValue = F("Hängebrücke Badhütten");
        break;
    }
    case 152216:
    {
        returnValue = F("Hängebrücke Halft");
        break;
    }
    case 152217:
    {
        returnValue = F("Hängebrücke Rochlitz");
        break;
    }
    case 152218:
    {
        returnValue = F("Hängeleite");
        break;
    }
    case 152219:
    {
        returnValue = F("Hängeleweg");
        break;
    }
    case 152220:
    {
        returnValue = F("Hängelsbreite");
        break;
    }
    case 152221:
    {
        returnValue = F("Hängelstr.");
        break;
    }
    case 152222:
    {
        returnValue = F("Hängendellerweg");
        break;
    }
    case 152223:
    {
        returnValue = F("Hängerstufenweg");
        break;
    }
    case 152224:
    {
        returnValue = F("Hängerweg");
        break;
    }
    case 152225:
    {
        returnValue = F("Hängesteg");
        break;
    }
    case 152226:
    {
        returnValue = F("Hängeweg");
        break;
    }
    case 152227:
    {
        returnValue = F("Hänggasse");
        break;
    }
    case 152228:
    {
        returnValue = F("Hänghofstr.");
        break;
    }
    case 152229:
    {
        returnValue = F("Hängigweg");
        break;
    }
    case 152230:
    {
        returnValue = F("Hängleitenweg");
        break;
    }
    case 152231:
    {
        returnValue = F("Hänglesweg");
        break;
    }
    case 152232:
    {
        returnValue = F("Hängsteigweg");
        break;
    }
    case 152233:
    {
        returnValue = F("Hängweg");
        break;
    }
    case 152234:
    {
        returnValue = F("Hänichen Käferbergstr.");
        break;
    }
    case 152235:
    {
        returnValue = F("Hänichenweg");
        break;
    }
    case 152236:
    {
        returnValue = F("Hänigser Kirchweg");
        break;
    }
    case 152237:
    {
        returnValue = F("Hänigser Str.");
        break;
    }
    case 152238:
    {
        returnValue = F("Hänischmühe");
        break;
    }
    case 152239:
    {
        returnValue = F("Hänischstr.");
        break;
    }
    case 152240:
    {
        returnValue = F("Hänleingäßchen");
        break;
    }
    case 152241:
    {
        returnValue = F("Hänlesmadweg");
        break;
    }
    case 152242:
    {
        returnValue = F("Hännersteigle");
        break;
    }
    case 152243:
    {
        returnValue = F("Hännerstr.");
        break;
    }
    case 152244:
    {
        returnValue = F("Hännes-Adamik-Str.");
        break;
    }
    case 152245:
    {
        returnValue = F("Hänscheider Str.");
        break;
    }
    case 152246:
    {
        returnValue = F("Hänschgässel");
        break;
    }
    case 152247:
    {
        returnValue = F("Hänsel und Gretel Weg");
        break;
    }
    case 152248:
    {
        returnValue = F("Hänsel-und-Gretel-Weg");
        break;
    }
    case 152249:
    {
        returnValue = F("Hänselmannstr.");
        break;
    }
    case 152250:
    {
        returnValue = F("Hänselriede");
        break;
    }
    case 152251:
    {
        returnValue = F("Hänselstr.");
        break;
    }
    case 152252:
    {
        returnValue = F("Hänselweg");
        break;
    }
    case 152253:
    {
        returnValue = F("Hänsengartenstr.");
        break;
    }
    case 152254:
    {
        returnValue = F("Hänsenwöhr");
        break;
    }
    case 152255:
    {
        returnValue = F("Hänslesbauernhof");
        break;
    }
    case 152256:
    {
        returnValue = F("Hänslesbauernwaldweg");
        break;
    }
    case 152257:
    {
        returnValue = F("Härberpfad");
        break;
    }
    case 152258:
    {
        returnValue = F("Härdchesweg");
        break;
    }
    case 152259:
    {
        returnValue = F("Härdlerstr.");
        break;
    }
    case 152260:
    {
        returnValue = F("Härdlestr.");
        break;
    }
    case 152261:
    {
        returnValue = F("Härdlesweg");
        break;
    }
    case 152262:
    {
        returnValue = F("Härdleweg");
        break;
    }
    case 152263:
    {
        returnValue = F("Härdtleweg");
        break;
    }
    case 152264:
    {
        returnValue = F("Härdtnerstr.");
        break;
    }
    case 152265:
    {
        returnValue = F("Härenwies");
        break;
    }
    case 152266:
    {
        returnValue = F("Häring");
        break;
    }
    case 152267:
    {
        returnValue = F("Häringen");
        break;
    }
    case 152268:
    {
        returnValue = F("Häringer Ausfahrt");
        break;
    }
    case 152269:
    {
        returnValue = F("Häringer Str.");
        break;
    }
    case 152270:
    {
        returnValue = F("Häringer Traufweg");
        break;
    }
    case 152271:
    {
        returnValue = F("Häringlohe");
        break;
    }
    case 152272:
    {
        returnValue = F("Häringsgäßle");
        break;
    }
    case 152273:
    {
        returnValue = F("Häringshorst");
        break;
    }
    case 152274:
    {
        returnValue = F("Häringssägmühle");
        break;
    }
    case 152275:
    {
        returnValue = F("Häringstein");
        break;
    }
    case 152276:
    {
        returnValue = F("Härkersäcker");
        break;
    }
    case 152277:
    {
        returnValue = F("Härle");
        break;
    }
    case 152278:
    {
        returnValue = F("Härle-Ferrwies");
        break;
    }
    case 152279:
    {
        returnValue = F("Härlefeld");
        break;
    }
    case 152280:
    {
        returnValue = F("Härlenweg");
        break;
    }
    case 152281:
    {
        returnValue = F("Härlesstr.");
        break;
    }
    case 152282:
    {
        returnValue = F("Härlestr.");
        break;
    }
    case 152283:
    {
        returnValue = F("Härlesweg");
        break;
    }
    case 152284:
    {
        returnValue = F("Härleweg");
        break;
    }
    case 152285:
    {
        returnValue = F("Härlingweg");
        break;
    }
    case 152286:
    {
        returnValue = F("Härlisberg");
        break;
    }
    case 152287:
    {
        returnValue = F("Härmlingstr.");
        break;
    }
    case 152288:
    {
        returnValue = F("Härpferstr.");
        break;
    }
    case 152289:
    {
        returnValue = F("Härrerstr.");
        break;
    }
    case 152290:
    {
        returnValue = F("Härriskuhl");
        break;
    }
    case 152291:
    {
        returnValue = F("Härsenstr.");
        break;
    }
    case 152292:
    {
        returnValue = F("Härskamp");
        break;
    }
    case 152293:
    {
        returnValue = F("Härte");
        break;
    }
    case 152294:
    {
        returnValue = F("Härtelhohl");
        break;
    }
    case 152295:
    {
        returnValue = F("Härtelstr.");
        break;
    }
    case 152296:
    {
        returnValue = F("Härteltsweg");
        break;
    }
    case 152297:
    {
        returnValue = F("Härtenbühlstr.");
        break;
    }
    case 152298:
    {
        returnValue = F("Härtenenweg");
        break;
    }
    case 152299:
    {
        returnValue = F("Härtensdorfer Weg");
        break;
    }
    case 152300:
    {
        returnValue = F("Härtenstr.");
        break;
    }
    case 152301:
    {
        returnValue = F("Härtenweg");
        break;
    }
    case 152302:
    {
        returnValue = F("Härtenwiesen");
        break;
    }
    case 152303:
    {
        returnValue = F("Härterichstr.");
        break;
    }
    case 152304:
    {
        returnValue = F("Härterweg");
        break;
    }
    case 152305:
    {
        returnValue = F("Härtestr.");
        break;
    }
    case 152306:
    {
        returnValue = F("Härteweg");
        break;
    }
    case 152307:
    {
        returnValue = F("Härtgasse");
        break;
    }
    case 152308:
    {
        returnValue = F("Härtingerstr.");
        break;
    }
    case 152309:
    {
        returnValue = F("Härtle");
        break;
    }
    case 152310:
    {
        returnValue = F("Härtlebergstr.");
        break;
    }
    case 152311:
    {
        returnValue = F("Härtleinstr.");
        break;
    }
    case 152312:
    {
        returnValue = F("Härtlestr.");
        break;
    }
    case 152313:
    {
        returnValue = F("Härtlesweg");
        break;
    }
    case 152314:
    {
        returnValue = F("Härtlesäckerstr.");
        break;
    }
    case 152315:
    {
        returnValue = F("Härtleweg");
        break;
    }
    case 152316:
    {
        returnValue = F("Härtlinger Str.");
        break;
    }
    case 152317:
    {
        returnValue = F("Härtlweg");
        break;
    }
    case 152318:
    {
        returnValue = F("Härtsfeldbahn");
        break;
    }
    case 152319:
    {
        returnValue = F("Härtsfeldstr.");
        break;
    }
    case 152320:
    {
        returnValue = F("Härtsfeldweg");
        break;
    }
    case 152321:
    {
        returnValue = F("Härtsfeldwerke");
        break;
    }
    case 152322:
    {
        returnValue = F("Härtwasen");
        break;
    }
    case 152323:
    {
        returnValue = F("Härtweg");
        break;
    }
    case 152324:
    {
        returnValue = F("Härtwigstr.");
        break;
    }
    case 152325:
    {
        returnValue = F("Häschendorf");
        break;
    }
    case 152326:
    {
        returnValue = F("Häschenstieg");
        break;
    }
    case 152327:
    {
        returnValue = F("Häschenweg");
        break;
    }
    case 152328:
    {
        returnValue = F("Häscher");
        break;
    }
    case 152329:
    {
        returnValue = F("Häsefeld");
        break;
    }
    case 152330:
    {
        returnValue = F("Häselbach");
        break;
    }
    case 152331:
    {
        returnValue = F("Häselbühl");
        break;
    }
    case 152332:
    {
        returnValue = F("Häseleyweg");
        break;
    }
    case 152333:
    {
        returnValue = F("Häselrainweg");
        break;
    }
    case 152334:
    {
        returnValue = F("Häselriether Str.");
        break;
    }
    case 152335:
    {
        returnValue = F("Häselsgarten");
        break;
    }
    case 152336:
    {
        returnValue = F("Häselstr.");
        break;
    }
    case 152337:
    {
        returnValue = F("Häselweg");
        break;
    }
    case 152338:
    {
        returnValue = F("Häsenberg");
        break;
    }
    case 152339:
    {
        returnValue = F("Häsener Str.");
        break;
    }
    case 152340:
    {
        returnValue = F("Häsener Weg");
        break;
    }
    case 152341:
    {
        returnValue = F("Häsgensweg");
        break;
    }
    case 152342:
    {
        returnValue = F("Häsigweg");
        break;
    }
    case 152343:
    {
        returnValue = F("Häsiken");
        break;
    }
    case 152344:
    {
        returnValue = F("Häslacher Str.");
        break;
    }
    case 152345:
    {
        returnValue = F("Häslacher Weg");
        break;
    }
    case 152346:
    {
        returnValue = F("Häslachstr.");
        break;
    }
    case 152347:
    {
        returnValue = F("Häsle");
        break;
    }
    case 152348:
    {
        returnValue = F("Häslenstr.");
        break;
    }
    case 152349:
    {
        returnValue = F("Häslenweg");
        break;
    }
    case 152350:
    {
        returnValue = F("Häslergasse");
        break;
    }
    case 152351:
    {
        returnValue = F("Häslesweg");
        break;
    }
    case 152352:
    {
        returnValue = F("Häsleweg");
        break;
    }
    case 152353:
    {
        returnValue = F("Häslich");
        break;
    }
    case 152354:
    {
        returnValue = F("Häslicher Randweg");
        break;
    }
    case 152355:
    {
        returnValue = F("Häslicher Weg");
        break;
    }
    case 152356:
    {
        returnValue = F("Häslichweg");
        break;
    }
    case 152357:
    {
        returnValue = F("Häslisacker");
        break;
    }
    case 152358:
    {
        returnValue = F("Häspelegäßchen");
        break;
    }
    case 152359:
    {
        returnValue = F("Häspeler Str.");
        break;
    }
    case 152360:
    {
        returnValue = F("Hässelackerstr.");
        break;
    }
    case 152361:
    {
        returnValue = F("Hässelackerweg");
        break;
    }
    case 152362:
    {
        returnValue = F("Hässelmühler Str.");
        break;
    }
    case 152363:
    {
        returnValue = F("Hässelrehm");
        break;
    }
    case 152364:
    {
        returnValue = F("Hässeltweg");
        break;
    }
    case 152365:
    {
        returnValue = F("Hässleholm");
        break;
    }
    case 152366:
    {
        returnValue = F("Hässtr.");
        break;
    }
    case 152367:
    {
        returnValue = F("Hästen");
        break;
    }
    case 152368:
    {
        returnValue = F("Hästener Weg");
        break;
    }
    case 152369:
    {
        returnValue = F("Hätschenfeld");
        break;
    }
    case 152370:
    {
        returnValue = F("Hätschenkamp");
        break;
    }
    case 152371:
    {
        returnValue = F("Hätzenberg");
        break;
    }
    case 152372:
    {
        returnValue = F("Hätzenbergstr.");
        break;
    }
    case 152373:
    {
        returnValue = F("Hätzerstr.");
        break;
    }
    case 152374:
    {
        returnValue = F("Hätzeweg");
        break;
    }
    case 152375:
    {
        returnValue = F("Hätznerstr.");
        break;
    }
    case 152376:
    {
        returnValue = F("Häubargskoppeltwiete");
        break;
    }
    case 152377:
    {
        returnValue = F("Häubargsweg");
        break;
    }
    case 152378:
    {
        returnValue = F("Häubelweg");
        break;
    }
    case 152379:
    {
        returnValue = F("Häubergweg");
        break;
    }
    case 152380:
    {
        returnValue = F("Häublesäcker");
        break;
    }
    case 152381:
    {
        returnValue = F("Häudekamp");
        break;
    }
    case 152382:
    {
        returnValue = F("Häuergasse");
        break;
    }
    case 152383:
    {
        returnValue = F("Häuersteig");
        break;
    }
    case 152384:
    {
        returnValue = F("Häuerstr.");
        break;
    }
    case 152385:
    {
        returnValue = F("Häuerweg");
        break;
    }
    case 152386:
    {
        returnValue = F("Häuflteilweg");
        break;
    }
    case 152387:
    {
        returnValue = F("Häuleskopfweg");
        break;
    }
    case 152388:
    {
        returnValue = F("Häulesstich");
        break;
    }
    case 152389:
    {
        returnValue = F("Häulesträßle");
        break;
    }
    case 152390:
    {
        returnValue = F("Häulesweg");
        break;
    }
    case 152391:
    {
        returnValue = F("Häuleweg");
        break;
    }
    case 152392:
    {
        returnValue = F("Häupenweg");
        break;
    }
    case 152393:
    {
        returnValue = F("Häuptle");
        break;
    }
    case 152394:
    {
        returnValue = F("Häuptlesallee");
        break;
    }
    case 152395:
    {
        returnValue = F("Häuptlingsstr.");
        break;
    }
    case 152396:
    {
        returnValue = F("Häuschen");
        break;
    }
    case 152397:
    {
        returnValue = F("Häuschen Schneise");
        break;
    }
    case 152398:
    {
        returnValue = F("Häuschenschneise");
        break;
    }
    case 152399:
    {
        returnValue = F("Häuschenstr.");
        break;
    }
    case 152400:
    {
        returnValue = F("Häuschertsweg");
        break;
    }
    case 152401:
    {
        returnValue = F("Häuselgasse");
        break;
    }
    case 152402:
    {
        returnValue = F("Häuselgrundweg");
        break;
    }
    case 152403:
    {
        returnValue = F("Häusellohweg");
        break;
    }
    case 152404:
    {
        returnValue = F("Häuselstein");
        break;
    }
    case 152405:
    {
        returnValue = F("Häuselstr.");
        break;
    }
    case 152406:
    {
        returnValue = F("Häuselweg");
        break;
    }
    case 152407:
    {
        returnValue = F("Häuseläcker");
        break;
    }
    case 152408:
    {
        returnValue = F("Häuser Born");
        break;
    }
    case 152409:
    {
        returnValue = F("Häuser Chaussee");
        break;
    }
    case 152410:
    {
        returnValue = F("Häuser Dombach");
        break;
    }
    case 152411:
    {
        returnValue = F("Häuser Hohle");
        break;
    }
    case 152412:
    {
        returnValue = F("Häuser Str.");
        break;
    }
    case 152413:
    {
        returnValue = F("Häuser Weg");
        break;
    }
    case 152414:
    {
        returnValue = F("Häuser Wegschneise");
        break;
    }
    case 152415:
    {
        returnValue = F("Häuser am See");
        break;
    }
    case 152416:
    {
        returnValue = F("Häuserallee");
        break;
    }
    case 152417:
    {
        returnValue = F("Häuserbacher Weg");
        break;
    }
    case 152418:
    {
        returnValue = F("Häuserbergweg");
        break;
    }
    case 152419:
    {
        returnValue = F("Häuserdickstr.");
        break;
    }
    case 152420:
    {
        returnValue = F("Häusereckschneise");
        break;
    }
    case 152421:
    {
        returnValue = F("Häuserer Allee");
        break;
    }
    case 152422:
    {
        returnValue = F("Häuserfeld Schneise");
        break;
    }
    case 152423:
    {
        returnValue = F("Häusergasse");
        break;
    }
    case 152424:
    {
        returnValue = F("Häuserhaldenweg");
        break;
    }
    case 152425:
    {
        returnValue = F("Häuserhof");
        break;
    }
    case 152426:
    {
        returnValue = F("Häuserhohl");
        break;
    }
    case 152427:
    {
        returnValue = F("Häuserichweg");
        break;
    }
    case 152428:
    {
        returnValue = F("Häusermartlweg");
        break;
    }
    case 152429:
    {
        returnValue = F("Häusern");
        break;
    }
    case 152430:
    {
        returnValue = F("Häuserner Str.");
        break;
    }
    case 152431:
    {
        returnValue = F("Häusernstr.");
        break;
    }
    case 152432:
    {
        returnValue = F("Häusernweg");
        break;
    }
    case 152433:
    {
        returnValue = F("Häuserreihe");
        break;
    }
    case 152434:
    {
        returnValue = F("Häusersbachstr.");
        break;
    }
    case 152435:
    {
        returnValue = F("Häuserschlag");
        break;
    }
    case 152436:
    {
        returnValue = F("Häuserseeschneise");
        break;
    }
    case 152437:
    {
        returnValue = F("Häuserstr.");
        break;
    }
    case 152438:
    {
        returnValue = F("Häuserwaldstr.");
        break;
    }
    case 152439:
    {
        returnValue = F("Häuserwasenweg");
        break;
    }
    case 152440:
    {
        returnValue = F("Häuserweg");
        break;
    }
    case 152441:
    {
        returnValue = F("Häuserwiesenstr.");
        break;
    }
    case 152442:
    {
        returnValue = F("Häuseräcker Weg");
        break;
    }
    case 152443:
    {
        returnValue = F("Häusgermühle");
        break;
    }
    case 152444:
    {
        returnValue = F("Häusinger Weg");
        break;
    }
    case 152445:
    {
        returnValue = F("Häusleacker");
        break;
    }
    case 152446:
    {
        returnValue = F("Häuslebergweg");
        break;
    }
    case 152447:
    {
        returnValue = F("Häusledobelweg");
        break;
    }
    case 152448:
    {
        returnValue = F("Häuslegarten");
        break;
    }
    case 152449:
    {
        returnValue = F("Häuslehaldenweg");
        break;
    }
    case 152450:
    {
        returnValue = F("Häuslematten");
        break;
    }
    case 152451:
    {
        returnValue = F("Häuslensried");
        break;
    }
    case 152452:
    {
        returnValue = F("Häuslenäcker");
        break;
    }
    case 152453:
    {
        returnValue = F("Häusler Heide");
        break;
    }
    case 152454:
    {
        returnValue = F("Häusler Reihe");
        break;
    }
    case 152455:
    {
        returnValue = F("Häusler Weg");
        break;
    }
    case 152456:
    {
        returnValue = F("Häuslerainbrücke");
        break;
    }
    case 152457:
    {
        returnValue = F("Häuslerberg");
        break;
    }
    case 152458:
    {
        returnValue = F("Häuslerei");
        break;
    }
    case 152459:
    {
        returnValue = F("Häuslereistr.");
        break;
    }
    case 152460:
    {
        returnValue = F("Häuslereiweg");
        break;
    }
    case 152461:
    {
        returnValue = F("Häuslergasse");
        break;
    }
    case 152462:
    {
        returnValue = F("Häuslerreihe");
        break;
    }
    case 152463:
    {
        returnValue = F("Häuslerstr.");
        break;
    }
    case 152464:
    {
        returnValue = F("Häuslerwall");
        break;
    }
    case 152465:
    {
        returnValue = F("Häuslerwasen");
        break;
    }
    case 152466:
    {
        returnValue = F("Häuslerweg");
        break;
    }
    case 152467:
    {
        returnValue = F("Häuslesattelweg");
        break;
    }
    case 152468:
    {
        returnValue = F("Häuslesweg");
        break;
    }
    case 152469:
    {
        returnValue = F("Häuslesäcker");
        break;
    }
    case 152470:
    {
        returnValue = F("Häusletriebsträßle");
        break;
    }
    case 152471:
    {
        returnValue = F("Häusleweg");
        break;
    }
    case 152472:
    {
        returnValue = F("Häuslingen 2, 3, 3 1/2, 5");
        break;
    }
    case 152473:
    {
        returnValue = F("Häuslinger Str.");
        break;
    }
    case 152474:
    {
        returnValue = F("Häuslinger Weg");
        break;
    }
    case 152475:
    {
        returnValue = F("Häuslings");
        break;
    }
    case 152476:
    {
        returnValue = F("Häuslingsdamm");
        break;
    }
    case 152477:
    {
        returnValue = F("Häuslingstr.");
        break;
    }
    case 152478:
    {
        returnValue = F("Häuslingsweg");
        break;
    }
    case 152479:
    {
        returnValue = F("Häuslweg");
        break;
    }
    case 152480:
    {
        returnValue = F("Häusserstr.");
        break;
    }
    case 152481:
    {
        returnValue = F("Häutbachgasse");
        break;
    }
    case 152482:
    {
        returnValue = F("Häutebachweg");
        break;
    }
    case 152483:
    {
        returnValue = F("Häußenäcker");
        break;
    }
    case 152484:
    {
        returnValue = F("Häußler Str.");
        break;
    }
    case 152485:
    {
        returnValue = F("Häven");
        break;
    }
    case 152486:
    {
        returnValue = F("Hävener Allee");
        break;
    }
    case 152487:
    {
        returnValue = F("Hävern");
        break;
    }
    case 152488:
    {
        returnValue = F("Häverner Brink");
        break;
    }
    case 152489:
    {
        returnValue = F("Häverner Dorfstr.");
        break;
    }
    case 152490:
    {
        returnValue = F("Häverner Eck");
        break;
    }
    case 152491:
    {
        returnValue = F("Häverner Meierhof");
        break;
    }
    case 152492:
    {
        returnValue = F("Häverner Ring");
        break;
    }
    case 152493:
    {
        returnValue = F("Häverner Str.");
        break;
    }
    case 152494:
    {
        returnValue = F("Häversteinweg");
        break;
    }
    case 152495:
    {
        returnValue = F("Häverstr.");
        break;
    }
    case 152496:
    {
        returnValue = F("Häverstädter Weg");
        break;
    }
    case 152497:
    {
        returnValue = F("Häwelmannweg");
        break;
    }
    case 152498:
    {
        returnValue = F("Häzelsgasse");
        break;
    }
    case 152499:
    {
        returnValue = F("Häßlers Reihe");
        break;
    }
    case 152500:
    {
        returnValue = F("Häßlerstr.");
        break;
    }
    case 152501:
    {
        returnValue = F("Häßlichweg");
        break;
    }
    case 152502:
    {
        returnValue = F("Häädplacken");
        break;
    }
    case 152503:
    {
        returnValue = F("Hédéstr.");
        break;
    }
    case 152504:
    {
        returnValue = F("Hénin-Beaumont-Str.");
        break;
    }
    case 152505:
    {
        returnValue = F("Hérouville-Saint-Clair-Platz");
        break;
    }
    case 152506:
    {
        returnValue = F("Héviz Str.");
        break;
    }
    case 152507:
    {
        returnValue = F("Höbachweg");
        break;
    }
    case 152508:
    {
        returnValue = F("Höbachweiher");
        break;
    }
    case 152509:
    {
        returnValue = F("Höbelweg");
        break;
    }
    case 152510:
    {
        returnValue = F("Höben");
        break;
    }
    case 152511:
    {
        returnValue = F("Höbenstr.");
        break;
    }
    case 152512:
    {
        returnValue = F("Höbersgasse");
        break;
    }
    case 152513:
    {
        returnValue = F("Höbinger Str.");
        break;
    }
    case 152514:
    {
        returnValue = F("Höbäckerweg");
        break;
    }
    case 152515:
    {
        returnValue = F("Höchberger Str.");
        break;
    }
    case 152516:
    {
        returnValue = F("Höchde");
        break;
    }
    case 152517:
    {
        returnValue = F("Höchelenacker");
        break;
    }
    case 152518:
    {
        returnValue = F("Höchelsberg");
        break;
    }
    case 152519:
    {
        returnValue = F("Höchenschwander Str.");
        break;
    }
    case 152520:
    {
        returnValue = F("Höchenweg");
        break;
    }
    case 152521:
    {
        returnValue = F("Höcherbergstr.");
        break;
    }
    case 152522:
    {
        returnValue = F("Höcherlgasse");
        break;
    }
    case 152523:
    {
        returnValue = F("Höcherstr.");
        break;
    }
    case 152524:
    {
        returnValue = F("Höchertlesweg");
        break;
    }
    case 152525:
    {
        returnValue = F("Höcherweg");
        break;
    }
    case 152526:
    {
        returnValue = F("Höchfeld");
        break;
    }
    case 152527:
    {
        returnValue = F("Höchheimer Str.");
        break;
    }
    case 152528:
    {
        returnValue = F("Höchlingstr.");
        break;
    }
    case 152529:
    {
        returnValue = F("Höchst");
        break;
    }
    case 152530:
    {
        returnValue = F("Höchstadter Str.");
        break;
    }
    case 152531:
    {
        returnValue = F("Höchstadter Weg");
        break;
    }
    case 152532:
    {
        returnValue = F("Höchstberg Weg");
        break;
    }
    case 152533:
    {
        returnValue = F("Höchstberger Str.");
        break;
    }
    case 152534:
    {
        returnValue = F("Höchstberger Weg");
        break;
    }
    case 152535:
    {
        returnValue = F("Höchsten");
        break;
    }
    case 152536:
    {
        returnValue = F("Höchstenbacher Str.");
        break;
    }
    case 152537:
    {
        returnValue = F("Höchstener Str.");
        break;
    }
    case 152538:
    {
        returnValue = F("Höchstenstr.");
        break;
    }
    case 152539:
    {
        returnValue = F("Höchstenweg");
        break;
    }
    case 152540:
    {
        returnValue = F("Höchster Berg");
        break;
    }
    case 152541:
    {
        returnValue = F("Höchster Str.");
        break;
    }
    case 152542:
    {
        returnValue = F("Höchster Weg");
        break;
    }
    case 152543:
    {
        returnValue = F("Höchstetter Str.");
        break;
    }
    case 152544:
    {
        returnValue = F("Höchststadt");
        break;
    }
    case 152545:
    {
        returnValue = F("Höchststr.");
        break;
    }
    case 152546:
    {
        returnValue = F("Höchstweg");
        break;
    }
    case 152547:
    {
        returnValue = F("Höchstädter Str.");
        break;
    }
    case 152548:
    {
        returnValue = F("Höchstädtstr.");
        break;
    }
    case 152549:
    {
        returnValue = F("Höchstätterweg");
        break;
    }
    case 152550:
    {
        returnValue = F("Höchte");
        break;
    }
    case 152551:
    {
        returnValue = F("Höchtekamp");
        break;
    }
    case 152552:
    {
        returnValue = F("Höchten");
        break;
    }
    case 152553:
    {
        returnValue = F("Höchtenweg");
        break;
    }
    case 152554:
    {
        returnValue = F("Höchter Str.");
        break;
    }
    case 152555:
    {
        returnValue = F("Höchtestr.");
        break;
    }
    case 152556:
    {
        returnValue = F("Höchteweg");
        break;
    }
    case 152557:
    {
        returnValue = F("Höckbarg");
        break;
    }
    case 152558:
    {
        returnValue = F("Höckberger Str.");
        break;
    }
    case 152559:
    {
        returnValue = F("Höckelböschstr.");
        break;
    }
    case 152560:
    {
        returnValue = F("Höckeler Schulweg");
        break;
    }
    case 152561:
    {
        returnValue = F("Höckeler Str.");
        break;
    }
    case 152562:
    {
        returnValue = F("Höckeler Weg");
        break;
    }
    case 152563:
    {
        returnValue = F("Höckelheimer Str.");
        break;
    }
    case 152564:
    {
        returnValue = F("Höckelmerstr.");
        break;
    }
    case 152565:
    {
        returnValue = F("Höckelshof");
        break;
    }
    case 152566:
    {
        returnValue = F("Höckendorfer Heideweg");
        break;
    }
    case 152567:
    {
        returnValue = F("Höckendorfer Str.");
        break;
    }
    case 152568:
    {
        returnValue = F("Höckendorfer Weg");
        break;
    }
    case 152569:
    {
        returnValue = F("Höckenkamp");
        break;
    }
    case 152570:
    {
        returnValue = F("Höckergasse");
        break;
    }
    case 152571:
    {
        returnValue = F("Höckerlein");
        break;
    }
    case 152572:
    {
        returnValue = F("Höckerlinienpfad");
        break;
    }
    case 152573:
    {
        returnValue = F("Höckersdorfer Str.");
        break;
    }
    case 152574:
    {
        returnValue = F("Höckersdorfer Weg");
        break;
    }
    case 152575:
    {
        returnValue = F("Höckerskamp");
        break;
    }
    case 152576:
    {
        returnValue = F("Höckhof");
        break;
    }
    case 152577:
    {
        returnValue = F("Höckhstr.");
        break;
    }
    case 152578:
    {
        returnValue = F("Höcklenkamper Str.");
        break;
    }
    case 152579:
    {
        returnValue = F("Höcklenkamper Weg");
        break;
    }
    case 152580:
    {
        returnValue = F("Höcklingser Weg");
        break;
    }
    case 152581:
    {
        returnValue = F("Höcknerplatz");
        break;
    }
    case 152582:
    {
        returnValue = F("Höckstr.");
        break;
    }
    case 152583:
    {
        returnValue = F("Höddelbach");
        break;
    }
    case 152584:
    {
        returnValue = F("Höden");
        break;
    }
    case 152585:
    {
        returnValue = F("Hödenauer Weg");
        break;
    }
    case 152586:
    {
        returnValue = F("Hödenbuschweg");
        break;
    }
    case 152587:
    {
        returnValue = F("Hödenweg");
        break;
    }
    case 152588:
    {
        returnValue = F("Höderath");
        break;
    }
    case 152589:
    {
        returnValue = F("Hödienwisch");
        break;
    }
    case 152590:
    {
        returnValue = F("Hödinger Str.");
        break;
    }
    case 152591:
    {
        returnValue = F("Hödinger Tobel");
        break;
    }
    case 152592:
    {
        returnValue = F("Hödlerstr.");
        break;
    }
    case 152593:
    {
        returnValue = F("Höf");
        break;
    }
    case 152594:
    {
        returnValue = F("Höfatsstr.");
        break;
    }
    case 152595:
    {
        returnValue = F("Höfatsweg");
        break;
    }
    case 152596:
    {
        returnValue = F("Höfchen");
        break;
    }
    case 152597:
    {
        returnValue = F("Höfchenstr.");
        break;
    }
    case 152598:
    {
        returnValue = F("Höfchenweg");
        break;
    }
    case 152599:
    {
        returnValue = F("Höfe am Sträßel");
        break;
    }
    case 152600:
    {
        returnValue = F("Höfegärten");
        break;
    }
    case 152601:
    {
        returnValue = F("Höfel");
        break;
    }
    case 152602:
    {
        returnValue = F("Höfelbachstr.");
        break;
    }
    case 152603:
    {
        returnValue = F("Höfelbachweg");
        break;
    }
    case 152604:
    {
        returnValue = F("Höfeler Landstr.");
        break;
    }
    case 152605:
    {
        returnValue = F("Höfelestr.");
        break;
    }
    case 152606:
    {
        returnValue = F("Höfelinger Weg");
        break;
    }
    case 152607:
    {
        returnValue = F("Höfelsfeld");
        break;
    }
    case 152608:
    {
        returnValue = F("Höfelsgasse");
        break;
    }
    case 152609:
    {
        returnValue = F("Höfelsstr.");
        break;
    }
    case 152610:
    {
        returnValue = F("Höfelstr.");
        break;
    }
    case 152611:
    {
        returnValue = F("Höfelweg");
        break;
    }
    case 152612:
    {
        returnValue = F("Höfen");
        break;
    }
    case 152613:
    {
        returnValue = F("Höfen b. Uckersdorf");
        break;
    }
    case 152614:
    {
        returnValue = F("Höfendorfer Str.");
        break;
    }
    case 152615:
    {
        returnValue = F("Höfener Hauptstr.");
        break;
    }
    case 152616:
    {
        returnValue = F("Höfener Ring");
        break;
    }
    case 152617:
    {
        returnValue = F("Höfener Steige");
        break;
    }
    case 152618:
    {
        returnValue = F("Höfener Str.");
        break;
    }
    case 152619:
    {
        returnValue = F("Höfener Weg");
        break;
    }
    case 152620:
    {
        returnValue = F("Höfenerweg");
        break;
    }
    case 152621:
    {
        returnValue = F("Höfenneusig");
        break;
    }
    case 152622:
    {
        returnValue = F("Höfenplatz");
        break;
    }
    case 152623:
    {
        returnValue = F("Höfenstr.");
        break;
    }
    case 152624:
    {
        returnValue = F("Höfentalstr.");
        break;
    }
    case 152625:
    {
        returnValue = F("Höfentalweg");
        break;
    }
    case 152626:
    {
        returnValue = F("Höfenweg");
        break;
    }
    case 152627:
    {
        returnValue = F("Höfenäckerle");
        break;
    }
    case 152628:
    {
        returnValue = F("Höfer Brühlweg");
        break;
    }
    case 152629:
    {
        returnValue = F("Höfer Rain");
        break;
    }
    case 152630:
    {
        returnValue = F("Höfer Steige");
        break;
    }
    case 152631:
    {
        returnValue = F("Höfer Str.");
        break;
    }
    case 152632:
    {
        returnValue = F("Höfer Weg");
        break;
    }
    case 152633:
    {
        returnValue = F("Höfer Äcker");
        break;
    }
    case 152634:
    {
        returnValue = F("Höfer-Ohl");
        break;
    }
    case 152635:
    {
        returnValue = F("Höferhof");
        break;
    }
    case 152636:
    {
        returnValue = F("Höferhofweg");
        break;
    }
    case 152637:
    {
        returnValue = F("Höferhöhe");
        break;
    }
    case 152638:
    {
        returnValue = F("Höferköpfleweg");
        break;
    }
    case 152639:
    {
        returnValue = F("Höfersche Str.");
        break;
    }
    case 152640:
    {
        returnValue = F("Höferscher Weg");
        break;
    }
    case 152641:
    {
        returnValue = F("Höferschlagweg");
        break;
    }
    case 152642:
    {
        returnValue = F("Höferstr.");
        break;
    }
    case 152643:
    {
        returnValue = F("Höfertalweg");
        break;
    }
    case 152644:
    {
        returnValue = F("Höferweg");
        break;
    }
    case 152645:
    {
        returnValue = F("Höferänger");
        break;
    }
    case 152646:
    {
        returnValue = F("Höfesteig");
        break;
    }
    case 152647:
    {
        returnValue = F("Höfestr.");
        break;
    }
    case 152648:
    {
        returnValue = F("Höfeweg");
        break;
    }
    case 152649:
    {
        returnValue = F("Höffe");
        break;
    }
    case 152650:
    {
        returnValue = F("Höffelter Str.");
        break;
    }
    case 152651:
    {
        returnValue = F("Höffenklinge");
        break;
    }
    case 152652:
    {
        returnValue = F("Höffer Weg");
        break;
    }
    case 152653:
    {
        returnValue = F("Höfferhofer Str.");
        break;
    }
    case 152654:
    {
        returnValue = F("Höfferscheid");
        break;
    }
    case 152655:
    {
        returnValue = F("Höfgasse");
        break;
    }
    case 152656:
    {
        returnValue = F("Höfgen");
        break;
    }
    case 152657:
    {
        returnValue = F("Höfgener Dorfstr.");
        break;
    }
    case 152658:
    {
        returnValue = F("Höfgener Str.");
        break;
    }
    case 152659:
    {
        returnValue = F("Höfgener Weg");
        break;
    }
    case 152660:
    {
        returnValue = F("Höfgenschneise");
        break;
    }
    case 152661:
    {
        returnValue = F("Höfgensweg");
        break;
    }
    case 152662:
    {
        returnValue = F("Höfgenweg");
        break;
    }
    case 152663:
    {
        returnValue = F("Höfing");
        break;
    }
    case 152664:
    {
        returnValue = F("Höfinger Str.");
        break;
    }
    case 152665:
    {
        returnValue = F("Höfinger Weg");
        break;
    }
    case 152666:
    {
        returnValue = F("Höfinghoffstr.");
        break;
    }
    case 152667:
    {
        returnValue = F("Höfkenbusch");
        break;
    }
    case 152668:
    {
        returnValue = F("Höfkensfeld");
        break;
    }
    case 152669:
    {
        returnValue = F("Höflach");
        break;
    }
    case 152670:
    {
        returnValue = F("Höflarn");
        break;
    }
    case 152671:
    {
        returnValue = F("Höflarner Str.");
        break;
    }
    case 152672:
    {
        returnValue = F("Höflas");
        break;
    }
    case 152673:
    {
        returnValue = F("Höflaser Str.");
        break;
    }
    case 152674:
    {
        returnValue = F("Höflaser Weg");
        break;
    }
    case 152675:
    {
        returnValue = F("Höflaweg");
        break;
    }
    case 152676:
    {
        returnValue = F("Höfle");
        break;
    }
    case 152677:
    {
        returnValue = F("Höfle-Buckel");
        break;
    }
    case 152678:
    {
        returnValue = F("Höflebogen");
        break;
    }
    case 152679:
    {
        returnValue = F("Höflein");
        break;
    }
    case 152680:
    {
        returnValue = F("Höfleinsgasse");
        break;
    }
    case 152681:
    {
        returnValue = F("Höfleinsweg");
        break;
    }
    case 152682:
    {
        returnValue = F("Höflemattenweg");
        break;
    }
    case 152683:
    {
        returnValue = F("Höfler Ausbau");
        break;
    }
    case 152684:
    {
        returnValue = F("Höflergasse");
        break;
    }
    case 152685:
    {
        returnValue = F("Höflerstr.");
        break;
    }
    case 152686:
    {
        returnValue = F("Höfles");
        break;
    }
    case 152687:
    {
        returnValue = F("Höfles-Ausfahrt");
        break;
    }
    case 152688:
    {
        returnValue = F("Höflesberg");
        break;
    }
    case 152689:
    {
        returnValue = F("Höfleser Mühle");
        break;
    }
    case 152690:
    {
        returnValue = F("Höflestr.");
        break;
    }
    case 152691:
    {
        returnValue = F("Höflesweg");
        break;
    }
    case 152692:
    {
        returnValue = F("Höflesäckerstr.");
        break;
    }
    case 152693:
    {
        returnValue = F("Höfleweg");
        break;
    }
    case 152694:
    {
        returnValue = F("Höflinger Ring");
        break;
    }
    case 152695:
    {
        returnValue = F("Höflingerstr.");
        break;
    }
    case 152696:
    {
        returnValue = F("Höflingerweg");
        break;
    }
    case 152697:
    {
        returnValue = F("Höflingstr.");
        break;
    }
    case 152698:
    {
        returnValue = F("Höflingweg");
        break;
    }
    case 152699:
    {
        returnValue = F("Höfmatten");
        break;
    }
    case 152700:
    {
        returnValue = F("Höfner Str.");
        break;
    }
    case 152701:
    {
        returnValue = F("Höfner Weg");
        break;
    }
    case 152702:
    {
        returnValue = F("Höfnersweg");
        break;
    }
    case 152703:
    {
        returnValue = F("Höfnerwaldweg");
        break;
    }
    case 152704:
    {
        returnValue = F("Höfnerwinkel");
        break;
    }
    case 152705:
    {
        returnValue = F("Höfstetten");
        break;
    }
    case 152706:
    {
        returnValue = F("Höfstetter Allee");
        break;
    }
    case 152707:
    {
        returnValue = F("Höfstr.");
        break;
    }
    case 152708:
    {
        returnValue = F("Höfstätten");
        break;
    }
    case 152709:
    {
        returnValue = F("Höft");
        break;
    }
    case 152710:
    {
        returnValue = F("Höftchenweg");
        break;
    }
    case 152711:
    {
        returnValue = F("Höften");
        break;
    }
    case 152712:
    {
        returnValue = F("Höftenberg");
        break;
    }
    case 152713:
    {
        returnValue = F("Höftenweg");
        break;
    }
    case 152714:
    {
        returnValue = F("Höfter Weg");
        break;
    }
    case 152715:
    {
        returnValue = F("Höftersiedlung");
        break;
    }
    case 152716:
    {
        returnValue = F("Höfterstr.");
        break;
    }
    case 152717:
    {
        returnValue = F("Höftgraben");
        break;
    }
    case 152718:
    {
        returnValue = F("Höftkamp");
        break;
    }
    case 152719:
    {
        returnValue = F("Höftrute");
        break;
    }
    case 152720:
    {
        returnValue = F("Höftstr.");
        break;
    }
    case 152721:
    {
        returnValue = F("Höfweg");
        break;
    }
    case 152722:
    {
        returnValue = F("Höfwiesen");
        break;
    }
    case 152723:
    {
        returnValue = F("Höge");
        break;
    }
    case 152724:
    {
        returnValue = F("Höge-Trail");
        break;
    }
    case 152725:
    {
        returnValue = F("Högelbergstr.");
        break;
    }
    case 152726:
    {
        returnValue = F("Högeleinring");
        break;
    }
    case 152727:
    {
        returnValue = F("Högemannshof");
        break;
    }
    case 152728:
    {
        returnValue = F("Högemannsweg");
        break;
    }
    case 152729:
    {
        returnValue = F("Högenauer Weg");
        break;
    }
    case 152730:
    {
        returnValue = F("Högenhausen");
        break;
    }
    case 152731:
    {
        returnValue = F("Högenhauser Str.");
        break;
    }
    case 152732:
    {
        returnValue = F("Högenkamp");
        break;
    }
    case 152733:
    {
        returnValue = F("Högenweg");
        break;
    }
    case 152734:
    {
        returnValue = F("Höger Heide");
        break;
    }
    case 152735:
    {
        returnValue = F("Höger Str.");
        break;
    }
    case 152736:
    {
        returnValue = F("Höger Weg");
        break;
    }
    case 152737:
    {
        returnValue = F("Högerberg");
        break;
    }
    case 152738:
    {
        returnValue = F("Högerdeich");
        break;
    }
    case 152739:
    {
        returnValue = F("Högerfeldweg");
        break;
    }
    case 152740:
    {
        returnValue = F("Högeringer Str.");
        break;
    }
    case 152741:
    {
        returnValue = F("Högernweg");
        break;
    }
    case 152742:
    {
        returnValue = F("Högerrup");
        break;
    }
    case 152743:
    {
        returnValue = F("Högerstr.");
        break;
    }
    case 152744:
    {
        returnValue = F("Högertwiete");
        break;
    }
    case 152745:
    {
        returnValue = F("Högerweg");
        break;
    }
    case 152746:
    {
        returnValue = F("Högeweg");
        break;
    }
    case 152747:
    {
        returnValue = F("Högge");
        break;
    }
    case 152748:
    {
        returnValue = F("Höggelstr.");
        break;
    }
    case 152749:
    {
        returnValue = F("Höggengäßchen");
        break;
    }
    case 152750:
    {
        returnValue = F("Höggenstr.");
        break;
    }
    case 152751:
    {
        returnValue = F("Höggmairstr.");
        break;
    }
    case 152752:
    {
        returnValue = F("Högistr.");
        break;
    }
    case 152753:
    {
        returnValue = F("Högl");
        break;
    }
    case 152754:
    {
        returnValue = F("Höglberg");
        break;
    }
    case 152755:
    {
        returnValue = F("Högldorf");
        break;
    }
    case 152756:
    {
        returnValue = F("Högldorfer Str.");
        break;
    }
    case 152757:
    {
        returnValue = F("Högler Str.");
        break;
    }
    case 152758:
    {
        returnValue = F("Höglinger Str.");
        break;
    }
    case 152759:
    {
        returnValue = F("Höglsberger Str.");
        break;
    }
    case 152760:
    {
        returnValue = F("Höglstr.");
        break;
    }
    case 152761:
    {
        returnValue = F("Höglweg");
        break;
    }
    case 152762:
    {
        returnValue = F("Högnerweg");
        break;
    }
    case 152763:
    {
        returnValue = F("Högtkamp");
        break;
    }
    case 152764:
    {
        returnValue = F("Höh");
        break;
    }
    case 152765:
    {
        returnValue = F("Höhbaum");
        break;
    }
    case 152766:
    {
        returnValue = F("Höhberg");
        break;
    }
    case 152767:
    {
        returnValue = F("Höhberg Weg");
        break;
    }
    case 152768:
    {
        returnValue = F("Höhberg-Rundweg");
        break;
    }
    case 152769:
    {
        returnValue = F("Höhbergblick");
        break;
    }
    case 152770:
    {
        returnValue = F("Höhberge");
        break;
    }
    case 152771:
    {
        returnValue = F("Höhbergstr.");
        break;
    }
    case 152772:
    {
        returnValue = F("Höhbergsweg");
        break;
    }
    case 152773:
    {
        returnValue = F("Höhbergweg");
        break;
    }
    case 152774:
    {
        returnValue = F("Höhbornstr.");
        break;
    }
    case 152775:
    {
        returnValue = F("Höhbrandweg");
        break;
    }
    case 152776:
    {
        returnValue = F("Höhbuck");
        break;
    }
    case 152777:
    {
        returnValue = F("Höhe");
        break;
    }
    case 152778:
    {
        returnValue = F("Höhe 304");
        break;
    }
    case 152779:
    {
        returnValue = F("Höheberg");
        break;
    }
    case 152780:
    {
        returnValue = F("Höhebusch");
        break;
    }
    case 152781:
    {
        returnValue = F("Höhefelder Str.");
        break;
    }
    case 152782:
    {
        returnValue = F("Höhefeldstr.");
        break;
    }
    case 152783:
    {
        returnValue = F("Höhegasse");
        break;
    }
    case 152784:
    {
        returnValue = F("Höheinöder Str.");
        break;
    }
    case 152785:
    {
        returnValue = F("Höheischweiler Weg");
        break;
    }
    case 152786:
    {
        returnValue = F("Höhen");
        break;
    }
    case 152787:
    {
        returnValue = F("Höhen Weg");
        break;
    }
    case 152788:
    {
        returnValue = F("Höhen-Weg");
        break;
    }
    case 152789:
    {
        returnValue = F("Höhenackerstr.");
        break;
    }
    case 152790:
    {
        returnValue = F("Höhenanlage");
        break;
    }
    case 152791:
    {
        returnValue = F("Höhenbahnweg");
        break;
    }
    case 152792:
    {
        returnValue = F("Höhenberg");
        break;
    }
    case 152793:
    {
        returnValue = F("Höhenberger Feld");
        break;
    }
    case 152794:
    {
        returnValue = F("Höhenberger Str.");
        break;
    }
    case 152795:
    {
        returnValue = F("Höhenbergstr.");
        break;
    }
    case 152796:
    {
        returnValue = F("Höhenbergweg");
        break;
    }
    case 152797:
    {
        returnValue = F("Höhenblick");
        break;
    }
    case 152798:
    {
        returnValue = F("Höhenbrunner Str.");
        break;
    }
    case 152799:
    {
        returnValue = F("Höhenburgstr.");
        break;
    }
    case 152800:
    {
        returnValue = F("Höhenbühlstr.");
        break;
    }
    case 152801:
    {
        returnValue = F("Höhendorfstr.");
        break;
    }
    case 152802:
    {
        returnValue = F("Höhendorn");
        break;
    }
    case 152803:
    {
        returnValue = F("Höhenfelder Hof");
        break;
    }
    case 152804:
    {
        returnValue = F("Höhenfeldstr.");
        break;
    }
    case 152805:
    {
        returnValue = F("Höhengang");
        break;
    }
    case 152806:
    {
        returnValue = F("Höhengasse");
        break;
    }
    case 152807:
    {
        returnValue = F("Höhengau");
        break;
    }
    case 152808:
    {
        returnValue = F("Höhengauer Weg");
        break;
    }
    case 152809:
    {
        returnValue = F("Höhenhof");
        break;
    }
    case 152810:
    {
        returnValue = F("Höhenhäuser");
        break;
    }
    case 152811:
    {
        returnValue = F("Höhenhöfe");
        break;
    }
    case 152812:
    {
        returnValue = F("Höhenkammweg");
        break;
    }
    case 152813:
    {
        returnValue = F("Höhenkamp");
        break;
    }
    case 152814:
    {
        returnValue = F("Höhenkirchener Str.");
        break;
    }
    case 152815:
    {
        returnValue = F("Höhenkirchener Weg");
        break;
    }
    case 152816:
    {
        returnValue = F("Höhenkircherstr.");
        break;
    }
    case 152817:
    {
        returnValue = F("Höhenkirchner Str.");
        break;
    }
    case 152818:
    {
        returnValue = F("Höhenkirchpfad");
        break;
    }
    case 152819:
    {
        returnValue = F("Höhenkreuzweg");
        break;
    }
    case 152820:
    {
        returnValue = F("Höhenlinienweg");
        break;
    }
    case 152821:
    {
        returnValue = F("Höhenluft");
        break;
    }
    case 152822:
    {
        returnValue = F("Höhenmooser Str.");
        break;
    }
    case 152823:
    {
        returnValue = F("Höhenmühler Str.");
        break;
    }
    case 152824:
    {
        returnValue = F("Höhenpfad");
        break;
    }
    case 152825:
    {
        returnValue = F("Höhenpromenade");
        break;
    }
    case 152826:
    {
        returnValue = F("Höhenrain");
        break;
    }
    case 152827:
    {
        returnValue = F("Höhenrain-Hoffeld");
        break;
    }
    case 152828:
    {
        returnValue = F("Höhenrain-Siedlung");
        break;
    }
    case 152829:
    {
        returnValue = F("Höhenrainer Str.");
        break;
    }
    case 152830:
    {
        returnValue = F("Höhenrainerweg");
        break;
    }
    case 152831:
    {
        returnValue = F("Höhenrainweg");
        break;
    }
    case 152832:
    {
        returnValue = F("Höhenrainäcker");
        break;
    }
    case 152833:
    {
        returnValue = F("Höhenrandweg");
        break;
    }
    case 152834:
    {
        returnValue = F("Höhenreute");
        break;
    }
    case 152835:
    {
        returnValue = F("Höhenreutweg");
        break;
    }
    case 152836:
    {
        returnValue = F("Höhenried");
        break;
    }
    case 152837:
    {
        returnValue = F("Höhenrieder Park");
        break;
    }
    case 152838:
    {
        returnValue = F("Höhenrieder Str.");
        break;
    }
    case 152839:
    {
        returnValue = F("Höhenrieder Weg");
        break;
    }
    case 152840:
    {
        returnValue = F("Höhenriederweg");
        break;
    }
    case 152841:
    {
        returnValue = F("Höhenriedstr.");
        break;
    }
    case 152842:
    {
        returnValue = F("Höhenring");
        break;
    }
    case 152843:
    {
        returnValue = F("Höhenringstr.");
        break;
    }
    case 152844:
    {
        returnValue = F("Höhenringweg");
        break;
    }
    case 152845:
    {
        returnValue = F("Höhenrundweg");
        break;
    }
    case 152846:
    {
        returnValue = F("Höhenröth-Str.");
        break;
    }
    case 152847:
    {
        returnValue = F("Höhenrückenweg");
        break;
    }
    case 152848:
    {
        returnValue = F("Höhensackweg");
        break;
    }
    case 152849:
    {
        returnValue = F("Höhenschneise");
        break;
    }
    case 152850:
    {
        returnValue = F("Höhenschwärzer Str.");
        break;
    }
    case 152851:
    {
        returnValue = F("Höhenstedter Weg");
        break;
    }
    case 152852:
    {
        returnValue = F("Höhensteig");
        break;
    }
    case 152853:
    {
        returnValue = F("Höhensteiger Str.");
        break;
    }
    case 152854:
    {
        returnValue = F("Höhensteinerweg");
        break;
    }
    case 152855:
    {
        returnValue = F("Höhensteinstr.");
        break;
    }
    case 152856:
    {
        returnValue = F("Höhenstetten");
        break;
    }
    case 152857:
    {
        returnValue = F("Höhenstr.");
        break;
    }
    case 152858:
    {
        returnValue = F("Höhenstücksweg");
        break;
    }
    case 152859:
    {
        returnValue = F("Höhenwang");
        break;
    }
    case 152860:
    {
        returnValue = F("Höhenwanger Str.");
        break;
    }
    case 152861:
    {
        returnValue = F("Höhenweg");
        break;
    }
    case 152862:
    {
        returnValue = F("Höhenweg Eibsee-Höllental");
        break;
    }
    case 152863:
    {
        returnValue = F("Höhenweg Richtung Altgaul und Schutzhütte");
        break;
    }
    case 152864:
    {
        returnValue = F("Höhenweg Wehrda");
        break;
    }
    case 152865:
    {
        returnValue = F("Höhenweg-Kreuzberg");
        break;
    }
    case 152866:
    {
        returnValue = F("Höhenwiese");
        break;
    }
    case 152867:
    {
        returnValue = F("Höhenäcker");
        break;
    }
    case 152868:
    {
        returnValue = F("Höher Birken");
        break;
    }
    case 152869:
    {
        returnValue = F("Höher Garten");
        break;
    }
    case 152870:
    {
        returnValue = F("Höher Landstr.");
        break;
    }
    case 152871:
    {
        returnValue = F("Höher Schule");
        break;
    }
    case 152872:
    {
        returnValue = F("Höher Str.");
        break;
    }
    case 152873:
    {
        returnValue = F("Höher Trift");
        break;
    }
    case 152874:
    {
        returnValue = F("Höher Weg");
        break;
    }
    case 152875:
    {
        returnValue = F("Höherbergblick");
        break;
    }
    case 152876:
    {
        returnValue = F("Höherdahlstr.");
        break;
    }
    case 152877:
    {
        returnValue = F("Höherhaus");
        break;
    }
    case 152878:
    {
        returnValue = F("Höherweg");
        break;
    }
    case 152879:
    {
        returnValue = F("Höhestr.");
        break;
    }
    case 152880:
    {
        returnValue = F("Höheweg");
        break;
    }
    case 152881:
    {
        returnValue = F("Höhfeld");
        break;
    }
    case 152882:
    {
        returnValue = F("Höhfeldstr.");
        break;
    }
    case 152883:
    {
        returnValue = F("Höhgarten");
        break;
    }
    case 152884:
    {
        returnValue = F("Höhgasse");
        break;
    }
    case 152885:
    {
        returnValue = F("Höhgraben");
        break;
    }
    case 152886:
    {
        returnValue = F("Höhgärtenstr.");
        break;
    }
    case 152887:
    {
        returnValue = F("Höhhof");
        break;
    }
    case 152888:
    {
        returnValue = F("Höhholzer Weg");
        break;
    }
    case 152889:
    {
        returnValue = F("Höhingenstr.");
        break;
    }
    case 152890:
    {
        returnValue = F("Höhjunker Str.");
        break;
    }
    case 152891:
    {
        returnValue = F("Höhlchen");
        break;
    }
    case 152892:
    {
        returnValue = F("Höhle");
        break;
    }
    case 152893:
    {
        returnValue = F("Höhlenberg");
        break;
    }
    case 152894:
    {
        returnValue = F("Höhlenpark");
        break;
    }
    case 152895:
    {
        returnValue = F("Höhlenpfad");
        break;
    }
    case 152896:
    {
        returnValue = F("Höhlenschlucht");
        break;
    }
    case 152897:
    {
        returnValue = F("Höhlensteig");
        break;
    }
    case 152898:
    {
        returnValue = F("Höhlenstr.");
        break;
    }
    case 152899:
    {
        returnValue = F("Höhlenweg");
        break;
    }
    case 152900:
    {
        returnValue = F("Höhlersbach");
        break;
    }
    case 152901:
    {
        returnValue = F("Höhlersleite");
        break;
    }
    case 152902:
    {
        returnValue = F("Höhlesgrabenstr.");
        break;
    }
    case 152903:
    {
        returnValue = F("Höhlgasse");
        break;
    }
    case 152904:
    {
        returnValue = F("Höhlholzplatz");
        break;
    }
    case 152905:
    {
        returnValue = F("Höhlholzstr.");
        break;
    }
    case 152906:
    {
        returnValue = F("Höhligkopfweg");
        break;
    }
    case 152907:
    {
        returnValue = F("Höhligweg");
        break;
    }
    case 152908:
    {
        returnValue = F("Höhlingstr.");
        break;
    }
    case 152909:
    {
        returnValue = F("Höhlingweg");
        break;
    }
    case 152910:
    {
        returnValue = F("Höhliweg");
        break;
    }
    case 152911:
    {
        returnValue = F("Höhlmühler Str.");
        break;
    }
    case 152912:
    {
        returnValue = F("Höhlmühlstr.");
        break;
    }
    case 152913:
    {
        returnValue = F("Höhlstr.");
        break;
    }
    case 152914:
    {
        returnValue = F("Höhltor");
        break;
    }
    case 152915:
    {
        returnValue = F("Höhlweg");
        break;
    }
    case 152916:
    {
        returnValue = F("Höhnberg");
        break;
    }
    case 152917:
    {
        returnValue = F("Höhnbergstr.");
        break;
    }
    case 152918:
    {
        returnValue = F("Höhnbrücke");
        break;
    }
    case 152919:
    {
        returnValue = F("Höhnchen");
        break;
    }
    case 152920:
    {
        returnValue = F("Höhndorfer Tor");
        break;
    }
    case 152921:
    {
        returnValue = F("Höhndorfer Weg");
        break;
    }
    case 152922:
    {
        returnValue = F("Höhneburg");
        break;
    }
    case 152923:
    {
        returnValue = F("Höhnekamp");
        break;
    }
    case 152924:
    {
        returnValue = F("Höhnenkamp");
        break;
    }
    case 152925:
    {
        returnValue = F("Höhnenstr.");
        break;
    }
    case 152926:
    {
        returnValue = F("Höhner Str.");
        break;
    }
    case 152927:
    {
        returnValue = F("Höhnerbarg");
        break;
    }
    case 152928:
    {
        returnValue = F("Höhnerkamp");
        break;
    }
    case 152929:
    {
        returnValue = F("Höhnertgasse");
        break;
    }
    case 152930:
    {
        returnValue = F("Höhnerweg");
        break;
    }
    case 152931:
    {
        returnValue = F("Höhnestr.");
        break;
    }
    case 152932:
    {
        returnValue = F("Höhneweg");
        break;
    }
    case 152933:
    {
        returnValue = F("Höhnisch");
        break;
    }
    case 152934:
    {
        returnValue = F("Höhnkamp");
        break;
    }
    case 152935:
    {
        returnValue = F("Höhnleite");
        break;
    }
    case 152936:
    {
        returnValue = F("Höhnleweg");
        break;
    }
    case 152937:
    {
        returnValue = F("Höhnrather Str.");
        break;
    }
    case 152938:
    {
        returnValue = F("Höhnrißweg");
        break;
    }
    case 152939:
    {
        returnValue = F("Höhnsche Rummel");
        break;
    }
    case 152940:
    {
        returnValue = F("Höhnscheid");
        break;
    }
    case 152941:
    {
        returnValue = F("Höhnstedter Str.");
        break;
    }
    case 152942:
    {
        returnValue = F("Höhnstr.");
        break;
    }
    case 152943:
    {
        returnValue = F("Höhnweg");
        break;
    }
    case 152944:
    {
        returnValue = F("Höhre");
        break;
    }
    case 152945:
    {
        returnValue = F("Höhrenbergstr.");
        break;
    }
    case 152946:
    {
        returnValue = F("Höhrer Str.");
        break;
    }
    case 152947:
    {
        returnValue = F("Höhreute");
        break;
    }
    case 152948:
    {
        returnValue = F("Höhreuter Str.");
        break;
    }
    case 152949:
    {
        returnValue = F("Höhristeige");
        break;
    }
    case 152950:
    {
        returnValue = F("Höhristr.");
        break;
    }
    case 152951:
    {
        returnValue = F("Höhrweg");
        break;
    }
    case 152952:
    {
        returnValue = F("Höhsteig");
        break;
    }
    case 152953:
    {
        returnValue = F("Höhstigl");
        break;
    }
    case 152954:
    {
        returnValue = F("Höhstr.");
        break;
    }
    case 152955:
    {
        returnValue = F("Höhwandelstr.");
        break;
    }
    case 152956:
    {
        returnValue = F("Höhwasenstr.");
        break;
    }
    case 152957:
    {
        returnValue = F("Höhweg");
        break;
    }
    case 152958:
    {
        returnValue = F("Höhwiese");
        break;
    }
    case 152959:
    {
        returnValue = F("Höhwiesen");
        break;
    }
    case 152960:
    {
        returnValue = F("Höhwäldchen");
        break;
    }
    case 152961:
    {
        returnValue = F("Höhäcker");
        break;
    }
    case 152962:
    {
        returnValue = F("Höinger Str.");
        break;
    }
    case 152963:
    {
        returnValue = F("Hökeberg");
        break;
    }
    case 152964:
    {
        returnValue = F("Hökenackerstr.");
        break;
    }
    case 152965:
    {
        returnValue = F("Hökenbrügger Weg");
        break;
    }
    case 152966:
    {
        returnValue = F("Hökerbarg");
        break;
    }
    case 152967:
    {
        returnValue = F("Hökerberg");
        break;
    }
    case 152968:
    {
        returnValue = F("Hökerdorf");
        break;
    }
    case 152969:
    {
        returnValue = F("Hökerkamp");
        break;
    }
    case 152970:
    {
        returnValue = F("Hökerkoppel");
        break;
    }
    case 152971:
    {
        returnValue = F("Hökerstieg");
        break;
    }
    case 152972:
    {
        returnValue = F("Hökerstr.");
        break;
    }
    case 152973:
    {
        returnValue = F("Hökertwiete");
        break;
    }
    case 152974:
    {
        returnValue = F("Hökerweg");
        break;
    }
    case 152975:
    {
        returnValue = F("Höksken");
        break;
    }
    case 152976:
    {
        returnValue = F("Hölandstr.");
        break;
    }
    case 152977:
    {
        returnValue = F("Hölbestr.");
        break;
    }
    case 152978:
    {
        returnValue = F("Hölchengrund");
        break;
    }
    case 152979:
    {
        returnValue = F("Hölchert");
        break;
    }
    case 152980:
    {
        returnValue = F("Hölching");
        break;
    }
    case 152981:
    {
        returnValue = F("Hölchinger Weg");
        break;
    }
    case 152982:
    {
        returnValue = F("Hölckensdamm");
        break;
    }
    case 152983:
    {
        returnValue = F("Höldelsträßle");
        break;
    }
    case 152984:
    {
        returnValue = F("Hölderleweg");
        break;
    }
    case 152985:
    {
        returnValue = F("Hölderlinhof");
        break;
    }
    case 152986:
    {
        returnValue = F("Hölderlinköpfleweg");
        break;
    }
    case 152987:
    {
        returnValue = F("Hölderlinplatz");
        break;
    }
    case 152988:
    {
        returnValue = F("Hölderlinring");
        break;
    }
    case 152989:
    {
        returnValue = F("Hölderlinstr.");
        break;
    }
    case 152990:
    {
        returnValue = F("Hölderlinweg");
        break;
    }
    case 152991:
    {
        returnValue = F("Höldersteg");
        break;
    }
    case 152992:
    {
        returnValue = F("Hölderweg");
        break;
    }
    case 152993:
    {
        returnValue = F("Höldiser Str.");
        break;
    }
    case 152994:
    {
        returnValue = F("Hölenderweg");
        break;
    }
    case 152995:
    {
        returnValue = F("Hölgenäcker");
        break;
    }
    case 152996:
    {
        returnValue = F("Hölinger Str.");
        break;
    }
    case 152997:
    {
        returnValue = F("Hölken");
        break;
    }
    case 152998:
    {
        returnValue = F("Hölken (Rüggeberg)");
        break;
    }
    case 152999:
    {
        returnValue = F("Hölkenweg");
        break;
    }
    case 153000:
    {
        returnValue = F("Hölker Weg");
        break;
    }
    case 153001:
    {
        returnValue = F("Hölkering");
        break;
    }
    case 153002:
    {
        returnValue = F("Hölkeringer Str.");
        break;
    }
    case 153003:
    {
        returnValue = F("Hölkers Kamp");
        break;
    }
    case 153004:
    {
        returnValue = F("Hölks Kamp");
        break;
    }
    case 153005:
    {
        returnValue = F("Höll");
        break;
    }
    case 153006:
    {
        returnValue = F("Höllacker");
        break;
    }
    case 153007:
    {
        returnValue = F("Höllackerweg");
        break;
    }
    case 153008:
    {
        returnValue = F("Höllbachstr.");
        break;
    }
    case 153009:
    {
        returnValue = F("Höllbachweg");
        break;
    }
    case 153010:
    {
        returnValue = F("Höllberg");
        break;
    }
    case 153011:
    {
        returnValue = F("Höllberger Str.");
        break;
    }
    case 153012:
    {
        returnValue = F("Höllbergweg");
        break;
    }
    case 153013:
    {
        returnValue = F("Höllburg");
        break;
    }
    case 153014:
    {
        returnValue = F("Höllbühlstr.");
        break;
    }
    case 153015:
    {
        returnValue = F("Höllchenstr.");
        break;
    }
    case 153016:
    {
        returnValue = F("Hölldoblstr.");
        break;
    }
    case 153017:
    {
        returnValue = F("Hölldorf");
        break;
    }
    case 153018:
    {
        returnValue = F("Hölle");
        break;
    }
    case 153019:
    {
        returnValue = F("Hölle-Weg");
        break;
    }
    case 153020:
    {
        returnValue = F("Höllegasse");
        break;
    }
    case 153021:
    {
        returnValue = F("Hölleinweg");
        break;
    }
    case 153022:
    {
        returnValue = F("Höllenbach");
        break;
    }
    case 153023:
    {
        returnValue = F("Höllenbachstr.");
        break;
    }
    case 153024:
    {
        returnValue = F("Höllenberg");
        break;
    }
    case 153025:
    {
        returnValue = F("Höllenbergstr.");
        break;
    }
    case 153026:
    {
        returnValue = F("Höllenburren-Str.");
        break;
    }
    case 153027:
    {
        returnValue = F("Höllenfeldsweg");
        break;
    }
    case 153028:
    {
        returnValue = F("Höllengasse");
        break;
    }
    case 153029:
    {
        returnValue = F("Höllengraben");
        break;
    }
    case 153030:
    {
        returnValue = F("Höllengrund");
        break;
    }
    case 153031:
    {
        returnValue = F("Höllengrundstr.");
        break;
    }
    case 153032:
    {
        returnValue = F("Höllengrundweg");
        break;
    }
    case 153033:
    {
        returnValue = F("Höllenhorst");
        break;
    }
    case 153034:
    {
        returnValue = F("Höllenhutweg");
        break;
    }
    case 153035:
    {
        returnValue = F("Höllenköttel");
        break;
    }
    case 153036:
    {
        returnValue = F("Höllenmühle");
        break;
    }
    case 153037:
    {
        returnValue = F("Höllenmühlenweg");
        break;
    }
    case 153038:
    {
        returnValue = F("Höllenpfad");
        break;
    }
    case 153039:
    {
        returnValue = F("Höllenquellenweg");
        break;
    }
    case 153040:
    {
        returnValue = F("Höllenschlucht");
        break;
    }
    case 153041:
    {
        returnValue = F("Höllenschluchtweg");
        break;
    }
    case 153042:
    {
        returnValue = F("Höllensteinstr.");
        break;
    }
    case 153043:
    {
        returnValue = F("Höllenstieg");
        break;
    }
    case 153044:
    {
        returnValue = F("Höllenstr.");
        break;
    }
    case 153045:
    {
        returnValue = F("Höllental");
        break;
    }
    case 153046:
    {
        returnValue = F("Höllentalstr.");
        break;
    }
    case 153047:
    {
        returnValue = F("Höllentalsträßle");
        break;
    }
    case 153048:
    {
        returnValue = F("Höllentrift");
        break;
    }
    case 153049:
    {
        returnValue = F("Höllenwaldweg");
        break;
    }
    case 153050:
    {
        returnValue = F("Höllenweg");
        break;
    }
    case 153051:
    {
        returnValue = F("Höllenwegstr.");
        break;
    }
    case 153052:
    {
        returnValue = F("Höller Str.");
        break;
    }
    case 153053:
    {
        returnValue = F("Höller Weg");
        break;
    }
    case 153054:
    {
        returnValue = F("Höllerhofweg");
        break;
    }
    case 153055:
    {
        returnValue = F("Höllerlein");
        break;
    }
    case 153056:
    {
        returnValue = F("Höllerstr.");
        break;
    }
    case 153057:
    {
        returnValue = F("Höllerten");
        break;
    }
    case 153058:
    {
        returnValue = F("Hölleweg");
        break;
    }
    case 153059:
    {
        returnValue = F("Höllfeldstr.");
        break;
    }
    case 153060:
    {
        returnValue = F("Höllgartenstr.");
        break;
    }
    case 153061:
    {
        returnValue = F("Höllgartenweg");
        break;
    }
    case 153062:
    {
        returnValue = F("Höllgasse");
        break;
    }
    case 153063:
    {
        returnValue = F("Höllgehau");
        break;
    }
    case 153064:
    {
        returnValue = F("Höllgraben");
        break;
    }
    case 153065:
    {
        returnValue = F("Höllgrabenbrücke");
        break;
    }
    case 153066:
    {
        returnValue = F("Höllgrabenstr.");
        break;
    }
    case 153067:
    {
        returnValue = F("Höllgrabenweg");
        break;
    }
    case 153068:
    {
        returnValue = F("Höllgrund");
        break;
    }
    case 153069:
    {
        returnValue = F("Höllgrundstr.");
        break;
    }
    case 153070:
    {
        returnValue = F("Höllgrundweg");
        break;
    }
    case 153071:
    {
        returnValue = F("Höllgäßle");
        break;
    }
    case 153072:
    {
        returnValue = F("Höllhof");
        break;
    }
    case 153073:
    {
        returnValue = F("Höllhofsteige");
        break;
    }
    case 153074:
    {
        returnValue = F("Höllkopfstr.");
        break;
    }
    case 153075:
    {
        returnValue = F("Höllkopfweg");
        break;
    }
    case 153076:
    {
        returnValue = F("Höllkreut");
        break;
    }
    case 153077:
    {
        returnValue = F("Höllloch");
        break;
    }
    case 153078:
    {
        returnValue = F("Hölllochweg");
        break;
    }
    case 153079:
    {
        returnValue = F("Höllmannsried");
        break;
    }
    case 153080:
    {
        returnValue = F("Höllmecke");
        break;
    }
    case 153081:
    {
        returnValue = F("Höllmecker Weg");
        break;
    }
    case 153082:
    {
        returnValue = F("Höllmühle");
        break;
    }
    case 153083:
    {
        returnValue = F("Höllmühlenweg");
        break;
    }
    case 153084:
    {
        returnValue = F("Hölln");
        break;
    }
    case 153085:
    {
        returnValue = F("Höllnweg");
        break;
    }
    case 153086:
    {
        returnValue = F("Höllochstr.");
        break;
    }
    case 153087:
    {
        returnValue = F("Höllochweg");
        break;
    }
    case 153088:
    {
        returnValue = F("Höllrain");
        break;
    }
    case 153089:
    {
        returnValue = F("Höllricher Str.");
        break;
    }
    case 153090:
    {
        returnValue = F("Höllriegelskreuther Weg");
        break;
    }
    case 153091:
    {
        returnValue = F("Höllriegelstr.");
        break;
    }
    case 153092:
    {
        returnValue = F("Höllscheider Str.");
        break;
    }
    case 153093:
    {
        returnValue = F("Höllschwärz");
        break;
    }
    case 153094:
    {
        returnValue = F("Höllsteig");
        break;
    }
    case 153095:
    {
        returnValue = F("Höllsteige");
        break;
    }
    case 153096:
    {
        returnValue = F("Höllsteiner Str.");
        break;
    }
    case 153097:
    {
        returnValue = F("Höllsternstr.");
        break;
    }
    case 153098:
    {
        returnValue = F("Höllstr.");
        break;
    }
    case 153099:
    {
        returnValue = F("Höllsträßle");
        break;
    }
    case 153100:
    {
        returnValue = F("Hölltal");
        break;
    }
    case 153101:
    {
        returnValue = F("Hölltaler Str.");
        break;
    }
    case 153102:
    {
        returnValue = F("Höllthal");
        break;
    }
    case 153103:
    {
        returnValue = F("Höllwaldblick");
        break;
    }
    case 153104:
    {
        returnValue = F("Höllwaldstr.");
        break;
    }
    case 153105:
    {
        returnValue = F("Höllwaldweg");
        break;
    }
    case 153106:
    {
        returnValue = F("Höllweberweg");
        break;
    }
    case 153107:
    {
        returnValue = F("Höllweg");
        break;
    }
    case 153108:
    {
        returnValue = F("Höllwiese");
        break;
    }
    case 153109:
    {
        returnValue = F("Höllwiesen");
        break;
    }
    case 153110:
    {
        returnValue = F("Höllwiesenschneise");
        break;
    }
    case 153111:
    {
        returnValue = F("Höllwiesenweg");
        break;
    }
    case 153112:
    {
        returnValue = F("Höllwiestanne");
        break;
    }
    case 153113:
    {
        returnValue = F("Höllwinkel");
        break;
    }
    case 153114:
    {
        returnValue = F("Hölläckerstr.");
        break;
    }
    case 153115:
    {
        returnValue = F("Hölmkeweg");
        break;
    }
    case 153116:
    {
        returnValue = F("Hölperfeld");
        break;
    }
    case 153117:
    {
        returnValue = F("Höls Kamp");
        break;
    }
    case 153118:
    {
        returnValue = F("Hölschenbrede");
        break;
    }
    case 153119:
    {
        returnValue = F("Hölscher Siedlung");
        break;
    }
    case 153120:
    {
        returnValue = F("Hölscherholz");
        break;
    }
    case 153121:
    {
        returnValue = F("Hölschers Kamp");
        break;
    }
    case 153122:
    {
        returnValue = F("Hölscherstr.");
        break;
    }
    case 153123:
    {
        returnValue = F("Hölscherweg");
        break;
    }
    case 153124:
    {
        returnValue = F("Hölscheter Wiese");
        break;
    }
    case 153125:
    {
        returnValue = F("Hölschkensiepenweg");
        break;
    }
    case 153126:
    {
        returnValue = F("Hölsenplatz");
        break;
    }
    case 153127:
    {
        returnValue = F("Hölskofen");
        break;
    }
    case 153128:
    {
        returnValue = F("Hölssig-Str.");
        break;
    }
    case 153129:
    {
        returnValue = F("Hölsterlöh");
        break;
    }
    case 153130:
    {
        returnValue = F("Höltchen");
        break;
    }
    case 153131:
    {
        returnValue = F("Höltel");
        break;
    }
    case 153132:
    {
        returnValue = F("Hölten Klink");
        break;
    }
    case 153133:
    {
        returnValue = F("Höltenbrügge");
        break;
    }
    case 153134:
    {
        returnValue = F("Höltene Klinke");
        break;
    }
    case 153135:
    {
        returnValue = F("Höltenweg");
        break;
    }
    case 153136:
    {
        returnValue = F("Höltenwisch");
        break;
    }
    case 153137:
    {
        returnValue = F("Hölter Busch");
        break;
    }
    case 153138:
    {
        returnValue = F("Hölter Feld");
        break;
    }
    case 153139:
    {
        returnValue = F("Hölter Kleeweg");
        break;
    }
    case 153140:
    {
        returnValue = F("Hölter Weg");
        break;
    }
    case 153141:
    {
        returnValue = F("Hölteregge");
        break;
    }
    case 153142:
    {
        returnValue = F("Hölterhofer Str.");
        break;
    }
    case 153143:
    {
        returnValue = F("Hölterhoffstr.");
        break;
    }
    case 153144:
    {
        returnValue = F("Hölternweg");
        break;
    }
    case 153145:
    {
        returnValue = F("Hölters Pad");
        break;
    }
    case 153146:
    {
        returnValue = F("Höltersheide");
        break;
    }
    case 153147:
    {
        returnValue = F("Hölterstr.");
        break;
    }
    case 153148:
    {
        returnValue = F("Hölterweg");
        break;
    }
    case 153149:
    {
        returnValue = F("Höltgenweg");
        break;
    }
    case 153150:
    {
        returnValue = F("Höltigbaum");
        break;
    }
    case 153151:
    {
        returnValue = F("Hölting");
        break;
    }
    case 153152:
    {
        returnValue = F("Höltinghauser Ring");
        break;
    }
    case 153153:
    {
        returnValue = F("Höltinghauser Str.");
        break;
    }
    case 153154:
    {
        returnValue = F("Höltings Weg");
        break;
    }
    case 153155:
    {
        returnValue = F("Höltingsdorf");
        break;
    }
    case 153156:
    {
        returnValue = F("Höltingstr.");
        break;
    }
    case 153157:
    {
        returnValue = F("Höltingswall");
        break;
    }
    case 153158:
    {
        returnValue = F("Höltjenbaumstieg");
        break;
    }
    case 153159:
    {
        returnValue = F("Höltjenbrink");
        break;
    }
    case 153160:
    {
        returnValue = F("Höltjerweg");
        break;
    }
    case 153161:
    {
        returnValue = F("Höltjeweg");
        break;
    }
    case 153162:
    {
        returnValue = F("Höltkebruchstr.");
        break;
    }
    case 153163:
    {
        returnValue = F("Höltken");
        break;
    }
    case 153164:
    {
        returnValue = F("Hölts Knapp");
        break;
    }
    case 153165:
    {
        returnValue = F("Höltyplatz");
        break;
    }
    case 153166:
    {
        returnValue = F("Höltyweg");
        break;
    }
    case 153167:
    {
        returnValue = F("Höltzstr.");
        break;
    }
    case 153168:
    {
        returnValue = F("Hölzchenweg");
        break;
    }
    case 153169:
    {
        returnValue = F("Hölzches Mühle");
        break;
    }
    case 153170:
    {
        returnValue = F("Hölzchesweg");
        break;
    }
    case 153171:
    {
        returnValue = F("Hölze");
        break;
    }
    case 153172:
    {
        returnValue = F("Hölzeler Weg");
        break;
    }
    case 153173:
    {
        returnValue = F("Hölzeleweg");
        break;
    }
    case 153174:
    {
        returnValue = F("Hölzels Weg");
        break;
    }
    case 153175:
    {
        returnValue = F("Hölzelstr.");
        break;
    }
    case 153176:
    {
        returnValue = F("Hölzelweg");
        break;
    }
    case 153177:
    {
        returnValue = F("Hölzenbergstr.");
        break;
    }
    case 153178:
    {
        returnValue = F("Hölzenschlade");
        break;
    }
    case 153179:
    {
        returnValue = F("Hölzenschleifstr.");
        break;
    }
    case 153180:
    {
        returnValue = F("Hölzer Weg");
        break;
    }
    case 153181:
    {
        returnValue = F("Hölzerbacher Weg");
        break;
    }
    case 153182:
    {
        returnValue = F("Hölzerbachstr.");
        break;
    }
    case 153183:
    {
        returnValue = F("Hölzergasse");
        break;
    }
    case 153184:
    {
        returnValue = F("Hölzerlipsweg");
        break;
    }
    case 153185:
    {
        returnValue = F("Hölzermannweg");
        break;
    }
    case 153186:
    {
        returnValue = F("Hölzern-Kreuz-Weg");
        break;
    }
    case 153187:
    {
        returnValue = F("Hölzerne Ecke");
        break;
    }
    case 153188:
    {
        returnValue = F("Hölzerne Klinke");
        break;
    }
    case 153189:
    {
        returnValue = F("Hölzerne Str.");
        break;
    }
    case 153190:
    {
        returnValue = F("Hölzerner Str.");
        break;
    }
    case 153191:
    {
        returnValue = F("Hölzerner-Rain-Str.");
        break;
    }
    case 153192:
    {
        returnValue = F("Hölzernes Wams");
        break;
    }
    case 153193:
    {
        returnValue = F("Hölzernkreuzschneise");
        break;
    }
    case 153194:
    {
        returnValue = F("Hölzersgasse");
        break;
    }
    case 153195:
    {
        returnValue = F("Hölzerstr.");
        break;
    }
    case 153196:
    {
        returnValue = F("Hölzertweg");
        break;
    }
    case 153197:
    {
        returnValue = F("Hölzerweg");
        break;
    }
    case 153198:
    {
        returnValue = F("Hölzkaul");
        break;
    }
    case 153199:
    {
        returnValue = F("Hölzlachstr.");
        break;
    }
    case 153200:
    {
        returnValue = F("Hölzlashofer Weg");
        break;
    }
    case 153201:
    {
        returnValue = F("Hölzlberg");
        break;
    }
    case 153202:
    {
        returnValue = F("Hölzlbergstr.");
        break;
    }
    case 153203:
    {
        returnValue = F("Hölzle");
        break;
    }
    case 153204:
    {
        returnValue = F("Hölzlebrunnenweg");
        break;
    }
    case 153205:
    {
        returnValue = F("Hölzlein");
        break;
    }
    case 153206:
    {
        returnValue = F("Hölzleinsmühle");
        break;
    }
    case 153207:
    {
        returnValue = F("Hölzleinweg");
        break;
    }
    case 153208:
    {
        returnValue = F("Hölzlemer Weg");
        break;
    }
    case 153209:
    {
        returnValue = F("Hölzlers");
        break;
    }
    case 153210:
    {
        returnValue = F("Hölzlerweg");
        break;
    }
    case 153211:
    {
        returnValue = F("Hölzleshaldesträßle");
        break;
    }
    case 153212:
    {
        returnValue = F("Hölzleshof");
        break;
    }
    case 153213:
    {
        returnValue = F("Hölzlesstr.");
        break;
    }
    case 153214:
    {
        returnValue = F("Hölzlestr.");
        break;
    }
    case 153215:
    {
        returnValue = F("Hölzlesweg");
        break;
    }
    case 153216:
    {
        returnValue = F("Hölzleswiesen");
        break;
    }
    case 153217:
    {
        returnValue = F("Hölzleweg");
        break;
    }
    case 153218:
    {
        returnValue = F("Hölzlhofstr.");
        break;
    }
    case 153219:
    {
        returnValue = F("Hölzlinstr.");
        break;
    }
    case 153220:
    {
        returnValue = F("Hölzliweg");
        break;
    }
    case 153221:
    {
        returnValue = F("Hölzlstr.");
        break;
    }
    case 153222:
    {
        returnValue = F("Hölzlweg");
        break;
    }
    case 153223:
    {
        returnValue = F("Hömberger Str.");
        break;
    }
    case 153224:
    {
        returnValue = F("Hömberger Weg");
        break;
    }
    case 153225:
    {
        returnValue = F("Hömbergsteige");
        break;
    }
    case 153226:
    {
        returnValue = F("Hömbergstr.");
        break;
    }
    case 153227:
    {
        returnValue = F("Hömbergweg");
        break;
    }
    case 153228:
    {
        returnValue = F("Hömeler Weg");
        break;
    }
    case 153229:
    {
        returnValue = F("Hömelstr.");
        break;
    }
    case 153230:
    {
        returnValue = F("Hömers Garten");
        break;
    }
    case 153231:
    {
        returnValue = F("Hömigweg");
        break;
    }
    case 153232:
    {
        returnValue = F("Hömken Hoff");
        break;
    }
    case 153233:
    {
        returnValue = F("Hömmanweg");
        break;
    }
    case 153234:
    {
        returnValue = F("Hömmerichstr.");
        break;
    }
    case 153235:
    {
        returnValue = F("Hömshohl");
        break;
    }
    case 153236:
    {
        returnValue = F("Hönde");
        break;
    }
    case 153237:
    {
        returnValue = F("Hönderbruch");
        break;
    }
    case 153238:
    {
        returnValue = F("Höne");
        break;
    }
    case 153239:
    {
        returnValue = F("Hönebacher Str.");
        break;
    }
    case 153240:
    {
        returnValue = F("Hönemannskamp");
        break;
    }
    case 153241:
    {
        returnValue = F("Höner Feld");
        break;
    }
    case 153242:
    {
        returnValue = F("Höner Heide");
        break;
    }
    case 153243:
    {
        returnValue = F("Höner Kirchweg");
        break;
    }
    case 153244:
    {
        returnValue = F("Höner Schulweg");
        break;
    }
    case 153245:
    {
        returnValue = F("Höner Weg");
        break;
    }
    case 153246:
    {
        returnValue = F("Höner-Mark-Weg");
        break;
    }
    case 153247:
    {
        returnValue = F("Hönerfeld");
        break;
    }
    case 153248:
    {
        returnValue = F("Hönerhop");
        break;
    }
    case 153249:
    {
        returnValue = F("Hönesschneise");
        break;
    }
    case 153250:
    {
        returnValue = F("Höngedaer Weg");
        break;
    }
    case 153251:
    {
        returnValue = F("Höngen");
        break;
    }
    case 153252:
    {
        returnValue = F("Höngener Weg");
        break;
    }
    case 153253:
    {
        returnValue = F("Höngenstr.");
        break;
    }
    case 153254:
    {
        returnValue = F("Höngesberg");
        break;
    }
    case 153255:
    {
        returnValue = F("Höniger Str.");
        break;
    }
    case 153256:
    {
        returnValue = F("Hönighausen");
        break;
    }
    case 153257:
    {
        returnValue = F("Hönigsbergstr.");
        break;
    }
    case 153258:
    {
        returnValue = F("Hönigsgrub");
        break;
    }
    case 153259:
    {
        returnValue = F("Hönigstr.");
        break;
    }
    case 153260:
    {
        returnValue = F("Hönigweg");
        break;
    }
    case 153261:
    {
        returnValue = F("Höninger Hauptstr.");
        break;
    }
    case 153262:
    {
        returnValue = F("Höninger Str.");
        break;
    }
    case 153263:
    {
        returnValue = F("Höninger Weg");
        break;
    }
    case 153264:
    {
        returnValue = F("Höningstr.");
        break;
    }
    case 153265:
    {
        returnValue = F("Hönischer Marsch");
        break;
    }
    case 153266:
    {
        returnValue = F("Hönischer Str.");
        break;
    }
    case 153267:
    {
        returnValue = F("Hönleinstr.");
        break;
    }
    case 153268:
    {
        returnValue = F("Hönnersumer Str.");
        break;
    }
    case 153269:
    {
        returnValue = F("Hönnetalstr.");
        break;
    }
    case 153270:
    {
        returnValue = F("Hönnige");
        break;
    }
    case 153271:
    {
        returnValue = F("Hönning");
        break;
    }
    case 153272:
    {
        returnValue = F("Hönningen");
        break;
    }
    case 153273:
    {
        returnValue = F("Hönningen-Dorfstr.");
        break;
    }
    case 153274:
    {
        returnValue = F("Hönninger Pfad");
        break;
    }
    case 153275:
    {
        returnValue = F("Hönninger Str.");
        break;
    }
    case 153276:
    {
        returnValue = F("Hönninger Weg");
        break;
    }
    case 153277:
    {
        returnValue = F("Hönningerstr.");
        break;
    }
    case 153278:
    {
        returnValue = F("Hönninghauser Str.");
        break;
    }
    case 153279:
    {
        returnValue = F("Hönower Chaussee");
        break;
    }
    case 153280:
    {
        returnValue = F("Hönower Spitze");
        break;
    }
    case 153281:
    {
        returnValue = F("Hönower Str.");
        break;
    }
    case 153282:
    {
        returnValue = F("Hönower Weg");
        break;
    }
    case 153283:
    {
        returnValue = F("Hönscheid");
        break;
    }
    case 153284:
    {
        returnValue = F("Höntenpad");
        break;
    }
    case 153285:
    {
        returnValue = F("Höntjebarg");
        break;
    }
    case 153286:
    {
        returnValue = F("Höntruper Str.");
        break;
    }
    case 153287:
    {
        returnValue = F("Höntruper Weg");
        break;
    }
    case 153288:
    {
        returnValue = F("Hönzer Dorfstr.");
        break;
    }
    case 153289:
    {
        returnValue = F("Hönzer Schulstr.");
        break;
    }
    case 153290:
    {
        returnValue = F("Höpen");
        break;
    }
    case 153291:
    {
        returnValue = F("Höpenbrook");
        break;
    }
    case 153292:
    {
        returnValue = F("Höpener Weg");
        break;
    }
    case 153293:
    {
        returnValue = F("Höpenhof");
        break;
    }
    case 153294:
    {
        returnValue = F("Höpenredder");
        break;
    }
    case 153295:
    {
        returnValue = F("Höpenweg");
        break;
    }
    case 153296:
    {
        returnValue = F("Höpenwiesen");
        break;
    }
    case 153297:
    {
        returnValue = F("Höperhöfen");
        break;
    }
    case 153298:
    {
        returnValue = F("Höpers Kamp");
        break;
    }
    case 153299:
    {
        returnValue = F("Höpfigheimer Str.");
        break;
    }
    case 153300:
    {
        returnValue = F("Höpfinger Str.");
        break;
    }
    case 153301:
    {
        returnValue = F("Höpflbergstr.");
        break;
    }
    case 153302:
    {
        returnValue = F("Höpfling");
        break;
    }
    case 153303:
    {
        returnValue = F("Höpflinger Weg");
        break;
    }
    case 153304:
    {
        returnValue = F("Höpflweg");
        break;
    }
    case 153305:
    {
        returnValue = F("Höpfnerstr.");
        break;
    }
    case 153306:
    {
        returnValue = F("Höpinger Str.");
        break;
    }
    case 153307:
    {
        returnValue = F("Höpken Mühle");
        break;
    }
    case 153308:
    {
        returnValue = F("Höpker-Aschoff-Weg");
        break;
    }
    case 153309:
    {
        returnValue = F("Höpmannsweg");
        break;
    }
    case 153310:
    {
        returnValue = F("Höppeleweg");
        break;
    }
    case 153311:
    {
        returnValue = F("Höppengärten");
        break;
    }
    case 153312:
    {
        returnValue = F("Höpperbrückenweg");
        break;
    }
    case 153313:
    {
        returnValue = F("Höpperfeldweg");
        break;
    }
    case 153314:
    {
        returnValue = F("Höpperkrug");
        break;
    }
    case 153315:
    {
        returnValue = F("Höppermühle");
        break;
    }
    case 153316:
    {
        returnValue = F("Höpperstr.");
        break;
    }
    case 153317:
    {
        returnValue = F("Höpperweg");
        break;
    }
    case 153318:
    {
        returnValue = F("Höppesbüsch");
        break;
    }
    case 153319:
    {
        returnValue = F("Höppeweg");
        break;
    }
    case 153320:
    {
        returnValue = F("Höppnerallee");
        break;
    }
    case 153321:
    {
        returnValue = F("Höppweg");
        break;
    }
    case 153322:
    {
        returnValue = F("Höpskamp");
        break;
    }
    case 153323:
    {
        returnValue = F("Hörasdorf");
        break;
    }
    case 153324:
    {
        returnValue = F("Hörbachstr.");
        break;
    }
    case 153325:
    {
        returnValue = F("Hörberinger Str.");
        break;
    }
    case 153326:
    {
        returnValue = F("Hörblacher Str.");
        break;
    }
    case 153327:
    {
        returnValue = F("Hörburgerstr.");
        break;
    }
    case 153328:
    {
        returnValue = F("Hörbühl");
        break;
    }
    case 153329:
    {
        returnValue = F("Hördelsteinerweg");
        break;
    }
    case 153330:
    {
        returnValue = F("Hörden");
        break;
    }
    case 153331:
    {
        returnValue = F("Hörden Kamp");
        break;
    }
    case 153332:
    {
        returnValue = F("Hördener Breite");
        break;
    }
    case 153333:
    {
        returnValue = F("Hördener Heideweg");
        break;
    }
    case 153334:
    {
        returnValue = F("Hördener Sandhöhe");
        break;
    }
    case 153335:
    {
        returnValue = F("Hördener Str.");
        break;
    }
    case 153336:
    {
        returnValue = F("Hördenstr.");
        break;
    }
    case 153337:
    {
        returnValue = F("Hörder Str.");
        break;
    }
    case 153338:
    {
        returnValue = F("Hördeweg");
        break;
    }
    case 153339:
    {
        returnValue = F("Hördlertorstr.");
        break;
    }
    case 153340:
    {
        returnValue = F("Hördorfer Weg");
        break;
    }
    case 153341:
    {
        returnValue = F("Hördt");
        break;
    }
    case 153342:
    {
        returnValue = F("Hördter Mühle");
        break;
    }
    case 153343:
    {
        returnValue = F("Hördter Str.");
        break;
    }
    case 153344:
    {
        returnValue = F("Hördter Weg");
        break;
    }
    case 153345:
    {
        returnValue = F("Hördterbergstr.");
        break;
    }
    case 153346:
    {
        returnValue = F("Hördthof");
        break;
    }
    case 153347:
    {
        returnValue = F("Höremer Weg");
        break;
    }
    case 153348:
    {
        returnValue = F("Hören");
        break;
    }
    case 153349:
    {
        returnValue = F("Hörenberg");
        break;
    }
    case 153350:
    {
        returnValue = F("Hörenhauser Str.");
        break;
    }
    case 153351:
    {
        returnValue = F("Hörenkamp");
        break;
    }
    case 153352:
    {
        returnValue = F("Hörensdamm");
        break;
    }
    case 153353:
    {
        returnValue = F("Hörenweg");
        break;
    }
    case 153354:
    {
        returnValue = F("Höretweg");
        break;
    }
    case 153355:
    {
        returnValue = F("Hörfelde");
        break;
    }
    case 153356:
    {
        returnValue = F("Hörflöthweg");
        break;
    }
    case 153357:
    {
        returnValue = F("Hörgelaustr.");
        break;
    }
    case 153358:
    {
        returnValue = F("Hörgenauer Str.");
        break;
    }
    case 153359:
    {
        returnValue = F("Hörgenbacher Str.");
        break;
    }
    case 153360:
    {
        returnValue = F("Hörgeringer Str.");
        break;
    }
    case 153361:
    {
        returnValue = F("Hörgers");
        break;
    }
    case 153362:
    {
        returnValue = F("Hörgersdorf");
        break;
    }
    case 153363:
    {
        returnValue = F("Hörgershofstr.");
        break;
    }
    case 153364:
    {
        returnValue = F("Hörglkofen");
        break;
    }
    case 153365:
    {
        returnValue = F("Hörglkofener Str.");
        break;
    }
    case 153366:
    {
        returnValue = F("Hörhammerstr.");
        break;
    }
    case 153367:
    {
        returnValue = F("Hörhof");
        break;
    }
    case 153368:
    {
        returnValue = F("Höriblick");
        break;
    }
    case 153369:
    {
        returnValue = F("Höringer Steig");
        break;
    }
    case 153370:
    {
        returnValue = F("Höringer Str.");
        break;
    }
    case 153371:
    {
        returnValue = F("Höringhausen");
        break;
    }
    case 153372:
    {
        returnValue = F("Höringhäuser Str.");
        break;
    }
    case 153373:
    {
        returnValue = F("Höringhäuser Weg");
        break;
    }
    case 153374:
    {
        returnValue = F("Hörinkelgasse");
        break;
    }
    case 153375:
    {
        returnValue = F("Hörinkelsgasse");
        break;
    }
    case 153376:
    {
        returnValue = F("Höristr.");
        break;
    }
    case 153377:
    {
        returnValue = F("Höriweg");
        break;
    }
    case 153378:
    {
        returnValue = F("Hörlbacher Str.");
        break;
    }
    case 153379:
    {
        returnValue = F("Hörlbergstr.");
        break;
    }
    case 153380:
    {
        returnValue = F("Hörle");
        break;
    }
    case 153381:
    {
        returnValue = F("Hörlebacher Str.");
        break;
    }
    case 153382:
    {
        returnValue = F("Hörleinsweg");
        break;
    }
    case 153383:
    {
        returnValue = F("Hörler Str.");
        break;
    }
    case 153384:
    {
        returnValue = F("Hörlesbergstr.");
        break;
    }
    case 153385:
    {
        returnValue = F("Hörlesgasse");
        break;
    }
    case 153386:
    {
        returnValue = F("Hörlestr.");
        break;
    }
    case 153387:
    {
        returnValue = F("Hörlesweg");
        break;
    }
    case 153388:
    {
        returnValue = F("Hörleweg");
        break;
    }
    case 153389:
    {
        returnValue = F("Hörlholzweg");
        break;
    }
    case 153390:
    {
        returnValue = F("Hörlinreuther Weg");
        break;
    }
    case 153391:
    {
        returnValue = F("Hörlitzer Str.");
        break;
    }
    case 153392:
    {
        returnValue = F("Hörlkam");
        break;
    }
    case 153393:
    {
        returnValue = F("Hörlstr.");
        break;
    }
    case 153394:
    {
        returnValue = F("Hörlweg");
        break;
    }
    case 153395:
    {
        returnValue = F("Hörmannsberger Str.");
        break;
    }
    case 153396:
    {
        returnValue = F("Hörmannsdorf");
        break;
    }
    case 153397:
    {
        returnValue = F("Hörmannshofer Weg");
        break;
    }
    case 153398:
    {
        returnValue = F("Hörmannstr.");
        break;
    }
    case 153399:
    {
        returnValue = F("Hörmbach");
        break;
    }
    case 153400:
    {
        returnValue = F("Hörmenweg");
        break;
    }
    case 153401:
    {
        returnValue = F("Hörmetsham");
        break;
    }
    case 153402:
    {
        returnValue = F("Hörmker Str.");
        break;
    }
    case 153403:
    {
        returnValue = F("Hörn");
        break;
    }
    case 153404:
    {
        returnValue = F("Hörn Vier");
        break;
    }
    case 153405:
    {
        returnValue = F("Hörn van't Diek");
        break;
    }
    case 153406:
    {
        returnValue = F("Hörnau");
        break;
    }
    case 153407:
    {
        returnValue = F("Hörnchenstr.");
        break;
    }
    case 153408:
    {
        returnValue = F("Hörnchenweg");
        break;
    }
    case 153409:
    {
        returnValue = F("Hörndlbruck");
        break;
    }
    case 153410:
    {
        returnValue = F("Hörndlweg");
        break;
    }
    case 153411:
    {
        returnValue = F("Hörne");
        break;
    }
    case 153412:
    {
        returnValue = F("Hörne-Ost");
        break;
    }
    case 153413:
    {
        returnValue = F("Hörne-West");
        break;
    }
    case 153414:
    {
        returnValue = F("Hörneck");
        break;
    }
    case 153415:
    {
        returnValue = F("Hörnegrundweg");
        break;
    }
    case 153416:
    {
        returnValue = F("Hörnelweg");
        break;
    }
    case 153417:
    {
        returnValue = F("Hörnen");
        break;
    }
    case 153418:
    {
        returnValue = F("Hörnenweg");
        break;
    }
    case 153419:
    {
        returnValue = F("Hörner Esch");
        break;
    }
    case 153420:
    {
        returnValue = F("Hörner Str.");
        break;
    }
    case 153421:
    {
        returnValue = F("Hörner Weg");
        break;
    }
    case 153422:
    {
        returnValue = F("Hörnerblick");
        break;
    }
    case 153423:
    {
        returnValue = F("Hörnerbrücke");
        break;
    }
    case 153424:
    {
        returnValue = F("Hörnerhok");
        break;
    }
    case 153425:
    {
        returnValue = F("Hörnerkamp");
        break;
    }
    case 153426:
    {
        returnValue = F("Hörnerstr.");
        break;
    }
    case 153427:
    {
        returnValue = F("Hörnertweg");
        break;
    }
    case 153428:
    {
        returnValue = F("Hörnerweg");
        break;
    }
    case 153429:
    {
        returnValue = F("Hörnestr.");
        break;
    }
    case 153430:
    {
        returnValue = F("Hörneweg");
        break;
    }
    case 153431:
    {
        returnValue = F("Hörnhusen");
        break;
    }
    case 153432:
    {
        returnValue = F("Hörningplatz");
        break;
    }
    case 153433:
    {
        returnValue = F("Hörningstr.");
        break;
    }
    case 153434:
    {
        returnValue = F("Hörningweg");
        break;
    }
    case 153435:
    {
        returnValue = F("Hörnitzer Str.");
        break;
    }
    case 153436:
    {
        returnValue = F("Hörnkamp");
        break;
    }
    case 153437:
    {
        returnValue = F("Hörnkweg");
        break;
    }
    case 153438:
    {
        returnValue = F("Hörnle");
        break;
    }
    case 153439:
    {
        returnValue = F("Hörnle-Rundweg");
        break;
    }
    case 153440:
    {
        returnValue = F("Hörnle-Stühle-Weg");
        break;
    }
    case 153441:
    {
        returnValue = F("Hörnlebergstr.");
        break;
    }
    case 153442:
    {
        returnValue = F("Hörnlebergweg");
        break;
    }
    case 153443:
    {
        returnValue = F("Hörnlebrunnenweg");
        break;
    }
    case 153444:
    {
        returnValue = F("Hörnlehaldenweg");
        break;
    }
    case 153445:
    {
        returnValue = F("Hörnleinsburg");
        break;
    }
    case 153446:
    {
        returnValue = F("Hörnlepass");
        break;
    }
    case 153447:
    {
        returnValue = F("Hörnlepfad");
        break;
    }
    case 153448:
    {
        returnValue = F("Hörnlesbergweg");
        break;
    }
    case 153449:
    {
        returnValue = F("Hörnlesbrunnen");
        break;
    }
    case 153450:
    {
        returnValue = F("Hörnlesdornweg");
        break;
    }
    case 153451:
    {
        returnValue = F("Hörnleshalden");
        break;
    }
    case 153452:
    {
        returnValue = F("Hörnleshangweg");
        break;
    }
    case 153453:
    {
        returnValue = F("Hörnleshauweg");
        break;
    }
    case 153454:
    {
        returnValue = F("Hörnlessteige");
        break;
    }
    case 153455:
    {
        returnValue = F("Hörnlesstich");
        break;
    }
    case 153456:
    {
        returnValue = F("Hörnlessträßchen");
        break;
    }
    case 153457:
    {
        returnValue = F("Hörnlesteige");
        break;
    }
    case 153458:
    {
        returnValue = F("Hörnlestr.");
        break;
    }
    case 153459:
    {
        returnValue = F("Hörnlesweg");
        break;
    }
    case 153460:
    {
        returnValue = F("Hörnletraufweg");
        break;
    }
    case 153461:
    {
        returnValue = F("Hörnleweg");
        break;
    }
    case 153462:
    {
        returnValue = F("Hörnlishofstr.");
        break;
    }
    case 153463:
    {
        returnValue = F("Hörnliweg");
        break;
    }
    case 153464:
    {
        returnValue = F("Hörnmoorstr.");
        break;
    }
    case 153465:
    {
        returnValue = F("Hörnschen Knapp");
        break;
    }
    case 153466:
    {
        returnValue = F("Hörnsheimer Pfad");
        break;
    }
    case 153467:
    {
        returnValue = F("Hörnstr.");
        break;
    }
    case 153468:
    {
        returnValue = F("Hörntwiete");
        break;
    }
    case 153469:
    {
        returnValue = F("Hörnumer Str.");
        break;
    }
    case 153470:
    {
        returnValue = F("Hörnumweg");
        break;
    }
    case 153471:
    {
        returnValue = F("Hörnweg");
        break;
    }
    case 153472:
    {
        returnValue = F("Höroldtstr.");
        break;
    }
    case 153473:
    {
        returnValue = F("Hörpeler Bahnhof");
        break;
    }
    case 153474:
    {
        returnValue = F("Hörpeler Ring");
        break;
    }
    case 153475:
    {
        returnValue = F("Hörpeler Weg");
        break;
    }
    case 153476:
    {
        returnValue = F("Hörpointer Weg");
        break;
    }
    case 153477:
    {
        returnValue = F("Hörpoldinger Str.");
        break;
    }
    case 153478:
    {
        returnValue = F("Hörschbachstr.");
        break;
    }
    case 153479:
    {
        returnValue = F("Hörscheider Str.");
        break;
    }
    case 153480:
    {
        returnValue = F("Hörscheler Str.");
        break;
    }
    case 153481:
    {
        returnValue = F("Hörschhof");
        break;
    }
    case 153482:
    {
        returnValue = F("Hörschhofer Str.");
        break;
    }
    case 153483:
    {
        returnValue = F("Hörschwager Str.");
        break;
    }
    case 153484:
    {
        returnValue = F("Hörschweg");
        break;
    }
    case 153485:
    {
        returnValue = F("Hörschweiler Str.");
        break;
    }
    case 153486:
    {
        returnValue = F("Hörselbergblick");
        break;
    }
    case 153487:
    {
        returnValue = F("Hörselgauer Str.");
        break;
    }
    case 153488:
    {
        returnValue = F("Hörselstieg");
        break;
    }
    case 153489:
    {
        returnValue = F("Hörselstr.");
        break;
    }
    case 153490:
    {
        returnValue = F("Hörseltalstr.");
        break;
    }
    case 153491:
    {
        returnValue = F("Hörselweg");
        break;
    }
    case 153492:
    {
        returnValue = F("Hörsenstr.");
        break;
    }
    case 153493:
    {
        returnValue = F("Hörsgarten");
        break;
    }
    case 153494:
    {
        returnValue = F("Hörsinger Str.");
        break;
    }
    case 153495:
    {
        returnValue = F("Hörsinger Weg");
        break;
    }
    case 153496:
    {
        returnValue = F("Hörst");
        break;
    }
    case 153497:
    {
        returnValue = F("Hörste");
        break;
    }
    case 153498:
    {
        returnValue = F("Hörsteiner Str.");
        break;
    }
    case 153499:
    {
        returnValue = F("Hörsteiner Weg");
        break;
    }
    case 153500:
    {
        returnValue = F("Hörsteler Str.");
        break;
    }
    case 153501:
    {
        returnValue = F("Hörsteloe");
        break;
    }
    case 153502:
    {
        returnValue = F("Hörsten");
        break;
    }
    case 153503:
    {
        returnValue = F("Hörsten Weg");
        break;
    }
    case 153504:
    {
        returnValue = F("Hörstendamm");
        break;
    }
    case 153505:
    {
        returnValue = F("Hörstendeich");
        break;
    }
    case 153506:
    {
        returnValue = F("Hörsteneck");
        break;
    }
    case 153507:
    {
        returnValue = F("Hörstener Str.");
        break;
    }
    case 153508:
    {
        returnValue = F("Hörstener Weg");
        break;
    }
    case 153509:
    {
        returnValue = F("Hörstenstr.");
        break;
    }
    case 153510:
    {
        returnValue = F("Hörstenweg");
        break;
    }
    case 153511:
    {
        returnValue = F("Hörster Allee");
        break;
    }
    case 153512:
    {
        returnValue = F("Hörster Esch");
        break;
    }
    case 153513:
    {
        returnValue = F("Hörster Heide");
        break;
    }
    case 153514:
    {
        returnValue = F("Hörster Schulweg");
        break;
    }
    case 153515:
    {
        returnValue = F("Hörster Siedlung");
        break;
    }
    case 153516:
    {
        returnValue = F("Hörster Str.");
        break;
    }
    case 153517:
    {
        returnValue = F("Hörster Weg");
        break;
    }
    case 153518:
    {
        returnValue = F("Hörsterbusch");
        break;
    }
    case 153519:
    {
        returnValue = F("Hörsterkamp");
        break;
    }
    case 153520:
    {
        returnValue = F("Hörsteweg");
        break;
    }
    case 153521:
    {
        returnValue = F("Hörstingsheide");
        break;
    }
    case 153522:
    {
        returnValue = F("Hörstingstr.");
        break;
    }
    case 153523:
    {
        returnValue = F("Hörstr.");
        break;
    }
    case 153524:
    {
        returnValue = F("Hörstrupweg");
        break;
    }
    case 153525:
    {
        returnValue = F("Hörststr.");
        break;
    }
    case 153526:
    {
        returnValue = F("Hörtensteinerstr.");
        break;
    }
    case 153527:
    {
        returnValue = F("Hörtweg");
        break;
    }
    case 153528:
    {
        returnValue = F("Hörtwies");
        break;
    }
    case 153529:
    {
        returnValue = F("Höruper Str.");
        break;
    }
    case 153530:
    {
        returnValue = F("Hörvelsinger Str.");
        break;
    }
    case 153531:
    {
        returnValue = F("Hörvelsinger Weg");
        break;
    }
    case 153532:
    {
        returnValue = F("Hörwarthstr.");
        break;
    }
    case 153533:
    {
        returnValue = F("Hörwegstr.");
        break;
    }
    case 153534:
    {
        returnValue = F("Hörzhausener Str.");
        break;
    }
    case 153535:
    {
        returnValue = F("Hörzing");
        break;
    }
    case 153536:
    {
        returnValue = F("Hösacker Str.");
        break;
    }
    case 153537:
    {
        returnValue = F("Hösackerer Str.");
        break;
    }
    case 153538:
    {
        returnValue = F("Hösamer Feld");
        break;
    }
    case 153539:
    {
        returnValue = F("Hösamer Str.");
        break;
    }
    case 153540:
    {
        returnValue = F("Hösbacher Weg");
        break;
    }
    case 153541:
    {
        returnValue = F("Höschelsberg");
        break;
    }
    case 153542:
    {
        returnValue = F("Höschlhofweg");
        break;
    }
    case 153543:
    {
        returnValue = F("Hösel");
        break;
    }
    case 153544:
    {
        returnValue = F("Höseleck");
        break;
    }
    case 153545:
    {
        returnValue = F("Höseler Platz");
        break;
    }
    case 153546:
    {
        returnValue = F("Höseler Str.");
        break;
    }
    case 153547:
    {
        returnValue = F("Höselhurster Str.");
        break;
    }
    case 153548:
    {
        returnValue = F("Höselstr.");
        break;
    }
    case 153549:
    {
        returnValue = F("Höselweg");
        break;
    }
    case 153550:
    {
        returnValue = F("Hösichleite");
        break;
    }
    case 153551:
    {
        returnValue = F("Hösinghausen");
        break;
    }
    case 153552:
    {
        returnValue = F("Hösjekamp");
        break;
    }
    case 153553:
    {
        returnValue = F("Höslbergweg");
        break;
    }
    case 153554:
    {
        returnValue = F("Höslekellerweg");
        break;
    }
    case 153555:
    {
        returnValue = F("Höslerstr.");
        break;
    }
    case 153556:
    {
        returnValue = F("Höslestr.");
        break;
    }
    case 153557:
    {
        returnValue = F("Höslstr.");
        break;
    }
    case 153558:
    {
        returnValue = F("Hössel");
        break;
    }
    case 153559:
    {
        returnValue = F("Hösselessteige");
        break;
    }
    case 153560:
    {
        returnValue = F("Hösselesstr.");
        break;
    }
    case 153561:
    {
        returnValue = F("Hösselgraben");
        break;
    }
    case 153562:
    {
        returnValue = F("Hösselinshof");
        break;
    }
    case 153563:
    {
        returnValue = F("Hössen");
        break;
    }
    case 153564:
    {
        returnValue = F("Hössenweg");
        break;
    }
    case 153565:
    {
        returnValue = F("Hösseringer Str.");
        break;
    }
    case 153566:
    {
        returnValue = F("Hösseringer Weg");
        break;
    }
    case 153567:
    {
        returnValue = F("Hösslinswarter Weg");
        break;
    }
    case 153568:
    {
        returnValue = F("Höst-Vornicker-Weg");
        break;
    }
    case 153569:
    {
        returnValue = F("Höstchesflur");
        break;
    }
    case 153570:
    {
        returnValue = F("Höstenweg");
        break;
    }
    case 153571:
    {
        returnValue = F("Höster Damm");
        break;
    }
    case 153572:
    {
        returnValue = F("Höster Esch");
        break;
    }
    case 153573:
    {
        returnValue = F("Höster Str.");
        break;
    }
    case 153574:
    {
        returnValue = F("Höster Weg");
        break;
    }
    case 153575:
    {
        returnValue = F("Höstpark");
        break;
    }
    case 153576:
    {
        returnValue = F("Höststr.");
        break;
    }
    case 153577:
    {
        returnValue = F("Hötenslebener Str.");
        break;
    }
    case 153578:
    {
        returnValue = F("Hötensleber Landstr.");
        break;
    }
    case 153579:
    {
        returnValue = F("Hötensleber Str.");
        break;
    }
    case 153580:
    {
        returnValue = F("Höter Berg");
        break;
    }
    case 153581:
    {
        returnValue = F("Höterkesweg");
        break;
    }
    case 153582:
    {
        returnValue = F("Hötkeweg");
        break;
    }
    case 153583:
    {
        returnValue = F("Höttengäßchen");
        break;
    }
    case 153584:
    {
        returnValue = F("Höttenpfad");
        break;
    }
    case 153585:
    {
        returnValue = F("Höttenstr.");
        break;
    }
    case 153586:
    {
        returnValue = F("Höttepoll");
        break;
    }
    case 153587:
    {
        returnValue = F("Höttinger Str.");
        break;
    }
    case 153588:
    {
        returnValue = F("Höttingerstr.");
        break;
    }
    case 153589:
    {
        returnValue = F("Höttingstr.");
        break;
    }
    case 153590:
    {
        returnValue = F("Höttkepaol");
        break;
    }
    case 153591:
    {
        returnValue = F("Hötzelsberger Weg");
        break;
    }
    case 153592:
    {
        returnValue = F("Hötzelsdorfer Weg");
        break;
    }
    case 153593:
    {
        returnValue = F("Hötzelsrodaer Str.");
        break;
    }
    case 153594:
    {
        returnValue = F("Hötzendorf");
        break;
    }
    case 153595:
    {
        returnValue = F("Hötzerreut");
        break;
    }
    case 153596:
    {
        returnValue = F("Hötzingen");
        break;
    }
    case 153597:
    {
        returnValue = F("Hötzlhof");
        break;
    }
    case 153598:
    {
        returnValue = F("Hötzling");
        break;
    }
    case 153599:
    {
        returnValue = F("Hötzlstr.");
        break;
    }
    case 153600:
    {
        returnValue = F("Hövel");
        break;
    }
    case 153601:
    {
        returnValue = F("Hövelchesweg");
        break;
    }
    case 153602:
    {
        returnValue = F("Höveler Ring");
        break;
    }
    case 153603:
    {
        returnValue = F("Höveler Steig");
        break;
    }
    case 153604:
    {
        returnValue = F("Höveler Str.");
        break;
    }
    case 153605:
    {
        returnValue = F("Höveler Weg");
        break;
    }
    case 153606:
    {
        returnValue = F("Hövelhofer Str.");
        break;
    }
    case 153607:
    {
        returnValue = F("Hövelinger Heide");
        break;
    }
    case 153608:
    {
        returnValue = F("Hövelmarkt");
        break;
    }
    case 153609:
    {
        returnValue = F("Hövelrieger Str.");
        break;
    }
    case 153610:
    {
        returnValue = F("Hövels Weiden");
        break;
    }
    case 153611:
    {
        returnValue = F("Hövelsennestr.");
        break;
    }
    case 153612:
    {
        returnValue = F("Hövelsstr.");
        break;
    }
    case 153613:
    {
        returnValue = F("Hövelstr.");
        break;
    }
    case 153614:
    {
        returnValue = F("Hövelweg");
        break;
    }
    case 153615:
    {
        returnValue = F("Hövelwiese");
        break;
    }
    case 153616:
    {
        returnValue = F("Höven");
        break;
    }
    case 153617:
    {
        returnValue = F("Hövenstr.");
        break;
    }
    case 153618:
    {
        returnValue = F("Höver Feld");
        break;
    }
    case 153619:
    {
        returnValue = F("Hövergasse");
        break;
    }
    case 153620:
    {
        returnValue = F("Höveringhausener Kirchweg");
        break;
    }
    case 153621:
    {
        returnValue = F("Höveringhausener Schulweg");
        break;
    }
    case 153622:
    {
        returnValue = F("Höveringhauser Weg");
        break;
    }
    case 153623:
    {
        returnValue = F("Hövesfeldweg");
        break;
    }
    case 153624:
    {
        returnValue = F("Höveter Weg");
        break;
    }
    case 153625:
    {
        returnValue = F("Hövingsfeld");
        break;
    }
    case 153626:
    {
        returnValue = F("Hövtstr.");
        break;
    }
    case 153627:
    {
        returnValue = F("Hövvelweg");
        break;
    }
    case 153628:
    {
        returnValue = F("Höwelkamp");
        break;
    }
    case 153629:
    {
        returnValue = F("Höwelsberger Weg");
        break;
    }
    case 153630:
    {
        returnValue = F("Höwelstr.");
        break;
    }
    case 153631:
    {
        returnValue = F("Höwenstr.");
        break;
    }
    case 153632:
    {
        returnValue = F("Höwenweg");
        break;
    }
    case 153633:
    {
        returnValue = F("Höxtersche Str.");
        break;
    }
    case 153634:
    {
        returnValue = F("Höxterscher Weg");
        break;
    }
    case 153635:
    {
        returnValue = F("Höxterstr.");
        break;
    }
    case 153636:
    {
        returnValue = F("Hözlashof");
        break;
    }
    case 153637:
    {
        returnValue = F("Hößelweg");
        break;
    }
    case 153638:
    {
        returnValue = F("Hößlinsülzerweg");
        break;
    }
    case 153639:
    {
        returnValue = F("Hööwjaat");
        break;
    }
    case 153640:
    {
        returnValue = F("Højerweg");
        break;
    }
    case 153641:
    {
        returnValue = F("Hübbelbicke");
        break;
    }
    case 153642:
    {
        returnValue = F("Hübel");
        break;
    }
    case 153643:
    {
        returnValue = F("Hübelbergstr.");
        break;
    }
    case 153644:
    {
        returnValue = F("Hübelbrunnenstr.");
        break;
    }
    case 153645:
    {
        returnValue = F("Hübeler Höhe");
        break;
    }
    case 153646:
    {
        returnValue = F("Hübelgasse");
        break;
    }
    case 153647:
    {
        returnValue = F("Hübelschneisenweg");
        break;
    }
    case 153648:
    {
        returnValue = F("Hübelsgasse");
        break;
    }
    case 153649:
    {
        returnValue = F("Hübelsheckerweg");
        break;
    }
    case 153650:
    {
        returnValue = F("Hübelstr.");
        break;
    }
    case 153651:
    {
        returnValue = F("Hübelweg");
        break;
    }
    case 153652:
    {
        returnValue = F("Hübener Str.");
        break;
    }
    case 153653:
    {
        returnValue = F("Hübenkamp");
        break;
    }
    case 153654:
    {
        returnValue = F("Hübentalstr.");
        break;
    }
    case 153655:
    {
        returnValue = F("Hübenthaler Str.");
        break;
    }
    case 153656:
    {
        returnValue = F("Hübers Kamp");
        break;
    }
    case 153657:
    {
        returnValue = F("Hüberskamp");
        break;
    }
    case 153658:
    {
        returnValue = F("Hübigholzweg");
        break;
    }
    case 153659:
    {
        returnValue = F("Hübinger Str.");
        break;
    }
    case 153660:
    {
        returnValue = F("Hübingerweg");
        break;
    }
    case 153661:
    {
        returnValue = F("Hübitzer Str.");
        break;
    }
    case 153662:
    {
        returnValue = F("Hübitzer Weg");
        break;
    }
    case 153663:
    {
        returnValue = F("Hüblerweg");
        break;
    }
    case 153664:
    {
        returnValue = F("Hüblteichstr.");
        break;
    }
    case 153665:
    {
        returnValue = F("Hüblweg");
        break;
    }
    case 153666:
    {
        returnValue = F("Hübner Str.");
        break;
    }
    case 153667:
    {
        returnValue = F("Hübnerberg");
        break;
    }
    case 153668:
    {
        returnValue = F("Hübnergasse");
        break;
    }
    case 153669:
    {
        returnValue = F("Hübnerstr.");
        break;
    }
    case 153670:
    {
        returnValue = F("Hübnerweg");
        break;
    }
    case 153671:
    {
        returnValue = F("Hübsch-Jörgen-Str.");
        break;
    }
    case 153672:
    {
        returnValue = F("Hübschberg");
        break;
    }
    case 153673:
    {
        returnValue = F("Hübschenriederstr.");
        break;
    }
    case 153674:
    {
        returnValue = F("Hübschental");
        break;
    }
    case 153675:
    {
        returnValue = F("Hübscher Berg");
        break;
    }
    case 153676:
    {
        returnValue = F("Hübscher Graben");
        break;
    }
    case 153677:
    {
        returnValue = F("Hübsches Hölzle");
        break;
    }
    case 153678:
    {
        returnValue = F("Hübschleweg");
        break;
    }
    case 153679:
    {
        returnValue = F("Hübschlingweg");
        break;
    }
    case 153680:
    {
        returnValue = F("Hübschstr.");
        break;
    }
    case 153681:
    {
        returnValue = F("Hübschäcker");
        break;
    }
    case 153682:
    {
        returnValue = F("Hübühl");
        break;
    }
    case 153683:
    {
        returnValue = F("Hüchelbeuel");
        break;
    }
    case 153684:
    {
        returnValue = F("Hüchelhovener Weg");
        break;
    }
    case 153685:
    {
        returnValue = F("Hüchelner Benden");
        break;
    }
    case 153686:
    {
        returnValue = F("Hüchelner Str.");
        break;
    }
    case 153687:
    {
        returnValue = F("Hüchtingstr.");
        break;
    }
    case 153688:
    {
        returnValue = F("Hüchtstr.");
        break;
    }
    case 153689:
    {
        returnValue = F("Hückedahl");
        break;
    }
    case 153690:
    {
        returnValue = F("Hückeler Höhe");
        break;
    }
    case 153691:
    {
        returnValue = F("Hückelhovener Ring");
        break;
    }
    case 153692:
    {
        returnValue = F("Hückelhovener Str.");
        break;
    }
    case 153693:
    {
        returnValue = F("Hückelweg");
        break;
    }
    case 153694:
    {
        returnValue = F("Hückenweg");
        break;
    }
    case 153695:
    {
        returnValue = F("Hücker-Dorf");
        break;
    }
    case 153696:
    {
        returnValue = F("Hückeswagener Str.");
        break;
    }
    case 153697:
    {
        returnValue = F("Hückhausener Berg");
        break;
    }
    case 153698:
    {
        returnValue = F("Hückhausener Str.");
        break;
    }
    case 153699:
    {
        returnValue = F("Hückingen");
        break;
    }
    case 153700:
    {
        returnValue = F("Hüdderath");
        break;
    }
    case 153701:
    {
        returnValue = F("Hüddessumer Str.");
        break;
    }
    case 153702:
    {
        returnValue = F("Hüddinger Str.");
        break;
    }
    case 153703:
    {
        returnValue = F("Hüde");
        break;
    }
    case 153704:
    {
        returnValue = F("Hüdepohlstr.");
        break;
    }
    case 153705:
    {
        returnValue = F("Hüder Feld");
        break;
    }
    case 153706:
    {
        returnValue = F("Hüder Fladder");
        break;
    }
    case 153707:
    {
        returnValue = F("Hüder Kirchweg");
        break;
    }
    case 153708:
    {
        returnValue = F("Hüderbeek");
        break;
    }
    case 153709:
    {
        returnValue = F("Hüding");
        break;
    }
    case 153710:
    {
        returnValue = F("Hüejäsje");
        break;
    }
    case 153711:
    {
        returnValue = F("Hüfelbergstr.");
        break;
    }
    case 153712:
    {
        returnValue = F("Hüfen");
        break;
    }
    case 153713:
    {
        returnValue = F("Hüfengasse");
        break;
    }
    case 153714:
    {
        returnValue = F("Hüfenstr.");
        break;
    }
    case 153715:
    {
        returnValue = F("Hüffel");
        break;
    }
    case 153716:
    {
        returnValue = F("Hüffelsheimer Str.");
        break;
    }
    case 153717:
    {
        returnValue = F("Hüffelweg");
        break;
    }
    case 153718:
    {
        returnValue = F("Hüffen");
        break;
    }
    case 153719:
    {
        returnValue = F("Hüffenhardter Weg");
        break;
    }
    case 153720:
    {
        returnValue = F("Hüfferstr.");
        break;
    }
    case 153721:
    {
        returnValue = F("Hüffertstr.");
        break;
    }
    case 153722:
    {
        returnValue = F("Hüffler Str.");
        break;
    }
    case 153723:
    {
        returnValue = F("Hüfinger Str.");
        break;
    }
    case 153724:
    {
        returnValue = F("Hüflegewann");
        break;
    }
    case 153725:
    {
        returnValue = F("Hüfnergasse");
        break;
    }
    case 153726:
    {
        returnValue = F("Hüfnermark");
        break;
    }
    case 153727:
    {
        returnValue = F("Hüfnerstr.");
        break;
    }
    case 153728:
    {
        returnValue = F("Hüfnerweg");
        break;
    }
    case 153729:
    {
        returnValue = F("Hüfte");
        break;
    }
    case 153730:
    {
        returnValue = F("Hüftersheimer Str.");
        break;
    }
    case 153731:
    {
        returnValue = F("Hüftgasse");
        break;
    }
    case 153732:
    {
        returnValue = F("Hügberg");
        break;
    }
    case 153733:
    {
        returnValue = F("Hügel");
        break;
    }
    case 153734:
    {
        returnValue = F("Hügel-Schneise");
        break;
    }
    case 153735:
    {
        returnValue = F("Hügelauweg");
        break;
    }
    case 153736:
    {
        returnValue = F("Hügelein");
        break;
    }
    case 153737:
    {
        returnValue = F("Hügeleschweg");
        break;
    }
    case 153738:
    {
        returnValue = F("Hügelgasse");
        break;
    }
    case 153739:
    {
        returnValue = F("Hügelgräberstr.");
        break;
    }
    case 153740:
    {
        returnValue = F("Hügelgräberweg");
        break;
    }
    case 153741:
    {
        returnValue = F("Hügelheimer Str.");
        break;
    }
    case 153742:
    {
        returnValue = F("Hügelheimer Weg");
        break;
    }
    case 153743:
    {
        returnValue = F("Hügelhof");
        break;
    }
    case 153744:
    {
        returnValue = F("Hügelland");
        break;
    }
    case 153745:
    {
        returnValue = F("Hügellandstr.");
        break;
    }
    case 153746:
    {
        returnValue = F("Hügelrose");
        break;
    }
    case 153747:
    {
        returnValue = F("Hügelschneise");
        break;
    }
    case 153748:
    {
        returnValue = F("Hügelsheimer Str.");
        break;
    }
    case 153749:
    {
        returnValue = F("Hügelsheimerweg");
        break;
    }
    case 153750:
    {
        returnValue = F("Hügelstieg");
        break;
    }
    case 153751:
    {
        returnValue = F("Hügelstr.");
        break;
    }
    case 153752:
    {
        returnValue = F("Hügelweg");
        break;
    }
    case 153753:
    {
        returnValue = F("Hügeläcker");
        break;
    }
    case 153754:
    {
        returnValue = F("Hüggelstr.");
        break;
    }
    case 153755:
    {
        returnValue = F("Hühfeldstr.");
        break;
    }
    case 153756:
    {
        returnValue = F("Hühlberg");
        break;
    }
    case 153757:
    {
        returnValue = F("Hühlestr.");
        break;
    }
    case 153758:
    {
        returnValue = F("Hühleweg");
        break;
    }
    case 153759:
    {
        returnValue = F("Hühlstr.");
        break;
    }
    case 153760:
    {
        returnValue = F("Hühndorfer Str.");
        break;
    }
    case 153761:
    {
        returnValue = F("Hühnefelder Str.");
        break;
    }
    case 153762:
    {
        returnValue = F("Hühner");
        break;
    }
    case 153763:
    {
        returnValue = F("Hühnerbach");
        break;
    }
    case 153764:
    {
        returnValue = F("Hühnerbachschneise");
        break;
    }
    case 153765:
    {
        returnValue = F("Hühnerbachweg");
        break;
    }
    case 153766:
    {
        returnValue = F("Hühnerbek");
        break;
    }
    case 153767:
    {
        returnValue = F("Hühnerberg");
        break;
    }
    case 153768:
    {
        returnValue = F("Hühnerberger Str.");
        break;
    }
    case 153769:
    {
        returnValue = F("Hühnerbergstr.");
        break;
    }
    case 153770:
    {
        returnValue = F("Hühnerbergsweg");
        break;
    }
    case 153771:
    {
        returnValue = F("Hühnerbergweg");
        break;
    }
    case 153772:
    {
        returnValue = F("Hühnerbruch");
        break;
    }
    case 153773:
    {
        returnValue = F("Hühnerbrücke");
        break;
    }
    case 153774:
    {
        returnValue = F("Hühnerbrünnele");
        break;
    }
    case 153775:
    {
        returnValue = F("Hühnerbusch");
        break;
    }
    case 153776:
    {
        returnValue = F("Hühnerbuschstr.");
        break;
    }
    case 153777:
    {
        returnValue = F("Hühnerbuschweg");
        break;
    }
    case 153778:
    {
        returnValue = F("Hühnerbühl");
        break;
    }
    case 153779:
    {
        returnValue = F("Hühnerbühlstr.");
        break;
    }
    case 153780:
    {
        returnValue = F("Hühnerbühlweg");
        break;
    }
    case 153781:
    {
        returnValue = F("Hühnerfarm");
        break;
    }
    case 153782:
    {
        returnValue = F("Hühnerfarmweg");
        break;
    }
    case 153783:
    {
        returnValue = F("Hühnerfeld");
        break;
    }
    case 153784:
    {
        returnValue = F("Hühnerfeldstr.");
        break;
    }
    case 153785:
    {
        returnValue = F("Hühnerfeldweg");
        break;
    }
    case 153786:
    {
        returnValue = F("Hühnerflur");
        break;
    }
    case 153787:
    {
        returnValue = F("Hühnergarten");
        break;
    }
    case 153788:
    {
        returnValue = F("Hühnergasse");
        break;
    }
    case 153789:
    {
        returnValue = F("Hühnergatterweg");
        break;
    }
    case 153790:
    {
        returnValue = F("Hühnergäßchen");
        break;
    }
    case 153791:
    {
        returnValue = F("Hühnerhard");
        break;
    }
    case 153792:
    {
        returnValue = F("Hühnerhecke");
        break;
    }
    case 153793:
    {
        returnValue = F("Hühnerheide");
        break;
    }
    case 153794:
    {
        returnValue = F("Hühnerhof");
        break;
    }
    case 153795:
    {
        returnValue = F("Hühnerhofweg");
        break;
    }
    case 153796:
    {
        returnValue = F("Hühnerhäuserweg");
        break;
    }
    case 153797:
    {
        returnValue = F("Hühnerkamp");
        break;
    }
    case 153798:
    {
        returnValue = F("Hühnerkropf");
        break;
    }
    case 153799:
    {
        returnValue = F("Hühnerland");
        break;
    }
    case 153800:
    {
        returnValue = F("Hühnerlauweg");
        break;
    }
    case 153801:
    {
        returnValue = F("Hühnerländer Weg");
        break;
    }
    case 153802:
    {
        returnValue = F("Hühnermannsgasse");
        break;
    }
    case 153803:
    {
        returnValue = F("Hühnermißenweg");
        break;
    }
    case 153804:
    {
        returnValue = F("Hühnermühle");
        break;
    }
    case 153805:
    {
        returnValue = F("Hühnerpad");
        break;
    }
    case 153806:
    {
        returnValue = F("Hühnerpfad");
        break;
    }
    case 153807:
    {
        returnValue = F("Hühnerrain");
        break;
    }
    case 153808:
    {
        returnValue = F("Hühnerrech");
        break;
    }
    case 153809:
    {
        returnValue = F("Hühnerschneise");
        break;
    }
    case 153810:
    {
        returnValue = F("Hühnerseifen");
        break;
    }
    case 153811:
    {
        returnValue = F("Hühnerstallweg");
        break;
    }
    case 153812:
    {
        returnValue = F("Hühnersteig");
        break;
    }
    case 153813:
    {
        returnValue = F("Hühnersteige");
        break;
    }
    case 153814:
    {
        returnValue = F("Hühnerstieg");
        break;
    }
    case 153815:
    {
        returnValue = F("Hühnerstr.");
        break;
    }
    case 153816:
    {
        returnValue = F("Hühnertal");
        break;
    }
    case 153817:
    {
        returnValue = F("Hühnertwiete");
        break;
    }
    case 153818:
    {
        returnValue = F("Hühnerweg");
        break;
    }
    case 153819:
    {
        returnValue = F("Hühnerwegle");
        break;
    }
    case 153820:
    {
        returnValue = F("Hühnerwinkel");
        break;
    }
    case 153821:
    {
        returnValue = F("Hühnerwinkelweg");
        break;
    }
    case 153822:
    {
        returnValue = F("Hühnerworth");
        break;
    }
    case 153823:
    {
        returnValue = F("Hühngarten");
        break;
    }
    case 153824:
    {
        returnValue = F("Hühnleinsweg");
        break;
    }
    case 153825:
    {
        returnValue = F("Hühnlesgasse");
        break;
    }
    case 153826:
    {
        returnValue = F("Hühnlesäcker");
        break;
    }
    case 153827:
    {
        returnValue = F("Hüholz");
        break;
    }
    case 153828:
    {
        returnValue = F("Hüholzer Str.");
        break;
    }
    case 153829:
    {
        returnValue = F("Hüholzweg");
        break;
    }
    case 153830:
    {
        returnValue = F("Hühr");
        break;
    }
    case 153831:
    {
        returnValue = F("Hüinger Hof");
        break;
    }
    case 153832:
    {
        returnValue = F("Hülbachweg");
        break;
    }
    case 153833:
    {
        returnValue = F("Hülben");
        break;
    }
    case 153834:
    {
        returnValue = F("Hülbener Str.");
        break;
    }
    case 153835:
    {
        returnValue = F("Hülbengasse");
        break;
    }
    case 153836:
    {
        returnValue = F("Hülbenplatz");
        break;
    }
    case 153837:
    {
        returnValue = F("Hülbenstr.");
        break;
    }
    case 153838:
    {
        returnValue = F("Hülbenweg");
        break;
    }
    case 153839:
    {
        returnValue = F("Hülbenäckerweg");
        break;
    }
    case 153840:
    {
        returnValue = F("Hülbeweg");
        break;
    }
    case 153841:
    {
        returnValue = F("Hülbgässle");
        break;
    }
    case 153842:
    {
        returnValue = F("Hülbstr.");
        break;
    }
    case 153843:
    {
        returnValue = F("Hülchrather Str.");
        break;
    }
    case 153844:
    {
        returnValue = F("Hüldernweg");
        break;
    }
    case 153845:
    {
        returnValue = F("Hülen");
        break;
    }
    case 153846:
    {
        returnValue = F("Hülenbergstr.");
        break;
    }
    case 153847:
    {
        returnValue = F("Hülengasse");
        break;
    }
    case 153848:
    {
        returnValue = F("Hülengässle");
        break;
    }
    case 153849:
    {
        returnValue = F("Hülenstr.");
        break;
    }
    case 153850:
    {
        returnValue = F("Hülenweg");
        break;
    }
    case 153851:
    {
        returnValue = F("Hülfensbergstr.");
        break;
    }
    case 153852:
    {
        returnValue = F("Hülfsstich");
        break;
    }
    case 153853:
    {
        returnValue = F("Hüling");
        break;
    }
    case 153854:
    {
        returnValue = F("Hülk");
        break;
    }
    case 153855:
    {
        returnValue = F("Hülkenberg");
        break;
    }
    case 153856:
    {
        returnValue = F("Hüll");
        break;
    }
    case 153857:
    {
        returnValue = F("Hüllberg");
        break;
    }
    case 153858:
    {
        returnValue = F("Hüllbergweg");
        break;
    }
    case 153859:
    {
        returnValue = F("Hüllebrandweg");
        break;
    }
    case 153860:
    {
        returnValue = F("Hüllen");
        break;
    }
    case 153861:
    {
        returnValue = F("Hüllenburg");
        break;
    }
    case 153862:
    {
        returnValue = F("Hüllener Str.");
        break;
    }
    case 153863:
    {
        returnValue = F("Hüllenerfehner Str.");
        break;
    }
    case 153864:
    {
        returnValue = F("Hüllengarten");
        break;
    }
    case 153865:
    {
        returnValue = F("Hüllenstr.");
        break;
    }
    case 153866:
    {
        returnValue = F("Hüllenviertel");
        break;
    }
    case 153867:
    {
        returnValue = F("Hüllenweg");
        break;
    }
    case 153868:
    {
        returnValue = F("Hüller Str.");
        break;
    }
    case 153869:
    {
        returnValue = F("Hüllerhornweg");
        break;
    }
    case 153870:
    {
        returnValue = F("Hüllerstr.");
        break;
    }
    case 153871:
    {
        returnValue = F("Hüllgasse");
        break;
    }
    case 153872:
    {
        returnValue = F("Hüllhorster Holz");
        break;
    }
    case 153873:
    {
        returnValue = F("Hüllingstr.");
        break;
    }
    case 153874:
    {
        returnValue = F("Hülloch");
        break;
    }
    case 153875:
    {
        returnValue = F("Hüllriede");
        break;
    }
    case 153876:
    {
        returnValue = F("Hüllscheider Weg");
        break;
    }
    case 153877:
    {
        returnValue = F("Hüllsteder Str.");
        break;
    }
    case 153878:
    {
        returnValue = F("Hüllstr.");
        break;
    }
    case 153879:
    {
        returnValue = F("Hüllweg");
        break;
    }
    case 153880:
    {
        returnValue = F("Hülmer Deich");
        break;
    }
    case 153881:
    {
        returnValue = F("Hülmer Leitgraben");
        break;
    }
    case 153882:
    {
        returnValue = F("Hülmer Str.");
        break;
    }
    case 153883:
    {
        returnValue = F("Hülptingser Weg");
        break;
    }
    case 153884:
    {
        returnValue = F("Hüls");
        break;
    }
    case 153885:
    {
        returnValue = F("Hüls Esch");
        break;
    }
    case 153886:
    {
        returnValue = F("Hülsaer Str.");
        break;
    }
    case 153887:
    {
        returnValue = F("Hülsbachweg");
        break;
    }
    case 153888:
    {
        returnValue = F("Hülsbecker Platz");
        break;
    }
    case 153889:
    {
        returnValue = F("Hülsbecker Str.");
        break;
    }
    case 153890:
    {
        returnValue = F("Hülsberg");
        break;
    }
    case 153891:
    {
        returnValue = F("Hülsberger Busch");
        break;
    }
    case 153892:
    {
        returnValue = F("Hülscheid");
        break;
    }
    case 153893:
    {
        returnValue = F("Hülscheider Str.");
        break;
    }
    case 153894:
    {
        returnValue = F("Hülschotter Str.");
        break;
    }
    case 153895:
    {
        returnValue = F("Hülsdiek");
        break;
    }
    case 153896:
    {
        returnValue = F("Hülsdonk");
        break;
    }
    case 153897:
    {
        returnValue = F("Hülsdonkstr.");
        break;
    }
    case 153898:
    {
        returnValue = F("Hülsdornweg");
        break;
    }
    case 153899:
    {
        returnValue = F("Hülsdunkelstr.");
        break;
    }
    case 153900:
    {
        returnValue = F("Hülsebecker Damm");
        break;
    }
    case 153901:
    {
        returnValue = F("Hülsebecker Weg");
        break;
    }
    case 153902:
    {
        returnValue = F("Hülseberg");
        break;
    }
    case 153903:
    {
        returnValue = F("Hülsebrink");
        break;
    }
    case 153904:
    {
        returnValue = F("Hülseburger Str.");
        break;
    }
    case 153905:
    {
        returnValue = F("Hülsebuschweg");
        break;
    }
    case 153906:
    {
        returnValue = F("Hülseder Str.");
        break;
    }
    case 153907:
    {
        returnValue = F("Hülsemannshof");
        break;
    }
    case 153908:
    {
        returnValue = F("Hülsen");
        break;
    }
    case 153909:
    {
        returnValue = F("Hülsenbecke");
        break;
    }
    case 153910:
    {
        returnValue = F("Hülsenbeckweg");
        break;
    }
    case 153911:
    {
        returnValue = F("Hülsenberg");
        break;
    }
    case 153912:
    {
        returnValue = F("Hülsenbergerweg");
        break;
    }
    case 153913:
    {
        returnValue = F("Hülsenbergstr.");
        break;
    }
    case 153914:
    {
        returnValue = F("Hülsenbrink");
        break;
    }
    case 153915:
    {
        returnValue = F("Hülsenbrook");
        break;
    }
    case 153916:
    {
        returnValue = F("Hülsenburg");
        break;
    }
    case 153917:
    {
        returnValue = F("Hülsenbusch");
        break;
    }
    case 153918:
    {
        returnValue = F("Hülsenbuschweg");
        break;
    }
    case 153919:
    {
        returnValue = F("Hülsenbühlweg");
        break;
    }
    case 153920:
    {
        returnValue = F("Hülsener Weg");
        break;
    }
    case 153921:
    {
        returnValue = F("Hülsenhagen");
        break;
    }
    case 153922:
    {
        returnValue = F("Hülsenhof");
        break;
    }
    case 153923:
    {
        returnValue = F("Hülsenhorst");
        break;
    }
    case 153924:
    {
        returnValue = F("Hülsenkoppel");
        break;
    }
    case 153925:
    {
        returnValue = F("Hülsenloch");
        break;
    }
    case 153926:
    {
        returnValue = F("Hülsenpfad");
        break;
    }
    case 153927:
    {
        returnValue = F("Hülsensteeg");
        break;
    }
    case 153928:
    {
        returnValue = F("Hülsenstr.");
        break;
    }
    case 153929:
    {
        returnValue = F("Hülsentalweg");
        break;
    }
    case 153930:
    {
        returnValue = F("Hülsenweg");
        break;
    }
    case 153931:
    {
        returnValue = F("Hülser Landstr.");
        break;
    }
    case 153932:
    {
        returnValue = F("Hülser Str.");
        break;
    }
    case 153933:
    {
        returnValue = F("Hülser Weg");
        break;
    }
    case 153934:
    {
        returnValue = F("Hülser-Kloster-Gasse");
        break;
    }
    case 153935:
    {
        returnValue = F("Hülser-Kloster-Str.");
        break;
    }
    case 153936:
    {
        returnValue = F("Hülserweg");
        break;
    }
    case 153937:
    {
        returnValue = F("Hülsgarten");
        break;
    }
    case 153938:
    {
        returnValue = F("Hülshagen");
        break;
    }
    case 153939:
    {
        returnValue = F("Hülshof");
        break;
    }
    case 153940:
    {
        returnValue = F("Hülshoff-Str.");
        break;
    }
    case 153941:
    {
        returnValue = F("Hülshoffstr.");
        break;
    }
    case 153942:
    {
        returnValue = F("Hülshook");
        break;
    }
    case 153943:
    {
        returnValue = F("Hülskamp");
        break;
    }
    case 153944:
    {
        returnValue = F("Hülskrabbenweg");
        break;
    }
    case 153945:
    {
        returnValue = F("Hülsmeyer Str.");
        break;
    }
    case 153946:
    {
        returnValue = F("Hülspaßweg");
        break;
    }
    case 153947:
    {
        returnValue = F("Hülsstr.");
        break;
    }
    case 153948:
    {
        returnValue = F("Hülst");
        break;
    }
    case 153949:
    {
        returnValue = F("Hülstaler Str.");
        break;
    }
    case 153950:
    {
        returnValue = F("Hülstener Str.");
        break;
    }
    case 153951:
    {
        returnValue = F("Hülstener Weg");
        break;
    }
    case 153952:
    {
        returnValue = F("Hülsweg");
        break;
    }
    case 153953:
    {
        returnValue = F("Hültseeweg");
        break;
    }
    case 153954:
    {
        returnValue = F("Hülzweiler Str.");
        break;
    }
    case 153955:
    {
        returnValue = F("Hülzweilerstr.");
        break;
    }
    case 153956:
    {
        returnValue = F("Hümarkfeld");
        break;
    }
    case 153957:
    {
        returnValue = F("Hümblertrift");
        break;
    }
    case 153958:
    {
        returnValue = F("Hümerichsweg");
        break;
    }
    case 153959:
    {
        returnValue = F("Hümlinger Str.");
        break;
    }
    case 153960:
    {
        returnValue = F("Hümmeler Mühlenpfad");
        break;
    }
    case 153961:
    {
        returnValue = F("Hümmeler Str.");
        break;
    }
    case 153962:
    {
        returnValue = F("Hümmer Str.");
        break;
    }
    case 153963:
    {
        returnValue = F("Hümmler Weg");
        break;
    }
    case 153964:
    {
        returnValue = F("Hümmlinger Ring");
        break;
    }
    case 153965:
    {
        returnValue = F("Hümmlinger Weg");
        break;
    }
    case 153966:
    {
        returnValue = F("Hünbergstr.");
        break;
    }
    case 153967:
    {
        returnValue = F("Hündekausen");
        break;
    }
    case 153968:
    {
        returnValue = F("Hündelsgasse");
        break;
    }
    case 153969:
    {
        returnValue = F("Hündlweg");
        break;
    }
    case 153970:
    {
        returnValue = F("Hüneburg");
        break;
    }
    case 153971:
    {
        returnValue = F("Hüneburgweg");
        break;
    }
    case 153972:
    {
        returnValue = F("Hünefeldskamp");
        break;
    }
    case 153973:
    {
        returnValue = F("Hünefeldstr.");
        break;
    }
    case 153974:
    {
        returnValue = F("Hünegräben");
        break;
    }
    case 153975:
    {
        returnValue = F("Hünenbachweg");
        break;
    }
    case 153976:
    {
        returnValue = F("Hünenberg");
        break;
    }
    case 153977:
    {
        returnValue = F("Hünenbergstr.");
        break;
    }
    case 153978:
    {
        returnValue = F("Hünenburg");
        break;
    }
    case 153979:
    {
        returnValue = F("Hünenburgstr.");
        break;
    }
    case 153980:
    {
        returnValue = F("Hünenburgweg");
        break;
    }
    case 153981:
    {
        returnValue = F("Hünendorfstr.");
        break;
    }
    case 153982:
    {
        returnValue = F("Hünengrabenweg");
        break;
    }
    case 153983:
    {
        returnValue = F("Hünengrabstr.");
        break;
    }
    case 153984:
    {
        returnValue = F("Hünengrabweg");
        break;
    }
    case 153985:
    {
        returnValue = F("Hünengräberweg");
        break;
    }
    case 153986:
    {
        returnValue = F("Hünenkamp");
        break;
    }
    case 153987:
    {
        returnValue = F("Hünenpad");
        break;
    }
    case 153988:
    {
        returnValue = F("Hünenring");
        break;
    }
    case 153989:
    {
        returnValue = F("Hünensteine");
        break;
    }
    case 153990:
    {
        returnValue = F("Hünenstr.");
        break;
    }
    case 153991:
    {
        returnValue = F("Hünenweg");
        break;
    }
    case 153992:
    {
        returnValue = F("Hünerbergstr.");
        break;
    }
    case 153993:
    {
        returnValue = F("Hünerbergweg");
        break;
    }
    case 153994:
    {
        returnValue = F("Hünerdorfer Str.");
        break;
    }
    case 153995:
    {
        returnValue = F("Hünersweg");
        break;
    }
    case 153996:
    {
        returnValue = F("Hünfeldener Höhe");
        break;
    }
    case 153997:
    {
        returnValue = F("Hünfelder Str.");
        break;
    }
    case 153998:
    {
        returnValue = F("Hüngelsgasse");
        break;
    }
    case 153999:
    {
        returnValue = F("Hünger");
        break;
    }
    case 154000:
    {
        returnValue = F("Hüngersbergstr.");
        break;
    }
    case 154001:
    {
        returnValue = F("Hüngsberger Str.");
        break;
    }
    case 154002:
    {
        returnValue = F("Hünhügel");
        break;
    }
    case 154003:
    {
        returnValue = F("Hünighäuser Weg");
        break;
    }
    case 154004:
    {
        returnValue = F("Hüningrode");
        break;
    }
    case 154005:
    {
        returnValue = F("Hüningsgasse");
        break;
    }
    case 154006:
    {
        returnValue = F("Hünkemannsweg");
        break;
    }
    case 154007:
    {
        returnValue = F("Hünkenbütteler Str.");
        break;
    }
    case 154008:
    {
        returnValue = F("Hünkenbütteler Weg");
        break;
    }
    case 154009:
    {
        returnValue = F("Hünkenweg");
        break;
    }
    case 154010:
    {
        returnValue = F("Hünkergrund");
        break;
    }
    case 154011:
    {
        returnValue = F("Hünkergrunder Str.");
        break;
    }
    case 154012:
    {
        returnValue = F("Hünlishofen");
        break;
    }
    case 154013:
    {
        returnValue = F("Hünlishofer Weg");
        break;
    }
    case 154014:
    {
        returnValue = F("Hünnefeldkamp");
        break;
    }
    case 154015:
    {
        returnValue = F("Hünningfeld");
        break;
    }
    case 154016:
    {
        returnValue = F("Hünningser Str.");
        break;
    }
    case 154017:
    {
        returnValue = F("Hünsborner Str.");
        break;
    }
    case 154018:
    {
        returnValue = F("Hünschweg");
        break;
    }
    case 154019:
    {
        returnValue = F("Hünselerstr.");
        break;
    }
    case 154020:
    {
        returnValue = F("Hünshovener Gracht");
        break;
    }
    case 154021:
    {
        returnValue = F("Hünstein");
        break;
    }
    case 154022:
    {
        returnValue = F("Hünsteinplatz");
        break;
    }
    case 154023:
    {
        returnValue = F("Hünsteinstr.");
        break;
    }
    case 154024:
    {
        returnValue = F("Hünstollenstr.");
        break;
    }
    case 154025:
    {
        returnValue = F("Hünstollenturmstr.");
        break;
    }
    case 154026:
    {
        returnValue = F("Hünter Damm");
        break;
    }
    case 154027:
    {
        returnValue = F("Hüntestr.");
        break;
    }
    case 154028:
    {
        returnValue = F("Hüntjenburgstr.");
        break;
    }
    case 154029:
    {
        returnValue = F("Hünxer Feld");
        break;
    }
    case 154030:
    {
        returnValue = F("Hünxer Heide");
        break;
    }
    case 154031:
    {
        returnValue = F("Hünxer Str.");
        break;
    }
    case 154032:
    {
        returnValue = F("Hünzingen");
        break;
    }
    case 154033:
    {
        returnValue = F("Hünzinger Kirchweg");
        break;
    }
    case 154034:
    {
        returnValue = F("Hünzinger Schulsteig");
        break;
    }
    case 154035:
    {
        returnValue = F("Hünzinger Wiesenweg");
        break;
    }
    case 154036:
    {
        returnValue = F("Hüpchensweid");
        break;
    }
    case 154037:
    {
        returnValue = F("Hüpedenstr.");
        break;
    }
    case 154038:
    {
        returnValue = F("Hüpedenweg");
        break;
    }
    case 154039:
    {
        returnValue = F("Hüpeder Gutshof");
        break;
    }
    case 154040:
    {
        returnValue = F("Hüpeder Kirchweg");
        break;
    }
    case 154041:
    {
        returnValue = F("Hüpeder Str.");
        break;
    }
    case 154042:
    {
        returnValue = F("Hüpeder Weg");
        break;
    }
    case 154043:
    {
        returnValue = F("Hüperskamp");
        break;
    }
    case 154044:
    {
        returnValue = F("Hüpohl");
        break;
    }
    case 154045:
    {
        returnValue = F("Hüpp-Anlage");
        break;
    }
    case 154046:
    {
        returnValue = F("Hüppcherhammer");
        break;
    }
    case 154047:
    {
        returnValue = F("Hüppelbruchweg");
        break;
    }
    case 154048:
    {
        returnValue = F("Hüppelswicker Weg");
        break;
    }
    case 154049:
    {
        returnValue = F("Hüpstedter Str.");
        break;
    }
    case 154050:
    {
        returnValue = F("Hürbachstr.");
        break;
    }
    case 154051:
    {
        returnValue = F("Hürbeler Str.");
        break;
    }
    case 154052:
    {
        returnValue = F("Hürbelweg");
        break;
    }
    case 154053:
    {
        returnValue = F("Hürbener Str.");
        break;
    }
    case 154054:
    {
        returnValue = F("Hürbener Weg");
        break;
    }
    case 154055:
    {
        returnValue = F("Hürber Str.");
        break;
    }
    case 154056:
    {
        returnValue = F("Hürbler Str.");
        break;
    }
    case 154057:
    {
        returnValue = F("Hürdener Str.");
        break;
    }
    case 154058:
    {
        returnValue = F("Hürfelderstr.");
        break;
    }
    case 154059:
    {
        returnValue = F("Hürkamp");
        break;
    }
    case 154060:
    {
        returnValue = F("Hürkampsdamm");
        break;
    }
    case 154061:
    {
        returnValue = F("Hürneweg");
        break;
    }
    case 154062:
    {
        returnValue = F("Hürnheimer Str.");
        break;
    }
    case 154063:
    {
        returnValue = F("Hürnheimstr.");
        break;
    }
    case 154064:
    {
        returnValue = F("Hürnheimweg");
        break;
    }
    case 154065:
    {
        returnValue = F("Hürnigsknipp");
        break;
    }
    case 154066:
    {
        returnValue = F("Hürpfadla");
        break;
    }
    case 154067:
    {
        returnValue = F("Hürringhausen");
        break;
    }
    case 154068:
    {
        returnValue = F("Hürrlinger Weg");
        break;
    }
    case 154069:
    {
        returnValue = F("Hürrnenweg");
        break;
    }
    case 154070:
    {
        returnValue = F("Hürstenstr.");
        break;
    }
    case 154071:
    {
        returnValue = F("Hürstenweg");
        break;
    }
    case 154072:
    {
        returnValue = F("Hürstäckerweg");
        break;
    }
    case 154073:
    {
        returnValue = F("Hürterstr.");
        break;
    }
    case 154074:
    {
        returnValue = F("Hürtersweg");
        break;
    }
    case 154075:
    {
        returnValue = F("Hürth Mitte (ZOB)");
        break;
    }
    case 154076:
    {
        returnValue = F("Hürther Bogen");
        break;
    }
    case 154077:
    {
        returnValue = F("Hürther Str.");
        break;
    }
    case 154078:
    {
        returnValue = F("Hürther Weg");
        break;
    }
    case 154079:
    {
        returnValue = F("Hürupholz");
        break;
    }
    case 154080:
    {
        returnValue = F("Hürxtal");
        break;
    }
    case 154081:
    {
        returnValue = F("Hürye");
        break;
    }
    case 154082:
    {
        returnValue = F("Hüsbyfeld");
        break;
    }
    case 154083:
    {
        returnValue = F("Hüsbygaard");
        break;
    }
    case 154084:
    {
        returnValue = F("Hüscheider Weg");
        break;
    }
    case 154085:
    {
        returnValue = F("Hüseder Str.");
        break;
    }
    case 154086:
    {
        returnValue = F("Hüselbergdamm");
        break;
    }
    case 154087:
    {
        returnValue = F("Hüseler Pennen");
        break;
    }
    case 154088:
    {
        returnValue = F("Hüselitzer Dorfstr.");
        break;
    }
    case 154089:
    {
        returnValue = F("Hüserheide");
        break;
    }
    case 154090:
    {
        returnValue = F("Hüserweg");
        break;
    }
    case 154091:
    {
        returnValue = F("Hüsgen");
        break;
    }
    case 154092:
    {
        returnValue = F("Hüsgenstr.");
        break;
    }
    case 154093:
    {
        returnValue = F("Hüsig");
        break;
    }
    case 154094:
    {
        returnValue = F("Hüsinger Feld");
        break;
    }
    case 154095:
    {
        returnValue = F("Hüsinger Str.");
        break;
    }
    case 154096:
    {
        returnValue = F("Hüsingheide");
        break;
    }
    case 154097:
    {
        returnValue = F("Hüsings Kamp");
        break;
    }
    case 154098:
    {
        returnValue = F("Hüsingstr.");
        break;
    }
    case 154099:
    {
        returnValue = F("Hüslerie");
        break;
    }
    case 154100:
    {
        returnValue = F("Hüslihadweg");
        break;
    }
    case 154101:
    {
        returnValue = F("Hüsmecker Weg");
        break;
    }
    case 154102:
    {
        returnValue = F("Hüssenbergweg");
        break;
    }
    case 154103:
    {
        returnValue = F("Hüssingen");
        break;
    }
    case 154104:
    {
        returnValue = F("Hüssystr.");
        break;
    }
    case 154105:
    {
        returnValue = F("Hüssyweg");
        break;
    }
    case 154106:
    {
        returnValue = F("Hüsteder Wiese");
        break;
    }
    case 154107:
    {
        returnValue = F("Hüsten-Delecker-Weg");
        break;
    }
    case 154108:
    {
        returnValue = F("Hüstener Str.");
        break;
    }
    case 154109:
    {
        returnValue = F("Hütberg");
        break;
    }
    case 154110:
    {
        returnValue = F("Hütbergring");
        break;
    }
    case 154111:
    {
        returnValue = F("Hütbrunnenweg");
        break;
    }
    case 154112:
    {
        returnValue = F("Hütelandsweg");
        break;
    }
    case 154113:
    {
        returnValue = F("Hütemersch");
        break;
    }
    case 154114:
    {
        returnValue = F("Hütergasse");
        break;
    }
    case 154115:
    {
        returnValue = F("Hüterplan");
        break;
    }
    case 154116:
    {
        returnValue = F("Hüterweg");
        break;
    }
    case 154117:
    {
        returnValue = F("Hüteräckerweg");
        break;
    }
    case 154118:
    {
        returnValue = F("Hüteweg");
        break;
    }
    case 154119:
    {
        returnValue = F("Hütfelder Kamp");
        break;
    }
    case 154120:
    {
        returnValue = F("Hütgasse");
        break;
    }
    case 154121:
    {
        returnValue = F("Hütgesweg");
        break;
    }
    case 154122:
    {
        returnValue = F("Hütgraben");
        break;
    }
    case 154123:
    {
        returnValue = F("Hüthergasse");
        break;
    }
    case 154124:
    {
        returnValue = F("Hüthersrain");
        break;
    }
    case 154125:
    {
        returnValue = F("Hütschenhauser Str.");
        break;
    }
    case 154126:
    {
        returnValue = F("Hütschhof");
        break;
    }
    case 154127:
    {
        returnValue = F("Hütt");
        break;
    }
    case 154128:
    {
        returnValue = F("Hüttauer Str.");
        break;
    }
    case 154129:
    {
        returnValue = F("Hüttbergstr.");
        break;
    }
    case 154130:
    {
        returnValue = F("Hüttbergweg");
        break;
    }
    case 154131:
    {
        returnValue = F("Hüttbleker Weg");
        break;
    }
    case 154132:
    {
        returnValue = F("Hüttborn");
        break;
    }
    case 154133:
    {
        returnValue = F("Hüttbrettmühlenweg");
        break;
    }
    case 154134:
    {
        returnValue = F("Hüttbrunnenweg");
        break;
    }
    case 154135:
    {
        returnValue = F("Hüttchenbergstr.");
        break;
    }
    case 154136:
    {
        returnValue = F("Hüttcheshügel");
        break;
    }
    case 154137:
    {
        returnValue = F("Hütte");
        break;
    }
    case 154138:
    {
        returnValue = F("Hütteberg");
        break;
    }
    case 154139:
    {
        returnValue = F("Hüttebergstr.");
        break;
    }
    case 154140:
    {
        returnValue = F("Hüttebrauck");
        break;
    }
    case 154141:
    {
        returnValue = F("Hüttebrink");
        break;
    }
    case 154142:
    {
        returnValue = F("Hüttebruch");
        break;
    }
    case 154143:
    {
        returnValue = F("Hüttehof");
        break;
    }
    case 154144:
    {
        returnValue = F("Hüttekegel");
        break;
    }
    case 154145:
    {
        returnValue = F("Hüttelbrett");
        break;
    }
    case 154146:
    {
        returnValue = F("Hüttelsgrüner Ring");
        break;
    }
    case 154147:
    {
        returnValue = F("Hüttelstr.");
        break;
    }
    case 154148:
    {
        returnValue = F("Hüttemannstr.");
        break;
    }
    case 154149:
    {
        returnValue = F("Hütten");
        break;
    }
    case 154150:
    {
        returnValue = F("Hütten Schneise");
        break;
    }
    case 154151:
    {
        returnValue = F("Hüttenackerstr.");
        break;
    }
    case 154152:
    {
        returnValue = F("Hüttenallee");
        break;
    }
    case 154153:
    {
        returnValue = F("Hüttenau");
        break;
    }
    case 154154:
    {
        returnValue = F("Hüttenbach");
        break;
    }
    case 154155:
    {
        returnValue = F("Hüttenbacher Str.");
        break;
    }
    case 154156:
    {
        returnValue = F("Hüttenbachstr.");
        break;
    }
    case 154157:
    {
        returnValue = F("Hüttenbachweg");
        break;
    }
    case 154158:
    {
        returnValue = F("Hüttenberg");
        break;
    }
    case 154159:
    {
        returnValue = F("Hüttenberger Str.");
        break;
    }
    case 154160:
    {
        returnValue = F("Hüttenberger Weg");
        break;
    }
    case 154161:
    {
        returnValue = F("Hüttenbergstirn");
        break;
    }
    case 154162:
    {
        returnValue = F("Hüttenbergstr.");
        break;
    }
    case 154163:
    {
        returnValue = F("Hüttenbergweg");
        break;
    }
    case 154164:
    {
        returnValue = F("Hüttenblick");
        break;
    }
    case 154165:
    {
        returnValue = F("Hüttenbrink");
        break;
    }
    case 154166:
    {
        returnValue = F("Hüttenbruchstr.");
        break;
    }
    case 154167:
    {
        returnValue = F("Hüttenbrunnweg");
        break;
    }
    case 154168:
    {
        returnValue = F("Hüttenbrücke");
        break;
    }
    case 154169:
    {
        returnValue = F("Hüttenbuscher Str.");
        break;
    }
    case 154170:
    {
        returnValue = F("Hüttenbuscher Trift");
        break;
    }
    case 154171:
    {
        returnValue = F("Hüttenböhlweg");
        break;
    }
    case 154172:
    {
        returnValue = F("Hüttenbühl");
        break;
    }
    case 154173:
    {
        returnValue = F("Hüttenbühlstr.");
        break;
    }
    case 154174:
    {
        returnValue = F("Hüttenbühlweg");
        break;
    }
    case 154175:
    {
        returnValue = F("Hüttendamm");
        break;
    }
    case 154176:
    {
        returnValue = F("Hüttendorfer Str.");
        break;
    }
    case 154177:
    {
        returnValue = F("Hüttendorfer Weg");
        break;
    }
    case 154178:
    {
        returnValue = F("Hüttendyk");
        break;
    }
    case 154179:
    {
        returnValue = F("Hüttener Pforte");
        break;
    }
    case 154180:
    {
        returnValue = F("Hüttener Str.");
        break;
    }
    case 154181:
    {
        returnValue = F("Hüttener Weg");
        break;
    }
    case 154182:
    {
        returnValue = F("Hüttenfeld");
        break;
    }
    case 154183:
    {
        returnValue = F("Hüttenfelder Str.");
        break;
    }
    case 154184:
    {
        returnValue = F("Hüttenfeldstr.");
        break;
    }
    case 154185:
    {
        returnValue = F("Hüttengarten");
        break;
    }
    case 154186:
    {
        returnValue = F("Hüttengarten mit Parkoase");
        break;
    }
    case 154187:
    {
        returnValue = F("Hüttengasse");
        break;
    }
    case 154188:
    {
        returnValue = F("Hüttengeräumt");
        break;
    }
    case 154189:
    {
        returnValue = F("Hüttengesäßer Str.");
        break;
    }
    case 154190:
    {
        returnValue = F("Hüttengraben");
        break;
    }
    case 154191:
    {
        returnValue = F("Hüttengrund");
        break;
    }
    case 154192:
    {
        returnValue = F("Hüttengrunder Bergstr.");
        break;
    }
    case 154193:
    {
        returnValue = F("Hüttengrundsiedlung");
        break;
    }
    case 154194:
    {
        returnValue = F("Hüttengrundstr.");
        break;
    }
    case 154195:
    {
        returnValue = F("Hüttengärten");
        break;
    }
    case 154196:
    {
        returnValue = F("Hüttengärtenstr.");
        break;
    }
    case 154197:
    {
        returnValue = F("Hüttenhau");
        break;
    }
    case 154198:
    {
        returnValue = F("Hüttenheider Weg");
        break;
    }
    case 154199:
    {
        returnValue = F("Hüttenheim");
        break;
    }
    case 154200:
    {
        returnValue = F("Hüttenheimer Str.");
        break;
    }
    case 154201:
    {
        returnValue = F("Hüttenhof");
        break;
    }
    case 154202:
    {
        returnValue = F("Hüttenhofener Weg");
        break;
    }
    case 154203:
    {
        returnValue = F("Hüttenhofgasse");
        break;
    }
    case 154204:
    {
        returnValue = F("Hüttenhofstr.");
        break;
    }
    case 154205:
    {
        returnValue = F("Hüttenhofweg");
        break;
    }
    case 154206:
    {
        returnValue = F("Hüttenholzstr.");
        break;
    }
    case 154207:
    {
        returnValue = F("Hüttenhäuser");
        break;
    }
    case 154208:
    {
        returnValue = F("Hüttenklingenweg");
        break;
    }
    case 154209:
    {
        returnValue = F("Hüttenkofen");
        break;
    }
    case 154210:
    {
        returnValue = F("Hüttenkofener Str.");
        break;
    }
    case 154211:
    {
        returnValue = F("Hüttenkopfstr.");
        break;
    }
    case 154212:
    {
        returnValue = F("Hüttenkoppel");
        break;
    }
    case 154213:
    {
        returnValue = F("Hüttenkrattweg");
        break;
    }
    case 154214:
    {
        returnValue = F("Hüttenland");
        break;
    }
    case 154215:
    {
        returnValue = F("Hüttenlandstr.");
        break;
    }
    case 154216:
    {
        returnValue = F("Hüttenlandsweg");
        break;
    }
    case 154217:
    {
        returnValue = F("Hüttenmarleweg");
        break;
    }
    case 154218:
    {
        returnValue = F("Hüttenmeisterstr.");
        break;
    }
    case 154219:
    {
        returnValue = F("Hüttenmühle");
        break;
    }
    case 154220:
    {
        returnValue = F("Hüttenmühlenstr.");
        break;
    }
    case 154221:
    {
        returnValue = F("Hüttenmühlweg");
        break;
    }
    case 154222:
    {
        returnValue = F("Hüttenmüllerstr.");
        break;
    }
    case 154223:
    {
        returnValue = F("Hüttenpfad");
        break;
    }
    case 154224:
    {
        returnValue = F("Hüttenplatz");
        break;
    }
    case 154225:
    {
        returnValue = F("Hüttenrain");
        break;
    }
    case 154226:
    {
        returnValue = F("Hüttenring");
        break;
    }
    case 154227:
    {
        returnValue = F("Hüttenroda");
        break;
    }
    case 154228:
    {
        returnValue = F("Hüttenroder Str.");
        break;
    }
    case 154229:
    {
        returnValue = F("Hüttenröder Gartenstr.");
        break;
    }
    case 154230:
    {
        returnValue = F("Hüttenröder Kampstr.");
        break;
    }
    case 154231:
    {
        returnValue = F("Hüttenröder Lange Str.");
        break;
    }
    case 154232:
    {
        returnValue = F("Hüttensberggässle");
        break;
    }
    case 154233:
    {
        returnValue = F("Hüttensbergstr.");
        break;
    }
    case 154234:
    {
        returnValue = F("Hüttenschachenweg");
        break;
    }
    case 154235:
    {
        returnValue = F("Hüttenschneise");
        break;
    }
    case 154236:
    {
        returnValue = F("Hüttensee");
        break;
    }
    case 154237:
    {
        returnValue = F("Hüttenstaudenweg");
        break;
    }
    case 154238:
    {
        returnValue = F("Hüttensteig");
        break;
    }
    case 154239:
    {
        returnValue = F("Hüttensteige");
        break;
    }
    case 154240:
    {
        returnValue = F("Hüttenstieg");
        break;
    }
    case 154241:
    {
        returnValue = F("Hüttenstr.");
        break;
    }
    case 154242:
    {
        returnValue = F("Hüttenstätte");
        break;
    }
    case 154243:
    {
        returnValue = F("Hüttentaler Str.");
        break;
    }
    case 154244:
    {
        returnValue = F("Hüttentalstr.");
        break;
    }
    case 154245:
    {
        returnValue = F("Hüttenteich");
        break;
    }
    case 154246:
    {
        returnValue = F("Hüttenthaler Str.");
        break;
    }
    case 154247:
    {
        returnValue = F("Hüttenthaler Weg");
        break;
    }
    case 154248:
    {
        returnValue = F("Hüttenwald");
        break;
    }
    case 154249:
    {
        returnValue = F("Hüttenwaldschleifweg");
        break;
    }
    case 154250:
    {
        returnValue = F("Hüttenweg");
        break;
    }
    case 154251:
    {
        returnValue = F("Hüttenweiler");
        break;
    }
    case 154252:
    {
        returnValue = F("Hüttenwerk");
        break;
    }
    case 154253:
    {
        returnValue = F("Hüttenwerkplatz");
        break;
    }
    case 154254:
    {
        returnValue = F("Hüttenwerkstr.");
        break;
    }
    case 154255:
    {
        returnValue = F("Hüttenwerksweg");
        break;
    }
    case 154256:
    {
        returnValue = F("Hüttenwiese");
        break;
    }
    case 154257:
    {
        returnValue = F("Hüttenwiesen");
        break;
    }
    case 154258:
    {
        returnValue = F("Hüttenwiesenweg");
        break;
    }
    case 154259:
    {
        returnValue = F("Hüttenwiesweg");
        break;
    }
    case 154260:
    {
        returnValue = F("Hüttenwinkel");
        break;
    }
    case 154261:
    {
        returnValue = F("Hüttenwohld");
        break;
    }
    case 154262:
    {
        returnValue = F("Hüttenwäldchen");
        break;
    }
    case 154263:
    {
        returnValue = F("Hüttenäcker");
        break;
    }
    case 154264:
    {
        returnValue = F("Hüttenäckerstr.");
        break;
    }
    case 154265:
    {
        returnValue = F("Hütteplatz");
        break;
    }
    case 154266:
    {
        returnValue = F("Hütter Dorfstr.");
        break;
    }
    case 154267:
    {
        returnValue = F("Hütter Koppel");
        break;
    }
    case 154268:
    {
        returnValue = F("Hütter Str.");
        break;
    }
    case 154269:
    {
        returnValue = F("Hütterichweg");
        break;
    }
    case 154270:
    {
        returnValue = F("Hütterothstr.");
        break;
    }
    case 154271:
    {
        returnValue = F("Hüttersdorfer Str.");
        break;
    }
    case 154272:
    {
        returnValue = F("Hüttetal");
        break;
    }
    case 154273:
    {
        returnValue = F("Hütteweg");
        break;
    }
    case 154274:
    {
        returnValue = F("Hüttfeldstr.");
        break;
    }
    case 154275:
    {
        returnValue = F("Hüttgesweg");
        break;
    }
    case 154276:
    {
        returnValue = F("Hütthausstr.");
        break;
    }
    case 154277:
    {
        returnValue = F("Hütthof");
        break;
    }
    case 154278:
    {
        returnValue = F("Hüttig's Weg");
        break;
    }
    case 154279:
    {
        returnValue = F("Hüttigweilerstr.");
        break;
    }
    case 154280:
    {
        returnValue = F("Hüttinger Str.");
        break;
    }
    case 154281:
    {
        returnValue = F("Hüttinghauser Weg");
        break;
    }
    case 154282:
    {
        returnValue = F("Hüttisheimer Str.");
        break;
    }
    case 154283:
    {
        returnValue = F("Hüttkahlen");
        break;
    }
    case 154284:
    {
        returnValue = F("Hüttkreuzweg");
        break;
    }
    case 154285:
    {
        returnValue = F("Hüttlenswaldweg");
        break;
    }
    case 154286:
    {
        returnValue = F("Hüttlenweg");
        break;
    }
    case 154287:
    {
        returnValue = F("Hüttlinger Passage");
        break;
    }
    case 154288:
    {
        returnValue = F("Hüttlinger Str.");
        break;
    }
    case 154289:
    {
        returnValue = F("Hüttmannsberg");
        break;
    }
    case 154290:
    {
        returnValue = F("Hüttmannstr.");
        break;
    }
    case 154291:
    {
        returnValue = F("Hüttmannsweg");
        break;
    }
    case 154292:
    {
        returnValue = F("Hüttner Weg");
        break;
    }
    case 154293:
    {
        returnValue = F("Hüttnerstr.");
        break;
    }
    case 154294:
    {
        returnValue = F("Hüttruper Heide");
        break;
    }
    case 154295:
    {
        returnValue = F("Hüttruper Str.");
        break;
    }
    case 154296:
    {
        returnValue = F("Hüttsche Str.");
        break;
    }
    case 154297:
    {
        returnValue = F("Hüttseifen");
        break;
    }
    case 154298:
    {
        returnValue = F("Hüttstadl");
        break;
    }
    case 154299:
    {
        returnValue = F("Hüttstadler Weg");
        break;
    }
    case 154300:
    {
        returnValue = F("Hüttstattmühlenweg");
        break;
    }
    case 154301:
    {
        returnValue = F("Hüttstattweg");
        break;
    }
    case 154302:
    {
        returnValue = F("Hüttstr.");
        break;
    }
    case 154303:
    {
        returnValue = F("Hüttstückenweg");
        break;
    }
    case 154304:
    {
        returnValue = F("Hüttuferstr.");
        break;
    }
    case 154305:
    {
        returnValue = F("Hüttwaldweg");
        break;
    }
    case 154306:
    {
        returnValue = F("Hüttweg");
        break;
    }
    case 154307:
    {
        returnValue = F("Hüttäcker");
        break;
    }
    case 154308:
    {
        returnValue = F("Hüttäleinstr.");
        break;
    }
    case 154309:
    {
        returnValue = F("Hütweg");
        break;
    }
    case 154310:
    {
        returnValue = F("Hütwiesstr.");
        break;
    }
    case 154311:
    {
        returnValue = F("Hütwinkel");
        break;
    }
    case 154312:
    {
        returnValue = F("Hützeler Damm");
        break;
    }
    case 154313:
    {
        returnValue = F("Hützeler Str.");
        break;
    }
    case 154314:
    {
        returnValue = F("Hützelsgasse");
        break;
    }
    case 154315:
    {
        returnValue = F("Hützeweg");
        break;
    }
    case 154316:
    {
        returnValue = F("Hützlenweg");
        break;
    }
    case 154317:
    {
        returnValue = F("Hütäcker");
        break;
    }
    case 154318:
    {
        returnValue = F("Hüvener Mühle");
        break;
    }
    case 154319:
    {
        returnValue = F("Hüvener Str.");
        break;
    }
    case 154320:
    {
        returnValue = F("Hüwel");
        break;
    }
    case 154321:
    {
        returnValue = F("Hüwelweg");
        break;
    }
    case 154322:
    {
        returnValue = F("Hüweweg");
        break;
    }
    case 154323:
    {
        returnValue = F("Hüßlohstr.");
        break;
    }
    }
    return returnValue;
}
