#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameR3(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 270027:
{
returnValue = F("Rottheil");
break;
}
case 270028:
{
returnValue = F("Rottheimer Str.");
break;
}
case 270029:
{
returnValue = F("Rotthof");
break;
}
case 270030:
{
returnValue = F("Rotthofer Str.");
break;
}
case 270031:
{
returnValue = F("Rotthofgasse");
break;
}
case 270032:
{
returnValue = F("Rotthook");
break;
}
case 270033:
{
returnValue = F("Rotthöhe");
break;
}
case 270034:
{
returnValue = F("Rottinghauser Str.");
break;
}
case 270035:
{
returnValue = F("Rottkamp");
break;
}
case 270036:
{
returnValue = F("Rottkampstr.");
break;
}
case 270037:
{
returnValue = F("Rottkampweg");
break;
}
case 270038:
{
returnValue = F("Rottkoppeln");
break;
}
case 270039:
{
returnValue = F("Rottkämpe");
break;
}
case 270040:
{
returnValue = F("Rottland");
break;
}
case 270041:
{
returnValue = F("Rottlandshaan");
break;
}
case 270042:
{
returnValue = F("Rottlandstr.");
break;
}
case 270043:
{
returnValue = F("Rottlandsweg");
break;
}
case 270044:
{
returnValue = F("Rottlandweg");
break;
}
case 270045:
{
returnValue = F("Rottlebener Str.");
break;
}
case 270046:
{
returnValue = F("Rottleber Kommunikatweg");
break;
}
case 270047:
{
returnValue = F("Rottleberöder Dorfstr.");
break;
}
case 270048:
{
returnValue = F("Rottleberöder Weg");
break;
}
case 270049:
{
returnValue = F("Rottlersreuth");
break;
}
case 270050:
{
returnValue = F("Rottlich Rundweg");
break;
}
case 270051:
{
returnValue = F("Rottmairstr.");
break;
}
case 270052:
{
returnValue = F("Rottmanner Str.");
break;
}
case 270053:
{
returnValue = F("Rottmannpark");
break;
}
case 270054:
{
returnValue = F("Rottmannsberg");
break;
}
case 270055:
{
returnValue = F("Rottmannsberger Str.");
break;
}
case 270056:
{
returnValue = F("Rottmannsdorfer Hauptstr.");
break;
}
case 270057:
{
returnValue = F("Rottmannsdorfer Str.");
break;
}
case 270058:
{
returnValue = F("Rottmannsgasse");
break;
}
case 270059:
{
returnValue = F("Rottmannsgäßchen");
break;
}
case 270060:
{
returnValue = F("Rottmannshagen");
break;
}
case 270061:
{
returnValue = F("Rottmannshart");
break;
}
case 270062:
{
returnValue = F("Rottmannsharter Str.");
break;
}
case 270063:
{
returnValue = F("Rottmannsring");
break;
}
case 270064:
{
returnValue = F("Rottmannstr.");
break;
}
case 270065:
{
returnValue = F("Rottmannsweg");
break;
}
case 270066:
{
returnValue = F("Rottmarer Str.");
break;
}
case 270067:
{
returnValue = F("Rottmayrstr.");
break;
}
case 270068:
{
returnValue = F("Rottmecker Weg");
break;
}
case 270069:
{
returnValue = F("Rottmeierstr.");
break;
}
case 270070:
{
returnValue = F("Rottmeisterstr.");
break;
}
case 270071:
{
returnValue = F("Rottmersleber Str.");
break;
}
case 270072:
{
returnValue = F("Rottmündetal");
break;
}
case 270073:
{
returnValue = F("Rottnersdorfer Weg");
break;
}
case 270074:
{
returnValue = F("Rottobelweg");
break;
}
case 270075:
{
returnValue = F("Rottorfer Str.");
break;
}
case 270076:
{
returnValue = F("Rottorfer Weg");
break;
}
case 270077:
{
returnValue = F("Rottorferstr.");
break;
}
case 270078:
{
returnValue = F("Rottpark");
break;
}
case 270079:
{
returnValue = F("Rottsberg");
break;
}
case 270080:
{
returnValue = F("Rottschleife");
break;
}
case 270081:
{
returnValue = F("Rottsteige");
break;
}
case 270082:
{
returnValue = F("Rottstiege");
break;
}
case 270083:
{
returnValue = F("Rottstocker Str.");
break;
}
case 270084:
{
returnValue = F("Rottstockweg");
break;
}
case 270085:
{
returnValue = F("Rottstr.");
break;
}
case 270086:
{
returnValue = F("Rottumblick");
break;
}
case 270087:
{
returnValue = F("Rottumer Str.");
break;
}
case 270088:
{
returnValue = F("Rottumhang");
break;
}
case 270089:
{
returnValue = F("Rottumstr.");
break;
}
case 270090:
{
returnValue = F("Rottumweg");
break;
}
case 270091:
{
returnValue = F("Rottumwiesen");
break;
}
case 270092:
{
returnValue = F("Rottwaldstr.");
break;
}
case 270093:
{
returnValue = F("Rottweg");
break;
}
case 270094:
{
returnValue = F("Rottwegshohl");
break;
}
case 270095:
{
returnValue = F("Rottweidenweg");
break;
}
case 270096:
{
returnValue = F("Rottweiler Str.");
break;
}
case 270097:
{
returnValue = F("Rottweilstr.");
break;
}
case 270098:
{
returnValue = F("Rottwerkstr.");
break;
}
case 270099:
{
returnValue = F("Rottwerndorfer Str.");
break;
}
case 270100:
{
returnValue = F("Rottwiese");
break;
}
case 270101:
{
returnValue = F("Rottwiesenschneise");
break;
}
case 270102:
{
returnValue = F("Rottwiesenweg");
break;
}
case 270103:
{
returnValue = F("Rotuferstr.");
break;
}
case 270104:
{
returnValue = F("Roturachstr.");
break;
}
case 270105:
{
returnValue = F("Rotwaldstr.");
break;
}
case 270106:
{
returnValue = F("Rotwaldsträßle");
break;
}
case 270107:
{
returnValue = F("Rotwaldweg");
break;
}
case 270108:
{
returnValue = F("Rotwandstr.");
break;
}
case 270109:
{
returnValue = F("Rotwandweg");
break;
}
case 270110:
{
returnValue = F("Rotwasenweg");
break;
}
case 270111:
{
returnValue = F("Rotwasser");
break;
}
case 270112:
{
returnValue = F("Rotwasserstr.");
break;
}
case 270113:
{
returnValue = F("Rotwasserweg");
break;
}
case 270114:
{
returnValue = F("Rotweg");
break;
}
case 270115:
{
returnValue = F("Rotweinstr.");
break;
}
case 270116:
{
returnValue = F("Rotweinwanderweg");
break;
}
case 270117:
{
returnValue = F("Rotwiesen");
break;
}
case 270118:
{
returnValue = F("Rotwiesen-Schneise");
break;
}
case 270119:
{
returnValue = F("Rotwiesenstr.");
break;
}
case 270120:
{
returnValue = F("Rotwiesenweg");
break;
}
case 270121:
{
returnValue = F("Rotwild");
break;
}
case 270122:
{
returnValue = F("Rotwildstr.");
break;
}
case 270123:
{
returnValue = F("Rotwinde");
break;
}
case 270124:
{
returnValue = F("Rotwinkel");
break;
}
case 270125:
{
returnValue = F("Rotzeilstr.");
break;
}
case 270126:
{
returnValue = F("Rotzelmattenweg");
break;
}
case 270127:
{
returnValue = F("Rotzelweg");
break;
}
case 270128:
{
returnValue = F("Rotzenbachweg");
break;
}
case 270129:
{
returnValue = F("Rotzendorf");
break;
}
case 270130:
{
returnValue = F("Rotzingen");
break;
}
case 270131:
{
returnValue = F("Rotzkotten");
break;
}
case 270132:
{
returnValue = F("Rotzler Str.");
break;
}
case 270133:
{
returnValue = F("Rotzlerstr.");
break;
}
case 270134:
{
returnValue = F("Rotzmense");
break;
}
case 270135:
{
returnValue = F("Rotäcker");
break;
}
case 270136:
{
returnValue = F("Rotäcker Schneise");
break;
}
case 270137:
{
returnValue = F("Rotäckerstr.");
break;
}
case 270138:
{
returnValue = F("Rotäckerweg");
break;
}
case 270139:
{
returnValue = F("Rouanetstr.");
break;
}
case 270140:
{
returnValue = F("Rouchesbrunnstr.");
break;
}
case 270141:
{
returnValue = F("Rouffacher Str.");
break;
}
case 270142:
{
returnValue = F("Rougeweg");
break;
}
case 270143:
{
returnValue = F("Roulesweg");
break;
}
case 270144:
{
returnValue = F("Roulette");
break;
}
case 270145:
{
returnValue = F("Roupenhaldestichweg");
break;
}
case 270146:
{
returnValue = F("Rourestr.");
break;
}
case 270147:
{
returnValue = F("Rousendorpweg");
break;
}
case 270148:
{
returnValue = F("Roussayer Weg");
break;
}
case 270149:
{
returnValue = F("Rousseauallee");
break;
}
case 270150:
{
returnValue = F("Rousseaustr.");
break;
}
case 270151:
{
returnValue = F("Rousseauweg");
break;
}
case 270152:
{
returnValue = F("Route 66");
break;
}
case 270153:
{
returnValue = F("Route d'Echternach");
break;
}
case 270154:
{
returnValue = F("Route de Sarrelouis");
break;
}
case 270155:
{
returnValue = F("Route des Menhirs");
break;
}
case 270156:
{
returnValue = F("Routweg");
break;
}
case 270157:
{
returnValue = F("Rovenkampstr.");
break;
}
case 270158:
{
returnValue = F("Rowa-Str.");
break;
}
case 270159:
{
returnValue = F("Rowaer Weg");
break;
}
case 270160:
{
returnValue = F("Rowena-Morse-Str.");
break;
}
case 270161:
{
returnValue = F("Rowentastr.");
break;
}
case 270162:
{
returnValue = F("Roxeler Str.");
break;
}
case 270163:
{
returnValue = F("Roxforter Weg");
break;
}
case 270164:
{
returnValue = F("Roxförder Str.");
break;
}
case 270165:
{
returnValue = F("Roxheimer Str.");
break;
}
case 270166:
{
returnValue = F("Roxheimer Weg");
break;
}
case 270167:
{
returnValue = F("Roxin Ausbau");
break;
}
case 270168:
{
returnValue = F("Roxiner Weg");
break;
}
case 270169:
{
returnValue = F("Roy");
break;
}
case 270170:
{
returnValue = F("Royal Rangers");
break;
}
case 270171:
{
returnValue = F("Royberg");
break;
}
case 270172:
{
returnValue = F("Roybergschneise");
break;
}
case 270173:
{
returnValue = F("Roydorfer Weg");
break;
}
case 270174:
{
returnValue = F("Royforst");
break;
}
case 270175:
{
returnValue = F("Roystr.");
break;
}
case 270176:
{
returnValue = F("Royweg");
break;
}
case 270177:
{
returnValue = F("Rozenbergstr.");
break;
}
case 270178:
{
returnValue = F("Rozenburgplatz");
break;
}
case 270179:
{
returnValue = F("Rozenburgstr.");
break;
}
case 270180:
{
returnValue = F("Roß");
break;
}
case 270181:
{
returnValue = F("Roßacker");
break;
}
case 270182:
{
returnValue = F("Roßackerweg");
break;
}
case 270183:
{
returnValue = F("Roßallee");
break;
}
case 270184:
{
returnValue = F("Roßalmweg");
break;
}
case 270185:
{
returnValue = F("Roßanger");
break;
}
case 270186:
{
returnValue = F("Roßau");
break;
}
case 270187:
{
returnValue = F("Roßauchtert");
break;
}
case 270188:
{
returnValue = F("Roßauweg");
break;
}
case 270189:
{
returnValue = F("Roßbach");
break;
}
case 270190:
{
returnValue = F("Roßbach-Str.");
break;
}
case 270191:
{
returnValue = F("Roßbachbrücke");
break;
}
case 270192:
{
returnValue = F("Roßbacher Str.");
break;
}
case 270193:
{
returnValue = F("Roßbacher Weg");
break;
}
case 270194:
{
returnValue = F("Roßbachhöhe");
break;
}
case 270195:
{
returnValue = F("Roßbachleite");
break;
}
case 270196:
{
returnValue = F("Roßbachstr.");
break;
}
case 270197:
{
returnValue = F("Roßbachtalstr.");
break;
}
case 270198:
{
returnValue = F("Roßbachtelweg");
break;
}
case 270199:
{
returnValue = F("Roßbachweg");
break;
}
case 270200:
{
returnValue = F("Roßberg");
break;
}
case 270201:
{
returnValue = F("Roßberg Rank");
break;
}
case 270202:
{
returnValue = F("Roßberg Sträßle");
break;
}
case 270203:
{
returnValue = F("Roßbergblick");
break;
}
case 270204:
{
returnValue = F("Roßberger Str.");
break;
}
case 270205:
{
returnValue = F("Roßbergerhof");
break;
}
case 270206:
{
returnValue = F("Roßbergring");
break;
}
case 270207:
{
returnValue = F("Roßbergsgrund");
break;
}
case 270208:
{
returnValue = F("Roßbergsteige");
break;
}
case 270209:
{
returnValue = F("Roßbergstr.");
break;
}
case 270210:
{
returnValue = F("Roßbergsträßle");
break;
}
case 270211:
{
returnValue = F("Roßbergweg");
break;
}
case 270212:
{
returnValue = F("Roßbichlstr.");
break;
}
case 270213:
{
returnValue = F("Roßboden");
break;
}
case 270214:
{
returnValue = F("Roßbrink");
break;
}
case 270215:
{
returnValue = F("Roßbruch");
break;
}
case 270216:
{
returnValue = F("Roßbruchring");
break;
}
case 270217:
{
returnValue = F("Roßbrunnengasse");
break;
}
case 270218:
{
returnValue = F("Roßbrunnenstr.");
break;
}
case 270219:
{
returnValue = F("Roßbrunnenweg");
break;
}
case 270220:
{
returnValue = F("Roßbrunner Str.");
break;
}
case 270221:
{
returnValue = F("Roßbrunnstr.");
break;
}
case 270222:
{
returnValue = F("Roßbühlstr.");
break;
}
case 270223:
{
returnValue = F("Roßdacher Str.");
break;
}
case 270224:
{
returnValue = F("Roßdiek");
break;
}
case 270225:
{
returnValue = F("Roßdobelweg");
break;
}
case 270226:
{
returnValue = F("Roßdorfer Str.");
break;
}
case 270227:
{
returnValue = F("Roßdorfer Weg");
break;
}
case 270228:
{
returnValue = F("Roßdorfweg");
break;
}
case 270229:
{
returnValue = F("Roßdörfer Schneise");
break;
}
case 270230:
{
returnValue = F("Roßdörfer Str.");
break;
}
case 270231:
{
returnValue = F("Roßeck");
break;
}
case 270232:
{
returnValue = F("Roßelweg");
break;
}
case 270233:
{
returnValue = F("Roßendorfer Str.");
break;
}
case 270234:
{
returnValue = F("Roßfeld");
break;
}
case 270235:
{
returnValue = F("Roßfelde");
break;
}
case 270236:
{
returnValue = F("Roßfeldener Str.");
break;
}
case 270237:
{
returnValue = F("Roßfelder Hauptstr.");
break;
}
case 270238:
{
returnValue = F("Roßfelder Str.");
break;
}
case 270239:
{
returnValue = F("Roßfeldstr.");
break;
}
case 270240:
{
returnValue = F("Roßfeldweg");
break;
}
case 270241:
{
returnValue = F("Roßfurche");
break;
}
case 270242:
{
returnValue = F("Roßgarten");
break;
}
case 270243:
{
returnValue = F("Roßgartenstr.");
break;
}
case 270244:
{
returnValue = F("Roßgartenweg");
break;
}
case 270245:
{
returnValue = F("Roßgasse");
break;
}
case 270246:
{
returnValue = F("Roßgrabenbrücke");
break;
}
case 270247:
{
returnValue = F("Roßgrabenweg");
break;
}
case 270248:
{
returnValue = F("Roßgrundweg");
break;
}
case 270249:
{
returnValue = F("Roßgumpenstr.");
break;
}
case 270250:
{
returnValue = F("Roßhalde");
break;
}
case 270251:
{
returnValue = F("Roßhaldeweg");
break;
}
case 270252:
{
returnValue = F("Roßhardtweg");
break;
}
case 270253:
{
returnValue = F("Roßharter Str.");
break;
}
case 270254:
{
returnValue = F("Roßhaupter Platz");
break;
}
case 270255:
{
returnValue = F("Roßhaustr.");
break;
}
case 270256:
{
returnValue = F("Roßhecke");
break;
}
case 270257:
{
returnValue = F("Roßheckenweg");
break;
}
case 270258:
{
returnValue = F("Roßheidestr.");
break;
}
case 270259:
{
returnValue = F("Roßhimmel");
break;
}
case 270260:
{
returnValue = F("Roßhirtstr.");
break;
}
case 270261:
{
returnValue = F("Roßhof");
break;
}
case 270262:
{
returnValue = F("Roßhofer Hohle");
break;
}
case 270263:
{
returnValue = F("Roßhofstr.");
break;
}
case 270264:
{
returnValue = F("Roßhofweg");
break;
}
case 270265:
{
returnValue = F("Roßhohn");
break;
}
case 270266:
{
returnValue = F("Roßholzen");
break;
}
case 270267:
{
returnValue = F("Roßhöhe");
break;
}
case 270268:
{
returnValue = F("Roßhülbe");
break;
}
case 270269:
{
returnValue = F("Roßiekenweg");
break;
}
case 270270:
{
returnValue = F("Roßkamp");
break;
}
case 270271:
{
returnValue = F("Roßkamper Damm");
break;
}
case 270272:
{
returnValue = F("Roßkampffsgasse");
break;
}
case 270273:
{
returnValue = F("Roßkamps Esch");
break;
}
case 270274:
{
returnValue = F("Roßkampsweg");
break;
}
case 270275:
{
returnValue = F("Roßkardtweg");
break;
}
case 270276:
{
returnValue = F("Roßkastanienstr.");
break;
}
case 270277:
{
returnValue = F("Roßkastanienweg");
break;
}
case 270278:
{
returnValue = F("Roßklinge");
break;
}
case 270279:
{
returnValue = F("Roßknechtsiedlung");
break;
}
case 270280:
{
returnValue = F("Roßkopfsteig");
break;
}
case 270281:
{
returnValue = F("Roßkopfstr.");
break;
}
case 270282:
{
returnValue = F("Roßkopfweg");
break;
}
case 270283:
{
returnValue = F("Roßkopp");
break;
}
case 270284:
{
returnValue = F("Roßkuppenstr.");
break;
}
case 270285:
{
returnValue = F("Roßlaer Str.");
break;
}
case 270286:
{
returnValue = F("Roßlauer Allee");
break;
}
case 270287:
{
returnValue = F("Roßlauer Str.");
break;
}
case 270288:
{
returnValue = F("Roßlauf");
break;
}
case 270289:
{
returnValue = F("Roßlaufstr.");
break;
}
case 270290:
{
returnValue = F("Roßlebener Chaussee");
break;
}
case 270291:
{
returnValue = F("Roßlebener Str.");
break;
}
case 270292:
{
returnValue = F("Roßleiteweg");
break;
}
case 270293:
{
returnValue = F("Roßlenbroichstr.");
break;
}
case 270294:
{
returnValue = F("Roßmais");
break;
}
case 270295:
{
returnValue = F("Roßmarkt");
break;
}
case 270296:
{
returnValue = F("Roßmarktgasse");
break;
}
case 270297:
{
returnValue = F("Roßmarktsche Str.");
break;
}
case 270298:
{
returnValue = F("Roßmarktstr.");
break;
}
case 270299:
{
returnValue = F("Roßmattenhöfe");
break;
}
case 270300:
{
returnValue = F("Roßmeiersdorf");
break;
}
case 270301:
{
returnValue = F("Roßmeiersdorfer Str.");
break;
}
case 270302:
{
returnValue = F("Roßmoos");
break;
}
case 270303:
{
returnValue = F("Roßmooser Str.");
break;
}
case 270304:
{
returnValue = F("Roßmoosweg");
break;
}
case 270305:
{
returnValue = F("Roßmäßlerstr.");
break;
}
case 270306:
{
returnValue = F("Roßmäßlerweg");
break;
}
case 270307:
{
returnValue = F("Roßmöllerhook");
break;
}
case 270308:
{
returnValue = F("Roßmörder");
break;
}
case 270309:
{
returnValue = F("Roßmühle");
break;
}
case 270310:
{
returnValue = F("Roßmühlenstege");
break;
}
case 270311:
{
returnValue = F("Roßmühlenstr.");
break;
}
case 270312:
{
returnValue = F("Roßmühlgasse");
break;
}
case 270313:
{
returnValue = F("Roßmühlquergäßchen");
break;
}
case 270314:
{
returnValue = F("Roßmühlweg");
break;
}
case 270315:
{
returnValue = F("Roßmüllersweg");
break;
}
case 270316:
{
returnValue = F("Roßnagelstr.");
break;
}
case 270317:
{
returnValue = F("Roßpfad");
break;
}
case 270318:
{
returnValue = F("Roßplan");
break;
}
case 270319:
{
returnValue = F("Roßplatz");
break;
}
case 270320:
{
returnValue = F("Roßpoint");
break;
}
case 270321:
{
returnValue = F("Roßrainstr.");
break;
}
case 270322:
{
returnValue = F("Roßreutstr.");
break;
}
case 270323:
{
returnValue = F("Roßriether Str.");
break;
}
case 270324:
{
returnValue = F("Roßruckenstr.");
break;
}
case 270325:
{
returnValue = F("Roßruckstr.");
break;
}
case 270326:
{
returnValue = F("Roßrückenweg");
break;
}
case 270327:
{
returnValue = F("Roßschaustr.");
break;
}
case 270328:
{
returnValue = F("Roßschinder");
break;
}
case 270329:
{
returnValue = F("Roßschwemme");
break;
}
case 270330:
{
returnValue = F("Roßstaig");
break;
}
case 270331:
{
returnValue = F("Roßstallschäferweg");
break;
}
case 270332:
{
returnValue = F("Roßstallstr.");
break;
}
case 270333:
{
returnValue = F("Roßstallsträßle");
break;
}
case 270334:
{
returnValue = F("Roßstallweg");
break;
}
case 270335:
{
returnValue = F("Roßsteert");
break;
}
case 270336:
{
returnValue = F("Roßsteig");
break;
}
case 270337:
{
returnValue = F("Roßsteige");
break;
}
case 270338:
{
returnValue = F("Roßsteighangweg");
break;
}
case 270339:
{
returnValue = F("Roßsteigweg");
break;
}
case 270340:
{
returnValue = F("Roßsteinstr.");
break;
}
case 270341:
{
returnValue = F("Roßsteinweg");
break;
}
case 270342:
{
returnValue = F("Roßstr.");
break;
}
case 270343:
{
returnValue = F("Roßstädter Weg");
break;
}
case 270344:
{
returnValue = F("Roßtaler Str.");
break;
}
case 270345:
{
returnValue = F("Roßtaler Weg");
break;
}
case 270346:
{
returnValue = F("Roßtalweg");
break;
}
case 270347:
{
returnValue = F("Roßteisling");
break;
}
case 270348:
{
returnValue = F("Roßthaler Str.");
break;
}
case 270349:
{
returnValue = F("Roßthaler Weg");
break;
}
case 270350:
{
returnValue = F("Roßtorplatz");
break;
}
case 270351:
{
returnValue = F("Roßtrappe");
break;
}
case 270352:
{
returnValue = F("Roßtrappenstr.");
break;
}
case 270353:
{
returnValue = F("Roßtrieb");
break;
}
case 270354:
{
returnValue = F("Roßtränk");
break;
}
case 270355:
{
returnValue = F("Roßtränke");
break;
}
case 270356:
{
returnValue = F("Roßwachtstr.");
break;
}
case 270357:
{
returnValue = F("Roßwag");
break;
}
case 270358:
{
returnValue = F("Roßwager Str.");
break;
}
case 270359:
{
returnValue = F("Roßwagstr.");
break;
}
case 270360:
{
returnValue = F("Roßwald");
break;
}
case 270361:
{
returnValue = F("Roßwaldstr.");
break;
}
case 270362:
{
returnValue = F("Roßwandweg");
break;
}
case 270363:
{
returnValue = F("Roßwang");
break;
}
case 270364:
{
returnValue = F("Roßwanger Str.");
break;
}
case 270365:
{
returnValue = F("Roßwasen");
break;
}
case 270366:
{
returnValue = F("Roßwasenweg");
break;
}
case 270367:
{
returnValue = F("Roßweg");
break;
}
case 270368:
{
returnValue = F("Roßweide");
break;
}
case 270369:
{
returnValue = F("Roßweidweg");
break;
}
case 270370:
{
returnValue = F("Roßweiherfeld");
break;
}
case 270371:
{
returnValue = F("Roßweiner Str.");
break;
}
case 270372:
{
returnValue = F("Roßweinweg");
break;
}
case 270373:
{
returnValue = F("Roßwette");
break;
}
case 270374:
{
returnValue = F("Roßwiesen");
break;
}
case 270375:
{
returnValue = F("Roßwiesenstr.");
break;
}
case 270376:
{
returnValue = F("Roßwiesenweg");
break;
}
case 270377:
{
returnValue = F("Roßwinkel");
break;
}
case 270378:
{
returnValue = F("Roßwälder Str.");
break;
}
case 270379:
{
returnValue = F("Roßwöhrstr.");
break;
}
case 270380:
{
returnValue = F("Roßäcker");
break;
}
case 270381:
{
returnValue = F("Roßäckerweg");
break;
}
case 270382:
{
returnValue = F("Ruar Ört");
break;
}
case 270383:
{
returnValue = F("Rubachweg");
break;
}
case 270384:
{
returnValue = F("Rubacker");
break;
}
case 270385:
{
returnValue = F("Rubargen");
break;
}
case 270386:
{
returnValue = F("Rubbelrath");
break;
}
case 270387:
{
returnValue = F("Rubbenbruchweg");
break;
}
case 270388:
{
returnValue = F("Rubberei");
break;
}
case 270389:
{
returnValue = F("Rubenbergweg");
break;
}
case 270390:
{
returnValue = F("Rubenheimer Str.");
break;
}
case 270391:
{
returnValue = F("Rubenkamp");
break;
}
case 270392:
{
returnValue = F("Rubenow");
break;
}
case 270393:
{
returnValue = F("Rubenowplatz");
break;
}
case 270394:
{
returnValue = F("Rubenowstr.");
break;
}
case 270395:
{
returnValue = F("Rubensbrücke");
break;
}
case 270396:
{
returnValue = F("Rubensgassse");
break;
}
case 270397:
{
returnValue = F("Rubensplatz");
break;
}
case 270398:
{
returnValue = F("Rubensring");
break;
}
case 270399:
{
returnValue = F("Rubensstr.");
break;
}
case 270400:
{
returnValue = F("Rubenstr.");
break;
}
case 270401:
{
returnValue = F("Rubensweg");
break;
}
case 270402:
{
returnValue = F("Rubertshof");
break;
}
case 270403:
{
returnValue = F("Rubgartenweg");
break;
}
case 270404:
{
returnValue = F("Rubihornstr.");
break;
}
case 270405:
{
returnValue = F("Rubihornweg");
break;
}
case 270406:
{
returnValue = F("Rubinettenring");
break;
}
case 270407:
{
returnValue = F("Rubinkamp");
break;
}
case 270408:
{
returnValue = F("Rubinsteinstr.");
break;
}
case 270409:
{
returnValue = F("Rubinstr.");
break;
}
case 270410:
{
returnValue = F("Rubinstwiete");
break;
}
case 270411:
{
returnValue = F("Rubinweg");
break;
}
case 270412:
{
returnValue = F("Rubnergasse");
break;
}
case 270413:
{
returnValue = F("Ruboweg");
break;
}
case 270414:
{
returnValue = F("Rubrainstr.");
break;
}
case 270415:
{
returnValue = F("Rubreuteweg");
break;
}
case 270416:
{
returnValue = F("Rubäcker");
break;
}
case 270417:
{
returnValue = F("Rubäckerstr.");
break;
}
case 270418:
{
returnValue = F("Ruchelnheimstr.");
break;
}
case 270419:
{
returnValue = F("Ruchenholz");
break;
}
case 270420:
{
returnValue = F("Ruchenstr.");
break;
}
case 270421:
{
returnValue = F("Ruchenwaldweg");
break;
}
case 270422:
{
returnValue = F("Ruchheimer Str.");
break;
}
case 270423:
{
returnValue = F("Ruchheimer Weg");
break;
}
case 270424:
{
returnValue = F("Ruchis");
break;
}
case 270425:
{
returnValue = F("Ruchmattweg");
break;
}
case 270426:
{
returnValue = F("Ruchmühle");
break;
}
case 270427:
{
returnValue = F("Ruchsener Str.");
break;
}
case 270428:
{
returnValue = F("Ruchtastr.");
break;
}
case 270429:
{
returnValue = F("Ruchtiberg");
break;
}
case 270430:
{
returnValue = F("Ruckasing");
break;
}
case 270431:
{
returnValue = F("Ruckasinger Str.");
break;
}
case 270432:
{
returnValue = F("Ruckau");
break;
}
case 270433:
{
returnValue = F("Ruckersfelder Str.");
break;
}
case 270434:
{
returnValue = F("Ruckertstr.");
break;
}
case 270435:
{
returnValue = F("Ruckertsweg");
break;
}
case 270436:
{
returnValue = F("Ruckesweg");
break;
}
case 270437:
{
returnValue = F("Ruckfeldweg");
break;
}
case 270438:
{
returnValue = F("Ruckgaberstr.");
break;
}
case 270439:
{
returnValue = F("Ruckgasse");
break;
}
case 270440:
{
returnValue = F("Ruckgrabenweg");
break;
}
case 270441:
{
returnValue = F("Ruckhardtshauser Str.");
break;
}
case 270442:
{
returnValue = F("Rucksack-Pfad");
break;
}
case 270443:
{
returnValue = F("Rucksackgasse");
break;
}
case 270444:
{
returnValue = F("Rucksackstr.");
break;
}
case 270445:
{
returnValue = F("Rucksmoor");
break;
}
case 270446:
{
returnValue = F("Ruckstr.");
break;
}
case 270447:
{
returnValue = F("Ruckswegla");
break;
}
case 270448:
{
returnValue = F("Ruckweg");
break;
}
case 270449:
{
returnValue = F("Rudastr.");
break;
}
case 270450:
{
returnValue = F("Rudbølvej/Rosenkranzer Str.");
break;
}
case 270451:
{
returnValue = F("Ruddersiek");
break;
}
case 270452:
{
returnValue = F("Rudderweg");
break;
}
case 270453:
{
returnValue = F("Rude");
break;
}
case 270454:
{
returnValue = F("Rudegerstr.");
break;
}
case 270455:
{
returnValue = F("Rudelberg");
break;
}
case 270456:
{
returnValue = F("Rudelgasse");
break;
}
case 270457:
{
returnValue = F("Rudelheckweg");
break;
}
case 270458:
{
returnValue = F("Rudelsburgpromenade");
break;
}
case 270459:
{
returnValue = F("Rudelsburgweg");
break;
}
case 270460:
{
returnValue = F("Rudelschneise");
break;
}
case 270461:
{
returnValue = F("Rudelsdorfer Str.");
break;
}
case 270462:
{
returnValue = F("Rudelsheimer Str.");
break;
}
case 270463:
{
returnValue = F("Rudelswalder Str.");
break;
}
case 270464:
{
returnValue = F("Rudelsweiherstr.");
break;
}
case 270465:
{
returnValue = F("Rudelsäckerweg");
break;
}
case 270466:
{
returnValue = F("Rudeltstr.");
break;
}
case 270467:
{
returnValue = F("Rudelweg");
break;
}
case 270468:
{
returnValue = F("Rudelzauer Str.");
break;
}
case 270469:
{
returnValue = F("Rudeläckerweg");
break;
}
case 270470:
{
returnValue = F("Rudenberg");
break;
}
case 270471:
{
returnValue = F("Rudenberger Höhenweg");
break;
}
case 270472:
{
returnValue = F("Rudenberger Str.");
break;
}
case 270473:
{
returnValue = F("Rudendorfer Str.");
break;
}
case 270474:
{
returnValue = F("Rudendorfer Weg");
break;
}
case 270475:
{
returnValue = F("Rudenshofener Str.");
break;
}
case 270476:
{
returnValue = F("Rudenstr.");
break;
}
case 270477:
{
returnValue = F("Rudenweiler");
break;
}
case 270478:
{
returnValue = F("Ruderatshofener Str.");
break;
}
case 270479:
{
returnValue = F("Ruderersteg");
break;
}
case 270480:
{
returnValue = F("Ruderfing");
break;
}
case 270481:
{
returnValue = F("Ruderisweg");
break;
}
case 270482:
{
returnValue = F("Rudersberg");
break;
}
case 270483:
{
returnValue = F("Rudersberger Str.");
break;
}
case 270484:
{
returnValue = F("Rudersberger Weg");
break;
}
case 270485:
{
returnValue = F("Rudersburgstr.");
break;
}
case 270486:
{
returnValue = F("Rudersdorf");
break;
}
case 270487:
{
returnValue = F("Rudersdorfer Hauptstr.");
break;
}
case 270488:
{
returnValue = F("Rudersdorfer Str.");
break;
}
case 270489:
{
returnValue = F("Rudersdorfer Weg");
break;
}
case 270490:
{
returnValue = F("Ruderstalstr.");
break;
}
case 270491:
{
returnValue = F("Ruderstr.");
break;
}
case 270492:
{
returnValue = F("Ruderszell");
break;
}
case 270493:
{
returnValue = F("Rudertinger Str.");
break;
}
case 270494:
{
returnValue = F("Rudertälesweg");
break;
}
case 270495:
{
returnValue = F("Ruderweg");
break;
}
case 270496:
{
returnValue = F("Rudewinstr.");
break;
}
case 270497:
{
returnValue = F("Rudgardstr.");
break;
}
case 270498:
{
returnValue = F("Rudhardshäuserweg");
break;
}
case 270499:
{
returnValue = F("Rudhardt");
break;
}
case 270500:
{
returnValue = F("Rudi-Arndt-Platz");
break;
}
case 270501:
{
returnValue = F("Rudi-Arndt-Str.");
break;
}
case 270502:
{
returnValue = F("Rudi-Ball-Str.");
break;
}
case 270503:
{
returnValue = F("Rudi-Berks-Str.");
break;
}
case 270504:
{
returnValue = F("Rudi-Dutschke-Platz");
break;
}
case 270505:
{
returnValue = F("Rudi-Dutschke-Str.");
break;
}
case 270506:
{
returnValue = F("Rudi-Ehrlich-Str.");
break;
}
case 270507:
{
returnValue = F("Rudi-Gehring-Str.");
break;
}
case 270508:
{
returnValue = F("Rudi-Haimerl-Weg");
break;
}
case 270509:
{
returnValue = F("Rudi-Ismayr-Str.");
break;
}
case 270510:
{
returnValue = F("Rudi-Kappweg");
break;
}
case 270511:
{
returnValue = F("Rudi-Klos-Allee");
break;
}
case 270512:
{
returnValue = F("Rudi-Koppke-Str.");
break;
}
case 270513:
{
returnValue = F("Rudi-Liebl-Str.");
break;
}
case 270514:
{
returnValue = F("Rudi-Mohr-Str.");
break;
}
case 270515:
{
returnValue = F("Rudi-Nowack-Str.");
break;
}
case 270516:
{
returnValue = F("Rudi-Oertel-Str.");
break;
}
case 270517:
{
returnValue = F("Rudi-Richter-Str.");
break;
}
case 270518:
{
returnValue = F("Rudi-Schillings-Str.");
break;
}
case 270519:
{
returnValue = F("Rudi-Schmid-Weg");
break;
}
case 270520:
{
returnValue = F("Rudi-Spitz-Str.");
break;
}
case 270521:
{
returnValue = F("Rudi-Stephan-Allee");
break;
}
case 270522:
{
returnValue = F("Rudi-Thieme-Weg");
break;
}
case 270523:
{
returnValue = F("Rudi-Tonn-Platz");
break;
}
case 270524:
{
returnValue = F("Rudi-Wünzer-Str.");
break;
}
case 270525:
{
returnValue = F("Rudi-Zeisig-Weg");
break;
}
case 270526:
{
returnValue = F("Rudibert-Ettelt-Str.");
break;
}
case 270527:
{
returnValue = F("Rudishauweg");
break;
}
case 270528:
{
returnValue = F("Rudislebener Allee");
break;
}
case 270529:
{
returnValue = F("Rudletzholz");
break;
}
case 270530:
{
returnValue = F("Rudletzholzer Str.");
break;
}
case 270531:
{
returnValue = F("Rudlfing");
break;
}
case 270532:
{
returnValue = F("Rudlfinger Str.");
break;
}
case 270533:
{
returnValue = F("Rudlof-Harbig-Str.");
break;
}
case 270534:
{
returnValue = F("Rudloffsche Str.");
break;
}
case 270535:
{
returnValue = F("Rudloffstr.");
break;
}
case 270536:
{
returnValue = F("Rudloser Str.");
break;
}
case 270537:
{
returnValue = F("Rudloser Weg");
break;
}
case 270538:
{
returnValue = F("Rudmersbacher Str.");
break;
}
case 270539:
{
returnValue = F("Rudniki");
break;
}
case 270540:
{
returnValue = F("Rudolf Breitscheid Str.");
break;
}
case 270541:
{
returnValue = F("Rudolf Himmerbachweg");
break;
}
case 270542:
{
returnValue = F("Rudolf-Alander-Str.");
break;
}
case 270543:
{
returnValue = F("Rudolf-Alber-Weg");
break;
}
case 270544:
{
returnValue = F("Rudolf-Albrecht-Str.");
break;
}
case 270545:
{
returnValue = F("Rudolf-Angermeier-Str.");
break;
}
case 270546:
{
returnValue = F("Rudolf-Angstl-Str.");
break;
}
case 270547:
{
returnValue = F("Rudolf-Bahro-Str.");
break;
}
case 270548:
{
returnValue = F("Rudolf-Baier-Str.");
break;
}
case 270549:
{
returnValue = F("Rudolf-Baron-Str.");
break;
}
case 270550:
{
returnValue = F("Rudolf-Bart-Siedlung");
break;
}
case 270551:
{
returnValue = F("Rudolf-Bartels-Weg");
break;
}
case 270552:
{
returnValue = F("Rudolf-Bauer-Str.");
break;
}
case 270553:
{
returnValue = F("Rudolf-Baumbach-Str.");
break;
}
case 270554:
{
returnValue = F("Rudolf-Becker-Park");
break;
}
case 270555:
{
returnValue = F("Rudolf-Berger-Str.");
break;
}
case 270556:
{
returnValue = F("Rudolf-Berta-Str.");
break;
}
case 270557:
{
returnValue = F("Rudolf-Binding-Weg");
break;
}
case 270558:
{
returnValue = F("Rudolf-Blessing-Str.");
break;
}
case 270559:
{
returnValue = F("Rudolf-Blickle-Str.");
break;
}
case 270560:
{
returnValue = F("Rudolf-Blum-Str.");
break;
}
case 270561:
{
returnValue = F("Rudolf-Bochtler-Str.");
break;
}
case 270562:
{
returnValue = F("Rudolf-Bracht-Weg");
break;
}
case 270563:
{
returnValue = F("Rudolf-Brand-Str.");
break;
}
case 270564:
{
returnValue = F("Rudolf-Braungardt-Str.");
break;
}
case 270565:
{
returnValue = F("Rudolf-Breitscheid Str.");
break;
}
case 270566:
{
returnValue = F("Rudolf-Breitscheid-Allee");
break;
}
case 270567:
{
returnValue = F("Rudolf-Breitscheid-Park");
break;
}
case 270568:
{
returnValue = F("Rudolf-Breitscheid-Platz");
break;
}
case 270569:
{
returnValue = F("Rudolf-Breitscheid-Ring");
break;
}
case 270570:
{
returnValue = F("Rudolf-Breitscheid-Siedlung");
break;
}
case 270571:
{
returnValue = F("Rudolf-Breitscheid-Steg");
break;
}
case 270572:
{
returnValue = F("Rudolf-Breitscheid-Str.");
break;
}
case 270573:
{
returnValue = F("Rudolf-Breitscheid-Weg");
break;
}
case 270574:
{
returnValue = F("Rudolf-Breitscheidt-Str.");
break;
}
case 270575:
{
returnValue = F("Rudolf-Buchheim-Str.");
break;
}
case 270576:
{
returnValue = F("Rudolf-Bultmann-Str.");
break;
}
case 270577:
{
returnValue = F("Rudolf-Bunte-Str.");
break;
}
case 270578:
{
returnValue = F("Rudolf-Buse-Str.");
break;
}
case 270579:
{
returnValue = F("Rudolf-Bögel-Weg");
break;
}
case 270580:
{
returnValue = F("Rudolf-Caracciola-Str.");
break;
}
case 270581:
{
returnValue = F("Rudolf-Carsten-Str.");
break;
}
case 270582:
{
returnValue = F("Rudolf-Christian-Baisch-Hof");
break;
}
case 270583:
{
returnValue = F("Rudolf-Christian-Baisch-Weg");
break;
}
case 270584:
{
returnValue = F("Rudolf-Clermont-Weg");
break;
}
case 270585:
{
returnValue = F("Rudolf-Danhardt-Str.");
break;
}
case 270586:
{
returnValue = F("Rudolf-Dassler-Str.");
break;
}
case 270587:
{
returnValue = F("Rudolf-Desch-Str.");
break;
}
case 270588:
{
returnValue = F("Rudolf-Diekmann-Str.");
break;
}
case 270589:
{
returnValue = F("Rudolf-Diesel-Platz");
break;
}
case 270590:
{
returnValue = F("Rudolf-Diesel-Ring");
break;
}
case 270591:
{
returnValue = F("Rudolf-Diesel-Str.");
break;
}
case 270592:
{
returnValue = F("Rudolf-Diesel-Weg");
break;
}
case 270593:
{
returnValue = F("Rudolf-Dieter-Str.");
break;
}
case 270594:
{
returnValue = F("Rudolf-Dietz-Platz");
break;
}
case 270595:
{
returnValue = F("Rudolf-Dietz-Str.");
break;
}
case 270596:
{
returnValue = F("Rudolf-Dietz-Weg");
break;
}
case 270597:
{
returnValue = F("Rudolf-Dolle-Str.");
break;
}
case 270598:
{
returnValue = F("Rudolf-Donath-Weg");
break;
}
case 270599:
{
returnValue = F("Rudolf-Dreikurs-Weg");
break;
}
case 270600:
{
returnValue = F("Rudolf-Egelhofer-Str.");
break;
}
case 270601:
{
returnValue = F("Rudolf-Ehrlich-Str.");
break;
}
case 270602:
{
returnValue = F("Rudolf-Eickhoff-Weg");
break;
}
case 270603:
{
returnValue = F("Rudolf-Elle-Str.");
break;
}
case 270604:
{
returnValue = F("Rudolf-Engel-Weg");
break;
}
case 270605:
{
returnValue = F("Rudolf-Englert-Str.");
break;
}
case 270606:
{
returnValue = F("Rudolf-Epp-Str.");
break;
}
case 270607:
{
returnValue = F("Rudolf-Erhart-Str., 9411");
break;
}
case 270608:
{
returnValue = F("Rudolf-Etzkorn-Str.");
break;
}
case 270609:
{
returnValue = F("Rudolf-Eucken-Allee");
break;
}
case 270610:
{
returnValue = F("Rudolf-Eucken-Str.");
break;
}
case 270611:
{
returnValue = F("Rudolf-Eucken-Weg");
break;
}
case 270612:
{
returnValue = F("Rudolf-Fendt-Str.");
break;
}
case 270613:
{
returnValue = F("Rudolf-Fernau-Weg");
break;
}
case 270614:
{
returnValue = F("Rudolf-Fettweis-Str.");
break;
}
case 270615:
{
returnValue = F("Rudolf-Friedrichs-Ring");
break;
}
case 270616:
{
returnValue = F("Rudolf-Friedrichs-Str.");
break;
}
case 270617:
{
returnValue = F("Rudolf-Fritz-Str.");
break;
}
case 270618:
{
returnValue = F("Rudolf-Garlichs-Str.");
break;
}
case 270619:
{
returnValue = F("Rudolf-Gebauer-Str.");
break;
}
case 270620:
{
returnValue = F("Rudolf-Gelhard-Str.");
break;
}
case 270621:
{
returnValue = F("Rudolf-Gessner-Weg");
break;
}
case 270622:
{
returnValue = F("Rudolf-Glauber-Weg");
break;
}
case 270623:
{
returnValue = F("Rudolf-Gnädinger-Weg");
break;
}
case 270624:
{
returnValue = F("Rudolf-Graber-Str.");
break;
}
case 270625:
{
returnValue = F("Rudolf-Greiner-Str.");
break;
}
case 270626:
{
returnValue = F("Rudolf-Grenzebach-Str.");
break;
}
case 270627:
{
returnValue = F("Rudolf-Groeschel-Weg");
break;
}
case 270628:
{
returnValue = F("Rudolf-Groeschl-Weg");
break;
}
case 270629:
{
returnValue = F("Rudolf-Grosse-Str.");
break;
}
case 270630:
{
returnValue = F("Rudolf-Grund-Weg");
break;
}
case 270631:
{
returnValue = F("Rudolf-Gröschner-Str.");
break;
}
case 270632:
{
returnValue = F("Rudolf-Guby-Str.");
break;
}
case 270633:
{
returnValue = F("Rudolf-Gärtner-Weg");
break;
}
case 270634:
{
returnValue = F("Rudolf-Götze-Str.");
break;
}
case 270635:
{
returnValue = F("Rudolf-Gütlein-Str.");
break;
}
case 270636:
{
returnValue = F("Rudolf-Hage-Str.");
break;
}
case 270637:
{
returnValue = F("Rudolf-Hagelstange-Weg");
break;
}
case 270638:
{
returnValue = F("Rudolf-Hallmeyer-Siedlung");
break;
}
case 270639:
{
returnValue = F("Rudolf-Hanauer-Str.");
break;
}
case 270640:
{
returnValue = F("Rudolf-Harbig-Ring");
break;
}
case 270641:
{
returnValue = F("Rudolf-Harbig-Str.");
break;
}
case 270642:
{
returnValue = F("Rudolf-Harbig-Weg");
break;
}
case 270643:
{
returnValue = F("Rudolf-Hardt-Str.");
break;
}
case 270644:
{
returnValue = F("Rudolf-Harsch-Str.");
break;
}
case 270645:
{
returnValue = F("Rudolf-Hartmann-Str.");
break;
}
case 270646:
{
returnValue = F("Rudolf-Hartung-Weg");
break;
}
case 270647:
{
returnValue = F("Rudolf-Hausenblas-Str.");
break;
}
case 270648:
{
returnValue = F("Rudolf-Hausner-Str.");
break;
}
case 270649:
{
returnValue = F("Rudolf-Haußer-Str.");
break;
}
case 270650:
{
returnValue = F("Rudolf-Heilgers-Str.");
break;
}
case 270651:
{
returnValue = F("Rudolf-Hell-Str.");
break;
}
case 270652:
{
returnValue = F("Rudolf-Henning-Str.");
break;
}
case 270653:
{
returnValue = F("Rudolf-Hergt-Weg");
break;
}
case 270654:
{
returnValue = F("Rudolf-Herold-Weg");
break;
}
case 270655:
{
returnValue = F("Rudolf-Herzer-Platz");
break;
}
case 270656:
{
returnValue = F("Rudolf-Herzog-Weg");
break;
}
case 270657:
{
returnValue = F("Rudolf-Holzmann-Str.");
break;
}
case 270658:
{
returnValue = F("Rudolf-Huch-Str.");
break;
}
case 270659:
{
returnValue = F("Rudolf-Hugard-Weg");
break;
}
case 270660:
{
returnValue = F("Rudolf-Händel-Str.");
break;
}
case 270661:
{
returnValue = F("Rudolf-Höhn-Str.");
break;
}
case 270662:
{
returnValue = F("Rudolf-Hörmann-Str.");
break;
}
case 270663:
{
returnValue = F("Rudolf-Ismayr-Weg");
break;
}
case 270664:
{
returnValue = F("Rudolf-Jahns-Weg");
break;
}
case 270665:
{
returnValue = F("Rudolf-Jordan-Weg");
break;
}
case 270666:
{
returnValue = F("Rudolf-Junge-Str.");
break;
}
case 270667:
{
returnValue = F("Rudolf-Kammerbauer-Weg");
break;
}
case 270668:
{
returnValue = F("Rudolf-Katzenberger-Str.");
break;
}
case 270669:
{
returnValue = F("Rudolf-Keune-Str.");
break;
}
case 270670:
{
returnValue = F("Rudolf-Kießling-Ring");
break;
}
case 270671:
{
returnValue = F("Rudolf-Kinau-Str.");
break;
}
case 270672:
{
returnValue = F("Rudolf-Kinau-Straat");
break;
}
case 270673:
{
returnValue = F("Rudolf-Kinau-Twiete");
break;
}
case 270674:
{
returnValue = F("Rudolf-Kinau-Weg");
break;
}
case 270675:
{
returnValue = F("Rudolf-Kinder-Ring");
break;
}
case 270676:
{
returnValue = F("Rudolf-Kissinger-Str.");
break;
}
case 270677:
{
returnValue = F("Rudolf-Klapp-Str.");
break;
}
case 270678:
{
returnValue = F("Rudolf-Kreuch-Str.");
break;
}
case 270679:
{
returnValue = F("Rudolf-Kronenberg-Weg");
break;
}
case 270680:
{
returnValue = F("Rudolf-Kurz-Str.");
break;
}
case 270681:
{
returnValue = F("Rudolf-Königer-Str.");
break;
}
case 270682:
{
returnValue = F("Rudolf-L'Orange-Str.");
break;
}
case 270683:
{
returnValue = F("Rudolf-Lang-Str.");
break;
}
case 270684:
{
returnValue = F("Rudolf-Lensing-Ring");
break;
}
case 270685:
{
returnValue = F("Rudolf-Leonhard-Str.");
break;
}
case 270686:
{
returnValue = F("Rudolf-Loh-Platz");
break;
}
case 270687:
{
returnValue = F("Rudolf-Loh-Str.");
break;
}
case 270688:
{
returnValue = F("Rudolf-Lorenz-Str.");
break;
}
case 270689:
{
returnValue = F("Rudolf-Maaßen-Weg");
break;
}
case 270690:
{
returnValue = F("Rudolf-Magenau-Str.");
break;
}
case 270691:
{
returnValue = F("Rudolf-Malter-Str.");
break;
}
case 270692:
{
returnValue = F("Rudolf-Marburg-Str.");
break;
}
case 270693:
{
returnValue = F("Rudolf-Maschke-Platz");
break;
}
case 270694:
{
returnValue = F("Rudolf-Matthis-Platz");
break;
}
case 270695:
{
returnValue = F("Rudolf-Mauerer-Platz");
break;
}
case 270696:
{
returnValue = F("Rudolf-Mauersberger-Str.");
break;
}
case 270697:
{
returnValue = F("Rudolf-Mebs-Str.");
break;
}
case 270698:
{
returnValue = F("Rudolf-Meier-Str.");
break;
}
case 270699:
{
returnValue = F("Rudolf-Meitzner-Str.");
break;
}
case 270700:
{
returnValue = F("Rudolf-Meißner-Str.");
break;
}
case 270701:
{
returnValue = F("Rudolf-Messerschmidt-Str.");
break;
}
case 270702:
{
returnValue = F("Rudolf-Metter-Str.");
break;
}
case 270703:
{
returnValue = F("Rudolf-Meyer-Str.");
break;
}
case 270704:
{
returnValue = F("Rudolf-Mohr-Str.");
break;
}
case 270705:
{
returnValue = F("Rudolf-Moos-Str.");
break;
}
case 270706:
{
returnValue = F("Rudolf-Mößner-Str.");
break;
}
case 270707:
{
returnValue = F("Rudolf-Müller-Str.");
break;
}
case 270708:
{
returnValue = F("Rudolf-Müller-Weg");
break;
}
case 270709:
{
returnValue = F("Rudolf-Nebel-Weg");
break;
}
case 270710:
{
returnValue = F("Rudolf-Niemann-Str.");
break;
}
case 270711:
{
returnValue = F("Rudolf-Opitz-Platz");
break;
}
case 270712:
{
returnValue = F("Rudolf-Oster-Str.");
break;
}
case 270713:
{
returnValue = F("Rudolf-Peschke-Str.");
break;
}
case 270714:
{
returnValue = F("Rudolf-Petershagen-Allee");
break;
}
case 270715:
{
returnValue = F("Rudolf-Petzold-Ring");
break;
}
case 270716:
{
returnValue = F("Rudolf-Plank-Str.");
break;
}
case 270717:
{
returnValue = F("Rudolf-Popp-Weg");
break;
}
case 270718:
{
returnValue = F("Rudolf-Preising-Str.");
break;
}
case 270719:
{
returnValue = F("Rudolf-Preißler-Str.");
break;
}
case 270720:
{
returnValue = F("Rudolf-Puschendorf-Str.");
break;
}
case 270721:
{
returnValue = F("Rudolf-Rabe-Weg");
break;
}
case 270722:
{
returnValue = F("Rudolf-Renner-Str.");
break;
}
case 270723:
{
returnValue = F("Rudolf-Runge-Str.");
break;
}
case 270724:
{
returnValue = F("Rudolf-Rübel-Str.");
break;
}
case 270725:
{
returnValue = F("Rudolf-Rühmann-Str.");
break;
}
case 270726:
{
returnValue = F("Rudolf-Sack-Weg");
break;
}
case 270727:
{
returnValue = F("Rudolf-Schaefer-Str.");
break;
}
case 270728:
{
returnValue = F("Rudolf-Scheibenzuber-Weg");
break;
}
case 270729:
{
returnValue = F("Rudolf-Schick-Platz");
break;
}
case 270730:
{
returnValue = F("Rudolf-Schiestl-Str.");
break;
}
case 270731:
{
returnValue = F("Rudolf-Schlie-Str.");
break;
}
case 270732:
{
returnValue = F("Rudolf-Schluer-Str.");
break;
}
case 270733:
{
returnValue = F("Rudolf-Schmid-Str.");
break;
}
case 270734:
{
returnValue = F("Rudolf-Schmidt-Str.");
break;
}
case 270735:
{
returnValue = F("Rudolf-Schmidt-Weg");
break;
}
case 270736:
{
returnValue = F("Rudolf-Schneider-Str.");
break;
}
case 270737:
{
returnValue = F("Rudolf-Schneiders-Str.");
break;
}
case 270738:
{
returnValue = F("Rudolf-Schnell-Str.");
break;
}
case 270739:
{
returnValue = F("Rudolf-Schoofs-Weg");
break;
}
case 270740:
{
returnValue = F("Rudolf-Schoring-Str.");
break;
}
case 270741:
{
returnValue = F("Rudolf-Schulten-Str.");
break;
}
case 270742:
{
returnValue = F("Rudolf-Schuster-Str.");
break;
}
case 270743:
{
returnValue = F("Rudolf-Schäfer-Weg");
break;
}
case 270744:
{
returnValue = F("Rudolf-Schülke-Str.");
break;
}
case 270745:
{
returnValue = F("Rudolf-Seeberger-Allee");
break;
}
case 270746:
{
returnValue = F("Rudolf-Seeliger-Str.");
break;
}
case 270747:
{
returnValue = F("Rudolf-Seidel-Str.");
break;
}
case 270748:
{
returnValue = F("Rudolf-Seiferlein-Str.");
break;
}
case 270749:
{
returnValue = F("Rudolf-Seitz-Weg");
break;
}
case 270750:
{
returnValue = F("Rudolf-Selzer-Str.");
break;
}
case 270751:
{
returnValue = F("Rudolf-Sendig-Str.");
break;
}
case 270752:
{
returnValue = F("Rudolf-Seyfarth-Str.");
break;
}
case 270753:
{
returnValue = F("Rudolf-Sieck-Str.");
break;
}
case 270754:
{
returnValue = F("Rudolf-Sieck-Weg");
break;
}
case 270755:
{
returnValue = F("Rudolf-Siepert-Weg");
break;
}
case 270756:
{
returnValue = F("Rudolf-Sigler-Weg");
break;
}
case 270757:
{
returnValue = F("Rudolf-Sperner-Str.");
break;
}
case 270758:
{
returnValue = F("Rudolf-Steiner-Str.");
break;
}
case 270759:
{
returnValue = F("Rudolf-Steiner-Weg");
break;
}
case 270760:
{
returnValue = F("Rudolf-Stempel-Str.");
break;
}
case 270761:
{
returnValue = F("Rudolf-Sticht-Str.");
break;
}
case 270762:
{
returnValue = F("Rudolf-Stracke-Str.");
break;
}
case 270763:
{
returnValue = F("Rudolf-Stratz-Str.");
break;
}
case 270764:
{
returnValue = F("Rudolf-Straubel-Str.");
break;
}
case 270765:
{
returnValue = F("Rudolf-Strom-Weg");
break;
}
case 270766:
{
returnValue = F("Rudolf-Strunz-Str.");
break;
}
case 270767:
{
returnValue = F("Rudolf-Tarnow-Ring");
break;
}
case 270768:
{
returnValue = F("Rudolf-Tarnow-Str.");
break;
}
case 270769:
{
returnValue = F("Rudolf-Tarnow-Weg");
break;
}
case 270770:
{
returnValue = F("Rudolf-Teichmüller-Str.");
break;
}
case 270771:
{
returnValue = F("Rudolf-Thauer-Weg");
break;
}
case 270772:
{
returnValue = F("Rudolf-Then-Str.");
break;
}
case 270773:
{
returnValue = F("Rudolf-Thiele-Freibad");
break;
}
case 270774:
{
returnValue = F("Rudolf-Thum-Str.");
break;
}
case 270775:
{
returnValue = F("Rudolf-Töpfl-Str.");
break;
}
case 270776:
{
returnValue = F("Rudolf-Ulrich-Str.");
break;
}
case 270777:
{
returnValue = F("Rudolf-Utsch-Str.");
break;
}
case 270778:
{
returnValue = F("Rudolf-Verres-Str.");
break;
}
case 270779:
{
returnValue = F("Rudolf-Vierlinger-Str.");
break;
}
case 270780:
{
returnValue = F("Rudolf-Virchow-Stieg");
break;
}
case 270781:
{
returnValue = F("Rudolf-Virchow-Str.");
break;
}
case 270782:
{
returnValue = F("Rudolf-Virchow-Weg");
break;
}
case 270783:
{
returnValue = F("Rudolf-Vogler-Str.");
break;
}
case 270784:
{
returnValue = F("Rudolf-W.-Stahr-Str.");
break;
}
case 270785:
{
returnValue = F("Rudolf-Wahrendorff-Str.");
break;
}
case 270786:
{
returnValue = F("Rudolf-Walther-Str.");
break;
}
case 270787:
{
returnValue = F("Rudolf-Wanzl-Str.");
break;
}
case 270788:
{
returnValue = F("Rudolf-Weber-Platz");
break;
}
case 270789:
{
returnValue = F("Rudolf-Weber-Str.");
break;
}
case 270790:
{
returnValue = F("Rudolf-Weber-Weg");
break;
}
case 270791:
{
returnValue = F("Rudolf-Weg");
break;
}
case 270792:
{
returnValue = F("Rudolf-Wegmann-Str.");
break;
}
case 270793:
{
returnValue = F("Rudolf-Weinz-Str.");
break;
}
case 270794:
{
returnValue = F("Rudolf-Weiss-Str.");
break;
}
case 270795:
{
returnValue = F("Rudolf-Weißmann-Str.");
break;
}
case 270796:
{
returnValue = F("Rudolf-Welskopf-Str.");
break;
}
case 270797:
{
returnValue = F("Rudolf-Wendt-Str.");
break;
}
case 270798:
{
returnValue = F("Rudolf-Werner-Str.");
break;
}
case 270799:
{
returnValue = F("Rudolf-Wetzer-Str.");
break;
}
case 270800:
{
returnValue = F("Rudolf-Wieneke-Weg");
break;
}
case 270801:
{
returnValue = F("Rudolf-Wihr-Str.");
break;
}
case 270802:
{
returnValue = F("Rudolf-Wild-Str.");
break;
}
case 270803:
{
returnValue = F("Rudolf-Winicker-Str.");
break;
}
case 270804:
{
returnValue = F("Rudolf-Winkelmann-Str.");
break;
}
case 270805:
{
returnValue = F("Rudolf-Winter-Str.");
break;
}
case 270806:
{
returnValue = F("Rudolf-Wittrock-Str.");
break;
}
case 270807:
{
returnValue = F("Rudolf-Würthner-Weg");
break;
}
case 270808:
{
returnValue = F("Rudolf-Yelin-Str.");
break;
}
case 270809:
{
returnValue = F("Rudolf-Zersch-Str.");
break;
}
case 270810:
{
returnValue = F("Rudolf-Zimmermann-Str.");
break;
}
case 270811:
{
returnValue = F("Rudolf-Zimmermann-Weg");
break;
}
case 270812:
{
returnValue = F("Rudolf-Zinkel-Str.");
break;
}
case 270813:
{
returnValue = F("Rudolf-Zöbeley-Str.");
break;
}
case 270814:
{
returnValue = F("Rudolf-von-Habsburg-Platz");
break;
}
case 270815:
{
returnValue = F("Rudolf-von-Habsburg-Str.");
break;
}
case 270816:
{
returnValue = F("Rudolf-von-Hirsch-Platz");
break;
}
case 270817:
{
returnValue = F("Rudolf-von-Hirsch-Str.");
break;
}
case 270818:
{
returnValue = F("Rudolf-von-Scholtz-Str.");
break;
}
case 270819:
{
returnValue = F("Rudolfallee");
break;
}
case 270820:
{
returnValue = F("Rudolfsberg");
break;
}
case 270821:
{
returnValue = F("Rudolfsberger Str.");
break;
}
case 270822:
{
returnValue = F("Rudolfsdorfer Str.");
break;
}
case 270823:
{
returnValue = F("Rudolfsgnadweg");
break;
}
case 270824:
{
returnValue = F("Rudolfshofer Str.");
break;
}
case 270825:
{
returnValue = F("Rudolfshöhe");
break;
}
case 270826:
{
returnValue = F("Rudolfsteinweg");
break;
}
case 270827:
{
returnValue = F("Rudolfstr.");
break;
}
case 270828:
{
returnValue = F("Rudolfswieke");
break;
}
case 270829:
{
returnValue = F("Rudolfweg");
break;
}
case 270830:
{
returnValue = F("Rudolph-Brandes-Allee");
break;
}
case 270831:
{
returnValue = F("Rudolph-Glauber-Str.");
break;
}
case 270832:
{
returnValue = F("Rudolph-Karstadt-Str.");
break;
}
case 270833:
{
returnValue = F("Rudolph-Koepp-Str.");
break;
}
case 270834:
{
returnValue = F("Rudolph-Nagell-Str.");
break;
}
case 270835:
{
returnValue = F("Rudolph-Oehlschläger-Str.");
break;
}
case 270836:
{
returnValue = F("Rudolph-Richter-Str.");
break;
}
case 270837:
{
returnValue = F("Rudolph-Roth-Str.");
break;
}
case 270838:
{
returnValue = F("Rudolph-Trenz-Str.");
break;
}
case 270839:
{
returnValue = F("Rudolph-Ulrich-Str.");
break;
}
case 270840:
{
returnValue = F("Rudolph-Vetter-Weg");
break;
}
case 270841:
{
returnValue = F("Rudolph-Virchow-Str.");
break;
}
case 270842:
{
returnValue = F("Rudolph-Weber-Str.");
break;
}
case 270843:
{
returnValue = F("Rudolph-Zentgraf-Str.");
break;
}
case 270844:
{
returnValue = F("Rudolphberg");
break;
}
case 270845:
{
returnValue = F("Rudolphistr.");
break;
}
case 270846:
{
returnValue = F("Rudolphital");
break;
}
case 270847:
{
returnValue = F("Rudolphiweg");
break;
}
case 270848:
{
returnValue = F("Rudolphshaner Str.");
break;
}
case 270849:
{
returnValue = F("Rudolphsplatz");
break;
}
case 270850:
{
returnValue = F("Rudolphstr.");
break;
}
case 270851:
{
returnValue = F("Rudolphsweg");
break;
}
case 270852:
{
returnValue = F("Rudolstädter Platz");
break;
}
case 270853:
{
returnValue = F("Rudolstädter Str.");
break;
}
case 270854:
{
returnValue = F("Rudolstädter Weg");
break;
}
case 270855:
{
returnValue = F("Rudolzhofer Str.");
break;
}
case 270856:
{
returnValue = F("Rudongstr.");
break;
}
case 270857:
{
returnValue = F("Rudorff-Str.");
break;
}
case 270858:
{
returnValue = F("Rudorffstr.");
break;
}
case 270859:
{
returnValue = F("Rudow");
break;
}
case 270860:
{
returnValue = F("Rudower Allee");
break;
}
case 270861:
{
returnValue = F("Rudower Chaussee");
break;
}
case 270862:
{
returnValue = F("Rudower Damm");
break;
}
case 270863:
{
returnValue = F("Rudower Str.");
break;
}
case 270864:
{
returnValue = F("Rudpertstr.");
break;
}
case 270865:
{
returnValue = F("Rudstr.");
break;
}
case 270866:
{
returnValue = F("Rue Carnot");
break;
}
case 270867:
{
returnValue = F("Rue Elie Reumaux");
break;
}
case 270868:
{
returnValue = F("Rue Principale");
break;
}
case 270869:
{
returnValue = F("Rue d'Acheres");
break;
}
case 270870:
{
returnValue = F("Rue d'Anould");
break;
}
case 270871:
{
returnValue = F("Rue d'Attichy");
break;
}
case 270872:
{
returnValue = F("Rue de Carhaix");
break;
}
case 270873:
{
returnValue = F("Rue de Carport");
break;
}
case 270874:
{
returnValue = F("Rue de Challes");
break;
}
case 270875:
{
returnValue = F("Rue de Conflans");
break;
}
case 270876:
{
returnValue = F("Rue de Fismes");
break;
}
case 270877:
{
returnValue = F("Rue de La Frontière / Neutrale Str.");
break;
}
case 270878:
{
returnValue = F("Rue de Marolles");
break;
}
case 270879:
{
returnValue = F("Rue de Montataire");
break;
}
case 270880:
{
returnValue = F("Rue de Notre Dame d'Oé");
break;
}
case 270881:
{
returnValue = F("Rue de Periers");
break;
}
case 270882:
{
returnValue = F("Rue de Pleudihen");
break;
}
case 270883:
{
returnValue = F("Rue de Plérin");
break;
}
case 270884:
{
returnValue = F("Rue de Pontvallain");
break;
}
case 270885:
{
returnValue = F("Rue de Saint-Germain-lès-Corbeil");
break;
}
case 270886:
{
returnValue = F("Rue de Sees");
break;
}
case 270887:
{
returnValue = F("Rue de Surzur");
break;
}
case 270888:
{
returnValue = F("Rue de Tourouvre");
break;
}
case 270889:
{
returnValue = F("Rue de Trèbes");
break;
}
case 270890:
{
returnValue = F("Rue de Vibraye");
break;
}
case 270891:
{
returnValue = F("Rue de Villecresnes");
break;
}
case 270892:
{
returnValue = F("Rue de Vizille");
break;
}
case 270893:
{
returnValue = F("Rue de Wattrelos");
break;
}
case 270894:
{
returnValue = F("Rue de la Cigale");
break;
}
case 270895:
{
returnValue = F("Rue de la Vallée");
break;
}
case 270896:
{
returnValue = F("Rue d´ Argentat");
break;
}
case 270897:
{
returnValue = F("Rue-Saint-Florent-sur-Cher");
break;
}
case 270898:
{
returnValue = F("Ruedererstr.");
break;
}
case 270899:
{
returnValue = F("Ruedererweg");
break;
}
case 270900:
{
returnValue = F("Ruedorfferstr.");
break;
}
case 270901:
{
returnValue = F("Ruegenbergstr.");
break;
}
case 270902:
{
returnValue = F("Rueland-Frueauf-Str.");
break;
}
case 270903:
{
returnValue = F("Ruelandstr.");
break;
}
case 270904:
{
returnValue = F("Ruenhorst");
break;
}
case 270905:
{
returnValue = F("Ruensiek");
break;
}
case 270906:
{
returnValue = F("Ruensieker Str.");
break;
}
case 270907:
{
returnValue = F("Ruepp-Anger");
break;
}
case 270908:
{
returnValue = F("Rueppweg");
break;
}
case 270909:
{
returnValue = F("Ruest-Ausbau");
break;
}
case 270910:
{
returnValue = F("Ruest-Krug");
break;
}
case 270911:
{
returnValue = F("Ruester Dorfstr.");
break;
}
case 270912:
{
returnValue = F("Ruester Siedlung");
break;
}
case 270913:
{
returnValue = F("Ruester Weg");
break;
}
case 270914:
{
returnValue = F("Ruezstr.");
break;
}
case 270915:
{
returnValue = F("Rufenbergstr.");
break;
}
case 270916:
{
returnValue = F("Rufenhofweg");
break;
}
case 270917:
{
returnValue = F("Rufenlochweg");
break;
}
case 270918:
{
returnValue = F("Rufenmoor");
break;
}
case 270919:
{
returnValue = F("Rufensteg");
break;
}
case 270920:
{
returnValue = F("Ruffecer Str.");
break;
}
case 270921:
{
returnValue = F("Ruffenhofen");
break;
}
case 270922:
{
returnValue = F("Ruffenhofer Weg");
break;
}
case 270923:
{
returnValue = F("Ruffiniallee");
break;
}
case 270924:
{
returnValue = F("Ruffinistr.");
break;
}
case 270925:
{
returnValue = F("Ruffiniweg");
break;
}
case 270926:
{
returnValue = F("Ruffinstr.");
break;
}
case 270927:
{
returnValue = F("Rufinastr.");
break;
}
case 270928:
{
returnValue = F("Rufsteinweg");
break;
}
case 270929:
{
returnValue = F("Rufstr.");
break;
}
case 270930:
{
returnValue = F("Rufäcker");
break;
}
case 270931:
{
returnValue = F("Rugardhof");
break;
}
case 270932:
{
returnValue = F("Rugardstr.");
break;
}
case 270933:
{
returnValue = F("Rugardweg");
break;
}
case 270934:
{
returnValue = F("Rugbyring");
break;
}
case 270935:
{
returnValue = F("Ruge Weg");
break;
}
case 270936:
{
returnValue = F("Rugemütze");
break;
}
case 270937:
{
returnValue = F("Rugenbarg");
break;
}
case 270938:
{
returnValue = F("Rugenbargskamp");
break;
}
case 270939:
{
returnValue = F("Rugenbargsredder");
break;
}
case 270940:
{
returnValue = F("Rugenbargsweg");
break;
}
case 270941:
{
returnValue = F("Rugenberg");
break;
}
case 270942:
{
returnValue = F("Rugenbergen");
break;
}
case 270943:
{
returnValue = F("Rugenbergener Siedlung");
break;
}
case 270944:
{
returnValue = F("Rugenbergener Str.");
break;
}
case 270945:
{
returnValue = F("Rugenbergsweg");
break;
}
case 270946:
{
returnValue = F("Rugenbusch");
break;
}
case 270947:
{
returnValue = F("Rugendahlstr.");
break;
}
case 270948:
{
returnValue = F("Rugenfierth");
break;
}
case 270949:
{
returnValue = F("Rugenhandschen");
break;
}
case 270950:
{
returnValue = F("Rugenhof");
break;
}
case 270951:
{
returnValue = F("Rugenkamp");
break;
}
case 270952:
{
returnValue = F("Rugenmoor");
break;
}
case 270953:
{
returnValue = F("Rugenmühle");
break;
}
case 270954:
{
returnValue = F("Rugenseer Weg");
break;
}
case 270955:
{
returnValue = F("Rugensohl");
break;
}
case 270956:
{
returnValue = F("Rugenweerenweg");
break;
}
case 270957:
{
returnValue = F("Rugenworthweg");
break;
}
case 270958:
{
returnValue = F("Ruger Moor");
break;
}
case 270959:
{
returnValue = F("Ruger Weg");
break;
}
case 270960:
{
returnValue = F("Rugerstr.");
break;
}
case 270961:
{
returnValue = F("Rugesteinstr.");
break;
}
case 270962:
{
returnValue = F("Ruggenfeld");
break;
}
case 270963:
{
returnValue = F("Ruggenmühle");
break;
}
case 270964:
{
returnValue = F("Ruggestr.");
break;
}
case 270965:
{
returnValue = F("Rugierweg");
break;
}
case 270966:
{
returnValue = F("Rugiswalder Weg");
break;
}
case 270967:
{
returnValue = F("Rugoweg");
break;
}
case 270968:
{
returnValue = F("Rugstieg");
break;
}
case 270969:
{
returnValue = F("Ruh");
break;
}
case 270970:
{
returnValue = F("Ruh Kehr Weg");
break;
}
case 270971:
{
returnValue = F("Ruh-Weg");
break;
}
case 270972:
{
returnValue = F("Ruhackerschneise");
break;
}
case 270973:
{
returnValue = F("Ruhalmstr.");
break;
}
case 270974:
{
returnValue = F("Ruhbachgasse");
break;
}
case 270975:
{
returnValue = F("Ruhbachstr.");
break;
}
case 270976:
{
returnValue = F("Ruhbankstr.");
break;
}
case 270977:
{
returnValue = F("Ruhbanksweg");
break;
}
case 270978:
{
returnValue = F("Ruhbeck");
break;
}
case 270979:
{
returnValue = F("Ruhbeetstr.");
break;
}
case 270980:
{
returnValue = F("Ruhberg");
break;
}
case 270981:
{
returnValue = F("Ruhbergstr.");
break;
}
case 270982:
{
returnValue = F("Ruhborgweg");
break;
}
case 270983:
{
returnValue = F("Ruhbornstr.");
break;
}
case 270984:
{
returnValue = F("Ruhbronnweg");
break;
}
case 270985:
{
returnValue = F("Ruhbrück");
break;
}
case 270986:
{
returnValue = F("Ruhbühlweg");
break;
}
case 270987:
{
returnValue = F("Ruhe Almend");
break;
}
case 270988:
{
returnValue = F("Ruhe Rott");
break;
}
case 270989:
{
returnValue = F("Ruhe am Bach");
break;
}
case 270990:
{
returnValue = F("Ruhe am Bach / Habichtweg");
break;
}
case 270991:
{
returnValue = F("Ruhe-Christi-Str.");
break;
}
case 270992:
{
returnValue = F("Ruheareal");
break;
}
case 270993:
{
returnValue = F("Ruhebergweg");
break;
}
case 270994:
{
returnValue = F("Ruhebächleweg");
break;
}
case 270995:
{
returnValue = F("Ruheckleweg");
break;
}
case 270996:
{
returnValue = F("Ruheeck");
break;
}
case 270997:
{
returnValue = F("Ruhefeld");
break;
}
case 270998:
{
returnValue = F("Ruheforst");
break;
}
case 270999:
{
returnValue = F("Ruhegasse");
break;
}
case 271000:
{
returnValue = F("Ruhegrundweg");
break;
}
case 271001:
{
returnValue = F("Ruhehof");
break;
}
case 271002:
{
returnValue = F("Ruhehorst");
break;
}
case 271003:
{
returnValue = F("Ruheichlesweg");
break;
}
case 271004:
{
returnValue = F("Ruhekopf");
break;
}
case 271005:
{
returnValue = F("Ruhekrug");
break;
}
case 271006:
{
returnValue = F("Ruhemannweg");
break;
}
case 271007:
{
returnValue = F("Ruhenhof");
break;
}
case 271008:
{
returnValue = F("Ruhenstrothsweg");
break;
}
case 271009:
{
returnValue = F("Ruhepark Rentamt");
break;
}
case 271010:
{
returnValue = F("Ruheplatz am Hungerbach");
break;
}
case 271011:
{
returnValue = F("Ruhestein");
break;
}
case 271012:
{
returnValue = F("Ruhesteinstr.");
break;
}
case 271013:
{
returnValue = F("Ruhesteinweg");
break;
}
case 271014:
{
returnValue = F("Ruhestr.");
break;
}
case 271015:
{
returnValue = F("Ruhetal");
break;
}
case 271016:
{
returnValue = F("Ruhetalweg");
break;
}
case 271017:
{
returnValue = F("Ruhethal");
break;
}
case 271018:
{
returnValue = F("Ruhethaler Weg");
break;
}
case 271019:
{
returnValue = F("Ruhewald Verabschiedungsplatz");
break;
}
case 271020:
{
returnValue = F("Ruhewald- Weg");
break;
}
case 271021:
{
returnValue = F("Ruheweg");
break;
}
case 271022:
{
returnValue = F("Ruhezone am Köhlerbach");
break;
}
case 271023:
{
returnValue = F("Ruhgasse");
break;
}
case 271024:
{
returnValue = F("Ruhhecke");
break;
}
case 271025:
{
returnValue = F("Ruhhegeschneise");
break;
}
case 271026:
{
returnValue = F("Ruhhof");
break;
}
case 271027:
{
returnValue = F("Ruhholz");
break;
}
case 271028:
{
returnValue = F("Ruhhorn");
break;
}
case 271029:
{
returnValue = F("Ruhkamp");
break;
}
case 271030:
{
returnValue = F("Ruhl");
break;
}
case 271031:
{
returnValue = F("Ruhlachplatz");
break;
}
case 271032:
{
returnValue = F("Ruhlachstr.");
break;
}
case 271033:
{
returnValue = F("Ruhlaer Skihütte");
break;
}
case 271034:
{
returnValue = F("Ruhlaer Str.");
break;
}
case 271035:
{
returnValue = F("Ruhland");
break;
}
case 271036:
{
returnValue = F("Ruhlander Str.");
break;
}
case 271037:
{
returnValue = F("Ruhlander Weg");
break;
}
case 271038:
{
returnValue = F("Ruhlandspfad");
break;
}
case 271039:
{
returnValue = F("Ruhlandstr.");
break;
}
case 271040:
{
returnValue = F("Ruhlandweg");
break;
}
case 271041:
{
returnValue = F("Ruhlaufweg");
break;
}
case 271042:
{
returnValue = F("Ruhlbach");
break;
}
case 271043:
{
returnValue = F("Ruhleben");
break;
}
case 271044:
{
returnValue = F("Ruhlebener Holz");
break;
}
case 271045:
{
returnValue = F("Ruhlebenstr.");
break;
}
case 271046:
{
returnValue = F("Ruhlenberg");
break;
}
case 271047:
{
returnValue = F("Ruhlenbergstr.");
break;
}
case 271048:
{
returnValue = F("Ruhling");
break;
}
case 271049:
{
returnValue = F("Ruhlkirchener Str.");
break;
}
case 271050:
{
returnValue = F("Ruhlkircher Str.");
break;
}
case 271051:
{
returnValue = F("Ruhlo");
break;
}
case 271052:
{
returnValue = F("Ruhlohkampweg");
break;
}
case 271053:
{
returnValue = F("Ruhloweg");
break;
}
case 271054:
{
returnValue = F("Ruhlowiese");
break;
}
case 271055:
{
returnValue = F("Ruhlsbach");
break;
}
case 271056:
{
returnValue = F("Ruhlsbachweg");
break;
}
case 271057:
{
returnValue = F("Ruhlsdorfer Allee");
break;
}
case 271058:
{
returnValue = F("Ruhlsdorfer Chaussee");
break;
}
case 271059:
{
returnValue = F("Ruhlsdorfer Platz");
break;
}
case 271060:
{
returnValue = F("Ruhlsdorfer Str.");
break;
}
case 271061:
{
returnValue = F("Ruhlsdorfer Weg");
break;
}
case 271062:
{
returnValue = F("Ruhlstr.");
break;
}
case 271063:
{
returnValue = F("Ruhlweg");
break;
}
case 271064:
{
returnValue = F("Ruhländerstr.");
break;
}
case 271065:
{
returnValue = F("Ruhm");
break;
}
case 271066:
{
returnValue = F("Ruhmannsdorf");
break;
}
case 271067:
{
returnValue = F("Ruhmatt");
break;
}
case 271068:
{
returnValue = F("Ruhmberg");
break;
}
case 271069:
{
returnValue = F("Ruhmbergsweg");
break;
}
case 271070:
{
returnValue = F("Ruhmer Weg");
break;
}
case 271071:
{
returnValue = F("Ruhmeshalle");
break;
}
case 271072:
{
returnValue = F("Ruhmhorstweg");
break;
}
case 271073:
{
returnValue = F("Ruhmrischkamp");
break;
}
case 271074:
{
returnValue = F("Ruhmühlstr.");
break;
}
case 271075:
{
returnValue = F("Ruhner Bergstr.");
break;
}
case 271076:
{
returnValue = F("Ruhner Str.");
break;
}
case 271077:
{
returnValue = F("Ruhpalzing");
break;
}
case 271078:
{
returnValue = F("Ruhpointhöhe");
break;
}
case 271079:
{
returnValue = F("Ruhpointweg");
break;
}
case 271080:
{
returnValue = F("Ruhpoldinger Str.");
break;
}
case 271081:
{
returnValue = F("Ruhr-Kulturgarten");
break;
}
case 271082:
{
returnValue = F("Ruhr-Möhne-Eck");
break;
}
case 271083:
{
returnValue = F("Ruhrallee");
break;
}
case 271084:
{
returnValue = F("Ruhraue");
break;
}
case 271085:
{
returnValue = F("Ruhrauenweg");
break;
}
case 271086:
{
returnValue = F("Ruhrbachstr.");
break;
}
case 271087:
{
returnValue = F("Ruhrblick");
break;
}
case 271088:
{
returnValue = F("Ruhrbogen");
break;
}
case 271089:
{
returnValue = F("Ruhrdeich");
break;
}
case 271090:
{
returnValue = F("Ruhrersgäßchen");
break;
}
case 271091:
{
returnValue = F("Ruhrgasse");
break;
}
case 271092:
{
returnValue = F("Ruhrgasweg");
break;
}
case 271093:
{
returnValue = F("Ruhrgraben");
break;
}
case 271094:
{
returnValue = F("Ruhrgrund");
break;
}
case 271095:
{
returnValue = F("Ruhrhöhenweg");
break;
}
case 271096:
{
returnValue = F("Ruhrinselweg");
break;
}
case 271097:
{
returnValue = F("Ruhrkamp");
break;
}
case 271098:
{
returnValue = F("Ruhrorter Str.");
break;
}
case 271099:
{
returnValue = F("Ruhrorter Weg");
break;
}
case 271100:
{
returnValue = F("Ruhrpark");
break;
}
case 271101:
{
returnValue = F("Ruhrplatz");
break;
}
case 271102:
{
returnValue = F("Ruhrstr.");
break;
}
case 271103:
{
returnValue = F("Ruhrstrauch");
break;
}
case 271104:
{
returnValue = F("Ruhrststr.");
break;
}
case 271105:
{
returnValue = F("Ruhrtalradweg");
break;
}
case 271106:
{
returnValue = F("Ruhrtalstr.");
break;
}
case 271107:
{
returnValue = F("Ruhrufer");
break;
}
case 271108:
{
returnValue = F("Ruhrweg");
break;
}
case 271109:
{
returnValue = F("Ruhrölstr.");
break;
}
case 271110:
{
returnValue = F("Ruhsam");
break;
}
case 271111:
{
returnValue = F("Ruhseugstr.");
break;
}
case 271112:
{
returnValue = F("Ruhstein");
break;
}
case 271113:
{
returnValue = F("Ruhsteinstr.");
break;
}
case 271114:
{
returnValue = F("Ruhsteinweg");
break;
}
case 271115:
{
returnValue = F("Ruhstockweg");
break;
}
case 271116:
{
returnValue = F("Ruhstorfer Str.");
break;
}
case 271117:
{
returnValue = F("Ruhstr.");
break;
}
case 271118:
{
returnValue = F("Ruhwaldstr.");
break;
}
case 271119:
{
returnValue = F("Ruhwarder Deich");
break;
}
case 271120:
{
returnValue = F("Ruhwarder Str.");
break;
}
case 271121:
{
returnValue = F("Ruhweg");
break;
}
case 271122:
{
returnValue = F("Ruhwiesenstr.");
break;
}
case 271123:
{
returnValue = F("Ruhwinkel");
break;
}
case 271124:
{
returnValue = F("Ruhwinkler Str.");
break;
}
case 271125:
{
returnValue = F("Ruhäcker");
break;
}
case 271126:
{
returnValue = F("Ruibrunnenstr.");
break;
}
case 271127:
{
returnValue = F("Ruiding");
break;
}
case 271128:
{
returnValue = F("Ruifer Benden");
break;
}
case 271129:
{
returnValue = F("Ruifer Str.");
break;
}
case 271130:
{
returnValue = F("Ruinenbergstr.");
break;
}
case 271131:
{
returnValue = F("Ruinenbrücke");
break;
}
case 271132:
{
returnValue = F("Ruinener Weg");
break;
}
case 271133:
{
returnValue = F("Ruinenweg");
break;
}
case 271134:
{
returnValue = F("Ruisdaelstr.");
break;
}
case 271135:
{
returnValue = F("Ruit");
break;
}
case 271136:
{
returnValue = F("Ruitalstr.");
break;
}
case 271137:
{
returnValue = F("Ruiter Str.");
break;
}
case 271138:
{
returnValue = F("Ruiter Weg");
break;
}
case 271139:
{
returnValue = F("Ruitgärtlesweg");
break;
}
case 271140:
{
returnValue = F("Ruitrain");
break;
}
case 271141:
{
returnValue = F("Ruitscher Str.");
break;
}
case 271142:
{
returnValue = F("Ruitscher Weg");
break;
}
case 271143:
{
returnValue = F("Ruitstr.");
break;
}
case 271144:
{
returnValue = F("Ruitweg");
break;
}
case 271145:
{
returnValue = F("Ruitzenbergstr.");
break;
}
case 271146:
{
returnValue = F("Ruitzenmühle");
break;
}
case 271147:
{
returnValue = F("Ruitzhof");
break;
}
case 271148:
{
returnValue = F("Ruiweg");
break;
}
case 271149:
{
returnValue = F("Rukenweg");
break;
}
case 271150:
{
returnValue = F("Rukerusweg");
break;
}
case 271151:
{
returnValue = F("Rukietener Weg");
break;
}
case 271152:
{
returnValue = F("Rulamanweg");
break;
}
case 271153:
{
returnValue = F("Rulandstr.");
break;
}
case 271154:
{
returnValue = F("Rulandsweg");
break;
}
case 271155:
{
returnValue = F("Rulandweg");
break;
}
case 271156:
{
returnValue = F("Rulertsweg");
break;
}
case 271157:
{
returnValue = F("Ruleslohweg");
break;
}
case 271158:
{
returnValue = F("Rulestr.");
break;
}
case 271159:
{
returnValue = F("Rulfinger Str.");
break;
}
case 271160:
{
returnValue = F("Rull");
break;
}
case 271161:
{
returnValue = F("Rullboomsweg");
break;
}
case 271162:
{
returnValue = F("Ruller Str.");
break;
}
case 271163:
{
returnValue = F("Ruller Weg");
break;
}
case 271164:
{
returnValue = F("Rullkamp");
break;
}
case 271165:
{
returnValue = F("Rullsbach");
break;
}
case 271166:
{
returnValue = F("Rullstorfer Str.");
break;
}
case 271167:
{
returnValue = F("Ruländer Str.");
break;
}
case 271168:
{
returnValue = F("Ruländerstr.");
break;
}
case 271169:
{
returnValue = F("Ruländerweg");
break;
}
case 271170:
{
returnValue = F("Rum Kogel");
break;
}
case 271171:
{
returnValue = F("Rumbachbrücke");
break;
}
case 271172:
{
returnValue = F("Rumbacher Str.");
break;
}
case 271173:
{
returnValue = F("Rumbachstr.");
break;
}
case 271174:
{
returnValue = F("Rumbachtal");
break;
}
case 271175:
{
returnValue = F("Rumbarg");
break;
}
case 271176:
{
returnValue = F("Rumbecker Holz");
break;
}
case 271177:
{
returnValue = F("Rumbecker Höhe");
break;
}
case 271178:
{
returnValue = F("Rumbecker Str.");
break;
}
case 271179:
{
returnValue = F("Rumbergring");
break;
}
case 271180:
{
returnValue = F("Rumbrandt");
break;
}
case 271181:
{
returnValue = F("Rumbruchsweg");
break;
}
case 271182:
{
returnValue = F("Rumburger Ring");
break;
}
case 271183:
{
returnValue = F("Rumburger Str.");
break;
}
case 271184:
{
returnValue = F("Rumburger Weg");
break;
}
case 271185:
{
returnValue = F("Rumburgstr.");
break;
}
case 271186:
{
returnValue = F("Rumelner Str.");
break;
}
case 271187:
{
returnValue = F("Rumeltweg");
break;
}
case 271188:
{
returnValue = F("Rumeney");
break;
}
case 271189:
{
returnValue = F("Rumenstr.");
break;
}
case 271190:
{
returnValue = F("Rumer Weg");
break;
}
case 271191:
{
returnValue = F("Rumerberg");
break;
}
case 271192:
{
returnValue = F("Rumfleth");
break;
}
case 271193:
{
returnValue = F("Rumflether Deich");
break;
}
case 271194:
{
returnValue = F("Rumflether Str.");
break;
}
case 271195:
{
returnValue = F("Rumfordstr.");
break;
}
case 271196:
{
returnValue = F("Rumillystr.");
break;
}
case 271197:
{
returnValue = F("Rumklinth");
break;
}
case 271198:
{
returnValue = F("Rummbarg");
break;
}
case 271199:
{
returnValue = F("Rummeckemühlen");
break;
}
case 271200:
{
returnValue = F("Rummecketal");
break;
}
case 271201:
{
returnValue = F("Rummel");
break;
}
case 271202:
{
returnValue = F("Rummeland");
break;
}
case 271203:
{
returnValue = F("Rummelgasse");
break;
}
case 271204:
{
returnValue = F("Rummelpforter Mühle");
break;
}
case 271205:
{
returnValue = F("Rummelsberg");
break;
}
case 271206:
{
returnValue = F("Rummelsberger Str.");
break;
}
case 271207:
{
returnValue = F("Rummelsberger Weg");
break;
}
case 271208:
{
returnValue = F("Rummelsbergerstr.");
break;
}
case 271209:
{
returnValue = F("Rummelsborner Weg");
break;
}
case 271210:
{
returnValue = F("Rummelsburger Str.");
break;
}
case 271211:
{
returnValue = F("Rummelsgasse");
break;
}
case 271212:
{
returnValue = F("Rummelskoppe");
break;
}
case 271213:
{
returnValue = F("Rummelsland");
break;
}
case 271214:
{
returnValue = F("Rummelstr.");
break;
}
case 271215:
{
returnValue = F("Rummeltshauser Str.");
break;
}
case 271216:
{
returnValue = F("Rummelweg");
break;
}
case 271217:
{
returnValue = F("Rummental");
break;
}
case 271218:
{
returnValue = F("Rummersricht");
break;
}
case 271219:
{
returnValue = F("Rummersrichter Weg");
break;
}
case 271220:
{
returnValue = F("Rummler");
break;
}
case 271221:
{
returnValue = F("Rumohrholz");
break;
}
case 271222:
{
returnValue = F("Rumohrtalstr.");
break;
}
case 271223:
{
returnValue = F("Rumorknechtsweg");
break;
}
case 271224:
{
returnValue = F("Rumortalstr.");
break;
}
case 271225:
{
returnValue = F("Rumpelbachstr.");
break;
}
case 271226:
{
returnValue = F("Rumpelbergle");
break;
}
case 271227:
{
returnValue = F("Rumpelesweg");
break;
}
case 271228:
{
returnValue = F("Rumpelgäßle");
break;
}
case 271229:
{
returnValue = F("Rumpelmühle");
break;
}
case 271230:
{
returnValue = F("Rumpelsberg");
break;
}
case 271231:
{
returnValue = F("Rumpelschusterweg");
break;
}
case 271232:
{
returnValue = F("Rumpelsgasse");
break;
}
case 271233:
{
returnValue = F("Rumpelstilzchenweg");
break;
}
case 271234:
{
returnValue = F("Rumpelsweg");
break;
}
case 271235:
{
returnValue = F("Rumpeltgäßchen");
break;
}
case 271236:
{
returnValue = F("Rumpeltstr.");
break;
}
case 271237:
{
returnValue = F("Rumpenbachstr.");
break;
}
case 271238:
{
returnValue = F("Rumpener Str.");
break;
}
case 271239:
{
returnValue = F("Rumpenheimer Schloßgasse");
break;
}
case 271240:
{
returnValue = F("Rumpenheimer Str.");
break;
}
case 271241:
{
returnValue = F("Rumpenheimer Weg");
break;
}
case 271242:
{
returnValue = F("Rumpenheimer Wegschneise");
break;
}
case 271243:
{
returnValue = F("Rumpenweg");
break;
}
case 271244:
{
returnValue = F("Rumpernfeld");
break;
}
case 271245:
{
returnValue = F("Rumpfener Str.");
break;
}
case 271246:
{
returnValue = F("Rumpfschneise");
break;
}
case 271247:
{
returnValue = F("Rumpfstr.");
break;
}
case 271248:
{
returnValue = F("Rumplerstr.");
break;
}
case 271249:
{
returnValue = F("Rumplerweg");
break;
}
case 271250:
{
returnValue = F("Rumplisbachweg");
break;
}
case 271251:
{
returnValue = F("Rumpsfelder Heide");
break;
}
case 271252:
{
returnValue = F("Rumpshagener Weg");
break;
}
case 271253:
{
returnValue = F("Rumpsholt");
break;
}
case 271254:
{
returnValue = F("Rumsdorfer Platz");
break;
}
case 271255:
{
returnValue = F("Rund Deel");
break;
}
case 271256:
{
returnValue = F("Rund Erdbeersee");
break;
}
case 271257:
{
returnValue = F("Rund Hexenhaus");
break;
}
case 271258:
{
returnValue = F("Rund Tun");
break;
}
case 271259:
{
returnValue = F("Rund um Bollenbach");
break;
}
case 271260:
{
returnValue = F("Rund um das Eisental");
break;
}
case 271261:
{
returnValue = F("Rund um den Eselsberg");
break;
}
case 271262:
{
returnValue = F("Rund um den Höllteich");
break;
}
case 271263:
{
returnValue = F("Rund um den See");
break;
}
case 271264:
{
returnValue = F("Rund um den Zigeunersberg");
break;
}
case 271265:
{
returnValue = F("Rund ums Tal");
break;
}
case 271266:
{
returnValue = F("Rundahlsweg");
break;
}
case 271267:
{
returnValue = F("Rundblickweg");
break;
}
case 271268:
{
returnValue = F("Rundbuchenweg");
break;
}
case 271269:
{
returnValue = F("Runde Bruch Chaussee");
break;
}
case 271270:
{
returnValue = F("Runde Grube");
break;
}
case 271271:
{
returnValue = F("Runde ROT");
break;
}
case 271272:
{
returnValue = F("Runde Str.");
break;
}
case 271273:
{
returnValue = F("Runde Wiese");
break;
}
case 271274:
{
returnValue = F("Runde Wiesen");
break;
}
case 271275:
{
returnValue = F("Rundebusch");
break;
}
case 271276:
{
returnValue = F("Rundeel");
break;
}
case 271277:
{
returnValue = F("Rundehaus-Schneise");
break;
}
case 271278:
{
returnValue = F("Rundeilsweg");
break;
}
case 271279:
{
returnValue = F("Rundel WHB HT");
break;
}
case 271280:
{
returnValue = F("Rundelshäuser Str.");
break;
}
case 271281:
{
returnValue = F("Rundelsweg");
break;
}
case 271282:
{
returnValue = F("Rundenbuckweg");
break;
}
case 271283:
{
returnValue = F("Rundenburg");
break;
}
case 271284:
{
returnValue = F("Rundenschlag");
break;
}
case 271285:
{
returnValue = F("Runder Berg");
break;
}
case 271286:
{
returnValue = F("Runder Garten");
break;
}
case 271287:
{
returnValue = F("Runder Kampweg");
break;
}
case 271288:
{
returnValue = F("Runder Königsberg");
break;
}
case 271289:
{
returnValue = F("Runder Weg");
break;
}
case 271290:
{
returnValue = F("Rundes Bruch Chaussee");
break;
}
case 271291:
{
returnValue = F("Rundes Dorf");
break;
}
case 271292:
{
returnValue = F("Rundes Eck");
break;
}
case 271293:
{
returnValue = F("Rundeschlagschneise");
break;
}
case 271294:
{
returnValue = F("Rundestr.");
break;
}
case 271295:
{
returnValue = F("Rundeweg");
break;
}
case 271296:
{
returnValue = F("Rundfahrt");
break;
}
case 271297:
{
returnValue = F("Rundföhrstr.");
break;
}
case 271298:
{
returnValue = F("Rundhofer Chaussee");
break;
}
case 271299:
{
returnValue = F("Rundholzweg");
break;
}
case 271300:
{
returnValue = F("Rundling");
break;
}
case 271301:
{
returnValue = F("Rundlingstr.");
break;
}
case 271302:
{
returnValue = F("Rundmoosweg");
break;
}
case 271303:
{
returnValue = F("Rundorf");
break;
}
case 271304:
{
returnValue = F("Rundschauweg");
break;
}
case 271305:
{
returnValue = F("Rundschlade");
break;
}
case 271306:
{
returnValue = F("Rundschlagschneise");
break;
}
case 271307:
{
returnValue = F("Rundschleifstr.");
break;
}
case 271308:
{
returnValue = F("Rundsee-Schneise");
break;
}
case 271309:
{
returnValue = F("Rundsmühlhof");
break;
}
case 271310:
{
returnValue = F("Rundstr.");
break;
}
case 271311:
{
returnValue = F("Rundsweg");
break;
}
case 271312:
{
returnValue = F("Rundteil");
break;
}
case 271313:
{
returnValue = F("Rundum");
break;
}
case 271314:
{
returnValue = F("Rundwaderung Wildpark");
break;
}
case 271315:
{
returnValue = F("Rundwanderweg");
break;
}
case 271316:
{
returnValue = F("Rundwanderweg 1");
break;
}
case 271317:
{
returnValue = F("Rundwanderweg 4");
break;
}
case 271318:
{
returnValue = F("Rundwanderweg 7");
break;
}
case 271319:
{
returnValue = F("Rundwanderweg A4");
break;
}
case 271320:
{
returnValue = F("Rundwanderweg Am Katharinenberg 2km");
break;
}
case 271321:
{
returnValue = F("Rundwanderweg Bruno Barthel");
break;
}
case 271322:
{
returnValue = F("Rundwanderweg Coswig");
break;
}
case 271323:
{
returnValue = F("Rundwanderweg Darßer Ort");
break;
}
case 271324:
{
returnValue = F("Rundwanderweg I");
break;
}
case 271325:
{
returnValue = F("Rundwanderweg II");
break;
}
case 271326:
{
returnValue = F("Rundwanderweg Lonau");
break;
}
case 271327:
{
returnValue = F("Rundwanderweg Mecklenbruch");
break;
}
case 271328:
{
returnValue = F("Rundwanderweg Piesberg");
break;
}
case 271329:
{
returnValue = F("Rundwanderweg Schloss Benkausen");
break;
}
case 271330:
{
returnValue = F("Rundwanderweg Seealpe");
break;
}
case 271331:
{
returnValue = F("Rundwanderweg Talsperre Wippra");
break;
}
case 271332:
{
returnValue = F("Rundwanderweg Vessertal");
break;
}
case 271333:
{
returnValue = F("Rundwarfer Weg");
break;
}
case 271334:
{
returnValue = F("Rundweg");
break;
}
case 271335:
{
returnValue = F("Rundweg \"Treppchen");
break;
}
case 271336:
{
returnValue = F("Rundweg 1");
break;
}
case 271337:
{
returnValue = F("Rundweg 2");
break;
}
case 271338:
{
returnValue = F("Rundweg 5");
break;
}
case 271339:
{
returnValue = F("Rundweg 6");
break;
}
case 271340:
{
returnValue = F("Rundweg Banter See");
break;
}
case 271341:
{
returnValue = F("Rundweg Belchen");
break;
}
case 271342:
{
returnValue = F("Rundweg Bergheide");
break;
}
case 271343:
{
returnValue = F("Rundweg Brambach");
break;
}
case 271344:
{
returnValue = F("Rundweg Dicker Schlag");
break;
}
case 271345:
{
returnValue = F("Rundweg Elkeringhausen");
break;
}
case 271346:
{
returnValue = F("Rundweg Goerdensee");
break;
}
case 271347:
{
returnValue = F("Rundweg Gondelteich");
break;
}
case 271348:
{
returnValue = F("Rundweg Großteich");
break;
}
case 271349:
{
returnValue = F("Rundweg Grüner Weg");
break;
}
case 271350:
{
returnValue = F("Rundweg Halde Trages");
break;
}
case 271351:
{
returnValue = F("Rundweg Hofeteich");
break;
}
case 271352:
{
returnValue = F("Rundweg II");
break;
}
case 271353:
{
returnValue = F("Rundweg Ida-Eiche");
break;
}
case 271354:
{
returnValue = F("Rundweg KZ Ahlem");
break;
}
case 271355:
{
returnValue = F("Rundweg Klettergarten");
break;
}
case 271356:
{
returnValue = F("Rundweg Kogeler See");
break;
}
case 271357:
{
returnValue = F("Rundweg Kuhlager");
break;
}
case 271358:
{
returnValue = F("Rundweg Malerwinkel");
break;
}
case 271359:
{
returnValue = F("Rundweg Mammutbaum");
break;
}
case 271360:
{
returnValue = F("Rundweg Maria Eck");
break;
}
case 271361:
{
returnValue = F("Rundweg Muggs Brunnen");
break;
}
case 271362:
{
returnValue = F("Rundweg Nr. 2");
break;
}
case 271363:
{
returnValue = F("Rundweg Ost");
break;
}
case 271364:
{
returnValue = F("Rundweg Osterburg");
break;
}
case 271365:
{
returnValue = F("Rundweg Park Manhagen");
break;
}
case 271366:
{
returnValue = F("Rundweg Rothsee");
break;
}
case 271367:
{
returnValue = F("Rundweg Rümpfwald Flußlehrpfad St.Egidien");
break;
}
case 271368:
{
returnValue = F("Rundweg Sallersee");
break;
}
case 271369:
{
returnValue = F("Rundweg Seeblick");
break;
}
case 271370:
{
returnValue = F("Rundweg Spitzberg");
break;
}
case 271371:
{
returnValue = F("Rundweg Tuttenbrock");
break;
}
case 271372:
{
returnValue = F("Rundweg Wasser von Brachttal");
break;
}
case 271373:
{
returnValue = F("Rundweg West");
break;
}
case 271374:
{
returnValue = F("Rundweg Wildschleife");
break;
}
case 271375:
{
returnValue = F("Rundweg Wisent-Wildnis");
break;
}
case 271376:
{
returnValue = F("Rundweg auf der F60");
break;
}
case 271377:
{
returnValue = F("Rundweg im Park");
break;
}
case 271378:
{
returnValue = F("Rundweg nb");
break;
}
case 271379:
{
returnValue = F("Rundweg um den Angelweiher");
break;
}
case 271380:
{
returnValue = F("Rundweg um den Weiler");
break;
}
case 271381:
{
returnValue = F("Rundweg um die Pottkuhle");
break;
}
case 271382:
{
returnValue = F("Rundweg zum Breitenstein");
break;
}
case 271383:
{
returnValue = F("Rundweg-Heidelberg");
break;
}
case 271384:
{
returnValue = F("Rundweg/Kreuzweg");
break;
}
case 271385:
{
returnValue = F("Rundweg1/ Rundweg5 Irndorf");
break;
}
case 271386:
{
returnValue = F("RundwegKilianshof");
break;
}
case 271387:
{
returnValue = F("Rundwiesen");
break;
}
case 271388:
{
returnValue = F("Runenweg");
break;
}
case 271389:
{
returnValue = F("Runertstr.");
break;
}
case 271390:
{
returnValue = F("Runeweg");
break;
}
case 271391:
{
returnValue = F("Rungenberg");
break;
}
case 271392:
{
returnValue = F("Rungenrade");
break;
}
case 271393:
{
returnValue = F("Rungestr.");
break;
}
case 271394:
{
returnValue = F("Rungeweg");
break;
}
case 271395:
{
returnValue = F("Rungholdtweg");
break;
}
case 271396:
{
returnValue = F("Rungholter Str.");
break;
}
case 271397:
{
returnValue = F("Rungholter Weg");
break;
}
case 271398:
{
returnValue = F("Rungholtstieg");
break;
}
case 271399:
{
returnValue = F("Rungholtstr.");
break;
}
case 271400:
{
returnValue = F("Rungholtweg");
break;
}
case 271401:
{
returnValue = F("Rungsgasse");
break;
}
case 271402:
{
returnValue = F("Rungsstr.");
break;
}
case 271403:
{
returnValue = F("Rungstockstr.");
break;
}
case 271404:
{
returnValue = F("Runicatenweg");
break;
}
case 271405:
{
returnValue = F("Runjeweg");
break;
}
case 271406:
{
returnValue = F("Runkeler Str.");
break;
}
case 271407:
{
returnValue = F("Runkeler Weg");
break;
}
case 271408:
{
returnValue = F("Runkellenstr.");
break;
}
case 271409:
{
returnValue = F("Runkenreuth");
break;
}
case 271410:
{
returnValue = F("Runkwitzstr.");
break;
}
case 271411:
{
returnValue = F("Runnerweg");
break;
}
case 271412:
{
returnValue = F("Runneweg");
break;
}
case 271413:
{
returnValue = F("Runower Weg");
break;
}
case 271414:
{
returnValue = F("Runs");
break;
}
case 271415:
{
returnValue = F("Runsdorf");
break;
}
case 271416:
{
returnValue = F("Runsgraben");
break;
}
case 271417:
{
returnValue = F("Runstedter Str.");
break;
}
case 271418:
{
returnValue = F("Runstädter Str.");
break;
}
case 271419:
{
returnValue = F("Runstädter Weg");
break;
}
case 271420:
{
returnValue = F("Runswaldweg");
break;
}
case 271421:
{
returnValue = F("Runsweg");
break;
}
case 271422:
{
returnValue = F("Runtestr.");
break;
}
case 271423:
{
returnValue = F("Runthaler Höhe");
break;
}
case 271424:
{
returnValue = F("Runtrudstr.");
break;
}
case 271425:
{
returnValue = F("Runtrudweg");
break;
}
case 271426:
{
returnValue = F("Runzenbachweg");
break;
}
case 271427:
{
returnValue = F("Runzengraben");
break;
}
case 271428:
{
returnValue = F("Runzental");
break;
}
case 271429:
{
returnValue = F("Runzhäuser Str.");
break;
}
case 271430:
{
returnValue = F("Runzweg");
break;
}
case 271431:
{
returnValue = F("Ruogisesfelder Weg");
break;
}
case 271432:
{
returnValue = F("Ruomser Str.");
break;
}
case 271433:
{
returnValue = F("Rupbachstr.");
break;
}
case 271434:
{
returnValue = F("Rupbachtalstr.");
break;
}
case 271435:
{
returnValue = F("Rupelrath");
break;
}
case 271436:
{
returnValue = F("Rupennest Siedlung");
break;
}
case 271437:
{
returnValue = F("Ruperstr.");
break;
}
case 271438:
{
returnValue = F("Rupert-App-Str.");
break;
}
case 271439:
{
returnValue = F("Rupert-Dischl-Str.");
break;
}
case 271440:
{
returnValue = F("Rupert-Feilkas-Str.");
break;
}
case 271441:
{
returnValue = F("Rupert-Kniele-Weg");
break;
}
case 271442:
{
returnValue = F("Rupert-Mayer-Str.");
break;
}
case 271443:
{
returnValue = F("Rupert-Mayer-Weg");
break;
}
case 271444:
{
returnValue = F("Rupert-Sigl-Str.");
break;
}
case 271445:
{
returnValue = F("Rupert-Storr-Weg");
break;
}
case 271446:
{
returnValue = F("Rupert-Zach-Str.");
break;
}
case 271447:
{
returnValue = F("Rupert-von-Neuenstein-Str.");
break;
}
case 271448:
{
returnValue = F("Rupertiberg");
break;
}
case 271449:
{
returnValue = F("Rupertisstr.");
break;
}
case 271450:
{
returnValue = F("Rupertistr.");
break;
}
case 271451:
{
returnValue = F("Rupertiweg");
break;
}
case 271452:
{
returnValue = F("Rupertring");
break;
}
case 271453:
{
returnValue = F("Rupertsbergweg");
break;
}
case 271454:
{
returnValue = F("Rupertsbucher Str.");
break;
}
case 271455:
{
returnValue = F("Rupertshofer Str.");
break;
}
case 271456:
{
returnValue = F("Rupertshäuser Weg");
break;
}
case 271457:
{
returnValue = F("Rupertstr.");
break;
}
case 271458:
{
returnValue = F("Rupertsweg");
break;
}
case 271459:
{
returnValue = F("Rupertsweiler");
break;
}
case 271460:
{
returnValue = F("Rupertus-Neß-Str.");
break;
}
case 271461:
{
returnValue = F("Rupertuspark");
break;
}
case 271462:
{
returnValue = F("Rupertusplatz");
break;
}
case 271463:
{
returnValue = F("Rupertusstr.");
break;
}
case 271464:
{
returnValue = F("Rupertusweg");
break;
}
case 271465:
{
returnValue = F("Rupingdiek");
break;
}
case 271466:
{
returnValue = F("Ruploher Weg");
break;
}
case 271467:
{
returnValue = F("Rupolzer Str.");
break;
}
case 271468:
{
returnValue = F("Ruppacher Steige");
break;
}
case 271469:
{
returnValue = F("Ruppacher Weg");
break;
}
case 271470:
{
returnValue = F("Ruppachstr.");
break;
}
case 271471:
{
returnValue = F("Ruppanerstr.");
break;
}
case 271472:
{
returnValue = F("Ruppberg-Passage");
break;
}
case 271473:
{
returnValue = F("Ruppbergstr.");
break;
}
case 271474:
{
returnValue = F("Ruppen");
break;
}
case 271475:
{
returnValue = F("Ruppenberg");
break;
}
case 271476:
{
returnValue = F("Ruppenberg Hangkantenpfad");
break;
}
case 271477:
{
returnValue = F("Ruppenbergstr.");
break;
}
case 271478:
{
returnValue = F("Ruppendorfer Str.");
break;
}
case 271479:
{
returnValue = F("Ruppengasse");
break;
}
case 271480:
{
returnValue = F("Ruppenhahn");
break;
}
case 271481:
{
returnValue = F("Ruppenholzweg");
break;
}
case 271482:
{
returnValue = F("Ruppenmühle");
break;
}
case 271483:
{
returnValue = F("Ruppenthaler Weg");
break;
}
case 271484:
{
returnValue = F("Ruppenweg");
break;
}
case 271485:
{
returnValue = F("Rupperather Ring");
break;
}
case 271486:
{
returnValue = F("Rupperburg");
break;
}
case 271487:
{
returnValue = F("Ruppersbergweg");
break;
}
case 271488:
{
returnValue = F("Ruppersdorf");
break;
}
case 271489:
{
returnValue = F("Ruppersdorfer Str.");
break;
}
case 271490:
{
returnValue = F("Ruppersdorfer Weg");
break;
}
case 271491:
{
returnValue = F("Rupperser Weg");
break;
}
case 271492:
{
returnValue = F("Ruppershofener Str.");
break;
}
case 271493:
{
returnValue = F("Rupperstr.");
break;
}
case 271494:
{
returnValue = F("Ruppert Weg");
break;
}
case 271495:
{
returnValue = F("Ruppertenröder Str.");
break;
}
case 271496:
{
returnValue = F("Ruppertsbachstr.");
break;
}
case 271497:
{
returnValue = F("Ruppertsberger Str.");
break;
}
case 271498:
{
returnValue = F("Ruppertsburger Str.");
break;
}
case 271499:
{
returnValue = F("Ruppertsfeld");
break;
}
case 271500:
{
returnValue = F("Ruppertsgasse");
break;
}
case 271501:
{
returnValue = F("Ruppertsgrüner Str.");
break;
}
case 271502:
{
returnValue = F("Ruppertshainer Str.");
break;
}
case 271503:
{
returnValue = F("Ruppertshofer Str.");
break;
}
case 271504:
{
returnValue = F("Ruppertshöhe");
break;
}
case 271505:
{
returnValue = F("Ruppertskirchner Str.");
break;
}
case 271506:
{
returnValue = F("Ruppertslohe");
break;
}
case 271507:
{
returnValue = F("Ruppertstal");
break;
}
case 271508:
{
returnValue = F("Ruppertstr.");
break;
}
case 271509:
{
returnValue = F("Ruppertswasen");
break;
}
case 271510:
{
returnValue = F("Ruppertswies");
break;
}
case 271511:
{
returnValue = F("Ruppertweg");
break;
}
case 271512:
{
returnValue = F("Ruppichterother Str.");
break;
}
case 271513:
{
returnValue = F("Ruppiner Chaussee");
break;
}
case 271514:
{
returnValue = F("Ruppiner Str.");
break;
}
case 271515:
{
returnValue = F("Ruppinstr.");
break;
}
case 271516:
{
returnValue = F("Ruppmannsburg");
break;
}
case 271517:
{
returnValue = F("Rupppacher Höhe");
break;
}
case 271518:
{
returnValue = F("Rupprechthäuser");
break;
}
case 271519:
{
returnValue = F("Rupprechtsreuth");
break;
}
case 271520:
{
returnValue = F("Rupprechtstein");
break;
}
case 271521:
{
returnValue = F("Rupprechtstr.");
break;
}
case 271522:
{
returnValue = F("Rupprechtweg");
break;
}
case 271523:
{
returnValue = F("Ruppschneise");
break;
}
case 271524:
{
returnValue = F("Ruppstein");
break;
}
case 271525:
{
returnValue = F("Ruppsweg");
break;
}
case 271526:
{
returnValue = F("Ruprecht-Ewald-Weg");
break;
}
case 271527:
{
returnValue = F("Ruprechtsberg");
break;
}
case 271528:
{
returnValue = F("Ruprechtsbruck");
break;
}
case 271529:
{
returnValue = F("Ruprechtsgasse");
break;
}
case 271530:
{
returnValue = F("Ruprechtstr.");
break;
}
case 271531:
{
returnValue = F("Rupsröther Str.");
break;
}
case 271532:
{
returnValue = F("Rupt Sur Moselle Str.");
break;
}
case 271533:
{
returnValue = F("Rurallee");
break;
}
case 271534:
{
returnValue = F("Ruraue");
break;
}
case 271535:
{
returnValue = F("Rurauenstr.");
break;
}
case 271536:
{
returnValue = F("Rurauenweg");
break;
}
case 271537:
{
returnValue = F("Rurbenden");
break;
}
case 271538:
{
returnValue = F("Rurberger Höhe");
break;
}
case 271539:
{
returnValue = F("Rurberger Str.");
break;
}
case 271540:
{
returnValue = F("Rurblick");
break;
}
case 271541:
{
returnValue = F("Rurbrücke");
break;
}
case 271542:
{
returnValue = F("Rurdamm");
break;
}
case 271543:
{
returnValue = F("Rurdammweg");
break;
}
case 271544:
{
returnValue = F("Rurdorfer Str.");
break;
}
case 271545:
{
returnValue = F("Rurend");
break;
}
case 271546:
{
returnValue = F("Rurfeld");
break;
}
case 271547:
{
returnValue = F("Rurgasse");
break;
}
case 271548:
{
returnValue = F("Rurhofstr.");
break;
}
case 271549:
{
returnValue = F("Ruricher Weg");
break;
}
case 271550:
{
returnValue = F("Rurpforte");
break;
}
case 271551:
{
returnValue = F("Rurradweg");
break;
}
case 271552:
{
returnValue = F("Rurseestr.");
break;
}
case 271553:
{
returnValue = F("Rursteg");
break;
}
case 271554:
{
returnValue = F("Rurstr.");
break;
}
case 271555:
{
returnValue = F("Rurstr. -neu-");
break;
}
case 271556:
{
returnValue = F("Rurtalstr.");
break;
}
case 271557:
{
returnValue = F("Rurtalweg");
break;
}
case 271558:
{
returnValue = F("Rurufer");
break;
}
case 271559:
{
returnValue = F("Ruruferradweg");
break;
}
case 271560:
{
returnValue = F("Ruruper Str.");
break;
}
case 271561:
{
returnValue = F("Rurweg");
break;
}
case 271562:
{
returnValue = F("Rurwiesenstr.");
break;
}
case 271563:
{
returnValue = F("Rurödes Hof");
break;
}
case 271564:
{
returnValue = F("Rurödes Patt");
break;
}
case 271565:
{
returnValue = F("Rurödes Winkel");
break;
}
case 271566:
{
returnValue = F("Rusbender Str.");
break;
}
case 271567:
{
returnValue = F("Rusch-Schlatt");
break;
}
case 271568:
{
returnValue = F("Ruschbachstr.");
break;
}
case 271569:
{
returnValue = F("Ruschbaden");
break;
}
case 271570:
{
returnValue = F("Ruschbückle");
break;
}
case 271571:
{
returnValue = F("Ruschenbach");
break;
}
case 271572:
{
returnValue = F("Ruschenweg");
break;
}
case 271573:
{
returnValue = F("Ruscheplatenstr.");
break;
}
case 271574:
{
returnValue = F("Ruschhöfen");
break;
}
case 271575:
{
returnValue = F("Ruschkamp");
break;
}
case 271576:
{
returnValue = F("Ruschkampsweg");
break;
}
case 271577:
{
returnValue = F("Ruschkampweg");
break;
}
case 271578:
{
returnValue = F("Ruschmannstr.");
break;
}
case 271579:
{
returnValue = F("Ruschpohlkamp");
break;
}
case 271580:
{
returnValue = F("Ruschsehn");
break;
}
case 271581:
{
returnValue = F("Ruschsohl");
break;
}
case 271582:
{
returnValue = F("Ruschstr.");
break;
}
case 271583:
{
returnValue = F("Ruschufer");
break;
}
case 271584:
{
returnValue = F("Ruschvitz");
break;
}
case 271585:
{
returnValue = F("Ruschwedeler Str.");
break;
}
case 271586:
{
returnValue = F("Ruschwedeweg");
break;
}
case 271587:
{
returnValue = F("Ruschwegen");
break;
}
case 271588:
{
returnValue = F("Ruschwitzstr.");
break;
}
case 271589:
{
returnValue = F("Rusdorfstr.");
break;
}
case 271590:
{
returnValue = F("Rusejässje");
break;
}
case 271591:
{
returnValue = F("Ruselbergstr.");
break;
}
case 271592:
{
returnValue = F("Ruselerstr.");
break;
}
case 271593:
{
returnValue = F("Ruselerweg");
break;
}
case 271594:
{
returnValue = F("Ruselhochstr.");
break;
}
case 271595:
{
returnValue = F("Ruselhochstraß");
break;
}
case 271596:
{
returnValue = F("Rusellstr.");
break;
}
case 271597:
{
returnValue = F("Ruselstr.");
break;
}
case 271598:
{
returnValue = F("Ruselweg");
break;
}
case 271599:
{
returnValue = F("Rusendorfer Weg");
break;
}
case 271600:
{
returnValue = F("Rusenweg");
break;
}
case 271601:
{
returnValue = F("Rusersträßli");
break;
}
case 271602:
{
returnValue = F("Rushmore Drive");
break;
}
case 271603:
{
returnValue = F("Ruskastr.");
break;
}
case 271604:
{
returnValue = F("Russelberg");
break;
}
case 271605:
{
returnValue = F("Russelberggasse");
break;
}
case 271606:
{
returnValue = F("Russelbrink");
break;
}
case 271607:
{
returnValue = F("Russellstr.");
break;
}
case 271608:
{
returnValue = F("Russelstr.");
break;
}
case 271609:
{
returnValue = F("Russelweg");
break;
}
case 271610:
{
returnValue = F("Russenhay");
break;
}
case 271611:
{
returnValue = F("Russenhäuser");
break;
}
case 271612:
{
returnValue = F("Russenpad");
break;
}
case 271613:
{
returnValue = F("Russensteinweg");
break;
}
case 271614:
{
returnValue = F("Russenstr.");
break;
}
case 271615:
{
returnValue = F("Russenweg");
break;
}
case 271616:
{
returnValue = F("Russerweg");
break;
}
case 271617:
{
returnValue = F("Russhaldenweg");
break;
}
case 271618:
{
returnValue = F("Russower Ausbau");
break;
}
case 271619:
{
returnValue = F("Russower Str.");
break;
}
case 271620:
{
returnValue = F("Rustal");
break;
}
case 271621:
{
returnValue = F("Rustbreite");
break;
}
case 271622:
{
returnValue = F("Rusteberg");
break;
}
case 271623:
{
returnValue = F("Rustelstr.");
break;
}
case 271624:
{
returnValue = F("Rustenhof");
break;
}
case 271625:
{
returnValue = F("Rustenweg");
break;
}
case 271626:
{
returnValue = F("Ruster Str.");
break;
}
case 271627:
{
returnValue = F("Rusterbachstr.");
break;
}
case 271628:
{
returnValue = F("Rusterberg");
break;
}
case 271629:
{
returnValue = F("Rusterhof");
break;
}
case 271630:
{
returnValue = F("Rusterstr.");
break;
}
case 271631:
{
returnValue = F("Rustfeldstr.");
break;
}
case 271632:
{
returnValue = F("Rustgasse");
break;
}
case 271633:
{
returnValue = F("Rusthofstr.");
break;
}
case 271634:
{
returnValue = F("Rusthügel");
break;
}
case 271635:
{
returnValue = F("Rustigestr.");
break;
}
case 271636:
{
returnValue = F("Ruststr.");
break;
}
case 271637:
{
returnValue = F("Rustwiese");
break;
}
case 271638:
{
returnValue = F("Rutbertstr.");
break;
}
case 271639:
{
returnValue = F("Rute");
break;
}
case 271640:
{
returnValue = F("Rutenbarg");
break;
}
case 271641:
{
returnValue = F("Rutenbeck");
break;
}
case 271642:
{
returnValue = F("Rutenbecke");
break;
}
case 271643:
{
returnValue = F("Rutenberger Str.");
break;
}
case 271644:
{
returnValue = F("Rutenberger Weg");
break;
}
case 271645:
{
returnValue = F("Rutenbergstr.");
break;
}
case 271646:
{
returnValue = F("Rutenenstr.");
break;
}
case 271647:
{
returnValue = F("Rutenfeld-Schneise");
break;
}
case 271648:
{
returnValue = F("Rutenkamp");
break;
}
case 271649:
{
returnValue = F("Rutenmühle");
break;
}
case 271650:
{
returnValue = F("Rutenmühler Str.");
break;
}
case 271651:
{
returnValue = F("Rutenpaul");
break;
}
case 271652:
{
returnValue = F("Rutenstock");
break;
}
case 271653:
{
returnValue = F("Rutenstr.");
break;
}
case 271654:
{
returnValue = F("Rutenwallweg");
break;
}
case 271655:
{
returnValue = F("Rutenweg");
break;
}
case 271656:
{
returnValue = F("Rutenäcker");
break;
}
case 271657:
{
returnValue = F("Rutesheimer Str.");
break;
}
case 271658:
{
returnValue = F("Rutesheimer Weg");
break;
}
case 271659:
{
returnValue = F("Ruth-Appel-Weg");
break;
}
case 271660:
{
returnValue = F("Ruth-Bader-Platz");
break;
}
case 271661:
{
returnValue = F("Ruth-Bahls-Platz");
break;
}
case 271662:
{
returnValue = F("Ruth-Bahls-Str.");
break;
}
case 271663:
{
returnValue = F("Ruth-Borjack-Weg");
break;
}
case 271664:
{
returnValue = F("Ruth-Crämer-Str.");
break;
}
case 271665:
{
returnValue = F("Ruth-Kölle-Str.");
break;
}
case 271666:
{
returnValue = F("Ruth-Marx-Str.");
break;
}
case 271667:
{
returnValue = F("Ruth-Niehaus-Str.");
break;
}
case 271668:
{
returnValue = F("Ruth-Pfau-Ring");
break;
}
case 271669:
{
returnValue = F("Ruth-Schaumann-Weg");
break;
}
case 271670:
{
returnValue = F("Ruth-Schwob-Str.");
break;
}
case 271671:
{
returnValue = F("Ruth-Siedel-Str.");
break;
}
case 271672:
{
returnValue = F("Ruth-Storm-Weg");
break;
}
case 271673:
{
returnValue = F("Ruth-Tannenzapf-Weg");
break;
}
case 271674:
{
returnValue = F("Ruth-Tobias-Weg");
break;
}
case 271675:
{
returnValue = F("Ruth-und-Ellen-Weisner-Gasse");
break;
}
case 271676:
{
returnValue = F("Rutha");
break;
}
case 271677:
{
returnValue = F("Ruthaer Str.");
break;
}
case 271678:
{
returnValue = F("Ruthardstr.");
break;
}
case 271679:
{
returnValue = F("Ruthardweg");
break;
}
case 271680:
{
returnValue = F("Ruthemeiers Esch");
break;
}
case 271681:
{
returnValue = F("Ruthenbachweg");
break;
}
case 271682:
{
returnValue = F("Ruthenbecker Berg");
break;
}
case 271683:
{
returnValue = F("Ruthenbruchweg");
break;
}
case 271684:
{
returnValue = F("Ruthenbuschstr.");
break;
}
case 271685:
{
returnValue = F("Ruthenkamp");
break;
}
case 271686:
{
returnValue = F("Ruthenstr.");
break;
}
case 271687:
{
returnValue = F("Ruthenweg");
break;
}
case 271688:
{
returnValue = F("Ruther Str.");
break;
}
case 271689:
{
returnValue = F("Ruther Weg");
break;
}
case 271690:
{
returnValue = F("Rutherstr.");
break;
}
case 271691:
{
returnValue = F("Ruthmannstr.");
break;
}
case 271692:
{
returnValue = F("Ruthmannsweiler");
break;
}
case 271693:
{
returnValue = F("Ruthmänninstr.");
break;
}
case 271694:
{
returnValue = F("Ruthwiesweg");
break;
}
case 271695:
{
returnValue = F("Ruthörn");
break;
}
case 271696:
{
returnValue = F("Rutowskyallee");
break;
}
case 271697:
{
returnValue = F("Rutschbach");
break;
}
case 271698:
{
returnValue = F("Rutschbachschneise");
break;
}
case 271699:
{
returnValue = F("Rutsche");
break;
}
case 271700:
{
returnValue = F("Rutscheid");
break;
}
case 271701:
{
returnValue = F("Rutschenhofweg");
break;
}
case 271702:
{
returnValue = F("Rutschfelsausfahrt");
break;
}
case 271703:
{
returnValue = F("Rutschgäßl");
break;
}
case 271704:
{
returnValue = F("Rutschmannstr.");
break;
}
case 271705:
{
returnValue = F("Rutschstr.");
break;
}
case 271706:
{
returnValue = F("Rutschweg");
break;
}
case 271707:
{
returnValue = F("Rutsstr.");
break;
}
case 271708:
{
returnValue = F("Rutteler Str.");
break;
}
case 271709:
{
returnValue = F("Ruttenbühlweg");
break;
}
case 271710:
{
returnValue = F("Ruttersdorf");
break;
}
case 271711:
{
returnValue = F("Ruttersdorfer Weg");
break;
}
case 271712:
{
returnValue = F("Ruttershausener Str.");
break;
}
case 271713:
{
returnValue = F("Ruttershäuser Str.");
break;
}
case 271714:
{
returnValue = F("Ruttershäuser Weg");
break;
}
case 271715:
{
returnValue = F("Rutting");
break;
}
case 271716:
{
returnValue = F("Ruttscheider Str.");
break;
}
case 271717:
{
returnValue = F("Rutwinstr.");
break;
}
case 271718:
{
returnValue = F("Rutzendorfer Weg");
break;
}
case 271719:
{
returnValue = F("Rutzhainweg");
break;
}
case 271720:
{
returnValue = F("Rutzkauer Str.");
break;
}
case 271721:
{
returnValue = F("Ruurloer Str.");
break;
}
case 271722:
{
returnValue = F("Ruwer-Hochwald-Schleife");
break;
}
case 271723:
{
returnValue = F("Ruwerblick");
break;
}
case 271724:
{
returnValue = F("Ruwerer Str.");
break;
}
case 271725:
{
returnValue = F("Ruwergasse");
break;
}
case 271726:
{
returnValue = F("Ruwermündung");
break;
}
case 271727:
{
returnValue = F("Ruwerstr.");
break;
}
case 271728:
{
returnValue = F("Ruwertalblick");
break;
}
case 271729:
{
returnValue = F("Ruwertalstr.");
break;
}
case 271730:
{
returnValue = F("Ruwerweg");
break;
}
case 271731:
{
returnValue = F("Rußbaumweg");
break;
}
case 271732:
{
returnValue = F("Rußberg");
break;
}
case 271733:
{
returnValue = F("Rußberger Str.");
break;
}
case 271734:
{
returnValue = F("Rußbergstr.");
break;
}
case 271735:
{
returnValue = F("Rußbergweg");
break;
}
case 271736:
{
returnValue = F("Rußbuttensteig");
break;
}
case 271737:
{
returnValue = F("Rußdorf");
break;
}
case 271738:
{
returnValue = F("Rußdorfer Str.");
break;
}
case 271739:
{
returnValue = F("Rußgasse");
break;
}
case 271740:
{
returnValue = F("Rußgrabenweg");
break;
}
case 271741:
{
returnValue = F("Rußhaldeweg");
break;
}
case 271742:
{
returnValue = F("Rußhof");
break;
}
case 271743:
{
returnValue = F("Rußhütte");
break;
}
case 271744:
{
returnValue = F("Rußhütter Str.");
break;
}
case 271745:
{
returnValue = F("Rußkamp");
break;
}
case 271746:
{
returnValue = F("Rußland");
break;
}
case 271747:
{
returnValue = F("Rußlandweg");
break;
}
case 271748:
{
returnValue = F("Rußlerstr.");
break;
}
case 271749:
{
returnValue = F("Rußmahd");
break;
}
case 271750:
{
returnValue = F("Rußmühlerstr.");
break;
}
case 271751:
{
returnValue = F("Rußweg");
break;
}
case 271752:
{
returnValue = F("Rußwerthstr.");
break;
}
case 271753:
{
returnValue = F("Rußwurm-Weg");
break;
}
case 271754:
{
returnValue = F("Rußwurmstr.");
break;
}
case 271755:
{
returnValue = F("Ryanair Boarding");
break;
}
case 271756:
{
returnValue = F("Rybniker Str.");
break;
}
case 271757:
{
returnValue = F("Ryckenweg");
break;
}
case 271758:
{
returnValue = F("Rykenastr.");
break;
}
case 271759:
{
returnValue = F("Rylandweg");
break;
}
case 271760:
{
returnValue = F("Rymannstr.");
break;
}
case 271761:
{
returnValue = F("Rymeerstr.");
break;
}
case 271762:
{
returnValue = F("Rymelsberg");
break;
}
case 271763:
{
returnValue = F("Ryschawystr.");
break;
}
case 271764:
{
returnValue = F("Rysdyker Weg");
break;
}
case 271765:
{
returnValue = F("Rysumer Landstr.");
break;
}
case 271766:
{
returnValue = F("Rysumer Reihe");
break;
}
case 271767:
{
returnValue = F("Ryther Str.");
break;
}
case 271768:
{
returnValue = F("Ryther Weg");
break;
}
case 271769:
{
returnValue = F("Räbelsche Dorfstr.");
break;
}
case 271770:
{
returnValue = F("Räbelsche Str.");
break;
}
case 271771:
{
returnValue = F("Räber Str.");
break;
}
case 271772:
{
returnValue = F("Räber West");
break;
}
case 271773:
{
returnValue = F("Räbers Weg");
break;
}
case 271774:
{
returnValue = F("Räbers Wiese");
break;
}
case 271775:
{
returnValue = F("Räberspringweg");
break;
}
case 271776:
{
returnValue = F("Räberweg");
break;
}
case 271777:
{
returnValue = F("Räbker Weg");
break;
}
case 271778:
{
returnValue = F("Räckendorfer Weg");
break;
}
case 271779:
{
returnValue = F("Räcknitzer Marktweg");
break;
}
case 271780:
{
returnValue = F("Räcknitzhöhe");
break;
}
case 271781:
{
returnValue = F("Räcknitzstr.");
break;
}
case 271782:
{
returnValue = F("Rädchen");
break;
}
case 271783:
{
returnValue = F("Rädchenweg");
break;
}
case 271784:
{
returnValue = F("Rädeler Str.");
break;
}
case 271785:
{
returnValue = F("Rädeler Weg");
break;
}
case 271786:
{
returnValue = F("Rädelstr.");
break;
}
case 271787:
{
returnValue = F("Rädentalstr.");
break;
}
case 271788:
{
returnValue = F("Räderbüschelweg");
break;
}
case 271789:
{
returnValue = F("Rädereichen");
break;
}
case 271790:
{
returnValue = F("Rädergarten");
break;
}
case 271791:
{
returnValue = F("Räderloher Str.");
break;
}
case 271792:
{
returnValue = F("Räderloher Weg");
break;
}
case 271793:
{
returnValue = F("Räderscheidtstr.");
break;
}
case 271794:
{
returnValue = F("Räderweg");
break;
}
case 271795:
{
returnValue = F("Räderäckerweg");
break;
}
case 271796:
{
returnValue = F("Rädestr.");
break;
}
case 271797:
{
returnValue = F("Rädikow");
break;
}
case 271798:
{
returnValue = F("Rädlegasse");
break;
}
case 271799:
{
returnValue = F("Rädlerwald");
break;
}
case 271800:
{
returnValue = F("Rädlesbachweg");
break;
}
case 271801:
{
returnValue = F("Rädlesbergstr.");
break;
}
case 271802:
{
returnValue = F("Rädlestr.");
break;
}
case 271803:
{
returnValue = F("Rädlinger Allee");
break;
}
case 271804:
{
returnValue = F("Rägeliner Str.");
break;
}
case 271805:
{
returnValue = F("Rägelsdorf");
break;
}
case 271806:
{
returnValue = F("Rägertstr.");
break;
}
case 271807:
{
returnValue = F("Räherkamp");
break;
}
case 271808:
{
returnValue = F("Rähersiek");
break;
}
case 271809:
{
returnValue = F("Rählege");
break;
}
case 271810:
{
returnValue = F("Rählmannstr.");
break;
}
case 271811:
{
returnValue = F("Rählwiese");
break;
}
case 271812:
{
returnValue = F("Rähm");
break;
}
case 271813:
{
returnValue = F("Rähmberg");
break;
}
case 271814:
{
returnValue = F("Rähmen");
break;
}
case 271815:
{
returnValue = F("Rähmenweg");
break;
}
case 271816:
{
returnValue = F("Rähmergrundweg");
break;
}
case 271817:
{
returnValue = F("Rähnisstr.");
break;
}
case 271818:
{
returnValue = F("Rähnitzer Mühlweg");
break;
}
case 271819:
{
returnValue = F("Rähnitzer Str.");
break;
}
case 271820:
{
returnValue = F("Rähnitzgasse");
break;
}
case 271821:
{
returnValue = F("Rähnitzsteig");
break;
}
case 271822:
{
returnValue = F("Rähnweg");
break;
}
case 271823:
{
returnValue = F("Rähnwischredder");
break;
}
case 271824:
{
returnValue = F("Rährweg");
break;
}
case 271825:
{
returnValue = F("Räidekööl");
break;
}
case 271826:
{
returnValue = F("Räkers Kamp");
break;
}
case 271827:
{
returnValue = F("Räkerstr.");
break;
}
case 271828:
{
returnValue = F("Rälingser Str.");
break;
}
case 271829:
{
returnValue = F("Rälling");
break;
}
case 271830:
{
returnValue = F("Rälser Eck");
break;
}
case 271831:
{
returnValue = F("Rämel");
break;
}
case 271832:
{
returnValue = F("Rämenstr.");
break;
}
case 271833:
{
returnValue = F("Rämenweg");
break;
}
case 271834:
{
returnValue = F("Rämischstr.");
break;
}
case 271835:
{
returnValue = F("Rämplstr.");
break;
}
case 271836:
{
returnValue = F("Rängberg");
break;
}
case 271837:
{
returnValue = F("Ränkamer Str.");
break;
}
case 271838:
{
returnValue = F("Ränke");
break;
}
case 271839:
{
returnValue = F("Ränkelweg");
break;
}
case 271840:
{
returnValue = F("Ränkle");
break;
}
case 271841:
{
returnValue = F("Ränklestr.");
break;
}
case 271842:
{
returnValue = F("Rännwäg");
break;
}
case 271843:
{
returnValue = F("Räntzstr.");
break;
}
case 271844:
{
returnValue = F("Ränzelswiese");
break;
}
case 271845:
{
returnValue = F("Ränzstr.");
break;
}
case 271846:
{
returnValue = F("Räpitzer Str.");
break;
}
case 271847:
{
returnValue = F("Räppel");
break;
}
case 271848:
{
returnValue = F("Räppelstr.");
break;
}
case 271849:
{
returnValue = F("Räpplenstr.");
break;
}
case 271850:
{
returnValue = F("Rärin");
break;
}
case 271851:
{
returnValue = F("Räriner Str.");
break;
}
case 271852:
{
returnValue = F("Räsaer Tor");
break;
}
case 271853:
{
returnValue = F("Räschener Str.");
break;
}
case 271854:
{
returnValue = F("Räterstr.");
break;
}
case 271855:
{
returnValue = F("Räthenweg");
break;
}
case 271856:
{
returnValue = F("Räther");
break;
}
case 271857:
{
returnValue = F("Rätherweg");
break;
}
case 271858:
{
returnValue = F("Rätikonstr.");
break;
}
case 271859:
{
returnValue = F("Rätikonweg");
break;
}
case 271860:
{
returnValue = F("Rätsgasse");
break;
}
case 271861:
{
returnValue = F("Rätzesiedlung");
break;
}
case 271862:
{
returnValue = F("Rätzestr.");
break;
}
case 271863:
{
returnValue = F("Rätzlinger Str.");
break;
}
case 271864:
{
returnValue = F("Räubenberg");
break;
}
case 271865:
{
returnValue = F("Räuber-Heigl-Weg");
break;
}
case 271866:
{
returnValue = F("Räuberberg");
break;
}
case 271867:
{
returnValue = F("Räuberbrücke");
break;
}
case 271868:
{
returnValue = F("Räubergasse");
break;
}
case 271869:
{
returnValue = F("Räuberluch");
break;
}
case 271870:
{
returnValue = F("Räuberspesch");
break;
}
case 271871:
{
returnValue = F("Räuberstege");
break;
}
case 271872:
{
returnValue = F("Räubersweg");
break;
}
case 271873:
{
returnValue = F("Räuberweg");
break;
}
case 271874:
{
returnValue = F("Räuberwäldchen");
break;
}
case 271875:
{
returnValue = F("Räuchberger");
break;
}
case 271876:
{
returnValue = F("Räuchlestr.");
break;
}
case 271877:
{
returnValue = F("Räudersteinbruchweg");
break;
}
case 271878:
{
returnValue = F("Räume der Stille");
break;
}
case 271879:
{
returnValue = F("Räumicht");
break;
}
case 271880:
{
returnValue = F("Räumichtweg");
break;
}
case 271881:
{
returnValue = F("Räumigtweg");
break;
}
case 271882:
{
returnValue = F("Räumlandweg");
break;
}
case 271883:
{
returnValue = F("Räumlas");
break;
}
case 271884:
{
returnValue = F("Räumlasweg");
break;
}
case 271885:
{
returnValue = F("Räumstr.");
break;
}
case 271886:
{
returnValue = F("Räuschbergstr.");
break;
}
case 271887:
{
returnValue = F("Räuschelbachweg");
break;
}
case 271888:
{
returnValue = F("Räuschelstr.");
break;
}
case 271889:
{
returnValue = F("Räuschenbergstr.");
break;
}
case 271890:
{
returnValue = F("Räuscherweg");
break;
}
case 271891:
{
returnValue = F("Räuschlingweg");
break;
}
case 271892:
{
returnValue = F("Räuwenkamp");
break;
}
case 271893:
{
returnValue = F("Réaumurstr.");
break;
}
case 271894:
{
returnValue = F("Réo-Str.");
break;
}
case 271895:
{
returnValue = F("Röbbeler Str.");
break;
}
case 271896:
{
returnValue = F("Röbeler Chaussee");
break;
}
case 271897:
{
returnValue = F("Röbeler Str.");
break;
}
case 271898:
{
returnValue = F("Röbeler Weg");
break;
}
case 271899:
{
returnValue = F("Röbelstr.");
break;
}
case 271900:
{
returnValue = F("Röbelweg");
break;
}
case 271901:
{
returnValue = F("Röbendiekenstr.");
break;
}
case 271902:
{
returnValue = F("Röbenkamp");
break;
}
case 271903:
{
returnValue = F("Röbenstr.");
break;
}
case 271904:
{
returnValue = F("Röbersdorfer Hauptstr.");
break;
}
case 271905:
{
returnValue = F("Röbersdorfer Weg");
break;
}
case 271906:
{
returnValue = F("Röberstr.");
break;
}
case 271907:
{
returnValue = F("Röbkenberg");
break;
}
case 271908:
{
returnValue = F("Röbkengarten");
break;
}
case 271909:
{
returnValue = F("Röblingen Stedten");
break;
}
case 271910:
{
returnValue = F("Röblinger Str.");
break;
}
case 271911:
{
returnValue = F("Röblinger Weg");
break;
}
case 271912:
{
returnValue = F("Röblingstr.");
break;
}
case 271913:
{
returnValue = F("Röblinsee Nord");
break;
}
case 271914:
{
returnValue = F("Röbschütz");
break;
}
case 271915:
{
returnValue = F("Röbsdorfer Weg");
break;
}
case 271916:
{
returnValue = F("Röchlingstr.");
break;
}
case 271917:
{
returnValue = F("Röckenhofer Hauptstr.");
break;
}
case 271918:
{
returnValue = F("Röckenhofer Str.");
break;
}
case 271919:
{
returnValue = F("Röckenweg");
break;
}
case 271920:
{
returnValue = F("Röcker Feld");
break;
}
case 271921:
{
returnValue = F("Röcker Str.");
break;
}
case 271922:
{
returnValue = F("Röckertsgasse");
break;
}
case 271923:
{
returnValue = F("Röckinghausener Str.");
break;
}
case 271924:
{
returnValue = F("Röckkellerstr.");
break;
}
case 271925:
{
returnValue = F("Röcklinger Ufer");
break;
}
case 271926:
{
returnValue = F("Röcknitz Wasserweg");
break;
}
case 271927:
{
returnValue = F("Röcknitzer Str.");
break;
}
case 271928:
{
returnValue = F("Röcknitzstr.");
break;
}
case 271929:
{
returnValue = F("Röckrather Feldweg");
break;
}
case 271930:
{
returnValue = F("Röckrather Hauptstr.");
break;
}
case 271931:
{
returnValue = F("Röckrather Str.");
break;
}
case 271932:
{
returnValue = F("Röckskamp");
break;
}
case 271933:
{
returnValue = F("Röckstr.");
break;
}
case 271934:
{
returnValue = F("Röckwiesenweg");
break;
}
case 271935:
{
returnValue = F("Röckwitzer Str.");
break;
}
case 271936:
{
returnValue = F("Rödchen");
break;
}
case 271937:
{
returnValue = F("Rödchenstr.");
break;
}
case 271938:
{
returnValue = F("Rödchenweg");
break;
}
case 271939:
{
returnValue = F("Rödchesbrücke");
break;
}
case 271940:
{
returnValue = F("Rödchesgasse");
break;
}
case 271941:
{
returnValue = F("Rödchesweg");
break;
}
case 271942:
{
returnValue = F("Röddeliner Damm");
break;
}
case 271943:
{
returnValue = F("Röddeliner Dorfstr.");
break;
}
case 271944:
{
returnValue = F("Röddeliner Str.");
break;
}
case 271945:
{
returnValue = F("Röddenauer Weg");
break;
}
case 271946:
{
returnValue = F("Röddenhof");
break;
}
case 271947:
{
returnValue = F("Röddenser Dorfstr.");
break;
}
case 271948:
{
returnValue = F("Röddepöhler Weg");
break;
}
case 271949:
{
returnValue = F("Rödder");
break;
}
case 271950:
{
returnValue = F("Röddergasse");
break;
}
case 271951:
{
returnValue = F("Rödderstr.");
break;
}
case 271952:
{
returnValue = F("Rödderweg");
break;
}
case 271953:
{
returnValue = F("Röddinger Str.");
break;
}
case 271954:
{
returnValue = F("Rödelangerweg");
break;
}
case 271955:
{
returnValue = F("Rödelbach");
break;
}
case 271956:
{
returnValue = F("Rödelbachstr.");
break;
}
case 271957:
{
returnValue = F("Rödelberger Str.");
break;
}
case 271958:
{
returnValue = F("Rödelbergstr.");
break;
}
case 271959:
{
returnValue = F("Rödelbergweg");
break;
}
case 271960:
{
returnValue = F("Rödeler Weg");
break;
}
case 271961:
{
returnValue = F("Rödelgasse");
break;
}
case 271962:
{
returnValue = F("Rödelhangweg");
break;
}
case 271963:
{
returnValue = F("Rödelheimer Str.");
break;
}
case 271964:
{
returnValue = F("Rödelheimer Weg");
break;
}
case 271965:
{
returnValue = F("Rödelsbachstr.");
break;
}
case 271966:
{
returnValue = F("Rödelsbachweg");
break;
}
case 271967:
{
returnValue = F("Rödelseer Str.");
break;
}
case 271968:
{
returnValue = F("Rödelseer Tor");
break;
}
case 271969:
{
returnValue = F("Rödelseer Weg");
break;
}
case 271970:
{
returnValue = F("Rödelsgasse");
break;
}
case 271971:
{
returnValue = F("Rödelsgraben");
break;
}
case 271972:
{
returnValue = F("Rödelsteig");
break;
}
case 271973:
{
returnValue = F("Rödelsteinstr.");
break;
}
case 271974:
{
returnValue = F("Rödelstr.");
break;
}
case 271975:
{
returnValue = F("Rödelstück");
break;
}
case 271976:
{
returnValue = F("Rödelsweg");
break;
}
case 271977:
{
returnValue = F("Rödelwiesweg");
break;
}
case 271978:
{
returnValue = F("Rödelwitz");
break;
}
case 271979:
{
returnValue = F("Rödemich");
break;
}
case 271980:
{
returnValue = F("Rödemisfeld");
break;
}
case 271981:
{
returnValue = F("Rödemishallig");
break;
}
case 271982:
{
returnValue = F("Rödemisser Chaussee");
break;
}
case 271983:
{
returnValue = F("Röden");
break;
}
case 271984:
{
returnValue = F("Rödenauen");
break;
}
case 271985:
{
returnValue = F("Rödenbeck");
break;
}
case 271986:
{
returnValue = F("Rödenbecks Hof");
break;
}
case 271987:
{
returnValue = F("Rödenbrooksweg");
break;
}
case 271988:
{
returnValue = F("Rödener Weg");
break;
}
case 271989:
{
returnValue = F("Rödenfeld-Schneise");
break;
}
case 271990:
{
returnValue = F("Rödenhof");
break;
}
case 271991:
{
returnValue = F("Rödensdorfer Str.");
break;
}
case 271992:
{
returnValue = F("Rödenstr.");
break;
}
case 271993:
{
returnValue = F("Rödentaler Str.");
break;
}
case 271994:
{
returnValue = F("Rödenweg");
break;
}
case 271995:
{
returnValue = F("Rödenwiese");
break;
}
case 271996:
{
returnValue = F("Rödenwiesen");
break;
}
case 271997:
{
returnValue = F("Röder");
break;
}
case 271998:
{
returnValue = F("Röderaue");
break;
}
case 271999:
{
returnValue = F("Röderauer Str.");
break;
}
case 272000:
{
returnValue = F("Röderbachweg");
break;
}
case 272001:
{
returnValue = F("Röderbeeksweg");
break;
}
case 272002:
{
returnValue = F("Röderberg");
break;
}
case 272003:
{
returnValue = F("Röderbergstr.");
break;
}
case 272004:
{
returnValue = F("Röderbuschring");
break;
}
case 272005:
{
returnValue = F("Röderdamm");
break;
}
case 272006:
{
returnValue = F("Rödereckring");
break;
}
case 272007:
{
returnValue = F("Röderfeld");
break;
}
case 272008:
{
returnValue = F("Röderfeldweg");
break;
}
case 272009:
{
returnValue = F("Röderfurt");
break;
}
case 272010:
{
returnValue = F("Rödergasse");
break;
}
case 272011:
{
returnValue = F("Rödergrund");
break;
}
case 272012:
{
returnValue = F("Röderhaid");
break;
}
case 272013:
{
returnValue = F("Röderhaukweg");
break;
}
case 272014:
{
returnValue = F("Röderhof");
break;
}
case 272015:
{
returnValue = F("Röderhofer Str.");
break;
}
case 272016:
{
returnValue = F("Röderhofstr.");
break;
}
case 272017:
{
returnValue = F("Röderhofweg");
break;
}
case 272018:
{
returnValue = F("Röderholzweg");
break;
}
case 272019:
{
returnValue = F("Röderhäuser");
break;
}
case 272020:
{
returnValue = F("Röderhöferweg");
break;
}
case 272021:
{
returnValue = F("Röderkirchhof");
break;
}
case 272022:
{
returnValue = F("Röderkreuzweg");
break;
}
case 272023:
{
returnValue = F("Röderloch");
break;
}
case 272024:
{
returnValue = F("Rödermarkring");
break;
}
case 272025:
{
returnValue = F("Rödermattstr.");
break;
}
case 272026:
{
returnValue = F("Rödern");
break;
}
case 272027:
{
returnValue = F("Rödernschneise");
break;
}
case 272028:
{
returnValue = F("Rödernstr.");
break;
}
case 272029:
{
returnValue = F("Rödernweg");
break;
}
case 272030:
{
returnValue = F("Röderring");
break;
}
case 272031:
{
returnValue = F("Röders Park");
break;
}
case 272032:
{
returnValue = F("Rödersbach");
break;
}
case 272033:
{
returnValue = F("Röderschütt");
break;
}
case 272034:
{
returnValue = F("Rödersdorf");
break;
}
case 272035:
{
returnValue = F("Röderseeschneise");
break;
}
case 272036:
{
returnValue = F("Röderseestr.");
break;
}
case 272037:
{
returnValue = F("Rödersheimer Str.");
break;
}
case 272038:
{
returnValue = F("Rödersheimer Weg");
break;
}
case 272039:
{
returnValue = F("Rödershöfen");
break;
}
case 272040:
{
returnValue = F("Rödersteinweg");
break;
}
case 272041:
{
returnValue = F("Röderstr.");
break;
}
case 272042:
{
returnValue = F("Röderswaldweg");
break;
}
case 272043:
{
returnValue = F("Rödertal");
break;
}
case 272044:
{
returnValue = F("Rödertalplatz");
break;
}
case 272045:
{
returnValue = F("Rödertalstr.");
break;
}
case 272046:
{
returnValue = F("Rödertalweg");
break;
}
case 272047:
{
returnValue = F("Röderter Weg");
break;
}
case 272048:
{
returnValue = F("Röderwaldweg");
break;
}
case 272049:
{
returnValue = F("Röderweg");
break;
}
case 272050:
{
returnValue = F("Röderwiese");
break;
}
case 272051:
{
returnValue = F("Röderwinkel");
break;
}
case 272052:
{
returnValue = F("Rödestr.");
break;
}
case 272053:
{
returnValue = F("Rödeweg");
break;
}
case 272054:
{
returnValue = F("Rödgen");
break;
}
case 272055:
{
returnValue = F("Rödgenberg");
break;
}
case 272056:
{
returnValue = F("Rödgener Dorfstr.");
break;
}
case 272057:
{
returnValue = F("Rödgener Landstr.");
break;
}
case 272058:
{
returnValue = F("Rödgener Str.");
break;
}
case 272059:
{
returnValue = F("Rödgener Weg");
break;
}
case 272060:
{
returnValue = F("Rödger Bahn");
break;
}
case 272061:
{
returnValue = F("Rödger Hauptstr.");
break;
}
case 272062:
{
returnValue = F("Rödger Str.");
break;
}
case 272063:
{
returnValue = F("Rödger Weg");
break;
}
case 272064:
{
returnValue = F("Rödgerbachstr.");
break;
}
case 272065:
{
returnValue = F("Rödicher Hauptstr.");
break;
}
case 272066:
{
returnValue = F("Rödicher Str.");
break;
}
case 272067:
{
returnValue = F("Rödigenweg");
break;
}
case 272068:
{
returnValue = F("Rödigerstr.");
break;
}
case 272069:
{
returnValue = F("Rödinger Str.");
break;
}
case 272070:
{
returnValue = F("Rödinger Weg");
break;
}
case 272071:
{
returnValue = F("Rödinghauser Bergweg");
break;
}
case 272072:
{
returnValue = F("Rödinghauser Heide");
break;
}
case 272073:
{
returnValue = F("Rödinghauser Str.");
break;
}
case 272074:
{
returnValue = F("Rödingweg");
break;
}
case 272075:
{
returnValue = F("Rödlas");
break;
}
case 272076:
{
returnValue = F("Rödlasberger Weg");
break;
}
case 272077:
{
returnValue = F("Rödlaser Str.");
break;
}
case 272078:
{
returnValue = F("Rödlbergstr.");
break;
}
case 272079:
{
returnValue = F("Rödlerstr.");
break;
}
case 272080:
{
returnValue = F("Rödlesser Str.");
break;
}
case 272081:
{
returnValue = F("Rödlgries");
break;
}
case 272082:
{
returnValue = F("Rödlicherweg");
break;
}
case 272083:
{
returnValue = F("Rödlinghauser Str.");
break;
}
case 272084:
{
returnValue = F("Rödlitzer Str.");
break;
}
case 272085:
{
returnValue = F("Rödlitzer Weg");
break;
}
case 272086:
{
returnValue = F("Rödlstr.");
break;
}
case 272087:
{
returnValue = F("Rödmühle");
break;
}
case 272088:
{
returnValue = F("Rödnerweg");
break;
}
case 272089:
{
returnValue = F("Rödtmoortwiete");
break;
}
case 272090:
{
returnValue = F("Rödweg");
break;
}
case 272091:
{
returnValue = F("Röerstr.");
break;
}
case 272092:
{
returnValue = F("Röfleuter Weg");
break;
}
case 272093:
{
returnValue = F("Rögelestr.");
break;
}
case 272094:
{
returnValue = F("Rögen");
break;
}
case 272095:
{
returnValue = F("Rögener Grund");
break;
}
case 272096:
{
returnValue = F("Rögener Str.");
break;
}
case 272097:
{
returnValue = F("Rögener Weg");
break;
}
case 272098:
{
returnValue = F("Röggeliner Ring");
break;
}
case 272099:
{
returnValue = F("Röggeliner Str.");
break;
}
case 272100:
{
returnValue = F("Rögispromenade");
break;
}
case 272101:
{
returnValue = F("Rögitzstr.");
break;
}
case 272102:
{
returnValue = F("Rögling");
break;
}
case 272103:
{
returnValue = F("Röglinger Str.");
break;
}
case 272104:
{
returnValue = F("Röglitzer Hauptstr.");
break;
}
case 272105:
{
returnValue = F("Rögnitz");
break;
}
case 272106:
{
returnValue = F("Röhbarg");
break;
}
case 272107:
{
returnValue = F("Röhberg");
break;
}
case 272108:
{
returnValue = F("Röhbrookring");
break;
}
case 272109:
{
returnValue = F("Röhden");
break;
}
case 272110:
{
returnValue = F("Röhdener Weg");
break;
}
case 272111:
{
returnValue = F("Röhenberg");
break;
}
case 272112:
{
returnValue = F("Röhenbülter Weg");
break;
}
case 272113:
{
returnValue = F("Röhenstr.");
break;
}
case 272114:
{
returnValue = F("Röhenweg");
break;
}
case 272115:
{
returnValue = F("Röher Hütte");
break;
}
case 272116:
{
returnValue = F("Röher Str.");
break;
}
case 272117:
{
returnValue = F("Röhland");
break;
}
case 272118:
{
returnValue = F("Röhlenend");
break;
}
case 272119:
{
returnValue = F("Röhlenstr.");
break;
}
case 272120:
{
returnValue = F("Röhler Str.");
break;
}
case 272121:
{
returnValue = F("Röhlersgarten");
break;
}
case 272122:
{
returnValue = F("Röhlerstr.");
break;
}
case 272123:
{
returnValue = F("Röhlichstr.");
break;
}
case 272124:
{
returnValue = F("Röhlichweg");
break;
}
case 272125:
{
returnValue = F("Röhlinger Str.");
break;
}
case 272126:
{
returnValue = F("Röhlinghauser Str.");
break;
}
case 272127:
{
returnValue = F("Röhlingsplatz");
break;
}
case 272128:
{
returnValue = F("Röhlingstr.");
break;
}
case 272129:
{
returnValue = F("Röhlingsweg");
break;
}
case 272130:
{
returnValue = F("Röhlinwaldweg");
break;
}
case 272131:
{
returnValue = F("Röhlitzstr.");
break;
}
case 272132:
{
returnValue = F("Röhlsche Koppel");
break;
}
case 272133:
{
returnValue = F("Röhlstr.");
break;
}
case 272134:
{
returnValue = F("Röhmbachstr.");
break;
}
case 272135:
{
returnValue = F("Röhmcken");
break;
}
case 272136:
{
returnValue = F("Röhmenerweg");
break;
}
case 272137:
{
returnValue = F("Röhmker Weg");
break;
}
case 272138:
{
returnValue = F("Röhmstr.");
break;
}
case 272139:
{
returnValue = F("Röhn");
break;
}
case 272140:
{
returnValue = F("Röhnberg Allee");
break;
}
case 272141:
{
returnValue = F("Röhnbergstr.");
break;
}
case 272142:
{
returnValue = F("Röhnert");
break;
}
case 272143:
{
returnValue = F("Röhnhorst");
break;
}
case 272144:
{
returnValue = F("Röhnigweg");
break;
}
case 272145:
{
returnValue = F("Röhnisch-Platz");
break;
}
case 272146:
{
returnValue = F("Röhnsgasse");
break;
}
case 272147:
{
returnValue = F("Röhnstr.");
break;
}
case 272148:
{
returnValue = F("Röhnweg");
break;
}
case 272149:
{
returnValue = F("Röhrach");
break;
}
case 272150:
{
returnValue = F("Röhracher Str.");
break;
}
case 272151:
{
returnValue = F("Röhrachweg");
break;
}
case 272152:
{
returnValue = F("Röhrbachpark");
break;
}
case 272153:
{
returnValue = F("Röhrbachstr.");
break;
}
case 272154:
{
returnValue = F("Röhrberg");
break;
}
case 272155:
{
returnValue = F("Röhrbrunnen");
break;
}
case 272156:
{
returnValue = F("Röhrbrunnenplatz");
break;
}
case 272157:
{
returnValue = F("Röhrbrunnenstr.");
break;
}
case 272158:
{
returnValue = F("Röhrbuckel");
break;
}
case 272159:
{
returnValue = F("Röhrchenstr.");
break;
}
case 272160:
{
returnValue = F("Röhrdaer Str.");
break;
}
case 272161:
{
returnValue = F("Röhrdenstieg");
break;
}
case 272162:
{
returnValue = F("Röhrenbacher Str.");
break;
}
case 272163:
{
returnValue = F("Röhrenbachring");
break;
}
case 272164:
{
returnValue = F("Röhrenberg");
break;
}
case 272165:
{
returnValue = F("Röhrenbornstr.");
break;
}
case 272166:
{
returnValue = F("Röhrenbrunnengasse");
break;
}
case 272167:
{
returnValue = F("Röhrenbrunnenweg");
break;
}
case 272168:
{
returnValue = F("Röhrendobl");
break;
}
case 272169:
{
returnValue = F("Röhrener Gasse");
break;
}
case 272170:
{
returnValue = F("Röhrenfeldstr.");
break;
}
case 272171:
{
returnValue = F("Röhrengasse");
break;
}
case 272172:
{
returnValue = F("Röhrenhofer Str.");
break;
}
case 272173:
{
returnValue = F("Röhrenplatz");
break;
}
case 272174:
{
returnValue = F("Röhrenseer Weg");
break;
}
case 272175:
{
returnValue = F("Röhrensteig");
break;
}
case 272176:
{
returnValue = F("Röhrenstr.");
break;
}
case 272177:
{
returnValue = F("Röhrenweg");
break;
}
case 272178:
{
returnValue = F("Röhrenwiesen");
break;
}
case 272179:
{
returnValue = F("Röhrenöschle");
break;
}
case 272180:
{
returnValue = F("Röhrer Weg");
break;
}
case 272181:
{
returnValue = F("Röhrerloh");
break;
}
case 272182:
{
returnValue = F("Röhrgasse");
break;
}
case 272183:
{
returnValue = F("Röhrheide");
break;
}
case 272184:
{
returnValue = F("Röhrholz");
break;
}
case 272185:
{
returnValue = F("Röhrichleiten");
break;
}
case 272186:
{
returnValue = F("Röhrichstr.");
break;
}
case 272187:
{
returnValue = F("Röhrichtweg");
break;
}
case 272188:
{
returnValue = F("Röhrig");
break;
}
case 272189:
{
returnValue = F("Röhrigasse");
break;
}
case 272190:
{
returnValue = F("Röhrigs");
break;
}
case 272191:
{
returnValue = F("Röhrigshof");
break;
}
case 272192:
{
returnValue = F("Röhrigshofer Weg");
break;
}
case 272193:
{
returnValue = F("Röhrigshofstr.");
break;
}
case 272194:
{
returnValue = F("Röhrigstr.");
break;
}
case 272195:
{
returnValue = F("Röhrigtweg");
break;
}
case 272196:
{
returnValue = F("Röhrigweg");
break;
}
case 272197:
{
returnValue = F("Röhringstr.");
break;
}
case 272198:
{
returnValue = F("Röhrischhof");
break;
}
case 272199:
{
returnValue = F("Röhrkamp");
break;
}
case 272200:
{
returnValue = F("Röhrkastener Str.");
break;
}
case 272201:
{
returnValue = F("Röhrkenweg");
break;
}
case 272202:
{
returnValue = F("Röhrkesweg");
break;
}
case 272203:
{
returnValue = F("Röhrl-Bräu-Str.");
break;
}
case 272204:
{
returnValue = F("Röhrlberg");
break;
}
case 272205:
{
returnValue = F("Röhrlbergweg");
break;
}
case 272206:
{
returnValue = F("Röhrlbrunn");
break;
}
case 272207:
{
returnValue = F("Röhrleitenweg");
break;
}
case 272208:
{
returnValue = F("Röhrlingweg");
break;
}
case 272209:
{
returnValue = F("Röhrlmoos Alm");
break;
}
case 272210:
{
returnValue = F("Röhrmooser Str.");
break;
}
case 272211:
{
returnValue = F("Röhrmooser Weg");
break;
}
case 272212:
{
returnValue = F("Röhrnbacher Str.");
break;
}
case 272213:
{
returnValue = F("Röhrndl");
break;
}
case 272214:
{
returnValue = F("Röhrnweg");
break;
}
case 272215:
{
returnValue = F("Röhrsberghaldeweg");
break;
}
case 272216:
{
returnValue = F("Röhrsbergweg");
break;
}
case 272217:
{
returnValue = F("Röhrscheidtstr.");
break;
}
case 272218:
{
returnValue = F("Röhrsdorfer Str.");
break;
}
case 272219:
{
returnValue = F("Röhrsdorfer Weg");
break;
}
case 272220:
{
returnValue = F("Röhrsen");
break;
}
case 272221:
{
returnValue = F("Röhrser Str.");
break;
}
case 272222:
{
returnValue = F("Röhrser Weg");
break;
}
case 272223:
{
returnValue = F("Röhrsgasse");
break;
}
case 272224:
{
returnValue = F("Röhrsteig");
break;
}
case 272225:
{
returnValue = F("Röhrstr.");
break;
}
case 272226:
{
returnValue = F("Röhrstrang");
break;
}
case 272227:
{
returnValue = F("Röhrsweg");
break;
}
case 272228:
{
returnValue = F("Röhrwanger Str.");
break;
}
case 272229:
{
returnValue = F("Röhrwanger Weg");
break;
}
case 272230:
{
returnValue = F("Röhrwangstr.");
break;
}
case 272231:
{
returnValue = F("Röhrweg");
break;
}
case 272232:
{
returnValue = F("Röhrweidenweg");
break;
}
case 272233:
{
returnValue = F("Röhräcker");
break;
}
case 272234:
{
returnValue = F("Röinghstr.");
break;
}
case 272235:
{
returnValue = F("Rökenstr.");
break;
}
case 272236:
{
returnValue = F("Rökenwinkelweg");
break;
}
case 272237:
{
returnValue = F("Rökestr.");
break;
}
case 272238:
{
returnValue = F("Rölefeld");
break;
}
case 272239:
{
returnValue = F("Rölefelder Str.");
break;
}
case 272240:
{
returnValue = F("Rölkenstr.");
break;
}
case 272241:
{
returnValue = F("Röllbacher Str.");
break;
}
case 272242:
{
returnValue = F("Röllbacher Weg");
break;
}
case 272243:
{
returnValue = F("Röllberger Str.");
break;
}
case 272244:
{
returnValue = F("Röllbergstr.");
break;
}
case 272245:
{
returnValue = F("Röllergasse");
break;
}
case 272246:
{
returnValue = F("Röllerstr.");
break;
}
case 272247:
{
returnValue = F("Röllfelder Str.");
break;
}
case 272248:
{
returnValue = F("Röllgasse");
break;
}
case 272249:
{
returnValue = F("Röllgaßgarten");
break;
}
case 272250:
{
returnValue = F("Röllinghausen");
break;
}
case 272251:
{
returnValue = F("Röllinghauser Str.");
break;
}
case 272252:
{
returnValue = F("Röllingheider Str.");
break;
}
case 272253:
{
returnValue = F("Röllinghäuser Str.");
break;
}
case 272254:
{
returnValue = F("Röllingser Weg");
break;
}
case 272255:
{
returnValue = F("Röllingshainer Dorfstr.");
break;
}
case 272256:
{
returnValue = F("Röllingshainer Str.");
break;
}
case 272257:
{
returnValue = F("Röllingshainer Weg");
break;
}
case 272258:
{
returnValue = F("Röllschied");
break;
}
case 272259:
{
returnValue = F("Röllshäuser Str.");
break;
}
case 272260:
{
returnValue = F("Röllweg");
break;
}
case 272261:
{
returnValue = F("Rölscheid");
break;
}
case 272262:
{
returnValue = F("Rölscheider Berg");
break;
}
case 272263:
{
returnValue = F("Rölscheider Str.");
break;
}
case 272264:
{
returnValue = F("Rölsdorfer Str.");
break;
}
case 272265:
{
returnValue = F("Rölsstr.");
break;
}
case 272266:
{
returnValue = F("Rölvede");
break;
}
case 272267:
{
returnValue = F("Rölvedermühle");
break;
}
case 272268:
{
returnValue = F("Röm. Kaiserweg");
break;
}
case 272269:
{
returnValue = F("Römanns Kamp");
break;
}
case 272270:
{
returnValue = F("Römbrink");
break;
}
case 272271:
{
returnValue = F("Römeberg");
break;
}
case 272272:
{
returnValue = F("Römer");
break;
}
case 272273:
{
returnValue = F("Römer Str.");
break;
}
case 272274:
{
returnValue = F("Römer Strasse");
break;
}
case 272275:
{
returnValue = F("Römer-Str.");
break;
}
case 272276:
{
returnValue = F("Römer-Weg");
break;
}
case 272277:
{
returnValue = F("Römerallee");
break;
}
case 272278:
{
returnValue = F("Römerau");
break;
}
case 272279:
{
returnValue = F("Römeraue");
break;
}
case 272280:
{
returnValue = F("Römerauterrasse");
break;
}
case 272281:
{
returnValue = F("Römerbad");
break;
}
case 272282:
{
returnValue = F("Römerbadstr.");
break;
}
case 272283:
{
returnValue = F("Römerbadweg");
break;
}
case 272284:
{
returnValue = F("Römerberg");
break;
}
case 272285:
{
returnValue = F("Römerbergblick");
break;
}
case 272286:
{
returnValue = F("Römerbergstr.");
break;
}
case 272287:
{
returnValue = F("Römerbergweg");
break;
}
case 272288:
{
returnValue = F("Römerblick");
break;
}
case 272289:
{
returnValue = F("Römerbogen");
break;
}
case 272290:
{
returnValue = F("Römerborn");
break;
}
case 272291:
{
returnValue = F("Römerbruchstr.");
break;
}
case 272292:
{
returnValue = F("Römerbrunnen");
break;
}
case 272293:
{
returnValue = F("Römerbrunnenweg");
break;
}
case 272294:
{
returnValue = F("Römerbrücke");
break;
}
case 272295:
{
returnValue = F("Römerbrückenweg");
break;
}
case 272296:
{
returnValue = F("Römerdenkmal");
break;
}
case 272297:
{
returnValue = F("Römerdorf");
break;
}
case 272298:
{
returnValue = F("Römereck");
break;
}
case 272299:
{
returnValue = F("Römereigasse");
break;
}
case 272300:
{
returnValue = F("Römereschstr.");
break;
}
case 272301:
{
returnValue = F("Römerfeld");
break;
}
case 272302:
{
returnValue = F("Römerfeldstr.");
break;
}
case 272303:
{
returnValue = F("Römergarten");
break;
}
case 272304:
{
returnValue = F("Römergartenstr.");
break;
}
case 272305:
{
returnValue = F("Römergasse");
break;
}
case 272306:
{
returnValue = F("Römergraben");
break;
}
case 272307:
{
returnValue = F("Römergrabenweg");
break;
}
case 272308:
{
returnValue = F("Römergrabweg");
break;
}
case 272309:
{
returnValue = F("Römergrund");
break;
}
case 272310:
{
returnValue = F("Römergäßle");
break;
}
case 272311:
{
returnValue = F("Römerhalde");
break;
}
case 272312:
{
returnValue = F("Römerhang");
break;
}
case 272313:
{
returnValue = F("Römerhangweg");
break;
}
case 272314:
{
returnValue = F("Römerhof");
break;
}
case 272315:
{
returnValue = F("Römerhofallee");
break;
}
case 272316:
{
returnValue = F("Römerhofstr.");
break;
}
case 272317:
{
returnValue = F("Römerhofweg");
break;
}
case 272318:
{
returnValue = F("Römerhöfe");
break;
}
case 272319:
{
returnValue = F("Römerhügel");
break;
}
case 272320:
{
returnValue = F("Römerhügelweg");
break;
}
case 272321:
{
returnValue = F("Römerkanal");
break;
}
case 272322:
{
returnValue = F("Römerkastell");
break;
}
case 272323:
{
returnValue = F("Römerkastellstr.");
break;
}
case 272324:
{
returnValue = F("Römerkellerstr.");
break;
}
case 272325:
{
returnValue = F("Römerkesselstr.");
break;
}
case 272326:
{
returnValue = F("Römerkreis");
break;
}
case 272327:
{
returnValue = F("Römerkreisel");
break;
}
case 272328:
{
returnValue = F("Römerloch");
break;
}
case 272329:
{
returnValue = F("Römermauer");
break;
}
case 272330:
{
returnValue = F("Römerpark");
break;
}
case 272331:
{
returnValue = F("Römerpark Köngen");
break;
}
case 272332:
{
returnValue = F("Römerpassage");
break;
}
case 272333:
{
returnValue = F("Römerpfad");
break;
}
case 272334:
{
returnValue = F("Römerpforte");
break;
}
case 272335:
{
returnValue = F("Römerplatz");
break;
}
case 272336:
{
returnValue = F("Römerrast");
break;
}
case 272337:
{
returnValue = F("Römerreuth");
break;
}
case 272338:
{
returnValue = F("Römerreuthstr.");
break;
}
case 272339:
{
returnValue = F("Römerring");
break;
}
case 272340:
{
returnValue = F("Römersberg");
break;
}
case 272341:
{
returnValue = F("Römersberger Str.");
break;
}
case 272342:
{
returnValue = F("Römersbergweg");
break;
}
case 272343:
{
returnValue = F("Römersbühler Str.");
break;
}
case 272344:
{
returnValue = F("Römersbühlstr.");
break;
}
case 272345:
{
returnValue = F("Römerschanze");
break;
}
case 272346:
{
returnValue = F("Römerschanzenstr.");
break;
}
case 272347:
{
returnValue = F("Römerschanzsiedlung");
break;
}
case 272348:
{
returnValue = F("Römerschanzweg");
break;
}
case 272349:
{
returnValue = F("Römersee-Str.");
break;
}
case 272350:
{
returnValue = F("Römerseifen");
break;
}
case 272351:
{
returnValue = F("Römershagener Str.");
break;
}
case 272352:
{
returnValue = F("Römershager Str.");
break;
}
case 272353:
{
returnValue = F("Römershäuser Str.");
break;
}
case 272354:
{
returnValue = F("Römersmattweg");
break;
}
case 272355:
{
returnValue = F("Römerstaße");
break;
}
case 272356:
{
returnValue = F("Römersteg");
break;
}
case 272357:
{
returnValue = F("Römersteig");
break;
}
case 272358:
{
returnValue = F("Römersteige");
break;
}
case 272359:
{
returnValue = F("Römersteiner Weg");
break;
}
case 272360:
{
returnValue = F("Römersteinstr.");
break;
}
case 272361:
{
returnValue = F("Römersteinweg");
break;
}
case 272362:
{
returnValue = F("Römerstieg");
break;
}
case 272363:
{
returnValue = F("Römerstiege");
break;
}
case 272364:
{
returnValue = F("Römerstr.");
break;
}
case 272365:
{
returnValue = F("Römerstr. (Irnicher Graben)");
break;
}
case 272366:
{
returnValue = F("Römerstr. (Via Rhenana)");
break;
}
case 272367:
{
returnValue = F("Römerstr. („Via Rhenana”)");
break;
}
case 272368:
{
returnValue = F("Römersträßchen");
break;
}
case 272369:
{
returnValue = F("Römersträßel");
break;
}
case 272370:
{
returnValue = F("Römersträßle");
break;
}
case 272371:
{
returnValue = F("Römersweg");
break;
}
case 272372:
{
returnValue = F("Römertalhof");
break;
}
case 272373:
{
returnValue = F("Römertalstr.");
break;
}
case 272374:
{
returnValue = F("Römertshofener Str.");
break;
}
case 272375:
{
returnValue = F("Römerturmstr.");
break;
}
case 272376:
{
returnValue = F("Römerwall");
break;
}
case 272377:
{
returnValue = F("Römerweg");
break;
}
case 272378:
{
returnValue = F("Römerweg-Nord");
break;
}
case 272379:
{
returnValue = F("Römerweg-Süd");
break;
}
case 272380:
{
returnValue = F("Römerwegle");
break;
}
case 272381:
{
returnValue = F("Römerwiesenweg");
break;
}
case 272382:
{
returnValue = F("Römerzeitlicher Ziergarten in Bedaium");
break;
}
case 272383:
{
returnValue = F("Römeräcker");
break;
}
case 272384:
{
returnValue = F("Römheldstr.");
break;
}
case 272385:
{
returnValue = F("Römheldweg");
break;
}
case 272386:
{
returnValue = F("Römhilder Froschgasse");
break;
}
case 272387:
{
returnValue = F("Römhilder Steinweg");
break;
}
case 272388:
{
returnValue = F("Römhilder Str.");
break;
}
case 272389:
{
returnValue = F("Römhilder Weg");
break;
}
case 272390:
{
returnValue = F("Römhildgasse");
break;
}
case 272391:
{
returnValue = F("Römische Klinge");
break;
}
case 272392:
{
returnValue = F("Römische Wasserleitung");
break;
}
case 272393:
{
returnValue = F("Römischer Weg");
break;
}
case 272394:
{
returnValue = F("Römkes Ort");
break;
}
case 272395:
{
returnValue = F("Römlinghovener Str.");
break;
}
case 272396:
{
returnValue = F("Römlingstr.");
break;
}
case 272397:
{
returnValue = F("Römlinsdorfer Str.");
break;
}
case 272398:
{
returnValue = F("Römmelesweg");
break;
}
case 272399:
{
returnValue = F("Römmelgasse");
break;
}
case 272400:
{
returnValue = F("Römmeltstr.");
break;
}
case 272401:
{
returnValue = F("Römmler Wiese");
break;
}
case 272402:
{
returnValue = F("Römsmoorweg");
break;
}
case 272403:
{
returnValue = F("Römstedter Str.");
break;
}
case 272404:
{
returnValue = F("Rönacker");
break;
}
case 272405:
{
returnValue = F("Röndahler Weg");
break;
}
case 272406:
{
returnValue = F("Rönekamp");
break;
}
case 272407:
{
returnValue = F("Rönhagenweg");
break;
}
case 272408:
{
returnValue = F("Rönkendorfer Mühle");
break;
}
case 272409:
{
returnValue = F("Rönkendorfer Str.");
break;
}
case 272410:
{
returnValue = F("Rönkenhofer Weg");
break;
}
case 272411:
{
returnValue = F("Rönkhauser Str.");
break;
}
case 272412:
{
returnValue = F("Rönkoppel");
break;
}
case 272413:
{
returnValue = F("Rönkweg");
break;
}
case 272414:
{
returnValue = F("Rönnauer Weg");
break;
}
case 272415:
{
returnValue = F("Rönnbaum");
break;
}
case 272416:
{
returnValue = F("Rönnbom");
break;
}
case 272417:
{
returnValue = F("Rönnboom");
break;
}
case 272418:
{
returnValue = F("Rönnebecker Str.");
break;
}
case 272419:
{
returnValue = F("Rönnebecker Weg");
break;
}
case 272420:
{
returnValue = F("Rönnebergstr.");
break;
}
case 272421:
{
returnValue = F("Rönneburger Str.");
break;
}
case 272422:
{
returnValue = F("Rönnebyweg");
break;
}
case 272423:
{
returnValue = F("Rönneckeroth");
break;
}
case 272424:
{
returnValue = F("Rönnefelder Str.");
break;
}
case 272425:
{
returnValue = F("Rönnekenstr.");
break;
}
case 272426:
{
returnValue = F("Rönnekers Hof");
break;
}
case 272427:
{
returnValue = F("Rönnekers Törn");
break;
}
case 272428:
{
returnValue = F("Rönnekers Weg");
break;
}
case 272429:
{
returnValue = F("Rönnekers Wiese");
break;
}
case 272430:
{
returnValue = F("Rönnelstr.");
break;
}
case 272431:
{
returnValue = F("Rönnenthal");
break;
}
case 272432:
{
returnValue = F("Rönner Str.");
break;
}
case 272433:
{
returnValue = F("Rönner Weg");
break;
}
case 272434:
{
returnValue = F("Rönneter");
break;
}
case 272435:
{
returnValue = F("Rönneterberg");
break;
}
case 272436:
{
returnValue = F("Rönneweg");
break;
}
case 272437:
{
returnValue = F("Rönneykoppel");
break;
}
case 272438:
{
returnValue = F("Rönnjeasje");
break;
}
case 272439:
{
returnValue = F("Rönnstr.");
break;
}
case 272440:
{
returnValue = F("Rönnweg");
break;
}
case 272441:
{
returnValue = F("Rönsahler Str.");
break;
}
case 272442:
{
returnValue = F("Rönsahler Weg");
break;
}
case 272443:
{
returnValue = F("Rönshausener Str.");
break;
}
case 272444:
{
returnValue = F("Röntgengang");
break;
}
case 272445:
{
returnValue = F("Röntgenplatz");
break;
}
case 272446:
{
returnValue = F("Röntgenring");
break;
}
case 272447:
{
returnValue = F("Röntgenstr.");
break;
}
case 272448:
{
returnValue = F("Röntgenweg");
break;
}
case 272449:
{
returnValue = F("Röntorf");
break;
}
case 272450:
{
returnValue = F("Röntorfer Str.");
break;
}
case 272451:
{
returnValue = F("Röntschweg");
break;
}
case 272452:
{
returnValue = F("Röpckes Mühle");
break;
}
case 272453:
{
returnValue = F("Röpenack");
break;
}
case 272454:
{
returnValue = F("Röpenkampsweg");
break;
}
case 272455:
{
returnValue = F("Röpers Heide");
break;
}
case 272456:
{
returnValue = F("Röpersberg");
break;
}
case 272457:
{
returnValue = F("Röpersdorfer Str.");
break;
}
case 272458:
{
returnValue = F("Röpershaar");
break;
}
case 272459:
{
returnValue = F("Röpersweg");
break;
}
case 272460:
{
returnValue = F("Röperweg");
break;
}
case 272461:
{
returnValue = F("Röpkens Feld");
break;
}
case 272462:
{
returnValue = F("Röpkesweg");
break;
}
case 272463:
{
returnValue = F("Röppisch");
break;
}
case 272464:
{
returnValue = F("Röppischer Höhe");
break;
}
case 272465:
{
returnValue = F("Rörerstr.");
break;
}
case 272466:
{
returnValue = F("Röricht");
break;
}
case 272467:
{
returnValue = F("Rörigstr.");
break;
}
case 272468:
{
returnValue = F("Röringhoff");
break;
}
case 272469:
{
returnValue = F("Rörschwaldstr.");
break;
}
case 272470:
{
returnValue = F("Rörshainer Weg");
break;
}
case 272471:
{
returnValue = F("Rös");
break;
}
case 272472:
{
returnValue = F("Rösaer Weg");
break;
}
case 272473:
{
returnValue = F("Rösberger Str.");
break;
}
case 272474:
{
returnValue = F("Rösberger Weg");
break;
}
case 272475:
{
returnValue = F("Rösch-Brücke");
break;
}
case 272476:
{
returnValue = F("Röschbachstr.");
break;
}
case 272477:
{
returnValue = F("Röschberg");
break;
}
case 272478:
{
returnValue = F("Röschbergweg");
break;
}
case 272479:
{
returnValue = F("Röschbühlweg");
break;
}
case 272480:
{
returnValue = F("Röschen");
break;
}
case 272481:
{
returnValue = F("Röschen-Görgen-Str.");
break;
}
case 272482:
{
returnValue = F("Röschenauer Allee");
break;
}
case 272483:
{
returnValue = F("Röschengarten");
break;
}
case 272484:
{
returnValue = F("Röschenhöhe");
break;
}
case 272485:
{
returnValue = F("Röschenweg");
break;
}
case 272486:
{
returnValue = F("Röschgasse");
break;
}
case 272487:
{
returnValue = F("Röschhofgasse");
break;
}
case 272488:
{
returnValue = F("Röschkamp");
break;
}
case 272489:
{
returnValue = F("Röschkampsweg");
break;
}
case 272490:
{
returnValue = F("Röschlaubstr.");
break;
}
case 272491:
{
returnValue = F("Röschleweg");
break;
}
case 272492:
{
returnValue = F("Röschmühlweg");
break;
}
case 272493:
{
returnValue = F("Röschstr.");
break;
}
case 272494:
{
returnValue = F("Röschweg");
break;
}
case 272495:
{
returnValue = F("Röse");
break;
}
case 272496:
{
returnValue = F("Rösebach");
break;
}
case 272497:
{
returnValue = F("Rösecke");
break;
}
case 272498:
{
returnValue = F("Röseckenbrink");
break;
}
case 272499:
{
returnValue = F("Rösenaustr.");
break;
}
case 272500:
{
returnValue = F("Rösenbecker Str.");
break;
}
case 272501:
{
returnValue = F("Rösenenweg");
break;
}
case 272502:
{
returnValue = F("Rösener Str.");
break;
}
case 272503:
{
returnValue = F("Rösenerstr.");
break;
}
case 272504:
{
returnValue = F("Rösenplatz");
break;
}
case 272505:
{
returnValue = F("Rösenstr.");
break;
}
case 272506:
{
returnValue = F("Rösensweg");
break;
}
case 272507:
{
returnValue = F("Rösentor");
break;
}
case 272508:
{
returnValue = F("Rösenweg");
break;
}
case 272509:
{
returnValue = F("Röser Str.");
break;
}
case 272510:
{
returnValue = F("Röserheide");
break;
}
case 272511:
{
returnValue = F("Rösersweg");
break;
}
case 272512:
{
returnValue = F("Rösestr.");
break;
}
case 272513:
{
returnValue = F("Rösetal - Weg");
break;
}
case 272514:
{
returnValue = F("Röseweg");
break;
}
case 272515:
{
returnValue = F("Rösgasse");
break;
}
case 272516:
{
returnValue = F("Rösickestr.");
break;
}
case 272517:
{
returnValue = F("Rösingstr.");
break;
}
case 272518:
{
returnValue = F("Röskenweg");
break;
}
case 272519:
{
returnValue = F("Röslauer Weg");
break;
}
case 272520:
{
returnValue = F("Röslaustr.");
break;
}
case 272521:
{
returnValue = F("Rösleinsbergstr.");
break;
}
case 272522:
{
returnValue = F("Rösleinsweg");
break;
}
case 272523:
{
returnValue = F("Röslergasse");
break;
}
case 272524:
{
returnValue = F("Röslerstr.");
break;
}
case 272525:
{
returnValue = F("Röslerweg");
break;
}
case 272526:
{
returnValue = F("Röslestr.");
break;
}
case 272527:
{
returnValue = F("Röslingstr.");
break;
}
case 272528:
{
returnValue = F("Röslstr.");
break;
}
case 272529:
{
returnValue = F("Rösnerstr.");
break;
}
case 272530:
{
returnValue = F("Röspenweg");
break;
}
case 272531:
{
returnValue = F("Rösrather Str.");
break;
}
case 272532:
{
returnValue = F("Rösse");
break;
}
case 272533:
{
returnValue = F("Rösselburgstr.");
break;
}
case 272534:
{
returnValue = F("Rösselgasse");
break;
}
case 272535:
{
returnValue = F("Rösselsbrünnlestr.");
break;
}
case 272536:
{
returnValue = F("Rösselsprung");
break;
}
case 272537:
{
returnValue = F("Rösselsteig");
break;
}
case 272538:
{
returnValue = F("Rösselstr.");
break;
}
case 272539:
{
returnValue = F("Rösselweg");
break;
}
case 272540:
{
returnValue = F("Rössen");
break;
}
case 272541:
{
returnValue = F("Rössener Grund");
break;
}
case 272542:
{
returnValue = F("Rössener Ring");
break;
}
case 272543:
{
returnValue = F("Rössenerweg");
break;
}
case 272544:
{
returnValue = F("Rössengraben");
break;
}
case 272545:
{
returnValue = F("Rössewiese");
break;
}
case 272546:
{
returnValue = F("Rössingstr.");
break;
}
case 272547:
{
returnValue = F("Rössle Wies");
break;
}
case 272548:
{
returnValue = F("Rössle-Ring");
break;
}
case 272549:
{
returnValue = F("Rösslegasse");
break;
}
case 272550:
{
returnValue = F("Rössleinsweg");
break;
}
case 272551:
{
returnValue = F("Rösslematt");
break;
}
case 272552:
{
returnValue = F("Rössleplatz");
break;
}
case 272553:
{
returnValue = F("Rösslerdamm");
break;
}
case 272554:
{
returnValue = F("Rösslerstr.");
break;
}
case 272555:
{
returnValue = F("Rösslesgasse");
break;
}
case 272556:
{
returnValue = F("Rösslesmühlestr.");
break;
}
case 272557:
{
returnValue = F("Rösslespfad");
break;
}
case 272558:
{
returnValue = F("Rösslesweg");
break;
}
case 272559:
{
returnValue = F("Rössleweg");
break;
}
case 272560:
{
returnValue = F("Rösslewiese");
break;
}
case 272561:
{
returnValue = F("Rösslwirtsgasse");
break;
}
case 272562:
{
returnValue = F("Rössra");
break;
}
case 272563:
{
returnValue = F("Rössweg");
break;
}
case 272564:
{
returnValue = F("Röstal");
break;
}
case 272565:
{
returnValue = F("Röstelstr.");
break;
}
case 272566:
{
returnValue = F("Röstendaalstr.");
break;
}
case 272567:
{
returnValue = F("Röstensteig");
break;
}
case 272568:
{
returnValue = F("Röstenweg");
break;
}
case 272569:
{
returnValue = F("Rösterföhr");
break;
}
case 272570:
{
returnValue = F("Röstergraben");
break;
}
case 272571:
{
returnValue = F("Rösterweg");
break;
}
case 272572:
{
returnValue = F("Rösthusen");
break;
}
case 272573:
{
returnValue = F("Röstweg");
break;
}
case 272574:
{
returnValue = F("Rösweg");
break;
}
case 272575:
{
returnValue = F("Röswiesen");
break;
}
case 272576:
{
returnValue = F("Rötbachstr.");
break;
}
case 272577:
{
returnValue = F("Rötberg");
break;
}
case 272578:
{
returnValue = F("Rötbergrain");
break;
}
case 272579:
{
returnValue = F("Rötbergtreppe");
break;
}
case 272580:
{
returnValue = F("Röte");
break;
}
case 272581:
{
returnValue = F("Röteberg");
break;
}
case 272582:
{
returnValue = F("Röteberghöfe");
break;
}
case 272583:
{
returnValue = F("Rötebrunnen");
break;
}
case 272584:
{
returnValue = F("Rötekamp");
break;
}
case 272585:
{
returnValue = F("Rötekuhle");
break;
}
case 272586:
{
returnValue = F("Rötelbachgasse");
break;
}
case 272587:
{
returnValue = F("Rötelbachstr.");
break;
}
case 272588:
{
returnValue = F("Rötelbachweg");
break;
}
case 272589:
{
returnValue = F("Rötelbergstr.");
break;
}
case 272590:
{
returnValue = F("Rötelbergweg");
break;
}
case 272591:
{
returnValue = F("Rötelfeld");
break;
}
case 272592:
{
returnValue = F("Rötelkaul");
break;
}
case 272593:
{
returnValue = F("Rötelkreisel Nord");
break;
}
case 272594:
{
returnValue = F("Rötelmannstr.");
break;
}
case 272595:
{
returnValue = F("Rötelnweg");
break;
}
case 272596:
{
returnValue = F("Rötelquerspange");
break;
}
case 272597:
{
returnValue = F("Rötelsberg");
break;
}
case 272598:
{
returnValue = F("Rötelschwalbenweg");
break;
}
case 272599:
{
returnValue = F("Rötelssiepen");
break;
}
case 272600:
{
returnValue = F("Rötelstein Weg");
break;
}
case 272601:
{
returnValue = F("Rötelsteinweg");
break;
}
case 272602:
{
returnValue = F("Rötelstr.");
break;
}
case 272603:
{
returnValue = F("Rötelweg");
break;
}
case 272604:
{
returnValue = F("Röteläckerring");
break;
}
case 272605:
{
returnValue = F("Röten");
break;
}
case 272606:
{
returnValue = F("Rötenbach");
break;
}
case 272607:
{
returnValue = F("Rötenbacher Str.");
break;
}
case 272608:
{
returnValue = F("Rötenbachstr.");
break;
}
case 272609:
{
returnValue = F("Rötenbachweg");
break;
}
case 272610:
{
returnValue = F("Rötenberg");
break;
}
case 272611:
{
returnValue = F("Rötenberger Str.");
break;
}
case 272612:
{
returnValue = F("Rötenbergstr.");
break;
}
case 272613:
{
returnValue = F("Rötenburgstr.");
break;
}
case 272614:
{
returnValue = F("Rötengasse");
break;
}
case 272615:
{
returnValue = F("Rötenhaldenhangkantenweg");
break;
}
case 272616:
{
returnValue = F("Rötenhaldenweg");
break;
}
case 272617:
{
returnValue = F("Rötenmühle");
break;
}
case 272618:
{
returnValue = F("Rötenmühleweg");
break;
}
case 272619:
{
returnValue = F("Rötensteinstr.");
break;
}
case 272620:
{
returnValue = F("Rötenstr.");
break;
}
case 272621:
{
returnValue = F("Rötenwaldweg");
break;
}
case 272622:
{
returnValue = F("Rötenweg");
break;
}
case 272623:
{
returnValue = F("Rötepark");
break;
}
case 272624:
{
returnValue = F("Rötepohlstr.");
break;
}
case 272625:
{
returnValue = F("Rötepool");
break;
}
case 272626:
{
returnValue = F("Röter Str.");
break;
}
case 272627:
{
returnValue = F("Röterberg");
break;
}
case 272628:
{
returnValue = F("Röternstr.");
break;
}
case 272629:
{
returnValue = F("Rötersteige");
break;
}
case 272630:
{
returnValue = F("Röterturmstr.");
break;
}
case 272631:
{
returnValue = F("Röteräcker");
break;
}
case 272632:
{
returnValue = F("Rötesteig");
break;
}
case 272633:
{
returnValue = F("Rötestr.");
break;
}
case 272634:
{
returnValue = F("Röteweg");
break;
}
case 272635:
{
returnValue = F("Rötfeldstr.");
break;
}
case 272636:
{
returnValue = F("Rötgenstr.");
break;
}
case 272637:
{
returnValue = F("Rötger-Hundt-Weg");
break;
}
case 272638:
{
returnValue = F("Rötgesbütteler Weg");
break;
}
case 272639:
{
returnValue = F("Röth");
break;
}
case 272640:
{
returnValue = F("Röth-Soll");
break;
}
case 272641:
{
returnValue = F("Röthaer Str.");
break;
}
case 272642:
{
returnValue = F("Röthanger");
break;
}
case 272643:
{
returnValue = F("Röthbrücke");
break;
}
case 272644:
{
returnValue = F("Röthe");
break;
}
case 272645:
{
returnValue = F("Röthebachstr.");
break;
}
case 272646:
{
returnValue = F("Röthekamp");
break;
}
case 272647:
{
returnValue = F("Röthekuhlenweg");
break;
}
case 272648:
{
returnValue = F("Röthelbach");
break;
}
case 272649:
{
returnValue = F("Röthelbachstr.");
break;
}
case 272650:
{
returnValue = F("Röthelbachweg");
break;
}
case 272651:
{
returnValue = F("Röthelbergstr.");
break;
}
case 272652:
{
returnValue = F("Röthelmoosweg");
break;
}
case 272653:
{
returnValue = F("Röthelsteinweg");
break;
}
case 272654:
{
returnValue = F("Röthelstr.");
break;
}
case 272655:
{
returnValue = F("Röthelteich");
break;
}
case 272656:
{
returnValue = F("Röthelweg");
break;
}
case 272657:
{
returnValue = F("Röthelwiesen");
break;
}
case 272658:
{
returnValue = F("Röthemoor");
break;
}
case 272659:
{
returnValue = F("Röthen");
break;
}
case 272660:
{
returnValue = F("Röthenbach");
break;
}
case 272661:
{
returnValue = F("Röthenbacher Str.");
break;
}
case 272662:
{
returnValue = F("Röthenbacher Weg");
break;
}
case 272663:
{
returnValue = F("Röthenbacherstr.");
break;
}
case 272664:
{
returnValue = F("Röthenbachstr.");
break;
}
case 272665:
{
returnValue = F("Röthenbachweg");
break;
}
case 272666:
{
returnValue = F("Röthenblick");
break;
}
case 272667:
{
returnValue = F("Röthenfeld");
break;
}
case 272668:
{
returnValue = F("Röthenfeldstr.");
break;
}
case 272669:
{
returnValue = F("Röthengasse");
break;
}
case 272670:
{
returnValue = F("Röthenhübelweg");
break;
}
case 272671:
{
returnValue = F("Röthenhügel");
break;
}
case 272672:
{
returnValue = F("Röthenitzer Weg");
break;
}
case 272673:
{
returnValue = F("Röthenkuhlen");
break;
}
case 272674:
{
returnValue = F("Röthenloch");
break;
}
case 272675:
{
returnValue = F("Röthenstr.");
break;
}
case 272676:
{
returnValue = F("Röthenweg");
break;
}
case 272677:
{
returnValue = F("Röthepfuhlweg");
break;
}
case 272678:
{
returnValue = F("Röther Gasse");
break;
}
case 272679:
{
returnValue = F("Röther Ring");
break;
}
case 272680:
{
returnValue = F("Röther Str.");
break;
}
case 272681:
{
returnValue = F("Röther Weg");
break;
}
case 272682:
{
returnValue = F("Röther Wingertstr.");
break;
}
case 272683:
{
returnValue = F("Rötherweg");
break;
}
case 272684:
{
returnValue = F("Röthestr.");
break;
}
case 272685:
{
returnValue = F("Rötheweg");
break;
}
case 272686:
{
returnValue = F("Röthgasse");
break;
}
case 272687:
{
returnValue = F("Röthgen");
break;
}
case 272688:
{
returnValue = F("Röthgener Str.");
break;
}
case 272689:
{
returnValue = F("Röthgener Weg");
break;
}
case 272690:
{
returnValue = F("Röthiger Weg");
break;
}
case 272691:
{
returnValue = F("Röthkampstr.");
break;
}
case 272692:
{
returnValue = F("Röthleiner Str.");
break;
}
case 272693:
{
returnValue = F("Röthleiner Weg");
break;
}
case 272694:
{
returnValue = F("Röthleinsberg");
break;
}
case 272695:
{
returnValue = F("Röthleinsweg");
break;
}
case 272696:
{
returnValue = F("Röthlinger Str.");
break;
}
case 272697:
{
returnValue = F("Röthmoor");
break;
}
case 272698:
{
returnValue = F("Röthseeweg");
break;
}
case 272699:
{
returnValue = F("Röthsoll");
break;
}
case 272700:
{
returnValue = F("Röthstr.");
break;
}
case 272701:
{
returnValue = F("Röthsweg");
break;
}
case 272702:
{
returnValue = F("Röthswiesen");
break;
}
case 272703:
{
returnValue = F("Röthweg");
break;
}
case 272704:
{
returnValue = F("Rötingstr.");
break;
}
case 272705:
{
returnValue = F("Rötkersiek");
break;
}
case 272706:
{
returnValue = F("Rötlehweg");
break;
}
case 272707:
{
returnValue = F("Rötlein");
break;
}
case 272708:
{
returnValue = F("Rötleiner Str.");
break;
}
case 272709:
{
returnValue = F("Rötlenstr.");
break;
}
case 272710:
{
returnValue = F("Rötlensweg");
break;
}
case 272711:
{
returnValue = F("Rötleshof");
break;
}
case 272712:
{
returnValue = F("Rötlinstr.");
break;
}
case 272713:
{
returnValue = F("Rötloh");
break;
}
case 272714:
{
returnValue = F("Rötlsteinstr.");
break;
}
case 272715:
{
returnValue = F("Rötpoint");
break;
}
case 272716:
{
returnValue = F("Rötsch");
break;
}
case 272717:
{
returnValue = F("Rötsol");
break;
}
case 272718:
{
returnValue = F("Rötsteige");
break;
}
case 272719:
{
returnValue = F("Rötstr.");
break;
}
case 272720:
{
returnValue = F("Röttbacher Str.");
break;
}
case 272721:
{
returnValue = F("Röttekenstr.");
break;
}
case 272722:
{
returnValue = F("Röttekuhlenweg");
break;
}
case 272723:
{
returnValue = F("Röttelbergweg");
break;
}
case 272724:
{
returnValue = F("Rötteln");
break;
}
case 272725:
{
returnValue = F("Röttelnblick");
break;
}
case 272726:
{
returnValue = F("Röttelnweg");
break;
}
case 272727:
{
returnValue = F("Röttelnweiler");
break;
}
case 272728:
{
returnValue = F("Röttenbacher Str.");
break;
}
case 272729:
{
returnValue = F("Röttenbacher Weg");
break;
}
case 272730:
{
returnValue = F("Röttenbacherstr.");
break;
}
case 272731:
{
returnValue = F("Röttenbachgrund");
break;
}
case 272732:
{
returnValue = F("Röttererbergstr.");
break;
}
case 272733:
{
returnValue = F("Röttersdorf");
break;
}
case 272734:
{
returnValue = F("Röttersdorfer Str.");
break;
}
case 272735:
{
returnValue = F("Rötterstr.");
break;
}
case 272736:
{
returnValue = F("Röttgen");
break;
}
case 272737:
{
returnValue = F("Röttgens Allee");
break;
}
case 272738:
{
returnValue = F("Röttgenstr.");
break;
}
case 272739:
{
returnValue = F("Röttgenweg");
break;
}
case 272740:
{
returnValue = F("Röttgerplatz");
break;
}
case 272741:
{
returnValue = F("Röttgersbank");
break;
}
case 272742:
{
returnValue = F("Röttgersbankstr.");
break;
}
case 272743:
{
returnValue = F("Röttgerstr.");
break;
}
case 272744:
{
returnValue = F("Röttgersweg");
break;
}
case 272745:
{
returnValue = F("Röttgerweg");
break;
}
case 272746:
{
returnValue = F("Röttges Hof");
break;
}
case 272747:
{
returnValue = F("Röttinger Bach");
break;
}
case 272748:
{
returnValue = F("Röttinger Str.");
break;
}
case 272749:
{
returnValue = F("Röttis");
break;
}
case 272750:
{
returnValue = F("Röttiser Str.");
break;
}
case 272751:
{
returnValue = F("Röttjeweg");
break;
}
case 272752:
{
returnValue = F("Röttler Ring");
break;
}
case 272753:
{
returnValue = F("Röttler Str.");
break;
}
case 272754:
{
returnValue = F("Röttler Weg");
break;
}
case 272755:
{
returnValue = F("Röttlerstr.");
break;
}
case 272756:
{
returnValue = F("Röttweg");
break;
}
case 272757:
{
returnValue = F("Rötweg");
break;
}
case 272758:
{
returnValue = F("Rötz");
break;
}
case 272759:
{
returnValue = F("Rötzenweg");
break;
}
case 272760:
{
returnValue = F("Rötzer Str.");
break;
}
case 272761:
{
returnValue = F("Rötzerweg");
break;
}
case 272762:
{
returnValue = F("Rötzestr.");
break;
}
case 272763:
{
returnValue = F("Rötzinghofen");
break;
}
case 272764:
{
returnValue = F("Rötzinghofener Str.");
break;
}
case 272765:
{
returnValue = F("Rötzsch");
break;
}
case 272766:
{
returnValue = F("Rötzscher Str.");
break;
}
case 272767:
{
returnValue = F("Rötzstr.");
break;
}
case 272768:
{
returnValue = F("Rötzumer Str.");
break;
}
case 272769:
{
returnValue = F("Rötzweg");
break;
}
case 272770:
{
returnValue = F("Rötäcker");
break;
}
case 272771:
{
returnValue = F("Rövekamp");
break;
}
case 272772:
{
returnValue = F("Rövekampstr.");
break;
}
case 272773:
{
returnValue = F("Rövenicher Str.");
break;
}
case 272774:
{
returnValue = F("Rövenklauerweg");
break;
}
case 272775:
{
returnValue = F("Rövershäger Chaussee");
break;
}
case 272776:
{
returnValue = F("Röverskamp");
break;
}
case 272777:
{
returnValue = F("Rövertannen");
break;
}
case 272778:
{
returnValue = F("Rövkamp");
break;
}
case 272779:
{
returnValue = F("Rövkampallee");
break;
}
case 272780:
{
returnValue = F("Rövstieg");
break;
}
case 272781:
{
returnValue = F("Rövtwiete");
break;
}
case 272782:
{
returnValue = F("Röwekamp");
break;
}
case 272783:
{
returnValue = F("Röwekamps Damm");
break;
}
case 272784:
{
returnValue = F("Röwenkamp");
break;
}
case 272785:
{
returnValue = F("Röwitzer Str.");
break;
}
case 272786:
{
returnValue = F("Röwitzer Weg");
break;
}
case 272787:
{
returnValue = F("Röxer Str.");
break;
}
case 272788:
{
returnValue = F("Röß-Str.");
break;
}
case 272789:
{
returnValue = F("Rößacker");
break;
}
case 272790:
{
returnValue = F("Rößbach");
break;
}
case 272791:
{
returnValue = F("Rößbergstr.");
break;
}
case 272792:
{
returnValue = F("Rößbühl");
break;
}
case 272793:
{
returnValue = F("Rößbühlstr.");
break;
}
case 272794:
{
returnValue = F("Rößchengrundstr.");
break;
}
case 272795:
{
returnValue = F("Röße");
break;
}
case 272796:
{
returnValue = F("Rößelweg");
break;
}
case 272797:
{
returnValue = F("Rößen");
break;
}
case 272798:
{
returnValue = F("Rößeweg");
break;
}
case 272799:
{
returnValue = F("Rößgener Str.");
break;
}
case 272800:
{
returnValue = F("Rößle");
break;
}
case 272801:
{
returnValue = F("Rößle-Weg");
break;
}
case 272802:
{
returnValue = F("Rößleberg");
break;
}
case 272803:
{
returnValue = F("Rößlebergallee");
break;
}
case 272804:
{
returnValue = F("Rößlegarten");
break;
}
case 272805:
{
returnValue = F("Rößlegasse");
break;
}
case 272806:
{
returnValue = F("Rößlehofweg");
break;
}
case 272807:
{
returnValue = F("Rößleinstr.");
break;
}
case 272808:
{
returnValue = F("Rößleplatz");
break;
}
case 272809:
{
returnValue = F("Rößlergassl");
break;
}
case 272810:
{
returnValue = F("Rößlermühlstr.");
break;
}
case 272811:
{
returnValue = F("Rößlers Mühle");
break;
}
case 272812:
{
returnValue = F("Rößlerstr.");
break;
}
case 272813:
{
returnValue = F("Rößlesweg");
break;
}
case 272814:
{
returnValue = F("Rößleweg");
break;
}
case 272815:
{
returnValue = F("Rößlinshardtweg");
break;
}
case 272816:
{
returnValue = F("Rößlinstr.");
break;
}
case 272817:
{
returnValue = F("Rößlstr.");
break;
}
case 272818:
{
returnValue = F("Rößlweg");
break;
}
case 272819:
{
returnValue = F("Rößnerweg");
break;
}
case 272820:
{
returnValue = F("Rößnitzer Str.");
break;
}
case 272821:
{
returnValue = F("Rößnitzweg");
break;
}
case 272822:
{
returnValue = F("Rößstr.");
break;
}
case 272823:
{
returnValue = F("Rößtal");
break;
}
case 272824:
{
returnValue = F("Rößweg");
break;
}
case 272825:
{
returnValue = F("Rømøvej");
break;
}
case 272826:
{
returnValue = F("Rübackerstr.");
break;
}
case 272827:
{
returnValue = F("Rübchen");
break;
}
case 272828:
{
returnValue = F("Rübchenstr.");
break;
}
case 272829:
{
returnValue = F("Rübekamp");
break;
}
case 272830:
{
returnValue = F("Rübekampen");
break;
}
case 272831:
{
returnValue = F("Rübekampstr.");
break;
}
case 272832:
{
returnValue = F("Rübekamptunnel");
break;
}
case 272833:
{
returnValue = F("Rübeland");
break;
}
case 272834:
{
returnValue = F("Rübelandsweg");
break;
}
case 272835:
{
returnValue = F("Rübelandweg");
break;
}
case 272836:
{
returnValue = F("Rübeländer Str.");
break;
}
case 272837:
{
returnValue = F("Rübeländer Weg");
break;
}
case 272838:
{
returnValue = F("Rüben-Schnellweg");
break;
}
case 272839:
{
returnValue = F("Rübenacher Str.");
break;
}
case 272840:
{
returnValue = F("Rübenackerweg");
break;
}
case 272841:
{
returnValue = F("Rübenauer Str.");
break;
}
case 272842:
{
returnValue = F("Rübenauer Waldstr.");
break;
}
case 272843:
{
returnValue = F("Rübenauer Weg");
break;
}
case 272844:
{
returnValue = F("Rübenauer Ziegengasse");
break;
}
case 272845:
{
returnValue = F("Rübenbaum");
break;
}
case 272846:
{
returnValue = F("Rübenberg");
break;
}
case 272847:
{
returnValue = F("Rübenbergweg");
break;
}
case 272848:
{
returnValue = F("Rübenbitze");
break;
}
case 272849:
{
returnValue = F("Rübendell");
break;
}
case 272850:
{
returnValue = F("Rübendellweg");
break;
}
case 272851:
{
returnValue = F("Rübener Str.");
break;
}
case 272852:
{
returnValue = F("Rübener Weg");
break;
}
case 272853:
{
returnValue = F("Rübenfeld");
break;
}
case 272854:
{
returnValue = F("Rübenfelder");
break;
}
case 272855:
{
returnValue = F("Rübengang");
break;
}
case 272856:
{
returnValue = F("Rübengarten");
break;
}
case 272857:
{
returnValue = F("Rübengasse");
break;
}
case 272858:
{
returnValue = F("Rübenhainsweg");
break;
}
case 272859:
{
returnValue = F("Rübenhardt");
break;
}
case 272860:
{
returnValue = F("Rübenhof");
break;
}
case 272861:
{
returnValue = F("Rübenhäulestr.");
break;
}
case 272862:
{
returnValue = F("Rübenkamp");
break;
}
case 272863:
{
returnValue = F("Rübenkampstwiete");
break;
}
case 272864:
{
returnValue = F("Rübenkampsweg");
break;
}
case 272865:
{
returnValue = F("Rübenkämpe");
break;
}
case 272866:
{
returnValue = F("Rübenmarkt");
break;
}
case 272867:
{
returnValue = F("Rübenrain");
break;
}
case 272868:
{
returnValue = F("Rübensaat");
break;
}
case 272869:
{
returnValue = F("Rübenschnellweg");
break;
}
case 272870:
{
returnValue = F("Rübenstein");
break;
}
case 272871:
{
returnValue = F("Rübenstock");
break;
}
case 272872:
{
returnValue = F("Rübenstr.");
break;
}
case 272873:
{
returnValue = F("Rübenstücken");
break;
}
case 272874:
{
returnValue = F("Rübental");
break;
}
case 272875:
{
returnValue = F("Rübenteich");
break;
}
case 272876:
{
returnValue = F("Rübenteilweg");
break;
}
case 272877:
{
returnValue = F("Rübentälesweg");
break;
}
case 272878:
{
returnValue = F("Rübenwaage");
break;
}
case 272879:
{
returnValue = F("Rübenweg");
break;
}
case 272880:
{
returnValue = F("Rübenäcker");
break;
}
case 272881:
{
returnValue = F("Rübenäckerweg");
break;
}
case 272882:
{
returnValue = F("Rüberer Str.");
break;
}
case 272883:
{
returnValue = F("Rüberer Weg");
break;
}
case 272884:
{
returnValue = F("Rübergerbrücke");
break;
}
case 272885:
{
returnValue = F("Rüberplatz");
break;
}
case 272886:
{
returnValue = F("Rübers Winkel");
break;
}
case 272887:
{
returnValue = F("Rübezahlgasse");
break;
}
case 272888:
{
returnValue = F("Rübezahlhof");
break;
}
case 272889:
{
returnValue = F("Rübezahlplatz");
break;
}
case 272890:
{
returnValue = F("Rübezahlstr.");
break;
}
case 272891:
{
returnValue = F("Rübezahlweg");
break;
}
case 272892:
{
returnValue = F("Rübgarten");
break;
}
case 272893:
{
returnValue = F("Rübgarten Allee");
break;
}
case 272894:
{
returnValue = F("Rübgartener Str.");
break;
}
case 272895:
{
returnValue = F("Rübgrund");
break;
}
case 272896:
{
returnValue = F("Rübhauhtraufweg");
break;
}
case 272897:
{
returnValue = F("Rübhausener Str.");
break;
}
case 272898:
{
returnValue = F("Rübhofstr.");
break;
}
case 272899:
{
returnValue = F("Rübholzweg");
break;
}
case 272900:
{
returnValue = F("Rübifeldweg");
break;
}
case 272901:
{
returnValue = F("Rübkamp");
break;
}
case 272902:
{
returnValue = F("Rübker Bruch");
break;
}
case 272903:
{
returnValue = F("Rübker Str.");
break;
}
case 272904:
{
returnValue = F("Rüblandener Str.");
break;
}
case 272905:
{
returnValue = F("Rübleinshof");
break;
}
case 272906:
{
returnValue = F("Rübleinshofstr.");
break;
}
case 272907:
{
returnValue = F("Rüblinger Str.");
break;
}
case 272908:
{
returnValue = F("Rüblinger Sträßle");
break;
}
case 272909:
{
returnValue = F("Rüblinghauser Drift");
break;
}
case 272910:
{
returnValue = F("Rüblinghauser Str.");
break;
}
case 272911:
{
returnValue = F("Rübländer");
break;
}
case 272912:
{
returnValue = F("Rübländerweg");
break;
}
case 272913:
{
returnValue = F("Rübreuteweg");
break;
}
case 272914:
{
returnValue = F("Rübsamenschneise");
break;
}
case 272915:
{
returnValue = F("Rübsener Weg");
break;
}
case 272916:
{
returnValue = F("Rübsteckstr.");
break;
}
case 272917:
{
returnValue = F("Rübstück");
break;
}
case 272918:
{
returnValue = F("Rübteil");
break;
}
case 272919:
{
returnValue = F("Rübteile");
break;
}
case 272920:
{
returnValue = F("Rübteilstr.");
break;
}
case 272921:
{
returnValue = F("Rübworth");
break;
}
case 272922:
{
returnValue = F("Rübäckerweg");
break;
}
case 272923:
{
returnValue = F("Rüchenbacher Str.");
break;
}
case 272924:
{
returnValue = F("Rückamp");
break;
}
case 272925:
{
returnValue = F("Rückarschweg");
break;
}
case 272926:
{
returnValue = F("Rückbergstr.");
break;
}
case 272927:
{
returnValue = F("Rückeberg Nord");
break;
}
case 272928:
{
returnValue = F("Rückegasse");
break;
}
case 272929:
{
returnValue = F("Rückegasse 2");
break;
}
case 272930:
{
returnValue = F("Rückegasse 3");
break;
}
case 272931:
{
returnValue = F("Rückelnstr.");
break;
}
case 272932:
{
returnValue = F("Rückelstr.");
break;
}
case 272933:
{
returnValue = F("Rückelsweg");
break;
}
case 272934:
{
returnValue = F("Rückenhain");
break;
}
case 272935:
{
returnValue = F("Rückenstadt");
break;
}
case 272936:
{
returnValue = F("Rückenweg");
break;
}
case 272937:
{
returnValue = F("Rücker Str.");
break;
}
case 272938:
{
returnValue = F("Rücker Weg");
break;
}
case 272939:
{
returnValue = F("Rückergasse");
break;
}
case 272940:
{
returnValue = F("Rückeroder Weg");
break;
}
case 272941:
{
returnValue = F("Rückerother Str.");
break;
}
case 272942:
{
returnValue = F("Rückersbacher Str.");
break;
}
case 272943:
{
returnValue = F("Rückersberg");
break;
}
case 272944:
{
returnValue = F("Rückersbergstr.");
break;
}
case 272945:
{
returnValue = F("Rückersboden");
break;
}
case 272946:
{
returnValue = F("Rückersdorf");
break;
}
case 272947:
{
returnValue = F("Rückersdorfer Str.");
break;
}
case 272948:
{
returnValue = F("Rückersdorfer Weg");
break;
}
case 272949:
{
returnValue = F("Rückerser Str.");
break;
}
case 272950:
{
returnValue = F("Rückersgasse");
break;
}
case 272951:
{
returnValue = F("Rückershagener Str.");
break;
}
case 272952:
{
returnValue = F("Rückershäuser Str.");
break;
}
case 272953:
{
returnValue = F("Rückershäuser Weg");
break;
}
case 272954:
{
returnValue = F("Rückersmühle");
break;
}
case 272955:
{
returnValue = F("Rückerspfad");
break;
}
case 272956:
{
returnValue = F("Rückersrieth");
break;
}
case 272957:
{
returnValue = F("Rückerstr.");
break;
}
case 272958:
{
returnValue = F("Rückerswind");
break;
}
case 272959:
{
returnValue = F("Rückerswinder Str.");
break;
}
case 272960:
{
returnValue = F("Rückerswinder Weg");
break;
}
case 272961:
{
returnValue = F("Rückert-Park");
break;
}
case 272962:
{
returnValue = F("Rückertallee");
break;
}
case 272963:
{
returnValue = F("Rückertgasse");
break;
}
case 272964:
{
returnValue = F("Rückertplatz");
break;
}
case 272965:
{
returnValue = F("Rückertsbichlweg");
break;
}
case 272966:
{
returnValue = F("Rückertstr.");
break;
}
case 272967:
{
returnValue = F("Rückertsweg");
break;
}
case 272968:
{
returnValue = F("Rückertweg");
break;
}
case 272969:
{
returnValue = F("Rückerweg");
break;
}
case 272970:
{
returnValue = F("Rückeweg");
break;
}
case 272971:
{
returnValue = F("Rückgasse");
break;
}
case 272972:
{
returnValue = F("Rückgegasse 1");
break;
}
case 272973:
{
returnValue = F("Rückgrabenweg");
break;
}
case 272974:
{
returnValue = F("Rückgässle");
break;
}
case 272975:
{
returnValue = F("Rückhaltebecken");
break;
}
case 272976:
{
returnValue = F("Rückhaltebecken Flönstal");
break;
}
case 272977:
{
returnValue = F("Rückhaltebecken Haintal");
break;
}
case 272978:
{
returnValue = F("Rückhaltebecken Seebach");
break;
}
case 272979:
{
returnValue = F("Rückhaltedamm");
break;
}
case 272980:
{
returnValue = F("Rückinger Str.");
break;
}
case 272981:
{
returnValue = F("Rückingsallee");
break;
}
case 272982:
{
returnValue = F("Rückingsanger");
break;
}
case 272983:
{
returnValue = F("Rückisch");
break;
}
case 272984:
{
returnValue = F("Rückleweg");
break;
}
case 272985:
{
returnValue = F("Rückmarsdorfer Str.");
break;
}
case 272986:
{
returnValue = F("Rückmühlenweg");
break;
}
case 272987:
{
returnValue = F("Rückschwaller Weg");
break;
}
case 272988:
{
returnValue = F("Rücksgasse");
break;
}
case 272989:
{
returnValue = F("Rückstr.");
break;
}
case 272990:
{
returnValue = F("Rücksweg");
break;
}
case 272991:
{
returnValue = F("Rückweg");
break;
}
case 272992:
{
returnValue = F("Rückweg im Unteren Holz");
break;
}
case 272993:
{
returnValue = F("Rückweilerstr.");
break;
}
case 272994:
{
returnValue = F("Rüddeler Str.");
break;
}
case 272995:
{
returnValue = F("Rüdderner Str.");
break;
}
case 272996:
{
returnValue = F("Rüddigerstr.");
break;
}
case 272997:
{
returnValue = F("Rüddingshäuser Str.");
break;
}
case 272998:
{
returnValue = F("Rüdelstr.");
break;
}
case 272999:
{
returnValue = F("Rüdelweg");
break;
}
case 273000:
{
returnValue = F("Rüdemichweg");
break;
}
case 273001:
{
returnValue = F("Rüdenauer Grenzweg");
break;
}
case 273002:
{
returnValue = F("Rüdenauer Str.");
break;
}
case 273003:
{
returnValue = F("Rüdenbergstr.");
break;
}
case 273004:
{
returnValue = F("Rüdenbergweg");
break;
}
case 273005:
{
returnValue = F("Rüdener Str.");
break;
}
case 273006:
{
returnValue = F("Rüdenhausener Str.");
break;
}
case 273007:
{
returnValue = F("Rüdenhauser Str.");
break;
}
case 273008:
{
returnValue = F("Rüdenholzweg");
break;
}
case 273009:
{
returnValue = F("Rüdenhäuser Str.");
break;
}
case 273010:
{
returnValue = F("Rüdenhäuserstr.");
break;
}
case 273011:
{
returnValue = F("Rüdenkuhle");
break;
}
case 273012:
{
returnValue = F("Rüdenschwinder Str.");
break;
}
case 273013:
{
returnValue = F("Rüdentaler Str.");
break;
}
case 273014:
{
returnValue = F("Rüdenwaldweg");
break;
}
case 273015:
{
returnValue = F("Rüdeort");
break;
}
case 273016:
{
returnValue = F("Rüder Dorfstr.");
break;
}
case 273017:
{
returnValue = F("Rüderkoppel");
break;
}
case 273018:
{
returnValue = F("Rüdern");
break;
}
case 273019:
{
returnValue = F("Rüderner Heideweg");
break;
}
case 273020:
{
returnValue = F("Rüderner Str.");
break;
}
case 273021:
{
returnValue = F("Rüdernstr.");
break;
}
case 273022:
{
returnValue = F("Rüdersdorfer Str.");
break;
}
case 273023:
{
returnValue = F("Rüdersdorfer Weg");
break;
}
case 273024:
{
returnValue = F("Rüdersdorfweg");
break;
}
case 273025:
{
returnValue = F("Rüdershäuser Str.");
break;
}
case 273026:
{
returnValue = F("Rüderstieg");
break;
}
case 273027:
{
returnValue = F("Rüderstr.");
break;
}
case 273028:
{
returnValue = F("Rüderweg");
break;
}
case 273029:
{
returnValue = F("Rüdesheimer Ring");
break;
}
case 273030:
{
returnValue = F("Rüdesheimer Str.");
break;
}
case 273031:
{
returnValue = F("Rüdesheimer Torwall");
break;
}
case 273032:
{
returnValue = F("Rüdesheimer Weg");
break;
}
case 273033:
{
returnValue = F("Rüdestr.");
break;
}
case 273034:
{
returnValue = F("Rüdiger-, Langweg");
break;
}
case 273035:
{
returnValue = F("Rüdiger-Best-Weg");
break;
}
case 273036:
{
returnValue = F("Rüdigerplatz");
break;
}
case 273037:
{
returnValue = F("Rüdigerstr.");
break;
}
case 273038:
{
returnValue = F("Rüdigerweg");
break;
}
case 273039:
{
returnValue = F("Rüdigheimer Str.");
break;
}
case 273040:
{
returnValue = F("Rüdigheimer Weg");
break;
}
case 273041:
{
returnValue = F("Rüdigsdorf");
break;
}
case 273042:
{
returnValue = F("Rüdigsdorfer Str.");
break;
}
case 273043:
{
returnValue = F("Rüdigsdorfer Weg");
break;
}
case 273044:
{
returnValue = F("Rüdingsdorfer Lindenstr.");
break;
}
case 273045:
{
returnValue = F("Rüdlinger Str.");
break;
}
case 273046:
{
returnValue = F("Rüdnitzer Chaussee");
break;
}
case 273047:
{
returnValue = F("Rüdnitzer Str.");
break;
}
case 273048:
{
returnValue = F("Rüdow");
break;
}
case 273049:
{
returnValue = F("Rüdtischäckerweg");
break;
}
case 273050:
{
returnValue = F("Rüenberger Str.");
break;
}
case 273051:
{
returnValue = F("Rüendanz");
break;
}
case 273052:
{
returnValue = F("Rüenschlüppe");
break;
}
case 273053:
{
returnValue = F("Rüfferstr.");
break;
}
case 273054:
{
returnValue = F("Rügelsberg");
break;
}
case 273055:
{
returnValue = F("Rügen Radio");
break;
}
case 273056:
{
returnValue = F("Rügenbergstr.");
break;
}
case 273057:
{
returnValue = F("Rügenblick");
break;
}
case 273058:
{
returnValue = F("Rügenbogen");
break;
}
case 273059:
{
returnValue = F("Rügendamm");
break;
}
case 273060:
{
returnValue = F("Rügener Park");
break;
}
case 273061:
{
returnValue = F("Rügener Ring");
break;
}
case 273062:
{
returnValue = F("Rügener Str.");
break;
}
case 273063:
{
returnValue = F("Rügener Weg");
break;
}
case 273064:
{
returnValue = F("Rügener Zeile");
break;
}
case 273065:
{
returnValue = F("Rügenparkbahn");
break;
}
case 273066:
{
returnValue = F("Rügenstr.");
break;
}
case 273067:
{
returnValue = F("Rügentalweg");
break;
}
case 273068:
{
returnValue = F("Rügenwalder Str.");
break;
}
case 273069:
{
returnValue = F("Rügenwalder Weg");
break;
}
case 273070:
{
returnValue = F("Rügenweg");
break;
}
case 273071:
{
returnValue = F("Rügersberger-Weg");
break;
}
case 273072:
{
returnValue = F("Rügersleite");
break;
}
case 273073:
{
returnValue = F("Rüggeberger Str.");
break;
}
case 273074:
{
returnValue = F("Rüggen");
break;
}
case 273075:
{
returnValue = F("Rüggenbergesweg");
break;
}
case 273076:
{
returnValue = F("Rüggenweg");
break;
}
case 273077:
{
returnValue = F("Rüggesnorgaard");
break;
}
case 273078:
{
returnValue = F("Rüggower Weg");
break;
}
case 273079:
{
returnValue = F("Rügheimer Str.");
break;
}
case 273080:
{
returnValue = F("Rügistr.");
break;
}
case 273081:
{
returnValue = F("Rügkamp");
break;
}
case 273082:
{
returnValue = F("Rügkamper Weg");
break;
}
case 273083:
{
returnValue = F("Rüglersweg");
break;
}
case 273084:
{
returnValue = F("Rügländer Str.");
break;
}
case 273085:
{
returnValue = F("Rügnerstr.");
break;
}
case 273086:
{
returnValue = F("Rügshofener Weg");
break;
}
case 273087:
{
returnValue = F("Rügshöfer Str.");
break;
}
case 273088:
{
returnValue = F("Rühenbleekstr.");
break;
}
case 273089:
{
returnValue = F("Rühenhookstr.");
break;
}
case 273090:
{
returnValue = F("Rühestr.");
break;
}
case 273091:
{
returnValue = F("Rühler Dorfstr.");
break;
}
case 273092:
{
returnValue = F("Rühler Str.");
break;
}
case 273093:
{
returnValue = F("Rühler Weg");
break;
}
case 273094:
{
returnValue = F("Rühlerfeld");
break;
}
case 273095:
{
returnValue = F("Rühlering");
break;
}
case 273096:
{
returnValue = F("Rühlermoor");
break;
}
case 273097:
{
returnValue = F("Rühleweg");
break;
}
case 273098:
{
returnValue = F("Rühligweg");
break;
}
case 273099:
{
returnValue = F("Rühlingstr.");
break;
}
case 273100:
{
returnValue = F("Rühlinstr.");
break;
}
case 273101:
{
returnValue = F("Rühlow Weiche");
break;
}
case 273102:
{
returnValue = F("Rühlower Damm");
break;
}
case 273103:
{
returnValue = F("Rühlower Str.");
break;
}
case 273104:
{
returnValue = F("Rühlscherweg");
break;
}
case 273105:
{
returnValue = F("Rühlshof");
break;
}
case 273106:
{
returnValue = F("Rühlstr.");
break;
}
case 273107:
{
returnValue = F("Rühlweg");
break;
}
case 273108:
{
returnValue = F("Rühmannsweg");
break;
}
case 273109:
{
returnValue = F("Rühmberg");
break;
}
case 273110:
{
returnValue = F("Rühmblicken");
break;
}
case 273111:
{
returnValue = F("Rühmels");
break;
}
case 273112:
{
returnValue = F("Rühmerwiesen");
break;
}
case 273113:
{
returnValue = F("Rühmkorf-Weg");
break;
}
case 273114:
{
returnValue = F("Rühmlandweg");
break;
}
case 273115:
{
returnValue = F("Rühmsteweg");
break;
}
case 273116:
{
returnValue = F("Rühmte");
break;
}
case 273117:
{
returnValue = F("Rühn");
break;
}
case 273118:
{
returnValue = F("Rühner Landweg");
break;
}
case 273119:
{
returnValue = F("Rühnerstr.");
break;
}
case 273120:
{
returnValue = F("Rühnstr.");
break;
}
case 273121:
{
returnValue = F("Rührbergstr.");
break;
}
case 273122:
{
returnValue = F("Rührbergweg");
break;
}
case 273123:
{
returnValue = F("Rührborngäßchen");
break;
}
case 273124:
{
returnValue = F("Rührenschau");
break;
}
case 273125:
{
returnValue = F("Rührgasse");
break;
}
case 273126:
{
returnValue = F("Rührigstr.");
break;
}
case 273127:
{
returnValue = F("Rührsbrook");
break;
}
case 273128:
{
returnValue = F("Rühstädter Dorfstr.");
break;
}
case 273129:
{
returnValue = F("Rük");
break;
}
case 273130:
{
returnValue = F("Rükelstr.");
break;
}
case 273131:
{
returnValue = F("Rükenbuschfeld");
break;
}
case 273132:
{
returnValue = F("Rülau Bahnhaus");
break;
}
case 273133:
{
returnValue = F("Rülauer Ring");
break;
}
case 273134:
{
returnValue = F("Rülauer Weg");
break;
}
case 273135:
{
returnValue = F("Rüleckens Weg");
break;
}
case 273136:
{
returnValue = F("Rülesbergweg");
break;
}
case 273137:
{
returnValue = F("Rülfenröder Str.");
break;
}
case 273138:
{
returnValue = F("Rülgenweg");
break;
}
case 273139:
{
returnValue = F("Rülingstr.");
break;
}
case 273140:
{
returnValue = F("Rülingweg");
break;
}
case 273141:
{
returnValue = F("Rülkerei");
break;
}
case 273142:
{
returnValue = F("Rüllbachstr.");
break;
}
case 273143:
{
returnValue = F("Rüllerstr.");
break;
}
case 273144:
{
returnValue = F("Rüllschauer Weg");
break;
}
case 273145:
{
returnValue = F("Rüllschaumühle");
break;
}
case 273146:
{
returnValue = F("Rüllweg");
break;
}
case 273147:
{
returnValue = F("Rülzheimer Str.");
break;
}
case 273148:
{
returnValue = F("Rüm");
break;
}
case 273149:
{
returnValue = F("Rümburg");
break;
}
case 273150:
{
returnValue = F("Rümeland");
break;
}
case 273151:
{
returnValue = F("Rümelinstr.");
break;
}
case 273152:
{
returnValue = F("Rümelsweg");
break;
}
case 273153:
{
returnValue = F("Rümelswiese");
break;
}
case 273154:
{
returnValue = F("Rümikoner Str.");
break;
}
case 273155:
{
returnValue = F("Rümland");
break;
}
case 273156:
{
returnValue = F("Rümmecketal");
break;
}
case 273157:
{
returnValue = F("Rümmelehofweg");
break;
}
case 273158:
{
returnValue = F("Rümmelsheimer Str.");
break;
}
case 273159:
{
returnValue = F("Rümmelsheimer Weg");
break;
}
case 273160:
{
returnValue = F("Rümmersche Str.");
break;
}
case 273161:
{
returnValue = F("Rümminger Str.");
break;
}
case 273162:
{
returnValue = F("Rümminger Weg");
break;
}
case 273163:
{
returnValue = F("Rümpeler Weg");
break;
}
case 273164:
{
returnValue = F("Rümpersweg");
break;
}
case 273165:
{
returnValue = F("Rümpflestr.");
break;
}
case 273166:
{
returnValue = F("Rümpfstr.");
break;
}
case 273167:
{
returnValue = F("Rümpfweg");
break;
}
case 273168:
{
returnValue = F("Rümsbarg");
break;
}
case 273169:
{
returnValue = F("Rümselweg");
break;
}
case 273170:
{
returnValue = F("Rümteweg");
break;
}
case 273171:
{
returnValue = F("Ründel");
break;
}
case 273172:
{
returnValue = F("Ründerholz");
break;
}
case 273173:
{
returnValue = F("Ründerother Str.");
break;
}
case 273174:
{
returnValue = F("Rünger Promenade");
break;
}
case 273175:
{
returnValue = F("Rünkelstr.");
break;
}
case 273176:
{
returnValue = F("Rüntestr.");
break;
}
case 273177:
{
returnValue = F("Rünther Heide");
break;
}
case 273178:
{
returnValue = F("Rünther Str.");
break;
}
case 273179:
{
returnValue = F("Rünzer Weg");
break;
}
case 273180:
{
returnValue = F("Rüperweg");
break;
}
case 273181:
{
returnValue = F("Rüppelsgraben");
break;
}
case 273182:
{
returnValue = F("Rüppershäuser Str.");
break;
}
case 273183:
{
returnValue = F("Rüppertstr.");
break;
}
case 273184:
{
returnValue = F("Rürups Mühle");
break;
}
case 273185:
{
returnValue = F("Rürupstr.");
break;
}
case 273186:
{
returnValue = F("Rüsch");
break;
}
case 273187:
{
returnValue = F("Rüschdal");
break;
}
case 273188:
{
returnValue = F("Rüschdamm");
break;
}
case 273189:
{
returnValue = F("Rüscheider Weg");
break;
}
case 273190:
{
returnValue = F("Rüschenbeck");
break;
}
case 273191:
{
returnValue = F("Rüschenbreede");
break;
}
case 273192:
{
returnValue = F("Rüschendamm");
break;
}
case 273193:
{
returnValue = F("Rüschendorfer Kirchweg");
break;
}
case 273194:
{
returnValue = F("Rüschendorfer Str.");
break;
}
case 273195:
{
returnValue = F("Rüschener Str.");
break;
}
case 273196:
{
returnValue = F("Rüschengraben");
break;
}
case 273197:
{
returnValue = F("Rüschenkamp");
break;
}
case 273198:
{
returnValue = F("Rüschenkuhle");
break;
}
case 273199:
{
returnValue = F("Rüschenmoor");
break;
}
case 273200:
{
returnValue = F("Rüschenmoorweg");
break;
}
case 273201:
{
returnValue = F("Rüschenweg");
break;
}
case 273202:
{
returnValue = F("Rüschergasse");
break;
}
case 273203:
{
returnValue = F("Rüscherstr.");
break;
}
case 273204:
{
returnValue = F("Rüscheweg");
break;
}
case 273205:
{
returnValue = F("Rüschfeld");
break;
}
case 273206:
{
returnValue = F("Rüschhausweg");
break;
}
case 273207:
{
returnValue = F("Rüschkamp");
break;
}
case 273208:
{
returnValue = F("Rüschkenweg");
break;
}
case 273209:
{
returnValue = F("Rüschlage");
break;
}
case 273210:
{
returnValue = F("Rüschstr.");
break;
}
case 273211:
{
returnValue = F("Rüschweg");
break;
}
case 273212:
{
returnValue = F("Rüschwehrenweg");
break;
}
case 273213:
{
returnValue = F("Rüsdorfer Str.");
break;
}
case 273214:
{
returnValue = F("Rüsenstieg");
break;
}
case 273215:
{
returnValue = F("Rüsforter Str.");
break;
}
case 273216:
{
returnValue = F("Rüsgen");
break;
}
case 273217:
{
returnValue = F("Rüsgenfeld");
break;
}
case 273218:
{
returnValue = F("Rüskau");
break;
}
case 273219:
{
returnValue = F("Rüskenbrink");
break;
}
case 273220:
{
returnValue = F("Rüskenfeld");
break;
}
case 273221:
{
returnValue = F("Rüskenkamp");
break;
}
case 273222:
{
returnValue = F("Rüskenkampstr.");
break;
}
case 273223:
{
returnValue = F("Rüskenkampweg");
break;
}
case 273224:
{
returnValue = F("Rüskenpad");
break;
}
case 273225:
{
returnValue = F("Rüskenpadd");
break;
}
case 273226:
{
returnValue = F("Rüskenweg");
break;
}
case 273227:
{
returnValue = F("Rüskesiedlung");
break;
}
case 273228:
{
returnValue = F("Rüskeweg");
break;
}
case 273229:
{
returnValue = F("Rüsklandweg");
break;
}
case 273230:
{
returnValue = F("Rüskornweg");
break;
}
case 273231:
{
returnValue = F("Rüspelbusch");
break;
}
case 273232:
{
returnValue = F("Rüspelsweg");
break;
}
case 273233:
{
returnValue = F("Rüsper Str.");
break;
}
case 273234:
{
returnValue = F("Rüsper Weg");
break;
}
case 273235:
{
returnValue = F("Rüsseinaer Str.");
break;
}
case 273236:
{
returnValue = F("Rüssel");
break;
}
case 273237:
{
returnValue = F("Rüsselbach");
break;
}
case 273238:
{
returnValue = F("Rüsselbrücke");
break;
}
case 273239:
{
returnValue = F("Rüsselhausen");
break;
}
case 273240:
{
returnValue = F("Rüsselhäuser Str.");
break;
}
case 273241:
{
returnValue = F("Rüsselhäuser Weg");
break;
}
case 273242:
{
returnValue = F("Rüsselsheim");
break;
}
case 273243:
{
returnValue = F("Rüsselsheimer Grenzweg");
break;
}
case 273244:
{
returnValue = F("Rüsselsheimer Hof");
break;
}
case 273245:
{
returnValue = F("Rüsselsheimer Str.");
break;
}
case 273246:
{
returnValue = F("Rüssen");
break;
}
case 273247:
{
returnValue = F("Rüssenbacher Str.");
break;
}
case 273248:
{
returnValue = F("Rüssenbachstr.");
break;
}
case 273249:
{
returnValue = F("Rüssenberg");
break;
}
case 273250:
{
returnValue = F("Rüstenbachstr.");
break;
}
case 273251:
{
returnValue = F("Rüstenstr.");
break;
}
case 273252:
{
returnValue = F("Rüster Weg");
break;
}
case 273253:
{
returnValue = F("Rüster-Feld");
break;
}
case 273254:
{
returnValue = F("Rüsterbrücke");
break;
}
case 273255:
{
returnValue = F("Rüstergarten");
break;
}
case 273256:
{
returnValue = F("Rüsterhof");
break;
}
case 273257:
{
returnValue = F("Rüsternallee");
break;
}
case 273258:
{
returnValue = F("Rüsternberg");
break;
}
case 273259:
{
returnValue = F("Rüsternstr.");
break;
}
case 273260:
{
returnValue = F("Rüsternweg");
break;
}
case 273261:
{
returnValue = F("Rüstersieler Gemeinschaftsplatz");
break;
}
case 273262:
{
returnValue = F("Rüstersieler Str.");
break;
}
case 273263:
{
returnValue = F("Rüsterstr.");
break;
}
case 273264:
{
returnValue = F("Rüsterweg");
break;
}
case 273265:
{
returnValue = F("Rüstgarten");
break;
}
case 273266:
{
returnValue = F("Rüstingen");
break;
}
case 273267:
{
returnValue = F("Rüstinger Feld");
break;
}
case 273268:
{
returnValue = F("Rüstje");
break;
}
case 273269:
{
returnValue = F("Rüstjer Str.");
break;
}
case 273270:
{
returnValue = F("Rüstjer Weg");
break;
}
case 273271:
{
returnValue = F("Rüstringer Brücke");
break;
}
case 273272:
{
returnValue = F("Rüstringer Str.");
break;
}
case 273273:
{
returnValue = F("Rüstringer Weg");
break;
}
case 273274:
{
returnValue = F("Rüstunger Berg");
break;
}
case 273275:
{
returnValue = F("Rüstweg");
break;
}
case 273276:
{
returnValue = F("Rütenbrocker Str.");
break;
}
case 273277:
{
returnValue = F("Rüter Geest");
break;
}
case 273278:
{
returnValue = F("Rüterberg");
break;
}
case 273279:
{
returnValue = F("Rüterbruch");
break;
}
case 273280:
{
returnValue = F("Rüterhege");
break;
}
case 273281:
{
returnValue = F("Rüterpol");
break;
}
case 273282:
{
returnValue = F("Rüters Kamp");
break;
}
case 273283:
{
returnValue = F("Rütersend");
break;
}
case 273284:
{
returnValue = F("Rüterslohne");
break;
}
case 273285:
{
returnValue = F("Rüterstr.");
break;
}
case 273286:
{
returnValue = F("Rütertrift");
break;
}
case 273287:
{
returnValue = F("Rüterweg");
break;
}
case 273288:
{
returnValue = F("Rütger-von-Scheven-Str.");
break;
}
case 273289:
{
returnValue = F("Rütgersstr.");
break;
}
case 273290:
{
returnValue = F("Rütgerstr.");
break;
}
case 273291:
{
returnValue = F("Rüthener Landstr.");
break;
}
case 273292:
{
returnValue = F("Rüthener Pfad");
break;
}
case 273293:
{
returnValue = F("Rüthener Str.");
break;
}
case 273294:
{
returnValue = F("Rüthener Weg");
break;
}
case 273295:
{
returnValue = F("Rüther Moor");
break;
}
case 273296:
{
returnValue = F("Rüther Str.");
break;
}
case 273297:
{
returnValue = F("Rüthersweg");
break;
}
case 273298:
{
returnValue = F("Rütherweg");
break;
}
case 273299:
{
returnValue = F("Rüthnicker Weg");
break;
}
case 273300:
{
returnValue = F("Rüting Chaussee");
break;
}
case 273301:
{
returnValue = F("Rütinger Klosterkamp");
break;
}
case 273302:
{
returnValue = F("Rütinger Kornenhof");
break;
}
case 273303:
{
returnValue = F("Rütischneise");
break;
}
case 273304:
{
returnValue = F("Rütleinsweg");
break;
}
case 273305:
{
returnValue = F("Rütlistr.");
break;
}
case 273306:
{
returnValue = F("Rütsch");
break;
}
case 273307:
{
returnValue = F("Rütschdorfer Str.");
break;
}
case 273308:
{
returnValue = F("Rütsche");
break;
}
case 273309:
{
returnValue = F("Rütschhof");
break;
}
case 273310:
{
returnValue = F("Rütschhofstr.");
break;
}
case 273311:
{
returnValue = F("Rütte");
break;
}
case 273312:
{
returnValue = F("Rütte 11-14");
break;
}
case 273313:
{
returnValue = F("Rütteberg");
break;
}
case 273314:
{
returnValue = F("Rüttebergstr.");
break;
}
case 273315:
{
returnValue = F("Rüttebuckstr.");
break;
}
case 273316:
{
returnValue = F("Rüttegrabenweg");
break;
}
case 273317:
{
returnValue = F("Rüttegässle");
break;
}
case 273318:
{
returnValue = F("Rüttehof");
break;
}
case 273319:
{
returnValue = F("Rüttehofstr.");
break;
}
case 273320:
{
returnValue = F("Rüttehofweg");
break;
}
case 273321:
{
returnValue = F("Rüttekopfweg");
break;
}
case 273322:
{
returnValue = F("Rütteleweg");
break;
}
case 273323:
{
returnValue = F("Rüttelistr.");
break;
}
case 273324:
{
returnValue = F("Rüttelweg");
break;
}
case 273325:
{
returnValue = F("Rüttemattweg");
break;
}
case 273326:
{
returnValue = F("Rüttemoosholzweg");
break;
}
case 273327:
{
returnValue = F("Rüttener Sträßle");
break;
}
case 273328:
{
returnValue = F("Rütteneweg");
break;
}
case 273329:
{
returnValue = F("Rüttenhof");
break;
}
case 273330:
{
returnValue = F("Rüttenmattweg");
break;
}
case 273331:
{
returnValue = F("Rütterswall");
break;
}
case 273332:
{
returnValue = F("Rüttersweg");
break;
}
case 273333:
{
returnValue = F("Rüttestr.");
break;
}
case 273334:
{
returnValue = F("Rüttetalweg");
break;
}
case 273335:
{
returnValue = F("Rüttewaldkopfweg");
break;
}
case 273336:
{
returnValue = F("Rütteweg");
break;
}
case 273337:
{
returnValue = F("Rüttgersteg");
break;
}
case 273338:
{
returnValue = F("Rüttgerstr.");
break;
}
case 273339:
{
returnValue = F("Rüttgersweg");
break;
}
case 273340:
{
returnValue = F("Rüttibodenweg");
break;
}
case 273341:
{
returnValue = F("Rüttibuckweg");
break;
}
case 273342:
{
returnValue = F("Rüttihofstr.");
break;
}
case 273343:
{
returnValue = F("Rüttingweg");
break;
}
case 273344:
{
returnValue = F("Rüttlenäckerstr.");
break;
}
case 273345:
{
returnValue = F("Rüttlersberger Str.");
break;
}
case 273346:
{
returnValue = F("Rüttmannsdorfer Str.");
break;
}
case 273347:
{
returnValue = F("Rüttmattstr.");
break;
}
case 273348:
{
returnValue = F("Rützenfelde");
break;
}
case 273349:
{
returnValue = F("Rützengrüner Str.");
break;
}
case 273350:
{
returnValue = F("Rützenhagen");
break;
}
case 273351:
{
returnValue = F("Rützgasse");
break;
}
case 273352:
{
returnValue = F("Rützhaubstr.");
break;
}
case 273353:
{
returnValue = F("Rützkausen");
break;
}
case 273354:
{
returnValue = F("Rützkausener Str.");
break;
}
case 273355:
{
returnValue = F("Rützkauser Str.");
break;
}
case 273356:
{
returnValue = F("Rüwkamp");
break;
}
case 273357:
{
returnValue = F("Rüxbüller Str.");
break;
}
case 273358:
{
returnValue = F("Rüßen Feldweg");
break;
}
case 273359:
{
returnValue = F("Rüßweg");
break;
}
case 273360:
{
returnValue = F("Rüßwihl");
break;
}
}
return returnValue;
}
