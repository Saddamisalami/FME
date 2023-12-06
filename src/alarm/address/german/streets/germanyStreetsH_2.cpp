#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameH2(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 130013:
{
returnValue = F("Halligenstr.");
break;
}
case 130014:
{
returnValue = F("Halligenweg");
break;
}
case 130015:
{
returnValue = F("Halligring");
break;
}
case 130016:
{
returnValue = F("Halligstr.");
break;
}
case 130017:
{
returnValue = F("Halligweg");
break;
}
case 130018:
{
returnValue = F("Hallimaschweg");
break;
}
case 130019:
{
returnValue = F("Hallingstr.");
break;
}
case 130020:
{
returnValue = F("Hallische Str.");
break;
}
case 130021:
{
returnValue = F("Hallmannskamp");
break;
}
case 130022:
{
returnValue = F("Hallmannsstr.");
break;
}
case 130023:
{
returnValue = F("Hallmannswiesenweg");
break;
}
case 130024:
{
returnValue = F("Hallmarkt");
break;
}
case 130025:
{
returnValue = F("Hallmeyerstr.");
break;
}
case 130026:
{
returnValue = F("Hallmittschneise");
break;
}
case 130027:
{
returnValue = F("Hallnberger Str.");
break;
}
case 130028:
{
returnValue = F("Hallochweg");
break;
}
case 130029:
{
returnValue = F("Halloh");
break;
}
case 130030:
{
returnValue = F("Hallohe");
break;
}
case 130031:
{
returnValue = F("Halloher Weg");
break;
}
case 130032:
{
returnValue = F("Hallohpark");
break;
}
case 130033:
{
returnValue = F("Hallohweg");
break;
}
case 130034:
{
returnValue = F("Hallonge");
break;
}
case 130035:
{
returnValue = F("Hallorenring");
break;
}
case 130036:
{
returnValue = F("Hallorenstr.");
break;
}
case 130037:
{
returnValue = F("Hallostr.");
break;
}
case 130038:
{
returnValue = F("Hallplatz");
break;
}
case 130039:
{
returnValue = F("Hallsberg-Platz");
break;
}
case 130040:
{
returnValue = F("Hallschieder Str.");
break;
}
case 130041:
{
returnValue = F("Hallschlag");
break;
}
case 130042:
{
returnValue = F("Hallschlager Str.");
break;
}
case 130043:
{
returnValue = F("Hallschlagerstr.");
break;
}
case 130044:
{
returnValue = F("Hallstadter Str.");
break;
}
case 130045:
{
returnValue = F("Hallstadtweg");
break;
}
case 130046:
{
returnValue = F("Hallstatt-Str.");
break;
}
case 130047:
{
returnValue = F("Hallstattfeld");
break;
}
case 130048:
{
returnValue = F("Hallstattpfad");
break;
}
case 130049:
{
returnValue = F("Hallstattring");
break;
}
case 130050:
{
returnValue = F("Hallstattstr.");
break;
}
case 130051:
{
returnValue = F("Hallstattweg");
break;
}
case 130052:
{
returnValue = F("Hallstedt");
break;
}
case 130053:
{
returnValue = F("Hallstedter Str.");
break;
}
case 130054:
{
returnValue = F("Hallstockstr.");
break;
}
case 130055:
{
returnValue = F("Hallstr.");
break;
}
case 130056:
{
returnValue = F("Hallstädter Weg");
break;
}
case 130057:
{
returnValue = F("Hallstätter Str.");
break;
}
case 130058:
{
returnValue = F("Hallstättweg");
break;
}
case 130059:
{
returnValue = F("Hallthurmer Berg");
break;
}
case 130060:
{
returnValue = F("Hallthurmer Moos");
break;
}
case 130061:
{
returnValue = F("Halluinstr.");
break;
}
case 130062:
{
returnValue = F("Hallwachsstr.");
break;
}
case 130063:
{
returnValue = F("Hallwanger Str.");
break;
}
case 130064:
{
returnValue = F("Hallwanger Weg");
break;
}
case 130065:
{
returnValue = F("Hallweg");
break;
}
case 130066:
{
returnValue = F("Hallweilstr.");
break;
}
case 130067:
{
returnValue = F("Hallwies");
break;
}
case 130068:
{
returnValue = F("Hallwiesenweg");
break;
}
case 130069:
{
returnValue = F("Hallwilstr.");
break;
}
case 130070:
{
returnValue = F("Hallöhweg");
break;
}
case 130071:
{
returnValue = F("Halmacker");
break;
}
case 130072:
{
returnValue = F("Halmbergstr.");
break;
}
case 130073:
{
returnValue = F("Halmburger Weg");
break;
}
case 130074:
{
returnValue = F("Halmeerweg");
break;
}
case 130075:
{
returnValue = F("Halmen");
break;
}
case 130076:
{
returnValue = F("Halmenhofstr.");
break;
}
case 130077:
{
returnValue = F("Halmer Weg");
break;
}
case 130078:
{
returnValue = F("Halmersfahrt");
break;
}
case 130079:
{
returnValue = F("Halmesricht");
break;
}
case 130080:
{
returnValue = F("Halmgärten");
break;
}
case 130081:
{
returnValue = F("Halmhuberstr.");
break;
}
case 130082:
{
returnValue = F("Halmsacker");
break;
}
case 130083:
{
returnValue = F("Halmstr.");
break;
}
case 130084:
{
returnValue = F("Halmweg");
break;
}
case 130085:
{
returnValue = F("Halohweg");
break;
}
case 130086:
{
returnValue = F("Hals");
break;
}
case 130087:
{
returnValue = F("Halsbacher Str.");
break;
}
case 130088:
{
returnValue = F("Halsbacher Weg");
break;
}
case 130089:
{
returnValue = F("Halsbachweg");
break;
}
case 130090:
{
returnValue = F("Halsbeeksweg");
break;
}
case 130091:
{
returnValue = F("Halsbeker Esch");
break;
}
case 130092:
{
returnValue = F("Halsbeker Hauptstr.");
break;
}
case 130093:
{
returnValue = F("Halsbeker Str.");
break;
}
case 130094:
{
returnValue = F("Halsberger Feld");
break;
}
case 130095:
{
returnValue = F("Halsberger Str.");
break;
}
case 130096:
{
returnValue = F("Halsbreche");
break;
}
case 130097:
{
returnValue = F("Halsbrücker Str.");
break;
}
case 130098:
{
returnValue = F("Halsbrücker Weg");
break;
}
case 130099:
{
returnValue = F("Halscheider Str.");
break;
}
case 130100:
{
returnValue = F("Halsdorfer Str.");
break;
}
case 130101:
{
returnValue = F("Halseberg");
break;
}
case 130102:
{
returnValue = F("Halsenbacher Str.");
break;
}
case 130103:
{
returnValue = F("Halsenbachstr.");
break;
}
case 130104:
{
returnValue = F("Halsenhauweg");
break;
}
case 130105:
{
returnValue = F("Halser Str.");
break;
}
case 130106:
{
returnValue = F("Halsestr.");
break;
}
case 130107:
{
returnValue = F("Halsgraben");
break;
}
case 130108:
{
returnValue = F("Halshorn");
break;
}
case 130109:
{
returnValue = F("Halskappe");
break;
}
case 130110:
{
returnValue = F("Halskestr.");
break;
}
case 130111:
{
returnValue = F("Halskeweg");
break;
}
case 130112:
{
returnValue = F("Halsknopf");
break;
}
case 130113:
{
returnValue = F("Halslache");
break;
}
case 130114:
{
returnValue = F("Halsmeedeweg");
break;
}
case 130115:
{
returnValue = F("Halsmühlener Str.");
break;
}
case 130116:
{
returnValue = F("Halspatt");
break;
}
case 130117:
{
returnValue = F("Halstenbacher Str.");
break;
}
case 130118:
{
returnValue = F("Halstenbachpark");
break;
}
case 130119:
{
returnValue = F("Halstenbachstr.");
break;
}
case 130120:
{
returnValue = F("Halstenbeker Chaussee");
break;
}
case 130121:
{
returnValue = F("Halstenbeker Str.");
break;
}
case 130122:
{
returnValue = F("Halstenbeker Weg");
break;
}
case 130123:
{
returnValue = F("Halsterbacher Str.");
break;
}
case 130124:
{
returnValue = F("Halsterner Str.");
break;
}
case 130125:
{
returnValue = F("Halstrastr.");
break;
}
case 130126:
{
returnValue = F("Halsweg");
break;
}
case 130127:
{
returnValue = F("Halsäcker");
break;
}
case 130128:
{
returnValue = F("Haltabergstr.");
break;
}
case 130129:
{
returnValue = F("Halte");
break;
}
case 130130:
{
returnValue = F("Haltenbrücke");
break;
}
case 130131:
{
returnValue = F("Haltenhoffstr.");
break;
}
case 130132:
{
returnValue = F("Haltenweg");
break;
}
case 130133:
{
returnValue = F("Halter Str.");
break;
}
case 130134:
{
returnValue = F("Halterbergsweg");
break;
}
case 130135:
{
returnValue = F("Halterbergweg");
break;
}
case 130136:
{
returnValue = F("Haltern");
break;
}
case 130137:
{
returnValue = F("Haltern am See Bf");
break;
}
case 130138:
{
returnValue = F("Halterner Str.");
break;
}
case 130139:
{
returnValue = F("Halterner Weg");
break;
}
case 130140:
{
returnValue = F("Halternstr.");
break;
}
case 130141:
{
returnValue = F("Haltestelle");
break;
}
case 130142:
{
returnValue = F("Haltestelle Damm");
break;
}
case 130143:
{
returnValue = F("Haltestelle Zeche Nachtigall");
break;
}
case 130144:
{
returnValue = F("Haltestelle-Weg");
break;
}
case 130145:
{
returnValue = F("Haltiger Feld");
break;
}
case 130146:
{
returnValue = F("Haltinger Pfad");
break;
}
case 130147:
{
returnValue = F("Haltinger Str.");
break;
}
case 130148:
{
returnValue = F("Haltinger Weg");
break;
}
case 130149:
{
returnValue = F("Haltmayrstr.");
break;
}
case 130150:
{
returnValue = F("Haltnauer Weg");
break;
}
case 130151:
{
returnValue = F("Haltschlagweg");
break;
}
case 130152:
{
returnValue = F("Haltstelle Werden");
break;
}
case 130153:
{
returnValue = F("Haltstr.");
break;
}
case 130154:
{
returnValue = F("Haltstätteweg");
break;
}
case 130155:
{
returnValue = F("Haltweg");
break;
}
case 130156:
{
returnValue = F("Halv Schwienskopp");
break;
}
case 130157:
{
returnValue = F("Halv-Miel-Ring");
break;
}
case 130158:
{
returnValue = F("Halver Str.");
break;
}
case 130159:
{
returnValue = F("Halverder Damm");
break;
}
case 130160:
{
returnValue = F("Halverder Str.");
break;
}
case 130161:
{
returnValue = F("Halverscheid");
break;
}
case 130162:
{
returnValue = F("Halverscheiderohl");
break;
}
case 130163:
{
returnValue = F("Halverstr.");
break;
}
case 130164:
{
returnValue = F("Halvestorfer Str.");
break;
}
case 130165:
{
returnValue = F("Halweg");
break;
}
case 130166:
{
returnValue = F("Halzemich");
break;
}
case 130167:
{
returnValue = F("Halzenbecke");
break;
}
case 130168:
{
returnValue = F("Halzenberg");
break;
}
case 130169:
{
returnValue = F("Halzhauser Str.");
break;
}
case 130170:
{
returnValue = F("Haläcker");
break;
}
case 130171:
{
returnValue = F("Ham-Barg");
break;
}
case 130172:
{
returnValue = F("Hamacherring");
break;
}
case 130173:
{
returnValue = F("Hamaland");
break;
}
case 130174:
{
returnValue = F("Hamalandplatz");
break;
}
case 130175:
{
returnValue = F("Hamalandstr.");
break;
}
case 130176:
{
returnValue = F("Hamalandweg");
break;
}
case 130177:
{
returnValue = F("Hamann's Koppel");
break;
}
case 130178:
{
returnValue = F("Hamannallee");
break;
}
case 130179:
{
returnValue = F("Hamanns Ohl");
break;
}
case 130180:
{
returnValue = F("Hamannsbruch");
break;
}
case 130181:
{
returnValue = F("Hamannsche Koppel");
break;
}
case 130182:
{
returnValue = F("Hamannshauschneise");
break;
}
case 130183:
{
returnValue = F("Hamannsheide");
break;
}
case 130184:
{
returnValue = F("Hamannstr.");
break;
}
case 130185:
{
returnValue = F("Hamannweg");
break;
}
case 130186:
{
returnValue = F("Hambacher Hauptstr.");
break;
}
case 130187:
{
returnValue = F("Hambacher Platz");
break;
}
case 130188:
{
returnValue = F("Hambacher Str.");
break;
}
case 130189:
{
returnValue = F("Hambacher Waldstr.");
break;
}
case 130190:
{
returnValue = F("Hambacher Weg");
break;
}
case 130191:
{
returnValue = F("Hambachkreisel");
break;
}
case 130192:
{
returnValue = F("Hambachsreilchen");
break;
}
case 130193:
{
returnValue = F("Hambachstr.");
break;
}
case 130194:
{
returnValue = F("Hambachwaldstr.");
break;
}
case 130195:
{
returnValue = F("Hambachweg");
break;
}
case 130196:
{
returnValue = F("Hambaumsiedlung");
break;
}
case 130197:
{
returnValue = F("Hamber Dyck");
break;
}
case 130198:
{
returnValue = F("Hamber Str.");
break;
}
case 130199:
{
returnValue = F("Hamberg");
break;
}
case 130200:
{
returnValue = F("Hamberger Pickerweg");
break;
}
case 130201:
{
returnValue = F("Hamberger Ring");
break;
}
case 130202:
{
returnValue = F("Hamberger See Str.");
break;
}
case 130203:
{
returnValue = F("Hamberger Str.");
break;
}
case 130204:
{
returnValue = F("Hamberger Weg");
break;
}
case 130205:
{
returnValue = F("Hamberger-Tor-Weg");
break;
}
case 130206:
{
returnValue = F("Hambergerstr.");
break;
}
case 130207:
{
returnValue = F("Hambergring");
break;
}
case 130208:
{
returnValue = F("Hambergsfeld");
break;
}
case 130209:
{
returnValue = F("Hambergstr.");
break;
}
case 130210:
{
returnValue = F("Hambergweg");
break;
}
case 130211:
{
returnValue = F("Hambierich");
break;
}
case 130212:
{
returnValue = F("Hambloch-Mühlen-Str.");
break;
}
case 130213:
{
returnValue = F("Hamborg");
break;
}
case 130214:
{
returnValue = F("Hamborger Str.");
break;
}
case 130215:
{
returnValue = F("Hamborner Allee");
break;
}
case 130216:
{
returnValue = F("Hamborner Altmarkt");
break;
}
case 130217:
{
returnValue = F("Hamborner Mühle");
break;
}
case 130218:
{
returnValue = F("Hamborner Platz");
break;
}
case 130219:
{
returnValue = F("Hamborner Str.");
break;
}
case 130220:
{
returnValue = F("Hamborner Weg");
break;
}
case 130221:
{
returnValue = F("Hambostel");
break;
}
case 130222:
{
returnValue = F("Hambosteler Weg");
break;
}
case 130223:
{
returnValue = F("Hamboyweg");
break;
}
case 130224:
{
returnValue = F("Hambrachstr.");
break;
}
case 130225:
{
returnValue = F("Hambrechtsweg");
break;
}
case 130226:
{
returnValue = F("Hambredenweg");
break;
}
case 130227:
{
returnValue = F("Hambrei");
break;
}
case 130228:
{
returnValue = F("Hambringweg");
break;
}
case 130229:
{
returnValue = F("Hambrink");
break;
}
case 130230:
{
returnValue = F("Hambrocker Berg");
break;
}
case 130231:
{
returnValue = F("Hambrocker Chaussee");
break;
}
case 130232:
{
returnValue = F("Hambrocker Ring");
break;
}
case 130233:
{
returnValue = F("Hambrocker Str.");
break;
}
case 130234:
{
returnValue = F("Hambroggenweg");
break;
}
case 130235:
{
returnValue = F("Hambrook");
break;
}
case 130236:
{
returnValue = F("Hambruch");
break;
}
case 130237:
{
returnValue = F("Hambruchtwete");
break;
}
case 130238:
{
returnValue = F("Hambrunner Str.");
break;
}
case 130239:
{
returnValue = F("Hambrückener Weg");
break;
}
case 130240:
{
returnValue = F("Hambrücker Str.");
break;
}
case 130241:
{
returnValue = F("Hambrücker Weg");
break;
}
case 130242:
{
returnValue = F("Hambuch");
break;
}
case 130243:
{
returnValue = F("Hambuchener Str.");
break;
}
case 130244:
{
returnValue = F("Hambucher Ring");
break;
}
case 130245:
{
returnValue = F("Hambucher Str.");
break;
}
case 130246:
{
returnValue = F("Hambuchstr.");
break;
}
case 130247:
{
returnValue = F("Hambuchweg");
break;
}
case 130248:
{
returnValue = F("Hamburg");
break;
}
case 130249:
{
returnValue = F("Hamburg-Amerika-Str.");
break;
}
case 130250:
{
returnValue = F("Hamburger Allee");
break;
}
case 130251:
{
returnValue = F("Hamburger Berg");
break;
}
case 130252:
{
returnValue = F("Hamburger Chaussee");
break;
}
case 130253:
{
returnValue = F("Hamburger Damm");
break;
}
case 130254:
{
returnValue = F("Hamburger Deich");
break;
}
case 130255:
{
returnValue = F("Hamburger Frachtweg");
break;
}
case 130256:
{
returnValue = F("Hamburger Kamp");
break;
}
case 130257:
{
returnValue = F("Hamburger Landstr.");
break;
}
case 130258:
{
returnValue = F("Hamburger Platz");
break;
}
case 130259:
{
returnValue = F("Hamburger Ring");
break;
}
case 130260:
{
returnValue = F("Hamburger Str.");
break;
}
case 130261:
{
returnValue = F("Hamburger Tor");
break;
}
case 130262:
{
returnValue = F("Hamburger Tor Brücke");
break;
}
case 130263:
{
returnValue = F("Hamburger Torritzen");
break;
}
case 130264:
{
returnValue = F("Hamburger Torstr.");
break;
}
case 130265:
{
returnValue = F("Hamburger Weg");
break;
}
case 130266:
{
returnValue = F("Hamburger Zeile");
break;
}
case 130267:
{
returnValue = F("Hamburgerstr.");
break;
}
case 130268:
{
returnValue = F("Hamburgstr.");
break;
}
case 130269:
{
returnValue = F("Hambusch");
break;
}
case 130270:
{
returnValue = F("Hambuschstr.");
break;
}
case 130271:
{
returnValue = F("Hambuschweg");
break;
}
case 130272:
{
returnValue = F("Hamböcken");
break;
}
case 130273:
{
returnValue = F("Hambörger Sand");
break;
}
case 130274:
{
returnValue = F("Hambüchener Weg");
break;
}
case 130275:
{
returnValue = F("Hambühler Weg");
break;
}
case 130276:
{
returnValue = F("Hambürener Str.");
break;
}
case 130277:
{
returnValue = F("Hamdijk");
break;
}
case 130278:
{
returnValue = F("Hamdorfer Dorfstr.");
break;
}
case 130279:
{
returnValue = F("Hamdorfer Str.");
break;
}
case 130280:
{
returnValue = F("Hamdorfer Weg");
break;
}
case 130281:
{
returnValue = F("Hamecke");
break;
}
case 130282:
{
returnValue = F("Hamelbergstr.");
break;
}
case 130283:
{
returnValue = F("Hameler Weg");
break;
}
case 130284:
{
returnValue = F("Hamelhof");
break;
}
case 130285:
{
returnValue = F("Hamelmannstr.");
break;
}
case 130286:
{
returnValue = F("Hamelner Chaussee");
break;
}
case 130287:
{
returnValue = F("Hamelner Str.");
break;
}
case 130288:
{
returnValue = F("Hamelner Weg");
break;
}
case 130289:
{
returnValue = F("Hamelnweg");
break;
}
case 130290:
{
returnValue = F("Hamels Gasse");
break;
}
case 130291:
{
returnValue = F("Hamelsberg");
break;
}
case 130292:
{
returnValue = F("Hamelscher Pfad");
break;
}
case 130293:
{
returnValue = F("Hamelscher Weg");
break;
}
case 130294:
{
returnValue = F("Hamelsgrund");
break;
}
case 130295:
{
returnValue = F("Hamelskamp");
break;
}
case 130296:
{
returnValue = F("Hamelspringer Str.");
break;
}
case 130297:
{
returnValue = F("Hamelstr.");
break;
}
case 130298:
{
returnValue = F("Hameltrift");
break;
}
case 130299:
{
returnValue = F("Hamelweg");
break;
}
case 130300:
{
returnValue = F("Hamer");
break;
}
case 130301:
{
returnValue = F("Hamer Hof");
break;
}
case 130302:
{
returnValue = F("Hamergrund");
break;
}
case 130303:
{
returnValue = F("Hamerheide");
break;
}
case 130304:
{
returnValue = F("Hamerhof");
break;
}
case 130305:
{
returnValue = F("Hamerhütte");
break;
}
case 130306:
{
returnValue = F("Hamerkampstr.");
break;
}
case 130307:
{
returnValue = F("Hamerland");
break;
}
case 130308:
{
returnValue = F("Hamerlestr.");
break;
}
case 130309:
{
returnValue = F("Hamersbruch");
break;
}
case 130310:
{
returnValue = F("Hamerser Str.");
break;
}
case 130311:
{
returnValue = F("Hamerslebener Str.");
break;
}
case 130312:
{
returnValue = F("Hamerslebener Weg");
break;
}
case 130313:
{
returnValue = F("Hamersring");
break;
}
case 130314:
{
returnValue = F("Hamerstorfer Str.");
break;
}
case 130315:
{
returnValue = F("Hamerstr.");
break;
}
case 130316:
{
returnValue = F("Hamerter Berg");
break;
}
case 130317:
{
returnValue = F("Hamerter Str.");
break;
}
case 130318:
{
returnValue = F("Hamertweg");
break;
}
case 130319:
{
returnValue = F("Hamerweg");
break;
}
case 130320:
{
returnValue = F("Hamesweg");
break;
}
case 130321:
{
returnValue = F("Hameter Str.");
break;
}
case 130322:
{
returnValue = F("Hametstellen");
break;
}
case 130323:
{
returnValue = F("Hamey");
break;
}
case 130324:
{
returnValue = F("Hamfehrer Weg");
break;
}
case 130325:
{
returnValue = F("Hamfeld");
break;
}
case 130326:
{
returnValue = F("Hamfelder Höhe");
break;
}
case 130327:
{
returnValue = F("Hamfelder Str.");
break;
}
case 130328:
{
returnValue = F("Hamfelderedder");
break;
}
case 130329:
{
returnValue = F("Hamfeldstr.");
break;
}
case 130330:
{
returnValue = F("Hamfeldweg");
break;
}
case 130331:
{
returnValue = F("Hamfhofsweg");
break;
}
case 130332:
{
returnValue = F("Hamhuser Str.");
break;
}
case 130333:
{
returnValue = F("Hamicher Höfchen");
break;
}
case 130334:
{
returnValue = F("Hamicher Str.");
break;
}
case 130335:
{
returnValue = F("Hamicher Weg");
break;
}
case 130336:
{
returnValue = F("Hamilton Avenue");
break;
}
case 130337:
{
returnValue = F("Hamilton-Str.");
break;
}
case 130338:
{
returnValue = F("Hamkamp");
break;
}
case 130339:
{
returnValue = F("Hamkerweg");
break;
}
case 130340:
{
returnValue = F("Hamlerstr.");
break;
}
case 130341:
{
returnValue = F("Hamletstr.");
break;
}
case 130342:
{
returnValue = F("Hamlingdorfer Weg");
break;
}
case 130343:
{
returnValue = F("Hamm");
break;
}
case 130344:
{
returnValue = F("Hamm Weg");
break;
}
case 130345:
{
returnValue = F("Hammaburgstr.");
break;
}
case 130346:
{
returnValue = F("Hammachersheide");
break;
}
case 130347:
{
returnValue = F("Hammacherstr.");
break;
}
case 130348:
{
returnValue = F("Hammannsgasse");
break;
}
case 130349:
{
returnValue = F("Hammannsäcker");
break;
}
case 130350:
{
returnValue = F("Hammansteinweg");
break;
}
case 130351:
{
returnValue = F("Hammanstr.");
break;
}
case 130352:
{
returnValue = F("Hammarskjöldring");
break;
}
case 130353:
{
returnValue = F("Hammarskjöldstr.");
break;
}
case 130354:
{
returnValue = F("Hammatalstr.");
break;
}
case 130355:
{
returnValue = F("Hammbaum");
break;
}
case 130356:
{
returnValue = F("Hammbruch");
break;
}
case 130357:
{
returnValue = F("Hammchaussee");
break;
}
case 130358:
{
returnValue = F("Hammecketal");
break;
}
case 130359:
{
returnValue = F("Hammelackerweg");
break;
}
case 130360:
{
returnValue = F("Hammelbacher Str.");
break;
}
case 130361:
{
returnValue = F("Hammelbeek");
break;
}
case 130362:
{
returnValue = F("Hammelburg");
break;
}
case 130363:
{
returnValue = F("Hammelburger Str.");
break;
}
case 130364:
{
returnValue = F("Hammelburger Weg");
break;
}
case 130365:
{
returnValue = F("Hammelbächer Str.");
break;
}
case 130366:
{
returnValue = F("Hammeler Landstr.");
break;
}
case 130367:
{
returnValue = F("Hammeler Str.");
break;
}
case 130368:
{
returnValue = F("Hammelhansweg");
break;
}
case 130369:
{
returnValue = F("Hammelmühlweg");
break;
}
case 130370:
{
returnValue = F("Hammelsbachstr.");
break;
}
case 130371:
{
returnValue = F("Hammelsberg");
break;
}
case 130372:
{
returnValue = F("Hammelsbergweg");
break;
}
case 130373:
{
returnValue = F("Hammelsbrunnenweg");
break;
}
case 130374:
{
returnValue = F("Hammelsdamm");
break;
}
case 130375:
{
returnValue = F("Hammelsgasse");
break;
}
case 130376:
{
returnValue = F("Hammelsgäßchen");
break;
}
case 130377:
{
returnValue = F("Hammelshahn");
break;
}
case 130378:
{
returnValue = F("Hammelsklingenweg");
break;
}
case 130379:
{
returnValue = F("Hammelskopf");
break;
}
case 130380:
{
returnValue = F("Hammelsmarkt");
break;
}
case 130381:
{
returnValue = F("Hammelstall");
break;
}
case 130382:
{
returnValue = F("Hammelstalstr.");
break;
}
case 130383:
{
returnValue = F("Hammelstein");
break;
}
case 130384:
{
returnValue = F("Hammelstr.");
break;
}
case 130385:
{
returnValue = F("Hammelstriebschneise");
break;
}
case 130386:
{
returnValue = F("Hammelstrift");
break;
}
case 130387:
{
returnValue = F("Hammelsweg");
break;
}
case 130388:
{
returnValue = F("Hammeltrift");
break;
}
case 130389:
{
returnValue = F("Hammeltrift-Brücke");
break;
}
case 130390:
{
returnValue = F("Hammeltrogweg");
break;
}
case 130391:
{
returnValue = F("Hammelwarder Außendeich");
break;
}
case 130392:
{
returnValue = F("Hammelwarder Weg");
break;
}
case 130393:
{
returnValue = F("Hammelweg");
break;
}
case 130394:
{
returnValue = F("Hammelwiesen");
break;
}
case 130395:
{
returnValue = F("Hammen");
break;
}
case 130396:
{
returnValue = F("Hammenstiege");
break;
}
case 130397:
{
returnValue = F("Hammenweg");
break;
}
case 130398:
{
returnValue = F("Hammenweilerstr.");
break;
}
case 130399:
{
returnValue = F("Hammepad am Waakhauser Polder");
break;
}
case 130400:
{
returnValue = F("Hammer");
break;
}
case 130401:
{
returnValue = F("Hammer Chaussee");
break;
}
case 130402:
{
returnValue = F("Hammer Dorfstr.");
break;
}
case 130403:
{
returnValue = F("Hammer Dresch");
break;
}
case 130404:
{
returnValue = F("Hammer Gasse");
break;
}
case 130405:
{
returnValue = F("Hammer Kamp");
break;
}
case 130406:
{
returnValue = F("Hammer Kirchweg");
break;
}
case 130407:
{
returnValue = F("Hammer Landstr.");
break;
}
case 130408:
{
returnValue = F("Hammer Mark");
break;
}
case 130409:
{
returnValue = F("Hammer Schanze");
break;
}
case 130410:
{
returnValue = F("Hammer Str.");
break;
}
case 130411:
{
returnValue = F("Hammer Weg");
break;
}
case 130412:
{
returnValue = F("Hammer-Tannen-Str.");
break;
}
case 130413:
{
returnValue = F("Hammeracker");
break;
}
case 130414:
{
returnValue = F("Hammerackerweg");
break;
}
case 130415:
{
returnValue = F("Hammerallee");
break;
}
case 130416:
{
returnValue = F("Hammerau");
break;
}
case 130417:
{
returnValue = F("Hammerau-Ringweg");
break;
}
case 130418:
{
returnValue = F("Hammeraue");
break;
}
case 130419:
{
returnValue = F("Hammerauer Berg");
break;
}
case 130420:
{
returnValue = F("Hammerauer Weg");
break;
}
case 130421:
{
returnValue = F("Hammerbach");
break;
}
case 130422:
{
returnValue = F("Hammerbacher Str.");
break;
}
case 130423:
{
returnValue = F("Hammerbacherstr.");
break;
}
case 130424:
{
returnValue = F("Hammerbachstr.");
break;
}
case 130425:
{
returnValue = F("Hammerbachweg");
break;
}
case 130426:
{
returnValue = F("Hammerbenden");
break;
}
case 130427:
{
returnValue = F("Hammerberg");
break;
}
case 130428:
{
returnValue = F("Hammerbergstr.");
break;
}
case 130429:
{
returnValue = F("Hammerbergweg");
break;
}
case 130430:
{
returnValue = F("Hammerbirkenfeld");
break;
}
case 130431:
{
returnValue = F("Hammerbruch");
break;
}
case 130432:
{
returnValue = F("Hammerbruckweg");
break;
}
case 130433:
{
returnValue = F("Hammerbrücker Str.");
break;
}
case 130434:
{
returnValue = F("Hammerbusch");
break;
}
case 130435:
{
returnValue = F("Hammerbühl");
break;
}
case 130436:
{
returnValue = F("Hammerbühlstr.");
break;
}
case 130437:
{
returnValue = F("Hammerchaussee");
break;
}
case 130438:
{
returnValue = F("Hammerdammweg");
break;
}
case 130439:
{
returnValue = F("Hammerdelle");
break;
}
case 130440:
{
returnValue = F("Hammerecke");
break;
}
case 130441:
{
returnValue = F("Hammerer Graben");
break;
}
case 130442:
{
returnValue = F("Hammerer Weg");
break;
}
case 130443:
{
returnValue = F("Hammerergraben");
break;
}
case 130444:
{
returnValue = F("Hammerfeld");
break;
}
case 130445:
{
returnValue = F("Hammerfeldring");
break;
}
case 130446:
{
returnValue = F("Hammerfeldweg");
break;
}
case 130447:
{
returnValue = F("Hammerfester Str.");
break;
}
case 130448:
{
returnValue = F("Hammerfestweg");
break;
}
case 130449:
{
returnValue = F("Hammerfurtweg");
break;
}
case 130450:
{
returnValue = F("Hammerfähre");
break;
}
case 130451:
{
returnValue = F("Hammergarten");
break;
}
case 130452:
{
returnValue = F("Hammergasse");
break;
}
case 130453:
{
returnValue = F("Hammergraben");
break;
}
case 130454:
{
returnValue = F("Hammergrabengrund");
break;
}
case 130455:
{
returnValue = F("Hammergrabenstr.");
break;
}
case 130456:
{
returnValue = F("Hammergrund");
break;
}
case 130457:
{
returnValue = F("Hammergrundstr.");
break;
}
case 130458:
{
returnValue = F("Hammergut");
break;
}
case 130459:
{
returnValue = F("Hammergutstr.");
break;
}
case 130460:
{
returnValue = F("Hammergäßle");
break;
}
case 130461:
{
returnValue = F("Hammergäßlein");
break;
}
case 130462:
{
returnValue = F("Hammerhalde");
break;
}
case 130463:
{
returnValue = F("Hammerhaldenweg");
break;
}
case 130464:
{
returnValue = F("Hammerhard");
break;
}
case 130465:
{
returnValue = F("Hammerharlesberg");
break;
}
case 130466:
{
returnValue = F("Hammerhelle");
break;
}
case 130467:
{
returnValue = F("Hammerhof");
break;
}
case 130468:
{
returnValue = F("Hammerhofer Weg");
break;
}
case 130469:
{
returnValue = F("Hammerholz");
break;
}
case 130470:
{
returnValue = F("Hammerhöhe");
break;
}
case 130471:
{
returnValue = F("Hammerhütter Weg");
break;
}
case 130472:
{
returnValue = F("Hammerkamp");
break;
}
case 130473:
{
returnValue = F("Hammerke");
break;
}
case 130474:
{
returnValue = F("Hammerkeweg");
break;
}
case 130475:
{
returnValue = F("Hammerklausenweg");
break;
}
case 130476:
{
returnValue = F("Hammerkogel");
break;
}
case 130477:
{
returnValue = F("Hammerkogel (o.)");
break;
}
case 130478:
{
returnValue = F("Hammerkweg");
break;
}
case 130479:
{
returnValue = F("Hammerlaithen");
break;
}
case 130480:
{
returnValue = F("Hammerlbauerweg");
break;
}
case 130481:
{
returnValue = F("Hammerleite");
break;
}
case 130482:
{
returnValue = F("Hammerleiten");
break;
}
case 130483:
{
returnValue = F("Hammerleithe");
break;
}
case 130484:
{
returnValue = F("Hammerleithener Weg");
break;
}
case 130485:
{
returnValue = F("Hammerletten");
break;
}
case 130486:
{
returnValue = F("Hammerleubsdorfer Str.");
break;
}
case 130487:
{
returnValue = F("Hammerlinie");
break;
}
case 130488:
{
returnValue = F("Hammerlochstr.");
break;
}
case 130489:
{
returnValue = F("Hammerlstr.");
break;
}
case 130490:
{
returnValue = F("Hammerlweg");
break;
}
case 130491:
{
returnValue = F("Hammermanns Weg");
break;
}
case 130492:
{
returnValue = F("Hammermatt");
break;
}
case 130493:
{
returnValue = F("Hammermattenweg");
break;
}
case 130494:
{
returnValue = F("Hammermattstr.");
break;
}
case 130495:
{
returnValue = F("Hammermeisterstr.");
break;
}
case 130496:
{
returnValue = F("Hammermühle");
break;
}
case 130497:
{
returnValue = F("Hammermühlenbrücke");
break;
}
case 130498:
{
returnValue = F("Hammermühlenweg");
break;
}
case 130499:
{
returnValue = F("Hammermühler Str.");
break;
}
case 130500:
{
returnValue = F("Hammermühlsteig");
break;
}
case 130501:
{
returnValue = F("Hammermühlstr.");
break;
}
case 130502:
{
returnValue = F("Hammermühlweg");
break;
}
case 130503:
{
returnValue = F("Hammernock");
break;
}
case 130504:
{
returnValue = F("Hammerpark");
break;
}
case 130505:
{
returnValue = F("Hammerparkweg");
break;
}
case 130506:
{
returnValue = F("Hammerphilipsburg");
break;
}
case 130507:
{
returnValue = F("Hammerplatz");
break;
}
case 130508:
{
returnValue = F("Hammerrangenweg");
break;
}
case 130509:
{
returnValue = F("Hammerrasen");
break;
}
case 130510:
{
returnValue = F("Hammerrödchen");
break;
}
case 130511:
{
returnValue = F("Hammersbacher Fußweg");
break;
}
case 130512:
{
returnValue = F("Hammersbacher Str.");
break;
}
case 130513:
{
returnValue = F("Hammersbacher Weg");
break;
}
case 130514:
{
returnValue = F("Hammersbachweg");
break;
}
case 130515:
{
returnValue = F("Hammersbecker Str.");
break;
}
case 130516:
{
returnValue = F("Hammersbecker Weg");
break;
}
case 130517:
{
returnValue = F("Hammersbecker Wiesen");
break;
}
case 130518:
{
returnValue = F("Hammersberg");
break;
}
case 130519:
{
returnValue = F("Hammersberg Rundweg");
break;
}
case 130520:
{
returnValue = F("Hammersbergweg");
break;
}
case 130521:
{
returnValue = F("Hammersbrunnenweg");
break;
}
case 130522:
{
returnValue = F("Hammerscher Weg");
break;
}
case 130523:
{
returnValue = F("Hammerschgasse");
break;
}
case 130524:
{
returnValue = F("Hammerschlag");
break;
}
case 130525:
{
returnValue = F("Hammerschlagweg");
break;
}
case 130526:
{
returnValue = F("Hammerschmidstr.");
break;
}
case 130527:
{
returnValue = F("Hammerschmidt Allee");
break;
}
case 130528:
{
returnValue = F("Hammerschmidtbogen");
break;
}
case 130529:
{
returnValue = F("Hammerschmidtplatz");
break;
}
case 130530:
{
returnValue = F("Hammerschmidtstr.");
break;
}
case 130531:
{
returnValue = F("Hammerschmidtweg");
break;
}
case 130532:
{
returnValue = F("Hammerschmiede");
break;
}
case 130533:
{
returnValue = F("Hammerschmiedeweg");
break;
}
case 130534:
{
returnValue = F("Hammerschmiedgasse");
break;
}
case 130535:
{
returnValue = F("Hammerschmiedleiten");
break;
}
case 130536:
{
returnValue = F("Hammerschmiedstr.");
break;
}
case 130537:
{
returnValue = F("Hammerschmiedsweg");
break;
}
case 130538:
{
returnValue = F("Hammerschmiedtstr.");
break;
}
case 130539:
{
returnValue = F("Hammerschmiedweg");
break;
}
case 130540:
{
returnValue = F("Hammerschmitte");
break;
}
case 130541:
{
returnValue = F("Hammersdorf");
break;
}
case 130542:
{
returnValue = F("Hammerseestr.");
break;
}
case 130543:
{
returnValue = F("Hammersenstr.");
break;
}
case 130544:
{
returnValue = F("Hammersfeld");
break;
}
case 130545:
{
returnValue = F("Hammersheck");
break;
}
case 130546:
{
returnValue = F("Hammerskamp");
break;
}
case 130547:
{
returnValue = F("Hammerspitzweg");
break;
}
case 130548:
{
returnValue = F("Hammerstadtstr.");
break;
}
case 130549:
{
returnValue = F("Hammerstadtweg");
break;
}
case 130550:
{
returnValue = F("Hammerstallstr.");
break;
}
case 130551:
{
returnValue = F("Hammerstatt");
break;
}
case 130552:
{
returnValue = F("Hammerstattstr.");
break;
}
case 130553:
{
returnValue = F("Hammerstedter Weg");
break;
}
case 130554:
{
returnValue = F("Hammersteg");
break;
}
case 130555:
{
returnValue = F("Hammersteig");
break;
}
case 130556:
{
returnValue = F("Hammerstein");
break;
}
case 130557:
{
returnValue = F("Hammersteiner Allee");
break;
}
case 130558:
{
returnValue = F("Hammersteiner Str.");
break;
}
case 130559:
{
returnValue = F("Hammersteinplatz");
break;
}
case 130560:
{
returnValue = F("Hammersteinstr.");
break;
}
case 130561:
{
returnValue = F("Hammersteinweg");
break;
}
case 130562:
{
returnValue = F("Hammerstetter Str.");
break;
}
case 130563:
{
returnValue = F("Hammerstetterstr.");
break;
}
case 130564:
{
returnValue = F("Hammerstielstr.");
break;
}
case 130565:
{
returnValue = F("Hammerstielwandweg");
break;
}
case 130566:
{
returnValue = F("Hammerstielweg");
break;
}
case 130567:
{
returnValue = F("Hammerstoft");
break;
}
case 130568:
{
returnValue = F("Hammerstr.");
break;
}
case 130569:
{
returnValue = F("Hammerstraß´l");
break;
}
case 130570:
{
returnValue = F("Hammerstädtliweg");
break;
}
case 130571:
{
returnValue = F("Hammerstättle");
break;
}
case 130572:
{
returnValue = F("Hammerstützenweg");
break;
}
case 130573:
{
returnValue = F("Hammersweg");
break;
}
case 130574:
{
returnValue = F("Hammertal");
break;
}
case 130575:
{
returnValue = F("Hammertaler Str.");
break;
}
case 130576:
{
returnValue = F("Hammertalweg");
break;
}
case 130577:
{
returnValue = F("Hammerteich");
break;
}
case 130578:
{
returnValue = F("Hammerteichstr.");
break;
}
case 130579:
{
returnValue = F("Hammertorweg");
break;
}
case 130580:
{
returnValue = F("Hammertrathstr.");
break;
}
case 130581:
{
returnValue = F("Hammerwasen");
break;
}
case 130582:
{
returnValue = F("Hammerweg");
break;
}
case 130583:
{
returnValue = F("Hammerweg Kreuz");
break;
}
case 130584:
{
returnValue = F("Hammerwegsiedlung");
break;
}
case 130585:
{
returnValue = F("Hammerweide");
break;
}
case 130586:
{
returnValue = F("Hammerwerk");
break;
}
case 130587:
{
returnValue = F("Hammerwerksbrücke");
break;
}
case 130588:
{
returnValue = F("Hammerwerkstr.");
break;
}
case 130589:
{
returnValue = F("Hammerwies");
break;
}
case 130590:
{
returnValue = F("Hammerwiese");
break;
}
case 130591:
{
returnValue = F("Hammerwiesenstr.");
break;
}
case 130592:
{
returnValue = F("Hammerwiesenweg");
break;
}
case 130593:
{
returnValue = F("Hammeröd");
break;
}
case 130594:
{
returnValue = F("Hammeröder Str.");
break;
}
case 130595:
{
returnValue = F("Hammesberg");
break;
}
case 130596:
{
returnValue = F("Hammesberger Str.");
break;
}
case 130597:
{
returnValue = F("Hammesberger Weg");
break;
}
case 130598:
{
returnValue = F("Hammestr.");
break;
}
case 130599:
{
returnValue = F("Hammetweiler Str.");
break;
}
case 130600:
{
returnValue = F("Hammeweg");
break;
}
case 130601:
{
returnValue = F("Hammfelddamm");
break;
}
case 130602:
{
returnValue = F("Hammfeldweg");
break;
}
case 130603:
{
returnValue = F("Hammgasse");
break;
}
case 130604:
{
returnValue = F("Hammhof");
break;
}
case 130605:
{
returnValue = F("Hamminkelner Landstr.");
break;
}
case 130606:
{
returnValue = F("Hamminkelner Str.");
break;
}
case 130607:
{
returnValue = F("Hammkamp");
break;
}
case 130608:
{
returnValue = F("Hammkneik");
break;
}
case 130609:
{
returnValue = F("Hammoor");
break;
}
case 130610:
{
returnValue = F("Hammoorer Chaussee");
break;
}
case 130611:
{
returnValue = F("Hammoorweg");
break;
}
case 130612:
{
returnValue = F("Hammpfad");
break;
}
case 130613:
{
returnValue = F("Hammricher Weg");
break;
}
case 130614:
{
returnValue = F("Hammrichhausen");
break;
}
case 130615:
{
returnValue = F("Hammrichstr.");
break;
}
case 130616:
{
returnValue = F("Hammrichweg");
break;
}
case 130617:
{
returnValue = F("Hamms Gasse");
break;
}
case 130618:
{
returnValue = F("Hammsche Land");
break;
}
case 130619:
{
returnValue = F("Hammscher Kerkweg");
break;
}
case 130620:
{
returnValue = F("Hammstr.");
break;
}
case 130621:
{
returnValue = F("Hammweg");
break;
}
case 130622:
{
returnValue = F("Hammäcker");
break;
}
case 130623:
{
returnValue = F("Hamoirstr.");
break;
}
case 130624:
{
returnValue = F("Hampelsgasse");
break;
}
case 130625:
{
returnValue = F("Hampenberg");
break;
}
case 130626:
{
returnValue = F("Hampenhauser Str.");
break;
}
case 130627:
{
returnValue = F("Hampentwete");
break;
}
case 130628:
{
returnValue = F("Hampersdorf");
break;
}
case 130629:
{
returnValue = F("Hampersdorfer Weg");
break;
}
case 130630:
{
returnValue = F("Hampeschstr.");
break;
}
case 130631:
{
returnValue = F("Hampesweg");
break;
}
case 130632:
{
returnValue = F("Hampfhof");
break;
}
case 130633:
{
returnValue = F("Hampfweg");
break;
}
case 130634:
{
returnValue = F("Hamphof");
break;
}
case 130635:
{
returnValue = F("Hampittelknapp");
break;
}
case 130636:
{
returnValue = F("Hampoel");
break;
}
case 130637:
{
returnValue = F("Hamppstr.");
break;
}
case 130638:
{
returnValue = F("Hamscher Weiher");
break;
}
case 130639:
{
returnValue = F("Hamscherhof");
break;
}
case 130640:
{
returnValue = F("Hamscherstr.");
break;
}
case 130641:
{
returnValue = F("Hamscherweg");
break;
}
case 130642:
{
returnValue = F("Hamschwerster Weg");
break;
}
case 130643:
{
returnValue = F("Hamsfeld");
break;
}
case 130644:
{
returnValue = F("Hamsterbau");
break;
}
case 130645:
{
returnValue = F("Hamsterberg");
break;
}
case 130646:
{
returnValue = F("Hamsterbreite");
break;
}
case 130647:
{
returnValue = F("Hamsterbrückchen");
break;
}
case 130648:
{
returnValue = F("Hamsterbusch");
break;
}
case 130649:
{
returnValue = F("Hamstereck");
break;
}
case 130650:
{
returnValue = F("Hamstergasse");
break;
}
case 130651:
{
returnValue = F("Hamstergrund");
break;
}
case 130652:
{
returnValue = F("Hamsterpfad");
break;
}
case 130653:
{
returnValue = F("Hamstersteig");
break;
}
case 130654:
{
returnValue = F("Hamsterstr.");
break;
}
case 130655:
{
returnValue = F("Hamsterweg");
break;
}
case 130656:
{
returnValue = F("Hamstr.");
break;
}
case 130657:
{
returnValue = F("Hamstruper Str.");
break;
}
case 130658:
{
returnValue = F("Hamsunstr.");
break;
}
case 130659:
{
returnValue = F("Hamswehrumer Maarweg");
break;
}
case 130660:
{
returnValue = F("Hamswehrumer Meedenweg");
break;
}
case 130661:
{
returnValue = F("Hamswehrumer Reihe");
break;
}
case 130662:
{
returnValue = F("Hamswester Str.");
break;
}
case 130663:
{
returnValue = F("Hamte-Kamp");
break;
}
case 130664:
{
returnValue = F("Hamtorplatz");
break;
}
case 130665:
{
returnValue = F("Hamtorstr.");
break;
}
case 130666:
{
returnValue = F("Hamtorwall");
break;
}
case 130667:
{
returnValue = F("Hamwarder Str.");
break;
}
case 130668:
{
returnValue = F("Hamwarder Weg");
break;
}
case 130669:
{
returnValue = F("Hamweg");
break;
}
case 130670:
{
returnValue = F("Hamwehr");
break;
}
case 130671:
{
returnValue = F("Hamwiede");
break;
}
case 130672:
{
returnValue = F("Hamwinsel");
break;
}
case 130673:
{
returnValue = F("Hanacker Weg");
break;
}
case 130674:
{
returnValue = F("Hanallee");
break;
}
case 130675:
{
returnValue = F("Hanamannstr.");
break;
}
case 130676:
{
returnValue = F("Hanapfelstr.");
break;
}
case 130677:
{
returnValue = F("Hanauer Gasse");
break;
}
case 130678:
{
returnValue = F("Hanauer Hof");
break;
}
case 130679:
{
returnValue = F("Hanauer Landstr.");
break;
}
case 130680:
{
returnValue = F("Hanauer Pfad");
break;
}
case 130681:
{
returnValue = F("Hanauer Platz");
break;
}
case 130682:
{
returnValue = F("Hanauer Ring");
break;
}
case 130683:
{
returnValue = F("Hanauer Steinschneise");
break;
}
case 130684:
{
returnValue = F("Hanauer Str.");
break;
}
case 130685:
{
returnValue = F("Hanauer Vorstadt");
break;
}
case 130686:
{
returnValue = F("Hanauer Weg");
break;
}
case 130687:
{
returnValue = F("Hanauer-Geräumt");
break;
}
case 130688:
{
returnValue = F("Hanauerlandstr.");
break;
}
case 130689:
{
returnValue = F("Hanauerring");
break;
}
case 130690:
{
returnValue = F("Hanauerstr.");
break;
}
case 130691:
{
returnValue = F("Hanauerweg");
break;
}
case 130692:
{
returnValue = F("Hanaustr.");
break;
}
case 130693:
{
returnValue = F("Hanauweg");
break;
}
case 130694:
{
returnValue = F("Hanbacher Str.");
break;
}
case 130695:
{
returnValue = F("Hanbrucher Str.");
break;
}
case 130696:
{
returnValue = F("Hanckwitzstr.");
break;
}
case 130697:
{
returnValue = F("Hancobsloh");
break;
}
case 130698:
{
returnValue = F("Handal");
break;
}
case 130699:
{
returnValue = F("Handbachstr.");
break;
}
case 130700:
{
returnValue = F("Handballweg");
break;
}
case 130701:
{
returnValue = F("Handbeilweg");
break;
}
case 130702:
{
returnValue = F("Handbergerweg");
break;
}
case 130703:
{
returnValue = F("Handelisgartenweg");
break;
}
case 130704:
{
returnValue = F("Handeloher Str.");
break;
}
case 130705:
{
returnValue = F("Handeloher Weg");
break;
}
case 130706:
{
returnValue = F("Handelshof");
break;
}
case 130707:
{
returnValue = F("Handelspark");
break;
}
case 130708:
{
returnValue = F("Handelsraße");
break;
}
case 130709:
{
returnValue = F("Handelsriege");
break;
}
case 130710:
{
returnValue = F("Handelsring");
break;
}
case 130711:
{
returnValue = F("Handelsstr.");
break;
}
case 130712:
{
returnValue = F("Handelstr.");
break;
}
case 130713:
{
returnValue = F("Handelsweg");
break;
}
case 130714:
{
returnValue = F("Handenzhofener Str.");
break;
}
case 130715:
{
returnValue = F("Hander Weg");
break;
}
case 130716:
{
returnValue = F("Handerfeld");
break;
}
case 130717:
{
returnValue = F("Handerstr.");
break;
}
case 130718:
{
returnValue = F("Handerweg");
break;
}
case 130719:
{
returnValue = F("Handewitt-Busch");
break;
}
case 130720:
{
returnValue = F("Handewitt-West");
break;
}
case 130721:
{
returnValue = F("Handewitter Str.");
break;
}
case 130722:
{
returnValue = F("Handfeld");
break;
}
case 130723:
{
returnValue = F("Handfeldstr.");
break;
}
case 130724:
{
returnValue = F("Handfähre");
break;
}
case 130725:
{
returnValue = F("Handgasse");
break;
}
case 130726:
{
returnValue = F("Handhecke");
break;
}
case 130727:
{
returnValue = F("Handieker Damm");
break;
}
case 130728:
{
returnValue = F("Handirkweg");
break;
}
case 130729:
{
returnValue = F("Handlaber Str.");
break;
}
case 130730:
{
returnValue = F("Handlbergstr.");
break;
}
case 130731:
{
returnValue = F("Handling");
break;
}
case 130732:
{
returnValue = F("Handollweg");
break;
}
case 130733:
{
returnValue = F("Handorfer Kirchstieg");
break;
}
case 130734:
{
returnValue = F("Handorfer Str.");
break;
}
case 130735:
{
returnValue = F("Handorfer Weg");
break;
}
case 130736:
{
returnValue = F("Handrichs Hof");
break;
}
case 130737:
{
returnValue = F("Handrickstr.");
break;
}
case 130738:
{
returnValue = F("Handrij-Zejler-Str.");
break;
}
case 130739:
{
returnValue = F("Handruper Str.");
break;
}
case 130740:
{
returnValue = F("Handscheuerlesweg");
break;
}
case 130741:
{
returnValue = F("Handschuhfelderweg");
break;
}
case 130742:
{
returnValue = F("Handschuhpädel");
break;
}
case 130743:
{
returnValue = F("Handschuhsheimer Grenzweg");
break;
}
case 130744:
{
returnValue = F("Handschuhsheimer Landstr.");
break;
}
case 130745:
{
returnValue = F("Handschuhsheimer Str.");
break;
}
case 130746:
{
returnValue = F("Handseilerei");
break;
}
case 130747:
{
returnValue = F("Handstr.");
break;
}
case 130748:
{
returnValue = F("Handtal");
break;
}
case 130749:
{
returnValue = F("Handtalstr.");
break;
}
case 130750:
{
returnValue = F("Handthal-Wanderweg");
break;
}
case 130751:
{
returnValue = F("Handthaler Str.");
break;
}
case 130752:
{
returnValue = F("Handtuchstr.");
break;
}
case 130753:
{
returnValue = F("Handtuchwiese");
break;
}
case 130754:
{
returnValue = F("Handweg");
break;
}
case 130755:
{
returnValue = F("Handweiser");
break;
}
case 130756:
{
returnValue = F("Handweiserstr.");
break;
}
case 130757:
{
returnValue = F("Handwercherstr.");
break;
}
case 130758:
{
returnValue = F("Handwerk");
break;
}
case 130759:
{
returnValue = F("Handwerker-Passage");
break;
}
case 130760:
{
returnValue = F("Handwerkergasse");
break;
}
case 130761:
{
returnValue = F("Handwerkerhof");
break;
}
case 130762:
{
returnValue = F("Handwerkerpark");
break;
}
case 130763:
{
returnValue = F("Handwerkerplatz");
break;
}
case 130764:
{
returnValue = F("Handwerkerring");
break;
}
case 130765:
{
returnValue = F("Handwerkersteg");
break;
}
case 130766:
{
returnValue = F("Handwerkerstr.");
break;
}
case 130767:
{
returnValue = F("Handwerkerwall");
break;
}
case 130768:
{
returnValue = F("Handwerkerweg");
break;
}
case 130769:
{
returnValue = F("Handwerkerweide");
break;
}
case 130770:
{
returnValue = F("Handwerkerzentrum");
break;
}
case 130771:
{
returnValue = F("Handwerksgasse");
break;
}
case 130772:
{
returnValue = F("Handwerkshof");
break;
}
case 130773:
{
returnValue = F("Handwerksstr.");
break;
}
case 130774:
{
returnValue = F("Handwerkstr.");
break;
}
case 130775:
{
returnValue = F("Handwerksweg");
break;
}
case 130776:
{
returnValue = F("Handwieserweg");
break;
}
case 130777:
{
returnValue = F("Handwiserweg");
break;
}
case 130778:
{
returnValue = F("Handäckerweg");
break;
}
case 130779:
{
returnValue = F("Hanebargsweg");
break;
}
case 130780:
{
returnValue = F("Haneberg");
break;
}
case 130781:
{
returnValue = F("Hanebrink");
break;
}
case 130782:
{
returnValue = F("Haneburger Str.");
break;
}
case 130783:
{
returnValue = F("Hanebuthshof");
break;
}
case 130784:
{
returnValue = F("Hanebuthwinkel");
break;
}
case 130785:
{
returnValue = F("Haneckstr.");
break;
}
case 130786:
{
returnValue = F("Hanefeld-Wykhof");
break;
}
case 130787:
{
returnValue = F("Hanegge");
break;
}
case 130788:
{
returnValue = F("Hanekamp");
break;
}
case 130789:
{
returnValue = F("Hanekstr.");
break;
}
case 130790:
{
returnValue = F("Hanelanden");
break;
}
case 130791:
{
returnValue = F("Hanemannsgäßchen");
break;
}
case 130792:
{
returnValue = F("Hanemannstr.");
break;
}
case 130793:
{
returnValue = F("Hanemicker Weg");
break;
}
case 130794:
{
returnValue = F("Hanenpatt");
break;
}
case 130795:
{
returnValue = F("Hanenstr.");
break;
}
case 130796:
{
returnValue = F("Hanert");
break;
}
case 130797:
{
returnValue = F("Hanertstr.");
break;
}
case 130798:
{
returnValue = F("Haneschstr.");
break;
}
case 130799:
{
returnValue = F("Haneweg");
break;
}
case 130800:
{
returnValue = F("Hanewinkelsgang");
break;
}
case 130801:
{
returnValue = F("Hanfacker");
break;
}
case 130802:
{
returnValue = F("Hanfackersteige");
break;
}
case 130803:
{
returnValue = F("Hanfackerstr.");
break;
}
case 130804:
{
returnValue = F("Hanfackerweg");
break;
}
case 130805:
{
returnValue = F("Hanfbachstr.");
break;
}
case 130806:
{
returnValue = F("Hanfberg");
break;
}
case 130807:
{
returnValue = F("Hanfbergstr.");
break;
}
case 130808:
{
returnValue = F("Hanfbitz");
break;
}
case 130809:
{
returnValue = F("Hanfbreite");
break;
}
case 130810:
{
returnValue = F("Hanfbündten");
break;
}
case 130811:
{
returnValue = F("Hanfbündtenstr.");
break;
}
case 130812:
{
returnValue = F("Hanfbündtweg");
break;
}
case 130813:
{
returnValue = F("Hanfelder Hügel");
break;
}
case 130814:
{
returnValue = F("Hanfelder Str.");
break;
}
case 130815:
{
returnValue = F("Hanferstr.");
break;
}
case 130816:
{
returnValue = F("Hanffeld");
break;
}
case 130817:
{
returnValue = F("Hanfgarten");
break;
}
case 130818:
{
returnValue = F("Hanfgartenstr.");
break;
}
case 130819:
{
returnValue = F("Hanfgartenweg");
break;
}
case 130820:
{
returnValue = F("Hanfgasse");
break;
}
case 130821:
{
returnValue = F("Hanfgraben");
break;
}
case 130822:
{
returnValue = F("Hanfgrundstr.");
break;
}
case 130823:
{
returnValue = F("Hanfgärten");
break;
}
case 130824:
{
returnValue = F("Hanfgärtenstr.");
break;
}
case 130825:
{
returnValue = F("Hanfgärtenweg");
break;
}
case 130826:
{
returnValue = F("Hanfgässle");
break;
}
case 130827:
{
returnValue = F("Hanfgäßchen");
break;
}
case 130828:
{
returnValue = F("Hanfhof");
break;
}
case 130829:
{
returnValue = F("Hanfland");
break;
}
case 130830:
{
returnValue = F("Hanflandstr.");
break;
}
case 130831:
{
returnValue = F("Hanflandweg");
break;
}
case 130832:
{
returnValue = F("Hanfländer");
break;
}
case 130833:
{
returnValue = F("Hanfländerstr.");
break;
}
case 130834:
{
returnValue = F("Hanfländerweg");
break;
}
case 130835:
{
returnValue = F("Hanfmarkt");
break;
}
case 130836:
{
returnValue = F("Hanfretze");
break;
}
case 130837:
{
returnValue = F("Hanfrezi Fußweg");
break;
}
case 130838:
{
returnValue = F("Hanfriedenstr.");
break;
}
case 130839:
{
returnValue = F("Hanfruthenweg");
break;
}
case 130840:
{
returnValue = F("Hanfsack");
break;
}
case 130841:
{
returnValue = F("Hanfsackgasse");
break;
}
case 130842:
{
returnValue = F("Hanfstieg");
break;
}
case 130843:
{
returnValue = F("Hanfstiege");
break;
}
case 130844:
{
returnValue = F("Hanfstr.");
break;
}
case 130845:
{
returnValue = F("Hanfstücker");
break;
}
case 130846:
{
returnValue = F("Hanftalstr.");
break;
}
case 130847:
{
returnValue = F("Hanftsgasse");
break;
}
case 130848:
{
returnValue = F("Hanfweg");
break;
}
case 130849:
{
returnValue = F("Hanfweggarten");
break;
}
case 130850:
{
returnValue = F("Hanfweiher");
break;
}
case 130851:
{
returnValue = F("Hanfwiesen");
break;
}
case 130852:
{
returnValue = F("Hanfwiesenstr.");
break;
}
case 130853:
{
returnValue = F("Hanfäcker");
break;
}
case 130854:
{
returnValue = F("Hanfäckerweg");
break;
}
case 130855:
{
returnValue = F("Hang");
break;
}
case 130856:
{
returnValue = F("Hang an der Peter-Ruster-Str.");
break;
}
case 130857:
{
returnValue = F("Hang-Schneise");
break;
}
case 130858:
{
returnValue = F("Hangarder Str.");
break;
}
case 130859:
{
returnValue = F("Hangarder Weg");
break;
}
case 130860:
{
returnValue = F("Hangarsteinstr.");
break;
}
case 130861:
{
returnValue = F("Hangarsteinweg");
break;
}
case 130862:
{
returnValue = F("Hangarsweg");
break;
}
case 130863:
{
returnValue = F("Hangbaumstr.");
break;
}
case 130864:
{
returnValue = F("Hangberger Mühle");
break;
}
case 130865:
{
returnValue = F("Hangblick");
break;
}
case 130866:
{
returnValue = F("Hangbogen");
break;
}
case 130867:
{
returnValue = F("Hangbuschweg");
break;
}
case 130868:
{
returnValue = F("Hangeberg");
break;
}
case 130869:
{
returnValue = F("Hangelarer Str.");
break;
}
case 130870:
{
returnValue = F("Hangelarer Weg");
break;
}
case 130871:
{
returnValue = F("Hangelbuche");
break;
}
case 130872:
{
returnValue = F("Hangelburg");
break;
}
case 130873:
{
returnValue = F("Hangelesweg");
break;
}
case 130874:
{
returnValue = F("Hangelgasse");
break;
}
case 130875:
{
returnValue = F("Hangelocher Weg");
break;
}
case 130876:
{
returnValue = F("Hangelsberger Chaussee");
break;
}
case 130877:
{
returnValue = F("Hangelsberger Weg");
break;
}
case 130878:
{
returnValue = F("Hangelsbergweg");
break;
}
case 130879:
{
returnValue = F("Hangelsteinring");
break;
}
case 130880:
{
returnValue = F("Hangelsteinstr.");
break;
}
case 130881:
{
returnValue = F("Hangelswiese");
break;
}
case 130882:
{
returnValue = F("Hangen Weisheimer Str.");
break;
}
case 130883:
{
returnValue = F("Hangenau");
break;
}
case 130884:
{
returnValue = F("Hangenbach");
break;
}
case 130885:
{
returnValue = F("Hangendeinbacher Str.");
break;
}
case 130886:
{
returnValue = F("Hangendenbuch");
break;
}
case 130887:
{
returnValue = F("Hangender Weg");
break;
}
case 130888:
{
returnValue = F("Hangener Str.");
break;
}
case 130889:
{
returnValue = F("Hangeneystr.");
break;
}
case 130890:
{
returnValue = F("Hangenham");
break;
}
case 130891:
{
returnValue = F("Hangenkamp");
break;
}
case 130892:
{
returnValue = F("Hangenleithen");
break;
}
case 130893:
{
returnValue = F("Hangenmeilinger Str.");
break;
}
case 130894:
{
returnValue = F("Hangensteinallee");
break;
}
case 130895:
{
returnValue = F("Hangensteinstr.");
break;
}
case 130896:
{
returnValue = F("Hangenstr.");
break;
}
case 130897:
{
returnValue = F("Hangental");
break;
}
case 130898:
{
returnValue = F("Hangenweg");
break;
}
case 130899:
{
returnValue = F("Hangenwiesenweg");
break;
}
case 130900:
{
returnValue = F("Hanger Weg");
break;
}
case 130901:
{
returnValue = F("Hangerbergstr.");
break;
}
case 130902:
{
returnValue = F("Hangerersteinweg");
break;
}
case 130903:
{
returnValue = F("Hangergasse");
break;
}
case 130904:
{
returnValue = F("Hangerleite");
break;
}
case 130905:
{
returnValue = F("Hangerstr.");
break;
}
case 130906:
{
returnValue = F("Hangertweg");
break;
}
case 130907:
{
returnValue = F("Hangerweg");
break;
}
case 130908:
{
returnValue = F("Hangeräthsweg");
break;
}
case 130909:
{
returnValue = F("Hangeswiesen");
break;
}
case 130910:
{
returnValue = F("Hangeswiesenweg");
break;
}
case 130911:
{
returnValue = F("Hangetal");
break;
}
case 130912:
{
returnValue = F("Hangetweg");
break;
}
case 130913:
{
returnValue = F("Hangfeld");
break;
}
case 130914:
{
returnValue = F("Hanggasse");
break;
}
case 130915:
{
returnValue = F("Hanghof");
break;
}
case 130916:
{
returnValue = F("Hangkamerstr.");
break;
}
case 130917:
{
returnValue = F("Hangkamp");
break;
}
case 130918:
{
returnValue = F("Hangkante");
break;
}
case 130919:
{
returnValue = F("Hanglehne");
break;
}
case 130920:
{
returnValue = F("Hangleite");
break;
}
case 130921:
{
returnValue = F("Hangleiten");
break;
}
case 130922:
{
returnValue = F("Hanglichstr.");
break;
}
case 130923:
{
returnValue = F("Hangmoosweg");
break;
}
case 130924:
{
returnValue = F("Hangnachweg");
break;
}
case 130925:
{
returnValue = F("Hangohrstr.");
break;
}
case 130926:
{
returnValue = F("Hangpfad");
break;
}
case 130927:
{
returnValue = F("Hangpromenade");
break;
}
case 130928:
{
returnValue = F("Hangrundweg");
break;
}
case 130929:
{
returnValue = F("Hangsbergweg");
break;
}
case 130930:
{
returnValue = F("Hangschachenweg");
break;
}
case 130931:
{
returnValue = F("Hangsiedlung");
break;
}
case 130932:
{
returnValue = F("Hangsstr.");
break;
}
case 130933:
{
returnValue = F("Hangstein");
break;
}
case 130934:
{
returnValue = F("Hangsteinstr.");
break;
}
case 130935:
{
returnValue = F("Hangstr.");
break;
}
case 130936:
{
returnValue = F("Hangtribüne");
break;
}
case 130937:
{
returnValue = F("Hangweg");
break;
}
case 130938:
{
returnValue = F("Hangwegle");
break;
}
case 130939:
{
returnValue = F("Hangwegpfädchen");
break;
}
case 130940:
{
returnValue = F("Hangwerfeld");
break;
}
case 130941:
{
returnValue = F("Hangwerweg");
break;
}
case 130942:
{
returnValue = F("Hangäckerweg");
break;
}
case 130943:
{
returnValue = F("Hanhardts Kamp");
break;
}
case 130944:
{
returnValue = F("Hanhofer Str.");
break;
}
case 130945:
{
returnValue = F("Haniel Park");
break;
}
case 130946:
{
returnValue = F("Haniel-Treppe");
break;
}
case 130947:
{
returnValue = F("Hanielstr.");
break;
}
case 130948:
{
returnValue = F("Hanikerweg");
break;
}
case 130949:
{
returnValue = F("Hanischallee");
break;
}
case 130950:
{
returnValue = F("Hanischweg");
break;
}
case 130951:
{
returnValue = F("Hanissenweg");
break;
}
case 130952:
{
returnValue = F("Hanitzhalde");
break;
}
case 130953:
{
returnValue = F("Hankaweg");
break;
}
case 130954:
{
returnValue = F("Hankehübelweg");
break;
}
case 130955:
{
returnValue = F("Hankelstr.");
break;
}
case 130956:
{
returnValue = F("Hankelweg");
break;
}
case 130957:
{
returnValue = F("Hanken-Jüsken-Str.");
break;
}
case 130958:
{
returnValue = F("Hankenberg");
break;
}
case 130959:
{
returnValue = F("Hankenbosteler Str.");
break;
}
case 130960:
{
returnValue = F("Hankenfeld");
break;
}
case 130961:
{
returnValue = F("Hankengasse");
break;
}
case 130962:
{
returnValue = F("Hankensbütteler Str.");
break;
}
case 130963:
{
returnValue = F("Hankenstr.");
break;
}
case 130964:
{
returnValue = F("Hankensweg");
break;
}
case 130965:
{
returnValue = F("Hankepank");
break;
}
case 130966:
{
returnValue = F("Hankerfeld");
break;
}
case 130967:
{
returnValue = F("Hankerstr.");
break;
}
case 130968:
{
returnValue = F("Hankertsmühlsträßchen");
break;
}
case 130969:
{
returnValue = F("Hankhauser Weg");
break;
}
case 130970:
{
returnValue = F("Hankhausermoorweg");
break;
}
case 130971:
{
returnValue = F("Hankhofstr.");
break;
}
case 130972:
{
returnValue = F("Hanloh");
break;
}
case 130973:
{
returnValue = F("Hann. Münden, Bahnhof/ZOB");
break;
}
case 130974:
{
returnValue = F("Hann. Mündener Str.");
break;
}
case 130975:
{
returnValue = F("Hanna-Achenbach-Weg");
break;
}
case 130976:
{
returnValue = F("Hanna-Arendt-Str.");
break;
}
case 130977:
{
returnValue = F("Hanna-Bernheim-Str.");
break;
}
case 130978:
{
returnValue = F("Hanna-Brauweiler-Str.");
break;
}
case 130979:
{
returnValue = F("Hanna-Harder-Str.");
break;
}
case 130980:
{
returnValue = F("Hanna-Heiber-Weg");
break;
}
case 130981:
{
returnValue = F("Hanna-Jursch-Str.");
break;
}
case 130982:
{
returnValue = F("Hanna-Keil-Str.");
break;
}
case 130983:
{
returnValue = F("Hanna-Kirchner-Str.");
break;
}
case 130984:
{
returnValue = F("Hanna-Lucas-Str.");
break;
}
case 130985:
{
returnValue = F("Hanna-Meuter-Str.");
break;
}
case 130986:
{
returnValue = F("Hanna-Nagel-Str.");
break;
}
case 130987:
{
returnValue = F("Hanna-Neumann-Str.");
break;
}
case 130988:
{
returnValue = F("Hanna-Neuse-Str.");
break;
}
case 130989:
{
returnValue = F("Hanna-Rehr-Str.");
break;
}
case 130990:
{
returnValue = F("Hanna-Reitsch-Str.");
break;
}
case 130991:
{
returnValue = F("Hanna-Reitsch-Weg");
break;
}
case 130992:
{
returnValue = F("Hanna-Zuschneid-Str.");
break;
}
case 130993:
{
returnValue = F("Hannackenstr.");
break;
}
case 130994:
{
returnValue = F("Hannah-Arendt-Str.");
break;
}
case 130995:
{
returnValue = F("Hannah-Arendt-Weg");
break;
}
case 130996:
{
returnValue = F("Hannah-Höch-Ring");
break;
}
case 130997:
{
returnValue = F("Hannah-Höch-Str.");
break;
}
case 130998:
{
returnValue = F("Hannah-Höch-Weg");
break;
}
case 130999:
{
returnValue = F("Hannah-Lothrop-Str.");
break;
}
case 131000:
{
returnValue = F("Hannah-Szenes-Str.");
break;
}
case 131001:
{
returnValue = F("Hannah-Vogt-Str.");
break;
}
case 131002:
{
returnValue = F("Hannarschweg");
break;
}
case 131003:
{
returnValue = F("Hannastr.");
break;
}
case 131004:
{
returnValue = F("Hannawaldweg");
break;
}
case 131005:
{
returnValue = F("Hannberg");
break;
}
case 131006:
{
returnValue = F("Hannberger Str.");
break;
}
case 131007:
{
returnValue = F("Hannberger Weg");
break;
}
case 131008:
{
returnValue = F("Hannbusch");
break;
}
case 131009:
{
returnValue = F("Hannchen-Herz-Str.");
break;
}
case 131010:
{
returnValue = F("Hannchensdyk");
break;
}
case 131011:
{
returnValue = F("Hannchenstr.");
break;
}
case 131012:
{
returnValue = F("Hanne-Nüte-Str.");
break;
}
case 131013:
{
returnValue = F("Hanne-Nüte-Strat");
break;
}
case 131014:
{
returnValue = F("Hanne-Nüte-Weg");
break;
}
case 131015:
{
returnValue = F("Hanne-Wondrak-Str.");
break;
}
case 131016:
{
returnValue = F("Hannebach");
break;
}
case 131017:
{
returnValue = F("Hannebacher Str.");
break;
}
case 131018:
{
returnValue = F("Hannebacher Weg");
break;
}
case 131019:
{
returnValue = F("Hannebreite");
break;
}
case 131020:
{
returnValue = F("Hannegrund");
break;
}
case 131021:
{
returnValue = F("Hannekenpatt");
break;
}
case 131022:
{
returnValue = F("Hannelore-Hammel-Str.");
break;
}
case 131023:
{
returnValue = F("Hannelore-Hingott-Str.");
break;
}
case 131024:
{
returnValue = F("Hannelore-Stein-Weg");
break;
}
case 131025:
{
returnValue = F("Hannelore-Wolff-Str.");
break;
}
case 131026:
{
returnValue = F("Hannemannei");
break;
}
case 131027:
{
returnValue = F("Hannemannsche Twiete");
break;
}
case 131028:
{
returnValue = F("Hannemannsgarten");
break;
}
case 131029:
{
returnValue = F("Hannemannskamp");
break;
}
case 131030:
{
returnValue = F("Hannemannstr.");
break;
}
case 131031:
{
returnValue = F("Hannemicker Weg");
break;
}
case 131032:
{
returnValue = F("Hannenbach");
break;
}
case 131033:
{
returnValue = F("Hannenbachstr.");
break;
}
case 131034:
{
returnValue = F("Hannenbusch");
break;
}
case 131035:
{
returnValue = F("Hannengasse");
break;
}
case 131036:
{
returnValue = F("Hannenplatz");
break;
}
case 131037:
{
returnValue = F("Hanner Steige");
break;
}
case 131038:
{
returnValue = F("Hannerbergl");
break;
}
case 131039:
{
returnValue = F("Hannersgrüner Str.");
break;
}
case 131040:
{
returnValue = F("Hannerstr.");
break;
}
case 131041:
{
returnValue = F("Hannes Stadtpark");
break;
}
case 131042:
{
returnValue = F("Hannes-Greiner-Str.");
break;
}
case 131043:
{
returnValue = F("Hannes-Haferkamp-Platz");
break;
}
case 131044:
{
returnValue = F("Hannes-Jessen-Weg");
break;
}
case 131045:
{
returnValue = F("Hannes-Meyer-Platz");
break;
}
case 131046:
{
returnValue = F("Hannes-Meyer-Str.");
break;
}
case 131047:
{
returnValue = F("Hannes-Meyer-Weg");
break;
}
case 131048:
{
returnValue = F("Hannes-Pries-Str.");
break;
}
case 131049:
{
returnValue = F("Hannes-Schufen-Str.");
break;
}
case 131050:
{
returnValue = F("Hannes-Strehly-Str.");
break;
}
case 131051:
{
returnValue = F("Hannesauel");
break;
}
case 131052:
{
returnValue = F("Hannesfellerstr.");
break;
}
case 131053:
{
returnValue = F("Hannesgasse");
break;
}
case 131054:
{
returnValue = F("Hanneshügel");
break;
}
case 131055:
{
returnValue = F("Hannesreuther Str.");
break;
}
case 131056:
{
returnValue = F("Hannesried");
break;
}
case 131057:
{
returnValue = F("Hannesrieder Str.");
break;
}
case 131058:
{
returnValue = F("Hannesstr.");
break;
}
case 131059:
{
returnValue = F("Hannestobelstr.");
break;
}
case 131060:
{
returnValue = F("Hannestr.");
break;
}
case 131061:
{
returnValue = F("Hanngasse");
break;
}
case 131062:
{
returnValue = F("Hanni Asmussen Straat");
break;
}
case 131063:
{
returnValue = F("Hanni-Henning-Weg");
break;
}
case 131064:
{
returnValue = F("Hanni-Maler-Weg");
break;
}
case 131065:
{
returnValue = F("Hanni-Meyer-Weg");
break;
}
case 131066:
{
returnValue = F("Hanni-Rocco-Platz");
break;
}
case 131067:
{
returnValue = F("Hanni-San-Weg");
break;
}
case 131068:
{
returnValue = F("Hannibalstr.");
break;
}
case 131069:
{
returnValue = F("Hannigbrink");
break;
}
case 131070:
{
returnValue = F("Hanning-Klauk-Weg");
break;
}
case 131071:
{
returnValue = F("Hanning-Schuldt-Weg");
break;
}
case 131072:
{
returnValue = F("Hanningerweg");
break;
}
case 131073:
{
returnValue = F("Hanninghof");
break;
}
case 131074:
{
returnValue = F("Hanningsaal");
break;
}
case 131075:
{
returnValue = F("Hanninxweg");
break;
}
case 131076:
{
returnValue = F("Hanno-Günther-Str.");
break;
}
case 131077:
{
returnValue = F("Hanno-Ring");
break;
}
case 131078:
{
returnValue = F("Hannongstr.");
break;
}
case 131079:
{
returnValue = F("Hannostr.");
break;
}
case 131080:
{
returnValue = F("Hannover Str.");
break;
}
case 131081:
{
returnValue = F("Hannoveranerweg");
break;
}
case 131082:
{
returnValue = F("Hannoversche Heerstr.");
break;
}
case 131083:
{
returnValue = F("Hannoversche Neustadt");
break;
}
case 131084:
{
returnValue = F("Hannoversche Str.");
break;
}
case 131085:
{
returnValue = F("Hannoverscher Hellmer");
break;
}
case 131086:
{
returnValue = F("Hannoverscher Weg");
break;
}
case 131087:
{
returnValue = F("Hannoverstr.");
break;
}
case 131088:
{
returnValue = F("Hanns-Albeck-Platz");
break;
}
case 131089:
{
returnValue = F("Hanns-Albeck-Weg");
break;
}
case 131090:
{
returnValue = F("Hanns-Bauer-Str.");
break;
}
case 131091:
{
returnValue = F("Hanns-Bisegger-Str.");
break;
}
case 131092:
{
returnValue = F("Hanns-Braun-Str.");
break;
}
case 131093:
{
returnValue = F("Hanns-Dieter-Hüsch-Weg");
break;
}
case 131094:
{
returnValue = F("Hanns-Ehard-Str.");
break;
}
case 131095:
{
returnValue = F("Hanns-Eisler-Platz");
break;
}
case 131096:
{
returnValue = F("Hanns-Eisler-Str.");
break;
}
case 131097:
{
returnValue = F("Hanns-Eisler-Weg");
break;
}
case 131098:
{
returnValue = F("Hanns-Fay-Str.");
break;
}
case 131099:
{
returnValue = F("Hanns-Glückstein-Park");
break;
}
case 131100:
{
returnValue = F("Hanns-Heuer-Platz");
break;
}
case 131101:
{
returnValue = F("Hanns-Joachim-Str.");
break;
}
case 131102:
{
returnValue = F("Hanns-Klemm-Platz");
break;
}
case 131103:
{
returnValue = F("Hanns-Klemm-Str.");
break;
}
case 131104:
{
returnValue = F("Hanns-Krause-Weg");
break;
}
case 131105:
{
returnValue = F("Hanns-Lamers-Platz");
break;
}
case 131106:
{
returnValue = F("Hanns-Lilje-Platz");
break;
}
case 131107:
{
returnValue = F("Hanns-M.-Schleyer-Str.");
break;
}
case 131108:
{
returnValue = F("Hanns-Maaßen-Str.");
break;
}
case 131109:
{
returnValue = F("Hanns-Maria-Lux-Str.");
break;
}
case 131110:
{
returnValue = F("Hanns-Martin-Schleyer-Brücke");
break;
}
case 131111:
{
returnValue = F("Hanns-Martin-Schleyer-Str.");
break;
}
case 131112:
{
returnValue = F("Hanns-Maurus-Weg");
break;
}
case 131113:
{
returnValue = F("Hanns-Nansheimer-Str.");
break;
}
case 131114:
{
returnValue = F("Hanns-Reeger-Weg");
break;
}
case 131115:
{
returnValue = F("Hanns-Rothbarth-Str.");
break;
}
case 131116:
{
returnValue = F("Hanns-Rupp-Str.");
break;
}
case 131117:
{
returnValue = F("Hanns-Rupp-Weg");
break;
}
case 131118:
{
returnValue = F("Hanns-Seidel-Str.");
break;
}
case 131119:
{
returnValue = F("Hanns-Seidel-Weg");
break;
}
case 131120:
{
returnValue = F("Hanns-Steurer-Weg");
break;
}
case 131121:
{
returnValue = F("Hanns-Stuber-Weg");
break;
}
case 131122:
{
returnValue = F("Hanns-Thierolf-Anlage");
break;
}
case 131123:
{
returnValue = F("Hanns-Vetter-Weg");
break;
}
case 131124:
{
returnValue = F("Hanns-Voith-Weg");
break;
}
case 131125:
{
returnValue = F("Hanns-Wanner-Weg");
break;
}
case 131126:
{
returnValue = F("Hanns-Weigl-Str.");
break;
}
case 131127:
{
returnValue = F("Hanny");
break;
}
case 131128:
{
returnValue = F("Hanny-Franke-Anlage");
break;
}
case 131129:
{
returnValue = F("Hannöversche Str.");
break;
}
case 131130:
{
returnValue = F("Hanoier Str.");
break;
}
case 131131:
{
returnValue = F("Hanomagstr.");
break;
}
case 131132:
{
returnValue = F("Hanosanstr.");
break;
}
case 131133:
{
returnValue = F("Hanottenweg");
break;
}
case 131134:
{
returnValue = F("Hanrade");
break;
}
case 131135:
{
returnValue = F("Hanrathstr.");
break;
}
case 131136:
{
returnValue = F("Hanredder");
break;
}
case 131137:
{
returnValue = F("Hanrorup");
break;
}
case 131138:
{
returnValue = F("Hanrother Pfad");
break;
}
case 131139:
{
returnValue = F("Hanrother Weg");
break;
}
case 131140:
{
returnValue = F("Hanröder Str.");
break;
}
case 131141:
{
returnValue = F("Hans Dietsche Weg");
break;
}
case 131142:
{
returnValue = F("Hans Eck");
break;
}
case 131143:
{
returnValue = F("Hans Engelfried Brücke");
break;
}
case 131144:
{
returnValue = F("Hans Gierl Weg");
break;
}
case 131145:
{
returnValue = F("Hans Hegen");
break;
}
case 131146:
{
returnValue = F("Hans Klausen Feldweg");
break;
}
case 131147:
{
returnValue = F("Hans Kohaupt Platz");
break;
}
case 131148:
{
returnValue = F("Hans Krämer Platz");
break;
}
case 131149:
{
returnValue = F("Hans Lindmayr Platz");
break;
}
case 131150:
{
returnValue = F("Hans Zöllner Weg");
break;
}
case 131151:
{
returnValue = F("Hans- Holland- Gasse");
break;
}
case 131152:
{
returnValue = F("Hans-A.-Kampmann-Str.");
break;
}
case 131153:
{
returnValue = F("Hans-A.-Müllerheim-Park");
break;
}
case 131154:
{
returnValue = F("Hans-Abesser-Str.");
break;
}
case 131155:
{
returnValue = F("Hans-Acker-Weg");
break;
}
case 131156:
{
returnValue = F("Hans-Ackermann-Str.");
break;
}
case 131157:
{
returnValue = F("Hans-Ackermann-Weg");
break;
}
case 131158:
{
returnValue = F("Hans-Adam-Allee");
break;
}
case 131159:
{
returnValue = F("Hans-Adamy-Str.");
break;
}
case 131160:
{
returnValue = F("Hans-Adlhoch-Str.");
break;
}
case 131161:
{
returnValue = F("Hans-Adolf-Bühler-Str.");
break;
}
case 131162:
{
returnValue = F("Hans-Adolf-Krebs-Weg");
break;
}
case 131163:
{
returnValue = F("Hans-Adolf-Str.");
break;
}
case 131164:
{
returnValue = F("Hans-Agath-Str.");
break;
}
case 131165:
{
returnValue = F("Hans-Albers-Str.");
break;
}
case 131166:
{
returnValue = F("Hans-Albers-Weg");
break;
}
case 131167:
{
returnValue = F("Hans-Albrecht-Str.");
break;
}
case 131168:
{
returnValue = F("Hans-Albus-Weg");
break;
}
case 131169:
{
returnValue = F("Hans-Altstetter-Str.");
break;
}
case 131170:
{
returnValue = F("Hans-Amann-Str.");
break;
}
case 131171:
{
returnValue = F("Hans-Ammon-Str.");
break;
}
case 131172:
{
returnValue = F("Hans-Andree-Str.");
break;
}
case 131173:
{
returnValue = F("Hans-Appel-Str.");
break;
}
case 131174:
{
returnValue = F("Hans-Appold-Str.");
break;
}
case 131175:
{
returnValue = F("Hans-Arend-Naturlehrpfad");
break;
}
case 131176:
{
returnValue = F("Hans-Aring-Platz");
break;
}
case 131177:
{
returnValue = F("Hans-Arp-Str.");
break;
}
case 131178:
{
returnValue = F("Hans-Arp-Weg");
break;
}
case 131179:
{
returnValue = F("Hans-Asam-Str.");
break;
}
case 131180:
{
returnValue = F("Hans-Asmus-Schneekloth-Weg");
break;
}
case 131181:
{
returnValue = F("Hans-Augustin-Str.");
break;
}
case 131182:
{
returnValue = F("Hans-Bachner-Str.");
break;
}
case 131183:
{
returnValue = F("Hans-Bader-Str.");
break;
}
case 131184:
{
returnValue = F("Hans-Baierl-Str.");
break;
}
case 131185:
{
returnValue = F("Hans-Baierlein-Str.");
break;
}
case 131186:
{
returnValue = F("Hans-Balcke-Str.");
break;
}
case 131187:
{
returnValue = F("Hans-Baldung-Grien-Weg");
break;
}
case 131188:
{
returnValue = F("Hans-Baldung-Str.");
break;
}
case 131189:
{
returnValue = F("Hans-Baldung-Weg");
break;
}
case 131190:
{
returnValue = F("Hans-Baltisberger-Str.");
break;
}
case 131191:
{
returnValue = F("Hans-Bardon-Str.");
break;
}
case 131192:
{
returnValue = F("Hans-Barwitzius-Platz");
break;
}
case 131193:
{
returnValue = F("Hans-Bauer-Str.");
break;
}
case 131194:
{
returnValue = F("Hans-Bauer-Weg");
break;
}
case 131195:
{
returnValue = F("Hans-Baumeister-Weg");
break;
}
case 131196:
{
returnValue = F("Hans-Beckers-Str.");
break;
}
case 131197:
{
returnValue = F("Hans-Behrendt-Weg");
break;
}
case 131198:
{
returnValue = F("Hans-Behringer-Str.");
break;
}
case 131199:
{
returnValue = F("Hans-Beigel-Str.");
break;
}
case 131200:
{
returnValue = F("Hans-Beimler-Ring");
break;
}
case 131201:
{
returnValue = F("Hans-Beimler-Str.");
break;
}
case 131202:
{
returnValue = F("Hans-Beimler-Weg");
break;
}
case 131203:
{
returnValue = F("Hans-Bellinghausen-Str.");
break;
}
case 131204:
{
returnValue = F("Hans-Benz-Str.");
break;
}
case 131205:
{
returnValue = F("Hans-Berckefeldt-Str.");
break;
}
case 131206:
{
returnValue = F("Hans-Berger-Str.");
break;
}
case 131207:
{
returnValue = F("Hans-Bertram-Weg");
break;
}
case 131208:
{
returnValue = F("Hans-Besler-Str.");
break;
}
case 131209:
{
returnValue = F("Hans-Bethe-Str.");
break;
}
case 131210:
{
returnValue = F("Hans-Bierling-Str.");
break;
}
case 131211:
{
returnValue = F("Hans-Bilstein-Str.");
break;
}
case 131212:
{
returnValue = F("Hans-Birk-Str.");
break;
}
case 131213:
{
returnValue = F("Hans-Birke-Str.");
break;
}
case 131214:
{
returnValue = F("Hans-Birkmayr-Str.");
break;
}
case 131215:
{
returnValue = F("Hans-Birnbaum-Str.");
break;
}
case 131216:
{
returnValue = F("Hans-Blank-Str.");
break;
}
case 131217:
{
returnValue = F("Hans-Blazy-Weg");
break;
}
case 131218:
{
returnValue = F("Hans-Bleckert-Str.");
break;
}
case 131219:
{
returnValue = F("Hans-Bleibrunner-Weg");
break;
}
case 131220:
{
returnValue = F("Hans-Blumenberg-Weg");
break;
}
case 131221:
{
returnValue = F("Hans-Bohr-Str.");
break;
}
case 131222:
{
returnValue = F("Hans-Bolza-Str.");
break;
}
case 131223:
{
returnValue = F("Hans-Boner-Str.");
break;
}
case 131224:
{
returnValue = F("Hans-Bongers-Str.");
break;
}
case 131225:
{
returnValue = F("Hans-Borchardt-Platz");
break;
}
case 131226:
{
returnValue = F("Hans-Bornkessel-Str.");
break;
}
case 131227:
{
returnValue = F("Hans-Brandenburg-Weg");
break;
}
case 131228:
{
returnValue = F("Hans-Brass-Weg");
break;
}
case 131229:
{
returnValue = F("Hans-Braue-Weg");
break;
}
case 131230:
{
returnValue = F("Hans-Braun-Str.");
break;
}
case 131231:
{
returnValue = F("Hans-Braun-Weg");
break;
}
case 131232:
{
returnValue = F("Hans-Breckwoldt-Str.");
break;
}
case 131233:
{
returnValue = F("Hans-Bredow-Str.");
break;
}
case 131234:
{
returnValue = F("Hans-Breinlinger-Str.");
break;
}
case 131235:
{
returnValue = F("Hans-Breuer-Str.");
break;
}
case 131236:
{
returnValue = F("Hans-Broschey-Kreisel");
break;
}
case 131237:
{
returnValue = F("Hans-Brunner-Str.");
break;
}
case 131238:
{
returnValue = F("Hans-Brückmann-Str.");
break;
}
case 131239:
{
returnValue = F("Hans-Brüggemann-Str.");
break;
}
case 131240:
{
returnValue = F("Hans-Brühlmann-Weg");
break;
}
case 131241:
{
returnValue = F("Hans-Brümmer-Platz");
break;
}
case 131242:
{
returnValue = F("Hans-Bunte-Str.");
break;
}
case 131243:
{
returnValue = F("Hans-Busch-Weg");
break;
}
case 131244:
{
returnValue = F("Hans-Buttersack-Str.");
break;
}
case 131245:
{
returnValue = F("Hans-Böckler-Allee");
break;
}
case 131246:
{
returnValue = F("Hans-Böckler-Hof");
break;
}
case 131247:
{
returnValue = F("Hans-Böckler-Platz");
break;
}
case 131248:
{
returnValue = F("Hans-Böckler-Ring");
break;
}
case 131249:
{
returnValue = F("Hans-Böckler-Str.");
break;
}
case 131250:
{
returnValue = F("Hans-Böckler-Weg");
break;
}
case 131251:
{
returnValue = F("Hans-Böge-Str.");
break;
}
case 131252:
{
returnValue = F("Hans-Böheim-Str.");
break;
}
case 131253:
{
returnValue = F("Hans-Böhm-Str.");
break;
}
case 131254:
{
returnValue = F("Hans-Bördlein-Str.");
break;
}
case 131255:
{
returnValue = F("Hans-Bühl-Str.");
break;
}
case 131256:
{
returnValue = F("Hans-C.-Wirz-Str.");
break;
}
case 131257:
{
returnValue = F("Hans-Calmeyer-Platz");
break;
}
case 131258:
{
returnValue = F("Hans-Calmeyer-Str.");
break;
}
case 131259:
{
returnValue = F("Hans-Carl-Scherrer-Platz");
break;
}
case 131260:
{
returnValue = F("Hans-Carl-von-Carlowitz-Park");
break;
}
case 131261:
{
returnValue = F("Hans-Carossa-Str.");
break;
}
case 131262:
{
returnValue = F("Hans-Carossa-Weg");
break;
}
case 131263:
{
returnValue = F("Hans-Carstens-Weg");
break;
}
case 131264:
{
returnValue = F("Hans-Christian-Andersen-Str.");
break;
}
case 131265:
{
returnValue = F("Hans-Christian-Andersen-Weg");
break;
}
case 131266:
{
returnValue = F("Hans-Christian-Göthe-Str.");
break;
}
case 131267:
{
returnValue = F("Hans-Christian-Möller-Str.");
break;
}
case 131268:
{
returnValue = F("Hans-Christoph-Seebohm-Ring");
break;
}
case 131269:
{
returnValue = F("Hans-Christoph-Seebohm-Str.");
break;
}
case 131270:
{
returnValue = F("Hans-Christoph-Weg");
break;
}
case 131271:
{
returnValue = F("Hans-Christophersen-Allee");
break;
}
case 131272:
{
returnValue = F("Hans-Clarin-Platz");
break;
}
case 131273:
{
returnValue = F("Hans-Claus-Schnack-Weg");
break;
}
case 131274:
{
returnValue = F("Hans-Claussen-Ring");
break;
}
case 131275:
{
returnValue = F("Hans-Claußen-Str.");
break;
}
case 131276:
{
returnValue = F("Hans-Cloos-Str.");
break;
}
case 131277:
{
returnValue = F("Hans-Conrad-Leipelt-Weg");
break;
}
case 131278:
{
returnValue = F("Hans-Cornelius-Str.");
break;
}
case 131279:
{
returnValue = F("Hans-Dall-Str.");
break;
}
case 131280:
{
returnValue = F("Hans-Damp-Str.");
break;
}
case 131281:
{
returnValue = F("Hans-Dankner-Str.");
break;
}
case 131282:
{
returnValue = F("Hans-Dannhorn-Str.");
break;
}
case 131283:
{
returnValue = F("Hans-Darr-Str.");
break;
}
case 131284:
{
returnValue = F("Hans-Dasch-Weg");
break;
}
case 131285:
{
returnValue = F("Hans-Deierlein-Weg");
break;
}
case 131286:
{
returnValue = F("Hans-Delbrück-Str.");
break;
}
case 131287:
{
returnValue = F("Hans-Demmelmeier-Str.");
break;
}
case 131288:
{
returnValue = F("Hans-Denck-Str.");
break;
}
case 131289:
{
returnValue = F("Hans-Denk-Str.");
break;
}
case 131290:
{
returnValue = F("Hans-Detlev-Prien-Str.");
break;
}
case 131291:
{
returnValue = F("Hans-Detter-Str.");
break;
}
case 131292:
{
returnValue = F("Hans-Diekmann-Str.");
break;
}
case 131293:
{
returnValue = F("Hans-Diemar-Str.");
break;
}
case 131294:
{
returnValue = F("Hans-Dieter-Gottschalk-Weg");
break;
}
case 131295:
{
returnValue = F("Hans-Dieter-Hustedt-Str.");
break;
}
case 131296:
{
returnValue = F("Hans-Dieter-Str.");
break;
}
case 131297:
{
returnValue = F("Hans-Dieterich-Weg");
break;
}
case 131298:
{
returnValue = F("Hans-Dietrich-Genscher-Platz");
break;
}
case 131299:
{
returnValue = F("Hans-Dietrich-Genscher-Str.");
break;
}
case 131300:
{
returnValue = F("Hans-Dietrich-Str.");
break;
}
case 131301:
{
returnValue = F("Hans-Dill-Str.");
break;
}
case 131302:
{
returnValue = F("Hans-Dilsen-Weg");
break;
}
case 131303:
{
returnValue = F("Hans-Dinnendahl-Str.");
break;
}
case 131304:
{
returnValue = F("Hans-Diroll-Str.");
break;
}
case 131305:
{
returnValue = F("Hans-Dittmar-Str.");
break;
}
case 131306:
{
returnValue = F("Hans-Dobel-Weg");
break;
}
case 131307:
{
returnValue = F("Hans-Doll-Str.");
break;
}
case 131308:
{
returnValue = F("Hans-Domitzlaff-Weg");
break;
}
case 131309:
{
returnValue = F("Hans-Dorr-Allee");
break;
}
case 131310:
{
returnValue = F("Hans-Dreher-Weg");
break;
}
case 131311:
{
returnValue = F("Hans-Driesch-Str.");
break;
}
case 131312:
{
returnValue = F("Hans-Dringenberg-Weg");
break;
}
case 131313:
{
returnValue = F("Hans-Durach-Str.");
break;
}
case 131314:
{
returnValue = F("Hans-Dörr-Park");
break;
}
case 131315:
{
returnValue = F("Hans-Dössel-Weg");
break;
}
case 131316:
{
returnValue = F("Hans-Dümmler-Str.");
break;
}
case 131317:
{
returnValue = F("Hans-Dürrmeier-Weg");
break;
}
case 131318:
{
returnValue = F("Hans-E.-Fochtmann-Str.");
break;
}
case 131319:
{
returnValue = F("Hans-E.-Oberländer-Weg");
break;
}
case 131320:
{
returnValue = F("Hans-Eberle-Anlage");
break;
}
case 131321:
{
returnValue = F("Hans-Eckerlin-Str.");
break;
}
case 131322:
{
returnValue = F("Hans-Eckstein-Str.");
break;
}
case 131323:
{
returnValue = F("Hans-Edenhofer-Str.");
break;
}
case 131324:
{
returnValue = F("Hans-Eder-Gasse");
break;
}
case 131325:
{
returnValue = F("Hans-Eichmann-Ring");
break;
}
case 131326:
{
returnValue = F("Hans-Eiden-Str.");
break;
}
case 131327:
{
returnValue = F("Hans-Eidig-Platz");
break;
}
case 131328:
{
returnValue = F("Hans-Eidig-Str.");
break;
}
case 131329:
{
returnValue = F("Hans-Eidig-Weg");
break;
}
case 131330:
{
returnValue = F("Hans-Eisele-Str.");
break;
}
case 131331:
{
returnValue = F("Hans-Endres-Str.");
break;
}
case 131332:
{
returnValue = F("Hans-Enßner-Str.");
break;
}
case 131333:
{
returnValue = F("Hans-Erdner-Str.");
break;
}
case 131334:
{
returnValue = F("Hans-Ernst-Str.");
break;
}
case 131335:
{
returnValue = F("Hans-Ertl-Str.");
break;
}
case 131336:
{
returnValue = F("Hans-Ertmann-Weg");
break;
}
case 131337:
{
returnValue = F("Hans-Evers-Str.");
break;
}
case 131338:
{
returnValue = F("Hans-Eyl-Str.");
break;
}
case 131339:
{
returnValue = F("Hans-Falkenhagen-Str.");
break;
}
case 131340:
{
returnValue = F("Hans-Fallada-Siedlung");
break;
}
case 131341:
{
returnValue = F("Hans-Fallada-Str.");
break;
}
case 131342:
{
returnValue = F("Hans-Fallada-Weg");
break;
}
case 131343:
{
returnValue = F("Hans-Fangmann-Str.");
break;
}
case 131344:
{
returnValue = F("Hans-Feigenbutz-Weg");
break;
}
case 131345:
{
returnValue = F("Hans-Fein-Str.");
break;
}
case 131346:
{
returnValue = F("Hans-Felber-Str.");
break;
}
case 131347:
{
returnValue = F("Hans-Felber-Weg");
break;
}
case 131348:
{
returnValue = F("Hans-Fellner-Str.");
break;
}
case 131349:
{
returnValue = F("Hans-Felsl-Str.");
break;
}
case 131350:
{
returnValue = F("Hans-Ferring-Str.");
break;
}
case 131351:
{
returnValue = F("Hans-Fiand-Weg");
break;
}
case 131352:
{
returnValue = F("Hans-Fink-Weg");
break;
}
case 131353:
{
returnValue = F("Hans-Fischer-Str.");
break;
}
case 131354:
{
returnValue = F("Hans-Fleischer-Str.");
break;
}
case 131355:
{
returnValue = F("Hans-Fleissner-Str.");
break;
}
case 131356:
{
returnValue = F("Hans-Fluck-Str.");
break;
}
case 131357:
{
returnValue = F("Hans-Franck-Str.");
break;
}
case 131358:
{
returnValue = F("Hans-Frank-Str.");
break;
}
case 131359:
{
returnValue = F("Hans-Freiherr-von-Dörnberg-Str.");
break;
}
case 131360:
{
returnValue = F("Hans-Freimann-Str.");
break;
}
case 131361:
{
returnValue = F("Hans-Freitag-Str.");
break;
}
case 131362:
{
returnValue = F("Hans-Freytag-Str.");
break;
}
case 131363:
{
returnValue = F("Hans-Frick-Str.");
break;
}
case 131364:
{
returnValue = F("Hans-Friedrich-Dibbern-Str.");
break;
}
case 131365:
{
returnValue = F("Hans-Fromm-Str.");
break;
}
case 131366:
{
returnValue = F("Hans-Fröhlich-Str.");
break;
}
case 131367:
{
returnValue = F("Hans-Fröschl-Str.");
break;
}
case 131368:
{
returnValue = F("Hans-Full-Str.");
break;
}
case 131369:
{
returnValue = F("Hans-Gallinis-Str.");
break;
}
case 131370:
{
returnValue = F("Hans-Gaugler-Weg");
break;
}
case 131371:
{
returnValue = F("Hans-Gebhardt-Str.");
break;
}
case 131372:
{
returnValue = F("Hans-Geiger-Str.");
break;
}
case 131373:
{
returnValue = F("Hans-Geitel-Str.");
break;
}
case 131374:
{
returnValue = F("Hans-Gemünd-Str.");
break;
}
case 131375:
{
returnValue = F("Hans-Gentner-Str.");
break;
}
case 131376:
{
returnValue = F("Hans-Georg-Albrecht-Weg");
break;
}
case 131377:
{
returnValue = F("Hans-Georg-Gött-Schneise");
break;
}
case 131378:
{
returnValue = F("Hans-Georg-Hauser-Str.");
break;
}
case 131379:
{
returnValue = F("Hans-Georg-Str.");
break;
}
case 131380:
{
returnValue = F("Hans-Georg-Weiss-Str.");
break;
}
case 131381:
{
returnValue = F("Hans-Georg-v.-Arnim-Str.");
break;
}
case 131382:
{
returnValue = F("Hans-Gerhard-Str.");
break;
}
case 131383:
{
returnValue = F("Hans-Gernet-Str.");
break;
}
case 131384:
{
returnValue = F("Hans-Gerstner-Str.");
break;
}
case 131385:
{
returnValue = F("Hans-Gerwalin-Str.");
break;
}
case 131386:
{
returnValue = F("Hans-Gick-Str.");
break;
}
case 131387:
{
returnValue = F("Hans-Gierl-Str.");
break;
}
case 131388:
{
returnValue = F("Hans-Gies-Weg");
break;
}
case 131389:
{
returnValue = F("Hans-Glas-Str.");
break;
}
case 131390:
{
returnValue = F("Hans-Glas-Weg");
break;
}
case 131391:
{
returnValue = F("Hans-Glenk-Str.");
break;
}
case 131392:
{
returnValue = F("Hans-Gloede-Weg");
break;
}
case 131393:
{
returnValue = F("Hans-Glück-Str.");
break;
}
case 131394:
{
returnValue = F("Hans-Gottfried-Bernrath-Park");
break;
}
case 131395:
{
returnValue = F("Hans-Gottfried-Bernrath-Weg");
break;
}
case 131396:
{
returnValue = F("Hans-Gottwalt-Str.");
break;
}
case 131397:
{
returnValue = F("Hans-Grade-Allee");
break;
}
case 131398:
{
returnValue = F("Hans-Grade-Ring");
break;
}
case 131399:
{
returnValue = F("Hans-Grade-Str.");
break;
}
case 131400:
{
returnValue = F("Hans-Grade-Weg");
break;
}
case 131401:
{
returnValue = F("Hans-Graf-Sponeck-Str.");
break;
}
case 131402:
{
returnValue = F("Hans-Gressel-Weg");
break;
}
case 131403:
{
returnValue = F("Hans-Grimm-Weg");
break;
}
case 131404:
{
returnValue = F("Hans-Grischkat-Str.");
break;
}
case 131405:
{
returnValue = F("Hans-Grohe-Str.");
break;
}
case 131406:
{
returnValue = F("Hans-Groß-Str.");
break;
}
case 131407:
{
returnValue = F("Hans-Großwendt-Ring");
break;
}
case 131408:
{
returnValue = F("Hans-Gruber-Keller");
break;
}
case 131409:
{
returnValue = F("Hans-Gruber-Platz");
break;
}
case 131410:
{
returnValue = F("Hans-Gruber-Str.");
break;
}
case 131411:
{
returnValue = F("Hans-Grundig-Str.");
break;
}
case 131412:
{
returnValue = F("Hans-Grässel-Str.");
break;
}
case 131413:
{
returnValue = F("Hans-Grün-Str.");
break;
}
case 131414:
{
returnValue = F("Hans-Grüninger-Weg");
break;
}
case 131415:
{
returnValue = F("Hans-Guggemoos-Str.");
break;
}
case 131416:
{
returnValue = F("Hans-Guldin-Str.");
break;
}
case 131417:
{
returnValue = F("Hans-Gutermuth-Str.");
break;
}
case 131418:
{
returnValue = F("Hans-Gutjahr-Weg");
break;
}
case 131419:
{
returnValue = F("Hans-Gutmann-Str.");
break;
}
case 131420:
{
returnValue = F("Hans-Gärtner-Weg");
break;
}
case 131421:
{
returnValue = F("Hans-Göth-Str.");
break;
}
case 131422:
{
returnValue = F("Hans-Götz-Str.");
break;
}
case 131423:
{
returnValue = F("Hans-Günter-Bock-Str.");
break;
}
case 131424:
{
returnValue = F("Hans-Günter-Winkler-Weg");
break;
}
case 131425:
{
returnValue = F("Hans-Günther-Sohl-Str.");
break;
}
case 131426:
{
returnValue = F("Hans-Günther-Str.");
break;
}
case 131427:
{
returnValue = F("Hans-Güntner-Str.");
break;
}
case 131428:
{
returnValue = F("Hans-Haase-Weg");
break;
}
case 131429:
{
returnValue = F("Hans-Habereder-Str.");
break;
}
case 131430:
{
returnValue = F("Hans-Hachenberg-Platz");
break;
}
case 131431:
{
returnValue = F("Hans-Hacker-Str.");
break;
}
case 131432:
{
returnValue = F("Hans-Hahn-Str.");
break;
}
case 131433:
{
returnValue = F("Hans-Hammerstein-Str.");
break;
}
case 131434:
{
returnValue = F("Hans-Hammes-Str.");
break;
}
case 131435:
{
returnValue = F("Hans-Han-Str.");
break;
}
case 131436:
{
returnValue = F("Hans-Hansen-Wai");
break;
}
case 131437:
{
returnValue = F("Hans-Happ-Weg");
break;
}
case 131438:
{
returnValue = F("Hans-Harald-Grebe-Str.");
break;
}
case 131439:
{
returnValue = F("Hans-Haupt-Str.");
break;
}
case 131440:
{
returnValue = F("Hans-Haupt-Weg");
break;
}
case 131441:
{
returnValue = F("Hans-Hayder-Str.");
break;
}
case 131442:
{
returnValue = F("Hans-Heck-Weg");
break;
}
case 131443:
{
returnValue = F("Hans-Hege-Str.");
break;
}
case 131444:
{
returnValue = F("Hans-Heiling-Str.");
break;
}
case 131445:
{
returnValue = F("Hans-Hein-Weg");
break;
}
case 131446:
{
returnValue = F("Hans-Heinen-Str.");
break;
}
case 131447:
{
returnValue = F("Hans-Heinrich-Brüning-Weg");
break;
}
case 131448:
{
returnValue = F("Hans-Heinrich-Ehrler-Platz");
break;
}
case 131449:
{
returnValue = F("Hans-Heinrich-Ehrler-Str.");
break;
}
case 131450:
{
returnValue = F("Hans-Heinrich-Ehrler-Weg");
break;
}
case 131451:
{
returnValue = F("Hans-Heinrich-Franck-Str.");
break;
}
case 131452:
{
returnValue = F("Hans-Heinrich-Lünstedt-Str.");
break;
}
case 131453:
{
returnValue = F("Hans-Heinrich-Stelljes-Str.");
break;
}
case 131454:
{
returnValue = F("Hans-Heinrich-Warnke-Str.");
break;
}
case 131455:
{
returnValue = F("Hans-Heinz-Str.");
break;
}
case 131456:
{
returnValue = F("Hans-Helmer-Str.");
break;
}
case 131457:
{
returnValue = F("Hans-Helmut-Paul Weg");
break;
}
case 131458:
{
returnValue = F("Hans-Hemberger-Str.");
break;
}
case 131459:
{
returnValue = F("Hans-Henglein-Str.");
break;
}
case 131460:
{
returnValue = F("Hans-Henny-Jahnn-Str.");
break;
}
case 131461:
{
returnValue = F("Hans-Herbert-Rösges-Str.");
break;
}
case 131462:
{
returnValue = F("Hans-Herbst-Str.");
break;
}
case 131463:
{
returnValue = F("Hans-Herget-Str.");
break;
}
case 131464:
{
returnValue = F("Hans-Herkommer-Str.");
break;
}
case 131465:
{
returnValue = F("Hans-Hermann-Kath-Brücke");
break;
}
case 131466:
{
returnValue = F("Hans-Hermann-Lühmann-Str.");
break;
}
case 131467:
{
returnValue = F("Hans-Hermann-Meyer-Str.");
break;
}
case 131468:
{
returnValue = F("Hans-Hermann-Schütt-Str.");
break;
}
case 131469:
{
returnValue = F("Hans-Herold-Str.");
break;
}
case 131470:
{
returnValue = F("Hans-Herrmann-Str.");
break;
}
case 131471:
{
returnValue = F("Hans-Herter-Str.");
break;
}
case 131472:
{
returnValue = F("Hans-Hertlein-Str.");
break;
}
case 131473:
{
returnValue = F("Hans-Herwig-Str.");
break;
}
case 131474:
{
returnValue = F("Hans-Herzig-Str.");
break;
}
case 131475:
{
returnValue = F("Hans-Hesse-Str.");
break;
}
case 131476:
{
returnValue = F("Hans-Heyden-Str.");
break;
}
case 131477:
{
returnValue = F("Hans-Heyder-Siedlung");
break;
}
case 131478:
{
returnValue = F("Hans-Heß-Weg");
break;
}
case 131479:
{
returnValue = F("Hans-Hildebrandt-Str.");
break;
}
case 131480:
{
returnValue = F("Hans-Hinger-Str.");
break;
}
case 131481:
{
returnValue = F("Hans-Hinrichs-Str.");
break;
}
case 131482:
{
returnValue = F("Hans-Hirschfeld-Kreisel");
break;
}
case 131483:
{
returnValue = F("Hans-Hirschfeld-Platz");
break;
}
case 131484:
{
returnValue = F("Hans-Hofer-Str.");
break;
}
case 131485:
{
returnValue = F("Hans-Hoffhenke-Ring");
break;
}
case 131486:
{
returnValue = F("Hans-Hoffmann-Weg");
break;
}
case 131487:
{
returnValue = F("Hans-Hofmann-Str.");
break;
}
case 131488:
{
returnValue = F("Hans-Holbein-Str.");
break;
}
case 131489:
{
returnValue = F("Hans-Holbein-Weg");
break;
}
case 131490:
{
returnValue = F("Hans-Holl-Str.");
break;
}
case 131491:
{
returnValue = F("Hans-Holtorf-Str.");
break;
}
case 131492:
{
returnValue = F("Hans-Holtsche-Weg");
break;
}
case 131493:
{
returnValue = F("Hans-Hoppe-Str.");
break;
}
case 131494:
{
returnValue = F("Hans-Hornberger-Weg");
break;
}
case 131495:
{
returnValue = F("Hans-Hossauer-Str.");
break;
}
case 131496:
{
returnValue = F("Hans-Hossius-Str.");
break;
}
case 131497:
{
returnValue = F("Hans-Huber-Str.");
break;
}
case 131498:
{
returnValue = F("Hans-Humpert-Str.");
break;
}
case 131499:
{
returnValue = F("Hans-Höfer-Ring");
break;
}
case 131500:
{
returnValue = F("Hans-Hölbling-Str.");
break;
}
case 131501:
{
returnValue = F("Hans-Höschlin-Weg");
break;
}
case 131502:
{
returnValue = F("Hans-Hösl-Str.");
break;
}
case 131503:
{
returnValue = F("Hans-Hüls-Str.");
break;
}
case 131504:
{
returnValue = F("Hans-Im-Glück-Str.");
break;
}
case 131505:
{
returnValue = F("Hans-Iwand-Str.");
break;
}
case 131506:
{
returnValue = F("Hans-Jacob-Möller-Str.");
break;
}
case 131507:
{
returnValue = F("Hans-Jahn-Str.");
break;
}
case 131508:
{
returnValue = F("Hans-Jakob-Bücking-Str.");
break;
}
case 131509:
{
returnValue = F("Hans-Jakob-Hof");
break;
}
case 131510:
{
returnValue = F("Hans-Jakob-Koch-Allee");
break;
}
case 131511:
{
returnValue = F("Hans-Jakob-Weg");
break;
}
case 131512:
{
returnValue = F("Hans-Jehle-Weg");
break;
}
case 131513:
{
returnValue = F("Hans-Jennerwein-Str.");
break;
}
case 131514:
{
returnValue = F("Hans-Joachim-Balcke-Str.");
break;
}
case 131515:
{
returnValue = F("Hans-Joachim-Danckworth-Str.");
break;
}
case 131516:
{
returnValue = F("Hans-Joachim-Heinz-Str.");
break;
}
case 131517:
{
returnValue = F("Hans-Joachim-Köhler-Allee");
break;
}
case 131518:
{
returnValue = F("Hans-Joachim-Thias-Weg");
break;
}
case 131519:
{
returnValue = F("Hans-Joachim-von-Zieten-Str.");
break;
}
case 131520:
{
returnValue = F("Hans-Jonas-Park");
break;
}
case 131521:
{
returnValue = F("Hans-Joos-Str.");
break;
}
case 131522:
{
returnValue = F("Hans-Josef-Overbeck-Str.");
break;
}
case 131523:
{
returnValue = F("Hans-Julius-Ahlmann-Str.");
break;
}
case 131524:
{
returnValue = F("Hans-Jung-Weg");
break;
}
case 131525:
{
returnValue = F("Hans-Junginger-Str.");
break;
}
case 131526:
{
returnValue = F("Hans-Jöres-Str.");
break;
}
case 131527:
{
returnValue = F("Hans-Jörg-Kellermann-Str.");
break;
}
case 131528:
{
returnValue = F("Hans-Jöris-Str.");
break;
}
case 131529:
{
returnValue = F("Hans-Jüchser-Str.");
break;
}
case 131530:
{
returnValue = F("Hans-Jürgen-Appelrath-Str.");
break;
}
case 131531:
{
returnValue = F("Hans-Jürgen-Behncke-Weg");
break;
}
case 131532:
{
returnValue = F("Hans-Jürgen-Gantert-Str.");
break;
}
case 131533:
{
returnValue = F("Hans-Jürgen-Klinker-Str.");
break;
}
case 131534:
{
returnValue = F("Hans-Jürgen-Peter-Lemm-Str.");
break;
}
case 131535:
{
returnValue = F("Hans-Jürgen-Str.");
break;
}
case 131536:
{
returnValue = F("Hans-Jürgen-Weidlich-Weg");
break;
}
case 131537:
{
returnValue = F("Hans-Kadner-Platz");
break;
}
case 131538:
{
returnValue = F("Hans-Kahrmann-Str.");
break;
}
case 131539:
{
returnValue = F("Hans-Kaiser-Weg");
break;
}
case 131540:
{
returnValue = F("Hans-Kalb-Weg");
break;
}
case 131541:
{
returnValue = F("Hans-Kampffmeyer-Weg");
break;
}
case 131542:
{
returnValue = F("Hans-Kamps-Weg");
break;
}
case 131543:
{
returnValue = F("Hans-Karl-Platz am Markt");
break;
}
case 131544:
{
returnValue = F("Hans-Karl-Str.");
break;
}
case 131545:
{
returnValue = F("Hans-Katzer-Str.");
break;
}
case 131546:
{
returnValue = F("Hans-Kayser-Str.");
break;
}
case 131547:
{
returnValue = F("Hans-Keil-Str.");
break;
}
case 131548:
{
returnValue = F("Hans-Keller-Weg");
break;
}
case 131549:
{
returnValue = F("Hans-Kerle-Str.");
break;
}
case 131550:
{
returnValue = F("Hans-Kesenbrod-Str.");
break;
}
case 131551:
{
returnValue = F("Hans-Keßler-Str.");
break;
}
case 131552:
{
returnValue = F("Hans-Kiener-Str.");
break;
}
case 131553:
{
returnValue = F("Hans-Kilian-Str.");
break;
}
case 131554:
{
returnValue = F("Hans-Kinder-Weg");
break;
}
case 131555:
{
returnValue = F("Hans-Kinkel-Weg");
break;
}
case 131556:
{
returnValue = F("Hans-Kissel-Str.");
break;
}
case 131557:
{
returnValue = F("Hans-Kistler-Str.");
break;
}
case 131558:
{
returnValue = F("Hans-Klakow-Str.");
break;
}
case 131559:
{
returnValue = F("Hans-Klauer-Weg");
break;
}
case 131560:
{
returnValue = F("Hans-Kleider-Str.");
break;
}
case 131561:
{
returnValue = F("Hans-Klein-Weg");
break;
}
case 131562:
{
returnValue = F("Hans-Klenk-Str.");
break;
}
case 131563:
{
returnValue = F("Hans-Klopfer-Weg");
break;
}
case 131564:
{
returnValue = F("Hans-Knappertsbusch-Str.");
break;
}
case 131565:
{
returnValue = F("Hans-Knecht-Str.");
break;
}
case 131566:
{
returnValue = F("Hans-Knoch-Str.");
break;
}
case 131567:
{
returnValue = F("Hans-Knorr-Str.");
break;
}
case 131568:
{
returnValue = F("Hans-Knutz-Weg");
break;
}
case 131569:
{
returnValue = F("Hans-Knöll-Str.");
break;
}
case 131570:
{
returnValue = F("Hans-Koch-Ring");
break;
}
case 131571:
{
returnValue = F("Hans-Koch-Str.");
break;
}
case 131572:
{
returnValue = F("Hans-Kogler-Weg");
break;
}
case 131573:
{
returnValue = F("Hans-Kohlenberg-Str.");
break;
}
case 131574:
{
returnValue = F("Hans-Kohler-Str.");
break;
}
case 131575:
{
returnValue = F("Hans-Kohlmann-Str.");
break;
}
case 131576:
{
returnValue = F("Hans-Kolb-Weg");
break;
}
case 131577:
{
returnValue = F("Hans-Koller-Str.");
break;
}
case 131578:
{
returnValue = F("Hans-Konrad-Geyer-Platz");
break;
}
case 131579:
{
returnValue = F("Hans-Kopp-Str.");
break;
}
case 131580:
{
returnValue = F("Hans-Korntheuer-Str.");
break;
}
case 131581:
{
returnValue = F("Hans-Krako-Str.");
break;
}
case 131582:
{
returnValue = F("Hans-Kramer-Str.");
break;
}
case 131583:
{
returnValue = F("Hans-Kraus-Allee");
break;
}
case 131584:
{
returnValue = F("Hans-Kraut-Str.");
break;
}
case 131585:
{
returnValue = F("Hans-Kress-Str.");
break;
}
case 131586:
{
returnValue = F("Hans-Krieg-Str.");
break;
}
case 131587:
{
returnValue = F("Hans-Kruse-Str.");
break;
}
case 131588:
{
returnValue = F("Hans-Krämer-Str.");
break;
}
case 131589:
{
returnValue = F("Hans-Kudlich-Platz");
break;
}
case 131590:
{
returnValue = F("Hans-Kudlich-Str.");
break;
}
case 131591:
{
returnValue = F("Hans-Kudlich-Weg");
break;
}
case 131592:
{
returnValue = F("Hans-Kuhn-Str.");
break;
}
case 131593:
{
returnValue = F("Hans-Kulle-Str.");
break;
}
case 131594:
{
returnValue = F("Hans-Kummer-Str.");
break;
}
case 131595:
{
returnValue = F("Hans-Kuony-Str.");
break;
}
case 131596:
{
returnValue = F("Hans-Kupka-Platz");
break;
}
case 131597:
{
returnValue = F("Hans-Kögl-Str.");
break;
}
case 131598:
{
returnValue = F("Hans-Kölble-Str.");
break;
}
case 131599:
{
returnValue = F("Hans-König-Str.");
break;
}
case 131600:
{
returnValue = F("Hans-König-Weg");
break;
}
case 131601:
{
returnValue = F("Hans-Körling-Str.");
break;
}
case 131602:
{
returnValue = F("Hans-Küfner-Str.");
break;
}
case 131603:
{
returnValue = F("Hans-Kühn-Str.");
break;
}
case 131604:
{
returnValue = F("Hans-Kürner-Weg");
break;
}
case 131605:
{
returnValue = F("Hans-Lachmann-Weg");
break;
}
case 131606:
{
returnValue = F("Hans-Lackner-Str.");
break;
}
case 131607:
{
returnValue = F("Hans-Lang-Str.");
break;
}
case 131608:
{
returnValue = F("Hans-Lang-Weg");
break;
}
case 131609:
{
returnValue = F("Hans-Lange-Str.");
break;
}
case 131610:
{
returnValue = F("Hans-Lantzenberg-Str.");
break;
}
case 131611:
{
returnValue = F("Hans-Lederer-Weg");
break;
}
case 131612:
{
returnValue = F("Hans-Lehmann-Str.");
break;
}
case 131613:
{
returnValue = F("Hans-Leiberger-Str.");
break;
}
case 131614:
{
returnValue = F("Hans-Leinberger-Str.");
break;
}
case 131615:
{
returnValue = F("Hans-Leip-Str.");
break;
}
case 131616:
{
returnValue = F("Hans-Leipelt-Str.");
break;
}
case 131617:
{
returnValue = F("Hans-Leistikow-Str.");
break;
}
case 131618:
{
returnValue = F("Hans-Lemberger-Str.");
break;
}
case 131619:
{
returnValue = F("Hans-Lembke-Str.");
break;
}
case 131620:
{
returnValue = F("Hans-Lenz-Str.");
break;
}
case 131621:
{
returnValue = F("Hans-Lenze-Str.");
break;
}
case 131622:
{
returnValue = F("Hans-Liebherr-Str.");
break;
}
case 131623:
{
returnValue = F("Hans-Lilje-Weg");
break;
}
case 131624:
{
returnValue = F("Hans-Lingl-Str.");
break;
}
case 131625:
{
returnValue = F("Hans-Link-Str.");
break;
}
case 131626:
{
returnValue = F("Hans-List-Weg");
break;
}
case 131627:
{
returnValue = F("Hans-Litten-Str.");
break;
}
case 131628:
{
returnValue = F("Hans-Litterscheid-Platz");
break;
}
case 131629:
{
returnValue = F("Hans-Lobisser-Str.");
break;
}
case 131630:
{
returnValue = F("Hans-Loch-Str.");
break;
}
case 131631:
{
returnValue = F("Hans-Lodi-Str.");
break;
}
case 131632:
{
returnValue = F("Hans-Loher-Str.");
break;
}
case 131633:
{
returnValue = F("Hans-Lohnert-Str.");
break;
}
case 131634:
{
returnValue = F("Hans-Lorbeer-Str.");
break;
}
case 131635:
{
returnValue = F("Hans-Lorenser-Str.");
break;
}
case 131636:
{
returnValue = F("Hans-Lorenz-Str.");
break;
}
case 131637:
{
returnValue = F("Hans-Lothar-Str.");
break;
}
case 131638:
{
returnValue = F("Hans-Ludwig-Str.");
break;
}
case 131639:
{
returnValue = F("Hans-Lufft-Str.");
break;
}
case 131640:
{
returnValue = F("Hans-Luft-Weg");
break;
}
case 131641:
{
returnValue = F("Hans-Lust-Str.");
break;
}
case 131642:
{
returnValue = F("Hans-Lutz-Str.");
break;
}
case 131643:
{
returnValue = F("Hans-Löffler-Str.");
break;
}
case 131644:
{
returnValue = F("Hans-Löscher-Str.");
break;
}
case 131645:
{
returnValue = F("Hans-Löwel-Platz");
break;
}
case 131646:
{
returnValue = F("Hans-Lüken-Str.");
break;
}
case 131647:
{
returnValue = F("Hans-Maaß-Weg");
break;
}
case 131648:
{
returnValue = F("Hans-Maier-Str.");
break;
}
case 131649:
{
returnValue = F("Hans-Mangold-Str.");
break;
}
case 131650:
{
returnValue = F("Hans-Mannhardt-Str.");
break;
}
case 131651:
{
returnValue = F("Hans-Mantz-Str.");
break;
}
case 131652:
{
returnValue = F("Hans-Marburger-Str.");
break;
}
case 131653:
{
returnValue = F("Hans-Marchwitza-Ring");
break;
}
case 131654:
{
returnValue = F("Hans-Marchwitza-Str.");
break;
}
case 131655:
{
returnValue = F("Hans-Marchwitza-Weg");
break;
}
case 131656:
{
returnValue = F("Hans-Marks-Weg");
break;
}
case 131657:
{
returnValue = F("Hans-Massberger-Str.");
break;
}
case 131658:
{
returnValue = F("Hans-Matthies-Str.");
break;
}
case 131659:
{
returnValue = F("Hans-Maurer-Str.");
break;
}
case 131660:
{
returnValue = F("Hans-Mayer-Siedlung");
break;
}
case 131661:
{
returnValue = F("Hans-Mayer-Str.");
break;
}
case 131662:
{
returnValue = F("Hans-Mayer-Weg");
break;
}
case 131663:
{
returnValue = F("Hans-Meid-Str.");
break;
}
case 131664:
{
returnValue = F("Hans-Meier-Str.");
break;
}
case 131665:
{
returnValue = F("Hans-Meiser-Str.");
break;
}
case 131666:
{
returnValue = F("Hans-Meißner-Str.");
break;
}
case 131667:
{
returnValue = F("Hans-Memling-Str.");
break;
}
case 131668:
{
returnValue = F("Hans-Menke-Str.");
break;
}
case 131669:
{
returnValue = F("Hans-Merian-Ring");
break;
}
case 131670:
{
returnValue = F("Hans-Merkl-Weg");
break;
}
case 131671:
{
returnValue = F("Hans-Meyer-Str.");
break;
}
case 131672:
{
returnValue = F("Hans-Miederer-Str.");
break;
}
case 131673:
{
returnValue = F("Hans-Mieles-Weg");
break;
}
case 131674:
{
returnValue = F("Hans-Mielich-Str.");
break;
}
case 131675:
{
returnValue = F("Hans-Mock-Str.");
break;
}
case 131676:
{
returnValue = F("Hans-Momsen-Siedlung");
break;
}
case 131677:
{
returnValue = F("Hans-Momsen-Str.");
break;
}
case 131678:
{
returnValue = F("Hans-Moral-Str.");
break;
}
case 131679:
{
returnValue = F("Hans-Moratscheck-Str.");
break;
}
case 131680:
{
returnValue = F("Hans-Morper-Str.");
break;
}
case 131681:
{
returnValue = F("Hans-Moser-Str.");
break;
}
case 131682:
{
returnValue = F("Hans-Muffel-Weg");
break;
}
case 131683:
{
returnValue = F("Hans-Mugrauer-Str.");
break;
}
case 131684:
{
returnValue = F("Hans-Multscher-Str.");
break;
}
case 131685:
{
returnValue = F("Hans-Murauer-Str.");
break;
}
case 131686:
{
returnValue = F("Hans-Möhrle-Str.");
break;
}
case 131687:
{
returnValue = F("Hans-Mügge-Str.");
break;
}
case 131688:
{
returnValue = F("Hans-Müller-Siedlung");
break;
}
case 131689:
{
returnValue = F("Hans-Müller-Str.");
break;
}
case 131690:
{
returnValue = F("Hans-Müller-Weg");
break;
}
case 131691:
{
returnValue = F("Hans-Nadler-Eck");
break;
}
case 131692:
{
returnValue = F("Hans-Nadler-Str.");
break;
}
case 131693:
{
returnValue = F("Hans-Nagel-Gasse");
break;
}
case 131694:
{
returnValue = F("Hans-Nagl-Str.");
break;
}
case 131695:
{
returnValue = F("Hans-Nathan-Str.");
break;
}
case 131696:
{
returnValue = F("Hans-Neipp-Park");
break;
}
case 131697:
{
returnValue = F("Hans-Neschen-Str.");
break;
}
case 131698:
{
returnValue = F("Hans-Neu-Weg");
break;
}
case 131699:
{
returnValue = F("Hans-Neumann-Str.");
break;
}
case 131700:
{
returnValue = F("Hans-Neupert-Str.");
break;
}
case 131701:
{
returnValue = F("Hans-Neusel-Str.");
break;
}
case 131702:
{
returnValue = F("Hans-Nickel-Str.");
break;
}
case 131703:
{
returnValue = F("Hans-Niedereder-Weg");
break;
}
case 131704:
{
returnValue = F("Hans-Niermann-Ring");
break;
}
case 131705:
{
returnValue = F("Hans-Nikolau-Weg");
break;
}
case 131706:
{
returnValue = F("Hans-Nitsche-Str.");
break;
}
case 131707:
{
returnValue = F("Hans-Nolte-Str.");
break;
}
case 131708:
{
returnValue = F("Hans-Nowak-Ring");
break;
}
case 131709:
{
returnValue = F("Hans-Nowak-Weg");
break;
}
case 131710:
{
returnValue = F("Hans-Nägele-Str.");
break;
}
case 131711:
{
returnValue = F("Hans-Obser-Str.");
break;
}
case 131712:
{
returnValue = F("Hans-Oetken-Padd");
break;
}
case 131713:
{
returnValue = F("Hans-Ohorn-Platz");
break;
}
case 131714:
{
returnValue = F("Hans-Olde-Str.");
break;
}
case 131715:
{
returnValue = F("Hans-Olde-Weg");
break;
}
case 131716:
{
returnValue = F("Hans-Ort-Ring");
break;
}
case 131717:
{
returnValue = F("Hans-Ortner-Weg");
break;
}
case 131718:
{
returnValue = F("Hans-Oster-Str.");
break;
}
case 131719:
{
returnValue = F("Hans-Otto-Bilstein-Platz");
break;
}
case 131720:
{
returnValue = F("Hans-Otto-Str.");
break;
}
case 131721:
{
returnValue = F("Hans-Paasche-Str.");
break;
}
case 131722:
{
returnValue = F("Hans-Pander-Weg");
break;
}
case 131723:
{
returnValue = F("Hans-Paul-Kaysser-Str.");
break;
}
case 131724:
{
returnValue = F("Hans-Pauli-Str.");
break;
}
case 131725:
{
returnValue = F("Hans-Paulus-Str.");
break;
}
case 131726:
{
returnValue = F("Hans-Pehr-Str.");
break;
}
case 131727:
{
returnValue = F("Hans-Penninger-Str.");
break;
}
case 131728:
{
returnValue = F("Hans-Peter-Doll-Ring");
break;
}
case 131729:
{
returnValue = F("Hans-Peter-Feddersen-Bogen");
break;
}
case 131730:
{
returnValue = F("Hans-Peter-Feddersen-Str.");
break;
}
case 131731:
{
returnValue = F("Hans-Peter-Keller-Str.");
break;
}
case 131732:
{
returnValue = F("Hans-Peter-Mohr-Weg");
break;
}
case 131733:
{
returnValue = F("Hans-Peter-Siemens-Weg");
break;
}
case 131734:
{
returnValue = F("Hans-Petsch-Weg");
break;
}
case 131735:
{
returnValue = F("Hans-Pfanner-Str.");
break;
}
case 131736:
{
returnValue = F("Hans-Pfitzner-Str.");
break;
}
case 131737:
{
returnValue = F("Hans-Pfitzner-Weg");
break;
}
case 131738:
{
returnValue = F("Hans-Pfrommer-Weg");
break;
}
case 131739:
{
returnValue = F("Hans-Philipp-Str.");
break;
}
case 131740:
{
returnValue = F("Hans-Pichler-Str.");
break;
}
case 131741:
{
returnValue = F("Hans-Pinsel-Str.");
break;
}
case 131742:
{
returnValue = F("Hans-Pirner-Str.");
break;
}
case 131743:
{
returnValue = F("Hans-Piwecki-Str.");
break;
}
case 131744:
{
returnValue = F("Hans-Planck-Str.");
break;
}
case 131745:
{
returnValue = F("Hans-Planer-Str.");
break;
}
case 131746:
{
returnValue = F("Hans-Plutta-Weg");
break;
}
case 131747:
{
returnValue = F("Hans-Poeche-Str.");
break;
}
case 131748:
{
returnValue = F("Hans-Poetschki-Str.");
break;
}
case 131749:
{
returnValue = F("Hans-Porner-Str.");
break;
}
case 131750:
{
returnValue = F("Hans-Post-Str.");
break;
}
case 131751:
{
returnValue = F("Hans-Potyka-Str.");
break;
}
case 131752:
{
returnValue = F("Hans-Prantl-Weg");
break;
}
case 131753:
{
returnValue = F("Hans-Preu-Weg");
break;
}
case 131754:
{
returnValue = F("Hans-Probst-Str.");
break;
}
case 131755:
{
returnValue = F("Hans-Probst-Weg");
break;
}
case 131756:
{
returnValue = F("Hans-Prox-Str.");
break;
}
case 131757:
{
returnValue = F("Hans-Purrmann-Allee");
break;
}
case 131758:
{
returnValue = F("Hans-Purrmann-Str.");
break;
}
case 131759:
{
returnValue = F("Hans-Rader-Weg");
break;
}
case 131760:
{
returnValue = F("Hans-Rantzau-Str.");
break;
}
case 131761:
{
returnValue = F("Hans-Rasch-Weg");
break;
}
case 131762:
{
returnValue = F("Hans-Rauhaus-Str.");
break;
}
case 131763:
{
returnValue = F("Hans-Raulien-Platz");
break;
}
case 131764:
{
returnValue = F("Hans-Rebhan-Str.");
break;
}
case 131765:
{
returnValue = F("Hans-Redlefsen-Str.");
break;
}
case 131766:
{
returnValue = F("Hans-Reiher-Str.");
break;
}
case 131767:
{
returnValue = F("Hans-Reiner-Str.");
break;
}
case 131768:
{
returnValue = F("Hans-Reinhard-Weg");
break;
}
case 131769:
{
returnValue = F("Hans-Reinhold-Sittel-Str.");
break;
}
case 131770:
{
returnValue = F("Hans-Reiser-Str.");
break;
}
case 131771:
{
returnValue = F("Hans-Resch-Str.");
break;
}
case 131772:
{
returnValue = F("Hans-Reschke-Ufer");
break;
}
case 131773:
{
returnValue = F("Hans-Retzlaff-Str.");
break;
}
case 131774:
{
returnValue = F("Hans-Reumann-Str.");
break;
}
case 131775:
{
returnValue = F("Hans-Reuter-Weg");
break;
}
case 131776:
{
returnValue = F("Hans-Reyhing-Str.");
break;
}
case 131777:
{
returnValue = F("Hans-Reyhing-Weg");
break;
}
case 131778:
{
returnValue = F("Hans-Richter-Str.");
break;
}
case 131779:
{
returnValue = F("Hans-Rid-Str.");
break;
}
case 131780:
{
returnValue = F("Hans-Riedl-Str.");
break;
}
case 131781:
{
returnValue = F("Hans-Riegel-Str.");
break;
}
case 131782:
{
returnValue = F("Hans-Riehl-Str.");
break;
}
case 131783:
{
returnValue = F("Hans-Rießer-Str.");
break;
}
case 131784:
{
returnValue = F("Hans-Riggenbach-Str.");
break;
}
case 131785:
{
returnValue = F("Hans-Rimpau-Weg");
break;
}
case 131786:
{
returnValue = F("Hans-Ritter-Str.");
break;
}
case 131787:
{
returnValue = F("Hans-Robertz-Weg");
break;
}
case 131788:
{
returnValue = F("Hans-Rohrer-Str.");
break;
}
case 131789:
{
returnValue = F("Hans-Rollwagen-Str.");
break;
}
case 131790:
{
returnValue = F("Hans-Rollwagen-Weg");
break;
}
case 131791:
{
returnValue = F("Hans-Rosenberg-Str.");
break;
}
case 131792:
{
returnValue = F("Hans-Rosenthal-Str.");
break;
}
case 131793:
{
returnValue = F("Hans-Rossels-Platz");
break;
}
case 131794:
{
returnValue = F("Hans-Roth-Weg");
break;
}
case 131795:
{
returnValue = F("Hans-Rothe-Weg");
break;
}
case 131796:
{
returnValue = F("Hans-Rott-Weg");
break;
}
case 131797:
{
returnValue = F("Hans-Rotter-Weg");
break;
}
case 131798:
{
returnValue = F("Hans-Roß-Str.");
break;
}
case 131799:
{
returnValue = F("Hans-Rubach-Weg");
break;
}
case 131800:
{
returnValue = F("Hans-Ruck-Str.");
break;
}
case 131801:
{
returnValue = F("Hans-Rueß-Weg");
break;
}
case 131802:
{
returnValue = F("Hans-Ruf-Str.");
break;
}
case 131803:
{
returnValue = F("Hans-Rust-Str.");
break;
}
case 131804:
{
returnValue = F("Hans-Rust-Weg");
break;
}
case 131805:
{
returnValue = F("Hans-Ruthotto-Str.");
break;
}
case 131806:
{
returnValue = F("Hans-Räbel-Str.");
break;
}
case 131807:
{
returnValue = F("Hans-Römer-Weg");
break;
}
case 131808:
{
returnValue = F("Hans-Römhild-Str.");
break;
}
case 131809:
{
returnValue = F("Hans-Rönnau-Str.");
break;
}
case 131810:
{
returnValue = F("Hans-Rösch-Str.");
break;
}
case 131811:
{
returnValue = F("Hans-Rötzel-Weg");
break;
}
case 131812:
{
returnValue = F("Hans-Rüdel-Weg");
break;
}
case 131813:
{
returnValue = F("Hans-Sachs-Allee");
break;
}
case 131814:
{
returnValue = F("Hans-Sachs-Gasse");
break;
}
case 131815:
{
returnValue = F("Hans-Sachs-Platz");
break;
}
case 131816:
{
returnValue = F("Hans-Sachs-Ring");
break;
}
case 131817:
{
returnValue = F("Hans-Sachs-Str.");
break;
}
case 131818:
{
returnValue = F("Hans-Sachs-Weg");
break;
}
case 131819:
{
returnValue = F("Hans-Saebens-Weg");
break;
}
case 131820:
{
returnValue = F("Hans-Sahl-Str.");
break;
}
case 131821:
{
returnValue = F("Hans-Sailer-Str.");
break;
}
case 131822:
{
returnValue = F("Hans-Salb-Str.");
break;
}
case 131823:
{
returnValue = F("Hans-Sander-Str.");
break;
}
case 131824:
{
returnValue = F("Hans-Sauerbruch-Str.");
break;
}
case 131825:
{
returnValue = F("Hans-Sautter-Str.");
break;
}
case 131826:
{
returnValue = F("Hans-Schadendorff-Stieg");
break;
}
case 131827:
{
returnValue = F("Hans-Schaefer-Str.");
break;
}
case 131828:
{
returnValue = F("Hans-Schaller-Weg");
break;
}
case 131829:
{
returnValue = F("Hans-Schardt-Str.");
break;
}
case 131830:
{
returnValue = F("Hans-Scharoun-Weg");
break;
}
case 131831:
{
returnValue = F("Hans-Schaubruch-Weg");
break;
}
case 131832:
{
returnValue = F("Hans-Schaudig-Str.");
break;
}
case 131833:
{
returnValue = F("Hans-Scheibel-Str.");
break;
}
case 131834:
{
returnValue = F("Hans-Scheibmaier-Str.");
break;
}
case 131835:
{
returnValue = F("Hans-Scherlin-Str.");
break;
}
case 131836:
{
returnValue = F("Hans-Scherr-Weg");
break;
}
case 131837:
{
returnValue = F("Hans-Schiedt-Weg");
break;
}
case 131838:
{
returnValue = F("Hans-Schiller-Allee");
break;
}
case 131839:
{
returnValue = F("Hans-Schlee-Weg");
break;
}
case 131840:
{
returnValue = F("Hans-Schlegl-Str.");
break;
}
case 131841:
{
returnValue = F("Hans-Schlehahn-Str.");
break;
}
case 131842:
{
returnValue = F("Hans-Schlemmer-Str.");
break;
}
case 131843:
{
returnValue = F("Hans-Schlenker-Weg");
break;
}
case 131844:
{
returnValue = F("Hans-Schlich-Str.");
break;
}
case 131845:
{
returnValue = F("Hans-Schlothfeld-Platz");
break;
}
case 131846:
{
returnValue = F("Hans-Schlösser-Weg");
break;
}
case 131847:
{
returnValue = F("Hans-Schlüter-Weg");
break;
}
case 131848:
{
returnValue = F("Hans-Schmid-Weg");
break;
}
case 131849:
{
returnValue = F("Hans-Schmidmayer-Str.");
break;
}
case 131850:
{
returnValue = F("Hans-Schmidt-Str.");
break;
}
case 131851:
{
returnValue = F("Hans-Schmied-Str.");
break;
}
case 131852:
{
returnValue = F("Hans-Schmitt Weg");
break;
}
case 131853:
{
returnValue = F("Hans-Schmitz-Str.");
break;
}
case 131854:
{
returnValue = F("Hans-Schmotzer-Allee");
break;
}
case 131855:
{
returnValue = F("Hans-Schmotzer-Str.");
break;
}
case 131856:
{
returnValue = F("Hans-Schneeberger-Str.");
break;
}
case 131857:
{
returnValue = F("Hans-Schnitzer-Weg");
break;
}
case 131858:
{
returnValue = F("Hans-Schnitzler-Str.");
break;
}
case 131859:
{
returnValue = F("Hans-Scholkemeier-Weg");
break;
}
case 131860:
{
returnValue = F("Hans-Scholl-Allee");
break;
}
case 131861:
{
returnValue = F("Hans-Scholl-Kreisel");
break;
}
case 131862:
{
returnValue = F("Hans-Scholl-Str.");
break;
}
case 131863:
{
returnValue = F("Hans-Schomburgk-Siedlung");
break;
}
case 131864:
{
returnValue = F("Hans-Schomburgk-Str.");
break;
}
case 131865:
{
returnValue = F("Hans-Schottenhamel-Gasserl");
break;
}
case 131866:
{
returnValue = F("Hans-Schrader-Str.");
break;
}
case 131867:
{
returnValue = F("Hans-Schramm-Str.");
break;
}
case 131868:
{
returnValue = F("Hans-Schrembs-Str.");
break;
}
case 131869:
{
returnValue = F("Hans-Schreyer-Str.");
break;
}
case 131870:
{
returnValue = F("Hans-Schroedter-Weg");
break;
}
case 131871:
{
returnValue = F("Hans-Schröer-Str.");
break;
}
case 131872:
{
returnValue = F("Hans-Schuhbeck-Weg");
break;
}
case 131873:
{
returnValue = F("Hans-Schultze-Weg");
break;
}
case 131874:
{
returnValue = F("Hans-Schumm-Str.");
break;
}
case 131875:
{
returnValue = F("Hans-Schuster-Weg");
break;
}
case 131876:
{
returnValue = F("Hans-Schweiner-Gasse");
break;
}
case 131877:
{
returnValue = F("Hans-Schweiner-Str.");
break;
}
case 131878:
{
returnValue = F("Hans-Schwörer-Str.");
break;
}
case 131879:
{
returnValue = F("Hans-Schäufelein-Str.");
break;
}
case 131880:
{
returnValue = F("Hans-Schöberl-Weg");
break;
}
case 131881:
{
returnValue = F("Hans-Schöneberger-Str.");
break;
}
case 131882:
{
returnValue = F("Hans-Schöpf-Str.");
break;
}
case 131883:
{
returnValue = F("Hans-Schüchlin-Str.");
break;
}
case 131884:
{
returnValue = F("Hans-Schüler-Weg");
break;
}
case 131885:
{
returnValue = F("Hans-Schütte-Str.");
break;
}
case 131886:
{
returnValue = F("Hans-Schütz-Str.");
break;
}
case 131887:
{
returnValue = F("Hans-Sebald-Str.");
break;
}
case 131888:
{
returnValue = F("Hans-Seeberger-Weg");
break;
}
case 131889:
{
returnValue = F("Hans-Seehase-Ring");
break;
}
case 131890:
{
returnValue = F("Hans-Segl-Str.");
break;
}
case 131891:
{
returnValue = F("Hans-Seidat-Weg");
break;
}
case 131892:
{
returnValue = F("Hans-Seidel-Schacht");
break;
}
case 131893:
{
returnValue = F("Hans-Seidel-Str.");
break;
}
case 131894:
{
returnValue = F("Hans-Seyfer-Str.");
break;
}
case 131895:
{
returnValue = F("Hans-Seyff-Str.");
break;
}
case 131896:
{
returnValue = F("Hans-Siem-Weg");
break;
}
case 131897:
{
returnValue = F("Hans-Sigmund-Str.");
break;
}
case 131898:
{
returnValue = F("Hans-Silbermann-Str.");
break;
}
case 131899:
{
returnValue = F("Hans-Soeder-Str.");
break;
}
case 131900:
{
returnValue = F("Hans-Sommer-Str.");
break;
}
case 131901:
{
returnValue = F("Hans-Soph-Str.");
break;
}
case 131902:
{
returnValue = F("Hans-Spielbauer-Str.");
break;
}
case 131903:
{
returnValue = F("Hans-Staab-Str.");
break;
}
case 131904:
{
returnValue = F("Hans-Staden-Allee");
break;
}
case 131905:
{
returnValue = F("Hans-Staden-Str.");
break;
}
case 131906:
{
returnValue = F("Hans-Stangenberger-Str.");
break;
}
case 131907:
{
returnValue = F("Hans-Steche-Weg");
break;
}
case 131908:
{
returnValue = F("Hans-Steffens-Weg");
break;
}
case 131909:
{
returnValue = F("Hans-Steger-Ufer");
break;
}
case 131910:
{
returnValue = F("Hans-Stein-Siedlung");
break;
}
case 131911:
{
returnValue = F("Hans-Stein-Str.");
break;
}
case 131912:
{
returnValue = F("Hans-Steinberger-Str.");
break;
}
case 131913:
{
returnValue = F("Hans-Steinmetz-Ring");
break;
}
case 131914:
{
returnValue = F("Hans-Stempel-Str.");
break;
}
case 131915:
{
returnValue = F("Hans-Stender-Weg");
break;
}
case 131916:
{
returnValue = F("Hans-Stenner-Str.");
break;
}
case 131917:
{
returnValue = F("Hans-Stercken-Platz");
break;
}
case 131918:
{
returnValue = F("Hans-Stern-Str.");
break;
}
case 131919:
{
returnValue = F("Hans-Sterzl-Str.");
break;
}
case 131920:
{
returnValue = F("Hans-Steurer-Str.");
break;
}
case 131921:
{
returnValue = F("Hans-Stichter-Str.");
break;
}
case 131922:
{
returnValue = F("Hans-Stienen-Weg");
break;
}
case 131923:
{
returnValue = F("Hans-Stießberger-Str.");
break;
}
case 131924:
{
returnValue = F("Hans-Stiglitz-Weg");
break;
}
case 131925:
{
returnValue = F("Hans-Stiglocher-Str.");
break;
}
case 131926:
{
returnValue = F("Hans-Stilkerich-Weg");
break;
}
case 131927:
{
returnValue = F("Hans-Stock-Str.");
break;
}
case 131928:
{
returnValue = F("Hans-Streif-Str.");
break;
}
case 131929:
{
returnValue = F("Hans-Striegelski-Str.");
break;
}
case 131930:
{
returnValue = F("Hans-Striegl-Str.");
break;
}
case 131931:
{
returnValue = F("Hans-Strigel-Str.");
break;
}
case 131932:
{
returnValue = F("Hans-Strixner-Str.");
break;
}
case 131933:
{
returnValue = F("Hans-Stubbe-Str.");
break;
}
case 131934:
{
returnValue = F("Hans-Stuck-Str.");
break;
}
case 131935:
{
returnValue = F("Hans-Stuhlmacher-Str.");
break;
}
case 131936:
{
returnValue = F("Hans-Stör-Weg");
break;
}
case 131937:
{
returnValue = F("Hans-Stübner-Weg");
break;
}
case 131938:
{
returnValue = F("Hans-Sueß-Str.");
break;
}
case 131939:
{
returnValue = F("Hans-Söhnker-Eck");
break;
}
case 131940:
{
returnValue = F("Hans-Tenhaeff-Str.");
break;
}
case 131941:
{
returnValue = F("Hans-Teuf-Weg");
break;
}
case 131942:
{
returnValue = F("Hans-Theis-Str.");
break;
}
case 131943:
{
returnValue = F("Hans-Theisen-Str.");
break;
}
case 131944:
{
returnValue = F("Hans-Theismann-Weg");
break;
}
case 131945:
{
returnValue = F("Hans-Thoma-Platz");
break;
}
case 131946:
{
returnValue = F("Hans-Thoma-Ring");
break;
}
case 131947:
{
returnValue = F("Hans-Thoma-Str.");
break;
}
case 131948:
{
returnValue = F("Hans-Thoma-Weg");
break;
}
case 131949:
{
returnValue = F("Hans-Thumer-Str.");
break;
}
case 131950:
{
returnValue = F("Hans-Thörner-Str.");
break;
}
case 131951:
{
returnValue = F("Hans-Tobler-Str.");
break;
}
case 131952:
{
returnValue = F("Hans-Trapp-Str.");
break;
}
case 131953:
{
returnValue = F("Hans-Traut-Str.");
break;
}
case 131954:
{
returnValue = F("Hans-Trimborn-Str.");
break;
}
case 131955:
{
returnValue = F("Hans-Tönjes-Ring");
break;
}
case 131956:
{
returnValue = F("Hans-Ulrich-Breymann-Str.");
break;
}
case 131957:
{
returnValue = F("Hans-Unterleitner-Weg");
break;
}
case 131958:
{
returnValue = F("Hans-Urmiller-Ring");
break;
}
case 131959:
{
returnValue = F("Hans-Vait Str.");
break;
}
case 131960:
{
returnValue = F("Hans-Veil-Weg");
break;
}
case 131961:
{
returnValue = F("Hans-Veit-Str.");
break;
}
case 131962:
{
returnValue = F("Hans-Vetter-Str.");
break;
}
case 131963:
{
returnValue = F("Hans-Vieweger-Str.");
break;
}
case 131964:
{
returnValue = F("Hans-Vilz-Weg");
break;
}
case 131965:
{
returnValue = F("Hans-Vogel-Str.");
break;
}
case 131966:
{
returnValue = F("Hans-Vogl-Str.");
break;
}
case 131967:
{
returnValue = F("Hans-Volkmann-Str.");
break;
}
case 131968:
{
returnValue = F("Hans-Völlmecke-Str.");
break;
}
case 131969:
{
returnValue = F("Hans-Wachter-Str.");
break;
}
case 131970:
{
returnValue = F("Hans-Wagenitz-Str.");
break;
}
case 131971:
{
returnValue = F("Hans-Wagenpfeil-Str.");
break;
}
case 131972:
{
returnValue = F("Hans-Wagner-Str.");
break;
}
case 131973:
{
returnValue = F("Hans-Walch-Weg");
break;
}
case 131974:
{
returnValue = F("Hans-Wallrab-Str.");
break;
}
case 131975:
{
returnValue = F("Hans-Waloschek-Weg");
break;
}
case 131976:
{
returnValue = F("Hans-Walther-Str.");
break;
}
case 131977:
{
returnValue = F("Hans-Warsch-Str.");
break;
}
case 131978:
{
returnValue = F("Hans-Wasner-Str.");
break;
}
case 131979:
{
returnValue = F("Hans-Watzke-Weg");
break;
}
case 131980:
{
returnValue = F("Hans-Watzlik-Ring");
break;
}
case 131981:
{
returnValue = F("Hans-Watzlik-Str.");
break;
}
case 131982:
{
returnValue = F("Hans-Watzlik-Weg");
break;
}
case 131983:
{
returnValue = F("Hans-Weber-Str.");
break;
}
case 131984:
{
returnValue = F("Hans-Weber-Weg");
break;
}
case 131985:
{
returnValue = F("Hans-Weckler-Anlage");
break;
}
case 131986:
{
returnValue = F("Hans-Wegmann-Str.");
break;
}
case 131987:
{
returnValue = F("Hans-Weigel-Str.");
break;
}
case 131988:
{
returnValue = F("Hans-Weiher-Weg");
break;
}
case 131989:
{
returnValue = F("Hans-Weihrach-Str.");
break;
}
case 131990:
{
returnValue = F("Hans-Weiler-Weg");
break;
}
case 131991:
{
returnValue = F("Hans-Weilhammer-Weg");
break;
}
case 131992:
{
returnValue = F("Hans-Weinmayr-Str.");
break;
}
case 131993:
{
returnValue = F("Hans-Weinzierl-Str.");
break;
}
case 131994:
{
returnValue = F("Hans-Weisbach-Str.");
break;
}
case 131995:
{
returnValue = F("Hans-Welzel-Str.");
break;
}
case 131996:
{
returnValue = F("Hans-Wenstl-Str.");
break;
}
case 131997:
{
returnValue = F("Hans-Werner-Langkamp-Weg");
break;
}
case 131998:
{
returnValue = F("Hans-Werner-Neeman-Pad");
break;
}
case 131999:
{
returnValue = F("Hans-Werner-Str.");
break;
}
case 132000:
{
returnValue = F("Hans-Werner-Weg");
break;
}
case 132001:
{
returnValue = F("Hans-Wertinger-Str.");
break;
}
case 132002:
{
returnValue = F("Hans-Weygel-Str.");
break;
}
case 132003:
{
returnValue = F("Hans-Wichmann-Str.");
break;
}
case 132004:
{
returnValue = F("Hans-Widmann-Str.");
break;
}
case 132005:
{
returnValue = F("Hans-Widmann-Weg");
break;
}
case 132006:
{
returnValue = F("Hans-Widtmann-Str.");
break;
}
case 132007:
{
returnValue = F("Hans-Wiegel-Str.");
break;
}
case 132008:
{
returnValue = F("Hans-Wienskowitz-Weg");
break;
}
case 132009:
{
returnValue = F("Hans-Wiesles-Linie");
break;
}
case 132010:
{
returnValue = F("Hans-Wiessner-Str.");
break;
}
case 132011:
{
returnValue = F("Hans-Wild-Str.");
break;
}
case 132012:
{
returnValue = F("Hans-Wilhelm-Grahlmann-Str.");
break;
}
case 132013:
{
returnValue = F("Hans-Wilhelm-Kirst-Str.");
break;
}
case 132014:
{
returnValue = F("Hans-Wilhelm-Peters-Str.");
break;
}
case 132015:
{
returnValue = F("Hans-Wilhelm-Renkhoff-Str.");
break;
}
case 132016:
{
returnValue = F("Hans-Wilhelmi-Str.");
break;
}
case 132017:
{
returnValue = F("Hans-Willi-Güßgen-Platz");
break;
}
case 132018:
{
returnValue = F("Hans-Willmann-Str.");
break;
}
case 132019:
{
returnValue = F("Hans-Willy-Gathen-Weg");
break;
}
case 132020:
{
returnValue = F("Hans-Willy-Mertens-Str.");
break;
}
case 132021:
{
returnValue = F("Hans-Wimmer-Gassl");
break;
}
case 132022:
{
returnValue = F("Hans-Wimmer-Weg");
break;
}
case 132023:
{
returnValue = F("Hans-Windsinger-Str.");
break;
}
case 132024:
{
returnValue = F("Hans-Winkelweg");
break;
}
case 132025:
{
returnValue = F("Hans-Winkler-Platz");
break;
}
case 132026:
{
returnValue = F("Hans-Winter-Str.");
break;
}
case 132027:
{
returnValue = F("Hans-Wirner-Str.");
break;
}
case 132028:
{
returnValue = F("Hans-Wirsching-Str.");
break;
}
case 132029:
{
returnValue = F("Hans-Wirth-Weg");
break;
}
case 132030:
{
returnValue = F("Hans-Witten-Str.");
break;
}
case 132031:
{
returnValue = F("Hans-Wittwer-Str.");
break;
}
case 132032:
{
returnValue = F("Hans-Wohlrab-Weg");
break;
}
case 132033:
{
returnValue = F("Hans-Wolf-Gasse");
break;
}
case 132034:
{
returnValue = F("Hans-Wolf-Str.");
break;
}
case 132035:
{
returnValue = F("Hans-Wolf-Weg");
break;
}
case 132036:
{
returnValue = F("Hans-Wolzendorf-Str.");
break;
}
case 132037:
{
returnValue = F("Hans-Wurm-Str.");
break;
}
case 132038:
{
returnValue = F("Hans-Wölfel-Str.");
break;
}
case 132039:
{
returnValue = F("Hans-Wöllke-Str.");
break;
}
case 132040:
{
returnValue = F("Hans-Würflein-Siedlung");
break;
}
case 132041:
{
returnValue = F("Hans-Xari-Platz");
break;
}
case 132042:
{
returnValue = F("Hans-Zander-Weg");
break;
}
case 132043:
{
returnValue = F("Hans-Zanders-Str.");
break;
}
case 132044:
{
returnValue = F("Hans-Zech-Str.");
break;
}
case 132045:
{
returnValue = F("Hans-Zeh-Str.");
break;
}
case 132046:
{
returnValue = F("Hans-Zeiller-Str.");
break;
}
case 132047:
{
returnValue = F("Hans-Zeitler-Str.");
break;
}
case 132048:
{
returnValue = F("Hans-Zellner-Weg");
break;
}
case 132049:
{
returnValue = F("Hans-Zens-Str.");
break;
}
case 132050:
{
returnValue = F("Hans-Ziegler-Str.");
break;
}
case 132051:
{
returnValue = F("Hans-Zimmermann-Str.");
break;
}
case 132052:
{
returnValue = F("Hans-Zischka-Str.");
break;
}
case 132053:
{
returnValue = F("Hans-Zobel-Str.");
break;
}
case 132054:
{
returnValue = F("Hans-Zuchs-Str.");
break;
}
case 132055:
{
returnValue = F("Hans-Zundtner-Weg");
break;
}
case 132056:
{
returnValue = F("Hans-Zöller-Str.");
break;
}
case 132057:
{
returnValue = F("Hans-Zöllner-Weg");
break;
}
case 132058:
{
returnValue = F("Hans-Zühlke-Str.");
break;
}
case 132059:
{
returnValue = F("Hans-Züricher-Weg");
break;
}
case 132060:
{
returnValue = F("Hans-Zürn-Weg");
break;
}
case 132061:
{
returnValue = F("Hans-am-Ende-Str.");
break;
}
case 132062:
{
returnValue = F("Hans-am-Ende-Weg");
break;
}
case 132063:
{
returnValue = F("Hans-de-Fries-Str.");
break;
}
case 132064:
{
returnValue = F("Hans-im-Glück-Str.");
break;
}
case 132065:
{
returnValue = F("Hans-im-Glück-Weg");
break;
}
case 132066:
{
returnValue = F("Hans-vom-Holtz-Str.");
break;
}
case 132067:
{
returnValue = F("Hans-vom-Stall-Str.");
break;
}
case 132068:
{
returnValue = F("Hans-vom-Stein-Str.");
break;
}
case 132069:
{
returnValue = F("Hans-von-Abersfeld-Str.");
break;
}
case 132070:
{
returnValue = F("Hans-von-Bemberg-Str.");
break;
}
case 132071:
{
returnValue = F("Hans-von-Biesenrodt-Str.");
break;
}
case 132072:
{
returnValue = F("Hans-von-Bülow-Str.");
break;
}
case 132073:
{
returnValue = F("Hans-von-Dohnanyi-Str.");
break;
}
case 132074:
{
returnValue = F("Hans-von-Hayek-Str.");
break;
}
case 132075:
{
returnValue = F("Hans-von-Hirschhorn-Str.");
break;
}
case 132076:
{
returnValue = F("Hans-von-Hutten-Platz");
break;
}
case 132077:
{
returnValue = F("Hans-von-Kulmbach-Str.");
break;
}
case 132078:
{
returnValue = F("Hans-von-Marees-Str.");
break;
}
case 132079:
{
returnValue = F("Hans-von-Opel-Str.");
break;
}
case 132080:
{
returnValue = F("Hans-von-Volkmann-Platz");
break;
}
case 132081:
{
returnValue = F("Hansa Centrum");
break;
}
case 132082:
{
returnValue = F("Hansa Terrain");
break;
}
case 132083:
{
returnValue = F("Hansa-Ring");
break;
}
case 132084:
{
returnValue = F("Hansaallee");
break;
}
case 132085:
{
returnValue = F("Hansabrücke");
break;
}
case 132086:
{
returnValue = F("Hansacker");
break;
}
case 132087:
{
returnValue = F("Hansadamm");
break;
}
case 132088:
{
returnValue = F("Hansahlener Dorfstr.");
break;
}
case 132089:
{
returnValue = F("Hansahöhe");
break;
}
case 132090:
{
returnValue = F("Hansapark");
break;
}
case 132091:
{
returnValue = F("Hansaplatz");
break;
}
case 132092:
{
returnValue = F("Hansaprinz-Weg");
break;
}
case 132093:
{
returnValue = F("Hansaremsgasse");
break;
}
case 132094:
{
returnValue = F("Hansaring");
break;
}
case 132095:
{
returnValue = F("Hansastr.");
break;
}
case 132096:
{
returnValue = F("Hansatreppe");
break;
}
case 132097:
{
returnValue = F("Hansau");
break;
}
case 132098:
{
returnValue = F("Hansaweg");
break;
}
case 132099:
{
returnValue = F("Hansbauer-Weg");
break;
}
case 132100:
{
returnValue = F("Hansbauernstr.");
break;
}
case 132101:
{
returnValue = F("Hansbauerstr.");
break;
}
case 132102:
{
returnValue = F("Hansberg");
break;
}
case 132103:
{
returnValue = F("Hansbergstr.");
break;
}
case 132104:
{
returnValue = F("Hansch");
break;
}
case 132105:
{
returnValue = F("Hanschhorst");
break;
}
case 132106:
{
returnValue = F("Hanschweg");
break;
}
case 132107:
{
returnValue = F("Hansdorfer Landstr.");
break;
}
case 132108:
{
returnValue = F("Hansdorfer Mühlendamm");
break;
}
case 132109:
{
returnValue = F("Hansdorfer Redder");
break;
}
case 132110:
{
returnValue = F("Hansdorfer Str.");
break;
}
case 132111:
{
returnValue = F("Hansdorfer Weg");
break;
}
case 132112:
{
returnValue = F("Hanse Lucke");
break;
}
case 132113:
{
returnValue = F("Hanseallee");
break;
}
case 132114:
{
returnValue = F("Hanseaten-Platz");
break;
}
case 132115:
{
returnValue = F("Hanseatenring");
break;
}
case 132116:
{
returnValue = F("Hanseatenstieg");
break;
}
case 132117:
{
returnValue = F("Hanseatenstr.");
break;
}
case 132118:
{
returnValue = F("Hanseatenweg");
break;
}
case 132119:
{
returnValue = F("Hansebrücke");
break;
}
case 132120:
{
returnValue = F("Hansedamm");
break;
}
case 132121:
{
returnValue = F("Hansegartenstr.");
break;
}
case 132122:
{
returnValue = F("Hansegisreute");
break;
}
case 132123:
{
returnValue = F("Hansehof");
break;
}
case 132124:
{
returnValue = F("Hansekaufmann-Rinck-Weg");
break;
}
case 132125:
{
returnValue = F("Hanselaer");
break;
}
case 132126:
{
returnValue = F("Hanselaerstr.");
break;
}
case 132127:
{
returnValue = F("Hanselbergweg");
break;
}
case 132128:
{
returnValue = F("Hanselehofweg");
break;
}
case 132129:
{
returnValue = F("Hanselfeld");
break;
}
case 132130:
{
returnValue = F("Hanselhofstr.");
break;
}
case 132131:
{
returnValue = F("Hansell");
break;
}
case 132132:
{
returnValue = F("Hanseller Str.");
break;
}
case 132133:
{
returnValue = F("Hanselmannstr.");
break;
}
case 132134:
{
returnValue = F("Hanselmühle");
break;
}
case 132135:
{
returnValue = F("Hanselsteigstr.");
break;
}
case 132136:
{
returnValue = F("Hanselweg");
break;
}
case 132137:
{
returnValue = F("Hansemannstr.");
break;
}
case 132138:
{
returnValue = F("Hansemannweg");
break;
}
case 132139:
{
returnValue = F("Hansen Weg");
break;
}
case 132140:
{
returnValue = F("Hansena-Weg");
break;
}
case 132141:
{
returnValue = F("Hansenbauerweg");
break;
}
case 132142:
{
returnValue = F("Hansenberg");
break;
}
case 132143:
{
returnValue = F("Hansenbergallee");
break;
}
case 132144:
{
returnValue = F("Hansenberger Weg");
break;
}
case 132145:
{
returnValue = F("Hansenbergstr.");
break;
}
case 132146:
{
returnValue = F("Hansenbuckweg");
break;
}
case 132147:
{
returnValue = F("Hansendstr.");
break;
}
case 132148:
{
returnValue = F("Hanseneck");
break;
}
case 132149:
{
returnValue = F("Hansener Str.");
break;
}
case 132150:
{
returnValue = F("Hansengarten");
break;
}
case 132151:
{
returnValue = F("Hansengasse");
break;
}
case 132152:
{
returnValue = F("Hansengelstr.");
break;
}
case 132153:
{
returnValue = F("Hansenhäuserweg");
break;
}
case 132154:
{
returnValue = F("Hansenhöhle");
break;
}
case 132155:
{
returnValue = F("Hansenklinge");
break;
}
case 132156:
{
returnValue = F("Hansenklingenweg");
break;
}
case 132157:
{
returnValue = F("Hansenmühle");
break;
}
case 132158:
{
returnValue = F("Hansenplatz");
break;
}
case 132159:
{
returnValue = F("Hansens Holz");
break;
}
case 132160:
{
returnValue = F("Hansenschonergasse");
break;
}
case 132161:
{
returnValue = F("Hansenstr.");
break;
}
case 132162:
{
returnValue = F("Hansenweg");
break;
}
case 132163:
{
returnValue = F("Hansenweiherstr.");
break;
}
case 132164:
{
returnValue = F("Hansenwiesenweg");
break;
}
case 132165:
{
returnValue = F("Hansenzellweg");
break;
}
case 132166:
{
returnValue = F("Hansenäckerweg");
break;
}
case 132167:
{
returnValue = F("Hanseplatz");
break;
}
case 132168:
{
returnValue = F("Hanserausweg");
break;
}
case 132169:
{
returnValue = F("Hansererweg");
break;
}
case 132170:
{
returnValue = F("Hanserfeldstr.");
break;
}
case 132171:
{
returnValue = F("Hansering");
break;
}
case 132172:
{
returnValue = F("Hanserstr.");
break;
}
case 132173:
{
returnValue = F("Hanserweg");
break;
}
case 132174:
{
returnValue = F("Hanseshof");
break;
}
case 132175:
{
returnValue = F("Hansestr.");
break;
}
case 132176:
{
returnValue = F("Hansetor");
break;
}
case 132177:
{
returnValue = F("Hanseufer");
break;
}
case 132178:
{
returnValue = F("Hanseweg");
break;
}
case 132179:
{
returnValue = F("Hansewies");
break;
}
case 132180:
{
returnValue = F("Hansfelde");
break;
}
case 132181:
{
returnValue = F("Hansfelder Berg");
break;
}
case 132182:
{
returnValue = F("Hansfelder Hof");
break;
}
case 132183:
{
returnValue = F("Hansgasse");
break;
}
case 132184:
{
returnValue = F("Hansgaß");
break;
}
case 132185:
{
returnValue = F("Hansgörgelstr.");
break;
}
case 132186:
{
returnValue = F("Hansgörglstr.");
break;
}
case 132187:
{
returnValue = F("Hansgörglweg");
break;
}
case 132188:
{
returnValue = F("Hanshagen");
break;
}
case 132189:
{
returnValue = F("Hanshägener Weg");
break;
}
case 132190:
{
returnValue = F("Hanshäger Str.");
break;
}
case 132191:
{
returnValue = F("Hansiepenbusch");
break;
}
case 132192:
{
returnValue = F("Hansinckstr.");
break;
}
case 132193:
{
returnValue = F("Hansingberg");
break;
}
case 132194:
{
returnValue = F("Hansingstr.");
break;
}
case 132195:
{
returnValue = F("Hansiweg");
break;
}
case 132196:
{
returnValue = F("Hansjakob Str.");
break;
}
case 132197:
{
returnValue = F("Hansjakob-Str.");
break;
}
case 132198:
{
returnValue = F("Hansjakob-Weg");
break;
}
case 132199:
{
returnValue = F("Hansjakobstr.");
break;
}
case 132200:
{
returnValue = F("Hansjakobweg");
break;
}
case 132201:
{
returnValue = F("Hanskamp");
break;
}
case 132202:
{
returnValue = F("Hanskühnenburgstr.");
break;
}
case 132203:
{
returnValue = F("Hanskühnenburgweg");
break;
}
case 132204:
{
returnValue = F("Hanslbergweg");
break;
}
case 132205:
{
returnValue = F("Hanslmairstr.");
break;
}
case 132206:
{
returnValue = F("Hanslmühlweg");
break;
}
case 132207:
{
returnValue = F("Hanslmüllerweg");
break;
}
case 132208:
{
returnValue = F("Hanslohweg");
break;
}
case 132209:
{
returnValue = F("Hansltrad");
break;
}
case 132210:
{
returnValue = F("Hanslweg");
break;
}
case 132211:
{
returnValue = F("Hansmannstr.");
break;
}
case 132212:
{
returnValue = F("Hansmannweg");
break;
}
case 132213:
{
returnValue = F("Hansmarte-Weg");
break;
}
case 132214:
{
returnValue = F("Hansmeiers Feld");
break;
}
case 132215:
{
returnValue = F("Hansmertenweg");
break;
}
case 132216:
{
returnValue = F("Hanspeter-Greß-Str.");
break;
}
case 132217:
{
returnValue = F("Hanspeter-Hellenthal-Str.");
break;
}
case 132218:
{
returnValue = F("Hansselmannstr.");
break;
}
case 132219:
{
returnValue = F("Hanssenstr.");
break;
}
case 132220:
{
returnValue = F("Hanssonstr.");
break;
}
case 132221:
{
returnValue = F("Hansstr.");
break;
}
case 132222:
{
returnValue = F("Hanstedter Landstr.");
break;
}
case 132223:
{
returnValue = F("Hanstedter Ring");
break;
}
case 132224:
{
returnValue = F("Hanstedter Str.");
break;
}
case 132225:
{
returnValue = F("Hanstedter Weg");
break;
}
case 132226:
{
returnValue = F("Hanstein");
break;
}
case 132227:
{
returnValue = F("Hanstein-Weg");
break;
}
case 132228:
{
returnValue = F("Hansteinhof");
break;
}
case 132229:
{
returnValue = F("Hansteinstr.");
break;
}
case 132230:
{
returnValue = F("Hanstorf");
break;
}
case 132231:
{
returnValue = F("Hanstorfer Landweg");
break;
}
case 132232:
{
returnValue = F("Hanstorfer Str.");
break;
}
case 132233:
{
returnValue = F("Hanstr.");
break;
}
case 132234:
{
returnValue = F("Hansweg");
break;
}
case 132235:
{
returnValue = F("Hanswiesenweg");
break;
}
case 132236:
{
returnValue = F("Hanswolfengasse");
break;
}
case 132237:
{
returnValue = F("Hansühner Str.");
break;
}
case 132238:
{
returnValue = F("Hantalgasse");
break;
}
case 132239:
{
returnValue = F("Hantenweg");
break;
}
case 132240:
{
returnValue = F("Hantscheweg");
break;
}
case 132241:
{
returnValue = F("Hanufer");
break;
}
case 132242:
{
returnValue = F("Hanum");
break;
}
case 132243:
{
returnValue = F("Hanum-Schneise");
break;
}
case 132244:
{
returnValue = F("Hanumer Str.");
break;
}
case 132245:
{
returnValue = F("Hanumer Weg");
break;
}
case 132246:
{
returnValue = F("Hanweiler Str.");
break;
}
case 132247:
{
returnValue = F("Hanweilerstr.");
break;
}
case 132248:
{
returnValue = F("Hanwische Str.");
break;
}
case 132249:
{
returnValue = F("Hanwischer Höhe");
break;
}
case 132250:
{
returnValue = F("Hanxler Str.");
break;
}
case 132251:
{
returnValue = F("Hanzinger Str.");
break;
}
case 132252:
{
returnValue = F("Hanzinger Weg");
break;
}
case 132253:
{
returnValue = F("Hanzostr.");
break;
}
case 132254:
{
returnValue = F("Hanßelmannstr.");
break;
}
case 132255:
{
returnValue = F("Hanßemannsweg");
break;
}
case 132256:
{
returnValue = F("Hanöllerweg");
break;
}
case 132257:
{
returnValue = F("Hapbach");
break;
}
case 132258:
{
returnValue = F("Hapbachweg");
break;
}
case 132259:
{
returnValue = F("Hapberger Weg");
break;
}
case 132260:
{
returnValue = F("Hapelrath");
break;
}
case 132261:
{
returnValue = F("Hapenweg");
break;
}
case 132262:
{
returnValue = F("Happach");
break;
}
case 132263:
{
returnValue = F("Happacher Feld");
break;
}
case 132264:
{
returnValue = F("Happacher Str.");
break;
}
case 132265:
{
returnValue = F("Happacher Weg");
break;
}
case 132266:
{
returnValue = F("Happacherlochweg");
break;
}
case 132267:
{
returnValue = F("Happacherweg");
break;
}
case 132268:
{
returnValue = F("Happachsgrund");
break;
}
case 132269:
{
returnValue = F("Happbühl");
break;
}
case 132270:
{
returnValue = F("Happelgasse");
break;
}
case 132271:
{
returnValue = F("Happelseck");
break;
}
case 132272:
{
returnValue = F("Happelsmühle");
break;
}
case 132273:
{
returnValue = F("Happelstr.");
break;
}
case 132274:
{
returnValue = F("Happelter");
break;
}
case 132275:
{
returnValue = F("Happelter Heide");
break;
}
case 132276:
{
returnValue = F("Happelter Str.");
break;
}
case 132277:
{
returnValue = F("Happenbacher Str.");
break;
}
case 132278:
{
returnValue = F("Happendeller Weg");
break;
}
case 132279:
{
returnValue = F("Happengasse");
break;
}
case 132280:
{
returnValue = F("Happenort");
break;
}
case 132281:
{
returnValue = F("Happenweilerstr.");
break;
}
case 132282:
{
returnValue = F("Happertshäuser Str.");
break;
}
case 132283:
{
returnValue = F("Happeyweg");
break;
}
case 132284:
{
returnValue = F("Happinger Str.");
break;
}
case 132285:
{
returnValue = F("Happinger-Au-Str.");
break;
}
case 132286:
{
returnValue = F("Happingerhaldenweg");
break;
}
case 132287:
{
returnValue = F("Happleweg");
break;
}
case 132288:
{
returnValue = F("Happsteige");
break;
}
case 132289:
{
returnValue = F("Happurger Str.");
break;
}
case 132290:
{
returnValue = F("Happweg");
break;
}
case 132291:
{
returnValue = F("Harald & Käthe Grübler Platz");
break;
}
case 132292:
{
returnValue = F("Harald-Blank-Str.");
break;
}
case 132293:
{
returnValue = F("Harald-Fissler-Str.");
break;
}
case 132294:
{
returnValue = F("Harald-Flick-Str.");
break;
}
case 132295:
{
returnValue = F("Harald-Gormsen-Weg");
break;
}
case 132296:
{
returnValue = F("Harald-Hamberg-Str.");
break;
}
case 132297:
{
returnValue = F("Harald-Leipnitz-Str.");
break;
}
case 132298:
{
returnValue = F("Harald-Lubina-Weg");
break;
}
case 132299:
{
returnValue = F("Harald-Schurz-Weg");
break;
}
case 132300:
{
returnValue = F("Harald-Striewski-Str.");
break;
}
case 132301:
{
returnValue = F("Haraldseck");
break;
}
case 132302:
{
returnValue = F("Haraldstr.");
break;
}
case 132303:
{
returnValue = F("Harannistr.");
break;
}
case 132304:
{
returnValue = F("Harbach");
break;
}
case 132305:
{
returnValue = F("Harbacher Str.");
break;
}
case 132306:
{
returnValue = F("Harbacher Weg");
break;
}
case 132307:
{
returnValue = F("Harbachersteig");
break;
}
case 132308:
{
returnValue = F("Harbachsmühle");
break;
}
case 132309:
{
returnValue = F("Harbachstr.");
break;
}
case 132310:
{
returnValue = F("Harbachtal");
break;
}
case 132311:
{
returnValue = F("Harbachweg");
break;
}
case 132312:
{
returnValue = F("Harbargen");
break;
}
case 132313:
{
returnValue = F("Harbatshofen");
break;
}
case 132314:
{
returnValue = F("Harbecker Str.");
break;
}
case 132315:
{
returnValue = F("Harbecker Weg");
break;
}
case 132316:
{
returnValue = F("Harbeckweg");
break;
}
case 132317:
{
returnValue = F("Harber (Soltau), Mühle");
break;
}
case 132318:
{
returnValue = F("Harberg");
break;
}
case 132319:
{
returnValue = F("Harberger Str.");
break;
}
case 132320:
{
returnValue = F("Harbergstr.");
break;
}
case 132321:
{
returnValue = F("Harbernusstr.");
break;
}
case 132322:
{
returnValue = F("Harberstr.");
break;
}
case 132323:
{
returnValue = F("Harbertor");
break;
}
case 132324:
{
returnValue = F("Harberweg");
break;
}
case 132325:
{
returnValue = F("Harbigring");
break;
}
case 132326:
{
returnValue = F("Harbigstr.");
break;
}
case 132327:
{
returnValue = F("Harbigweg");
break;
}
case 132328:
{
returnValue = F("Harbker Str.");
break;
}
case 132329:
{
returnValue = F("Harbker Weg");
break;
}
case 132330:
{
returnValue = F("Harbkeweg");
break;
}
case 132331:
{
returnValue = F("Harblek");
break;
}
case 132332:
{
returnValue = F("Harbleker Chaussee");
break;
}
case 132333:
{
returnValue = F("Harbortweg");
break;
}
case 132334:
{
returnValue = F("Harbour");
break;
}
case 132335:
{
returnValue = F("Harbrookweg");
break;
}
case 132336:
{
returnValue = F("Harbruch");
break;
}
case 132337:
{
returnValue = F("Harbstr.");
break;
}
case 132338:
{
returnValue = F("Harbuckweg");
break;
}
case 132339:
{
returnValue = F("Harburger Berg");
break;
}
case 132340:
{
returnValue = F("Harburger Heerstr.");
break;
}
case 132341:
{
returnValue = F("Harburger Stadtweg");
break;
}
case 132342:
{
returnValue = F("Harburger Str.");
break;
}
case 132343:
{
returnValue = F("Harburger Weg");
break;
}
case 132344:
{
returnValue = F("Harburgerstr.");
break;
}
case 132345:
{
returnValue = F("Harburgstr.");
break;
}
case 132346:
{
returnValue = F("Harckesheyde");
break;
}
case 132347:
{
returnValue = F("Harckestwiete");
break;
}
case 132348:
{
returnValue = F("Hardackerweg");
break;
}
case 132349:
{
returnValue = F("Hardbachstr.");
break;
}
case 132350:
{
returnValue = F("Hardbergstr.");
break;
}
case 132351:
{
returnValue = F("Hardbergweg");
break;
}
case 132352:
{
returnValue = F("Hardbrücke");
break;
}
case 132353:
{
returnValue = F("Hardbuckstr.");
break;
}
case 132354:
{
returnValue = F("Hardbäumchesweg");
break;
}
case 132355:
{
returnValue = F("Harde");
break;
}
case 132356:
{
returnValue = F("Hardebenweg");
break;
}
case 132357:
{
returnValue = F("Hardecker Str.");
break;
}
case 132358:
{
returnValue = F("Hardeckring");
break;
}
case 132359:
{
returnValue = F("Hardeckstr.");
break;
}
case 132360:
{
returnValue = F("Hardegser Str.");
break;
}
case 132361:
{
returnValue = F("Hardegser Weg");
break;
}
case 132362:
{
returnValue = F("Hardehausen-Str.");
break;
}
case 132363:
{
returnValue = F("Hardehausener Str.");
break;
}
case 132364:
{
returnValue = F("Hardehauser Str.");
break;
}
case 132365:
{
returnValue = F("Hardehauser Weg");
break;
}
case 132366:
{
returnValue = F("Hardel");
break;
}
case 132367:
{
returnValue = F("Hardelstr.");
break;
}
case 132368:
{
returnValue = F("Hardemasch");
break;
}
case 132369:
{
returnValue = F("Hardementenstr.");
break;
}
case 132370:
{
returnValue = F("Hardenberg");
break;
}
case 132371:
{
returnValue = F("Hardenbergbrücke");
break;
}
case 132372:
{
returnValue = F("Hardenberger Str.");
break;
}
case 132373:
{
returnValue = F("Hardenberger Weg");
break;
}
case 132374:
{
returnValue = F("Hardenbergstr.");
break;
}
case 132375:
{
returnValue = F("Hardenbergswinkel");
break;
}
case 132376:
{
returnValue = F("Hardenbergweg");
break;
}
case 132377:
{
returnValue = F("Hardenborstel");
break;
}
case 132378:
{
returnValue = F("Hardenbosteler Str.");
break;
}
case 132379:
{
returnValue = F("Hardenburgstr.");
break;
}
case 132380:
{
returnValue = F("Hardenburgweg");
break;
}
case 132381:
{
returnValue = F("Hardenkamp");
break;
}
case 132382:
{
returnValue = F("Hardenkamper Esch");
break;
}
case 132383:
{
returnValue = F("Hardensettener Kreuzweg");
break;
}
case 132384:
{
returnValue = F("Hardensteiner Weg");
break;
}
case 132385:
{
returnValue = F("Harder Delle");
break;
}
case 132386:
{
returnValue = F("Harder Gasse");
break;
}
case 132387:
{
returnValue = F("Harder Str.");
break;
}
case 132388:
{
returnValue = F("Harder Weg");
break;
}
case 132389:
{
returnValue = F("Hardergäßle");
break;
}
case 132390:
{
returnValue = F("Harderheide");
break;
}
case 132391:
{
returnValue = F("Harderhook");
break;
}
case 132392:
{
returnValue = F("Harderkamp");
break;
}
case 132393:
{
returnValue = F("Harderkoppel");
break;
}
case 132394:
{
returnValue = F("Harderoder Str.");
break;
}
case 132395:
{
returnValue = F("Harderpark");
break;
}
case 132396:
{
returnValue = F("Hardersenberg");
break;
}
case 132397:
{
returnValue = F("Harderstr.");
break;
}
case 132398:
{
returnValue = F("Hardersweg");
break;
}
case 132399:
{
returnValue = F("Hardert");
break;
}
case 132400:
{
returnValue = F("Harderweg");
break;
}
case 132401:
{
returnValue = F("Harderwycker Weg");
break;
}
case 132402:
{
returnValue = F("Harderwykensteg");
break;
}
case 132403:
{
returnValue = F("Hardesbyer Str.");
break;
}
case 132404:
{
returnValue = F("Hardeseiche");
break;
}
case 132405:
{
returnValue = F("Hardeseiche-Süd");
break;
}
case 132406:
{
returnValue = F("Hardessemstr.");
break;
}
case 132407:
{
returnValue = F("Hardesweg");
break;
}
case 132408:
{
returnValue = F("Hardeweg");
break;
}
case 132409:
{
returnValue = F("Hardfeldplatz");
break;
}
case 132410:
{
returnValue = F("Hardfeldstr.");
break;
}
case 132411:
{
returnValue = F("Hardgraben");
break;
}
case 132412:
{
returnValue = F("Hardheimer Str.");
break;
}
case 132413:
{
returnValue = F("Hardheimer Teichweg");
break;
}
case 132414:
{
returnValue = F("Hardheimer Weg");
break;
}
case 132415:
{
returnValue = F("Hardhof");
break;
}
case 132416:
{
returnValue = F("Hardhofweg");
break;
}
case 132417:
{
returnValue = F("Hardikskamp");
break;
}
case 132418:
{
returnValue = F("Hardinger Mühlenweg");
break;
}
case 132419:
{
returnValue = F("Hardinger Str.");
break;
}
case 132420:
{
returnValue = F("Hardinger Weg");
break;
}
case 132421:
{
returnValue = F("Hardinghauser Quellen");
break;
}
case 132422:
{
returnValue = F("Hardinghauser Str.");
break;
}
case 132423:
{
returnValue = F("Hardinghausstr.");
break;
}
case 132424:
{
returnValue = F("Hardinghausweg");
break;
}
case 132425:
{
returnValue = F("Hardingstr.");
break;
}
case 132426:
{
returnValue = F("Hardisser Str.");
break;
}
case 132427:
{
returnValue = F("Hardkopfweg");
break;
}
case 132428:
{
returnValue = F("Hardlage");
break;
}
case 132429:
{
returnValue = F("Hardorpsweg");
break;
}
case 132430:
{
returnValue = F("Hardstaffeln");
break;
}
case 132431:
{
returnValue = F("Hardsteig");
break;
}
case 132432:
{
returnValue = F("Hardsteiger Str.");
break;
}
case 132433:
{
returnValue = F("Hardsteinweg");
break;
}
case 132434:
{
returnValue = F("Hardsthalstr.");
break;
}
case 132435:
{
returnValue = F("Hardstr.");
break;
}
case 132436:
{
returnValue = F("Hardstrasse");
break;
}
case 132437:
{
returnValue = F("Hardt");
break;
}
case 132438:
{
returnValue = F("Hardt-Mathes-Gasse");
break;
}
case 132439:
{
returnValue = F("Hardt-Weg");
break;
}
case 132440:
{
returnValue = F("Hardtallee");
break;
}
case 132441:
{
returnValue = F("Hardtanlage");
break;
}
case 132442:
{
returnValue = F("Hardtbach");
break;
}
case 132443:
{
returnValue = F("Hardtbacher Höhe");
break;
}
case 132444:
{
returnValue = F("Hardtberg");
break;
}
case 132445:
{
returnValue = F("Hardtberg-Weg");
break;
}
case 132446:
{
returnValue = F("Hardtbergstr.");
break;
}
case 132447:
{
returnValue = F("Hardtbergweg");
break;
}
case 132448:
{
returnValue = F("Hardtblick");
break;
}
case 132449:
{
returnValue = F("Hardtbrunnenweg");
break;
}
case 132450:
{
returnValue = F("Hardtbuckelweg");
break;
}
case 132451:
{
returnValue = F("Hardtburg");
break;
}
case 132452:
{
returnValue = F("Hardtburger Str.");
break;
}
case 132453:
{
returnValue = F("Hardtburgstr.");
break;
}
case 132454:
{
returnValue = F("Hardtbühl");
break;
}
case 132455:
{
returnValue = F("Hardter Höhe");
break;
}
case 132456:
{
returnValue = F("Hardter Höhenweg");
break;
}
case 132457:
{
returnValue = F("Hardter Landstr.");
break;
}
case 132458:
{
returnValue = F("Hardter Pfad");
break;
}
case 132459:
{
returnValue = F("Hardter Str.");
break;
}
case 132460:
{
returnValue = F("Hardter Waldstr.");
break;
}
case 132461:
{
returnValue = F("Hardter Weg");
break;
}
case 132462:
{
returnValue = F("Hardterbroicher Allee");
break;
}
case 132463:
{
returnValue = F("Hardterbroicher Str.");
break;
}
case 132464:
{
returnValue = F("Hardterweg");
break;
}
case 132465:
{
returnValue = F("Hardtfeld");
break;
}
case 132466:
{
returnValue = F("Hardtgasse");
break;
}
case 132467:
{
returnValue = F("Hardtgrenzweg");
break;
}
case 132468:
{
returnValue = F("Hardtgrundweg");
break;
}
case 132469:
{
returnValue = F("Hardtgäßle");
break;
}
case 132470:
{
returnValue = F("Hardthaus");
break;
}
case 132471:
{
returnValue = F("Hardthausweg");
break;
}
case 132472:
{
returnValue = F("Hardtheimer Weg");
break;
}
case 132473:
{
returnValue = F("Hardthof");
break;
}
case 132474:
{
returnValue = F("Hardthofschlagweg");
break;
}
case 132475:
{
returnValue = F("Hardthäuser Steigle");
break;
}
case 132476:
{
returnValue = F("Hardthöfe");
break;
}
case 132477:
{
returnValue = F("Hardtkapellenstr.");
break;
}
case 132478:
{
returnValue = F("Hardtknippen");
break;
}
case 132479:
{
returnValue = F("Hardtkopfweg");
break;
}
case 132480:
{
returnValue = F("Hardtlache");
break;
}
case 132481:
{
returnValue = F("Hardtmatt-Siedlung");
break;
}
case 132482:
{
returnValue = F("Hardtmißweg");
break;
}
case 132483:
{
returnValue = F("Hardtmuthweg");
break;
}
case 132484:
{
returnValue = F("Hardtmühle");
break;
}
case 132485:
{
returnValue = F("Hardtpark");
break;
}
case 132486:
{
returnValue = F("Hardtplätzchen");
break;
}
case 132487:
{
returnValue = F("Hardtrainweg");
break;
}
case 132488:
{
returnValue = F("Hardtring");
break;
}
case 132489:
{
returnValue = F("Hardtschachenweg");
break;
}
case 132490:
{
returnValue = F("Hardtschneise");
break;
}
case 132491:
{
returnValue = F("Hardtspitzenweg");
break;
}
case 132492:
{
returnValue = F("Hardtsteig-Klammper-Weg");
break;
}
case 132493:
{
returnValue = F("Hardtsteige");
break;
}
case 132494:
{
returnValue = F("Hardtsteigstr.");
break;
}
case 132495:
{
returnValue = F("Hardtsteigweg");
break;
}
case 132496:
{
returnValue = F("Hardtstr.");
break;
}
case 132497:
{
returnValue = F("Hardtsträßle");
break;
}
case 132498:
{
returnValue = F("Hardtsweg");
break;
}
case 132499:
{
returnValue = F("Hardtufer");
break;
}
case 132500:
{
returnValue = F("Hardtwald");
break;
}
case 132501:
{
returnValue = F("Hardtwaldallee");
break;
}
case 132502:
{
returnValue = F("Hardtwaldring");
break;
}
case 132503:
{
returnValue = F("Hardtwaldstr.");
break;
}
case 132504:
{
returnValue = F("Hardtwaldweg");
break;
}
case 132505:
{
returnValue = F("Hardtweg");
break;
}
case 132506:
{
returnValue = F("Hardtweiher-Rundweg");
break;
}
case 132507:
{
returnValue = F("Hardtweiherstr.");
break;
}
case 132508:
{
returnValue = F("Hardtweinbergstr.");
break;
}
case 132509:
{
returnValue = F("Hardtwiese");
break;
}
case 132510:
{
returnValue = F("Hardtwiesenstr.");
break;
}
case 132511:
{
returnValue = F("Hardweg");
break;
}
case 132512:
{
returnValue = F("Hardwiesenstr.");
break;
}
case 132513:
{
returnValue = F("Hardwiesenweg");
break;
}
case 132514:
{
returnValue = F("Hardystr.");
break;
}
case 132515:
{
returnValue = F("Hardäckerstr.");
break;
}
case 132516:
{
returnValue = F("Hardörener Weg");
break;
}
case 132517:
{
returnValue = F("Harelbekeplatz");
break;
}
case 132518:
{
returnValue = F("Harelungenweg");
break;
}
case 132519:
{
returnValue = F("Harenberg");
break;
}
case 132520:
{
returnValue = F("Harenberger Meile");
break;
}
case 132521:
{
returnValue = F("Harenberger Str.");
break;
}
case 132522:
{
returnValue = F("Harenburg");
break;
}
case 132523:
{
returnValue = F("Harener Str.");
break;
}
case 132524:
{
returnValue = F("Harenfeld");
break;
}
case 132525:
{
returnValue = F("Harenkamp");
break;
}
case 132526:
{
returnValue = F("Harensberg");
break;
}
case 132527:
{
returnValue = F("Harenzackenweg");
break;
}
case 132528:
{
returnValue = F("Harenzhofen");
break;
}
case 132529:
{
returnValue = F("Harfe");
break;
}
case 132530:
{
returnValue = F("Harfeld");
break;
}
case 132531:
{
returnValue = F("Harfenburgweg");
break;
}
case 132532:
{
returnValue = F("Harfenstr.");
break;
}
case 132533:
{
returnValue = F("Harffer Schloßallee");
break;
}
case 132534:
{
returnValue = F("Harffer Str.");
break;
}
case 132535:
{
returnValue = F("Harffstr.");
break;
}
case 132536:
{
returnValue = F("Harffweg");
break;
}
case 132537:
{
returnValue = F("Harfinweg");
break;
}
case 132538:
{
returnValue = F("Hargard");
break;
}
case 132539:
{
returnValue = F("Hargardsgasse");
break;
}
case 132540:
{
returnValue = F("Hargartener Str.");
break;
}
case 132541:
{
returnValue = F("Hargarter Str.");
break;
}
case 132542:
{
returnValue = F("Hargental");
break;
}
case 132543:
{
returnValue = F("Hargesheimer Landstr.");
break;
}
case 132544:
{
returnValue = F("Harget");
break;
}
case 132545:
{
returnValue = F("Hargetweg");
break;
}
case 132546:
{
returnValue = F("Hargis Street");
break;
}
case 132547:
{
returnValue = F("Hargisdorfer Str.");
break;
}
case 132548:
{
returnValue = F("Harhausen");
break;
}
case 132549:
{
returnValue = F("Harheils Kamp");
break;
}
case 132550:
{
returnValue = F("Harheimer Weg");
break;
}
case 132551:
{
returnValue = F("Hariggasse");
break;
}
case 132552:
{
returnValue = F("Harikseestr.");
break;
}
case 132553:
{
returnValue = F("Harikseeweg");
break;
}
case 132554:
{
returnValue = F("Haring");
break;
}
case 132555:
{
returnValue = F("Haringeystr.");
break;
}
case 132556:
{
returnValue = F("Haringstr.");
break;
}
case 132557:
{
returnValue = F("Hariolfstr.");
break;
}
case 132558:
{
returnValue = F("Harjesstr.");
break;
}
case 132559:
{
returnValue = F("Hark-Olufs-Wai");
break;
}
case 132560:
{
returnValue = F("Harkampsheide");
break;
}
case 132561:
{
returnValue = F("Harkauer Weg");
break;
}
case 132562:
{
returnValue = F("Harkefelder Weg");
break;
}
case 132563:
{
returnValue = F("Harkemisser Str.");
break;
}
case 132564:
{
returnValue = F("Harkenbergstr.");
break;
}
case 132565:
{
returnValue = F("Harkenblecker Furt");
break;
}
case 132566:
{
returnValue = F("Harkenblecker Str.");
break;
}
case 132567:
{
returnValue = F("Harkenblecker Weg");
break;
}
case 132568:
{
returnValue = F("Harkenbrei");
break;
}
case 132569:
{
returnValue = F("Harkenheide");
break;
}
case 132570:
{
returnValue = F("Harkenkamp");
break;
}
case 132571:
{
returnValue = F("Harkenroth");
break;
}
case 132572:
{
returnValue = F("Harkenrothstr.");
break;
}
case 132573:
{
returnValue = F("Harkenstieg");
break;
}
case 132574:
{
returnValue = F("Harkenstr.");
break;
}
case 132575:
{
returnValue = F("Harkerweg");
break;
}
case 132576:
{
returnValue = F("Harkeröder Str.");
break;
}
case 132577:
{
returnValue = F("Harkeröder Weg");
break;
}
case 132578:
{
returnValue = F("Harkielweg");
break;
}
case 132579:
{
returnValue = F("Harkingsbrügge");
break;
}
case 132580:
{
returnValue = F("Harkirchner Str.");
break;
}
case 132581:
{
returnValue = F("Harkmoor");
break;
}
case 132582:
{
returnValue = F("Harkortdamm");
break;
}
case 132583:
{
returnValue = F("Harkorthof");
break;
}
case 132584:
{
returnValue = F("Harkortring");
break;
}
case 132585:
{
returnValue = F("Harkortstr.");
break;
}
case 132586:
{
returnValue = F("Harkortweg");
break;
}
case 132587:
{
returnValue = F("Harksheider Str.");
break;
}
case 132588:
{
returnValue = F("Harksheider Weg");
break;
}
case 132589:
{
returnValue = F("Harkshörner Weg");
break;
}
case 132590:
{
returnValue = F("Harksiek");
break;
}
case 132591:
{
returnValue = F("Harksiekhang");
break;
}
case 132592:
{
returnValue = F("Harksweg");
break;
}
case 132593:
{
returnValue = F("Harl");
break;
}
case 132594:
{
returnValue = F("Harlache");
break;
}
case 132595:
{
returnValue = F("Harlachen");
break;
}
case 132596:
{
returnValue = F("Harlachener Str.");
break;
}
case 132597:
{
returnValue = F("Harlachenweg");
break;
}
case 132598:
{
returnValue = F("Harlachinger-Geräumt");
break;
}
case 132599:
{
returnValue = F("Harlachstr.");
break;
}
case 132600:
{
returnValue = F("Harlachweg");
break;
}
case 132601:
{
returnValue = F("Harlandener Str.");
break;
}
case 132602:
{
returnValue = F("Harlander Steig");
break;
}
case 132603:
{
returnValue = F("Harlandstr.");
break;
}
case 132604:
{
returnValue = F("Harlanweg");
break;
}
case 132605:
{
returnValue = F("Harle");
break;
}
case 132606:
{
returnValue = F("Harlebachweg");
break;
}
case 132607:
{
returnValue = F("Harleblick");
break;
}
case 132608:
{
returnValue = F("Harlebucht");
break;
}
case 132609:
{
returnValue = F("Harlemanns Bülten");
break;
}
case 132610:
{
returnValue = F("Harlepadd");
break;
}
case 132611:
{
returnValue = F("Harler Mühle");
break;
}
case 132612:
{
returnValue = F("Harler Weg");
break;
}
case 132613:
{
returnValue = F("Harlesbuckweg");
break;
}
case 132614:
{
returnValue = F("Harleser Str.");
break;
}
case 132615:
{
returnValue = F("Harleser Weg");
break;
}
case 132616:
{
returnValue = F("Harleshäuser Str.");
break;
}
case 132617:
{
returnValue = F("Harleslinie");
break;
}
case 132618:
{
returnValue = F("Harlessemstr.");
break;
}
case 132619:
{
returnValue = F("Harlestr.");
break;
}
case 132620:
{
returnValue = F("Harletzsteiner Weg");
break;
}
case 132621:
{
returnValue = F("Harleweg");
break;
}
case 132622:
{
returnValue = F("Harleßstr.");
break;
}
case 132623:
{
returnValue = F("Harlinger Weg");
break;
}
case 132624:
{
returnValue = F("Harlingeroder Str.");
break;
}
case 132625:
{
returnValue = F("Harlingerstr.");
break;
}
case 132626:
{
returnValue = F("Harlingeröder Str.");
break;
}
case 132627:
{
returnValue = F("Harlingeröder Trift");
break;
}
case 132628:
{
returnValue = F("Harlinghauser Kirchweg");
break;
}
case 132629:
{
returnValue = F("Harlingsen");
break;
}
case 132630:
{
returnValue = F("Harlingsweg");
break;
}
case 132631:
{
returnValue = F("Harlingweg");
break;
}
case 132632:
{
returnValue = F("Harlippenstr.");
break;
}
case 132633:
{
returnValue = F("Harlungerstr.");
break;
}
case 132634:
{
returnValue = F("Harlyweg");
break;
}
case 132635:
{
returnValue = F("Harm Huppel Pad");
break;
}
case 132636:
{
returnValue = F("Harm-Baucholt-Gasse");
break;
}
case 132637:
{
returnValue = F("Harm-Eissen-Str.");
break;
}
case 132638:
{
returnValue = F("Harm-Gefken-Weg");
break;
}
case 132639:
{
returnValue = F("Harm-Hindrik-Str.");
break;
}
case 132640:
{
returnValue = F("Harm-Janshen-Fehn-Str.");
break;
}
case 132641:
{
returnValue = F("Harm-Janssen-Str.");
break;
}
case 132642:
{
returnValue = F("Harm-Ojemann-Str.");
break;
}
case 132643:
{
returnValue = F("Harm-Str.");
break;
}
case 132644:
{
returnValue = F("Harm-Thielen-Weg");
break;
}
case 132645:
{
returnValue = F("Harm-Tyding-Hof");
break;
}
case 132646:
{
returnValue = F("Harm-Tyding-Str.");
break;
}
case 132647:
{
returnValue = F("Harm-Weverschen-Str.");
break;
}
case 132648:
{
returnValue = F("Harm-Wulf-Str.");
break;
}
case 132649:
{
returnValue = F("Harmann-Wessel-Str.");
break;
}
case 132650:
{
returnValue = F("Harmannweg");
break;
}
case 132651:
{
returnValue = F("Harmate");
break;
}
case 132652:
{
returnValue = F("Harmating");
break;
}
case 132653:
{
returnValue = F("Harmburg");
break;
}
case 132654:
{
returnValue = F("Harmbütteler Weg");
break;
}
case 132655:
{
returnValue = F("Harmdeppenshof");
break;
}
case 132656:
{
returnValue = F("Harmdörsweg");
break;
}
case 132657:
{
returnValue = F("Harmelau");
break;
}
case 132658:
{
returnValue = F("Harmelingen");
break;
}
case 132659:
{
returnValue = F("Harmelinger Horstweg");
break;
}
case 132660:
{
returnValue = F("Harmen-Grapengeter-Str.");
break;
}
case 132661:
{
returnValue = F("Harmenhauser Str.");
break;
}
case 132662:
{
returnValue = F("Harmensz-Rembrandt-Str.");
break;
}
case 132663:
{
returnValue = F("Harmer Str.");
break;
}
case 132664:
{
returnValue = F("Harmer Weg");
break;
}
case 132665:
{
returnValue = F("Harmersbächleweg");
break;
}
case 132666:
{
returnValue = F("Harmerzer Str.");
break;
}
case 132667:
{
returnValue = F("Harmesweg");
break;
}
case 132668:
{
returnValue = F("Harmischgasse");
break;
}
case 132669:
{
returnValue = F("Harmisser Str.");
break;
}
case 132670:
{
returnValue = F("Harmisser Wiehe");
break;
}
case 132671:
{
returnValue = F("Harmonie");
break;
}
case 132672:
{
returnValue = F("Harmoniegarten");
break;
}
case 132673:
{
returnValue = F("Harmoniegasse");
break;
}
case 132674:
{
returnValue = F("Harmoniestr.");
break;
}
case 132675:
{
returnValue = F("Harmonieweg");
break;
}
case 132676:
{
returnValue = F("Harmredder");
break;
}
case 132677:
{
returnValue = F("Harms Busch");
break;
}
case 132678:
{
returnValue = F("Harms Hof");
break;
}
case 132679:
{
returnValue = F("Harms Weg");
break;
}
case 132680:
{
returnValue = F("Harms-Weg");
break;
}
case 132681:
{
returnValue = F("Harmsbrücke");
break;
}
case 132682:
{
returnValue = F("Harmsbüttel");
break;
}
case 132683:
{
returnValue = F("Harmsdorfer Weg");
break;
}
case 132684:
{
returnValue = F("Harmsens Koppel");
break;
}
case 132685:
{
returnValue = F("Harmsenweg");
break;
}
case 132686:
{
returnValue = F("Harmshagener Str.");
break;
}
case 132687:
{
returnValue = F("Harmsholz");
break;
}
case 132688:
{
returnValue = F("Harmshorn");
break;
}
case 132689:
{
returnValue = F("Harmskamp");
break;
}
case 132690:
{
returnValue = F("Harmsmühlenstr.");
break;
}
case 132691:
{
returnValue = F("Harmspark");
break;
}
case 132692:
{
returnValue = F("Harmsplatz");
break;
}
case 132693:
{
returnValue = F("Harmsstr.");
break;
}
case 132694:
{
returnValue = F("Harmstorfer Kirchweg");
break;
}
case 132695:
{
returnValue = F("Harmstorfer Str.");
break;
}
case 132696:
{
returnValue = F("Harmstorfer Weg");
break;
}
case 132697:
{
returnValue = F("Harmsweg");
break;
}
case 132698:
{
returnValue = F("Harmtienstr.");
break;
}
case 132699:
{
returnValue = F("Harmuthsbach");
break;
}
case 132700:
{
returnValue = F("Harnackplatz");
break;
}
case 132701:
{
returnValue = F("Harnackstr.");
break;
}
case 132702:
{
returnValue = F("Harnackweg");
break;
}
case 132703:
{
returnValue = F("Harnekoper Weg");
break;
}
case 132704:
{
returnValue = F("Harnersberg");
break;
}
case 132705:
{
returnValue = F("Harnestr.");
break;
}
case 132706:
{
returnValue = F("Harnis");
break;
}
case 132707:
{
returnValue = F("Harnisch-Str.");
break;
}
case 132708:
{
returnValue = F("Harnischberg");
break;
}
case 132709:
{
returnValue = F("Harnischdorfer Str.");
break;
}
case 132710:
{
returnValue = F("Harnischfeld");
break;
}
case 132711:
{
returnValue = F("Harnischgasse");
break;
}
case 132712:
{
returnValue = F("Harnischstr.");
break;
}
case 132713:
{
returnValue = F("Harnischweg");
break;
}
case 132714:
{
returnValue = F("Harnishof");
break;
}
case 132715:
{
returnValue = F("Harntheiweg");
break;
}
case 132716:
{
returnValue = F("Harold-Allen-Str.");
break;
}
case 132717:
{
returnValue = F("Haroldstr.");
break;
}
case 132718:
{
returnValue = F("Haroldweg");
break;
}
case 132719:
{
returnValue = F("Harpe");
break;
}
case 132720:
{
returnValue = F("Harpel");
break;
}
case 132721:
{
returnValue = F("Harpelsteinstr.");
break;
}
case 132722:
{
returnValue = F("Harpenaus Hof");
break;
}
case 132723:
{
returnValue = F("Harpendenstr.");
break;
}
case 132724:
{
returnValue = F("Harpener Feld");
break;
}
case 132725:
{
returnValue = F("Harpener Hellweg");
break;
}
case 132726:
{
returnValue = F("Harpener Ring");
break;
}
case 132727:
{
returnValue = F("Harpener Str.");
break;
}
case 132728:
{
returnValue = F("Harpener Weg");
break;
}
case 132729:
{
returnValue = F("Harpenfelder Weg");
break;
}
case 132730:
{
returnValue = F("Harpenstr.");
break;
}
case 132731:
{
returnValue = F("Harper Weg");
break;
}
case 132732:
{
returnValue = F("Harpers Ferry Rd");
break;
}
case 132733:
{
returnValue = F("Harperscheid");
break;
}
case 132734:
{
returnValue = F("Harpersdorfer Str.");
break;
}
case 132735:
{
returnValue = F("Harpertshausener Str.");
break;
}
case 132736:
{
returnValue = F("Harpertshäuser Str.");
break;
}
case 132737:
{
returnValue = F("Harpertshäuser Weg");
break;
}
case 132738:
{
returnValue = F("Harpfenburgweg");
break;
}
case 132739:
{
returnValue = F("Harpfetsham");
break;
}
case 132740:
{
returnValue = F("Harpfig");
break;
}
case 132741:
{
returnValue = F("Harpkestr.");
break;
}
case 132742:
{
returnValue = F("Harpolden");
break;
}
case 132743:
{
returnValue = F("Harpoldener Str.");
break;
}
case 132744:
{
returnValue = F("Harpolinger Str.");
break;
}
case 132745:
{
returnValue = F("Harpprechtstr.");
break;
}
case 132746:
{
returnValue = F("Harpstedter Damm");
break;
}
case 132747:
{
returnValue = F("Harpstedter Str.");
break;
}
case 132748:
{
returnValue = F("Harpunierstrate");
break;
}
case 132749:
{
returnValue = F("Harraer Str.");
break;
}
case 132750:
{
returnValue = F("Harrasallee");
break;
}
case 132751:
{
returnValue = F("Harraser Str.");
break;
}
case 132752:
{
returnValue = F("Harraser Weg");
break;
}
case 132753:
{
returnValue = F("Harrassenweg");
break;
}
case 132754:
{
returnValue = F("Harrasser Str.");
break;
}
case 132755:
{
returnValue = F("Harrasstr.");
break;
}
case 132756:
{
returnValue = F("Harrasweg");
break;
}
case 132757:
{
returnValue = F("Harraswiese");
break;
}
case 132758:
{
returnValue = F("Harrbacher Weg");
break;
}
case 132759:
{
returnValue = F("Harreisweg");
break;
}
case 132760:
{
returnValue = F("Harrelhöfe");
break;
}
case 132761:
{
returnValue = F("Harrelkamp");
break;
}
case 132762:
{
returnValue = F("Harrenacker");
break;
}
case 132763:
{
returnValue = F("Harrenberg");
break;
}
case 132764:
{
returnValue = F("Harrenbergweg");
break;
}
case 132765:
{
returnValue = F("Harrendorf");
break;
}
case 132766:
{
returnValue = F("Harrendorfer Str.");
break;
}
case 132767:
{
returnValue = F("Harrenheide");
break;
}
case 132768:
{
returnValue = F("Harrenhorst");
break;
}
case 132769:
{
returnValue = F("Harrenscheid");
break;
}
case 132770:
{
returnValue = F("Harrenstätter Str.");
break;
}
case 132771:
{
returnValue = F("Harrerberg");
break;
}
case 132772:
{
returnValue = F("Harrerstr.");
break;
}
case 132773:
{
returnValue = F("Harrerweg");
break;
}
case 132774:
{
returnValue = F("Harresheim");
break;
}
case 132775:
{
returnValue = F("Harresheimer Weg");
break;
}
case 132776:
{
returnValue = F("Harreshof");
break;
}
case 132777:
{
returnValue = F("Harreshofer Weg");
break;
}
case 132778:
{
returnValue = F("Harreshäuser Allee");
break;
}
case 132779:
{
returnValue = F("Harreshäuser Str.");
break;
}
case 132780:
{
returnValue = F("Harresstr.");
break;
}
case 132781:
{
returnValue = F("Harresweg");
break;
}
case 132782:
{
returnValue = F("Harretsreuth");
break;
}
case 132783:
{
returnValue = F("Harretstr.");
break;
}
case 132784:
{
returnValue = F("Harretweg");
break;
}
case 132785:
{
returnValue = F("Harreweg");
break;
}
case 132786:
{
returnValue = F("Harrgart");
break;
}
case 132787:
{
returnValue = F("Harrhof");
break;
}
case 132788:
{
returnValue = F("Harrhofweg");
break;
}
case 132789:
{
returnValue = F("Harrienstedt");
break;
}
case 132790:
{
returnValue = F("Harrier Way");
break;
}
case 132791:
{
returnValue = F("Harrier Weg");
break;
}
case 132792:
{
returnValue = F("Harrierstr.");
break;
}
case 132793:
{
returnValue = F("Harriesstr.");
break;
}
case 132794:
{
returnValue = F("Harriet-Straub-Str.");
break;
}
case 132795:
{
returnValue = F("Harriet-Straub-Weg");
break;
}
case 132796:
{
returnValue = F("Harringaweg");
break;
}
case 132797:
{
returnValue = F("Harringholzstr.");
break;
}
case 132798:
{
returnValue = F("Harringhuser Str.");
break;
}
case 132799:
{
returnValue = F("Harringsredder");
break;
}
case 132800:
{
returnValue = F("Harringsweg");
break;
}
case 132801:
{
returnValue = F("Harris Drive");
break;
}
case 132802:
{
returnValue = F("Harrisleer Str.");
break;
}
case 132803:
{
returnValue = F("Harrisleer Umgehung");
break;
}
case 132804:
{
returnValue = F("Harrl");
break;
}
case 132805:
{
returnValue = F("Harrlacher Weg");
break;
}
case 132806:
{
returnValue = F("Harrlachgärtenweg");
break;
}
case 132807:
{
returnValue = F("Harrlachweg");
break;
}
case 132808:
{
returnValue = F("Harrlallee");
break;
}
case 132809:
{
returnValue = F("Harrler Trift");
break;
}
case 132810:
{
returnValue = F("Harrlstr.");
break;
}
case 132811:
{
returnValue = F("Harrnischgasse");
break;
}
case 132812:
{
returnValue = F("Harro-Schulze-Boysen-Str.");
break;
}
case 132813:
{
returnValue = F("Harro-Wendt-Platz");
break;
}
case 132814:
{
returnValue = F("Harrogate Allee");
break;
}
case 132815:
{
returnValue = F("Harry Niewert Weg");
break;
}
case 132816:
{
returnValue = F("Harry-Endter-Str.");
break;
}
case 132817:
{
returnValue = F("Harry-Epstein-Platz");
break;
}
case 132818:
{
returnValue = F("Harry-Garm-Weg");
break;
}
case 132819:
{
returnValue = F("Harry-Graf-Kessler-Str.");
break;
}
case 132820:
{
returnValue = F("Harry-Lüneburg-Weg");
break;
}
case 132821:
{
returnValue = F("Harry-Murso Weg");
break;
}
case 132822:
{
returnValue = F("Harry-Rischkau-Str.");
break;
}
case 132823:
{
returnValue = F("Harry-Schulz-Weg");
break;
}
case 132824:
{
returnValue = F("Harry-Steinbock-Str.");
break;
}
case 132825:
{
returnValue = F("Harry-Truman-Str.");
break;
}
case 132826:
{
returnValue = F("Harry-Wilters-Ring");
break;
}
case 132827:
{
returnValue = F("Harry-Wöbse-Str.");
break;
}
case 132828:
{
returnValue = F("Harry-à-Wengen-Str.");
break;
}
case 132829:
{
returnValue = F("Harrößenstr.");
break;
}
case 132830:
{
returnValue = F("Harsbachweg");
break;
}
case 132831:
{
returnValue = F("Harsbergblick");
break;
}
case 132832:
{
returnValue = F("Harsberger Str.");
break;
}
case 132833:
{
returnValue = F("Harsbergstr.");
break;
}
case 132834:
{
returnValue = F("Harscampstr.");
break;
}
case 132835:
{
returnValue = F("Harschbacher Str.");
break;
}
case 132836:
{
returnValue = F("Harschbachweg");
break;
}
case 132837:
{
returnValue = F("Harschburgerstr.");
break;
}
case 132838:
{
returnValue = F("Harscheider Str.");
break;
}
case 132839:
{
returnValue = F("Harscheider Weg");
break;
}
case 132840:
{
returnValue = F("Harscheidter Str.");
break;
}
case 132841:
{
returnValue = F("Harschelbahn");
break;
}
case 132842:
{
returnValue = F("Harschenflether Weg");
break;
}
case 132843:
{
returnValue = F("Harschetsreuth");
break;
}
case 132844:
{
returnValue = F("Harschhofer Str.");
break;
}
case 132845:
{
returnValue = F("Harschklingenweg");
break;
}
case 132846:
{
returnValue = F("Harschtstr.");
break;
}
case 132847:
{
returnValue = F("Harschwaldweg");
break;
}
case 132848:
{
returnValue = F("Harschweg");
break;
}
case 132849:
{
returnValue = F("Harsdorfer Berg");
break;
}
case 132850:
{
returnValue = F("Harsdorfer Bierweg");
break;
}
case 132851:
{
returnValue = F("Harsdorfer Grund");
break;
}
case 132852:
{
returnValue = F("Harsdorfer Platz");
break;
}
case 132853:
{
returnValue = F("Harsdorfer Steig");
break;
}
case 132854:
{
returnValue = F("Harsdorfer Str.");
break;
}
case 132855:
{
returnValue = F("Harsdorfer Worthen");
break;
}
case 132856:
{
returnValue = F("Harsdörferstr.");
break;
}
case 132857:
{
returnValue = F("Harseeweg");
break;
}
case 132858:
{
returnValue = F("Harsefelder Allee");
break;
}
case 132859:
{
returnValue = F("Harsefelder Landstr.");
break;
}
case 132860:
{
returnValue = F("Harsefelder Str.");
break;
}
case 132861:
{
returnValue = F("Harsemenhusen");
break;
}
case 132862:
{
returnValue = F("Harsewinkeler Damm");
break;
}
case 132863:
{
returnValue = F("Harsewinkeler Str.");
break;
}
case 132864:
{
returnValue = F("Harsewinkelstr.");
break;
}
case 132865:
{
returnValue = F("Harsewinkelweg");
break;
}
case 132866:
{
returnValue = F("Harsewinkler Str.");
break;
}
case 132867:
{
returnValue = F("Harsinger Weg");
break;
}
case 132868:
{
returnValue = F("Harslebener Str.");
break;
}
case 132869:
{
returnValue = F("Harslebener Weg");
break;
}
case 132870:
{
returnValue = F("Harsleber Torstr.");
break;
}
case 132871:
{
returnValue = F("Harslemstr.");
break;
}
case 132872:
{
returnValue = F("Harspergerflur");
break;
}
case 132873:
{
returnValue = F("Harsperweg");
break;
}
case 132874:
{
returnValue = F("Harstenhoop");
break;
}
case 132875:
{
returnValue = F("Harster Berg");
break;
}
case 132876:
{
returnValue = F("Harster Chaussee");
break;
}
case 132877:
{
returnValue = F("Harster Dorfstr.");
break;
}
case 132878:
{
returnValue = F("Harster Str.");
break;
}
case 132879:
{
returnValue = F("Harster Weg");
break;
}
case 132880:
{
returnValue = F("Harststr.");
break;
}
case 132881:
{
returnValue = F("Harsumer Mühlenweg");
break;
}
case 132882:
{
returnValue = F("Harsumer Str.");
break;
}
case 132883:
{
returnValue = F("Harsumer Weg");
break;
}
case 132884:
{
returnValue = F("Hart");
break;
}
case 132885:
{
returnValue = F("Hartackerer Geräumt");
break;
}
case 132886:
{
returnValue = F("Hartackerstr.");
break;
}
case 132887:
{
returnValue = F("Hartanstr.");
break;
}
case 132888:
{
returnValue = F("Hartauer Dammweg");
break;
}
case 132889:
{
returnValue = F("Hartauer Str.");
break;
}
case 132890:
{
returnValue = F("Hartauer Weg");
break;
}
case 132891:
{
returnValue = F("Hartauerstr.");
break;
}
case 132892:
{
returnValue = F("Hartauerweg");
break;
}
case 132893:
{
returnValue = F("Hartbaumpfad");
break;
}
case 132894:
{
returnValue = F("Hartberg");
break;
}
case 132895:
{
returnValue = F("Hartberger Str.");
break;
}
case 132896:
{
returnValue = F("Hartbergring");
break;
}
case 132897:
{
returnValue = F("Hartbrooksweg");
break;
}
case 132898:
{
returnValue = F("Hartbrunn");
break;
}
case 132899:
{
returnValue = F("Hartböhn");
break;
}
case 132900:
{
returnValue = F("Hartbühl");
break;
}
case 132901:
{
returnValue = F("Hartchesgasse");
break;
}
case 132902:
{
returnValue = F("Harte Gasse");
break;
}
case 132903:
{
returnValue = F("Harte Kuhle");
break;
}
case 132904:
{
returnValue = F("Harte Stiege");
break;
}
case 132905:
{
returnValue = F("Harteckstr.");
break;
}
case 132906:
{
returnValue = F("Harteckweg");
break;
}
case 132907:
{
returnValue = F("Hartefelder Dorfstr.");
break;
}
case 132908:
{
returnValue = F("Hartefelder Dyck");
break;
}
case 132909:
{
returnValue = F("Hartefelder Heideweg");
break;
}
case 132910:
{
returnValue = F("Hartefelder Markt");
break;
}
case 132911:
{
returnValue = F("Hartefelder Weg");
break;
}
case 132912:
{
returnValue = F("Hartelsteigweg");
break;
}
case 132913:
{
returnValue = F("Hartemer Weg");
break;
}
case 132914:
{
returnValue = F("Hartemicker Weg");
break;
}
case 132915:
{
returnValue = F("Hartemußweg");
break;
}
case 132916:
{
returnValue = F("Hartenauer Hof");
break;
}
case 132917:
{
returnValue = F("Hartenauer Str.");
break;
}
case 132918:
{
returnValue = F("Hartenberg");
break;
}
case 132919:
{
returnValue = F("Hartenbergpark");
break;
}
case 132920:
{
returnValue = F("Hartenbergstr.");
break;
}
case 132921:
{
returnValue = F("Hartendillweg");
break;
}
case 132922:
{
returnValue = F("Harteneckstr.");
break;
}
case 132923:
{
returnValue = F("Harteneckweg");
break;
}
case 132924:
{
returnValue = F("Hartenfelsblick");
break;
}
case 132925:
{
returnValue = F("Hartenfelser Str.");
break;
}
case 132926:
{
returnValue = F("Hartenfelsstr.");
break;
}
case 132927:
{
returnValue = F("Hartengrube");
break;
}
case 132928:
{
returnValue = F("Hartenholmer Damm");
break;
}
case 132929:
{
returnValue = F("Hartenholmer Str.");
break;
}
case 132930:
{
returnValue = F("Hartenkamp");
break;
}
case 132931:
{
returnValue = F("Hartenkampstr.");
break;
}
case 132932:
{
returnValue = F("Hartenkerl");
break;
}
case 132933:
{
returnValue = F("Hartenknapp");
break;
}
case 132934:
{
returnValue = F("Hartenland");
break;
}
case 132935:
{
returnValue = F("Hartenlauh");
break;
}
case 132936:
{
returnValue = F("Hartenmühle");
break;
}
case 132937:
{
returnValue = F("Hartenreuth");
break;
}
case 132938:
{
returnValue = F("Hartenricht");
break;
}
case 132939:
{
returnValue = F("Hartenroder Str.");
break;
}
case 132940:
{
returnValue = F("Hartenscher Damm");
break;
}
case 132941:
{
returnValue = F("Hartensdorfer Str.");
break;
}
case 132942:
{
returnValue = F("Hartensdorfer Weg");
break;
}
case 132943:
{
returnValue = F("Hartensteinallee");
break;
}
case 132944:
{
returnValue = F("Hartensteiner Str.");
break;
}
case 132945:
{
returnValue = F("Hartensteiner Weg");
break;
}
case 132946:
{
returnValue = F("Hartensteinstr.");
break;
}
case 132947:
{
returnValue = F("Hartensteinstreifen");
break;
}
case 132948:
{
returnValue = F("Hartenstr.");
break;
}
case 132949:
{
returnValue = F("Hartenthal");
break;
}
case 132950:
{
returnValue = F("Hartenthaler Str.");
break;
}
case 132951:
{
returnValue = F("Harter Bruchweg");
break;
}
case 132952:
{
returnValue = F("Harter Str.");
break;
}
case 132953:
{
returnValue = F("Harter Weg");
break;
}
case 132954:
{
returnValue = F("Harter Winkl");
break;
}
case 132955:
{
returnValue = F("Harterhof");
break;
}
case 132956:
{
returnValue = F("Harterstr.");
break;
}
case 132957:
{
returnValue = F("Harterweg");
break;
}
case 132958:
{
returnValue = F("Hartes Tal");
break;
}
case 132959:
{
returnValue = F("Hartestr.");
break;
}
case 132960:
{
returnValue = F("Harteweg");
break;
}
case 132961:
{
returnValue = F("Hartfeld");
break;
}
case 132962:
{
returnValue = F("Hartfeldstr.");
break;
}
case 132963:
{
returnValue = F("Hartfeldweg");
break;
}
case 132964:
{
returnValue = F("Hartgerstr.");
break;
}
case 132965:
{
returnValue = F("Hartgesgasse");
break;
}
case 132966:
{
returnValue = F("Hartgiebelstr.");
break;
}
case 132967:
{
returnValue = F("Hartgraben");
break;
}
case 132968:
{
returnValue = F("Hartgrubenweg");
break;
}
case 132969:
{
returnValue = F("Hartgrundpark");
break;
}
case 132970:
{
returnValue = F("Hartha");
break;
}
case 132971:
{
returnValue = F("Hartha Kreuz");
break;
}
case 132972:
{
returnValue = F("Harthaer Flügel");
break;
}
case 132973:
{
returnValue = F("Harthaer Platz");
break;
}
case 132974:
{
returnValue = F("Harthaer Str.");
break;
}
case 132975:
{
returnValue = F("Harthaer Weg");
break;
}
case 132976:
{
returnValue = F("Harthallee");
break;
}
case 132977:
{
returnValue = F("Harthamer Str.");
break;
}
case 132978:
{
returnValue = F("Harthauer Str.");
break;
}
case 132979:
{
returnValue = F("Harthauer Weg");
break;
}
case 132980:
{
returnValue = F("Harthausen");
break;
}
case 132981:
{
returnValue = F("Harthausener Str.");
break;
}
case 132982:
{
returnValue = F("Harthauser Geräumt");
break;
}
case 132983:
{
returnValue = F("Harthauser Str.");
break;
}
case 132984:
{
returnValue = F("Harthauser Weg");
break;
}
case 132985:
{
returnValue = F("Harthauser-Geräumt");
break;
}
case 132986:
{
returnValue = F("Harthauweg");
break;
}
case 132987:
{
returnValue = F("Harthaweg");
break;
}
case 132988:
{
returnValue = F("Harthberg");
break;
}
case 132989:
{
returnValue = F("Harthbergring");
break;
}
case 132990:
{
returnValue = F("Harthblick");
break;
}
case 132991:
{
returnValue = F("Harthblickweg");
break;
}
case 132992:
{
returnValue = F("Harthe");
break;
}
case 132993:
{
returnValue = F("Harthecheln");
break;
}
case 132994:
{
returnValue = F("Hartheimer Str.");
break;
}
case 132995:
{
returnValue = F("Hartheimer Weg");
break;
}
case 132996:
{
returnValue = F("Harthekel");
break;
}
case 132997:
{
returnValue = F("Harthenweg");
break;
}
case 132998:
{
returnValue = F("Harthfeld");
break;
}
case 132999:
{
returnValue = F("Harthgrund");
break;
}
case 133000:
{
returnValue = F("Harthkamp");
break;
}
case 133001:
{
returnValue = F("Harthof");
break;
}
case 133002:
{
returnValue = F("Harthofener Str.");
break;
}
case 133003:
{
returnValue = F("Harthofer Str.");
break;
}
case 133004:
{
returnValue = F("Harthofer Weg");
break;
}
case 133005:
{
returnValue = F("Harthoffußweg");
break;
}
case 133006:
{
returnValue = F("Harthofstr.");
break;
}
case 133007:
{
returnValue = F("Hartholz");
break;
}
case 133008:
{
returnValue = F("Hartholzaue");
break;
}
case 133009:
{
returnValue = F("Hartholzweg");
break;
}
case 133010:
{
returnValue = F("Harthorststr.");
break;
}
case 133011:
{
returnValue = F("Harthorstweg");
break;
}
case 133012:
{
returnValue = F("Harthstr.");
break;
}
case 133013:
{
returnValue = F("Harthweg");
break;
}
case 133014:
{
returnValue = F("Harthäuser Hauptstr.");
break;
}
case 133015:
{
returnValue = F("Harthäuser Str.");
break;
}
case 133016:
{
returnValue = F("Harthäuserweg");
break;
}
case 133017:
{
returnValue = F("Harthöfe");
break;
}
case 133018:
{
returnValue = F("Harthöhe");
break;
}
case 133019:
{
returnValue = F("Hartigelweg");
break;
}
case 133020:
{
returnValue = F("Hartigskuhle");
break;
}
case 133021:
{
returnValue = F("Hartigstr.");
break;
}
case 133022:
{
returnValue = F("Hartigweg");
break;
}
case 133023:
{
returnValue = F("Hartinger Str.");
break;
}
case 133024:
{
returnValue = F("Hartinger Weg");
break;
}
case 133025:
{
returnValue = F("Hartingerstr.");
break;
}
case 133026:
{
returnValue = F("Hartingspecken");
break;
}
case 133027:
{
returnValue = F("Hartingspeckener Feld");
break;
}
case 133028:
{
returnValue = F("Hartingstr.");
break;
}
case 133029:
{
returnValue = F("Hartjehäuser Weg");
break;
}
case 133030:
{
returnValue = F("Hartjenanger");
break;
}
case 133031:
{
returnValue = F("Hartjesweg");
break;
}
case 133032:
{
returnValue = F("Hartjeweg");
break;
}
case 133033:
{
returnValue = F("Hartkampsweg");
break;
}
case 133034:
{
returnValue = F("Hartkestr.");
break;
}
case 133035:
{
returnValue = F("Hartkirchen");
break;
}
case 133036:
{
returnValue = F("Hartkirchener Chaussee");
break;
}
case 133037:
{
returnValue = F("Hartkirchener Str.");
break;
}
case 133038:
{
returnValue = F("Hartkirchner Str.");
break;
}
case 133039:
{
returnValue = F("Hartkirchweg");
break;
}
case 133040:
{
returnValue = F("Hartkoogweg");
break;
}
case 133041:
{
returnValue = F("Hartkopfweg");
break;
}
case 133042:
{
returnValue = F("Hartkopsbever");
break;
}
case 133043:
{
returnValue = F("Hartl-Anger");
break;
}
case 133044:
{
returnValue = F("Hartlachbrünnele");
break;
}
case 133045:
{
returnValue = F("Hartlager Str.");
break;
}
case 133046:
{
returnValue = F("Hartlager Weg");
break;
}
case 133047:
{
returnValue = F("Hartlahweg");
break;
}
case 133048:
{
returnValue = F("Hartland");
break;
}
case 133049:
{
returnValue = F("Hartlaubstr.");
break;
}
case 133050:
{
returnValue = F("Hartlbühlweg");
break;
}
case 133051:
{
returnValue = F("Hartlebenweg");
break;
}
case 133052:
{
returnValue = F("Hartleifstr.");
break;
}
case 133053:
{
returnValue = F("Hartlepooler Platz");
break;
}
case 133054:
{
returnValue = F("Hartler Str.");
break;
}
case 133055:
{
returnValue = F("Hartlgasse");
break;
}
case 133056:
{
returnValue = F("Hartliebstr.");
break;
}
case 133057:
{
returnValue = F("Hartliebweg");
break;
}
case 133058:
{
returnValue = F("Hartlingsgraben");
break;
}
case 133059:
{
returnValue = F("Hartlingsgärten");
break;
}
case 133060:
{
returnValue = F("Hartloh");
break;
}
case 133061:
{
returnValue = F("Hartlschleif");
break;
}
case 133062:
{
returnValue = F("Hartlshof");
break;
}
case 133063:
{
returnValue = F("Hartlweg");
break;
}
case 133064:
{
returnValue = F("Hartmann Weg");
break;
}
case 133065:
{
returnValue = F("Hartmann-Schedel-Str.");
break;
}
case 133066:
{
returnValue = F("Hartmann-Schenk-Weg");
break;
}
case 133067:
{
returnValue = F("Hartmann-von-Aue-Str.");
break;
}
case 133068:
{
returnValue = F("Hartmann-von-der-Aue-Str.");
break;
}
case 133069:
{
returnValue = F("Hartmannplatz");
break;
}
case 133070:
{
returnValue = F("Hartmanns Twiete");
break;
}
case 133071:
{
returnValue = F("Hartmannsbach");
break;
}
case 133072:
{
returnValue = F("Hartmannsberg");
break;
}
case 133073:
{
returnValue = F("Hartmannsbergweg");
break;
}
case 133074:
{
returnValue = F("Hartmannsbornschneise");
break;
}
case 133075:
{
returnValue = F("Hartmannsdamm");
break;
}
case 133076:
{
returnValue = F("Hartmannsdorf");
break;
}
case 133077:
{
returnValue = F("Hartmannsdorfer Chaussee");
break;
}
case 133078:
{
returnValue = F("Hartmannsdorfer Str.");
break;
}
case 133079:
{
returnValue = F("Hartmannsdorfer Weg");
break;
}
case 133080:
{
returnValue = F("Hartmannsgasse");
break;
}
case 133081:
{
returnValue = F("Hartmannsgraben");
break;
}
case 133082:
{
returnValue = F("Hartmannsgruberweg");
break;
}
case 133083:
{
returnValue = F("Hartmannsgrund");
break;
}
case 133084:
{
returnValue = F("Hartmannsgrüner Str.");
break;
}
case 133085:
{
returnValue = F("Hartmannsgrüner Waldweg");
break;
}
case 133086:
{
returnValue = F("Hartmannshainer Str.");
break;
}
case 133087:
{
returnValue = F("Hartmannshainer Weg");
break;
}
case 133088:
{
returnValue = F("Hartmannshausen");
break;
}
case 133089:
{
returnValue = F("Hartmannshof");
break;
}
case 133090:
{
returnValue = F("Hartmannshäuser Kirchweg");
break;
}
case 133091:
{
returnValue = F("Hartmannshäuser Str.");
break;
}
case 133092:
{
returnValue = F("Hartmannshöhe");
break;
}
case 133093:
{
returnValue = F("Hartmannskehlweg");
break;
}
case 133094:
{
returnValue = F("Hartmannskoppel");
break;
}
case 133095:
{
returnValue = F("Hartmannslochschneise");
break;
}
case 133096:
{
returnValue = F("Hartmannsrechweg");
break;
}
case 133097:
{
returnValue = F("Hartmannsruh");
break;
}
case 133098:
{
returnValue = F("Hartmannstr.");
break;
}
case 133099:
{
returnValue = F("Hartmannsweg");
break;
}
case 133100:
{
returnValue = F("Hartmannsweilerstr.");
break;
}
case 133101:
{
returnValue = F("Hartmannswildeweg");
break;
}
case 133102:
{
returnValue = F("Hartmannsäcker");
break;
}
case 133103:
{
returnValue = F("Hartmannufer");
break;
}
case 133104:
{
returnValue = F("Hartmannweg");
break;
}
case 133105:
{
returnValue = F("Hartmattenstr.");
break;
}
case 133106:
{
returnValue = F("Hartmeckestr.");
break;
}
case 133107:
{
returnValue = F("Hartmesweg");
break;
}
case 133108:
{
returnValue = F("Hartmeyerstr.");
break;
}
case 133109:
{
returnValue = F("Hartmoll");
break;
}
case 133110:
{
returnValue = F("Hartmut-Colden-Str.");
break;
}
case 133111:
{
returnValue = F("Hartmut-Fiedler-Ring");
break;
}
case 133112:
{
returnValue = F("Hartmut-Träger-Str.");
break;
}
case 133113:
{
returnValue = F("Hartmuth-Pfeil-Weg");
break;
}
case 133114:
{
returnValue = F("Hartmuthstr.");
break;
}
case 133115:
{
returnValue = F("Hartmutstr.");
break;
}
case 133116:
{
returnValue = F("Hartmutweg");
break;
}
case 133117:
{
returnValue = F("Hartmuß");
break;
}
case 133118:
{
returnValue = F("Hartmähderweg");
break;
}
case 133119:
{
returnValue = F("Hartmühle");
break;
}
case 133120:
{
returnValue = F("Hartmühlenweg");
break;
}
case 133121:
{
returnValue = F("Hartmüller Str.");
break;
}
case 133122:
{
returnValue = F("Hartnagelstr.");
break;
}
case 133123:
{
returnValue = F("Hartnitstr.");
break;
}
case 133124:
{
returnValue = F("Hartogstr.");
break;
}
case 133125:
{
returnValue = F("Hartpapierstr.");
break;
}
case 133126:
{
returnValue = F("Hartpenninger Str.");
break;
}
case 133127:
{
returnValue = F("Hartpenninger Weg");
break;
}
case 133128:
{
returnValue = F("Hartranftstr.");
break;
}
case 133129:
{
returnValue = F("Hartrehre");
break;
}
case 133130:
{
returnValue = F("Hartrichstr.");
break;
}
case 133131:
{
returnValue = F("Hartriegel");
break;
}
case 133132:
{
returnValue = F("Hartriegelstr.");
break;
}
case 133133:
{
returnValue = F("Hartriegelweg");
break;
}
case 133134:
{
returnValue = F("Hartroda");
break;
}
case 133135:
{
returnValue = F("Hartrodaer Steg");
break;
}
case 133136:
{
returnValue = F("Hartschwand");
break;
}
case 133137:
{
returnValue = F("Hartsee-Freizeitgelände");
break;
}
case 133138:
{
returnValue = F("Hartseestr.");
break;
}
case 133139:
{
returnValue = F("Hartsgaster Str.");
break;
}
case 133140:
{
returnValue = F("Hartshauser Str.");
break;
}
case 133141:
{
returnValue = F("Hartsieker Weg");
break;
}
case 133142:
{
returnValue = F("Hartsteige");
break;
}
case 133143:
{
returnValue = F("Hartsteinstr.");
break;
}
case 133144:
{
returnValue = F("Hartsteinweg");
break;
}
case 133145:
{
returnValue = F("Hartstr.");
break;
}
case 133146:
{
returnValue = F("Hartteilweg");
break;
}
case 133147:
{
returnValue = F("Harttor");
break;
}
case 133148:
{
returnValue = F("Hartumer Str.");
break;
}
case 133149:
{
returnValue = F("Hartungs");
break;
}
case 133150:
{
returnValue = F("Hartungsaue");
break;
}
case 133151:
{
returnValue = F("Hartungsgasse");
break;
}
case 133152:
{
returnValue = F("Hartungsstr.");
break;
}
case 133153:
{
returnValue = F("Hartungstr.");
break;
}
case 133154:
{
returnValue = F("Hartungswall");
break;
}
case 133155:
{
returnValue = F("Hartungsweg");
break;
}
case 133156:
{
returnValue = F("Hartwachsrieder Weg");
break;
}
case 133157:
{
returnValue = F("Hartwald");
break;
}
case 133158:
{
returnValue = F("Hartwaldstr.");
break;
}
case 133159:
{
returnValue = F("Hartwaldweg");
break;
}
case 133160:
{
returnValue = F("Hartward an der K 7");
break;
}
case 133161:
{
returnValue = F("Hartward-Ost");
break;
}
case 133162:
{
returnValue = F("Hartward-West");
break;
}
case 133163:
{
returnValue = F("Hartwarder Bruchweg");
break;
}
case 133164:
{
returnValue = F("Hartwarder Landwehr");
break;
}
case 133165:
{
returnValue = F("Hartwarder Schoolpadd");
break;
}
case 133166:
{
returnValue = F("Hartwarder Str.");
break;
}
case 133167:
{
returnValue = F("Hartwasen");
break;
}
case 133168:
{
returnValue = F("Hartweg");
break;
}
case 133169:
{
returnValue = F("Hartweinberg");
break;
}
case 133170:
{
returnValue = F("Hartweinbergstr.");
break;
}
case 133171:
{
returnValue = F("Hartweinsgasse");
break;
}
case 133172:
{
returnValue = F("Hartwichstr.");
break;
}
case 133173:
{
returnValue = F("Hartwies");
break;
}
case 133174:
{
returnValue = F("Hartwiese");
break;
}
case 133175:
{
returnValue = F("Hartwiesen");
break;
}
case 133176:
{
returnValue = F("Hartwiesenweg");
break;
}
case 133177:
{
returnValue = F("Hartwig Str.");
break;
}
case 133178:
{
returnValue = F("Hartwig-Hüser-Str.");
break;
}
case 133179:
{
returnValue = F("Hartwig-Neumann-Weg");
break;
}
case 133180:
{
returnValue = F("Hartwig-Peetz-Str.");
break;
}
case 133181:
{
returnValue = F("Hartwigsahl");
break;
}
case 133182:
{
returnValue = F("Hartwigsahler Weg");
break;
}
case 133183:
{
returnValue = F("Hartwigsberg");
break;
}
case 133184:
{
returnValue = F("Hartwigsdorf");
break;
}
case 133185:
{
returnValue = F("Hartwigstr.");
break;
}
case 133186:
{
returnValue = F("Hartwigswalder Str.");
break;
}
case 133187:
{
returnValue = F("Hartzeitlarner Str.");
break;
}
case 133188:
{
returnValue = F("Hartzerstr.");
break;
}
case 133189:
{
returnValue = F("Hartäcker");
break;
}
case 133190:
{
returnValue = F("Hartäckerweg");
break;
}
case 133191:
{
returnValue = F("Harumer Weg");
break;
}
case 133192:
{
returnValue = F("Harvantsweg");
break;
}
case 133193:
{
returnValue = F("Harvesser Ring");
break;
}
case 133194:
{
returnValue = F("Harvey-Benjamin-Fuller-Str.");
break;
}
case 133195:
{
returnValue = F("Harweg");
break;
}
case 133196:
{
returnValue = F("Harwick");
break;
}
case 133197:
{
returnValue = F("Harxbütteler Str.");
break;
}
case 133198:
{
returnValue = F("Harxheimer Str.");
break;
}
case 133199:
{
returnValue = F("Harxheimer Weg");
break;
}
case 133200:
{
returnValue = F("Harz");
break;
}
case 133201:
{
returnValue = F("Harz-Eichsfeld-Thüringen-Weg");
break;
}
case 133202:
{
returnValue = F("Harz-Weser-Str.");
break;
}
case 133203:
{
returnValue = F("Harzbachstr.");
break;
}
case 133204:
{
returnValue = F("Harzbachweg");
break;
}
case 133205:
{
returnValue = F("Harzbecker Str.");
break;
}
case 133206:
{
returnValue = F("Harzberg");
break;
}
case 133207:
{
returnValue = F("Harzberger Str.");
break;
}
case 133208:
{
returnValue = F("Harzbergstr.");
break;
}
case 133209:
{
returnValue = F("Harzbergweg");
break;
}
case 133210:
{
returnValue = F("Harzblick");
break;
}
case 133211:
{
returnValue = F("Harzborngraben");
break;
}
case 133212:
{
returnValue = F("Harzbrunnenweg");
break;
}
case 133213:
{
returnValue = F("Harzbrunner Str.");
break;
}
case 133214:
{
returnValue = F("Harzburger Str.");
break;
}
case 133215:
{
returnValue = F("Harzburger Weg");
break;
}
case 133216:
{
returnValue = F("Harzecken");
break;
}
case 133217:
{
returnValue = F("Harzeckweg");
break;
}
case 133218:
{
returnValue = F("Harzengrundweg");
break;
}
case 133219:
{
returnValue = F("Harzer Bogen");
break;
}
case 133220:
{
returnValue = F("Harzer Naturistenstieg");
break;
}
case 133221:
{
returnValue = F("Harzer Str.");
break;
}
case 133222:
{
returnValue = F("Harzer Weg");
break;
}
case 133223:
{
returnValue = F("HarzerAllee");
break;
}
case 133224:
{
returnValue = F("Harzerhäuser");
break;
}
case 133225:
{
returnValue = F("Harzerstr.");
break;
}
case 133226:
{
returnValue = F("Harzerweg");
break;
}
case 133227:
{
returnValue = F("Harzfalkenhof");
break;
}
case 133228:
{
returnValue = F("Harzfeldstr.");
break;
}
case 133229:
{
returnValue = F("Harzgasse");
break;
}
case 133230:
{
returnValue = F("Harzgeroder Str.");
break;
}
case 133231:
{
returnValue = F("Harzgeröder Str.");
break;
}
case 133232:
{
returnValue = F("Harzhaldeweg");
break;
}
case 133233:
{
returnValue = F("Harzhochstr.");
break;
}
case 133234:
{
returnValue = F("Harzhof");
break;
}
case 133235:
{
returnValue = F("Harzhofer Weg");
break;
}
case 133236:
{
returnValue = F("Harzhorn");
break;
}
case 133237:
{
returnValue = F("Harzhüttengrund");
break;
}
case 133238:
{
returnValue = F("Harzhütter Str.");
break;
}
case 133239:
{
returnValue = F("Harzhütterstr.");
break;
}
case 133240:
{
returnValue = F("Harzlochweg");
break;
}
case 133241:
{
returnValue = F("Harzofen");
break;
}
case 133242:
{
returnValue = F("Harzofen-Schneise");
break;
}
case 133243:
{
returnValue = F("Harzofenstr.");
break;
}
case 133244:
{
returnValue = F("Harzofenweg");
break;
}
case 133245:
{
returnValue = F("Harzquerbahnweg");
break;
}
case 133246:
{
returnValue = F("Harzrandweg");
break;
}
case 133247:
{
returnValue = F("Harzreißerstr.");
break;
}
case 133248:
{
returnValue = F("Harzrigiblick");
break;
}
case 133249:
{
returnValue = F("Harzrigiweg");
break;
}
case 133250:
{
returnValue = F("Harzring");
break;
}
case 133251:
{
returnValue = F("Harzschützenstr.");
break;
}
case 133252:
{
returnValue = F("Harzstieg");
break;
}
case 133253:
{
returnValue = F("Harzstr.");
break;
}
case 133254:
{
returnValue = F("Harztal");
break;
}
case 133255:
{
returnValue = F("Harztaler Str.");
break;
}
case 133256:
{
returnValue = F("Harztalstr.");
break;
}
case 133257:
{
returnValue = F("Harztannenweg");
break;
}
case 133258:
{
returnValue = F("Harztor");
break;
}
case 133259:
{
returnValue = F("Harztorplatz");
break;
}
case 133260:
{
returnValue = F("Harztorwall");
break;
}
case 133261:
{
returnValue = F("Harztorwallpark");
break;
}
case 133262:
{
returnValue = F("Harzwaldhäuser");
break;
}
case 133263:
{
returnValue = F("Harzwaldstr.");
break;
}
case 133264:
{
returnValue = F("Harzweg");
break;
}
case 133265:
{
returnValue = F("Has'-und-Igel-Twiete");
break;
}
case 133266:
{
returnValue = F("Hasbach");
break;
}
case 133267:
{
returnValue = F("Hasbach-Siedlung");
break;
}
case 133268:
{
returnValue = F("Hasbacher Dell");
break;
}
case 133269:
{
returnValue = F("Hasbacher Str.");
break;
}
case 133270:
{
returnValue = F("Hasbachstr.");
break;
}
case 133271:
{
returnValue = F("Hasbachtal");
break;
}
case 133272:
{
returnValue = F("Hasbachtalbrücke");
break;
}
case 133273:
{
returnValue = F("Hasberg");
break;
}
case 133274:
{
returnValue = F("Hasbergener Str.");
break;
}
case 133275:
{
returnValue = F("Hasberger Dorfstr.");
break;
}
case 133276:
{
returnValue = F("Hasberger Feld");
break;
}
case 133277:
{
returnValue = F("Hasberger Str.");
break;
}
case 133278:
{
returnValue = F("Hasberger Weg");
break;
}
case 133279:
{
returnValue = F("Hasbergstr.");
break;
}
case 133280:
{
returnValue = F("Hasbergweg");
break;
}
case 133281:
{
returnValue = F("Hasborner Str.");
break;
}
case 133282:
{
returnValue = F("Hasbornweg");
break;
}
case 133283:
{
returnValue = F("Hasbrink");
break;
}
case 133284:
{
returnValue = F("Hasbruchstr.");
break;
}
case 133285:
{
returnValue = F("Haschbacher Str.");
break;
}
case 133286:
{
returnValue = F("Haschbacher Weg");
break;
}
case 133287:
{
returnValue = F("Hascheburg");
break;
}
case 133288:
{
returnValue = F("Haschenbroker Weg");
break;
}
case 133289:
{
returnValue = F("Haschendorf");
break;
}
case 133290:
{
returnValue = F("Haschenweg");
break;
}
case 133291:
{
returnValue = F("Hascherleshecke");
break;
}
case 133292:
{
returnValue = F("Haschgraben");
break;
}
case 133293:
{
returnValue = F("Haschgweg");
break;
}
case 133294:
{
returnValue = F("Haschiks Weg");
break;
}
case 133295:
{
returnValue = F("Haschkes Gasse");
break;
}
case 133296:
{
returnValue = F("Haschkestr.");
break;
}
case 133297:
{
returnValue = F("Haschleyweg");
break;
}
case 133298:
{
returnValue = F("Haschweg");
break;
}
case 133299:
{
returnValue = F("Hase");
break;
}
case 133300:
{
returnValue = F("Hase / Fuchs");
break;
}
case 133301:
{
returnValue = F("Hase-Ufer-Weg");
break;
}
case 133302:
{
returnValue = F("Haseaue");
break;
}
case 133303:
{
returnValue = F("Hasebeeke");
break;
}
case 133304:
{
returnValue = F("Hasebrinkstr.");
break;
}
case 133305:
{
returnValue = F("Hasebrücke, Römerstr.");
break;
}
case 133306:
{
returnValue = F("Haseckstr.");
break;
}
case 133307:
{
returnValue = F("Hasedeich");
break;
}
case 133308:
{
returnValue = F("Haseder Weg");
break;
}
case 133309:
{
returnValue = F("Haseeck");
break;
}
case 133310:
{
returnValue = F("Hasefriedhof");
break;
}
case 133311:
{
returnValue = F("Hasekamps-Boll");
break;
}
case 133312:
{
returnValue = F("Haselaarweg");
break;
}
case 133313:
{
returnValue = F("Haselackstr.");
break;
}
case 133314:
{
returnValue = F("Haselaischaftsweg");
break;
}
case 133315:
{
returnValue = F("Haselallee");
break;
}
case 133316:
{
returnValue = F("Haselastr.");
break;
}
case 133317:
{
returnValue = F("Haselau");
break;
}
case 133318:
{
returnValue = F("Haselaue");
break;
}
case 133319:
{
returnValue = F("Haselauer Chaussee");
break;
}
case 133320:
{
returnValue = F("Haselaustr.");
break;
}
case 133321:
{
returnValue = F("Haselauweg");
break;
}
case 133322:
{
returnValue = F("Haselbach");
break;
}
case 133323:
{
returnValue = F("Haselbacher Feld");
break;
}
case 133324:
{
returnValue = F("Haselbacher Rain");
break;
}
case 133325:
{
returnValue = F("Haselbacher Str.");
break;
}
case 133326:
{
returnValue = F("Haselbacher Weg");
break;
}
case 133327:
{
returnValue = F("Haselbachmühleweg");
break;
}
case 133328:
{
returnValue = F("Haselbachstr.");
break;
}
case 133329:
{
returnValue = F("Haselbachtal");
break;
}
case 133330:
{
returnValue = F("Haselbachweg");
break;
}
case 133331:
{
returnValue = F("Haselbaumstr.");
break;
}
case 133332:
{
returnValue = F("Haselbaumweg");
break;
}
case 133333:
{
returnValue = F("Haselbeckstr.");
break;
}
case 133334:
{
returnValue = F("Haselberg");
break;
}
case 133335:
{
returnValue = F("Haselberger Str.");
break;
}
case 133336:
{
returnValue = F("Haselbergergarten");
break;
}
case 133337:
{
returnValue = F("Haselbergerstr.");
break;
}
case 133338:
{
returnValue = F("Haselbergstr.");
break;
}
case 133339:
{
returnValue = F("Haselbergweg");
break;
}
case 133340:
{
returnValue = F("Haselbodenweg");
break;
}
case 133341:
{
returnValue = F("Haselbogen");
break;
}
case 133342:
{
returnValue = F("Haselborner Weg");
break;
}
case 133343:
{
returnValue = F("Haselbornweg");
break;
}
case 133344:
{
returnValue = F("Haselbrink");
break;
}
case 133345:
{
returnValue = F("Haselbrunn");
break;
}
case 133346:
{
returnValue = F("Haselbrunnenweg");
break;
}
case 133347:
{
returnValue = F("Haselbrunner Str.");
break;
}
case 133348:
{
returnValue = F("Haselbrunner Weg");
break;
}
case 133349:
{
returnValue = F("Haselbrunnsteg");
break;
}
case 133350:
{
returnValue = F("Haselbrunnstr.");
break;
}
case 133351:
{
returnValue = F("Haselbrücke");
break;
}
case 133352:
{
returnValue = F("Haselburgstr.");
break;
}
case 133353:
{
returnValue = F("Haselburgweg");
break;
}
case 133354:
{
returnValue = F("Haselbusch");
break;
}
case 133355:
{
returnValue = F("Haselbuschstr.");
break;
}
case 133356:
{
returnValue = F("Haselbuschweg");
break;
}
case 133357:
{
returnValue = F("Haseldamm");
break;
}
case 133358:
{
returnValue = F("Haseldehnen");
break;
}
case 133359:
{
returnValue = F("Haseldonk");
break;
}
case 133360:
{
returnValue = F("Haseldorf");
break;
}
case 133361:
{
returnValue = F("Haseldorfer Chaussee");
break;
}
case 133362:
{
returnValue = F("Haseldorfer Str.");
break;
}
case 133363:
{
returnValue = F("Haseleck");
break;
}
case 133364:
{
returnValue = F("Haselecke");
break;
}
case 133365:
{
returnValue = F("Haseler Mühle");
break;
}
case 133366:
{
returnValue = F("Haseler Str.");
break;
}
case 133367:
{
returnValue = F("Haseler Weg");
break;
}
case 133368:
{
returnValue = F("Haselfahrt");
break;
}
case 133369:
{
returnValue = F("Haselfeldweg");
break;
}
case 133370:
{
returnValue = F("Haselfurther Str.");
break;
}
case 133371:
{
returnValue = F("Haselgarten");
break;
}
case 133372:
{
returnValue = F("Haselgasse");
break;
}
case 133373:
{
returnValue = F("Haselgraben");
break;
}
case 133374:
{
returnValue = F("Haselgrubweg");
break;
}
case 133375:
{
returnValue = F("Haselgrund");
break;
}
case 133376:
{
returnValue = F("Haselgrund Weg");
break;
}
case 133377:
{
returnValue = F("Haselgrundstr.");
break;
}
case 133378:
{
returnValue = F("Haselhain");
break;
}
case 133379:
{
returnValue = F("Haselhang");
break;
}
case 133380:
{
returnValue = F("Haselheck");
break;
}
case 133381:
{
returnValue = F("Haselhecke");
break;
}
case 133382:
{
returnValue = F("Haselheckerstr.");
break;
}
case 133383:
{
returnValue = F("Haselheckstr.");
break;
}
case 133384:
{
returnValue = F("Haselheide");
break;
}
case 133385:
{
returnValue = F("Haselhof");
break;
}
case 133386:
{
returnValue = F("Haselhofstr.");
break;
}
case 133387:
{
returnValue = F("Haselholzstr.");
break;
}
case 133388:
{
returnValue = F("Haselhopstr.");
break;
}
case 133389:
{
returnValue = F("Haselhorn");
break;
}
case 133390:
{
returnValue = F("Haselhorst");
break;
}
case 133391:
{
returnValue = F("Haselhorster Weg");
break;
}
case 133392:
{
returnValue = F("Haselhorsthof");
break;
}
case 133393:
{
returnValue = F("Haselhorststr.");
break;
}
case 133394:
{
returnValue = F("Haselhorstweg");
break;
}
case 133395:
{
returnValue = F("Haselhuhnweg");
break;
}
case 133396:
{
returnValue = F("Haselhute");
break;
}
case 133397:
{
returnValue = F("Haselhöfer Ring");
break;
}
case 133398:
{
returnValue = F("Haselhöhe");
break;
}
case 133399:
{
returnValue = F("Haselhörn");
break;
}
case 133400:
{
returnValue = F("Haselieth");
break;
}
case 133401:
{
returnValue = F("Haselingsweg");
break;
}
case 133402:
{
returnValue = F("Haselkamp");
break;
}
case 133403:
{
returnValue = F("Haselkampweg");
break;
}
case 133404:
{
returnValue = F("Haselklinge");
break;
}
case 133405:
{
returnValue = F("Haselleitenweg");
break;
}
case 133406:
{
returnValue = F("Hasellohweg");
break;
}
case 133407:
{
returnValue = F("Haselmark");
break;
}
case 133408:
{
returnValue = F("Haselmasch");
break;
}
case 133409:
{
returnValue = F("Haselmatten");
break;
}
case 133410:
{
returnValue = F("Haselmausweg");
break;
}
case 133411:
{
returnValue = F("Haselmühle");
break;
}
case 133412:
{
returnValue = F("Haselmühlenweg");
break;
}
case 133413:
{
returnValue = F("Haselmühler Str.");
break;
}
case 133414:
{
returnValue = F("Haselmühlstr.");
break;
}
case 133415:
{
returnValue = F("Haselmühlweg");
break;
}
case 133416:
{
returnValue = F("Haselnbusch");
break;
}
case 133417:
{
returnValue = F("Haselnussallee");
break;
}
case 133418:
{
returnValue = F("Haselnussring");
break;
}
case 133419:
{
returnValue = F("Haselnussweg");
break;
}
case 133420:
{
returnValue = F("Haselnußallee");
break;
}
case 133421:
{
returnValue = F("Haselnußecke");
break;
}
case 133422:
{
returnValue = F("Haselnußgasse");
break;
}
case 133423:
{
returnValue = F("Haselnußstr.");
break;
}
case 133424:
{
returnValue = F("Haselnußweg");
break;
}
case 133425:
{
returnValue = F("Haseloffer Weg");
break;
}
case 133426:
{
returnValue = F("Haseloffstr.");
break;
}
case 133427:
{
returnValue = F("Haseloh");
break;
}
case 133428:
{
returnValue = F("Haselopstr.");
break;
}
case 133429:
{
returnValue = F("Haselrain");
break;
}
case 133430:
{
returnValue = F("Haselrainstr.");
break;
}
case 133431:
{
returnValue = F("Haselrainweg");
break;
}
case 133432:
{
returnValue = F("Haselranken");
break;
}
case 133433:
{
returnValue = F("Haselrech");
break;
}
case 133434:
{
returnValue = F("Haselredder");
break;
}
case 133435:
{
returnValue = F("Haselreit");
break;
}
case 133436:
{
returnValue = F("Haselriede");
break;
}
case 133437:
{
returnValue = F("Haselriege");
break;
}
case 133438:
{
returnValue = F("Haselsbergerstr.");
break;
}
case 133439:
{
returnValue = F("Haselschußgasse");
break;
}
case 133440:
{
returnValue = F("Haselschwande");
break;
}
case 133441:
{
returnValue = F("Haselsteg");
break;
}
case 133442:
{
returnValue = F("Haselsteig");
break;
}
case 133443:
{
returnValue = F("Haselsteige");
break;
}
case 133444:
{
returnValue = F("Haselsteiner Str.");
break;
}
case 133445:
{
returnValue = F("Haselsteinstr.");
break;
}
case 133446:
{
returnValue = F("Haselstieg");
break;
}
case 133447:
{
returnValue = F("Haselstiege");
break;
}
case 133448:
{
returnValue = F("Haselstiegstr.");
break;
}
case 133449:
{
returnValue = F("Haselstockweg");
break;
}
case 133450:
{
returnValue = F("Haselstr.");
break;
}
case 133451:
{
returnValue = F("Haselstrauchweg");
break;
}
case 133452:
{
returnValue = F("Haseltal");
break;
}
case 133453:
{
returnValue = F("Haseltalring");
break;
}
case 133454:
{
returnValue = F("Haseltalstr.");
break;
}
case 133455:
{
returnValue = F("Haseltrad");
break;
}
case 133456:
{
returnValue = F("Haselwanderstr.");
break;
}
case 133457:
{
returnValue = F("Haselweg");
break;
}
case 133458:
{
returnValue = F("Haselwies");
break;
}
case 133459:
{
returnValue = F("Haselwiese");
break;
}
case 133460:
{
returnValue = F("Haseläcker");
break;
}
case 133461:
{
returnValue = F("Haseläckerweg");
break;
}
case 133462:
{
returnValue = F("Haselöd");
break;
}
case 133463:
{
returnValue = F("Haselünnendeich Str.");
break;
}
case 133464:
{
returnValue = F("Haselünner Str.");
break;
}
case 133465:
{
returnValue = F("Hasemannstr.");
break;
}
case 133466:
{
returnValue = F("Hasemannweg");
break;
}
case 133467:
{
returnValue = F("Hasemauer");
break;
}
case 133468:
{
returnValue = F("Hasemerweg");
break;
}
case 133469:
{
returnValue = F("Hasemühle");
break;
}
case 133470:
{
returnValue = F("Hasen Geräumt");
break;
}
case 133471:
{
returnValue = F("Hasen Schneise");
break;
}
case 133472:
{
returnValue = F("Hasen-Ahlers-Weg");
break;
}
case 133473:
{
returnValue = F("Hasen-Geräumt");
break;
}
case 133474:
{
returnValue = F("Hasen-Schneise");
break;
}
case 133475:
{
returnValue = F("Hasenacker");
break;
}
case 133476:
{
returnValue = F("Hasenackerstr.");
break;
}
case 133477:
{
returnValue = F("Hasenackerweg");
break;
}
case 133478:
{
returnValue = F("Hasenallee");
break;
}
case 133479:
{
returnValue = F("Hasenanger");
break;
}
case 133480:
{
returnValue = F("Hasenau");
break;
}
case 133481:
{
returnValue = F("Hasenbacher Str.");
break;
}
case 133482:
{
returnValue = F("Hasenbacher Weg");
break;
}
case 133483:
{
returnValue = F("Hasenbahn");
break;
}
case 133484:
{
returnValue = F("Hasenbankweg");
break;
}
case 133485:
{
returnValue = F("Hasenbaum");
break;
}
case 133486:
{
returnValue = F("Hasenbeckallee");
break;
}
case 133487:
{
returnValue = F("Hasenbeckweg");
break;
}
case 133488:
{
returnValue = F("Hasenbeeksweg");
break;
}
case 133489:
{
returnValue = F("Hasenbend");
break;
}
case 133490:
{
returnValue = F("Hasenberg");
break;
}
case 133491:
{
returnValue = F("Hasenberg-Weg");
break;
}
case 133492:
{
returnValue = F("Hasenberger Weg");
break;
}
case 133493:
{
returnValue = F("Hasenbergl");
break;
}
case 133494:
{
returnValue = F("Hasenbergle");
break;
}
case 133495:
{
returnValue = F("Hasenbergstr.");
break;
}
case 133496:
{
returnValue = F("Hasenbergsweg");
break;
}
case 133497:
{
returnValue = F("Hasenbergweg");
break;
}
case 133498:
{
returnValue = F("Hasenbeunde");
break;
}
case 133499:
{
returnValue = F("Hasenborn");
break;
}
case 133500:
{
returnValue = F("Hasenbornsenke");
break;
}
case 133501:
{
returnValue = F("Hasenbornweg");
break;
}
case 133502:
{
returnValue = F("Hasenbrede");
break;
}
case 133503:
{
returnValue = F("Hasenbreite");
break;
}
case 133504:
{
returnValue = F("Hasenbrink");
break;
}
case 133505:
{
returnValue = F("Hasenbrucher Weg");
break;
}
case 133506:
{
returnValue = F("Hasenbrunnen");
break;
}
case 133507:
{
returnValue = F("Hasenbrunnengasse");
break;
}
case 133508:
{
returnValue = F("Hasenbuck");
break;
}
case 133509:
{
returnValue = F("Hasenbuckelweg");
break;
}
case 133510:
{
returnValue = F("Hasenbuckl");
break;
}
case 133511:
{
returnValue = F("Hasenbuckweg");
break;
}
case 133512:
{
returnValue = F("Hasenbuehlweg");
break;
}
case 133513:
{
returnValue = F("Hasenburg");
break;
}
case 133514:
{
returnValue = F("Hasenburger Berg");
break;
}
case 133515:
{
returnValue = F("Hasenburger Ring");
break;
}
case 133516:
{
returnValue = F("Hasenburger Weg");
break;
}
case 133517:
{
returnValue = F("Hasenburgstr.");
break;
}
case 133518:
{
returnValue = F("Hasenburrenstr.");
break;
}
case 133519:
{
returnValue = F("Hasenbusch");
break;
}
case 133520:
{
returnValue = F("Hasenbuschfeld");
break;
}
case 133521:
{
returnValue = F("Hasenbuschstr.");
break;
}
case 133522:
{
returnValue = F("Hasenbuschweg");
break;
}
case 133523:
{
returnValue = F("Hasenböge");
break;
}
case 133524:
{
returnValue = F("Hasenbüchel");
break;
}
case 133525:
{
returnValue = F("Hasenbühelweg");
break;
}
case 133526:
{
returnValue = F("Hasenbühl");
break;
}
case 133527:
{
returnValue = F("HasenbühlKohlenstr. nb");
break;
}
case 133528:
{
returnValue = F("Hasenbühler Weg");
break;
}
case 133529:
{
returnValue = F("Hasenbühlsteige");
break;
}
case 133530:
{
returnValue = F("Hasenbühlweg");
break;
}
case 133531:
{
returnValue = F("Hasenbült");
break;
}
case 133532:
{
returnValue = F("Hasencleverstieg");
break;
}
case 133533:
{
returnValue = F("Hasencleverstr.");
break;
}
case 133534:
{
returnValue = F("Hasencleverweg");
break;
}
case 133535:
{
returnValue = F("Hasendamm");
break;
}
case 133536:
{
returnValue = F("Hasendell");
break;
}
case 133537:
{
returnValue = F("Hasendenn");
break;
}
case 133538:
{
returnValue = F("Haseneck");
break;
}
case 133539:
{
returnValue = F("Hasenecke");
break;
}
case 133540:
{
returnValue = F("Haseneckledobelweg");
break;
}
case 133541:
{
returnValue = F("Haseneckstr.");
break;
}
case 133542:
{
returnValue = F("Haseneggern");
break;
}
case 133543:
{
returnValue = F("Hasenellern");
break;
}
case 133544:
{
returnValue = F("Hasenfang");
break;
}
case 133545:
{
returnValue = F("Hasenfarmweg");
break;
}
case 133546:
{
returnValue = F("Hasenfeld");
break;
}
case 133547:
{
returnValue = F("Hasenfelder Str.");
break;
}
case 133548:
{
returnValue = F("Hasenfelder Weg");
break;
}
case 133549:
{
returnValue = F("Hasenfeldstr.");
break;
}
case 133550:
{
returnValue = F("Hasenfelsstr.");
break;
}
case 133551:
{
returnValue = F("Hasenfleet");
break;
}
case 133552:
{
returnValue = F("Hasenflucht");
break;
}
case 133553:
{
returnValue = F("Hasengang");
break;
}
case 133554:
{
returnValue = F("Hasengarten");
break;
}
case 133555:
{
returnValue = F("Hasengartenstr.");
break;
}
case 133556:
{
returnValue = F("Hasengartenweg");
break;
}
case 133557:
{
returnValue = F("Hasengasse");
break;
}
case 133558:
{
returnValue = F("Hasengraben");
break;
}
case 133559:
{
returnValue = F("Hasengrund");
break;
}
case 133560:
{
returnValue = F("Hasengründelweg");
break;
}
case 133561:
{
returnValue = F("Hasengärtlestr.");
break;
}
case 133562:
{
returnValue = F("Hasengässle");
break;
}
case 133563:
{
returnValue = F("Hasengäßle");
break;
}
case 133564:
{
returnValue = F("Hasenhain");
break;
}
case 133565:
{
returnValue = F("Hasenhalde");
break;
}
case 133566:
{
returnValue = F("Hasenhaldenweg");
break;
}
case 133567:
{
returnValue = F("Hasenhaldestr.");
break;
}
case 133568:
{
returnValue = F("Hasenhaus");
break;
}
case 133569:
{
returnValue = F("Hasenhecke");
break;
}
case 133570:
{
returnValue = F("Hasenheide");
break;
}
case 133571:
{
returnValue = F("Hasenheideweg");
break;
}
case 133572:
{
returnValue = F("Hasenhelle");
break;
}
case 133573:
{
returnValue = F("Hasenherberge");
break;
}
case 133574:
{
returnValue = F("Hasenhof");
break;
}
case 133575:
{
returnValue = F("Hasenhofstr.");
break;
}
case 133576:
{
returnValue = F("Hasenhofweg");
break;
}
case 133577:
{
returnValue = F("Hasenholz");
break;
}
case 133578:
{
returnValue = F("Hasenholztrift");
break;
}
case 133579:
{
returnValue = F("Hasenholzweg");
break;
}
case 133580:
{
returnValue = F("Hasenhoopsweg");
break;
}
case 133581:
{
returnValue = F("Hasenhorn");
break;
}
case 133582:
{
returnValue = F("Hasenhornweg");
break;
}
case 133583:
{
returnValue = F("Hasenhorst");
break;
}
case 133584:
{
returnValue = F("Hasenhäger Str.");
break;
}
case 133585:
{
returnValue = F("Hasenhägweg");
break;
}
case 133586:
{
returnValue = F("Hasenhälde");
break;
}
case 133587:
{
returnValue = F("Hasenhäule");
break;
}
case 133588:
{
returnValue = F("Hasenhäuleweg");
break;
}
case 133589:
{
returnValue = F("Hasenhöhe");
break;
}
case 133590:
{
returnValue = F("Hasenhölzeweg");
break;
}
case 133591:
{
returnValue = F("Hasenhörn");
break;
}
case 133592:
{
returnValue = F("Hasenhügel");
break;
}
case 133593:
{
returnValue = F("Hasenhütte");
break;
}
case 133594:
{
returnValue = F("Hasenjagd");
break;
}
case 133595:
{
returnValue = F("Hasenkammer");
break;
}
case 133596:
{
returnValue = F("Hasenkamp");
break;
}
case 133597:
{
returnValue = F("Hasenkampstr.");
break;
}
case 133598:
{
returnValue = F("Hasenkampsweg");
break;
}
case 133599:
{
returnValue = F("Hasenkampweg");
break;
}
case 133600:
{
returnValue = F("Hasenkehlweg");
break;
}
case 133601:
{
returnValue = F("Hasenkehre");
break;
}
case 133602:
{
returnValue = F("Hasenklingenweg");
break;
}
case 133603:
{
returnValue = F("Hasenklingeweg");
break;
}
case 133604:
{
returnValue = F("Hasenklopp");
break;
}
case 133605:
{
returnValue = F("Hasenknapp");
break;
}
case 133606:
{
returnValue = F("Hasenknick");
break;
}
case 133607:
{
returnValue = F("Hasenknückelweg");
break;
}
case 133608:
{
returnValue = F("Hasenkopfflügel");
break;
}
case 133609:
{
returnValue = F("Hasenkopfschneise");
break;
}
case 133610:
{
returnValue = F("Hasenkoppel");
break;
}
case 133611:
{
returnValue = F("Hasenkreuzweg");
break;
}
case 133612:
{
returnValue = F("Hasenkrog");
break;
}
case 133613:
{
returnValue = F("Hasenkrug");
break;
}
case 133614:
{
returnValue = F("Hasenkrönsredder");
break;
}
case 133615:
{
returnValue = F("Hasenkuhle");
break;
}
case 133616:
{
returnValue = F("Hasenkämpe");
break;
}
case 133617:
{
returnValue = F("Hasenköppel");
break;
}
case 133618:
{
returnValue = F("Hasenlager");
break;
}
case 133619:
{
returnValue = F("Hasenlauf");
break;
}
case 133620:
{
returnValue = F("Hasenlaufweg");
break;
}
case 133621:
{
returnValue = F("Hasenleck");
break;
}
case 133622:
{
returnValue = F("Hasenleite");
break;
}
case 133623:
{
returnValue = F("Hasenleithe");
break;
}
case 133624:
{
returnValue = F("Hasenloch");
break;
}
case 133625:
{
returnValue = F("Hasenlochweg");
break;
}
case 133626:
{
returnValue = F("Hasenloh");
break;
}
case 133627:
{
returnValue = F("Hasenlohe");
break;
}
case 133628:
{
returnValue = F("Hasenläufer");
break;
}
case 133629:
{
returnValue = F("Hasenmatt");
break;
}
case 133630:
{
returnValue = F("Hasenmattweg");
break;
}
case 133631:
{
returnValue = F("Hasenmeerweg");
break;
}
case 133632:
{
returnValue = F("Hasenmerkle");
break;
}
case 133633:
{
returnValue = F("Hasenmoor");
break;
}
case 133634:
{
returnValue = F("Hasenmoorer Damm");
break;
}
case 133635:
{
returnValue = F("Hasenmoorer Str.");
break;
}
case 133636:
{
returnValue = F("Hasenmoorweg");
break;
}
case 133637:
{
returnValue = F("Hasenmorgen");
break;
}
case 133638:
{
returnValue = F("Hasenmättle");
break;
}
case 133639:
{
returnValue = F("Hasenmättleweg");
break;
}
case 133640:
{
returnValue = F("Hasenmühle");
break;
}
case 133641:
{
returnValue = F("Hasenmühlenweg");
break;
}
case 133642:
{
returnValue = F("Hasenmühlweg");
break;
}
case 133643:
{
returnValue = F("Hasenmüllerweg");
break;
}
case 133644:
{
returnValue = F("Hasennest");
break;
}
case 133645:
{
returnValue = F("Hasenneststr.");
break;
}
case 133646:
{
returnValue = F("Hasenohrweg");
break;
}
case 133647:
{
returnValue = F("Hasenort");
break;
}
case 133648:
{
returnValue = F("Hasenpad");
break;
}
case 133649:
{
returnValue = F("Hasenpadd");
break;
}
case 133650:
{
returnValue = F("Hasenpark");
break;
}
case 133651:
{
returnValue = F("Hasenpatt");
break;
}
case 133652:
{
returnValue = F("Hasenpaß");
break;
}
case 133653:
{
returnValue = F("Hasenpfad");
break;
}
case 133654:
{
returnValue = F("Hasenpflugstr.");
break;
}
case 133655:
{
returnValue = F("Hasenpfuhlstr.");
break;
}
case 133656:
{
returnValue = F("Hasenpfühlerweide");
break;
}
case 133657:
{
returnValue = F("Hasenplanie");
break;
}
case 133658:
{
returnValue = F("Hasenplatz");
break;
}
case 133659:
{
returnValue = F("Hasenpohler Weg");
break;
}
case 133660:
{
returnValue = F("Hasenpütt");
break;
}
case 133661:
{
returnValue = F("Hasenrachring");
break;
}
case 133662:
{
returnValue = F("Hasenrain");
break;
}
case 133663:
{
returnValue = F("Hasenrainweg");
break;
}
case 133664:
{
returnValue = F("Hasenrankweg");
break;
}
case 133665:
{
returnValue = F("Hasenrech");
break;
}
case 133666:
{
returnValue = F("Hasenrecher Weg");
break;
}
case 133667:
{
returnValue = F("Hasenrecke");
break;
}
case 133668:
{
returnValue = F("Hasenredder");
break;
}
case 133669:
{
returnValue = F("Hasenrehm");
break;
}
case 133670:
{
returnValue = F("Hasenreit");
break;
}
case 133671:
{
returnValue = F("Hasenrichte");
break;
}
case 133672:
{
returnValue = F("Hasenring");
break;
}
case 133673:
{
returnValue = F("Hasenroth");
break;
}
case 133674:
{
returnValue = F("Hasenröder Weg");
break;
}
case 133675:
{
returnValue = F("Hasenrütte");
break;
}
case 133676:
{
returnValue = F("Hasenrütteweg");
break;
}
case 133677:
{
returnValue = F("Hasenschneise");
break;
}
case 133678:
{
returnValue = F("Hasenschwanz");
break;
}
case 133679:
{
returnValue = F("Hasenschwanzweg");
break;
}
case 133680:
{
returnValue = F("Hasenschützenweg");
break;
}
case 133681:
{
returnValue = F("Hasenseeweg");
break;
}
case 133682:
{
returnValue = F("Hasensiepen");
break;
}
case 133683:
{
returnValue = F("Hasenspitz");
break;
}
case 133684:
{
returnValue = F("Hasenspring");
break;
}
case 133685:
{
returnValue = F("Hasenspringweg");
break;
}
case 133686:
{
returnValue = F("Hasensprung");
break;
}
case 133687:
{
returnValue = F("Hasensprungweg");
break;
}
case 133688:
{
returnValue = F("Hasenspur");
break;
}
case 133689:
{
returnValue = F("Hasenstaffel");
break;
}
case 133690:
{
returnValue = F("Hasenstallerhof");
break;
}
case 133691:
{
returnValue = F("Hasenstallweg");
break;
}
case 133692:
{
returnValue = F("Hasensteg");
break;
}
case 133693:
{
returnValue = F("Hasensteig");
break;
}
case 133694:
{
returnValue = F("Hasensteige");
break;
}
case 133695:
{
returnValue = F("Hasenstein");
break;
}
case 133696:
{
returnValue = F("Hasensteinlinie");
break;
}
case 133697:
{
returnValue = F("Hasensteinweg");
break;
}
case 133698:
{
returnValue = F("Hasenstieg");
break;
}
case 133699:
{
returnValue = F("Hasenstockweg");
break;
}
case 133700:
{
returnValue = F("Hasenstr.");
break;
}
case 133701:
{
returnValue = F("Hasenstube");
break;
}
case 133702:
{
returnValue = F("Hasental");
break;
}
case 133703:
{
returnValue = F("Hasentalstr.");
break;
}
case 133704:
{
returnValue = F("Hasentalweg");
break;
}
case 133705:
{
returnValue = F("Hasenthal");
break;
}
case 133706:
{
returnValue = F("Hasenthaler Weg");
break;
}
case 133707:
{
returnValue = F("Hasenthalstr.");
break;
}
case 133708:
{
returnValue = F("Hasentorstr.");
break;
}
case 133709:
{
returnValue = F("Hasentrail");
break;
}
case 133710:
{
returnValue = F("Hasentwiete");
break;
}
case 133711:
{
returnValue = F("Hasenwaldstr.");
break;
}
case 133712:
{
returnValue = F("Hasenwaldweg");
break;
}
case 133713:
{
returnValue = F("Hasenwechsel");
break;
}
case 133714:
{
returnValue = F("Hasenweg");
break;
}
case 133715:
{
returnValue = F("Hasenweg / Büesingerwäg");
break;
}
case 133716:
{
returnValue = F("Hasenweide");
break;
}
case 133717:
{
returnValue = F("Hasenweidweg");
break;
}
case 133718:
{
returnValue = F("Hasenwende");
break;
}
case 133719:
{
returnValue = F("Hasenwerder");
break;
}
case 133720:
{
returnValue = F("Hasenwiese");
break;
}
case 133721:
{
returnValue = F("Hasenwiesen");
break;
}
case 133722:
{
returnValue = F("Hasenwinkel");
break;
}
case 133723:
{
returnValue = F("Hasenwinkeler Str.");
break;
}
case 133724:
{
returnValue = F("Hasenwinkelgrund");
break;
}
case 133725:
{
returnValue = F("Hasenwinkelstr.");
break;
}
case 133726:
{
returnValue = F("Hasenwinkelweg");
break;
}
case 133727:
{
returnValue = F("Hasenwinkler Weg");
break;
}
case 133728:
{
returnValue = F("Hasenwäldele");
break;
}
case 133729:
{
returnValue = F("Hasenwäldleweg");
break;
}
case 133730:
{
returnValue = F("Hasenzaun");
break;
}
case 133731:
{
returnValue = F("Hasenäcker");
break;
}
case 133732:
{
returnValue = F("Hasenäckerstr.");
break;
}
case 133733:
{
returnValue = F("Hasenäckerweg");
break;
}
case 133734:
{
returnValue = F("Hasenöder Ring");
break;
}
case 133735:
{
returnValue = F("Hasenöderweg");
break;
}
case 133736:
{
returnValue = F("Hasenöver");
break;
}
case 133737:
{
returnValue = F("Hasepark");
break;
}
case 133738:
{
returnValue = F("Hasepatt");
break;
}
case 133739:
{
returnValue = F("Hasericherstr.");
break;
}
case 133740:
{
returnValue = F("Hasertstr.");
break;
}
case 133741:
{
returnValue = F("Hases Wiese");
break;
}
case 133742:
{
returnValue = F("Hasestollen");
break;
}
case 133743:
{
returnValue = F("Hasestr.");
break;
}
case 133744:
{
returnValue = F("Hasetal");
break;
}
case 133745:
{
returnValue = F("Hasetorwall");
break;
}
case 133746:
{
returnValue = F("Haseuferweg");
break;
}
case 133747:
{
returnValue = F("Haseweg");
break;
}
case 133748:
{
returnValue = F("Hasewinkel");
break;
}
case 133749:
{
returnValue = F("Hashammweg");
break;
}
case 133750:
{
returnValue = F("Hashauweg");
break;
}
case 133751:
{
returnValue = F("Haskamp");
break;
}
case 133752:
{
returnValue = F("Haskampsweg");
break;
}
case 133753:
{
returnValue = F("Haskaterstieg");
break;
}
case 133754:
{
returnValue = F("Haskenallee");
break;
}
case 133755:
{
returnValue = F("Haskenstr.");
break;
}
case 133756:
{
returnValue = F("Haskeweg");
break;
}
case 133757:
{
returnValue = F("Hasklintweg");
break;
}
case 133758:
{
returnValue = F("Hasla");
break;
}
case 133759:
{
returnValue = F("Haslach");
break;
}
case 133760:
{
returnValue = F("Haslacher Feld");
break;
}
case 133761:
{
returnValue = F("Haslacher Steig");
break;
}
case 133762:
{
returnValue = F("Haslacher Str.");
break;
}
case 133763:
{
returnValue = F("Haslacher Weg");
break;
}
case 133764:
{
returnValue = F("Haslachhaldenweg");
break;
}
case 133765:
{
returnValue = F("Haslachstr.");
break;
}
case 133766:
{
returnValue = F("Haslachweg");
break;
}
case 133767:
{
returnValue = F("Haslaer Str.");
break;
}
case 133768:
{
returnValue = F("Haslage");
break;
}
case 133769:
{
returnValue = F("Haslanden");
break;
}
case 133770:
{
returnValue = F("Haslangstr.");
break;
}
case 133771:
{
returnValue = F("Haslarn");
break;
}
case 133772:
{
returnValue = F("Haslau");
break;
}
case 133773:
{
returnValue = F("Haslauer Platz");
break;
}
case 133774:
{
returnValue = F("Haslauerstr.");
break;
}
case 133775:
{
returnValue = F("Haslauerweg");
break;
}
case 133776:
{
returnValue = F("Haslaustr.");
break;
}
case 133777:
{
returnValue = F("Haslbachweg");
break;
}
case 133778:
{
returnValue = F("Haslbeckstr.");
break;
}
case 133779:
{
returnValue = F("Haslbergstr.");
break;
}
case 133780:
{
returnValue = F("Haslebergstr.");
break;
}
case 133781:
{
returnValue = F("Hasleholzweg");
break;
}
case 133782:
{
returnValue = F("Haslei");
break;
}
case 133783:
{
returnValue = F("Hasleiweg");
break;
}
case 133784:
{
returnValue = F("Haslenstr.");
break;
}
case 133785:
{
returnValue = F("Haslenweg");
break;
}
case 133786:
{
returnValue = F("Hasler Grenzweg");
break;
}
case 133787:
{
returnValue = F("Hasler Hof");
break;
}
case 133788:
{
returnValue = F("Haslerhofweg");
break;
}
case 133789:
{
returnValue = F("Haslersberg");
break;
}
case 133790:
{
returnValue = F("Haslersbergweg");
break;
}
case 133791:
{
returnValue = F("Haslerweg");
break;
}
case 133792:
{
returnValue = F("Haslerzellweg");
break;
}
case 133793:
{
returnValue = F("Hasleweg");
break;
}
case 133794:
{
returnValue = F("Hasley");
break;
}
case 133795:
{
returnValue = F("Hasleystr.");
break;
}
case 133796:
{
returnValue = F("Haslichblick");
break;
}
case 133797:
{
returnValue = F("Haslocher Str.");
break;
}
case 133798:
{
returnValue = F("Haslocher Weg");
break;
}
case 133799:
{
returnValue = F("Haslochweg");
break;
}
case 133800:
{
returnValue = F("Hasloher Chaussee");
break;
}
case 133801:
{
returnValue = F("Hasloher Twiete");
break;
}
case 133802:
{
returnValue = F("Hasloher Weg");
break;
}
case 133803:
{
returnValue = F("Hasltrad");
break;
}
case 133804:
{
returnValue = F("Hasluckenweg");
break;
}
case 133805:
{
returnValue = F("Haspel");
break;
}
case 133806:
{
returnValue = F("Haspeler Ring");
break;
}
case 133807:
{
returnValue = F("Haspelgasse");
break;
}
case 133808:
{
returnValue = F("Haspelgäßchen");
break;
}
case 133809:
{
returnValue = F("Haspellochweg");
break;
}
case 133810:
{
returnValue = F("Haspelstr.");
break;
}
case 133811:
{
returnValue = F("Haspelstrick");
break;
}
case 133812:
{
returnValue = F("Haspelweg");
break;
}
case 133813:
{
returnValue = F("Haspelwiesen");
break;
}
case 133814:
{
returnValue = F("Haspenweg");
break;
}
case 133815:
{
returnValue = F("Hasper Str.");
break;
}
case 133816:
{
returnValue = F("Hasperder Str.");
break;
}
case 133817:
{
returnValue = F("Hasperothstr.");
break;
}
case 133818:
{
returnValue = F("Haspertskamp");
break;
}
case 133819:
{
returnValue = F("Hasperweg");
break;
}
case 133820:
{
returnValue = F("Hasphurtweg");
break;
}
case 133821:
{
returnValue = F("Haspingerstr.");
break;
}
case 133822:
{
returnValue = F("Hasporter Allee");
break;
}
case 133823:
{
returnValue = F("Hasporter Damm");
break;
}
case 133824:
{
returnValue = F("Hassbergstr.");
break;
}
case 133825:
{
returnValue = F("Hasseburger Str.");
break;
}
case 133826:
{
returnValue = F("Hasseer Str.");
break;
}
case 133827:
{
returnValue = F("Hassel");
break;
}
case 133828:
{
returnValue = F("Hassel Park");
break;
}
case 133829:
{
returnValue = F("Hasselbach");
break;
}
case 133830:
{
returnValue = F("Hasselbach Weg");
break;
}
case 133831:
{
returnValue = F("Hasselbach-Schulstr.");
break;
}
case 133832:
{
returnValue = F("Hasselbacher Str.");
break;
}
case 133833:
{
returnValue = F("Hasselbacher Weg");
break;
}
case 133834:
{
returnValue = F("Hasselbacherhof");
break;
}
case 133835:
{
returnValue = F("Hasselbachplatz");
break;
}
case 133836:
{
returnValue = F("Hasselbachstieg");
break;
}
case 133837:
{
returnValue = F("Hasselbachstr.");
break;
}
case 133838:
{
returnValue = F("Hasselbachtal");
break;
}
case 133839:
{
returnValue = F("Hasselbachweg");
break;
}
case 133840:
{
returnValue = F("Hasselbecke");
break;
}
case 133841:
{
returnValue = F("Hasselbecker Str.");
break;
}
case 133842:
{
returnValue = F("Hasselbeckstr.");
break;
}
case 133843:
{
returnValue = F("Hasselbek");
break;
}
case 133844:
{
returnValue = F("Hasselberg");
break;
}
case 133845:
{
returnValue = F("Hasselberger Steige");
break;
}
case 133846:
{
returnValue = F("Hasselbergstr.");
break;
}
case 133847:
{
returnValue = F("Hasselbergweg");
break;
}
case 133848:
{
returnValue = F("Hasselborn");
break;
}
case 133849:
{
returnValue = F("Hasselborner Str.");
break;
}
case 133850:
{
returnValue = F("Hasselbornring");
break;
}
case 133851:
{
returnValue = F("Hasselbrandsweg");
break;
}
case 133852:
{
returnValue = F("Hasselbreite");
break;
}
case 133853:
{
returnValue = F("Hasselbrinkstr.");
break;
}
case 133854:
{
returnValue = F("Hasselbrocker Str.");
break;
}
case 133855:
{
returnValue = F("Hasselbrook");
break;
}
case 133856:
{
returnValue = F("Hasselbruch");
break;
}
case 133857:
{
returnValue = F("Hasselbruchstr.");
break;
}
case 133858:
{
returnValue = F("Hasselbruchweg");
break;
}
case 133859:
{
returnValue = F("Hasselburger Weg");
break;
}
case 133860:
{
returnValue = F("Hasselbusch");
break;
}
case 133861:
{
returnValue = F("Hasselbuschweg");
break;
}
case 133862:
{
returnValue = F("Hasseldeller Ufer");
break;
}
case 133863:
{
returnValue = F("Hasseldeller Weg");
break;
}
case 133864:
{
returnValue = F("Hasseldiek");
break;
}
case 133865:
{
returnValue = F("Hasseldieksdammer Weg");
break;
}
case 133866:
{
returnValue = F("Hasseldieksredder");
break;
}
case 133867:
{
returnValue = F("Hasseldorf");
break;
}
case 133868:
{
returnValue = F("Hasseler Bruch");
break;
}
case 133869:
{
returnValue = F("Hasseler Chaussee");
break;
}
case 133870:
{
returnValue = F("Hasseler Dorfstr.");
break;
}
case 133871:
{
returnValue = F("Hasseler Feldweg");
break;
}
case 133872:
{
returnValue = F("Hasseler Kirchweg");
break;
}
case 133873:
{
returnValue = F("Hasseler Paß");
break;
}
case 133874:
{
returnValue = F("Hasseler Pfad");
break;
}
case 133875:
{
returnValue = F("Hasseler Richtweg");
break;
}
case 133876:
{
returnValue = F("Hasseler Steinweg");
break;
}
case 133877:
{
returnValue = F("Hasseler Str.");
break;
}
case 133878:
{
returnValue = F("Hasseler Totenweg");
break;
}
case 133879:
{
returnValue = F("Hasseler Weg");
break;
}
case 133880:
{
returnValue = F("Hasselfall Brücke");
break;
}
case 133881:
{
returnValue = F("Hasselfeld");
break;
}
case 133882:
{
returnValue = F("Hasselfelde");
break;
}
case 133883:
{
returnValue = F("Hasselfelder Str.");
break;
}
case 133884:
{
returnValue = F("Hasselfelder Weg");
break;
}
case 133885:
{
returnValue = F("Hasselfeldstr.");
break;
}
case 133886:
{
returnValue = F("Hasselgasse");
break;
}
case 133887:
{
returnValue = F("Hasselgrund");
break;
}
case 133888:
{
returnValue = F("Hasselgärtenstr.");
break;
}
case 133889:
{
returnValue = F("Hasselhaagweg");
break;
}
case 133890:
{
returnValue = F("Hasselheck");
break;
}
case 133891:
{
returnValue = F("Hasselhecker Str.");
break;
}
case 133892:
{
returnValue = F("Hasselhof");
break;
}
case 133893:
{
returnValue = F("Hasselhofstr.");
break;
}
case 133894:
{
returnValue = F("Hasselhofweg");
break;
}
case 133895:
{
returnValue = F("Hasselholmer Weg");
break;
}
case 133896:
{
returnValue = F("Hasselholt");
break;
}
case 133897:
{
returnValue = F("Hasselholz");
break;
}
case 133898:
{
returnValue = F("Hasselholzer Weg");
break;
}
case 133899:
{
returnValue = F("Hasselholzstr.");
break;
}
case 133900:
{
returnValue = F("Hasselhoop");
break;
}
case 133901:
{
returnValue = F("Hasselhorst");
break;
}
case 133902:
{
returnValue = F("Hasselhorster Str.");
break;
}
case 133903:
{
returnValue = F("Hasselkamp");
break;
}
case 133904:
{
returnValue = F("Hasselklinger Weg");
break;
}
case 133905:
{
returnValue = F("Hasselliet");
break;
}
case 133906:
{
returnValue = F("Hasselloch");
break;
}
case 133907:
{
returnValue = F("Hasselloh");
break;
}
case 133908:
{
returnValue = F("Hassellstr.");
break;
}
case 133909:
{
returnValue = F("Hasselmannring");
break;
}
case 133910:
{
returnValue = F("Hasselmannsfeld");
break;
}
case 133911:
{
returnValue = F("Hasselmannstr.");
break;
}
case 133912:
{
returnValue = F("Hasselmannsweg");
break;
}
case 133913:
{
returnValue = F("Hasselmorgen");
break;
}
case 133914:
{
returnValue = F("Hasselrade");
break;
}
case 133915:
{
returnValue = F("Hasselrather Weg");
break;
}
case 133916:
{
returnValue = F("Hasselried");
break;
}
case 133917:
{
returnValue = F("Hasselriede");
break;
}
case 133918:
{
returnValue = F("Hasselrott");
break;
}
case 133919:
{
returnValue = F("Hassels Gässchen");
break;
}
case 133920:
{
returnValue = F("Hasselsheider Weg");
break;
}
case 133921:
{
returnValue = F("Hasselsstr.");
break;
}
case 133922:
{
returnValue = F("Hasselstr.");
break;
}
case 133923:
{
returnValue = F("Hasselsweg");
break;
}
case 133924:
{
returnValue = F("Hasselsweiler Str.");
break;
}
case 133925:
{
returnValue = F("Hasselteich");
break;
}
case 133926:
{
returnValue = F("Hasselter Heuweg");
break;
}
case 133927:
{
returnValue = F("Hasselter Platz");
break;
}
case 133928:
{
returnValue = F("Hasselter Str.");
break;
}
case 133929:
{
returnValue = F("Hasselter Weg");
break;
}
case 133930:
{
returnValue = F("Hasselterfeldstr.");
break;
}
case 133931:
{
returnValue = F("Hasseltrift");
break;
}
case 133932:
{
returnValue = F("Hasselweg");
break;
}
case 133933:
{
returnValue = F("Hasselwegsgraben");
break;
}
case 133934:
{
returnValue = F("Hasselwiese");
break;
}
case 133935:
{
returnValue = F("Hassenbach");
break;
}
case 133936:
{
returnValue = F("Hassenberg");
break;
}
case 133937:
{
returnValue = F("Hassenbrockweg");
break;
}
case 133938:
{
returnValue = F("Hassendorf-Kiekbusch");
break;
}
case 133939:
{
returnValue = F("Hassendorfer Kirchweg");
break;
}
case 133940:
{
returnValue = F("Hassenhausener Weg");
break;
}
case 133941:
{
returnValue = F("Hassenhäuser Mühle");
break;
}
case 133942:
{
returnValue = F("Hassenhäuser Str.");
break;
}
case 133943:
{
returnValue = F("Hassenröther Str.");
break;
}
case 133944:
{
returnValue = F("Hassenweg");
break;
}
case 133945:
{
returnValue = F("Hassenzinne");
break;
}
case 133946:
{
returnValue = F("Hasseroder Str.");
break;
}
case 133947:
{
returnValue = F("Hasserodtstr.");
break;
}
case 133948:
{
returnValue = F("Hasseröder Str.");
break;
}
case 133949:
{
returnValue = F("Hassestr.");
break;
}
case 133950:
{
returnValue = F("Hassia-Höhe");
break;
}
case 133951:
{
returnValue = F("Hassiastr.");
break;
}
case 133952:
{
returnValue = F("Hassiaweg");
break;
}
case 133953:
{
returnValue = F("Hassichweg");
break;
}
case 133954:
{
returnValue = F("Hassiepen");
break;
}
case 133955:
{
returnValue = F("Hassinghausen");
break;
}
case 133956:
{
returnValue = F("Hasskamp");
break;
}
case 133957:
{
returnValue = F("Hasskampweg");
break;
}
case 133958:
{
returnValue = F("Hasslerborn");
break;
}
case 133959:
{
returnValue = F("Hasslerstr.");
break;
}
case 133960:
{
returnValue = F("Hasslinger Weg");
break;
}
case 133961:
{
returnValue = F("Hasslocher Grenzweg");
break;
}
case 133962:
{
returnValue = F("Hassumer Str.");
break;
}
case 133963:
{
returnValue = F("Haste / Bahnhof");
break;
}
case 133964:
{
returnValue = F("Hastedter Str.");
break;
}
case 133965:
{
returnValue = F("Hastedter Waldweg");
break;
}
case 133966:
{
returnValue = F("Hastedter Weg");
break;
}
case 133967:
{
returnValue = F("Hastedtstr.");
break;
}
case 133968:
{
returnValue = F("Hastedtweg");
break;
}
case 133969:
{
returnValue = F("Hastenbecker Landstr.");
break;
}
case 133970:
{
returnValue = F("Hastenbecker Weg");
break;
}
case 133971:
{
returnValue = F("Hastener Str.");
break;
}
case 133972:
{
returnValue = F("Hastenrather Schule");
break;
}
case 133973:
{
returnValue = F("Hastenrather Str.");
break;
}
case 133974:
{
returnValue = F("Hastenrather Weg");
break;
}
case 133975:
{
returnValue = F("Haster Esch");
break;
}
case 133976:
{
returnValue = F("Haster Str.");
break;
}
case 133977:
{
returnValue = F("Haster Weg");
break;
}
case 133978:
{
returnValue = F("Hasterbergstr.");
break;
}
case 133979:
{
returnValue = F("Hastert");
break;
}
case 133980:
{
returnValue = F("Hastingsallee");
break;
}
case 133981:
{
returnValue = F("Hastrastr.");
break;
}
case 133982:
{
returnValue = F("Hastraweg");
break;
}
case 133983:
{
returnValue = F("Hastrungsfeld");
break;
}
case 133984:
{
returnValue = F("Hastrungsfelder Str.");
break;
}
case 133985:
{
returnValue = F("Hastruper Damm");
break;
}
case 133986:
{
returnValue = F("Hastruper Weg");
break;
}
case 133987:
{
returnValue = F("Hastweg");
break;
}
case 133988:
{
returnValue = F("Hasunger Str.");
break;
}
case 133989:
{
returnValue = F("Hasweder Weg");
break;
}
case 133990:
{
returnValue = F("Hasweg");
break;
}
case 133991:
{
returnValue = F("Hatefeld");
break;
}
case 133992:
{
returnValue = F("Haterbusch");
break;
}
case 133993:
{
returnValue = F("Hatheburgstr.");
break;
}
case 133994:
{
returnValue = F("Hathenower Str.");
break;
}
case 133995:
{
returnValue = F("Hathenower Weg");
break;
}
case 133996:
{
returnValue = F("Hathumarstr.");
break;
}
case 133997:
{
returnValue = F("Hatkamp");
break;
}
case 133998:
{
returnValue = F("Hatkampweg");
break;
}
case 133999:
{
returnValue = F("Hatsbach");
break;
}
case 134000:
{
returnValue = F("Hatschekstr.");
break;
}
case 134001:
{
returnValue = F("Hatscheweg");
break;
}
case 134002:
{
returnValue = F("Hatschiergasse");
break;
}
case 134003:
{
returnValue = F("Hatschinka");
break;
}
case 134004:
{
returnValue = F("Hatshauser Str.");
break;
}
case 134005:
{
returnValue = F("Hattelstr.");
break;
}
case 134006:
{
returnValue = F("Hattemerstr.");
break;
}
case 134007:
{
returnValue = F("Hattemerswies");
break;
}
case 134008:
{
returnValue = F("Hattenbacher Str.");
break;
}
case 134009:
{
returnValue = F("Hattenbergstr.");
break;
}
case 134010:
{
returnValue = F("Hattenbergweg");
break;
}
case 134011:
{
returnValue = F("Hattendorfer Str.");
break;
}
case 134012:
{
returnValue = F("Hattendorffsgarten");
break;
}
case 134013:
{
returnValue = F("Hattendorffstr.");
break;
}
case 134014:
{
returnValue = F("Hattendörfer Str.");
break;
}
case 134015:
{
returnValue = F("Hattengehau");
break;
}
case 134016:
{
returnValue = F("Hattenhausen");
break;
}
case 134017:
{
returnValue = F("Hattenhausener Str.");
break;
}
case 134018:
{
returnValue = F("Hattenhauser Str.");
break;
}
case 134019:
{
returnValue = F("Hattenheimer Str.");
break;
}
case 134020:
{
returnValue = F("Hattenhofener Str.");
break;
}
case 134021:
{
returnValue = F("Hattenhofener Weg");
break;
}
case 134022:
{
returnValue = F("Hattenhofer Str.");
break;
}
case 134023:
{
returnValue = F("Hattenhofer Weg");
break;
}
case 134024:
{
returnValue = F("Hattenhäuser Weg");
break;
}
case 134025:
{
returnValue = F("Hattenkofen");
break;
}
case 134026:
{
returnValue = F("Hattenröder Str.");
break;
}
case 134027:
{
returnValue = F("Hattenröder Weg");
break;
}
case 134028:
{
returnValue = F("Hatter Landstr.");
break;
}
case 134029:
{
returnValue = F("Hatter Str.");
break;
}
case 134030:
{
returnValue = F("Hatter Weg");
break;
}
case 134031:
{
returnValue = F("Hatterather Weg");
break;
}
case 134032:
{
returnValue = F("Hattergasse");
break;
}
case 134033:
{
returnValue = F("Hattermannsweg");
break;
}
case 134034:
{
returnValue = F("Hattersbach");
break;
}
case 134035:
{
returnValue = F("Hattersbüllhallig");
break;
}
case 134036:
{
returnValue = F("Hattersdorf");
break;
}
case 134037:
{
returnValue = F("Hattersheimer Str.");
break;
}
case 134038:
{
returnValue = F("Hattersheimer Weg");
break;
}
case 134039:
{
returnValue = F("Hattersumer Str.");
break;
}
case 134040:
{
returnValue = F("Hatteröder Str.");
break;
}
case 134041:
{
returnValue = F("Hatteshuus");
break;
}
case 134042:
{
returnValue = F("Hattingen (Ruhr)");
break;
}
case 134043:
{
returnValue = F("Hattingen Mitte");
break;
}
case 134044:
{
returnValue = F("Hattinger Str.");
break;
}
case 134045:
{
returnValue = F("Hattinger Weg");
break;
}
case 134046:
{
returnValue = F("Hattlund");
break;
}
case 134047:
{
returnValue = F("Hattlundmoor");
break;
}
case 134048:
{
returnValue = F("Hattnau");
break;
}
case 134049:
{
returnValue = F("Hattnitter Str.");
break;
}
case 134050:
{
returnValue = F("Hattorfer Holz");
break;
}
case 134051:
{
returnValue = F("Hattorfer Str.");
break;
}
case 134052:
{
returnValue = F("Hattorfer Weg");
break;
}
case 134053:
{
returnValue = F("Hattorfstr.");
break;
}
case 134054:
{
returnValue = F("Hattostr.");
break;
}
case 134055:
{
returnValue = F("Hattroper Weg");
break;
}
case 134056:
{
returnValue = F("Hattropholser Str.");
break;
}
case 134057:
{
returnValue = F("Hattropstr.");
break;
}
case 134058:
{
returnValue = F("Hattrupweg");
break;
}
case 134059:
{
returnValue = F("Hattschau");
break;
}
case 134060:
{
returnValue = F("Hattstattweg");
break;
}
case 134061:
{
returnValue = F("Hattstedter Str.");
break;
}
case 134062:
{
returnValue = F("Hattsteiner Allee");
break;
}
case 134063:
{
returnValue = F("Hattsteiner Hof");
break;
}
case 134064:
{
returnValue = F("Hattsteiner Str.");
break;
}
case 134065:
{
returnValue = F("Hattsteiner Weg");
break;
}
case 134066:
{
returnValue = F("Hattsteinstr.");
break;
}
case 134067:
{
returnValue = F("Hattweilerweg");
break;
}
case 134068:
{
returnValue = F("Hattwichstr.");
break;
}
case 134069:
{
returnValue = F("Hatweiler Weg");
break;
}
case 134070:
{
returnValue = F("Hatzbacher Str.");
break;
}
case 134071:
{
returnValue = F("Hatzberg");
break;
}
case 134072:
{
returnValue = F("Hatzberger Weg");
break;
}
case 134073:
{
returnValue = F("Hatzburgtwiete");
break;
}
case 134074:
{
returnValue = F("Hatzdorfer Str.");
break;
}
case 134075:
{
returnValue = F("Hatzelangk");
break;
}
case 134076:
{
returnValue = F("Hatzelbergweg");
break;
}
case 134077:
{
returnValue = F("Hatzelheckweg");
break;
}
case 134078:
{
returnValue = F("Hatzenbachstr.");
break;
}
case 134079:
{
returnValue = F("Hatzenberger Str.");
break;
}
case 134080:
{
returnValue = F("Hatzenbergstr.");
break;
}
case 134081:
{
returnValue = F("Hatzenbrunnenweg");
break;
}
case 134082:
{
returnValue = F("Hatzenbühler Str.");
break;
}
case 134083:
{
returnValue = F("Hatzengrünweg");
break;
}
case 134084:
{
returnValue = F("Hatzenporter Str.");
break;
}
case 134085:
{
returnValue = F("Hatzenturm");
break;
}
case 134086:
{
returnValue = F("Hatzenweier");
break;
}
case 134087:
{
returnValue = F("Hatzenweiler");
break;
}
case 134088:
{
returnValue = F("Hatzenwörthweg");
break;
}
case 134089:
{
returnValue = F("Hatzevennstr.");
break;
}
case 134090:
{
returnValue = F("Hatzfeld");
break;
}
case 134091:
{
returnValue = F("Hatzfelder Platz");
break;
}
case 134092:
{
returnValue = F("Hatzfelder Str.");
break;
}
case 134093:
{
returnValue = F("Hatzfeldstr.");
break;
}
case 134094:
{
returnValue = F("Hatzfeldweg");
break;
}
case 134095:
{
returnValue = F("Hatzingerhof");
break;
}
case 134096:
{
returnValue = F("Hatzlacker");
break;
}
case 134097:
{
returnValue = F("Hatzlmühlstr.");
break;
}
case 134098:
{
returnValue = F("Hatzter Str.");
break;
}
case 134099:
{
returnValue = F("Hatzumer Weg");
break;
}
case 134100:
{
returnValue = F("Hatzurodestr.");
break;
}
case 134101:
{
returnValue = F("Hau");
break;
}
case 134102:
{
returnValue = F("Hau Weg");
break;
}
case 134103:
{
returnValue = F("Haubach-Schneise");
break;
}
case 134104:
{
returnValue = F("Haubachstr.");
break;
}
case 134105:
{
returnValue = F("Haubachswinkel");
break;
}
case 134106:
{
returnValue = F("Haubachweg");
break;
}
case 134107:
{
returnValue = F("Haubarg");
break;
}
case 134108:
{
returnValue = F("Haube");
break;
}
case 134109:
{
returnValue = F("Hauben");
break;
}
case 134110:
{
returnValue = F("Haubenblick");
break;
}
case 134111:
{
returnValue = F("Haubendell");
break;
}
case 134112:
{
returnValue = F("Haubenden");
break;
}
case 134113:
{
returnValue = F("Haubengarten");
break;
}
case 134114:
{
returnValue = F("Haubenhof");
break;
}
case 134115:
{
returnValue = F("Haubenkopfstr.");
break;
}
case 134116:
{
returnValue = F("Haubenlerche");
break;
}
case 134117:
{
returnValue = F("Haubenlerchenweg");
break;
}
case 134118:
{
returnValue = F("Haubensattelweg");
break;
}
case 134119:
{
returnValue = F("Haubenstein");
break;
}
case 134120:
{
returnValue = F("Haubenstr.");
break;
}
case 134121:
{
returnValue = F("Haubentalstr.");
break;
}
case 134122:
{
returnValue = F("Haubentalweg");
break;
}
case 134123:
{
returnValue = F("Haubentaucherdamm");
break;
}
case 134124:
{
returnValue = F("Haubentaucherweg");
break;
}
case 134125:
{
returnValue = F("Haubenwasen");
break;
}
case 134126:
{
returnValue = F("Haubenweg");
break;
}
case 134127:
{
returnValue = F("Hauberallee");
break;
}
case 134128:
{
returnValue = F("Hauberanlage");
break;
}
case 134129:
{
returnValue = F("Hauberg");
break;
}
case 134130:
{
returnValue = F("Haubergsgrundweg");
break;
}
case 134131:
{
returnValue = F("Haubergstr.");
break;
}
case 134132:
{
returnValue = F("Haubergsweg");
break;
}
case 134133:
{
returnValue = F("Haubergweg");
break;
}
case 134134:
{
returnValue = F("Hauberrisserstr.");
break;
}
case 134135:
{
returnValue = F("Haubersbronner Str.");
break;
}
case 134136:
{
returnValue = F("Hauberstr.");
break;
}
case 134137:
{
returnValue = F("Haubertstr.");
break;
}
case 134138:
{
returnValue = F("Hauberweg");
break;
}
case 134139:
{
returnValue = F("Haubestr.");
break;
}
case 134140:
{
returnValue = F("Haubeweg");
break;
}
case 134141:
{
returnValue = F("Haubichweg");
break;
}
case 134142:
{
returnValue = F("Haubitz");
break;
}
case 134143:
{
returnValue = F("Haubitzer Str.");
break;
}
case 134144:
{
returnValue = F("Haublerweg");
break;
}
case 134145:
{
returnValue = F("Haublick");
break;
}
case 134146:
{
returnValue = F("Haublickstr.");
break;
}
case 134147:
{
returnValue = F("Haubnerstr.");
break;
}
case 134148:
{
returnValue = F("Hauboldstr.");
break;
}
case 134149:
{
returnValue = F("Haubourdinstr.");
break;
}
case 134150:
{
returnValue = F("Haubreede");
break;
}
case 134151:
{
returnValue = F("Haubrook");
break;
}
case 134152:
{
returnValue = F("Haubrunnen");
break;
}
case 134153:
{
returnValue = F("Haubsweg");
break;
}
case 134154:
{
returnValue = F("Haubtweg");
break;
}
case 134155:
{
returnValue = F("Haubuckel Weg");
break;
}
case 134156:
{
returnValue = F("Hauburgsteinweg");
break;
}
case 134157:
{
returnValue = F("Haubühlstr.");
break;
}
case 134158:
{
returnValue = F("Hauchenbergweg");
break;
}
case 134159:
{
returnValue = F("Hauchenstr.");
break;
}
case 134160:
{
returnValue = F("Hauchlinger Str.");
break;
}
case 134161:
{
returnValue = F("Hauck");
break;
}
case 134162:
{
returnValue = F("Hauckeberg");
break;
}
case 134163:
{
returnValue = F("Hauckendorl");
break;
}
case 134164:
{
returnValue = F("Hauckstr.");
break;
}
case 134165:
{
returnValue = F("Hauckwald");
break;
}
case 134166:
{
returnValue = F("Hauckwaldstr.");
break;
}
case 134167:
{
returnValue = F("Hauckweg");
break;
}
case 134168:
{
returnValue = F("Hauckwitzhügel");
break;
}
case 134169:
{
returnValue = F("Haudachserstr.");
break;
}
case 134170:
{
returnValue = F("Haudelgasse");
break;
}
case 134171:
{
returnValue = F("Haudels Gang");
break;
}
case 134172:
{
returnValue = F("Haudenweg");
break;
}
case 134173:
{
returnValue = F("Haudrescher Weg");
break;
}
case 134174:
{
returnValue = F("Haue");
break;
}
case 134175:
{
returnValue = F("Hauedaer Str.");
break;
}
case 134176:
{
returnValue = F("Hauedaer Weg");
break;
}
case 134177:
{
returnValue = F("Haueisener Weg");
break;
}
case 134178:
{
returnValue = F("Haueisenstr.");
break;
}
case 134179:
{
returnValue = F("Hauen");
break;
}
case 134180:
{
returnValue = F("Hauenborn");
break;
}
case 134181:
{
returnValue = F("Hauendamm");
break;
}
case 134182:
{
returnValue = F("Hauendorf");
break;
}
case 134183:
{
returnValue = F("Hauenebersteiner Str.");
break;
}
case 134184:
{
returnValue = F("Hauener Ring");
break;
}
case 134185:
{
returnValue = F("Hauenerlestr.");
break;
}
case 134186:
{
returnValue = F("Hauenhorster Str.");
break;
}
case 134187:
{
returnValue = F("Hauenmühlenstr.");
break;
}
case 134188:
{
returnValue = F("Hauenreuth");
break;
}
case 134189:
{
returnValue = F("Hauenriede");
break;
}
case 134190:
{
returnValue = F("Hauenstattplatz");
break;
}
case 134191:
{
returnValue = F("Hauenstein");
break;
}
case 134192:
{
returnValue = F("Hauensteiner Str.");
break;
}
case 134193:
{
returnValue = F("Hauensteiner Weg");
break;
}
case 134194:
{
returnValue = F("Hauensteinstr.");
break;
}
case 134195:
{
returnValue = F("Hauenstr.");
break;
}
case 134196:
{
returnValue = F("Hauenthal");
break;
}
case 134197:
{
returnValue = F("Hauentwiete");
break;
}
case 134198:
{
returnValue = F("Hauenweg");
break;
}
case 134199:
{
returnValue = F("Hauer Grenzweg");
break;
}
case 134200:
{
returnValue = F("Hauer Heide");
break;
}
case 134201:
{
returnValue = F("Hauer Str.");
break;
}
case 134202:
{
returnValue = F("Hauer Weg");
break;
}
case 134203:
{
returnValue = F("Hauereck");
break;
}
case 134204:
{
returnValue = F("Hauergasse");
break;
}
case 134205:
{
returnValue = F("Hauerkoppelredder");
break;
}
case 134206:
{
returnValue = F("Hauerlandstr.");
break;
}
case 134207:
{
returnValue = F("Hauerländer Str.");
break;
}
case 134208:
{
returnValue = F("Hauernweg");
break;
}
case 134209:
{
returnValue = F("Hauerskamp");
break;
}
case 134210:
{
returnValue = F("Hauerstr.");
break;
}
case 134211:
{
returnValue = F("Hauersäckerstr.");
break;
}
case 134212:
{
returnValue = F("Hauert");
break;
}
case 134213:
{
returnValue = F("Hauertal");
break;
}
case 134214:
{
returnValue = F("Hauertweg");
break;
}
case 134215:
{
returnValue = F("Hauerweg");
break;
}
case 134216:
{
returnValue = F("Hauerwiese");
break;
}
case 134217:
{
returnValue = F("Hauerwinkel");
break;
}
case 134218:
{
returnValue = F("Hauerzer Str.");
break;
}
case 134219:
{
returnValue = F("Haueweg");
break;
}
case 134220:
{
returnValue = F("Haufe");
break;
}
case 134221:
{
returnValue = F("Haufeld");
break;
}
case 134222:
{
returnValue = F("Haufenkamp");
break;
}
case 134223:
{
returnValue = F("Haufenstr.");
break;
}
case 134224:
{
returnValue = F("Haufentalstr.");
break;
}
case 134225:
{
returnValue = F("Haufenzipfelweg");
break;
}
case 134226:
{
returnValue = F("Haufenöd");
break;
}
case 134227:
{
returnValue = F("Haufer Str.");
break;
}
case 134228:
{
returnValue = F("Haufertsgrabenbrücke");
break;
}
case 134229:
{
returnValue = F("Hauff-Weg");
break;
}
case 134230:
{
returnValue = F("Hauffgasse");
break;
}
case 134231:
{
returnValue = F("Hauffstr.");
break;
}
case 134232:
{
returnValue = F("Hauffsweg");
break;
}
case 134233:
{
returnValue = F("Hauffweg");
break;
}
case 134234:
{
returnValue = F("Hauflerweg");
break;
}
case 134235:
{
returnValue = F("Haufweg");
break;
}
case 134236:
{
returnValue = F("Haugegasse");
break;
}
case 134237:
{
returnValue = F("Haugen Kamp");
break;
}
case 134238:
{
returnValue = F("Haugenrainstr.");
break;
}
case 134239:
{
returnValue = F("Haugenrieder Str.");
break;
}
case 134240:
{
returnValue = F("Haugenstein");
break;
}
case 134241:
{
returnValue = F("Haugenstr.");
break;
}
case 134242:
{
returnValue = F("Haugentalweg");
break;
}
case 134243:
{
returnValue = F("Haugenweg");
break;
}
case 134244:
{
returnValue = F("Haugerglacisstr.");
break;
}
case 134245:
{
returnValue = F("Haugerkirchgasse");
break;
}
case 134246:
{
returnValue = F("Haugerpfarrgasse");
break;
}
case 134247:
{
returnValue = F("Haugerring");
break;
}
case 134248:
{
returnValue = F("Haugerweg");
break;
}
case 134249:
{
returnValue = F("Haugrabenring");
break;
}
case 134250:
{
returnValue = F("Haugruberweg");
break;
}
case 134251:
{
returnValue = F("Haugstr.");
break;
}
case 134252:
{
returnValue = F("Haugweg");
break;
}
case 134253:
{
returnValue = F("Haugwitzstr.");
break;
}
case 134254:
{
returnValue = F("Hauheck");
break;
}
case 134255:
{
returnValue = F("Hauheckenweg");
break;
}
case 134256:
{
returnValue = F("Hauhof");
break;
}
case 134257:
{
returnValue = F("Hauhofer Str.");
break;
}
case 134258:
{
returnValue = F("Hauhüttenweg");
break;
}
case 134259:
{
returnValue = F("Hauin");
break;
}
case 134260:
{
returnValue = F("Hauinger Str.");
break;
}
case 134261:
{
returnValue = F("Hauingerweg");
break;
}
case 134262:
{
returnValue = F("Hauke-Haien-Koog-Süd");
break;
}
case 134263:
{
returnValue = F("Hauke-Haien-Ring");
break;
}
case 134264:
{
returnValue = F("Hauke-Haien-Weg");
break;
}
case 134265:
{
returnValue = F("Haukenestweg");
break;
}
case 134266:
{
returnValue = F("Haukenstr.");
break;
}
case 134267:
{
returnValue = F("Haukenweg");
break;
}
case 134268:
{
returnValue = F("Haukertsweg");
break;
}
case 134269:
{
returnValue = F("Hauknopf");
break;
}
case 134270:
{
returnValue = F("Haukohlstr.");
break;
}
case 134271:
{
returnValue = F("Haukoppel-Schneise");
break;
}
case 134272:
{
returnValue = F("Haukweg");
break;
}
case 134273:
{
returnValue = F("Haulacher Weg");
break;
}
case 134274:
{
returnValue = F("Haulandsweg");
break;
}
case 134275:
{
returnValue = F("Hauleithenweg");
break;
}
case 134276:
{
returnValue = F("Haulenbergstr.");
break;
}
case 134277:
{
returnValue = F("Haulerstr.");
break;
}
case 134278:
{
returnValue = F("Hauleweg");
break;
}
case 134279:
{
returnValue = F("Haulingort");
break;
}
case 134280:
{
returnValue = F("Haulucke");
break;
}
case 134281:
{
returnValue = F("Haulwitzer Str.");
break;
}
case 134282:
{
returnValue = F("Haumannstr.");
break;
}
case 134283:
{
returnValue = F("Haumche");
break;
}
case 134284:
{
returnValue = F("Haumchermühle");
break;
}
case 134285:
{
returnValue = F("Haumecke");
break;
}
case 134286:
{
returnValue = F("Haumeister-Erich-Montag-Weg");
break;
}
case 134287:
{
returnValue = F("Haumeister-Schmitt-Weg");
break;
}
case 134288:
{
returnValue = F("Haumoorredder");
break;
}
case 134289:
{
returnValue = F("Haumühle");
break;
}
case 134290:
{
returnValue = F("Haunachstr.");
break;
}
case 134291:
{
returnValue = F("Haunachweg");
break;
}
case 134292:
{
returnValue = F("Haundorf");
break;
}
case 134293:
{
returnValue = F("Haundorfer Str.");
break;
}
case 134294:
{
returnValue = F("Hauneckstr.");
break;
}
case 134295:
{
returnValue = F("Haunegasse");
break;
}
case 134296:
{
returnValue = F("Haunegrund");
break;
}
case 134297:
{
returnValue = F("Haunerbusch");
break;
}
case 134298:
{
returnValue = F("Haunerfeldstr.");
break;
}
case 134299:
{
returnValue = F("Haunerhof");
break;
}
case 134300:
{
returnValue = F("Haunerland");
break;
}
case 134301:
{
returnValue = F("Haunersdorf");
break;
}
case 134302:
{
returnValue = F("Haunersdorfer Str.");
break;
}
case 134303:
{
returnValue = F("Haunersfeldweg");
break;
}
case 134304:
{
returnValue = F("Haunerstr.");
break;
}
case 134305:
{
returnValue = F("Haunertinger Str.");
break;
}
case 134306:
{
returnValue = F("Haunerweg");
break;
}
case 134307:
{
returnValue = F("Haunesteg");
break;
}
case 134308:
{
returnValue = F("Haunestr.");
break;
}
case 134309:
{
returnValue = F("Haunetaler Platz");
break;
}
case 134310:
{
returnValue = F("Hauneweg");
break;
}
case 134311:
{
returnValue = F("Haunhorstberg");
break;
}
case 134312:
{
returnValue = F("Haunhorstweg");
break;
}
case 134313:
{
returnValue = F("Haunkenzeller Str.");
break;
}
case 134314:
{
returnValue = F("Haunküppelstr.");
break;
}
case 134315:
{
returnValue = F("Haunmühle");
break;
}
case 134316:
{
returnValue = F("Haunoldstr.");
break;
}
case 134317:
{
returnValue = F("Haunpoldstr.");
break;
}
case 134318:
{
returnValue = F("Haunreiterstr.");
break;
}
case 134319:
{
returnValue = F("Haunried");
break;
}
case 134320:
{
returnValue = F("Haunritzer Weg");
break;
}
case 134321:
{
returnValue = F("Haunsbacher Str.");
break;
}
case 134322:
{
returnValue = F("Haunsbergstr.");
break;
}
case 134323:
{
returnValue = F("Haunsbergweg");
break;
}
case 134324:
{
returnValue = F("Haunsdorfer Str.");
break;
}
case 134325:
{
returnValue = F("Haunsheimer Str.");
break;
}
case 134326:
{
returnValue = F("Haunsheimer Weg");
break;
}
case 134327:
{
returnValue = F("Haunshofer Weg");
break;
}
case 134328:
{
returnValue = F("Haunspergerstr.");
break;
}
case 134329:
{
returnValue = F("Haunspergstr.");
break;
}
case 134330:
{
returnValue = F("Haunstetter Geräumt");
break;
}
case 134331:
{
returnValue = F("Haunstetter Str.");
break;
}
case 134332:
{
returnValue = F("Haunstetterstr.");
break;
}
case 134333:
{
returnValue = F("Haunstweg");
break;
}
case 134334:
{
returnValue = F("Haunstädter Str.");
break;
}
case 134335:
{
returnValue = F("Haunstädter Weg");
break;
}
case 134336:
{
returnValue = F("Haunstätter Str.");
break;
}
case 134337:
{
returnValue = F("Haunswieser Str.");
break;
}
case 134338:
{
returnValue = F("Haunwanger Str.");
break;
}
case 134339:
{
returnValue = F("Haunwöhrer Str.");
break;
}
case 134340:
{
returnValue = F("Haupeltshofer Str.");
break;
}
case 134341:
{
returnValue = F("Haupensiek");
break;
}
case 134342:
{
returnValue = F("Haupersborn");
break;
}
case 134343:
{
returnValue = F("Haupersweilerstr.");
break;
}
case 134344:
{
returnValue = F("Haupertsreuth");
break;
}
case 134345:
{
returnValue = F("Haupichgasse");
break;
}
case 134346:
{
returnValue = F("Hauplanweg");
break;
}
case 134347:
{
returnValue = F("Haupstr.");
break;
}
case 134348:
{
returnValue = F("Haupt");
break;
}
case 134349:
{
returnValue = F("Haupt-Geräumt");
break;
}
case 134350:
{
returnValue = F("Hauptacker");
break;
}
case 134351:
{
returnValue = F("Hauptallee");
break;
}
case 134352:
{
returnValue = F("Hauptbahnhof");
break;
}
case 134353:
{
returnValue = F("Hauptbahnhof H");
break;
}
case 134354:
{
returnValue = F("Hauptbahnhof K");
break;
}
case 134355:
{
returnValue = F("Hauptbahnhof L");
break;
}
case 134356:
{
returnValue = F("Hauptbahnhof M");
break;
}
case 134357:
{
returnValue = F("Hauptbahnhof Ost");
break;
}
case 134358:
{
returnValue = F("Hauptbahnhof S");
break;
}
case 134359:
{
returnValue = F("Hauptbahnhof West / Mainzer Taubertsbergbad");
break;
}
case 134360:
{
returnValue = F("Hauptbahnhof/Willy-Brandt-Platz");
break;
}
case 134361:
{
returnValue = F("Hauptbahnhofstr.");
break;
}
case 134362:
{
returnValue = F("Hauptbahnstr.");
break;
}
case 134363:
{
returnValue = F("Hauptbeil");
break;
}
case 134364:
{
returnValue = F("Hauptbühlweg");
break;
}
case 134365:
{
returnValue = F("Hauptdamm");
break;
}
case 134366:
{
returnValue = F("Hauptdorfweg");
break;
}
case 134367:
{
returnValue = F("Haupteingang");
break;
}
case 134368:
{
returnValue = F("Hauptendorfer Str.");
break;
}
case 134369:
{
returnValue = F("Haupteschweg");
break;
}
case 134370:
{
returnValue = F("Hauptflözstr.");
break;
}
case 134371:
{
returnValue = F("Hauptflügel");
break;
}
case 134372:
{
returnValue = F("Hauptfriedhof");
break;
}
case 134373:
{
returnValue = F("Hauptfriedhof Lohfelden");
break;
}
case 134374:
{
returnValue = F("Hauptfriedhof/Blindenzentrum");
break;
}
case 134375:
{
returnValue = F("Hauptgasse");
break;
}
case 134376:
{
returnValue = F("Hauptgeräumt Str.");
break;
}
case 134377:
{
returnValue = F("Hauptgestell");
break;
}
case 134378:
{
returnValue = F("Hauptgraben");
break;
}
case 134379:
{
returnValue = F("Hauptholzweg");
break;
}
case 134380:
{
returnValue = F("Haupthöfe");
break;
}
case 134381:
{
returnValue = F("Hauptkammweg");
break;
}
case 134382:
{
returnValue = F("Hauptkanal Nord");
break;
}
case 134383:
{
returnValue = F("Hauptkanal Süd");
break;
}
case 134384:
{
returnValue = F("Hauptkanal links");
break;
}
case 134385:
{
returnValue = F("Hauptkanal rechts");
break;
}
case 134386:
{
returnValue = F("Hauptlehrer-Fischer-Str.");
break;
}
case 134387:
{
returnValue = F("Hauptlehrer-Lang-Str.");
break;
}
case 134388:
{
returnValue = F("Hauptlinder Weg");
break;
}
case 134389:
{
returnValue = F("Hauptlinie");
break;
}
case 134390:
{
returnValue = F("Hauptmann-Boelcke-Weg");
break;
}
case 134391:
{
returnValue = F("Hauptmann-Böse-Str.");
break;
}
case 134392:
{
returnValue = F("Hauptmann-Hoffmann-Str.");
break;
}
case 134393:
{
returnValue = F("Hauptmann-Köhl-Str.");
break;
}
case 134394:
{
returnValue = F("Hauptmann-Scheuermann-Weg");
break;
}
case 134395:
{
returnValue = F("Hauptmann-Schöningh-Str.");
break;
}
case 134396:
{
returnValue = F("Hauptmanns Garten");
break;
}
case 134397:
{
returnValue = F("Hauptmanns Kamp");
break;
}
case 134398:
{
returnValue = F("Hauptmannsgrüner Str.");
break;
}
case 134399:
{
returnValue = F("Hauptmannsschlüchte");
break;
}
case 134400:
{
returnValue = F("Hauptmannstr.");
break;
}
case 134401:
{
returnValue = F("Hauptmannswaldweg");
break;
}
case 134402:
{
returnValue = F("Hauptmannsweg");
break;
}
case 134403:
{
returnValue = F("Hauptmannweg");
break;
}
case 134404:
{
returnValue = F("Hauptmarkt");
break;
}
case 134405:
{
returnValue = F("Hauptmeedeweg");
break;
}
case 134406:
{
returnValue = F("Hauptmoorweg");
break;
}
case 134407:
{
returnValue = F("Hauptmühle");
break;
}
case 134408:
{
returnValue = F("Hauptpassage");
break;
}
case 134409:
{
returnValue = F("Hauptplatz");
break;
}
case 134410:
{
returnValue = F("Hauptring");
break;
}
case 134411:
{
returnValue = F("Hauptschleuse");
break;
}
case 134412:
{
returnValue = F("Hauptschneise");
break;
}
case 134413:
{
returnValue = F("Hauptschwendaer Str.");
break;
}
case 134414:
{
returnValue = F("Hauptskopfweg");
break;
}
case 134415:
{
returnValue = F("Hauptsmoorstr.");
break;
}
case 134416:
{
returnValue = F("Hauptstatt");
break;
}
case 134417:
{
returnValue = F("Hauptstege");
break;
}
case 134418:
{
returnValue = F("Hauptstr.");
break;
}
case 134419:
{
returnValue = F("Hauptstr. (Jörnstorf-Dorf)");
break;
}
case 134420:
{
returnValue = F("Hauptstr. (Leubnitz)");
break;
}
case 134421:
{
returnValue = F("Hauptstr. (Schwangasse)");
break;
}
case 134422:
{
returnValue = F("Hauptstr. / Historische Nette-Brücke");
break;
}
case 134423:
{
returnValue = F("Hauptstr. 2, 2 a-d, 3");
break;
}
case 134424:
{
returnValue = F("Hauptstr. 207, 209");
break;
}
case 134425:
{
returnValue = F("Hauptstr. 28a-28d");
break;
}
case 134426:
{
returnValue = F("Hauptstr. Abberode");
break;
}
case 134427:
{
returnValue = F("Hauptstr. Ausbau");
break;
}
case 134428:
{
returnValue = F("Hauptstr. Bahnhof");
break;
}
case 134429:
{
returnValue = F("Hauptstr. Bernstorf");
break;
}
case 134430:
{
returnValue = F("Hauptstr. Buchholz");
break;
}
case 134431:
{
returnValue = F("Hauptstr. Eisten");
break;
}
case 134432:
{
returnValue = F("Hauptstr. Falkenhagen");
break;
}
case 134433:
{
returnValue = F("Hauptstr. Grieben");
break;
}
case 134434:
{
returnValue = F("Hauptstr. Mahlen");
break;
}
case 134435:
{
returnValue = F("Hauptstr. Molmerswende");
break;
}
case 134436:
{
returnValue = F("Hauptstr. Neschow");
break;
}
case 134437:
{
returnValue = F("Hauptstr. Nesow");
break;
}
case 134438:
{
returnValue = F("Hauptstr. Nord");
break;
}
case 134439:
{
returnValue = F("Hauptstr. Ollndorf");
break;
}
case 134440:
{
returnValue = F("Hauptstr. Reinstorf");
break;
}
case 134441:
{
returnValue = F("Hauptstr. Rolofshagen");
break;
}
case 134442:
{
returnValue = F("Hauptstr. Schattin");
break;
}
case 134443:
{
returnValue = F("Hauptstr. Stove");
break;
}
case 134444:
{
returnValue = F("Hauptstr. Süd");
break;
}
case 134445:
{
returnValue = F("Hauptstr. Wilmersdorf");
break;
}
case 134446:
{
returnValue = F("Hauptstr. Zurow");
break;
}
case 134447:
{
returnValue = F("Hauptstraat");
break;
}
case 134448:
{
returnValue = F("Hauptstrasße");
break;
}
case 134449:
{
returnValue = F("Hauptsträßchen");
break;
}
case 134450:
{
returnValue = F("Hauptstuhl Park");
break;
}
case 134451:
{
returnValue = F("Hauptstuhler Flur");
break;
}
case 134452:
{
returnValue = F("Hauptstuhler Str.");
break;
}
case 134453:
{
returnValue = F("Haupttrift");
break;
}
case 134454:
{
returnValue = F("Hauptwache");
break;
}
case 134455:
{
returnValue = F("Hauptwachgässchen");
break;
}
case 134456:
{
returnValue = F("Hauptwachstr.");
break;
}
case 134457:
{
returnValue = F("Hauptwanderweg");
break;
}
case 134458:
{
returnValue = F("Hauptwanderweg 2 - schwäbische Alb Südrand Weg");
break;
}
case 134459:
{
returnValue = F("Hauptwasen");
break;
}
case 134460:
{
returnValue = F("Hauptwasenstr.");
break;
}
case 134461:
{
returnValue = F("Hauptweg");
break;
}
case 134462:
{
returnValue = F("Hauptweg 1");
break;
}
case 134463:
{
returnValue = F("Hauptweg 1 (I)");
break;
}
case 134464:
{
returnValue = F("Hauptweg 2");
break;
}
case 134465:
{
returnValue = F("Hauptweg 2 (II)");
break;
}
case 134466:
{
returnValue = F("Hauptweg 3");
break;
}
case 134467:
{
returnValue = F("Hauptweg Anhauser Tal");
break;
}
case 134468:
{
returnValue = F("Hauptweg Anlage Königsteiner Str.");
break;
}
case 134469:
{
returnValue = F("Hauptweg Nord-Süd");
break;
}
case 134470:
{
returnValue = F("Hauptwieke");
break;
}
case 134471:
{
returnValue = F("Hauptwieke I");
break;
}
case 134472:
{
returnValue = F("Hauptwieke II");
break;
}
case 134473:
{
returnValue = F("Hauptwieke Nord");
break;
}
case 134474:
{
returnValue = F("Hauptwieke Süd");
break;
}
case 134475:
{
returnValue = F("Haurihofweg");
break;
}
case 134476:
{
returnValue = F("Hauriweg");
break;
}
case 134477:
{
returnValue = F("Haurother Str.");
break;
}
case 134478:
{
returnValue = F("Haurup-Nord");
break;
}
case 134479:
{
returnValue = F("Haurup-Süd");
break;
}
case 134480:
{
returnValue = F("Haurup-West");
break;
}
case 134481:
{
returnValue = F("Hauröder Str.");
break;
}
case 134482:
{
returnValue = F("Hauröder Weg");
break;
}
case 134483:
{
returnValue = F("Haus");
break;
}
case 134484:
{
returnValue = F("Haus Albertus");
break;
}
case 134485:
{
returnValue = F("Haus Anger");
break;
}
case 134486:
{
returnValue = F("Haus Bellevue");
break;
}
case 134487:
{
returnValue = F("Haus Bergfrieden");
break;
}
case 134488:
{
returnValue = F("Haus Beselich");
break;
}
case 134489:
{
returnValue = F("Haus Bockdorf");
break;
}
case 134490:
{
returnValue = F("Haus Borg");
break;
}
case 134491:
{
returnValue = F("Haus Breitmaar");
break;
}
case 134492:
{
returnValue = F("Haus Brincke");
break;
}
case 134493:
{
returnValue = F("Haus Brockhausen");
break;
}
case 134494:
{
returnValue = F("Haus Broich");
break;
}
case 134495:
{
returnValue = F("Haus Bruch");
break;
}
case 134496:
{
returnValue = F("Haus Cappeln");
break;
}
case 134497:
{
returnValue = F("Haus Derenbach");
break;
}
case 134498:
{
returnValue = F("Haus Donk");
break;
}
case 134499:
{
returnValue = F("Haus Dorbröker");
break;
}
case 134500:
{
returnValue = F("Haus Druhwald");
break;
}
case 134501:
{
returnValue = F("Haus Dürffenthal");
break;
}
case 134502:
{
returnValue = F("Haus Düssel");
break;
}
case 134503:
{
returnValue = F("Haus Echotal");
break;
}
case 134504:
{
returnValue = F("Haus Eichen");
break;
}
case 134505:
{
returnValue = F("Haus Eidum");
break;
}
case 134506:
{
returnValue = F("Haus Füchteln");
break;
}
case 134507:
{
returnValue = F("Haus Galen");
break;
}
case 134508:
{
returnValue = F("Haus Glehn");
break;
}
case 134509:
{
returnValue = F("Haus Graffeln");
break;
}
case 134510:
{
returnValue = F("Haus Gravener Str.");
break;
}
case 134511:
{
returnValue = F("Haus Groevenkamp");
break;
}
case 134512:
{
returnValue = F("Haus Grünewald");
break;
}
case 134513:
{
returnValue = F("Haus Harderode");
break;
}
case 134514:
{
returnValue = F("Haus Hastern");
break;
}
case 134515:
{
returnValue = F("Haus Hehwerth Wiese");
break;
}
case 134516:
{
returnValue = F("Haus Heide");
break;
}
case 134517:
{
returnValue = F("Haus Hellgott");
break;
}
case 134518:
{
returnValue = F("Haus Hermanns");
break;
}
case 134519:
{
returnValue = F("Haus Hilmecke");
break;
}
case 134520:
{
returnValue = F("Haus Hohe Tanne");
break;
}
case 134521:
{
returnValue = F("Haus Holtwick");
break;
}
case 134522:
{
returnValue = F("Haus Horrig Str.");
break;
}
case 134523:
{
returnValue = F("Haus Hülshoff");
break;
}
case 134524:
{
returnValue = F("Haus Ilster");
break;
}
case 134525:
{
returnValue = F("Haus Jägersruh");
break;
}
case 134526:
{
returnValue = F("Haus Koeningen");
break;
}
case 134527:
{
returnValue = F("Haus Lahneck");
break;
}
case 134528:
{
returnValue = F("Haus Langen");
break;
}
case 134529:
{
returnValue = F("Haus Leppe");
break;
}
case 134530:
{
returnValue = F("Haus Leusch");
break;
}
case 134531:
{
returnValue = F("Haus Lorsbeck");
break;
}
case 134532:
{
returnValue = F("Haus Meer");
break;
}
case 134533:
{
returnValue = F("Haus Merberich");
break;
}
case 134534:
{
returnValue = F("Haus Natura");
break;
}
case 134535:
{
returnValue = F("Haus Neuland");
break;
}
case 134536:
{
returnValue = F("Haus Nienburg");
break;
}
case 134537:
{
returnValue = F("Haus Ohl");
break;
}
case 134538:
{
returnValue = F("Haus Osterberg");
break;
}
case 134539:
{
returnValue = F("Haus Papillon");
break;
}
case 134540:
{
returnValue = F("Haus Raedt");
break;
}
case 134541:
{
returnValue = F("Haus Rath");
break;
}
case 134542:
{
returnValue = F("Haus Riebel");
break;
}
case 134543:
{
returnValue = F("Haus Ruland");
break;
}
case 134544:
{
returnValue = F("Haus Saarstein");
break;
}
case 134545:
{
returnValue = F("Haus Sandfort");
break;
}
case 134546:
{
returnValue = F("Haus Schönblick Privatpark");
break;
}
case 134547:
{
returnValue = F("Haus Sonnental");
break;
}
case 134548:
{
returnValue = F("Haus Steg");
break;
}
case 134549:
{
returnValue = F("Haus Tenking");
break;
}
case 134550:
{
returnValue = F("Haus Thal");
break;
}
case 134551:
{
returnValue = F("Haus Unterbach");
break;
}
case 134552:
{
returnValue = F("Haus Vetter");
break;
}
case 134553:
{
returnValue = F("Haus Vorhelm");
break;
}
case 134554:
{
returnValue = F("Haus Waldesruh");
break;
}
case 134555:
{
returnValue = F("Haus Waldfrieden");
break;
}
case 134556:
{
returnValue = F("Haus Waldheim");
break;
}
case 134557:
{
returnValue = F("Haus Walle");
break;
}
case 134558:
{
returnValue = F("Haus Wolfing");
break;
}
case 134559:
{
returnValue = F("Haus am Bahnhof");
break;
}
case 134560:
{
returnValue = F("Haus am Berg");
break;
}
case 134561:
{
returnValue = F("Haus am Bildstock");
break;
}
case 134562:
{
returnValue = F("Haus am Mühlenweg");
break;
}
case 134563:
{
returnValue = F("Haus am See");
break;
}
case 134564:
{
returnValue = F("Haus am Sonnentor");
break;
}
case 134565:
{
returnValue = F("Haus am Wald");
break;
}
case 134566:
{
returnValue = F("Haus am Wehrsteg - Garten");
break;
}
case 134567:
{
returnValue = F("Haus am Zenssee");
break;
}
case 134568:
{
returnValue = F("Haus an der Olbe");
break;
}
case 134569:
{
returnValue = F("Haus an der Salzbrücke");
break;
}
case 134570:
{
returnValue = F("Haus der Berge Parkplatz");
break;
}
case 134571:
{
returnValue = F("Haus der Flüsse");
break;
}
case 134572:
{
returnValue = F("Haus im Walde");
break;
}
case 134573:
{
returnValue = F("Haus vor Leos Ruh");
break;
}
case 134574:
{
returnValue = F("Haus zum Haus");
break;
}
case 134575:
{
returnValue = F("Haus über der Bramfurt");
break;
}
case 134576:
{
returnValue = F("Haus-Arff-Weg");
break;
}
case 134577:
{
returnValue = F("Haus-Berge-Str.");
break;
}
case 134578:
{
returnValue = F("Haus-Biringer-Str.");
break;
}
case 134579:
{
returnValue = F("Haus-Broich-Str.");
break;
}
case 134580:
{
returnValue = F("Haus-Bürgel-Weg");
break;
}
case 134581:
{
returnValue = F("Haus-Coburg-Weg");
break;
}
case 134582:
{
returnValue = F("Haus-Droste-Weg");
break;
}
case 134583:
{
returnValue = F("Haus-Gahlen-Str.");
break;
}
case 134584:
{
returnValue = F("Haus-Garath-Weg");
break;
}
case 134585:
{
returnValue = F("Haus-Hamm-Str.");
break;
}
case 134586:
{
returnValue = F("Haus-Herzberger-Str.");
break;
}
case 134587:
{
returnValue = F("Haus-Heyden-Str.");
break;
}
case 134588:
{
returnValue = F("Haus-Horst-Str.");
break;
}
case 134589:
{
returnValue = F("Haus-Hove-Str.");
break;
}
case 134590:
{
returnValue = F("Haus-Nieland-Str.");
break;
}
case 134591:
{
returnValue = F("Haus-Randerath-Str.");
break;
}
case 134592:
{
returnValue = F("Haus-Rhade-Weg");
break;
}
case 134593:
{
returnValue = F("Haus-Risa-Str.");
break;
}
case 134594:
{
returnValue = F("Haus-Vorster-Str.");
break;
}
case 134595:
{
returnValue = F("Haus-Zeitzer Str.");
break;
}
case 134596:
{
returnValue = F("Hausacher Str.");
break;
}
case 134597:
{
returnValue = F("Hausacker");
break;
}
case 134598:
{
returnValue = F("Hausackerstr.");
break;
}
case 134599:
{
returnValue = F("Hausackerweg");
break;
}
case 134600:
{
returnValue = F("Hausanger");
break;
}
case 134601:
{
returnValue = F("Hausbacher Str.");
break;
}
case 134602:
{
returnValue = F("Hausbachklamm");
break;
}
case 134603:
{
returnValue = F("Hausbachstr.");
break;
}
case 134604:
{
returnValue = F("Hausbachweg");
break;
}
case 134605:
{
returnValue = F("Hausbayer Str.");
break;
}
case 134606:
{
returnValue = F("Hausbend");
break;
}
case 134607:
{
returnValue = F("Hausberg");
break;
}
case 134608:
{
returnValue = F("Hausberger Schweiz");
break;
}
case 134609:
{
returnValue = F("Hausberger Str.");
break;
}
case 134610:
{
returnValue = F("Hausbergring");
break;
}
case 134611:
{
returnValue = F("Hausbergstr.");
break;
}
case 134612:
{
returnValue = F("Hausbergweg");
break;
}
case 134613:
{
returnValue = F("Hausbichlweg");
break;
}
case 134614:
{
returnValue = F("Hausbornhang");
break;
}
case 134615:
{
returnValue = F("Hausbornweg");
break;
}
case 134616:
{
returnValue = F("Hausbroicher Acker");
break;
}
case 134617:
{
returnValue = F("Hausbroicher Str.");
break;
}
case 134618:
{
returnValue = F("Hausbrunnenstr.");
break;
}
case 134619:
{
returnValue = F("Hausbrunnenweg");
break;
}
case 134620:
{
returnValue = F("Hausbrücke");
break;
}
case 134621:
{
returnValue = F("Hausbuchenweg");
break;
}
case 134622:
{
returnValue = F("Hausbuck");
break;
}
case 134623:
{
returnValue = F("Hausbugenweg");
break;
}
case 134624:
{
returnValue = F("Hausbuschgasse");
break;
}
case 134625:
{
returnValue = F("Hauscherweg");
break;
}
case 134626:
{
returnValue = F("Hauschildstr.");
break;
}
case 134627:
{
returnValue = F("Hauschildweg");
break;
}
case 134628:
{
returnValue = F("Hausdorfer Kammweg");
break;
}
case 134629:
{
returnValue = F("Hausdorfer Str.");
break;
}
case 134630:
{
returnValue = F("Hausdorfer Weg");
break;
}
case 134631:
{
returnValue = F("Hausebachstr.");
break;
}
case 134632:
{
returnValue = F("Hauseck");
break;
}
case 134633:
{
returnValue = F("Hauseller");
break;
}
case 134634:
{
returnValue = F("Hausen");
break;
}
case 134635:
{
returnValue = F("Hausen-Schneise");
break;
}
case 134636:
{
returnValue = F("Hausenberg");
break;
}
case 134637:
{
returnValue = F("Hausenborner Str.");
break;
}
case 134638:
{
returnValue = F("Hausener Berg");
break;
}
case 134639:
{
returnValue = F("Hausener Gasse");
break;
}
case 134640:
{
returnValue = F("Hausener Hangweg");
break;
}
case 134641:
{
returnValue = F("Hausener Hauptstr.");
break;
}
case 134642:
{
returnValue = F("Hausener Hauweg");
break;
}
case 134643:
{
returnValue = F("Hausener Hof");
break;
}
case 134644:
{
returnValue = F("Hausener Hohle");
break;
}
case 134645:
{
returnValue = F("Hausener Landstr.");
break;
}
case 134646:
{
returnValue = F("Hausener Löchle");
break;
}
case 134647:
{
returnValue = F("Hausener Str.");
break;
}
case 134648:
{
returnValue = F("Hausener Tal");
break;
}
case 134649:
{
returnValue = F("Hausener Weg");
break;
}
case 134650:
{
returnValue = F("Hausenereckweg");
break;
}
case 134651:
{
returnValue = F("Hausenermühle");
break;
}
case 134652:
{
returnValue = F("Hausengässle");
break;
}
case 134653:
{
returnValue = F("Hausenklammweg");
break;
}
case 134654:
{
returnValue = F("Hausenmühle");
break;
}
case 134655:
{
returnValue = F("Hausenriedstr.");
break;
}
case 134656:
{
returnValue = F("Hausensteinweg");
break;
}
case 134657:
{
returnValue = F("Hausenstr.");
break;
}
case 134658:
{
returnValue = F("Hausenthaler Str.");
break;
}
case 134659:
{
returnValue = F("Hausenweg");
break;
}
case 134660:
{
returnValue = F("Hauser Gasse");
break;
}
case 134661:
{
returnValue = F("Hauser Hofmark");
break;
}
case 134662:
{
returnValue = F("Hauser Mühlberg");
break;
}
case 134663:
{
returnValue = F("Hauser Mühlweg");
break;
}
case 134664:
{
returnValue = F("Hauser Ring");
break;
}
case 134665:
{
returnValue = F("Hauser Str.");
break;
}
case 134666:
{
returnValue = F("Hauser Tal");
break;
}
case 134667:
{
returnValue = F("Hauser Weg");
break;
}
case 134668:
{
returnValue = F("Hauser-Berg-Str.");
break;
}
case 134669:
{
returnValue = F("Hauser-Str.");
break;
}
case 134670:
{
returnValue = F("Hauserbachstr.");
break;
}
case 134671:
{
returnValue = F("Hauserbauernstr.");
break;
}
case 134672:
{
returnValue = F("Hauserbauerstr.");
break;
}
case 134673:
{
returnValue = F("Hauserbergstr.");
break;
}
case 134674:
{
returnValue = F("Hauserfeld");
break;
}
case 134675:
{
returnValue = F("Hausergarten");
break;
}
case 134676:
{
returnValue = F("Hausergasse");
break;
}
case 134677:
{
returnValue = F("Hausergräble");
break;
}
case 134678:
{
returnValue = F("Hauserhalde");
break;
}
case 134679:
{
returnValue = F("Hauserheide");
break;
}
case 134680:
{
returnValue = F("Hauserhof");
break;
}
case 134681:
{
returnValue = F("Hauserhöfe");
break;
}
case 134682:
{
returnValue = F("Hausermühler Str.");
break;
}
case 134683:
{
returnValue = F("Hausernicklgasse");
break;
}
case 134684:
{
returnValue = F("Hausers Brühl");
break;
}
case 134685:
{
returnValue = F("Hauserstr.");
break;
}
case 134686:
{
returnValue = F("Hauserswiesen-Ring");
break;
}
case 134687:
{
returnValue = F("Hausertalstr.");
break;
}
case 134688:
{
returnValue = F("Hausertorstr.");
break;
}
case 134689:
{
returnValue = F("Hauserweg");
break;
}
case 134690:
{
returnValue = F("Hauseter Weg");
break;
}
case 134691:
{
returnValue = F("Hausfeld");
break;
}
case 134692:
{
returnValue = F("Hausfeldweg");
break;
}
case 134693:
{
returnValue = F("Hausfirstbornstr.");
break;
}
case 134694:
{
returnValue = F("Hausfürst");
break;
}
case 134695:
{
returnValue = F("Hausgarten");
break;
}
case 134696:
{
returnValue = F("Hausgartenstr.");
break;
}
case 134697:
{
returnValue = F("Hausgartenweg");
break;
}
case 134698:
{
returnValue = F("Hausgasse");
break;
}
case 134699:
{
returnValue = F("Hausgelänge");
break;
}
case 134700:
{
returnValue = F("Hausgereuter Mittelweg");
break;
}
case 134701:
{
returnValue = F("Hausgrund");
break;
}
case 134702:
{
returnValue = F("Hausgärten");
break;
}
case 134703:
{
returnValue = F("Hausgärtenweg");
break;
}
case 134704:
{
returnValue = F("Hausgüterweg");
break;
}
case 134705:
{
returnValue = F("Haushalde");
break;
}
case 134706:
{
returnValue = F("Haushamer Str.");
break;
}
case 134707:
{
returnValue = F("Haushamerstr.");
break;
}
case 134708:
{
returnValue = F("Haushausen");
break;
}
case 134709:
{
returnValue = F("Hausherrenstr.");
break;
}
case 134710:
{
returnValue = F("Haushoferstr.");
break;
}
case 134711:
{
returnValue = F("Hausiererweg");
break;
}
case 134712:
{
returnValue = F("Hausinger Str.");
break;
}
case 134713:
{
returnValue = F("Hauskabelweg");
break;
}
case 134714:
{
returnValue = F("Hauskamp");
break;
}
case 134715:
{
returnValue = F("Hauskampstr.");
break;
}
case 134716:
{
returnValue = F("Hausknechtweg");
break;
}
case 134717:
{
returnValue = F("Hauskoppel");
break;
}
case 134718:
{
returnValue = F("Hauskoppelberg");
break;
}
case 134719:
{
returnValue = F("Hauskoppelredder");
break;
}
case 134720:
{
returnValue = F("Hauskoppelweg");
break;
}
case 134721:
{
returnValue = F("Hauskorbweg");
break;
}
case 134722:
{
returnValue = F("Hauskramerfeld");
break;
}
case 134723:
{
returnValue = F("Hauskämpe");
break;
}
case 134724:
{
returnValue = F("Hauskämper Str.");
break;
}
case 134725:
{
returnValue = F("Hauslach");
break;
}
case 134726:
{
returnValue = F("Hauslacher Str.");
break;
}
case 134727:
{
returnValue = F("Hausladenweg");
break;
}
case 134728:
{
returnValue = F("Hauslehen");
break;
}
case 134729:
{
returnValue = F("Hausleite");
break;
}
case 134730:
{
returnValue = F("Hausleithe");
break;
}
case 134731:
{
returnValue = F("Hausleutenweg");
break;
}
case 134732:
{
returnValue = F("Hauslweg");
break;
}
case 134733:
{
returnValue = F("Hauslücke");
break;
}
case 134734:
{
returnValue = F("Hausmannsfeld");
break;
}
case 134735:
{
returnValue = F("Hausmannsplatz");
break;
}
case 134736:
{
returnValue = F("Hausmannstr.");
break;
}
case 134737:
{
returnValue = F("Hausmannsweg");
break;
}
case 134738:
{
returnValue = F("Hausmannswiese");
break;
}
case 134739:
{
returnValue = F("Hausmannweg");
break;
}
case 134740:
{
returnValue = F("Hausmatt");
break;
}
case 134741:
{
returnValue = F("Hausmattenweg");
break;
}
case 134742:
{
returnValue = F("Hausmattweg");
break;
}
case 134743:
{
returnValue = F("Hausmehringer Str.");
break;
}
case 134744:
{
returnValue = F("Hausmoning");
break;
}
case 134745:
{
returnValue = F("Hausmättleweg");
break;
}
case 134746:
{
returnValue = F("Hausmühlenstr.");
break;
}
case 134747:
{
returnValue = F("Hausmühler Str.");
break;
}
case 134748:
{
returnValue = F("Hausmühlstr.");
break;
}
case 134749:
{
returnValue = F("Hausmühlweg");
break;
}
case 134750:
{
returnValue = F("Hausneindorfer Str.");
break;
}
case 134751:
{
returnValue = F("Hausneindorfer Weg");
break;
}
case 134752:
{
returnValue = F("Hausner Gasse");
break;
}
case 134753:
{
returnValue = F("Hausner Grenzweg");
break;
}
case 134754:
{
returnValue = F("Hausner Str.");
break;
}
case 134755:
{
returnValue = F("Hausnerstr.");
break;
}
case 134756:
{
returnValue = F("Hausnerweg");
break;
}
case 134757:
{
returnValue = F("Hausnr.Unterer Railhof");
break;
}
case 134758:
{
returnValue = F("Hausotterweg");
break;
}
case 134759:
{
returnValue = F("Hausplanweg");
break;
}
case 134760:
{
returnValue = F("Hausplatzweg");
break;
}
case 134761:
{
returnValue = F("Hauspoint");
break;
}
case 134762:
{
returnValue = F("Hausrat");
break;
}
case 134763:
{
returnValue = F("Hausrucker Weg");
break;
}
case 134764:
{
returnValue = F("Hausseestr.");
break;
}
case 134765:
{
returnValue = F("Hausselbergweg");
break;
}
case 134766:
{
returnValue = F("Hausserweg");
break;
}
case 134767:
{
returnValue = F("Haussmannstr.");
break;
}
case 134768:
{
returnValue = F("Hausstatt");
break;
}
case 134769:
{
returnValue = F("Hausstattstr.");
break;
}
case 134770:
{
returnValue = F("Hausstattweg");
break;
}
case 134771:
{
returnValue = F("Haussteig");
break;
}
case 134772:
{
returnValue = F("Haussteige");
break;
}
case 134773:
{
returnValue = F("Hausstein");
break;
}
case 134774:
{
returnValue = F("Hausstelle");
break;
}
case 134775:
{
returnValue = F("Hausstellenweg");
break;
}
case 134776:
{
returnValue = F("Hausstetter Str.");
break;
}
case 134777:
{
returnValue = F("Hausstr.");
break;
}
case 134778:
{
returnValue = F("Hausstätte");
break;
}
case 134779:
{
returnValue = F("Haustadt");
break;
}
case 134780:
{
returnValue = F("Haustadter Str.");
break;
}
case 134781:
{
returnValue = F("Haustadter-Tal-Str.");
break;
}
case 134782:
{
returnValue = F("Haustadts Hof");
break;
}
case 134783:
{
returnValue = F("Haustedter Str.");
break;
}
case 134784:
{
returnValue = F("Hausteichstr.");
break;
}
case 134785:
{
returnValue = F("Hausteil");
break;
}
case 134786:
{
returnValue = F("Haustelstr.");
break;
}
case 134787:
{
returnValue = F("Hausten");
break;
}
case 134788:
{
returnValue = F("Haustenbecker Str.");
break;
}
case 134789:
{
returnValue = F("Haustenbecker Weg");
break;
}
case 134790:
{
returnValue = F("Haustenweg");
break;
}
case 134791:
{
returnValue = F("Haustiere, Streichelzoo");
break;
}
case 134792:
{
returnValue = F("Haustierweide");
break;
}
case 134793:
{
returnValue = F("Haustr.");
break;
}
case 134794:
{
returnValue = F("Haustsgasse");
break;
}
case 134795:
{
returnValue = F("Haustädter Str.");
break;
}
case 134796:
{
returnValue = F("Haustädter Weg");
break;
}
case 134797:
{
returnValue = F("Haustätter Höhe");
break;
}
case 134798:
{
returnValue = F("Haustückerweg");
break;
}
case 134799:
{
returnValue = F("Hausvogtweg");
break;
}
case 134800:
{
returnValue = F("Hauswalder Str.");
break;
}
case 134801:
{
returnValue = F("Hausweberstr.");
break;
}
case 134802:
{
returnValue = F("Hausweberweg");
break;
}
case 134803:
{
returnValue = F("Hausweg");
break;
}
case 134804:
{
returnValue = F("Hausweide");
break;
}
case 134805:
{
returnValue = F("Hausweiler Weg");
break;
}
case 134806:
{
returnValue = F("Hausweilerweg");
break;
}
case 134807:
{
returnValue = F("Hausweinberg");
break;
}
case 134808:
{
returnValue = F("Hausweinbergstr.");
break;
}
case 134809:
{
returnValue = F("Hausweingärten");
break;
}
case 134810:
{
returnValue = F("Hauswiese");
break;
}
case 134811:
{
returnValue = F("Hauswiesen");
break;
}
case 134812:
{
returnValue = F("Hauswiesenstr.");
break;
}
case 134813:
{
returnValue = F("Hauswiesenweg");
break;
}
case 134814:
{
returnValue = F("Hauswieser Weg");
break;
}
case 134815:
{
returnValue = F("Hauswiesstr.");
break;
}
case 134816:
{
returnValue = F("Hauswirt");
break;
}
case 134817:
{
returnValue = F("Hauswurzer Str.");
break;
}
case 134818:
{
returnValue = F("Hauszuführung");
break;
}
case 134819:
{
returnValue = F("Hausäcker");
break;
}
case 134820:
{
returnValue = F("Hausäckerstr.");
break;
}
case 134821:
{
returnValue = F("Hausäckerweg");
break;
}
case 134822:
{
returnValue = F("Hausörterstr.");
break;
}
case 134823:
{
returnValue = F("Hausörterweg");
break;
}
case 134824:
{
returnValue = F("Hautal");
break;
}
case 134825:
{
returnValue = F("Hauterodaer Str.");
break;
}
case 134826:
{
returnValue = F("Hautmontstr.");
break;
}
case 134827:
{
returnValue = F("Hautvillers-Platz");
break;
}
case 134828:
{
returnValue = F("Hautzenbergstr.");
break;
}
case 134829:
{
returnValue = F("Hauwaldstr.");
break;
}
case 134830:
{
returnValue = F("Hauweg");
break;
}
case 134831:
{
returnValue = F("Hauwiesweg");
break;
}
case 134832:
{
returnValue = F("Hauxdorf");
break;
}
case 134833:
{
returnValue = F("Hauxdorfer Weg");
break;
}
case 134834:
{
returnValue = F("Hauxkopfweg");
break;
}
case 134835:
{
returnValue = F("Hauxtalweg");
break;
}
case 134836:
{
returnValue = F("Hauzenberger Str.");
break;
}
case 134837:
{
returnValue = F("Hauzenberger Weg");
break;
}
case 134838:
{
returnValue = F("Hauzendorfer Str.");
break;
}
case 134839:
{
returnValue = F("Hauzensteiner Str.");
break;
}
case 134840:
{
returnValue = F("Haußerstr.");
break;
}
case 134841:
{
returnValue = F("Haußigstr.");
break;
}
case 134842:
{
returnValue = F("Haußmannplatz");
break;
}
case 134843:
{
returnValue = F("Haußmannstr.");
break;
}
case 134844:
{
returnValue = F("Haußnerstr.");
break;
}
case 134845:
{
returnValue = F("Hauäcker");
break;
}
case 134846:
{
returnValue = F("Hauäckerstr.");
break;
}
case 134847:
{
returnValue = F("Hauäckerweg");
break;
}
case 134848:
{
returnValue = F("Havannaer Str.");
break;
}
case 134849:
{
returnValue = F("Havannastr.");
break;
}
case 134850:
{
returnValue = F("Havantstr.");
break;
}
case 134851:
{
returnValue = F("Havas");
break;
}
case 134852:
{
returnValue = F("Haveholz");
break;
}
case 134853:
{
returnValue = F("Havekampenweg");
break;
}
case 134854:
{
returnValue = F("Havekescher Weg");
break;
}
case 134855:
{
returnValue = F("Havekoster Sand");
break;
}
case 134856:
{
returnValue = F("Havekoster Str.");
break;
}
case 134857:
{
returnValue = F("Havekoster Weg");
break;
}
case 134858:
{
returnValue = F("Havel-Radweg");
break;
}
case 134859:
{
returnValue = F("Havel-Radweg TBB");
break;
}
case 134860:
{
returnValue = F("Havelallee");
break;
}
case 134861:
{
returnValue = F("Haveland");
break;
}
case 134862:
{
returnValue = F("Havelaue");
break;
}
case 134863:
{
returnValue = F("Havelauenpark");
break;
}
case 134864:
{
returnValue = F("Havelberger Chaussee");
break;
}
case 134865:
{
returnValue = F("Havelberger Str.");
break;
}
case 134866:
{
returnValue = F("Havelberger Str. Mesendorf");
break;
}
case 134867:
{
returnValue = F("Havelberger Weg");
break;
}
case 134868:
{
returnValue = F("Havelblick");
break;
}
case 134869:
{
returnValue = F("Havelbogen");
break;
}
case 134870:
{
returnValue = F("Haveleck");
break;
}
case 134871:
{
returnValue = F("Havelgang");
break;
}
case 134872:
{
returnValue = F("Havelhausener Brücke");
break;
}
case 134873:
{
returnValue = F("Havelhausener Str.");
break;
}
case 134874:
{
returnValue = F("Havelhausener Weg");
break;
}
case 134875:
{
returnValue = F("Havelkorso");
break;
}
case 134876:
{
returnValue = F("Havellandbrücke");
break;
}
case 134877:
{
returnValue = F("Havellandstr.");
break;
}
case 134878:
{
returnValue = F("Havellandweg");
break;
}
case 134879:
{
returnValue = F("Havelländer Weg");
break;
}
case 134880:
{
returnValue = F("Havelländische Str.");
break;
}
case 134881:
{
returnValue = F("Havelmühle");
break;
}
case 134882:
{
returnValue = F("Havelplatz");
break;
}
case 134883:
{
returnValue = F("Havelpromenade");
break;
}
case 134884:
{
returnValue = F("Havelring");
break;
}
case 134885:
{
returnValue = F("Havelsburgweg");
break;
}
case 134886:
{
returnValue = F("Havelser Str.");
break;
}
case 134887:
{
returnValue = F("Havelstr.");
break;
}
case 134888:
{
returnValue = F("Haveltal");
break;
}
case 134889:
{
returnValue = F("Havelufer");
break;
}
case 134890:
{
returnValue = F("Havelvorland");
break;
}
case 134891:
{
returnValue = F("Havelweg");
break;
}
case 134892:
{
returnValue = F("Havelweg ost");
break;
}
case 134893:
{
returnValue = F("Havelzeile");
break;
}
case 134894:
{
returnValue = F("Havemannstr.");
break;
}
case 134895:
{
returnValue = F("Havemeisterstr.");
break;
}
case 134896:
{
returnValue = F("Havemeisterweg");
break;
}
case 134897:
{
returnValue = F("Havendorfer Berg");
break;
}
case 134898:
{
returnValue = F("Havendorfer Chaussee");
break;
}
case 134899:
{
returnValue = F("Havendorfersand");
break;
}
case 134900:
{
returnValue = F("Havenothstr.");
break;
}
case 134901:
{
returnValue = F("Havensteinscher Weg");
break;
}
case 134902:
{
returnValue = F("Havensteinstr.");
break;
}
case 134903:
{
returnValue = F("Haver Weg");
break;
}
case 134904:
{
returnValue = F("Haverbeck");
break;
}
case 134905:
{
returnValue = F("Haverbecker Esch");
break;
}
case 134906:
{
returnValue = F("Haverbecker Str.");
break;
}
case 134907:
{
returnValue = F("Haverbecker Wall");
break;
}
case 134908:
{
returnValue = F("Haverbecker Weg");
break;
}
case 134909:
{
returnValue = F("Haverhausener Weg");
break;
}
case 134910:
{
returnValue = F("Haveriede");
break;
}
case 134911:
{
returnValue = F("Havering Allee");
break;
}
case 134912:
{
returnValue = F("Haverkamp");
break;
}
case 134913:
{
returnValue = F("Haverkampring");
break;
}
case 134914:
{
returnValue = F("Haverkampstr.");
break;
}
case 134915:
{
returnValue = F("Haverkiel");
break;
}
case 134916:
{
returnValue = F("Haverkämper Weg");
break;
}
case 134917:
{
returnValue = F("Haverlaher Str.");
break;
}
case 134918:
{
returnValue = F("Haverlahstr.");
break;
}
case 134919:
{
returnValue = F("Haverland");
break;
}
case 134920:
{
returnValue = F("Haverlandhöhe");
break;
}
case 134921:
{
returnValue = F("Haverlandweg");
break;
}
case 134922:
{
returnValue = F("Haverländer Str.");
break;
}
case 134923:
{
returnValue = F("Havermannweg");
break;
}
case 134924:
{
returnValue = F("Havermonikenstr.");
break;
}
case 134925:
{
returnValue = F("Haversbach");
break;
}
case 134926:
{
returnValue = F("Haversloh");
break;
}
case 134927:
{
returnValue = F("Haverslohe");
break;
}
case 134928:
{
returnValue = F("Haverter Weg");
break;
}
case 134929:
{
returnValue = F("Haverterweg");
break;
}
case 134930:
{
returnValue = F("Havetofter Str.");
break;
}
case 134931:
{
returnValue = F("Havetoftloiter Str.");
break;
}
case 134932:
{
returnValue = F("Havighorst");
break;
}
case 134933:
{
returnValue = F("Havighorster Str.");
break;
}
case 134934:
{
returnValue = F("Havighorster Weg");
break;
}
case 134935:
{
returnValue = F("Havik");
break;
}
case 134936:
{
returnValue = F("Havilandstr.");
break;
}
case 134937:
{
returnValue = F("Havinganstr.");
break;
}
case 134938:
{
returnValue = F("Havixbecker Ring");
break;
}
case 134939:
{
returnValue = F("Havixbecker Str.");
break;
}
case 134940:
{
returnValue = F("Havkamp");
break;
}
case 134941:
{
returnValue = F("Havkenscheider Str.");
break;
}
case 134942:
{
returnValue = F("Hawag");
break;
}
case 134943:
{
returnValue = F("Hawanger Str.");
break;
}
case 134944:
{
returnValue = F("Haweg");
break;
}
case 134945:
{
returnValue = F("Hawerkämpe");
break;
}
case 134946:
{
returnValue = F("Hawerlandstr.");
break;
}
case 134947:
{
returnValue = F("Hawermannweg");
break;
}
case 134948:
{
returnValue = F("Hawstr.");
break;
}
case 134949:
{
returnValue = F("Haxenweg");
break;
}
case 134950:
{
returnValue = F("Haxloh");
break;
}
case 134951:
{
returnValue = F("Haxloh-Feld");
break;
}
case 134952:
{
returnValue = F("Haxschlucht");
break;
}
case 134953:
{
returnValue = F("Haxterberg");
break;
}
case 134954:
{
returnValue = F("Haxtergrund");
break;
}
case 134955:
{
returnValue = F("Haxterhöhe");
break;
}
case 134956:
{
returnValue = F("Haxthauser Weg");
break;
}
case 134957:
{
returnValue = F("Haxtumer Ring");
break;
}
case 134958:
{
returnValue = F("Hayda");
break;
}
case 134959:
{
returnValue = F("Haydee-Santamaria-Str.");
break;
}
case 134960:
{
returnValue = F("Haydenweg");
break;
}
case 134961:
{
returnValue = F("Hayderstr.");
break;
}
case 134962:
{
returnValue = F("Haydn-Str.");
break;
}
case 134963:
{
returnValue = F("Haydn-Weg");
break;
}
case 134964:
{
returnValue = F("Haydnallee");
break;
}
case 134965:
{
returnValue = F("Haydneck");
break;
}
case 134966:
{
returnValue = F("Haydngasse");
break;
}
case 134967:
{
returnValue = F("Haydnhof");
break;
}
case 134968:
{
returnValue = F("Haydnplatz");
break;
}
case 134969:
{
returnValue = F("Haydnring");
break;
}
case 134970:
{
returnValue = F("Haydnstr.");
break;
}
case 134971:
{
returnValue = F("Haydnweg");
break;
}
case 134972:
{
returnValue = F("Haydstr.");
break;
}
case 134973:
{
returnValue = F("Hayenweg");
break;
}
case 134974:
{
returnValue = F("Hayenwärf");
break;
}
case 134975:
{
returnValue = F("Hayergartenstr.");
break;
}
case 134976:
{
returnValue = F("Hayersgarten");
break;
}
case 134977:
{
returnValue = F("Hayessenweg");
break;
}
case 134978:
{
returnValue = F("Hayinger Str.");
break;
}
case 134979:
{
returnValue = F("Haylmannstr.");
break;
}
case 134980:
{
returnValue = F("Haymannstr.");
break;
}
case 134981:
{
returnValue = F("Haymostr.");
break;
}
case 134982:
{
returnValue = F("Hayn-Weg");
break;
}
case 134983:
{
returnValue = F("Haynaer Str.");
break;
}
case 134984:
{
returnValue = F("Haynaer Weg");
break;
}
case 134985:
{
returnValue = F("Haynaerstr.");
break;
}
case 134986:
{
returnValue = F("Haynauer Str.");
break;
}
case 134987:
{
returnValue = F("Haynauer Weg");
break;
}
case 134988:
{
returnValue = F("Haynauplatz");
break;
}
case 134989:
{
returnValue = F("Hayner Hintergasse");
break;
}
case 134990:
{
returnValue = F("Hayner Unterdorf");
break;
}
case 134991:
{
returnValue = F("Hayng");
break;
}
case 134992:
{
returnValue = F("Hayngasse");
break;
}
case 134993:
{
returnValue = F("Haynröder Str.");
break;
}
case 134994:
{
returnValue = F("Haynröder Trift");
break;
}
case 134995:
{
returnValue = F("Haynsberg");
break;
}
case 134996:
{
returnValue = F("Haynscher Weg");
break;
}
case 134997:
{
returnValue = F("Hayo-Husseken-Str.");
break;
}
case 134998:
{
returnValue = F("Hayoweg");
break;
}
case 134999:
{
returnValue = F("Haystr.");
break;
}
case 135000:
{
returnValue = F("Hayungshauser Weg");
break;
}
case 135001:
{
returnValue = F("Hayungsweg");
break;
}
case 135002:
{
returnValue = F("Haywards-Heath-Weg");
break;
}
case 135003:
{
returnValue = F("Hayßenstr.");
break;
}
case 135004:
{
returnValue = F("Hazechastr.");
break;
}
case 135005:
{
returnValue = F("Hazigastr.");
break;
}
case 135006:
{
returnValue = F("Haßberg");
break;
}
case 135007:
{
returnValue = F("Haßbergblick");
break;
}
case 135008:
{
returnValue = F("Haßberger Bruch");
break;
}
case 135009:
{
returnValue = F("Haßbergestr.");
break;
}
case 135010:
{
returnValue = F("Haßbergstr.");
break;
}
case 135011:
{
returnValue = F("Haßbruch");
break;
}
case 135012:
{
returnValue = F("Haßbüttel");
break;
}
case 135013:
{
returnValue = F("Haßbütteler Weg");
break;
}
case 135014:
{
returnValue = F("Haßelfeld");
break;
}
case 135015:
{
returnValue = F("Haßelhöhe");
break;
}
case 135016:
{
returnValue = F("Haßelnußstr.");
break;
}
case 135017:
{
returnValue = F("Haßfelder Str.");
break;
}
case 135018:
{
returnValue = F("Haßfurter Str.");
break;
}
case 135019:
{
returnValue = F("Haßfurter Weg");
break;
}
case 135020:
{
returnValue = F("Haßjägerweg");
break;
}
case 135021:
{
returnValue = F("Haßkamp");
break;
}
case 135022:
{
returnValue = F("Haßkampstr.");
break;
}
case 135023:
{
returnValue = F("Haßknöll");
break;
}
case 135024:
{
returnValue = F("Haßlach");
break;
}
case 135025:
{
returnValue = F("Haßlacher Berg");
break;
}
case 135026:
{
returnValue = F("Haßlacher Bergsteig");
break;
}
case 135027:
{
returnValue = F("Haßlacher Weg");
break;
}
case 135028:
{
returnValue = F("Haßlacherstr.");
break;
}
case 135029:
{
returnValue = F("Haßlachgasse");
break;
}
case 135030:
{
returnValue = F("Haßlage");
break;
}
case 135031:
{
returnValue = F("Haßlau");
break;
}
case 135032:
{
returnValue = F("Haßlauer Str.");
break;
}
case 135033:
{
returnValue = F("Haßlebener Siedlung");
break;
}
case 135034:
{
returnValue = F("Haßlebener Str.");
break;
}
case 135035:
{
returnValue = F("Haßlebener Weg");
break;
}
case 135036:
{
returnValue = F("Haßleber Str.");
break;
}
case 135037:
{
returnValue = F("Haßleistr.");
break;
}
case 135038:
{
returnValue = F("Haßlerhof");
break;
}
case 135039:
{
returnValue = F("Haßlerstr.");
break;
}
case 135040:
{
returnValue = F("Haßlinger Str.");
break;
}
case 135041:
{
returnValue = F("Haßlinghauser Str.");
break;
}
case 135042:
{
returnValue = F("Haßlocher Grenzweg");
break;
}
case 135043:
{
returnValue = F("Haßlocher Str.");
break;
}
case 135044:
{
returnValue = F("Haßlocher Weg");
break;
}
case 135045:
{
returnValue = F("Haßloh");
break;
}
case 135046:
{
returnValue = F("Haßlower Chaussee");
break;
}
case 135047:
{
returnValue = F("Haßlower Weg");
break;
}
case 135048:
{
returnValue = F("Haßmannstr.");
break;
}
case 135049:
{
returnValue = F("Haßmersheimer Str.");
break;
}
case 135050:
{
returnValue = F("Haßstr.");
break;
}
case 135051:
{
returnValue = F("Haßwiesenstr.");
break;
}
case 135052:
{
returnValue = F("Hebachhof");
break;
}
case 135053:
{
returnValue = F("Hebammenbrücke");
break;
}
case 135054:
{
returnValue = F("Hebammengasse");
break;
}
case 135055:
{
returnValue = F("Hebammensteig");
break;
}
case 135056:
{
returnValue = F("Hebammenweg");
break;
}
case 135057:
{
returnValue = F("Hebanz");
break;
}
case 135058:
{
returnValue = F("Hebbelerstr.");
break;
}
case 135059:
{
returnValue = F("Hebbelpfad");
break;
}
case 135060:
{
returnValue = F("Hebbelplatz");
break;
}
case 135061:
{
returnValue = F("Hebbelstr.");
break;
}
case 135062:
{
returnValue = F("Hebbelstr. (Schwarzer Weg)");
break;
}
case 135063:
{
returnValue = F("Hebbelweg");
break;
}
case 135064:
{
returnValue = F("Hebbenshof");
break;
}
case 135065:
{
returnValue = F("Hebberger Str.");
break;
}
case 135066:
{
returnValue = F("Hebberger Weg");
break;
}
case 135067:
{
returnValue = F("Hebbergring");
break;
}
case 135068:
{
returnValue = F("Hebbergstr.");
break;
}
case 135069:
{
returnValue = F("Hebbergweg");
break;
}
case 135070:
{
returnValue = F("Hebborner Berg");
break;
}
case 135071:
{
returnValue = F("Hebborner Feld");
break;
}
case 135072:
{
returnValue = F("Hebborner Hof");
break;
}
case 135073:
{
returnValue = F("Hebborner Kirchweg");
break;
}
case 135074:
{
returnValue = F("Hebborner Str.");
break;
}
case 135075:
{
returnValue = F("Hebborner Weg");
break;
}
case 135076:
{
returnValue = F("Hebbrunnenstr.");
break;
}
case 135077:
{
returnValue = F("Hebe");
break;
}
case 135078:
{
returnValue = F("Hebe A");
break;
}
case 135079:
{
returnValue = F("Hebe B");
break;
}
case 135080:
{
returnValue = F("Hebeckenkamp");
break;
}
case 135081:
{
returnValue = F("Hebegasse");
break;
}
case 135082:
{
returnValue = F("Hebeleckstr.");
break;
}
case 135083:
{
returnValue = F("Hebelei");
break;
}
case 135084:
{
returnValue = F("Hebeler Str.");
break;
}
case 135085:
{
returnValue = F("Hebeler Weg");
break;
}
case 135086:
{
returnValue = F("Hebelermeer");
break;
}
case 135087:
{
returnValue = F("Hebelpark");
break;
}
case 135088:
{
returnValue = F("Hebelplatz");
break;
}
case 135089:
{
returnValue = F("Hebelstr.");
break;
}
case 135090:
{
returnValue = F("Hebelsweg");
break;
}
case 135091:
{
returnValue = F("Hebeltannweg");
break;
}
case 135092:
{
returnValue = F("Hebelweg");
break;
}
case 135093:
{
returnValue = F("Hebelwegle");
break;
}
case 135094:
{
returnValue = F("Hebengasse");
break;
}
case 135095:
{
returnValue = F("Hebenhornweg");
break;
}
case 135096:
{
returnValue = F("Hebentalweg");
break;
}
case 135097:
{
returnValue = F("Heber");
break;
}
case 135098:
{
returnValue = F("Heberblick");
break;
}
case 135099:
{
returnValue = F("Heberer Str.");
break;
}
case 135100:
{
returnValue = F("Hebererstr.");
break;
}
case 135101:
{
returnValue = F("Hebererweg");
break;
}
case 135102:
{
returnValue = F("Hebergatze");
break;
}
case 135103:
{
returnValue = F("Heberge");
break;
}
case 135104:
{
returnValue = F("Heberleinstr.");
break;
}
case 135105:
{
returnValue = F("Heberlinger Str.");
break;
}
case 135106:
{
returnValue = F("Heberlings");
break;
}
case 135107:
{
returnValue = F("Hebermühlstr.");
break;
}
case 135108:
{
returnValue = F("Heberndorf");
break;
}
case 135109:
{
returnValue = F("Heberndorfer Str.");
break;
}
case 135110:
{
returnValue = F("Hebernweg");
break;
}
case 135111:
{
returnValue = F("Hebersberger Str.");
break;
}
case 135112:
{
returnValue = F("Hebersdorf");
break;
}
case 135113:
{
returnValue = F("Hebersiedlung");
break;
}
case 135114:
{
returnValue = F("Heberstr.");
break;
}
case 135115:
{
returnValue = F("Heberszeller Leiten");
break;
}
case 135116:
{
returnValue = F("Hebertsbach");
break;
}
case 135117:
{
returnValue = F("Hebertsham");
break;
}
case 135118:
{
returnValue = F("Hebertshausener Str.");
break;
}
case 135119:
{
returnValue = F("Hebertshauser Str.");
break;
}
case 135120:
{
returnValue = F("Hebertstr.");
break;
}
case 135121:
{
returnValue = F("Heberweg");
break;
}
case 135122:
{
returnValue = F("Hebestr.");
break;
}
case 135123:
{
returnValue = F("Hebewerkstr.");
break;
}
case 135124:
{
returnValue = F("Hebichstr.");
break;
}
case 135125:
{
returnValue = F("Heblesrichter Str.");
break;
}
case 135126:
{
returnValue = F("Hebloser Str.");
break;
}
case 135127:
{
returnValue = F("Hebronberg");
break;
}
case 135128:
{
returnValue = F("Hebrotsweg");
break;
}
case 135129:
{
returnValue = F("Hebräergrund");
break;
}
case 135130:
{
returnValue = F("Hebsack");
break;
}
case 135131:
{
returnValue = F("Hebsacker Halde");
break;
}
case 135132:
{
returnValue = F("Hebsackstr.");
break;
}
case 135133:
{
returnValue = F("Hebsackweg");
break;
}
case 135134:
{
returnValue = F("Hebstahler Buchhälde-Talweg");
break;
}
case 135135:
{
returnValue = F("Hebstahler Buchhäldeweg");
break;
}
case 135136:
{
returnValue = F("Hebstahler Kirchenpfad");
break;
}
case 135137:
{
returnValue = F("Hebstahler Str.");
break;
}
case 135138:
{
returnValue = F("Hebünte");
break;
}
case 135139:
{
returnValue = F("Hechelfurterweg");
break;
}
case 135140:
{
returnValue = F("Hechelgasse");
break;
}
case 135141:
{
returnValue = F("Hechelkotten");
break;
}
case 135142:
{
returnValue = F("Hechelleite");
break;
}
case 135143:
{
returnValue = F("Hecheln");
break;
}
case 135144:
{
returnValue = F("Hechelscheid");
break;
}
case 135145:
{
returnValue = F("Hechelscheider Str.");
break;
}
case 135146:
{
returnValue = F("Hechelstr.");
break;
}
case 135147:
{
returnValue = F("Hecheltjensweg");
break;
}
case 135148:
{
returnValue = F("Hechelweg");
break;
}
case 135149:
{
returnValue = F("Hechelwiesenweg");
break;
}
case 135150:
{
returnValue = F("Hechenberger Weg");
break;
}
case 135151:
{
returnValue = F("Hechenbergstr.");
break;
}
case 135152:
{
returnValue = F("Hechendorfer Str.");
break;
}
case 135153:
{
returnValue = F("Hechenwanger Str.");
break;
}
case 135154:
{
returnValue = F("Hechinger Str.");
break;
}
case 135155:
{
returnValue = F("Hechinger Weg");
break;
}
case 135156:
{
returnValue = F("Hechingerweg");
break;
}
case 135157:
{
returnValue = F("Hechlergasse");
break;
}
case 135158:
{
returnValue = F("Hechlerstr.");
break;
}
case 135159:
{
returnValue = F("Hechlertalstr.");
break;
}
case 135160:
{
returnValue = F("Hechlinger Hohlweg");
break;
}
case 135161:
{
returnValue = F("Hechlinger Str.");
break;
}
case 135162:
{
returnValue = F("Hechlstr.");
break;
}
case 135163:
{
returnValue = F("Hechmecke");
break;
}
case 135164:
{
returnValue = F("Hechmecker Weg");
break;
}
case 135165:
{
returnValue = F("Hechpelsplatz");
break;
}
case 135166:
{
returnValue = F("Hechtbachweg");
break;
}
case 135167:
{
returnValue = F("Hechteck");
break;
}
case 135168:
{
returnValue = F("Hechtelweg");
break;
}
case 135169:
{
returnValue = F("Hechtengasse");
break;
}
case 135170:
{
returnValue = F("Hechtenstr.");
break;
}
case 135171:
{
returnValue = F("Hechtenteich");
break;
}
case 135172:
{
returnValue = F("Hechtenweg");
break;
}
case 135173:
{
returnValue = F("Hechtgang");
break;
}
case 135174:
{
returnValue = F("Hechtgasse");
break;
}
case 135175:
{
returnValue = F("Hechtgraben");
break;
}
case 135176:
{
returnValue = F("Hechthof");
break;
}
case 135177:
{
returnValue = F("Hechtholz");
break;
}
case 135178:
{
returnValue = F("Hechtleinfahrbahn");
break;
}
case 135179:
{
returnValue = F("Hechtring");
break;
}
case 135180:
{
returnValue = F("Hechtsberg");
break;
}
case 135181:
{
returnValue = F("Hechtschneise");
break;
}
case 135182:
{
returnValue = F("Hechtschwanz");
break;
}
case 135183:
{
returnValue = F("Hechtsee");
break;
}
case 135184:
{
returnValue = F("Hechtseestr.");
break;
}
case 135185:
{
returnValue = F("Hechtseeweg");
break;
}
case 135186:
{
returnValue = F("Hechtsforthschleuse");
break;
}
case 135187:
{
returnValue = F("Hechtsheimer Berg");
break;
}
case 135188:
{
returnValue = F("Hechtsheimer Str.");
break;
}
case 135189:
{
returnValue = F("Hechtskuhl");
break;
}
case 135190:
{
returnValue = F("Hechtsprung");
break;
}
case 135191:
{
returnValue = F("Hechtstr.");
break;
}
case 135192:
{
returnValue = F("Hechtteichweg");
break;
}
case 135193:
{
returnValue = F("Hechtweg");
break;
}
case 135194:
{
returnValue = F("Hechtweiher");
break;
}
case 135195:
{
returnValue = F("Hechwihl");
break;
}
case 135196:
{
returnValue = F("Hecilostr.");
break;
}
case 135197:
{
returnValue = F("Heck");
break;
}
case 135198:
{
returnValue = F("Heckacker");
break;
}
case 135199:
{
returnValue = F("Heckackerweg");
break;
}
case 135200:
{
returnValue = F("Heckbachstr.");
break;
}
case 135201:
{
returnValue = F("Heckberg");
break;
}
case 135202:
{
returnValue = F("Heckbergweg");
break;
}
case 135203:
{
returnValue = F("Heckbrunnenweg");
break;
}
case 135204:
{
returnValue = F("Hecke");
break;
}
case 135205:
{
returnValue = F("Heckebaum");
break;
}
case 135206:
{
returnValue = F("Heckebree");
break;
}
case 135207:
{
returnValue = F("Heckelberger Str.");
break;
}
case 135208:
{
returnValue = F("Heckelbergweg");
break;
}
case 135209:
{
returnValue = F("Heckelburg");
break;
}
case 135210:
{
returnValue = F("Heckelchesweg");
break;
}
case 135211:
{
returnValue = F("Heckelkamp");
break;
}
case 135212:
{
returnValue = F("Heckels Pad");
break;
}
case 135213:
{
returnValue = F("Heckelsiefener Str.");
break;
}
case 135214:
{
returnValue = F("Heckelssiefen");
break;
}
case 135215:
{
returnValue = F("Heckelstenweg");
break;
}
case 135216:
{
returnValue = F("Heckelstr.");
break;
}
case 135217:
{
returnValue = F("Heckelswies");
break;
}
case 135218:
{
returnValue = F("Heckelweg");
break;
}
case 135219:
{
returnValue = F("Hecken");
break;
}
case 135220:
{
returnValue = F("Hecken-Labyrinth");
break;
}
case 135221:
{
returnValue = F("Heckenacker");
break;
}
case 135222:
{
returnValue = F("Heckenackerstr.");
break;
}
case 135223:
{
returnValue = F("Heckenackerweg");
break;
}
case 135224:
{
returnValue = F("Heckenbacher Str.");
break;
}
case 135225:
{
returnValue = F("Heckenbachstr.");
break;
}
case 135226:
{
returnValue = F("Heckenbachweg");
break;
}
case 135227:
{
returnValue = F("Heckenbecker Str.");
break;
}
case 135228:
{
returnValue = F("Heckenbecker Worth");
break;
}
case 135229:
{
returnValue = F("Heckenberg");
break;
}
case 135230:
{
returnValue = F("Heckenbergs Kamp");
break;
}
case 135231:
{
returnValue = F("Heckenbergstr.");
break;
}
case 135232:
{
returnValue = F("Heckenbergweg");
break;
}
case 135233:
{
returnValue = F("Heckenbrei");
break;
}
case 135234:
{
returnValue = F("Heckenbreite");
break;
}
case 135235:
{
returnValue = F("Heckenbrunnenpfad");
break;
}
case 135236:
{
returnValue = F("Heckenbrunnenweg");
break;
}
case 135237:
{
returnValue = F("Heckenbuschstr.");
break;
}
case 135238:
{
returnValue = F("Heckendamm");
break;
}
case 135239:
{
returnValue = F("Heckenend");
break;
}
case 135240:
{
returnValue = F("Heckener Str.");
break;
}
case 135241:
{
returnValue = F("Heckenfeldstr.");
break;
}
case 135242:
{
returnValue = F("Heckenflussweg");
break;
}
case 135243:
{
returnValue = F("Heckengang");
break;
}
case 135244:
{
returnValue = F("Heckengarten");
break;
}
case 135245:
{
returnValue = F("Heckengarten Hohenstadt");
break;
}
case 135246:
{
returnValue = F("Heckengartenweg");
break;
}
case 135247:
{
returnValue = F("Heckengasse");
break;
}
case 135248:
{
returnValue = F("Heckengereuther Weg");
break;
}
case 135249:
{
returnValue = F("Heckengäustr.");
break;
}
case 135250:
{
returnValue = F("Heckengäuweg");
break;
}
case 135251:
{
returnValue = F("Heckengäßchen");
break;
}
case 135252:
{
returnValue = F("Heckenhahn");
break;
}
case 135253:
{
returnValue = F("Heckenhartweg");
break;
}
case 135254:
{
returnValue = F("Heckenhaus");
break;
}
case 135255:
{
returnValue = F("Heckenhaus Hoheheide");
break;
}
case 135256:
{
returnValue = F("Heckenhaus Steinmühle");
break;
}
case 135257:
{
returnValue = F("Heckenhof");
break;
}
case 135258:
{
returnValue = F("Heckenhofer Berg");
break;
}
case 135259:
{
returnValue = F("Heckenhofergasse");
break;
}
case 135260:
{
returnValue = F("Heckenhofstr.");
break;
}
case 135261:
{
returnValue = F("Heckenhäusen");
break;
}
case 135262:
{
returnValue = F("Heckenhöfchen");
break;
}
case 135263:
{
returnValue = F("Heckenhügel");
break;
}
case 135264:
{
returnValue = F("Heckenkamp");
break;
}
case 135265:
{
returnValue = F("Heckenkirschenweg");
break;
}
case 135266:
{
returnValue = F("Heckenkrug");
break;
}
case 135267:
{
returnValue = F("Heckenlohne");
break;
}
case 135268:
{
returnValue = F("Heckenmühle");
break;
}
case 135269:
{
returnValue = F("Heckenpfad");
break;
}
case 135270:
{
returnValue = F("Heckenrain");
break;
}
case 135271:
{
returnValue = F("Heckenring");
break;
}
case 135272:
{
returnValue = F("Heckenrosenstieg");
break;
}
case 135273:
{
returnValue = F("Heckenrosenstr.");
break;
}
case 135274:
{
returnValue = F("Heckenrosenweg");
break;
}
case 135275:
{
returnValue = F("Heckenrotstr.");
break;
}
case 135276:
{
returnValue = F("Heckenseelachschneise");
break;
}
case 135277:
{
returnValue = F("Heckenstallerstr.");
break;
}
case 135278:
{
returnValue = F("Heckensteg");
break;
}
case 135279:
{
returnValue = F("Heckenstr.");
break;
}
case 135280:
{
returnValue = F("Heckenstäudigweg");
break;
}
case 135281:
{
returnValue = F("Heckenstück");
break;
}
case 135282:
{
returnValue = F("Heckentalstr.");
break;
}
case 135283:
{
returnValue = F("Heckenweg");
break;
}
case 135284:
{
returnValue = F("Heckenwiesen");
break;
}
case 135285:
{
returnValue = F("Heckenwiesenstr.");
break;
}
case 135286:
{
returnValue = F("Heckenwiesenweg");
break;
}
case 135287:
{
returnValue = F("Heckenwingert");
break;
}
case 135288:
{
returnValue = F("Heckenäcker");
break;
}
case 135289:
{
returnValue = F("Heckenäckerweg");
break;
}
case 135290:
{
returnValue = F("Hecker Str.");
break;
}
case 135291:
{
returnValue = F("Heckerfeld");
break;
}
case 135292:
{
returnValue = F("Heckerheide");
break;
}
case 135293:
{
returnValue = F("Heckersbergpark / Bolzplatz / Bikeanlage");
break;
}
case 135294:
{
returnValue = F("Heckersbergstr.");
break;
}
case 135295:
{
returnValue = F("Heckersgasse");
break;
}
case 135296:
{
returnValue = F("Heckershäuser Str.");
break;
}
case 135297:
{
returnValue = F("Heckersklingenweg");
break;
}
case 135298:
{
returnValue = F("Heckerstieg");
break;
}
case 135299:
{
returnValue = F("Heckerstr.");
break;
}
case 135300:
{
returnValue = F("Heckertsberg");
break;
}
case 135301:
{
returnValue = F("Heckertstr.");
break;
}
case 135302:
{
returnValue = F("Heckerweg");
break;
}
case 135303:
{
returnValue = F("Heckeweg");
break;
}
case 135304:
{
returnValue = F("Heckfelder Str.");
break;
}
case 135305:
{
returnValue = F("Heckfelderstr.");
break;
}
case 135306:
{
returnValue = F("Heckfeldstr.");
break;
}
case 135307:
{
returnValue = F("Heckgeist");
break;
}
case 135308:
{
returnValue = F("Heckgrabenweg");
break;
}
case 135309:
{
returnValue = F("Heckhalenfelder Str.");
break;
}
case 135310:
{
returnValue = F("Heckhalenfelder Weg");
break;
}
case 135311:
{
returnValue = F("Heckhaus");
break;
}
case 135312:
{
returnValue = F("Heckhof");
break;
}
case 135313:
{
returnValue = F("Heckhofweg");
break;
}
case 135314:
{
returnValue = F("Heckholzhäuser Str.");
break;
}
case 135315:
{
returnValue = F("Heckholzhäuser Weg");
break;
}
case 135316:
{
returnValue = F("Heckingsgarten");
break;
}
case 135317:
{
returnValue = F("Heckingstr.");
break;
}
case 135318:
{
returnValue = F("Heckkamp");
break;
}
case 135319:
{
returnValue = F("Heckkaten");
break;
}
case 135320:
{
returnValue = F("Heckleitenweg");
break;
}
case 135321:
{
returnValue = F("Hecklenbruch");
break;
}
case 135322:
{
returnValue = F("Hecklerweg");
break;
}
case 135323:
{
returnValue = F("Hecklestr.");
break;
}
case 135324:
{
returnValue = F("Hecklesweg");
break;
}
case 135325:
{
returnValue = F("Hecklinger Höhenweg");
break;
}
case 135326:
{
returnValue = F("Hecklinger Str.");
break;
}
case 135327:
{
returnValue = F("Hecklinger Weg");
break;
}
case 135328:
{
returnValue = F("Hecklingerweg");
break;
}
case 135329:
{
returnValue = F("Heckmanns Hof");
break;
}
case 135330:
{
returnValue = F("Heckmanns Kamp");
break;
}
case 135331:
{
returnValue = F("Heckmanns Weg");
break;
}
case 135332:
{
returnValue = F("Heckmanns Winkel");
break;
}
case 135333:
{
returnValue = F("Heckmannstr.");
break;
}
case 135334:
{
returnValue = F("Heckmannweg");
break;
}
case 135335:
{
returnValue = F("Heckmüllerweg");
break;
}
case 135336:
{
returnValue = F("Hecknerstr.");
break;
}
case 135337:
{
returnValue = F("Heckrathstr.");
break;
}
case 135338:
{
returnValue = F("Heckrosenstr.");
break;
}
case 135339:
{
returnValue = F("Hecksbergstr.");
break;
}
case 135340:
{
returnValue = F("Heckschenstr.");
break;
}
case 135341:
{
returnValue = F("Hecksel");
break;
}
case 135342:
{
returnValue = F("Heckstegstr.");
break;
}
case 135343:
{
returnValue = F("Heckstr.");
break;
}
case 135344:
{
returnValue = F("Heckstücke");
break;
}
case 135345:
{
returnValue = F("Hecksweg");
break;
}
case 135346:
{
returnValue = F("Hecktstr.");
break;
}
case 135347:
{
returnValue = F("Heckweg");
break;
}
case 135348:
{
returnValue = F("Heckwiese");
break;
}
case 135349:
{
returnValue = F("Heckwiesen");
break;
}
case 135350:
{
returnValue = F("Heckwiesenstr.");
break;
}
case 135351:
{
returnValue = F("Heckwiesenweg");
break;
}
case 135352:
{
returnValue = F("Heckäckerstr.");
break;
}
case 135353:
{
returnValue = F("Heckäckerweg");
break;
}
case 135354:
{
returnValue = F("Hector-Berlioz-Anlage");
break;
}
case 135355:
{
returnValue = F("Hector-Berlioz-Weg");
break;
}
case 135356:
{
returnValue = F("Hectorstr.");
break;
}
case 135357:
{
returnValue = F("Hedanstr.");
break;
}
case 135358:
{
returnValue = F("Hedchen");
break;
}
case 135359:
{
returnValue = F("Hedda-Zinner-Weg");
break;
}
case 135360:
{
returnValue = F("Hedda-Zirngibl-Str.");
break;
}
case 135361:
{
returnValue = F("Heddastr.");
break;
}
case 135362:
{
returnValue = F("Heddelbachweg");
break;
}
case 135363:
{
returnValue = F("Hedderhagen");
break;
}
case 135364:
{
returnValue = F("Hedderhagener Str.");
break;
}
case 135365:
{
returnValue = F("Heddernheimer Str.");
break;
}
case 135366:
{
returnValue = F("Heddersdorfer Str.");
break;
}
case 135367:
{
returnValue = F("Hedderweg");
break;
}
case 135368:
{
returnValue = F("Heddesbacher Str.");
break;
}
case 135369:
{
returnValue = F("Heddesbacher Weg");
break;
}
case 135370:
{
returnValue = F("Heddesbachweg");
break;
}
case 135371:
{
returnValue = F("Heddesdorfer Str.");
break;
}
case 135372:
{
returnValue = F("Heddesdorfstr.");
break;
}
case 135373:
{
returnValue = F("Heddesheimer Landstr.");
break;
}
case 135374:
{
returnValue = F("Heddesheimer Str.");
break;
}
case 135375:
{
returnValue = F("Heddesheimer Weg");
break;
}
case 135376:
{
returnValue = F("Heddigermarkstr.");
break;
}
case 135377:
{
returnValue = F("Heddinghauser Brücke");
break;
}
case 135378:
{
returnValue = F("Heddinghauser Str.");
break;
}
case 135379:
{
returnValue = F("Heddinghofen");
break;
}
case 135380:
{
returnValue = F("Heddinghofener Str.");
break;
}
case 135381:
{
returnValue = F("Heddinghovener Str.");
break;
}
case 135382:
{
returnValue = F("Heddinghäuser Str.");
break;
}
case 135383:
{
returnValue = F("Heddorf");
break;
}
case 135384:
{
returnValue = F("Heddostr.");
break;
}
case 135385:
{
returnValue = F("Hedeinweg");
break;
}
case 135386:
{
returnValue = F("Hedelfinger Str.");
break;
}
case 135387:
{
returnValue = F("Hedelnweg");
break;
}
case 135388:
{
returnValue = F("Hedemannweg");
break;
}
case 135389:
{
returnValue = F("Hedemer Dorfstr.");
break;
}
case 135390:
{
returnValue = F("Hedemer Str.");
break;
}
case 135391:
{
returnValue = F("Hedemündener Landstr.");
break;
}
case 135392:
{
returnValue = F("Hedemündener Str.");
break;
}
case 135393:
{
returnValue = F("Hedenholz");
break;
}
case 135394:
{
returnValue = F("Hedenkampstr.");
break;
}
case 135395:
{
returnValue = F("Hedenstr.");
break;
}
case 135396:
{
returnValue = F("Hedenusstr.");
break;
}
case 135397:
{
returnValue = F("Hedeper Weg");
break;
}
case 135398:
{
returnValue = F("Hederbornstr.");
break;
}
case 135399:
{
returnValue = F("Hedergasse");
break;
}
case 135400:
{
returnValue = F("Hederichsweg");
break;
}
case 135401:
{
returnValue = F("Hederichweg");
break;
}
case 135402:
{
returnValue = F("Hederkottenweg");
break;
}
case 135403:
{
returnValue = F("Hederner Str.");
break;
}
case 135404:
{
returnValue = F("Hedersdorfer Str.");
break;
}
case 135405:
{
returnValue = F("Hederslebener Str.");
break;
}
case 135406:
{
returnValue = F("Hederslebener Weg");
break;
}
case 135407:
{
returnValue = F("Hedertal");
break;
}
case 135408:
{
returnValue = F("Hedeweggen");
break;
}
case 135409:
{
returnValue = F("Hedgenstr.");
break;
}
case 135410:
{
returnValue = F("Hedgestr.");
break;
}
case 135411:
{
returnValue = F("Hedhofstr.");
break;
}
case 135412:
{
returnValue = F("Hedigenring");
break;
}
case 135413:
{
returnValue = F("Hedigenwai");
break;
}
case 135414:
{
returnValue = F("Hedinger Str.");
break;
}
case 135415:
{
returnValue = F("Hedingsen");
break;
}
case 135416:
{
returnValue = F("Hedingsener Feld");
break;
}
case 135417:
{
returnValue = F("Hedingsener Masch");
break;
}
case 135418:
{
returnValue = F("Hedinweg");
break;
}
case 135419:
{
returnValue = F("Hedlage");
break;
}
case 135420:
{
returnValue = F("Hedrazhofen");
break;
}
case 135421:
{
returnValue = F("Hedrichsdorf");
break;
}
case 135422:
{
returnValue = F("Hedsiepen");
break;
}
case 135423:
{
returnValue = F("Hedstr.");
break;
}
case 135424:
{
returnValue = F("Hedt");
break;
}
case 135425:
{
returnValue = F("Hedtbleck");
break;
}
case 135426:
{
returnValue = F("Hedtwigsweg");
break;
}
case 135427:
{
returnValue = F("Hedum");
break;
}
case 135428:
{
returnValue = F("Hedwig-Augustin-Str.");
break;
}
case 135429:
{
returnValue = F("Hedwig-Block-Str.");
break;
}
case 135430:
{
returnValue = F("Hedwig-Bollhagen-Str.");
break;
}
case 135431:
{
returnValue = F("Hedwig-Burgheim-Ring");
break;
}
case 135432:
{
returnValue = F("Hedwig-Danielewicz-Platz");
break;
}
case 135433:
{
returnValue = F("Hedwig-Dern-Str.");
break;
}
case 135434:
{
returnValue = F("Hedwig-Dietl-Str.");
break;
}
case 135435:
{
returnValue = F("Hedwig-Dohm-Str.");
break;
}
case 135436:
{
returnValue = F("Hedwig-Dohm-Weg");
break;
}
case 135437:
{
returnValue = F("Hedwig-Dransfeld-Str.");
break;
}
case 135438:
{
returnValue = F("Hedwig-Dransfeld-Weg");
break;
}
case 135439:
{
returnValue = F("Hedwig-Freese-Weg");
break;
}
case 135440:
{
returnValue = F("Hedwig-Gerke-Weg");
break;
}
case 135441:
{
returnValue = F("Hedwig-Gries-Str.");
break;
}
case 135442:
{
returnValue = F("Hedwig-Hübsch-Weg");
break;
}
case 135443:
{
returnValue = F("Hedwig-Jahnow-Str.");
break;
}
case 135444:
{
returnValue = F("Hedwig-Jochmus-Str.");
break;
}
case 135445:
{
returnValue = F("Hedwig-Kettler-Str.");
break;
}
case 135446:
{
returnValue = F("Hedwig-Kettler-Weg");
break;
}
case 135447:
{
returnValue = F("Hedwig-Kiesekamp-Str.");
break;
}
case 135448:
{
returnValue = F("Hedwig-Koch-Becker-Str.");
break;
}
case 135449:
{
returnValue = F("Hedwig-Kohn-Weg");
break;
}
case 135450:
{
returnValue = F("Hedwig-Kracht-Weg");
break;
}
case 135451:
{
returnValue = F("Hedwig-Kreutzfeldt-Weg");
break;
}
case 135452:
{
returnValue = F("Hedwig-Körling-Str.");
break;
}
case 135453:
{
returnValue = F("Hedwig-Lachmann-Weg");
break;
}
case 135454:
{
returnValue = F("Hedwig-Lange-Weg");
break;
}
case 135455:
{
returnValue = F("Hedwig-Leppert-Str.");
break;
}
case 135456:
{
returnValue = F("Hedwig-Marggraff-Str.");
break;
}
case 135457:
{
returnValue = F("Hedwig-Müller-Str.");
break;
}
case 135458:
{
returnValue = F("Hedwig-Riedel-Weg");
break;
}
case 135459:
{
returnValue = F("Hedwig-Schulz-Weg");
break;
}
case 135460:
{
returnValue = F("Hedwig-Siebert-Anlage");
break;
}
case 135461:
{
returnValue = F("Hedwig-Sophien-Weg");
break;
}
case 135462:
{
returnValue = F("Hedwig-Stalter-Str.");
break;
}
case 135463:
{
returnValue = F("Hedwig-Woermann-Weg");
break;
}
case 135464:
{
returnValue = F("Hedwig-von-Eyb-Str.");
break;
}
case 135465:
{
returnValue = F("Hedwig-von-Goetzen-Str.");
break;
}
case 135466:
{
returnValue = F("Hedwiga-Str.");
break;
}
case 135467:
{
returnValue = F("Hedwigenkooger Chaussee");
break;
}
case 135468:
{
returnValue = F("Hedwiggasse");
break;
}
case 135469:
{
returnValue = F("Hedwigplatz");
break;
}
case 135470:
{
returnValue = F("Hedwigpromenade");
break;
}
case 135471:
{
returnValue = F("Hedwigsbrunnenweg");
break;
}
case 135472:
{
returnValue = F("Hedwigschachtstr.");
break;
}
case 135473:
{
returnValue = F("Hedwigsgärten");
break;
}
case 135474:
{
returnValue = F("Hedwigshof");
break;
}
case 135475:
{
returnValue = F("Hedwigsplatz");
break;
}
case 135476:
{
returnValue = F("Hedwigsruh");
break;
}
case 135477:
{
returnValue = F("Hedwigsruhweg");
break;
}
case 135478:
{
returnValue = F("Hedwigstr.");
break;
}
case 135479:
{
returnValue = F("Hedwigsweg");
break;
}
case 135480:
{
returnValue = F("Hedwigweg");
break;
}
case 135481:
{
returnValue = F("Hedy-Lamarr-Platz");
break;
}
case 135482:
{
returnValue = F("Heedbrink");
break;
}
case 135483:
{
returnValue = F("Heedelbeerschneise");
break;
}
case 135484:
{
returnValue = F("Heedeleitenweg");
break;
}
case 135485:
{
returnValue = F("Heeder Damm");
break;
}
case 135486:
{
returnValue = F("Heeder Dorfstr.");
break;
}
case 135487:
{
returnValue = F("Heeder Gartenstr.");
break;
}
case 135488:
{
returnValue = F("Heeder Kirchweg");
break;
}
case 135489:
{
returnValue = F("Heeder Ring");
break;
}
case 135490:
{
returnValue = F("Heeder Str.");
break;
}
case 135491:
{
returnValue = F("Heeder Triftweg");
break;
}
case 135492:
{
returnValue = F("Heederbrook");
break;
}
case 135493:
{
returnValue = F("Heedestr.");
break;
}
case 135494:
{
returnValue = F("Heedfeld");
break;
}
case 135495:
{
returnValue = F("Heedfelder Landstr.");
break;
}
case 135496:
{
returnValue = F("Heedfelder Str.");
break;
}
case 135497:
{
returnValue = F("Heedheide");
break;
}
case 135498:
{
returnValue = F("Heedland");
break;
}
case 135499:
{
returnValue = F("Heedweg");
break;
}
case 135500:
{
returnValue = F("Heefstegelk");
break;
}
case 135501:
{
returnValue = F("Heefwai");
break;
}
case 135502:
{
returnValue = F("Heeg");
break;
}
case 135503:
{
returnValue = F("Heeg-Schneise");
break;
}
case 135504:
{
returnValue = F("Heegacker");
break;
}
case 135505:
{
returnValue = F("Heegblick");
break;
}
case 135506:
{
returnValue = F("Heege");
break;
}
case 135507:
{
returnValue = F("Heegegartenstr.");
break;
}
case 135508:
{
returnValue = F("Heegegraser Weg");
break;
}
case 135509:
{
returnValue = F("Heegeholz");
break;
}
case 135510:
{
returnValue = F("Heegenring");
break;
}
case 135511:
{
returnValue = F("Heegenweg");
break;
}
case 135512:
{
returnValue = F("Heeger Str.");
break;
}
case 135513:
{
returnValue = F("Heegerbruchstr.");
break;
}
case 135514:
{
returnValue = F("Heegermühler Schleuse");
break;
}
case 135515:
{
returnValue = F("Heegermühler Str.");
break;
}
case 135516:
{
returnValue = F("Heegerstr.");
break;
}
case 135517:
{
returnValue = F("Heegerweg");
break;
}
case 135518:
{
returnValue = F("Heegeschneise");
break;
}
case 135519:
{
returnValue = F("Heegestr.");
break;
}
case 135520:
{
returnValue = F("Heeggasse");
break;
}
case 135521:
{
returnValue = F("Heeggraben");
break;
}
case 135522:
{
returnValue = F("Heegheimer Str.");
break;
}
case 135523:
{
returnValue = F("Heegholzstr.");
break;
}
case 135524:
{
returnValue = F("Heegkopfstr.");
break;
}
case 135525:
{
returnValue = F("Heegstr.");
break;
}
case 135526:
{
returnValue = F("Heegstrauchweg");
break;
}
case 135527:
{
returnValue = F("Heegteilstr.");
break;
}
case 135528:
{
returnValue = F("Heegwaldpark");
break;
}
case 135529:
{
returnValue = F("Heegwaldring");
break;
}
case 135530:
{
returnValue = F("Heegwaldstr.");
break;
}
case 135531:
{
returnValue = F("Heegweg");
break;
}
case 135532:
{
returnValue = F("Heegweide");
break;
}
case 135533:
{
returnValue = F("Heegwiesenschneise");
break;
}
case 135534:
{
returnValue = F("Heeker Esch");
break;
}
case 135535:
{
returnValue = F("Heeker Str.");
break;
}
case 135536:
{
returnValue = F("Heekeweg");
break;
}
case 135537:
{
returnValue = F("Heelsen");
break;
}
case 135538:
{
returnValue = F("Heelsener Kirchweg");
break;
}
case 135539:
{
returnValue = F("Heelsener Str.");
break;
}
case 135540:
{
returnValue = F("Heelstr.");
break;
}
case 135541:
{
returnValue = F("Heelweg");
break;
}
case 135542:
{
returnValue = F("Heemannshügel");
break;
}
case 135543:
{
returnValue = F("Heemark");
break;
}
case 135544:
{
returnValue = F("Heembrücke");
break;
}
case 135545:
{
returnValue = F("Heemeiers Hof");
break;
}
case 135546:
{
returnValue = F("Heemke");
break;
}
case 135547:
{
returnValue = F("Heemstr.");
break;
}
case 135548:
{
returnValue = F("Heeneser Weg");
break;
}
case 135549:
{
returnValue = F("Heenfeld");
break;
}
case 135550:
{
returnValue = F("Heepengasse");
break;
}
case 135551:
{
returnValue = F("Heeper Gässchen");
break;
}
case 135552:
{
returnValue = F("Heeper Str.");
break;
}
case 135553:
{
returnValue = F("Heer-Str.");
break;
}
case 135554:
{
returnValue = F("Heeracker");
break;
}
case 135555:
{
returnValue = F("Heerbahn");
break;
}
case 135556:
{
returnValue = F("Heerbeet");
break;
}
case 135557:
{
returnValue = F("Heerberg");
break;
}
case 135558:
{
returnValue = F("Heerbergstr.");
break;
}
case 135559:
{
returnValue = F("Heerbergsweg");
break;
}
case 135560:
{
returnValue = F("Heerbrandstr.");
break;
}
case 135561:
{
returnValue = F("Heerbrink");
break;
}
case 135562:
{
returnValue = F("Heerbruch");
break;
}
case 135563:
{
returnValue = F("Heerburg");
break;
}
case 135564:
{
returnValue = F("Heerdamm");
break;
}
case 135565:
{
returnValue = F("Heerde");
break;
}
case 135566:
{
returnValue = F("Heerder Hohl");
break;
}
case 135567:
{
returnValue = F("Heerder Str.");
break;
}
case 135568:
{
returnValue = F("Heerder Weg");
break;
}
case 135569:
{
returnValue = F("Heerderstr.");
break;
}
case 135570:
{
returnValue = F("Heerdestieg");
break;
}
case 135571:
{
returnValue = F("Heerdgaßweg");
break;
}
case 135572:
{
returnValue = F("Heerdiekstr.");
break;
}
case 135573:
{
returnValue = F("Heerdter Str.");
break;
}
case 135574:
{
returnValue = F("Heerdterbuschstr.");
break;
}
case 135575:
{
returnValue = F("Heerdweg");
break;
}
case 135576:
{
returnValue = F("Heeregrass");
break;
}
case 135577:
{
returnValue = F("Heerenborgweg");
break;
}
case 135578:
{
returnValue = F("Heerendiek");
break;
}
case 135579:
{
returnValue = F("Heerener Str.");
break;
}
case 135580:
{
returnValue = F("Heerener Weg");
break;
}
case 135581:
{
returnValue = F("Heerenfeld");
break;
}
case 135582:
{
returnValue = F("Heerenfelde");
break;
}
case 135583:
{
returnValue = F("Heerenhusdünen");
break;
}
case 135584:
{
returnValue = F("Heerenhusstr.");
break;
}
case 135585:
{
returnValue = F("Heerenkamp");
break;
}
case 135586:
{
returnValue = F("Heerenskamp");
break;
}
case 135587:
{
returnValue = F("Heerenstr.");
break;
}
case 135588:
{
returnValue = F("Heerentein");
break;
}
case 135589:
{
returnValue = F("Heerenweg");
break;
}
case 135590:
{
returnValue = F("Heerer Str.");
break;
}
case 135591:
{
returnValue = F("Heerer Tor");
break;
}
case 135592:
{
returnValue = F("Heeresbergstr.");
break;
}
case 135593:
{
returnValue = F("Heereskamp");
break;
}
case 135594:
{
returnValue = F("Heeressiedlung");
break;
}
case 135595:
{
returnValue = F("Heeresstr.");
break;
}
case 135596:
{
returnValue = F("Heerestr.");
break;
}
case 135597:
{
returnValue = F("Heereweg");
break;
}
case 135598:
{
returnValue = F("Heerfahrt");
break;
}
case 135599:
{
returnValue = F("Heerfeldstr.");
break;
}
case 135600:
{
returnValue = F("Heerfleckenstr.");
break;
}
case 135601:
{
returnValue = F("Heergartenweg");
break;
}
case 135602:
{
returnValue = F("Heergasse");
break;
}
case 135603:
{
returnValue = F("Heergraben");
break;
}
case 135604:
{
returnValue = F("Heergäßle");
break;
}
case 135605:
{
returnValue = F("Heerhof");
break;
}
case 135606:
{
returnValue = F("Heerhoff");
break;
}
case 135607:
{
returnValue = F("Heerhopweg");
break;
}
case 135608:
{
returnValue = F("Heerhorststr.");
break;
}
case 135609:
{
returnValue = F("Heeringgasse");
break;
}
case 135610:
{
returnValue = F("Heeritaweg");
break;
}
case 135611:
{
returnValue = F("Heerklinke");
break;
}
case 135612:
{
returnValue = F("Heerlener Str.");
break;
}
case 135613:
{
returnValue = F("Heerloge");
break;
}
case 135614:
{
returnValue = F("Heermannstr.");
break;
}
case 135615:
{
returnValue = F("Heermannsweg");
break;
}
case 135616:
{
returnValue = F("Heermoorweg");
break;
}
case 135617:
{
returnValue = F("Heerringstr.");
break;
}
case 135618:
{
returnValue = F("Heersbergstr.");
break;
}
case 135619:
{
returnValue = F("Heerschlade");
break;
}
case 135620:
{
returnValue = F("Heerser Aller");
break;
}
case 135621:
{
returnValue = F("Heerser Weg");
break;
}
case 135622:
{
returnValue = F("Heerserheider Str.");
break;
}
case 135623:
{
returnValue = F("Heershang");
break;
}
case 135624:
{
returnValue = F("Heershoop");
break;
}
case 135625:
{
returnValue = F("Heersiek");
break;
}
case 135626:
{
returnValue = F("Heersiekweg");
break;
}
case 135627:
{
returnValue = F("Heerspinkweg");
break;
}
case 135628:
{
returnValue = F("Heerstall");
break;
}
case 135629:
{
returnValue = F("Heerstedter Str.");
break;
}
case 135630:
{
returnValue = F("Heersteig");
break;
}
case 135631:
{
returnValue = F("Heerstieg");
break;
}
case 135632:
{
returnValue = F("Heerstr.");
break;
}
case 135633:
{
returnValue = F("Heersumer Str.");
break;
}
case 135634:
{
returnValue = F("Heertekamp");
break;
}
case 135635:
{
returnValue = F("Heerter Str.");
break;
}
case 135636:
{
returnValue = F("Heertorstr.");
break;
}
case 135637:
{
returnValue = F("Heerwasenstr.");
break;
}
case 135638:
{
returnValue = F("Heerweg");
break;
}
case 135639:
{
returnValue = F("Heerweger Moor");
break;
}
case 135640:
{
returnValue = F("Heerweghof");
break;
}
case 135641:
{
returnValue = F("Heerwegstr.");
break;
}
case 135642:
{
returnValue = F("Heerwieser Weg");
break;
}
case 135643:
{
returnValue = F("Heerwinkel");
break;
}
case 135644:
{
returnValue = F("Heeräckerstr.");
break;
}
case 135645:
{
returnValue = F("Hees");
break;
}
case 135646:
{
returnValue = F("Heesberg");
break;
}
case 135647:
{
returnValue = F("Heescheck");
break;
}
case 135648:
{
returnValue = F("Heeschenberg von 1789");
break;
}
case 135649:
{
returnValue = F("Heeschstr.");
break;
}
case 135650:
{
returnValue = F("Heeschweg");
break;
}
case 135651:
{
returnValue = F("Heese");
break;
}
case 135652:
{
returnValue = F("Heeseblick");
break;
}
case 135653:
{
returnValue = F("Heesefeld");
break;
}
case 135654:
{
returnValue = F("Heeseker Weg");
break;
}
case 135655:
{
returnValue = F("Heesekerweg");
break;
}
case 135656:
{
returnValue = F("Heeseloh");
break;
}
case 135657:
{
returnValue = F("Heesen");
break;
}
case 135658:
{
returnValue = F("Heesenstr.");
break;
}
case 135659:
{
returnValue = F("Heesenweg");
break;
}
case 135660:
{
returnValue = F("Heeseplatz");
break;
}
case 135661:
{
returnValue = F("Heeser");
break;
}
case 135662:
{
returnValue = F("Heeser Weg");
break;
}
case 135663:
{
returnValue = F("Heeserhofstr.");
break;
}
case 135664:
{
returnValue = F("Heeserstr.");
break;
}
case 135665:
{
returnValue = F("Heeseweg");
break;
}
case 135666:
{
returnValue = F("Heesewinkel");
break;
}
case 135667:
{
returnValue = F("Heesfeld");
break;
}
case 135668:
{
returnValue = F("Heesfelder Mühle");
break;
}
case 135669:
{
returnValue = F("Heeshughwai");
break;
}
case 135670:
{
returnValue = F("Heeskamp");
break;
}
case 135671:
{
returnValue = F("Heeskepad");
break;
}
case 135672:
{
returnValue = F("Heeslinger Str.");
break;
}
case 135673:
{
returnValue = F("Heessels Höhe");
break;
}
case 135674:
{
returnValue = F("Heessener Str.");
break;
}
case 135675:
{
returnValue = F("Heesstr.");
break;
}
case 135676:
{
returnValue = F("Heestalhof");
break;
}
case 135677:
{
returnValue = F("Heestalstr.");
break;
}
case 135678:
{
returnValue = F("Heestener Str.");
break;
}
case 135679:
{
returnValue = F("Heester Stegge");
break;
}
case 135680:
{
returnValue = F("Heester Wall");
break;
}
case 135681:
{
returnValue = F("Heesterbusch");
break;
}
case 135682:
{
returnValue = F("Heesterhof");
break;
}
case 135683:
{
returnValue = F("Heesterngrund");
break;
}
case 135684:
{
returnValue = F("Heesternweg");
break;
}
case 135685:
{
returnValue = F("Heesterstr.");
break;
}
case 135686:
{
returnValue = F("Heesterter Str.");
break;
}
case 135687:
{
returnValue = F("Heesweg");
break;
}
case 135688:
{
returnValue = F("Heetbarg");
break;
}
case 135689:
{
returnValue = F("Heetestr.");
break;
}
case 135690:
{
returnValue = F("Heetkampstr.");
break;
}
case 135691:
{
returnValue = F("Heetmannstr.");
break;
}
case 135692:
{
returnValue = F("Heetweg");
break;
}
case 135693:
{
returnValue = F("Heewerkuugswai");
break;
}
case 135694:
{
returnValue = F("Heezenweg");
break;
}
case 135695:
{
returnValue = F("Heeßeler Damm");
break;
}
case 135696:
{
returnValue = F("Heeßeler Kirchweg");
break;
}
case 135697:
{
returnValue = F("Heeßeler Str.");
break;
}
case 135698:
{
returnValue = F("Heeßeler Trift");
break;
}
case 135699:
{
returnValue = F("Hefe");
break;
}
case 135700:
{
returnValue = F("Hefegasse");
break;
}
case 135701:
{
returnValue = F("Hefel");
break;
}
case 135702:
{
returnValue = F("Hefeler Str.");
break;
}
case 135703:
{
returnValue = F("Hefelestr.");
break;
}
case 135704:
{
returnValue = F("Hefelmann-Park");
break;
}
case 135705:
{
returnValue = F("Hefendehl");
break;
}
case 135706:
{
returnValue = F("Hefengasse");
break;
}
case 135707:
{
returnValue = F("Hefersweiler Str.");
break;
}
case 135708:
{
returnValue = F("Hefestr.");
break;
}
case 135709:
{
returnValue = F("Heffdammstr.");
break;
}
case 135710:
{
returnValue = F("Heffiweg");
break;
}
case 135711:
{
returnValue = F("Heffterstr.");
break;
}
case 135712:
{
returnValue = F("Hefner-Alteneck-Str.");
break;
}
case 135713:
{
returnValue = F("Hefragstr.");
break;
}
case 135714:
{
returnValue = F("Heft");
break;
}
case 135715:
{
returnValue = F("Hefte-Sandweg");
break;
}
case 135716:
{
returnValue = F("Heftensteige");
break;
}
case 135717:
{
returnValue = F("Hefterstr.");
break;
}
case 135718:
{
returnValue = F("Hefterweg");
break;
}
case 135719:
{
returnValue = F("Heftigweg");
break;
}
case 135720:
{
returnValue = F("Heftricher Str.");
break;
}
case 135721:
{
returnValue = F("Heftricher Weg");
break;
}
case 135722:
{
returnValue = F("Heftstedenweg");
break;
}
case 135723:
{
returnValue = F("Heg-Schneise");
break;
}
case 135724:
{
returnValue = F("Hegacker");
break;
}
case 135725:
{
returnValue = F("Hegarweg");
break;
}
case 135726:
{
returnValue = F("Hegaublick");
break;
}
case 135727:
{
returnValue = F("Hegauer Str.");
break;
}
case 135728:
{
returnValue = F("Hegauring");
break;
}
case 135729:
{
returnValue = F("Hegaustr.");
break;
}
case 135730:
{
returnValue = F("Hegauweg");
break;
}
case 135731:
{
returnValue = F("Hegbachweg");
break;
}
case 135732:
{
returnValue = F("Hegberg");
break;
}
case 135733:
{
returnValue = F("Hegberger Hof");
break;
}
case 135734:
{
returnValue = F("Hegdfeld");
break;
}
case 135735:
{
returnValue = F("Hege");
break;
}
case 135736:
{
returnValue = F("Hegebachweg");
break;
}
case 135737:
{
returnValue = F("Hegeberg");
break;
}
case 135738:
{
returnValue = F("Hegebergstr.");
break;
}
case 135739:
{
returnValue = F("Hegebergweg");
break;
}
case 135740:
{
returnValue = F("Hegebrockstr.");
break;
}
case 135741:
{
returnValue = F("Hegebuchenbusch");
break;
}
case 135742:
{
returnValue = F("Hegebuchenbuscher Weg");
break;
}
case 135743:
{
returnValue = F("Hegebusch");
break;
}
case 135744:
{
returnValue = F("Hegebyemoor");
break;
}
case 135745:
{
returnValue = F("Hegefeld");
break;
}
case 135746:
{
returnValue = F("Hegegasse");
break;
}
case 135747:
{
returnValue = F("Hegeholz");
break;
}
case 135748:
{
returnValue = F("Hegelallee");
break;
}
case 135749:
{
returnValue = F("Hegelau");
break;
}
case 135750:
{
returnValue = F("Hegelbachweg");
break;
}
case 135751:
{
returnValue = F("Hegelbruch Schneise");
break;
}
case 135752:
{
returnValue = F("Hegeler Damm");
break;
}
case 135753:
{
returnValue = F("Hegeler-Wald-Str.");
break;
}
case 135754:
{
returnValue = F("Hegelerstr.");
break;
}
case 135755:
{
returnValue = F("Hegelhofer Str.");
break;
}
case 135756:
{
returnValue = F("Hegelohe");
break;
}
case 135757:
{
returnValue = F("Hegelplatz");
break;
}
case 135758:
{
returnValue = F("Hegelpromenade");
break;
}
case 135759:
{
returnValue = F("Hegelring");
break;
}
case 135760:
{
returnValue = F("Hegelstr.");
break;
}
case 135761:
{
returnValue = F("Hegelweg");
break;
}
case 135762:
{
returnValue = F("Hegemalweg");
break;
}
case 135763:
{
returnValue = F("Hegemannstr.");
break;
}
case 135764:
{
returnValue = F("Hegemannsweg");
break;
}
case 135765:
{
returnValue = F("Hegemannweg");
break;
}
case 135766:
{
returnValue = F("Hegemaxweg");
break;
}
case 135767:
{
returnValue = F("Hegemeister-Bergmann-Weg");
break;
}
case 135768:
{
returnValue = F("Hegemeisterring");
break;
}
case 135769:
{
returnValue = F("Hegemeisterweg");
break;
}
case 135770:
{
returnValue = F("Hegenach");
break;
}
case 135771:
{
returnValue = F("Hegenacher Weg");
break;
}
case 135772:
{
returnValue = F("Hegenachstr.");
break;
}
case 135773:
{
returnValue = F("Hegenachweg");
break;
}
case 135774:
{
returnValue = F("Hegenauerstr.");
break;
}
case 135775:
{
returnValue = F("Hegenbarthstr.");
break;
}
case 135776:
{
returnValue = F("Hegenberg");
break;
}
case 135777:
{
returnValue = F("Hegenbergstr.");
break;
}
case 135778:
{
returnValue = F("Hegenbrede");
break;
}
case 135779:
{
returnValue = F("Hegendorf");
break;
}
case 135780:
{
returnValue = F("Hegenenstr.");
break;
}
case 135781:
{
returnValue = F("Hegeners Feld");
break;
}
case 135782:
{
returnValue = F("Hegenerstr.");
break;
}
case 135783:
{
returnValue = F("Hegengasse");
break;
}
case 135784:
{
returnValue = F("Hegenhausen");
break;
}
case 135785:
{
returnValue = F("Hegenheimer Str.");
break;
}
case 135786:
{
returnValue = F("Hegenhoff");
break;
}
case 135787:
{
returnValue = F("Hegenholt");
break;
}
case 135788:
{
returnValue = F("Hegenichstr.");
break;
}
case 135789:
{
returnValue = F("Hegenichweg");
break;
}
case 135790:
{
returnValue = F("Hegenkamp");
break;
}
case 135791:
{
returnValue = F("Hegenloher Gasse");
break;
}
case 135792:
{
returnValue = F("Hegenloher Str.");
break;
}
case 135793:
{
returnValue = F("Hegenredder");
break;
}
case 135794:
{
returnValue = F("Hegenreute");
break;
}
case 135795:
{
returnValue = F("Hegensberger Str.");
break;
}
case 135796:
{
returnValue = F("Hegenscheider Str.");
break;
}
case 135797:
{
returnValue = F("Hegenscheider Weg");
break;
}
case 135798:
{
returnValue = F("Hegensdorferweg");
break;
}
case 135799:
{
returnValue = F("Hegenstr.");
break;
}
case 135800:
{
returnValue = F("Hegenweg");
break;
}
case 135801:
{
returnValue = F("Hegenwettengasse");
break;
}
case 135802:
{
returnValue = F("Hegerade");
break;
}
case 135803:
{
returnValue = F("Hegerainweg");
break;
}
case 135804:
{
returnValue = F("Hegerathsweg");
break;
}
case 135805:
{
returnValue = F("Hegereiterweg");
break;
}
case 135806:
{
returnValue = F("Hegerfeldstr.");
break;
}
case 135807:
{
returnValue = F("Hegerhoffstr.");
break;
}
case 135808:
{
returnValue = F("Hegering");
break;
}
case 135809:
{
returnValue = F("Hegermühlenstr.");
break;
}
case 135810:
{
returnValue = F("Hegerort");
break;
}
case 135811:
{
returnValue = F("Hegerothsweg");
break;
}
case 135812:
{
returnValue = F("Hegerpfad");
break;
}
case 135813:
{
returnValue = F("Hegerplatz");
break;
}
case 135814:
{
returnValue = F("Hegersgarten");
break;
}
case 135815:
{
returnValue = F("Hegersteig");
break;
}
case 135816:
{
returnValue = F("Hegerstieg");
break;
}
case 135817:
{
returnValue = F("Hegerstr.");
break;
}
case 135818:
{
returnValue = F("Hegersweg");
break;
}
case 135819:
{
returnValue = F("Hegertempel");
break;
}
case 135820:
{
returnValue = F("Hegerturmstr.");
break;
}
case 135821:
{
returnValue = F("Hegerweg");
break;
}
case 135822:
{
returnValue = F("Hegerwisch");
break;
}
case 135823:
{
returnValue = F("Hegerütteweg");
break;
}
case 135824:
{
returnValue = F("Heges");
break;
}
case 135825:
{
returnValue = F("Hegesahl");
break;
}
case 135826:
{
returnValue = F("Hegeseeweg");
break;
}
case 135827:
{
returnValue = F("Hegesstr.");
break;
}
case 135828:
{
returnValue = F("Hegestr.");
break;
}
case 135829:
{
returnValue = F("Hegestück");
break;
}
case 135830:
{
returnValue = F("Hegeweg");
break;
}
case 135831:
{
returnValue = F("Hegewiese");
break;
}
case 135832:
{
returnValue = F("Hegewinkel");
break;
}
case 135833:
{
returnValue = F("Hegewischstr.");
break;
}
case 135834:
{
returnValue = F("Heggbacher Str.");
break;
}
case 135835:
{
returnValue = F("Heggbacher Weg");
break;
}
case 135836:
{
returnValue = F("Hegge");
break;
}
case 135837:
{
returnValue = F("Heggebusch");
break;
}
case 135838:
{
returnValue = F("Heggehof");
break;
}
case 135839:
{
returnValue = F("Heggelbach");
break;
}
case 135840:
{
returnValue = F("Heggelbacher Str.");
break;
}
case 135841:
{
returnValue = F("Heggelinstr.");
break;
}
case 135842:
{
returnValue = F("Heggen");
break;
}
case 135843:
{
returnValue = F("Heggenberg");
break;
}
case 135844:
{
returnValue = F("Heggener Str.");
break;
}
case 135845:
{
returnValue = F("Heggener Weg");
break;
}
case 135846:
{
returnValue = F("Heggenkamp");
break;
}
case 135847:
{
returnValue = F("Heggenkath");
break;
}
case 135848:
{
returnValue = F("Heggenpatt");
break;
}
case 135849:
{
returnValue = F("Heggenstr.");
break;
}
case 135850:
{
returnValue = F("Heggenweg");
break;
}
case 135851:
{
returnValue = F("Heggestr.");
break;
}
case 135852:
{
returnValue = F("Heggeweg");
break;
}
case 135853:
{
returnValue = F("Heggrabenstr.");
break;
}
case 135854:
{
returnValue = F("Heggrundschneise");
break;
}
case 135855:
{
returnValue = F("Heggässle");
break;
}
case 135856:
{
returnValue = F("Hegholz");
break;
}
case 135857:
{
returnValue = F("Hegisstr.");
break;
}
case 135858:
{
returnValue = F("Hegistr.");
break;
}
case 135859:
{
returnValue = F("Hegisweg");
break;
}
case 135860:
{
returnValue = F("Hegiusstr.");
break;
}
case 135861:
{
returnValue = F("Heglache");
break;
}
case 135862:
{
returnValue = F("Heglachweg");
break;
}
case 135863:
{
returnValue = F("Heglerstr.");
break;
}
case 135864:
{
returnValue = F("Heglestr.");
break;
}
case 135865:
{
returnValue = F("Heglitzer Str.");
break;
}
case 135866:
{
returnValue = F("Hegmannshohle");
break;
}
case 135867:
{
returnValue = F("Hegmühlweg");
break;
}
case 135868:
{
returnValue = F("Hegnabrunn");
break;
}
case 135869:
{
returnValue = F("Hegnach");
break;
}
case 135870:
{
returnValue = F("Hegnacher Höhe");
break;
}
case 135871:
{
returnValue = F("Hegnacher Str.");
break;
}
case 135872:
{
returnValue = F("Hegnachweg");
break;
}
case 135873:
{
returnValue = F("Hegnauhof");
break;
}
case 135874:
{
returnValue = F("Hegnauweg");
break;
}
case 135875:
{
returnValue = F("Hegneberg");
break;
}
case 135876:
{
returnValue = F("Hegnenbacher Str.");
break;
}
case 135877:
{
returnValue = F("Hegnenbergstr.");
break;
}
case 135878:
{
returnValue = F("Hegner Str.");
break;
}
case 135879:
{
returnValue = F("Hegner-Schwestern-Weg");
break;
}
case 135880:
{
returnValue = F("Hegnerstr.");
break;
}
case 135881:
{
returnValue = F("Hegnerweg");
break;
}
case 135882:
{
returnValue = F("Hegnestr.");
break;
}
case 135883:
{
returnValue = F("Hegnichweg");
break;
}
case 135884:
{
returnValue = F("Hegrade");
break;
}
case 135885:
{
returnValue = F("Hegselweg");
break;
}
case 135886:
{
returnValue = F("Hegstr.");
break;
}
case 135887:
{
returnValue = F("Hegstrauch");
break;
}
case 135888:
{
returnValue = F("Hegwaldstr.");
break;
}
case 135889:
{
returnValue = F("Hegwaldweg");
break;
}
case 135890:
{
returnValue = F("Hegweg");
break;
}
case 135891:
{
returnValue = F("Hegwiesenstr.");
break;
}
case 135892:
{
returnValue = F("Hegäckerstr.");
break;
}
case 135893:
{
returnValue = F("Heheland");
break;
}
case 135894:
{
returnValue = F("Hehenberg");
break;
}
case 135895:
{
returnValue = F("Hehenbruchsweg");
break;
}
case 135896:
{
returnValue = F("Hehl");
break;
}
case 135897:
{
returnValue = F("Hehlbergweg nb");
break;
}
case 135898:
{
returnValue = F("Hehlenbruchweg");
break;
}
case 135899:
{
returnValue = F("Hehlener Str.");
break;
}
case 135900:
{
returnValue = F("Hehlenkamp");
break;
}
case 135901:
{
returnValue = F("Hehlensloh");
break;
}
case 135902:
{
returnValue = F("Hehlentorfriedhof Ost");
break;
}
case 135903:
{
returnValue = F("Hehlentorfriedhof West");
break;
}
case 135904:
{
returnValue = F("Hehlentorstr.");
break;
}
case 135905:
{
returnValue = F("Hehler");
break;
}
case 135906:
{
returnValue = F("Hehler Feld");
break;
}
case 135907:
{
returnValue = F("Hehler-Bahn");
break;
}
case 135908:
{
returnValue = F("Hehlertstr.");
break;
}
case 135909:
{
returnValue = F("Hehlestr.");
break;
}
case 135910:
{
returnValue = F("Hehlinger Hof");
break;
}
case 135911:
{
returnValue = F("Hehlinger Str.");
break;
}
case 135912:
{
returnValue = F("Hehlinger Wiesen");
break;
}
case 135913:
{
returnValue = F("Hehlingsgrund");
break;
}
case 135914:
{
returnValue = F("Hehlrather Str.");
break;
}
case 135915:
{
returnValue = F("Hehlweg");
break;
}
case 135916:
{
returnValue = F("Hehlwiese");
break;
}
case 135917:
{
returnValue = F("Hehn");
break;
}
case 135918:
{
returnValue = F("Hehner Str.");
break;
}
case 135919:
{
returnValue = F("Hehnerholt");
break;
}
case 135920:
{
returnValue = F("Hehnerstr.");
break;
}
case 135921:
{
returnValue = F("Hehnkamp");
break;
}
case 135922:
{
returnValue = F("Hehnsgasse");
break;
}
case 135923:
{
returnValue = F("Hehnstr.");
break;
}
case 135924:
{
returnValue = F("Hehrenwiese");
break;
}
case 135925:
{
returnValue = F("Heibach");
break;
}
case 135926:
{
returnValue = F("Heibachstr.");
break;
}
case 135927:
{
returnValue = F("Heibachäcker");
break;
}
case 135928:
{
returnValue = F("Heibargsredder");
break;
}
case 135929:
{
returnValue = F("Heibeck");
break;
}
case 135930:
{
returnValue = F("Heibeckstr.");
break;
}
case 135931:
{
returnValue = F("Heibelrichtweg");
break;
}
case 135932:
{
returnValue = F("Heibelser Weg");
break;
}
case 135933:
{
returnValue = F("Heiberbühlweg");
break;
}
case 135934:
{
returnValue = F("Heiblhub");
break;
}
case 135935:
{
returnValue = F("Heibrainweg");
break;
}
case 135936:
{
returnValue = F("Heibrede");
break;
}
case 135937:
{
returnValue = F("Heibrink");
break;
}
case 135938:
{
returnValue = F("Heichelheimer Gasse");
break;
}
case 135939:
{
returnValue = F("Heichelheimer Hauptstr.");
break;
}
case 135940:
{
returnValue = F("Heichelheimer Weg");
break;
}
case 135941:
{
returnValue = F("Heid");
break;
}
case 135942:
{
returnValue = F("Heid-Wiesen-Schneise");
break;
}
case 135943:
{
returnValue = F("Heidachstr.");
break;
}
case 135944:
{
returnValue = F("Heidacker");
break;
}
case 135945:
{
returnValue = F("Heidackerskamp");
break;
}
case 135946:
{
returnValue = F("Heidackerstr.");
break;
}
case 135947:
{
returnValue = F("Heidackerweg");
break;
}
case 135948:
{
returnValue = F("Heidaustr.");
break;
}
case 135949:
{
returnValue = F("Heidbachstr.");
break;
}
case 135950:
{
returnValue = F("Heidbarg");
break;
}
case 135951:
{
returnValue = F("Heidbecker Damm");
break;
}
case 135952:
{
returnValue = F("Heidbecker Weg");
break;
}
case 135953:
{
returnValue = F("Heidbecksweg");
break;
}
case 135954:
{
returnValue = F("Heidbendenstr.");
break;
}
case 135955:
{
returnValue = F("Heidberg");
break;
}
case 135956:
{
returnValue = F("Heidberg Weg");
break;
}
case 135957:
{
returnValue = F("Heidbergblick");
break;
}
case 135958:
{
returnValue = F("Heidbergbrücke");
break;
}
case 135959:
{
returnValue = F("Heidberge");
break;
}
case 135960:
{
returnValue = F("Heidberger Hof");
break;
}
case 135961:
{
returnValue = F("Heidberger Schweiz");
break;
}
case 135962:
{
returnValue = F("Heidberger Str.");
break;
}
case 135963:
{
returnValue = F("Heidbergkehre");
break;
}
case 135964:
{
returnValue = F("Heidbergredder");
break;
}
case 135965:
{
returnValue = F("Heidbergsallee");
break;
}
case 135966:
{
returnValue = F("Heidbergstr.");
break;
}
case 135967:
{
returnValue = F("Heidbergstrift");
break;
}
case 135968:
{
returnValue = F("Heidbergsweg");
break;
}
case 135969:
{
returnValue = F("Heidbergswiese");
break;
}
case 135970:
{
returnValue = F("Heidbergweg");
break;
}
case 135971:
{
returnValue = F("Heidbergwinkel");
break;
}
case 135972:
{
returnValue = F("Heidbirket");
break;
}
case 135973:
{
returnValue = F("Heidbleken");
break;
}
case 135974:
{
returnValue = F("Heidblekweg");
break;
}
case 135975:
{
returnValue = F("Heidblink");
break;
}
case 135976:
{
returnValue = F("Heidblock");
break;
}
case 135977:
{
returnValue = F("Heidblöcke");
break;
}
case 135978:
{
returnValue = F("Heidblöße");
break;
}
case 135979:
{
returnValue = F("Heidbraake");
break;
}
case 135980:
{
returnValue = F("Heidbrache");
break;
}
case 135981:
{
returnValue = F("Heidbrede");
break;
}
case 135982:
{
returnValue = F("Heidbredenweg");
break;
}
case 135983:
{
returnValue = F("Heidbreder Weg");
break;
}
case 135984:
{
returnValue = F("Heidbreede");
break;
}
case 135985:
{
returnValue = F("Heidbreeden");
break;
}
case 135986:
{
returnValue = F("Heidbrink");
break;
}
case 135987:
{
returnValue = F("Heidbrinksfeld");
break;
}
case 135988:
{
returnValue = F("Heidbrinkstr.");
break;
}
case 135989:
{
returnValue = F("Heidbrook");
break;
}
case 135990:
{
returnValue = F("Heidbrooksring");
break;
}
case 135991:
{
returnValue = F("Heidbruch");
break;
}
case 135992:
{
returnValue = F("Heidbruchweg");
break;
}
case 135993:
{
returnValue = F("Heidbrücken");
break;
}
case 135994:
{
returnValue = F("Heidbrücker Esch");
break;
}
case 135995:
{
returnValue = F("Heidbrücker Feld");
break;
}
case 135996:
{
returnValue = F("Heidbrücker Ring");
break;
}
case 135997:
{
returnValue = F("Heidbrücker Str.");
break;
}
case 135998:
{
returnValue = F("Heidbunge");
break;
}
case 135999:
{
returnValue = F("Heidburenweg");
break;
}
case 136000:
{
returnValue = F("Heidbüchel");
break;
}
case 136001:
{
returnValue = F("Heidbüchelstr.");
break;
}
case 136002:
{
returnValue = F("Heidbühl");
break;
}
case 136003:
{
returnValue = F("Heidbühlerweg");
break;
}
case 136004:
{
returnValue = F("Heidbühlstr.");
break;
}
case 136005:
{
returnValue = F("Heidbühlweg");
break;
}
case 136006:
{
returnValue = F("Heidchen");
break;
}
case 136007:
{
returnValue = F("Heidchenberg");
break;
}
case 136008:
{
returnValue = F("Heidchenstr.");
break;
}
case 136009:
{
returnValue = F("Heidchenweg");
break;
}
case 136010:
{
returnValue = F("Heidchesgarten");
break;
}
case 136011:
{
returnValue = F("Heiddamm");
break;
}
case 136012:
{
returnValue = F("Heiddeich");
break;
}
case 136013:
{
returnValue = F("Heiddorfer Deich");
break;
}
case 136014:
{
returnValue = F("Heiddorfer Str.");
break;
}
case 136015:
{
returnValue = F("Heiddornsweg");
break;
}
case 136016:
{
returnValue = F("Heide");
break;
}
case 136017:
{
returnValue = F("Heide (Wenninghausen)");
break;
}
case 136018:
{
returnValue = F("Heide am See");
break;
}
case 136019:
{
returnValue = F("Heide in den Bergen");
break;
}
case 136020:
{
returnValue = F("Heide zu Koyne");
break;
}
case 136021:
{
returnValue = F("Heide-Entdeckerpfad");
break;
}
case 136022:
{
returnValue = F("Heide-Feld");
break;
}
case 136023:
{
returnValue = F("Heide-Heue-Weg");
break;
}
case 136024:
{
returnValue = F("Heide-Pättken");
break;
}
case 136025:
{
returnValue = F("Heide/Holstein-Weg");
break;
}
case 136026:
{
returnValue = F("Heideallee");
break;
}
case 136027:
{
returnValue = F("Heideanger");
break;
}
case 136028:
{
returnValue = F("Heidebacher Weg");
break;
}
case 136029:
{
returnValue = F("Heidebachstr.");
break;
}
case 136030:
{
returnValue = F("Heidebarg");
break;
}
case 136031:
{
returnValue = F("Heideberg");
break;
}
case 136032:
{
returnValue = F("Heideberger Mauer");
break;
}
case 136033:
{
returnValue = F("Heidebergstr.");
break;
}
case 136034:
{
returnValue = F("Heidebergweg");
break;
}
case 136035:
{
returnValue = F("Heidebitz");
break;
}
case 136036:
{
returnValue = F("Heidebleek");
break;
}
case 136037:
{
returnValue = F("Heideblick");
break;
}
case 136038:
{
returnValue = F("Heideblock");
break;
}
case 136039:
{
returnValue = F("Heideblöcken");
break;
}
case 136040:
{
returnValue = F("Heideblümchenpark");
break;
}
case 136041:
{
returnValue = F("Heideblümchenstr.");
break;
}
case 136042:
{
returnValue = F("Heideblütenweg");
break;
}
case 136043:
{
returnValue = F("Heidebogen");
break;
}
case 136044:
{
returnValue = F("Heidebreite");
break;
}
case 136045:
{
returnValue = F("Heidebringsweg");
break;
}
case 136046:
{
returnValue = F("Heidebrink");
break;
}
case 136047:
{
returnValue = F("Heidebrink-Ausbau");
break;
}
case 136048:
{
returnValue = F("Heidebrinkstr.");
break;
}
case 136049:
{
returnValue = F("Heidebroichstr.");
break;
}
case 136050:
{
returnValue = F("Heidebrook");
break;
}
case 136051:
{
returnValue = F("Heidebruch");
break;
}
case 136052:
{
returnValue = F("Heidebruchstr.");
break;
}
case 136053:
{
returnValue = F("Heidebrunnen");
break;
}
case 136054:
{
returnValue = F("Heidebrücke");
break;
}
case 136055:
{
returnValue = F("Heidebrückenweg");
break;
}
case 136056:
{
returnValue = F("Heidebuck");
break;
}
case 136057:
{
returnValue = F("Heidebuckel");
break;
}
case 136058:
{
returnValue = F("Heidebuckelweg");
break;
}
case 136059:
{
returnValue = F("Heidebusch");
break;
}
case 136060:
{
returnValue = F("Heidebühl");
break;
}
case 136061:
{
returnValue = F("Heidecke");
break;
}
case 136062:
{
returnValue = F("Heidecker Str.");
break;
}
case 136063:
{
returnValue = F("Heidecker Weg");
break;
}
case 136064:
{
returnValue = F("Heideckermark");
break;
}
case 136065:
{
returnValue = F("Heideckerstr.");
break;
}
case 136066:
{
returnValue = F("Heidecksburgstr.");
break;
}
case 136067:
{
returnValue = F("Heideckstr.");
break;
}
case 136068:
{
returnValue = F("Heideckwaldweg");
break;
}
case 136069:
{
returnValue = F("Heidedamm");
break;
}
case 136070:
{
returnValue = F("Heideducht");
break;
}
case 136071:
{
returnValue = F("Heidedyk");
break;
}
case 136072:
{
returnValue = F("Heideeck");
break;
}
case 136073:
{
returnValue = F("Heidefeld");
break;
}
case 136074:
{
returnValue = F("Heidefelder Weg");
break;
}
case 136075:
{
returnValue = F("Heidefeldstr.");
break;
}
case 136076:
{
returnValue = F("Heidefeldweg");
break;
}
case 136077:
{
returnValue = F("Heideflage");
break;
}
case 136078:
{
returnValue = F("Heidefrieden");
break;
}
case 136079:
{
returnValue = F("Heidefurtbrücke");
break;
}
case 136080:
{
returnValue = F("Heidefurtweg");
break;
}
case 136081:
{
returnValue = F("Heidegarten");
break;
}
case 136082:
{
returnValue = F("Heidegartenstr.");
break;
}
case 136083:
{
returnValue = F("Heidegartenweg");
break;
}
case 136084:
{
returnValue = F("Heidegasse");
break;
}
case 136085:
{
returnValue = F("Heideggerstr.");
break;
}
case 136086:
{
returnValue = F("Heideggerweg");
break;
}
case 136087:
{
returnValue = F("Heidegraben");
break;
}
case 136088:
{
returnValue = F("Heidegrund");
break;
}
case 136089:
{
returnValue = F("Heidegrunder Str.");
break;
}
case 136090:
{
returnValue = F("Heidehang");
break;
}
case 136091:
{
returnValue = F("Heidehaus");
break;
}
case 136092:
{
returnValue = F("Heidehausweg");
break;
}
case 136093:
{
returnValue = F("Heideherr-Schultze-Weg");
break;
}
case 136094:
{
returnValue = F("Heidehof");
break;
}
case 136095:
{
returnValue = F("Heidehofring");
break;
}
case 136096:
{
returnValue = F("Heidehofstr.");
break;
}
case 136097:
{
returnValue = F("Heidehofsweg");
break;
}
case 136098:
{
returnValue = F("Heidehofweg");
break;
}
case 136099:
{
returnValue = F("Heideholtmoor");
break;
}
case 136100:
{
returnValue = F("Heideholz");
break;
}
case 136101:
{
returnValue = F("Heidehorst");
break;
}
case 136102:
{
returnValue = F("Heidehäuser Str.");
break;
}
case 136103:
{
returnValue = F("Heidehöfe");
break;
}
case 136104:
{
returnValue = F("Heidehöhe");
break;
}
case 136105:
{
returnValue = F("Heidehügel");
break;
}
case 136106:
{
returnValue = F("Heidekamm");
break;
}
case 136107:
{
returnValue = F("Heidekammweg");
break;
}
case 136108:
{
returnValue = F("Heidekamp");
break;
}
case 136109:
{
returnValue = F("Heidekaten");
break;
}
case 136110:
{
returnValue = F("Heidekopf");
break;
}
case 136111:
{
returnValue = F("Heidekopfweg");
break;
}
case 136112:
{
returnValue = F("Heidekoppel");
break;
}
case 136113:
{
returnValue = F("Heidekoppeln");
break;
}
case 136114:
{
returnValue = F("Heidekorn");
break;
}
case 136115:
{
returnValue = F("Heidekornweg");
break;
}
case 136116:
{
returnValue = F("Heidekranz");
break;
}
case 136117:
{
returnValue = F("Heidekraut");
break;
}
case 136118:
{
returnValue = F("Heidekrautgasse");
break;
}
case 136119:
{
returnValue = F("Heidekrautstr.");
break;
}
case 136120:
{
returnValue = F("Heidekrautweg");
break;
}
case 136121:
{
returnValue = F("Heidekrog");
break;
}
case 136122:
{
returnValue = F("Heidekrug");
break;
}
case 136123:
{
returnValue = F("Heidekruger Weg");
break;
}
case 136124:
{
returnValue = F("Heidekuhle");
break;
}
case 136125:
{
returnValue = F("Heidekultur");
break;
}
case 136126:
{
returnValue = F("Heideküppel");
break;
}
case 136127:
{
returnValue = F("Heideland");
break;
}
case 136128:
{
returnValue = F("Heideland-Ost");
break;
}
case 136129:
{
returnValue = F("Heideland-Süd");
break;
}
case 136130:
{
returnValue = F("Heideland-West");
break;
}
case 136131:
{
returnValue = F("Heidelandstr.");
break;
}
case 136132:
{
returnValue = F("Heidelbach");
break;
}
case 136133:
{
returnValue = F("Heidelbacher Str.");
break;
}
case 136134:
{
returnValue = F("Heidelbachstr.");
break;
}
case 136135:
{
returnValue = F("Heidelbachweg");
break;
}
case 136136:
{
returnValue = F("Heidelbecker Holz");
break;
}
case 136137:
{
returnValue = F("Heidelbecker Str.");
break;
}
case 136138:
{
returnValue = F("Heidelbeerbergschneise");
break;
}
case 136139:
{
returnValue = F("Heidelbeerbühl");
break;
}
case 136140:
{
returnValue = F("Heidelbeerenweg");
break;
}
case 136141:
{
returnValue = F("Heidelbeergarten");
break;
}
case 136142:
{
returnValue = F("Heidelbeergasse");
break;
}
case 136143:
{
returnValue = F("Heidelbeerhecken");
break;
}
case 136144:
{
returnValue = F("Heidelbeerschneise");
break;
}
case 136145:
{
returnValue = F("Heidelbeerstaudweg");
break;
}
case 136146:
{
returnValue = F("Heidelbeerstr.");
break;
}
case 136147:
{
returnValue = F("Heidelbeerweg");
break;
}
case 136148:
{
returnValue = F("Heidelberg");
break;
}
case 136149:
{
returnValue = F("Heidelberg-Schneise");
break;
}
case 136150:
{
returnValue = F("Heidelbergblick");
break;
}
case 136151:
{
returnValue = F("Heidelberger Landstr.");
break;
}
case 136152:
{
returnValue = F("Heidelberger Platz");
break;
}
case 136153:
{
returnValue = F("Heidelberger Ring");
break;
}
case 136154:
{
returnValue = F("Heidelberger Str.");
break;
}
case 136155:
{
returnValue = F("Heidelberger Weg");
break;
}
case 136156:
{
returnValue = F("Heidelbergerfaßgasse");
break;
}
case 136157:
{
returnValue = F("Heidelbergerweg");
break;
}
case 136158:
{
returnValue = F("Heidelbergstr.");
break;
}
case 136159:
{
returnValue = F("Heidelbergweg");
break;
}
case 136160:
{
returnValue = F("Heidelerchenallee");
break;
}
case 136161:
{
returnValue = F("Heidelerchenweg");
break;
}
case 136162:
{
returnValue = F("Heideleweg");
break;
}
case 136163:
{
returnValue = F("Heidelgarten");
break;
}
case 136164:
{
returnValue = F("Heidelgasse");
break;
}
case 136165:
{
returnValue = F("Heideloffplatz");
break;
}
case 136166:
{
returnValue = F("Heideloffstr.");
break;
}
case 136167:
{
returnValue = F("Heideloher Str.");
break;
}
case 136168:
{
returnValue = F("Heidelohstr.");
break;
}
case 136169:
{
returnValue = F("Heidelsbuch");
break;
}
case 136170:
{
returnValue = F("Heidelsgasse");
break;
}
case 136171:
{
returnValue = F("Heidelsheimer Str.");
break;
}
case 136172:
{
returnValue = F("Heidelsteinblick");
break;
}
case 136173:
{
returnValue = F("Heidelsteinstr.");
break;
}
case 136174:
{
returnValue = F("Heidelsteinweg");
break;
}
case 136175:
{
returnValue = F("Heidelstr.");
break;
}
case 136176:
{
returnValue = F("Heidelstätter Weg");
break;
}
case 136177:
{
returnValue = F("Heideluchstr.");
break;
}
case 136178:
{
returnValue = F("Heidelust");
break;
}
case 136179:
{
returnValue = F("Heidelweg");
break;
}
case 136180:
{
returnValue = F("Heideläuferweg");
break;
}
case 136181:
{
returnValue = F("Heidemannstr.");
break;
}
case 136182:
{
returnValue = F("Heidemannsweg");
break;
}
case 136183:
{
returnValue = F("Heidemittelweg");
break;
}
case 136184:
{
returnValue = F("Heidemoor");
break;
}
case 136185:
{
returnValue = F("Heidemühl");
break;
}
case 136186:
{
returnValue = F("Heidemühle");
break;
}
case 136187:
{
returnValue = F("Heidemühlenweg");
break;
}
case 136188:
{
returnValue = F("Heidemühler Weg");
break;
}
case 136189:
{
returnValue = F("Heidemühlweg");
break;
}
case 136190:
{
returnValue = F("Heiden");
break;
}
case 136191:
{
returnValue = F("Heiden-Richtweg");
break;
}
case 136192:
{
returnValue = F("Heidenacker");
break;
}
case 136193:
{
returnValue = F("Heidenackerweg");
break;
}
case 136194:
{
returnValue = F("Heidenauer Hochzeitswald");
break;
}
case 136195:
{
returnValue = F("Heidenauer Str.");
break;
}
case 136196:
{
returnValue = F("Heidenauer Weg");
break;
}
case 136197:
{
returnValue = F("Heidenaustr.");
break;
}
case 136198:
{
returnValue = F("Heidenbachswald");
break;
}
case 136199:
{
returnValue = F("Heidenbarg");
break;
}
case 136200:
{
returnValue = F("Heidenbaumstr.");
break;
}
case 136201:
{
returnValue = F("Heidenbaumweg");
break;
}
case 136202:
{
returnValue = F("Heidenberg");
break;
}
case 136203:
{
returnValue = F("Heidenberger Weg");
break;
}
case 136204:
{
returnValue = F("Heidenbergle");
break;
}
case 136205:
{
returnValue = F("Heidenbergstr.");
break;
}
case 136206:
{
returnValue = F("Heidenbergweg");
break;
}
case 136207:
{
returnValue = F("Heidenbrunnenweg");
break;
}
case 136208:
{
returnValue = F("Heidenbuckelstr.");
break;
}
case 136209:
{
returnValue = F("Heidenbuckelweg");
break;
}
case 136210:
{
returnValue = F("Heidenburger Str.");
break;
}
case 136211:
{
returnValue = F("Heidenburgstr.");
break;
}
case 136212:
{
returnValue = F("Heidenburgweg");
break;
}
case 136213:
{
returnValue = F("Heidenbäumchen");
break;
}
case 136214:
{
returnValue = F("Heidenbühl");
break;
}
case 136215:
{
returnValue = F("Heidenbühlstr.");
break;
}
case 136216:
{
returnValue = F("Heidenbühlweg");
break;
}
case 136217:
{
returnValue = F("Heidend");
break;
}
case 136218:
{
returnValue = F("Heidendom");
break;
}
case 136219:
{
returnValue = F("Heidendoren");
break;
}
case 136220:
{
returnValue = F("Heideneckweg");
break;
}
case 136221:
{
returnValue = F("Heidenelkenweg");
break;
}
case 136222:
{
returnValue = F("Heideneller");
break;
}
case 136223:
{
returnValue = F("Heidener Str.");
break;
}
case 136224:
{
returnValue = F("Heidenfahrdamm");
break;
}
case 136225:
{
returnValue = F("Heidenfahrt");
break;
}
case 136226:
{
returnValue = F("Heidenfahrtstr.");
break;
}
case 136227:
{
returnValue = F("Heidenfeld");
break;
}
case 136228:
{
returnValue = F("Heidenfelder Str.");
break;
}
case 136229:
{
returnValue = F("Heidenfelderstr.");
break;
}
case 136230:
{
returnValue = F("Heidenfeldstr.");
break;
}
case 136231:
{
returnValue = F("Heidenfelsstr.");
break;
}
case 136232:
{
returnValue = F("Heidenflur");
break;
}
case 136233:
{
returnValue = F("Heidengarten");
break;
}
case 136234:
{
returnValue = F("Heidengasse");
break;
}
case 136235:
{
returnValue = F("Heidengaß");
break;
}
case 136236:
{
returnValue = F("Heidengrabenweg");
break;
}
case 136237:
{
returnValue = F("Heidengrund");
break;
}
case 136238:
{
returnValue = F("Heidengäßle");
break;
}
case 136239:
{
returnValue = F("Heidenhainstr.");
break;
}
case 136240:
{
returnValue = F("Heidenhalde");
break;
}
case 136241:
{
returnValue = F("Heidenhauk");
break;
}
case 136242:
{
returnValue = F("Heidenheck");
break;
}
case 136243:
{
returnValue = F("Heidenheimer Ring");
break;
}
case 136244:
{
returnValue = F("Heidenheimer Str.");
break;
}
case 136245:
{
returnValue = F("Heidenheimer Weg");
break;
}
case 136246:
{
returnValue = F("Heidenheimer-Hau-Weg");
break;
}
case 136247:
{
returnValue = F("Heidenhof");
break;
}
case 136248:
{
returnValue = F("Heidenhofer Str.");
break;
}
case 136249:
{
returnValue = F("Heidenhofweg");
break;
}
case 136250:
{
returnValue = F("Heidenholzstr.");
break;
}
case 136251:
{
returnValue = F("Heidenholzweg");
break;
}
case 136252:
{
returnValue = F("Heidenhäuschen Str.");
break;
}
case 136253:
{
returnValue = F("Heidenhübel");
break;
}
case 136254:
{
returnValue = F("Heidenhügelstr.");
break;
}
case 136255:
{
returnValue = F("Heidenkamer Feldweg");
break;
}
case 136256:
{
returnValue = F("Heidenkamer Str.");
break;
}
case 136257:
{
returnValue = F("Heidenkamp");
break;
}
case 136258:
{
returnValue = F("Heidenkeller");
break;
}
case 136259:
{
returnValue = F("Heidenkirchhofsweg");
break;
}
case 136260:
{
returnValue = F("Heidenkirchweg");
break;
}
case 136261:
{
returnValue = F("Heidenknie");
break;
}
case 136262:
{
returnValue = F("Heidenkniestr.");
break;
}
case 136263:
{
returnValue = F("Heidenknieweg");
break;
}
case 136264:
{
returnValue = F("Heidenknörzelweg");
break;
}
case 136265:
{
returnValue = F("Heidenkolk");
break;
}
case 136266:
{
returnValue = F("Heidenkopf");
break;
}
case 136267:
{
returnValue = F("Heidenkopferdell");
break;
}
case 136268:
{
returnValue = F("Heidenkopfstr.");
break;
}
case 136269:
{
returnValue = F("Heidenköpfles Weg");
break;
}
case 136270:
{
returnValue = F("Heidenlochweg");
break;
}
case 136271:
{
returnValue = F("Heidenloh");
break;
}
case 136272:
{
returnValue = F("Heidenmauer");
break;
}
case 136273:
{
returnValue = F("Heidenoldendorfer Str.");
break;
}
case 136274:
{
returnValue = F("Heidenpfad");
break;
}
case 136275:
{
returnValue = F("Heidenpfuhl");
break;
}
case 136276:
{
returnValue = F("Heidenplanie");
break;
}
case 136277:
{
returnValue = F("Heidenrain");
break;
}
case 136278:
{
returnValue = F("Heidenreichgässchen");
break;
}
case 136279:
{
returnValue = F("Heidenreichstr.");
break;
}
case 136280:
{
returnValue = F("Heidenring");
break;
}
case 136281:
{
returnValue = F("Heidenroder Str.");
break;
}
case 136282:
{
returnValue = F("Heidenrösleinweg");
break;
}
case 136283:
{
returnValue = F("Heidenrücklesweg");
break;
}
case 136284:
{
returnValue = F("Heidenschaftsweg");
break;
}
case 136285:
{
returnValue = F("Heidenschanzweg");
break;
}
case 136286:
{
returnValue = F("Heidensche Str.");
break;
}
case 136287:
{
returnValue = F("Heidensche Trift");
break;
}
case 136288:
{
returnValue = F("Heidenschlagweg");
break;
}
case 136289:
{
returnValue = F("Heidenschlossweg");
break;
}
case 136290:
{
returnValue = F("Heidenschloßweg");
break;
}
case 136291:
{
returnValue = F("Heidenschuhstr.");
break;
}
case 136292:
{
returnValue = F("Heidensgang");
break;
}
case 136293:
{
returnValue = F("Heidenstadtweg");
break;
}
case 136294:
{
returnValue = F("Heidensteil");
break;
}
case 136295:
{
returnValue = F("Heidenstein");
break;
}
case 136296:
{
returnValue = F("Heidenstengelweg");
break;
}
case 136297:
{
returnValue = F("Heidenstock");
break;
}
case 136298:
{
returnValue = F("Heidenstockstr.");
break;
}
case 136299:
{
returnValue = F("Heidenstr.");
break;
}
case 136300:
{
returnValue = F("Heidentalring");
break;
}
case 136301:
{
returnValue = F("Heidentalstr.");
break;
}
case 136302:
{
returnValue = F("Heidentriesch");
break;
}
case 136303:
{
returnValue = F("Heidenwasenstr.");
break;
}
case 136304:
{
returnValue = F("Heidenweg");
break;
}
case 136305:
{
returnValue = F("Heidenwäldlesweg");
break;
}
case 136306:
{
returnValue = F("Heidenwäldleweg");
break;
}
case 136307:
{
returnValue = F("Heidenäcker");
break;
}
case 136308:
{
returnValue = F("Heidenäckerleweg");
break;
}
case 136309:
{
returnValue = F("Heidenäckerstr.");
break;
}
case 136310:
{
returnValue = F("Heidenäckerweg");
break;
}
case 136311:
{
returnValue = F("Heidepark");
break;
}
case 136312:
{
returnValue = F("Heidepark Essern");
break;
}
case 136313:
{
returnValue = F("Heideparkallee");
break;
}
case 136314:
{
returnValue = F("Heideparkring");
break;
}
case 136315:
{
returnValue = F("Heidepfad");
break;
}
case 136316:
{
returnValue = F("Heideplan");
break;
}
case 136317:
{
returnValue = F("Heideplatz");
break;
}
case 136318:
{
returnValue = F("Heidepohl");
break;
}
case 136319:
{
returnValue = F("Heidepromenade");
break;
}
case 136320:
{
returnValue = F("Heidequerweg");
break;
}
case 136321:
{
returnValue = F("Heider Bruchweg");
break;
}
case 136322:
{
returnValue = F("Heider Chaussee");
break;
}
case 136323:
{
returnValue = F("Heider Feld");
break;
}
case 136324:
{
returnValue = F("Heider Hof");
break;
}
case 136325:
{
returnValue = F("Heider Höhe");
break;
}
case 136326:
{
returnValue = F("Heider Ring");
break;
}
case 136327:
{
returnValue = F("Heider See");
break;
}
case 136328:
{
returnValue = F("Heider Str.");
break;
}
case 136329:
{
returnValue = F("Heider Weg");
break;
}
case 136330:
{
returnValue = F("Heider-Hof-Weg");
break;
}
case 136331:
{
returnValue = F("Heiderader Weg");
break;
}
case 136332:
{
returnValue = F("Heiderain");
break;
}
case 136333:
{
returnValue = F("Heiderand");
break;
}
case 136334:
{
returnValue = F("Heiderangen");
break;
}
case 136335:
{
returnValue = F("Heiderberg");
break;
}
case 136336:
{
returnValue = F("Heiderbergstr.");
break;
}
case 136337:
{
returnValue = F("Heiderbitze");
break;
}
case 136338:
{
returnValue = F("Heiderbrücke");
break;
}
case 136339:
{
returnValue = F("Heiderbusch");
break;
}
case 136340:
{
returnValue = F("Heideredder");
break;
}
case 136341:
{
returnValue = F("Heidereiterweg");
break;
}
case 136342:
{
returnValue = F("Heidereuterweg");
break;
}
case 136343:
{
returnValue = F("Heiderfelder Str.");
break;
}
case 136344:
{
returnValue = F("Heiderfelder Weg");
break;
}
case 136345:
{
returnValue = F("Heiderfeldstr.");
break;
}
case 136346:
{
returnValue = F("Heiderhof");
break;
}
case 136347:
{
returnValue = F("Heiderhöfchen");
break;
}
case 136348:
{
returnValue = F("Heiderhöfen");
break;
}
case 136349:
{
returnValue = F("Heidering");
break;
}
case 136350:
{
returnValue = F("Heiderjansfelder Str.");
break;
}
case 136351:
{
returnValue = F("Heidermühle");
break;
}
case 136352:
{
returnValue = F("Heidernellweg");
break;
}
case 136353:
{
returnValue = F("Heidernellwiesenweg");
break;
}
case 136354:
{
returnValue = F("Heiderosenstr.");
break;
}
case 136355:
{
returnValue = F("Heiderosenweg");
break;
}
case 136356:
{
returnValue = F("Heiderper Weg");
break;
}
case 136357:
{
returnValue = F("Heidersbacher Str.");
break;
}
case 136358:
{
returnValue = F("Heidersberg");
break;
}
case 136359:
{
returnValue = F("Heidersberger Weg");
break;
}
case 136360:
{
returnValue = F("Heidersdorfer Gasse");
break;
}
case 136361:
{
returnValue = F("Heidersdorfer Str.");
break;
}
case 136362:
{
returnValue = F("Heidersdorfer Weg");
break;
}
case 136363:
{
returnValue = F("Heidersiefen");
break;
}
case 136364:
{
returnValue = F("Heidersteg");
break;
}
case 136365:
{
returnValue = F("Heiderstr.");
break;
}
case 136366:
{
returnValue = F("Heiderundweg");
break;
}
case 136367:
{
returnValue = F("Heiderweg");
break;
}
case 136368:
{
returnValue = F("Heidesch");
break;
}
case 136369:
{
returnValue = F("Heideschenke");
break;
}
case 136370:
{
returnValue = F("Heideschlagweg");
break;
}
case 136371:
{
returnValue = F("Heideschneise");
break;
}
case 136372:
{
returnValue = F("Heideschulstr.");
break;
}
case 136373:
{
returnValue = F("Heideschulweg");
break;
}
case 136374:
{
returnValue = F("Heidesheimer Hauptstr.");
break;
}
case 136375:
{
returnValue = F("Heidesheimer Str.");
break;
}
case 136376:
{
returnValue = F("Heidesheimer Weg");
break;
}
case 136377:
{
returnValue = F("Heidesiedlung");
break;
}
case 136378:
{
returnValue = F("Heidesprung");
break;
}
case 136379:
{
returnValue = F("Heidesteg");
break;
}
case 136380:
{
returnValue = F("Heidesteig");
break;
}
case 136381:
{
returnValue = F("Heidestieg");
break;
}
case 136382:
{
returnValue = F("Heidestiege");
break;
}
case 136383:
{
returnValue = F("Heidestock");
break;
}
case 136384:
{
returnValue = F("Heidestr.");
break;
}
case 136385:
{
returnValue = F("Heidestück");
break;
}
case 136386:
{
returnValue = F("Heideteich");
break;
}
case 136387:
{
returnValue = F("Heidetorplatz");
break;
}
case 136388:
{
returnValue = F("Heidetränkweg");
break;
}
case 136389:
{
returnValue = F("Heidewald");
break;
}
case 136390:
{
returnValue = F("Heidewaldstr.");
break;
}
case 136391:
{
returnValue = F("Heidewall");
break;
}
case 136392:
{
returnValue = F("Heideweg");
break;
}
case 136393:
{
returnValue = F("Heideweg 1");
break;
}
case 136394:
{
returnValue = F("Heideweg 2");
break;
}
case 136395:
{
returnValue = F("Heidewickchen");
break;
}
case 136396:
{
returnValue = F("Heidewinkel");
break;
}
case 136397:
{
returnValue = F("Heideäcker");
break;
}
case 136398:
{
returnValue = F("Heideäckerweg");
break;
}
case 136399:
{
returnValue = F("Heidfeld");
break;
}
case 136400:
{
returnValue = F("Heidfelder Weg");
break;
}
case 136401:
{
returnValue = F("Heidfeldstr.");
break;
}
case 136402:
{
returnValue = F("Heidfeldweg");
break;
}
case 136403:
{
returnValue = F("Heidfennenweg");
break;
}
case 136404:
{
returnValue = F("Heidgarden");
break;
}
case 136405:
{
returnValue = F("Heidgarten");
break;
}
case 136406:
{
returnValue = F("Heidgartenweg");
break;
}
case 136407:
{
returnValue = F("Heidgasse");
break;
}
case 136408:
{
returnValue = F("Heidgen");
break;
}
case 136409:
{
returnValue = F("Heidgenweg");
break;
}
case 136410:
{
returnValue = F("Heidgermühle");
break;
}
case 136411:
{
returnValue = F("Heidgesberg");
break;
}
case 136412:
{
returnValue = F("Heidgesweg");
break;
}
case 136413:
{
returnValue = F("Heidgraben");
break;
}
case 136414:
{
returnValue = F("Heidgrabener Str.");
break;
}
case 136415:
{
returnValue = F("Heidgrabener Weg");
break;
}
case 136416:
{
returnValue = F("Heidgrund");
break;
}
case 136417:
{
returnValue = F("Heidgäßchen");
break;
}
case 136418:
{
returnValue = F("Heidhauk");
break;
}
case 136419:
{
returnValue = F("Heidhausen");
break;
}
case 136420:
{
returnValue = F("Heidhausener Str.");
break;
}
case 136421:
{
returnValue = F("Heidheckweg");
break;
}
case 136422:
{
returnValue = F("Heidhofer Chaussee");
break;
}
case 136423:
{
returnValue = F("Heidhofweg");
break;
}
case 136424:
{
returnValue = F("Heidholzweg");
break;
}
case 136425:
{
returnValue = F("Heidhorst");
break;
}
case 136426:
{
returnValue = F("Heidhorstweg");
break;
}
case 136427:
{
returnValue = F("Heidhuser Weg");
break;
}
case 136428:
{
returnValue = F("Heidhäuser Str.");
break;
}
case 136429:
{
returnValue = F("Heidhöchte");
break;
}
case 136430:
{
returnValue = F("Heidhöhe");
break;
}
case 136431:
{
returnValue = F("Heidhöhn");
break;
}
case 136432:
{
returnValue = F("Heidhörn");
break;
}
case 136433:
{
returnValue = F("Heidhörner Weg");
break;
}
case 136434:
{
returnValue = F("Heidhörnstr. Nord");
break;
}
case 136435:
{
returnValue = F("Heidhörnweg");
break;
}
case 136436:
{
returnValue = F("Heidhörstenweg");
break;
}
case 136437:
{
returnValue = F("Heidhövelstr.");
break;
}
case 136438:
{
returnValue = F("Heidhügelweg");
break;
}
case 136439:
{
returnValue = F("Heidhürenweg");
break;
}
case 136440:
{
returnValue = F("Heidhüser Str.");
break;
}
case 136441:
{
returnValue = F("Heidi-Biebl-Weg");
break;
}
case 136442:
{
returnValue = F("Heidi-Denzel-Str.");
break;
}
case 136443:
{
returnValue = F("Heidick");
break;
}
case 136444:
{
returnValue = F("Heidieksweg");
break;
}
case 136445:
{
returnValue = F("Heidiger Ackerweg");
break;
}
case 136446:
{
returnValue = F("Heidigkopfweg");
break;
}
case 136447:
{
returnValue = F("Heidigstr.");
break;
}
case 136448:
{
returnValue = F("Heidigweg");
break;
}
case 136449:
{
returnValue = F("Heidiksbrück");
break;
}
case 136450:
{
returnValue = F("Heidingsfelder Str.");
break;
}
case 136451:
{
returnValue = F("Heidingsfelder Weg");
break;
}
case 136452:
{
returnValue = F("Heidingsfelderweg");
break;
}
case 136453:
{
returnValue = F("Heidjer Kuppe");
break;
}
case 136454:
{
returnValue = F("Heidjer Str.");
break;
}
case 136455:
{
returnValue = F("Heidjerpfad");
break;
}
case 136456:
{
returnValue = F("Heidjers Ruh");
break;
}
case 136457:
{
returnValue = F("Heidjerskamp");
break;
}
case 136458:
{
returnValue = F("Heidjerstieg");
break;
}
case 136459:
{
returnValue = F("Heidjerweg");
break;
}
case 136460:
{
returnValue = F("Heidjerwinkel");
break;
}
case 136461:
{
returnValue = F("Heidjeweg");
break;
}
case 136462:
{
returnValue = F("Heidkamp");
break;
}
case 136463:
{
returnValue = F("Heidkamp Bahn");
break;
}
case 136464:
{
returnValue = F("Heidkampenstr.");
break;
}
case 136465:
{
returnValue = F("Heidkamper Landstr.");
break;
}
case 136466:
{
returnValue = F("Heidkamper Str.");
break;
}
case 136467:
{
returnValue = F("Heidkamper Weg");
break;
}
case 136468:
{
returnValue = F("Heidkamperfelder Weg");
break;
}
case 136469:
{
returnValue = F("Heidkampsstieg");
break;
}
case 136470:
{
returnValue = F("Heidkampstr.");
break;
}
case 136471:
{
returnValue = F("Heidkampstwiete");
break;
}
case 136472:
{
returnValue = F("Heidkampsweg");
break;
}
case 136473:
{
returnValue = F("Heidkamptwiete");
break;
}
case 136474:
{
returnValue = F("Heidkampweg");
break;
}
case 136475:
{
returnValue = F("Heidkantweg");
break;
}
case 136476:
{
returnValue = F("Heidkaten");
break;
}
case 136477:
{
returnValue = F("Heidkatenweg");
break;
}
case 136478:
{
returnValue = F("Heidklift");
break;
}
case 136479:
{
returnValue = F("Heidknapp");
break;
}
case 136480:
{
returnValue = F("Heidkopf");
break;
}
case 136481:
{
returnValue = F("Heidkopfweg");
break;
}
case 136482:
{
returnValue = F("Heidkoppel");
break;
}
case 136483:
{
returnValue = F("Heidkoppelring");
break;
}
case 136484:
{
returnValue = F("Heidkoppelsiedlung");
break;
}
case 136485:
{
returnValue = F("Heidkoppelsredder");
break;
}
case 136486:
{
returnValue = F("Heidkoppelweg");
break;
}
case 136487:
{
returnValue = F("Heidkrug");
break;
}
case 136488:
{
returnValue = F("Heidkruger Damm");
break;
}
case 136489:
{
returnValue = F("Heidkruger Weg");
break;
}
case 136490:
{
returnValue = F("Heidkrugsweg");
break;
}
case 136491:
{
returnValue = F("Heidkrügerfeld");
break;
}
case 136492:
{
returnValue = F("Heidkämpe");
break;
}
case 136493:
{
returnValue = F("Heidkämpken");
break;
}
case 136494:
{
returnValue = F("Heidköpfchenweg");
break;
}
case 136495:
{
returnValue = F("Heidlage");
break;
}
case 136496:
{
returnValue = F("Heidland");
break;
}
case 136497:
{
returnValue = F("Heidlandseck");
break;
}
case 136498:
{
returnValue = F("Heidlandstr.");
break;
}
case 136499:
{
returnValue = F("Heidlandsweg");
break;
}
case 136500:
{
returnValue = F("Heidlandweg");
break;
}
case 136501:
{
returnValue = F("Heidlauffstr.");
break;
}
case 136502:
{
returnValue = F("Heidlebeerweg");
break;
}
case 136503:
{
returnValue = F("Heidlofweg");
break;
}
case 136504:
{
returnValue = F("Heidloge");
break;
}
case 136505:
{
returnValue = F("Heidlogeweg");
break;
}
case 136506:
{
returnValue = F("Heidloh");
break;
}
case 136507:
{
returnValue = F("Heidlohallee");
break;
}
case 136508:
{
returnValue = F("Heidlohe");
break;
}
case 136509:
{
returnValue = F("Heidlohgärten");
break;
}
case 136510:
{
returnValue = F("Heidlooge");
break;
}
case 136511:
{
returnValue = F("Heidlooger Weg");
break;
}
case 136512:
{
returnValue = F("Heidländer Weg");
break;
}
case 136513:
{
returnValue = F("Heidmannstr.");
break;
}
case 136514:
{
returnValue = F("Heidmannsweg");
break;
}
case 136515:
{
returnValue = F("Heidmark");
break;
}
case 136516:
{
returnValue = F("Heidmarkstr.");
break;
}
case 136517:
{
returnValue = F("Heidmarkweg");
break;
}
case 136518:
{
returnValue = F("Heidmathen");
break;
}
case 136519:
{
returnValue = F("Heidmoor");
break;
}
case 136520:
{
returnValue = F("Heidmoore");
break;
}
case 136521:
{
returnValue = F("Heidmoorer Str.");
break;
}
case 136522:
{
returnValue = F("Heidmoorstr.");
break;
}
case 136523:
{
returnValue = F("Heidmühlener Str.");
break;
}
case 136524:
{
returnValue = F("Heidmühlenstr.");
break;
}
case 136525:
{
returnValue = F("Heidmühlenweg");
break;
}
case 136526:
{
returnValue = F("Heidmühler Weg");
break;
}
case 136527:
{
returnValue = F("Heidmühlstr.");
break;
}
case 136528:
{
returnValue = F("Heidmüllerweg");
break;
}
case 136529:
{
returnValue = F("Heidnerweg");
break;
}
case 136530:
{
returnValue = F("Heidnocken");
break;
}
case 136531:
{
returnValue = F("Heidnüchelsweg");
break;
}
case 136532:
{
returnValue = F("Heidolfstr.");
break;
}
case 136533:
{
returnValue = F("Heidorner Str.");
break;
}
case 136534:
{
returnValue = F("Heidornweg");
break;
}
case 136535:
{
returnValue = F("Heidort");
break;
}
case 136536:
{
returnValue = F("Heidostr.");
break;
}
case 136537:
{
returnValue = F("Heidpand");
break;
}
case 136538:
{
returnValue = F("Heidpfad");
break;
}
case 136539:
{
returnValue = F("Heidplacken");
break;
}
case 136540:
{
returnValue = F("Heidplackenweg");
break;
}
case 136541:
{
returnValue = F("Heidplaggen");
break;
}
case 136542:
{
returnValue = F("Heidplatz");
break;
}
case 136543:
{
returnValue = F("Heidplätzchen");
break;
}
case 136544:
{
returnValue = F("Heidpolderweg");
break;
}
case 136545:
{
returnValue = F("Heidpuhlweg");
break;
}
case 136546:
{
returnValue = F("Heidrade");
break;
}
case 136547:
{
returnValue = F("Heidraden");
break;
}
case 136548:
{
returnValue = F("Heidredder");
break;
}
case 136549:
{
returnValue = F("Heidreger Ring");
break;
}
case 136550:
{
returnValue = F("Heidrehm");
break;
}
case 136551:
{
returnValue = F("Heidresk");
break;
}
case 136552:
{
returnValue = F("Heidrianstr.");
break;
}
case 136553:
{
returnValue = F("Heidriegen");
break;
}
case 136554:
{
returnValue = F("Heidring");
break;
}
case 136555:
{
returnValue = F("Heidschachenstr.");
break;
}
case 136556:
{
returnValue = F("Heidschachenweg");
break;
}
case 136557:
{
returnValue = F("Heidschlade");
break;
}
case 136558:
{
returnValue = F("Heidschneise");
break;
}
case 136559:
{
returnValue = F("Heidschnuckenweg");
break;
}
case 136560:
{
returnValue = F("Heidsiel");
break;
}
case 136561:
{
returnValue = F("Heidske Weg");
break;
}
case 136562:
{
returnValue = F("Heidstaudenstr.");
break;
}
case 136563:
{
returnValue = F("Heidstege");
break;
}
case 136564:
{
returnValue = F("Heidsteige");
break;
}
case 136565:
{
returnValue = F("Heidsteigle");
break;
}
case 136566:
{
returnValue = F("Heidsteinweg");
break;
}
case 136567:
{
returnValue = F("Heidstieg");
break;
}
case 136568:
{
returnValue = F("Heidstockstr.");
break;
}
case 136569:
{
returnValue = F("Heidstr.");
break;
}
case 136570:
{
returnValue = F("Heidstücken");
break;
}
case 136571:
{
returnValue = F("Heidstückenstr.");
break;
}
case 136572:
{
returnValue = F("Heidstückenweg");
break;
}
case 136573:
{
returnValue = F("Heidswiemoor");
break;
}
case 136574:
{
returnValue = F("Heidt");
break;
}
case 136575:
{
returnValue = F("Heidtorstr.");
break;
}
case 136576:
{
returnValue = F("Heidtrift");
break;
}
case 136577:
{
returnValue = F("Heidtstr.");
break;
}
case 136578:
{
returnValue = F("Heidturmweg");
break;
}
case 136579:
{
returnValue = F("Heidtwiet");
break;
}
case 136580:
{
returnValue = F("Heidufer");
break;
}
case 136581:
{
returnValue = F("Heidung");
break;
}
case 136582:
{
returnValue = F("Heidvenn");
break;
}
case 136583:
{
returnValue = F("Heidvierthweg");
break;
}
case 136584:
{
returnValue = F("Heidwaldweg");
break;
}
case 136585:
{
returnValue = F("Heidweg");
break;
}
case 136586:
{
returnValue = F("Heidweiher");
break;
}
case 136587:
{
returnValue = F("Heidweihergraben");
break;
}
case 136588:
{
returnValue = F("Heidweilerstr.");
break;
}
case 136589:
{
returnValue = F("Heidwiese");
break;
}
case 136590:
{
returnValue = F("Heidwiesen");
break;
}
case 136591:
{
returnValue = F("Heidwiesstr.");
break;
}
case 136592:
{
returnValue = F("Heidwiestr.");
break;
}
case 136593:
{
returnValue = F("Heidwinkel");
break;
}
case 136594:
{
returnValue = F("Heidwinkelstr.");
break;
}
case 136595:
{
returnValue = F("Heidwisch");
break;
}
case 136596:
{
returnValue = F("Heidäcker");
break;
}
case 136597:
{
returnValue = F("Heidäckerstr.");
break;
}
case 136598:
{
returnValue = F("Heie");
break;
}
case 136599:
{
returnValue = F("Heie-Juuler-Wäi");
break;
}
case 136600:
{
returnValue = F("Heienberg");
break;
}
case 136601:
{
returnValue = F("Heienderfeld");
break;
}
case 136602:
{
returnValue = F("Heierberg");
break;
}
case 136603:
{
returnValue = F("Heierdrift");
break;
}
case 136604:
{
returnValue = F("Heierfeld");
break;
}
case 136605:
{
returnValue = F("Heierhofweg");
break;
}
case 136606:
{
returnValue = F("Heierhohl");
break;
}
case 136607:
{
returnValue = F("Heierkoppel");
break;
}
case 136608:
{
returnValue = F("Heiermannsfeld");
break;
}
case 136609:
{
returnValue = F("Heiermannstr.");
break;
}
case 136610:
{
returnValue = F("Heiermannsweg");
break;
}
case 136611:
{
returnValue = F("Heierngasse");
break;
}
case 136612:
{
returnValue = F("Heiersche Str.");
break;
}
case 136613:
{
returnValue = F("Heiersdorfer Str.");
break;
}
case 136614:
{
returnValue = F("Heierskamp");
break;
}
case 136615:
{
returnValue = F("Heiersmauer");
break;
}
case 136616:
{
returnValue = F("Heiersstr.");
break;
}
case 136617:
{
returnValue = F("Heierstr.");
break;
}
case 136618:
{
returnValue = F("Heierswall");
break;
}
case 136619:
{
returnValue = F("Heierweg");
break;
}
case 136620:
{
returnValue = F("Heierwiese");
break;
}
case 136621:
{
returnValue = F("Heifeld");
break;
}
case 136622:
{
returnValue = F("Heifeldstr.");
break;
}
case 136623:
{
returnValue = F("Heifennenweg");
break;
}
case 136624:
{
returnValue = F("Heiferstr.");
break;
}
case 136625:
{
returnValue = F("Heifeskamp");
break;
}
case 136626:
{
returnValue = F("Heifoer");
break;
}
case 136627:
{
returnValue = F("Heigelinsmühle");
break;
}
case 136628:
{
returnValue = F("Heigenbrückener Str.");
break;
}
case 136629:
{
returnValue = F("Heigenbrückener Weg");
break;
}
case 136630:
{
returnValue = F("Heigenbrücker Str.");
break;
}
case 136631:
{
returnValue = F("Heigenbrücker Weg");
break;
}
case 136632:
{
returnValue = F("Heigenkamer Weg");
break;
}
case 136633:
{
returnValue = F("Heigern");
break;
}
case 136634:
{
returnValue = F("Heigernstr.");
break;
}
case 136635:
{
returnValue = F("Heiglbauerweg");
break;
}
case 136636:
{
returnValue = F("Heiglberg");
break;
}
case 136637:
{
returnValue = F("Heiglbergsiedlung");
break;
}
case 136638:
{
returnValue = F("Heiglhofstr.");
break;
}
case 136639:
{
returnValue = F("Heiglmühle");
break;
}
case 136640:
{
returnValue = F("Heiglstr.");
break;
}
case 136641:
{
returnValue = F("Heiglweg");
break;
}
case 136642:
{
returnValue = F("Heignkamer Str.");
break;
}
case 136643:
{
returnValue = F("Heigoldweg");
break;
}
case 136644:
{
returnValue = F("Heigte");
break;
}
case 136645:
{
returnValue = F("Heihoffsweg");
break;
}
case 136646:
{
returnValue = F("Heik");
break;
}
case 136647:
{
returnValue = F("Heikausener Str.");
break;
}
case 136648:
{
returnValue = F("Heikelandsweg");
break;
}
case 136649:
{
returnValue = F("Heikenbergstr.");
break;
}
case 136650:
{
returnValue = F("Heikendorfer Weg");
break;
}
case 136651:
{
returnValue = F("Heikenhammer Weg");
break;
}
case 136652:
{
returnValue = F("Heikenwall");
break;
}
case 136653:
{
returnValue = F("Heiking");
break;
}
case 136654:
{
returnValue = F("Heiko-Kuhlmann-Weg");
break;
}
case 136655:
{
returnValue = F("Heiko-Plöger-Weg");
break;
}
case 136656:
{
returnValue = F("Heil");
break;
}
case 136657:
{
returnValue = F("Heil und Duftkräutergarten");
break;
}
case 136658:
{
returnValue = F("Heilachweg");
break;
}
case 136659:
{
returnValue = F("Heiland");
break;
}
case 136660:
{
returnValue = F("Heilandsberg");
break;
}
case 136661:
{
returnValue = F("Heilbachstr.");
break;
}
case 136662:
{
returnValue = F("Heilbachweg");
break;
}
case 136663:
{
returnValue = F("Heilbadstr.");
break;
}
case 136664:
{
returnValue = F("Heilberger Str.");
break;
}
case 136665:
{
returnValue = F("Heilbergstr.");
break;
}
case 136666:
{
returnValue = F("Heilberscheider Str.");
break;
}
case 136667:
{
returnValue = F("Heilberskofen");
break;
}
case 136668:
{
returnValue = F("Heilborngraben");
break;
}
case 136669:
{
returnValue = F("Heilbornstr.");
break;
}
case 136670:
{
returnValue = F("Heilbronn");
break;
}
case 136671:
{
returnValue = F("Heilbronner Feldweg");
break;
}
case 136672:
{
returnValue = F("Heilbronner Str.");
break;
}
case 136673:
{
returnValue = F("Heilbronner Weg");
break;
}
case 136674:
{
returnValue = F("Heilbrunnenhangweg");
break;
}
case 136675:
{
returnValue = F("Heilbrunnenstr.");
break;
}
case 136676:
{
returnValue = F("Heilbrunnenweg");
break;
}
case 136677:
{
returnValue = F("Heilbrunner Str.");
break;
}
case 136678:
{
returnValue = F("Heilbrunner Weg");
break;
}
case 136679:
{
returnValue = F("Heilbrunnstr.");
break;
}
case 136680:
{
returnValue = F("Heilbrünnchenstr.");
break;
}
case 136681:
{
returnValue = F("Heilbrünneleweg");
break;
}
case 136682:
{
returnValue = F("Heilbrünnlstr.");
break;
}
case 136683:
{
returnValue = F("Heilchelheimer Mühlenweg");
break;
}
case 136684:
{
returnValue = F("Heileckergasse");
break;
}
case 136685:
{
returnValue = F("Heiledornstr.");
break;
}
case 136686:
{
returnValue = F("Heilemannskamp");
break;
}
case 136687:
{
returnValue = F("Heilenbacher Str.");
break;
}
case 136688:
{
returnValue = F("Heilenbacher Weg");
break;
}
case 136689:
{
returnValue = F("Heilenbecker Str.");
break;
}
case 136690:
{
returnValue = F("Heilenberg");
break;
}
case 136691:
{
returnValue = F("Heilenbergstr.");
break;
}
case 136692:
{
returnValue = F("Heilenbrink");
break;
}
case 136693:
{
returnValue = F("Heilentrog");
break;
}
case 136694:
{
returnValue = F("Heilenweg");
break;
}
case 136695:
{
returnValue = F("Heiler Kirchweg");
break;
}
case 136696:
{
returnValue = F("Heiler Kotten");
break;
}
case 136697:
{
returnValue = F("Heiler Str.");
break;
}
case 136698:
{
returnValue = F("Heilerbauernhof");
break;
}
case 136699:
{
returnValue = F("Heilerbergstr.");
break;
}
case 136700:
{
returnValue = F("Heilerbichl");
break;
}
case 136701:
{
returnValue = F("Heilersiepenstr.");
break;
}
case 136702:
{
returnValue = F("Heilerstr.");
break;
}
case 136703:
{
returnValue = F("Heileweg");
break;
}
case 136704:
{
returnValue = F("Heilgebaumstr.");
break;
}
case 136705:
{
returnValue = F("Heilgeistkloster");
break;
}
case 136706:
{
returnValue = F("Heilgeiststr.");
break;
}
case 136707:
{
returnValue = F("Heilgenborn");
break;
}
case 136708:
{
returnValue = F("Heilgengrund");
break;
}
case 136709:
{
returnValue = F("Heilgentalweg");
break;
}
case 136710:
{
returnValue = F("Heilgersdorfer Hauptstr.");
break;
}
case 136711:
{
returnValue = F("Heilgersstr.");
break;
}
case 136712:
{
returnValue = F("Heilgrund");
break;
}
case 136713:
{
returnValue = F("Heilgärten");
break;
}
case 136714:
{
returnValue = F("Heilhausen");
break;
}
case 136715:
{
returnValue = F("Heilig Grab");
break;
}
case 136716:
{
returnValue = F("Heilig Kreuz");
break;
}
case 136717:
{
returnValue = F("Heilig Kreuzstr.");
break;
}
case 136718:
{
returnValue = F("Heilig-Acker-Weg");
break;
}
case 136719:
{
returnValue = F("Heilig-Blut-Str.");
break;
}
case 136720:
{
returnValue = F("Heilig-Blut-Weg");
break;
}
case 136721:
{
returnValue = F("Heilig-Brünnle-Str.");
break;
}
case 136722:
{
returnValue = F("Heilig-Garten");
break;
}
case 136723:
{
returnValue = F("Heilig-Geist-Brücke");
break;
}
case 136724:
{
returnValue = F("Heilig-Geist-Gasse");
break;
}
case 136725:
{
returnValue = F("Heilig-Geist-Park");
break;
}
case 136726:
{
returnValue = F("Heilig-Geist-Platz");
break;
}
case 136727:
{
returnValue = F("Heilig-Geist-Stadel-Passage");
break;
}
case 136728:
{
returnValue = F("Heilig-Geist-Str.");
break;
}
case 136729:
{
returnValue = F("Heilig-Geist-Weg");
break;
}
case 136730:
{
returnValue = F("Heilig-Häuschen-Weg");
break;
}
case 136731:
{
returnValue = F("Heilig-Kreuz-Geräumt");
break;
}
case 136732:
{
returnValue = F("Heilig-Kreuz-Str.");
break;
}
case 136733:
{
returnValue = F("Heilig-Kreuz-Weg");
break;
}
case 136734:
{
returnValue = F("Heiligbergsteig");
break;
}
case 136735:
{
returnValue = F("Heiligbrunnenweg");
break;
}
case 136736:
{
returnValue = F("Heiligbrünnleweg");
break;
}
case 136737:
{
returnValue = F("Heilige Aue");
break;
}
case 136738:
{
returnValue = F("Heilige Gasse");
break;
}
case 136739:
{
returnValue = F("Heilige Grabesmühlgasse");
break;
}
case 136740:
{
returnValue = F("Heilige Leite");
break;
}
case 136741:
{
returnValue = F("Heilige Maria");
break;
}
case 136742:
{
returnValue = F("Heilige Seele");
break;
}
case 136743:
{
returnValue = F("Heilige Wiese");
break;
}
case 136744:
{
returnValue = F("Heilige-Geist-Brücke");
break;
}
case 136745:
{
returnValue = F("Heilige-Geist-Str.");
break;
}
case 136746:
{
returnValue = F("Heilige-Grab-Str.");
break;
}
case 136747:
{
returnValue = F("Heiligegeiststr.");
break;
}
case 136748:
{
returnValue = F("Heiligelinde");
break;
}
case 136749:
{
returnValue = F("Heiligen Wall");
break;
}
case 136750:
{
returnValue = F("Heiligen Weg");
break;
}
case 136751:
{
returnValue = F("Heiligen-Geist-Str.");
break;
}
case 136752:
{
returnValue = F("Heiligen-Weg");
break;
}
case 136753:
{
returnValue = F("Heiligenackerweg");
break;
}
case 136754:
{
returnValue = F("Heiligenallee");
break;
}
case 136755:
{
returnValue = F("Heiligenangerstr.");
break;
}
case 136756:
{
returnValue = F("Heiligenbach");
break;
}
case 136757:
{
returnValue = F("Heiligenbachweg");
break;
}
case 136758:
{
returnValue = F("Heiligenbaum");
break;
}
case 136759:
{
returnValue = F("Heiligenbeiler Str.");
break;
}
case 136760:
{
returnValue = F("Heiligenbeiler Weg");
break;
}
case 136761:
{
returnValue = F("Heiligenbeilweg");
break;
}
case 136762:
{
returnValue = F("Heiligenberg");
break;
}
case 136763:
{
returnValue = F("Heiligenbergallee");
break;
}
case 136764:
{
returnValue = F("Heiligenberger Str.");
break;
}
case 136765:
{
returnValue = F("Heiligenbergstr.");
break;
}
case 136766:
{
returnValue = F("Heiligenbergweg");
break;
}
case 136767:
{
returnValue = F("Heiligenborn");
break;
}
case 136768:
{
returnValue = F("Heiligenbornstr.");
break;
}
case 136769:
{
returnValue = F("Heiligenbreite");
break;
}
case 136770:
{
returnValue = F("Heiligenbronn");
break;
}
case 136771:
{
returnValue = F("Heiligenbronner Str.");
break;
}
case 136772:
{
returnValue = F("Heiligenbrunnen");
break;
}
case 136773:
{
returnValue = F("Heiligenbrunner Str.");
break;
}
case 136774:
{
returnValue = F("Heiligenbrunner Weg");
break;
}
case 136775:
{
returnValue = F("Heiligenbungert");
break;
}
case 136776:
{
returnValue = F("Heiligenbühlweg");
break;
}
case 136777:
{
returnValue = F("Heiligendamm");
break;
}
case 136778:
{
returnValue = F("Heiligendorfer Str.");
break;
}
case 136779:
{
returnValue = F("Heiligenecke");
break;
}
case 136780:
{
returnValue = F("Heiligenfeld");
break;
}
case 136781:
{
returnValue = F("Heiligenfelder Allee");
break;
}
case 136782:
{
returnValue = F("Heiligenfelder Str.");
break;
}
case 136783:
{
returnValue = F("Heiligenfeldstr.");
break;
}
case 136784:
{
returnValue = F("Heiligengasse");
break;
}
case 136785:
{
returnValue = F("Heiligengeisterholz");
break;
}
case 136786:
{
returnValue = F("Heiligengeisthof");
break;
}
case 136787:
{
returnValue = F("Heiligengeiststr.");
break;
}
case 136788:
{
returnValue = F("Heiligengraben");
break;
}
case 136789:
{
returnValue = F("Heiligengraber Str.");
break;
}
case 136790:
{
returnValue = F("Heiligengroden");
break;
}
case 136791:
{
returnValue = F("Heiligengrube");
break;
}
case 136792:
{
returnValue = F("Heiligengrund");
break;
}
case 136793:
{
returnValue = F("Heiligengrundweg");
break;
}
case 136794:
{
returnValue = F("Heiligengärten");
break;
}
case 136795:
{
returnValue = F("Heiligengäßlein");
break;
}
case 136796:
{
returnValue = F("Heiligenhafener Chaussee");
break;
}
case 136797:
{
returnValue = F("Heiligenhag");
break;
}
case 136798:
{
returnValue = F("Heiligenhaldenweg");
break;
}
case 136799:
{
returnValue = F("Heiligenhaus");
break;
}
case 136800:
{
returnValue = F("Heiligenhauser Str.");
break;
}
case 136801:
{
returnValue = F("Heiligenhausstr.");
break;
}
case 136802:
{
returnValue = F("Heiligenhausweg");
break;
}
case 136803:
{
returnValue = F("Heiligenhauweg");
break;
}
case 136804:
{
returnValue = F("Heiligenhof");
break;
}
case 136805:
{
returnValue = F("Heiligenholz");
break;
}
case 136806:
{
returnValue = F("Heiligenholzweg");
break;
}
case 136807:
{
returnValue = F("Heiligenhoven");
break;
}
case 136808:
{
returnValue = F("Heiligenhäger Str.");
break;
}
case 136809:
{
returnValue = F("Heiligenhäuschen");
break;
}
case 136810:
{
returnValue = F("Heiligenhäuschenweg");
break;
}
case 136811:
{
returnValue = F("Heiligenhäusel");
break;
}
case 136812:
{
returnValue = F("Heiligenhäußle");
break;
}
case 136813:
{
returnValue = F("Heiligenhöfe");
break;
}
case 136814:
{
returnValue = F("Heiligenhölzchen");
break;
}
case 136815:
{
returnValue = F("Heiligenkamp");
break;
}
case 136816:
{
returnValue = F("Heiligenland");
break;
}
case 136817:
{
returnValue = F("Heiligenleichnam");
break;
}
case 136818:
{
returnValue = F("Heiligenloh");
break;
}
case 136819:
{
returnValue = F("Heiligenlohstr.");
break;
}
case 136820:
{
returnValue = F("Heiligenlück");
break;
}
case 136821:
{
returnValue = F("Heiligenmoscheler Berg");
break;
}
case 136822:
{
returnValue = F("Heiligenmühle");
break;
}
case 136823:
{
returnValue = F("Heiligenpfad");
break;
}
case 136824:
{
returnValue = F("Heiligenrain");
break;
}
case 136825:
{
returnValue = F("Heiligenrasen");
break;
}
case 136826:
{
returnValue = F("Heiligenreute");
break;
}
case 136827:
{
returnValue = F("Heiligenroder Heide");
break;
}
case 136828:
{
returnValue = F("Heiligenroder Str.");
break;
}
case 136829:
{
returnValue = F("Heiligenrother Str.");
break;
}
case 136830:
{
returnValue = F("Heiligenröder Str.");
break;
}
case 136831:
{
returnValue = F("Heiligenröder Weg");
break;
}
case 136832:
{
returnValue = F("Heiligenschlagstr.");
break;
}
case 136833:
{
returnValue = F("Heiligenschlagweg");
break;
}
case 136834:
{
returnValue = F("Heiligenseer Str.");
break;
}
case 136835:
{
returnValue = F("Heiligenseestr.");
break;
}
case 136836:
{
returnValue = F("Heiligenstadter Str.");
break;
}
case 136837:
{
returnValue = F("Heiligensteiner Str.");
break;
}
case 136838:
{
returnValue = F("Heiligensteinstr.");
break;
}
case 136839:
{
returnValue = F("Heiligenstieg");
break;
}
case 136840:
{
returnValue = F("Heiligenstock");
break;
}
case 136841:
{
returnValue = F("Heiligenstockstr.");
break;
}
case 136842:
{
returnValue = F("Heiligenstr.");
break;
}
case 136843:
{
returnValue = F("Heiligenstumpfweg");
break;
}
case 136844:
{
returnValue = F("Heiligenstädter Str.");
break;
}
case 136845:
{
returnValue = F("Heiligenstädter Weg");
break;
}
case 136846:
{
returnValue = F("Heiligental");
break;
}
case 136847:
{
returnValue = F("Heiligentalstr.");
break;
}
case 136848:
{
returnValue = F("Heiligenthaler Str.");
break;
}
case 136849:
{
returnValue = F("Heiligenthaler Weg");
break;
}
case 136850:
{
returnValue = F("Heiligenwald");
break;
}
case 136851:
{
returnValue = F("Heiligenwaldebeneweg");
break;
}
case 136852:
{
returnValue = F("Heiligenwalder Str.");
break;
}
case 136853:
{
returnValue = F("Heiligenwaldstr.");
break;
}
case 136854:
{
returnValue = F("Heiligenwaldweg");
break;
}
case 136855:
{
returnValue = F("Heiligenweg");
break;
}
case 136856:
{
returnValue = F("Heiligenwiese");
break;
}
case 136857:
{
returnValue = F("Heiligenwiesen");
break;
}
case 136858:
{
returnValue = F("Heiligenwiesenstr.");
break;
}
case 136859:
{
returnValue = F("Heiligenwiesenweg");
break;
}
case 136860:
{
returnValue = F("Heiligenzeller Hauptstr.");
break;
}
case 136861:
{
returnValue = F("Heiligenzeller Str.");
break;
}
case 136862:
{
returnValue = F("Heiligenäcker");
break;
}
case 136863:
{
returnValue = F("Heiligenäckerweg");
break;
}
case 136864:
{
returnValue = F("Heiliger Berg");
break;
}
case 136865:
{
returnValue = F("Heiliger Born");
break;
}
case 136866:
{
returnValue = F("Heiliger Grund");
break;
}
case 136867:
{
returnValue = F("Heiliger Kamp");
break;
}
case 136868:
{
returnValue = F("Heiliger Weg");
break;
}
case 136869:
{
returnValue = F("Heiliger-Hain-Str.");
break;
}
case 136870:
{
returnValue = F("Heiliges Häuschen");
break;
}
case 136871:
{
returnValue = F("Heiliges Kreuz");
break;
}
case 136872:
{
returnValue = F("Heiliggasse");
break;
}
case 136873:
{
returnValue = F("Heiliggeist Geräumt");
break;
}
case 136874:
{
returnValue = F("Heiliggeistgasse");
break;
}
case 136875:
{
returnValue = F("Heiliggeistmühlweg");
break;
}
case 136876:
{
returnValue = F("Heiliggrabgasse");
break;
}
case 136877:
{
returnValue = F("Heiliggrabstr.");
break;
}
case 136878:
{
returnValue = F("Heiliggrund");
break;
}
case 136879:
{
returnValue = F("Heilighäuser Ring");
break;
}
case 136880:
{
returnValue = F("Heiligkreuz");
break;
}
case 136881:
{
returnValue = F("Heiligkreuzer Str.");
break;
}
case 136882:
{
returnValue = F("Heiligkreuzerstr.");
break;
}
case 136883:
{
returnValue = F("Heiligkreuzhof");
break;
}
case 136884:
{
returnValue = F("Heiligkreuzstr.");
break;
}
case 136885:
{
returnValue = F("Heiligkreuztaler Str.");
break;
}
case 136886:
{
returnValue = F("Heiligkreuzweg");
break;
}
case 136887:
{
returnValue = F("Heiligmahdweg");
break;
}
case 136888:
{
returnValue = F("Heiligtalgrund");
break;
}
case 136889:
{
returnValue = F("Heiligtalweg");
break;
}
case 136890:
{
returnValue = F("Heiligtenweg");
break;
}
case 136891:
{
returnValue = F("Heiligtum");
break;
}
case 136892:
{
returnValue = F("Heiligwaldstr.");
break;
}
case 136893:
{
returnValue = F("Heiligwaldweg");
break;
}
case 136894:
{
returnValue = F("Heiligwiesweg");
break;
}
case 136895:
{
returnValue = F("Heilikastr.");
break;
}
case 136896:
{
returnValue = F("Heilikaweg");
break;
}
case 136897:
{
returnValue = F("Heiling-Steig");
break;
}
case 136898:
{
returnValue = F("Heilingbrunnerstr.");
break;
}
case 136899:
{
returnValue = F("Heilinger Str.");
break;
}
case 136900:
{
returnValue = F("Heilingstr.");
break;
}
case 136901:
{
returnValue = F("Heilisau");
break;
}
case 136902:
{
returnValue = F("Heilkers Diek");
break;
}
case 136903:
{
returnValue = F("Heilkräutergarten");
break;
}
case 136904:
{
returnValue = F("Heilkräutergarten Eberbach");
break;
}
case 136905:
{
returnValue = F("Heilkräuterweg");
break;
}
case 136906:
{
returnValue = F("Heilmaierstr.");
break;
}
case 136907:
{
returnValue = F("Heilmanns Kamp");
break;
}
case 136908:
{
returnValue = F("Heilmbauerstr.");
break;
}
case 136909:
{
returnValue = F("Heilmeyerstr.");
break;
}
case 136910:
{
returnValue = F("Heilmühlerweg");
break;
}
case 136911:
{
returnValue = F("Heilnerstr.");
break;
}
case 136912:
{
returnValue = F("Heiloohsecke");
break;
}
case 136913:
{
returnValue = F("Heilpfadweg");
break;
}
case 136914:
{
returnValue = F("Heilpflanzengarten");
break;
}
case 136915:
{
returnValue = F("Heilpflanzengarten Stadt Celle");
break;
}
case 136916:
{
returnValue = F("Heilsaustr.");
break;
}
case 136917:
{
returnValue = F("Heilsberger Park");
break;
}
case 136918:
{
returnValue = F("Heilsberger Str.");
break;
}
case 136919:
{
returnValue = F("Heilsberger Weg");
break;
}
case 136920:
{
returnValue = F("Heilsbergstr.");
break;
}
case 136921:
{
returnValue = F("Heilsbergweg");
break;
}
case 136922:
{
returnValue = F("Heilsbronner Str.");
break;
}
case 136923:
{
returnValue = F("Heilsbrunn");
break;
}
case 136924:
{
returnValue = F("Heilsgasse");
break;
}
case 136925:
{
returnValue = F("Heilsharth");
break;
}
case 136926:
{
returnValue = F("Heilshorner Str.");
break;
}
case 136927:
{
returnValue = F("Heilsteinstr.");
break;
}
case 136928:
{
returnValue = F("Heilstollenweg");
break;
}
case 136929:
{
returnValue = F("Heilstättenstr.");
break;
}
case 136930:
{
returnValue = F("Heilstättenweg");
break;
}
case 136931:
{
returnValue = F("Heilwaldstr.");
break;
}
case 136932:
{
returnValue = F("Heilweg");
break;
}
case 136933:
{
returnValue = F("Heimannsbusch");
break;
}
case 136934:
{
returnValue = F("Heimannstr.");
break;
}
case 136935:
{
returnValue = F("Heimannsweg");
break;
}
case 136936:
{
returnValue = F("Heimarshäuser Str.");
break;
}
case 136937:
{
returnValue = F("Heimat");
break;
}
case 136938:
{
returnValue = F("Heimatblick");
break;
}
case 136939:
{
returnValue = F("Heimatblickstr.");
break;
}
case 136940:
{
returnValue = F("Heimatfriedering");
break;
}
case 136941:
{
returnValue = F("Heimatgasse");
break;
}
case 136942:
{
returnValue = F("Heimatgäßle");
break;
}
case 136943:
{
returnValue = F("Heimathaus De Theeshof");
break;
}
case 136944:
{
returnValue = F("Heimathenhof");
break;
}
case 136945:
{
returnValue = F("Heimatkreuzstr.");
break;
}
case 136946:
{
returnValue = F("Heimatlandweg");
break;
}
case 136947:
{
returnValue = F("Heimatliebe");
break;
}
case 136948:
{
returnValue = F("Heimatpark");
break;
}
case 136949:
{
returnValue = F("Heimatpark Weißagk");
break;
}
case 136950:
{
returnValue = F("Heimatpfad");
break;
}
case 136951:
{
returnValue = F("Heimatpfad / Vogellehrpfad");
break;
}
case 136952:
{
returnValue = F("Heimatplan");
break;
}
case 136953:
{
returnValue = F("Heimatring");
break;
}
case 136954:
{
returnValue = F("Heimatsberg");
break;
}
case 136955:
{
returnValue = F("Heimatsberger Str.");
break;
}
case 136956:
{
returnValue = F("Heimatsgarten");
break;
}
case 136957:
{
returnValue = F("Heimatshausener Str.");
break;
}
case 136958:
{
returnValue = F("Heimatshauser Weg");
break;
}
case 136959:
{
returnValue = F("Heimatshofen");
break;
}
case 136960:
{
returnValue = F("Heimatsmühle");
break;
}
case 136961:
{
returnValue = F("Heimatstr.");
break;
}
case 136962:
{
returnValue = F("Heimatsweiler");
break;
}
case 136963:
{
returnValue = F("Heimattal");
break;
}
case 136964:
{
returnValue = F("Heimattierpark Greifswald");
break;
}
case 136965:
{
returnValue = F("Heimatturmstr.");
break;
}
case 136966:
{
returnValue = F("Heimatweg");
break;
}
case 136967:
{
returnValue = F("Heimbach");
break;
}
case 136968:
{
returnValue = F("Heimbachaue");
break;
}
case 136969:
{
returnValue = F("Heimbachdobelweg");
break;
}
case 136970:
{
returnValue = F("Heimbacher Dorfstr.");
break;
}
case 136971:
{
returnValue = F("Heimbacher Gasse");
break;
}
case 136972:
{
returnValue = F("Heimbacher Mühle");
break;
}
case 136973:
{
returnValue = F("Heimbacher Str.");
break;
}
case 136974:
{
returnValue = F("Heimbacher Weg");
break;
}
case 136975:
{
returnValue = F("Heimbachfeld");
break;
}
case 136976:
{
returnValue = F("Heimbachgasse");
break;
}
case 136977:
{
returnValue = F("Heimbachring");
break;
}
case 136978:
{
returnValue = F("Heimbachstr.");
break;
}
case 136979:
{
returnValue = F("Heimbachsträßchen");
break;
}
case 136980:
{
returnValue = F("Heimbachtal");
break;
}
case 136981:
{
returnValue = F("Heimbachweg");
break;
}
case 136982:
{
returnValue = F("Heimbauweg");
break;
}
case 136983:
{
returnValue = F("Heimbchenbrinkweg");
break;
}
case 136984:
{
returnValue = F("Heimbelweg");
break;
}
case 136985:
{
returnValue = F("Heimberg");
break;
}
case 136986:
{
returnValue = F("Heimberger Str.");
break;
}
case 136987:
{
returnValue = F("Heimbergs-Grund");
break;
}
case 136988:
{
returnValue = F("Heimbergsiedlung");
break;
}
case 136989:
{
returnValue = F("Heimbergstr.");
break;
}
case 136990:
{
returnValue = F("Heimbergsweg");
break;
}
case 136991:
{
returnValue = F("Heimbergweg");
break;
}
case 136992:
{
returnValue = F("Heimbolweg");
break;
}
case 136993:
{
returnValue = F("Heimbornstr.");
break;
}
case 136994:
{
returnValue = F("Heimbronner Fußpfad");
break;
}
case 136995:
{
returnValue = F("Heimbronner Hof");
break;
}
case 136996:
{
returnValue = F("Heimbronner Str.");
break;
}
case 136997:
{
returnValue = F("Heimbronner Weg");
break;
}
case 136998:
{
returnValue = F("Heimbruch");
break;
}
case 136999:
{
returnValue = F("Heimbrucher Str.");
break;
}
case 137000:
{
returnValue = F("Heimbrunnenstr.");
break;
}
case 137001:
{
returnValue = F("Heimbuch");
break;
}
case 137002:
{
returnValue = F("Heimbuchenstr.");
break;
}
case 137003:
{
returnValue = F("Heimbucher Str.");
break;
}
case 137004:
{
returnValue = F("Heimbucherweg");
break;
}
case 137005:
{
returnValue = F("Heimbucherwinkl");
break;
}
case 137006:
{
returnValue = F("Heimbuchstr.");
break;
}
case 137007:
{
returnValue = F("Heimburger Kirchstr.");
break;
}
case 137008:
{
returnValue = F("Heimburger Kreisel");
break;
}
case 137009:
{
returnValue = F("Heimburger Neue Str.");
break;
}
case 137010:
{
returnValue = F("Heimburger Str.");
break;
}
case 137011:
{
returnValue = F("Heimburger Weg");
break;
}
case 137012:
{
returnValue = F("Heimburgerstr.");
break;
}
case 137013:
{
returnValue = F("Heimburgstr.");
break;
}
case 137014:
{
returnValue = F("Heimbühlstr.");
break;
}
case 137015:
{
returnValue = F("Heimbürger Allee");
break;
}
case 137016:
{
returnValue = F("Heimbürgestr.");
break;
}
case 137017:
{
returnValue = F("Heimchenbreite");
break;
}
case 137018:
{
returnValue = F("Heimchenbrink");
break;
}
case 137019:
{
returnValue = F("Heimchenweg");
break;
}
case 137020:
{
returnValue = F("Heimchenwinkel");
break;
}
case 137021:
{
returnValue = F("Heimchesweg");
break;
}
case 137022:
{
returnValue = F("Heimdallgang");
break;
}
case 137023:
{
returnValue = F("Heimeck");
break;
}
case 137024:
{
returnValue = F("Heimecker Str.");
break;
}
case 137025:
{
returnValue = F("Heimeckerweg");
break;
}
case 137026:
{
returnValue = F("Heimekerweg");
break;
}
case 137027:
{
returnValue = F("Heimelstr.");
break;
}
case 137028:
{
returnValue = F("Heimen");
break;
}
case 137029:
{
returnValue = F("Heimenbergweg");
break;
}
case 137030:
{
returnValue = F("Heimendahlstr.");
break;
}
case 137031:
{
returnValue = F("Heimenegger Weg");
break;
}
case 137032:
{
returnValue = F("Heimengasse");
break;
}
case 137033:
{
returnValue = F("Heimenhardtsträßle");
break;
}
case 137034:
{
returnValue = F("Heimenhofenstr.");
break;
}
case 137035:
{
returnValue = F("Heimenhofer Str.");
break;
}
case 137036:
{
returnValue = F("Heimenkircher Str.");
break;
}
case 137037:
{
returnValue = F("Heimenstein");
break;
}
case 137038:
{
returnValue = F("Heimensteinstr.");
break;
}
case 137039:
{
returnValue = F("Heimensteinweg");
break;
}
case 137040:
{
returnValue = F("Heimenstr.");
break;
}
case 137041:
{
returnValue = F("Heimental");
break;
}
case 137042:
{
returnValue = F("Heimentäle");
break;
}
case 137043:
{
returnValue = F("Heimenwiesen");
break;
}
case 137044:
{
returnValue = F("Heimenäcker");
break;
}
case 137045:
{
returnValue = F("Heimeradstr.");
break;
}
case 137046:
{
returnValue = F("Heimeranstr.");
break;
}
case 137047:
{
returnValue = F("Heimerdinger Allee");
break;
}
case 137048:
{
returnValue = F("Heimerdinger Str.");
break;
}
case 137049:
{
returnValue = F("Heimerdingerweg");
break;
}
case 137050:
{
returnValue = F("Heimerlmühle");
break;
}
case 137051:
{
returnValue = F("Heimersberg");
break;
}
case 137052:
{
returnValue = F("Heimersfeld");
break;
}
case 137053:
{
returnValue = F("Heimersheimer Str.");
break;
}
case 137054:
{
returnValue = F("Heimersheimer Weg");
break;
}
case 137055:
{
returnValue = F("Heimersstr.");
break;
}
case 137056:
{
returnValue = F("Heimersteinerstr.");
break;
}
case 137057:
{
returnValue = F("Heimerstr.");
break;
}
case 137058:
{
returnValue = F("Heimersweg");
break;
}
case 137059:
{
returnValue = F("Heimertinger Str.");
break;
}
case 137060:
{
returnValue = F("Heimertinger Weg");
break;
}
case 137061:
{
returnValue = F("Heimertsberg");
break;
}
case 137062:
{
returnValue = F("Heimertshäuser Str.");
break;
}
case 137063:
{
returnValue = F("Heimerwegwiesen");
break;
}
case 137064:
{
returnValue = F("Heimerzheim Friedhof");
break;
}
case 137065:
{
returnValue = F("Heimerzheimer Str.");
break;
}
case 137066:
{
returnValue = F("Heimes Hof");
break;
}
case 137067:
{
returnValue = F("Heimesbachweg");
break;
}
case 137068:
{
returnValue = F("Heimesgasse");
break;
}
case 137069:
{
returnValue = F("Heimesohl");
break;
}
case 137070:
{
returnValue = F("Heimesreutin");
break;
}
case 137071:
{
returnValue = F("Heimesstr.");
break;
}
case 137072:
{
returnValue = F("Heimest");
break;
}
case 137073:
{
returnValue = F("Heimeswinkelweg");
break;
}
case 137074:
{
returnValue = F("Heimethues Park");
break;
}
case 137075:
{
returnValue = F("Heimetsgrabenweg");
break;
}
case 137076:
{
returnValue = F("Heimfeld");
break;
}
case 137077:
{
returnValue = F("Heimfried");
break;
}
case 137078:
{
returnValue = F("Heimfriedstr.");
break;
}
case 137079:
{
returnValue = F("Heimfriedweg");
break;
}
case 137080:
{
returnValue = F("Heimgart");
break;
}
case 137081:
{
returnValue = F("Heimgarten");
break;
}
case 137082:
{
returnValue = F("Heimgartenbühl");
break;
}
case 137083:
{
returnValue = F("Heimgartensiedlung");
break;
}
case 137084:
{
returnValue = F("Heimgartenstr.");
break;
}
case 137085:
{
returnValue = F("Heimgartentreppe");
break;
}
case 137086:
{
returnValue = F("Heimgartenweg");
break;
}
case 137087:
{
returnValue = F("Heimgasse");
break;
}
case 137088:
{
returnValue = F("Heimhof");
break;
}
case 137089:
{
returnValue = F("Heimhofer Str.");
break;
}
case 137090:
{
returnValue = F("Heimhofstr.");
break;
}
case 137091:
{
returnValue = F("Heimholzer Str.");
break;
}
case 137092:
{
returnValue = F("Heimichestr.");
break;
}
case 137093:
{
returnValue = F("Heimicke");
break;
}
case 137094:
{
returnValue = F("Heimicker Weg");
break;
}
case 137095:
{
returnValue = F("Heimigstr.");
break;
}
case 137096:
{
returnValue = F("Heimigweg");
break;
}
case 137097:
{
returnValue = F("Heimikstr.");
break;
}
case 137098:
{
returnValue = F("Heiming");
break;
}
case 137099:
{
returnValue = F("Heiminger Str.");
break;
}
case 137100:
{
returnValue = F("Heimkehrer Str.");
break;
}
case 137101:
{
returnValue = F("Heimkehrersiedlung");
break;
}
case 137102:
{
returnValue = F("Heimkehrerstr.");
break;
}
case 137103:
{
returnValue = F("Heimkehrerweg");
break;
}
case 137104:
{
returnValue = F("Heimkestr.");
break;
}
case 137105:
{
returnValue = F("Heimkircher Str.");
break;
}
case 137106:
{
returnValue = F("Heimkäuserstr.");
break;
}
case 137107:
{
returnValue = F("Heimland");
break;
}
case 137108:
{
returnValue = F("Heimleite");
break;
}
case 137109:
{
returnValue = F("Heimlichenwasen");
break;
}
case 137110:
{
returnValue = F("Heimlicher Weg");
break;
}
case 137111:
{
returnValue = F("Heimlingerstr.");
break;
}
case 137112:
{
returnValue = F("Heimlingstr.");
break;
}
case 137113:
{
returnValue = F("Heimlinsbühl");
break;
}
case 137114:
{
returnValue = F("Heimländer Str.");
break;
}
case 137115:
{
returnValue = F("Heimostr.");
break;
}
case 137116:
{
returnValue = F("Heimoweg");
break;
}
case 137117:
{
returnValue = F("Heimpersdorfer Weg");
break;
}
case 137118:
{
returnValue = F("Heimrad-Prem-Str.");
break;
}
case 137119:
{
returnValue = F("Heimradstr.");
break;
}
case 137120:
{
returnValue = F("Heimrichtstatt");
break;
}
case 137121:
{
returnValue = F("Heimrode");
break;
}
case 137122:
{
returnValue = F("Heimrodstr.");
break;
}
case 137123:
{
returnValue = F("Heims-Weg");
break;
}
case 137124:
{
returnValue = F("Heimsaat");
break;
}
case 137125:
{
returnValue = F("Heimsang");
break;
}
case 137126:
{
returnValue = F("Heimschule");
break;
}
case 137127:
{
returnValue = F("Heimser Ortbruch");
break;
}
case 137128:
{
returnValue = F("Heimser Riehe");
break;
}
case 137129:
{
returnValue = F("Heimser Str.");
break;
}
case 137130:
{
returnValue = F("Heimser Weg");
break;
}
case 137131:
{
returnValue = F("Heimsgasse");
break;
}
case 137132:
{
returnValue = F("Heimsheimer Str.");
break;
}
case 137133:
{
returnValue = F("Heimsheimer Weg");
break;
}
case 137134:
{
returnValue = F("Heimskier");
break;
}
case 137135:
{
returnValue = F("Heimsort");
break;
}
case 137136:
{
returnValue = F("Heimsplanie");
break;
}
case 137137:
{
returnValue = F("Heimstatt");
break;
}
case 137138:
{
returnValue = F("Heimstedt");
break;
}
case 137139:
{
returnValue = F("Heimsteig");
break;
}
case 137140:
{
returnValue = F("Heimsteiner Weg");
break;
}
case 137141:
{
returnValue = F("Heimstetten");
break;
}
case 137142:
{
returnValue = F("Heimstettener Moosweg");
break;
}
case 137143:
{
returnValue = F("Heimstettener Str.");
break;
}
case 137144:
{
returnValue = F("Heimstettner Str.");
break;
}
case 137145:
{
returnValue = F("Heimstettner Weg");
break;
}
case 137146:
{
returnValue = F("Heimstr.");
break;
}
case 137147:
{
returnValue = F("Heimstweg");
break;
}
case 137148:
{
returnValue = F("Heimstätte");
break;
}
case 137149:
{
returnValue = F("Heimstätten");
break;
}
case 137150:
{
returnValue = F("Heimstättenallee");
break;
}
case 137151:
{
returnValue = F("Heimstättenbrücke");
break;
}
case 137152:
{
returnValue = F("Heimstättenhof");
break;
}
case 137153:
{
returnValue = F("Heimstättenplatz");
break;
}
case 137154:
{
returnValue = F("Heimstättenring");
break;
}
case 137155:
{
returnValue = F("Heimstättensiedlung");
break;
}
case 137156:
{
returnValue = F("Heimstättenstr.");
break;
}
case 137157:
{
returnValue = F("Heimstättenweg");
break;
}
case 137158:
{
returnValue = F("Heimtalstr.");
break;
}
case 137159:
{
returnValue = F("Heimtierpark Kunsterspring");
break;
}
case 137160:
{
returnValue = F("Heimtstr.");
break;
}
case 137161:
{
returnValue = F("Heimweg");
break;
}
case 137162:
{
returnValue = F("Heimweggasse");
break;
}
case 137163:
{
returnValue = F("Hein");
break;
}
case 137164:
{
returnValue = F("Hein Blöds Barfuß-Pfad");
break;
}
case 137165:
{
returnValue = F("Hein-Block-Str.");
break;
}
case 137166:
{
returnValue = F("Hein-Bredendiek-Str.");
break;
}
case 137167:
{
returnValue = F("Hein-Gas-Str.");
break;
}
case 137168:
{
returnValue = F("Hein-Godenwind-Weg");
break;
}
case 137169:
{
returnValue = F("Hein-Heckroth-Str.");
break;
}
case 137170:
{
returnValue = F("Hein-Hollenbek-Weg");
break;
}
case 137171:
{
returnValue = F("Hein-Koss-Steig");
break;
}
case 137172:
{
returnValue = F("Hein-Lüth-Redder");
break;
}
case 137173:
{
returnValue = F("Hein-Meyer-Str.");
break;
}
case 137174:
{
returnValue = F("Hein-Minkenberg-Str.");
break;
}
case 137175:
{
returnValue = F("Hein-Moeller-Str.");
break;
}
case 137176:
{
returnValue = F("Hein-Neufeld-Str.");
break;
}
case 137177:
{
returnValue = F("Hein-Neufeldt-Str.");
break;
}
case 137178:
{
returnValue = F("Hein-Nicus-Str.");
break;
}
case 137179:
{
returnValue = F("Hein-Schlüter-Str.");
break;
}
case 137180:
{
returnValue = F("Hein-Scholten-Str.");
break;
}
case 137181:
{
returnValue = F("Heinader Str.");
break;
}
case 137182:
{
returnValue = F("Heinaer Str.");
break;
}
case 137183:
{
returnValue = F("Heinbergstr.");
break;
}
case 137184:
{
returnValue = F("Heinbergweg");
break;
}
case 137185:
{
returnValue = F("Heinbockeler Str.");
break;
}
case 137186:
{
returnValue = F("Heinbockler Weg");
break;
}
case 137187:
{
returnValue = F("Heinbogenstr.");
break;
}
case 137188:
{
returnValue = F("Heinbuckel");
break;
}
case 137189:
{
returnValue = F("Heinbuschenberg");
break;
}
case 137190:
{
returnValue = F("Heindelspfad");
break;
}
case 137191:
{
returnValue = F("Heindelstr.");
break;
}
case 137192:
{
returnValue = F("Heinder Allee (unvollendte Lindenallee)");
break;
}
case 137193:
{
returnValue = F("Heinder Str.");
break;
}
case 137194:
{
returnValue = F("Heindlmühlenweg");
break;
}
case 137195:
{
returnValue = F("Heindlstr.");
break;
}
case 137196:
{
returnValue = F("Heineallee");
break;
}
case 137197:
{
returnValue = F("Heinebacher Str.");
break;
}
case 137198:
{
returnValue = F("Heinebacher Weg");
break;
}
case 137199:
{
returnValue = F("Heinebeeksweg");
break;
}
case 137200:
{
returnValue = F("Heineberg");
break;
}
case 137201:
{
returnValue = F("Heineberger Weg");
break;
}
case 137202:
{
returnValue = F("Heinebergstr.");
break;
}
case 137203:
{
returnValue = F("Heinebergweg");
break;
}
case 137204:
{
returnValue = F("Heinebuchenweg");
break;
}
case 137205:
{
returnValue = F("Heinebüchen");
break;
}
case 137206:
{
returnValue = F("Heinebüchenbruch");
break;
}
case 137207:
{
returnValue = F("Heineckegraben");
break;
}
case 137208:
{
returnValue = F("Heineckestr.");
break;
}
case 137209:
{
returnValue = F("Heineckeweg");
break;
}
case 137210:
{
returnValue = F("Heinefelder Str.");
break;
}
case 137211:
{
returnValue = F("Heinefelder Weg");
break;
}
case 137212:
{
returnValue = F("Heinegasse");
break;
}
case 137213:
{
returnValue = F("Heinegras");
break;
}
case 137214:
{
returnValue = F("Heinehof");
break;
}
case 137215:
{
returnValue = F("Heineken Boulevard");
break;
}
case 137216:
{
returnValue = F("Heineken Pohle");
break;
}
case 137217:
{
returnValue = F("Heinekenkamp");
break;
}
case 137218:
{
returnValue = F("Heineland");
break;
}
case 137219:
{
returnValue = F("Heinemann-Musoge-Weg");
break;
}
case 137220:
{
returnValue = F("Heinemannsgrundweg");
break;
}
case 137221:
{
returnValue = F("Heinemannstr.");
break;
}
case 137222:
{
returnValue = F("Heinemannsweg");
break;
}
case 137223:
{
returnValue = F("Heinemannweg");
break;
}
case 137224:
{
returnValue = F("Heinen Damm");
break;
}
case 137225:
{
returnValue = F("Heinen Weg");
break;
}
case 137226:
{
returnValue = F("Heinenbohm");
break;
}
case 137227:
{
returnValue = F("Heinenbusch");
break;
}
case 137228:
{
returnValue = F("Heinengärtenweg");
break;
}
case 137229:
{
returnValue = F("Heinenkamp");
break;
}
case 137230:
{
returnValue = F("Heinenpesch");
break;
}
case 137231:
{
returnValue = F("Heinenstr.");
break;
}
case 137232:
{
returnValue = F("Heinenweg");
break;
}
case 137233:
{
returnValue = F("Heinenwinkel");
break;
}
case 137234:
{
returnValue = F("Heinepark");
break;
}
case 137235:
{
returnValue = F("Heineplatz");
break;
}
case 137236:
{
returnValue = F("Heiner Heide");
break;
}
case 137237:
{
returnValue = F("Heiner Landstr.");
break;
}
case 137238:
{
returnValue = F("Heiner-Bauer-Ring");
break;
}
case 137239:
{
returnValue = F("Heiner-Dikreiter-Weg");
break;
}
case 137240:
{
returnValue = F("Heiner-Ditsch-Allee");
break;
}
case 137241:
{
returnValue = F("Heiner-Fleischmann-Str.");
break;
}
case 137242:
{
returnValue = F("Heiner-Jaumann-Str.");
break;
}
case 137243:
{
returnValue = F("Heiner-Knaub-Weg");
break;
}
case 137244:
{
returnValue = F("Heiner-Leßmann-Str.");
break;
}
case 137245:
{
returnValue = F("Heiner-Moll-Weg");
break;
}
case 137246:
{
returnValue = F("Heiner-Müller-Allee");
break;
}
case 137247:
{
returnValue = F("Heiner-Petersen-Wäi");
break;
}
case 137248:
{
returnValue = F("Heiner-Prössl-Str.");
break;
}
case 137249:
{
returnValue = F("Heinering");
break;
}
case 137250:
{
returnValue = F("Heiners Hof");
break;
}
case 137251:
{
returnValue = F("Heinersbachweg");
break;
}
case 137252:
{
returnValue = F("Heinersberger Str.");
break;
}
case 137253:
{
returnValue = F("Heinersberger Weg");
break;
}
case 137254:
{
returnValue = F("Heinersbrücker Str.");
break;
}
case 137255:
{
returnValue = F("Heinersdorf");
break;
}
case 137256:
{
returnValue = F("Heinersdorf Vorwerk");
break;
}
case 137257:
{
returnValue = F("Heinersdorfer Chaussee");
break;
}
case 137258:
{
returnValue = F("Heinersdorfer Damm");
break;
}
case 137259:
{
returnValue = F("Heinersdorfer Höhe");
break;
}
case 137260:
{
returnValue = F("Heinersdorfer Str.");
break;
}
case 137261:
{
returnValue = F("Heinersdorfer Weg");
break;
}
case 137262:
{
returnValue = F("Heinersgraben");
break;
}
case 137263:
{
returnValue = F("Heinersgrund");
break;
}
case 137264:
{
returnValue = F("Heinersreuther Str.");
break;
}
case 137265:
{
returnValue = F("Heinersreuther Weg");
break;
}
case 137266:
{
returnValue = F("Heinertstr.");
break;
}
case 137267:
{
returnValue = F("Heinerweg");
break;
}
case 137268:
{
returnValue = F("Heinestr.");
break;
}
case 137269:
{
returnValue = F("Heinewang");
break;
}
case 137270:
{
returnValue = F("Heineweg");
break;
}
case 137271:
{
returnValue = F("Heinfeld");
break;
}
case 137272:
{
returnValue = F("Heinfelder Str.");
break;
}
case 137273:
{
returnValue = F("Heinfelser Platz");
break;
}
case 137274:
{
returnValue = F("Heingasse");
break;
}
case 137275:
{
returnValue = F("Heinhausen");
break;
}
case 137276:
{
returnValue = F("Heinhauser Höh");
break;
}
case 137277:
{
returnValue = F("Heinhauser Weg");
break;
}
case 137278:
{
returnValue = F("Heinhausstr.");
break;
}
case 137279:
{
returnValue = F("Heinheimer Str.");
break;
}
case 137280:
{
returnValue = F("Heini-Baronner-Weg");
break;
}
case 137281:
{
returnValue = F("Heini-Dittmar-Str.");
break;
}
case 137282:
{
returnValue = F("Heini-Wiegmann-Weg");
break;
}
case 137283:
{
returnValue = F("Heinichenweg");
break;
}
case 137284:
{
returnValue = F("Heinickestr.");
break;
}
case 137285:
{
returnValue = F("Heinig Hoop");
break;
}
case 137286:
{
returnValue = F("Heinigstr.");
break;
}
case 137287:
{
returnValue = F("Heinigtenweg");
break;
}
case 137288:
{
returnValue = F("Heininger Kreuzung");
break;
}
case 137289:
{
returnValue = F("Heininger Ring");
break;
}
case 137290:
{
returnValue = F("Heininger Str.");
break;
}
case 137291:
{
returnValue = F("Heininger Weg");
break;
}
case 137292:
{
returnValue = F("Heiningersteinsträßchen");
break;
}
case 137293:
{
returnValue = F("Heiningerstr.");
break;
}
case 137294:
{
returnValue = F("Heiningstr.");
break;
}
case 137295:
{
returnValue = F("Heiningsweg");
break;
}
case 137296:
{
returnValue = F("Heinisbündstr.");
break;
}
case 137297:
{
returnValue = F("Heinislochweg");
break;
}
case 137298:
{
returnValue = F("Heinitzer Str.");
break;
}
case 137299:
{
returnValue = F("Heinitzpolder");
break;
}
case 137300:
{
returnValue = F("Heinitzstr.");
break;
}
case 137301:
{
returnValue = F("Heinitzstr.nbrücke");
break;
}
case 137302:
{
returnValue = F("Heinje Tannen");
break;
}
case 137303:
{
returnValue = F("Heinkampweg");
break;
}
case 137304:
{
returnValue = F("Heinkelmannstr.");
break;
}
case 137305:
{
returnValue = F("Heinkelstr.");
break;
}
case 137306:
{
returnValue = F("Heinkelweg");
break;
}
case 137307:
{
returnValue = F("Heinkenborsteler Str.");
break;
}
case 137308:
{
returnValue = F("Heinkenborsteler Weg");
break;
}
case 137309:
{
returnValue = F("Heinkenbusch");
break;
}
case 137310:
{
returnValue = F("Heinkens Hoek");
break;
}
case 137311:
{
returnValue = F("Heinkenstr.");
break;
}
case 137312:
{
returnValue = F("Heinkenweg");
break;
}
case 137313:
{
returnValue = F("Heinkessiepen");
break;
}
case 137314:
{
returnValue = F("Heinleinsweg");
break;
}
case 137315:
{
returnValue = F("Heinlenstr.");
break;
}
case 137316:
{
returnValue = F("Heinlethstr.");
break;
}
case 137317:
{
returnValue = F("Heinlingäßchen");
break;
}
case 137318:
{
returnValue = F("Heinlochsträßchen");
break;
}
case 137319:
{
returnValue = F("Heino-Korte-Weg");
break;
}
case 137320:
{
returnValue = F("Heinoldsgasse");
break;
}
case 137321:
{
returnValue = F("Heinoldshäuser");
break;
}
case 137322:
{
returnValue = F("Heinostr.");
break;
}
case 137323:
{
returnValue = F("Heinrich Ernst Weg");
break;
}
case 137324:
{
returnValue = F("Heinrich Heine Park");
break;
}
case 137325:
{
returnValue = F("Heinrich Heine Siedlung");
break;
}
case 137326:
{
returnValue = F("Heinrich Hertz Ring");
break;
}
case 137327:
{
returnValue = F("Heinrich Hertz-Str.");
break;
}
case 137328:
{
returnValue = F("Heinrich Kübler Weg");
break;
}
case 137329:
{
returnValue = F("Heinrich's Wiese");
break;
}
case 137330:
{
returnValue = F("Heinrich-Ahrens-Str.");
break;
}
case 137331:
{
returnValue = F("Heinrich-Albers-Weg");
break;
}
case 137332:
{
returnValue = F("Heinrich-Albert Str.");
break;
}
case 137333:
{
returnValue = F("Heinrich-Albert-Weg");
break;
}
case 137334:
{
returnValue = F("Heinrich-Albert-Zachariä-Bogen");
break;
}
case 137335:
{
returnValue = F("Heinrich-Albertz-Str.");
break;
}
case 137336:
{
returnValue = F("Heinrich-Albrecht-Str.");
break;
}
case 137337:
{
returnValue = F("Heinrich-Anstoetz-Str.");
break;
}
case 137338:
{
returnValue = F("Heinrich-Anton-Ickstadt-Anlage");
break;
}
case 137339:
{
returnValue = F("Heinrich-Apel-Str.");
break;
}
case 137340:
{
returnValue = F("Heinrich-Arend-Weg");
break;
}
case 137341:
{
returnValue = F("Heinrich-Aretz-Str.");
break;
}
case 137342:
{
returnValue = F("Heinrich-Arning-Str.");
break;
}
case 137343:
{
returnValue = F("Heinrich-Arnold-Weg");
break;
}
case 137344:
{
returnValue = F("Heinrich-Arzt-Str.");
break;
}
case 137345:
{
returnValue = F("Heinrich-Assmann-Str.");
break;
}
case 137346:
{
returnValue = F("Heinrich-Aue-Str.");
break;
}
case 137347:
{
returnValue = F("Heinrich-Aurnhammer-Str.");
break;
}
case 137348:
{
returnValue = F("Heinrich-Bach-Str.");
break;
}
case 137349:
{
returnValue = F("Heinrich-Bachmann-Str.");
break;
}
case 137350:
{
returnValue = F("Heinrich-Backensfeld-Str.");
break;
}
case 137351:
{
returnValue = F("Heinrich-Balzer-Str.");
break;
}
case 137352:
{
returnValue = F("Heinrich-Band-Weg");
break;
}
case 137353:
{
returnValue = F("Heinrich-Bandlow-Str.");
break;
}
case 137354:
{
returnValue = F("Heinrich-Banse-Str.");
break;
}
case 137355:
{
returnValue = F("Heinrich-Bart-Str.");
break;
}
case 137356:
{
returnValue = F("Heinrich-Barthelmes-Str.");
break;
}
case 137357:
{
returnValue = F("Heinrich-Bastian-Str.");
break;
}
case 137358:
{
returnValue = F("Heinrich-Bauer-Str.");
break;
}
case 137359:
{
returnValue = F("Heinrich-Bauer-Weg");
break;
}
case 137360:
{
returnValue = F("Heinrich-Baumann-Str.");
break;
}
case 137361:
{
returnValue = F("Heinrich-Baumer-Str.");
break;
}
case 137362:
{
returnValue = F("Heinrich-Baumgarte-Str.");
break;
}
case 137363:
{
returnValue = F("Heinrich-Bause-Str.");
break;
}
case 137364:
{
returnValue = F("Heinrich-Bebel-Str.");
break;
}
case 137365:
{
returnValue = F("Heinrich-Bechstein-Str.");
break;
}
case 137366:
{
returnValue = F("Heinrich-Bechtolsheimer-Str.");
break;
}
case 137367:
{
returnValue = F("Heinrich-Beck-Str.");
break;
}
case 137368:
{
returnValue = F("Heinrich-Becker-Str.");
break;
}
case 137369:
{
returnValue = F("Heinrich-Beckermann-Str.");
break;
}
case 137370:
{
returnValue = F("Heinrich-Beckmann-Str.");
break;
}
case 137371:
{
returnValue = F("Heinrich-Beensen-Str.");
break;
}
case 137372:
{
returnValue = F("Heinrich-Beer-Str.");
break;
}
case 137373:
{
returnValue = F("Heinrich-Beerbom-Platz");
break;
}
case 137374:
{
returnValue = F("Heinrich-Behnken-Str.");
break;
}
case 137375:
{
returnValue = F("Heinrich-Behnken-Weg");
break;
}
case 137376:
{
returnValue = F("Heinrich-Behr-Str.");
break;
}
case 137377:
{
returnValue = F("Heinrich-Behrmann-Weg");
break;
}
case 137378:
{
returnValue = F("Heinrich-Beinsen-Str.");
break;
}
case 137379:
{
returnValue = F("Heinrich-Beiser-Str.");
break;
}
case 137380:
{
returnValue = F("Heinrich-Bender-Str.");
break;
}
case 137381:
{
returnValue = F("Heinrich-Bengel-Anlage");
break;
}
case 137382:
{
returnValue = F("Heinrich-Benne-Str.");
break;
}
case 137383:
{
returnValue = F("Heinrich-Berge-Str.");
break;
}
case 137384:
{
returnValue = F("Heinrich-Bergmann-Weg");
break;
}
case 137385:
{
returnValue = F("Heinrich-Berlenbach-Str.");
break;
}
case 137386:
{
returnValue = F("Heinrich-Bernds-Hof");
break;
}
case 137387:
{
returnValue = F("Heinrich-Bernhardt-Str.");
break;
}
case 137388:
{
returnValue = F("Heinrich-Bernts-Str.");
break;
}
case 137389:
{
returnValue = F("Heinrich-Bertram-Ring");
break;
}
case 137390:
{
returnValue = F("Heinrich-Bertrand-Höhe");
break;
}
case 137391:
{
returnValue = F("Heinrich-Besserer-Weg");
break;
}
case 137392:
{
returnValue = F("Heinrich-Beth-Str.");
break;
}
case 137393:
{
returnValue = F("Heinrich-Bettinger-Str.");
break;
}
case 137394:
{
returnValue = F("Heinrich-Bienen-Str.");
break;
}
case 137395:
{
returnValue = F("Heinrich-Bierwirth-Str.");
break;
}
case 137396:
{
returnValue = F("Heinrich-Bilcken-Weg");
break;
}
case 137397:
{
returnValue = F("Heinrich-Binn-Str.");
break;
}
case 137398:
{
returnValue = F("Heinrich-Bischoff-Str.");
break;
}
case 137399:
{
returnValue = F("Heinrich-Blanc-Str.");
break;
}
case 137400:
{
returnValue = F("Heinrich-Blum-Str.");
break;
}
case 137401:
{
returnValue = F("Heinrich-Blum-Weg");
break;
}
case 137402:
{
returnValue = F("Heinrich-Blume-Weg");
break;
}
case 137403:
{
returnValue = F("Heinrich-Bock-Str.");
break;
}
case 137404:
{
returnValue = F("Heinrich-Boekamp-Str.");
break;
}
case 137405:
{
returnValue = F("Heinrich-Bohling-Str.");
break;
}
case 137406:
{
returnValue = F("Heinrich-Bolze-Str.");
break;
}
case 137407:
{
returnValue = F("Heinrich-Bone-Str.");
break;
}
case 137408:
{
returnValue = F("Heinrich-Bonnes-Weg");
break;
}
case 137409:
{
returnValue = F("Heinrich-Bopp-Weg");
break;
}
case 137410:
{
returnValue = F("Heinrich-Borchers-Str.");
break;
}
case 137411:
{
returnValue = F("Heinrich-Borgmann-Str.");
break;
}
case 137412:
{
returnValue = F("Heinrich-Bormann-Ring");
break;
}
case 137413:
{
returnValue = F("Heinrich-Borwin-Str.");
break;
}
case 137414:
{
returnValue = F("Heinrich-Boschen-Str.");
break;
}
case 137415:
{
returnValue = F("Heinrich-Bott-Str.");
break;
}
case 137416:
{
returnValue = F("Heinrich-Brandes-Str.");
break;
}
case 137417:
{
returnValue = F("Heinrich-Brandewiede-Str.");
break;
}
case 137418:
{
returnValue = F("Heinrich-Brandt-Str.");
break;
}
case 137419:
{
returnValue = F("Heinrich-Brandt-Weg");
break;
}
case 137420:
{
returnValue = F("Heinrich-Brauch-Str.");
break;
}
case 137421:
{
returnValue = F("Heinrich-Braun-Str.");
break;
}
case 137422:
{
returnValue = F("Heinrich-Brauns-Str.");
break;
}
case 137423:
{
returnValue = F("Heinrich-Brauns-Weg");
break;
}
case 137424:
{
returnValue = F("Heinrich-Brune-Str.");
break;
}
case 137425:
{
returnValue = F("Heinrich-Brunner-Str.");
break;
}
case 137426:
{
returnValue = F("Heinrich-Bruns-Weg");
break;
}
case 137427:
{
returnValue = F("Heinrich-Brömmling-Str.");
break;
}
case 137428:
{
returnValue = F("Heinrich-Brücher-Str.");
break;
}
case 137429:
{
returnValue = F("Heinrich-Brüne-Weg");
break;
}
case 137430:
{
returnValue = F("Heinrich-Brüning-Str.");
break;
}
case 137431:
{
returnValue = F("Heinrich-Buff-Ring");
break;
}
case 137432:
{
returnValue = F("Heinrich-Burkard-Platz");
break;
}
case 137433:
{
returnValue = F("Heinrich-Busch-Str.");
break;
}
case 137434:
{
returnValue = F("Heinrich-Busold-Str.");
break;
}
case 137435:
{
returnValue = F("Heinrich-Butzfeld-Str.");
break;
}
case 137436:
{
returnValue = F("Heinrich-Buxbaum-Str.");
break;
}
case 137437:
{
returnValue = F("Heinrich-Bärmann-Str.");
break;
}
case 137438:
{
returnValue = F("Heinrich-Bäthmann-Str.");
break;
}
case 137439:
{
returnValue = F("Heinrich-Böcking-Str.");
break;
}
case 137440:
{
returnValue = F("Heinrich-Böll-Platz");
break;
}
case 137441:
{
returnValue = F("Heinrich-Böll-Ring");
break;
}
case 137442:
{
returnValue = F("Heinrich-Böll-Str.");
break;
}
case 137443:
{
returnValue = F("Heinrich-Böll-Weg");
break;
}
case 137444:
{
returnValue = F("Heinrich-Börner-Str.");
break;
}
case 137445:
{
returnValue = F("Heinrich-Bösiger-Str.");
break;
}
case 137446:
{
returnValue = F("Heinrich-Bürger-Str.");
break;
}
case 137447:
{
returnValue = F("Heinrich-Bürger-Weg");
break;
}
case 137448:
{
returnValue = F("Heinrich-Büscher-Str.");
break;
}
case 137449:
{
returnValue = F("Heinrich-Büssing-Str.");
break;
}
case 137450:
{
returnValue = F("Heinrich-C.-Busche-Weg");
break;
}
case 137451:
{
returnValue = F("Heinrich-Campendonk-Str.");
break;
}
case 137452:
{
returnValue = F("Heinrich-Caro-Str.");
break;
}
case 137453:
{
returnValue = F("Heinrich-Casson-Str.");
break;
}
case 137454:
{
returnValue = F("Heinrich-Christian-Funck-Str.");
break;
}
case 137455:
{
returnValue = F("Heinrich-Christiansen-Str.");
break;
}
case 137456:
{
returnValue = F("Heinrich-Claes-Str.");
break;
}
case 137457:
{
returnValue = F("Heinrich-Claus-Str.");
break;
}
case 137458:
{
returnValue = F("Heinrich-Clemens-Weg");
break;
}
case 137459:
{
returnValue = F("Heinrich-Cless-Str.");
break;
}
case 137460:
{
returnValue = F("Heinrich-Coerper-Weg");
break;
}
case 137461:
{
returnValue = F("Heinrich-Collina-Str.");
break;
}
case 137462:
{
returnValue = F("Heinrich-Cordes-Platz");
break;
}
case 137463:
{
returnValue = F("Heinrich-Cotta-Str.");
break;
}
case 137464:
{
returnValue = F("Heinrich-Cotta-Weg");
break;
}
case 137465:
{
returnValue = F("Heinrich-Credner-Str.");
break;
}
case 137466:
{
returnValue = F("Heinrich-Cremer-Str.");
break;
}
case 137467:
{
returnValue = F("Heinrich-Cöster-Weg");
break;
}
case 137468:
{
returnValue = F("Heinrich-Dannenberg-Weg");
break;
}
case 137469:
{
returnValue = F("Heinrich-Dauer-Str.");
break;
}
case 137470:
{
returnValue = F("Heinrich-Decius-Str.");
break;
}
case 137471:
{
returnValue = F("Heinrich-Dehmer-Str.");
break;
}
case 137472:
{
returnValue = F("Heinrich-Deibel-Str.");
break;
}
case 137473:
{
returnValue = F("Heinrich-Deist-Str.");
break;
}
case 137474:
{
returnValue = F("Heinrich-Delp-Str.");
break;
}
case 137475:
{
returnValue = F("Heinrich-Deppe-Ring");
break;
}
case 137476:
{
returnValue = F("Heinrich-Deppe-Weg");
break;
}
case 137477:
{
returnValue = F("Heinrich-Deumeland-Str.");
break;
}
case 137478:
{
returnValue = F("Heinrich-Dicke-Str.");
break;
}
case 137479:
{
returnValue = F("Heinrich-Dickmann-Str.");
break;
}
case 137480:
{
returnValue = F("Heinrich-Diehl-Str.");
break;
}
case 137481:
{
returnValue = F("Heinrich-Diers-Str.");
break;
}
case 137482:
{
returnValue = F("Heinrich-Dirichs-Str.");
break;
}
case 137483:
{
returnValue = F("Heinrich-Doergens-Str.");
break;
}
case 137484:
{
returnValue = F("Heinrich-Dohm-Str.");
break;
}
case 137485:
{
returnValue = F("Heinrich-Dohmen-Str.");
break;
}
case 137486:
{
returnValue = F("Heinrich-Dohmen-Weg");
break;
}
case 137487:
{
returnValue = F("Heinrich-Doll-Str.");
break;
}
case 137488:
{
returnValue = F("Heinrich-Dorrenbach-Str.");
break;
}
case 137489:
{
returnValue = F("Heinrich-Drake-Platz");
break;
}
case 137490:
{
returnValue = F("Heinrich-Drake-Siedlung");
break;
}
case 137491:
{
returnValue = F("Heinrich-Drake-Str.");
break;
}
case 137492:
{
returnValue = F("Heinrich-Dreyer-Str.");
break;
}
case 137493:
{
returnValue = F("Heinrich-Drissner-Str.");
break;
}
case 137494:
{
returnValue = F("Heinrich-Droste-Str.");
break;
}
case 137495:
{
returnValue = F("Heinrich-Duhme-Str.");
break;
}
case 137496:
{
returnValue = F("Heinrich-Dürscherl-Str.");
break;
}
case 137497:
{
returnValue = F("Heinrich-Düster-Str.");
break;
}
case 137498:
{
returnValue = F("Heinrich-Eckmann-Str.");
break;
}
case 137499:
{
returnValue = F("Heinrich-Eckstein-Str.");
break;
}
case 137500:
{
returnValue = F("Heinrich-Edel-Str.");
break;
}
case 137501:
{
returnValue = F("Heinrich-Eger-Str.");
break;
}
case 137502:
{
returnValue = F("Heinrich-Egerer-Str.");
break;
}
case 137503:
{
returnValue = F("Heinrich-Egger-Str.");
break;
}
case 137504:
{
returnValue = F("Heinrich-Eggers-Str.");
break;
}
case 137505:
{
returnValue = F("Heinrich-Ehrhardt-Platz");
break;
}
case 137506:
{
returnValue = F("Heinrich-Ehrhardt-Str.");
break;
}
case 137507:
{
returnValue = F("Heinrich-Ehrmann-Str.");
break;
}
case 137508:
{
returnValue = F("Heinrich-Eiber-Str.");
break;
}
case 137509:
{
returnValue = F("Heinrich-Eichhorn-Weg");
break;
}
case 137510:
{
returnValue = F("Heinrich-Eingrieber-Str.");
break;
}
case 137511:
{
returnValue = F("Heinrich-Emerich-Str.");
break;
}
case 137512:
{
returnValue = F("Heinrich-Engel-Anlage");
break;
}
case 137513:
{
returnValue = F("Heinrich-Engel-Str.");
break;
}
case 137514:
{
returnValue = F("Heinrich-Engel-Weg");
break;
}
case 137515:
{
returnValue = F("Heinrich-Erdmann-Str.");
break;
}
case 137516:
{
returnValue = F("Heinrich-Erhardt-Str.");
break;
}
case 137517:
{
returnValue = F("Heinrich-Ermann-Str.");
break;
}
case 137518:
{
returnValue = F("Heinrich-Ernemann-Str.");
break;
}
case 137519:
{
returnValue = F("Heinrich-Ernst-Kromer-Str.");
break;
}
case 137520:
{
returnValue = F("Heinrich-Ernst-Weg");
break;
}
case 137521:
{
returnValue = F("Heinrich-Eschenburg-Weg");
break;
}
case 137522:
{
returnValue = F("Heinrich-Esser-Str.");
break;
}
case 137523:
{
returnValue = F("Heinrich-Essig-Str.");
break;
}
case 137524:
{
returnValue = F("Heinrich-Evers-Str.");
break;
}
case 137525:
{
returnValue = F("Heinrich-Fahr-Str.");
break;
}
case 137526:
{
returnValue = F("Heinrich-Fahrenholz-Str.");
break;
}
case 137527:
{
returnValue = F("Heinrich-Fausel-Weg");
break;
}
case 137528:
{
returnValue = F("Heinrich-Faust-Str.");
break;
}
case 137529:
{
returnValue = F("Heinrich-Fehrer-Str.");
break;
}
case 137530:
{
returnValue = F("Heinrich-Feldwisch-Str.");
break;
}
case 137531:
{
returnValue = F("Heinrich-Feller-Str.");
break;
}
case 137532:
{
returnValue = F("Heinrich-Felten-Str.");
break;
}
case 137533:
{
returnValue = F("Heinrich-Fend-Str.");
break;
}
case 137534:
{
returnValue = F("Heinrich-Fendel-Str.");
break;
}
case 137535:
{
returnValue = F("Heinrich-Ferkinghoff-Str.");
break;
}
case 137536:
{
returnValue = F("Heinrich-Feurstein-Str.");
break;
}
case 137537:
{
returnValue = F("Heinrich-Fickenscher-Str.");
break;
}
case 137538:
{
returnValue = F("Heinrich-Fieseler-Weg");
break;
}
case 137539:
{
returnValue = F("Heinrich-Fischer-Str.");
break;
}
case 137540:
{
returnValue = F("Heinrich-Flake-Weg");
break;
}
case 137541:
{
returnValue = F("Heinrich-Fluitter-Platz");
break;
}
case 137542:
{
returnValue = F("Heinrich-Focke-Str.");
break;
}
case 137543:
{
returnValue = F("Heinrich-Forschner-Str.");
break;
}
case 137544:
{
returnValue = F("Heinrich-Fourier-Str.");
break;
}
case 137545:
{
returnValue = F("Heinrich-Franke-Weg");
break;
}
case 137546:
{
returnValue = F("Heinrich-Franken-Str.");
break;
}
case 137547:
{
returnValue = F("Heinrich-Franz-Möbs-Str.");
break;
}
case 137548:
{
returnValue = F("Heinrich-Fraß-Str.");
break;
}
case 137549:
{
returnValue = F("Heinrich-Freber-Str.");
break;
}
case 137550:
{
returnValue = F("Heinrich-Freitäger-Str.");
break;
}
case 137551:
{
returnValue = F("Heinrich-Fresenborg-Str.");
break;
}
case 137552:
{
returnValue = F("Heinrich-Frey-Str.");
break;
}
case 137553:
{
returnValue = F("Heinrich-Freye-Str.");
break;
}
case 137554:
{
returnValue = F("Heinrich-Fries-Str.");
break;
}
case 137555:
{
returnValue = F("Heinrich-Fritz-Str.");
break;
}
case 137556:
{
returnValue = F("Heinrich-Fuchs-Str.");
break;
}
case 137557:
{
returnValue = F("Heinrich-Fuhr-Str.");
break;
}
case 137558:
{
returnValue = F("Heinrich-Fulda-Weg");
break;
}
case 137559:
{
returnValue = F("Heinrich-Funcke-Str.");
break;
}
case 137560:
{
returnValue = F("Heinrich-Funk-Weg");
break;
}
case 137561:
{
returnValue = F("Heinrich-Fuß-Str.");
break;
}
case 137562:
{
returnValue = F("Heinrich-Fürstenberger-Str.");
break;
}
case 137563:
{
returnValue = F("Heinrich-Gade-Str.");
break;
}
case 137564:
{
returnValue = F("Heinrich-Gebhard-Str.");
break;
}
case 137565:
{
returnValue = F("Heinrich-Geick-Str.");
break;
}
case 137566:
{
returnValue = F("Heinrich-Geiler-Str.");
break;
}
case 137567:
{
returnValue = F("Heinrich-Geißler-Str.");
break;
}
case 137568:
{
returnValue = F("Heinrich-Gelhard-Weg");
break;
}
case 137569:
{
returnValue = F("Heinrich-Gelzenleuchter-Str.");
break;
}
case 137570:
{
returnValue = F("Heinrich-Georg-Neuss-Str.");
break;
}
case 137571:
{
returnValue = F("Heinrich-George-Weg");
break;
}
case 137572:
{
returnValue = F("Heinrich-Gerdom-Str.");
break;
}
case 137573:
{
returnValue = F("Heinrich-Gereke-Str.");
break;
}
case 137574:
{
returnValue = F("Heinrich-Gerhard-Bücker-Weg");
break;
}
case 137575:
{
returnValue = F("Heinrich-Gerlach-Str.");
break;
}
case 137576:
{
returnValue = F("Heinrich-Gestering-Str.");
break;
}
case 137577:
{
returnValue = F("Heinrich-Giehl-Str.");
break;
}
case 137578:
{
returnValue = F("Heinrich-Giesen-Str.");
break;
}
case 137579:
{
returnValue = F("Heinrich-Gläser-Str.");
break;
}
case 137580:
{
returnValue = F("Heinrich-Glücklich-Str.");
break;
}
case 137581:
{
returnValue = F("Heinrich-Goebel-Str.");
break;
}
case 137582:
{
returnValue = F("Heinrich-Goedeke-Str.");
break;
}
case 137583:
{
returnValue = F("Heinrich-Gossen-Str.");
break;
}
case 137584:
{
returnValue = F("Heinrich-Goswin-Str.");
break;
}
case 137585:
{
returnValue = F("Heinrich-Gottfried-Trost-Weg");
break;
}
case 137586:
{
returnValue = F("Heinrich-Grauthoff-Str.");
break;
}
case 137587:
{
returnValue = F("Heinrich-Grebe-Str.");
break;
}
case 137588:
{
returnValue = F("Heinrich-Gredy-Str.");
break;
}
case 137589:
{
returnValue = F("Heinrich-Grethe-Str.");
break;
}
case 137590:
{
returnValue = F("Heinrich-Grewer-Str.");
break;
}
case 137591:
{
returnValue = F("Heinrich-Grob-Str.");
break;
}
case 137592:
{
returnValue = F("Heinrich-Groeneveld-Str.");
break;
}
case 137593:
{
returnValue = F("Heinrich-Grote-Ring");
break;
}
case 137594:
{
returnValue = F("Heinrich-Groß-Weg");
break;
}
case 137595:
{
returnValue = F("Heinrich-Grube-Weg");
break;
}
case 137596:
{
returnValue = F("Heinrich-Grupe-Str.");
break;
}
case 137597:
{
returnValue = F("Heinrich-Gruß-Str.");
break;
}
case 137598:
{
returnValue = F("Heinrich-Gröschner-Str.");
break;
}
case 137599:
{
returnValue = F("Heinrich-Grüber-Platz");
break;
}
case 137600:
{
returnValue = F("Heinrich-Gudemann-Ring");
break;
}
case 137601:
{
returnValue = F("Heinrich-Gutberlet-Str.");
break;
}
case 137602:
{
returnValue = F("Heinrich-Gutermuth-Str.");
break;
}
case 137603:
{
returnValue = F("Heinrich-Gyr-Str.");
break;
}
case 137604:
{
returnValue = F("Heinrich-Gärtner-Str.");
break;
}
case 137605:
{
returnValue = F("Heinrich-Gätke-Str.");
break;
}
case 137606:
{
returnValue = F("Heinrich-Göbel-Str.");
break;
}
case 137607:
{
returnValue = F("Heinrich-Göbel-Weg");
break;
}
case 137608:
{
returnValue = F("Heinrich-Göding-Str.");
break;
}
case 137609:
{
returnValue = F("Heinrich-Görg-Str.");
break;
}
case 137610:
{
returnValue = F("Heinrich-Götz-Str.");
break;
}
case 137611:
{
returnValue = F("Heinrich-Günter-Str.");
break;
}
case 137612:
{
returnValue = F("Heinrich-Haanen-Str.");
break;
}
case 137613:
{
returnValue = F("Heinrich-Haas-Str.");
break;
}
case 137614:
{
returnValue = F("Heinrich-Hack-Weg");
break;
}
case 137615:
{
returnValue = F("Heinrich-Hagemann-Allee");
break;
}
case 137616:
{
returnValue = F("Heinrich-Hager-Str.");
break;
}
case 137617:
{
returnValue = F("Heinrich-Hagmaier-Platz");
break;
}
case 137618:
{
returnValue = F("Heinrich-Hahn-Str.");
break;
}
case 137619:
{
returnValue = F("Heinrich-Hahne-Weg");
break;
}
case 137620:
{
returnValue = F("Heinrich-Haiger-Str.");
break;
}
case 137621:
{
returnValue = F("Heinrich-Hain-Str.");
break;
}
case 137622:
{
returnValue = F("Heinrich-Halberstadt-Weg");
break;
}
case 137623:
{
returnValue = F("Heinrich-Halfen-Str.");
break;
}
case 137624:
{
returnValue = F("Heinrich-Hall-Str.");
break;
}
case 137625:
{
returnValue = F("Heinrich-Haltermann-Weg");
break;
}
case 137626:
{
returnValue = F("Heinrich-Hamker-Str.");
break;
}
case 137627:
{
returnValue = F("Heinrich-Hansen-Str.");
break;
}
case 137628:
{
returnValue = F("Heinrich-Hansjakob-Weg");
break;
}
case 137629:
{
returnValue = F("Heinrich-Harder-Str.");
break;
}
case 137630:
{
returnValue = F("Heinrich-Harms-Weg");
break;
}
case 137631:
{
returnValue = F("Heinrich-Hartwig-Str.");
break;
}
case 137632:
{
returnValue = F("Heinrich-Hauer Weg");
break;
}
case 137633:
{
returnValue = F("Heinrich-Hauschildt-Str.");
break;
}
case 137634:
{
returnValue = F("Heinrich-Hebel-Str.");
break;
}
case 137635:
{
returnValue = F("Heinrich-Hegmann-Str.");
break;
}
case 137636:
{
returnValue = F("Heinrich-Heidenthal-Str.");
break;
}
case 137637:
{
returnValue = F("Heinrich-Heidner-Str.");
break;
}
case 137638:
{
returnValue = F("Heinrich-Heine Park");
break;
}
case 137639:
{
returnValue = F("Heinrich-Heine Str.");
break;
}
case 137640:
{
returnValue = F("Heinrich-Heine-Allee");
break;
}
case 137641:
{
returnValue = F("Heinrich-Heine-Anlage");
break;
}
case 137642:
{
returnValue = F("Heinrich-Heine-Platz");
break;
}
case 137643:
{
returnValue = F("Heinrich-Heine-Promenade");
break;
}
case 137644:
{
returnValue = F("Heinrich-Heine-Ring");
break;
}
case 137645:
{
returnValue = F("Heinrich-Heine-Siedlung");
break;
}
case 137646:
{
returnValue = F("Heinrich-Heine-Str.");
break;
}
case 137647:
{
returnValue = F("Heinrich-Heine-Ufer");
break;
}
case 137648:
{
returnValue = F("Heinrich-Heine-Weg");
break;
}
case 137649:
{
returnValue = F("Heinrich-Heins-Weg");
break;
}
case 137650:
{
returnValue = F("Heinrich-Held-Str.");
break;
}
case 137651:
{
returnValue = F("Heinrich-Helfer-Str.");
break;
}
case 137652:
{
returnValue = F("Heinrich-Helmke-Str.");
break;
}
case 137653:
{
returnValue = F("Heinrich-Hembrock-Str.");
break;
}
case 137654:
{
returnValue = F("Heinrich-Henstorf-Str.");
break;
}
case 137655:
{
returnValue = F("Heinrich-Hepp-Str.");
break;
}
case 137656:
{
returnValue = F("Heinrich-Hermann-Str.");
break;
}
case 137657:
{
returnValue = F("Heinrich-Herold-Str.");
break;
}
case 137658:
{
returnValue = F("Heinrich-Hertwig-Str.");
break;
}
case 137659:
{
returnValue = F("Heinrich-Hertz-Allee");
break;
}
case 137660:
{
returnValue = F("Heinrich-Hertz-Platz");
break;
}
case 137661:
{
returnValue = F("Heinrich-Hertz-Ring");
break;
}
case 137662:
{
returnValue = F("Heinrich-Hertz-Str.");
break;
}
case 137663:
{
returnValue = F("Heinrich-Hertz-Weg");
break;
}
case 137664:
{
returnValue = F("Heinrich-Herz-Str.");
break;
}
case 137665:
{
returnValue = F("Heinrich-Herzog-Str.");
break;
}
case 137666:
{
returnValue = F("Heinrich-Hesse-Str.");
break;
}
case 137667:
{
returnValue = F("Heinrich-Hettiger-Platz");
break;
}
case 137668:
{
returnValue = F("Heinrich-Heuser-Str.");
break;
}
case 137669:
{
returnValue = F("Heinrich-Heyers-Str.");
break;
}
case 137670:
{
returnValue = F("Heinrich-Hildebrand-Str.");
break;
}
case 137671:
{
returnValue = F("Heinrich-Hill-Str.");
break;
}
case 137672:
{
returnValue = F("Heinrich-Hille-Str.");
break;
}
case 137673:
{
returnValue = F("Heinrich-Hillebrand-Str.");
break;
}
case 137674:
{
returnValue = F("Heinrich-Hillebrandt-Str.");
break;
}
case 137675:
{
returnValue = F("Heinrich-Hillermann-Weg");
break;
}
case 137676:
{
returnValue = F("Heinrich-Hische-Weg");
break;
}
case 137677:
{
returnValue = F("Heinrich-Hoerle-Str.");
break;
}
case 137678:
{
returnValue = F("Heinrich-Hoffmann-Str.");
break;
}
case 137679:
{
returnValue = F("Heinrich-Hoffmann-von-Fallersleben-Str.");
break;
}
case 137680:
{
returnValue = F("Heinrich-Hofmann-Str.");
break;
}
case 137681:
{
returnValue = F("Heinrich-Hofrichter-Str.");
break;
}
case 137682:
{
returnValue = F("Heinrich-Holland-Str.");
break;
}
case 137683:
{
returnValue = F("Heinrich-Hollmann-Str.");
break;
}
case 137684:
{
returnValue = F("Heinrich-Holthaus-Str.");
break;
}
case 137685:
{
returnValue = F("Heinrich-Holtkamp-Str.");
break;
}
case 137686:
{
returnValue = F("Heinrich-Honer-Str.");
break;
}
case 137687:
{
returnValue = F("Heinrich-Horn-Platz");
break;
}
case 137688:
{
returnValue = F("Heinrich-Horn-Str.");
break;
}
case 137689:
{
returnValue = F("Heinrich-Hornbostel-Str.");
break;
}
case 137690:
{
returnValue = F("Heinrich-Horten-Str.");
break;
}
case 137691:
{
returnValue = F("Heinrich-Houben-Str.");
break;
}
case 137692:
{
returnValue = F("Heinrich-Huber Str.");
break;
}
case 137693:
{
returnValue = F("Heinrich-Hug-Str.");
break;
}
case 137694:
{
returnValue = F("Heinrich-Hunfeld-Str.");
break;
}
case 137695:
{
returnValue = F("Heinrich-Huppmann-Str.");
break;
}
case 137696:
{
returnValue = F("Heinrich-Huth-Str.");
break;
}
case 137697:
{
returnValue = F("Heinrich-Häberle-Str.");
break;
}
case 137698:
{
returnValue = F("Heinrich-Hähnlein-Weg");
break;
}
case 137699:
{
returnValue = F("Heinrich-Härle-Str.");
break;
}
case 137700:
{
returnValue = F("Heinrich-Höppner-Weg");
break;
}
case 137701:
{
returnValue = F("Heinrich-Hörlein-Str.");
break;
}
case 137702:
{
returnValue = F("Heinrich-Höschler-Str.");
break;
}
case 137703:
{
returnValue = F("Heinrich-Hübsch-Str.");
break;
}
case 137704:
{
returnValue = F("Heinrich-Hübsch-Weg");
break;
}
case 137705:
{
returnValue = F("Heinrich-Hübschmann-Ring");
break;
}
case 137706:
{
returnValue = F("Heinrich-Hüller Platz");
break;
}
case 137707:
{
returnValue = F("Heinrich-Hünerkopf-Weg");
break;
}
case 137708:
{
returnValue = F("Heinrich-Ilemann-Str.");
break;
}
case 137709:
{
returnValue = F("Heinrich-Imbusch-Platz");
break;
}
case 137710:
{
returnValue = F("Heinrich-Imbusch-Str.");
break;
}
case 137711:
{
returnValue = F("Heinrich-Imig-Platz");
break;
}
case 137712:
{
returnValue = F("Heinrich-Imig-Str.");
break;
}
case 137713:
{
returnValue = F("Heinrich-Jacobi-Str.");
break;
}
case 137714:
{
returnValue = F("Heinrich-Jacobs-Platz");
break;
}
case 137715:
{
returnValue = F("Heinrich-Jakob-Berz-Weg");
break;
}
case 137716:
{
returnValue = F("Heinrich-Jakob-Fried-Str.");
break;
}
case 137717:
{
returnValue = F("Heinrich-Jakob-Str.");
break;
}
case 137718:
{
returnValue = F("Heinrich-Jansen-Str.");
break;
}
case 137719:
{
returnValue = F("Heinrich-Jansen-Weg");
break;
}
case 137720:
{
returnValue = F("Heinrich-Jasper-Platz");
break;
}
case 137721:
{
returnValue = F("Heinrich-Jasper-Str.");
break;
}
case 137722:
{
returnValue = F("Heinrich-Jasper-Weg");
break;
}
case 137723:
{
returnValue = F("Heinrich-Jebens-Siedlung");
break;
}
case 137724:
{
returnValue = F("Heinrich-Jennißen-Str.");
break;
}
case 137725:
{
returnValue = F("Heinrich-Jepsen-Str.");
break;
}
case 137726:
{
returnValue = F("Heinrich-Jobst-Weg");
break;
}
case 137727:
{
returnValue = F("Heinrich-Julius-Str.");
break;
}
case 137728:
{
returnValue = F("Heinrich-Jung-Str.");
break;
}
case 137729:
{
returnValue = F("Heinrich-Jäde-Str.");
break;
}
case 137730:
{
returnValue = F("Heinrich-Jürs-Weg");
break;
}
case 137731:
{
returnValue = F("Heinrich-Kahn-Str.");
break;
}
case 137732:
{
returnValue = F("Heinrich-Kaiser-Str.");
break;
}
case 137733:
{
returnValue = F("Heinrich-Kamp-Str.");
break;
}
case 137734:
{
returnValue = F("Heinrich-Kanzler-Str.");
break;
}
case 137735:
{
returnValue = F("Heinrich-Kappelmann-Str.");
break;
}
case 137736:
{
returnValue = F("Heinrich-Kardinahl-Str.");
break;
}
case 137737:
{
returnValue = F("Heinrich-Kaspar-Schmid-Str.");
break;
}
case 137738:
{
returnValue = F("Heinrich-Kauert-Weg");
break;
}
case 137739:
{
returnValue = F("Heinrich-Kaufmann-Str.");
break;
}
case 137740:
{
returnValue = F("Heinrich-Kaufmann-Weg");
break;
}
case 137741:
{
returnValue = F("Heinrich-Kaul-Platz");
break;
}
case 137742:
{
returnValue = F("Heinrich-Keidel-Str.");
break;
}
case 137743:
{
returnValue = F("Heinrich-Keim-Weg");
break;
}
case 137744:
{
returnValue = F("Heinrich-Kellner-Str.");
break;
}
case 137745:
{
returnValue = F("Heinrich-Kemp-Weg");
break;
}
case 137746:
{
returnValue = F("Heinrich-Kempchen-Str.");
break;
}
case 137747:
{
returnValue = F("Heinrich-Kemper-Str.");
break;
}
case 137748:
{
returnValue = F("Heinrich-Keppele-Ring");
break;
}
case 137749:
{
returnValue = F("Heinrich-Kessels-Str.");
break;
}
case 137750:
{
returnValue = F("Heinrich-Kiefer-Str.");
break;
}
case 137751:
{
returnValue = F("Heinrich-Kielhorn-Str.");
break;
}
case 137752:
{
returnValue = F("Heinrich-Kimmle-Weg");
break;
}
case 137753:
{
returnValue = F("Heinrich-Kindsgrab-Str.");
break;
}
case 137754:
{
returnValue = F("Heinrich-Kinkel-Str.");
break;
}
case 137755:
{
returnValue = F("Heinrich-Kipp-Str.");
break;
}
case 137756:
{
returnValue = F("Heinrich-Kirchner-Str.");
break;
}
case 137757:
{
returnValue = F("Heinrich-Klarmann-Str.");
break;
}
case 137758:
{
returnValue = F("Heinrich-Klasmeyer-Str.");
break;
}
case 137759:
{
returnValue = F("Heinrich-Klausmann-Str.");
break;
}
case 137760:
{
returnValue = F("Heinrich-Klee-Str.");
break;
}
case 137761:
{
returnValue = F("Heinrich-Kleibauer-Weg");
break;
}
case 137762:
{
returnValue = F("Heinrich-Kleibaumhüter-Weg");
break;
}
case 137763:
{
returnValue = F("Heinrich-Klein-Platz");
break;
}
case 137764:
{
returnValue = F("Heinrich-Klein-Str.");
break;
}
case 137765:
{
returnValue = F("Heinrich-Kleist-Str.");
break;
}
case 137766:
{
returnValue = F("Heinrich-Klerx-Str.");
break;
}
case 137767:
{
returnValue = F("Heinrich-Kling-Str.");
break;
}
case 137768:
{
returnValue = F("Heinrich-Klinge-Str.");
break;
}
case 137769:
{
returnValue = F("Heinrich-Klocke-Str.");
break;
}
case 137770:
{
returnValue = F("Heinrich-Kloppers-Str.");
break;
}
case 137771:
{
returnValue = F("Heinrich-Kluge-Weg");
break;
}
case 137772:
{
returnValue = F("Heinrich-Knauf-Str.");
break;
}
case 137773:
{
returnValue = F("Heinrich-Knieß-Anlage");
break;
}
case 137774:
{
returnValue = F("Heinrich-Knoche-Weg");
break;
}
case 137775:
{
returnValue = F("Heinrich-Knolle-Str.");
break;
}
case 137776:
{
returnValue = F("Heinrich-Knote-Str.");
break;
}
case 137777:
{
returnValue = F("Heinrich-Kobbe-Str.");
break;
}
case 137778:
{
returnValue = F("Heinrich-Koch-Str.");
break;
}
case 137779:
{
returnValue = F("Heinrich-Koehl-Str.");
break;
}
case 137780:
{
returnValue = F("Heinrich-Kohl-Str.");
break;
}
case 137781:
{
returnValue = F("Heinrich-Kohl-Weg");
break;
}
case 137782:
{
returnValue = F("Heinrich-Kohlmeier-Str.");
break;
}
case 137783:
{
returnValue = F("Heinrich-Kopp-Str.");
break;
}
case 137784:
{
returnValue = F("Heinrich-Korn-Weg");
break;
}
case 137785:
{
returnValue = F("Heinrich-Kottmann-Str.");
break;
}
case 137786:
{
returnValue = F("Heinrich-Koulen-Weg");
break;
}
case 137787:
{
returnValue = F("Heinrich-Krahn-Str.");
break;
}
case 137788:
{
returnValue = F("Heinrich-Krapoth-Str.");
break;
}
case 137789:
{
returnValue = F("Heinrich-Krauss-Str.");
break;
}
case 137790:
{
returnValue = F("Heinrich-Krauß-Str.");
break;
}
case 137791:
{
returnValue = F("Heinrich-Kremer-Str.");
break;
}
case 137792:
{
returnValue = F("Heinrich-Kremp-Str.");
break;
}
case 137793:
{
returnValue = F("Heinrich-Kretschmann-Str.");
break;
}
case 137794:
{
returnValue = F("Heinrich-Kretschmer-Str.");
break;
}
case 137795:
{
returnValue = F("Heinrich-Kreutz-Str.");
break;
}
case 137796:
{
returnValue = F("Heinrich-Kreutzberg-Str.");
break;
}
case 137797:
{
returnValue = F("Heinrich-Kreutzjans-Str.");
break;
}
case 137798:
{
returnValue = F("Heinrich-Kreuz-Str.");
break;
}
case 137799:
{
returnValue = F("Heinrich-Kreß-Str.");
break;
}
case 137800:
{
returnValue = F("Heinrich-Kreß-Weg");
break;
}
case 137801:
{
returnValue = F("Heinrich-Kromm-Str.");
break;
}
case 137802:
{
returnValue = F("Heinrich-Kropp-Str.");
break;
}
case 137803:
{
returnValue = F("Heinrich-Krumm-Str.");
break;
}
case 137804:
{
returnValue = F("Heinrich-Krücken-Str.");
break;
}
case 137805:
{
returnValue = F("Heinrich-Kuebler-Platz");
break;
}
case 137806:
{
returnValue = F("Heinrich-Kuhn-Str.");
break;
}
case 137807:
{
returnValue = F("Heinrich-Kunst-Weg");
break;
}
case 137808:
{
returnValue = F("Heinrich-Kunzmann-Str.");
break;
}
case 137809:
{
returnValue = F("Heinrich-Kuper-Str.");
break;
}
case 137810:
{
returnValue = F("Heinrich-Kuß-Ring");
break;
}
case 137811:
{
returnValue = F("Heinrich-Kämpchen-Str.");
break;
}
case 137812:
{
returnValue = F("Heinrich-Köhlmoos-Str.");
break;
}
case 137813:
{
returnValue = F("Heinrich-Köhn-Str.");
break;
}
case 137814:
{
returnValue = F("Heinrich-Könecke-Str.");
break;
}
case 137815:
{
returnValue = F("Heinrich-König-Str.");
break;
}
case 137816:
{
returnValue = F("Heinrich-Köppler-Platz");
break;
}
case 137817:
{
returnValue = F("Heinrich-Köster-Str.");
break;
}
case 137818:
{
returnValue = F("Heinrich-Küderli-Str.");
break;
}
case 137819:
{
returnValue = F("Heinrich-Künkel-Str.");
break;
}
case 137820:
{
returnValue = F("Heinrich-Kürfgen-Str.");
break;
}
case 137821:
{
returnValue = F("Heinrich-Kütemeier-Str.");
break;
}
case 137822:
{
returnValue = F("Heinrich-Laakmann-Str.");
break;
}
case 137823:
{
returnValue = F("Heinrich-Laber-Str.");
break;
}
case 137824:
{
returnValue = F("Heinrich-Laberger-Ring");
break;
}
case 137825:
{
returnValue = F("Heinrich-Lambeck-Weg");
break;
}
case 137826:
{
returnValue = F("Heinrich-Lampe Str.");
break;
}
case 137827:
{
returnValue = F("Heinrich-Landerer-Str.");
break;
}
case 137828:
{
returnValue = F("Heinrich-Lang-Str.");
break;
}
case 137829:
{
returnValue = F("Heinrich-Lange-Weg");
break;
}
case 137830:
{
returnValue = F("Heinrich-Langenbach-Str.");
break;
}
case 137831:
{
returnValue = F("Heinrich-Langhans-Str.");
break;
}
case 137832:
{
returnValue = F("Heinrich-Lanz-Ring");
break;
}
case 137833:
{
returnValue = F("Heinrich-Lanz-Str.");
break;
}
case 137834:
{
returnValue = F("Heinrich-Lanz-Weg");
break;
}
case 137835:
{
returnValue = F("Heinrich-Lapp-Str.");
break;
}
case 137836:
{
returnValue = F("Heinrich-Lauer-Str.");
break;
}
case 137837:
{
returnValue = F("Heinrich-Laufenberg-Str.");
break;
}
case 137838:
{
returnValue = F("Heinrich-Laur-Str.");
break;
}
case 137839:
{
returnValue = F("Heinrich-Lehmann-Str.");
break;
}
case 137840:
{
returnValue = F("Heinrich-Lehmpuhl-Str.");
break;
}
case 137841:
{
returnValue = F("Heinrich-Leifels-Str.");
break;
}
case 137842:
{
returnValue = F("Heinrich-Lemberg-Str.");
break;
}
case 137843:
{
returnValue = F("Heinrich-Lembrecht-Str.");
break;
}
case 137844:
{
returnValue = F("Heinrich-Lensing-Str.");
break;
}
case 137845:
{
returnValue = F("Heinrich-Lenz-Str.");
break;
}
case 137846:
{
returnValue = F("Heinrich-Leo-Str.");
break;
}
case 137847:
{
returnValue = F("Heinrich-Lersch-Str.");
break;
}
case 137848:
{
returnValue = F("Heinrich-Lersch-Weg");
break;
}
case 137849:
{
returnValue = F("Heinrich-Leußler-Str.");
break;
}
case 137850:
{
returnValue = F("Heinrich-Leven-Str.");
break;
}
case 137851:
{
returnValue = F("Heinrich-Leyers-Str.");
break;
}
case 137852:
{
returnValue = F("Heinrich-Lichius-Str.");
break;
}
case 137853:
{
returnValue = F("Heinrich-Lienau-Weg");
break;
}
case 137854:
{
returnValue = F("Heinrich-Lierz-Str.");
break;
}
case 137855:
{
returnValue = F("Heinrich-Liese-Weg");
break;
}
case 137856:
{
returnValue = F("Heinrich-Lietz-Str.");
break;
}
case 137857:
{
returnValue = F("Heinrich-Lindner-Str.");
break;
}
case 137858:
{
returnValue = F("Heinrich-Lindwedel-Str.");
break;
}
case 137859:
{
returnValue = F("Heinrich-Lippelt-Weg");
break;
}
case 137860:
{
returnValue = F("Heinrich-Lohse-Str.");
break;
}
case 137861:
{
returnValue = F("Heinrich-Loose-Str.");
break;
}
case 137862:
{
returnValue = F("Heinrich-Lorenz-Str.");
break;
}
case 137863:
{
returnValue = F("Heinrich-Luden-Str.");
break;
}
case 137864:
{
returnValue = F("Heinrich-Ludwig-Str.");
break;
}
case 137865:
{
returnValue = F("Heinrich-Längerer-Str.");
break;
}
case 137866:
{
returnValue = F("Heinrich-Lödding-Str.");
break;
}
case 137867:
{
returnValue = F("Heinrich-Lönnies-Str.");
break;
}
case 137868:
{
returnValue = F("Heinrich-Lörner-Str.");
break;
}
case 137869:
{
returnValue = F("Heinrich-Lübke-Ring");
break;
}
case 137870:
{
returnValue = F("Heinrich-Lübke-Str.");
break;
}
case 137871:
{
returnValue = F("Heinrich-Lübke-Weg");
break;
}
case 137872:
{
returnValue = F("Heinrich-Lübon-Str.");
break;
}
case 137873:
{
returnValue = F("Heinrich-Lückenkötter-Str.");
break;
}
case 137874:
{
returnValue = F("Heinrich-Lücker-Weg");
break;
}
case 137875:
{
returnValue = F("Heinrich-Lücking-Str.");
break;
}
case 137876:
{
returnValue = F("Heinrich-Lüddecke-Str.");
break;
}
case 137877:
{
returnValue = F("Heinrich-Lüth-Weg");
break;
}
case 137878:
{
returnValue = F("Heinrich-Lüttig-Str.");
break;
}
case 137879:
{
returnValue = F("Heinrich-Lützel-Str.");
break;
}
case 137880:
{
returnValue = F("Heinrich-Lützenkirchen-Weg");
break;
}
case 137881:
{
returnValue = F("Heinrich-Macher-Siedlung");
break;
}
case 137882:
{
returnValue = F("Heinrich-Mack-Str.");
break;
}
case 137883:
{
returnValue = F("Heinrich-Magnani-Str.");
break;
}
case 137884:
{
returnValue = F("Heinrich-Mahla-Str.");
break;
}
case 137885:
{
returnValue = F("Heinrich-Mahler-Str.");
break;
}
case 137886:
{
returnValue = F("Heinrich-Maier-Str.");
break;
}
case 137887:
{
returnValue = F("Heinrich-Malina-Str.");
break;
}
case 137888:
{
returnValue = F("Heinrich-Mann-Allee");
break;
}
case 137889:
{
returnValue = F("Heinrich-Mann-Ring");
break;
}
case 137890:
{
returnValue = F("Heinrich-Mann-Str.");
break;
}
case 137891:
{
returnValue = F("Heinrich-Mann-Weg");
break;
}
case 137892:
{
returnValue = F("Heinrich-Manz-Str.");
break;
}
case 137893:
{
returnValue = F("Heinrich-Marschner-Str.");
break;
}
case 137894:
{
returnValue = F("Heinrich-Marten-Str.");
break;
}
case 137895:
{
returnValue = F("Heinrich-Martin-Str.");
break;
}
case 137896:
{
returnValue = F("Heinrich-Massmann-Weg");
break;
}
case 137897:
{
returnValue = F("Heinrich-Mauersberger-Ring");
break;
}
case 137898:
{
returnValue = F("Heinrich-Maulick-Str.");
break;
}
case 137899:
{
returnValue = F("Heinrich-Maurer-Str.");
break;
}
case 137900:
{
returnValue = F("Heinrich-Maurer-Weg");
break;
}
case 137901:
{
returnValue = F("Heinrich-Mayr-Weg");
break;
}
case 137902:
{
returnValue = F("Heinrich-Meising-Str.");
break;
}
case 137903:
{
returnValue = F("Heinrich-Meister-Str.");
break;
}
case 137904:
{
returnValue = F("Heinrich-Meister-Weg");
break;
}
case 137905:
{
returnValue = F("Heinrich-Meißner-Str.");
break;
}
case 137906:
{
returnValue = F("Heinrich-Melzer-Str.");
break;
}
case 137907:
{
returnValue = F("Heinrich-Mentru-Brücke");
break;
}
case 137908:
{
returnValue = F("Heinrich-Messing-Str.");
break;
}
case 137909:
{
returnValue = F("Heinrich-Metzger-Str.");
break;
}
case 137910:
{
returnValue = F("Heinrich-Meyer-Str.");
break;
}
case 137911:
{
returnValue = F("Heinrich-Meyerholz-Str.");
break;
}
case 137912:
{
returnValue = F("Heinrich-Mildenberger-Str.");
break;
}
case 137913:
{
returnValue = F("Heinrich-Mogk-Str.");
break;
}
case 137914:
{
returnValue = F("Heinrich-Mohr-Str.");
break;
}
case 137915:
{
returnValue = F("Heinrich-Mostertz-Weg");
break;
}
case 137916:
{
returnValue = F("Heinrich-Moter-Str.");
break;
}
case 137917:
{
returnValue = F("Heinrich-Munderloh-Str.");
break;
}
case 137918:
{
returnValue = F("Heinrich-Mußmann-Str.");
break;
}
case 137919:
{
returnValue = F("Heinrich-Mylius-Str.");
break;
}
case 137920:
{
returnValue = F("Heinrich-Möller-Str.");
break;
}
case 137921:
{
returnValue = F("Heinrich-Möller-Weg");
break;
}
case 137922:
{
returnValue = F("Heinrich-Mörtel-Str.");
break;
}
case 137923:
{
returnValue = F("Heinrich-Möser-Str.");
break;
}
case 137924:
{
returnValue = F("Heinrich-Müller-Netscher-Str.");
break;
}
case 137925:
{
returnValue = F("Heinrich-Müller-Str.");
break;
}
case 137926:
{
returnValue = F("Heinrich-N.-Clausen-Weg");
break;
}
case 137927:
{
returnValue = F("Heinrich-Nagel-Str.");
break;
}
case 137928:
{
returnValue = F("Heinrich-Nanninga-Str.");
break;
}
case 137929:
{
returnValue = F("Heinrich-Narjes-Str.");
break;
}
case 137930:
{
returnValue = F("Heinrich-Nassen-Str.");
break;
}
case 137931:
{
returnValue = F("Heinrich-Nauen-Str.");
break;
}
case 137932:
{
returnValue = F("Heinrich-Naumann-Weg");
break;
}
case 137933:
{
returnValue = F("Heinrich-Nebel-Str.");
break;
}
case 137934:
{
returnValue = F("Heinrich-Negelspach-Str.");
break;
}
case 137935:
{
returnValue = F("Heinrich-Nettesheim-Weg");
break;
}
case 137936:
{
returnValue = F("Heinrich-Neu-Str.");
break;
}
case 137937:
{
returnValue = F("Heinrich-Neuheuser-Weg");
break;
}
case 137938:
{
returnValue = F("Heinrich-Neusen-Str.");
break;
}
case 137939:
{
returnValue = F("Heinrich-Nicolaus-Anlage");
break;
}
case 137940:
{
returnValue = F("Heinrich-Nicolaus-Str.");
break;
}
case 137941:
{
returnValue = F("Heinrich-Niemeyer-Str.");
break;
}
case 137942:
{
returnValue = F("Heinrich-Nienhues-Weg");
break;
}
case 137943:
{
returnValue = F("Heinrich-Niklas-Weg");
break;
}
case 137944:
{
returnValue = F("Heinrich-Nolde-Str.");
break;
}
case 137945:
{
returnValue = F("Heinrich-Nolte-Str.");
break;
}
case 137946:
{
returnValue = F("Heinrich-Nolte-Weg");
break;
}
case 137947:
{
returnValue = F("Heinrich-Nordhoff-Ring");
break;
}
case 137948:
{
returnValue = F("Heinrich-Nordhoff-Str.");
break;
}
case 137949:
{
returnValue = F("Heinrich-Nottebaum-Str.");
break;
}
case 137950:
{
returnValue = F("Heinrich-Nuttebaum-Str.");
break;
}
case 137951:
{
returnValue = F("Heinrich-Nölke-Str.");
break;
}
case 137952:
{
returnValue = F("Heinrich-Nöll-Str.");
break;
}
case 137953:
{
returnValue = F("Heinrich-Obenhaus-Str.");
break;
}
case 137954:
{
returnValue = F("Heinrich-Oberg-Str.");
break;
}
case 137955:
{
returnValue = F("Heinrich-Oberheu-Weg");
break;
}
case 137956:
{
returnValue = F("Heinrich-Oberlinger-Str.");
break;
}
case 137957:
{
returnValue = F("Heinrich-Oetjen-Str.");
break;
}
case 137958:
{
returnValue = F("Heinrich-Oettigmann-Str.");
break;
}
case 137959:
{
returnValue = F("Heinrich-Oetzmann-Str.");
break;
}
case 137960:
{
returnValue = F("Heinrich-Ohm-Str.");
break;
}
case 137961:
{
returnValue = F("Heinrich-Ohrem-Str.");
break;
}
case 137962:
{
returnValue = F("Heinrich-Oltmann-Weg");
break;
}
case 137963:
{
returnValue = F("Heinrich-Orbahn-Str.");
break;
}
case 137964:
{
returnValue = F("Heinrich-Ordenstein-Str.");
break;
}
case 137965:
{
returnValue = F("Heinrich-Orth-Str.");
break;
}
case 137966:
{
returnValue = F("Heinrich-Osterloh-Brücke");
break;
}
case 137967:
{
returnValue = F("Heinrich-Oswald-Str.");
break;
}
case 137968:
{
returnValue = F("Heinrich-Otte-Str.");
break;
}
case 137969:
{
returnValue = F("Heinrich-Ottenjann-Weg");
break;
}
case 137970:
{
returnValue = F("Heinrich-Otto-Gresch-Str.");
break;
}
case 137971:
{
returnValue = F("Heinrich-Otto-Str.");
break;
}
case 137972:
{
returnValue = F("Heinrich-Otto-Weg");
break;
}
case 137973:
{
returnValue = F("Heinrich-Overbeck-Weg");
break;
}
case 137974:
{
returnValue = F("Heinrich-Pardon-Str.");
break;
}
case 137975:
{
returnValue = F("Heinrich-Paulsen-Str.");
break;
}
case 137976:
{
returnValue = F("Heinrich-Peiffer-Str.");
break;
}
case 137977:
{
returnValue = F("Heinrich-Perrot-Weg");
break;
}
case 137978:
{
returnValue = F("Heinrich-Pestalozzi-Str.");
break;
}
case 137979:
{
returnValue = F("Heinrich-Peters-Str.");
break;
}
case 137980:
{
returnValue = F("Heinrich-Pfahler-Str.");
break;
}
case 137981:
{
returnValue = F("Heinrich-Pfeiffer-Str.");
break;
}
case 137982:
{
returnValue = F("Heinrich-Pfeiffer-Weg");
break;
}
case 137983:
{
returnValue = F("Heinrich-Pforr-Str.");
break;
}
case 137984:
{
returnValue = F("Heinrich-Philippsen-Str.");
break;
}
case 137985:
{
returnValue = F("Heinrich-Plett-Str.");
break;
}
case 137986:
{
returnValue = F("Heinrich-Plum-Weg");
break;
}
case 137987:
{
returnValue = F("Heinrich-Plötz-Str.");
break;
}
case 137988:
{
returnValue = F("Heinrich-Pohlmann-Weg");
break;
}
case 137989:
{
returnValue = F("Heinrich-Poll-Str.");
break;
}
case 137990:
{
returnValue = F("Heinrich-Pollhammer-Str.");
break;
}
case 137991:
{
returnValue = F("Heinrich-Popella-Str.");
break;
}
case 137992:
{
returnValue = F("Heinrich-Poppe-Str.");
break;
}
case 137993:
{
returnValue = F("Heinrich-Potthoff-Str.");
break;
}
case 137994:
{
returnValue = F("Heinrich-Pralle-Weg");
break;
}
case 137995:
{
returnValue = F("Heinrich-Praml-Str.");
break;
}
case 137996:
{
returnValue = F("Heinrich-Prater-Str.");
break;
}
case 137997:
{
returnValue = F("Heinrich-Prescher-Str.");
break;
}
case 137998:
{
returnValue = F("Heinrich-Prillwitz-Str.");
break;
}
case 137999:
{
returnValue = F("Heinrich-Pritzsche-Str.");
break;
}
case 138000:
{
returnValue = F("Heinrich-Prott-Str.");
break;
}
case 138001:
{
returnValue = F("Heinrich-Pröve-Winkel");
break;
}
case 138002:
{
returnValue = F("Heinrich-Puchta-Str.");
break;
}
case 138003:
{
returnValue = F("Heinrich-Puth-Str.");
break;
}
case 138004:
{
returnValue = F("Heinrich-Püts-Str.");
break;
}
case 138005:
{
returnValue = F("Heinrich-Raescop-Str.");
break;
}
case 138006:
{
returnValue = F("Heinrich-Raskin-Str.");
break;
}
case 138007:
{
returnValue = F("Heinrich-Rau-Str.");
break;
}
case 138008:
{
returnValue = F("Heinrich-Rausch-Weg");
break;
}
case 138009:
{
returnValue = F("Heinrich-Rave-Str.");
break;
}
case 138010:
{
returnValue = F("Heinrich-Ravens-Str.");
break;
}
case 138011:
{
returnValue = F("Heinrich-Reck-Str.");
break;
}
case 138012:
{
returnValue = F("Heinrich-Reffert-Str.");
break;
}
case 138013:
{
returnValue = F("Heinrich-Reichard-Str.");
break;
}
case 138014:
{
returnValue = F("Heinrich-Reimers-Str.");
break;
}
case 138015:
{
returnValue = F("Heinrich-Reinecke-Weg");
break;
}
case 138016:
{
returnValue = F("Heinrich-Reinemer-Weg");
break;
}
case 138017:
{
returnValue = F("Heinrich-Renke-Str.");
break;
}
case 138018:
{
returnValue = F("Heinrich-Richter-Str.");
break;
}
case 138019:
{
returnValue = F("Heinrich-Rick-Str.");
break;
}
case 138020:
{
returnValue = F("Heinrich-Rieckenberg-Str.");
break;
}
case 138021:
{
returnValue = F("Heinrich-Rieger-Str.");
break;
}
case 138022:
{
returnValue = F("Heinrich-Rieke-Ring");
break;
}
case 138023:
{
returnValue = F("Heinrich-Rieker-Str.");
break;
}
case 138024:
{
returnValue = F("Heinrich-Riepe-Hof");
break;
}
case 138025:
{
returnValue = F("Heinrich-Rieper-Str.");
break;
}
case 138026:
{
returnValue = F("Heinrich-Riffer-Weg");
break;
}
case 138027:
{
returnValue = F("Heinrich-Rinck-Weg");
break;
}
case 138028:
{
returnValue = F("Heinrich-Rinne-Str.");
break;
}
case 138029:
{
returnValue = F("Heinrich-Ritzel-Str.");
break;
}
case 138030:
{
returnValue = F("Heinrich-Ritzenhoff-Str.");
break;
}
case 138031:
{
returnValue = F("Heinrich-Rizner-Str.");
break;
}
case 138032:
{
returnValue = F("Heinrich-Rockstroh-Str.");
break;
}
case 138033:
{
returnValue = F("Heinrich-Rodewald-Str.");
break;
}
case 138034:
{
returnValue = F("Heinrich-Rohlfs-Platz");
break;
}
case 138035:
{
returnValue = F("Heinrich-Rorbeck-Weg");
break;
}
case 138036:
{
returnValue = F("Heinrich-Rosen-Allee");
break;
}
case 138037:
{
returnValue = F("Heinrich-Roskam-Weg");
break;
}
case 138038:
{
returnValue = F("Heinrich-Roters-Str.");
break;
}
case 138039:
{
returnValue = F("Heinrich-Rudolf-Hertz-Str.");
break;
}
case 138040:
{
returnValue = F("Heinrich-Ruge-Str.");
break;
}
case 138041:
{
returnValue = F("Heinrich-Ruhen-Platz");
break;
}
case 138042:
{
returnValue = F("Heinrich-Rumpf-Str.");
break;
}
case 138043:
{
returnValue = F("Heinrich-Rumschöttel-Str.");
break;
}
case 138044:
{
returnValue = F("Heinrich-Rupp-Str.");
break;
}
case 138045:
{
returnValue = F("Heinrich-Ruppel-Str.");
break;
}
case 138046:
{
returnValue = F("Heinrich-Ruppel-Weg");
break;
}
case 138047:
{
returnValue = F("Heinrich-Ruppelt-Platz");
break;
}
case 138048:
{
returnValue = F("Heinrich-Röhm-Str.");
break;
}
case 138049:
{
returnValue = F("Heinrich-Röhr-Str.");
break;
}
case 138050:
{
returnValue = F("Heinrich-Röttgen-Str.");
break;
}
case 138051:
{
returnValue = F("Heinrich-Röwer-Weg");
break;
}
case 138052:
{
returnValue = F("Heinrich-Rühl-Str.");
break;
}
case 138053:
{
returnValue = F("Heinrich-Sahm-Str.");
break;
}
case 138054:
{
returnValue = F("Heinrich-Sandstede-Str.");
break;
}
case 138055:
{
returnValue = F("Heinrich-Sauer-Str.");
break;
}
case 138056:
{
returnValue = F("Heinrich-Sauer-Weg");
break;
}
case 138057:
{
returnValue = F("Heinrich-Sauter-Weg");
break;
}
case 138058:
{
returnValue = F("Heinrich-Schach-Str.");
break;
}
case 138059:
{
returnValue = F("Heinrich-Schacht-Weg");
break;
}
case 138060:
{
returnValue = F("Heinrich-Schade-Platz");
break;
}
case 138061:
{
returnValue = F("Heinrich-Scharpenberg-Weg");
break;
}
case 138062:
{
returnValue = F("Heinrich-Schatz-Str.");
break;
}
case 138063:
{
returnValue = F("Heinrich-Schatzel-Str.");
break;
}
case 138064:
{
returnValue = F("Heinrich-Schaub-Weg");
break;
}
case 138065:
{
returnValue = F("Heinrich-Scheele-Str.");
break;
}
case 138066:
{
returnValue = F("Heinrich-Scherer-Platz");
break;
}
case 138067:
{
returnValue = F("Heinrich-Scherer-Str.");
break;
}
case 138068:
{
returnValue = F("Heinrich-Scheufelen-Platz");
break;
}
case 138069:
{
returnValue = F("Heinrich-Schicht-Str.");
break;
}
case 138070:
{
returnValue = F("Heinrich-Schierenberg-Str.");
break;
}
case 138071:
{
returnValue = F("Heinrich-Schillmöller-Weg");
break;
}
case 138072:
{
returnValue = F("Heinrich-Schirmer-Weg");
break;
}
case 138073:
{
returnValue = F("Heinrich-Schlange-Str.");
break;
}
case 138074:
{
returnValue = F("Heinrich-Schlick-Str.");
break;
}
case 138075:
{
returnValue = F("Heinrich-Schliemann-Str.");
break;
}
case 138076:
{
returnValue = F("Heinrich-Schliemann-Weg");
break;
}
case 138077:
{
returnValue = F("Heinrich-Schlotermann-Weg");
break;
}
case 138078:
{
returnValue = F("Heinrich-Schlusnus-Str.");
break;
}
case 138079:
{
returnValue = F("Heinrich-Schmedt-Str.");
break;
}
case 138080:
{
returnValue = F("Heinrich-Schmidhuber-Str.");
break;
}
case 138081:
{
returnValue = F("Heinrich-Schmidt-Barrien-Weg");
break;
}
case 138082:
{
returnValue = F("Heinrich-Schmidt-Str.");
break;
}
case 138083:
{
returnValue = F("Heinrich-Schmitt-Platz");
break;
}
case 138084:
{
returnValue = F("Heinrich-Schmitt-Str.");
break;
}
case 138085:
{
returnValue = F("Heinrich-Schmitz-Str.");
break;
}
case 138086:
{
returnValue = F("Heinrich-Schneider-Brücke");
break;
}
case 138087:
{
returnValue = F("Heinrich-Schneider-Siedlung");
break;
}
case 138088:
{
returnValue = F("Heinrich-Schneider-Str.");
break;
}
case 138089:
{
returnValue = F("Heinrich-Schneider-Weg");
break;
}
case 138090:
{
returnValue = F("Heinrich-Schnettler-Str.");
break;
}
case 138091:
{
returnValue = F("Heinrich-Schnitzler-Weg");
break;
}
case 138092:
{
returnValue = F("Heinrich-Schobert-Weg");
break;
}
case 138093:
{
returnValue = F("Heinrich-Schorsch-Str.");
break;
}
case 138094:
{
returnValue = F("Heinrich-Schrader-Str.");
break;
}
case 138095:
{
returnValue = F("Heinrich-Schrader-Weg");
break;
}
case 138096:
{
returnValue = F("Heinrich-Schreiber-Ring");
break;
}
case 138097:
{
returnValue = F("Heinrich-Schriefer-Str.");
break;
}
case 138098:
{
returnValue = F("Heinrich-Schrohe-Str.");
break;
}
case 138099:
{
returnValue = F("Heinrich-Schröder-Str.");
break;
}
case 138100:
{
returnValue = F("Heinrich-Schröder-Weg");
break;
}
case 138101:
{
returnValue = F("Heinrich-Schuck-Str.");
break;
}
case 138102:
{
returnValue = F("Heinrich-Schuldt-Str.");
break;
}
case 138103:
{
returnValue = F("Heinrich-Schulte-Str.");
break;
}
case 138104:
{
returnValue = F("Heinrich-Schulz-Str.");
break;
}
case 138105:
{
returnValue = F("Heinrich-Schulze-Str.");
break;
}
case 138106:
{
returnValue = F("Heinrich-Schumacher-Str.");
break;
}
case 138107:
{
returnValue = F("Heinrich-Schwarz-Weg");
break;
}
case 138108:
{
returnValue = F("Heinrich-Schwegler-Str.");
break;
}
case 138109:
{
returnValue = F("Heinrich-Schweitzer-Str.");
break;
}
case 138110:
{
returnValue = F("Heinrich-Schwerdt-Str.");
break;
}
case 138111:
{
returnValue = F("Heinrich-Schwieger-Weg");
break;
}
case 138112:
{
returnValue = F("Heinrich-Schwier-Str.");
break;
}
case 138113:
{
returnValue = F("Heinrich-Schäff-Str.");
break;
}
case 138114:
{
returnValue = F("Heinrich-Schöne-Str.");
break;
}
case 138115:
{
returnValue = F("Heinrich-Schüle-Str.");
break;
}
case 138116:
{
returnValue = F("Heinrich-Schündelen-Weg");
break;
}
case 138117:
{
returnValue = F("Heinrich-Schütte-Str.");
break;
}
case 138118:
{
returnValue = F("Heinrich-Schütte-Weg");
break;
}
case 138119:
{
returnValue = F("Heinrich-Schütz-Str.");
break;
}
case 138120:
{
returnValue = F("Heinrich-Schütz-Weg");
break;
}
case 138121:
{
returnValue = F("Heinrich-Seidel-Str.");
break;
}
case 138122:
{
returnValue = F("Heinrich-Seifert-Str.");
break;
}
case 138123:
{
returnValue = F("Heinrich-Sellmann-Str.");
break;
}
case 138124:
{
returnValue = F("Heinrich-Seman-Str.");
break;
}
case 138125:
{
returnValue = F("Heinrich-Semlinger-Str.");
break;
}
case 138126:
{
returnValue = F("Heinrich-Sent-Str.");
break;
}
case 138127:
{
returnValue = F("Heinrich-Sevecke-Weg");
break;
}
case 138128:
{
returnValue = F("Heinrich-Siebern-Str.");
break;
}
case 138129:
{
returnValue = F("Heinrich-Siede-Str.");
break;
}
case 138130:
{
returnValue = F("Heinrich-Siegel-Str.");
break;
}
case 138131:
{
returnValue = F("Heinrich-Siems-Str.");
break;
}
case 138132:
{
returnValue = F("Heinrich-Siemßen-Str.");
break;
}
case 138133:
{
returnValue = F("Heinrich-Sinz-Str.");
break;
}
case 138134:
{
returnValue = F("Heinrich-Sohnrey-Str.");
break;
}
case 138135:
{
returnValue = F("Heinrich-Sohnrey-Weg");
break;
}
case 138136:
{
returnValue = F("Heinrich-Soldan-Str.");
break;
}
case 138137:
{
returnValue = F("Heinrich-Sommer-Str.");
break;
}
case 138138:
{
returnValue = F("Heinrich-Sorg-Str.");
break;
}
case 138139:
{
returnValue = F("Heinrich-Spalink-Str.");
break;
}
case 138140:
{
returnValue = F("Heinrich-Specht-Str.");
break;
}
case 138141:
{
returnValue = F("Heinrich-Specht-Weg");
break;
}
case 138142:
{
returnValue = F("Heinrich-Spiegel-Str.");
break;
}
case 138143:
{
returnValue = F("Heinrich-Spier-Str.");
break;
}
case 138144:
{
returnValue = F("Heinrich-Spieth-Str.");
break;
}
case 138145:
{
returnValue = F("Heinrich-Spieß-Str.");
break;
}
case 138146:
{
returnValue = F("Heinrich-Spoerl-Str.");
break;
}
case 138147:
{
returnValue = F("Heinrich-Spoerl-Weg");
break;
}
case 138148:
{
returnValue = F("Heinrich-Sprenger-Weg");
break;
}
case 138149:
{
returnValue = F("Heinrich-Spät-Str.");
break;
}
case 138150:
{
returnValue = F("Heinrich-Späth-Str.");
break;
}
case 138151:
{
returnValue = F("Heinrich-Stadelmann-Str.");
break;
}
case 138152:
{
returnValue = F("Heinrich-Stahmann-Platz");
break;
}
case 138153:
{
returnValue = F("Heinrich-Steden-Weg");
break;
}
case 138154:
{
returnValue = F("Heinrich-Stefanie-Str.");
break;
}
case 138155:
{
returnValue = F("Heinrich-Steih-Str.");
break;
}
case 138156:
{
returnValue = F("Heinrich-Steimle-Weg");
break;
}
case 138157:
{
returnValue = F("Heinrich-Stein-Str.");
break;
}
case 138158:
{
returnValue = F("Heinrich-Steinberg-Str.");
break;
}
case 138159:
{
returnValue = F("Heinrich-Steinweg-Str.");
break;
}
case 138160:
{
returnValue = F("Heinrich-Stender-Str.");
break;
}
case 138161:
{
returnValue = F("Heinrich-Stockmanns-Str.");
break;
}
case 138162:
{
returnValue = F("Heinrich-Stoll-Str.");
break;
}
case 138163:
{
returnValue = F("Heinrich-Stommel-Weg");
break;
}
case 138164:
{
returnValue = F("Heinrich-Streidl-Str.");
break;
}
case 138165:
{
returnValue = F("Heinrich-Strerath-Str.");
break;
}
case 138166:
{
returnValue = F("Heinrich-Stricker-Weg");
break;
}
case 138167:
{
returnValue = F("Heinrich-Strieffler-Str.");
break;
}
case 138168:
{
returnValue = F("Heinrich-Strieffler-Weg");
break;
}
case 138169:
{
returnValue = F("Heinrich-Strohmeier-Str.");
break;
}
case 138170:
{
returnValue = F("Heinrich-Strünker-Str.");
break;
}
case 138171:
{
returnValue = F("Heinrich-Stuckmann-Weg");
break;
}
case 138172:
{
returnValue = F("Heinrich-Stähle-Str.");
break;
}
case 138173:
{
returnValue = F("Heinrich-Stürmann-Weg");
break;
}
case 138174:
{
returnValue = F("Heinrich-Stützel-Str.");
break;
}
case 138175:
{
returnValue = F("Heinrich-Sudhaus-Weg");
break;
}
case 138176:
{
returnValue = F("Heinrich-Suhl-Weg");
break;
}
case 138177:
{
returnValue = F("Heinrich-Söller-Str.");
break;
}
case 138178:
{
returnValue = F("Heinrich-Sölter-Str.");
break;
}
case 138179:
{
returnValue = F("Heinrich-Sölter-Weg");
break;
}
case 138180:
{
returnValue = F("Heinrich-Söte-Weg");
break;
}
case 138181:
{
returnValue = F("Heinrich-Sürth-Weg");
break;
}
case 138182:
{
returnValue = F("Heinrich-Talmon-Groß-Str.");
break;
}
case 138183:
{
returnValue = F("Heinrich-Taubenreuther-Str.");
break;
}
case 138184:
{
returnValue = F("Heinrich-Tellen-Str.");
break;
}
case 138185:
{
returnValue = F("Heinrich-Tenhumberg-Str.");
break;
}
case 138186:
{
returnValue = F("Heinrich-Terhorst-Weg");
break;
}
case 138187:
{
returnValue = F("Heinrich-Tessenow-Str.");
break;
}
case 138188:
{
returnValue = F("Heinrich-Theißen-Str.");
break;
}
case 138189:
{
returnValue = F("Heinrich-Theobald-Str.");
break;
}
case 138190:
{
returnValue = F("Heinrich-Theodor-Wehle-Str.");
break;
}
case 138191:
{
returnValue = F("Heinrich-Thermann-Str.");
break;
}
case 138192:
{
returnValue = F("Heinrich-Thiede-Str.");
break;
}
case 138193:
{
returnValue = F("Heinrich-Thomas-Str.");
break;
}
case 138194:
{
returnValue = F("Heinrich-Tiarks-Str.");
break;
}
case 138195:
{
returnValue = F("Heinrich-Tillmann-Str.");
break;
}
case 138196:
{
returnValue = F("Heinrich-Tups-Weg");
break;
}
case 138197:
{
returnValue = F("Heinrich-Tödt-Str.");
break;
}
case 138198:
{
returnValue = F("Heinrich-Tönjes-Str.");
break;
}
case 138199:
{
returnValue = F("Heinrich-Ullrich-Str.");
break;
}
case 138200:
{
returnValue = F("Heinrich-Ulrich-Str.");
break;
}
case 138201:
{
returnValue = F("Heinrich-Unruh-Weg");
break;
}
case 138202:
{
returnValue = F("Heinrich-Veith-Str.");
break;
}
case 138203:
{
returnValue = F("Heinrich-Vennekamp-Weg");
break;
}
case 138204:
{
returnValue = F("Heinrich-Vetter-Kreisel");
break;
}
case 138205:
{
returnValue = F("Heinrich-Vetter-Ring");
break;
}
case 138206:
{
returnValue = F("Heinrich-Vingerhut-Weg");
break;
}
case 138207:
{
returnValue = F("Heinrich-Vocke-Str.");
break;
}
case 138208:
{
returnValue = F("Heinrich-Voelter-Str.");
break;
}
case 138209:
{
returnValue = F("Heinrich-Vogeler-Str.");
break;
}
case 138210:
{
returnValue = F("Heinrich-Vogeler-Weg");
break;
}
case 138211:
{
returnValue = F("Heinrich-Vogl-Str.");
break;
}
case 138212:
{
returnValue = F("Heinrich-Voigt-Allee");
break;
}
case 138213:
{
returnValue = F("Heinrich-Volkmann-Str.");
break;
}
case 138214:
{
returnValue = F("Heinrich-Vollers-Gang");
break;
}
case 138215:
{
returnValue = F("Heinrich-Vomhof-Weg");
break;
}
case 138216:
{
returnValue = F("Heinrich-Vormbrock-Str.");
break;
}
case 138217:
{
returnValue = F("Heinrich-Vosberg-Pad");
break;
}
case 138218:
{
returnValue = F("Heinrich-Voß-Str.");
break;
}
case 138219:
{
returnValue = F("Heinrich-Völkel-Str.");
break;
}
case 138220:
{
returnValue = F("Heinrich-Wackenroder-Str.");
break;
}
case 138221:
{
returnValue = F("Heinrich-Waggerl-Weg");
break;
}
case 138222:
{
returnValue = F("Heinrich-Wagner-Str.");
break;
}
case 138223:
{
returnValue = F("Heinrich-Wagner-Weg");
break;
}
case 138224:
{
returnValue = F("Heinrich-Walter-Str.");
break;
}
case 138225:
{
returnValue = F("Heinrich-Warnecke-Str.");
break;
}
case 138226:
{
returnValue = F("Heinrich-Wassermann-Str.");
break;
}
case 138227:
{
returnValue = F("Heinrich-Weber-Platz");
break;
}
case 138228:
{
returnValue = F("Heinrich-Weber-Str.");
break;
}
case 138229:
{
returnValue = F("Heinrich-Weber-Weg");
break;
}
case 138230:
{
returnValue = F("Heinrich-Weidenbacher-Weg");
break;
}
case 138231:
{
returnValue = F("Heinrich-Weihrauch-Str.");
break;
}
case 138232:
{
returnValue = F("Heinrich-Weimann-Weg");
break;
}
case 138233:
{
returnValue = F("Heinrich-Weis-Str.");
break;
}
case 138234:
{
returnValue = F("Heinrich-Weitz-Str.");
break;
}
case 138235:
{
returnValue = F("Heinrich-Weiß-Str.");
break;
}
case 138236:
{
returnValue = F("Heinrich-Weißmann-Str.");
break;
}
case 138237:
{
returnValue = F("Heinrich-Wellenbrink-Weg");
break;
}
case 138238:
{
returnValue = F("Heinrich-Wellpott-Str.");
break;
}
case 138239:
{
returnValue = F("Heinrich-Welslau-Str.");
break;
}
case 138240:
{
returnValue = F("Heinrich-Wemhöner-Str.");
break;
}
case 138241:
{
returnValue = F("Heinrich-Wendt-Str.");
break;
}
case 138242:
{
returnValue = F("Heinrich-Wendt-Weg");
break;
}
case 138243:
{
returnValue = F("Heinrich-Werner-Platz");
break;
}
case 138244:
{
returnValue = F("Heinrich-Werner-Str.");
break;
}
case 138245:
{
returnValue = F("Heinrich-Werth-Str.");
break;
}
case 138246:
{
returnValue = F("Heinrich-Wessel-Str.");
break;
}
case 138247:
{
returnValue = F("Heinrich-Westermeier-Weg");
break;
}
case 138248:
{
returnValue = F("Heinrich-Westphal-Str.");
break;
}
case 138249:
{
returnValue = F("Heinrich-Wich-Str.");
break;
}
case 138250:
{
returnValue = F("Heinrich-Wick-Str.");
break;
}
case 138251:
{
returnValue = F("Heinrich-Wiebe-Str.");
break;
}
case 138252:
{
returnValue = F("Heinrich-Wiegand-Str.");
break;
}
case 138253:
{
returnValue = F("Heinrich-Wieland-Str.");
break;
}
case 138254:
{
returnValue = F("Heinrich-Wienke-Str.");
break;
}
case 138255:
{
returnValue = F("Heinrich-Wieschhoff-Str.");
break;
}
case 138256:
{
returnValue = F("Heinrich-Wiesen-Str.");
break;
}
case 138257:
{
returnValue = F("Heinrich-Wilckens-Twiete");
break;
}
case 138258:
{
returnValue = F("Heinrich-Wild-Str.");
break;
}
case 138259:
{
returnValue = F("Heinrich-Wildemann-Str.");
break;
}
case 138260:
{
returnValue = F("Heinrich-Wildung-Weg");
break;
}
case 138261:
{
returnValue = F("Heinrich-Wilhelm-Baum-Weg");
break;
}
case 138262:
{
returnValue = F("Heinrich-Wilhelm-Str.");
break;
}
case 138263:
{
returnValue = F("Heinrich-Will-Str.");
break;
}
case 138264:
{
returnValue = F("Heinrich-Willers-Weg");
break;
}
case 138265:
{
returnValue = F("Heinrich-Winkelmann-Platz");
break;
}
case 138266:
{
returnValue = F("Heinrich-Winkelmann-Str.");
break;
}
case 138267:
{
returnValue = F("Heinrich-Winkler-Str.");
break;
}
case 138268:
{
returnValue = F("Heinrich-Winter-Str.");
break;
}
case 138269:
{
returnValue = F("Heinrich-Winter-Weg");
break;
}
case 138270:
{
returnValue = F("Heinrich-Wintermeyer-Str.");
break;
}
case 138271:
{
returnValue = F("Heinrich-Wirth-Str.");
break;
}
case 138272:
{
returnValue = F("Heinrich-Witte-Str.");
break;
}
case 138273:
{
returnValue = F("Heinrich-Wittmann-Str.");
break;
}
case 138274:
{
returnValue = F("Heinrich-Wittorf-Str.");
break;
}
case 138275:
{
returnValue = F("Heinrich-Wlecke-Str.");
break;
}
case 138276:
{
returnValue = F("Heinrich-Wobst-Str.");
break;
}
case 138277:
{
returnValue = F("Heinrich-Wolf-Str.");
break;
}
case 138278:
{
returnValue = F("Heinrich-Wolgst-Str.");
break;
}
case 138279:
{
returnValue = F("Heinrich-Wothe-Str.");
break;
}
case 138280:
{
returnValue = F("Heinrich-Wöhler-Str.");
break;
}
case 138281:
{
returnValue = F("Heinrich-Wörner-Str.");
break;
}
case 138282:
{
returnValue = F("Heinrich-Zander-Str.");
break;
}
case 138283:
{
returnValue = F("Heinrich-Zapp-Str.");
break;
}
case 138284:
{
returnValue = F("Heinrich-Zeininger-Str.");
break;
}
case 138285:
{
returnValue = F("Heinrich-Zeuner-Str.");
break;
}
case 138286:
{
returnValue = F("Heinrich-Zieger-Str.");
break;
}
case 138287:
{
returnValue = F("Heinrich-Ziegler-Str.");
break;
}
case 138288:
{
returnValue = F("Heinrich-Zierl-Str.");
break;
}
case 138289:
{
returnValue = F("Heinrich-Zille-Gang");
break;
}
case 138290:
{
returnValue = F("Heinrich-Zille-Hain");
break;
}
case 138291:
{
returnValue = F("Heinrich-Zille-Park");
break;
}
case 138292:
{
returnValue = F("Heinrich-Zille-Platz");
break;
}
case 138293:
{
returnValue = F("Heinrich-Zille-Ring");
break;
}
case 138294:
{
returnValue = F("Heinrich-Zille-Str.");
break;
}
case 138295:
{
returnValue = F("Heinrich-Zille-Str., Adam-Kuckhoff-Str.");
break;
}
case 138296:
{
returnValue = F("Heinrich-Zille-Weg");
break;
}
case 138297:
{
returnValue = F("Heinrich-Zille-Winkel");
break;
}
case 138298:
{
returnValue = F("Heinrich-Zimmer-Str.");
break;
}
case 138299:
{
returnValue = F("Heinrich-Zimmermann-Str.");
break;
}
case 138300:
{
returnValue = F("Heinrich-Zirkel-Str.");
break;
}
case 138301:
{
returnValue = F("Heinrich-Zutt-Str.");
break;
}
case 138302:
{
returnValue = F("Heinrich-der-Löwe-Ring");
break;
}
case 138303:
{
returnValue = F("Heinrich-der-Löwe-Str.");
break;
}
case 138304:
{
returnValue = F("Heinrich-der-Löwe-Weg");
break;
}
case 138305:
{
returnValue = F("Heinrich-te-Poel-Str.");
break;
}
case 138306:
{
returnValue = F("Heinrich-v.-Fürstenberg-Str.");
break;
}
case 138307:
{
returnValue = F("Heinrich-v.-Stephan-Str.");
break;
}
case 138308:
{
returnValue = F("Heinrich-van-Achten-Str.");
break;
}
case 138309:
{
returnValue = F("Heinrich-vom-Stain-Str.");
break;
}
case 138310:
{
returnValue = F("Heinrich-von-Altheim Str.");
break;
}
case 138311:
{
returnValue = F("Heinrich-von-Andlaw-Str.");
break;
}
case 138312:
{
returnValue = F("Heinrich-von-Berg-Weg");
break;
}
case 138313:
{
returnValue = F("Heinrich-von-Berge-Weg");
break;
}
case 138314:
{
returnValue = F("Heinrich-von-Bibra-Str.");
break;
}
case 138315:
{
returnValue = F("Heinrich-von-Brentano-Allee");
break;
}
case 138316:
{
returnValue = F("Heinrich-von-Brentano-Anlage");
break;
}
case 138317:
{
returnValue = F("Heinrich-von-Brentano-Str.");
break;
}
case 138318:
{
returnValue = F("Heinrich-von-Brentano-Weg");
break;
}
case 138319:
{
returnValue = F("Heinrich-von-Cleve-Str.");
break;
}
case 138320:
{
returnValue = F("Heinrich-von-Cotta-Weg");
break;
}
case 138321:
{
returnValue = F("Heinrich-von-Eggeling-Str.");
break;
}
case 138322:
{
returnValue = F("Heinrich-von-Fleckenstein-Str.");
break;
}
case 138323:
{
returnValue = F("Heinrich-von-Gagern-Platz");
break;
}
case 138324:
{
returnValue = F("Heinrich-von-Gagern-Str.");
break;
}
case 138325:
{
returnValue = F("Heinrich-von-Gemen-Str.");
break;
}
case 138326:
{
returnValue = F("Heinrich-von-Hohenlohe-Str.");
break;
}
case 138327:
{
returnValue = F("Heinrich-von-Homburg-Str.");
break;
}
case 138328:
{
returnValue = F("Heinrich-von-Hornstein-Str.");
break;
}
case 138329:
{
returnValue = F("Heinrich-von-Kleist-Platz");
break;
}
case 138330:
{
returnValue = F("Heinrich-von-Kleist-Ring");
break;
}
case 138331:
{
returnValue = F("Heinrich-von-Kleist-Str.");
break;
}
case 138332:
{
returnValue = F("Heinrich-von-Kleist-Weg");
break;
}
case 138333:
{
returnValue = F("Heinrich-von-Knöringen-Str.");
break;
}
case 138334:
{
returnValue = F("Heinrich-von-Landeck-Weg");
break;
}
case 138335:
{
returnValue = F("Heinrich-von-Lure-Str.");
break;
}
case 138336:
{
returnValue = F("Heinrich-von-Meißen-Str.");
break;
}
case 138337:
{
returnValue = F("Heinrich-von-Meißen-Weg");
break;
}
case 138338:
{
returnValue = F("Heinrich-von-Meurers-Str.");
break;
}
case 138339:
{
returnValue = F("Heinrich-von-Ohlendorff-Str.");
break;
}
case 138340:
{
returnValue = F("Heinrich-von-Oytha-Str.");
break;
}
case 138341:
{
returnValue = F("Heinrich-von-Rosenberg-Str.");
break;
}
case 138342:
{
returnValue = F("Heinrich-von-Stein-Str.");
break;
}
case 138343:
{
returnValue = F("Heinrich-von-Stephan-Platz");
break;
}
case 138344:
{
returnValue = F("Heinrich-von-Stephan-Str.");
break;
}
case 138345:
{
returnValue = F("Heinrich-von-Taube-Str.");
break;
}
case 138346:
{
returnValue = F("Heinrich-von-Tettingen-Str.");
break;
}
case 138347:
{
returnValue = F("Heinrich-von-Veldeke-Str.");
break;
}
case 138348:
{
returnValue = F("Heinrich-von-Vellberg-Weg");
break;
}
case 138349:
{
returnValue = F("Heinrich-von-Zügel-Str.");
break;
}
case 138350:
{
returnValue = F("Heinrich-Ühlein-Str.");
break;
}
case 138351:
{
returnValue = F("Heinrichauer Str.");
break;
}
case 138352:
{
returnValue = F("Heinrichgasse");
break;
}
case 138353:
{
returnValue = F("Heinrichsallee");
break;
}
case 138354:
{
returnValue = F("Heinrichsaue");
break;
}
case 138355:
{
returnValue = F("Heinrichsbach");
break;
}
case 138356:
{
returnValue = F("Heinrichsbacherweg");
break;
}
case 138357:
{
returnValue = F("Heinrichsberger Str.");
break;
}
case 138358:
{
returnValue = F("Heinrichsbergla");
break;
}
case 138359:
{
returnValue = F("Heinrichsbergweg");
break;
}
case 138360:
{
returnValue = F("Heinrichsburger Str.");
break;
}
case 138361:
{
returnValue = F("Heinrichsburgstr.");
break;
}
case 138362:
{
returnValue = F("Heinrichsbürgweg");
break;
}
case 138363:
{
returnValue = F("Heinrichsdamm");
break;
}
case 138364:
{
returnValue = F("Heinrichsdorf");
break;
}
case 138365:
{
returnValue = F("Heinrichsdorfer Ausbau");
break;
}
case 138366:
{
returnValue = F("Heinrichsdorfer Siedlung");
break;
}
case 138367:
{
returnValue = F("Heinrichsdorfer Str.");
break;
}
case 138368:
{
returnValue = F("Heinrichser Str.");
break;
}
case 138369:
{
returnValue = F("Heinrichsfelde");
break;
}
case 138370:
{
returnValue = F("Heinrichsfelder Allee");
break;
}
case 138371:
{
returnValue = F("Heinrichsfelder Weg");
break;
}
case 138372:
{
returnValue = F("Heinrichsgasse");
break;
}
case 138373:
{
returnValue = F("Heinrichsgraben");
break;
}
case 138374:
{
returnValue = F("Heinrichshagen");
break;
}
case 138375:
{
returnValue = F("Heinrichshall");
break;
}
case 138376:
{
returnValue = F("Heinrichshaus");
break;
}
case 138377:
{
returnValue = F("Heinrichshausweg");
break;
}
case 138378:
{
returnValue = F("Heinrichsheimstr.");
break;
}
case 138379:
{
returnValue = F("Heinrichshof");
break;
}
case 138380:
{
returnValue = F("Heinrichshofener Str.");
break;
}
case 138381:
{
returnValue = F("Heinrichshofer Str.");
break;
}
case 138382:
{
returnValue = F("Heinrichshofweg");
break;
}
case 138383:
{
returnValue = F("Heinrichshöh");
break;
}
case 138384:
{
returnValue = F("Heinrichshöhe");
break;
}
case 138385:
{
returnValue = F("Heinrichsleitenweg");
break;
}
case 138386:
{
returnValue = F("Heinrichsort");
break;
}
case 138387:
{
returnValue = F("Heinrichsorter Str.");
break;
}
case 138388:
{
returnValue = F("Heinrichsorter Weg");
break;
}
case 138389:
{
returnValue = F("Heinrichspark");
break;
}
case 138390:
{
returnValue = F("Heinrichspfad");
break;
}
case 138391:
{
returnValue = F("Heinrichspforte");
break;
}
case 138392:
{
returnValue = F("Heinrichsplatz");
break;
}
case 138393:
{
returnValue = F("Heinrichsruh");
break;
}
case 138394:
{
returnValue = F("Heinrichsruher Str.");
break;
}
case 138395:
{
returnValue = F("Heinrichsruher Weg");
break;
}
case 138396:
{
returnValue = F("Heinrichsröthlein");
break;
}
case 138397:
{
returnValue = F("Heinrichsstieg");
break;
}
case 138398:
{
returnValue = F("Heinrichsstr.");
break;
}
case 138399:
{
returnValue = F("Heinrichstal");
break;
}
case 138400:
{
returnValue = F("Heinrichstalstr.");
break;
}
case 138401:
{
returnValue = F("Heinrichsthaler Str.");
break;
}
case 138402:
{
returnValue = F("Heinrichsthaler Weg");
break;
}
case 138403:
{
returnValue = F("Heinrichstr.");
break;
}
case 138404:
{
returnValue = F("Heinrichswalde");
break;
}
case 138405:
{
returnValue = F("Heinrichsweg");
break;
}
case 138406:
{
returnValue = F("Heinrichswinkel");
break;
}
case 138407:
{
returnValue = F("Heinrichtsbrunnerstr.");
break;
}
case 138408:
{
returnValue = F("Heinrichweg");
break;
}
case 138409:
{
returnValue = F("Heinrichwingertsweg");
break;
}
case 138410:
{
returnValue = F("Heinrieter Str.");
break;
}
case 138411:
{
returnValue = F("Heinrieter Weg");
break;
}
case 138412:
{
returnValue = F("Heinritzimühle");
break;
}
case 138413:
{
returnValue = F("Heinsahl");
break;
}
case 138414:
{
returnValue = F("Heinsberger Str.");
break;
}
case 138415:
{
returnValue = F("Heinsbergerweg");
break;
}
case 138416:
{
returnValue = F("Heinsbergplatz");
break;
}
case 138417:
{
returnValue = F("Heinschenwalder Str.");
break;
}
case 138418:
{
returnValue = F("Heinschenwalder Weg");
break;
}
case 138419:
{
returnValue = F("Heinsdorf-Angerstr.");
break;
}
case 138420:
{
returnValue = F("Heinsdorf-Dahmer Weg");
break;
}
case 138421:
{
returnValue = F("Heinsdorf-Gartenweg");
break;
}
case 138422:
{
returnValue = F("Heinsdorf-Gutshof");
break;
}
case 138423:
{
returnValue = F("Heinsdorf-Hohenseefelder Weg");
break;
}
case 138424:
{
returnValue = F("Heinsdorf-Niebendorfer Str.");
break;
}
case 138425:
{
returnValue = F("Heinsdorf-Parkstr.");
break;
}
case 138426:
{
returnValue = F("Heinsdorf-Ringstr.");
break;
}
case 138427:
{
returnValue = F("Heinsdorfer Str.");
break;
}
case 138428:
{
returnValue = F("Heinsdorfer Weg");
break;
}
case 138429:
{
returnValue = F("Heinsen");
break;
}
case 138430:
{
returnValue = F("Heinsepark");
break;
}
case 138431:
{
returnValue = F("Heinser Dorfstr.");
break;
}
case 138432:
{
returnValue = F("Heinser Str.");
break;
}
case 138433:
{
returnValue = F("Heinser Weg");
break;
}
case 138434:
{
returnValue = F("Heinserstr.");
break;
}
case 138435:
{
returnValue = F("Heinsestr.");
break;
}
case 138436:
{
returnValue = F("Heinsheimer Str.");
break;
}
case 138437:
{
returnValue = F("Heinsiusstr.");
break;
}
case 138438:
{
returnValue = F("Heinstetter Str.");
break;
}
case 138439:
{
returnValue = F("Heintalweg");
break;
}
case 138440:
{
returnValue = F("Heinteich");
break;
}
case 138441:
{
returnValue = F("Heintgesstr.");
break;
}
case 138442:
{
returnValue = F("Heintroper Str.");
break;
}
case 138443:
{
returnValue = F("Heintzestr.");
break;
}
case 138444:
{
returnValue = F("Heintzmannstiege");
break;
}
case 138445:
{
returnValue = F("Heinz");
break;
}
case 138446:
{
returnValue = F("Heinz Briel Weg");
break;
}
case 138447:
{
returnValue = F("Heinz Karl Westermann Weg");
break;
}
case 138448:
{
returnValue = F("Heinz Klag Anlage");
break;
}
case 138449:
{
returnValue = F("Heinz Schemken Platz");
break;
}
case 138450:
{
returnValue = F("Heinz Trox Str.");
break;
}
case 138451:
{
returnValue = F("Heinz am Anger");
break;
}
case 138452:
{
returnValue = F("Heinz-Baak-Weg");
break;
}
case 138453:
{
returnValue = F("Heinz-Behrens-Str.");
break;
}
case 138454:
{
returnValue = F("Heinz-Bello-Str.");
break;
}
case 138455:
{
returnValue = F("Heinz-Beusen-Stieg");
break;
}
case 138456:
{
returnValue = F("Heinz-Böhnke-Str.");
break;
}
case 138457:
{
returnValue = F("Heinz-Büsing-Weg");
break;
}
case 138458:
{
returnValue = F("Heinz-Conrad-Str.");
break;
}
case 138459:
{
returnValue = F("Heinz-Cremer-Str.");
break;
}
case 138460:
{
returnValue = F("Heinz-Désor-Str.");
break;
}
case 138461:
{
returnValue = F("Heinz-Eiff-Str.");
break;
}
case 138462:
{
returnValue = F("Heinz-Emonds-Str.");
break;
}
case 138463:
{
returnValue = F("Heinz-Erhardt-Platz");
break;
}
case 138464:
{
returnValue = F("Heinz-Esch-Johnen-Str.");
break;
}
case 138465:
{
returnValue = F("Heinz-Faller-Weg");
break;
}
case 138466:
{
returnValue = F("Heinz-Fehling-Str.");
break;
}
case 138467:
{
returnValue = F("Heinz-Friedrich-Str.");
break;
}
case 138468:
{
returnValue = F("Heinz-Füting-Str.");
break;
}
case 138469:
{
returnValue = F("Heinz-Gassner Weg");
break;
}
case 138470:
{
returnValue = F("Heinz-Geil-Str.");
break;
}
case 138471:
{
returnValue = F("Heinz-Golitz-Str.");
break;
}
case 138472:
{
returnValue = F("Heinz-Gottschalk-Str.");
break;
}
case 138473:
{
returnValue = F("Heinz-Gries-Str.");
break;
}
case 138474:
{
returnValue = F("Heinz-Grünewald-Str.");
break;
}
case 138475:
{
returnValue = F("Heinz-Götze-Weg");
break;
}
case 138476:
{
returnValue = F("Heinz-Haferkamp-Str.");
break;
}
case 138477:
{
returnValue = F("Heinz-Hagelstein-Weg");
break;
}
case 138478:
{
returnValue = F("Heinz-Hankammer-Str.");
break;
}
case 138479:
{
returnValue = F("Heinz-Hartmann-Weg");
break;
}
case 138480:
{
returnValue = F("Heinz-Heim-Weg");
break;
}
case 138481:
{
returnValue = F("Heinz-Herbert-Karry-Str.");
break;
}
case 138482:
{
returnValue = F("Heinz-Herholz-Weg");
break;
}
case 138483:
{
returnValue = F("Heinz-Homann-Ring");
break;
}
case 138484:
{
returnValue = F("Heinz-Hoppe-Str.");
break;
}
case 138485:
{
returnValue = F("Heinz-Illbruck-Str.");
break;
}
case 138486:
{
returnValue = F("Heinz-Kapelle-Str.");
break;
}
case 138487:
{
returnValue = F("Heinz-Katzenberger-Str.");
break;
}
case 138488:
{
returnValue = F("Heinz-Kettler-Str.");
break;
}
case 138489:
{
returnValue = F("Heinz-Klever-Str.");
break;
}
case 138490:
{
returnValue = F("Heinz-Kremers-Str.");
break;
}
case 138491:
{
returnValue = F("Heinz-Krey-Hof");
break;
}
case 138492:
{
returnValue = F("Heinz-Krey-Str.");
break;
}
case 138493:
{
returnValue = F("Heinz-Köhler-Weg");
break;
}
case 138494:
{
returnValue = F("Heinz-Köster-Str.");
break;
}
case 138495:
{
returnValue = F("Heinz-Küppenbender-Str.");
break;
}
case 138496:
{
returnValue = F("Heinz-Küster-Weg");
break;
}
case 138497:
{
returnValue = F("Heinz-Küting-Weg");
break;
}
case 138498:
{
returnValue = F("Heinz-Landerer-Str.");
break;
}
case 138499:
{
returnValue = F("Heinz-Lange-Str.");
break;
}
case 138500:
{
returnValue = F("Heinz-Leiermann-Weg");
break;
}
case 138501:
{
returnValue = F("Heinz-Lemmermann-Weg");
break;
}
case 138502:
{
returnValue = F("Heinz-Loermann-Weg");
break;
}
case 138503:
{
returnValue = F("Heinz-Lohmann-Str.");
break;
}
case 138504:
{
returnValue = F("Heinz-Luhnen-Str.");
break;
}
case 138505:
{
returnValue = F("Heinz-Lücke-Str.");
break;
}
case 138506:
{
returnValue = F("Heinz-Mauel-Str.");
break;
}
case 138507:
{
returnValue = F("Heinz-Mecherlein-Str.");
break;
}
case 138508:
{
returnValue = F("Heinz-Menzel-Str.");
break;
}
case 138509:
{
returnValue = F("Heinz-Meyer-Ring");
break;
}
case 138510:
{
returnValue = F("Heinz-Mutterlose-Weg");
break;
}
case 138511:
{
returnValue = F("Heinz-Müller-Str.");
break;
}
case 138512:
{
returnValue = F("Heinz-Neidhardt-Ring");
break;
}
case 138513:
{
returnValue = F("Heinz-Netta-Str.");
break;
}
case 138514:
{
returnValue = F("Heinz-Nixdorf-Str.");
break;
}
case 138515:
{
returnValue = F("Heinz-Oberfeld-Str.");
break;
}
case 138516:
{
returnValue = F("Heinz-Oertel-Stieg");
break;
}
case 138517:
{
returnValue = F("Heinz-Richard-Lohholz-Promenade");
break;
}
case 138518:
{
returnValue = F("Heinz-Rosendahl-Str.");
break;
}
case 138519:
{
returnValue = F("Heinz-Römer-Str.");
break;
}
case 138520:
{
returnValue = F("Heinz-Röttger-Str.");
break;
}
case 138521:
{
returnValue = F("Heinz-Rühmann-Str.");
break;
}
case 138522:
{
returnValue = F("Heinz-Rühmann-Weg");
break;
}
case 138523:
{
returnValue = F("Heinz-Sallads-Str.");
break;
}
case 138524:
{
returnValue = F("Heinz-Sauer-Str.");
break;
}
case 138525:
{
returnValue = F("Heinz-Sauermann-Str.");
break;
}
case 138526:
{
returnValue = F("Heinz-Sausele-Weg");
break;
}
case 138527:
{
returnValue = F("Heinz-Schauwecker-Platz");
break;
}
case 138528:
{
returnValue = F("Heinz-Schifferdecker-Str.");
break;
}
case 138529:
{
returnValue = F("Heinz-Schlawatzky-Str.");
break;
}
case 138530:
{
returnValue = F("Heinz-Schnaufer-Str.");
break;
}
case 138531:
{
returnValue = F("Heinz-Seesing-Str.");
break;
}
case 138532:
{
returnValue = F("Heinz-Sieben-Str.");
break;
}
case 138533:
{
returnValue = F("Heinz-Sielmann-Ring");
break;
}
case 138534:
{
returnValue = F("Heinz-Steyer-Ring");
break;
}
case 138535:
{
returnValue = F("Heinz-Steyer-Str.");
break;
}
case 138536:
{
returnValue = F("Heinz-Storm-Str.");
break;
}
case 138537:
{
returnValue = F("Heinz-Strachowitz-Str.");
break;
}
case 138538:
{
returnValue = F("Heinz-Tietjen-Weg");
break;
}
case 138539:
{
returnValue = F("Heinz-Treffinger-Str.");
break;
}
case 138540:
{
returnValue = F("Heinz-Trox-Str.");
break;
}
case 138541:
{
returnValue = F("Heinz-Uhlitzsch-Str.");
break;
}
case 138542:
{
returnValue = F("Heinz-Waldenmaier-Str.");
break;
}
case 138543:
{
returnValue = F("Heinz-Walther-Str.");
break;
}
case 138544:
{
returnValue = F("Heinz-Wassen-Str.");
break;
}
case 138545:
{
returnValue = F("Heinz-Weg");
break;
}
case 138546:
{
returnValue = F("Heinz-Willer-Str.");
break;
}
case 138547:
{
returnValue = F("Heinz-Willer-Str. 5");
break;
}
case 138548:
{
returnValue = F("Heinz-Wutkewicz-Weg");
break;
}
case 138549:
{
returnValue = F("Heinz-Zurmühlen-Str.");
break;
}
case 138550:
{
returnValue = F("Heinz-van-Ackeren-Str.");
break;
}
case 138551:
{
returnValue = F("Heinz-von-Stein-Str.");
break;
}
case 138552:
{
returnValue = F("Heinzebank");
break;
}
case 138553:
{
returnValue = F("Heinzebankstr.");
break;
}
case 138554:
{
returnValue = F("Heinzelbergsträßchen");
break;
}
case 138555:
{
returnValue = F("Heinzelfeldstr.");
break;
}
case 138556:
{
returnValue = F("Heinzelmannstr.");
break;
}
case 138557:
{
returnValue = F("Heinzelmännchenweg");
break;
}
case 138558:
{
returnValue = F("Heinzelsleite");
break;
}
case 138559:
{
returnValue = F("Heinzelspitze");
break;
}
case 138560:
{
returnValue = F("Heinzelstr.");
break;
}
case 138561:
{
returnValue = F("Heinzelwinkler Str.");
break;
}
case 138562:
{
returnValue = F("Heinzelwinklstr.");
break;
}
case 138563:
{
returnValue = F("Heinzenbacher Str.");
break;
}
case 138564:
{
returnValue = F("Heinzenbacher Weg");
break;
}
case 138565:
{
returnValue = F("Heinzenberg");
break;
}
case 138566:
{
returnValue = F("Heinzenberger Str.");
break;
}
case 138567:
{
returnValue = F("Heinzenberger Weg");
break;
}
case 138568:
{
returnValue = F("Heinzenbühl");
break;
}
case 138569:
{
returnValue = F("Heinzengarten");
break;
}
case 138570:
{
returnValue = F("Heinzengartenstr.");
break;
}
case 138571:
{
returnValue = F("Heinzengasse");
break;
}
case 138572:
{
returnValue = F("Heinzenhauser Str.");
break;
}
case 138573:
{
returnValue = F("Heinzenleite");
break;
}
case 138574:
{
returnValue = F("Heinzenstr.");
break;
}
case 138575:
{
returnValue = F("Heinzental");
break;
}
case 138576:
{
returnValue = F("Heinzenweg");
break;
}
case 138577:
{
returnValue = F("Heinzenwies");
break;
}
case 138578:
{
returnValue = F("Heinzenwiesenweg");
break;
}
case 138579:
{
returnValue = F("Heinzerather Str.");
break;
}
case 138580:
{
returnValue = F("Heinzestr.");
break;
}
case 138581:
{
returnValue = F("Heinzewies");
break;
}
case 138582:
{
returnValue = F("Heinzingerstr.");
break;
}
case 138583:
{
returnValue = F("Heinzlensrain");
break;
}
case 138584:
{
returnValue = F("Heinzlenstr.");
break;
}
case 138585:
{
returnValue = F("Heinzmannstr.");
break;
}
case 138586:
{
returnValue = F("Heinzweilerstr.");
break;
}
case 138587:
{
returnValue = F("Heipker Siedlung");
break;
}
case 138588:
{
returnValue = F("Heipker Str.");
break;
}
case 138589:
{
returnValue = F("Heiprichweg");
break;
}
case 138590:
{
returnValue = F("Heiratsberg");
break;
}
case 138591:
{
returnValue = F("Heiratsweg");
break;
}
case 138592:
{
returnValue = F("Heiratsäcker");
break;
}
case 138593:
{
returnValue = F("Heisberger Str.");
break;
}
case 138594:
{
returnValue = F("Heisbergstr.");
break;
}
case 138595:
{
returnValue = F("Heisbornstr.");
break;
}
case 138596:
{
returnValue = F("Heisch");
break;
}
case 138597:
{
returnValue = F("Heischbach");
break;
}
case 138598:
{
returnValue = F("Heischberg");
break;
}
case 138599:
{
returnValue = F("Heischbrook");
break;
}
case 138600:
{
returnValue = F("Heischbühlstr.");
break;
}
case 138601:
{
returnValue = F("Heischeider Str.");
break;
}
case 138602:
{
returnValue = F("Heischkamp");
break;
}
case 138603:
{
returnValue = F("Heischkoppel");
break;
}
case 138604:
{
returnValue = F("Heischredder");
break;
}
case 138605:
{
returnValue = F("Heischstr.");
break;
}
case 138606:
{
returnValue = F("Heischweg");
break;
}
case 138607:
{
returnValue = F("Heischwinkel");
break;
}
case 138608:
{
returnValue = F("Heisdorfer Str.");
break;
}
case 138609:
{
returnValue = F("Heise");
break;
}
case 138610:
{
returnValue = F("Heise Water");
break;
}
case 138611:
{
returnValue = F("Heisebecker Str.");
break;
}
case 138612:
{
returnValue = F("Heiseder Str.");
break;
}
case 138613:
{
returnValue = F("Heiselhuser Mittelpfad");
break;
}
case 138614:
{
returnValue = F("Heiselhuser Str.");
break;
}
case 138615:
{
returnValue = F("Heisenberg");
break;
}
case 138616:
{
returnValue = F("Heisenberg-Str.");
break;
}
case 138617:
{
returnValue = F("Heisenbergring");
break;
}
case 138618:
{
returnValue = F("Heisenbergstr.");
break;
}
case 138619:
{
returnValue = F("Heisenbergweg");
break;
}
case 138620:
{
returnValue = F("Heisenhof");
break;
}
case 138621:
{
returnValue = F("Heisenkamp");
break;
}
case 138622:
{
returnValue = F("Heisenstein");
break;
}
case 138623:
{
returnValue = F("Heisensteiner Str.");
break;
}
case 138624:
{
returnValue = F("Heiser Mühle");
break;
}
case 138625:
{
returnValue = F("Heiserackerweg");
break;
}
case 138626:
{
returnValue = F("Heiserbergweg");
break;
}
case 138627:
{
returnValue = F("Heiserfeld");
break;
}
case 138628:
{
returnValue = F("Heisermühle");
break;
}
case 138629:
{
returnValue = F("Heises-Mist-Weg");
break;
}
case 138630:
{
returnValue = F("Heiseshofer Weg");
break;
}
case 138631:
{
returnValue = F("Heiseweg");
break;
}
case 138632:
{
returnValue = F("Heisfelder Str.");
break;
}
case 138633:
{
returnValue = F("Heising");
break;
}
case 138634:
{
returnValue = F("Heisinger Str.");
break;
}
case 138635:
{
returnValue = F("Heisinger Weg");
break;
}
case 138636:
{
returnValue = F("Heisingweg");
break;
}
case 138637:
{
returnValue = F("Heiskamp");
break;
}
case 138638:
{
returnValue = F("Heiskampstr.");
break;
}
case 138639:
{
returnValue = F("Heislers Kamp");
break;
}
case 138640:
{
returnValue = F("Heissener Weg");
break;
}
case 138641:
{
returnValue = F("Heissenweg");
break;
}
case 138642:
{
returnValue = F("Heissinger Str.");
break;
}
case 138643:
{
returnValue = F("Heist");
break;
}
case 138644:
{
returnValue = F("Heistardstr.");
break;
}
case 138645:
{
returnValue = F("Heistenbacher Str.");
break;
}
case 138646:
{
returnValue = F("Heister Feld");
break;
}
case 138647:
{
returnValue = F("Heister-Sturm-Str.");
break;
}
case 138648:
{
returnValue = F("Heisterbacher Hof");
break;
}
case 138649:
{
returnValue = F("Heisterbacher Str.");
break;
}
case 138650:
{
returnValue = F("Heisterbacher Weg");
break;
}
case 138651:
{
returnValue = F("Heisterbachstr.");
break;
}
case 138652:
{
returnValue = F("Heisterbarg");
break;
}
case 138653:
{
returnValue = F("Heisterberg");
break;
}
case 138654:
{
returnValue = F("Heisterberger Str.");
break;
}
case 138655:
{
returnValue = F("Heisterberger Weg");
break;
}
case 138656:
{
returnValue = F("Heisterbergstr.");
break;
}
case 138657:
{
returnValue = F("Heisterbergweg");
break;
}
case 138658:
{
returnValue = F("Heisterbrede");
break;
}
case 138659:
{
returnValue = F("Heisterbreite");
break;
}
case 138660:
{
returnValue = F("Heisterbruch");
break;
}
case 138661:
{
returnValue = F("Heisterburgweg");
break;
}
case 138662:
{
returnValue = F("Heisterbusch");
break;
}
case 138663:
{
returnValue = F("Heisterbuschweg");
break;
}
case 138664:
{
returnValue = F("Heisterdelle");
break;
}
case 138665:
{
returnValue = F("Heisterdorn");
break;
}
case 138666:
{
returnValue = F("Heistereck");
break;
}
case 138667:
{
returnValue = F("Heisterer Str.");
break;
}
case 138668:
{
returnValue = F("Heisterfeldstr.");
break;
}
case 138669:
{
returnValue = F("Heistergarten");
break;
}
case 138670:
{
returnValue = F("Heisterholz");
break;
}
case 138671:
{
returnValue = F("Heisterholzstr.");
break;
}
case 138672:
{
returnValue = F("Heisterhoop");
break;
}
case 138673:
{
returnValue = F("Heisterkamp");
break;
}
case 138674:
{
returnValue = F("Heisterkampstr.");
break;
}
case 138675:
{
returnValue = F("Heisterkampsweg");
break;
}
case 138676:
{
returnValue = F("Heistermannstr.");
break;
}
case 138677:
{
returnValue = F("Heistermannweg");
break;
}
case 138678:
{
returnValue = F("Heisternblick");
break;
}
case 138679:
{
returnValue = F("Heisterner Str.");
break;
}
case 138680:
{
returnValue = F("Heisterner Weg");
break;
}
case 138681:
{
returnValue = F("Heisternest");
break;
}
case 138682:
{
returnValue = F("Heisternweg");
break;
}
case 138683:
{
returnValue = F("Heisternwies");
break;
}
case 138684:
{
returnValue = F("Heisterort");
break;
}
case 138685:
{
returnValue = F("Heisterpohl");
break;
}
case 138686:
{
returnValue = F("Heisterpoort");
break;
}
case 138687:
{
returnValue = F("Heisterser Str.");
break;
}
case 138688:
{
returnValue = F("Heisterstieg");
break;
}
case 138689:
{
returnValue = F("Heisterstocker Weg");
break;
}
case 138690:
{
returnValue = F("Heisterstr.");
break;
}
case 138691:
{
returnValue = F("Heisterstraat");
break;
}
case 138692:
{
returnValue = F("Heisterstroot");
break;
}
case 138693:
{
returnValue = F("Heistersweg");
break;
}
case 138694:
{
returnValue = F("Heisterter Str.");
break;
}
case 138695:
{
returnValue = F("Heistertweg");
break;
}
case 138696:
{
returnValue = F("Heisterweg");
break;
}
case 138697:
{
returnValue = F("Heistkampweg");
break;
}
case 138698:
{
returnValue = F("Heistmer Weg");
break;
}
case 138699:
{
returnValue = F("Heistück");
break;
}
case 138700:
{
returnValue = F("Heitberg");
break;
}
case 138701:
{
returnValue = F("Heitbrink");
break;
}
case 138702:
{
returnValue = F("Heitel");
break;
}
case 138703:
{
returnValue = F("Heiteler Str.");
break;
}
case 138704:
{
returnValue = F("Heiteler Weg");
break;
}
case 138705:
{
returnValue = F("Heitemeyerstr.");
break;
}
case 138706:
{
returnValue = F("Heitemeyerweg");
break;
}
case 138707:
{
returnValue = F("Heitenthun");
break;
}
case 138708:
{
returnValue = F("Heiterblickallee");
break;
}
case 138709:
{
returnValue = F("Heiterer Blick");
break;
}
case 138710:
{
returnValue = F("Heiterer Blickweg");
break;
}
case 138711:
{
returnValue = F("Heitereweg");
break;
}
case 138712:
{
returnValue = F("Heitergaß");
break;
}
case 138713:
{
returnValue = F("Heitermoosweg");
break;
}
case 138714:
{
returnValue = F("Heitersgasse");
break;
}
case 138715:
{
returnValue = F("Heitersheimer Str.");
break;
}
case 138716:
{
returnValue = F("Heitersheimer Weg");
break;
}
case 138717:
{
returnValue = F("Heiterstr.");
break;
}
case 138718:
{
returnValue = F("Heithemstr.");
break;
}
case 138719:
{
returnValue = F("Heithof");
break;
}
case 138720:
{
returnValue = F("Heithoff");
break;
}
case 138721:
{
returnValue = F("Heitholm");
break;
}
case 138722:
{
returnValue = F("Heithook");
break;
}
case 138723:
{
returnValue = F("Heithöfener Str.");
break;
}
case 138724:
{
returnValue = F("Heitkamp");
break;
}
case 138725:
{
returnValue = F("Heitkampsfeld");
break;
}
case 138726:
{
returnValue = F("Heitkampsort");
break;
}
case 138727:
{
returnValue = F("Heitkampsweg");
break;
}
case 138728:
{
returnValue = F("Heitkampweg");
break;
}
case 138729:
{
returnValue = F("Heitken");
break;
}
case 138730:
{
returnValue = F("Heitkämpen");
break;
}
case 138731:
{
returnValue = F("Heitkämperstr.");
break;
}
case 138732:
{
returnValue = F("Heitlinger Str.");
break;
}
case 138733:
{
returnValue = F("Heitmanns Mühle");
break;
}
case 138734:
{
returnValue = F("Heitmanns Weg");
break;
}
case 138735:
{
returnValue = F("Heitmannshausen");
break;
}
case 138736:
{
returnValue = F("Heitmannskamp");
break;
}
case 138737:
{
returnValue = F("Heitmannsweg");
break;
}
case 138738:
{
returnValue = F("Heitmicke");
break;
}
case 138739:
{
returnValue = F("Heitstr.");
break;
}
case 138740:
{
returnValue = F("Heitsweg");
break;
}
case 138741:
{
returnValue = F("Heitwinkel");
break;
}
case 138742:
{
returnValue = F("Heitzenhofener Str.");
break;
}
case 138743:
{
returnValue = F("Heitzenhofener Weg");
break;
}
case 138744:
{
returnValue = F("Heitzerend");
break;
}
case 138745:
{
returnValue = F("Heitzerstr.");
break;
}
case 138746:
{
returnValue = F("Heitzhöfer Str.");
break;
}
case 138747:
{
returnValue = F("Heitzrütteweg");
break;
}
case 138748:
{
returnValue = F("Heitzweg");
break;
}
case 138749:
{
returnValue = F("Heiweg");
break;
}
case 138750:
{
returnValue = F("Heizengasse");
break;
}
case 138751:
{
returnValue = F("Heizenstr.");
break;
}
case 138752:
{
returnValue = F("Heizhausweg");
break;
}
case 138753:
{
returnValue = F("Heizweg");
break;
}
case 138754:
{
returnValue = F("Heiße Str.");
break;
}
case 138755:
{
returnValue = F("Heißedellenweg");
break;
}
case 138756:
{
returnValue = F("Heißen");
break;
}
case 138757:
{
returnValue = F("Heißenbergstr.");
break;
}
case 138758:
{
returnValue = F("Heißener Str.");
break;
}
case 138759:
{
returnValue = F("Heißenhub");
break;
}
case 138760:
{
returnValue = F("Heißenstein");
break;
}
case 138761:
{
returnValue = F("Heißensteiner Weg");
break;
}
case 138762:
{
returnValue = F("Heißenweg");
break;
}
case 138763:
{
returnValue = F("Heißer Stein");
break;
}
case 138764:
{
returnValue = F("Heißer Weg");
break;
}
case 138765:
{
returnValue = F("Heißesheimer Str.");
break;
}
case 138766:
{
returnValue = F("Heißfeldstr.");
break;
}
case 138767:
{
returnValue = F("Heißgräte");
break;
}
case 138768:
{
returnValue = F("Heißmannsweg");
break;
}
case 138769:
{
returnValue = F("Heißnbrücke");
break;
}
case 138770:
{
returnValue = F("Heißstr.");
break;
}
case 138771:
{
returnValue = F("Heißumer Str.");
break;
}
case 138772:
{
returnValue = F("Heißumer Weg");
break;
}
case 138773:
{
returnValue = F("Heißweg");
break;
}
case 138774:
{
returnValue = F("Hekeler Str.");
break;
}
case 138775:
{
returnValue = F("Hekerenfelder Weg");
break;
}
case 138776:
{
returnValue = F("Hekeser Kirchweg");
break;
}
case 138777:
{
returnValue = F("Hekkens");
break;
}
case 138778:
{
returnValue = F("Hekselweg");
break;
}
case 138779:
{
returnValue = F("Hektersteige");
break;
}
case 138780:
{
returnValue = F("Hela (ehemalige Radrennbahn)");
break;
}
case 138781:
{
returnValue = F("Helaweg");
break;
}
case 138782:
{
returnValue = F("Helbecker Weg");
break;
}
case 138783:
{
returnValue = F("Helbeeck");
break;
}
case 138784:
{
returnValue = F("Helberger Str.");
break;
}
case 138785:
{
returnValue = F("Helberhäuser Weg");
break;
}
case 138786:
{
returnValue = F("Helbestr.");
break;
}
case 138787:
{
returnValue = F("Helbetalstr.");
break;
}
case 138788:
{
returnValue = F("Helbetorstr.");
break;
}
case 138789:
{
returnValue = F("Helbeweg");
break;
}
case 138790:
{
returnValue = F("Helbighainer Weg");
break;
}
case 138791:
{
returnValue = F("Helbigsdorf");
break;
}
case 138792:
{
returnValue = F("Helbigsdorfer Siedlung");
break;
}
case 138793:
{
returnValue = F("Helbigsdorfer Str.");
break;
}
case 138794:
{
returnValue = F("Helbigsdorfer Weg");
break;
}
case 138795:
{
returnValue = F("Helbigstr.");
break;
}
case 138796:
{
returnValue = F("Helbigweg");
break;
}
case 138797:
{
returnValue = F("Helbigwiese");
break;
}
case 138798:
{
returnValue = F("Helbraer Str.");
break;
}
case 138799:
{
returnValue = F("Helbraer Weg");
break;
}
case 138800:
{
returnValue = F("Helbruchweg");
break;
}
case 138801:
{
returnValue = F("Helbüchelstr.");
break;
}
case 138802:
{
returnValue = F("Helchenbach");
break;
}
case 138803:
{
returnValue = F("Helchenbacher Str.");
break;
}
case 138804:
{
returnValue = F("Held");
break;
}
case 138805:
{
returnValue = F("Heldburger Str.");
break;
}
case 138806:
{
returnValue = F("Heldburger Weg");
break;
}
case 138807:
{
returnValue = F("Heldburgplatz");
break;
}
case 138808:
{
returnValue = F("Helde");
break;
}
case 138809:
{
returnValue = F("Heldelinger Str.");
break;
}
case 138810:
{
returnValue = F("Heldelinstr.");
break;
}
case 138811:
{
returnValue = F("Heldenackerstr.");
break;
}
case 138812:
{
returnValue = F("Heldenallee");
break;
}
case 138813:
{
returnValue = F("Heldenbergener Str.");
break;
}
case 138814:
{
returnValue = F("Heldenberger Str.");
break;
}
case 138815:
{
returnValue = F("Heldenberger Weg");
break;
}
case 138816:
{
returnValue = F("Heldenbergstr.");
break;
}
case 138817:
{
returnValue = F("Heldenbergweg");
break;
}
case 138818:
{
returnValue = F("Heldenburger Weg");
break;
}
case 138819:
{
returnValue = F("Heldener Str.");
break;
}
case 138820:
{
returnValue = F("Heldenfinger Str.");
break;
}
case 138821:
{
returnValue = F("Heldengasse");
break;
}
case 138822:
{
returnValue = F("Heldengraben");
break;
}
case 138823:
{
returnValue = F("Heldenhain");
break;
}
case 138824:
{
returnValue = F("Heldenmühlenweg");
break;
}
case 138825:
{
returnValue = F("Heldensteiner Str.");
break;
}
case 138826:
{
returnValue = F("Heldenstr.");
break;
}
case 138827:
{
returnValue = F("Heldental");
break;
}
case 138828:
{
returnValue = F("Heldentrischen");
break;
}
case 138829:
{
returnValue = F("Heldenweg");
break;
}
case 138830:
{
returnValue = F("Helderbachstr.");
break;
}
case 138831:
{
returnValue = F("Helderei");
break;
}
case 138832:
{
returnValue = F("Helderloher Str.");
break;
}
case 138833:
{
returnValue = F("Heldermann-Park");
break;
}
case 138834:
{
returnValue = F("Heldermannstr.");
break;
}
case 138835:
{
returnValue = F("Heldersbacher Weg");
break;
}
case 138836:
{
returnValue = F("Heldersgässchen");
break;
}
case 138837:
{
returnValue = F("Helderweg");
break;
}
case 138838:
{
returnValue = F("Heldestr.");
break;
}
case 138839:
{
returnValue = F("Heldeweg");
break;
}
case 138840:
{
returnValue = F("Heldgasse");
break;
}
case 138841:
{
returnValue = F("Heldmannsberg");
break;
}
case 138842:
{
returnValue = F("Heldmannsberger Str.");
break;
}
case 138843:
{
returnValue = F("Heldmannsberger Weg");
break;
}
case 138844:
{
returnValue = F("Heldmanskamp");
break;
}
case 138845:
{
returnValue = F("Heldmanstr.");
break;
}
case 138846:
{
returnValue = F("Heldragasse");
break;
}
case 138847:
{
returnValue = F("Heldritter Str.");
break;
}
case 138848:
{
returnValue = F("Heldritter Weg");
break;
}
case 138849:
{
returnValue = F("Heldrungener Str.");
break;
}
case 138850:
{
returnValue = F("Heldrunger Str.");
break;
}
case 138851:
{
returnValue = F("Helds Kamp");
break;
}
case 138852:
{
returnValue = F("Heldstr.");
break;
}
case 138853:
{
returnValue = F("Heldsweg");
break;
}
case 138854:
{
returnValue = F("Heldter Gasse");
break;
}
case 138855:
{
returnValue = F("Heldter Weg");
break;
}
case 138856:
{
returnValue = F("Heldweg");
break;
}
case 138857:
{
returnValue = F("Hele Mond");
break;
}
case 138858:
{
returnValue = F("Heleeker");
break;
}
case 138859:
{
returnValue = F("Helen-Keller-Str.");
break;
}
case 138860:
{
returnValue = F("Helen-Keller-Weg");
break;
}
case 138861:
{
returnValue = F("Helen-Meyer-Moringen-Str.");
break;
}
case 138862:
{
returnValue = F("Helena-Alexandra-Str.");
break;
}
case 138863:
{
returnValue = F("Helena-Rubinstein-Str.");
break;
}
case 138864:
{
returnValue = F("Helenastr.");
break;
}
case 138865:
{
returnValue = F("Helenaweg");
break;
}
case 138866:
{
returnValue = F("Helene-Behrends-Weg");
break;
}
case 138867:
{
returnValue = F("Helene-Brehm-Str.");
break;
}
case 138868:
{
returnValue = F("Helene-Brehm-Weg");
break;
}
case 138869:
{
returnValue = F("Helene-Breßlau-Str.");
break;
}
case 138870:
{
returnValue = F("Helene-Christaller-Weg");
break;
}
case 138871:
{
returnValue = F("Helene-Drießen-Weg");
break;
}
case 138872:
{
returnValue = F("Helene-Frey-Weg");
break;
}
case 138873:
{
returnValue = F("Helene-Grulke-Str.");
break;
}
case 138874:
{
returnValue = F("Helene-Haeusler-Str.");
break;
}
case 138875:
{
returnValue = F("Helene-Heimer-Str.");
break;
}
case 138876:
{
returnValue = F("Helene-Heymann-Str.");
break;
}
case 138877:
{
returnValue = F("Helene-Holling-Str.");
break;
}
case 138878:
{
returnValue = F("Helene-Holzman-Str.");
break;
}
case 138879:
{
returnValue = F("Helene-Huber-Str.");
break;
}
case 138880:
{
returnValue = F("Helene-Höhnk-Str.");
break;
}
case 138881:
{
returnValue = F("Helene-Junghans-Str.");
break;
}
case 138882:
{
returnValue = F("Helene-Lange-Str.");
break;
}
case 138883:
{
returnValue = F("Helene-Lange-Weg");
break;
}
case 138884:
{
returnValue = F("Helene-Mayer-Str.");
break;
}
case 138885:
{
returnValue = F("Helene-Mayer-Weg");
break;
}
case 138886:
{
returnValue = F("Helene-Meier-Str.");
break;
}
case 138887:
{
returnValue = F("Helene-Merk-Str.");
break;
}
case 138888:
{
returnValue = F("Helene-Mössinger-Str.");
break;
}
case 138889:
{
returnValue = F("Helene-Pagés-Str.");
break;
}
case 138890:
{
returnValue = F("Helene-Richter-Str.");
break;
}
case 138891:
{
returnValue = F("Helene-Rothländer-Str.");
break;
}
case 138892:
{
returnValue = F("Helene-Schweitzer-Weg");
break;
}
case 138893:
{
returnValue = F("Helene-Sedlmayer-Str.");
break;
}
case 138894:
{
returnValue = F("Helene-Segelke-Platz");
break;
}
case 138895:
{
returnValue = F("Helene-Stöcker-Str.");
break;
}
case 138896:
{
returnValue = F("Helene-Tamm-Weg");
break;
}
case 138897:
{
returnValue = F("Helene-Trocks-Str.");
break;
}
case 138898:
{
returnValue = F("Helene-Ufer-Str.");
break;
}
case 138899:
{
returnValue = F("Helene-Voigtländer-Str.");
break;
}
case 138900:
{
returnValue = F("Helene-Weber-Ring");
break;
}
case 138901:
{
returnValue = F("Helene-Weber-Str.");
break;
}
case 138902:
{
returnValue = F("Helene-Weber-Weg");
break;
}
case 138903:
{
returnValue = F("Helene-Weigel-Str.");
break;
}
case 138904:
{
returnValue = F("Helene-Weigel-Weg");
break;
}
case 138905:
{
returnValue = F("Helene-Wessel-Ring");
break;
}
case 138906:
{
returnValue = F("Helene-Wessel-Str");
break;
}
case 138907:
{
returnValue = F("Helene-Wessel-Str.");
break;
}
case 138908:
{
returnValue = F("Helene-Wessel-Weg");
break;
}
case 138909:
{
returnValue = F("Helene-Wunderlich-Str.");
break;
}
case 138910:
{
returnValue = F("Helene-Zapf-Weg");
break;
}
case 138911:
{
returnValue = F("Helene-und-Maria-Schieß-Str.");
break;
}
case 138912:
{
returnValue = F("Helene-von-Bülow-Str.");
break;
}
case 138913:
{
returnValue = F("Helene-von-Hülsen-Weg");
break;
}
case 138914:
{
returnValue = F("Helenenallee");
break;
}
case 138915:
{
returnValue = F("Helenenanlage");
break;
}
case 138916:
{
returnValue = F("Helenenauer Weg");
break;
}
case 138917:
{
returnValue = F("Helenenbad");
break;
}
case 138918:
{
returnValue = F("Helenenberg");
break;
}
case 138919:
{
returnValue = F("Helenenberger Str.");
break;
}
case 138920:
{
returnValue = F("Helenenberger Weg");
break;
}
case 138921:
{
returnValue = F("Helenenbergstr.");
break;
}
case 138922:
{
returnValue = F("Helenenbrunnenschneise");
break;
}
case 138923:
{
returnValue = F("Helenenbrücke");
break;
}
case 138924:
{
returnValue = F("Helenenburgweg");
break;
}
case 138925:
{
returnValue = F("Helenenbusch");
break;
}
case 138926:
{
returnValue = F("Helenengasse");
break;
}
case 138927:
{
returnValue = F("Helenenhof");
break;
}
case 138928:
{
returnValue = F("Helenenkoppel");
break;
}
case 138929:
{
returnValue = F("Helenenquellenweg");
break;
}
case 138930:
{
returnValue = F("Helenenstieg");
break;
}
case 138931:
{
returnValue = F("Helenenstr.");
break;
}
case 138932:
{
returnValue = F("Helenental");
break;
}
case 138933:
{
returnValue = F("Helenenweg");
break;
}
case 138934:
{
returnValue = F("Helenestr.");
break;
}
case 138935:
{
returnValue = F("Helenriede");
break;
}
case 138936:
{
returnValue = F("Helenweg");
break;
}
case 138937:
{
returnValue = F("Helerikendorp");
break;
}
case 138938:
{
returnValue = F("Heleweg");
break;
}
case 138939:
{
returnValue = F("Helfanter Str.");
break;
}
case 138940:
{
returnValue = F("Helfanter Weg");
break;
}
case 138941:
{
returnValue = F("Helfau");
break;
}
case 138942:
{
returnValue = F("Helfenberger Str.");
break;
}
case 138943:
{
returnValue = F("Helfenbergstr.");
break;
}
case 138944:
{
returnValue = F("Helfendorfer Str.");
break;
}
case 138945:
{
returnValue = F("Helfendorfweg");
break;
}
case 138946:
{
returnValue = F("Helfenstein");
break;
}
case 138947:
{
returnValue = F("Helfensteiner Ring");
break;
}
case 138948:
{
returnValue = F("Helfensteiner Str.");
break;
}
case 138949:
{
returnValue = F("Helfensteinerstr.");
break;
}
case 138950:
{
returnValue = F("Helfensteinerweg");
break;
}
case 138951:
{
returnValue = F("Helfensteingasse");
break;
}
case 138952:
{
returnValue = F("Helfensteinstr.");
break;
}
case 138953:
{
returnValue = F("Helfensteinweg");
break;
}
case 138954:
{
returnValue = F("Helfenzriederstr.");
break;
}
case 138955:
{
returnValue = F("Helfereistr.");
break;
}
case 138956:
{
returnValue = F("Helfergasse");
break;
}
case 138957:
{
returnValue = F("Helferichstr.");
break;
}
case 138958:
{
returnValue = F("Helferner Weg");
break;
}
case 138959:
{
returnValue = F("Helfersbergweg");
break;
}
case 138960:
{
returnValue = F("Helferstr.");
break;
}
case 138961:
{
returnValue = F("Helfertsweg");
break;
}
case 138962:
{
returnValue = F("Helferweg");
break;
}
case 138963:
{
returnValue = F("Helffensteiner Str.");
break;
}
case 138964:
{
returnValue = F("Helfkamp");
break;
}
case 138965:
{
returnValue = F("Helfmannstr.");
break;
}
case 138966:
{
returnValue = F("Helfrichsgärten");
break;
}
case 138967:
{
returnValue = F("Helfrichstr.");
break;
}
case 138968:
{
returnValue = F("Helftaer Hauptstr.");
break;
}
case 138969:
{
returnValue = F("Helftaer Weg");
break;
}
case 138970:
{
returnValue = F("Helfurtsbrücke");
break;
}
case 138971:
{
returnValue = F("Helga-Barth-Str.");
break;
}
case 138972:
{
returnValue = F("Helga-Brugger-Weg");
break;
}
case 138973:
{
returnValue = F("Helga-Hahnemann-Str.");
break;
}
case 138974:
{
returnValue = F("Helga-Hansen-Ring");
break;
}
case 138975:
{
returnValue = F("Helga-Koth-Weg");
break;
}
case 138976:
{
returnValue = F("Helga-Kroening-Str.");
break;
}
case 138977:
{
returnValue = F("Helga-Köhler-Str.");
break;
}
case 138978:
{
returnValue = F("Helga-Schweinberger-Str.");
break;
}
case 138979:
{
returnValue = F("Helga-Weiße-Weg");
break;
}
case 138980:
{
returnValue = F("Helga-Wex-Platz");
break;
}
case 138981:
{
returnValue = F("Helgastr.");
break;
}
case 138982:
{
returnValue = F("Helgaweg");
break;
}
case 138983:
{
returnValue = F("Helge-Pross-Str.");
break;
}
case 138984:
{
returnValue = F("Helgebachstr.");
break;
}
case 138985:
{
returnValue = F("Helgebornstr.");
break;
}
case 138986:
{
returnValue = F("Helgegrund");
break;
}
case 138987:
{
returnValue = F("Helgelandstr.");
break;
}
case 138988:
{
returnValue = F("Helgemayrstr.");
break;
}
case 138989:
{
returnValue = F("Helgenackerstr.");
break;
}
case 138990:
{
returnValue = F("Helgenau");
break;
}
case 138991:
{
returnValue = F("Helgenbrunnen");
break;
}
case 138992:
{
returnValue = F("Helgenfeldstr.");
break;
}
case 138993:
{
returnValue = F("Helgengasse");
break;
}
case 138994:
{
returnValue = F("Helgengärten");
break;
}
case 138995:
{
returnValue = F("Helgenhof");
break;
}
case 138996:
{
returnValue = F("Helgenhöhe");
break;
}
case 138997:
{
returnValue = F("Helgenkamp");
break;
}
case 138998:
{
returnValue = F("Helgenrain");
break;
}
case 138999:
{
returnValue = F("Helgenstockstr.");
break;
}
case 139000:
{
returnValue = F("Helgenstr.");
break;
}
case 139001:
{
returnValue = F("Helgenstöckle");
break;
}
case 139002:
{
returnValue = F("Helgenwald");
break;
}
case 139003:
{
returnValue = F("Helgenweg");
break;
}
case 139004:
{
returnValue = F("Helgenwiese");
break;
}
case 139005:
{
returnValue = F("Helgenwiesenweg");
break;
}
case 139006:
{
returnValue = F("Helgeringerweg");
break;
}
case 139007:
{
returnValue = F("Helgersdorfer Str.");
break;
}
case 139008:
{
returnValue = F("Helgerwiese");
break;
}
case 139009:
{
returnValue = F("Helgmatt");
break;
}
case 139010:
{
returnValue = F("Helgoland");
break;
}
case 139011:
{
returnValue = F("Helgolander Str.");
break;
}
case 139012:
{
returnValue = F("Helgolandkai");
break;
}
case 139013:
{
returnValue = F("Helgolandring");
break;
}
case 139014:
{
returnValue = F("Helgolandstr.");
break;
}
case 139015:
{
returnValue = F("Helgolandweg");
break;
}
case 139016:
{
returnValue = F("Helgoländer Ring");
break;
}
case 139017:
{
returnValue = F("Helgoländer Str.");
break;
}
case 139018:
{
returnValue = F("Helgoländer Weg");
break;
}
case 139019:
{
returnValue = F("Helgärten");
break;
}
case 139020:
{
returnValue = F("Helia-Passage");
break;
}
case 139021:
{
returnValue = F("Helieichensträßle");
break;
}
case 139022:
{
returnValue = F("Heligweg");
break;
}
case 139023:
{
returnValue = F("Helingerweg");
break;
}
case 139024:
{
returnValue = F("Helingsweg");
break;
}
case 139025:
{
returnValue = F("Heliosstr.");
break;
}
case 139026:
{
returnValue = F("Heliosweg");
break;
}
case 139027:
{
returnValue = F("Helisosteig");
break;
}
case 139028:
{
returnValue = F("Heljehaus");
break;
}
case 139029:
{
returnValue = F("Helkenberger Weg");
break;
}
case 139030:
{
returnValue = F("Helkenstr.");
break;
}
case 139031:
{
returnValue = F("Helker Berg");
break;
}
case 139032:
{
returnValue = F("Helks");
break;
}
case 139033:
{
returnValue = F("Hellachstr.");
break;
}
case 139034:
{
returnValue = F("Hellackerstr.");
break;
}
case 139035:
{
returnValue = F("Hellas-Str.");
break;
}
case 139036:
{
returnValue = F("Hellasstr.");
break;
}
case 139037:
{
returnValue = F("Hellbachpättken");
break;
}
case 139038:
{
returnValue = F("Hellbachstr.");
break;
}
case 139039:
{
returnValue = F("Hellberg");
break;
}
case 139040:
{
returnValue = F("Hellberg-Pfad");
break;
}
case 139041:
{
returnValue = F("Hellberg-Str.");
break;
}
case 139042:
{
returnValue = F("Hellbergblick");
break;
}
case 139043:
{
returnValue = F("Hellberger Str.");
break;
}
case 139044:
{
returnValue = F("Hellberger Weg");
break;
}
case 139045:
{
returnValue = F("Hellbergstr.");
break;
}
case 139046:
{
returnValue = F("Hellbergsweg");
break;
}
case 139047:
{
returnValue = F("Hellbergtal");
break;
}
case 139048:
{
returnValue = F("Hellbergweg");
break;
}
case 139049:
{
returnValue = F("Hellborn");
break;
}
case 139050:
{
returnValue = F("Hellborner Weg");
break;
}
case 139051:
{
returnValue = F("Hellbracke");
break;
}
case 139052:
{
returnValue = F("Hellbrede");
break;
}
case 139053:
{
returnValue = F("Hellburger Dorfstr.");
break;
}
case 139054:
{
returnValue = F("Hellbusch");
break;
}
case 139055:
{
returnValue = F("Hellbuscher Weg");
break;
}
case 139056:
{
returnValue = F("Hellbühlring");
break;
}
case 139057:
{
returnValue = F("Hellbühlstr.");
break;
}
case 139058:
{
returnValue = F("Helldamm");
break;
}
case 139059:
{
returnValue = F("Helldiek");
break;
}
case 139060:
{
returnValue = F("Helldorffweg");
break;
}
case 139061:
{
returnValue = F("Helle");
break;
}
case 139062:
{
returnValue = F("Helle Appareille");
break;
}
case 139063:
{
returnValue = F("Helle Bieke");
break;
}
case 139064:
{
returnValue = F("Helle Eiche");
break;
}
case 139065:
{
returnValue = F("Helle Eichen");
break;
}
case 139066:
{
returnValue = F("Helle Gasse");
break;
}
case 139067:
{
returnValue = F("Helle Glocke");
break;
}
case 139068:
{
returnValue = F("Helle Halle");
break;
}
case 139069:
{
returnValue = F("Helle Hohl");
break;
}
case 139070:
{
returnValue = F("Helle Schlah");
break;
}
case 139071:
{
returnValue = F("Helle Str.");
break;
}
case 139072:
{
returnValue = F("Helle-Röder-Str.");
break;
}
case 139073:
{
returnValue = F("Helle-Wiesen-Str.");
break;
}
case 139074:
{
returnValue = F("Hellebach");
break;
}
case 139075:
{
returnValue = F("Hellebardenstr.");
break;
}
case 139076:
{
returnValue = F("Hellebardenweg");
break;
}
case 139077:
{
returnValue = F("Hellebergstr.");
break;
}
case 139078:
{
returnValue = F("Hellebornweg");
break;
}
case 139079:
{
returnValue = F("Hellebruch");
break;
}
case 139080:
{
returnValue = F("Hellebruchweg");
break;
}
case 139081:
{
returnValue = F("Helledal");
break;
}
case 139082:
{
returnValue = F("Hellefelder Str.");
break;
}
case 139083:
{
returnValue = F("Hellefisch");
break;
}
case 139084:
{
returnValue = F("Helleforthstr.");
break;
}
case 139085:
{
returnValue = F("Hellegrund");
break;
}
case 139086:
{
returnValue = F("Hellegrundstr.");
break;
}
case 139087:
{
returnValue = F("Hellehohlweg");
break;
}
case 139088:
{
returnValue = F("Helleholzweg");
break;
}
case 139089:
{
returnValue = F("Helleige");
break;
}
case 139090:
{
returnValue = F("Hellekamp");
break;
}
case 139091:
{
returnValue = F("Hellen Str.");
break;
}
case 139092:
{
returnValue = F("Hellen-Keller-Weg");
break;
}
case 139093:
{
returnValue = F("Hellenbach");
break;
}
case 139094:
{
returnValue = F("Hellenbachstr.");
break;
}
case 139095:
{
returnValue = F("Hellenberg");
break;
}
case 139096:
{
returnValue = F("Hellenberg-Str.");
break;
}
case 139097:
{
returnValue = F("Hellenbergstr.");
break;
}
case 139098:
{
returnValue = F("Hellenbergweg");
break;
}
case 139099:
{
returnValue = F("Hellenbrauck");
break;
}
case 139100:
{
returnValue = F("Hellenbrede");
break;
}
case 139101:
{
returnValue = F("Hellenbusch");
break;
}
case 139102:
{
returnValue = F("Hellendoorner Str.");
break;
}
case 139103:
{
returnValue = F("Hellendorfer Kirchweg");
break;
}
case 139104:
{
returnValue = F("Hellendorfer Str.");
break;
}
case 139105:
{
returnValue = F("Hellendorfer Weg");
break;
}
case 139106:
{
returnValue = F("Hellendornstr.");
break;
}
case 139107:
{
returnValue = F("Hellenfeld");
break;
}
case 139108:
{
returnValue = F("Hellenflur");
break;
}
case 139109:
{
returnValue = F("Hellengartenweg");
break;
}
case 139110:
{
returnValue = F("Hellengrund");
break;
}
case 139111:
{
returnValue = F("Hellengärten");
break;
}
case 139112:
{
returnValue = F("Hellenhahner Str.");
break;
}
case 139113:
{
returnValue = F("Hellenhardt");
break;
}
case 139114:
{
returnValue = F("Hellenhausen");
break;
}
case 139115:
{
returnValue = F("Hellenkamp");
break;
}
case 139116:
{
returnValue = F("Hellenpfad");
break;
}
case 139117:
{
returnValue = F("Hellenstallweg");
break;
}
case 139118:
{
returnValue = F("Hellenstein Vorplatz");
break;
}
case 139119:
{
returnValue = F("Hellensteinstr.");
break;
}
case 139120:
{
returnValue = F("Hellenstr.");
break;
}
case 139121:
{
returnValue = F("Hellental");
break;
}
case 139122:
{
returnValue = F("Hellentaler Str.");
break;
}
case 139123:
{
returnValue = F("Hellentalstr.");
break;
}
case 139124:
{
returnValue = F("Hellenthaler Str.");
break;
}
case 139125:
{
returnValue = F("Hellenthaler Weg");
break;
}
case 139126:
{
returnValue = F("Hellenthalstr.");
break;
}
case 139127:
{
returnValue = F("Hellenweg");
break;
}
case 139128:
{
returnValue = F("Hellenwegle");
break;
}
case 139129:
{
returnValue = F("Hellenwiesenweg");
break;
}
case 139130:
{
returnValue = F("Hellenäcker");
break;
}
case 139131:
{
returnValue = F("Hellepfortenstr.");
break;
}
case 139132:
{
returnValue = F("Heller");
break;
}
case 139133:
{
returnValue = F("Heller Bogen");
break;
}
case 139134:
{
returnValue = F("Heller Damm");
break;
}
case 139135:
{
returnValue = F("Heller Gang");
break;
}
case 139136:
{
returnValue = F("Heller Geräumt");
break;
}
case 139137:
{
returnValue = F("Heller Landstr.");
break;
}
case 139138:
{
returnValue = F("Heller Plattenweg");
break;
}
case 139139:
{
returnValue = F("Heller Weg");
break;
}
case 139140:
{
returnValue = F("Heller-Bernd-Str.");
break;
}
case 139141:
{
returnValue = F("Hellerbach");
break;
}
case 139142:
{
returnValue = F("Hellerbachstr.");
break;
}
case 139143:
{
returnValue = F("Hellerberg");
break;
}
case 139144:
{
returnValue = F("Hellerberg Str.");
break;
}
case 139145:
{
returnValue = F("Hellerbreite");
break;
}
case 139146:
{
returnValue = F("Hellerfeld");
break;
}
case 139147:
{
returnValue = F("Hellerfelder Hof");
break;
}
case 139148:
{
returnValue = F("Hellergarten");
break;
}
case 139149:
{
returnValue = F("Hellergasse");
break;
}
case 139150:
{
returnValue = F("Hellergrabenweg");
break;
}
case 139151:
{
returnValue = F("Hellerhagener Str.");
break;
}
case 139152:
{
returnValue = F("Hellerhauser Str.");
break;
}
case 139153:
{
returnValue = F("Hellerholz");
break;
}
case 139154:
{
returnValue = F("Hellerinsel");
break;
}
case 139155:
{
returnValue = F("Hellerkamp");
break;
}
case 139156:
{
returnValue = F("Hellerkate");
break;
}
case 139157:
{
returnValue = F("Hellermannstr.");
break;
}
case 139158:
{
returnValue = F("Hellern");
break;
}
case 139159:
{
returnValue = F("Hellerner Weg");
break;
}
case 139160:
{
returnValue = F("Hellernring");
break;
}
case 139161:
{
returnValue = F("Hellernstr.");
break;
}
case 139162:
{
returnValue = F("Hellersbacher Weg");
break;
}
case 139163:
{
returnValue = F("Hellersberg");
break;
}
case 139164:
{
returnValue = F("Hellersbergstr.");
break;
}
case 139165:
{
returnValue = F("Hellersbergweg");
break;
}
case 139166:
{
returnValue = F("Hellersbühlweg");
break;
}
case 139167:
{
returnValue = F("Hellersdorfer Weg");
break;
}
case 139168:
{
returnValue = F("Hellerseifen");
break;
}
case 139169:
{
returnValue = F("Hellersgasse");
break;
}
case 139170:
{
returnValue = F("Hellersgrund");
break;
}
case 139171:
{
returnValue = F("Hellershofer Str.");
break;
}
case 139172:
{
returnValue = F("Hellershornweg");
break;
}
case 139173:
{
returnValue = F("Hellersinsel");
break;
}
case 139174:
{
returnValue = F("Hellersteig");
break;
}
case 139175:
{
returnValue = F("Hellerstr.");
break;
}
case 139176:
{
returnValue = F("Hellerswiese");
break;
}
case 139177:
{
returnValue = F("Hellerswiesenweg");
break;
}
case 139178:
{
returnValue = F("Hellertalstr.");
break;
}
case 139179:
{
returnValue = F("Hellertshausener Str.");
break;
}
case 139180:
{
returnValue = F("Hellerweg");
break;
}
case 139181:
{
returnValue = F("Hellerwiese");
break;
}
case 139182:
{
returnValue = F("Helleräcker");
break;
}
case 139183:
{
returnValue = F("Hellestr.");
break;
}
case 139184:
{
returnValue = F("Hellesweg");
break;
}
case 139185:
{
returnValue = F("Helleswiesenweg");
break;
}
case 139186:
{
returnValue = F("Helleter Feldchen");
break;
}
case 139187:
{
returnValue = F("Helleweg");
break;
}
case 139188:
{
returnValue = F("Hellewiese");
break;
}
case 139189:
{
returnValue = F("Hellewiesenstr.");
break;
}
case 139190:
{
returnValue = F("Hellfelder Str.");
break;
}
case 139191:
{
returnValue = F("Hellfried-Bage-Str.");
break;
}
case 139192:
{
returnValue = F("Hellgarten");
break;
}
case 139193:
{
returnValue = F("Hellgasse");
break;
}
case 139194:
{
returnValue = F("Hellgraben");
break;
}
case 139195:
{
returnValue = F("Hellgärtenstr.");
break;
}
case 139196:
{
returnValue = F("Hellhof");
break;
}
case 139197:
{
returnValue = F("Hellhofstr.");
break;
}
case 139198:
{
returnValue = F("Hellholzkamp");
break;
}
case 139199:
{
returnValue = F("Hellholzstieg");
break;
}
case 139200:
{
returnValue = F("Hellhörn");
break;
}
case 139201:
{
returnValue = F("Hellhügelweg");
break;
}
case 139202:
{
returnValue = F("Hellielstr.");
break;
}
case 139203:
{
returnValue = F("Helligbek");
break;
}
case 139204:
{
returnValue = F("Helligendamm");
break;
}
case 139205:
{
returnValue = F("Hellindenweg");
break;
}
case 139206:
{
returnValue = F("Helling");
break;
}
case 139207:
{
returnValue = F("Hellinger Str.");
break;
}
case 139208:
{
returnValue = F("Hellinger Weg");
break;
}
case 139209:
{
returnValue = F("Hellinghausen");
break;
}
case 139210:
{
returnValue = F("Hellinghausstr.");
break;
}
case 139211:
{
returnValue = F("Hellinghäuser Weg");
break;
}
case 139212:
{
returnValue = F("Hellingrottstr.");
break;
}
case 139213:
{
returnValue = F("Hellings Hof");
break;
}
case 139214:
{
returnValue = F("Hellings Kamp");
break;
}
case 139215:
{
returnValue = F("Hellingsbüschchen");
break;
}
case 139216:
{
returnValue = F("Hellingskull");
break;
}
case 139217:
{
returnValue = F("Hellingster Weg");
break;
}
case 139218:
{
returnValue = F("Hellingstr.");
break;
}
case 139219:
{
returnValue = F("Hellingweg");
break;
}
case 139220:
{
returnValue = F("Hellkamp");
break;
}
case 139221:
{
returnValue = F("Hellkampshöhe");
break;
}
case 139222:
{
returnValue = F("Hellkampsring");
break;
}
case 139223:
{
returnValue = F("Hellklinger Str.");
break;
}
case 139224:
{
returnValue = F("Hellkofen");
break;
}
case 139225:
{
returnValue = F("Hellkofener Str.");
break;
}
case 139226:
{
returnValue = F("Hellkreuzstr.");
break;
}
case 139227:
{
returnValue = F("Helllindenbachweg");
break;
}
case 139228:
{
returnValue = F("Hellmandweg");
break;
}
case 139229:
{
returnValue = F("Hellmanns Damm");
break;
}
case 139230:
{
returnValue = F("Hellmannsberger Weg");
break;
}
case 139231:
{
returnValue = F("Hellmannsbergerstr.");
break;
}
case 139232:
{
returnValue = F("Hellmannshofer Str.");
break;
}
case 139233:
{
returnValue = F("Hellmannstr.");
break;
}
case 139234:
{
returnValue = F("Hellmannsweg");
break;
}
case 139235:
{
returnValue = F("Hellmannweg");
break;
}
case 139236:
{
returnValue = F("Hellmerichstr.");
break;
}
case 139237:
{
returnValue = F("Hellmersgarten");
break;
}
case 139238:
{
returnValue = F("Hellmesbruch");
break;
}
case 139239:
{
returnValue = F("Hellmichweg");
break;
}
case 139240:
{
returnValue = F("Hellmitzheim");
break;
}
case 139241:
{
returnValue = F("Hellmitzheimer Str.");
break;
}
case 139242:
{
returnValue = F("Hellmoorweg");
break;
}
case 139243:
{
returnValue = F("Hellmut-Barthel-Str.");
break;
}
case 139244:
{
returnValue = F("Hellmut-Gnändinger-Weg");
break;
}
case 139245:
{
returnValue = F("Hellmut-Grempel-Str.");
break;
}
case 139246:
{
returnValue = F("Hellmut-Hartert-Str.");
break;
}
case 139247:
{
returnValue = F("Hellmut-Hoffmann-Str.");
break;
}
case 139248:
{
returnValue = F("Hellmut-Holthaus-Weg");
break;
}
case 139249:
{
returnValue = F("Hellmut-Kunstmann-Weg");
break;
}
case 139250:
{
returnValue = F("Hellmut-Opas-Weg");
break;
}
case 139251:
{
returnValue = F("Hellmuth-Heinz-Str.");
break;
}
case 139252:
{
returnValue = F("Hellmuth-Heyden-Weg");
break;
}
case 139253:
{
returnValue = F("Hellmuth-Hirth-Str.");
break;
}
case 139254:
{
returnValue = F("Hellmuth-Lemm-Str.");
break;
}
case 139255:
{
returnValue = F("Hellmuth-Muntschick-Str.");
break;
}
case 139256:
{
returnValue = F("Hellmuth-Tischer-Str.");
break;
}
case 139257:
{
returnValue = F("Hellmuthsgasse");
break;
}
case 139258:
{
returnValue = F("Hellmuthstr.");
break;
}
case 139259:
{
returnValue = F("Hellmühler Weg");
break;
}
case 139260:
{
returnValue = F("Hellnerstr.");
break;
}
case 139261:
{
returnValue = F("Hellortsweg");
break;
}
case 139262:
{
returnValue = F("Hellpfad");
break;
}
case 139263:
{
returnValue = F("Hellpfadweg");
break;
}
case 139264:
{
returnValue = F("Hellpothstr.");
break;
}
case 139265:
{
returnValue = F("Hellriegelweg");
break;
}
case 139266:
{
returnValue = F("Hellschener Chaussee");
break;
}
case 139267:
{
returnValue = F("Hellsdorfstr.");
break;
}
case 139268:
{
returnValue = F("Hellseeweg");
break;
}
case 139269:
{
returnValue = F("Hellseifen");
break;
}
case 139270:
{
returnValue = F("Hellsgasse");
break;
}
case 139271:
{
returnValue = F("Hellsiek");
break;
}
case 139272:
{
returnValue = F("Hellsieksweg");
break;
}
case 139273:
{
returnValue = F("Hellsteiner Str.");
break;
}
case 139274:
{
returnValue = F("Hellsteiner Weg");
break;
}
case 139275:
{
returnValue = F("Hellsternstr.");
break;
}
case 139276:
{
returnValue = F("Hellstiege");
break;
}
case 139277:
{
returnValue = F("Hellstr.");
break;
}
case 139278:
{
returnValue = F("Hellstück");
break;
}
case 139279:
{
returnValue = F("Hellstücksweg");
break;
}
case 139280:
{
returnValue = F("Helltaler Weg");
break;
}
case 139281:
{
returnValue = F("Helltorstr.");
break;
}
case 139282:
{
returnValue = F("Hellwagstr.");
break;
}
case 139283:
{
returnValue = F("Hellwaldblick");
break;
}
case 139284:
{
returnValue = F("Hellwaldweg");
break;
}
case 139285:
{
returnValue = F("Hellwecker Weg");
break;
}
case 139286:
{
returnValue = F("Hellweg");
break;
}
case 139287:
{
returnValue = F("Hellwege-Allee");
break;
}
case 139288:
{
returnValue = F("Hellweger Str.");
break;
}
case 139289:
{
returnValue = F("Hellwegskamp");
break;
}
case 139290:
{
returnValue = F("Hellwerder Str.");
break;
}
case 139291:
{
returnValue = F("Hellwiese");
break;
}
case 139292:
{
returnValue = F("Hellwiesen");
break;
}
case 139293:
{
returnValue = F("Hellwiesenweg");
break;
}
case 139294:
{
returnValue = F("Hellwieser Chaussee");
break;
}
case 139295:
{
returnValue = F("Hellwiesschneise");
break;
}
case 139296:
{
returnValue = F("Hellwigsgasse");
break;
}
case 139297:
{
returnValue = F("Hellwigstr.");
break;
}
case 139298:
{
returnValue = F("Hellziechener Str.");
break;
}
case 139299:
{
returnValue = F("Helläcker");
break;
}
case 139300:
{
returnValue = F("Hellör");
break;
}
case 139301:
{
returnValue = F("Hellörstr.");
break;
}
case 139302:
{
returnValue = F("Helma");
break;
}
case 139303:
{
returnValue = F("Helma-Ehlers-Str.");
break;
}
case 139304:
{
returnValue = F("Helma-Meyers-Str.");
break;
}
case 139305:
{
returnValue = F("Helmarshäuser Str.");
break;
}
case 139306:
{
returnValue = F("Helmarshäuser Weg");
break;
}
case 139307:
{
returnValue = F("Helmbachstr.");
break;
}
case 139308:
{
returnValue = F("Helmbachtalstr.");
break;
}
case 139309:
{
returnValue = F("Helmberg");
break;
}
case 139310:
{
returnValue = F("Helmbergstr.");
break;
}
case 139311:
{
returnValue = F("Helmboldstr.");
break;
}
case 139312:
{
returnValue = F("Helmbrechtser Str.");
break;
}
case 139313:
{
returnValue = F("Helmbrechtster Str.");
break;
}
case 139314:
{
returnValue = F("Helmbundstr.");
break;
}
case 139315:
{
returnValue = F("Helmbundweg");
break;
}
case 139316:
{
returnValue = F("Helmburgisplatz");
break;
}
case 139317:
{
returnValue = F("Helmchesgasse");
break;
}
case 139318:
{
returnValue = F("Helmen");
break;
}
case 139319:
{
returnValue = F("Helmenberg");
break;
}
case 139320:
{
returnValue = F("Helmensbergweg");
break;
}
case 139321:
{
returnValue = F("Helmensteinweg");
break;
}
case 139322:
{
returnValue = F("Helmentalweg");
break;
}
case 139323:
{
returnValue = F("Helmenwinkel");
break;
}
case 139324:
{
returnValue = F("Helmenzer Str.");
break;
}
case 139325:
{
returnValue = F("Helmenzer Weg");
break;
}
case 139326:
{
returnValue = F("Helmer");
break;
}
case 139327:
{
returnValue = F("Helmer Str.");
break;
}
case 139328:
{
returnValue = F("Helmer Weg");
break;
}
case 139329:
{
returnValue = F("Helmer-Kamp-Weg");
break;
}
case 139330:
{
returnValue = F("Helmergasse");
break;
}
case 139331:
{
returnValue = F("Helmerhausener Str.");
break;
}
case 139332:
{
returnValue = F("Helmerich-von-Aschwege-Str.");
break;
}
case 139333:
{
returnValue = F("Helmerichsstr.");
break;
}
case 139334:
{
returnValue = F("Helmerichstr.");
break;
}
case 139335:
{
returnValue = F("Helmerkämper Weg");
break;
}
case 139336:
{
returnValue = F("Helmerner Str.");
break;
}
case 139337:
{
returnValue = F("Helmerner Weg");
break;
}
case 139338:
{
returnValue = F("Helmernsche Str.");
break;
}
case 139339:
{
returnValue = F("Helmers Kamp");
break;
}
case 139340:
{
returnValue = F("Helmersbachstr.");
break;
}
case 139341:
{
returnValue = F("Helmersen");
break;
}
case 139342:
{
returnValue = F("Helmerser Feld");
break;
}
case 139343:
{
returnValue = F("Helmerser Str.");
break;
}
case 139344:
{
returnValue = F("Helmershäuser Berg");
break;
}
case 139345:
{
returnValue = F("Helmershäuser Str.");
break;
}
case 139346:
{
returnValue = F("Helmerslohne");
break;
}
case 139347:
{
returnValue = F("Helmerstr.");
break;
}
case 139348:
{
returnValue = F("Helmert");
break;
}
case 139349:
{
returnValue = F("Helmertalweg");
break;
}
case 139350:
{
returnValue = F("Helmertplatz");
break;
}
case 139351:
{
returnValue = F("Helmertweg");
break;
}
case 139352:
{
returnValue = F("Helmerweg");
break;
}
case 139353:
{
returnValue = F("Helmeshelle");
break;
}
case 139354:
{
returnValue = F("Helmeskamp");
break;
}
case 139355:
{
returnValue = F("Helmesser Berg");
break;
}
case 139356:
{
returnValue = F("Helmestr.");
break;
}
case 139357:
{
returnValue = F("Helmesweg");
break;
}
case 139358:
{
returnValue = F("Helmetalbahn");
break;
}
case 139359:
{
returnValue = F("Helmeweg");
break;
}
case 139360:
{
returnValue = F("Helmfeld");
break;
}
case 139361:
{
returnValue = F("Helmgesmühle");
break;
}
case 139362:
{
returnValue = F("Helmhofer Weg");
break;
}
case 139363:
{
returnValue = F("Helmholtzplatz");
break;
}
case 139364:
{
returnValue = F("Helmholtzstr.");
break;
}
case 139365:
{
returnValue = F("Helmholtzweg");
break;
}
case 139366:
{
returnValue = F("Helmighauser Str.");
break;
}
case 139367:
{
returnValue = F("Helmighäuser Str.");
break;
}
case 139368:
{
returnValue = F("Helming");
break;
}
case 139369:
{
returnValue = F("Helmingstr.");
break;
}
case 139370:
{
returnValue = F("Helmishofener Str.");
break;
}
case 139371:
{
returnValue = F("Helmkenstr.");
break;
}
case 139372:
{
returnValue = F("Helmkestr.");
break;
}
case 139373:
{
returnValue = F("Helmlinger Str.");
break;
}
case 139374:
{
returnValue = F("Helmoldplatz");
break;
}
case 139375:
{
returnValue = F("Helmoldsgasse");
break;
}
case 139376:
{
returnValue = F("Helmoldstr.");
break;
}
case 139377:
{
returnValue = F("Helmolfstr.");
break;
}
case 139378:
{
returnValue = F("Helmoltstr.");
break;
}
case 139379:
{
returnValue = F("Helmontstr.");
break;
}
case 139380:
{
returnValue = F("Helmrichsweg");
break;
}
case 139381:
{
returnValue = F("Helms Feld");
break;
}
case 139382:
{
returnValue = F("Helms Teich");
break;
}
case 139383:
{
returnValue = F("Helmsand");
break;
}
case 139384:
{
returnValue = F("Helmsander Weg");
break;
}
case 139385:
{
returnValue = F("Helmsandweg");
break;
}
case 139386:
{
returnValue = F("Helmsberg");
break;
}
case 139387:
{
returnValue = F("Helmsburgweg");
break;
}
case 139388:
{
returnValue = F("Helmscherode");
break;
}
case 139389:
{
returnValue = F("Helmsdorf");
break;
}
case 139390:
{
returnValue = F("Helmsdorfer Allee");
break;
}
case 139391:
{
returnValue = F("Helmsdorfer Str.");
break;
}
case 139392:
{
returnValue = F("Helmsdorfer Weg");
break;
}
case 139393:
{
returnValue = F("Helmser Kirchweg");
break;
}
case 139394:
{
returnValue = F("Helmsgrundstr.");
break;
}
case 139395:
{
returnValue = F("Helmsgrün");
break;
}
case 139396:
{
returnValue = F("Helmsgrün Am Aubach");
break;
}
case 139397:
{
returnValue = F("Helmsgrün Gewerbegebiet");
break;
}
case 139398:
{
returnValue = F("Helmsgrün-Dorfstr.");
break;
}
case 139399:
{
returnValue = F("Helmsgrün-Pöhler Str.");
break;
}
case 139400:
{
returnValue = F("Helmsgrüner Str.");
break;
}
case 139401:
{
returnValue = F("Helmsheideweg");
break;
}
case 139402:
{
returnValue = F("Helmsheimer Str.");
break;
}
case 139403:
{
returnValue = F("Helmshof");
break;
}
case 139404:
{
returnValue = F("Helmshofer Str.");
break;
}
case 139405:
{
returnValue = F("Helmshäger Str.");
break;
}
case 139406:
{
returnValue = F("Helmshäger Weg");
break;
}
case 139407:
{
returnValue = F("Helmshäuser Str.");
break;
}
case 139408:
{
returnValue = F("Helmskamp");
break;
}
case 139409:
{
returnValue = F("Helmstadter Str.");
break;
}
case 139410:
{
returnValue = F("Helmstal");
break;
}
case 139411:
{
returnValue = F("Helmsteder Str.");
break;
}
case 139412:
{
returnValue = F("Helmstedter Str.");
break;
}
case 139413:
{
returnValue = F("Helmstedter Weg");
break;
}
case 139414:
{
returnValue = F("Helmster Kirchweg");
break;
}
case 139415:
{
returnValue = F("Helmster Stieg");
break;
}
case 139416:
{
returnValue = F("Helmster Weg");
break;
}
case 139417:
{
returnValue = F("Helmstheimer Hof");
break;
}
case 139418:
{
returnValue = F("Helmstheimer Str.");
break;
}
case 139419:
{
returnValue = F("Helmstor");
break;
}
case 139420:
{
returnValue = F("Helmstorf");
break;
}
case 139421:
{
returnValue = F("Helmstorfer Str.");
break;
}
case 139422:
{
returnValue = F("Helmstorfer Weg");
break;
}
case 139423:
{
returnValue = F("Helmstr.");
break;
}
case 139424:
{
returnValue = F("Helmstättweg");
break;
}
case 139425:
{
returnValue = F("Helmsundstr.");
break;
}
case 139426:
{
returnValue = F("Helmsweg");
break;
}
case 139427:
{
returnValue = F("Helmter Tor");
break;
}
case 139428:
{
returnValue = F("Helmter Weg");
break;
}
case 139429:
{
returnValue = F("Helmtrudisstr.");
break;
}
case 139430:
{
returnValue = F("Helmunistr.");
break;
}
case 139431:
{
returnValue = F("Helmusgraben");
break;
}
case 139432:
{
returnValue = F("Helmut Junge-Platz");
break;
}
case 139433:
{
returnValue = F("Helmut Weg");
break;
}
case 139434:
{
returnValue = F("Helmut-Ahrens-Str.");
break;
}
case 139435:
{
returnValue = F("Helmut-Anzeneder-Str.");
break;
}
case 139436:
{
returnValue = F("Helmut-Barth-Str.");
break;
}
case 139437:
{
returnValue = F("Helmut-Baumann-Weg");
break;
}
case 139438:
{
returnValue = F("Helmut-Beck-Weg");
break;
}
case 139439:
{
returnValue = F("Helmut-Becker-Str.");
break;
}
case 139440:
{
returnValue = F("Helmut-Bergmann-Weg");
break;
}
case 139441:
{
returnValue = F("Helmut-Bornefeld-Str.");
break;
}
case 139442:
{
returnValue = F("Helmut-Braun-Ring");
break;
}
case 139443:
{
returnValue = F("Helmut-Bräutigam-Str.");
break;
}
case 139444:
{
returnValue = F("Helmut-Bulle-Str.");
break;
}
case 139445:
{
returnValue = F("Helmut-Caspar-Weg");
break;
}
case 139446:
{
returnValue = F("Helmut-Clever-Weg");
break;
}
case 139447:
{
returnValue = F("Helmut-Cohrs-Str.");
break;
}
case 139448:
{
returnValue = F("Helmut-Deck-Str.");
break;
}
case 139449:
{
returnValue = F("Helmut-Denker-Weg");
break;
}
case 139450:
{
returnValue = F("Helmut-Dunkel-Weg");
break;
}
case 139451:
{
returnValue = F("Helmut-Erhardt-Weg");
break;
}
case 139452:
{
returnValue = F("Helmut-Ernst-Miericke-Weg");
break;
}
case 139453:
{
returnValue = F("Helmut-Fischer-Gingko-Allee");
break;
}
case 139454:
{
returnValue = F("Helmut-Frese-Weg");
break;
}
case 139455:
{
returnValue = F("Helmut-Frey-Str.");
break;
}
case 139456:
{
returnValue = F("Helmut-Fuchs-Weg");
break;
}
case 139457:
{
returnValue = F("Helmut-Ginzkey-Weg");
break;
}
case 139458:
{
returnValue = F("Helmut-Glock-Str.");
break;
}
case 139459:
{
returnValue = F("Helmut-Gollwitzer-Weg");
break;
}
case 139460:
{
returnValue = F("Helmut-Götz-Str.");
break;
}
case 139461:
{
returnValue = F("Helmut-Hartmann-Str.");
break;
}
case 139462:
{
returnValue = F("Helmut-Hesse-Str.");
break;
}
case 139463:
{
returnValue = F("Helmut-Hörmann-Str.");
break;
}
case 139464:
{
returnValue = F("Helmut-Hückmann-Platz");
break;
}
case 139465:
{
returnValue = F("Helmut-Just-Str.");
break;
}
case 139466:
{
returnValue = F("Helmut-Just-Weg");
break;
}
case 139467:
{
returnValue = F("Helmut-Kirchner-Str.");
break;
}
case 139468:
{
returnValue = F("Helmut-Klebsattel-Str.");
break;
}
case 139469:
{
returnValue = F("Helmut-Knaus-Str.");
break;
}
case 139470:
{
returnValue = F("Helmut-Koch-Str.");
break;
}
case 139471:
{
returnValue = F("Helmut-Kohl-Platz");
break;
}
case 139472:
{
returnValue = F("Helmut-Kohl-Str.");
break;
}
case 139473:
{
returnValue = F("Helmut-Kohl-Ufer");
break;
}
case 139474:
{
returnValue = F("Helmut-Kohl-Wanderweg");
break;
}
case 139475:
{
returnValue = F("Helmut-Krätschmer-Platz");
break;
}
case 139476:
{
returnValue = F("Helmut-Krüger-Str.");
break;
}
case 139477:
{
returnValue = F("Helmut-Kumpf-Str.");
break;
}
case 139478:
{
returnValue = F("Helmut-Käppler-Str.");
break;
}
case 139479:
{
returnValue = F("Helmut-Körber-Weg");
break;
}
case 139480:
{
returnValue = F("Helmut-Lau-Str.");
break;
}
case 139481:
{
returnValue = F("Helmut-Lederer-Str.");
break;
}
case 139482:
{
returnValue = F("Helmut-Liesegang-Str.");
break;
}
case 139483:
{
returnValue = F("Helmut-Link-Weg");
break;
}
case 139484:
{
returnValue = F("Helmut-Loh-Str.");
break;
}
case 139485:
{
returnValue = F("Helmut-Loose-Platz");
break;
}
case 139486:
{
returnValue = F("Helmut-Läpple-Ring");
break;
}
case 139487:
{
returnValue = F("Helmut-Lösch-Str.");
break;
}
case 139488:
{
returnValue = F("Helmut-Mahler Weg");
break;
}
case 139489:
{
returnValue = F("Helmut-Matare`-Allee");
break;
}
case 139490:
{
returnValue = F("Helmut-Nauendorf-Weg");
break;
}
case 139491:
{
returnValue = F("Helmut-Oberheide-Weg");
break;
}
case 139492:
{
returnValue = F("Helmut-Rahn-Str.");
break;
}
case 139493:
{
returnValue = F("Helmut-Reichmann-Weg");
break;
}
case 139494:
{
returnValue = F("Helmut-Reimann-Str.");
break;
}
case 139495:
{
returnValue = F("Helmut-Rösseler-Platz");
break;
}
case 139496:
{
returnValue = F("Helmut-Sandler-Str.");
break;
}
case 139497:
{
returnValue = F("Helmut-Schaaf-Weg");
break;
}
case 139498:
{
returnValue = F("Helmut-Schlitt-Brücke");
break;
}
case 139499:
{
returnValue = F("Helmut-Schmezko-Ring");
break;
}
case 139500:
{
returnValue = F("Helmut-Schmid-Weg");
break;
}
case 139501:
{
returnValue = F("Helmut-Schmidt-Ring");
break;
}
case 139502:
{
returnValue = F("Helmut-Schmidt-Str.");
break;
}
case 139503:
{
returnValue = F("Helmut-Schröder-Str.");
break;
}
case 139504:
{
returnValue = F("Helmut-Schwindt-Weg");
break;
}
case 139505:
{
returnValue = F("Helmut-Schön-Weg");
break;
}
case 139506:
{
returnValue = F("Helmut-Seidel-Str.");
break;
}
case 139507:
{
returnValue = F("Helmut-Siering-Str.");
break;
}
case 139508:
{
returnValue = F("Helmut-Stieff-Weg");
break;
}
case 139509:
{
returnValue = F("Helmut-Sülzle-Str.");
break;
}
case 139510:
{
returnValue = F("Helmut-Tödter-Weg");
break;
}
case 139511:
{
returnValue = F("Helmut-Türk-Str.");
break;
}
case 139512:
{
returnValue = F("Helmut-Ulmer-Str.");
break;
}
case 139513:
{
returnValue = F("Helmut-Vetter-Str.");
break;
}
case 139514:
{
returnValue = F("Helmut-Weinmayer-Str.");
break;
}
case 139515:
{
returnValue = F("Helmut-Wölfel-Weg");
break;
}
case 139516:
{
returnValue = F("Helmut-Zinner-Weg");
break;
}
case 139517:
{
returnValue = F("Helmut-von-Gerlach-Str.");
break;
}
case 139518:
{
returnValue = F("Helmut-von-Moltke-Str.");
break;
}
case 139519:
{
returnValue = F("Helmuth-Bächle-Str.");
break;
}
case 139520:
{
returnValue = F("Helmuth-Graf-v.-Moltke-Str.");
break;
}
case 139521:
{
returnValue = F("Helmuth-Kock-Str.");
break;
}
case 139522:
{
returnValue = F("Helmuth-Kohl-Str.");
break;
}
case 139523:
{
returnValue = F("Helmuth-Meisenzahl-Weg");
break;
}
case 139524:
{
returnValue = F("Helmuth-Schmid-Str.");
break;
}
case 139525:
{
returnValue = F("Helmuth-von-Glasenapp-Str.");
break;
}
case 139526:
{
returnValue = F("Helmuth-von-Moltke-Str.");
break;
}
case 139527:
{
returnValue = F("Helmutstr.");
break;
}
case 139528:
{
returnValue = F("Helmweg");
break;
}
case 139529:
{
returnValue = F("Helpenser Landstr.");
break;
}
case 139530:
{
returnValue = F("Helpensteiner Kirchweg");
break;
}
case 139531:
{
returnValue = F("Helpensteiner Weg");
break;
}
case 139532:
{
returnValue = F("Helpensteinstr.");
break;
}
case 139533:
{
returnValue = F("Helpers Höhe");
break;
}
case 139534:
{
returnValue = F("Helpershainer Str.");
break;
}
case 139535:
{
returnValue = F("Helpershainer-Schneise");
break;
}
case 139536:
{
returnValue = F("Helperting");
break;
}
case 139537:
{
returnValue = F("Helpertseestr.");
break;
}
case 139538:
{
returnValue = F("Helpertshalde");
break;
}
case 139539:
{
returnValue = F("Helpertshofen");
break;
}
case 139540:
{
returnValue = F("Helpertshofer Str.");
break;
}
case 139541:
{
returnValue = F("Helpidestr.");
break;
}
case 139542:
{
returnValue = F("Helpser Str.");
break;
}
case 139543:
{
returnValue = F("Helpt");
break;
}
case 139544:
{
returnValue = F("Helpuper Str.");
break;
}
case 139545:
{
returnValue = F("Helsaer Berg");
break;
}
case 139546:
{
returnValue = F("Helsaer Str.");
break;
}
case 139547:
{
returnValue = F("Helsbergstr.");
break;
}
case 139548:
{
returnValue = F("Helschen");
break;
}
case 139549:
{
returnValue = F("Helschener Str.");
break;
}
case 139550:
{
returnValue = F("Helschenweg");
break;
}
case 139551:
{
returnValue = F("Helschlochstr.");
break;
}
case 139552:
{
returnValue = F("Helschlochweg");
break;
}
case 139553:
{
returnValue = F("Helsdorfer Str.");
break;
}
case 139554:
{
returnValue = F("Helsenstr.");
break;
}
case 139555:
{
returnValue = F("Helsenwarfen");
break;
}
case 139556:
{
returnValue = F("Helsenwarfener Weg");
break;
}
case 139557:
{
returnValue = F("Helsenwarfer Str.");
break;
}
case 139558:
{
returnValue = F("Helser Geestweg");
break;
}
case 139559:
{
returnValue = F("Helser Weg");
break;
}
case 139560:
{
returnValue = F("Helserdeich");
break;
}
case 139561:
{
returnValue = F("Helserdieker Strot");
break;
}
case 139562:
{
returnValue = F("Helsinkiring");
break;
}
case 139563:
{
returnValue = F("Helsinkistr.");
break;
}
case 139564:
{
returnValue = F("Helsinkiweg");
break;
}
case 139565:
{
returnValue = F("Helsmecke");
break;
}
case 139566:
{
returnValue = F("Helsmuhder Weg");
break;
}
case 139567:
{
returnValue = F("Helstr.");
break;
}
case 139568:
{
returnValue = F("Helsunger Str.");
break;
}
case 139569:
{
returnValue = F("Helsunger Weg");
break;
}
case 139570:
{
returnValue = F("Heltauer Platz");
break;
}
case 139571:
{
returnValue = F("Helte");
break;
}
case 139572:
{
returnValue = F("Heltenbachweg");
break;
}
case 139573:
{
returnValue = F("Heltenbergstr.");
break;
}
case 139574:
{
returnValue = F("Heltengarten");
break;
}
case 139575:
{
returnValue = F("Heltenstr.");
break;
}
case 139576:
{
returnValue = F("Helter Beeke");
break;
}
case 139577:
{
returnValue = F("Helter Damm");
break;
}
case 139578:
{
returnValue = F("Helter Feldstr.");
break;
}
case 139579:
{
returnValue = F("Helter Str.");
break;
}
case 139580:
{
returnValue = F("Helterpfad");
break;
}
case 139581:
{
returnValue = F("Heltersberger Str.");
break;
}
case 139582:
{
returnValue = F("Helterstr.");
break;
}
case 139583:
{
returnValue = F("Helteweg");
break;
}
case 139584:
{
returnValue = F("Helttriter Steig");
break;
}
case 139585:
{
returnValue = F("Heltweg");
break;
}
case 139586:
{
returnValue = F("Helvesieker Weg");
break;
}
case 139587:
{
returnValue = F("Helvetiastr.");
break;
}
case 139588:
{
returnValue = F("Helvetierstr.");
break;
}
case 139589:
{
returnValue = F("Helvetierweg");
break;
}
case 139590:
{
returnValue = F("Helweg");
break;
}
case 139591:
{
returnValue = F("Helwigstr.");
break;
}
case 139592:
{
returnValue = F("Helwigswiese");
break;
}
case 139593:
{
returnValue = F("Helwingstr.");
break;
}
case 139594:
{
returnValue = F("Helzbergweg");
break;
}
case 139595:
{
returnValue = F("Helzen");
break;
}
case 139596:
{
returnValue = F("Helzendorf");
break;
}
case 139597:
{
returnValue = F("Helzener Str.");
break;
}
case 139598:
{
returnValue = F("Hem'scher Grabenweg");
break;
}
case 139599:
{
returnValue = F("Hemannshausen");
break;
}
case 139600:
{
returnValue = F("Hemauer Str.");
break;
}
case 139601:
{
returnValue = F("Hemauerstr.");
break;
}
case 139602:
{
returnValue = F("Hembach");
break;
}
case 139603:
{
returnValue = F("Hembacher Str.");
break;
}
case 139604:
{
returnValue = F("Hembacher Weg");
break;
}
case 139605:
{
returnValue = F("Hembachstr.");
break;
}
case 139606:
{
returnValue = F("Hembecker Talstr.");
break;
}
case 139607:
{
returnValue = F("Hembecker Weg");
break;
}
case 139608:
{
returnValue = F("Hemberg");
break;
}
case 139609:
{
returnValue = F("Hemberg Kopf");
break;
}
case 139610:
{
returnValue = F("Hembergener Str.");
break;
}
case 139611:
{
returnValue = F("Hemberger Damm");
break;
}
case 139612:
{
returnValue = F("Hemberger Str.");
break;
}
case 139613:
{
returnValue = F("Hembergstr.");
break;
}
case 139614:
{
returnValue = F("Hembrauk");
break;
}
case 139615:
{
returnValue = F("Hembrich");
break;
}
case 139616:
{
returnValue = F("Hembser Str.");
break;
}
case 139617:
{
returnValue = F("Hemdener Ringstr.");
break;
}
case 139618:
{
returnValue = F("Hemdener Weg");
break;
}
case 139619:
{
returnValue = F("Hemdinger Chaussee");
break;
}
case 139620:
{
returnValue = F("Hemdinger Str.");
break;
}
case 139621:
{
returnValue = F("Hemdinger Weg");
break;
}
case 139622:
{
returnValue = F("Hemecker Weg");
break;
}
case 139623:
{
returnValue = F("Hemeler");
break;
}
case 139624:
{
returnValue = F("Hemeler Str.");
break;
}
case 139625:
{
returnValue = F("Hemelgasse");
break;
}
case 139626:
{
returnValue = F("Hemelinger Weg");
break;
}
case 139627:
{
returnValue = F("Hemelingsfeld");
break;
}
case 139628:
{
returnValue = F("Hemelstr.");
break;
}
case 139629:
{
returnValue = F("Hemelsweg");
break;
}
case 139630:
{
returnValue = F("Hemelter Str.");
break;
}
case 139631:
{
returnValue = F("Hemelter Weg");
break;
}
case 139632:
{
returnValue = F("Hemenhofweg");
break;
}
case 139633:
{
returnValue = F("Hemenswarfer Weg");
break;
}
case 139634:
{
returnValue = F("Hemenweg");
break;
}
case 139635:
{
returnValue = F("Hemeringer Str.");
break;
}
case 139636:
{
returnValue = F("Hemeringer Weg");
break;
}
case 139637:
{
returnValue = F("Hemersdorf");
break;
}
case 139638:
{
returnValue = F("Hemerter Weg");
break;
}
case 139639:
{
returnValue = F("Hemeweg");
break;
}
case 139640:
{
returnValue = F("Hemfurther Str.");
break;
}
case 139641:
{
returnValue = F("Hemhofener Str.");
break;
}
case 139642:
{
returnValue = F("Hemholter Weg");
break;
}
case 139643:
{
returnValue = F("Hemich Esch");
break;
}
case 139644:
{
returnValue = F("Hemigkofener Str.");
break;
}
case 139645:
{
returnValue = F("Hemingkamp");
break;
}
case 139646:
{
returnValue = F("Hemishofer Str.");
break;
}
case 139647:
{
returnValue = F("Hemkamp");
break;
}
case 139648:
{
returnValue = F("Hemke");
break;
}
case 139649:
{
returnValue = F("Hemkeberg");
break;
}
case 139650:
{
returnValue = F("Hemken-To-Krax-Weg");
break;
}
case 139651:
{
returnValue = F("Hemkenroder Str.");
break;
}
case 139652:
{
returnValue = F("Hemker Str.");
break;
}
case 139653:
{
returnValue = F("Hemkestr.");
break;
}
case 139654:
{
returnValue = F("Hemkweg");
break;
}
case 139655:
{
returnValue = F("Hemlebener Weg");
break;
}
case 139656:
{
returnValue = F("Hemleber Weg");
break;
}
case 139657:
{
returnValue = F("Hemm");
break;
}
case 139658:
{
returnValue = F("Hemmbergsiedlung");
break;
}
case 139659:
{
returnValue = F("Hemmbergstr.");
break;
}
case 139660:
{
returnValue = F("Hemme-Janssen-Str.");
break;
}
case 139661:
{
returnValue = F("Hemmeler Weg");
break;
}
case 139662:
{
returnValue = F("Hemmelmark");
break;
}
case 139663:
{
returnValue = F("Hemmelsbühren");
break;
}
case 139664:
{
returnValue = F("Hemmelsdorfer Str.");
break;
}
case 139665:
{
returnValue = F("Hemmelskamp");
break;
}
case 139666:
{
returnValue = F("Hemmelter Str.");
break;
}
case 139667:
{
returnValue = F("Hemmelweg");
break;
}
case 139668:
{
returnValue = F("Hemmelzer Str.");
break;
}
case 139669:
{
returnValue = F("Hemmelzer Weg");
break;
}
case 139670:
{
returnValue = F("Hemmendorf");
break;
}
case 139671:
{
returnValue = F("Hemmendorfer Landstr.");
break;
}
case 139672:
{
returnValue = F("Hemmendorfer Str.");
break;
}
case 139673:
{
returnValue = F("Hemmensieker Weg");
break;
}
case 139674:
{
returnValue = F("Hemmenstädtstr.");
break;
}
case 139675:
{
returnValue = F("Hemmer");
break;
}
case 139676:
{
returnValue = F("Hemmer Str.");
break;
}
case 139677:
{
returnValue = F("Hemmer Triesch");
break;
}
case 139678:
{
returnValue = F("Hemmer Weg");
break;
}
case 139679:
{
returnValue = F("Hemmerdener Str.");
break;
}
case 139680:
{
returnValue = F("Hemmerdener Weg");
break;
}
case 139681:
{
returnValue = F("Hemmerder Bahnhofstr.");
break;
}
case 139682:
{
returnValue = F("Hemmerder Dorfstr.");
break;
}
case 139683:
{
returnValue = F("Hemmerder Hellweg");
break;
}
case 139684:
{
returnValue = F("Hemmerder Kirchplatz");
break;
}
case 139685:
{
returnValue = F("Hemmerder Landwehr");
break;
}
case 139686:
{
returnValue = F("Hemmerder Tigge");
break;
}
case 139687:
{
returnValue = F("Hemmerder Wallgraben");
break;
}
case 139688:
{
returnValue = F("Hemmerder Weg");
break;
}
case 139689:
{
returnValue = F("Hemmerfeld");
break;
}
case 139690:
{
returnValue = F("Hemmergasse");
break;
}
case 139691:
{
returnValue = F("Hemmergrund");
break;
}
case 139692:
{
returnValue = F("Hemmerholzer Weg");
break;
}
case 139693:
{
returnValue = F("Hemmericher Str.");
break;
}
case 139694:
{
returnValue = F("Hemmericher Weg");
break;
}
case 139695:
{
returnValue = F("Hemmerichstr.");
break;
}
case 139696:
{
returnValue = F("Hemmerleinsleite");
break;
}
case 139697:
{
returnValue = F("Hemmerleinstr.");
break;
}
case 139698:
{
returnValue = F("Hemmerlestr.");
break;
}
case 139699:
{
returnValue = F("Hemmers Pöhlken");
break;
}
case 139700:
{
returnValue = F("Hemmersbacher Heide");
break;
}
case 139701:
{
returnValue = F("Hemmersbacher Str.");
break;
}
case 139702:
{
returnValue = F("Hemmersdorfer Str.");
break;
}
case 139703:
{
returnValue = F("Hemmersheimer Str.");
break;
}
case 139704:
{
returnValue = F("Hemmersweiher");
break;
}
case 139705:
{
returnValue = F("Hemmes Wiese");
break;
}
case 139706:
{
returnValue = F("Hemmessener Str.");
break;
}
case 139707:
{
returnValue = F("Hemmesser Str.");
break;
}
case 139708:
{
returnValue = F("Hemmestr.");
break;
}
case 139709:
{
returnValue = F("Hemminger Bogen");
break;
}
case 139710:
{
returnValue = F("Hemminger Kirchweg");
break;
}
case 139711:
{
returnValue = F("Hemminger Str.");
break;
}
case 139712:
{
returnValue = F("Hemminger Weg");
break;
}
case 139713:
{
returnValue = F("Hemmjes Kamp");
break;
}
case 139714:
{
returnValue = F("Hemmkuhlenweg");
break;
}
case 139715:
{
returnValue = F("Hemmlingstr.");
break;
}
case 139716:
{
returnValue = F("Hemmo-Suur-Str.");
break;
}
case 139717:
{
returnValue = F("Hemmoor-Ring");
break;
}
case 139718:
{
returnValue = F("Hemmrichsweg");
break;
}
case 139719:
{
returnValue = F("Hemmsack");
break;
}
case 139720:
{
returnValue = F("Hemmtwiete");
break;
}
case 139721:
{
returnValue = F("Hemmweg");
break;
}
case 139722:
{
returnValue = F("Hempbarg");
break;
}
case 139723:
{
returnValue = F("Hempberg");
break;
}
case 139724:
{
returnValue = F("Hempberger Damm");
break;
}
case 139725:
{
returnValue = F("Hempbergstr.");
break;
}
case 139726:
{
returnValue = F("Hempelquere");
break;
}
case 139727:
{
returnValue = F("Hempelstr.");
break;
}
case 139728:
{
returnValue = F("Hempelstr. / Am Hempel");
break;
}
case 139729:
{
returnValue = F("Hempelsweg");
break;
}
case 139730:
{
returnValue = F("Hempendamm");
break;
}
case 139731:
{
returnValue = F("Hempenmoorweg");
break;
}
case 139732:
{
returnValue = F("Hempenstr.");
break;
}
case 139733:
{
returnValue = F("Hempheide");
break;
}
case 139734:
{
returnValue = F("Hemplastr.");
break;
}
case 139735:
{
returnValue = F("Hempschört");
break;
}
case 139736:
{
returnValue = F("Hempstr.");
break;
}
case 139737:
{
returnValue = F("Hemrainstr.");
break;
}
case 139738:
{
returnValue = F("Hemrich");
break;
}
case 139739:
{
returnValue = F("Hemsbach");
break;
}
case 139740:
{
returnValue = F("Hemsbacher Str.");
break;
}
case 139741:
{
returnValue = F("Hemsbacherweg");
break;
}
case 139742:
{
returnValue = F("Hemsbergstr.");
break;
}
case 139743:
{
returnValue = F("Hemsbergweg");
break;
}
case 139744:
{
returnValue = F("Hemsbünder Str.");
break;
}
case 139745:
{
returnValue = F("Hemschehäuser Str.");
break;
}
case 139746:
{
returnValue = F("Hemschört");
break;
}
case 139747:
{
returnValue = F("Hemsdorfer Str.");
break;
}
case 139748:
{
returnValue = F("Hemsdorfer Weg");
break;
}
case 139749:
{
returnValue = F("Hemsener Mühle");
break;
}
case 139750:
{
returnValue = F("Hemsener Str.");
break;
}
case 139751:
{
returnValue = F("Hemsener Weg");
break;
}
case 139752:
{
returnValue = F("Hemsfurter Weg");
break;
}
case 139753:
{
returnValue = F("Hemshof-Park");
break;
}
case 139754:
{
returnValue = F("Hemshofstr.");
break;
}
case 139755:
{
returnValue = F("Hemsiek");
break;
}
case 139756:
{
returnValue = F("Hemsloher Kirchweg");
break;
}
case 139757:
{
returnValue = F("Hemsothstr.");
break;
}
case 139758:
{
returnValue = F("Hemsteder Weg");
break;
}
case 139759:
{
returnValue = F("Hemstedt");
break;
}
case 139760:
{
returnValue = F("Hemte");
break;
}
case 139761:
{
returnValue = F("Hemterweg");
break;
}
case 139762:
{
returnValue = F("Hemtresker");
break;
}
case 139763:
{
returnValue = F("Hem´m Kerkweg");
break;
}
case 139764:
{
returnValue = F("Hemäcker");
break;
}
case 139765:
{
returnValue = F("Henauer Weg");
break;
}
case 139766:
{
returnValue = F("Henchenstr.");
break;
}
case 139767:
{
returnValue = F("Henckelsstr.");
break;
}
case 139768:
{
returnValue = F("Henckelstr.");
break;
}
case 139769:
{
returnValue = F("Hendelgraben");
break;
}
case 139770:
{
returnValue = F("Hendelhammerstr.");
break;
}
case 139771:
{
returnValue = F("Hendenham");
break;
}
case 139772:
{
returnValue = F("Hendenhamer Mühlweg");
break;
}
case 139773:
{
returnValue = F("Hendlmühle");
break;
}
case 139774:
{
returnValue = F("Hendrik-Goltzius-Str.");
break;
}
case 139775:
{
returnValue = F("Hendrik-Goltzius-Weg");
break;
}
case 139776:
{
returnValue = F("Hendrik-Lorentz-Str.");
break;
}
case 139777:
{
returnValue = F("Hendrika-Grüter-Weg");
break;
}
case 139778:
{
returnValue = F("Hendriksstr.");
break;
}
case 139779:
{
returnValue = F("Hendunger Str.");
break;
}
case 139780:
{
returnValue = F("Henebergstr.");
break;
}
case 139781:
{
returnValue = F("Henershuuch");
break;
}
case 139782:
{
returnValue = F("Henesgraben");
break;
}
case 139783:
{
returnValue = F("Henfenfelder Weg");
break;
}
case 139784:
{
returnValue = F("Henfsackstr.");
break;
}
case 139785:
{
returnValue = F("Hengbergweg");
break;
}
case 139786:
{
returnValue = F("Hengdorf");
break;
}
case 139787:
{
returnValue = F("Hengdorfer Str.");
break;
}
case 139788:
{
returnValue = F("Hengebachstr.");
break;
}
case 139789:
{
returnValue = F("Hengelbach");
break;
}
case 139790:
{
returnValue = F("Hengeler");
break;
}
case 139791:
{
returnValue = F("Hengelerstr.");
break;
}
case 139792:
{
returnValue = F("Hengelgasse");
break;
}
case 139793:
{
returnValue = F("Hengeloer Str.");
break;
}
case 139794:
{
returnValue = F("Hengemühle");
break;
}
case 139795:
{
returnValue = F("Hengemühlensee");
break;
}
case 139796:
{
returnValue = F("Hengemühlweg");
break;
}
case 139797:
{
returnValue = F("Hengenloheweg");
break;
}
case 139798:
{
returnValue = F("Hengenstr.");
break;
}
case 139799:
{
returnValue = F("Henger Str.");
break;
}
case 139800:
{
returnValue = F("Henger Weg");
break;
}
case 139801:
{
returnValue = F("Hengersbach");
break;
}
case 139802:
{
returnValue = F("Hengersberger Str.");
break;
}
case 139803:
{
returnValue = F("Hengert");
break;
}
case 139804:
{
returnValue = F("Henggigasse");
break;
}
case 139805:
{
returnValue = F("Hengistweg");
break;
}
case 139806:
{
returnValue = F("Henglarner Str.");
break;
}
case 139807:
{
returnValue = F("Henglerweg");
break;
}
case 139808:
{
returnValue = F("Hengleweg");
break;
}
case 139809:
{
returnValue = F("Hengmantelstr.");
break;
}
case 139810:
{
returnValue = F("Hengnau");
break;
}
case 139811:
{
returnValue = F("Hengsbecke");
break;
}
case 139812:
{
returnValue = F("Hengsberger Str.");
break;
}
case 139813:
{
returnValue = F("Hengser Weg");
break;
}
case 139814:
{
returnValue = F("Hengsiepen");
break;
}
case 139815:
{
returnValue = F("Hengst");
break;
}
case 139816:
{
returnValue = F("Hengstbachanlage");
break;
}
case 139817:
{
returnValue = F("Hengstbacher Str.");
break;
}
case 139818:
{
returnValue = F("Hengstbachermühle");
break;
}
case 139819:
{
returnValue = F("Hengstbachstr.");
break;
}
case 139820:
{
returnValue = F("Hengstbachweg");
break;
}
case 139821:
{
returnValue = F("Hengstbeckstr.");
break;
}
case 139822:
{
returnValue = F("Hengstbeckweg");
break;
}
case 139823:
{
returnValue = F("Hengstberg");
break;
}
case 139824:
{
returnValue = F("Hengstberg-Trail");
break;
}
case 139825:
{
returnValue = F("Hengstberghalde-Weg");
break;
}
case 139826:
{
returnValue = F("Hengstbergweg");
break;
}
case 139827:
{
returnValue = F("Hengstbrüchelchen");
break;
}
case 139828:
{
returnValue = F("Hengstenberg");
break;
}
case 139829:
{
returnValue = F("Hengstenberger Str.");
break;
}
case 139830:
{
returnValue = F("Hengstenbergstr.");
break;
}
case 139831:
{
returnValue = F("Hengsterberg");
break;
}
case 139832:
{
returnValue = F("Hengsterholzer Str.");
break;
}
case 139833:
{
returnValue = F("Hengstetter Gäßle");
break;
}
case 139834:
{
returnValue = F("Hengstetter Steige");
break;
}
case 139835:
{
returnValue = F("Hengstetter Steigle");
break;
}
case 139836:
{
returnValue = F("Hengstetter Str.");
break;
}
case 139837:
{
returnValue = F("Hengstetter Weg");
break;
}
case 139838:
{
returnValue = F("Hengsteyseestr.");
break;
}
case 139839:
{
returnValue = F("Hengstfelder Str.");
break;
}
case 139840:
{
returnValue = F("Hengstforde");
break;
}
case 139841:
{
returnValue = F("Hengstforder Allee");
break;
}
case 139842:
{
returnValue = F("Hengsthamm");
break;
}
case 139843:
{
returnValue = F("Hengstheide");
break;
}
case 139844:
{
returnValue = F("Hengsthof");
break;
}
case 139845:
{
returnValue = F("Hengstkamp");
break;
}
case 139846:
{
returnValue = F("Hengstkoppelweg");
break;
}
case 139847:
{
returnValue = F("Hengstlager Weg");
break;
}
case 139848:
{
returnValue = F("Hengstmoorweg");
break;
}
case 139849:
{
returnValue = F("Hengstruckenweg");
break;
}
case 139850:
{
returnValue = F("Hengstwaldstr.");
break;
}
case 139851:
{
returnValue = F("Hengstweg");
break;
}
case 139852:
{
returnValue = F("Hengstweide");
break;
}
case 139853:
{
returnValue = F("Hengtekamp");
break;
}
case 139854:
{
returnValue = F("Hengtering");
break;
}
case 139855:
{
returnValue = F("Hengtestr.");
break;
}
case 139856:
{
returnValue = F("Hengteweg");
break;
}
case 139857:
{
returnValue = F("Henhop");
break;
}
case 139858:
{
returnValue = F("Henhöferstr.");
break;
}
case 139859:
{
returnValue = F("Henighuser Str.");
break;
}
case 139860:
{
returnValue = F("Henjesstr.");
break;
}
case 139861:
{
returnValue = F("Henkackerweg");
break;
}
case 139862:
{
returnValue = F("Henkböhl");
break;
}
case 139863:
{
returnValue = F("Henkelberg");
break;
}
case 139864:
{
returnValue = F("Henkelborn");
break;
}
case 139865:
{
returnValue = F("Henkelbrey");
break;
}
case 139866:
{
returnValue = F("Henkelbrücke");
break;
}
case 139867:
{
returnValue = F("Henkelgasse");
break;
}
case 139868:
{
returnValue = F("Henkelgraben");
break;
}
case 139869:
{
returnValue = F("Henkelhofweg");
break;
}
case 139870:
{
returnValue = F("Henkelsberg");
break;
}
case 139871:
{
returnValue = F("Henkelsgasse");
break;
}
case 139872:
{
returnValue = F("Henkelshof");
break;
}
case 139873:
{
returnValue = F("Henkelstr.");
break;
}
case 139874:
{
returnValue = F("Henkelstrisch");
break;
}
case 139875:
{
returnValue = F("Henkelsweg");
break;
}
case 139876:
{
returnValue = F("Henkelweg");
break;
}
case 139877:
{
returnValue = F("Henkenbergweg");
break;
}
case 139878:
{
returnValue = F("Henkenbrink");
break;
}
case 139879:
{
returnValue = F("Henkenbrinker Str.");
break;
}
case 139880:
{
returnValue = F("Henkenheide");
break;
}
case 139881:
{
returnValue = F("Henkenhof");
break;
}
case 139882:
{
returnValue = F("Henkenhoop");
break;
}
case 139883:
{
returnValue = F("Henkenplatz");
break;
}
case 139884:
{
returnValue = F("Henkenstr.");
break;
}
case 139885:
{
returnValue = F("Henkenweg");
break;
}
case 139886:
{
returnValue = F("Henkenweiher");
break;
}
case 139887:
{
returnValue = F("Henkerberg");
break;
}
case 139888:
{
returnValue = F("Henkergasse");
break;
}
case 139889:
{
returnValue = F("Henkericht");
break;
}
case 139890:
{
returnValue = F("Henkerplatz");
break;
}
case 139891:
{
returnValue = F("Henkersbitz");
break;
}
case 139892:
{
returnValue = F("Henkerstegstr.");
break;
}
case 139893:
{
returnValue = F("Henkerstr.");
break;
}
case 139894:
{
returnValue = F("Henkersweg");
break;
}
case 139895:
{
returnValue = F("Henkestr.");
break;
}
case 139896:
{
returnValue = F("Henkesweg");
break;
}
case 139897:
{
returnValue = F("Henkgasse");
break;
}
case 139898:
{
returnValue = F("Henkingsweg");
break;
}
case 139899:
{
returnValue = F("Henkinshain");
break;
}
case 139900:
{
returnValue = F("Henkinshainer Weg");
break;
}
case 139901:
{
returnValue = F("Henkstr.");
break;
}
case 139902:
{
returnValue = F("Henleinstr.");
break;
}
case 139903:
{
returnValue = F("Henleinweg");
break;
}
case 139904:
{
returnValue = F("Henlestr.");
break;
}
case 139905:
{
returnValue = F("Hennak-Hanke-Str.");
break;
}
case 139906:
{
returnValue = F("Hennak-Hanke-Weg");
break;
}
case 139907:
{
returnValue = F("Hennawegle");
break;
}
case 139908:
{
returnValue = F("Hennberg");
break;
}
case 139909:
{
returnValue = F("Henne");
break;
}
case 139910:
{
returnValue = F("Henne-Boulevard");
break;
}
case 139911:
{
returnValue = F("Henne-Brücke");
break;
}
case 139912:
{
returnValue = F("Hennebach");
break;
}
case 139913:
{
returnValue = F("Hennebacher Str.");
break;
}
case 139914:
{
returnValue = F("Henneberg");
break;
}
case 139915:
{
returnValue = F("Henneberg-Weg");
break;
}
case 139916:
{
returnValue = F("Henneberger Ecke");
break;
}
case 139917:
{
returnValue = F("Henneberger Flügel");
break;
}
case 139918:
{
returnValue = F("Henneberger Hauptstr.");
break;
}
case 139919:
{
returnValue = F("Henneberger Str.");
break;
}
case 139920:
{
returnValue = F("Henneberger Weg");
break;
}
case 139921:
{
returnValue = F("Hennebergerstr.");
break;
}
case 139922:
{
returnValue = F("Hennebergerweg");
break;
}
case 139923:
{
returnValue = F("Hennebergstr.");
break;
}
case 139924:
{
returnValue = F("Hennebölestr.");
break;
}
case 139925:
{
returnValue = F("Hennebüchelsweg");
break;
}
case 139926:
{
returnValue = F("Hennecken Hof");
break;
}
case 139927:
{
returnValue = F("Henneckenbergsweg");
break;
}
case 139928:
{
returnValue = F("Henneckenbruch");
break;
}
case 139929:
{
returnValue = F("Henneckenhammer");
break;
}
case 139930:
{
returnValue = F("Henneckenkamp");
break;
}
case 139931:
{
returnValue = F("Henneckenroder Str.");
break;
}
case 139932:
{
returnValue = F("Henneckenweg");
break;
}
case 139933:
{
returnValue = F("Hennedamm");
break;
}
case 139934:
{
returnValue = F("Hennefer Str.");
break;
}
case 139935:
{
returnValue = F("Henneke-Wulf-Str.");
break;
}
case 139936:
{
returnValue = F("Hennekenstr.");
break;
}
case 139937:
{
returnValue = F("Hennematt");
break;
}
case 139938:
{
returnValue = F("Hennenbach");
break;
}
case 139939:
{
returnValue = F("Hennenbacher Str.");
break;
}
case 139940:
{
returnValue = F("Hennenbergweg");
break;
}
case 139941:
{
returnValue = F("Hennenbruch");
break;
}
case 139942:
{
returnValue = F("Hennenburg");
break;
}
case 139943:
{
returnValue = F("Hennenburg Wendeplatte");
break;
}
case 139944:
{
returnValue = F("Hennenbühl");
break;
}
case 139945:
{
returnValue = F("Hennener Bahnhofstr.");
break;
}
case 139946:
{
returnValue = F("Hennener Str.");
break;
}
case 139947:
{
returnValue = F("Hennenfeld");
break;
}
case 139948:
{
returnValue = F("Hennengasse");
break;
}
case 139949:
{
returnValue = F("Hennengärtleweg");
break;
}
case 139950:
{
returnValue = F("Hennenhecke");
break;
}
case 139951:
{
returnValue = F("Hennenhof");
break;
}
case 139952:
{
returnValue = F("Hennenloch");
break;
}
case 139953:
{
returnValue = F("Hennenlochweg");
break;
}
case 139954:
{
returnValue = F("Hennenlohweg");
break;
}
case 139955:
{
returnValue = F("Hennenschwang");
break;
}
case 139956:
{
returnValue = F("Hennenschwanger Weg");
break;
}
case 139957:
{
returnValue = F("Hennensteig");
break;
}
case 139958:
{
returnValue = F("Hennenstr.");
break;
}
case 139959:
{
returnValue = F("Hennental");
break;
}
case 139960:
{
returnValue = F("Hennentalsträßle");
break;
}
case 139961:
{
returnValue = F("Hennentalweg");
break;
}
case 139962:
{
returnValue = F("Hennenwiese");
break;
}
case 139963:
{
returnValue = F("Hennenwiesen");
break;
}
case 139964:
{
returnValue = F("Hennenwöhrd");
break;
}
case 139965:
{
returnValue = F("Hennepark");
break;
}
case 139966:
{
returnValue = F("Henner Hof");
break;
}
case 139967:
{
returnValue = F("Hennerbergl");
break;
}
case 139968:
{
returnValue = F("Hennererstr.");
break;
}
case 139969:
{
returnValue = F("Hennerichs Ecke");
break;
}
case 139970:
{
returnValue = F("Hennermais");
break;
}
case 139971:
{
returnValue = F("Henners Hof");
break;
}
case 139972:
{
returnValue = F("Hennersbach");
break;
}
case 139973:
{
returnValue = F("Hennersberg");
break;
}
case 139974:
{
returnValue = F("Hennersdorfer Damm");
break;
}
case 139975:
{
returnValue = F("Hennersdorfer Str.");
break;
}
case 139976:
{
returnValue = F("Hennersdorfer Weg");
break;
}
case 139977:
{
returnValue = F("Hennersgasse");
break;
}
case 139978:
{
returnValue = F("Hennersweg");
break;
}
case 139979:
{
returnValue = F("Hennes Kamp");
break;
}
case 139980:
{
returnValue = F("Hennes-Weisweiler-Weg");
break;
}
case 139981:
{
returnValue = F("Hennesch dé Ruutß");
break;
}
case 139982:
{
returnValue = F("Henneschberg");
break;
}
case 139983:
{
returnValue = F("Hennesenbergstr.");
break;
}
case 139984:
{
returnValue = F("Hennestr.");
break;
}
case 139985:
{
returnValue = F("Hennesweg");
break;
}
case 139986:
{
returnValue = F("Hennetalstr.");
break;
}
case 139987:
{
returnValue = F("Hennethaler Weg");
break;
}
case 139988:
{
returnValue = F("Hennewegle");
break;
}
case 139989:
{
returnValue = F("Henneweide");
break;
}
case 139990:
{
returnValue = F("Hennewiger Weg");
break;
}
case 139991:
{
returnValue = F("Henneystr.");
break;
}
case 139992:
{
returnValue = F("Hennhofer Weg");
break;
}
case 139993:
{
returnValue = F("Hennhüll");
break;
}
case 139994:
{
returnValue = F("Hennickendorfer Chaussee");
break;
}
case 139995:
{
returnValue = F("Hennickendorfer Hauptstr.");
break;
}
case 139996:
{
returnValue = F("Hennickendorfer Ring");
break;
}
case 139997:
{
returnValue = F("Hennickendorfer Str.");
break;
}
case 139998:
{
returnValue = F("Hennickendorfer Weg");
break;
}
case 139999:
{
returnValue = F("Hennigerode");
break;
}
case 140000:
{
returnValue = F("Hennigesstr.");
break;
}
case 140001:
{
returnValue = F("Hennigsdorfer Chaussee");
break;
}
case 140002:
{
returnValue = F("Hennigsdorfer Str.");
break;
}
case 140003:
{
returnValue = F("Hennigshofer Weg");
break;
}
case 140004:
{
returnValue = F("Hennigstr.");
break;
}
case 140005:
{
returnValue = F("Hennigweg");
break;
}
case 140006:
{
returnValue = F("Hennikerweg");
break;
}
case 140007:
{
returnValue = F("Henning");
break;
}
case 140008:
{
returnValue = F("Henning-Brodersen-Str.");
break;
}
case 140009:
{
returnValue = F("Henning-Calvör-Str.");
break;
}
case 140010:
{
returnValue = F("Henning-Fahrenheim-Str.");
break;
}
case 140011:
{
returnValue = F("Henning-Mörder-Str.");
break;
}
case 140012:
{
returnValue = F("Henning-Paulsen-Weg");
break;
}
case 140013:
{
returnValue = F("Henning-Rinken-Wai");
break;
}
}
return returnValue;
}
