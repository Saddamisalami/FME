#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameP2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 250025:
    {
        returnValue = F("Pfaffenraintäle");
        break;
    }
    case 250026:
    {
        returnValue = F("Pfaffenrainweg");
        break;
    }
    case 250027:
    {
        returnValue = F("Pfaffenrech");
        break;
    }
    case 250028:
    {
        returnValue = F("Pfaffenreit");
        break;
    }
    case 250029:
    {
        returnValue = F("Pfaffenreuth");
        break;
    }
    case 250030:
    {
        returnValue = F("Pfaffenreuther Str.");
        break;
    }
    case 250031:
    {
        returnValue = F("Pfaffenried");
        break;
    }
    case 250032:
    {
        returnValue = F("Pfaffenrieder Str.");
        break;
    }
    case 250033:
    {
        returnValue = F("Pfaffenriedstr.");
        break;
    }
    case 250034:
    {
        returnValue = F("Pfaffenroter Weg");
        break;
    }
    case 250035:
    {
        returnValue = F("Pfaffenscheider Weg");
        break;
    }
    case 250036:
    {
        returnValue = F("Pfaffenschlag");
        break;
    }
    case 250037:
    {
        returnValue = F("Pfaffenschneise");
        break;
    }
    case 250038:
    {
        returnValue = F("Pfaffensee");
        break;
    }
    case 250039:
    {
        returnValue = F("Pfaffenseifen");
        break;
    }
    case 250040:
    {
        returnValue = F("Pfaffensiefen");
        break;
    }
    case 250041:
    {
        returnValue = F("Pfaffensteg");
        break;
    }
    case 250042:
    {
        returnValue = F("Pfaffensteig");
        break;
    }
    case 250043:
    {
        returnValue = F("Pfaffensteige");
        break;
    }
    case 250044:
    {
        returnValue = F("Pfaffensteigstr.");
        break;
    }
    case 250045:
    {
        returnValue = F("Pfaffenstein");
        break;
    }
    case 250046:
    {
        returnValue = F("Pfaffensteinblick");
        break;
    }
    case 250047:
    {
        returnValue = F("Pfaffensteiner Steg");
        break;
    }
    case 250048:
    {
        returnValue = F("Pfaffensteiner Weg");
        break;
    }
    case 250049:
    {
        returnValue = F("Pfaffensteinpromenade");
        break;
    }
    case 250050:
    {
        returnValue = F("Pfaffensteinstr.");
        break;
    }
    case 250051:
    {
        returnValue = F("Pfaffensteinsträßle");
        break;
    }
    case 250052:
    {
        returnValue = F("Pfaffensteinweg");
        break;
    }
    case 250053:
    {
        returnValue = F("Pfaffenstich");
        break;
    }
    case 250054:
    {
        returnValue = F("Pfaffenstichweg");
        break;
    }
    case 250055:
    {
        returnValue = F("Pfaffenstieg");
        break;
    }
    case 250056:
    {
        returnValue = F("Pfaffenstr.");
        break;
    }
    case 250057:
    {
        returnValue = F("Pfaffenstück");
        break;
    }
    case 250058:
    {
        returnValue = F("Pfaffental");
        break;
    }
    case 250059:
    {
        returnValue = F("Pfaffentalstr.");
        break;
    }
    case 250060:
    {
        returnValue = F("Pfaffentalsweg");
        break;
    }
    case 250061:
    {
        returnValue = F("Pfaffentalweg");
        break;
    }
    case 250062:
    {
        returnValue = F("Pfaffenteich");
        break;
    }
    case 250063:
    {
        returnValue = F("Pfaffenteichweg");
        break;
    }
    case 250064:
    {
        returnValue = F("Pfaffenthaler Hof");
        break;
    }
    case 250065:
    {
        returnValue = F("Pfaffenthalsweg");
        break;
    }
    case 250066:
    {
        returnValue = F("Pfaffentor");
        break;
    }
    case 250067:
    {
        returnValue = F("Pfaffenwaldring");
        break;
    }
    case 250068:
    {
        returnValue = F("Pfaffenwaldstr.");
        break;
    }
    case 250069:
    {
        returnValue = F("Pfaffenwaldweg");
        break;
    }
    case 250070:
    {
        returnValue = F("Pfaffenwandsweg");
        break;
    }
    case 250071:
    {
        returnValue = F("Pfaffenweg");
        break;
    }
    case 250072:
    {
        returnValue = F("Pfaffenweiher");
        break;
    }
    case 250073:
    {
        returnValue = F("Pfaffenweiherweg");
        break;
    }
    case 250074:
    {
        returnValue = F("Pfaffenweilerstr.");
        break;
    }
    case 250075:
    {
        returnValue = F("Pfaffenweise");
        break;
    }
    case 250076:
    {
        returnValue = F("Pfaffenwiesbacher Str.");
        break;
    }
    case 250077:
    {
        returnValue = F("Pfaffenwiesbacher Weg");
        break;
    }
    case 250078:
    {
        returnValue = F("Pfaffenwiese");
        break;
    }
    case 250079:
    {
        returnValue = F("Pfaffenwiesen");
        break;
    }
    case 250080:
    {
        returnValue = F("Pfaffenwiesenstr.");
        break;
    }
    case 250081:
    {
        returnValue = F("Pfaffenwiesenweg");
        break;
    }
    case 250082:
    {
        returnValue = F("Pfaffenwiesle");
        break;
    }
    case 250083:
    {
        returnValue = F("Pfaffenwinkel");
        break;
    }
    case 250084:
    {
        returnValue = F("Pfaffenwinkelweg");
        break;
    }
    case 250085:
    {
        returnValue = F("Pfaffenwoogstr.");
        break;
    }
    case 250086:
    {
        returnValue = F("Pfaffenzeche");
        break;
    }
    case 250087:
    {
        returnValue = F("Pfaffenzeller Weg");
        break;
    }
    case 250088:
    {
        returnValue = F("Pfaffenzipfenschneise");
        break;
    }
    case 250089:
    {
        returnValue = F("Pfaffenäcker");
        break;
    }
    case 250090:
    {
        returnValue = F("Pfaffenäckerstr.");
        break;
    }
    case 250091:
    {
        returnValue = F("Pfaffenäckerweg");
        break;
    }
    case 250092:
    {
        returnValue = F("Pfaffenäule");
        break;
    }
    case 250093:
    {
        returnValue = F("Pfaffenöder Str.");
        break;
    }
    case 250094:
    {
        returnValue = F("Pfafferode");
        break;
    }
    case 250095:
    {
        returnValue = F("Pfafferöder Höhle");
        break;
    }
    case 250096:
    {
        returnValue = F("Pfafferöder Steingraben");
        break;
    }
    case 250097:
    {
        returnValue = F("Pfafferöder Weg");
        break;
    }
    case 250098:
    {
        returnValue = F("Pfaffh. Allmandweg");
        break;
    }
    case 250099:
    {
        returnValue = F("Pfaffhaldenweg");
        break;
    }
    case 250100:
    {
        returnValue = F("Pfaffing");
        break;
    }
    case 250101:
    {
        returnValue = F("Pfaffinger Str.");
        break;
    }
    case 250102:
    {
        returnValue = F("Pfaffinger Weg");
        break;
    }
    case 250103:
    {
        returnValue = F("Pfafflwiesn");
        break;
    }
    case 250104:
    {
        returnValue = F("Pfaffplatz");
        break;
    }
    case 250105:
    {
        returnValue = F("Pfaffrodaer Dorfstr.");
        break;
    }
    case 250106:
    {
        returnValue = F("Pfaffs Wegle");
        break;
    }
    case 250107:
    {
        returnValue = F("Pfaffstr.");
        break;
    }
    case 250108:
    {
        returnValue = F("Pfaffstättner Str.");
        break;
    }
    case 250109:
    {
        returnValue = F("Pfafftal");
        break;
    }
    case 250110:
    {
        returnValue = F("Pfaffweg");
        break;
    }
    case 250111:
    {
        returnValue = F("Pfaffwieser Str.");
        break;
    }
    case 250112:
    {
        returnValue = F("Pfafstättner Str.");
        break;
    }
    case 250113:
    {
        returnValue = F("Pfahl");
        break;
    }
    case 250114:
    {
        returnValue = F("Pfahlbach");
        break;
    }
    case 250115:
    {
        returnValue = F("Pfahlbacher Str.");
        break;
    }
    case 250116:
    {
        returnValue = F("Pfahlbachweg");
        break;
    }
    case 250117:
    {
        returnValue = F("Pfahlberg");
        break;
    }
    case 250118:
    {
        returnValue = F("Pfahlbergweg");
        break;
    }
    case 250119:
    {
        returnValue = F("Pfahlbitz");
        break;
    }
    case 250120:
    {
        returnValue = F("Pfahlbronner Str.");
        break;
    }
    case 250121:
    {
        returnValue = F("Pfahlbronner Weg");
        break;
    }
    case 250122:
    {
        returnValue = F("Pfahlbrückenweg");
        break;
    }
    case 250123:
    {
        returnValue = F("Pfahlbühlstr.");
        break;
    }
    case 250124:
    {
        returnValue = F("Pfahldeich");
        break;
    }
    case 250125:
    {
        returnValue = F("Pfahldeichsweg");
        break;
    }
    case 250126:
    {
        returnValue = F("Pfahldorfer Str.");
        break;
    }
    case 250127:
    {
        returnValue = F("Pfahlenheimer Str.");
        break;
    }
    case 250128:
    {
        returnValue = F("Pfahlerplatz");
        break;
    }
    case 250129:
    {
        returnValue = F("Pfahlerstr.");
        break;
    }
    case 250130:
    {
        returnValue = F("Pfahlgasse");
        break;
    }
    case 250131:
    {
        returnValue = F("Pfahlgraben");
        break;
    }
    case 250132:
    {
        returnValue = F("Pfahlgrabenstr.");
        break;
    }
    case 250133:
    {
        returnValue = F("Pfahlgrabenweg");
        break;
    }
    case 250134:
    {
        returnValue = F("Pfahlhaus");
        break;
    }
    case 250135:
    {
        returnValue = F("Pfahlheimer Str.");
        break;
    }
    case 250136:
    {
        returnValue = F("Pfahlhof");
        break;
    }
    case 250137:
    {
        returnValue = F("Pfahlhofstr.");
        break;
    }
    case 250138:
    {
        returnValue = F("Pfahlholzweg");
        break;
    }
    case 250139:
    {
        returnValue = F("Pfahlhöfer Str.");
        break;
    }
    case 250140:
    {
        returnValue = F("Pfahljochbrücke");
        break;
    }
    case 250141:
    {
        returnValue = F("Pfahlplätzchen");
        break;
    }
    case 250142:
    {
        returnValue = F("Pfahlreihenweg");
        break;
    }
    case 250143:
    {
        returnValue = F("Pfahlsbergweg");
        break;
    }
    case 250144:
    {
        returnValue = F("Pfahlscheuer");
        break;
    }
    case 250145:
    {
        returnValue = F("Pfahlskamp");
        break;
    }
    case 250146:
    {
        returnValue = F("Pfahlstr.");
        break;
    }
    case 250147:
    {
        returnValue = F("Pfahlstück");
        break;
    }
    case 250148:
    {
        returnValue = F("Pfahlwaldweg");
        break;
    }
    case 250149:
    {
        returnValue = F("Pfahlwaldwegle");
        break;
    }
    case 250150:
    {
        returnValue = F("Pfahlwasen");
        break;
    }
    case 250151:
    {
        returnValue = F("Pfahlweg");
        break;
    }
    case 250152:
    {
        returnValue = F("Pfahlweide");
        break;
    }
    case 250153:
    {
        returnValue = F("Pfahlwiese");
        break;
    }
    case 250154:
    {
        returnValue = F("Pfahlwiesen");
        break;
    }
    case 250155:
    {
        returnValue = F("Pfahlwiesenstr.");
        break;
    }
    case 250156:
    {
        returnValue = F("Pfahlwiesenweg");
        break;
    }
    case 250157:
    {
        returnValue = F("Pfahlwinkel");
        break;
    }
    case 250158:
    {
        returnValue = F("Pfahläcker");
        break;
    }
    case 250159:
    {
        returnValue = F("Pfahläckerstr.");
        break;
    }
    case 250160:
    {
        returnValue = F("Pfahläckerweg");
        break;
    }
    case 250161:
    {
        returnValue = F("Pfalesweg");
        break;
    }
    case 250162:
    {
        returnValue = F("Pfalsauer Weg");
        break;
    }
    case 250163:
    {
        returnValue = F("Pfaltermühlweg");
        break;
    }
    case 250164:
    {
        returnValue = F("Pfalz");
        break;
    }
    case 250165:
    {
        returnValue = F("Pfalz-Grona-Breite");
        break;
    }
    case 250166:
    {
        returnValue = F("Pfalz-Grona-Park");
        break;
    }
    case 250167:
    {
        returnValue = F("Pfalz-Neuburg-Allee");
        break;
    }
    case 250168:
    {
        returnValue = F("Pfalz-Neuburg-Str.");
        break;
    }
    case 250169:
    {
        returnValue = F("Pfalzbahnstr.");
        break;
    }
    case 250170:
    {
        returnValue = F("Pfalzblick");
        break;
    }
    case 250171:
    {
        returnValue = F("Pfalzblickstr.");
        break;
    }
    case 250172:
    {
        returnValue = F("Pfalzbrunnenstr.");
        break;
    }
    case 250173:
    {
        returnValue = F("Pfalzburger Str.");
        break;
    }
    case 250174:
    {
        returnValue = F("Pfalzburgstr.");
        break;
    }
    case 250175:
    {
        returnValue = F("Pfalzdorfer Str.");
        break;
    }
    case 250176:
    {
        returnValue = F("Pfalzeler Str.");
        break;
    }
    case 250177:
    {
        returnValue = F("Pfalzer Weg");
        break;
    }
    case 250178:
    {
        returnValue = F("Pfalzerweg");
        break;
    }
    case 250179:
    {
        returnValue = F("Pfalzfelder Str.");
        break;
    }
    case 250180:
    {
        returnValue = F("Pfalzgalerie-Park");
        break;
    }
    case 250181:
    {
        returnValue = F("Pfalzgartenstr.");
        break;
    }
    case 250182:
    {
        returnValue = F("Pfalzgasse");
        break;
    }
    case 250183:
    {
        returnValue = F("Pfalzgraf Theodor Str.");
        break;
    }
    case 250184:
    {
        returnValue = F("Pfalzgraf-Adolf-Str.");
        break;
    }
    case 250185:
    {
        returnValue = F("Pfalzgraf-Friedrich-Str.");
        break;
    }
    case 250186:
    {
        returnValue = F("Pfalzgraf-Johann-Str.");
        break;
    }
    case 250187:
    {
        returnValue = F("Pfalzgraf-Otto-Str.");
        break;
    }
    case 250188:
    {
        returnValue = F("Pfalzgraf-Otto-Weg");
        break;
    }
    case 250189:
    {
        returnValue = F("Pfalzgraf-Ottoheinrich-Str.");
        break;
    }
    case 250190:
    {
        returnValue = F("Pfalzgrafenbuschweg");
        break;
    }
    case 250191:
    {
        returnValue = F("Pfalzgrafenhof");
        break;
    }
    case 250192:
    {
        returnValue = F("Pfalzgrafenring");
        break;
    }
    case 250193:
    {
        returnValue = F("Pfalzgrafenstr.");
        break;
    }
    case 250194:
    {
        returnValue = F("Pfalzgrafenweg");
        break;
    }
    case 250195:
    {
        returnValue = F("Pfalzgrafenweiler Str.");
        break;
    }
    case 250196:
    {
        returnValue = F("Pfalzgrafenweilerstr.");
        break;
    }
    case 250197:
    {
        returnValue = F("Pfalzgrafstr.");
        break;
    }
    case 250198:
    {
        returnValue = F("Pfalzgräfin-Alberta-Str.");
        break;
    }
    case 250199:
    {
        returnValue = F("Pfalzgässel");
        break;
    }
    case 250200:
    {
        returnValue = F("Pfalzhaldenweg");
        break;
    }
    case 250201:
    {
        returnValue = F("Pfalzplatz");
        break;
    }
    case 250202:
    {
        returnValue = F("Pfalzring");
        break;
    }
    case 250203:
    {
        returnValue = F("Pfalzsprung");
        break;
    }
    case 250204:
    {
        returnValue = F("Pfalzstr.");
        break;
    }
    case 250205:
    {
        returnValue = F("Pfalzteich");
        break;
    }
    case 250206:
    {
        returnValue = F("Pfalzwaldweg");
        break;
    }
    case 250207:
    {
        returnValue = F("Pfalzweg");
        break;
    }
    case 250208:
    {
        returnValue = F("Pfalzwiesen");
        break;
    }
    case 250209:
    {
        returnValue = F("Pfalzwiesenweg");
        break;
    }
    case 250210:
    {
        returnValue = F("Pfandbergweg");
        break;
    }
    case 250211:
    {
        returnValue = F("Pfandelstr.");
        break;
    }
    case 250212:
    {
        returnValue = F("Pfanderweg");
        break;
    }
    case 250213:
    {
        returnValue = F("Pfandhausstr.");
        break;
    }
    case 250214:
    {
        returnValue = F("Pfandhöferstr.");
        break;
    }
    case 250215:
    {
        returnValue = F("Pfandlohe");
        break;
    }
    case 250216:
    {
        returnValue = F("Pfandlstr.");
        break;
    }
    case 250217:
    {
        returnValue = F("Pfandlweg");
        break;
    }
    case 250218:
    {
        returnValue = F("Pfandturmstr.");
        break;
    }
    case 250219:
    {
        returnValue = F("Pfandweg");
        break;
    }
    case 250220:
    {
        returnValue = F("Pfandäcker");
        break;
    }
    case 250221:
    {
        returnValue = F("Pfannenbergstr.");
        break;
    }
    case 250222:
    {
        returnValue = F("Pfannenbodenweg");
        break;
    }
    case 250223:
    {
        returnValue = F("Pfannenbühlstr.");
        break;
    }
    case 250224:
    {
        returnValue = F("Pfannengasse");
        break;
    }
    case 250225:
    {
        returnValue = F("Pfannengrundweg");
        break;
    }
    case 250226:
    {
        returnValue = F("Pfannengäßchen");
        break;
    }
    case 250227:
    {
        returnValue = F("Pfannengäßle");
        break;
    }
    case 250228:
    {
        returnValue = F("Pfannenrain");
        break;
    }
    case 250229:
    {
        returnValue = F("Pfannenschmiede");
        break;
    }
    case 250230:
    {
        returnValue = F("Pfannenschmiedweg");
        break;
    }
    case 250231:
    {
        returnValue = F("Pfannenschuppen");
        break;
    }
    case 250232:
    {
        returnValue = F("Pfannenschuppenweg");
        break;
    }
    case 250233:
    {
        returnValue = F("Pfannensteige (gesperrt)");
        break;
    }
    case 250234:
    {
        returnValue = F("Pfannenstiel");
        break;
    }
    case 250235:
    {
        returnValue = F("Pfannenstieler Weg");
        break;
    }
    case 250236:
    {
        returnValue = F("Pfannenstielgasse");
        break;
    }
    case 250237:
    {
        returnValue = F("Pfannenstielsgasse");
        break;
    }
    case 250238:
    {
        returnValue = F("Pfannenstielstr.");
        break;
    }
    case 250239:
    {
        returnValue = F("Pfannenstielweg");
        break;
    }
    case 250240:
    {
        returnValue = F("Pfannenstr.");
        break;
    }
    case 250241:
    {
        returnValue = F("Pfannenweg");
        break;
    }
    case 250242:
    {
        returnValue = F("Pfanner Hof");
        break;
    }
    case 250243:
    {
        returnValue = F("Pfannerstr.");
        break;
    }
    case 250244:
    {
        returnValue = F("Pfannerweg");
        break;
    }
    case 250245:
    {
        returnValue = F("Pfannestiel");
        break;
    }
    case 250246:
    {
        returnValue = F("Pfanngasse");
        break;
    }
    case 250247:
    {
        returnValue = F("Pfannhauserweg");
        break;
    }
    case 250248:
    {
        returnValue = F("Pfannholzerstr.");
        break;
    }
    case 250249:
    {
        returnValue = F("Pfannhüttenstr.");
        break;
    }
    case 250250:
    {
        returnValue = F("Pfannkuchenmühle");
        break;
    }
    case 250251:
    {
        returnValue = F("Pfannkuchenweg");
        break;
    }
    case 250252:
    {
        returnValue = F("Pfannkuchstr.");
        break;
    }
    case 250253:
    {
        returnValue = F("Pfannkuchweg");
        break;
    }
    case 250254:
    {
        returnValue = F("Pfannmüllerstr.");
        break;
    }
    case 250255:
    {
        returnValue = F("Pfannmüllerweg");
        break;
    }
    case 250256:
    {
        returnValue = F("Pfannrain");
        break;
    }
    case 250257:
    {
        returnValue = F("Pfannschmidtstr.");
        break;
    }
    case 250258:
    {
        returnValue = F("Pfannstiel");
        break;
    }
    case 250259:
    {
        returnValue = F("Pfannstr.");
        break;
    }
    case 250260:
    {
        returnValue = F("Pfanzeltstr.");
        break;
    }
    case 250261:
    {
        returnValue = F("Pfargasse");
        break;
    }
    case 250262:
    {
        returnValue = F("Pfarr");
        break;
    }
    case 250263:
    {
        returnValue = F("Pfarr - Garten Erdenreich");
        break;
    }
    case 250264:
    {
        returnValue = F("Pfarr-Garten");
        break;
    }
    case 250265:
    {
        returnValue = F("Pfarracker");
        break;
    }
    case 250266:
    {
        returnValue = F("Pfarrackerstr.");
        break;
    }
    case 250267:
    {
        returnValue = F("Pfarrain");
        break;
    }
    case 250268:
    {
        returnValue = F("Pfarranger");
        break;
    }
    case 250269:
    {
        returnValue = F("Pfarrangerweg");
        break;
    }
    case 250270:
    {
        returnValue = F("Pfarrar-Greiner-Str.");
        break;
    }
    case 250271:
    {
        returnValue = F("Pfarrau");
        break;
    }
    case 250272:
    {
        returnValue = F("Pfarrbachweg");
        break;
    }
    case 250273:
    {
        returnValue = F("Pfarrberg");
        break;
    }
    case 250274:
    {
        returnValue = F("Pfarrbergsiedlung");
        break;
    }
    case 250275:
    {
        returnValue = F("Pfarrbergstr.");
        break;
    }
    case 250276:
    {
        returnValue = F("Pfarrbergweg");
        break;
    }
    case 250277:
    {
        returnValue = F("Pfarrbin");
        break;
    }
    case 250278:
    {
        returnValue = F("Pfarrbornstr.");
        break;
    }
    case 250279:
    {
        returnValue = F("Pfarrbornweg");
        break;
    }
    case 250280:
    {
        returnValue = F("Pfarrbrunnenstr.");
        break;
    }
    case 250281:
    {
        returnValue = F("Pfarrbrunnenweg");
        break;
    }
    case 250282:
    {
        returnValue = F("Pfarrbrückenweg");
        break;
    }
    case 250283:
    {
        returnValue = F("Pfarrbrühl");
        break;
    }
    case 250284:
    {
        returnValue = F("Pfarrbuck");
        break;
    }
    case 250285:
    {
        returnValue = F("Pfarrbuckel");
        break;
    }
    case 250286:
    {
        returnValue = F("Pfarrbusch");
        break;
    }
    case 250287:
    {
        returnValue = F("Pfarrbuschstr.");
        break;
    }
    case 250288:
    {
        returnValue = F("Pfarrdamm");
        break;
    }
    case 250289:
    {
        returnValue = F("Pfarre");
        break;
    }
    case 250290:
    {
        returnValue = F("Pfarrecke");
        break;
    }
    case 250291:
    {
        returnValue = F("Pfarreibrücke");
        break;
    }
    case 250292:
    {
        returnValue = F("Pfarreistr.");
        break;
    }
    case 250293:
    {
        returnValue = F("Pfarrer Adam Rottler Str.");
        break;
    }
    case 250294:
    {
        returnValue = F("Pfarrer Denner Str.");
        break;
    }
    case 250295:
    {
        returnValue = F("Pfarrer Ederer Str.");
        break;
    }
    case 250296:
    {
        returnValue = F("Pfarrer Gschwender-Ring");
        break;
    }
    case 250297:
    {
        returnValue = F("Pfarrer Hanrathweg");
        break;
    }
    case 250298:
    {
        returnValue = F("Pfarrer Hilgard Str.");
        break;
    }
    case 250299:
    {
        returnValue = F("Pfarrer Hubert-Schmitz-Str.");
        break;
    }
    case 250300:
    {
        returnValue = F("Pfarrer Kneipp Weg");
        break;
    }
    case 250301:
    {
        returnValue = F("Pfarrer Kraus Anlagen");
        break;
    }
    case 250302:
    {
        returnValue = F("Pfarrer Kroll-Str.");
        break;
    }
    case 250303:
    {
        returnValue = F("Pfarrer Matz Str.");
        break;
    }
    case 250304:
    {
        returnValue = F("Pfarrer Röhrig-Str.");
        break;
    }
    case 250305:
    {
        returnValue = F("Pfarrer Stockinger Str.");
        break;
    }
    case 250306:
    {
        returnValue = F("Pfarrer Veil Str.");
        break;
    }
    case 250307:
    {
        returnValue = F("Pfarrer Wunibald Schmid-Weg");
        break;
    }
    case 250308:
    {
        returnValue = F("Pfarrer-A.-Lang-Platz");
        break;
    }
    case 250309:
    {
        returnValue = F("Pfarrer-Abel-Str.");
        break;
    }
    case 250310:
    {
        returnValue = F("Pfarrer-Ackermann-Platz");
        break;
    }
    case 250311:
    {
        returnValue = F("Pfarrer-Ackermann-Str.");
        break;
    }
    case 250312:
    {
        returnValue = F("Pfarrer-Adam-Göbel-Ring");
        break;
    }
    case 250313:
    {
        returnValue = F("Pfarrer-Adam-Haus-Str.");
        break;
    }
    case 250314:
    {
        returnValue = F("Pfarrer-Adler-Platz");
        break;
    }
    case 250315:
    {
        returnValue = F("Pfarrer-Adolf-Braun-Str.");
        break;
    }
    case 250316:
    {
        returnValue = F("Pfarrer-Ahrens-Str.");
        break;
    }
    case 250317:
    {
        returnValue = F("Pfarrer-Aich-Str.");
        break;
    }
    case 250318:
    {
        returnValue = F("Pfarrer-Aidlspurger-Str.");
        break;
    }
    case 250319:
    {
        returnValue = F("Pfarrer-Aigner-Allee");
        break;
    }
    case 250320:
    {
        returnValue = F("Pfarrer-Aigner-Str.");
        break;
    }
    case 250321:
    {
        returnValue = F("Pfarrer-Ainmüller-Weg");
        break;
    }
    case 250322:
    {
        returnValue = F("Pfarrer-Akens-Str.");
        break;
    }
    case 250323:
    {
        returnValue = F("Pfarrer-Albert-Willimsky-Weg");
        break;
    }
    case 250324:
    {
        returnValue = F("Pfarrer-Albrecht-Str.");
        break;
    }
    case 250325:
    {
        returnValue = F("Pfarrer-Aldinger-Str.");
        break;
    }
    case 250326:
    {
        returnValue = F("Pfarrer-Alef-Str.");
        break;
    }
    case 250327:
    {
        returnValue = F("Pfarrer-Alertz-Str.");
        break;
    }
    case 250328:
    {
        returnValue = F("Pfarrer-Alfers-Weg");
        break;
    }
    case 250329:
    {
        returnValue = F("Pfarrer-Alois-Huber-Str.");
        break;
    }
    case 250330:
    {
        returnValue = F("Pfarrer-Alten-Str.");
        break;
    }
    case 250331:
    {
        returnValue = F("Pfarrer-Altenburger-Str.");
        break;
    }
    case 250332:
    {
        returnValue = F("Pfarrer-Andreä-Weg");
        break;
    }
    case 250333:
    {
        returnValue = F("Pfarrer-Andrä-Str.");
        break;
    }
    case 250334:
    {
        returnValue = F("Pfarrer-Anleitner-Str.");
        break;
    }
    case 250335:
    {
        returnValue = F("Pfarrer-Anselmann-Str.");
        break;
    }
    case 250336:
    {
        returnValue = F("Pfarrer-Antholzner-Str.");
        break;
    }
    case 250337:
    {
        returnValue = F("Pfarrer-Anton-Darmstadt-Str.");
        break;
    }
    case 250338:
    {
        returnValue = F("Pfarrer-Anton-Thies-Platz");
        break;
    }
    case 250339:
    {
        returnValue = F("Pfarrer-Appelrath-Str.");
        break;
    }
    case 250340:
    {
        returnValue = F("Pfarrer-Arckhauer-Str.");
        break;
    }
    case 250341:
    {
        returnValue = F("Pfarrer-Arnold-Str.");
        break;
    }
    case 250342:
    {
        returnValue = F("Pfarrer-Augart-Str.");
        break;
    }
    case 250343:
    {
        returnValue = F("Pfarrer-Augenstein-Str.");
        break;
    }
    case 250344:
    {
        returnValue = F("Pfarrer-Augenthaler-Siedlung");
        break;
    }
    case 250345:
    {
        returnValue = F("Pfarrer-August-Halbe-Weg");
        break;
    }
    case 250346:
    {
        returnValue = F("Pfarrer-Aumüller-Str.");
        break;
    }
    case 250347:
    {
        returnValue = F("Pfarrer-Autsch-Str.");
        break;
    }
    case 250348:
    {
        returnValue = F("Pfarrer-Außem-Str.");
        break;
    }
    case 250349:
    {
        returnValue = F("Pfarrer-Axenböck-Str.");
        break;
    }
    case 250350:
    {
        returnValue = F("Pfarrer-Babel-Str.");
        break;
    }
    case 250351:
    {
        returnValue = F("Pfarrer-Bach-Weg");
        break;
    }
    case 250352:
    {
        returnValue = F("Pfarrer-Back-Str.");
        break;
    }
    case 250353:
    {
        returnValue = F("Pfarrer-Baier-Str.");
        break;
    }
    case 250354:
    {
        returnValue = F("Pfarrer-Barber-Str.");
        break;
    }
    case 250355:
    {
        returnValue = F("Pfarrer-Bartels-Str.");
        break;
    }
    case 250356:
    {
        returnValue = F("Pfarrer-Barth-Weg");
        break;
    }
    case 250357:
    {
        returnValue = F("Pfarrer-Barthel-Str.");
        break;
    }
    case 250358:
    {
        returnValue = F("Pfarrer-Barthels-Str.");
        break;
    }
    case 250359:
    {
        returnValue = F("Pfarrer-Bartl-Str.");
        break;
    }
    case 250360:
    {
        returnValue = F("Pfarrer-Bartsch-Ring");
        break;
    }
    case 250361:
    {
        returnValue = F("Pfarrer-Bauer-Str.");
        break;
    }
    case 250362:
    {
        returnValue = F("Pfarrer-Baumann-Str.");
        break;
    }
    case 250363:
    {
        returnValue = F("Pfarrer-Baumeister-Weg");
        break;
    }
    case 250364:
    {
        returnValue = F("Pfarrer-Baumgartner-Str.");
        break;
    }
    case 250365:
    {
        returnValue = F("Pfarrer-Baute-Str.");
        break;
    }
    case 250366:
    {
        returnValue = F("Pfarrer-Bayer-Str.");
        break;
    }
    case 250367:
    {
        returnValue = F("Pfarrer-Bayer-Weg");
        break;
    }
    case 250368:
    {
        returnValue = F("Pfarrer-Bechtolsheimer-Weg");
        break;
    }
    case 250369:
    {
        returnValue = F("Pfarrer-Beck-Str.");
        break;
    }
    case 250370:
    {
        returnValue = F("Pfarrer-Becker-Steig");
        break;
    }
    case 250371:
    {
        returnValue = F("Pfarrer-Becker-Str.");
        break;
    }
    case 250372:
    {
        returnValue = F("Pfarrer-Becking-Str.");
        break;
    }
    case 250373:
    {
        returnValue = F("Pfarrer-Beermann-Str.");
        break;
    }
    case 250374:
    {
        returnValue = F("Pfarrer-Beham-Str.");
        break;
    }
    case 250375:
    {
        returnValue = F("Pfarrer-Behr-Weg");
        break;
    }
    case 250376:
    {
        returnValue = F("Pfarrer-Beichert-Str.");
        break;
    }
    case 250377:
    {
        returnValue = F("Pfarrer-Belz-Weg");
        break;
    }
    case 250378:
    {
        returnValue = F("Pfarrer-Bendel-Weg");
        break;
    }
    case 250379:
    {
        returnValue = F("Pfarrer-Bendert-Str.");
        break;
    }
    case 250380:
    {
        returnValue = F("Pfarrer-Benker-Str.");
        break;
    }
    case 250381:
    {
        returnValue = F("Pfarrer-Bensheimer-Str.");
        break;
    }
    case 250382:
    {
        returnValue = F("Pfarrer-Benz-Str.");
        break;
    }
    case 250383:
    {
        returnValue = F("Pfarrer-Berens-Str.");
        break;
    }
    case 250384:
    {
        returnValue = F("Pfarrer-Berger-Str.");
        break;
    }
    case 250385:
    {
        returnValue = F("Pfarrer-Bergmann-Str.");
        break;
    }
    case 250386:
    {
        returnValue = F("Pfarrer-Bergmannshof-Platz");
        break;
    }
    case 250387:
    {
        returnValue = F("Pfarrer-Bergsch-Str.");
        break;
    }
    case 250388:
    {
        returnValue = F("Pfarrer-Berrenberg-Str.");
        break;
    }
    case 250389:
    {
        returnValue = F("Pfarrer-Berthold-Str.");
        break;
    }
    case 250390:
    {
        returnValue = F("Pfarrer-Bestlin-Str.");
        break;
    }
    case 250391:
    {
        returnValue = F("Pfarrer-Bette-Str.");
        break;
    }
    case 250392:
    {
        returnValue = F("Pfarrer-Betzl-Str.");
        break;
    }
    case 250393:
    {
        returnValue = F("Pfarrer-Beule-Str.");
        break;
    }
    case 250394:
    {
        returnValue = F("Pfarrer-Beuschel-Str.");
        break;
    }
    case 250395:
    {
        returnValue = F("Pfarrer-Bezler-Str.");
        break;
    }
    case 250396:
    {
        returnValue = F("Pfarrer-Biberger-Str.");
        break;
    }
    case 250397:
    {
        returnValue = F("Pfarrer-Bichler-Str.");
        break;
    }
    case 250398:
    {
        returnValue = F("Pfarrer-Biebl-Str.");
        break;
    }
    case 250399:
    {
        returnValue = F("Pfarrer-Biechele-Str.");
        break;
    }
    case 250400:
    {
        returnValue = F("Pfarrer-Biendl-Str.");
        break;
    }
    case 250401:
    {
        returnValue = F("Pfarrer-Bierbrodt-Str.");
        break;
    }
    case 250402:
    {
        returnValue = F("Pfarrer-Biermeier-Str.");
        break;
    }
    case 250403:
    {
        returnValue = F("Pfarrer-Binder-Str.");
        break;
    }
    case 250404:
    {
        returnValue = F("Pfarrer-Binz-Str.");
        break;
    }
    case 250405:
    {
        returnValue = F("Pfarrer-Birger-Platz");
        break;
    }
    case 250406:
    {
        returnValue = F("Pfarrer-Birker-Str.");
        break;
    }
    case 250407:
    {
        returnValue = F("Pfarrer-Birnkammer-Str.");
        break;
    }
    case 250408:
    {
        returnValue = F("Pfarrer-Bischof-Weg");
        break;
    }
    case 250409:
    {
        returnValue = F("Pfarrer-Bittner-Weg");
        break;
    }
    case 250410:
    {
        returnValue = F("Pfarrer-Blaimer-Str.");
        break;
    }
    case 250411:
    {
        returnValue = F("Pfarrer-Blank-Weg");
        break;
    }
    case 250412:
    {
        returnValue = F("Pfarrer-Bleek-Platz");
        break;
    }
    case 250413:
    {
        returnValue = F("Pfarrer-Bleymann-Gasse");
        break;
    }
    case 250414:
    {
        returnValue = F("Pfarrer-Blink-Str.");
        break;
    }
    case 250415:
    {
        returnValue = F("Pfarrer-Blümel-Str.");
        break;
    }
    case 250416:
    {
        returnValue = F("Pfarrer-Blümler-Str.");
        break;
    }
    case 250417:
    {
        returnValue = F("Pfarrer-Bobinger-Str.");
        break;
    }
    case 250418:
    {
        returnValue = F("Pfarrer-Bock-Str.");
        break;
    }
    case 250419:
    {
        returnValue = F("Pfarrer-Bodden-Str.");
        break;
    }
    case 250420:
    {
        returnValue = F("Pfarrer-Bogner-Str.");
        break;
    }
    case 250421:
    {
        returnValue = F("Pfarrer-Bonhoeffer-Str.");
        break;
    }
    case 250422:
    {
        returnValue = F("Pfarrer-Bopp-Str.");
        break;
    }
    case 250423:
    {
        returnValue = F("Pfarrer-Borgmeier-Str.");
        break;
    }
    case 250424:
    {
        returnValue = F("Pfarrer-Bormann-Str.");
        break;
    }
    case 250425:
    {
        returnValue = F("Pfarrer-Born-Str.");
        break;
    }
    case 250426:
    {
        returnValue = F("Pfarrer-Bort-Str.");
        break;
    }
    case 250427:
    {
        returnValue = F("Pfarrer-Bosch-Str.");
        break;
    }
    case 250428:
    {
        returnValue = F("Pfarrer-Bosch-Weg");
        break;
    }
    case 250429:
    {
        returnValue = F("Pfarrer-Brachetti-Str.");
        break;
    }
    case 250430:
    {
        returnValue = F("Pfarrer-Braig-Str.");
        break;
    }
    case 250431:
    {
        returnValue = F("Pfarrer-Brand-Weg");
        break;
    }
    case 250432:
    {
        returnValue = F("Pfarrer-Brantzen-Str.");
        break;
    }
    case 250433:
    {
        returnValue = F("Pfarrer-Braun-Str.");
        break;
    }
    case 250434:
    {
        returnValue = F("Pfarrer-Braun-Weg");
        break;
    }
    case 250435:
    {
        returnValue = F("Pfarrer-Breindl-Str.");
        break;
    }
    case 250436:
    {
        returnValue = F("Pfarrer-Brendel-Platz");
        break;
    }
    case 250437:
    {
        returnValue = F("Pfarrer-Brendgen-Str.");
        break;
    }
    case 250438:
    {
        returnValue = F("Pfarrer-Bresky-Weg");
        break;
    }
    case 250439:
    {
        returnValue = F("Pfarrer-Breu-Str.");
        break;
    }
    case 250440:
    {
        returnValue = F("Pfarrer-Brill-Weg");
        break;
    }
    case 250441:
    {
        returnValue = F("Pfarrer-Brink-Str.");
        break;
    }
    case 250442:
    {
        returnValue = F("Pfarrer-Britsch-Weg");
        break;
    }
    case 250443:
    {
        returnValue = F("Pfarrer-Brockhoff-Str.");
        break;
    }
    case 250444:
    {
        returnValue = F("Pfarrer-Brockmann-Weg");
        break;
    }
    case 250445:
    {
        returnValue = F("Pfarrer-Brucker-Weg");
        break;
    }
    case 250446:
    {
        returnValue = F("Pfarrer-Brumbach-Weg");
        break;
    }
    case 250447:
    {
        returnValue = F("Pfarrer-Brunet-Str.");
        break;
    }
    case 250448:
    {
        returnValue = F("Pfarrer-Brunner-Str.");
        break;
    }
    case 250449:
    {
        returnValue = F("Pfarrer-Brunner-Weg");
        break;
    }
    case 250450:
    {
        returnValue = F("Pfarrer-Brändle-Weg");
        break;
    }
    case 250451:
    {
        returnValue = F("Pfarrer-Bräuer-Str.");
        break;
    }
    case 250452:
    {
        returnValue = F("Pfarrer-Brücklmeier-Str.");
        break;
    }
    case 250453:
    {
        returnValue = F("Pfarrer-Brücklmeier-Weg");
        break;
    }
    case 250454:
    {
        returnValue = F("Pfarrer-Brümmer-Str.");
        break;
    }
    case 250455:
    {
        returnValue = F("Pfarrer-Brünger-Str.");
        break;
    }
    case 250456:
    {
        returnValue = F("Pfarrer-Bucher-Str.");
        break;
    }
    case 250457:
    {
        returnValue = F("Pfarrer-Buchner-Str.");
        break;
    }
    case 250458:
    {
        returnValue = F("Pfarrer-Bungarten-Str.");
        break;
    }
    case 250459:
    {
        returnValue = F("Pfarrer-Bunk-Str.");
        break;
    }
    case 250460:
    {
        returnValue = F("Pfarrer-Bunz-Str.");
        break;
    }
    case 250461:
    {
        returnValue = F("Pfarrer-Burger-Str.");
        break;
    }
    case 250462:
    {
        returnValue = F("Pfarrer-Burger-Weg");
        break;
    }
    case 250463:
    {
        returnValue = F("Pfarrer-Burkhard-Weg");
        break;
    }
    case 250464:
    {
        returnValue = F("Pfarrer-Busch-Str.");
        break;
    }
    case 250465:
    {
        returnValue = F("Pfarrer-Busler-Str.");
        break;
    }
    case 250466:
    {
        returnValue = F("Pfarrer-Butt-Str.");
        break;
    }
    case 250467:
    {
        returnValue = F("Pfarrer-Butz-Str.");
        break;
    }
    case 250468:
    {
        returnValue = F("Pfarrer-Bußigel-Str.");
        break;
    }
    case 250469:
    {
        returnValue = F("Pfarrer-Bänsch-Str.");
        break;
    }
    case 250470:
    {
        returnValue = F("Pfarrer-Bäumler-Str.");
        break;
    }
    case 250471:
    {
        returnValue = F("Pfarrer-Böck-Str.");
        break;
    }
    case 250472:
    {
        returnValue = F("Pfarrer-Böhm-Weg");
        break;
    }
    case 250473:
    {
        returnValue = F("Pfarrer-Böhmer-Str.");
        break;
    }
    case 250474:
    {
        returnValue = F("Pfarrer-Böhmer-Weg");
        break;
    }
    case 250475:
    {
        returnValue = F("Pfarrer-Bönneker-Str.");
        break;
    }
    case 250476:
    {
        returnValue = F("Pfarrer-Büff-Platz");
        break;
    }
    case 250477:
    {
        returnValue = F("Pfarrer-Büttner-Str.");
        break;
    }
    case 250478:
    {
        returnValue = F("Pfarrer-Canaris-Weg");
        break;
    }
    case 250479:
    {
        returnValue = F("Pfarrer-Carl-Moeller-Str.");
        break;
    }
    case 250480:
    {
        returnValue = F("Pfarrer-Carlsson-Str.");
        break;
    }
    case 250481:
    {
        returnValue = F("Pfarrer-Caspar-Mayr-Platz");
        break;
    }
    case 250482:
    {
        returnValue = F("Pfarrer-Caspari-Str.");
        break;
    }
    case 250483:
    {
        returnValue = F("Pfarrer-Christen-Str.");
        break;
    }
    case 250484:
    {
        returnValue = F("Pfarrer-Christstetter-Str.");
        break;
    }
    case 250485:
    {
        returnValue = F("Pfarrer-Chunradt-Str.");
        break;
    }
    case 250486:
    {
        returnValue = F("Pfarrer-Claaßen-Str.");
        break;
    }
    case 250487:
    {
        returnValue = F("Pfarrer-Claus-Vollmeyer-Platz");
        break;
    }
    case 250488:
    {
        returnValue = F("Pfarrer-Clotten-Weg");
        break;
    }
    case 250489:
    {
        returnValue = F("Pfarrer-Coenen-Str.");
        break;
    }
    case 250490:
    {
        returnValue = F("Pfarrer-Cordes-Weg");
        break;
    }
    case 250491:
    {
        returnValue = F("Pfarrer-Dahl-Str.");
        break;
    }
    case 250492:
    {
        returnValue = F("Pfarrer-Dalkmann-Str.");
        break;
    }
    case 250493:
    {
        returnValue = F("Pfarrer-Debler-Str.");
        break;
    }
    case 250494:
    {
        returnValue = F("Pfarrer-Decker-Str.");
        break;
    }
    case 250495:
    {
        returnValue = F("Pfarrer-Dederichs-Str.");
        break;
    }
    case 250496:
    {
        returnValue = F("Pfarrer-Deindl-Str.");
        break;
    }
    case 250497:
    {
        returnValue = F("Pfarrer-Deinhart-Platz");
        break;
    }
    case 250498:
    {
        returnValue = F("Pfarrer-Deißler-Weg");
        break;
    }
    case 250499:
    {
        returnValue = F("Pfarrer-Dengler-Str.");
        break;
    }
    case 250500:
    {
        returnValue = F("Pfarrer-Denk-Str.");
        break;
    }
    case 250501:
    {
        returnValue = F("Pfarrer-Dichtl-Str.");
        break;
    }
    case 250502:
    {
        returnValue = F("Pfarrer-Dickmann-Str.");
        break;
    }
    case 250503:
    {
        returnValue = F("Pfarrer-Didon-Weg");
        break;
    }
    case 250504:
    {
        returnValue = F("Pfarrer-Diebel-Str.");
        break;
    }
    case 250505:
    {
        returnValue = F("Pfarrer-Diekhans-Weg");
        break;
    }
    case 250506:
    {
        returnValue = F("Pfarrer-Dienst-Str.");
        break;
    }
    case 250507:
    {
        returnValue = F("Pfarrer-Dieterich-Str.");
        break;
    }
    case 250508:
    {
        returnValue = F("Pfarrer-Diez-Weg");
        break;
    }
    case 250509:
    {
        returnValue = F("Pfarrer-Dimmling-Str.");
        break;
    }
    case 250510:
    {
        returnValue = F("Pfarrer-Dippel-Str.");
        break;
    }
    case 250511:
    {
        returnValue = F("Pfarrer-Dippold-Str.");
        break;
    }
    case 250512:
    {
        returnValue = F("Pfarrer-Dippold-Weg");
        break;
    }
    case 250513:
    {
        returnValue = F("Pfarrer-Disselhoff-Str.");
        break;
    }
    case 250514:
    {
        returnValue = F("Pfarrer-Doktor-Kurthen-Str.");
        break;
    }
    case 250515:
    {
        returnValue = F("Pfarrer-Doktor-Müller-Str.");
        break;
    }
    case 250516:
    {
        returnValue = F("Pfarrer-Doktor-Troll-Str.");
        break;
    }
    case 250517:
    {
        returnValue = F("Pfarrer-Dold-Str.");
        break;
    }
    case 250518:
    {
        returnValue = F("Pfarrer-Dorn-Str.");
        break;
    }
    case 250519:
    {
        returnValue = F("Pfarrer-Dornseiffer-Str.");
        break;
    }
    case 250520:
    {
        returnValue = F("Pfarrer-Dorr-Str.");
        break;
    }
    case 250521:
    {
        returnValue = F("Pfarrer-Dossinger-Weg");
        break;
    }
    case 250522:
    {
        returnValue = F("Pfarrer-Dr.-Adams-Str.");
        break;
    }
    case 250523:
    {
        returnValue = F("Pfarrer-Dr.-Bernhard-Weg");
        break;
    }
    case 250524:
    {
        returnValue = F("Pfarrer-Dr.-Hoffmann-Str.");
        break;
    }
    case 250525:
    {
        returnValue = F("Pfarrer-Dr.-Lipp-Str.");
        break;
    }
    case 250526:
    {
        returnValue = F("Pfarrer-Dr.-Maier-Str.");
        break;
    }
    case 250527:
    {
        returnValue = F("Pfarrer-Dr.-Marquardt-Platz");
        break;
    }
    case 250528:
    {
        returnValue = F("Pfarrer-Dr.-Nagel-Weg");
        break;
    }
    case 250529:
    {
        returnValue = F("Pfarrer-Dr.-Satlow-Weg");
        break;
    }
    case 250530:
    {
        returnValue = F("Pfarrer-Dr.-Vogl-Str.");
        break;
    }
    case 250531:
    {
        returnValue = F("Pfarrer-Drauden-Str.");
        break;
    }
    case 250532:
    {
        returnValue = F("Pfarrer-Drees-Str.");
        break;
    }
    case 250533:
    {
        returnValue = F("Pfarrer-Dressing-Str.");
        break;
    }
    case 250534:
    {
        returnValue = F("Pfarrer-Drexler-Str.");
        break;
    }
    case 250535:
    {
        returnValue = F("Pfarrer-Drexler-Weg");
        break;
    }
    case 250536:
    {
        returnValue = F("Pfarrer-Drienko-Weg");
        break;
    }
    case 250537:
    {
        returnValue = F("Pfarrer-Duffner-Weg");
        break;
    }
    case 250538:
    {
        returnValue = F("Pfarrer-Dustmann-Str.");
        break;
    }
    case 250539:
    {
        returnValue = F("Pfarrer-Dötsch-Str.");
        break;
    }
    case 250540:
    {
        returnValue = F("Pfarrer-Dürr-Weg");
        break;
    }
    case 250541:
    {
        returnValue = F("Pfarrer-Eberhard-Otto-Weg");
        break;
    }
    case 250542:
    {
        returnValue = F("Pfarrer-Eberlein-Str.");
        break;
    }
    case 250543:
    {
        returnValue = F("Pfarrer-Ebertz-Str.");
        break;
    }
    case 250544:
    {
        returnValue = F("Pfarrer-Eberwein-Weg");
        break;
    }
    case 250545:
    {
        returnValue = F("Pfarrer-Ebner-Ring");
        break;
    }
    case 250546:
    {
        returnValue = F("Pfarrer-Ecke-Weg");
        break;
    }
    case 250547:
    {
        returnValue = F("Pfarrer-Ecker-Str.");
        break;
    }
    case 250548:
    {
        returnValue = F("Pfarrer-Eckert-Str.");
        break;
    }
    case 250549:
    {
        returnValue = F("Pfarrer-Eckert-Weg");
        break;
    }
    case 250550:
    {
        returnValue = F("Pfarrer-Eder-Str.");
        break;
    }
    case 250551:
    {
        returnValue = F("Pfarrer-Ederer-Str.");
        break;
    }
    case 250552:
    {
        returnValue = F("Pfarrer-Edhofer-Str.");
        break;
    }
    case 250553:
    {
        returnValue = F("Pfarrer-Egen-Weg");
        break;
    }
    case 250554:
    {
        returnValue = F("Pfarrer-Egerer-Str.");
        break;
    }
    case 250555:
    {
        returnValue = F("Pfarrer-Egerer-Weg");
        break;
    }
    case 250556:
    {
        returnValue = F("Pfarrer-Eggart-Str.");
        break;
    }
    case 250557:
    {
        returnValue = F("Pfarrer-Egger-Str.");
        break;
    }
    case 250558:
    {
        returnValue = F("Pfarrer-Egger-Weg");
        break;
    }
    case 250559:
    {
        returnValue = F("Pfarrer-Eicher-Str.");
        break;
    }
    case 250560:
    {
        returnValue = F("Pfarrer-Eigner-Weg");
        break;
    }
    case 250561:
    {
        returnValue = F("Pfarrer-Einberger-Weg");
        break;
    }
    case 250562:
    {
        returnValue = F("Pfarrer-Einerhand-Str.");
        break;
    }
    case 250563:
    {
        returnValue = F("Pfarrer-Eisel-Weg");
        break;
    }
    case 250564:
    {
        returnValue = F("Pfarrer-Eisele-Str.");
        break;
    }
    case 250565:
    {
        returnValue = F("Pfarrer-Eitlinger-Ring");
        break;
    }
    case 250566:
    {
        returnValue = F("Pfarrer-Elfinger-Str.");
        break;
    }
    case 250567:
    {
        returnValue = F("Pfarrer-Eller-Str.");
        break;
    }
    case 250568:
    {
        returnValue = F("Pfarrer-Ellmann-Str.");
        break;
    }
    case 250569:
    {
        returnValue = F("Pfarrer-Elmar-Schnitzler-Weg");
        break;
    }
    case 250570:
    {
        returnValue = F("Pfarrer-Emmerich-Weg");
        break;
    }
    case 250571:
    {
        returnValue = F("Pfarrer-Emunds-Str.");
        break;
    }
    case 250572:
    {
        returnValue = F("Pfarrer-Endres-Str.");
        break;
    }
    case 250573:
    {
        returnValue = F("Pfarrer-Engel-Weg");
        break;
    }
    case 250574:
    {
        returnValue = F("Pfarrer-Engelhardt-Weg");
        break;
    }
    case 250575:
    {
        returnValue = F("Pfarrer-Engels-Str.");
        break;
    }
    case 250576:
    {
        returnValue = F("Pfarrer-Engler-Weg");
        break;
    }
    case 250577:
    {
        returnValue = F("Pfarrer-Enz-Str.");
        break;
    }
    case 250578:
    {
        returnValue = F("Pfarrer-Epper-Str.");
        break;
    }
    case 250579:
    {
        returnValue = F("Pfarrer-Eras-Str.");
        break;
    }
    case 250580:
    {
        returnValue = F("Pfarrer-Erbel-Weg");
        break;
    }
    case 250581:
    {
        returnValue = F("Pfarrer-Erhard-Behl-Weg");
        break;
    }
    case 250582:
    {
        returnValue = F("Pfarrer-Erhard-Weg");
        break;
    }
    case 250583:
    {
        returnValue = F("Pfarrer-Erich-Fuchs-Ring");
        break;
    }
    case 250584:
    {
        returnValue = F("Pfarrer-Ermert-Weg");
        break;
    }
    case 250585:
    {
        returnValue = F("Pfarrer-Ernst-Str.");
        break;
    }
    case 250586:
    {
        returnValue = F("Pfarrer-Ertl-Platz");
        break;
    }
    case 250587:
    {
        returnValue = F("Pfarrer-Ertl-Weg");
        break;
    }
    case 250588:
    {
        returnValue = F("Pfarrer-Esch-Str.");
        break;
    }
    case 250589:
    {
        returnValue = F("Pfarrer-Evers-Ring");
        break;
    }
    case 250590:
    {
        returnValue = F("Pfarrer-Falk-Str.");
        break;
    }
    case 250591:
    {
        returnValue = F("Pfarrer-Faustner-Weg");
        break;
    }
    case 250592:
    {
        returnValue = F("Pfarrer-Federl-Ring");
        break;
    }
    case 250593:
    {
        returnValue = F("Pfarrer-Fehrenbacher-Str.");
        break;
    }
    case 250594:
    {
        returnValue = F("Pfarrer-Fein-Str.");
        break;
    }
    case 250595:
    {
        returnValue = F("Pfarrer-Fellner-Str.");
        break;
    }
    case 250596:
    {
        returnValue = F("Pfarrer-Fendt-Str.");
        break;
    }
    case 250597:
    {
        returnValue = F("Pfarrer-Fenk-Str.");
        break;
    }
    case 250598:
    {
        returnValue = F("Pfarrer-Ferneding-Str.");
        break;
    }
    case 250599:
    {
        returnValue = F("Pfarrer-Fersch-Str.");
        break;
    }
    case 250600:
    {
        returnValue = F("Pfarrer-Ferstl-Str.");
        break;
    }
    case 250601:
    {
        returnValue = F("Pfarrer-Fettig-Str.");
        break;
    }
    case 250602:
    {
        returnValue = F("Pfarrer-Fichter-Weg");
        break;
    }
    case 250603:
    {
        returnValue = F("Pfarrer-Fichtl-Str.");
        break;
    }
    case 250604:
    {
        returnValue = F("Pfarrer-Fiderer-Str.");
        break;
    }
    case 250605:
    {
        returnValue = F("Pfarrer-Fiegl-Str.");
        break;
    }
    case 250606:
    {
        returnValue = F("Pfarrer-Fimpel-Str.");
        break;
    }
    case 250607:
    {
        returnValue = F("Pfarrer-Findl-Str.");
        break;
    }
    case 250608:
    {
        returnValue = F("Pfarrer-Fink-Str.");
        break;
    }
    case 250609:
    {
        returnValue = F("Pfarrer-Fischer-Str.");
        break;
    }
    case 250610:
    {
        returnValue = F("Pfarrer-Fischer-Weg");
        break;
    }
    case 250611:
    {
        returnValue = F("Pfarrer-Fleckenstein-Str.");
        break;
    }
    case 250612:
    {
        returnValue = F("Pfarrer-Fleischmann-Str.");
        break;
    }
    case 250613:
    {
        returnValue = F("Pfarrer-Flick-Str.");
        break;
    }
    case 250614:
    {
        returnValue = F("Pfarrer-Flock-Str.");
        break;
    }
    case 250615:
    {
        returnValue = F("Pfarrer-Floß-Str.");
        break;
    }
    case 250616:
    {
        returnValue = F("Pfarrer-Forst-Str.");
        break;
    }
    case 250617:
    {
        returnValue = F("Pfarrer-Forster-Str.");
        break;
    }
    case 250618:
    {
        returnValue = F("Pfarrer-Frank-Str.");
        break;
    }
    case 250619:
    {
        returnValue = F("Pfarrer-Franz-Como-Str.");
        break;
    }
    case 250620:
    {
        returnValue = F("Pfarrer-Franz-Mayer-Weg");
        break;
    }
    case 250621:
    {
        returnValue = F("Pfarrer-Franz-Str.");
        break;
    }
    case 250622:
    {
        returnValue = F("Pfarrer-Franz-Weg");
        break;
    }
    case 250623:
    {
        returnValue = F("Pfarrer-Franßen-Str.");
        break;
    }
    case 250624:
    {
        returnValue = F("Pfarrer-Franßen-Weg");
        break;
    }
    case 250625:
    {
        returnValue = F("Pfarrer-Fredloh-Str.");
        break;
    }
    case 250626:
    {
        returnValue = F("Pfarrer-Freiberger-Str.");
        break;
    }
    case 250627:
    {
        returnValue = F("Pfarrer-Freidrich-Str.");
        break;
    }
    case 250628:
    {
        returnValue = F("Pfarrer-Freihalter-Str.");
        break;
    }
    case 250629:
    {
        returnValue = F("Pfarrer-Fresenborg-Str.");
        break;
    }
    case 250630:
    {
        returnValue = F("Pfarrer-Fresenborg-Weg");
        break;
    }
    case 250631:
    {
        returnValue = F("Pfarrer-Frey-Str.");
        break;
    }
    case 250632:
    {
        returnValue = F("Pfarrer-Frey-Weg");
        break;
    }
    case 250633:
    {
        returnValue = F("Pfarrer-Frick-Weg");
        break;
    }
    case 250634:
    {
        returnValue = F("Pfarrer-Frickenschmidt-Weg");
        break;
    }
    case 250635:
    {
        returnValue = F("Pfarrer-Friedl-Str.");
        break;
    }
    case 250636:
    {
        returnValue = F("Pfarrer-Friedrich-Müller-Str.");
        break;
    }
    case 250637:
    {
        returnValue = F("Pfarrer-Friedrich-Str.");
        break;
    }
    case 250638:
    {
        returnValue = F("Pfarrer-Friesenhahn-Platz");
        break;
    }
    case 250639:
    {
        returnValue = F("Pfarrer-Frings-Weg");
        break;
    }
    case 250640:
    {
        returnValue = F("Pfarrer-Fritz-Weg");
        break;
    }
    case 250641:
    {
        returnValue = F("Pfarrer-From-Str.");
        break;
    }
    case 250642:
    {
        returnValue = F("Pfarrer-Frommeld-Str.");
        break;
    }
    case 250643:
    {
        returnValue = F("Pfarrer-Fröhlich-Str.");
        break;
    }
    case 250644:
    {
        returnValue = F("Pfarrer-Frömel-Ring");
        break;
    }
    case 250645:
    {
        returnValue = F("Pfarrer-Fuchs-Str.");
        break;
    }
    case 250646:
    {
        returnValue = F("Pfarrer-Fuchs-Weg");
        break;
    }
    case 250647:
    {
        returnValue = F("Pfarrer-Fuhs-Str.");
        break;
    }
    case 250648:
    {
        returnValue = F("Pfarrer-Funk-Str.");
        break;
    }
    case 250649:
    {
        returnValue = F("Pfarrer-Funk-Weg");
        break;
    }
    case 250650:
    {
        returnValue = F("Pfarrer-Funke-Str.");
        break;
    }
    case 250651:
    {
        returnValue = F("Pfarrer-Fusseder-Str.");
        break;
    }
    case 250652:
    {
        returnValue = F("Pfarrer-Fäth-Str.");
        break;
    }
    case 250653:
    {
        returnValue = F("Pfarrer-Fürst-Str.");
        break;
    }
    case 250654:
    {
        returnValue = F("Pfarrer-Füssenich-Str.");
        break;
    }
    case 250655:
    {
        returnValue = F("Pfarrer-Fütterer-Weg");
        break;
    }
    case 250656:
    {
        returnValue = F("Pfarrer-Füßl-Str.");
        break;
    }
    case 250657:
    {
        returnValue = F("Pfarrer-Gabler-Str.");
        break;
    }
    case 250658:
    {
        returnValue = F("Pfarrer-Gabriel-Weg");
        break;
    }
    case 250659:
    {
        returnValue = F("Pfarrer-Gaevert-Str.");
        break;
    }
    case 250660:
    {
        returnValue = F("Pfarrer-Gahbauer-Weg");
        break;
    }
    case 250661:
    {
        returnValue = F("Pfarrer-Gaigl-Str.");
        break;
    }
    case 250662:
    {
        returnValue = F("Pfarrer-Gailer-Str.");
        break;
    }
    case 250663:
    {
        returnValue = F("Pfarrer-Galler-Str.");
        break;
    }
    case 250664:
    {
        returnValue = F("Pfarrer-Gamber-Str.");
        break;
    }
    case 250665:
    {
        returnValue = F("Pfarrer-Gammel-Str.");
        break;
    }
    case 250666:
    {
        returnValue = F("Pfarrer-Gantenhammer-Ring");
        break;
    }
    case 250667:
    {
        returnValue = F("Pfarrer-Gareis-Str.");
        break;
    }
    case 250668:
    {
        returnValue = F("Pfarrer-Gauler-Weg");
        break;
    }
    case 250669:
    {
        returnValue = F("Pfarrer-Gedicke-Str.");
        break;
    }
    case 250670:
    {
        returnValue = F("Pfarrer-Gehrmann-Str.");
        break;
    }
    case 250671:
    {
        returnValue = F("Pfarrer-Geidtner-Str.");
        break;
    }
    case 250672:
    {
        returnValue = F("Pfarrer-Geiger-Str.");
        break;
    }
    case 250673:
    {
        returnValue = F("Pfarrer-Geist-Str.");
        break;
    }
    case 250674:
    {
        returnValue = F("Pfarrer-Gelb-Str.");
        break;
    }
    case 250675:
    {
        returnValue = F("Pfarrer-Georg-Kratzer-Str.");
        break;
    }
    case 250676:
    {
        returnValue = F("Pfarrer-Georg-Zangl-Str.");
        break;
    }
    case 250677:
    {
        returnValue = F("Pfarrer-Gerauer-Str.");
        break;
    }
    case 250678:
    {
        returnValue = F("Pfarrer-Gergen-Str.");
        break;
    }
    case 250679:
    {
        returnValue = F("Pfarrer-Gerhoch-Str.");
        break;
    }
    case 250680:
    {
        returnValue = F("Pfarrer-Gerst-Platz");
        break;
    }
    case 250681:
    {
        returnValue = F("Pfarrer-Geyer-Str.");
        break;
    }
    case 250682:
    {
        returnValue = F("Pfarrer-Geyermann-Str.");
        break;
    }
    case 250683:
    {
        returnValue = F("Pfarrer-Gierend-Str.");
        break;
    }
    case 250684:
    {
        returnValue = F("Pfarrer-Gierl-Weg");
        break;
    }
    case 250685:
    {
        returnValue = F("Pfarrer-Giesen-Str.");
        break;
    }
    case 250686:
    {
        returnValue = F("Pfarrer-Gigler-Str.");
        break;
    }
    case 250687:
    {
        returnValue = F("Pfarrer-Gillitzer-Str.");
        break;
    }
    case 250688:
    {
        returnValue = F("Pfarrer-Ginnen-Str.");
        break;
    }
    case 250689:
    {
        returnValue = F("Pfarrer-Ginther-Weg");
        break;
    }
    case 250690:
    {
        returnValue = F("Pfarrer-Gmach-Str.");
        break;
    }
    case 250691:
    {
        returnValue = F("Pfarrer-Gockel-Str.");
        break;
    }
    case 250692:
    {
        returnValue = F("Pfarrer-Goedecker-Str.");
        break;
    }
    case 250693:
    {
        returnValue = F("Pfarrer-Gottfried-Leibl-Str.");
        break;
    }
    case 250694:
    {
        returnValue = F("Pfarrer-Grabinger-Weg");
        break;
    }
    case 250695:
    {
        returnValue = F("Pfarrer-Grabmeier-Allee");
        break;
    }
    case 250696:
    {
        returnValue = F("Pfarrer-Gradl-Str.");
        break;
    }
    case 250697:
    {
        returnValue = F("Pfarrer-Graebener-Str.");
        break;
    }
    case 250698:
    {
        returnValue = F("Pfarrer-Graf-Str.");
        break;
    }
    case 250699:
    {
        returnValue = F("Pfarrer-Grandinger-Str.");
        break;
    }
    case 250700:
    {
        returnValue = F("Pfarrer-Grasmüller-Str.");
        break;
    }
    case 250701:
    {
        returnValue = F("Pfarrer-Grebe-Weg");
        break;
    }
    case 250702:
    {
        returnValue = F("Pfarrer-Greiner-Str.");
        break;
    }
    case 250703:
    {
        returnValue = F("Pfarrer-Gress-Str.");
        break;
    }
    case 250704:
    {
        returnValue = F("Pfarrer-Grevenstette-Str.");
        break;
    }
    case 250705:
    {
        returnValue = F("Pfarrer-Grieb-Weg");
        break;
    }
    case 250706:
    {
        returnValue = F("Pfarrer-Grimm-Anlage");
        break;
    }
    case 250707:
    {
        returnValue = F("Pfarrer-Grimm-Str.");
        break;
    }
    case 250708:
    {
        returnValue = F("Pfarrer-Grochtdreis-Str.");
        break;
    }
    case 250709:
    {
        returnValue = F("Pfarrer-Groden-Str.");
        break;
    }
    case 250710:
    {
        returnValue = F("Pfarrer-Groß-Str.");
        break;
    }
    case 250711:
    {
        returnValue = F("Pfarrer-Gruber-Str.");
        break;
    }
    case 250712:
    {
        returnValue = F("Pfarrer-Grundmann-Str.");
        break;
    }
    case 250713:
    {
        returnValue = F("Pfarrer-Grzondziel-Str.");
        break;
    }
    case 250714:
    {
        returnValue = F("Pfarrer-Gschoßmann-Str.");
        break;
    }
    case 250715:
    {
        returnValue = F("Pfarrer-Gschwendtner-Str.");
        break;
    }
    case 250716:
    {
        returnValue = F("Pfarrer-Guggetzer-Str.");
        break;
    }
    case 250717:
    {
        returnValue = F("Pfarrer-Gursky-Ring");
        break;
    }
    case 250718:
    {
        returnValue = F("Pfarrer-Gutbrod-Str.");
        break;
    }
    case 250719:
    {
        returnValue = F("Pfarrer-Göllner-Weg");
        break;
    }
    case 250720:
    {
        returnValue = F("Pfarrer-Gönner-Str.");
        break;
    }
    case 250721:
    {
        returnValue = F("Pfarrer-Göring-Str.");
        break;
    }
    case 250722:
    {
        returnValue = F("Pfarrer-Götting-Platz");
        break;
    }
    case 250723:
    {
        returnValue = F("Pfarrer-Götz-Str.");
        break;
    }
    case 250724:
    {
        returnValue = F("Pfarrer-Haar-Str.");
        break;
    }
    case 250725:
    {
        returnValue = F("Pfarrer-Haas-Str.");
        break;
    }
    case 250726:
    {
        returnValue = F("Pfarrer-Haberl-Platz");
        break;
    }
    case 250727:
    {
        returnValue = F("Pfarrer-Hablitz-Weg");
        break;
    }
    case 250728:
    {
        returnValue = F("Pfarrer-Hackethal-Str.");
        break;
    }
    case 250729:
    {
        returnValue = F("Pfarrer-Hahn-Str.");
        break;
    }
    case 250730:
    {
        returnValue = F("Pfarrer-Haiden-Str.");
        break;
    }
    case 250731:
    {
        returnValue = F("Pfarrer-Haider-Str.");
        break;
    }
    case 250732:
    {
        returnValue = F("Pfarrer-Halbe-Str.");
        break;
    }
    case 250733:
    {
        returnValue = F("Pfarrer-Hambüchen-Weg");
        break;
    }
    case 250734:
    {
        returnValue = F("Pfarrer-Hamm-Platz");
        break;
    }
    case 250735:
    {
        returnValue = F("Pfarrer-Hammeke-Weg");
        break;
    }
    case 250736:
    {
        returnValue = F("Pfarrer-Handwercher-Platz");
        break;
    }
    case 250737:
    {
        returnValue = F("Pfarrer-Handwercher-Str.");
        break;
    }
    case 250738:
    {
        returnValue = F("Pfarrer-Handwerker-Str.");
        break;
    }
    case 250739:
    {
        returnValue = F("Pfarrer-Hannes-Str.");
        break;
    }
    case 250740:
    {
        returnValue = F("Pfarrer-Hanrath-Weg");
        break;
    }
    case 250741:
    {
        returnValue = F("Pfarrer-Hans-Str.");
        break;
    }
    case 250742:
    {
        returnValue = F("Pfarrer-Hans-Winkler-Platz");
        break;
    }
    case 250743:
    {
        returnValue = F("Pfarrer-Hansen-Str.");
        break;
    }
    case 250744:
    {
        returnValue = F("Pfarrer-Hapig-Str.");
        break;
    }
    case 250745:
    {
        returnValue = F("Pfarrer-Happel-Str.");
        break;
    }
    case 250746:
    {
        returnValue = F("Pfarrer-Harrier-Str.");
        break;
    }
    case 250747:
    {
        returnValue = F("Pfarrer-Hartig-Str.");
        break;
    }
    case 250748:
    {
        returnValue = F("Pfarrer-Hartinger-Str.");
        break;
    }
    case 250749:
    {
        returnValue = F("Pfarrer-Hartl-Str.");
        break;
    }
    case 250750:
    {
        returnValue = F("Pfarrer-Hartl-Weg");
        break;
    }
    case 250751:
    {
        returnValue = F("Pfarrer-Hartmann-Str.");
        break;
    }
    case 250752:
    {
        returnValue = F("Pfarrer-Hartmann-Weg");
        break;
    }
    case 250753:
    {
        returnValue = F("Pfarrer-Hasker-Weg");
        break;
    }
    case 250754:
    {
        returnValue = F("Pfarrer-Hauer-Str.");
        break;
    }
    case 250755:
    {
        returnValue = F("Pfarrer-Haug-Str.");
        break;
    }
    case 250756:
    {
        returnValue = F("Pfarrer-Haus-Str.");
        break;
    }
    case 250757:
    {
        returnValue = F("Pfarrer-Hausmann-Str.");
        break;
    }
    case 250758:
    {
        returnValue = F("Pfarrer-Hausner-Str.");
        break;
    }
    case 250759:
    {
        returnValue = F("Pfarrer-Haustein-Str.");
        break;
    }
    case 250760:
    {
        returnValue = F("Pfarrer-Haßlacher-Str.");
        break;
    }
    case 250761:
    {
        returnValue = F("Pfarrer-Hebauer-Str.");
        break;
    }
    case 250762:
    {
        returnValue = F("Pfarrer-Heberer-Str.");
        break;
    }
    case 250763:
    {
        returnValue = F("Pfarrer-Heck-Str.");
        break;
    }
    case 250764:
    {
        returnValue = F("Pfarrer-Heckelmann-Str.");
        break;
    }
    case 250765:
    {
        returnValue = F("Pfarrer-Hecker-Str.");
        break;
    }
    case 250766:
    {
        returnValue = F("Pfarrer-Hefter-Str.");
        break;
    }
    case 250767:
    {
        returnValue = F("Pfarrer-Hefter-Weg");
        break;
    }
    case 250768:
    {
        returnValue = F("Pfarrer-Hegele-Str.");
        break;
    }
    case 250769:
    {
        returnValue = F("Pfarrer-Hegger-Str.");
        break;
    }
    case 250770:
    {
        returnValue = F("Pfarrer-Hehn-Weg");
        break;
    }
    case 250771:
    {
        returnValue = F("Pfarrer-Heidbreder-Str.");
        break;
    }
    case 250772:
    {
        returnValue = F("Pfarrer-Heim-Str.");
        break;
    }
    case 250773:
    {
        returnValue = F("Pfarrer-Hein-Str.");
        break;
    }
    case 250774:
    {
        returnValue = F("Pfarrer-Heindl-Str.");
        break;
    }
    case 250775:
    {
        returnValue = F("Pfarrer-Heinrich-Kugelmeier-Str.");
        break;
    }
    case 250776:
    {
        returnValue = F("Pfarrer-Heinrich-Marx-Str.");
        break;
    }
    case 250777:
    {
        returnValue = F("Pfarrer-Heinrich-Paschen-Weg");
        break;
    }
    case 250778:
    {
        returnValue = F("Pfarrer-Heinrich-Str.");
        break;
    }
    case 250779:
    {
        returnValue = F("Pfarrer-Heinrich-von-Solre-Str.");
        break;
    }
    case 250780:
    {
        returnValue = F("Pfarrer-Heiser-Weg");
        break;
    }
    case 250781:
    {
        returnValue = F("Pfarrer-Heiß-Str.");
        break;
    }
    case 250782:
    {
        returnValue = F("Pfarrer-Helbach-Str.");
        break;
    }
    case 250783:
    {
        returnValue = F("Pfarrer-Held-Str.");
        break;
    }
    case 250784:
    {
        returnValue = F("Pfarrer-Heldwein-Str.");
        break;
    }
    case 250785:
    {
        returnValue = F("Pfarrer-Hellmann-Str.");
        break;
    }
    case 250786:
    {
        returnValue = F("Pfarrer-Helmle-Weg");
        break;
    }
    case 250787:
    {
        returnValue = F("Pfarrer-Henn-Weg");
        break;
    }
    case 250788:
    {
        returnValue = F("Pfarrer-Henning-Str.");
        break;
    }
    case 250789:
    {
        returnValue = F("Pfarrer-Henninger-Weg");
        break;
    }
    case 250790:
    {
        returnValue = F("Pfarrer-Hentschel-Weg");
        break;
    }
    case 250791:
    {
        returnValue = F("Pfarrer-Herb-Str.");
        break;
    }
    case 250792:
    {
        returnValue = F("Pfarrer-Herbert-Köhler-Str.");
        break;
    }
    case 250793:
    {
        returnValue = F("Pfarrer-Herburger-Str.");
        break;
    }
    case 250794:
    {
        returnValue = F("Pfarrer-Heringer-Weg");
        break;
    }
    case 250795:
    {
        returnValue = F("Pfarrer-Hermann-Müller-Weg");
        break;
    }
    case 250796:
    {
        returnValue = F("Pfarrer-Hermann-Renz-Weg");
        break;
    }
    case 250797:
    {
        returnValue = F("Pfarrer-Hermes-Str.");
        break;
    }
    case 250798:
    {
        returnValue = F("Pfarrer-Herr-Str.");
        break;
    }
    case 250799:
    {
        returnValue = F("Pfarrer-Herrmann-Str.");
        break;
    }
    case 250800:
    {
        returnValue = F("Pfarrer-Herz-Str.");
        break;
    }
    case 250801:
    {
        returnValue = F("Pfarrer-Hesse-Str.");
        break;
    }
    case 250802:
    {
        returnValue = F("Pfarrer-Hessenhofer-Str.");
        break;
    }
    case 250803:
    {
        returnValue = F("Pfarrer-Hetterich-Str.");
        break;
    }
    case 250804:
    {
        returnValue = F("Pfarrer-Heumann-Str.");
        break;
    }
    case 250805:
    {
        returnValue = F("Pfarrer-Heyd-Str.");
        break;
    }
    case 250806:
    {
        returnValue = F("Pfarrer-Heydner-Str.");
        break;
    }
    case 250807:
    {
        returnValue = F("Pfarrer-Heyer-Str.");
        break;
    }
    case 250808:
    {
        returnValue = F("Pfarrer-Heyer-Weg");
        break;
    }
    case 250809:
    {
        returnValue = F("Pfarrer-Hieber-Platz");
        break;
    }
    case 250810:
    {
        returnValue = F("Pfarrer-Hieber-Str.");
        break;
    }
    case 250811:
    {
        returnValue = F("Pfarrer-Hiedl-Str.");
        break;
    }
    case 250812:
    {
        returnValue = F("Pfarrer-Hien-Str.");
        break;
    }
    case 250813:
    {
        returnValue = F("Pfarrer-Hilleke-Weg");
        break;
    }
    case 250814:
    {
        returnValue = F("Pfarrer-Hiller-Str.");
        break;
    }
    case 250815:
    {
        returnValue = F("Pfarrer-Hilz-Str.");
        break;
    }
    case 250816:
    {
        returnValue = F("Pfarrer-Hindelang-Weg");
        break;
    }
    case 250817:
    {
        returnValue = F("Pfarrer-Hirl-Str.");
        break;
    }
    case 250818:
    {
        returnValue = F("Pfarrer-Hobmair-Weg");
        break;
    }
    case 250819:
    {
        returnValue = F("Pfarrer-Hochmaier-Ring");
        break;
    }
    case 250820:
    {
        returnValue = F("Pfarrer-Hochstetter-Str.");
        break;
    }
    case 250821:
    {
        returnValue = F("Pfarrer-Hodecker-Str.");
        break;
    }
    case 250822:
    {
        returnValue = F("Pfarrer-Hoenes-Str.");
        break;
    }
    case 250823:
    {
        returnValue = F("Pfarrer-Hof-Str.");
        break;
    }
    case 250824:
    {
        returnValue = F("Pfarrer-Hoffmann-Str.");
        break;
    }
    case 250825:
    {
        returnValue = F("Pfarrer-Hoffmann-Weg");
        break;
    }
    case 250826:
    {
        returnValue = F("Pfarrer-Hoffmans-Str.");
        break;
    }
    case 250827:
    {
        returnValue = F("Pfarrer-Hofmann-Str.");
        break;
    }
    case 250828:
    {
        returnValue = F("Pfarrer-Holl-Str.");
        break;
    }
    case 250829:
    {
        returnValue = F("Pfarrer-Holtmann-Str.");
        break;
    }
    case 250830:
    {
        returnValue = F("Pfarrer-Holtrichter-Str.");
        break;
    }
    case 250831:
    {
        returnValue = F("Pfarrer-Holzapfel-Str.");
        break;
    }
    case 250832:
    {
        returnValue = F("Pfarrer-Holzberg-Str.");
        break;
    }
    case 250833:
    {
        returnValue = F("Pfarrer-Holzinger-Str.");
        break;
    }
    case 250834:
    {
        returnValue = F("Pfarrer-Holzmann-Str.");
        break;
    }
    case 250835:
    {
        returnValue = F("Pfarrer-Hopp-Str.");
        break;
    }
    case 250836:
    {
        returnValue = F("Pfarrer-Hops-Str.");
        break;
    }
    case 250837:
    {
        returnValue = F("Pfarrer-Hormayr-Str.");
        break;
    }
    case 250838:
    {
        returnValue = F("Pfarrer-Hornauer-Str.");
        break;
    }
    case 250839:
    {
        returnValue = F("Pfarrer-Horner-Str.");
        break;
    }
    case 250840:
    {
        returnValue = F("Pfarrer-Hottenrott-Str.");
        break;
    }
    case 250841:
    {
        returnValue = F("Pfarrer-Huber-Ring");
        break;
    }
    case 250842:
    {
        returnValue = F("Pfarrer-Huber-Str.");
        break;
    }
    case 250843:
    {
        returnValue = F("Pfarrer-Huber-Weg");
        break;
    }
    case 250844:
    {
        returnValue = F("Pfarrer-Huckschlag-Weg");
        break;
    }
    case 250845:
    {
        returnValue = F("Pfarrer-Hueber-Weg");
        break;
    }
    case 250846:
    {
        returnValue = F("Pfarrer-Hufnagel-Str.");
        break;
    }
    case 250847:
    {
        returnValue = F("Pfarrer-Hugo-Springer-Platz");
        break;
    }
    case 250848:
    {
        returnValue = F("Pfarrer-Humpf-Weg");
        break;
    }
    case 250849:
    {
        returnValue = F("Pfarrer-Hundsdorfer-Str.");
        break;
    }
    case 250850:
    {
        returnValue = F("Pfarrer-Hußlein-Str.");
        break;
    }
    case 250851:
    {
        returnValue = F("Pfarrer-Häfele-Ring");
        break;
    }
    case 250852:
    {
        returnValue = F("Pfarrer-Härtl-Platz");
        break;
    }
    case 250853:
    {
        returnValue = F("Pfarrer-Härtl-Weg");
        break;
    }
    case 250854:
    {
        returnValue = F("Pfarrer-Härtle-Str.");
        break;
    }
    case 250855:
    {
        returnValue = F("Pfarrer-Häusler-Weg");
        break;
    }
    case 250856:
    {
        returnValue = F("Pfarrer-Höfler-Str.");
        break;
    }
    case 250857:
    {
        returnValue = F("Pfarrer-Högerle-Str.");
        break;
    }
    case 250858:
    {
        returnValue = F("Pfarrer-Höhn-Str.");
        break;
    }
    case 250859:
    {
        returnValue = F("Pfarrer-Hölch-Str.");
        break;
    }
    case 250860:
    {
        returnValue = F("Pfarrer-Hönig-Weg");
        break;
    }
    case 250861:
    {
        returnValue = F("Pfarrer-Hörmann-Str.");
        break;
    }
    case 250862:
    {
        returnValue = F("Pfarrer-Hövelböcker-Str.");
        break;
    }
    case 250863:
    {
        returnValue = F("Pfarrer-Hübner-Weg");
        break;
    }
    case 250864:
    {
        returnValue = F("Pfarrer-Hübsch-Str.");
        break;
    }
    case 250865:
    {
        returnValue = F("Pfarrer-Hüging-Str.");
        break;
    }
    case 250866:
    {
        returnValue = F("Pfarrer-Hüls-Weg");
        break;
    }
    case 250867:
    {
        returnValue = F("Pfarrer-Hütter-Weg");
        break;
    }
    case 250868:
    {
        returnValue = F("Pfarrer-Imhof-Str.");
        break;
    }
    case 250869:
    {
        returnValue = F("Pfarrer-Irsigler-Str.");
        break;
    }
    case 250870:
    {
        returnValue = F("Pfarrer-J.-Smitmans-Weg");
        break;
    }
    case 250871:
    {
        returnValue = F("Pfarrer-Jacobs-Str.");
        break;
    }
    case 250872:
    {
        returnValue = F("Pfarrer-Jaegers-Str.");
        break;
    }
    case 250873:
    {
        returnValue = F("Pfarrer-Jakob-Benz-Str.");
        break;
    }
    case 250874:
    {
        returnValue = F("Pfarrer-Jansen-Str.");
        break;
    }
    case 250875:
    {
        returnValue = F("Pfarrer-Jaumann-Str.");
        break;
    }
    case 250876:
    {
        returnValue = F("Pfarrer-Jeck-Str.");
        break;
    }
    case 250877:
    {
        returnValue = F("Pfarrer-Jekel-Str.");
        break;
    }
    case 250878:
    {
        returnValue = F("Pfarrer-Jobst-Bodensohn-Str.");
        break;
    }
    case 250879:
    {
        returnValue = F("Pfarrer-Johann-Beck-Weg");
        break;
    }
    case 250880:
    {
        returnValue = F("Pfarrer-Johann-Haderer-Str.");
        break;
    }
    case 250881:
    {
        returnValue = F("Pfarrer-Johann-Str.");
        break;
    }
    case 250882:
    {
        returnValue = F("Pfarrer-Johannes-Markert-Str.");
        break;
    }
    case 250883:
    {
        returnValue = F("Pfarrer-Johannes-Schmutzer-Str.");
        break;
    }
    case 250884:
    {
        returnValue = F("Pfarrer-Johannes-W.-Weil-Str.");
        break;
    }
    case 250885:
    {
        returnValue = F("Pfarrer-Josef-Bauer-Str.");
        break;
    }
    case 250886:
    {
        returnValue = F("Pfarrer-Josef-Gremm-Str.");
        break;
    }
    case 250887:
    {
        returnValue = F("Pfarrer-Josef-Preis-Weg");
        break;
    }
    case 250888:
    {
        returnValue = F("Pfarrer-Josef-Str.");
        break;
    }
    case 250889:
    {
        returnValue = F("Pfarrer-Joseph-Jammers-Weg");
        break;
    }
    case 250890:
    {
        returnValue = F("Pfarrer-Joseph-Panzer-Str.");
        break;
    }
    case 250891:
    {
        returnValue = F("Pfarrer-Juhenettl-Str.");
        break;
    }
    case 250892:
    {
        returnValue = F("Pfarrer-Jung-Str.");
        break;
    }
    case 250893:
    {
        returnValue = F("Pfarrer-Jäckle-Str.");
        break;
    }
    case 250894:
    {
        returnValue = F("Pfarrer-Jäger-Str.");
        break;
    }
    case 250895:
    {
        returnValue = F("Pfarrer-Jägers-Str.");
        break;
    }
    case 250896:
    {
        returnValue = F("Pfarrer-Kaas-Str.");
        break;
    }
    case 250897:
    {
        returnValue = F("Pfarrer-Kaeufel-Str.");
        break;
    }
    case 250898:
    {
        returnValue = F("Pfarrer-Kainzmaier-Ring");
        break;
    }
    case 250899:
    {
        returnValue = F("Pfarrer-Kaiser-Ring");
        break;
    }
    case 250900:
    {
        returnValue = F("Pfarrer-Kaiser-Str.");
        break;
    }
    case 250901:
    {
        returnValue = F("Pfarrer-Kamp-Weg");
        break;
    }
    case 250902:
    {
        returnValue = F("Pfarrer-Kapfhammer-Str.");
        break;
    }
    case 250903:
    {
        returnValue = F("Pfarrer-Karl-Schmid-Weg");
        break;
    }
    case 250904:
    {
        returnValue = F("Pfarrer-Karl-Str.");
        break;
    }
    case 250905:
    {
        returnValue = F("Pfarrer-Karl-Wunderer-Str.");
        break;
    }
    case 250906:
    {
        returnValue = F("Pfarrer-Karrer-Str.");
        break;
    }
    case 250907:
    {
        returnValue = F("Pfarrer-Kaspar-Str.");
        break;
    }
    case 250908:
    {
        returnValue = F("Pfarrer-Kaspar-Walter-Str.");
        break;
    }
    case 250909:
    {
        returnValue = F("Pfarrer-Kast-Weg");
        break;
    }
    case 250910:
    {
        returnValue = F("Pfarrer-Kastner-Weg");
        break;
    }
    case 250911:
    {
        returnValue = F("Pfarrer-Kayser-Str.");
        break;
    }
    case 250912:
    {
        returnValue = F("Pfarrer-Kees-Str.");
        break;
    }
    case 250913:
    {
        returnValue = F("Pfarrer-Keil-Str.");
        break;
    }
    case 250914:
    {
        returnValue = F("Pfarrer-Keith-Str.");
        break;
    }
    case 250915:
    {
        returnValue = F("Pfarrer-Kellen-Str.");
        break;
    }
    case 250916:
    {
        returnValue = F("Pfarrer-Kemper-Str.");
        break;
    }
    case 250917:
    {
        returnValue = F("Pfarrer-Kempf-Str.");
        break;
    }
    case 250918:
    {
        returnValue = F("Pfarrer-Kempter-Str.");
        break;
    }
    case 250919:
    {
        returnValue = F("Pfarrer-Kenntemich-Platz");
        break;
    }
    case 250920:
    {
        returnValue = F("Pfarrer-Kerer-Str.");
        break;
    }
    case 250921:
    {
        returnValue = F("Pfarrer-Kerkmann-Str.");
        break;
    }
    case 250922:
    {
        returnValue = F("Pfarrer-Kersting-Weg");
        break;
    }
    case 250923:
    {
        returnValue = F("Pfarrer-Kessler-Str.");
        break;
    }
    case 250924:
    {
        returnValue = F("Pfarrer-Keuter-Str.");
        break;
    }
    case 250925:
    {
        returnValue = F("Pfarrer-Keutner-Str.");
        break;
    }
    case 250926:
    {
        returnValue = F("Pfarrer-Keßler-Str.");
        break;
    }
    case 250927:
    {
        returnValue = F("Pfarrer-Kiefer-Weg");
        break;
    }
    case 250928:
    {
        returnValue = F("Pfarrer-Kienberger-Str.");
        break;
    }
    case 250929:
    {
        returnValue = F("Pfarrer-Kieser-Weg");
        break;
    }
    case 250930:
    {
        returnValue = F("Pfarrer-Kis-Str.");
        break;
    }
    case 250931:
    {
        returnValue = F("Pfarrer-Kistner-Weg");
        break;
    }
    case 250932:
    {
        returnValue = F("Pfarrer-Kißlinger-Str.");
        break;
    }
    case 250933:
    {
        returnValue = F("Pfarrer-Klaas-Str.");
        break;
    }
    case 250934:
    {
        returnValue = F("Pfarrer-Klais-Weg");
        break;
    }
    case 250935:
    {
        returnValue = F("Pfarrer-Kleespies-Str.");
        break;
    }
    case 250936:
    {
        returnValue = F("Pfarrer-Klein-Str.");
        break;
    }
    case 250937:
    {
        returnValue = F("Pfarrer-Kleiner-Weg");
        break;
    }
    case 250938:
    {
        returnValue = F("Pfarrer-Kleinermanns-Str.");
        break;
    }
    case 250939:
    {
        returnValue = F("Pfarrer-Klinker-Str.");
        break;
    }
    case 250940:
    {
        returnValue = F("Pfarrer-Klämpfl-Weg");
        break;
    }
    case 250941:
    {
        returnValue = F("Pfarrer-Klüttermann-Str.");
        break;
    }
    case 250942:
    {
        returnValue = F("Pfarrer-Knappmann-Str.");
        break;
    }
    case 250943:
    {
        returnValue = F("Pfarrer-Knaus-Str.");
        break;
    }
    case 250944:
    {
        returnValue = F("Pfarrer-Kneidinger-Str.");
        break;
    }
    case 250945:
    {
        returnValue = F("Pfarrer-Kneipp-Allee");
        break;
    }
    case 250946:
    {
        returnValue = F("Pfarrer-Kneipp-Park");
        break;
    }
    case 250947:
    {
        returnValue = F("Pfarrer-Kneipp-Steige");
        break;
    }
    case 250948:
    {
        returnValue = F("Pfarrer-Kneipp-Str.");
        break;
    }
    case 250949:
    {
        returnValue = F("Pfarrer-Kneipp-Weg");
        break;
    }
    case 250950:
    {
        returnValue = F("Pfarrer-Kneissl-Str.");
        break;
    }
    case 250951:
    {
        returnValue = F("Pfarrer-Knogler-Str.");
        break;
    }
    case 250952:
    {
        returnValue = F("Pfarrer-Knorr-Str.");
        break;
    }
    case 250953:
    {
        returnValue = F("Pfarrer-Knotek-Weg");
        break;
    }
    case 250954:
    {
        returnValue = F("Pfarrer-Knott-Str.");
        break;
    }
    case 250955:
    {
        returnValue = F("Pfarrer-Kobler-Str.");
        break;
    }
    case 250956:
    {
        returnValue = F("Pfarrer-Koch-Str.");
        break;
    }
    case 250957:
    {
        returnValue = F("Pfarrer-Kock-Str.");
        break;
    }
    case 250958:
    {
        returnValue = F("Pfarrer-Kock-Weg");
        break;
    }
    case 250959:
    {
        returnValue = F("Pfarrer-Kolb-Str.");
        break;
    }
    case 250960:
    {
        returnValue = F("Pfarrer-Kolve-Str.");
        break;
    }
    case 250961:
    {
        returnValue = F("Pfarrer-Konter-Weg");
        break;
    }
    case 250962:
    {
        returnValue = F("Pfarrer-Kopp-Str.");
        break;
    }
    case 250963:
    {
        returnValue = F("Pfarrer-Korb-Str.");
        break;
    }
    case 250964:
    {
        returnValue = F("Pfarrer-Korte-Str.");
        break;
    }
    case 250965:
    {
        returnValue = F("Pfarrer-Kost-Platz");
        break;
    }
    case 250966:
    {
        returnValue = F("Pfarrer-Kottmann-Platz");
        break;
    }
    case 250967:
    {
        returnValue = F("Pfarrer-Kowollik-Weg");
        break;
    }
    case 250968:
    {
        returnValue = F("Pfarrer-Kraemer-Str.");
        break;
    }
    case 250969:
    {
        returnValue = F("Pfarrer-Kraiß-Str.");
        break;
    }
    case 250970:
    {
        returnValue = F("Pfarrer-Kramer-Str.");
        break;
    }
    case 250971:
    {
        returnValue = F("Pfarrer-Kranz-Str.");
        break;
    }
    case 250972:
    {
        returnValue = F("Pfarrer-Krapf-Str.");
        break;
    }
    case 250973:
    {
        returnValue = F("Pfarrer-Krapp-Str.");
        break;
    }
    case 250974:
    {
        returnValue = F("Pfarrer-Kraus-Anlagen");
        break;
    }
    case 250975:
    {
        returnValue = F("Pfarrer-Kraus-Str.");
        break;
    }
    case 250976:
    {
        returnValue = F("Pfarrer-Krebs-Str.");
        break;
    }
    case 250977:
    {
        returnValue = F("Pfarrer-Kreidt-Weg");
        break;
    }
    case 250978:
    {
        returnValue = F("Pfarrer-Kreins-Str.");
        break;
    }
    case 250979:
    {
        returnValue = F("Pfarrer-Kreitz-Str.");
        break;
    }
    case 250980:
    {
        returnValue = F("Pfarrer-Krekeler-Str.");
        break;
    }
    case 250981:
    {
        returnValue = F("Pfarrer-Krenböck-Str.");
        break;
    }
    case 250982:
    {
        returnValue = F("Pfarrer-Kressierer-Str.");
        break;
    }
    case 250983:
    {
        returnValue = F("Pfarrer-Kressierer-Weg");
        break;
    }
    case 250984:
    {
        returnValue = F("Pfarrer-Kreutle-Str.");
        break;
    }
    case 250985:
    {
        returnValue = F("Pfarrer-Kreutmeier-Weg");
        break;
    }
    case 250986:
    {
        returnValue = F("Pfarrer-Kreuzer-Str.");
        break;
    }
    case 250987:
    {
        returnValue = F("Pfarrer-Krieger-Weg");
        break;
    }
    case 250988:
    {
        returnValue = F("Pfarrer-Krings-Str.");
        break;
    }
    case 250989:
    {
        returnValue = F("Pfarrer-Krinner-Str.");
        break;
    }
    case 250990:
    {
        returnValue = F("Pfarrer-Kroos-Str.");
        break;
    }
    case 250991:
    {
        returnValue = F("Pfarrer-Kropfeld-Str.");
        break;
    }
    case 250992:
    {
        returnValue = F("Pfarrer-Krumscheidt-Str.");
        break;
    }
    case 250993:
    {
        returnValue = F("Pfarrer-Krämer-Weg");
        break;
    }
    case 250994:
    {
        returnValue = F("Pfarrer-Kuhn-Weg");
        break;
    }
    case 250995:
    {
        returnValue = F("Pfarrer-Kuhnigk-Str.");
        break;
    }
    case 250996:
    {
        returnValue = F("Pfarrer-Kumpfmüller-Str.");
        break;
    }
    case 250997:
    {
        returnValue = F("Pfarrer-Kunders-Str.");
        break;
    }
    case 250998:
    {
        returnValue = F("Pfarrer-Kunkel-Ring");
        break;
    }
    case 250999:
    {
        returnValue = F("Pfarrer-Kunzmann-Str.");
        break;
    }
    case 251000:
    {
        returnValue = F("Pfarrer-Käsmair-Str.");
        break;
    }
    case 251001:
    {
        returnValue = F("Pfarrer-Köhler-Str.");
        break;
    }
    case 251002:
    {
        returnValue = F("Pfarrer-Kölbl-Str.");
        break;
    }
    case 251003:
    {
        returnValue = F("Pfarrer-Köllner-Treppe");
        break;
    }
    case 251004:
    {
        returnValue = F("Pfarrer-König-Weg");
        break;
    }
    case 251005:
    {
        returnValue = F("Pfarrer-Königs-Str.");
        break;
    }
    case 251006:
    {
        returnValue = F("Pfarrer-Königsdorfer-Weg");
        break;
    }
    case 251007:
    {
        returnValue = F("Pfarrer-Körber-Str.");
        break;
    }
    case 251008:
    {
        returnValue = F("Pfarrer-Körner-Str.");
        break;
    }
    case 251009:
    {
        returnValue = F("Pfarrer-Kühner-Str.");
        break;
    }
    case 251010:
    {
        returnValue = F("Pfarrer-Künster-Str.");
        break;
    }
    case 251011:
    {
        returnValue = F("Pfarrer-Küpper-Str.");
        break;
    }
    case 251012:
    {
        returnValue = F("Pfarrer-Labbe-Str.");
        break;
    }
    case 251013:
    {
        returnValue = F("Pfarrer-Lahner-Str.");
        break;
    }
    case 251014:
    {
        returnValue = F("Pfarrer-Lampert-Str.");
        break;
    }
    case 251015:
    {
        returnValue = F("Pfarrer-Lampl-Str.");
        break;
    }
    case 251016:
    {
        returnValue = F("Pfarrer-Landgraf-Str.");
        break;
    }
    case 251017:
    {
        returnValue = F("Pfarrer-Lang-Str.");
        break;
    }
    case 251018:
    {
        returnValue = F("Pfarrer-Langenbacher-Str.");
        break;
    }
    case 251019:
    {
        returnValue = F("Pfarrer-Langer-Str.");
        break;
    }
    case 251020:
    {
        returnValue = F("Pfarrer-Lanzinger-Ring");
        break;
    }
    case 251021:
    {
        returnValue = F("Pfarrer-Laubmeier-Str.");
        break;
    }
    case 251022:
    {
        returnValue = F("Pfarrer-Lauenroth-Ring");
        break;
    }
    case 251023:
    {
        returnValue = F("Pfarrer-Lauer-Str.");
        break;
    }
    case 251024:
    {
        returnValue = F("Pfarrer-Lauvers-Str.");
        break;
    }
    case 251025:
    {
        returnValue = F("Pfarrer-Layes-Str.");
        break;
    }
    case 251026:
    {
        returnValue = F("Pfarrer-Lechner-Weg");
        break;
    }
    case 251027:
    {
        returnValue = F("Pfarrer-Lederer-Str.");
        break;
    }
    case 251028:
    {
        returnValue = F("Pfarrer-Ledermann-Platz");
        break;
    }
    case 251029:
    {
        returnValue = F("Pfarrer-Leeb-Str.");
        break;
    }
    case 251030:
    {
        returnValue = F("Pfarrer-Legemann-Str.");
        break;
    }
    case 251031:
    {
        returnValue = F("Pfarrer-Lehmann-Str.");
        break;
    }
    case 251032:
    {
        returnValue = F("Pfarrer-Lehmköster-Weg");
        break;
    }
    case 251033:
    {
        returnValue = F("Pfarrer-Leibig-Str.");
        break;
    }
    case 251034:
    {
        returnValue = F("Pfarrer-Leifferen-Str.");
        break;
    }
    case 251035:
    {
        returnValue = F("Pfarrer-Leinberger-Weg");
        break;
    }
    case 251036:
    {
        returnValue = F("Pfarrer-Leins-Weg");
        break;
    }
    case 251037:
    {
        returnValue = F("Pfarrer-Leismann-Str.");
        break;
    }
    case 251038:
    {
        returnValue = F("Pfarrer-Lemmen-Str.");
        break;
    }
    case 251039:
    {
        returnValue = F("Pfarrer-Lengler-Weg");
        break;
    }
    case 251040:
    {
        returnValue = F("Pfarrer-Leo-Hochreiter-Weg");
        break;
    }
    case 251041:
    {
        returnValue = F("Pfarrer-Leo-Reiners-Platz");
        break;
    }
    case 251042:
    {
        returnValue = F("Pfarrer-Lethner-Weg");
        break;
    }
    case 251043:
    {
        returnValue = F("Pfarrer-Leube-Str.");
        break;
    }
    case 251044:
    {
        returnValue = F("Pfarrer-Leuchter-Str.");
        break;
    }
    case 251045:
    {
        returnValue = F("Pfarrer-Ley-Str.");
        break;
    }
    case 251046:
    {
        returnValue = F("Pfarrer-Leytz-Weg");
        break;
    }
    case 251047:
    {
        returnValue = F("Pfarrer-Lichius-Str.");
        break;
    }
    case 251048:
    {
        returnValue = F("Pfarrer-Lichtenwald-Str.");
        break;
    }
    case 251049:
    {
        returnValue = F("Pfarrer-Linden-Str.");
        break;
    }
    case 251050:
    {
        returnValue = F("Pfarrer-Lingg-Str.");
        break;
    }
    case 251051:
    {
        returnValue = F("Pfarrer-Link-Str.");
        break;
    }
    case 251052:
    {
        returnValue = F("Pfarrer-Linzbach-Str.");
        break;
    }
    case 251053:
    {
        returnValue = F("Pfarrer-Lipf-Str.");
        break;
    }
    case 251054:
    {
        returnValue = F("Pfarrer-Littich-Str.");
        break;
    }
    case 251055:
    {
        returnValue = F("Pfarrer-Lohner-Str.");
        break;
    }
    case 251056:
    {
        returnValue = F("Pfarrer-Lohr-Str.");
        break;
    }
    case 251057:
    {
        returnValue = F("Pfarrer-Loibl-Weg");
        break;
    }
    case 251058:
    {
        returnValue = F("Pfarrer-Loidl-Str.");
        break;
    }
    case 251059:
    {
        returnValue = F("Pfarrer-Look-Str.");
        break;
    }
    case 251060:
    {
        returnValue = F("Pfarrer-Lotz-Str.");
        break;
    }
    case 251061:
    {
        returnValue = F("Pfarrer-Lowis-Str.");
        break;
    }
    case 251062:
    {
        returnValue = F("Pfarrer-Ludolf-Str.");
        break;
    }
    case 251063:
    {
        returnValue = F("Pfarrer-Luiz-Weg");
        break;
    }
    case 251064:
    {
        returnValue = F("Pfarrer-Luja-Platz");
        break;
    }
    case 251065:
    {
        returnValue = F("Pfarrer-Lukas-Str.");
        break;
    }
    case 251066:
    {
        returnValue = F("Pfarrer-Lummerich-Str.");
        break;
    }
    case 251067:
    {
        returnValue = F("Pfarrer-Löscher-Str.");
        break;
    }
    case 251068:
    {
        returnValue = F("Pfarrer-Löser-Str.");
        break;
    }
    case 251069:
    {
        returnValue = F("Pfarrer-Löw-Str.");
        break;
    }
    case 251070:
    {
        returnValue = F("Pfarrer-Maas-Weg");
        break;
    }
    case 251071:
    {
        returnValue = F("Pfarrer-Magel-Str.");
        break;
    }
    case 251072:
    {
        returnValue = F("Pfarrer-Maier-Ring");
        break;
    }
    case 251073:
    {
        returnValue = F("Pfarrer-Maier-Str.");
        break;
    }
    case 251074:
    {
        returnValue = F("Pfarrer-Manfred-Wahl-Str.");
        break;
    }
    case 251075:
    {
        returnValue = F("Pfarrer-Manger-Gasse");
        break;
    }
    case 251076:
    {
        returnValue = F("Pfarrer-Manz-Str.");
        break;
    }
    case 251077:
    {
        returnValue = F("Pfarrer-Marquard-Platz");
        break;
    }
    case 251078:
    {
        returnValue = F("Pfarrer-Martin-Thust-Weg");
        break;
    }
    case 251079:
    {
        returnValue = F("Pfarrer-Marx-Str.");
        break;
    }
    case 251080:
    {
        returnValue = F("Pfarrer-Marz-Weg");
        break;
    }
    case 251081:
    {
        returnValue = F("Pfarrer-Mathias-Hockelmann-Platz");
        break;
    }
    case 251082:
    {
        returnValue = F("Pfarrer-Matschl-Weg");
        break;
    }
    case 251083:
    {
        returnValue = F("Pfarrer-Matthiä-Str.");
        break;
    }
    case 251084:
    {
        returnValue = F("Pfarrer-Maurer-Str.");
        break;
    }
    case 251085:
    {
        returnValue = F("Pfarrer-Max-Däubler-Str.");
        break;
    }
    case 251086:
    {
        returnValue = F("Pfarrer-May-Str.");
        break;
    }
    case 251087:
    {
        returnValue = F("Pfarrer-Mayer-Str.");
        break;
    }
    case 251088:
    {
        returnValue = F("Pfarrer-Mayer-Weg");
        break;
    }
    case 251089:
    {
        returnValue = F("Pfarrer-Mayr-Str.");
        break;
    }
    case 251090:
    {
        returnValue = F("Pfarrer-Mayr-Weg");
        break;
    }
    case 251091:
    {
        returnValue = F("Pfarrer-Medicus-Str.");
        break;
    }
    case 251092:
    {
        returnValue = F("Pfarrer-Mehrmann-Weg");
        break;
    }
    case 251093:
    {
        returnValue = F("Pfarrer-Meier-Platz");
        break;
    }
    case 251094:
    {
        returnValue = F("Pfarrer-Meier-Str.");
        break;
    }
    case 251095:
    {
        returnValue = F("Pfarrer-Meier-Weg");
        break;
    }
    case 251096:
    {
        returnValue = F("Pfarrer-Meiler-Str.");
        break;
    }
    case 251097:
    {
        returnValue = F("Pfarrer-Meising-Str.");
        break;
    }
    case 251098:
    {
        returnValue = F("Pfarrer-Meisinger-Str.");
        break;
    }
    case 251099:
    {
        returnValue = F("Pfarrer-Melcher-Weg");
        break;
    }
    case 251100:
    {
        returnValue = F("Pfarrer-Melf-Str.");
        break;
    }
    case 251101:
    {
        returnValue = F("Pfarrer-Menge-Weg");
        break;
    }
    case 251102:
    {
        returnValue = F("Pfarrer-Menges-Str.");
        break;
    }
    case 251103:
    {
        returnValue = F("Pfarrer-Menhart-Str.");
        break;
    }
    case 251104:
    {
        returnValue = F("Pfarrer-Mergen-Str.");
        break;
    }
    case 251105:
    {
        returnValue = F("Pfarrer-Mergenthaler-Weg");
        break;
    }
    case 251106:
    {
        returnValue = F("Pfarrer-Merk-Str.");
        break;
    }
    case 251107:
    {
        returnValue = F("Pfarrer-Merk-Weg");
        break;
    }
    case 251108:
    {
        returnValue = F("Pfarrer-Merkel-Weg");
        break;
    }
    case 251109:
    {
        returnValue = F("Pfarrer-Merkl-Str.");
        break;
    }
    case 251110:
    {
        returnValue = F("Pfarrer-Mersmann-Stiege");
        break;
    }
    case 251111:
    {
        returnValue = F("Pfarrer-Merz-Weg");
        break;
    }
    case 251112:
    {
        returnValue = F("Pfarrer-Mesle-Weg");
        break;
    }
    case 251113:
    {
        returnValue = F("Pfarrer-Meyer-Pfad");
        break;
    }
    case 251114:
    {
        returnValue = F("Pfarrer-Meyer-Str.");
        break;
    }
    case 251115:
    {
        returnValue = F("Pfarrer-Michel-Str.");
        break;
    }
    case 251116:
    {
        returnValue = F("Pfarrer-Michel-Weg");
        break;
    }
    case 251117:
    {
        returnValue = F("Pfarrer-Michels-Str.");
        break;
    }
    case 251118:
    {
        returnValue = F("Pfarrer-Miethe-Weg");
        break;
    }
    case 251119:
    {
        returnValue = F("Pfarrer-Mießlinger-Str.");
        break;
    }
    case 251120:
    {
        returnValue = F("Pfarrer-Miller-Str.");
        break;
    }
    case 251121:
    {
        returnValue = F("Pfarrer-Mitterer-Str.");
        break;
    }
    case 251122:
    {
        returnValue = F("Pfarrer-Mittermair-Str.");
        break;
    }
    case 251123:
    {
        returnValue = F("Pfarrer-Mittermair-Weg");
        break;
    }
    case 251124:
    {
        returnValue = F("Pfarrer-Mohr-Weg");
        break;
    }
    case 251125:
    {
        returnValue = F("Pfarrer-Molz-Str.");
        break;
    }
    case 251126:
    {
        returnValue = F("Pfarrer-Monten-Str.");
        break;
    }
    case 251127:
    {
        returnValue = F("Pfarrer-Moosleitner-Str.");
        break;
    }
    case 251128:
    {
        returnValue = F("Pfarrer-Moritz-Str.");
        break;
    }
    case 251129:
    {
        returnValue = F("Pfarrer-Moser-Platz");
        break;
    }
    case 251130:
    {
        returnValue = F("Pfarrer-Moser-Ring");
        break;
    }
    case 251131:
    {
        returnValue = F("Pfarrer-Moser-Str.");
        break;
    }
    case 251132:
    {
        returnValue = F("Pfarrer-Moster-Str.");
        break;
    }
    case 251133:
    {
        returnValue = F("Pfarrer-Mulzer-Str.");
        break;
    }
    case 251134:
    {
        returnValue = F("Pfarrer-Mundorff-Weg");
        break;
    }
    case 251135:
    {
        returnValue = F("Pfarrer-Murr-Str.");
        break;
    }
    case 251136:
    {
        returnValue = F("Pfarrer-Muth-Str.");
        break;
    }
    case 251137:
    {
        returnValue = F("Pfarrer-Möderl-Weg");
        break;
    }
    case 251138:
    {
        returnValue = F("Pfarrer-Mößl-Weg");
        break;
    }
    case 251139:
    {
        returnValue = F("Pfarrer-Müllbauer-Str.");
        break;
    }
    case 251140:
    {
        returnValue = F("Pfarrer-Müllejans-Str.");
        break;
    }
    case 251141:
    {
        returnValue = F("Pfarrer-Müller-Platz");
        break;
    }
    case 251142:
    {
        returnValue = F("Pfarrer-Müller-Str.");
        break;
    }
    case 251143:
    {
        returnValue = F("Pfarrer-Müller-Weg");
        break;
    }
    case 251144:
    {
        returnValue = F("Pfarrer-Müllner-Weg");
        break;
    }
    case 251145:
    {
        returnValue = F("Pfarrer-Müllritter-Str.");
        break;
    }
    case 251146:
    {
        returnValue = F("Pfarrer-Münch-Str.");
        break;
    }
    case 251147:
    {
        returnValue = F("Pfarrer-Naber-Platz");
        break;
    }
    case 251148:
    {
        returnValue = F("Pfarrer-Nagel-Str.");
        break;
    }
    case 251149:
    {
        returnValue = F("Pfarrer-Nagel-Weg");
        break;
    }
    case 251150:
    {
        returnValue = F("Pfarrer-Nagler-Weg");
        break;
    }
    case 251151:
    {
        returnValue = F("Pfarrer-Nailis-Weg");
        break;
    }
    case 251152:
    {
        returnValue = F("Pfarrer-Nardini-Str.");
        break;
    }
    case 251153:
    {
        returnValue = F("Pfarrer-Neidlinger-Str.");
        break;
    }
    case 251154:
    {
        returnValue = F("Pfarrer-Nergen-Str.");
        break;
    }
    case 251155:
    {
        returnValue = F("Pfarrer-Neteler-Str.");
        break;
    }
    case 251156:
    {
        returnValue = F("Pfarrer-Neubig-Str.");
        break;
    }
    case 251157:
    {
        returnValue = F("Pfarrer-Neumeier-Str.");
        break;
    }
    case 251158:
    {
        returnValue = F("Pfarrer-Neumeir-Str.");
        break;
    }
    case 251159:
    {
        returnValue = F("Pfarrer-Neumeyr-Str.");
        break;
    }
    case 251160:
    {
        returnValue = F("Pfarrer-Neunzig-Str.");
        break;
    }
    case 251161:
    {
        returnValue = F("Pfarrer-Neuroth-Str.");
        break;
    }
    case 251162:
    {
        returnValue = F("Pfarrer-Neuy-Gasse");
        break;
    }
    case 251163:
    {
        returnValue = F("Pfarrer-Nick-Str.");
        break;
    }
    case 251164:
    {
        returnValue = F("Pfarrer-Nicolai-Str.");
        break;
    }
    case 251165:
    {
        returnValue = F("Pfarrer-Niederhuber-Str.");
        break;
    }
    case 251166:
    {
        returnValue = F("Pfarrer-Niedermeier-Str.");
        break;
    }
    case 251167:
    {
        returnValue = F("Pfarrer-Niesert-Str.");
        break;
    }
    case 251168:
    {
        returnValue = F("Pfarrer-Niewind-Str.");
        break;
    }
    case 251169:
    {
        returnValue = F("Pfarrer-Nigge-Str.");
        break;
    }
    case 251170:
    {
        returnValue = F("Pfarrer-Nikolaus-Str.");
        break;
    }
    case 251171:
    {
        returnValue = F("Pfarrer-Ninck-Weg");
        break;
    }
    case 251172:
    {
        returnValue = F("Pfarrer-Nißl-Str.");
        break;
    }
    case 251173:
    {
        returnValue = F("Pfarrer-Noderer-Weg");
        break;
    }
    case 251174:
    {
        returnValue = F("Pfarrer-Noll-Weg");
        break;
    }
    case 251175:
    {
        returnValue = F("Pfarrer-Nonhoff-Str.");
        break;
    }
    case 251176:
    {
        returnValue = F("Pfarrer-Nonn-Str.");
        break;
    }
    case 251177:
    {
        returnValue = F("Pfarrer-Nussbaum-Str.");
        break;
    }
    case 251178:
    {
        returnValue = F("Pfarrer-Nömeier-Weg");
        break;
    }
    case 251179:
    {
        returnValue = F("Pfarrer-Obendorfer-Weg");
        break;
    }
    case 251180:
    {
        returnValue = F("Pfarrer-Oberlinner-Str.");
        break;
    }
    case 251181:
    {
        returnValue = F("Pfarrer-Obermeier-Str.");
        break;
    }
    case 251182:
    {
        returnValue = F("Pfarrer-Oden-Str.");
        break;
    }
    case 251183:
    {
        returnValue = F("Pfarrer-Oeftering-Str.");
        break;
    }
    case 251184:
    {
        returnValue = F("Pfarrer-Oldenburg-Str.");
        break;
    }
    case 251185:
    {
        returnValue = F("Pfarrer-Opielka-Str.");
        break;
    }
    case 251186:
    {
        returnValue = F("Pfarrer-Orgaß-Stiege");
        break;
    }
    case 251187:
    {
        returnValue = F("Pfarrer-Ort-Str.");
        break;
    }
    case 251188:
    {
        returnValue = F("Pfarrer-Orth-Weg");
        break;
    }
    case 251189:
    {
        returnValue = F("Pfarrer-Ortner-Str.");
        break;
    }
    case 251190:
    {
        returnValue = F("Pfarrer-Ossemann-Str.");
        break;
    }
    case 251191:
    {
        returnValue = F("Pfarrer-Ostermayr-Str.");
        break;
    }
    case 251192:
    {
        returnValue = F("Pfarrer-Osthaus-Str.");
        break;
    }
    case 251193:
    {
        returnValue = F("Pfarrer-Ostwald-Str.");
        break;
    }
    case 251194:
    {
        returnValue = F("Pfarrer-Othmar-Abel-Str.");
        break;
    }
    case 251195:
    {
        returnValue = F("Pfarrer-Ott-Str.");
        break;
    }
    case 251196:
    {
        returnValue = F("Pfarrer-Otterbein-Str.");
        break;
    }
    case 251197:
    {
        returnValue = F("Pfarrer-Otto-Moser-Weg");
        break;
    }
    case 251198:
    {
        returnValue = F("Pfarrer-Otto-Reinhardt-Str.");
        break;
    }
    case 251199:
    {
        returnValue = F("Pfarrer-Otto_Storg-Str.");
        break;
    }
    case 251200:
    {
        returnValue = F("Pfarrer-P.-Richter-Weg");
        break;
    }
    case 251201:
    {
        returnValue = F("Pfarrer-Palm-Str.");
        break;
    }
    case 251202:
    {
        returnValue = F("Pfarrer-Papon-Str.");
        break;
    }
    case 251203:
    {
        returnValue = F("Pfarrer-Paul-Huhnen-Str.");
        break;
    }
    case 251204:
    {
        returnValue = F("Pfarrer-Paul-Nützel-Str.");
        break;
    }
    case 251205:
    {
        returnValue = F("Pfarrer-Pensky-Weg");
        break;
    }
    case 251206:
    {
        returnValue = F("Pfarrer-Pesch-Str.");
        break;
    }
    case 251207:
    {
        returnValue = F("Pfarrer-Peter-Str.");
        break;
    }
    case 251208:
    {
        returnValue = F("Pfarrer-Petrul-Weg");
        break;
    }
    case 251209:
    {
        returnValue = F("Pfarrer-Petter-Weg");
        break;
    }
    case 251210:
    {
        returnValue = F("Pfarrer-Pfenning-Weg");
        break;
    }
    case 251211:
    {
        returnValue = F("Pfarrer-Pfisterer-Str.");
        break;
    }
    case 251212:
    {
        returnValue = F("Pfarrer-Pflaum-Str.");
        break;
    }
    case 251213:
    {
        returnValue = F("Pfarrer-Pflugfelder-Weg");
        break;
    }
    case 251214:
    {
        returnValue = F("Pfarrer-Pflüger-Str.");
        break;
    }
    case 251215:
    {
        returnValue = F("Pfarrer-Philipp-Str.");
        break;
    }
    case 251216:
    {
        returnValue = F("Pfarrer-Pichler-Str.");
        break;
    }
    case 251217:
    {
        returnValue = F("Pfarrer-Piel-Str.");
        break;
    }
    case 251218:
    {
        returnValue = F("Pfarrer-Pilz-Str.");
        break;
    }
    case 251219:
    {
        returnValue = F("Pfarrer-Pitzek-Str.");
        break;
    }
    case 251220:
    {
        returnValue = F("Pfarrer-Plaß-Weg");
        break;
    }
    case 251221:
    {
        returnValue = F("Pfarrer-Plecher-Str.");
        break;
    }
    case 251222:
    {
        returnValue = F("Pfarrer-Plenker-Weg");
        break;
    }
    case 251223:
    {
        returnValue = F("Pfarrer-Pleus-Str.");
        break;
    }
    case 251224:
    {
        returnValue = F("Pfarrer-Pohl-Str.");
        break;
    }
    case 251225:
    {
        returnValue = F("Pfarrer-Poiger-Str.");
        break;
    }
    case 251226:
    {
        returnValue = F("Pfarrer-Pongratz-Str.");
        break;
    }
    case 251227:
    {
        returnValue = F("Pfarrer-Portenlänger-Platz");
        break;
    }
    case 251228:
    {
        returnValue = F("Pfarrer-Porz-Str.");
        break;
    }
    case 251229:
    {
        returnValue = F("Pfarrer-Prechtl-Str.");
        break;
    }
    case 251230:
    {
        returnValue = F("Pfarrer-Preu-Str.");
        break;
    }
    case 251231:
    {
        returnValue = F("Pfarrer-Pritscher-Str.");
        break;
    }
    case 251232:
    {
        returnValue = F("Pfarrer-Prokein-Str.");
        break;
    }
    case 251233:
    {
        returnValue = F("Pfarrer-Prümers-Str.");
        break;
    }
    case 251234:
    {
        returnValue = F("Pfarrer-Pusch-Str.");
        break;
    }
    case 251235:
    {
        returnValue = F("Pfarrer-Pörtner-Str.");
        break;
    }
    case 251236:
    {
        returnValue = F("Pfarrer-Pütz-Str.");
        break;
    }
    case 251237:
    {
        returnValue = F("Pfarrer-Quade-Weg");
        break;
    }
    case 251238:
    {
        returnValue = F("Pfarrer-Raab-Str.");
        break;
    }
    case 251239:
    {
        returnValue = F("Pfarrer-Radecker-Weg");
        break;
    }
    case 251240:
    {
        returnValue = F("Pfarrer-Rademacher-Str.");
        break;
    }
    case 251241:
    {
        returnValue = F("Pfarrer-Radler-Str.");
        break;
    }
    case 251242:
    {
        returnValue = F("Pfarrer-Raich-Str.");
        break;
    }
    case 251243:
    {
        returnValue = F("Pfarrer-Raifel-Weg");
        break;
    }
    case 251244:
    {
        returnValue = F("Pfarrer-Ramold-Str.");
        break;
    }
    case 251245:
    {
        returnValue = F("Pfarrer-Rankl-Str.");
        break;
    }
    case 251246:
    {
        returnValue = F("Pfarrer-Raquot-Str.");
        break;
    }
    case 251247:
    {
        returnValue = F("Pfarrer-Rauscher Str.");
        break;
    }
    case 251248:
    {
        returnValue = F("Pfarrer-Reeß-Str.");
        break;
    }
    case 251249:
    {
        returnValue = F("Pfarrer-Rehrl-Str.");
        break;
    }
    case 251250:
    {
        returnValue = F("Pfarrer-Reich-Str.");
        break;
    }
    case 251251:
    {
        returnValue = F("Pfarrer-Reiche-Str.");
        break;
    }
    case 251252:
    {
        returnValue = F("Pfarrer-Reichl-Str.");
        break;
    }
    case 251253:
    {
        returnValue = F("Pfarrer-Reiff-Str.");
        break;
    }
    case 251254:
    {
        returnValue = F("Pfarrer-Reinartz-Str.");
        break;
    }
    case 251255:
    {
        returnValue = F("Pfarrer-Reinauer-Weg");
        break;
    }
    case 251256:
    {
        returnValue = F("Pfarrer-Reindl-Str.");
        break;
    }
    case 251257:
    {
        returnValue = F("Pfarrer-Reindl-Weg");
        break;
    }
    case 251258:
    {
        returnValue = F("Pfarrer-Reinhard-Str.");
        break;
    }
    case 251259:
    {
        returnValue = F("Pfarrer-Reis-Str.");
        break;
    }
    case 251260:
    {
        returnValue = F("Pfarrer-Reiser-Str.");
        break;
    }
    case 251261:
    {
        returnValue = F("Pfarrer-Reiss-Str.");
        break;
    }
    case 251262:
    {
        returnValue = F("Pfarrer-Reiter-Str.");
        break;
    }
    case 251263:
    {
        returnValue = F("Pfarrer-Reiter-Weg");
        break;
    }
    case 251264:
    {
        returnValue = F("Pfarrer-Reitter-Str.");
        break;
    }
    case 251265:
    {
        returnValue = F("Pfarrer-Reiz-Str.");
        break;
    }
    case 251266:
    {
        returnValue = F("Pfarrer-Rembold-Weg");
        break;
    }
    case 251267:
    {
        returnValue = F("Pfarrer-Renner-Str.");
        break;
    }
    case 251268:
    {
        returnValue = F("Pfarrer-Rennings-Weg");
        break;
    }
    case 251269:
    {
        returnValue = F("Pfarrer-Retzer-Str.");
        break;
    }
    case 251270:
    {
        returnValue = F("Pfarrer-Reuter-Str.");
        break;
    }
    case 251271:
    {
        returnValue = F("Pfarrer-Rheinl-Str.");
        break;
    }
    case 251272:
    {
        returnValue = F("Pfarrer-Rickert-Str.");
        break;
    }
    case 251273:
    {
        returnValue = F("Pfarrer-Riedmaier-Str.");
        break;
    }
    case 251274:
    {
        returnValue = F("Pfarrer-Ries-Str.");
        break;
    }
    case 251275:
    {
        returnValue = F("Pfarrer-Rieth-Str.");
        break;
    }
    case 251276:
    {
        returnValue = F("Pfarrer-Ritter-Str.");
        break;
    }
    case 251277:
    {
        returnValue = F("Pfarrer-Ritter-Weg");
        break;
    }
    case 251278:
    {
        returnValue = F("Pfarrer-Ritzinger-Str.");
        break;
    }
    case 251279:
    {
        returnValue = F("Pfarrer-Robens-Str.");
        break;
    }
    case 251280:
    {
        returnValue = F("Pfarrer-Robert-Grosche-Str.");
        break;
    }
    case 251281:
    {
        returnValue = F("Pfarrer-Robert-Kümmert-Str.");
        break;
    }
    case 251282:
    {
        returnValue = F("Pfarrer-Rody-Str.");
        break;
    }
    case 251283:
    {
        returnValue = F("Pfarrer-Roemheld-Str.");
        break;
    }
    case 251284:
    {
        returnValue = F("Pfarrer-Roerig-Str.");
        break;
    }
    case 251285:
    {
        returnValue = F("Pfarrer-Roeseneder-Str.");
        break;
    }
    case 251286:
    {
        returnValue = F("Pfarrer-Rosenhuber-Weg");
        break;
    }
    case 251287:
    {
        returnValue = F("Pfarrer-Rosenkranz-Str.");
        break;
    }
    case 251288:
    {
        returnValue = F("Pfarrer-Rost-Str.");
        break;
    }
    case 251289:
    {
        returnValue = F("Pfarrer-Rotter-Str.");
        break;
    }
    case 251290:
    {
        returnValue = F("Pfarrer-Rottler-Str.");
        break;
    }
    case 251291:
    {
        returnValue = F("Pfarrer-Roßkopf-Str.");
        break;
    }
    case 251292:
    {
        returnValue = F("Pfarrer-Rudolf-Hofmann-Str.");
        break;
    }
    case 251293:
    {
        returnValue = F("Pfarrer-Rudolf-Str.");
        break;
    }
    case 251294:
    {
        returnValue = F("Pfarrer-Rudolph-Str.");
        break;
    }
    case 251295:
    {
        returnValue = F("Pfarrer-Rudorfer-Weg");
        break;
    }
    case 251296:
    {
        returnValue = F("Pfarrer-Ruf-Str.");
        break;
    }
    case 251297:
    {
        returnValue = F("Pfarrer-Rug-Park");
        break;
    }
    case 251298:
    {
        returnValue = F("Pfarrer-Rumpf-Str.");
        break;
    }
    case 251299:
    {
        returnValue = F("Pfarrer-Rupprecht-Weg");
        break;
    }
    case 251300:
    {
        returnValue = F("Pfarrer-Rödelstürtz-Str.");
        break;
    }
    case 251301:
    {
        returnValue = F("Pfarrer-Röhr-Str.");
        break;
    }
    case 251302:
    {
        returnValue = F("Pfarrer-Rössle-Str.");
        break;
    }
    case 251303:
    {
        returnValue = F("Pfarrer-Rügamer-Str.");
        break;
    }
    case 251304:
    {
        returnValue = F("Pfarrer-Rühling-Str.");
        break;
    }
    case 251305:
    {
        returnValue = F("Pfarrer-Rüttling-Str.");
        break;
    }
    case 251306:
    {
        returnValue = F("Pfarrer-Sachsse-Str.");
        break;
    }
    case 251307:
    {
        returnValue = F("Pfarrer-Sage-Str.");
        break;
    }
    case 251308:
    {
        returnValue = F("Pfarrer-Saiko-Str.");
        break;
    }
    case 251309:
    {
        returnValue = F("Pfarrer-Sailer-Str.");
        break;
    }
    case 251310:
    {
        returnValue = F("Pfarrer-Sailer-Weg");
        break;
    }
    case 251311:
    {
        returnValue = F("Pfarrer-Sales-Baur-Str.");
        break;
    }
    case 251312:
    {
        returnValue = F("Pfarrer-Sandkühler-Str.");
        break;
    }
    case 251313:
    {
        returnValue = F("Pfarrer-Sardemann-Str.");
        break;
    }
    case 251314:
    {
        returnValue = F("Pfarrer-Sauerwald-Str.");
        break;
    }
    case 251315:
    {
        returnValue = F("Pfarrer-Schaaf-Str.");
        break;
    }
    case 251316:
    {
        returnValue = F("Pfarrer-Schacht-Str.");
        break;
    }
    case 251317:
    {
        returnValue = F("Pfarrer-Schaeble-Weg");
        break;
    }
    case 251318:
    {
        returnValue = F("Pfarrer-Schall-Str.");
        break;
    }
    case 251319:
    {
        returnValue = F("Pfarrer-Schaller-Str.");
        break;
    }
    case 251320:
    {
        returnValue = F("Pfarrer-Schanderl-Weg");
        break;
    }
    case 251321:
    {
        returnValue = F("Pfarrer-Schart-Str.");
        break;
    }
    case 251322:
    {
        returnValue = F("Pfarrer-Schatz-Str.");
        break;
    }
    case 251323:
    {
        returnValue = F("Pfarrer-Schedl-Str.");
        break;
    }
    case 251324:
    {
        returnValue = F("Pfarrer-Schedlbauer-Str.");
        break;
    }
    case 251325:
    {
        returnValue = F("Pfarrer-Scheeren-Str.");
        break;
    }
    case 251326:
    {
        returnValue = F("Pfarrer-Scheiber-Str.");
        break;
    }
    case 251327:
    {
        returnValue = F("Pfarrer-Scheichert-Ring");
        break;
    }
    case 251328:
    {
        returnValue = F("Pfarrer-Scheidt-Str.");
        break;
    }
    case 251329:
    {
        returnValue = F("Pfarrer-Schelauske-Weg");
        break;
    }
    case 251330:
    {
        returnValue = F("Pfarrer-Scherm-Weg");
        break;
    }
    case 251331:
    {
        returnValue = F("Pfarrer-Scherpf-Str.");
        break;
    }
    case 251332:
    {
        returnValue = F("Pfarrer-Scheuerer-Str.");
        break;
    }
    case 251333:
    {
        returnValue = F("Pfarrer-Schiegl-Str.");
        break;
    }
    case 251334:
    {
        returnValue = F("Pfarrer-Schiermeier-Str.");
        break;
    }
    case 251335:
    {
        returnValue = F("Pfarrer-Schilcher-Weg");
        break;
    }
    case 251336:
    {
        returnValue = F("Pfarrer-Schill-Str.");
        break;
    }
    case 251337:
    {
        returnValue = F("Pfarrer-Schiller-Str.");
        break;
    }
    case 251338:
    {
        returnValue = F("Pfarrer-Schindele-Str.");
        break;
    }
    case 251339:
    {
        returnValue = F("Pfarrer-Schips-Weg");
        break;
    }
    case 251340:
    {
        returnValue = F("Pfarrer-Schirmer-Str.");
        break;
    }
    case 251341:
    {
        returnValue = F("Pfarrer-Schlaipfer-Weg");
        break;
    }
    case 251342:
    {
        returnValue = F("Pfarrer-Schlegler-Str.");
        break;
    }
    case 251343:
    {
        returnValue = F("Pfarrer-Schlich-Str.");
        break;
    }
    case 251344:
    {
        returnValue = F("Pfarrer-Schlicht-Str.");
        break;
    }
    case 251345:
    {
        returnValue = F("Pfarrer-Schlichting-Str.");
        break;
    }
    case 251346:
    {
        returnValue = F("Pfarrer-Schlick-Str.");
        break;
    }
    case 251347:
    {
        returnValue = F("Pfarrer-Schliermann-Weg");
        break;
    }
    case 251348:
    {
        returnValue = F("Pfarrer-Schlottmann-Str.");
        break;
    }
    case 251349:
    {
        returnValue = F("Pfarrer-Schlund-Weg");
        break;
    }
    case 251350:
    {
        returnValue = F("Pfarrer-Schmalhofer-Str.");
        break;
    }
    case 251351:
    {
        returnValue = F("Pfarrer-Schmalohr-Str.");
        break;
    }
    case 251352:
    {
        returnValue = F("Pfarrer-Schmeißer-Str.");
        break;
    }
    case 251353:
    {
        returnValue = F("Pfarrer-Schmid-Gasse");
        break;
    }
    case 251354:
    {
        returnValue = F("Pfarrer-Schmid-Str.");
        break;
    }
    case 251355:
    {
        returnValue = F("Pfarrer-Schmid-Weg");
        break;
    }
    case 251356:
    {
        returnValue = F("Pfarrer-Schmider-Weg");
        break;
    }
    case 251357:
    {
        returnValue = F("Pfarrer-Schmidl-Str.");
        break;
    }
    case 251358:
    {
        returnValue = F("Pfarrer-Schmidt-Str.");
        break;
    }
    case 251359:
    {
        returnValue = F("Pfarrer-Schmitt-Str.");
        break;
    }
    case 251360:
    {
        returnValue = F("Pfarrer-Schmitter-Str.");
        break;
    }
    case 251361:
    {
        returnValue = F("Pfarrer-Schmitz-Weg");
        break;
    }
    case 251362:
    {
        returnValue = F("Pfarrer-Schmöller-Str.");
        break;
    }
    case 251363:
    {
        returnValue = F("Pfarrer-Schnall-Str.");
        break;
    }
    case 251364:
    {
        returnValue = F("Pfarrer-Schneider-Str.");
        break;
    }
    case 251365:
    {
        returnValue = F("Pfarrer-Schneider-Weg");
        break;
    }
    case 251366:
    {
        returnValue = F("Pfarrer-Schnell-Weg");
        break;
    }
    case 251367:
    {
        returnValue = F("Pfarrer-Schniers-Str.");
        break;
    }
    case 251368:
    {
        returnValue = F("Pfarrer-Schniers-Weg");
        break;
    }
    case 251369:
    {
        returnValue = F("Pfarrer-Schnirle-Str.");
        break;
    }
    case 251370:
    {
        returnValue = F("Pfarrer-Schnitzler-Str.");
        break;
    }
    case 251371:
    {
        returnValue = F("Pfarrer-Schober-Ring");
        break;
    }
    case 251372:
    {
        returnValue = F("Pfarrer-Scholl-Weg");
        break;
    }
    case 251373:
    {
        returnValue = F("Pfarrer-Schonath-Str.");
        break;
    }
    case 251374:
    {
        returnValue = F("Pfarrer-Schott-Str.");
        break;
    }
    case 251375:
    {
        returnValue = F("Pfarrer-Schotte-Str.");
        break;
    }
    case 251376:
    {
        returnValue = F("Pfarrer-Schraml-Str.");
        break;
    }
    case 251377:
    {
        returnValue = F("Pfarrer-Schreiber-Str.");
        break;
    }
    case 251378:
    {
        returnValue = F("Pfarrer-Schreiner-Str.");
        break;
    }
    case 251379:
    {
        returnValue = F("Pfarrer-Schreyer-Str.");
        break;
    }
    case 251380:
    {
        returnValue = F("Pfarrer-Schroll-Str.");
        break;
    }
    case 251381:
    {
        returnValue = F("Pfarrer-Schröer-Weg");
        break;
    }
    case 251382:
    {
        returnValue = F("Pfarrer-Schuhmann-Str.");
        break;
    }
    case 251383:
    {
        returnValue = F("Pfarrer-Schultes-Weg");
        break;
    }
    case 251384:
    {
        returnValue = F("Pfarrer-Schultze-Str.");
        break;
    }
    case 251385:
    {
        returnValue = F("Pfarrer-Schupmann-Str.");
        break;
    }
    case 251386:
    {
        returnValue = F("Pfarrer-Schwab-Weg");
        break;
    }
    case 251387:
    {
        returnValue = F("Pfarrer-Schwahn-Str.");
        break;
    }
    case 251388:
    {
        returnValue = F("Pfarrer-Schwarz-Str.");
        break;
    }
    case 251389:
    {
        returnValue = F("Pfarrer-Schwarzbauer-Str.");
        break;
    }
    case 251390:
    {
        returnValue = F("Pfarrer-Schweigart-Str.");
        break;
    }
    case 251391:
    {
        returnValue = F("Pfarrer-Schweiger-Str.");
        break;
    }
    case 251392:
    {
        returnValue = F("Pfarrer-Schweikl-Str.");
        break;
    }
    case 251393:
    {
        returnValue = F("Pfarrer-Schweinfest-Platz");
        break;
    }
    case 251394:
    {
        returnValue = F("Pfarrer-Schwertfirm-Platz");
        break;
    }
    case 251395:
    {
        returnValue = F("Pfarrer-Schwäbl-Str.");
        break;
    }
    case 251396:
    {
        returnValue = F("Pfarrer-Schäfer-Weg");
        break;
    }
    case 251397:
    {
        returnValue = F("Pfarrer-Schöbel-Str.");
        break;
    }
    case 251398:
    {
        returnValue = F("Pfarrer-Schöberl-Str.");
        break;
    }
    case 251399:
    {
        returnValue = F("Pfarrer-Schödel-Str.");
        break;
    }
    case 251400:
    {
        returnValue = F("Pfarrer-Schütz-Str.");
        break;
    }
    case 251401:
    {
        returnValue = F("Pfarrer-Scriba-Str.");
        break;
    }
    case 251402:
    {
        returnValue = F("Pfarrer-Sebastian-Kneipp-Weg");
        break;
    }
    case 251403:
    {
        returnValue = F("Pfarrer-Sedlmaier-Weg");
        break;
    }
    case 251404:
    {
        returnValue = F("Pfarrer-Seeger-Str.");
        break;
    }
    case 251405:
    {
        returnValue = F("Pfarrer-Seehofer-Weg");
        break;
    }
    case 251406:
    {
        returnValue = F("Pfarrer-Seel-Str.");
        break;
    }
    case 251407:
    {
        returnValue = F("Pfarrer-Seger-Weg");
        break;
    }
    case 251408:
    {
        returnValue = F("Pfarrer-Segmiller-Weg");
        break;
    }
    case 251409:
    {
        returnValue = F("Pfarrer-Seiberz-Str.");
        break;
    }
    case 251410:
    {
        returnValue = F("Pfarrer-Seidl-Str.");
        break;
    }
    case 251411:
    {
        returnValue = F("Pfarrer-Seif-Weg");
        break;
    }
    case 251412:
    {
        returnValue = F("Pfarrer-Seiler-Str.");
        break;
    }
    case 251413:
    {
        returnValue = F("Pfarrer-Seippel-Platz");
        break;
    }
    case 251414:
    {
        returnValue = F("Pfarrer-Seippel-Str.");
        break;
    }
    case 251415:
    {
        returnValue = F("Pfarrer-Seither-Weg");
        break;
    }
    case 251416:
    {
        returnValue = F("Pfarrer-Seitzer-Weg");
        break;
    }
    case 251417:
    {
        returnValue = F("Pfarrer-Sellmaier-Str.");
        break;
    }
    case 251418:
    {
        returnValue = F("Pfarrer-Sely-Str.");
        break;
    }
    case 251419:
    {
        returnValue = F("Pfarrer-Sesterhenn-Str.");
        break;
    }
    case 251420:
    {
        returnValue = F("Pfarrer-Settele-Str.");
        break;
    }
    case 251421:
    {
        returnValue = F("Pfarrer-Settele-Weg");
        break;
    }
    case 251422:
    {
        returnValue = F("Pfarrer-Seubert-Str.");
        break;
    }
    case 251423:
    {
        returnValue = F("Pfarrer-Seufert-Str.");
        break;
    }
    case 251424:
    {
        returnValue = F("Pfarrer-Severus-Str.");
        break;
    }
    case 251425:
    {
        returnValue = F("Pfarrer-Sickler-Weg");
        break;
    }
    case 251426:
    {
        returnValue = F("Pfarrer-Sieger-Str.");
        break;
    }
    case 251427:
    {
        returnValue = F("Pfarrer-Simon-Huber-Str.");
        break;
    }
    case 251428:
    {
        returnValue = F("Pfarrer-Sing-Str.");
        break;
    }
    case 251429:
    {
        returnValue = F("Pfarrer-Singer-Str.");
        break;
    }
    case 251430:
    {
        returnValue = F("Pfarrer-Sinseder-Weg");
        break;
    }
    case 251431:
    {
        returnValue = F("Pfarrer-Sirl-Str.");
        break;
    }
    case 251432:
    {
        returnValue = F("Pfarrer-Sixt-Str.");
        break;
    }
    case 251433:
    {
        returnValue = F("Pfarrer-Smeddinck-Str.");
        break;
    }
    case 251434:
    {
        returnValue = F("Pfarrer-Socher-Str.");
        break;
    }
    case 251435:
    {
        returnValue = F("Pfarrer-Sommer-Str.");
        break;
    }
    case 251436:
    {
        returnValue = F("Pfarrer-Sonnenberger-Str.");
        break;
    }
    case 251437:
    {
        returnValue = F("Pfarrer-Sonntag-Str.");
        break;
    }
    case 251438:
    {
        returnValue = F("Pfarrer-Speinle-Str.");
        break;
    }
    case 251439:
    {
        returnValue = F("Pfarrer-Spielmann-Str.");
        break;
    }
    case 251440:
    {
        returnValue = F("Pfarrer-Spießl-Str.");
        break;
    }
    case 251441:
    {
        returnValue = F("Pfarrer-Spirkner-Str.");
        break;
    }
    case 251442:
    {
        returnValue = F("Pfarrer-Spreng-Str.");
        break;
    }
    case 251443:
    {
        returnValue = F("Pfarrer-Spülbeck-Str.");
        break;
    }
    case 251444:
    {
        returnValue = F("Pfarrer-Stadler-Str.");
        break;
    }
    case 251445:
    {
        returnValue = F("Pfarrer-Stahl-Str.");
        break;
    }
    case 251446:
    {
        returnValue = F("Pfarrer-Staiger-Str.");
        break;
    }
    case 251447:
    {
        returnValue = F("Pfarrer-Stark-Str.");
        break;
    }
    case 251448:
    {
        returnValue = F("Pfarrer-Starostzik-Str.");
        break;
    }
    case 251449:
    {
        returnValue = F("Pfarrer-Stauf-Str.");
        break;
    }
    case 251450:
    {
        returnValue = F("Pfarrer-Steeb-Weg");
        break;
    }
    case 251451:
    {
        returnValue = F("Pfarrer-Steffens-Ring");
        break;
    }
    case 251452:
    {
        returnValue = F("Pfarrer-Stein-Str.");
        break;
    }
    case 251453:
    {
        returnValue = F("Pfarrer-Steinacker-Str.");
        break;
    }
    case 251454:
    {
        returnValue = F("Pfarrer-Steinbach-Siedlung");
        break;
    }
    case 251455:
    {
        returnValue = F("Pfarrer-Steinberger-Str.");
        break;
    }
    case 251456:
    {
        returnValue = F("Pfarrer-Steiner-Str.");
        break;
    }
    case 251457:
    {
        returnValue = F("Pfarrer-Steinhauser-Str.");
        break;
    }
    case 251458:
    {
        returnValue = F("Pfarrer-Steinmetz-Str.");
        break;
    }
    case 251459:
    {
        returnValue = F("Pfarrer-Steinrath-Str.");
        break;
    }
    case 251460:
    {
        returnValue = F("Pfarrer-Stelzer-Str.");
        break;
    }
    case 251461:
    {
        returnValue = F("Pfarrer-Stelzl-Ring");
        break;
    }
    case 251462:
    {
        returnValue = F("Pfarrer-Stelzl-Str.");
        break;
    }
    case 251463:
    {
        returnValue = F("Pfarrer-Sterner-Str.");
        break;
    }
    case 251464:
    {
        returnValue = F("Pfarrer-Stingl-Str.");
        break;
    }
    case 251465:
    {
        returnValue = F("Pfarrer-Stirner-Str.");
        break;
    }
    case 251466:
    {
        returnValue = F("Pfarrer-Stock-Weg");
        break;
    }
    case 251467:
    {
        returnValue = F("Pfarrer-Stockheimer-Str.");
        break;
    }
    case 251468:
    {
        returnValue = F("Pfarrer-Stoll-Str.");
        break;
    }
    case 251469:
    {
        returnValue = F("Pfarrer-Stortz-Str.");
        break;
    }
    case 251470:
    {
        returnValue = F("Pfarrer-Str.r-Weg");
        break;
    }
    case 251471:
    {
        returnValue = F("Pfarrer-Strakerjahn-Weg");
        break;
    }
    case 251472:
    {
        returnValue = F("Pfarrer-Strasser-Weg");
        break;
    }
    case 251473:
    {
        returnValue = F("Pfarrer-Stratmann-Str.");
        break;
    }
    case 251474:
    {
        returnValue = F("Pfarrer-Straub-Str.");
        break;
    }
    case 251475:
    {
        returnValue = F("Pfarrer-Strauß-Str.");
        break;
    }
    case 251476:
    {
        returnValue = F("Pfarrer-Strauß-Weg");
        break;
    }
    case 251477:
    {
        returnValue = F("Pfarrer-Straßl-Weg");
        break;
    }
    case 251478:
    {
        returnValue = F("Pfarrer-Streit-Str.");
        break;
    }
    case 251479:
    {
        returnValue = F("Pfarrer-Strerath-Str.");
        break;
    }
    case 251480:
    {
        returnValue = F("Pfarrer-Striebel-Weg");
        break;
    }
    case 251481:
    {
        returnValue = F("Pfarrer-Strittmatter-Weg");
        break;
    }
    case 251482:
    {
        returnValue = F("Pfarrer-Strobl-Str.");
        break;
    }
    case 251483:
    {
        returnValue = F("Pfarrer-Strohhammer-Str.");
        break;
    }
    case 251484:
    {
        returnValue = F("Pfarrer-Ströhl-Str.");
        break;
    }
    case 251485:
    {
        returnValue = F("Pfarrer-Ströll-Str.");
        break;
    }
    case 251486:
    {
        returnValue = F("Pfarrer-Stufler-Ring");
        break;
    }
    case 251487:
    {
        returnValue = F("Pfarrer-Stumpf-Weg");
        break;
    }
    case 251488:
    {
        returnValue = F("Pfarrer-Sturm-Str.");
        break;
    }
    case 251489:
    {
        returnValue = F("Pfarrer-Sturmfels-Weg");
        break;
    }
    case 251490:
    {
        returnValue = F("Pfarrer-Stöttner-Str.");
        break;
    }
    case 251491:
    {
        returnValue = F("Pfarrer-Suchner-Weg");
        break;
    }
    case 251492:
    {
        returnValue = F("Pfarrer-Söller-Platz");
        break;
    }
    case 251493:
    {
        returnValue = F("Pfarrer-Tausend-Platz");
        break;
    }
    case 251494:
    {
        returnValue = F("Pfarrer-Teeke-Weg");
        break;
    }
    case 251495:
    {
        returnValue = F("Pfarrer-Tegetoff-Str.");
        break;
    }
    case 251496:
    {
        returnValue = F("Pfarrer-Tempel-Str.");
        break;
    }
    case 251497:
    {
        returnValue = F("Pfarrer-Thaurer-Str.");
        break;
    }
    case 251498:
    {
        returnValue = F("Pfarrer-Theis-Str.");
        break;
    }
    case 251499:
    {
        returnValue = F("Pfarrer-Theiss-Str.");
        break;
    }
    case 251500:
    {
        returnValue = F("Pfarrer-Theodor-Schlechter-Str.");
        break;
    }
    case 251501:
    {
        returnValue = F("Pfarrer-Thewes-Str.");
        break;
    }
    case 251502:
    {
        returnValue = F("Pfarrer-Thiebaut-Str.");
        break;
    }
    case 251503:
    {
        returnValue = F("Pfarrer-Thielen-Str.");
        break;
    }
    case 251504:
    {
        returnValue = F("Pfarrer-Thimm-Weg");
        break;
    }
    case 251505:
    {
        returnValue = F("Pfarrer-Tholen-Str.");
        break;
    }
    case 251506:
    {
        returnValue = F("Pfarrer-Thomas-Str.");
        break;
    }
    case 251507:
    {
        returnValue = F("Pfarrer-Thomson-Str.");
        break;
    }
    case 251508:
    {
        returnValue = F("Pfarrer-Thomé-Str.");
        break;
    }
    case 251509:
    {
        returnValue = F("Pfarrer-Thurmeier-Str.");
        break;
    }
    case 251510:
    {
        returnValue = F("Pfarrer-Thurnreiter-Str.");
        break;
    }
    case 251511:
    {
        returnValue = F("Pfarrer-Tirtey-Str.");
        break;
    }
    case 251512:
    {
        returnValue = F("Pfarrer-Tischer-Str.");
        break;
    }
    case 251513:
    {
        returnValue = F("Pfarrer-Tischler-Str.");
        break;
    }
    case 251514:
    {
        returnValue = F("Pfarrer-Tremel-Weg");
        break;
    }
    case 251515:
    {
        returnValue = F("Pfarrer-Trimbach-Str.");
        break;
    }
    case 251516:
    {
        returnValue = F("Pfarrer-Tritschler-Str.");
        break;
    }
    case 251517:
    {
        returnValue = F("Pfarrer-Trockel-Pättken");
        break;
    }
    case 251518:
    {
        returnValue = F("Pfarrer-Trost-Str.");
        break;
    }
    case 251519:
    {
        returnValue = F("Pfarrer-Türk-Platz");
        break;
    }
    case 251520:
    {
        returnValue = F("Pfarrer-Uhl-Str.");
        break;
    }
    case 251521:
    {
        returnValue = F("Pfarrer-Uhl-Weg");
        break;
    }
    case 251522:
    {
        returnValue = F("Pfarrer-Uihlein-Str.");
        break;
    }
    case 251523:
    {
        returnValue = F("Pfarrer-Ulaga-Str.");
        break;
    }
    case 251524:
    {
        returnValue = F("Pfarrer-Ulmer-Str.");
        break;
    }
    case 251525:
    {
        returnValue = F("Pfarrer-Urban-Str.");
        break;
    }
    case 251526:
    {
        returnValue = F("Pfarrer-Utz-Str.");
        break;
    }
    case 251527:
    {
        returnValue = F("Pfarrer-Vatter-Str.");
        break;
    }
    case 251528:
    {
        returnValue = F("Pfarrer-Vehmeyer-Str.");
        break;
    }
    case 251529:
    {
        returnValue = F("Pfarrer-Veicht-Str.");
        break;
    }
    case 251530:
    {
        returnValue = F("Pfarrer-Veit-Str.");
        break;
    }
    case 251531:
    {
        returnValue = F("Pfarrer-Veller-Str.");
        break;
    }
    case 251532:
    {
        returnValue = F("Pfarrer-Venus-Str.");
        break;
    }
    case 251533:
    {
        returnValue = F("Pfarrer-Vesenmayer-Str.");
        break;
    }
    case 251534:
    {
        returnValue = F("Pfarrer-Vetter-Str.");
        break;
    }
    case 251535:
    {
        returnValue = F("Pfarrer-Vietzke-Str.");
        break;
    }
    case 251536:
    {
        returnValue = F("Pfarrer-Vinzent-Str.");
        break;
    }
    case 251537:
    {
        returnValue = F("Pfarrer-Vogel-Str.");
        break;
    }
    case 251538:
    {
        returnValue = F("Pfarrer-Vogg-Str.");
        break;
    }
    case 251539:
    {
        returnValue = F("Pfarrer-Vogler-Str.");
        break;
    }
    case 251540:
    {
        returnValue = F("Pfarrer-Voglmeier-Str.");
        break;
    }
    case 251541:
    {
        returnValue = F("Pfarrer-Vogt-Str.");
        break;
    }
    case 251542:
    {
        returnValue = F("Pfarrer-Voigt-Platz");
        break;
    }
    case 251543:
    {
        returnValue = F("Pfarrer-Voith-Str.");
        break;
    }
    case 251544:
    {
        returnValue = F("Pfarrer-Volk-Str.");
        break;
    }
    case 251545:
    {
        returnValue = F("Pfarrer-Vollmar-Weg");
        break;
    }
    case 251546:
    {
        returnValue = F("Pfarrer-Volz-Str.");
        break;
    }
    case 251547:
    {
        returnValue = F("Pfarrer-Voßen-Platz");
        break;
    }
    case 251548:
    {
        returnValue = F("Pfarrer-Völk-Str.");
        break;
    }
    case 251549:
    {
        returnValue = F("Pfarrer-Vöst-Weg");
        break;
    }
    case 251550:
    {
        returnValue = F("Pfarrer-Wachsmann-Str.");
        break;
    }
    case 251551:
    {
        returnValue = F("Pfarrer-Wachtel-Str.");
        break;
    }
    case 251552:
    {
        returnValue = F("Pfarrer-Wachten-Str.");
        break;
    }
    case 251553:
    {
        returnValue = F("Pfarrer-Wachter-Str.");
        break;
    }
    case 251554:
    {
        returnValue = F("Pfarrer-Wacker-Str.");
        break;
    }
    case 251555:
    {
        returnValue = F("Pfarrer-Wagner-Str.");
        break;
    }
    case 251556:
    {
        returnValue = F("Pfarrer-Wahner-Weg");
        break;
    }
    case 251557:
    {
        returnValue = F("Pfarrer-Wahr-Weg");
        break;
    }
    case 251558:
    {
        returnValue = F("Pfarrer-Waldbaur-Weg");
        break;
    }
    case 251559:
    {
        returnValue = F("Pfarrer-Waldhier-Str.");
        break;
    }
    case 251560:
    {
        returnValue = F("Pfarrer-Waldmann-Str.");
        break;
    }
    case 251561:
    {
        returnValue = F("Pfarrer-Walk-Str.");
        break;
    }
    case 251562:
    {
        returnValue = F("Pfarrer-Walser-Str.");
        break;
    }
    case 251563:
    {
        returnValue = F("Pfarrer-Walter-Str.");
        break;
    }
    case 251564:
    {
        returnValue = F("Pfarrer-Walter-Weg");
        break;
    }
    case 251565:
    {
        returnValue = F("Pfarrer-Warganz-Str.");
        break;
    }
    case 251566:
    {
        returnValue = F("Pfarrer-Wasmaier-Str.");
        break;
    }
    case 251567:
    {
        returnValue = F("Pfarrer-Weber-Str.");
        break;
    }
    case 251568:
    {
        returnValue = F("Pfarrer-Weber-Weg");
        break;
    }
    case 251569:
    {
        returnValue = F("Pfarrer-Weeger-Str.");
        break;
    }
    case 251570:
    {
        returnValue = F("Pfarrer-Weidenauer-Str.");
        break;
    }
    case 251571:
    {
        returnValue = F("Pfarrer-Weigand-Weg");
        break;
    }
    case 251572:
    {
        returnValue = F("Pfarrer-Weigl-Str.");
        break;
    }
    case 251573:
    {
        returnValue = F("Pfarrer-Weimert-Str.");
        break;
    }
    case 251574:
    {
        returnValue = F("Pfarrer-Weineck-Platz");
        break;
    }
    case 251575:
    {
        returnValue = F("Pfarrer-Weingand-Str.");
        break;
    }
    case 251576:
    {
        returnValue = F("Pfarrer-Weinmüller-Str.");
        break;
    }
    case 251577:
    {
        returnValue = F("Pfarrer-Weippert-Str.");
        break;
    }
    case 251578:
    {
        returnValue = F("Pfarrer-Weiser-Str.");
        break;
    }
    case 251579:
    {
        returnValue = F("Pfarrer-Weitzel-Weg");
        break;
    }
    case 251580:
    {
        returnValue = F("Pfarrer-Weiß-Str.");
        break;
    }
    case 251581:
    {
        returnValue = F("Pfarrer-Weiß-Weg");
        break;
    }
    case 251582:
    {
        returnValue = F("Pfarrer-Weißenberger-Str.");
        break;
    }
    case 251583:
    {
        returnValue = F("Pfarrer-Weißenfeld-Str.");
        break;
    }
    case 251584:
    {
        returnValue = F("Pfarrer-Weißer-Weg");
        break;
    }
    case 251585:
    {
        returnValue = F("Pfarrer-Wekenborg-Str.");
        break;
    }
    case 251586:
    {
        returnValue = F("Pfarrer-Wellingmeyer-Str.");
        break;
    }
    case 251587:
    {
        returnValue = F("Pfarrer-Welser-Weg");
        break;
    }
    case 251588:
    {
        returnValue = F("Pfarrer-Wendeler-Str.");
        break;
    }
    case 251589:
    {
        returnValue = F("Pfarrer-Wendl-Str.");
        break;
    }
    case 251590:
    {
        returnValue = F("Pfarrer-Wendland-Str.");
        break;
    }
    case 251591:
    {
        returnValue = F("Pfarrer-Wengler-Weg");
        break;
    }
    case 251592:
    {
        returnValue = F("Pfarrer-Wenninger Str.");
        break;
    }
    case 251593:
    {
        returnValue = F("Pfarrer-Wenninger-Str.");
        break;
    }
    case 251594:
    {
        returnValue = F("Pfarrer-Wensauer-Str.");
        break;
    }
    case 251595:
    {
        returnValue = F("Pfarrer-Wermelskirchen-Weg");
        break;
    }
    case 251596:
    {
        returnValue = F("Pfarrer-Werner-Mörchen-Str.");
        break;
    }
    case 251597:
    {
        returnValue = F("Pfarrer-Werr-Str.");
        break;
    }
    case 251598:
    {
        returnValue = F("Pfarrer-Weser-Str.");
        break;
    }
    case 251599:
    {
        returnValue = F("Pfarrer-Wesselinck-Str.");
        break;
    }
    case 251600:
    {
        returnValue = F("Pfarrer-Wessels-Str.");
        break;
    }
    case 251601:
    {
        returnValue = F("Pfarrer-Westermann-Weg");
        break;
    }
    case 251602:
    {
        returnValue = F("Pfarrer-Westermeier-Weg");
        break;
    }
    case 251603:
    {
        returnValue = F("Pfarrer-Wetz-Str.");
        break;
    }
    case 251604:
    {
        returnValue = F("Pfarrer-Wetzel-Str.");
        break;
    }
    case 251605:
    {
        returnValue = F("Pfarrer-Wetzler-Str.");
        break;
    }
    case 251606:
    {
        returnValue = F("Pfarrer-Weuster-Weg");
        break;
    }
    case 251607:
    {
        returnValue = F("Pfarrer-Weyrather-Str.");
        break;
    }
    case 251608:
    {
        returnValue = F("Pfarrer-Wichert-Str.");
        break;
    }
    case 251609:
    {
        returnValue = F("Pfarrer-Wiedemann-Str.");
        break;
    }
    case 251610:
    {
        returnValue = F("Pfarrer-Wiedemann-Weg");
        break;
    }
    case 251611:
    {
        returnValue = F("Pfarrer-Wiedenbrück-Str.");
        break;
    }
    case 251612:
    {
        returnValue = F("Pfarrer-Wiedmann-Weg");
        break;
    }
    case 251613:
    {
        returnValue = F("Pfarrer-Wiegel-Str.");
        break;
    }
    case 251614:
    {
        returnValue = F("Pfarrer-Wieland-Str.");
        break;
    }
    case 251615:
    {
        returnValue = F("Pfarrer-Wieslhuber-Str.");
        break;
    }
    case 251616:
    {
        returnValue = F("Pfarrer-Wiesmann-Str.");
        break;
    }
    case 251617:
    {
        returnValue = F("Pfarrer-Wigger-Weg");
        break;
    }
    case 251618:
    {
        returnValue = F("Pfarrer-Wild-Str.");
        break;
    }
    case 251619:
    {
        returnValue = F("Pfarrer-Wilhalm-Weg");
        break;
    }
    case 251620:
    {
        returnValue = F("Pfarrer-Wilhelm-Bechberger-Weg");
        break;
    }
    case 251621:
    {
        returnValue = F("Pfarrer-Wilhelm-Fischer-Str.");
        break;
    }
    case 251622:
    {
        returnValue = F("Pfarrer-Wilhelm-Str.");
        break;
    }
    case 251623:
    {
        returnValue = F("Pfarrer-Will-Platz");
        break;
    }
    case 251624:
    {
        returnValue = F("Pfarrer-Will-Str.");
        break;
    }
    case 251625:
    {
        returnValue = F("Pfarrer-Willkofer-Str.");
        break;
    }
    case 251626:
    {
        returnValue = F("Pfarrer-Willmes-Str.");
        break;
    }
    case 251627:
    {
        returnValue = F("Pfarrer-Willy-Heller-Weg");
        break;
    }
    case 251628:
    {
        returnValue = F("Pfarrer-Wilmerstaedt-Str.");
        break;
    }
    case 251629:
    {
        returnValue = F("Pfarrer-Wilms-Str.");
        break;
    }
    case 251630:
    {
        returnValue = F("Pfarrer-Wimberger-Str.");
        break;
    }
    case 251631:
    {
        returnValue = F("Pfarrer-Winand-Str.");
        break;
    }
    case 251632:
    {
        returnValue = F("Pfarrer-Winhart-Str.");
        break;
    }
    case 251633:
    {
        returnValue = F("Pfarrer-Winkler-Str.");
        break;
    }
    case 251634:
    {
        returnValue = F("Pfarrer-Winkler-Weg");
        break;
    }
    case 251635:
    {
        returnValue = F("Pfarrer-Winstetter-Str.");
        break;
    }
    case 251636:
    {
        returnValue = F("Pfarrer-Wirth-Str.");
        break;
    }
    case 251637:
    {
        returnValue = F("Pfarrer-Wissing-Str.");
        break;
    }
    case 251638:
    {
        returnValue = F("Pfarrer-Witt-Str.");
        break;
    }
    case 251639:
    {
        returnValue = F("Pfarrer-Witte-Str.");
        break;
    }
    case 251640:
    {
        returnValue = F("Pfarrer-Wittmann-Platz");
        break;
    }
    case 251641:
    {
        returnValue = F("Pfarrer-Wittmann-Str.");
        break;
    }
    case 251642:
    {
        returnValue = F("Pfarrer-Wißmath-Str.");
        break;
    }
    case 251643:
    {
        returnValue = F("Pfarrer-Wohl-Str.");
        break;
    }
    case 251644:
    {
        returnValue = F("Pfarrer-Wolf Str.");
        break;
    }
    case 251645:
    {
        returnValue = F("Pfarrer-Wolf-Str.");
        break;
    }
    case 251646:
    {
        returnValue = F("Pfarrer-Wolff-Str.");
        break;
    }
    case 251647:
    {
        returnValue = F("Pfarrer-Wolfgang-Breithaupt-Str.");
        break;
    }
    case 251648:
    {
        returnValue = F("Pfarrer-Wolfgruber-Str.");
        break;
    }
    case 251649:
    {
        returnValue = F("Pfarrer-Wolfinger-Weg");
        break;
    }
    case 251650:
    {
        returnValue = F("Pfarrer-Wolpert-Str.");
        break;
    }
    case 251651:
    {
        returnValue = F("Pfarrer-Wolsfelt-Str.");
        break;
    }
    case 251652:
    {
        returnValue = F("Pfarrer-Wolters-Ring");
        break;
    }
    case 251653:
    {
        returnValue = F("Pfarrer-Wunder-Str.");
        break;
    }
    case 251654:
    {
        returnValue = F("Pfarrer-Wurzer-Str.");
        break;
    }
    case 251655:
    {
        returnValue = F("Pfarrer-Wölfel-Str.");
        break;
    }
    case 251656:
    {
        returnValue = F("Pfarrer-Wörner-Str.");
        break;
    }
    case 251657:
    {
        returnValue = F("Pfarrer-Wörsching-Str.");
        break;
    }
    case 251658:
    {
        returnValue = F("Pfarrer-Wünnenberg-Str.");
        break;
    }
    case 251659:
    {
        returnValue = F("Pfarrer-Würth-Str.");
        break;
    }
    case 251660:
    {
        returnValue = F("Pfarrer-Wüst-Str.");
        break;
    }
    case 251661:
    {
        returnValue = F("Pfarrer-Wüst-Weg");
        break;
    }
    case 251662:
    {
        returnValue = F("Pfarrer-Zacher-Weg");
        break;
    }
    case 251663:
    {
        returnValue = F("Pfarrer-Zangl-Str.");
        break;
    }
    case 251664:
    {
        returnValue = F("Pfarrer-Zankl-Str.");
        break;
    }
    case 251665:
    {
        returnValue = F("Pfarrer-Zapfe-Str.");
        break;
    }
    case 251666:
    {
        returnValue = F("Pfarrer-Zaun-Weg");
        break;
    }
    case 251667:
    {
        returnValue = F("Pfarrer-Zauner-Str.");
        break;
    }
    case 251668:
    {
        returnValue = F("Pfarrer-Zauß-Str.");
        break;
    }
    case 251669:
    {
        returnValue = F("Pfarrer-Zech-Str.");
        break;
    }
    case 251670:
    {
        returnValue = F("Pfarrer-Zech-Weg");
        break;
    }
    case 251671:
    {
        returnValue = F("Pfarrer-Zeppenfeld-Weg");
        break;
    }
    case 251672:
    {
        returnValue = F("Pfarrer-Zielbauer-Weg");
        break;
    }
    case 251673:
    {
        returnValue = F("Pfarrer-Ziller-Str.");
        break;
    }
    case 251674:
    {
        returnValue = F("Pfarrer-Zimmermann-Weg");
        break;
    }
    case 251675:
    {
        returnValue = F("Pfarrer-Zinckel-Str.");
        break;
    }
    case 251676:
    {
        returnValue = F("Pfarrer-Zintl-Weg");
        break;
    }
    case 251677:
    {
        returnValue = F("Pfarrer-Zuber-Str.");
        break;
    }
    case 251678:
    {
        returnValue = F("Pfarrer-Zurmahr-Str.");
        break;
    }
    case 251679:
    {
        returnValue = F("Pfarrer-Zwirg-Weg");
        break;
    }
    case 251680:
    {
        returnValue = F("Pfarrer-Zölch-Str.");
        break;
    }
    case 251681:
    {
        returnValue = F("Pfarrer-von-Gehren-Str.");
        break;
    }
    case 251682:
    {
        returnValue = F("Pfarrer-von-Helb-Str.");
        break;
    }
    case 251683:
    {
        returnValue = F("Pfarrer-von-Miller-Str.");
        break;
    }
    case 251684:
    {
        returnValue = F("Pfarrer-von-Oven-Str.");
        break;
    }
    case 251685:
    {
        returnValue = F("Pfarrerbergweg");
        break;
    }
    case 251686:
    {
        returnValue = F("Pfarrerfeld");
        break;
    }
    case 251687:
    {
        returnValue = F("Pfarrergasse");
        break;
    }
    case 251688:
    {
        returnValue = F("Pfarrerholzweg");
        break;
    }
    case 251689:
    {
        returnValue = F("Pfarrerhöhe");
        break;
    }
    case 251690:
    {
        returnValue = F("Pfarrerland");
        break;
    }
    case 251691:
    {
        returnValue = F("Pfarrerlandweg");
        break;
    }
    case 251692:
    {
        returnValue = F("Pfarrerleitn");
        break;
    }
    case 251693:
    {
        returnValue = F("Pfarrersbildweg");
        break;
    }
    case 251694:
    {
        returnValue = F("Pfarrersbitz");
        break;
    }
    case 251695:
    {
        returnValue = F("Pfarrersgässchen");
        break;
    }
    case 251696:
    {
        returnValue = F("Pfarrersteig");
        break;
    }
    case 251697:
    {
        returnValue = F("Pfarrerwegerl");
        break;
    }
    case 251698:
    {
        returnValue = F("Pfarrfeld");
        break;
    }
    case 251699:
    {
        returnValue = F("Pfarrfeldstr.");
        break;
    }
    case 251700:
    {
        returnValue = F("Pfarrflur");
        break;
    }
    case 251701:
    {
        returnValue = F("Pfarrgalle");
        break;
    }
    case 251702:
    {
        returnValue = F("Pfarrgang");
        break;
    }
    case 251703:
    {
        returnValue = F("Pfarrgarten");
        break;
    }
    case 251704:
    {
        returnValue = F("Pfarrgarten (Bietzen)");
        break;
    }
    case 251705:
    {
        returnValue = F("Pfarrgarten Azendorf");
        break;
    }
    case 251706:
    {
        returnValue = F("Pfarrgarten St. Peter");
        break;
    }
    case 251707:
    {
        returnValue = F("Pfarrgarten Würding");
        break;
    }
    case 251708:
    {
        returnValue = F("Pfarrgartenstr.");
        break;
    }
    case 251709:
    {
        returnValue = F("Pfarrgartenweg");
        break;
    }
    case 251710:
    {
        returnValue = F("Pfarrgasse");
        break;
    }
    case 251711:
    {
        returnValue = F("Pfarrgewann");
        break;
    }
    case 251712:
    {
        returnValue = F("Pfarrgraben");
        break;
    }
    case 251713:
    {
        returnValue = F("Pfarrgrund");
        break;
    }
    case 251714:
    {
        returnValue = F("Pfarrgutstr.");
        break;
    }
    case 251715:
    {
        returnValue = F("Pfarrgutweg");
        break;
    }
    case 251716:
    {
        returnValue = F("Pfarrgärtenweg");
        break;
    }
    case 251717:
    {
        returnValue = F("Pfarrgässchen");
        break;
    }
    case 251718:
    {
        returnValue = F("Pfarrgässel");
        break;
    }
    case 251719:
    {
        returnValue = F("Pfarrgässele");
        break;
    }
    case 251720:
    {
        returnValue = F("Pfarrgässle");
        break;
    }
    case 251721:
    {
        returnValue = F("Pfarrgäßchen");
        break;
    }
    case 251722:
    {
        returnValue = F("Pfarrgäßle");
        break;
    }
    case 251723:
    {
        returnValue = F("Pfarrgäßlein");
        break;
    }
    case 251724:
    {
        returnValue = F("Pfarrhain");
        break;
    }
    case 251725:
    {
        returnValue = F("Pfarrhalde");
        break;
    }
    case 251726:
    {
        returnValue = F("Pfarrhaldenweg");
        break;
    }
    case 251727:
    {
        returnValue = F("Pfarrhaus");
        break;
    }
    case 251728:
    {
        returnValue = F("Pfarrhausgasse");
        break;
    }
    case 251729:
    {
        returnValue = F("Pfarrhausgäßle");
        break;
    }
    case 251730:
    {
        returnValue = F("Pfarrhausstr.");
        break;
    }
    case 251731:
    {
        returnValue = F("Pfarrhausweg");
        break;
    }
    case 251732:
    {
        returnValue = F("Pfarrhecke");
        break;
    }
    case 251733:
    {
        returnValue = F("Pfarrheideweg");
        break;
    }
    case 251734:
    {
        returnValue = F("Pfarrheimweg");
        break;
    }
    case 251735:
    {
        returnValue = F("Pfarrhelle");
        break;
    }
    case 251736:
    {
        returnValue = F("Pfarrhof");
        break;
    }
    case 251737:
    {
        returnValue = F("Pfarrhof Mariä Himmelfahrt");
        break;
    }
    case 251738:
    {
        returnValue = F("Pfarrhofer Weg");
        break;
    }
    case 251739:
    {
        returnValue = F("Pfarrhofgasse");
        break;
    }
    case 251740:
    {
        returnValue = F("Pfarrhofgraben");
        break;
    }
    case 251741:
    {
        returnValue = F("Pfarrhofplatz");
        break;
    }
    case 251742:
    {
        returnValue = F("Pfarrhofsgasse");
        break;
    }
    case 251743:
    {
        returnValue = F("Pfarrhofsiedlung");
        break;
    }
    case 251744:
    {
        returnValue = F("Pfarrhofstr.");
        break;
    }
    case 251745:
    {
        returnValue = F("Pfarrhofswinkel");
        break;
    }
    case 251746:
    {
        returnValue = F("Pfarrhofweg");
        break;
    }
    case 251747:
    {
        returnValue = F("Pfarrholz");
        break;
    }
    case 251748:
    {
        returnValue = F("Pfarrholzweg");
        break;
    }
    case 251749:
    {
        returnValue = F("Pfarrhufe");
        break;
    }
    case 251750:
    {
        returnValue = F("Pfarrhäuser");
        break;
    }
    case 251751:
    {
        returnValue = F("Pfarrhög");
        break;
    }
    case 251752:
    {
        returnValue = F("Pfarrhöhe");
        break;
    }
    case 251753:
    {
        returnValue = F("Pfarrhölzlweg");
        break;
    }
    case 251754:
    {
        returnValue = F("Pfarrhübel");
        break;
    }
    case 251755:
    {
        returnValue = F("Pfarrhübelstr.");
        break;
    }
    case 251756:
    {
        returnValue = F("Pfarrhübelweg");
        break;
    }
    case 251757:
    {
        returnValue = F("Pfarring");
        break;
    }
    case 251758:
    {
        returnValue = F("Pfarriusstr.");
        break;
    }
    case 251759:
    {
        returnValue = F("Pfarrkamp");
        break;
    }
    case 251760:
    {
        returnValue = F("Pfarrkirchener Str.");
        break;
    }
    case 251761:
    {
        returnValue = F("Pfarrkirchner Str.");
        break;
    }
    case 251762:
    {
        returnValue = F("Pfarrkofen");
        break;
    }
    case 251763:
    {
        returnValue = F("Pfarrkofener Weg");
        break;
    }
    case 251764:
    {
        returnValue = F("Pfarrkoppelweg");
        break;
    }
    case 251765:
    {
        returnValue = F("Pfarrkämpe");
        break;
    }
    case 251766:
    {
        returnValue = F("Pfarrlager Weg");
        break;
    }
    case 251767:
    {
        returnValue = F("Pfarrland");
        break;
    }
    case 251768:
    {
        returnValue = F("Pfarrlandstr.");
        break;
    }
    case 251769:
    {
        returnValue = F("Pfarrlandweg");
        break;
    }
    case 251770:
    {
        returnValue = F("Pfarrlehn");
        break;
    }
    case 251771:
    {
        returnValue = F("Pfarrleite");
        break;
    }
    case 251772:
    {
        returnValue = F("Pfarrleitenweg");
        break;
    }
    case 251773:
    {
        returnValue = F("Pfarrleithenweg");
        break;
    }
    case 251774:
    {
        returnValue = F("Pfarrleitweg");
        break;
    }
    case 251775:
    {
        returnValue = F("Pfarrmatt");
        break;
    }
    case 251776:
    {
        returnValue = F("Pfarrmattenweg");
        break;
    }
    case 251777:
    {
        returnValue = F("Pfarrmorgen");
        break;
    }
    case 251778:
    {
        returnValue = F("Pfarrmünsterstr.");
        break;
    }
    case 251779:
    {
        returnValue = F("Pfarrpark");
        break;
    }
    case 251780:
    {
        returnValue = F("Pfarrpfründe");
        break;
    }
    case 251781:
    {
        returnValue = F("Pfarrpfründestr.");
        break;
    }
    case 251782:
    {
        returnValue = F("Pfarrpfründeweg");
        break;
    }
    case 251783:
    {
        returnValue = F("Pfarrplan");
        break;
    }
    case 251784:
    {
        returnValue = F("Pfarrplatz");
        break;
    }
    case 251785:
    {
        returnValue = F("Pfarrschüre");
        break;
    }
    case 251786:
    {
        returnValue = F("Pfarrsdorf");
        break;
    }
    case 251787:
    {
        returnValue = F("Pfarrsiedlung");
        break;
    }
    case 251788:
    {
        returnValue = F("Pfarrsiedlungsstr.");
        break;
    }
    case 251789:
    {
        returnValue = F("Pfarrsitzweg");
        break;
    }
    case 251790:
    {
        returnValue = F("Pfarrsteg");
        break;
    }
    case 251791:
    {
        returnValue = F("Pfarrstege");
        break;
    }
    case 251792:
    {
        returnValue = F("Pfarrsteig");
        break;
    }
    case 251793:
    {
        returnValue = F("Pfarrsteige");
        break;
    }
    case 251794:
    {
        returnValue = F("Pfarrsteinaer Str.");
        break;
    }
    case 251795:
    {
        returnValue = F("Pfarrstieg");
        break;
    }
    case 251796:
    {
        returnValue = F("Pfarrstr.");
        break;
    }
    case 251797:
    {
        returnValue = F("Pfarrstrasße");
        break;
    }
    case 251798:
    {
        returnValue = F("Pfarrstück");
        break;
    }
    case 251799:
    {
        returnValue = F("Pfarrteichweg");
        break;
    }
    case 251800:
    {
        returnValue = F("Pfarrtor");
        break;
    }
    case 251801:
    {
        returnValue = F("Pfarrtwete");
        break;
    }
    case 251802:
    {
        returnValue = F("Pfarrwald");
        break;
    }
    case 251803:
    {
        returnValue = F("Pfarrwaldgrenzweg");
        break;
    }
    case 251804:
    {
        returnValue = F("Pfarrwaldskopfweg");
        break;
    }
    case 251805:
    {
        returnValue = F("Pfarrwaldstr.");
        break;
    }
    case 251806:
    {
        returnValue = F("Pfarrwaldweg");
        break;
    }
    case 251807:
    {
        returnValue = F("Pfarrweg");
        break;
    }
    case 251808:
    {
        returnValue = F("Pfarrweiher");
        break;
    }
    case 251809:
    {
        returnValue = F("Pfarrweiherstr.");
        break;
    }
    case 251810:
    {
        returnValue = F("Pfarrwiddum");
        break;
    }
    case 251811:
    {
        returnValue = F("Pfarrwies");
        break;
    }
    case 251812:
    {
        returnValue = F("Pfarrwiese");
        break;
    }
    case 251813:
    {
        returnValue = F("Pfarrwiesen");
        break;
    }
    case 251814:
    {
        returnValue = F("Pfarrwiesenallee");
        break;
    }
    case 251815:
    {
        returnValue = F("Pfarrwiesenstr.");
        break;
    }
    case 251816:
    {
        returnValue = F("Pfarrwiesenweg");
        break;
    }
    case 251817:
    {
        returnValue = F("Pfarrwiesstr.");
        break;
    }
    case 251818:
    {
        returnValue = F("Pfarrwinkel");
        break;
    }
    case 251819:
    {
        returnValue = F("Pfarräcker");
        break;
    }
    case 251820:
    {
        returnValue = F("Pfarräckerstr.");
        break;
    }
    case 251821:
    {
        returnValue = F("Pfarräckerweg");
        break;
    }
    case 251822:
    {
        returnValue = F("Pfatschbach-Weg");
        break;
    }
    case 251823:
    {
        returnValue = F("Pfatterstr.");
        break;
    }
    case 251824:
    {
        returnValue = F("Pfatterweg");
        break;
    }
    case 251825:
    {
        returnValue = F("Pfatthaagäcker");
        break;
    }
    case 251826:
    {
        returnValue = F("Pfaudlerstr.");
        break;
    }
    case 251827:
    {
        returnValue = F("Pfaudlins");
        break;
    }
    case 251828:
    {
        returnValue = F("Pfauen-Weg");
        break;
    }
    case 251829:
    {
        returnValue = F("Pfauenaugenhof");
        break;
    }
    case 251830:
    {
        returnValue = F("Pfauenaugenweg");
        break;
    }
    case 251831:
    {
        returnValue = F("Pfauenbergsteige");
        break;
    }
    case 251832:
    {
        returnValue = F("Pfauengarten");
        break;
    }
    case 251833:
    {
        returnValue = F("Pfauengasse");
        break;
    }
    case 251834:
    {
        returnValue = F("Pfauenhof");
        break;
    }
    case 251835:
    {
        returnValue = F("Pfauenpforte");
        break;
    }
    case 251836:
    {
        returnValue = F("Pfauenrain");
        break;
    }
    case 251837:
    {
        returnValue = F("Pfauensteinstr.");
        break;
    }
    case 251838:
    {
        returnValue = F("Pfauenstich");
        break;
    }
    case 251839:
    {
        returnValue = F("Pfauenstr.");
        break;
    }
    case 251840:
    {
        returnValue = F("Pfauentorstr.");
        break;
    }
    case 251841:
    {
        returnValue = F("Pfauenweg");
        break;
    }
    case 251842:
    {
        returnValue = F("Pfauenwiese");
        break;
    }
    case 251843:
    {
        returnValue = F("Pfaugasse");
        break;
    }
    case 251844:
    {
        returnValue = F("Pfauhauser Str.");
        break;
    }
    case 251845:
    {
        returnValue = F("Pfauheckstr.");
        break;
    }
    case 251846:
    {
        returnValue = F("Pfauseeallee");
        break;
    }
    case 251847:
    {
        returnValue = F("Pfaustr.");
        break;
    }
    case 251848:
    {
        returnValue = F("Pfauß");
        break;
    }
    case 251849:
    {
        returnValue = F("Pfauäcker");
        break;
    }
    case 251850:
    {
        returnValue = F("Pfeddersheimer Str.");
        break;
    }
    case 251851:
    {
        returnValue = F("Pfedelbacher Str.");
        break;
    }
    case 251852:
    {
        returnValue = F("Pfeffendorf");
        break;
    }
    case 251853:
    {
        returnValue = F("Pfeffenhausener Str.");
        break;
    }
    case 251854:
    {
        returnValue = F("Pfefferacker");
        break;
    }
    case 251855:
    {
        returnValue = F("Pfefferackerstr.");
        break;
    }
    case 251856:
    {
        returnValue = F("Pfefferbachweg");
        break;
    }
    case 251857:
    {
        returnValue = F("Pfefferberg");
        break;
    }
    case 251858:
    {
        returnValue = F("Pfefferbergring");
        break;
    }
    case 251859:
    {
        returnValue = F("Pfefferbergweg");
        break;
    }
    case 251860:
    {
        returnValue = F("Pfefferbichl");
        break;
    }
    case 251861:
    {
        returnValue = F("Pfefferbuck");
        break;
    }
    case 251862:
    {
        returnValue = F("Pfefferfliessroute");
        break;
    }
    case 251863:
    {
        returnValue = F("Pfeffergasse");
        break;
    }
    case 251864:
    {
        returnValue = F("Pfeffergraben");
        break;
    }
    case 251865:
    {
        returnValue = F("Pfeffergrund");
        break;
    }
    case 251866:
    {
        returnValue = F("Pfefferhardtstr.");
        break;
    }
    case 251867:
    {
        returnValue = F("Pfefferhof");
        break;
    }
    case 251868:
    {
        returnValue = F("Pfefferinsel");
        break;
    }
    case 251869:
    {
        returnValue = F("Pfefferklinge");
        break;
    }
    case 251870:
    {
        returnValue = F("Pfefferkornweg");
        break;
    }
    case 251871:
    {
        returnValue = F("Pfefferloh");
        break;
    }
    case 251872:
    {
        returnValue = F("Pfefferländer Weg");
        break;
    }
    case 251873:
    {
        returnValue = F("Pfefferminzstr.");
        break;
    }
    case 251874:
    {
        returnValue = F("Pfefferminzweg");
        break;
    }
    case 251875:
    {
        returnValue = F("Pfeffermühle");
        break;
    }
    case 251876:
    {
        returnValue = F("Pfeffermühlweg");
        break;
    }
    case 251877:
    {
        returnValue = F("Pfefferring");
        break;
    }
    case 251878:
    {
        returnValue = F("Pfefferstr.");
        break;
    }
    case 251879:
    {
        returnValue = F("Pfeffertshofener Str.");
        break;
    }
    case 251880:
    {
        returnValue = F("Pfeffertshofener Weg");
        break;
    }
    case 251881:
    {
        returnValue = F("Pfefferweg");
        break;
    }
    case 251882:
    {
        returnValue = F("Pfefferwiese");
        break;
    }
    case 251883:
    {
        returnValue = F("Pfefferäcker");
        break;
    }
    case 251884:
    {
        returnValue = F("Pfefferäckerstr.");
        break;
    }
    case 251885:
    {
        returnValue = F("Pfeffingen");
        break;
    }
    case 251886:
    {
        returnValue = F("Pfeffinger Str.");
        break;
    }
    case 251887:
    {
        returnValue = F("Pfefflinger Str.");
        break;
    }
    case 251888:
    {
        returnValue = F("Pfegersäckerle");
        break;
    }
    case 251889:
    {
        returnValue = F("Pfeifberg");
        break;
    }
    case 251890:
    {
        returnValue = F("Pfeife");
        break;
    }
    case 251891:
    {
        returnValue = F("Pfeifelestr.");
        break;
    }
    case 251892:
    {
        returnValue = F("Pfeifenbäckerstr.");
        break;
    }
    case 251893:
    {
        returnValue = F("Pfeifendrechslerstr.");
        break;
    }
    case 251894:
    {
        returnValue = F("Pfeifengras");
        break;
    }
    case 251895:
    {
        returnValue = F("Pfeifengrasstr.");
        break;
    }
    case 251896:
    {
        returnValue = F("Pfeifengrasweg");
        break;
    }
    case 251897:
    {
        returnValue = F("Pfeifenmachergasse");
        break;
    }
    case 251898:
    {
        returnValue = F("Pfeifenofen");
        break;
    }
    case 251899:
    {
        returnValue = F("Pfeifenstr.");
        break;
    }
    case 251900:
    {
        returnValue = F("Pfeifenweg");
        break;
    }
    case 251901:
    {
        returnValue = F("Pfeifenäcker");
        break;
    }
    case 251902:
    {
        returnValue = F("Pfeifer und Diller Anlage");
        break;
    }
    case 251903:
    {
        returnValue = F("Pfeifergasse");
        break;
    }
    case 251904:
    {
        returnValue = F("Pfeifergorigasse");
        break;
    }
    case 251905:
    {
        returnValue = F("Pfeifergäßle");
        break;
    }
    case 251906:
    {
        returnValue = F("Pfeiferleite");
        break;
    }
    case 251907:
    {
        returnValue = F("Pfeiferlochweg");
        break;
    }
    case 251908:
    {
        returnValue = F("Pfeifers Weg");
        break;
    }
    case 251909:
    {
        returnValue = F("Pfeifersbrücke");
        break;
    }
    case 251910:
    {
        returnValue = F("Pfeifersfelsweg");
        break;
    }
    case 251911:
    {
        returnValue = F("Pfeifersgasse");
        break;
    }
    case 251912:
    {
        returnValue = F("Pfeifersgäßchen");
        break;
    }
    case 251913:
    {
        returnValue = F("Pfeifershof");
        break;
    }
    case 251914:
    {
        returnValue = F("Pfeifershofweg");
        break;
    }
    case 251915:
    {
        returnValue = F("Pfeiferskopfweg");
        break;
    }
    case 251916:
    {
        returnValue = F("Pfeiferstr.");
        break;
    }
    case 251917:
    {
        returnValue = F("Pfeifersweg");
        break;
    }
    case 251918:
    {
        returnValue = F("Pfeifertalstr.");
        break;
    }
    case 251919:
    {
        returnValue = F("Pfeifertälchen");
        break;
    }
    case 251920:
    {
        returnValue = F("Pfeiferweg");
        break;
    }
    case 251921:
    {
        returnValue = F("Pfeiferäcker");
        break;
    }
    case 251922:
    {
        returnValue = F("Pfeiffenaustr.");
        break;
    }
    case 251923:
    {
        returnValue = F("Pfeiffenholzweg");
        break;
    }
    case 251924:
    {
        returnValue = F("Pfeiffer-und-Diller-Anlage");
        break;
    }
    case 251925:
    {
        returnValue = F("Pfeifferallee");
        break;
    }
    case 251926:
    {
        returnValue = F("Pfeifferfelder Str.");
        break;
    }
    case 251927:
    {
        returnValue = F("Pfeiffergasse");
        break;
    }
    case 251928:
    {
        returnValue = F("Pfeiffergassl");
        break;
    }
    case 251929:
    {
        returnValue = F("Pfeiffergässele");
        break;
    }
    case 251930:
    {
        returnValue = F("Pfeiffergässle");
        break;
    }
    case 251931:
    {
        returnValue = F("Pfeiffergäßle");
        break;
    }
    case 251932:
    {
        returnValue = F("Pfeifferhäusleweg");
        break;
    }
    case 251933:
    {
        returnValue = F("Pfeifferhütter Weg");
        break;
    }
    case 251934:
    {
        returnValue = F("Pfeifferklinge");
        break;
    }
    case 251935:
    {
        returnValue = F("Pfeifferlesweg");
        break;
    }
    case 251936:
    {
        returnValue = F("Pfeiffermichel");
        break;
    }
    case 251937:
    {
        returnValue = F("Pfeiffermühle");
        break;
    }
    case 251938:
    {
        returnValue = F("Pfeiffers Garten");
        break;
    }
    case 251939:
    {
        returnValue = F("Pfeiffers Gasse");
        break;
    }
    case 251940:
    {
        returnValue = F("Pfeiffers Weg");
        break;
    }
    case 251941:
    {
        returnValue = F("Pfeiffersahl");
        break;
    }
    case 251942:
    {
        returnValue = F("Pfeiffersberg");
        break;
    }
    case 251943:
    {
        returnValue = F("Pfeiffersdamm");
        break;
    }
    case 251944:
    {
        returnValue = F("Pfeifferseppleweg");
        break;
    }
    case 251945:
    {
        returnValue = F("Pfeiffersgasse");
        break;
    }
    case 251946:
    {
        returnValue = F("Pfeiffersheim");
        break;
    }
    case 251947:
    {
        returnValue = F("Pfeiffershof");
        break;
    }
    case 251948:
    {
        returnValue = F("Pfeifferspfad");
        break;
    }
    case 251949:
    {
        returnValue = F("Pfeiffersrütteweg");
        break;
    }
    case 251950:
    {
        returnValue = F("Pfeifferstr.");
        break;
    }
    case 251951:
    {
        returnValue = F("Pfeiffersweg");
        break;
    }
    case 251952:
    {
        returnValue = F("Pfeifferswiese");
        break;
    }
    case 251953:
    {
        returnValue = F("Pfeiffertal");
        break;
    }
    case 251954:
    {
        returnValue = F("Pfeifferweg");
        break;
    }
    case 251955:
    {
        returnValue = F("Pfeifgrundweg");
        break;
    }
    case 251956:
    {
        returnValue = F("Pfeifhaus");
        break;
    }
    case 251957:
    {
        returnValue = F("Pfeifhof");
        break;
    }
    case 251958:
    {
        returnValue = F("Pfeifringweg");
        break;
    }
    case 251959:
    {
        returnValue = F("Pfeifweg");
        break;
    }
    case 251960:
    {
        returnValue = F("Pfeil-Schneise");
        break;
    }
    case 251961:
    {
        returnValue = F("Pfeilergasse");
        break;
    }
    case 251962:
    {
        returnValue = F("Pfeilergraben");
        break;
    }
    case 251963:
    {
        returnValue = F("Pfeilermahd");
        break;
    }
    case 251964:
    {
        returnValue = F("Pfeilerstr.");
        break;
    }
    case 251965:
    {
        returnValue = F("Pfeilerweg");
        break;
    }
    case 251966:
    {
        returnValue = F("Pfeilgasse");
        break;
    }
    case 251967:
    {
        returnValue = F("Pfeilhalde");
        break;
    }
    case 251968:
    {
        returnValue = F("Pfeilhofstr.");
        break;
    }
    case 251969:
    {
        returnValue = F("Pfeilkrautweg");
        break;
    }
    case 251970:
    {
        returnValue = F("Pfeilschifterstr.");
        break;
    }
    case 251971:
    {
        returnValue = F("Pfeilshofstr.");
        break;
    }
    case 251972:
    {
        returnValue = F("Pfeilstr.");
        break;
    }
    case 251973:
    {
        returnValue = F("Pfeilsweg");
        break;
    }
    case 251974:
    {
        returnValue = F("Pfeilweg");
        break;
    }
    case 251975:
    {
        returnValue = F("Pfeinacher Str.");
        break;
    }
    case 251976:
    {
        returnValue = F("Pfelling");
        break;
    }
    case 251977:
    {
        returnValue = F("Pfellkofener Str.");
        break;
    }
    case 251978:
    {
        returnValue = F("Pfenderstr.");
        break;
    }
    case 251979:
    {
        returnValue = F("Pfendkammerweg");
        break;
    }
    case 251980:
    {
        returnValue = F("Pfendtnergasse");
        break;
    }
    case 251981:
    {
        returnValue = F("Pfenglerweg");
        break;
    }
    case 251982:
    {
        returnValue = F("Pfennigbreite");
        break;
    }
    case 251983:
    {
        returnValue = F("Pfennigbrücke");
        break;
    }
    case 251984:
    {
        returnValue = F("Pfennigmannweg");
        break;
    }
    case 251985:
    {
        returnValue = F("Pfennigmühle");
        break;
    }
    case 251986:
    {
        returnValue = F("Pfennigreitel");
        break;
    }
    case 251987:
    {
        returnValue = F("Pfennigsacker");
        break;
    }
    case 251988:
    {
        returnValue = F("Pfennigsbrink");
        break;
    }
    case 251989:
    {
        returnValue = F("Pfennigsmoorweg");
        break;
    }
    case 251990:
    {
        returnValue = F("Pfennigstr.");
        break;
    }
    case 251991:
    {
        returnValue = F("Pfennigsweg");
        break;
    }
    case 251992:
    {
        returnValue = F("Pfennigsweide");
        break;
    }
    case 251993:
    {
        returnValue = F("Pfenningbacher Str.");
        break;
    }
    case 251994:
    {
        returnValue = F("Pfenningkrug");
        break;
    }
    case 251995:
    {
        returnValue = F("Pferch");
        break;
    }
    case 251996:
    {
        returnValue = F("Pferchenschneise");
        break;
    }
    case 251997:
    {
        returnValue = F("Pferchgasse");
        break;
    }
    case 251998:
    {
        returnValue = F("Pferchstr.");
        break;
    }
    case 251999:
    {
        returnValue = F("Pferchtal");
        break;
    }
    case 252000:
    {
        returnValue = F("Pferchweg");
        break;
    }
    case 252001:
    {
        returnValue = F("Pferchäcker");
        break;
    }
    case 252002:
    {
        returnValue = F("Pferchäckerweg");
        break;
    }
    case 252003:
    {
        returnValue = F("Pferd");
        break;
    }
    case 252004:
    {
        returnValue = F("Pferde Eine");
        break;
    }
    case 252005:
    {
        returnValue = F("Pferdebachfeldweg");
        break;
    }
    case 252006:
    {
        returnValue = F("Pferdebachstr.");
        break;
    }
    case 252007:
    {
        returnValue = F("Pferdebahn");
        break;
    }
    case 252008:
    {
        returnValue = F("Pferdebergweg");
        break;
    }
    case 252009:
    {
        returnValue = F("Pferdebruch");
        break;
    }
    case 252010:
    {
        returnValue = F("Pferdebrunnenweg");
        break;
    }
    case 252011:
    {
        returnValue = F("Pferdefenne");
        break;
    }
    case 252012:
    {
        returnValue = F("Pferdefriedhofsgasse");
        break;
    }
    case 252013:
    {
        returnValue = F("Pferdegasse");
        break;
    }
    case 252014:
    {
        returnValue = F("Pferdehagen");
        break;
    }
    case 252015:
    {
        returnValue = F("Pferdehof");
        break;
    }
    case 252016:
    {
        returnValue = F("Pferdehorster Str.");
        break;
    }
    case 252017:
    {
        returnValue = F("Pferdehude");
        break;
    }
    case 252018:
    {
        returnValue = F("Pferdehutstr.");
        break;
    }
    case 252019:
    {
        returnValue = F("Pferdekamp");
        break;
    }
    case 252020:
    {
        returnValue = F("Pferdekampsheide");
        break;
    }
    case 252021:
    {
        returnValue = F("Pferdekampstr.");
        break;
    }
    case 252022:
    {
        returnValue = F("Pferdekampweg");
        break;
    }
    case 252023:
    {
        returnValue = F("Pferdekopfsbahn");
        break;
    }
    case 252024:
    {
        returnValue = F("Pferdekoppel");
        break;
    }
    case 252025:
    {
        returnValue = F("Pferdekrugsweg");
        break;
    }
    case 252026:
    {
        returnValue = F("Pferdeloch");
        break;
    }
    case 252027:
    {
        returnValue = F("Pferdelochweg");
        break;
    }
    case 252028:
    {
        returnValue = F("Pferdemaate");
        break;
    }
    case 252029:
    {
        returnValue = F("Pferdemarkt");
        break;
    }
    case 252030:
    {
        returnValue = F("Pferdemarktstr.");
        break;
    }
    case 252031:
    {
        returnValue = F("Pferdemasch");
        break;
    }
    case 252032:
    {
        returnValue = F("Pferdemoorweg");
        break;
    }
    case 252033:
    {
        returnValue = F("Pferdemärsche");
        break;
    }
    case 252034:
    {
        returnValue = F("Pferdemühlendamm");
        break;
    }
    case 252035:
    {
        returnValue = F("Pferdeschwemme");
        break;
    }
    case 252036:
    {
        returnValue = F("Pferdeschwemmgasse");
        break;
    }
    case 252037:
    {
        returnValue = F("Pferdestallberg");
        break;
    }
    case 252038:
    {
        returnValue = F("Pferdestallweg");
        break;
    }
    case 252039:
    {
        returnValue = F("Pferdesteig");
        break;
    }
    case 252040:
    {
        returnValue = F("Pferdestr.");
        break;
    }
    case 252041:
    {
        returnValue = F("Pferdestückenweg");
        break;
    }
    case 252042:
    {
        returnValue = F("Pferdetrail");
        break;
    }
    case 252043:
    {
        returnValue = F("Pferdetränke");
        break;
    }
    case 252044:
    {
        returnValue = F("Pferdeweg");
        break;
    }
    case 252045:
    {
        returnValue = F("Pferdeweide");
        break;
    }
    case 252046:
    {
        returnValue = F("Pferdewiese");
        break;
    }
    case 252047:
    {
        returnValue = F("Pferdewiesenweg");
        break;
    }
    case 252048:
    {
        returnValue = F("Pferdingsleber Weg");
        break;
    }
    case 252049:
    {
        returnValue = F("Pferdsbach");
        break;
    }
    case 252050:
    {
        returnValue = F("Pferdsbacher Weg");
        break;
    }
    case 252051:
    {
        returnValue = F("Pferdsbruchfeld");
        break;
    }
    case 252052:
    {
        returnValue = F("Pferdsbruchweg");
        break;
    }
    case 252053:
    {
        returnValue = F("Pferdsdorfer Str.");
        break;
    }
    case 252054:
    {
        returnValue = F("Pferdsfelder Str.");
        break;
    }
    case 252055:
    {
        returnValue = F("Pferdsfelder Weg");
        break;
    }
    case 252056:
    {
        returnValue = F("Pferdshut");
        break;
    }
    case 252057:
    {
        returnValue = F("Pferdshöhe");
        break;
    }
    case 252058:
    {
        returnValue = F("Pferdskopfstr.");
        break;
    }
    case 252059:
    {
        returnValue = F("Pferdskopfweg");
        break;
    }
    case 252060:
    {
        returnValue = F("Pferdslache");
        break;
    }
    case 252061:
    {
        returnValue = F("Pferdslaubweg");
        break;
    }
    case 252062:
    {
        returnValue = F("Pferdstr.");
        break;
    }
    case 252063:
    {
        returnValue = F("Pferdsweide");
        break;
    }
    case 252064:
    {
        returnValue = F("Pferlenstr.");
        break;
    }
    case 252065:
    {
        returnValue = F("Pferrichweg");
        break;
    }
    case 252066:
    {
        returnValue = F("Pferrmatt");
        break;
    }
    case 252067:
    {
        returnValue = F("Pfersbacher Str.");
        break;
    }
    case 252068:
    {
        returnValue = F("Pfersdorf");
        break;
    }
    case 252069:
    {
        returnValue = F("Pfersdorfer Anspann");
        break;
    }
    case 252070:
    {
        returnValue = F("Pfersdorfer Gries");
        break;
    }
    case 252071:
    {
        returnValue = F("Pfersdorfer Hauptstr.");
        break;
    }
    case 252072:
    {
        returnValue = F("Pfersdorfer Str.");
        break;
    }
    case 252073:
    {
        returnValue = F("Pfersdorfer Untere Dorfstr.");
        break;
    }
    case 252074:
    {
        returnValue = F("Pfersdorfer Weg");
        break;
    }
    case 252075:
    {
        returnValue = F("Pferseer Str.");
        break;
    }
    case 252076:
    {
        returnValue = F("Pfettenstr.");
        break;
    }
    case 252077:
    {
        returnValue = F("Pfettrachgasse");
        break;
    }
    case 252078:
    {
        returnValue = F("Pfettrachweg");
        break;
    }
    case 252079:
    {
        returnValue = F("Pfetzerstr.");
        break;
    }
    case 252080:
    {
        returnValue = F("Pfetzerweg");
        break;
    }
    case 252081:
    {
        returnValue = F("Pfeuferstr.");
        break;
    }
    case 252082:
    {
        returnValue = F("Pfieffer Str.");
        break;
    }
    case 252083:
    {
        returnValue = F("Pfieffestr.");
        break;
    }
    case 252084:
    {
        returnValue = F("Pfiffelbacher Str.");
        break;
    }
    case 252085:
    {
        returnValue = F("Pfiffelbacher Weg");
        break;
    }
    case 252086:
    {
        returnValue = F("Pfiffelerstr.");
        break;
    }
    case 252087:
    {
        returnValue = F("Pfiffergrund");
        break;
    }
    case 252088:
    {
        returnValue = F("Pfifferlingsweg");
        break;
    }
    case 252089:
    {
        returnValue = F("Pfifferlingweg");
        break;
    }
    case 252090:
    {
        returnValue = F("Pfifferloh");
        break;
    }
    case 252091:
    {
        returnValue = F("Pfiffersgrund");
        break;
    }
    case 252092:
    {
        returnValue = F("Pfiffligheimer Str.");
        break;
    }
    case 252093:
    {
        returnValue = F("Pfingsfleck");
        break;
    }
    case 252094:
    {
        returnValue = F("Pfingsgraben");
        break;
    }
    case 252095:
    {
        returnValue = F("Pfingsstuhl");
        break;
    }
    case 252096:
    {
        returnValue = F("Pfingstanger");
        break;
    }
    case 252097:
    {
        returnValue = F("Pfingstangerring");
        break;
    }
    case 252098:
    {
        returnValue = F("Pfingstangerstr.");
        break;
    }
    case 252099:
    {
        returnValue = F("Pfingstangerweg");
        break;
    }
    case 252100:
    {
        returnValue = F("Pfingstbeekkoppel");
        break;
    }
    case 252101:
    {
        returnValue = F("Pfingstberg");
        break;
    }
    case 252102:
    {
        returnValue = F("Pfingstberger Damm");
        break;
    }
    case 252103:
    {
        returnValue = F("Pfingstbergplatz");
        break;
    }
    case 252104:
    {
        returnValue = F("Pfingstbergstr.");
        break;
    }
    case 252105:
    {
        returnValue = F("Pfingstbergweg");
        break;
    }
    case 252106:
    {
        returnValue = F("Pfingstborn");
        break;
    }
    case 252107:
    {
        returnValue = F("Pfingstbornstr.");
        break;
    }
    case 252108:
    {
        returnValue = F("Pfingstbornweg");
        break;
    }
    case 252109:
    {
        returnValue = F("Pfingstbreite");
        break;
    }
    case 252110:
    {
        returnValue = F("Pfingstbrunnenstr.");
        break;
    }
    case 252111:
    {
        returnValue = F("Pfingstbrunnenweg");
        break;
    }
    case 252112:
    {
        returnValue = F("Pfingstburschen Festplatz");
        break;
    }
    case 252113:
    {
        returnValue = F("Pfingstbusch");
        break;
    }
    case 252114:
    {
        returnValue = F("Pfingstbörnchenweg");
        break;
    }
    case 252115:
    {
        returnValue = F("Pfingstfeststräßel");
        break;
    }
    case 252116:
    {
        returnValue = F("Pfingstfleck");
        break;
    }
    case 252117:
    {
        returnValue = F("Pfingstflecken");
        break;
    }
    case 252118:
    {
        returnValue = F("Pfingstgasse");
        break;
    }
    case 252119:
    {
        returnValue = F("Pfingstgraben");
        break;
    }
    case 252120:
    {
        returnValue = F("Pfingstgrabenstr.");
        break;
    }
    case 252121:
    {
        returnValue = F("Pfingstgras");
        break;
    }
    case 252122:
    {
        returnValue = F("Pfingstgraseweg");
        break;
    }
    case 252123:
    {
        returnValue = F("Pfingsthalde");
        break;
    }
    case 252124:
    {
        returnValue = F("Pfingsthaldeweg");
        break;
    }
    case 252125:
    {
        returnValue = F("Pfingsthangweg");
        break;
    }
    case 252126:
    {
        returnValue = F("Pfingstheimer Weg");
        break;
    }
    case 252127:
    {
        returnValue = F("Pfingsthohle");
        break;
    }
    case 252128:
    {
        returnValue = F("Pfingstholzallee");
        break;
    }
    case 252129:
    {
        returnValue = F("Pfingsthorn");
        break;
    }
    case 252130:
    {
        returnValue = F("Pfingstkopfweg");
        break;
    }
    case 252131:
    {
        returnValue = F("Pfingstmannstr.");
        break;
    }
    case 252132:
    {
        returnValue = F("Pfingstmühlenweg");
        break;
    }
    case 252133:
    {
        returnValue = F("Pfingstnelkenstr.");
        break;
    }
    case 252134:
    {
        returnValue = F("Pfingstpfad");
        break;
    }
    case 252135:
    {
        returnValue = F("Pfingstrasen");
        break;
    }
    case 252136:
    {
        returnValue = F("Pfingstrasenstr.");
        break;
    }
    case 252137:
    {
        returnValue = F("Pfingstreiterstr.");
        break;
    }
    case 252138:
    {
        returnValue = F("Pfingstrosen");
        break;
    }
    case 252139:
    {
        returnValue = F("Pfingstrosenstr.");
        break;
    }
    case 252140:
    {
        returnValue = F("Pfingstrosenweg");
        break;
    }
    case 252141:
    {
        returnValue = F("Pfingstschüsselweg");
        break;
    }
    case 252142:
    {
        returnValue = F("Pfingststr.");
        break;
    }
    case 252143:
    {
        returnValue = F("Pfingsttorstr.");
        break;
    }
    case 252144:
    {
        returnValue = F("Pfingstwasen");
        break;
    }
    case 252145:
    {
        returnValue = F("Pfingstweg");
        break;
    }
    case 252146:
    {
        returnValue = F("Pfingstweide");
        break;
    }
    case 252147:
    {
        returnValue = F("Pfingstweide Schneise");
        break;
    }
    case 252148:
    {
        returnValue = F("Pfingstweidenweg");
        break;
    }
    case 252149:
    {
        returnValue = F("Pfingstweider Str.");
        break;
    }
    case 252150:
    {
        returnValue = F("Pfingstweideweg");
        break;
    }
    case 252151:
    {
        returnValue = F("Pfingstweidsteg");
        break;
    }
    case 252152:
    {
        returnValue = F("Pfingstweidstr.");
        break;
    }
    case 252153:
    {
        returnValue = F("Pfingstweidweg");
        break;
    }
    case 252154:
    {
        returnValue = F("Pfingstwiese");
        break;
    }
    case 252155:
    {
        returnValue = F("Pfingstwiesenstr.");
        break;
    }
    case 252156:
    {
        returnValue = F("Pfingstwiesenweg");
        break;
    }
    case 252157:
    {
        returnValue = F("Pfingstäcker");
        break;
    }
    case 252158:
    {
        returnValue = F("Pfingstäcker-Ring");
        break;
    }
    case 252159:
    {
        returnValue = F("Pfinzgaustr.");
        break;
    }
    case 252160:
    {
        returnValue = F("Pfinzgauweg");
        break;
    }
    case 252161:
    {
        returnValue = F("Pfinzingstr.");
        break;
    }
    case 252162:
    {
        returnValue = F("Pfinzingweg");
        break;
    }
    case 252163:
    {
        returnValue = F("Pfinzstr.");
        break;
    }
    case 252164:
    {
        returnValue = F("Pfinztalstr.");
        break;
    }
    case 252165:
    {
        returnValue = F("Pfinzweg");
        break;
    }
    case 252166:
    {
        returnValue = F("Pfinzweiler Str.");
        break;
    }
    case 252167:
    {
        returnValue = F("Pfirnleite");
        break;
    }
    case 252168:
    {
        returnValue = F("Pfirrmannweg");
        break;
    }
    case 252169:
    {
        returnValue = F("Pfirsichgasse");
        break;
    }
    case 252170:
    {
        returnValue = F("Pfirsichstr.");
        break;
    }
    case 252171:
    {
        returnValue = F("Pfirsichweg");
        break;
    }
    case 252172:
    {
        returnValue = F("Pfister-Park");
        break;
    }
    case 252173:
    {
        returnValue = F("Pfisteranlage");
        break;
    }
    case 252174:
    {
        returnValue = F("Pfisterberg");
        break;
    }
    case 252175:
    {
        returnValue = F("Pfistererberg");
        break;
    }
    case 252176:
    {
        returnValue = F("Pfistererhofweg");
        break;
    }
    case 252177:
    {
        returnValue = F("Pfistererstr.");
        break;
    }
    case 252178:
    {
        returnValue = F("Pfistergasse");
        break;
    }
    case 252179:
    {
        returnValue = F("Pfistergrund");
        break;
    }
    case 252180:
    {
        returnValue = F("Pfistergäßle");
        break;
    }
    case 252181:
    {
        returnValue = F("Pfisterhäusle-Weg");
        break;
    }
    case 252182:
    {
        returnValue = F("Pfistern");
        break;
    }
    case 252183:
    {
        returnValue = F("Pfisterplatz");
        break;
    }
    case 252184:
    {
        returnValue = F("Pfisterrüttweg");
        break;
    }
    case 252185:
    {
        returnValue = F("Pfistersham");
        break;
    }
    case 252186:
    {
        returnValue = F("Pfistershamer Str.");
        break;
    }
    case 252187:
    {
        returnValue = F("Pfisterstr.");
        break;
    }
    case 252188:
    {
        returnValue = F("Pfitzdorfer Str.");
        break;
    }
    case 252189:
    {
        returnValue = F("Pfitzenhof");
        break;
    }
    case 252190:
    {
        returnValue = F("Pfitzenhäuslesweg");
        break;
    }
    case 252191:
    {
        returnValue = F("Pfitzenhäusleweg");
        break;
    }
    case 252192:
    {
        returnValue = F("Pfitzentalweg");
        break;
    }
    case 252193:
    {
        returnValue = F("Pfitzenweg");
        break;
    }
    case 252194:
    {
        returnValue = F("Pfitzerkreisel");
        break;
    }
    case 252195:
    {
        returnValue = F("Pfitzersteige");
        break;
    }
    case 252196:
    {
        returnValue = F("Pfitzerstr.");
        break;
    }
    case 252197:
    {
        returnValue = F("Pfitzigstr.");
        break;
    }
    case 252198:
    {
        returnValue = F("Pfitzingen");
        break;
    }
    case 252199:
    {
        returnValue = F("Pfitzinger Str.");
        break;
    }
    case 252200:
    {
        returnValue = F("Pfitzinger Weg");
        break;
    }
    case 252201:
    {
        returnValue = F("Pfitznerstr.");
        break;
    }
    case 252202:
    {
        returnValue = F("Pfitznerweg");
        break;
    }
    case 252203:
    {
        returnValue = F("Pfizackerweg");
        break;
    }
    case 252204:
    {
        returnValue = F("Pfizerstr.");
        break;
    }
    case 252205:
    {
        returnValue = F("Pfladergasse");
        break;
    }
    case 252206:
    {
        returnValue = F("Pflanzbeetweg");
        break;
    }
    case 252207:
    {
        returnValue = F("Pflanzbergweg");
        break;
    }
    case 252208:
    {
        returnValue = F("Pflanzenbeete");
        break;
    }
    case 252209:
    {
        returnValue = F("Pflanzeneller");
        break;
    }
    case 252210:
    {
        returnValue = F("Pflanzengartenweg");
        break;
    }
    case 252211:
    {
        returnValue = F("Pflanzengasse");
        break;
    }
    case 252212:
    {
        returnValue = F("Pflanzenlehrpfad");
        break;
    }
    case 252213:
    {
        returnValue = F("Pflanzenländer Str.");
        break;
    }
    case 252214:
    {
        returnValue = F("Pflanzenländer Weg");
        break;
    }
    case 252215:
    {
        returnValue = F("Pflanzenmayerstr.");
        break;
    }
    case 252216:
    {
        returnValue = F("Pflanzenpfad");
        break;
    }
    case 252217:
    {
        returnValue = F("Pflanzenschulweg");
        break;
    }
    case 252218:
    {
        returnValue = F("Pflanzenweg");
        break;
    }
    case 252219:
    {
        returnValue = F("Pflanzerweg");
        break;
    }
    case 252220:
    {
        returnValue = F("Pflanzgarten");
        break;
    }
    case 252221:
    {
        returnValue = F("Pflanzgarten Weg");
        break;
    }
    case 252222:
    {
        returnValue = F("Pflanzgarten-Schneise");
        break;
    }
    case 252223:
    {
        returnValue = F("Pflanzgartenschneise");
        break;
    }
    case 252224:
    {
        returnValue = F("Pflanzgartensträßchen");
        break;
    }
    case 252225:
    {
        returnValue = F("Pflanzgartenweg");
        break;
    }
    case 252226:
    {
        returnValue = F("Pflanzhofgasse");
        break;
    }
    case 252227:
    {
        returnValue = F("Pflanzschulallee");
        break;
    }
    case 252228:
    {
        returnValue = F("Pflanzschulrichtstatt");
        break;
    }
    case 252229:
    {
        returnValue = F("Pflanzschulsträßchen");
        break;
    }
    case 252230:
    {
        returnValue = F("Pflanzschulsträßle");
        break;
    }
    case 252231:
    {
        returnValue = F("Pflanzschulweg");
        break;
    }
    case 252232:
    {
        returnValue = F("Pflanzstatt");
        break;
    }
    case 252233:
    {
        returnValue = F("Pflanzstr.");
        break;
    }
    case 252234:
    {
        returnValue = F("Pflanzweg");
        break;
    }
    case 252235:
    {
        returnValue = F("Pflanzwirbach");
        break;
    }
    case 252236:
    {
        returnValue = F("Pflaster");
        break;
    }
    case 252237:
    {
        returnValue = F("Pflasterberg");
        break;
    }
    case 252238:
    {
        returnValue = F("Pflasterdamm");
        break;
    }
    case 252239:
    {
        returnValue = F("Pflastererstr.");
        break;
    }
    case 252240:
    {
        returnValue = F("Pflastergasse");
        break;
    }
    case 252241:
    {
        returnValue = F("Pflastersteig");
        break;
    }
    case 252242:
    {
        returnValue = F("Pflastersteinbruchweg");
        break;
    }
    case 252243:
    {
        returnValue = F("Pflasterstr.");
        break;
    }
    case 252244:
    {
        returnValue = F("Pflasterweg");
        break;
    }
    case 252245:
    {
        returnValue = F("Pflasterwiese");
        break;
    }
    case 252246:
    {
        returnValue = F("Pflasteräcker");
        break;
    }
    case 252247:
    {
        returnValue = F("Pflaumbachstr.");
        break;
    }
    case 252248:
    {
        returnValue = F("Pflaumenallee");
        break;
    }
    case 252249:
    {
        returnValue = F("Pflaumenbaumweg");
        break;
    }
    case 252250:
    {
        returnValue = F("Pflaumengasse");
        break;
    }
    case 252251:
    {
        returnValue = F("Pflaumengäßchen");
        break;
    }
    case 252252:
    {
        returnValue = F("Pflaumenhohle");
        break;
    }
    case 252253:
    {
        returnValue = F("Pflaumenknick");
        break;
    }
    case 252254:
    {
        returnValue = F("Pflaumenweg");
        break;
    }
    case 252255:
    {
        returnValue = F("Pflaumermühlweg");
        break;
    }
    case 252256:
    {
        returnValue = F("Pflaumheimer Str.");
        break;
    }
    case 252257:
    {
        returnValue = F("Pflaumlocher Str.");
        break;
    }
    case 252258:
    {
        returnValue = F("Pflaumstr.");
        break;
    }
    case 252259:
    {
        returnValue = F("Pflegamtsgasse");
        break;
    }
    case 252260:
    {
        returnValue = F("Pflegamtstr.");
        break;
    }
    case 252261:
    {
        returnValue = F("Pflegau");
        break;
    }
    case 252262:
    {
        returnValue = F("Pflegeheim");
        break;
    }
    case 252263:
    {
        returnValue = F("Pflegeheimstr.");
        break;
    }
    case 252264:
    {
        returnValue = F("Pfleger-Rothut-Weg");
        break;
    }
    case 252265:
    {
        returnValue = F("Pflegerbreiten");
        break;
    }
    case 252266:
    {
        returnValue = F("Pflegerdorf");
        break;
    }
    case 252267:
    {
        returnValue = F("Pflegergasse");
        break;
    }
    case 252268:
    {
        returnValue = F("Pflegerpointstr.");
        break;
    }
    case 252269:
    {
        returnValue = F("Pflegerstr.");
        break;
    }
    case 252270:
    {
        returnValue = F("Pflegersäcker");
        break;
    }
    case 252271:
    {
        returnValue = F("Pflegersäckerle");
        break;
    }
    case 252272:
    {
        returnValue = F("Pflegerweg");
        break;
    }
    case 252273:
    {
        returnValue = F("Pflegestr.");
        break;
    }
    case 252274:
    {
        returnValue = F("Pflegeweg für Autobahn");
        break;
    }
    case 252275:
    {
        returnValue = F("Pflegfeldstr.");
        break;
    }
    case 252276:
    {
        returnValue = F("Pfleggartenweg");
        break;
    }
    case 252277:
    {
        returnValue = F("Pfleggasse");
        break;
    }
    case 252278:
    {
        returnValue = F("Pfleghof");
        break;
    }
    case 252279:
    {
        returnValue = F("Pfleghofgasse");
        break;
    }
    case 252280:
    {
        returnValue = F("Pfleghofgraben");
        break;
    }
    case 252281:
    {
        returnValue = F("Pfleghofstr.");
        break;
    }
    case 252282:
    {
        returnValue = F("Pflegler");
        break;
    }
    case 252283:
    {
        returnValue = F("Pflegmühleweg");
        break;
    }
    case 252284:
    {
        returnValue = F("Pflegstr.");
        break;
    }
    case 252285:
    {
        returnValue = F("Pflegweg");
        break;
    }
    case 252286:
    {
        returnValue = F("Pfleidererstr.");
        break;
    }
    case 252287:
    {
        returnValue = F("Pfletschbachweg");
        break;
    }
    case 252288:
    {
        returnValue = F("Pflichtendorfer Str.");
        break;
    }
    case 252289:
    {
        returnValue = F("Pflichtweg");
        break;
    }
    case 252290:
    {
        returnValue = F("Pflieglweg");
        break;
    }
    case 252291:
    {
        returnValue = F("Pflinzweg");
        break;
    }
    case 252292:
    {
        returnValue = F("Pflipsberg");
        break;
    }
    case 252293:
    {
        returnValue = F("Pflochmoor");
        break;
    }
    case 252294:
    {
        returnValue = F("Pflockenstr.");
        break;
    }
    case 252295:
    {
        returnValue = F("Pflockwiese");
        break;
    }
    case 252296:
    {
        returnValue = F("Pflostweg");
        break;
    }
    case 252297:
    {
        returnValue = F("Pflug");
        break;
    }
    case 252298:
    {
        returnValue = F("Pflug-Franken-Str.");
        break;
    }
    case 252299:
    {
        returnValue = F("Pflugbeilstr.");
        break;
    }
    case 252300:
    {
        returnValue = F("Pflugbeilweg");
        break;
    }
    case 252301:
    {
        returnValue = F("Pflugberg");
        break;
    }
    case 252302:
    {
        returnValue = F("Pflugeisen");
        break;
    }
    case 252303:
    {
        returnValue = F("Pflugeisenweg");
        break;
    }
    case 252304:
    {
        returnValue = F("Pflugfelder Str.");
        break;
    }
    case 252305:
    {
        returnValue = F("Pflugfelderstr.");
        break;
    }
    case 252306:
    {
        returnValue = F("Pfluggasse");
        break;
    }
    case 252307:
    {
        returnValue = F("Pfluggraben");
        break;
    }
    case 252308:
    {
        returnValue = F("Pflughofpassage");
        break;
    }
    case 252309:
    {
        returnValue = F("Pflugkstr.");
        break;
    }
    case 252310:
    {
        returnValue = F("Pflugschar");
        break;
    }
    case 252311:
    {
        returnValue = F("Pflugscharweg");
        break;
    }
    case 252312:
    {
        returnValue = F("Pflugscheider Str.");
        break;
    }
    case 252313:
    {
        returnValue = F("Pflugshaldenweg");
        break;
    }
    case 252314:
    {
        returnValue = F("Pflugshaldestr.");
        break;
    }
    case 252315:
    {
        returnValue = F("Pflugsmühle");
        break;
    }
    case 252316:
    {
        returnValue = F("Pflugsmühler Weg");
        break;
    }
    case 252317:
    {
        returnValue = F("Pflugstedt Wehen");
        break;
    }
    case 252318:
    {
        returnValue = F("Pflugsteinweg");
        break;
    }
    case 252319:
    {
        returnValue = F("Pflugstr.");
        break;
    }
    case 252320:
    {
        returnValue = F("Pflugweg");
        break;
    }
    case 252321:
    {
        returnValue = F("Pflumbergweg");
        break;
    }
    case 252322:
    {
        returnValue = F("Pflumgarten");
        break;
    }
    case 252323:
    {
        returnValue = F("Pflumholzstr.");
        break;
    }
    case 252324:
    {
        returnValue = F("Pflummerner Weg");
        break;
    }
    case 252325:
    {
        returnValue = F("Pflummernstr.");
        break;
    }
    case 252326:
    {
        returnValue = F("Pflummernweg");
        break;
    }
    case 252327:
    {
        returnValue = F("Pflänzergasse");
        break;
    }
    case 252328:
    {
        returnValue = F("Pflänzerstr.");
        break;
    }
    case 252329:
    {
        returnValue = F("Pflänzerweg");
        break;
    }
    case 252330:
    {
        returnValue = F("Pfläster");
        break;
    }
    case 252331:
    {
        returnValue = F("Pflästererweg");
        break;
    }
    case 252332:
    {
        returnValue = F("Pflästerlesweg");
        break;
    }
    case 252333:
    {
        returnValue = F("Pflöckengasse");
        break;
    }
    case 252334:
    {
        returnValue = F("Pflückerweg");
        break;
    }
    case 252335:
    {
        returnValue = F("Pflücksburger Hof");
        break;
    }
    case 252336:
    {
        returnValue = F("Pflügersgrundstr.");
        break;
    }
    case 252337:
    {
        returnValue = F("Pflügerstr.");
        break;
    }
    case 252338:
    {
        returnValue = F("Pflügkuffer Weg");
        break;
    }
    case 252339:
    {
        returnValue = F("Pflüglmühlweg");
        break;
    }
    case 252340:
    {
        returnValue = F("Pflümerweg");
        break;
    }
    case 252341:
    {
        returnValue = F("Pfnorrstr.");
        break;
    }
    case 252342:
    {
        returnValue = F("Pfnorstr.");
        break;
    }
    case 252343:
    {
        returnValue = F("Pfofelder Str.");
        break;
    }
    case 252344:
    {
        returnValue = F("Pfohbergweg");
        break;
    }
    case 252345:
    {
        returnValue = F("Pfohlbacher Str.");
        break;
    }
    case 252346:
    {
        returnValue = F("Pfohlenweg");
        break;
    }
    case 252347:
    {
        returnValue = F("Pfohlhofstr.");
        break;
    }
    case 252348:
    {
        returnValue = F("Pfohrener Str.");
        break;
    }
    case 252349:
    {
        returnValue = F("Pfordter Str.");
        break;
    }
    case 252350:
    {
        returnValue = F("Pfordtgasse");
        break;
    }
    case 252351:
    {
        returnValue = F("Pforrgasse");
        break;
    }
    case 252352:
    {
        returnValue = F("Pfortackerweg");
        break;
    }
    case 252353:
    {
        returnValue = F("Pfortaer Str.");
        break;
    }
    case 252354:
    {
        returnValue = F("Pforte");
        break;
    }
    case 252355:
    {
        returnValue = F("Pfortecke");
        break;
    }
    case 252356:
    {
        returnValue = F("Pfortefeldstr.");
        break;
    }
    case 252357:
    {
        returnValue = F("Pfortegasse");
        break;
    }
    case 252358:
    {
        returnValue = F("Pfortenberg");
        break;
    }
    case 252359:
    {
        returnValue = F("Pfortener Str.");
        break;
    }
    case 252360:
    {
        returnValue = F("Pfortengang");
        break;
    }
    case 252361:
    {
        returnValue = F("Pfortengarten");
        break;
    }
    case 252362:
    {
        returnValue = F("Pfortengasse");
        break;
    }
    case 252363:
    {
        returnValue = F("Pfortengewann");
        break;
    }
    case 252364:
    {
        returnValue = F("Pfortenklinge");
        break;
    }
    case 252365:
    {
        returnValue = F("Pfortenplatz");
        break;
    }
    case 252366:
    {
        returnValue = F("Pfortenring");
        break;
    }
    case 252367:
    {
        returnValue = F("Pfortensteg");
        break;
    }
    case 252368:
    {
        returnValue = F("Pfortenstr.");
        break;
    }
    case 252369:
    {
        returnValue = F("Pfortenwallgasse");
        break;
    }
    case 252370:
    {
        returnValue = F("Pfortenweg");
        break;
    }
    case 252371:
    {
        returnValue = F("Pfortenweingarten");
        break;
    }
    case 252372:
    {
        returnValue = F("Pfortenwingert");
        break;
    }
    case 252373:
    {
        returnValue = F("Pfortenäcker Weg");
        break;
    }
    case 252374:
    {
        returnValue = F("Pfortestr.");
        break;
    }
    case 252375:
    {
        returnValue = F("Pfortgartenstr.");
        break;
    }
    case 252376:
    {
        returnValue = F("Pfortgasse");
        break;
    }
    case 252377:
    {
        returnValue = F("Pfortgärten");
        break;
    }
    case 252378:
    {
        returnValue = F("Pfortmühle");
        break;
    }
    case 252379:
    {
        returnValue = F("Pfortmühlenstr.");
        break;
    }
    case 252380:
    {
        returnValue = F("Pfortmüllerstr.");
        break;
    }
    case 252381:
    {
        returnValue = F("Pfortrain");
        break;
    }
    case 252382:
    {
        returnValue = F("Pforzener Str.");
        break;
    }
    case 252383:
    {
        returnValue = F("Pforzheimer Landstr.");
        break;
    }
    case 252384:
    {
        returnValue = F("Pforzheimer Mühle");
        break;
    }
    case 252385:
    {
        returnValue = F("Pforzheimer Platz");
        break;
    }
    case 252386:
    {
        returnValue = F("Pforzheimer Str.");
        break;
    }
    case 252387:
    {
        returnValue = F("Pforzheimer Weg");
        break;
    }
    case 252388:
    {
        returnValue = F("Pfossertweg");
        break;
    }
    case 252389:
    {
        returnValue = F("Pfostenackerweg");
        break;
    }
    case 252390:
    {
        returnValue = F("Pfostenbergweg");
        break;
    }
    case 252391:
    {
        returnValue = F("Pfostenweg");
        break;
    }
    case 252392:
    {
        returnValue = F("Pfosterweg");
        break;
    }
    case 252393:
    {
        returnValue = F("Pfr.-Duffner-Weg");
        break;
    }
    case 252394:
    {
        returnValue = F("Pfr.-Jakob-Martin-Platz");
        break;
    }
    case 252395:
    {
        returnValue = F("Pfr.-Michael-Frey-Str.");
        break;
    }
    case 252396:
    {
        returnValue = F("Pfr.-Suitbert-Schmitz-Weg");
        break;
    }
    case 252397:
    {
        returnValue = F("Pfr.-Treiber-Weg");
        break;
    }
    case 252398:
    {
        returnValue = F("Pfr.-Wallner-Platz");
        break;
    }
    case 252399:
    {
        returnValue = F("Pfr.-de-la-Haye-Str.");
        break;
    }
    case 252400:
    {
        returnValue = F("Pfram");
        break;
    }
    case 252401:
    {
        returnValue = F("Pframmerner Str.");
        break;
    }
    case 252402:
    {
        returnValue = F("Pframmerner Weg");
        break;
    }
    case 252403:
    {
        returnValue = F("Pfraundorfer Str.");
        break;
    }
    case 252404:
    {
        returnValue = F("Pfraundorfer Weg");
        break;
    }
    case 252405:
    {
        returnValue = F("Pfraunfelder Str.");
        break;
    }
    case 252406:
    {
        returnValue = F("Pfraunstetter Str.");
        break;
    }
    case 252407:
    {
        returnValue = F("Pfreimdbrücke");
        break;
    }
    case 252408:
    {
        returnValue = F("Pfreimdengasse");
        break;
    }
    case 252409:
    {
        returnValue = F("Pfreimder Str.");
        break;
    }
    case 252410:
    {
        returnValue = F("Pfreimdhang");
        break;
    }
    case 252411:
    {
        returnValue = F("Pfreimdtalstr.");
        break;
    }
    case 252412:
    {
        returnValue = F("Pfreimterstr.");
        break;
    }
    case 252413:
    {
        returnValue = F("Pfrentsch");
        break;
    }
    case 252414:
    {
        returnValue = F("Pfriemacker");
        break;
    }
    case 252415:
    {
        returnValue = F("Pfriemenweg");
        break;
    }
    case 252416:
    {
        returnValue = F("Pfriemsdorfer Str.");
        break;
    }
    case 252417:
    {
        returnValue = F("Pfriemsuhlweg");
        break;
    }
    case 252418:
    {
        returnValue = F("Pfrimmanlage");
        break;
    }
    case 252419:
    {
        returnValue = F("Pfrimmbachstr.");
        break;
    }
    case 252420:
    {
        returnValue = F("Pfrimmersbachgasse");
        break;
    }
    case 252421:
    {
        returnValue = F("Pfrimmstr.");
        break;
    }
    case 252422:
    {
        returnValue = F("Pfrimmtalsiedlung");
        break;
    }
    case 252423:
    {
        returnValue = F("Pfrombacher Str.");
        break;
    }
    case 252424:
    {
        returnValue = F("Pfrommersriß");
        break;
    }
    case 252425:
    {
        returnValue = F("Pfrommersweg");
        break;
    }
    case 252426:
    {
        returnValue = F("Pfromäckerstr.");
        break;
    }
    case 252427:
    {
        returnValue = F("Pfrondorfer Allee");
        break;
    }
    case 252428:
    {
        returnValue = F("Pfrondorfer Str.");
        break;
    }
    case 252429:
    {
        returnValue = F("Pfrondorfer Weg");
        break;
    }
    case 252430:
    {
        returnValue = F("Pfronstetter Str.");
        break;
    }
    case 252431:
    {
        returnValue = F("Pfrontener Str.");
        break;
    }
    case 252432:
    {
        returnValue = F("Pfrontener Weg");
        break;
    }
    case 252433:
    {
        returnValue = F("Pfrundrebenweg");
        break;
    }
    case 252434:
    {
        returnValue = F("Pfrundäckergasse");
        break;
    }
    case 252435:
    {
        returnValue = F("Pfrunger Str.");
        break;
    }
    case 252436:
    {
        returnValue = F("Pfründeplatz");
        break;
    }
    case 252437:
    {
        returnValue = F("Pfründerweg");
        break;
    }
    case 252438:
    {
        returnValue = F("Pfründesiedlung");
        break;
    }
    case 252439:
    {
        returnValue = F("Pfründestr.");
        break;
    }
    case 252440:
    {
        returnValue = F("Pfründeweg");
        break;
    }
    case 252441:
    {
        returnValue = F("Pfründnerstr.");
        break;
    }
    case 252442:
    {
        returnValue = F("Pfudrachöder Str.");
        break;
    }
    case 252443:
    {
        returnValue = F("Pfuffertsgasse");
        break;
    }
    case 252444:
    {
        returnValue = F("Pfuhlacker");
        break;
    }
    case 252445:
    {
        returnValue = F("Pfuhlbosch");
        break;
    }
    case 252446:
    {
        returnValue = F("Pfuhler Str.");
        break;
    }
    case 252447:
    {
        returnValue = F("Pfuhler Weg");
        break;
    }
    case 252448:
    {
        returnValue = F("Pfuhlfeld");
        break;
    }
    case 252449:
    {
        returnValue = F("Pfuhlgasse");
        break;
    }
    case 252450:
    {
        returnValue = F("Pfuhlmattenweg");
        break;
    }
    case 252451:
    {
        returnValue = F("Pfuhlschneise");
        break;
    }
    case 252452:
    {
        returnValue = F("Pfuhlstr.");
        break;
    }
    case 252453:
    {
        returnValue = F("Pfuhlwaldweg");
        break;
    }
    case 252454:
    {
        returnValue = F("Pfuhlwattweg");
        break;
    }
    case 252455:
    {
        returnValue = F("Pfuhlweg");
        break;
    }
    case 252456:
    {
        returnValue = F("Pfuhlwinkel");
        break;
    }
    case 252457:
    {
        returnValue = F("Pfulbstr.");
        break;
    }
    case 252458:
    {
        returnValue = F("Pfullendorf");
        break;
    }
    case 252459:
    {
        returnValue = F("Pfullendorfer Str.");
        break;
    }
    case 252460:
    {
        returnValue = F("Pfullinger Grenzweg");
        break;
    }
    case 252461:
    {
        returnValue = F("Pfullinger Steige");
        break;
    }
    case 252462:
    {
        returnValue = F("Pfullinger Str.");
        break;
    }
    case 252463:
    {
        returnValue = F("Pfullinger Weg");
        break;
    }
    case 252464:
    {
        returnValue = F("Pfullingerhau-Weg");
        break;
    }
    case 252465:
    {
        returnValue = F("Pfullingerhof");
        break;
    }
    case 252466:
    {
        returnValue = F("Pfundersstr.");
        break;
    }
    case 252467:
    {
        returnValue = F("Pfundhardthof");
        break;
    }
    case 252468:
    {
        returnValue = F("Pfundmairweg");
        break;
    }
    case 252469:
    {
        returnValue = F("Pfundtnerweg");
        break;
    }
    case 252470:
    {
        returnValue = F("Pfungstadter Str.");
        break;
    }
    case 252471:
    {
        returnValue = F("Pfungstädter Hausschneise");
        break;
    }
    case 252472:
    {
        returnValue = F("Pfungstädter Kreuz");
        break;
    }
    case 252473:
    {
        returnValue = F("Pfungstädter Str.");
        break;
    }
    case 252474:
    {
        returnValue = F("Pfungstädter Weg");
        break;
    }
    case 252475:
    {
        returnValue = F("Pfunzener Weg");
        break;
    }
    case 252476:
    {
        returnValue = F("Pfuserweg");
        break;
    }
    case 252477:
    {
        returnValue = F("Pfädchen");
        break;
    }
    case 252478:
    {
        returnValue = F("Pfädchengasse");
        break;
    }
    case 252479:
    {
        returnValue = F("Pfädchensweg");
        break;
    }
    case 252480:
    {
        returnValue = F("Pfädle");
        break;
    }
    case 252481:
    {
        returnValue = F("Pfädlesweg");
        break;
    }
    case 252482:
    {
        returnValue = F("Pfädleweg");
        break;
    }
    case 252483:
    {
        returnValue = F("Pfädlistr.");
        break;
    }
    case 252484:
    {
        returnValue = F("Pfäffin");
        break;
    }
    case 252485:
    {
        returnValue = F("Pfäffinger Str.");
        break;
    }
    case 252486:
    {
        returnValue = F("Pfäffleinsgäßchen");
        break;
    }
    case 252487:
    {
        returnValue = F("Pfäfflinshofstr.");
        break;
    }
    case 252488:
    {
        returnValue = F("Pfäfflinstr.");
        break;
    }
    case 252489:
    {
        returnValue = F("Pfählanger");
        break;
    }
    case 252490:
    {
        returnValue = F("Pfählangerstr.");
        break;
    }
    case 252491:
    {
        returnValue = F("Pfählbergweg");
        break;
    }
    case 252492:
    {
        returnValue = F("Pfählenweg");
        break;
    }
    case 252493:
    {
        returnValue = F("Pfählergasse");
        break;
    }
    case 252494:
    {
        returnValue = F("Pfählerpark");
        break;
    }
    case 252495:
    {
        returnValue = F("Pfählerstr.");
        break;
    }
    case 252496:
    {
        returnValue = F("Pfählerweg");
        break;
    }
    case 252497:
    {
        returnValue = F("Pfählingsstr.");
        break;
    }
    case 252498:
    {
        returnValue = F("Pfälzer Allee");
        break;
    }
    case 252499:
    {
        returnValue = F("Pfälzer Brücke");
        break;
    }
    case 252500:
    {
        returnValue = F("Pfälzer Gasse");
        break;
    }
    case 252501:
    {
        returnValue = F("Pfälzer Graben");
        break;
    }
    case 252502:
    {
        returnValue = F("Pfälzer Gässchen");
        break;
    }
    case 252503:
    {
        returnValue = F("Pfälzer Platz");
        break;
    }
    case 252504:
    {
        returnValue = F("Pfälzer Ring");
        break;
    }
    case 252505:
    {
        returnValue = F("Pfälzer Steg");
        break;
    }
    case 252506:
    {
        returnValue = F("Pfälzer Str.");
        break;
    }
    case 252507:
    {
        returnValue = F("Pfälzer Waldweg");
        break;
    }
    case 252508:
    {
        returnValue = F("Pfälzer Weg");
        break;
    }
    case 252509:
    {
        returnValue = F("Pfälzer-Wald-Str.");
        break;
    }
    case 252510:
    {
        returnValue = F("Pfälzergasse");
        break;
    }
    case 252511:
    {
        returnValue = F("Pfälzerstr.");
        break;
    }
    case 252512:
    {
        returnValue = F("Pfälzerwaldweg");
        break;
    }
    case 252513:
    {
        returnValue = F("Pfälzerweg");
        break;
    }
    case 252514:
    {
        returnValue = F("Pfälzische Str.");
        break;
    }
    case 252515:
    {
        returnValue = F("Pfändegraben");
        break;
    }
    case 252516:
    {
        returnValue = F("Pfänderblick");
        break;
    }
    case 252517:
    {
        returnValue = F("Pfänderstr.");
        break;
    }
    case 252518:
    {
        returnValue = F("Pfänderweg");
        break;
    }
    case 252519:
    {
        returnValue = F("Pfänderwinkel");
        break;
    }
    case 252520:
    {
        returnValue = F("Pfändhäuser Weg");
        break;
    }
    case 252521:
    {
        returnValue = F("Pfändlermatte");
        break;
    }
    case 252522:
    {
        returnValue = F("Pfännerhöhe");
        break;
    }
    case 252523:
    {
        returnValue = F("Pfärricher Berg");
        break;
    }
    case 252524:
    {
        returnValue = F("Pfärricher Str.");
        break;
    }
    case 252525:
    {
        returnValue = F("Pfärrle");
        break;
    }
    case 252526:
    {
        returnValue = F("Pföbe");
        break;
    }
    case 252527:
    {
        returnValue = F("Pförich");
        break;
    }
    case 252528:
    {
        returnValue = F("Pförner Brücke");
        break;
    }
    case 252529:
    {
        returnValue = F("Pförner Gasse");
        break;
    }
    case 252530:
    {
        returnValue = F("Pförrenstr.");
        break;
    }
    case 252531:
    {
        returnValue = F("Pförrerauweg");
        break;
    }
    case 252532:
    {
        returnValue = F("Pförringer Str.");
        break;
    }
    case 252533:
    {
        returnValue = F("Pförtchen");
        break;
    }
    case 252534:
    {
        returnValue = F("Pförtchenstr.");
        break;
    }
    case 252535:
    {
        returnValue = F("Pförtelgasse");
        break;
    }
    case 252536:
    {
        returnValue = F("Pförtelsteig");
        break;
    }
    case 252537:
    {
        returnValue = F("Pförtelstr.");
        break;
    }
    case 252538:
    {
        returnValue = F("Pförtleinsgasse");
        break;
    }
    case 252539:
    {
        returnValue = F("Pförtlesweg");
        break;
    }
    case 252540:
    {
        returnValue = F("Pförtweg");
        break;
    }
    case 252541:
    {
        returnValue = F("Pfühl");
        break;
    }
    case 252542:
    {
        returnValue = F("Pfühlpark");
        break;
    }
    case 252543:
    {
        returnValue = F("Pfühlstr.");
        break;
    }
    case 252544:
    {
        returnValue = F("Pfünzer Str.");
        break;
    }
    case 252545:
    {
        returnValue = F("Pfünzstr.");
        break;
    }
    case 252546:
    {
        returnValue = F("Pfürdtstr.");
        break;
    }
    case 252547:
    {
        returnValue = F("Pfütschbergstr.");
        break;
    }
    case 252548:
    {
        returnValue = F("Pfützen");
        break;
    }
    case 252549:
    {
        returnValue = F("Pfützenbaum");
        break;
    }
    case 252550:
    {
        returnValue = F("Pfützengäßchen");
        break;
    }
    case 252551:
    {
        returnValue = F("Pfützenrasen");
        break;
    }
    case 252552:
    {
        returnValue = F("Pfützenstr.");
        break;
    }
    case 252553:
    {
        returnValue = F("Pfützenweg");
        break;
    }
    case 252554:
    {
        returnValue = F("Pfützenäcker");
        break;
    }
    case 252555:
    {
        returnValue = F("Pfützgasse");
        break;
    }
    case 252556:
    {
        returnValue = F("Pfützstr.");
        break;
    }
    case 252557:
    {
        returnValue = F("Pfützthaler Str.");
        break;
    }
    case 252558:
    {
        returnValue = F("Pfützweg");
        break;
    }
    case 252559:
    {
        returnValue = F("Pfützäckerweg");
        break;
    }
    case 252560:
    {
        returnValue = F("Phantasialandstr.");
        break;
    }
    case 252561:
    {
        returnValue = F("Pharisäerstieg");
        break;
    }
    case 252562:
    {
        returnValue = F("Pharmachem Str.");
        break;
    }
    case 252563:
    {
        returnValue = F("Phil.-Matth.-Hahn-Str.");
        break;
    }
    case 252564:
    {
        returnValue = F("Philadelphiastr.");
        break;
    }
    case 252565:
    {
        returnValue = F("Philiaweg");
        break;
    }
    case 252566:
    {
        returnValue = F("Philip-Rosenthal-Platz");
        break;
    }
    case 252567:
    {
        returnValue = F("Philipinenkath");
        break;
    }
    case 252568:
    {
        returnValue = F("Philipp-Adam-Ulrich-Str.");
        break;
    }
    case 252569:
    {
        returnValue = F("Philipp-Amsler-Str.");
        break;
    }
    case 252570:
    {
        returnValue = F("Philipp-Andres-Str.");
        break;
    }
    case 252571:
    {
        returnValue = F("Philipp-August-Schleißner-Weg");
        break;
    }
    case 252572:
    {
        returnValue = F("Philipp-Baldus-Str.");
        break;
    }
    case 252573:
    {
        returnValue = F("Philipp-Bert-Str.");
        break;
    }
    case 252574:
    {
        returnValue = F("Philipp-Best-Str.");
        break;
    }
    case 252575:
    {
        returnValue = F("Philipp-Bitsch-Str.");
        break;
    }
    case 252576:
    {
        returnValue = F("Philipp-Brandin-Str.");
        break;
    }
    case 252577:
    {
        returnValue = F("Philipp-Brunnemer-Weg");
        break;
    }
    case 252578:
    {
        returnValue = F("Philipp-Brückner-Str.");
        break;
    }
    case 252579:
    {
        returnValue = F("Philipp-Buxbaum-Str.");
        break;
    }
    case 252580:
    {
        returnValue = F("Philipp-Carl-Weiss-Platz");
        break;
    }
    case 252581:
    {
        returnValue = F("Philipp-Christ-Str.");
        break;
    }
    case 252582:
    {
        returnValue = F("Philipp-Dirr-Str.");
        break;
    }
    case 252583:
    {
        returnValue = F("Philipp-Dux-Str.");
        break;
    }
    case 252584:
    {
        returnValue = F("Philipp-Engel-Str.");
        break;
    }
    case 252585:
    {
        returnValue = F("Philipp-Ernst-Str.");
        break;
    }
    case 252586:
    {
        returnValue = F("Philipp-Fasel-Str.");
        break;
    }
    case 252587:
    {
        returnValue = F("Philipp-Faust-Str.");
        break;
    }
    case 252588:
    {
        returnValue = F("Philipp-Fauth-Str.");
        break;
    }
    case 252589:
    {
        returnValue = F("Philipp-Faßbender-Str.");
        break;
    }
    case 252590:
    {
        returnValue = F("Philipp-Franck-Weg");
        break;
    }
    case 252591:
    {
        returnValue = F("Philipp-Franz-von-Siebold-Weg");
        break;
    }
    case 252592:
    {
        returnValue = F("Philipp-Friedrich-Hiller-Weg");
        break;
    }
    case 252593:
    {
        returnValue = F("Philipp-Funk-Str.");
        break;
    }
    case 252594:
    {
        returnValue = F("Philipp-Furtwängler-Str.");
        break;
    }
    case 252595:
    {
        returnValue = F("Philipp-Försch-Str.");
        break;
    }
    case 252596:
    {
        returnValue = F("Philipp-Gehling-Str.");
        break;
    }
    case 252597:
    {
        returnValue = F("Philipp-Glenz-Str.");
        break;
    }
    case 252598:
    {
        returnValue = F("Philipp-Glock-Str.");
        break;
    }
    case 252599:
    {
        returnValue = F("Philipp-Gottfried-Schaudt-Str.");
        break;
    }
    case 252600:
    {
        returnValue = F("Philipp-Grimm-Str.");
        break;
    }
    case 252601:
    {
        returnValue = F("Philipp-Gönner-Str.");
        break;
    }
    case 252602:
    {
        returnValue = F("Philipp-Günzelmann-Weg");
        break;
    }
    case 252603:
    {
        returnValue = F("Philipp-Hackert-Str.");
        break;
    }
    case 252604:
    {
        returnValue = F("Philipp-Hafner-Str.");
        break;
    }
    case 252605:
    {
        returnValue = F("Philipp-Hagner-Str.");
        break;
    }
    case 252606:
    {
        returnValue = F("Philipp-Happacher-Weg");
        break;
    }
    case 252607:
    {
        returnValue = F("Philipp-Hauck-Str.");
        break;
    }
    case 252608:
    {
        returnValue = F("Philipp-Heck-Str.");
        break;
    }
    case 252609:
    {
        returnValue = F("Philipp-Heckel-Str.");
        break;
    }
    case 252610:
    {
        returnValue = F("Philipp-Heim-Platz");
        break;
    }
    case 252611:
    {
        returnValue = F("Philipp-Heinrich-Messer-Str.");
        break;
    }
    case 252612:
    {
        returnValue = F("Philipp-Hepp-Str.");
        break;
    }
    case 252613:
    {
        returnValue = F("Philipp-Hirsch-Str.");
        break;
    }
    case 252614:
    {
        returnValue = F("Philipp-Hoffmann-Platz");
        break;
    }
    case 252615:
    {
        returnValue = F("Philipp-Hoffmeister-Str.");
        break;
    }
    case 252616:
    {
        returnValue = F("Philipp-Hohn-Platz");
        break;
    }
    case 252617:
    {
        returnValue = F("Philipp-Holl-Str.");
        break;
    }
    case 252618:
    {
        returnValue = F("Philipp-Holly-Str.");
        break;
    }
    case 252619:
    {
        returnValue = F("Philipp-Holzmann-Str.");
        break;
    }
    case 252620:
    {
        returnValue = F("Philipp-Houben-Str.");
        break;
    }
    case 252621:
    {
        returnValue = F("Philipp-Häring-Str.");
        break;
    }
    case 252622:
    {
        returnValue = F("Philipp-Jakob-Hach-Weg");
        break;
    }
    case 252623:
    {
        returnValue = F("Philipp-Jakob-Manz-Str.");
        break;
    }
    case 252624:
    {
        returnValue = F("Philipp-Jeningen-Str.");
        break;
    }
    case 252625:
    {
        returnValue = F("Philipp-Julius-Weg");
        break;
    }
    case 252626:
    {
        returnValue = F("Philipp-Karcher-Str.");
        break;
    }
    case 252627:
    {
        returnValue = F("Philipp-Karl-Str.");
        break;
    }
    case 252628:
    {
        returnValue = F("Philipp-Keim-Str.");
        break;
    }
    case 252629:
    {
        returnValue = F("Philipp-Kirchner-Str.");
        break;
    }
    case 252630:
    {
        returnValue = F("Philipp-Knieb-Str.");
        break;
    }
    case 252631:
    {
        returnValue = F("Philipp-Kranz-Str.");
        break;
    }
    case 252632:
    {
        returnValue = F("Philipp-Krauth-Str.");
        break;
    }
    case 252633:
    {
        returnValue = F("Philipp-Krauth-Weg");
        break;
    }
    case 252634:
    {
        returnValue = F("Philipp-Kreißler-Str.");
        break;
    }
    case 252635:
    {
        returnValue = F("Philipp-Krämer-Ring");
        break;
    }
    case 252636:
    {
        returnValue = F("Philipp-Kühner-Str.");
        break;
    }
    case 252637:
    {
        returnValue = F("Philipp-Larens-Str.");
        break;
    }
    case 252638:
    {
        returnValue = F("Philipp-Lassen-Koppel");
        break;
    }
    case 252639:
    {
        returnValue = F("Philipp-Loosen-Str.");
        break;
    }
    case 252640:
    {
        returnValue = F("Philipp-Lösch-Weg");
        break;
    }
    case 252641:
    {
        returnValue = F("Philipp-Maas-Weg");
        break;
    }
    case 252642:
    {
        returnValue = F("Philipp-Manz-Str.");
        break;
    }
    case 252643:
    {
        returnValue = F("Philipp-Marolph-Str.");
        break;
    }
    case 252644:
    {
        returnValue = F("Philipp-Matthäus-Hahn-Str.");
        break;
    }
    case 252645:
    {
        returnValue = F("Philipp-Mayer-Str.");
        break;
    }
    case 252646:
    {
        returnValue = F("Philipp-Mees-Platz");
        break;
    }
    case 252647:
    {
        returnValue = F("Philipp-Melanchthon-Str.");
        break;
    }
    case 252648:
    {
        returnValue = F("Philipp-Merkel-Str.");
        break;
    }
    case 252649:
    {
        returnValue = F("Philipp-März-Str.");
        break;
    }
    case 252650:
    {
        returnValue = F("Philipp-Mühlmayer-Str.");
        break;
    }
    case 252651:
    {
        returnValue = F("Philipp-Müller-Platz");
        break;
    }
    case 252652:
    {
        returnValue = F("Philipp-Müller-Str.");
        break;
    }
    case 252653:
    {
        returnValue = F("Philipp-Müller-Weg");
        break;
    }
    case 252654:
    {
        returnValue = F("Philipp-Münster-Str.");
        break;
    }
    case 252655:
    {
        returnValue = F("Philipp-Neri-Str.");
        break;
    }
    case 252656:
    {
        returnValue = F("Philipp-Neri-Weg");
        break;
    }
    case 252657:
    {
        returnValue = F("Philipp-Nicolai-Platz");
        break;
    }
    case 252658:
    {
        returnValue = F("Philipp-Nicolai-Str.");
        break;
    }
    case 252659:
    {
        returnValue = F("Philipp-Nicolai-Weg");
        break;
    }
    case 252660:
    {
        returnValue = F("Philipp-Noll-Str.");
        break;
    }
    case 252661:
    {
        returnValue = F("Philipp-Oehmigke-Str.");
        break;
    }
    case 252662:
    {
        returnValue = F("Philipp-Oldenbürger-Weg");
        break;
    }
    case 252663:
    {
        returnValue = F("Philipp-Orth-Str.");
        break;
    }
    case 252664:
    {
        returnValue = F("Philipp-Otto-Runge-Str.");
        break;
    }
    case 252665:
    {
        returnValue = F("Philipp-Otto-Runge-Weg");
        break;
    }
    case 252666:
    {
        returnValue = F("Philipp-Palm-Weg");
        break;
    }
    case 252667:
    {
        returnValue = F("Philipp-Perron-Str.");
        break;
    }
    case 252668:
    {
        returnValue = F("Philipp-Pforr-Str.");
        break;
    }
    case 252669:
    {
        returnValue = F("Philipp-Rauch-Platz");
        break;
    }
    case 252670:
    {
        returnValue = F("Philipp-Rauch-Str.");
        break;
    }
    case 252671:
    {
        returnValue = F("Philipp-Reemtsma-Str.");
        break;
    }
    case 252672:
    {
        returnValue = F("Philipp-Reis-Gang");
        break;
    }
    case 252673:
    {
        returnValue = F("Philipp-Reis-Passage");
        break;
    }
    case 252674:
    {
        returnValue = F("Philipp-Reis-Platz");
        break;
    }
    case 252675:
    {
        returnValue = F("Philipp-Reis-Ring");
        break;
    }
    case 252676:
    {
        returnValue = F("Philipp-Reis-Str.");
        break;
    }
    case 252677:
    {
        returnValue = F("Philipp-Reis-Weg");
        break;
    }
    case 252678:
    {
        returnValue = F("Philipp-Reiss-Str.");
        break;
    }
    case 252679:
    {
        returnValue = F("Philipp-Rothhaar-Str.");
        break;
    }
    case 252680:
    {
        returnValue = F("Philipp-Röth-Weg");
        break;
    }
    case 252681:
    {
        returnValue = F("Philipp-Rüttger-Str.");
        break;
    }
    case 252682:
    {
        returnValue = F("Philipp-Scheidemann-Str.");
        break;
    }
    case 252683:
    {
        returnValue = F("Philipp-Schelein-Weg");
        break;
    }
    case 252684:
    {
        returnValue = F("Philipp-Schlick-Str.");
        break;
    }
    case 252685:
    {
        returnValue = F("Philipp-Schmitt-Str.");
        break;
    }
    case 252686:
    {
        returnValue = F("Philipp-Schmunck-Str.");
        break;
    }
    case 252687:
    {
        returnValue = F("Philipp-Schneider-Str.");
        break;
    }
    case 252688:
    {
        returnValue = F("Philipp-Schugmann-Str.");
        break;
    }
    case 252689:
    {
        returnValue = F("Philipp-Schwab-Str.");
        break;
    }
    case 252690:
    {
        returnValue = F("Philipp-Schwamb-Str.");
        break;
    }
    case 252691:
    {
        returnValue = F("Philipp-Schwarze-Str.");
        break;
    }
    case 252692:
    {
        returnValue = F("Philipp-Schwarzenberg-Str.");
        break;
    }
    case 252693:
    {
        returnValue = F("Philipp-Schäfer-Str.");
        break;
    }
    case 252694:
    {
        returnValue = F("Philipp-Schäfer-Weg");
        break;
    }
    case 252695:
    {
        returnValue = F("Philipp-Schömbs-Str.");
        break;
    }
    case 252696:
    {
        returnValue = F("Philipp-Schückle-Str.");
        break;
    }
    case 252697:
    {
        returnValue = F("Philipp-Seipp-Str.");
        break;
    }
    case 252698:
    {
        returnValue = F("Philipp-Semmelweis-Str.");
        break;
    }
    case 252699:
    {
        returnValue = F("Philipp-Sigismund-Allee");
        break;
    }
    case 252700:
    {
        returnValue = F("Philipp-Spitta-Str.");
        break;
    }
    case 252701:
    {
        returnValue = F("Philipp-Stempel-Str.");
        break;
    }
    case 252702:
    {
        returnValue = F("Philipp-Stumpf-Str.");
        break;
    }
    case 252703:
    {
        returnValue = F("Philipp-Stöck-Weg");
        break;
    }
    case 252704:
    {
        returnValue = F("Philipp-Stöhr-Weg");
        break;
    }
    case 252705:
    {
        returnValue = F("Philipp-Trunk-Str.");
        break;
    }
    case 252706:
    {
        returnValue = F("Philipp-Ulhart-Str.");
        break;
    }
    case 252707:
    {
        returnValue = F("Philipp-Ulrich-Moser-Platz");
        break;
    }
    case 252708:
    {
        returnValue = F("Philipp-Vollmer-Str.");
        break;
    }
    case 252709:
    {
        returnValue = F("Philipp-Völker-Str.");
        break;
    }
    case 252710:
    {
        returnValue = F("Philipp-Walter-Str.");
        break;
    }
    case 252711:
    {
        returnValue = F("Philipp-Wasserburg-Str.");
        break;
    }
    case 252712:
    {
        returnValue = F("Philipp-Weber-Str.");
        break;
    }
    case 252713:
    {
        returnValue = F("Philipp-Wehr-Str.");
        break;
    }
    case 252714:
    {
        returnValue = F("Philipp-Weiß-Str.");
        break;
    }
    case 252715:
    {
        returnValue = F("Philipp-Wirtgen-Str.");
        break;
    }
    case 252716:
    {
        returnValue = F("Philipp-Wolf-Weg");
        break;
    }
    case 252717:
    {
        returnValue = F("Philipp-Wolfrum-Str.");
        break;
    }
    case 252718:
    {
        returnValue = F("Philipp-Wolfrum-Weg");
        break;
    }
    case 252719:
    {
        returnValue = F("Philipp-Ziegler-Str.");
        break;
    }
    case 252720:
    {
        returnValue = F("Philipp-Zimmermann-Str.");
        break;
    }
    case 252721:
    {
        returnValue = F("Philipp-Zorn-Str.");
        break;
    }
    case 252722:
    {
        returnValue = F("Philipp-de-Haas-Str.");
        break;
    }
    case 252723:
    {
        returnValue = F("Philipp-von-Bostel-Weg");
        break;
    }
    case 252724:
    {
        returnValue = F("Philipp-von-Flersheim-Str.");
        break;
    }
    case 252725:
    {
        returnValue = F("Philipp-von-Heck-Str.");
        break;
    }
    case 252726:
    {
        returnValue = F("Philipp-von-Hörde-Str.");
        break;
    }
    case 252727:
    {
        returnValue = F("Philippbrücke");
        break;
    }
    case 252728:
    {
        returnValue = F("Philippe-Suchard-Str.");
        break;
    }
    case 252729:
    {
        returnValue = F("Philippenkuhle");
        break;
    }
    case 252730:
    {
        returnValue = F("Philippenwäldleweg");
        break;
    }
    case 252731:
    {
        returnValue = F("Philippine-Engelhardt-Weg");
        break;
    }
    case 252732:
    {
        returnValue = F("Philippine-Welser-Str.");
        break;
    }
    case 252733:
    {
        returnValue = F("Philippinenburg");
        break;
    }
    case 252734:
    {
        returnValue = F("Philippinendorf");
        break;
    }
    case 252735:
    {
        returnValue = F("Philippinenhof");
        break;
    }
    case 252736:
    {
        returnValue = F("Philippinenhöfer Weg");
        break;
    }
    case 252737:
    {
        returnValue = F("Philippinenstr.");
        break;
    }
    case 252738:
    {
        returnValue = F("Philippinenthal");
        break;
    }
    case 252739:
    {
        returnValue = F("Philippionsweg");
        break;
    }
    case 252740:
    {
        returnValue = F("Philippistr.");
        break;
    }
    case 252741:
    {
        returnValue = F("Philippsanlage");
        break;
    }
    case 252742:
    {
        returnValue = F("Philippsberg");
        break;
    }
    case 252743:
    {
        returnValue = F("Philippsbergstr.");
        break;
    }
    case 252744:
    {
        returnValue = F("Philippsbrunnenweg");
        break;
    }
    case 252745:
    {
        returnValue = F("Philippsburg");
        break;
    }
    case 252746:
    {
        returnValue = F("Philippsburger Landstr.");
        break;
    }
    case 252747:
    {
        returnValue = F("Philippsburger Str.");
        break;
    }
    case 252748:
    {
        returnValue = F("Philippsburger Weg");
        break;
    }
    case 252749:
    {
        returnValue = F("Philippsburgerstr.");
        break;
    }
    case 252750:
    {
        returnValue = F("Philippsdorfer Str.");
        break;
    }
    case 252751:
    {
        returnValue = F("Philippseicher Str.");
        break;
    }
    case 252752:
    {
        returnValue = F("Philippseicher Trift");
        break;
    }
    case 252753:
    {
        returnValue = F("Philippsgasse");
        break;
    }
    case 252754:
    {
        returnValue = F("Philippsheimer Str.");
        break;
    }
    case 252755:
    {
        returnValue = F("Philippshof");
        break;
    }
    case 252756:
    {
        returnValue = F("Philippshoffnung");
        break;
    }
    case 252757:
    {
        returnValue = F("Philippshospital");
        break;
    }
    case 252758:
    {
        returnValue = F("Philippshöhe");
        break;
    }
    case 252759:
    {
        returnValue = F("Philippsohnstr.");
        break;
    }
    case 252760:
    {
        returnValue = F("Philippspfad");
        break;
    }
    case 252761:
    {
        returnValue = F("Philippsring");
        break;
    }
    case 252762:
    {
        returnValue = F("Philippsruher Allee");
        break;
    }
    case 252763:
    {
        returnValue = F("Philippsteiner Hohl");
        break;
    }
    case 252764:
    {
        returnValue = F("Philippsteiner Weg");
        break;
    }
    case 252765:
    {
        returnValue = F("Philippsthaler Dorfstr.");
        break;
    }
    case 252766:
    {
        returnValue = F("Philippsthaler Str.");
        break;
    }
    case 252767:
    {
        returnValue = F("Philippsthaler Weg");
        break;
    }
    case 252768:
    {
        returnValue = F("Philippstr.");
        break;
    }
    case 252769:
    {
        returnValue = F("Philippsweg");
        break;
    }
    case 252770:
    {
        returnValue = F("Philippswonne");
        break;
    }
    case 252771:
    {
        returnValue = F("Philippusstr.");
        break;
    }
    case 252772:
    {
        returnValue = F("Philippweg");
        break;
    }
    case 252773:
    {
        returnValue = F("Philipsgraben");
        break;
    }
    case 252774:
    {
        returnValue = F("Philipsstr.");
        break;
    }
    case 252775:
    {
        returnValue = F("Phillip-Egert-Weg");
        break;
    }
    case 252776:
    {
        returnValue = F("Phillip-Faust-Str.");
        break;
    }
    case 252777:
    {
        returnValue = F("Phillip-Müller-Platz");
        break;
    }
    case 252778:
    {
        returnValue = F("Phillip-Müller-Str.");
        break;
    }
    case 252779:
    {
        returnValue = F("Phillip-Ullrich-Str.");
        break;
    }
    case 252780:
    {
        returnValue = F("Phillipp-Müller-Str.");
        break;
    }
    case 252781:
    {
        returnValue = F("Phillipp-Ullrich-Str.");
        break;
    }
    case 252782:
    {
        returnValue = F("Phillippers Feld");
        break;
    }
    case 252783:
    {
        returnValue = F("Phillippsweg");
        break;
    }
    case 252784:
    {
        returnValue = F("Phillipsen Wiesen");
        break;
    }
    case 252785:
    {
        returnValue = F("Phillipweg");
        break;
    }
    case 252786:
    {
        returnValue = F("Philomena-Sailer-Str.");
        break;
    }
    case 252787:
    {
        returnValue = F("Philomene-Steiger-Weg");
        break;
    }
    case 252788:
    {
        returnValue = F("Philosophen Gang");
        break;
    }
    case 252789:
    {
        returnValue = F("Philosophen Weg");
        break;
    }
    case 252790:
    {
        returnValue = F("Philosophenberg");
        break;
    }
    case 252791:
    {
        returnValue = F("Philosophengang");
        break;
    }
    case 252792:
    {
        returnValue = F("Philosophengarten");
        break;
    }
    case 252793:
    {
        returnValue = F("Philosophenpfad");
        break;
    }
    case 252794:
    {
        returnValue = F("Philosophenplatz");
        break;
    }
    case 252795:
    {
        returnValue = F("Philosophenstr.");
        break;
    }
    case 252796:
    {
        returnValue = F("Philosophenwald");
        break;
    }
    case 252797:
    {
        returnValue = F("Philosophenweg");
        break;
    }
    case 252798:
    {
        returnValue = F("Philosophenweg (Freysoldts-Weg)");
        break;
    }
    case 252799:
    {
        returnValue = F("Philosphenweg");
        break;
    }
    case 252800:
    {
        returnValue = F("Phlippenhöhe");
        break;
    }
    case 252801:
    {
        returnValue = F("Phloxweg");
        break;
    }
    case 252802:
    {
        returnValue = F("Phoenix Contact Allee");
        break;
    }
    case 252803:
    {
        returnValue = F("Phoenixallee");
        break;
    }
    case 252804:
    {
        returnValue = F("Phoenixstr.");
        break;
    }
    case 252805:
    {
        returnValue = F("Phänopfad");
        break;
    }
    case 252806:
    {
        returnValue = F("Phöbener Bergstr.");
        break;
    }
    case 252807:
    {
        returnValue = F("Phöbener Chaussee");
        break;
    }
    case 252808:
    {
        returnValue = F("Phöbener Chausseestr.");
        break;
    }
    case 252809:
    {
        returnValue = F("Phöbener Fähre");
        break;
    }
    case 252810:
    {
        returnValue = F("Phöbener Havelweg");
        break;
    }
    case 252811:
    {
        returnValue = F("Phöbener Seestr.");
        break;
    }
    case 252812:
    {
        returnValue = F("Phöbener Str.");
        break;
    }
    case 252813:
    {
        returnValue = F("Phönixstr.");
        break;
    }
    case 252814:
    {
        returnValue = F("Phönixweg");
        break;
    }
    case 252815:
    {
        returnValue = F("Pia-von -Aretin-Str.");
        break;
    }
    case 252816:
    {
        returnValue = F("Piaffe");
        break;
    }
    case 252817:
    {
        returnValue = F("Pian");
        break;
    }
    case 252818:
    {
        returnValue = F("Piastenstr.");
        break;
    }
    case 252819:
    {
        returnValue = F("Piazza");
        break;
    }
    case 252820:
    {
        returnValue = F("Piazza Roter Turm");
        break;
    }
    case 252821:
    {
        returnValue = F("Piazza da Toni");
        break;
    }
    case 252822:
    {
        returnValue = F("Piazza im TIP");
        break;
    }
    case 252823:
    {
        returnValue = F("Picarder Weg");
        break;
    }
    case 252824:
    {
        returnValue = F("Picardie");
        break;
    }
    case 252825:
    {
        returnValue = F("Picasso-Str.");
        break;
    }
    case 252826:
    {
        returnValue = F("Picassoallee");
        break;
    }
    case 252827:
    {
        returnValue = F("Picassoring");
        break;
    }
    case 252828:
    {
        returnValue = F("Picassostr.");
        break;
    }
    case 252829:
    {
        returnValue = F("Picassoweg");
        break;
    }
    case 252830:
    {
        returnValue = F("Picastr.");
        break;
    }
    case 252831:
    {
        returnValue = F("Piccard-Str.");
        break;
    }
    case 252832:
    {
        returnValue = F("Piccardiestr.");
        break;
    }
    case 252833:
    {
        returnValue = F("Piccolo Ponte");
        break;
    }
    case 252834:
    {
        returnValue = F("Piccolominiweg");
        break;
    }
    case 252835:
    {
        returnValue = F("Pichelsdorfer Weg");
        break;
    }
    case 252836:
    {
        returnValue = F("Picher Weg");
        break;
    }
    case 252837:
    {
        returnValue = F("Picherweg");
        break;
    }
    case 252838:
    {
        returnValue = F("Pichler");
        break;
    }
    case 252839:
    {
        returnValue = F("Pichler Str.");
        break;
    }
    case 252840:
    {
        returnValue = F("Pichlergäßchen");
        break;
    }
    case 252841:
    {
        returnValue = F("Pichlerstr.");
        break;
    }
    case 252842:
    {
        returnValue = F("Pichlmayrstr.");
        break;
    }
    case 252843:
    {
        returnValue = F("Pichlstr.");
        break;
    }
    case 252844:
    {
        returnValue = F("Pichoblick");
        break;
    }
    case 252845:
    {
        returnValue = F("Pichoweg");
        break;
    }
    case 252846:
    {
        returnValue = F("Pichterichstr.");
        break;
    }
    case 252847:
    {
        returnValue = F("Pichts Hof");
        break;
    }
    case 252848:
    {
        returnValue = F("Pickaer Str.");
        break;
    }
    case 252849:
    {
        returnValue = F("Pickaer Weg");
        break;
    }
    case 252850:
    {
        returnValue = F("Pickardstr.");
        break;
    }
    case 252851:
    {
        returnValue = F("Pickartsberg");
        break;
    }
    case 252852:
    {
        returnValue = F("Pickartzend");
        break;
    }
    case 252853:
    {
        returnValue = F("Pickauer Dorfweg");
        break;
    }
    case 252854:
    {
        returnValue = F("Pickbreite");
        break;
    }
    case 252855:
    {
        returnValue = F("Pickelgasse");
        break;
    }
    case 252856:
    {
        returnValue = F("Pickelsgasse");
        break;
    }
    case 252857:
    {
        returnValue = F("Pickelshüllenweg");
        break;
    }
    case 252858:
    {
        returnValue = F("Pickelstr.");
        break;
    }
    case 252859:
    {
        returnValue = F("Pickenhainbrücke");
        break;
    }
    case 252860:
    {
        returnValue = F("Pickenricht");
        break;
    }
    case 252861:
    {
        returnValue = F("Picker-Jungs-Gasse");
        break;
    }
    case 252862:
    {
        returnValue = F("Pickerade");
        break;
    }
    case 252863:
    {
        returnValue = F("Pickerdamm");
        break;
    }
    case 252864:
    {
        returnValue = F("Pickerei");
        break;
    }
    case 252865:
    {
        returnValue = F("Pickerskamp");
        break;
    }
    case 252866:
    {
        returnValue = F("Pickerstr.");
        break;
    }
    case 252867:
    {
        returnValue = F("Pickertsberg");
        break;
    }
    case 252868:
    {
        returnValue = F("Pickertstr.");
        break;
    }
    case 252869:
    {
        returnValue = F("Pickertweg");
        break;
    }
    case 252870:
    {
        returnValue = F("Pickerweg");
        break;
    }
    case 252871:
    {
        returnValue = F("Pickhüttenweg");
        break;
    }
    case 252872:
    {
        returnValue = F("Pickließemer Str.");
        break;
    }
    case 252873:
    {
        returnValue = F("Pickmäijersweg");
        break;
    }
    case 252874:
    {
        returnValue = F("Picknickwiese");
        break;
    }
    case 252875:
    {
        returnValue = F("Picksweg");
        break;
    }
    case 252876:
    {
        returnValue = F("Pictoriusstr.");
        break;
    }
    case 252877:
    {
        returnValue = F("Pictoriusweg");
        break;
    }
    case 252878:
    {
        returnValue = F("Piddelbornsmühle");
        break;
    }
    case 252879:
    {
        returnValue = F("Piddelbornstr.");
        break;
    }
    case 252880:
    {
        returnValue = F("Pidder-Lyng-Str.");
        break;
    }
    case 252881:
    {
        returnValue = F("Pidder-Lüng-Wai");
        break;
    }
    case 252882:
    {
        returnValue = F("Pideritplatz");
        break;
    }
    case 252883:
    {
        returnValue = F("Piderits Bleiche");
        break;
    }
    case 252884:
    {
        returnValue = F("Pideritstr.");
        break;
    }
    case 252885:
    {
        returnValue = F("Pidinger Berg");
        break;
    }
    case 252886:
    {
        returnValue = F("Pidinger Str.");
        break;
    }
    case 252887:
    {
        returnValue = F("Piechlerstr.");
        break;
    }
    case 252888:
    {
        returnValue = F("Piedendorfer Str.");
        break;
    }
    case 252889:
    {
        returnValue = F("Piegeler Weg");
        break;
    }
    case 252890:
    {
        returnValue = F("Piegendorf");
        break;
    }
    case 252891:
    {
        returnValue = F("Piehlerstr.");
        break;
    }
    case 252892:
    {
        returnValue = F("Piekestr.");
        break;
    }
    case 252893:
    {
        returnValue = F("Pielachtalstr.");
        break;
    }
    case 252894:
    {
        returnValue = F("Pielagestr.");
        break;
    }
    case 252895:
    {
        returnValue = F("Pielau");
        break;
    }
    case 252896:
    {
        returnValue = F("Pielenhofener Str.");
        break;
    }
    case 252897:
    {
        returnValue = F("Pielenhofener Weg");
        break;
    }
    case 252898:
    {
        returnValue = F("Pieler Weg");
        break;
    }
    case 252899:
    {
        returnValue = F("Pielhofstr.");
        break;
    }
    case 252900:
    {
        returnValue = F("Pielmühler Str.");
        break;
    }
    case 252901:
    {
        returnValue = F("Pielsgasse");
        break;
    }
    case 252902:
    {
        returnValue = F("Pielstickers Feld");
        break;
    }
    case 252903:
    {
        returnValue = F("Pielstr.");
        break;
    }
    case 252904:
    {
        returnValue = F("Pielweichser Str.");
        break;
    }
    case 252905:
    {
        returnValue = F("Piemonter Weg");
        break;
    }
    case 252906:
    {
        returnValue = F("Piemonteser Str.");
        break;
    }
    case 252907:
    {
        returnValue = F("Piemontstr.");
        break;
    }
    case 252908:
    {
        returnValue = F("Piemontweg");
        break;
    }
    case 252909:
    {
        returnValue = F("Piendlpark");
        break;
    }
    case 252910:
    {
        returnValue = F("Piener Weg");
        break;
    }
    case 252911:
    {
        returnValue = F("Pieneweg");
        break;
    }
    case 252912:
    {
        returnValue = F("Pieningfeldweg");
        break;
    }
    case 252913:
    {
        returnValue = F("Pieningsheide");
        break;
    }
    case 252914:
    {
        returnValue = F("Pienner Str.");
        break;
    }
    case 252915:
    {
        returnValue = F("Pienzenau-Nord");
        break;
    }
    case 252916:
    {
        returnValue = F("Pienzenau-Süd");
        break;
    }
    case 252917:
    {
        returnValue = F("Pienzenauer Str.");
        break;
    }
    case 252918:
    {
        returnValue = F("Pienzenauerplatz");
        break;
    }
    case 252919:
    {
        returnValue = F("Pienzenauerstr.");
        break;
    }
    case 252920:
    {
        returnValue = F("Piepenborn");
        break;
    }
    case 252921:
    {
        returnValue = F("Piepenbreite");
        break;
    }
    case 252922:
    {
        returnValue = F("Piepenbringstr.");
        break;
    }
    case 252923:
    {
        returnValue = F("Piepenbrink");
        break;
    }
    case 252924:
    {
        returnValue = F("Piepenbrinkgasse");
        break;
    }
    case 252925:
    {
        returnValue = F("Piepenbrückstr.");
        break;
    }
    case 252926:
    {
        returnValue = F("Piepenbrüggeweg");
        break;
    }
    case 252927:
    {
        returnValue = F("Piepenbusch");
        break;
    }
    case 252928:
    {
        returnValue = F("Piepenhägerstr.");
        break;
    }
    case 252929:
    {
        returnValue = F("Piepenstockplatz");
        break;
    }
    case 252930:
    {
        returnValue = F("Piepenstockstr.");
        break;
    }
    case 252931:
    {
        returnValue = F("Piepenstr.");
        break;
    }
    case 252932:
    {
        returnValue = F("Piepenströtken");
        break;
    }
    case 252933:
    {
        returnValue = F("Piepenturmweg");
        break;
    }
    case 252934:
    {
        returnValue = F("Pieper");
        break;
    }
    case 252935:
    {
        returnValue = F("Pieper-Keller-Str.");
        break;
    }
    case 252936:
    {
        returnValue = F("Pieper-Werning-Str.");
        break;
    }
    case 252937:
    {
        returnValue = F("Pieperbreite");
        break;
    }
    case 252938:
    {
        returnValue = F("Pieperfeldweg");
        break;
    }
    case 252939:
    {
        returnValue = F("Piepergasse");
        break;
    }
    case 252940:
    {
        returnValue = F("Piepergrund");
        break;
    }
    case 252941:
    {
        returnValue = F("Pieperhoff");
        break;
    }
    case 252942:
    {
        returnValue = F("Pieperhöfen");
        break;
    }
    case 252943:
    {
        returnValue = F("Pieperkamp");
        break;
    }
    case 252944:
    {
        returnValue = F("Piepers Busch");
        break;
    }
    case 252945:
    {
        returnValue = F("Piepers Feld");
        break;
    }
    case 252946:
    {
        returnValue = F("Piepers Garten");
        break;
    }
    case 252947:
    {
        returnValue = F("Piepers Kamp");
        break;
    }
    case 252948:
    {
        returnValue = F("Piepers Trift");
        break;
    }
    case 252949:
    {
        returnValue = F("Piepers Weg");
        break;
    }
    case 252950:
    {
        returnValue = F("Piepersberg");
        break;
    }
    case 252951:
    {
        returnValue = F("Piepershorster Weg");
        break;
    }
    case 252952:
    {
        returnValue = F("Pieperskamp");
        break;
    }
    case 252953:
    {
        returnValue = F("Piepersloher Platz");
        break;
    }
    case 252954:
    {
        returnValue = F("Pieperstr.");
        break;
    }
    case 252955:
    {
        returnValue = F("Piepersweg");
        break;
    }
    case 252956:
    {
        returnValue = F("Pieperweg");
        break;
    }
    case 252957:
    {
        returnValue = F("Piepkebierich");
        break;
    }
    case 252958:
    {
        returnValue = F("Piepmortenweg");
        break;
    }
    case 252959:
    {
        returnValue = F("Piepmäkerstr.");
        break;
    }
    case 252960:
    {
        returnValue = F("Piepmühle");
        break;
    }
    case 252961:
    {
        returnValue = F("Piepsche");
        break;
    }
    case 252962:
    {
        returnValue = F("Piepstr.");
        break;
    }
    case 252963:
    {
        returnValue = F("Pierbachweg");
        break;
    }
    case 252964:
    {
        returnValue = F("Pierenkemperstr.");
        break;
    }
    case 252965:
    {
        returnValue = F("Pierer Str.");
        break;
    }
    case 252966:
    {
        returnValue = F("Piererstr.");
        break;
    }
    case 252967:
    {
        returnValue = F("Pieringer Weg");
        break;
    }
    case 252968:
    {
        returnValue = F("Pierkoppel");
        break;
    }
    case 252969:
    {
        returnValue = F("Pierlweg");
        break;
    }
    case 252970:
    {
        returnValue = F("Piernsweg");
        break;
    }
    case 252971:
    {
        returnValue = F("Pieronweg");
        break;
    }
    case 252972:
    {
        returnValue = F("Pierre Pflimlin Brücke");
        break;
    }
    case 252973:
    {
        returnValue = F("Pierre-De-Coubertin-Str.");
        break;
    }
    case 252974:
    {
        returnValue = F("Pierre-Pflimlin-Str.");
        break;
    }
    case 252975:
    {
        returnValue = F("Pierre-de-Coubertin-Str.");
        break;
    }
    case 252976:
    {
        returnValue = F("Pierre-de-Gayette-Str.");
        break;
    }
    case 252977:
    {
        returnValue = F("Pierrefitter Str.");
        break;
    }
    case 252978:
    {
        returnValue = F("Pierrefonds-Anlage");
        break;
    }
    case 252979:
    {
        returnValue = F("Pierrefondsstr.");
        break;
    }
    case 252980:
    {
        returnValue = F("Pierstr.");
        break;
    }
    case 252981:
    {
        returnValue = F("Pierweg");
        break;
    }
    case 252982:
    {
        returnValue = F("Piesack");
        break;
    }
    case 252983:
    {
        returnValue = F("Piesackerweg");
        break;
    }
    case 252984:
    {
        returnValue = F("Piesauer Str.");
        break;
    }
    case 252985:
    {
        returnValue = F("Piesbacher Str.");
        break;
    }
    case 252986:
    {
        returnValue = F("Piesberg");
        break;
    }
    case 252987:
    {
        returnValue = F("Piesberger Str.");
        break;
    }
    case 252988:
    {
        returnValue = F("Piesberger Weg");
        break;
    }
    case 252989:
    {
        returnValue = F("Piesdorfer Str.");
        break;
    }
    case 252990:
    {
        returnValue = F("Piesenkamer Str.");
        break;
    }
    case 252991:
    {
        returnValue = F("Piesenkofener Str.");
        break;
    }
    case 252992:
    {
        returnValue = F("Piesigitz");
        break;
    }
    case 252993:
    {
        returnValue = F("Piesing");
        break;
    }
    case 252994:
    {
        returnValue = F("Pieskow");
        break;
    }
    case 252995:
    {
        returnValue = F("Pieskower Str.");
        break;
    }
    case 252996:
    {
        returnValue = F("Piesporter Str.");
        break;
    }
    case 252997:
    {
        returnValue = F("Piester Weg");
        break;
    }
    case 252998:
    {
        returnValue = F("Piesteritzer Mühlstr.");
        break;
    }
    case 252999:
    {
        returnValue = F("Piesteritzstr.");
        break;
    }
    case 253000:
    {
        returnValue = F("Piestweg");
        break;
    }
    case 253001:
    {
        returnValue = F("Piet-Leysing-Str.");
        break;
    }
    case 253002:
    {
        returnValue = F("Piet-Mondrian-Str.");
        break;
    }
    case 253003:
    {
        returnValue = F("Piet-Oudolf-Garten");
        break;
    }
    case 253004:
    {
        returnValue = F("Pietenberg");
        break;
    }
    case 253005:
    {
        returnValue = F("Pietenfelder Str.");
        break;
    }
    case 253006:
    {
        returnValue = F("Pieter-Bruegel-Str.");
        break;
    }
    case 253007:
    {
        returnValue = F("Pieter-Brueghel-Str.");
        break;
    }
    case 253008:
    {
        returnValue = F("Pieter-Valkeiner-Allee");
        break;
    }
    case 253009:
    {
        returnValue = F("Pieter-Valkenier-Allee");
        break;
    }
    case 253010:
    {
        returnValue = F("Piethanstr.");
        break;
    }
    case 253011:
    {
        returnValue = F("Piethener Str.");
        break;
    }
    case 253012:
    {
        returnValue = F("Piethener Weg");
        break;
    }
    case 253013:
    {
        returnValue = F("Pietistenweg");
        break;
    }
    case 253014:
    {
        returnValue = F("Pietrapaola-Platz");
        break;
    }
    case 253015:
    {
        returnValue = F("Pietschkerstr.");
        break;
    }
    case 253016:
    {
        returnValue = F("Pietz");
        break;
    }
    case 253017:
    {
        returnValue = F("Pietzenkirchen");
        break;
    }
    case 253018:
    {
        returnValue = F("Pietzpuhler Weg");
        break;
    }
    case 253019:
    {
        returnValue = F("Pietzschebachweg");
        break;
    }
    case 253020:
    {
        returnValue = F("Pievens");
        break;
    }
    case 253021:
    {
        returnValue = F("Pieverstorf");
        break;
    }
    case 253022:
    {
        returnValue = F("Pievitstr.");
        break;
    }
    case 253023:
    {
        returnValue = F("Piewickweg");
        break;
    }
    case 253024:
    {
        returnValue = F("Pießig");
        break;
    }
    case 253025:
    {
        returnValue = F("Piflaser Weg");
        break;
    }
    case 253026:
    {
        returnValue = F("Piflitz");
        break;
    }
    case 253027:
    {
        returnValue = F("Pigagestr.");
        break;
    }
    case 253028:
    {
        returnValue = F("Piggendiek");
        break;
    }
    case 253029:
    {
        returnValue = F("Piggenkampweg");
        break;
    }
    case 253030:
    {
        returnValue = F("Piggenweg");
        break;
    }
    case 253031:
    {
        returnValue = F("Pikenhagen");
        break;
    }
    case 253032:
    {
        returnValue = F("Pikenierweg");
        break;
    }
    case 253033:
    {
        returnValue = F("Pikhausen");
        break;
    }
    case 253034:
    {
        returnValue = F("PikoPark Speyer");
        break;
    }
    case 253035:
    {
        returnValue = F("Pilaer Str.");
        break;
    }
    case 253036:
    {
        returnValue = F("Pilartzstr.");
        break;
    }
    case 253037:
    {
        returnValue = F("Pilarweg");
        break;
    }
    case 253038:
    {
        returnValue = F("Pilatus Campus");
        break;
    }
    case 253039:
    {
        returnValue = F("Pilatusberg");
        break;
    }
    case 253040:
    {
        returnValue = F("Pilatusfelsenweg");
        break;
    }
    case 253041:
    {
        returnValue = F("Pilatusweg");
        break;
    }
    case 253042:
    {
        returnValue = F("Pilberskofen");
        break;
    }
    case 253043:
    {
        returnValue = F("Pilbisstr.");
        break;
    }
    case 253044:
    {
        returnValue = F("Pilchau");
        break;
    }
    case 253045:
    {
        returnValue = F("Pilchauer Str.");
        break;
    }
    case 253046:
    {
        returnValue = F("Pildenauer Str.");
        break;
    }
    case 253047:
    {
        returnValue = F("Pilgeramstr.");
        break;
    }
    case 253048:
    {
        returnValue = F("Pilgerbachweg");
        break;
    }
    case 253049:
    {
        returnValue = F("Pilgerbornstr.");
        break;
    }
    case 253050:
    {
        returnValue = F("Pilgergasse");
        break;
    }
    case 253051:
    {
        returnValue = F("Pilgerhausstr.");
        break;
    }
    case 253052:
    {
        returnValue = F("Pilgerhäuschenweg");
        break;
    }
    case 253053:
    {
        returnValue = F("Pilgermorgen");
        break;
    }
    case 253054:
    {
        returnValue = F("Pilgerndorfer Weg");
        break;
    }
    case 253055:
    {
        returnValue = F("Pilgerpfad");
        break;
    }
    case 253056:
    {
        returnValue = F("Pilgersberggasse");
        break;
    }
    case 253057:
    {
        returnValue = F("Pilgerschrofenweg");
        break;
    }
    case 253058:
    {
        returnValue = F("Pilgerstadt");
        break;
    }
    case 253059:
    {
        returnValue = F("Pilgersteig");
        break;
    }
    case 253060:
    {
        returnValue = F("Pilgerstr.");
        break;
    }
    case 253061:
    {
        returnValue = F("Pilgerweg");
        break;
    }
    case 253062:
    {
        returnValue = F("Pilgerweg Loccum - Volkenroda");
        break;
    }
    case 253063:
    {
        returnValue = F("Pilgerweg Loccum Volkenroda Nebenstrecke");
        break;
    }
    case 253064:
    {
        returnValue = F("Pilgerwiesenstr.");
        break;
    }
    case 253065:
    {
        returnValue = F("Pilgerzeller Str.");
        break;
    }
    case 253066:
    {
        returnValue = F("Pilghauser Str.");
        break;
    }
    case 253067:
    {
        returnValue = F("Pilgramshof");
        break;
    }
    case 253068:
    {
        returnValue = F("Pilgramsreuther Str.");
        break;
    }
    case 253069:
    {
        returnValue = F("Pilgramsroth");
        break;
    }
    case 253070:
    {
        returnValue = F("Pilgramstr.");
        break;
    }
    case 253071:
    {
        returnValue = F("Pilgramsweg");
        break;
    }
    case 253072:
    {
        returnValue = F("Pilgrim");
        break;
    }
    case 253073:
    {
        returnValue = F("Pilgrimstein");
        break;
    }
    case 253074:
    {
        returnValue = F("Pilgrimstr.");
        break;
    }
    case 253075:
    {
        returnValue = F("Pilgrimsweg");
        break;
    }
    case 253076:
    {
        returnValue = F("Pilgrimweg");
        break;
    }
    case 253077:
    {
        returnValue = F("Pilgrinstr.");
        break;
    }
    case 253078:
    {
        returnValue = F("Pilkentafel");
        break;
    }
    case 253079:
    {
        returnValue = F("Pillauer Str.");
        break;
    }
    case 253080:
    {
        returnValue = F("Pillauer Weg");
        break;
    }
    case 253081:
    {
        returnValue = F("Pillaustr.");
        break;
    }
    case 253082:
    {
        returnValue = F("Pillenbergstr.");
        break;
    }
    case 253083:
    {
        returnValue = F("Pillenbrucher Str.");
        break;
    }
    case 253084:
    {
        returnValue = F("Pillenhof");
        break;
    }
    case 253085:
    {
        returnValue = F("Pillensgässchen");
        break;
    }
    case 253086:
    {
        returnValue = F("Pillenweg");
        break;
    }
    case 253087:
    {
        returnValue = F("Pillerfeld");
        break;
    }
    case 253088:
    {
        returnValue = F("Pillgramer Str.");
        break;
    }
    case 253089:
    {
        returnValue = F("Pillgramer Weg");
        break;
    }
    case 253090:
    {
        returnValue = F("Pillham");
        break;
    }
    case 253091:
    {
        returnValue = F("Pillhamer Str.");
        break;
    }
    case 253092:
    {
        returnValue = F("Pilliger Heck");
        break;
    }
    case 253093:
    {
        returnValue = F("Pilliger Weg");
        break;
    }
    case 253094:
    {
        returnValue = F("Pilligertorstr.");
        break;
    }
    case 253095:
    {
        returnValue = F("Pillinger Weg");
        break;
    }
    case 253096:
    {
        returnValue = F("Pillingsdorf");
        break;
    }
    case 253097:
    {
        returnValue = F("Pillingsdorf-Lohmühle");
        break;
    }
    case 253098:
    {
        returnValue = F("Pillingsdorfer Str.");
        break;
    }
    case 253099:
    {
        returnValue = F("Pillingser Höhe");
        break;
    }
    case 253100:
    {
        returnValue = F("Pillingser Weg");
        break;
    }
    case 253101:
    {
        returnValue = F("Pillingsgasse");
        break;
    }
    case 253102:
    {
        returnValue = F("Pillkampsweg");
        break;
    }
    case 253103:
    {
        returnValue = F("Pillmannstr.");
        break;
    }
    case 253104:
    {
        returnValue = F("Pillmersreuth");
        break;
    }
    case 253105:
    {
        returnValue = F("Pillmoosweg");
        break;
    }
    case 253106:
    {
        returnValue = F("Pillnitzer Str.");
        break;
    }
    case 253107:
    {
        returnValue = F("Pillnitzer Weg");
        break;
    }
    case 253108:
    {
        returnValue = F("Pilmeroth");
        break;
    }
    case 253109:
    {
        returnValue = F("Pilmersreuth a.d. Str.");
        break;
    }
    case 253110:
    {
        returnValue = F("Pilmersreuther Str.");
        break;
    }
    case 253111:
    {
        returnValue = F("Pilolfweg");
        break;
    }
    case 253112:
    {
        returnValue = F("Pilotweg");
        break;
    }
    case 253113:
    {
        returnValue = F("Pilotystr.");
        break;
    }
    case 253114:
    {
        returnValue = F("Pilotyweg");
        break;
    }
    case 253115:
    {
        returnValue = F("Pilse");
        break;
    }
    case 253116:
    {
        returnValue = F("Pilsen-Allee");
        break;
    }
    case 253117:
    {
        returnValue = F("Pilsener Str.");
        break;
    }
    case 253118:
    {
        returnValue = F("Pilsener Weg");
        break;
    }
    case 253119:
    {
        returnValue = F("Pilsenhöher Str.");
        break;
    }
    case 253120:
    {
        returnValue = F("Pilsenmühler Weg");
        break;
    }
    case 253121:
    {
        returnValue = F("Pilsenseestr.");
        break;
    }
    case 253122:
    {
        returnValue = F("Pilsenseeweg");
        break;
    }
    case 253123:
    {
        returnValue = F("Pilsenstr.");
        break;
    }
    case 253124:
    {
        returnValue = F("Pilsenweg");
        break;
    }
    case 253125:
    {
        returnValue = F("Pilsgasse");
        break;
    }
    case 253126:
    {
        returnValue = F("Pilslgasse");
        break;
    }
    case 253127:
    {
        returnValue = F("Pilsmühle");
        break;
    }
    case 253128:
    {
        returnValue = F("Pilsstr.");
        break;
    }
    case 253129:
    {
        returnValue = F("Pilstergasse");
        break;
    }
    case 253130:
    {
        returnValue = F("Pilsterweg");
        break;
    }
    case 253131:
    {
        returnValue = F("Pilstinger Str.");
        break;
    }
    case 253132:
    {
        returnValue = F("Pilsumer Katrepel");
        break;
    }
    case 253133:
    {
        returnValue = F("Pilsumer Reihe");
        break;
    }
    case 253134:
    {
        returnValue = F("Pilsumer Weg");
        break;
    }
    case 253135:
    {
        returnValue = F("Piltitzer Str.");
        break;
    }
    case 253136:
    {
        returnValue = F("Pilzacker");
        break;
    }
    case 253137:
    {
        returnValue = F("Pilzdörfelstr.");
        break;
    }
    case 253138:
    {
        returnValue = F("Pilzenrain");
        break;
    }
    case 253139:
    {
        returnValue = F("Pilzergasse");
        break;
    }
    case 253140:
    {
        returnValue = F("Pilzflügel");
        break;
    }
    case 253141:
    {
        returnValue = F("Pilzgrund");
        break;
    }
    case 253142:
    {
        returnValue = F("Pilzhagen");
        break;
    }
    case 253143:
    {
        returnValue = F("Pilziggrundstr.");
        break;
    }
    case 253144:
    {
        returnValue = F("Pilzkamp");
        break;
    }
    case 253145:
    {
        returnValue = F("Pilzlehrpfad");
        break;
    }
    case 253146:
    {
        returnValue = F("Pilzsteg");
        break;
    }
    case 253147:
    {
        returnValue = F("Pilzsteig");
        break;
    }
    case 253148:
    {
        returnValue = F("Pilzstr.");
        break;
    }
    case 253149:
    {
        returnValue = F("Pilzwald");
        break;
    }
    case 253150:
    {
        returnValue = F("Pilzweg");
        break;
    }
    case 253151:
    {
        returnValue = F("Pilzwegerstr.");
        break;
    }
    case 253152:
    {
        returnValue = F("Pilzwiese");
        break;
    }
    case 253153:
    {
        returnValue = F("Pimmenicher Weg");
        break;
    }
    case 253154:
    {
        returnValue = F("Pimmerling");
        break;
    }
    case 253155:
    {
        returnValue = F("Pimpertzweg");
        break;
    }
    case 253156:
    {
        returnValue = F("Pimsfeld");
        break;
    }
    case 253157:
    {
        returnValue = F("Pina-Bausch-Str.");
        break;
    }
    case 253158:
    {
        returnValue = F("Pinacher Str.");
        break;
    }
    case 253159:
    {
        returnValue = F("Pinacherweg");
        break;
    }
    case 253160:
    {
        returnValue = F("Pinagelstr.");
        break;
    }
    case 253161:
    {
        returnValue = F("Pinasca Str.");
        break;
    }
    case 253162:
    {
        returnValue = F("Pinassenweg");
        break;
    }
    case 253163:
    {
        returnValue = F("Pinauer Weg");
        break;
    }
    case 253164:
    {
        returnValue = F("Pinciers Gang");
        break;
    }
    case 253165:
    {
        returnValue = F("Pindharter Str.");
        break;
    }
    case 253166:
    {
        returnValue = F("Pindorferstr.");
        break;
    }
    case 253167:
    {
        returnValue = F("Pine Court");
        break;
    }
    case 253168:
    {
        returnValue = F("Pinerolostr.");
        break;
    }
    case 253169:
    {
        returnValue = F("Pineroloweg");
        break;
    }
    case 253170:
    {
        returnValue = F("Pineweg");
        break;
    }
    case 253171:
    {
        returnValue = F("Pingel Anton");
        break;
    }
    case 253172:
    {
        returnValue = F("Pingel-Anton");
        break;
    }
    case 253173:
    {
        returnValue = F("Pingel-Anton-Platz");
        break;
    }
    case 253174:
    {
        returnValue = F("Pingelei");
        break;
    }
    case 253175:
    {
        returnValue = F("Pingelshagener Str.");
        break;
    }
    case 253176:
    {
        returnValue = F("Pingelshäger Str.");
        break;
    }
    case 253177:
    {
        returnValue = F("Pingelstr.");
        break;
    }
    case 253178:
    {
        returnValue = F("Pingenstr.");
        break;
    }
    case 253179:
    {
        returnValue = F("Pingenweg");
        break;
    }
    case 253180:
    {
        returnValue = F("Pinggasse");
        break;
    }
    case 253181:
    {
        returnValue = F("Pingsdorfer Str.");
        break;
    }
    case 253182:
    {
        returnValue = F("Pingsheesch");
        break;
    }
    case 253183:
    {
        returnValue = F("Pingsheimer Str.");
        break;
    }
    case 253184:
    {
        returnValue = F("Pingsheimer Weg");
        break;
    }
    case 253185:
    {
        returnValue = F("Pingsheimstr.");
        break;
    }
    case 253186:
    {
        returnValue = F("Pinguin");
        break;
    }
    case 253187:
    {
        returnValue = F("Pinguine/Wasservögel");
        break;
    }
    case 253188:
    {
        returnValue = F("Pinguinweg");
        break;
    }
    case 253189:
    {
        returnValue = F("Pinienhof");
        break;
    }
    case 253190:
    {
        returnValue = F("Pinienstr.");
        break;
    }
    case 253191:
    {
        returnValue = F("Pinienweg");
        break;
    }
    case 253192:
    {
        returnValue = F("Piningstr.");
        break;
    }
    case 253193:
    {
        returnValue = F("Pinkenburg");
        break;
    }
    case 253194:
    {
        returnValue = F("Pinkenburgstr.");
        break;
    }
    case 253195:
    {
        returnValue = F("Pinkler");
        break;
    }
    case 253196:
    {
        returnValue = F("Pinkmühlenweg");
        break;
    }
    case 253197:
    {
        returnValue = F("Pinkowitz");
        break;
    }
    case 253198:
    {
        returnValue = F("Pinkowitzer Str.");
        break;
    }
    case 253199:
    {
        returnValue = F("Pinkvosshof");
        break;
    }
    case 253200:
    {
        returnValue = F("Pinkyberg");
        break;
    }
    case 253201:
    {
        returnValue = F("Pinnau");
        break;
    }
    case 253202:
    {
        returnValue = F("Pinnauallee");
        break;
    }
    case 253203:
    {
        returnValue = F("Pinnaubogen");
        break;
    }
    case 253204:
    {
        returnValue = F("Pinnaudamm");
        break;
    }
    case 253205:
    {
        returnValue = F("Pinnauring");
        break;
    }
    case 253206:
    {
        returnValue = F("Pinnausperrwerk");
        break;
    }
    case 253207:
    {
        returnValue = F("Pinnauweg");
        break;
    }
    case 253208:
    {
        returnValue = F("Pinnbarg");
        break;
    }
    case 253209:
    {
        returnValue = F("Pinnberg");
        break;
    }
    case 253210:
    {
        returnValue = F("Pinndiek");
        break;
    }
    case 253211:
    {
        returnValue = F("Pinneberger Chaussee");
        break;
    }
    case 253212:
    {
        returnValue = F("Pinneberger Landstr.");
        break;
    }
    case 253213:
    {
        returnValue = F("Pinneberger Str.");
        break;
    }
    case 253214:
    {
        returnValue = F("Pinneberger Weg");
        break;
    }
    case 253215:
    {
        returnValue = F("Pinneichenstr.");
        break;
    }
    case 253216:
    {
        returnValue = F("Pinnekuhl");
        break;
    }
    case 253217:
    {
        returnValue = F("Pinnenberg");
        break;
    }
    case 253218:
    {
        returnValue = F("Pinnenweg");
        break;
    }
    case 253219:
    {
        returnValue = F("Pinner Str.");
        break;
    }
    case 253220:
    {
        returnValue = F("Pinnerberg");
        break;
    }
    case 253221:
    {
        returnValue = F("Pinnerstr.");
        break;
    }
    case 253222:
    {
        returnValue = F("Pinnertstr.");
        break;
    }
    case 253223:
    {
        returnValue = F("Pinnewitzer Str.");
        break;
    }
    case 253224:
    {
        returnValue = F("Pinnicksallee");
        break;
    }
    case 253225:
    {
        returnValue = F("Pinninger Eck");
        break;
    }
    case 253226:
    {
        returnValue = F("Pinningsweg");
        break;
    }
    case 253227:
    {
        returnValue = F("Pinnow");
        break;
    }
    case 253228:
    {
        returnValue = F("Pinnower Chaussee");
        break;
    }
    case 253229:
    {
        returnValue = F("Pinnower Ende");
        break;
    }
    case 253230:
    {
        returnValue = F("Pinnower Lindenstr.");
        break;
    }
    case 253231:
    {
        returnValue = F("Pinnower Schleuse");
        break;
    }
    case 253232:
    {
        returnValue = F("Pinnower Str.");
        break;
    }
    case 253233:
    {
        returnValue = F("Pinnower Weg");
        break;
    }
    case 253234:
    {
        returnValue = F("Pinnowreihe");
        break;
    }
    case 253235:
    {
        returnValue = F("Pinselgraben");
        break;
    }
    case 253236:
    {
        returnValue = F("Pinselstr.");
        break;
    }
    case 253237:
    {
        returnValue = F("Pinsenhofstr.");
        break;
    }
    case 253238:
    {
        returnValue = F("Pinskerstr.");
        break;
    }
    case 253239:
    {
        returnValue = F("Pinsmaierstr.");
        break;
    }
    case 253240:
    {
        returnValue = F("Pinswang");
        break;
    }
    case 253241:
    {
        returnValue = F("Pinswang 1b-1e,6-6d");
        break;
    }
    case 253242:
    {
        returnValue = F("Pinswanger Str.");
        break;
    }
    case 253243:
    {
        returnValue = F("Pinsweg");
        break;
    }
    case 253244:
    {
        returnValue = F("Pinsweilerstr.");
        break;
    }
    case 253245:
    {
        returnValue = F("Pintepützstr.");
        break;
    }
    case 253246:
    {
        returnValue = F("Pintesfelder Str.");
        break;
    }
    case 253247:
    {
        returnValue = F("Pintgasse");
        break;
    }
    case 253248:
    {
        returnValue = F("Pinusweg");
        break;
    }
    case 253249:
    {
        returnValue = F("Pinzberger Str.");
        break;
    }
    case 253250:
    {
        returnValue = F("Pinzelstr.");
        break;
    }
    case 253251:
    {
        returnValue = F("Pinzenauerstr.");
        break;
    }
    case 253252:
    {
        returnValue = F("Pinzenberg");
        break;
    }
    case 253253:
    {
        returnValue = F("Pinzgauer Str.");
        break;
    }
    case 253254:
    {
        returnValue = F("Pinzigstr.");
        break;
    }
    case 253255:
    {
        returnValue = F("Pinzinger Str.");
        break;
    }
    case 253256:
    {
        returnValue = F("Pionier-Hüttenweg");
        break;
    }
    case 253257:
    {
        returnValue = F("Pionier-Klinke-Str.");
        break;
    }
    case 253258:
    {
        returnValue = F("Pionierbrücke");
        break;
    }
    case 253259:
    {
        returnValue = F("Pionierhöhe");
        break;
    }
    case 253260:
    {
        returnValue = F("Pionierlagerstr.");
        break;
    }
    case 253261:
    {
        returnValue = F("Pionierlinie");
        break;
    }
    case 253262:
    {
        returnValue = F("Pionierpark");
        break;
    }
    case 253263:
    {
        returnValue = F("Pionierschneise");
        break;
    }
    case 253264:
    {
        returnValue = F("Pioniersteg");
        break;
    }
    case 253265:
    {
        returnValue = F("Pionierstr.");
        break;
    }
    case 253266:
    {
        returnValue = F("Pionierweg");
        break;
    }
    case 253267:
    {
        returnValue = F("Pionierweg (A1)");
        break;
    }
    case 253268:
    {
        returnValue = F("Pionierweg (soll nicht mehr benutzt werden)");
        break;
    }
    case 253269:
    {
        returnValue = F("Pionierwäldchen");
        break;
    }
    case 253270:
    {
        returnValue = F("Piontstr.");
        break;
    }
    case 253271:
    {
        returnValue = F("Pipelineweg");
        break;
    }
    case 253272:
    {
        returnValue = F("Pipelissteinweg");
        break;
    }
    case 253273:
    {
        returnValue = F("Pipenblink");
        break;
    }
    case 253274:
    {
        returnValue = F("Pipenbrink");
        break;
    }
    case 253275:
    {
        returnValue = F("Pipendahlsfeld");
        break;
    }
    case 253276:
    {
        returnValue = F("Pipergestell");
        break;
    }
    case 253277:
    {
        returnValue = F("Piperkamp");
        break;
    }
    case 253278:
    {
        returnValue = F("Piperlingsbusch");
        break;
    }
    case 253279:
    {
        returnValue = F("Piperlohof");
        break;
    }
    case 253280:
    {
        returnValue = F("Piperweg");
        break;
    }
    case 253281:
    {
        returnValue = F("Pipinsrieder Str.");
        break;
    }
    case 253282:
    {
        returnValue = F("Pipinstr.");
        break;
    }
    case 253283:
    {
        returnValue = F("Piplockenburg");
        break;
    }
    case 253284:
    {
        returnValue = F("Pippelkolk");
        break;
    }
    case 253285:
    {
        returnValue = F("Pippelsburg");
        break;
    }
    case 253286:
    {
        returnValue = F("Pippelsdorf");
        break;
    }
    case 253287:
    {
        returnValue = F("Pippelstein");
        break;
    }
    case 253288:
    {
        returnValue = F("Pippelweg");
        break;
    }
    case 253289:
    {
        returnValue = F("Pippenhof");
        break;
    }
    case 253290:
    {
        returnValue = F("Pipping");
        break;
    }
    case 253291:
    {
        returnValue = F("Pippingsbusch");
        break;
    }
    case 253292:
    {
        returnValue = F("Pippinplatz");
        break;
    }
    case 253293:
    {
        returnValue = F("Pippinstr.");
        break;
    }
    case 253294:
    {
        returnValue = F("Pirach");
        break;
    }
    case 253295:
    {
        returnValue = F("Piracher Str.");
        break;
    }
    case 253296:
    {
        returnValue = F("Piratengang");
        break;
    }
    case 253297:
    {
        returnValue = F("Piratenpad");
        break;
    }
    case 253298:
    {
        returnValue = F("Piratenpfad");
        break;
    }
    case 253299:
    {
        returnValue = F("Piratenweg");
        break;
    }
    case 253300:
    {
        returnValue = F("Pirathstr.");
        break;
    }
    case 253301:
    {
        returnValue = F("Pirazzistr.");
        break;
    }
    case 253302:
    {
        returnValue = F("Pirckheimer Str.");
        break;
    }
    case 253303:
    {
        returnValue = F("Pirckheimerstr.");
        break;
    }
    case 253304:
    {
        returnValue = F("Pirckheimerweg");
        break;
    }
    case 253305:
    {
        returnValue = F("Pirk");
        break;
    }
    case 253306:
    {
        returnValue = F("Pirka");
        break;
    }
    case 253307:
    {
        returnValue = F("Pirkacher Str.");
        break;
    }
    case 253308:
    {
        returnValue = F("Pirkacher Weg");
        break;
    }
    case 253309:
    {
        returnValue = F("Pirkau");
        break;
    }
    case 253310:
    {
        returnValue = F("Pirkauer Str.");
        break;
    }
    case 253311:
    {
        returnValue = F("Pirkenbrunner Str.");
        break;
    }
    case 253312:
    {
        returnValue = F("Pirkenhofstr.");
        break;
    }
    case 253313:
    {
        returnValue = F("Pirker Str.");
        break;
    }
    case 253314:
    {
        returnValue = F("Pirker Weg");
        break;
    }
    case 253315:
    {
        returnValue = F("Pirkere");
        break;
    }
    case 253316:
    {
        returnValue = F("Pirkern");
        break;
    }
    case 253317:
    {
        returnValue = F("Pirkerziegelhütte");
        break;
    }
    case 253318:
    {
        returnValue = F("Pirkheimer Str.");
        break;
    }
    case 253319:
    {
        returnValue = F("Pirkhof");
        break;
    }
    case 253320:
    {
        returnValue = F("Pirkhofer Weg");
        break;
    }
    case 253321:
    {
        returnValue = F("Pirkinger Str.");
        break;
    }
    case 253322:
    {
        returnValue = F("Pirkmühle");
        break;
    }
    case 253323:
    {
        returnValue = F("Pirkweg");
        break;
    }
    case 253324:
    {
        returnValue = F("Pirloer Heideweg");
        break;
    }
    case 253325:
    {
        returnValue = F("Pirlweg");
        break;
    }
    case 253326:
    {
        returnValue = F("Pirmannsgarten");
        break;
    }
    case 253327:
    {
        returnValue = F("Pirmasenser Str.");
        break;
    }
    case 253328:
    {
        returnValue = F("Pirmasenser Weg");
        break;
    }
    case 253329:
    {
        returnValue = F("Pirmasenserstr.");
        break;
    }
    case 253330:
    {
        returnValue = F("Pirmasensstr.");
        break;
    }
    case 253331:
    {
        returnValue = F("Pirminiusplatz");
        break;
    }
    case 253332:
    {
        returnValue = F("Pirminiusring");
        break;
    }
    case 253333:
    {
        returnValue = F("Pirminiusstr.");
        break;
    }
    case 253334:
    {
        returnValue = F("Pirminstr.");
        break;
    }
    case 253335:
    {
        returnValue = F("Pirminweg");
        break;
    }
    case 253336:
    {
        returnValue = F("Pirnaer Landstr.");
        break;
    }
    case 253337:
    {
        returnValue = F("Pirnaer Steig");
        break;
    }
    case 253338:
    {
        returnValue = F("Pirnaer Str.");
        break;
    }
    case 253339:
    {
        returnValue = F("Pirnaer Weg");
        break;
    }
    case 253340:
    {
        returnValue = F("Pirnaplatz");
        break;
    }
    case 253341:
    {
        returnValue = F("Pirnascher Weg");
        break;
    }
    case 253342:
    {
        returnValue = F("Pirolallee");
        break;
    }
    case 253343:
    {
        returnValue = F("Pirolpfad");
        break;
    }
    case 253344:
    {
        returnValue = F("Pirolring");
        break;
    }
    case 253345:
    {
        returnValue = F("Pirolstr.");
        break;
    }
    case 253346:
    {
        returnValue = F("Pirolweg");
        break;
    }
    case 253347:
    {
        returnValue = F("Pirower Weg");
        break;
    }
    case 253348:
    {
        returnValue = F("Pirsch-Bahn");
        break;
    }
    case 253349:
    {
        returnValue = F("Pirscherberg");
        break;
    }
    case 253350:
    {
        returnValue = F("Pirschgang");
        break;
    }
    case 253351:
    {
        returnValue = F("Pirschpfad");
        break;
    }
    case 253352:
    {
        returnValue = F("Pirschpfad / Burgwallbachtrail");
        break;
    }
    case 253353:
    {
        returnValue = F("Pirschtwiete");
        break;
    }
    case 253354:
    {
        returnValue = F("Pirschweg");
        break;
    }
    case 253355:
    {
        returnValue = F("Pirschweg (AA)");
        break;
    }
    case 253356:
    {
        returnValue = F("Pirzenthaler Str.");
        break;
    }
    case 253357:
    {
        returnValue = F("Pirzerstr.");
        break;
    }
    case 253358:
    {
        returnValue = F("Pischdorf");
        break;
    }
    case 253359:
    {
        returnValue = F("Pischekbrücke");
        break;
    }
    case 253360:
    {
        returnValue = F("Pischeldorf");
        break;
    }
    case 253361:
    {
        returnValue = F("Pischelsberg");
        break;
    }
    case 253362:
    {
        returnValue = F("Pischelsdorf");
        break;
    }
    case 253363:
    {
        returnValue = F("Pischeltsrieder Weg");
        break;
    }
    case 253364:
    {
        returnValue = F("Pischetsriederstr.");
        break;
    }
    case 253365:
    {
        returnValue = F("Pischlweg");
        break;
    }
    case 253366:
    {
        returnValue = F("Pischwitz");
        break;
    }
    case 253367:
    {
        returnValue = F("Pisedeer Damm");
        break;
    }
    case 253368:
    {
        returnValue = F("Pisendelstr.");
        break;
    }
    case 253369:
    {
        returnValue = F("Piskowitz");
        break;
    }
    case 253370:
    {
        returnValue = F("Piskowitzer Str.");
        break;
    }
    case 253371:
    {
        returnValue = F("Pisling");
        break;
    }
    case 253372:
    {
        returnValue = F("Pissau");
        break;
    }
    case 253373:
    {
        returnValue = F("Pisseckenweg");
        break;
    }
    case 253374:
    {
        returnValue = F("Pissen");
        break;
    }
    case 253375:
    {
        returnValue = F("Pissingweg");
        break;
    }
    case 253376:
    {
        returnValue = F("Pistelberg");
        break;
    }
    case 253377:
    {
        returnValue = F("Pisterweg");
        break;
    }
    case 253378:
    {
        returnValue = F("Pistlgasse");
        break;
    }
    case 253379:
    {
        returnValue = F("Pistorei");
        break;
    }
    case 253380:
    {
        returnValue = F("Pistoreigasse");
        break;
    }
    case 253381:
    {
        returnValue = F("Pistoriusstr.");
        break;
    }
    case 253382:
    {
        returnValue = F("Pistorplatz");
        break;
    }
    case 253383:
    {
        returnValue = F("Pistorstr.");
        break;
    }
    case 253384:
    {
        returnValue = F("Pistre-Str.");
        break;
    }
    case 253385:
    {
        returnValue = F("Pithiviers Brücke");
        break;
    }
    case 253386:
    {
        returnValue = F("Pitschen-Pickel");
        break;
    }
    case 253387:
    {
        returnValue = F("Pitschener Str.");
        break;
    }
    case 253388:
    {
        returnValue = F("Pitscherweg");
        break;
    }
    case 253389:
    {
        returnValue = F("Pitschhausenweg");
        break;
    }
    case 253390:
    {
        returnValue = F("Pitschütz");
        break;
    }
    case 253391:
    {
        returnValue = F("Pitt-Kreuzberg-Weg");
        break;
    }
    case 253392:
    {
        returnValue = F("Pittenbacher Str.");
        break;
    }
    case 253393:
    {
        returnValue = F("Pittenberg");
        break;
    }
    case 253394:
    {
        returnValue = F("Pittenharter Str.");
        break;
    }
    case 253395:
    {
        returnValue = F("Pitter-Bey-Str.");
        break;
    }
    case 253396:
    {
        returnValue = F("Pitterer Siedlung");
        break;
    }
    case 253397:
    {
        returnValue = F("Pitterer Str.");
        break;
    }
    case 253398:
    {
        returnValue = F("Pittersberg");
        break;
    }
    case 253399:
    {
        returnValue = F("Pittersberger Str.");
        break;
    }
    case 253400:
    {
        returnValue = F("Pittersdorf");
        break;
    }
    case 253401:
    {
        returnValue = F("Pittingerplatz");
        break;
    }
    case 253402:
    {
        returnValue = F("Pittingerstr.");
        break;
    }
    case 253403:
    {
        returnValue = F("Pittling");
        break;
    }
    case 253404:
    {
        returnValue = F("Pittrich");
        break;
    }
    case 253405:
    {
        returnValue = F("Pittrichsberger Str.");
        break;
    }
    case 253406:
    {
        returnValue = F("Pittweg");
        break;
    }
    case 253407:
    {
        returnValue = F("Pitzacker");
        break;
    }
    case 253408:
    {
        returnValue = F("Pitzarweg");
        break;
    }
    case 253409:
    {
        returnValue = F("Pitzaustr.");
        break;
    }
    case 253410:
    {
        returnValue = F("Pitzberg");
        break;
    }
    case 253411:
    {
        returnValue = F("Pitzen");
        break;
    }
    case 253412:
    {
        returnValue = F("Pitzenbüsch");
        break;
    }
    case 253413:
    {
        returnValue = F("Pitzenweg");
        break;
    }
    case 253414:
    {
        returnValue = F("Pitzer Feld");
        break;
    }
    case 253415:
    {
        returnValue = F("Pitzerstr.");
        break;
    }
    case 253416:
    {
        returnValue = F("Pitzeshofen");
        break;
    }
    case 253417:
    {
        returnValue = F("Pitzeweg");
        break;
    }
    case 253418:
    {
        returnValue = F("Pitzgasse");
        break;
    }
    case 253419:
    {
        returnValue = F("Pitzlergasse");
        break;
    }
    case 253420:
    {
        returnValue = F("Pitzling");
        break;
    }
    case 253421:
    {
        returnValue = F("Pitzlinger Str.");
        break;
    }
    case 253422:
    {
        returnValue = F("Pitzlinger Weg");
        break;
    }
    case 253423:
    {
        returnValue = F("Pitzstr.");
        break;
    }
    case 253424:
    {
        returnValue = F("Pitztaler Str.");
        break;
    }
    case 253425:
    {
        returnValue = F("Pitzweg");
        break;
    }
    case 253426:
    {
        returnValue = F("Piunstr.");
        break;
    }
    case 253427:
    {
        returnValue = F("Pius-Fröschle-Str.");
        break;
    }
    case 253428:
    {
        returnValue = F("Pius-Häusler-Str.");
        break;
    }
    case 253429:
    {
        returnValue = F("Pius-Keller-Platz");
        break;
    }
    case 253430:
    {
        returnValue = F("Pius-Mozet-Str.");
        break;
    }
    case 253431:
    {
        returnValue = F("Pius-Scheel-Weg");
        break;
    }
    case 253432:
    {
        returnValue = F("Pius-Str.");
        break;
    }
    case 253433:
    {
        returnValue = F("Pius-Winter-Str.");
        break;
    }
    case 253434:
    {
        returnValue = F("Piussteg");
        break;
    }
    case 253435:
    {
        returnValue = F("Piusstr.");
        break;
    }
    case 253436:
    {
        returnValue = F("Piusweg");
        break;
    }
    case 253437:
    {
        returnValue = F("Pivitsheider Str.");
        break;
    }
    case 253438:
    {
        returnValue = F("Pivitsteich");
        break;
    }
    case 253439:
    {
        returnValue = F("Pivitstr.");
        break;
    }
    case 253440:
    {
        returnValue = F("Pivitsweg");
        break;
    }
    case 253441:
    {
        returnValue = F("Pivitt");
        break;
    }
    case 253442:
    {
        returnValue = F("Piwipper Str.");
        break;
    }
    case 253443:
    {
        returnValue = F("Piwitsberg");
        break;
    }
    case 253444:
    {
        returnValue = F("Piwitskamp");
        break;
    }
    case 253445:
    {
        returnValue = F("Piwitskuhle");
        break;
    }
    case 253446:
    {
        returnValue = F("Piwittsheide");
        break;
    }
    case 253447:
    {
        returnValue = F("Piwittskamp");
        break;
    }
    case 253448:
    {
        returnValue = F("Pixberg");
        break;
    }
    case 253449:
    {
        returnValue = F("Pixberger Str.");
        break;
    }
    case 253450:
    {
        returnValue = F("Pixeler Str.");
        break;
    }
    case 253451:
    {
        returnValue = F("Pixhaier Weg");
        break;
    }
    case 253452:
    {
        returnValue = F("Pixisstr.");
        break;
    }
    case 253453:
    {
        returnValue = F("Pixmühle");
        break;
    }
    case 253454:
    {
        returnValue = F("Pixwaag");
        break;
    }
    case 253455:
    {
        returnValue = F("Pißdorf");
        break;
    }
    case 253456:
    {
        returnValue = F("Pißdorfer Weg");
        break;
    }
    case 253457:
    {
        returnValue = F("Piärkamp");
        break;
    }
    case 253458:
    {
        returnValue = F("Pl 1");
        break;
    }
    case 253459:
    {
        returnValue = F("Plaatweg");
        break;
    }
    case 253460:
    {
        returnValue = F("Plaatzenstr.");
        break;
    }
    case 253461:
    {
        returnValue = F("Plaatzenweg");
        break;
    }
    case 253462:
    {
        returnValue = F("Plaazer Str.");
        break;
    }
    case 253463:
    {
        returnValue = F("Place Hettange Grande");
        break;
    }
    case 253464:
    {
        returnValue = F("Place Potton");
        break;
    }
    case 253465:
    {
        returnValue = F("Place Rosny sur Seine");
        break;
    }
    case 253466:
    {
        returnValue = F("Place Saint Pierre le Moûtier");
        break;
    }
    case 253467:
    {
        returnValue = F("Place d'Albert");
        break;
    }
    case 253468:
    {
        returnValue = F("Place d'Oyonnax");
        break;
    }
    case 253469:
    {
        returnValue = F("Place d'Uzès");
        break;
    }
    case 253470:
    {
        returnValue = F("Place de Bages");
        break;
    }
    case 253471:
    {
        returnValue = F("Place de Beaucouzé");
        break;
    }
    case 253472:
    {
        returnValue = F("Place de Betton");
        break;
    }
    case 253473:
    {
        returnValue = F("Place de Bourgueil");
        break;
    }
    case 253474:
    {
        returnValue = F("Place de Briey");
        break;
    }
    case 253475:
    {
        returnValue = F("Place de Caen");
        break;
    }
    case 253476:
    {
        returnValue = F("Place de Carentan");
        break;
    }
    case 253477:
    {
        returnValue = F("Place de Castelnau");
        break;
    }
    case 253478:
    {
        returnValue = F("Place de La Bouëxière");
        break;
    }
    case 253479:
    {
        returnValue = F("Place de Lesquin");
        break;
    }
    case 253480:
    {
        returnValue = F("Place de Lormes");
        break;
    }
    case 253481:
    {
        returnValue = F("Place de Merignac");
        break;
    }
    case 253482:
    {
        returnValue = F("Place de Montesson");
        break;
    }
    case 253483:
    {
        returnValue = F("Place de Plérin");
        break;
    }
    case 253484:
    {
        returnValue = F("Place de Rosny-sous-Bois");
        break;
    }
    case 253485:
    {
        returnValue = F("Place de Still");
        break;
    }
    case 253486:
    {
        returnValue = F("Place de Thiers");
        break;
    }
    case 253487:
    {
        returnValue = F("Place de Vernosc");
        break;
    }
    case 253488:
    {
        returnValue = F("Place de Vouvray");
        break;
    }
    case 253489:
    {
        returnValue = F("Place de la Petite Creuse");
        break;
    }
    case 253490:
    {
        returnValue = F("Place des Andelys");
        break;
    }
    case 253491:
    {
        returnValue = F("Place d´Urrugne / Grüne Lunge");
        break;
    }
    case 253492:
    {
        returnValue = F("Plachwitzer Weg");
        break;
    }
    case 253493:
    {
        returnValue = F("Placidus-Heinrich-Ring");
        break;
    }
    case 253494:
    {
        returnValue = F("Placidusstr.");
        break;
    }
    case 253495:
    {
        returnValue = F("Plack");
        break;
    }
    case 253496:
    {
        returnValue = F("Placken");
        break;
    }
    case 253497:
    {
        returnValue = F("Placken Ellern");
        break;
    }
    case 253498:
    {
        returnValue = F("Plackenberg");
        break;
    }
    case 253499:
    {
        returnValue = F("Plackenbruchweg");
        break;
    }
    case 253500:
    {
        returnValue = F("Plackenhof");
        break;
    }
    case 253501:
    {
        returnValue = F("Plackenhohn");
        break;
    }
    case 253502:
    {
        returnValue = F("Plackenstr.");
        break;
    }
    case 253503:
    {
        returnValue = F("Plackenweg");
        break;
    }
    case 253504:
    {
        returnValue = F("Plackhoff");
        break;
    }
    case 253505:
    {
        returnValue = F("Placklandsweg");
        break;
    }
    case 253506:
    {
        returnValue = F("Plackweg");
        break;
    }
    case 253507:
    {
        returnValue = F("Pladerberg");
        break;
    }
    case 253508:
    {
        returnValue = F("Pladerbergstr.");
        break;
    }
    case 253509:
    {
        returnValue = F("Pladiesenweg");
        break;
    }
    case 253510:
    {
        returnValue = F("Plagenweg");
        break;
    }
    case 253511:
    {
        returnValue = F("Plaggefelder Str.");
        break;
    }
    case 253512:
    {
        returnValue = F("Plaggen");
        break;
    }
    case 253513:
    {
        returnValue = F("Plaggen Esch");
        break;
    }
    case 253514:
    {
        returnValue = F("Plaggenbahn");
        break;
    }
    case 253515:
    {
        returnValue = F("Plaggenbrauckstr.");
        break;
    }
    case 253516:
    {
        returnValue = F("Plaggendamm");
        break;
    }
    case 253517:
    {
        returnValue = F("Plaggenesch");
        break;
    }
    case 253518:
    {
        returnValue = F("Plaggenhau");
        break;
    }
    case 253519:
    {
        returnValue = F("Plaggenhauer Kamp");
        break;
    }
    case 253520:
    {
        returnValue = F("Plaggenheide");
        break;
    }
    case 253521:
    {
        returnValue = F("Plaggenkamp");
        break;
    }
    case 253522:
    {
        returnValue = F("Plaggenkrugstr.");
        break;
    }
    case 253523:
    {
        returnValue = F("Plaggenmatt");
        break;
    }
    case 253524:
    {
        returnValue = F("Plaggenmoor");
        break;
    }
    case 253525:
    {
        returnValue = F("Plaggenriehe");
        break;
    }
    case 253526:
    {
        returnValue = F("Plaggenschale Mitte");
        break;
    }
    case 253527:
    {
        returnValue = F("Plaggenstiege");
        break;
    }
    case 253528:
    {
        returnValue = F("Plaggenstr.");
        break;
    }
    case 253529:
    {
        returnValue = F("Plaggental");
        break;
    }
    case 253530:
    {
        returnValue = F("Plaggenwall");
        break;
    }
    case 253531:
    {
        returnValue = F("Plaggenweg");
        break;
    }
    case 253532:
    {
        returnValue = F("Plaggestr.");
        break;
    }
    case 253533:
    {
        returnValue = F("Plagweg");
        break;
    }
    case 253534:
    {
        returnValue = F("Plagwitzer Str.");
        break;
    }
    case 253535:
    {
        returnValue = F("Plagwitzer Weg");
        break;
    }
    case 253536:
    {
        returnValue = F("Plaidter Str.");
        break;
    }
    case 253537:
    {
        returnValue = F("Plaidter Weg");
        break;
    }
    case 253538:
    {
        returnValue = F("Plaidterwegsrest");
        break;
    }
    case 253539:
    {
        returnValue = F("Plaika");
        break;
    }
    case 253540:
    {
        returnValue = F("Plaikengasse");
        break;
    }
    case 253541:
    {
        returnValue = F("Plainburgstr.");
        break;
    }
    case 253542:
    {
        returnValue = F("Plainstr.");
        break;
    }
    case 253543:
    {
        returnValue = F("Plainweg");
        break;
    }
    case 253544:
    {
        returnValue = F("Plaisirstr.");
        break;
    }
    case 253545:
    {
        returnValue = F("Plambeckhof");
        break;
    }
    case 253546:
    {
        returnValue = F("Plambeckskamp");
        break;
    }
    case 253547:
    {
        returnValue = F("Plammerbergstr.");
        break;
    }
    case 253548:
    {
        returnValue = F("Plan");
        break;
    }
    case 253549:
    {
        returnValue = F("Plan-Weseritzer-Platz");
        break;
    }
    case 253550:
    {
        returnValue = F("Planberg");
        break;
    }
    case 253551:
    {
        returnValue = F("Planbrücke");
        break;
    }
    case 253552:
    {
        returnValue = F("Planckengässchen");
        break;
    }
    case 253553:
    {
        returnValue = F("Planckstr.");
        break;
    }
    case 253554:
    {
        returnValue = F("Planckweg");
        break;
    }
    case 253555:
    {
        returnValue = F("Plane");
        break;
    }
    case 253556:
    {
        returnValue = F("Planeberg");
        break;
    }
    case 253557:
    {
        returnValue = F("Planebrücke");
        break;
    }
    case 253558:
    {
        returnValue = F("Planegger Str.");
        break;
    }
    case 253559:
    {
        returnValue = F("Planegger Sträßel");
        break;
    }
    case 253560:
    {
        returnValue = F("Planegger Sträßl");
        break;
    }
    case 253561:
    {
        returnValue = F("Planellweg");
        break;
    }
    case 253562:
    {
        returnValue = F("Planer Str.");
        break;
    }
    case 253563:
    {
        returnValue = F("Planersgut");
        break;
    }
    case 253564:
    {
        returnValue = F("Planestr.");
        break;
    }
    case 253565:
    {
        returnValue = F("Planeten- und Rundwanderweg");
        break;
    }
    case 253566:
    {
        returnValue = F("Planetenlehrpfad");
        break;
    }
    case 253567:
    {
        returnValue = F("Planetenlehrpfad Handeloh");
        break;
    }
    case 253568:
    {
        returnValue = F("Planetenpfad");
        break;
    }
    case 253569:
    {
        returnValue = F("Planetenring");
        break;
    }
    case 253570:
    {
        returnValue = F("Planetenstr.");
        break;
    }
    case 253571:
    {
        returnValue = F("Planetenwanderweg");
        break;
    }
    case 253572:
    {
        returnValue = F("Planetenwanderweg Drebach");
        break;
    }
    case 253573:
    {
        returnValue = F("Planetenweg");
        break;
    }
    case 253574:
    {
        returnValue = F("Planetenweg Drebach");
        break;
    }
    case 253575:
    {
        returnValue = F("Planeweg");
        break;
    }
    case 253576:
    {
        returnValue = F("Plangasse");
        break;
    }
    case 253577:
    {
        returnValue = F("Planiastr.");
        break;
    }
    case 253578:
    {
        returnValue = F("Planie");
        break;
    }
    case 253579:
    {
        returnValue = F("Planie-Weg");
        break;
    }
    case 253580:
    {
        returnValue = F("Planiestr.");
        break;
    }
    case 253581:
    {
        returnValue = F("Planiesträßchen");
        break;
    }
    case 253582:
    {
        returnValue = F("Planieweg");
        break;
    }
    case 253583:
    {
        returnValue = F("Planiger Str.");
        break;
    }
    case 253584:
    {
        returnValue = F("Planitz");
        break;
    }
    case 253585:
    {
        returnValue = F("Planitzer Str.");
        break;
    }
    case 253586:
    {
        returnValue = F("Planitzstr.");
        break;
    }
    case 253587:
    {
        returnValue = F("Planitzweg");
        break;
    }
    case 253588:
    {
        returnValue = F("Planitzwiese");
        break;
    }
    case 253589:
    {
        returnValue = F("Plankemai");
        break;
    }
    case 253590:
    {
        returnValue = F("Planken");
        break;
    }
    case 253591:
    {
        returnValue = F("Plankenbreite");
        break;
    }
    case 253592:
    {
        returnValue = F("Plankendicksweg");
        break;
    }
    case 253593:
    {
        returnValue = F("Plankener Str.");
        break;
    }
    case 253594:
    {
        returnValue = F("Plankener Weg");
        break;
    }
    case 253595:
    {
        returnValue = F("Plankenhammer");
        break;
    }
    case 253596:
    {
        returnValue = F("Plankenheide");
        break;
    }
    case 253597:
    {
        returnValue = F("Plankenhofer");
        break;
    }
    case 253598:
    {
        returnValue = F("Plankenkamp");
        break;
    }
    case 253599:
    {
        returnValue = F("Plankenlinie");
        break;
    }
    case 253600:
    {
        returnValue = F("Plankenschemm");
        break;
    }
    case 253601:
    {
        returnValue = F("Plankenstein");
        break;
    }
    case 253602:
    {
        returnValue = F("Plankensteiner Weg");
        break;
    }
    case 253603:
    {
        returnValue = F("Plankenstr.");
        break;
    }
    case 253604:
    {
        returnValue = F("Plankentalstr.");
        break;
    }
    case 253605:
    {
        returnValue = F("Plankenweg");
        break;
    }
    case 253606:
    {
        returnValue = F("Plankenwiese");
        break;
    }
    case 253607:
    {
        returnValue = F("Plankenäcker");
        break;
    }
    case 253608:
    {
        returnValue = F("Plankerdyk");
        break;
    }
    case 253609:
    {
        returnValue = F("Plankgarten");
        break;
    }
    case 253610:
    {
        returnValue = F("Plankmannsweg");
        break;
    }
    case 253611:
    {
        returnValue = F("Plankopf");
        break;
    }
    case 253612:
    {
        returnValue = F("Plankstadter Str.");
        break;
    }
    case 253613:
    {
        returnValue = F("Plankstadter Weg");
        break;
    }
    case 253614:
    {
        returnValue = F("Plankstr.");
        break;
    }
    case 253615:
    {
        returnValue = F("Plankweg");
        break;
    }
    case 253616:
    {
        returnValue = F("Planpassage");
        break;
    }
    case 253617:
    {
        returnValue = F("Planplatz");
        break;
    }
    case 253618:
    {
        returnValue = F("Planschwitzer Str.");
        break;
    }
    case 253619:
    {
        returnValue = F("Plansee -Linderhof");
        break;
    }
    case 253620:
    {
        returnValue = F("Planstr.");
        break;
    }
    case 253621:
    {
        returnValue = F("Planstr. A");
        break;
    }
    case 253622:
    {
        returnValue = F("Planstr. B");
        break;
    }
    case 253623:
    {
        returnValue = F("Planstr. C");
        break;
    }
    case 253624:
    {
        returnValue = F("Planstr. C2");
        break;
    }
    case 253625:
    {
        returnValue = F("Planstr. D");
        break;
    }
    case 253626:
    {
        returnValue = F("Planstr. E");
        break;
    }
    case 253627:
    {
        returnValue = F("Planstr. Nord 14");
        break;
    }
    case 253628:
    {
        returnValue = F("Planstr. Nord 15");
        break;
    }
    case 253629:
    {
        returnValue = F("Planstr. Nord 17");
        break;
    }
    case 253630:
    {
        returnValue = F("Planstr. Nord 18");
        break;
    }
    case 253631:
    {
        returnValue = F("Planstr. Nord 19");
        break;
    }
    case 253632:
    {
        returnValue = F("Planstr. Nord 20");
        break;
    }
    case 253633:
    {
        returnValue = F("Planstr. Nord 21");
        break;
    }
    case 253634:
    {
        returnValue = F("Planstr. Nord 22");
        break;
    }
    case 253635:
    {
        returnValue = F("Planstr. Nord 23");
        break;
    }
    case 253636:
    {
        returnValue = F("Planstr. Nord 24");
        break;
    }
    case 253637:
    {
        returnValue = F("Planstr. Nord 25");
        break;
    }
    case 253638:
    {
        returnValue = F("Planstr. Nord 26");
        break;
    }
    case 253639:
    {
        returnValue = F("Planstr. Süd");
        break;
    }
    case 253640:
    {
        returnValue = F("Plantage");
        break;
    }
    case 253641:
    {
        returnValue = F("Plantagenhof");
        break;
    }
    case 253642:
    {
        returnValue = F("Plantagenplatz");
        break;
    }
    case 253643:
    {
        returnValue = F("Plantagenring");
        break;
    }
    case 253644:
    {
        returnValue = F("Plantagenstr.");
        break;
    }
    case 253645:
    {
        returnValue = F("Plantagenweg");
        break;
    }
    case 253646:
    {
        returnValue = F("Plantanen - Carré");
        break;
    }
    case 253647:
    {
        returnValue = F("Plantanenhof");
        break;
    }
    case 253648:
    {
        returnValue = F("Plantanenstr.");
        break;
    }
    case 253649:
    {
        returnValue = F("Plantation");
        break;
    }
    case 253650:
    {
        returnValue = F("Plantenbergweg");
        break;
    }
    case 253651:
    {
        returnValue = F("Plantenkamp");
        break;
    }
    case 253652:
    {
        returnValue = F("Planweg");
        break;
    }
    case 253653:
    {
        returnValue = F("Planwiese");
        break;
    }
    case 253654:
    {
        returnValue = F("Plapphalde");
        break;
    }
    case 253655:
    {
        returnValue = F("Plapphof");
        break;
    }
    case 253656:
    {
        returnValue = F("Plappsteinweg");
        break;
    }
    case 253657:
    {
        returnValue = F("Plas");
        break;
    }
    case 253658:
    {
        returnValue = F("Plasch");
        break;
    }
    case 253659:
    {
        returnValue = F("Plascheider Weg");
        break;
    }
    case 253660:
    {
        returnValue = F("Plaschkestr.");
        break;
    }
    case 253661:
    {
        returnValue = F("Plass");
        break;
    }
    case 253662:
    {
        returnValue = F("Plassenberger Str.");
        break;
    }
    case 253663:
    {
        returnValue = F("Plassenbergerstr.");
        break;
    }
    case 253664:
    {
        returnValue = F("Plassering");
        break;
    }
    case 253665:
    {
        returnValue = F("Plasseweg");
        break;
    }
    case 253666:
    {
        returnValue = F("Plassweg");
        break;
    }
    case 253667:
    {
        returnValue = F("Plastau");
        break;
    }
    case 253668:
    {
        returnValue = F("Plastauer Str.");
        break;
    }
    case 253669:
    {
        returnValue = F("Plastenberg");
        break;
    }
    case 253670:
    {
        returnValue = F("Plastikpark");
        break;
    }
    case 253671:
    {
        returnValue = F("Plastweg");
        break;
    }
    case 253672:
    {
        returnValue = F("Plastyweg");
        break;
    }
    case 253673:
    {
        returnValue = F("Platanenallee");
        break;
    }
    case 253674:
    {
        returnValue = F("Platanenbogen");
        break;
    }
    case 253675:
    {
        returnValue = F("Platanengasse");
        break;
    }
    case 253676:
    {
        returnValue = F("Platanenhain");
        break;
    }
    case 253677:
    {
        returnValue = F("Platanenhof");
        break;
    }
    case 253678:
    {
        returnValue = F("Platanenkamp");
        break;
    }
    case 253679:
    {
        returnValue = F("Platanenplatz");
        break;
    }
    case 253680:
    {
        returnValue = F("Platanenring");
        break;
    }
    case 253681:
    {
        returnValue = F("Platanensaal");
        break;
    }
    case 253682:
    {
        returnValue = F("Platanenstr.");
        break;
    }
    case 253683:
    {
        returnValue = F("Platanenweg");
        break;
    }
    case 253684:
    {
        returnValue = F("Platbergweg");
        break;
    }
    case 253685:
    {
        returnValue = F("Plate");
        break;
    }
    case 253686:
    {
        returnValue = F("Plateauweg");
        break;
    }
    case 253687:
    {
        returnValue = F("Platehofstr.");
        break;
    }
    case 253688:
    {
        returnValue = F("Platekaer Str.");
        break;
    }
    case 253689:
    {
        returnValue = F("Platendorfer Str.");
        break;
    }
    case 253690:
    {
        returnValue = F("Platenhof");
        break;
    }
    case 253691:
    {
        returnValue = F("Platenhofer Str.");
        break;
    }
    case 253692:
    {
        returnValue = F("Plateniusstr.");
        break;
    }
    case 253693:
    {
        returnValue = F("Platenkamp");
        break;
    }
    case 253694:
    {
        returnValue = F("Platenmeisterstr.");
        break;
    }
    case 253695:
    {
        returnValue = F("Platenstr.");
        break;
    }
    case 253696:
    {
        returnValue = F("Platenweg");
        break;
    }
    case 253697:
    {
        returnValue = F("Plater Blick");
        break;
    }
    case 253698:
    {
        returnValue = F("Plater Str.");
        break;
    }
    case 253699:
    {
        returnValue = F("Plater Weg");
        break;
    }
    case 253700:
    {
        returnValue = F("Platerei");
        break;
    }
    case 253701:
    {
        returnValue = F("Platering");
        break;
    }
    case 253702:
    {
        returnValue = F("Plath");
        break;
    }
    case 253703:
    {
        returnValue = F("Plather Str.");
        break;
    }
    case 253704:
    {
        returnValue = F("Plather Weg");
        break;
    }
    case 253705:
    {
        returnValue = F("Platinstr.");
        break;
    }
    case 253706:
    {
        returnValue = F("Platinweg");
        break;
    }
    case 253707:
    {
        returnValue = F("Platiß");
        break;
    }
    case 253708:
    {
        returnValue = F("Platjenwerber Weg");
        break;
    }
    case 253709:
    {
        returnValue = F("Platnerstr.");
        break;
    }
    case 253710:
    {
        returnValue = F("Plato-Wild-Str.");
        break;
    }
    case 253711:
    {
        returnValue = F("Platschkyberg");
        break;
    }
    case 253712:
    {
        returnValue = F("Platschkyweg");
        break;
    }
    case 253713:
    {
        returnValue = F("Platschower Str.");
        break;
    }
    case 253714:
    {
        returnValue = F("Platt");
        break;
    }
    case 253715:
    {
        returnValue = F("Plattachmühlstr.");
        break;
    }
    case 253716:
    {
        returnValue = F("Plattachstr.");
        break;
    }
    case 253717:
    {
        returnValue = F("Platte");
        break;
    }
    case 253718:
    {
        returnValue = F("Platte Weide");
        break;
    }
    case 253719:
    {
        returnValue = F("Platte Wiese");
        break;
    }
    case 253720:
    {
        returnValue = F("Plattebergstr.");
        break;
    }
    case 253721:
    {
        returnValue = F("Platten");
        break;
    }
    case 253722:
    {
        returnValue = F("Platten Diek");
        break;
    }
    case 253723:
    {
        returnValue = F("Plattenberg");
        break;
    }
    case 253724:
    {
        returnValue = F("Plattenberger Weg");
        break;
    }
    case 253725:
    {
        returnValue = F("Plattenbergstr.");
        break;
    }
    case 253726:
    {
        returnValue = F("Plattenbergweg");
        break;
    }
    case 253727:
    {
        returnValue = F("Plattenbichlstr.");
        break;
    }
    case 253728:
    {
        returnValue = F("Plattenbruchweg");
        break;
    }
    case 253729:
    {
        returnValue = F("Plattenburber Weg");
        break;
    }
    case 253730:
    {
        returnValue = F("Plattenburger Str.");
        break;
    }
    case 253731:
    {
        returnValue = F("Plattenburger Weg");
        break;
    }
    case 253732:
    {
        returnValue = F("Plattener Str.");
        break;
    }
    case 253733:
    {
        returnValue = F("Plattenfeld");
        break;
    }
    case 253734:
    {
        returnValue = F("Plattenfeldstr.");
        break;
    }
    case 253735:
    {
        returnValue = F("Plattenflur");
        break;
    }
    case 253736:
    {
        returnValue = F("Plattengarten");
        break;
    }
    case 253737:
    {
        returnValue = F("Plattengasse");
        break;
    }
    case 253738:
    {
        returnValue = F("Plattengrüberweg");
        break;
    }
    case 253739:
    {
        returnValue = F("Plattengutweg");
        break;
    }
    case 253740:
    {
        returnValue = F("Plattengüberweg");
        break;
    }
    case 253741:
    {
        returnValue = F("Plattenhag");
        break;
    }
    case 253742:
    {
        returnValue = F("Plattenhaldeweg");
        break;
    }
    case 253743:
    {
        returnValue = F("Plattenhardter Str.");
        break;
    }
    case 253744:
    {
        returnValue = F("Plattenhaus");
        break;
    }
    case 253745:
    {
        returnValue = F("Plattenhauweg");
        break;
    }
    case 253746:
    {
        returnValue = F("Plattenhof");
        break;
    }
    case 253747:
    {
        returnValue = F("Plattenhohl");
        break;
    }
    case 253748:
    {
        returnValue = F("Plattenholz");
        break;
    }
    case 253749:
    {
        returnValue = F("Plattenhöfe");
        break;
    }
    case 253750:
    {
        returnValue = F("Plattenhöhenweg");
        break;
    }
    case 253751:
    {
        returnValue = F("Plattenkopfweg");
        break;
    }
    case 253752:
    {
        returnValue = F("Plattenkämpenweg");
        break;
    }
    case 253753:
    {
        returnValue = F("Plattenpfad");
        break;
    }
    case 253754:
    {
        returnValue = F("Plattenrainweg");
        break;
    }
    case 253755:
    {
        returnValue = F("Plattenschneise");
        break;
    }
    case 253756:
    {
        returnValue = F("Plattenseestr.");
        break;
    }
    case 253757:
    {
        returnValue = F("Plattensteig");
        break;
    }
    case 253758:
    {
        returnValue = F("Plattenstein");
        break;
    }
    case 253759:
    {
        returnValue = F("Plattenstr.");
        break;
    }
    case 253760:
    {
        returnValue = F("Plattensträßchen");
        break;
    }
    case 253761:
    {
        returnValue = F("Plattenteichweg");
        break;
    }
    case 253762:
    {
        returnValue = F("Plattenthaler Weg");
        break;
    }
    case 253763:
    {
        returnValue = F("Plattenthalstr.");
        break;
    }
    case 253764:
    {
        returnValue = F("Plattenwaldallee");
        break;
    }
    case 253765:
    {
        returnValue = F("Plattenwaldweg");
        break;
    }
    case 253766:
    {
        returnValue = F("Plattenweg");
        break;
    }
    case 253767:
    {
        returnValue = F("Plattenweg Richtung Jeetze/PLathe");
        break;
    }
    case 253768:
    {
        returnValue = F("Plattenweg Rotberg");
        break;
    }
    case 253769:
    {
        returnValue = F("Plattenäcker");
        break;
    }
    case 253770:
    {
        returnValue = F("Plattenäcker Str.");
        break;
    }
    case 253771:
    {
        returnValue = F("Plattenösch");
        break;
    }
    case 253772:
    {
        returnValue = F("Platter Kamp");
        break;
    }
    case 253773:
    {
        returnValue = F("Platter Str.");
        break;
    }
    case 253774:
    {
        returnValue = F("Platter Weg");
        break;
    }
    case 253775:
    {
        returnValue = F("Platterstr.");
        break;
    }
    case 253776:
    {
        returnValue = F("Platterweg");
        break;
    }
    case 253777:
    {
        returnValue = F("Plattevenn");
        break;
    }
    case 253778:
    {
        returnValue = F("Plattform Ellbachseeblick");
        break;
    }
    case 253779:
    {
        returnValue = F("Platthaus");
        break;
    }
    case 253780:
    {
        returnValue = F("Plattlinger Str.");
        break;
    }
    case 253781:
    {
        returnValue = F("Plattlinger Weg");
        break;
    }
    case 253782:
    {
        returnValue = F("Plattner Str.");
        break;
    }
    case 253783:
    {
        returnValue = F("Plattner Weg");
        break;
    }
    case 253784:
    {
        returnValue = F("Plattnergasse");
        break;
    }
    case 253785:
    {
        returnValue = F("Plattnerstr.");
        break;
    }
    case 253786:
    {
        returnValue = F("Plattstr.");
        break;
    }
    case 253787:
    {
        returnValue = F("Plattweg");
        break;
    }
    case 253788:
    {
        returnValue = F("Platvitz");
        break;
    }
    case 253789:
    {
        returnValue = F("Platvoets Kamp");
        break;
    }
    case 253790:
    {
        returnValue = F("Platwiesenweg");
        break;
    }
    case 253791:
    {
        returnValue = F("Platz");
        break;
    }
    case 253792:
    {
        returnValue = F("Platz \"Ochs und Esel Brunnen");
        break;
    }
    case 253793:
    {
        returnValue = F("Platz An der Weed");
        break;
    }
    case 253794:
    {
        returnValue = F("Platz Cartigny");
        break;
    }
    case 253795:
    {
        returnValue = F("Platz Clouange");
        break;
    }
    case 253796:
    {
        returnValue = F("Platz Marsannay la cote");
        break;
    }
    case 253797:
    {
        returnValue = F("Platz Montmorillon");
        break;
    }
    case 253798:
    {
        returnValue = F("Platz Montoir-de-Bretagne");
        break;
    }
    case 253799:
    {
        returnValue = F("Platz Nemours");
        break;
    }
    case 253800:
    {
        returnValue = F("Platz Nucourt");
        break;
    }
    case 253801:
    {
        returnValue = F("Platz Saint Aubin");
        break;
    }
    case 253802:
    {
        returnValue = F("Platz Troarn");
        break;
    }
    case 253803:
    {
        returnValue = F("Platz Villefranche");
        break;
    }
    case 253804:
    {
        returnValue = F("Platz am Dörnle");
        break;
    }
    case 253805:
    {
        returnValue = F("Platz am Ehrenmal");
        break;
    }
    case 253806:
    {
        returnValue = F("Platz am Hanselbrunnen");
        break;
    }
    case 253807:
    {
        returnValue = F("Platz am Kaiser-Konrad-Weg");
        break;
    }
    case 253808:
    {
        returnValue = F("Platz am Kaiserbach");
        break;
    }
    case 253809:
    {
        returnValue = F("Platz am Kolk");
        break;
    }
    case 253810:
    {
        returnValue = F("Platz am Museum");
        break;
    }
    case 253811:
    {
        returnValue = F("Platz am Mühltor");
        break;
    }
    case 253812:
    {
        returnValue = F("Platz am Niedertor");
        break;
    }
    case 253813:
    {
        returnValue = F("Platz am Sandtor");
        break;
    }
    case 253814:
    {
        returnValue = F("Platz am Schachspiel");
        break;
    }
    case 253815:
    {
        returnValue = F("Platz am See");
        break;
    }
    case 253816:
    {
        returnValue = F("Platz am Stadtwald");
        break;
    }
    case 253817:
    {
        returnValue = F("Platz am Stein");
        break;
    }
    case 253818:
    {
        returnValue = F("Platz am Teich");
        break;
    }
    case 253819:
    {
        returnValue = F("Platz am Wasserturm");
        break;
    }
    case 253820:
    {
        returnValue = F("Platz am roten Schirm");
        break;
    }
    case 253821:
    {
        returnValue = F("Platz an der Alten Post");
        break;
    }
    case 253822:
    {
        returnValue = F("Platz an der Eiche");
        break;
    }
    case 253823:
    {
        returnValue = F("Platz an der Kapelle");
        break;
    }
    case 253824:
    {
        returnValue = F("Platz an der Lieser");
        break;
    }
    case 253825:
    {
        returnValue = F("Platz an der Linde");
        break;
    }
    case 253826:
    {
        returnValue = F("Platz an der Marienkirche");
        break;
    }
    case 253827:
    {
        returnValue = F("Platz an der Port");
        break;
    }
    case 253828:
    {
        returnValue = F("Platz an der ehemaligen Synagoge");
        break;
    }
    case 253829:
    {
        returnValue = F("Platz auf der Hochmahle");
        break;
    }
    case 253830:
    {
        returnValue = F("Platz d' Agen");
        break;
    }
    case 253831:
    {
        returnValue = F("Platz de Plombieres");
        break;
    }
    case 253832:
    {
        returnValue = F("Platz der AWG");
        break;
    }
    case 253833:
    {
        returnValue = F("Platz der Arbeit");
        break;
    }
    case 253834:
    {
        returnValue = F("Platz der Badischen Revolution");
        break;
    }
    case 253835:
    {
        returnValue = F("Platz der Bausoldaten");
        break;
    }
    case 253836:
    {
        returnValue = F("Platz der Befreiung");
        break;
    }
    case 253837:
    {
        returnValue = F("Platz der Begegnung");
        break;
    }
    case 253838:
    {
        returnValue = F("Platz der Begegnung und der Besinnung");
        break;
    }
    case 253839:
    {
        returnValue = F("Platz der Besinnung");
        break;
    }
    case 253840:
    {
        returnValue = F("Platz der Borromäerinnen");
        break;
    }
    case 253841:
    {
        returnValue = F("Platz der Brieftauben");
        break;
    }
    case 253842:
    {
        returnValue = F("Platz der DSF");
        break;
    }
    case 253843:
    {
        returnValue = F("Platz der Demokratie");
        break;
    }
    case 253844:
    {
        returnValue = F("Platz der Deutschen Einheit");
        break;
    }
    case 253845:
    {
        returnValue = F("Platz der Einheit");
        break;
    }
    case 253846:
    {
        returnValue = F("Platz der Einheitsgemeinde");
        break;
    }
    case 253847:
    {
        returnValue = F("Platz der Ermahnung");
        break;
    }
    case 253848:
    {
        returnValue = F("Platz der Familie");
        break;
    }
    case 253849:
    {
        returnValue = F("Platz der Fischerzunft");
        break;
    }
    case 253850:
    {
        returnValue = F("Platz der Freiheit");
        break;
    }
    case 253851:
    {
        returnValue = F("Platz der Freundschaft");
        break;
    }
    case 253852:
    {
        returnValue = F("Platz der Friedlichen Revolution");
        break;
    }
    case 253853:
    {
        returnValue = F("Platz der Fußballweltmeisterschaft");
        break;
    }
    case 253854:
    {
        returnValue = F("Platz der Generationen");
        break;
    }
    case 253855:
    {
        returnValue = F("Platz der Gewerkschaften");
        break;
    }
    case 253856:
    {
        returnValue = F("Platz der Heimat");
        break;
    }
    case 253857:
    {
        returnValue = F("Platz der Jakobiner");
        break;
    }
    case 253858:
    {
        returnValue = F("Platz der Jugand");
        break;
    }
    case 253859:
    {
        returnValue = F("Platz der Jugend");
        break;
    }
    case 253860:
    {
        returnValue = F("Platz der Kinderrechte");
        break;
    }
    case 253861:
    {
        returnValue = F("Platz der Kontinente");
        break;
    }
    case 253862:
    {
        returnValue = F("Platz der Kosmonauten");
        break;
    }
    case 253863:
    {
        returnValue = F("Platz der Köpfe");
        break;
    }
    case 253864:
    {
        returnValue = F("Platz der Künste");
        break;
    }
    case 253865:
    {
        returnValue = F("Platz der LPG");
        break;
    }
    case 253866:
    {
        returnValue = F("Platz der Liebe");
        break;
    }
    case 253867:
    {
        returnValue = F("Platz der MTS");
        break;
    }
    case 253868:
    {
        returnValue = F("Platz der Mainzer Republik");
        break;
    }
    case 253869:
    {
        returnValue = F("Platz der Menschenrechte");
        break;
    }
    case 253870:
    {
        returnValue = F("Platz der Märzgefallenen");
        break;
    }
    case 253871:
    {
        returnValue = F("Platz der Mühlenpaot");
        break;
    }
    case 253872:
    {
        returnValue = F("Platz der Nachbarschaften");
        break;
    }
    case 253873:
    {
        returnValue = F("Platz der Normandie");
        break;
    }
    case 253874:
    {
        returnValue = F("Platz der Oktoberopfer");
        break;
    }
    case 253875:
    {
        returnValue = F("Platz der Opfer des Faschismus");
        break;
    }
    case 253876:
    {
        returnValue = F("Platz der Parnergemeinden");
        break;
    }
    case 253877:
    {
        returnValue = F("Platz der Partner- / Freundschaftsstädte");
        break;
    }
    case 253878:
    {
        returnValue = F("Platz der Partnerschaft");
        break;
    }
    case 253879:
    {
        returnValue = F("Platz der Partnerschaften");
        break;
    }
    case 253880:
    {
        returnValue = F("Platz der Partnerstadt Grasse");
        break;
    }
    case 253881:
    {
        returnValue = F("Platz der Partnerstädte");
        break;
    }
    case 253882:
    {
        returnValue = F("Platz der Republik");
        break;
    }
    case 253883:
    {
        returnValue = F("Platz der Siedler");
        break;
    }
    case 253884:
    {
        returnValue = F("Platz der Solidarität");
        break;
    }
    case 253885:
    {
        returnValue = F("Platz der Stadt Monthey");
        break;
    }
    case 253886:
    {
        returnValue = F("Platz der Stadt Ostrov");
        break;
    }
    case 253887:
    {
        returnValue = F("Platz der Stadt Rue");
        break;
    }
    case 253888:
    {
        returnValue = F("Platz der Stadt Yavne");
        break;
    }
    case 253889:
    {
        returnValue = F("Platz der Städtefreundschaft");
        break;
    }
    case 253890:
    {
        returnValue = F("Platz der Städtefreundschaften");
        break;
    }
    case 253891:
    {
        returnValue = F("Platz der Städtepartnerschaft");
        break;
    }
    case 253892:
    {
        returnValue = F("Platz der Städtepartnerschaften");
        break;
    }
    case 253893:
    {
        returnValue = F("Platz der Synagoge");
        break;
    }
    case 253894:
    {
        returnValue = F("Platz der Universität");
        break;
    }
    case 253895:
    {
        returnValue = F("Platz der Vereine");
        break;
    }
    case 253896:
    {
        returnValue = F("Platz der Verfassungsfreunde");
        break;
    }
    case 253897:
    {
        returnValue = F("Platz der Völkerfreundschaft");
        break;
    }
    case 253898:
    {
        returnValue = F("Platz der Weißen Rose");
        break;
    }
    case 253899:
    {
        returnValue = F("Platz der Weißen Väter (Pferdewiese)");
        break;
    }
    case 253900:
    {
        returnValue = F("Platz der Werktätigen");
        break;
    }
    case 253901:
    {
        returnValue = F("Platz der Wiedervereinigung 3. Oktober 1990");
        break;
    }
    case 253902:
    {
        returnValue = F("Platz der Zukunft");
        break;
    }
    case 253903:
    {
        returnValue = F("Platz der deutschen Einheit");
        break;
    }
    case 253904:
    {
        returnValue = F("Platz der ehemaligen Synagoge");
        break;
    }
    case 253905:
    {
        returnValue = F("Platz der hl. Familie");
        break;
    }
    case 253906:
    {
        returnValue = F("Platz der widerständigen Frauen");
        break;
    }
    case 253907:
    {
        returnValue = F("Platz des 17. Juni");
        break;
    }
    case 253908:
    {
        returnValue = F("Platz des 20. Juli");
        break;
    }
    case 253909:
    {
        returnValue = F("Platz des 21. September");
        break;
    }
    case 253910:
    {
        returnValue = F("Platz des 23. Oktober (Rosengarten)");
        break;
    }
    case 253911:
    {
        returnValue = F("Platz des 3. Oktober");
        break;
    }
    case 253912:
    {
        returnValue = F("Platz des 7. Februar 1962");
        break;
    }
    case 253913:
    {
        returnValue = F("Platz des Aufbaus");
        break;
    }
    case 253914:
    {
        returnValue = F("Platz des Bergmanns");
        break;
    }
    case 253915:
    {
        returnValue = F("Platz des Friedens");
        break;
    }
    case 253916:
    {
        returnValue = F("Platz des Gedenkens");
        break;
    }
    case 253917:
    {
        returnValue = F("Platz des Handwerks");
        break;
    }
    case 253918:
    {
        returnValue = F("Platz des Unterflurhydranten");
        break;
    }
    case 253919:
    {
        returnValue = F("Platz des Volkes");
        break;
    }
    case 253920:
    {
        returnValue = F("Platz des Westfälischen Friedens");
        break;
    }
    case 253921:
    {
        returnValue = F("Platz des europäischen Versprechens");
        break;
    }
    case 253922:
    {
        returnValue = F("Platz des unbekannten Deserteurs");
        break;
    }
    case 253923:
    {
        returnValue = F("Platz la Ville du Bois");
        break;
    }
    case 253924:
    {
        returnValue = F("Platz von Airaines");
        break;
    }
    case 253925:
    {
        returnValue = F("Platz von Esvres");
        break;
    }
    case 253926:
    {
        returnValue = F("Platz von Hettstedt");
        break;
    }
    case 253927:
    {
        returnValue = F("Platz von Montauban");
        break;
    }
    case 253928:
    {
        returnValue = F("Platz von Montrichard");
        break;
    }
    case 253929:
    {
        returnValue = F("Platz von Scaër");
        break;
    }
    case 253930:
    {
        returnValue = F("Platz von Szigetszentmárton");
        break;
    }
    case 253931:
    {
        returnValue = F("Platz von Wieliczka");
        break;
    }
    case 253932:
    {
        returnValue = F("Platzberg");
        break;
    }
    case 253933:
    {
        returnValue = F("Platzborn");
        break;
    }
    case 253934:
    {
        returnValue = F("Platzeichenstr.");
        break;
    }
    case 253935:
    {
        returnValue = F("Platzer Berg");
        break;
    }
    case 253936:
    {
        returnValue = F("Platzer Höhenweg");
        break;
    }
    case 253937:
    {
        returnValue = F("Platzer Weg");
        break;
    }
    case 253938:
    {
        returnValue = F("Platzfeld");
        break;
    }
    case 253939:
    {
        returnValue = F("Platzfelde");
        break;
    }
    case 253940:
    {
        returnValue = F("Platzgarten");
        break;
    }
    case 253941:
    {
        returnValue = F("Platzgasse");
        break;
    }
    case 253942:
    {
        returnValue = F("Platzgärten");
        break;
    }
    case 253943:
    {
        returnValue = F("Platzhof");
        break;
    }
    case 253944:
    {
        returnValue = F("Platzhoffstr.");
        break;
    }
    case 253945:
    {
        returnValue = F("Platzhofstr.");
        break;
    }
    case 253946:
    {
        returnValue = F("Platzhölzle");
        break;
    }
    case 253947:
    {
        returnValue = F("Platzkamp");
        break;
    }
    case 253948:
    {
        returnValue = F("Platzl");
        break;
    }
    case 253949:
    {
        returnValue = F("Platzlweg");
        break;
    }
    case 253950:
    {
        returnValue = F("Platzrütteweg");
        break;
    }
    case 253951:
    {
        returnValue = F("Platzstr.");
        break;
    }
    case 253952:
    {
        returnValue = F("Platzweg");
        break;
    }
    case 253953:
    {
        returnValue = F("Platzwies");
        break;
    }
    case 253954:
    {
        returnValue = F("Platzwiese");
        break;
    }
    case 253955:
    {
        returnValue = F("Platzwiesstr.");
        break;
    }
    case 253956:
    {
        returnValue = F("Platzäcker");
        break;
    }
    case 253957:
    {
        returnValue = F("Plauberg");
        break;
    }
    case 253958:
    {
        returnValue = F("Plaudergartenstr.");
        break;
    }
    case 253959:
    {
        returnValue = F("Plauderstr.");
        break;
    }
    case 253960:
    {
        returnValue = F("Plauelstr.");
        break;
    }
    case 253961:
    {
        returnValue = F("Plauener Landstr.");
        break;
    }
    case 253962:
    {
        returnValue = F("Plauener Str.");
        break;
    }
    case 253963:
    {
        returnValue = F("Plauener Talstr.");
        break;
    }
    case 253964:
    {
        returnValue = F("Plauener Weg");
        break;
    }
    case 253965:
    {
        returnValue = F("Plauensche Str.");
        break;
    }
    case 253966:
    {
        returnValue = F("Plauenstr.");
        break;
    }
    case 253967:
    {
        returnValue = F("Plauer Chaussee");
        break;
    }
    case 253968:
    {
        returnValue = F("Plauer Damm");
        break;
    }
    case 253969:
    {
        returnValue = F("Plauer Hubbrücke");
        break;
    }
    case 253970:
    {
        returnValue = F("Plauer Landstr.");
        break;
    }
    case 253971:
    {
        returnValue = F("Plauer Ring");
        break;
    }
    case 253972:
    {
        returnValue = F("Plauer Str.");
        break;
    }
    case 253973:
    {
        returnValue = F("Plauer Tor");
        break;
    }
    case 253974:
    {
        returnValue = F("Plauer Weg");
        break;
    }
    case 253975:
    {
        returnValue = F("Plauer Ziegeleitrails");
        break;
    }
    case 253976:
    {
        returnValue = F("Plauerhof");
        break;
    }
    case 253977:
    {
        returnValue = F("Plauerhof Siedlung");
        break;
    }
    case 253978:
    {
        returnValue = F("Plauerhäger Str.");
        break;
    }
    case 253979:
    {
        returnValue = F("Plauesche Str.");
        break;
    }
    case 253980:
    {
        returnValue = F("Plauk");
        break;
    }
    case 253981:
    {
        returnValue = F("Plaukelmatte");
        break;
    }
    case 253982:
    {
        returnValue = F("Plaukelweg");
        break;
    }
    case 253983:
    {
        returnValue = F("Plaulmattstr.");
        break;
    }
    case 253984:
    {
        returnValue = F("Plausdorfer Weg");
        break;
    }
    case 253985:
    {
        returnValue = F("Plauser Str.");
        break;
    }
    case 253986:
    {
        returnValue = F("Plauthstr.");
        break;
    }
    case 253987:
    {
        returnValue = F("Plauweg");
        break;
    }
    case 253988:
    {
        returnValue = F("Plaußiger Weg");
        break;
    }
    case 253989:
    {
        returnValue = F("Playerweg");
        break;
    }
    case 253990:
    {
        returnValue = F("Plaza");
        break;
    }
    case 253991:
    {
        returnValue = F("Plaza del Borsche");
        break;
    }
    case 253992:
    {
        returnValue = F("Plaza del Mar");
        break;
    }
    case 253993:
    {
        returnValue = F("Plazidus-Ott-Str.");
        break;
    }
    case 253994:
    {
        returnValue = F("Plaß");
        break;
    }
    case 253995:
    {
        returnValue = F("Plaßheide");
        break;
    }
    case 253996:
    {
        returnValue = F("Plaßhofsbank");
        break;
    }
    case 253997:
    {
        returnValue = F("Plaßhofstr.");
        break;
    }
    case 253998:
    {
        returnValue = F("Plaßkamp");
        break;
    }
    case 253999:
    {
        returnValue = F("Plaßmannshof");
        break;
    }
    case 254000:
    {
        returnValue = F("Plaßmannstr.");
        break;
    }
    case 254001:
    {
        returnValue = F("Plaßstr.");
        break;
    }
    case 254002:
    {
        returnValue = F("Plaßweg");
        break;
    }
    case 254003:
    {
        returnValue = F("Pleasure Ground");
        break;
    }
    case 254004:
    {
        returnValue = F("Plebanusstr.");
        break;
    }
    case 254005:
    {
        returnValue = F("Plecher Str.");
        break;
    }
    case 254006:
    {
        returnValue = F("Plechhammer");
        break;
    }
    case 254007:
    {
        returnValue = F("Pleckenhof");
        break;
    }
    case 254008:
    {
        returnValue = F("Pleckmühlenweg");
        break;
    }
    case 254009:
    {
        returnValue = F("Pleckmühlweg");
        break;
    }
    case 254010:
    {
        returnValue = F("Pledlberg");
        break;
    }
    case 254011:
    {
        returnValue = F("Pledlstr.");
        break;
    }
    case 254012:
    {
        returnValue = F("Pleeksweg");
        break;
    }
    case 254013:
    {
        returnValue = F("Pleeser Gässchen");
        break;
    }
    case 254014:
    {
        returnValue = F("Pleetzer Weg");
        break;
    }
    case 254015:
    {
        returnValue = F("Pleichachgasse");
        break;
    }
    case 254016:
    {
        returnValue = F("Pleichachgrund");
        break;
    }
    case 254017:
    {
        returnValue = F("Pleicher Passage");
        break;
    }
    case 254018:
    {
        returnValue = F("Pleicherkirchgasse");
        break;
    }
    case 254019:
    {
        returnValue = F("Pleicherpfarrgasse");
        break;
    }
    case 254020:
    {
        returnValue = F("Pleicherschulgasse");
        break;
    }
    case 254021:
    {
        returnValue = F("Pleichertorstr.");
        break;
    }
    case 254022:
    {
        returnValue = F("Pleicherwall");
        break;
    }
    case 254023:
    {
        returnValue = F("Pleichfelder Str.");
        break;
    }
    case 254024:
    {
        returnValue = F("Pleidelsheimer Str.");
        break;
    }
    case 254025:
    {
        returnValue = F("Pleidelsheimer Weg");
        break;
    }
    case 254026:
    {
        returnValue = F("Pleidolfweg");
        break;
    }
    case 254027:
    {
        returnValue = F("Pleierstr.");
        break;
    }
    case 254028:
    {
        returnValue = F("Pleikartsförster Str.");
        break;
    }
    case 254029:
    {
        returnValue = F("Pleikartsförsterwiesen");
        break;
    }
    case 254030:
    {
        returnValue = F("Pleikershof");
        break;
    }
    case 254031:
    {
        returnValue = F("Pleikershofer Str.");
        break;
    }
    case 254032:
    {
        returnValue = F("Pleiler Str.");
        break;
    }
    case 254033:
    {
        returnValue = F("Pleiner Weg");
        break;
    }
    case 254034:
    {
        returnValue = F("Pleinfelder Str.");
        break;
    }
    case 254035:
    {
        returnValue = F("Pleinfelder Weg");
        break;
    }
    case 254036:
    {
        returnValue = F("Pleiningerstr.");
        break;
    }
    case 254037:
    {
        returnValue = F("Pleinserhof");
        break;
    }
    case 254038:
    {
        returnValue = F("Pleintinger Str.");
        break;
    }
    case 254039:
    {
        returnValue = F("Pleisdorf");
        break;
    }
    case 254040:
    {
        returnValue = F("Pleiser Dreieck");
        break;
    }
    case 254041:
    {
        returnValue = F("Pleiser Hecke");
        break;
    }
    case 254042:
    {
        returnValue = F("Pleiserhohner Str.");
        break;
    }
    case 254043:
    {
        returnValue = F("Pleissen-Anger");
        break;
    }
    case 254044:
    {
        returnValue = F("Pleistalstr.");
        break;
    }
    case 254045:
    {
        returnValue = F("Pleistern");
        break;
    }
    case 254046:
    {
        returnValue = F("Pleisufer");
        break;
    }
    case 254047:
    {
        returnValue = F("Pleitersheimer Str.");
        break;
    }
    case 254048:
    {
        returnValue = F("Pleitingesch");
        break;
    }
    case 254049:
    {
        returnValue = F("Pleitsdorf");
        break;
    }
    case 254050:
    {
        returnValue = F("Pleiweg");
        break;
    }
    case 254051:
    {
        returnValue = F("Pleißaer Str.");
        break;
    }
    case 254052:
    {
        returnValue = F("Pleißbachstr.");
        break;
    }
    case 254053:
    {
        returnValue = F("Pleißenaue");
        break;
    }
    case 254054:
    {
        returnValue = F("Pleißenbachstr.");
        break;
    }
    case 254055:
    {
        returnValue = F("Pleißenbergsiedlung");
        break;
    }
    case 254056:
    {
        returnValue = F("Pleißengasse");
        break;
    }
    case 254057:
    {
        returnValue = F("Pleißengrundstr.");
        break;
    }
    case 254058:
    {
        returnValue = F("Pleißenstr.");
        break;
    }
    case 254059:
    {
        returnValue = F("Pleißenweg");
        break;
    }
    case 254060:
    {
        returnValue = F("Pleißestr.");
        break;
    }
    case 254061:
    {
        returnValue = F("Pleißeweg");
        break;
    }
    case 254062:
    {
        returnValue = F("Plejadengasse");
        break;
    }
    case 254063:
    {
        returnValue = F("Plektrudisstr.");
        break;
    }
    case 254064:
    {
        returnValue = F("Plektrudisstr. (neu)");
        break;
    }
    case 254065:
    {
        returnValue = F("Plemnitzstr.");
        break;
    }
    case 254066:
    {
        returnValue = F("Plentenhof");
        break;
    }
    case 254067:
    {
        returnValue = F("Plenterstr.");
        break;
    }
    case 254068:
    {
        returnValue = F("Plenterweg");
        break;
    }
    case 254069:
    {
        returnValue = F("Plenzenweg");
        break;
    }
    case 254070:
    {
        returnValue = F("Plenzer");
        break;
    }
    case 254071:
    {
        returnValue = F("Plenzergasse");
        break;
    }
    case 254072:
    {
        returnValue = F("Pleonstr.");
        break;
    }
    case 254073:
    {
        returnValue = F("Plerguerstr.");
        break;
    }
    case 254074:
    {
        returnValue = F("Pleschenstr.");
        break;
    }
    case 254075:
    {
        returnValue = F("Pleskowstr.");
        break;
    }
    case 254076:
    {
        returnValue = F("Plessaer Str.");
        break;
    }
    case 254077:
    {
        returnValue = F("Plessastr.");
        break;
    }
    case 254078:
    {
        returnValue = F("Plesseblick");
        break;
    }
    case 254079:
    {
        returnValue = F("Plessen Weg");
        break;
    }
    case 254080:
    {
        returnValue = F("Plessengrund");
        break;
    }
    case 254081:
    {
        returnValue = F("Plessenstr.");
        break;
    }
    case 254082:
    {
        returnValue = F("Plessenweg");
        break;
    }
    case 254083:
    {
        returnValue = F("Plesser Str.");
        break;
    }
    case 254084:
    {
        returnValue = F("Plessering");
        break;
    }
    case 254085:
    {
        returnValue = F("Plesserstr.");
        break;
    }
    case 254086:
    {
        returnValue = F("Plessestr.");
        break;
    }
    case 254087:
    {
        returnValue = F("Plesseweg");
        break;
    }
    case 254088:
    {
        returnValue = F("Plessingstr.");
        break;
    }
    case 254089:
    {
        returnValue = F("Plestener Weg");
        break;
    }
    case 254090:
    {
        returnValue = F("Plestner Str.");
        break;
    }
    case 254091:
    {
        returnValue = F("Pletschbachstr.");
        break;
    }
    case 254092:
    {
        returnValue = F("Pletschenau");
        break;
    }
    case 254093:
    {
        returnValue = F("Pletschmühle");
        break;
    }
    case 254094:
    {
        returnValue = F("Pletschmühlenfeldchen");
        break;
    }
    case 254095:
    {
        returnValue = F("Pletschmühlenstr.");
        break;
    }
    case 254096:
    {
        returnValue = F("Pletschmühlenweg");
        break;
    }
    case 254097:
    {
        returnValue = F("Pletschweg");
        break;
    }
    case 254098:
    {
        returnValue = F("Plettenberg");
        break;
    }
    case 254099:
    {
        returnValue = F("Plettenberger Str.");
        break;
    }
    case 254100:
    {
        returnValue = F("Plettenberger Weg");
        break;
    }
    case 254101:
    {
        returnValue = F("Plettenbergerstr.");
        break;
    }
    case 254102:
    {
        returnValue = F("Plettenbergstr.");
        break;
    }
    case 254103:
    {
        returnValue = F("Plettenbergweg");
        break;
    }
    case 254104:
    {
        returnValue = F("Plettenburg");
        break;
    }
    case 254105:
    {
        returnValue = F("Plettengang");
        break;
    }
    case 254106:
    {
        returnValue = F("Pletterstr.");
        break;
    }
    case 254107:
    {
        returnValue = F("Plettkoppel");
        break;
    }
    case 254108:
    {
        returnValue = F("Plettstruther Weg");
        break;
    }
    case 254109:
    {
        returnValue = F("Pletzergasse");
        break;
    }
    case 254110:
    {
        returnValue = F("Pleuer-Passage");
        break;
    }
    case 254111:
    {
        returnValue = F("Pleuerstr.");
        break;
    }
    case 254112:
    {
        returnValue = F("Pleugerstr.");
        break;
    }
    case 254113:
    {
        returnValue = F("Pleurtuit-Str.");
        break;
    }
    case 254114:
    {
        returnValue = F("Pleuse");
        break;
    }
    case 254115:
    {
        returnValue = F("Pleushütte");
        break;
    }
    case 254116:
    {
        returnValue = F("Pleutersbacher Str.");
        break;
    }
    case 254117:
    {
        returnValue = F("Pleutersbacher Weg");
        break;
    }
    case 254118:
    {
        returnValue = F("Pleußener Weg");
        break;
    }
    case 254119:
    {
        returnValue = F("Pley");
        break;
    }
    case 254120:
    {
        returnValue = F("Pleyer Str.");
        break;
    }
    case 254121:
    {
        returnValue = F("Pleysteiner Str.");
        break;
    }
    case 254122:
    {
        returnValue = F("Pleysteinerstr.");
        break;
    }
    case 254123:
    {
        returnValue = F("Pleysteinpfad");
        break;
    }
    case 254124:
    {
        returnValue = F("Pleysteinweg");
        break;
    }
    case 254125:
    {
        returnValue = F("Pleßstr.");
        break;
    }
    case 254126:
    {
        returnValue = F("Plidmunt-Weg");
        break;
    }
    case 254127:
    {
        returnValue = F("Plidolfweg");
        break;
    }
    case 254128:
    {
        returnValue = F("Plieningenweg");
        break;
    }
    case 254129:
    {
        returnValue = F("Plieninger Str.");
        break;
    }
    case 254130:
    {
        returnValue = F("Plieninger Weg");
        break;
    }
    case 254131:
    {
        returnValue = F("Plieningerweg");
        break;
    }
    case 254132:
    {
        returnValue = F("Pliensausteg");
        break;
    }
    case 254133:
    {
        returnValue = F("Pliensbacher Str.");
        break;
    }
    case 254134:
    {
        returnValue = F("Pliensbacher Weg");
        break;
    }
    case 254135:
    {
        returnValue = F("Pliersgasse");
        break;
    }
    case 254136:
    {
        returnValue = F("Pliesmühlenstr.");
        break;
    }
    case 254137:
    {
        returnValue = F("Pliesterbecker Str.");
        break;
    }
    case 254138:
    {
        returnValue = F("Pliestermark");
        break;
    }
    case 254139:
    {
        returnValue = F("Pliethstr.");
        break;
    }
    case 254140:
    {
        returnValue = F("Plietzstr.");
        break;
    }
    case 254141:
    {
        returnValue = F("Pliezhausener Str.");
        break;
    }
    case 254142:
    {
        returnValue = F("Pliezhäuser Str.");
        break;
    }
    case 254143:
    {
        returnValue = F("Pließkowitzer Dorfstr.");
        break;
    }
    case 254144:
    {
        returnValue = F("Pließnitztalweg");
        break;
    }
    case 254145:
    {
        returnValue = F("Plinderheide");
        break;
    }
    case 254146:
    {
        returnValue = F("Plinganserstr.");
        break;
    }
    case 254147:
    {
        returnValue = F("Pliniusweg");
        break;
    }
    case 254148:
    {
        returnValue = F("Plinkstr.");
        break;
    }
    case 254149:
    {
        returnValue = F("Plinsentiegel");
        break;
    }
    case 254150:
    {
        returnValue = F("Plinsmarkt");
        break;
    }
    case 254151:
    {
        returnValue = F("Plinzenberg");
        break;
    }
    case 254152:
    {
        returnValue = F("Plionuncweg");
        break;
    }
    case 254153:
    {
        returnValue = F("Plirup");
        break;
    }
    case 254154:
    {
        returnValue = F("Plitenweg");
        break;
    }
    case 254155:
    {
        returnValue = F("Plitsch");
        break;
    }
    case 254156:
    {
        returnValue = F("Plitschard");
        break;
    }
    case 254157:
    {
        returnValue = F("Plitscharder Str.");
        break;
    }
    case 254158:
    {
        returnValue = F("Plittersdorfer Str.");
        break;
    }
    case 254159:
    {
        returnValue = F("Plittershagener Str.");
        break;
    }
    case 254160:
    {
        returnValue = F("Plittinger Str.");
        break;
    }
    case 254161:
    {
        returnValue = F("Plittstr.");
        break;
    }
    case 254162:
    {
        returnValue = F("Pliwastr.");
        break;
    }
    case 254163:
    {
        returnValue = F("Plißstr.");
        break;
    }
    case 254164:
    {
        returnValue = F("Plobsheimer Str.");
        break;
    }
    case 254165:
    {
        returnValue = F("Plochinger Str.");
        break;
    }
    case 254166:
    {
        returnValue = F("Plochinger Weg");
        break;
    }
    case 254167:
    {
        returnValue = F("Plochmanngasse");
        break;
    }
    case 254168:
    {
        returnValue = F("Plochweg");
        break;
    }
    case 254169:
    {
        returnValue = F("Plockeweg");
        break;
    }
    case 254170:
    {
        returnValue = F("Plockhorster Str.");
        break;
    }
    case 254171:
    {
        returnValue = F("Plockhorster Weg");
        break;
    }
    case 254172:
    {
        returnValue = F("Plockhorstweg");
        break;
    }
    case 254173:
    {
        returnValue = F("Plockstr.");
        break;
    }
    case 254174:
    {
        returnValue = F("Ploddaer Str.");
        break;
    }
    case 254175:
    {
        returnValue = F("Ploddaer Weg");
        break;
    }
    case 254176:
    {
        returnValue = F("Ploeckensteinstr.");
        break;
    }
    case 254177:
    {
        returnValue = F("Ploenesweg");
        break;
    }
    case 254178:
    {
        returnValue = F("Ploenniesstr.");
        break;
    }
    case 254179:
    {
        returnValue = F("Ploetzstr.");
        break;
    }
    case 254180:
    {
        returnValue = F("Ploggenseering");
        break;
    }
    case 254181:
    {
        returnValue = F("Plogmanns Feld");
        break;
    }
    case 254182:
    {
        returnValue = F("Plogstr.");
        break;
    }
    case 254183:
    {
        returnValue = F("Plohnbachstr.");
        break;
    }
    case 254184:
    {
        returnValue = F("Plohner Hauptstr.");
        break;
    }
    case 254185:
    {
        returnValue = F("Plohner Str.");
        break;
    }
    case 254186:
    {
        returnValue = F("Plohner Weg");
        break;
    }
    case 254187:
    {
        returnValue = F("Ploistattweg");
        break;
    }
    case 254188:
    {
        returnValue = F("Plomeliner Str.");
        break;
    }
    case 254189:
    {
        returnValue = F("Plomplandweg");
        break;
    }
    case 254190:
    {
        returnValue = F("Plonchenweg");
        break;
    }
    case 254191:
    {
        returnValue = F("Plonergasse");
        break;
    }
    case 254192:
    {
        returnValue = F("Plonnerstr.");
        break;
    }
    case 254193:
    {
        returnValue = F("Plonweg");
        break;
    }
    case 254194:
    {
        returnValue = F("Ploogkamp");
        break;
    }
    case 254195:
    {
        returnValue = F("Ploogweg");
        break;
    }
    case 254196:
    {
        returnValue = F("Ploon");
        break;
    }
    case 254197:
    {
        returnValue = F("Ploorstr.");
        break;
    }
    case 254198:
    {
        returnValue = F("Plooweg");
        break;
    }
    case 254199:
    {
        returnValue = F("Ploschwitzer Höhe");
        break;
    }
    case 254200:
    {
        returnValue = F("Plossau");
        break;
    }
    case 254201:
    {
        returnValue = F("Plosse");
        break;
    }
    case 254202:
    {
        returnValue = F("Plossen");
        break;
    }
    case 254203:
    {
        returnValue = F("Plossenhöhe");
        break;
    }
    case 254204:
    {
        returnValue = F("Plossenweg");
        break;
    }
    case 254205:
    {
        returnValue = F("Plossiger Dorfstr.");
        break;
    }
    case 254206:
    {
        returnValue = F("Plossiger Str.");
        break;
    }
    case 254207:
    {
        returnValue = F("Plossiger Weg");
        break;
    }
    case 254208:
    {
        returnValue = F("Plotenweg");
        break;
    }
    case 254209:
    {
        returnValue = F("Plothener Str.");
        break;
    }
    case 254210:
    {
        returnValue = F("Plothental");
        break;
    }
    case 254211:
    {
        returnValue = F("Plothenweg");
        break;
    }
    case 254212:
    {
        returnValue = F("Plothostr.");
        break;
    }
    case 254213:
    {
        returnValue = F("Plotitzer Haputstr.");
        break;
    }
    case 254214:
    {
        returnValue = F("Plotitzer Hauptstr.");
        break;
    }
    case 254215:
    {
        returnValue = F("Plotitzer Weg");
        break;
    }
    case 254216:
    {
        returnValue = F("Plottkeallee");
        break;
    }
    case 254217:
    {
        returnValue = F("Plotzenbrook");
        break;
    }
    case 254218:
    {
        returnValue = F("Plotzsägmühlweg");
        break;
    }
    case 254219:
    {
        returnValue = F("Plouayweg");
        break;
    }
    case 254220:
    {
        returnValue = F("Ploucquetstr.");
        break;
    }
    case 254221:
    {
        returnValue = F("Plouescatstr.");
        break;
    }
    case 254222:
    {
        returnValue = F("Plouzanestr.");
        break;
    }
    case 254223:
    {
        returnValue = F("Ploërmelweg");
        break;
    }
    case 254224:
    {
        returnValue = F("Pluderbarg");
        break;
    }
    case 254225:
    {
        returnValue = F("Pluemhoferstr.");
        break;
    }
    case 254226:
    {
        returnValue = F("Pluggen-Hiärm-Weg");
        break;
    }
    case 254227:
    {
        returnValue = F("Pluggendorfer Str.");
        break;
    }
    case 254228:
    {
        returnValue = F("Plumenhörn");
        break;
    }
    case 254229:
    {
        returnValue = F("Plumhofer Str.");
        break;
    }
    case 254230:
    {
        returnValue = F("Plummendorfer Str.");
        break;
    }
    case 254231:
    {
        returnValue = F("Plummwerder");
        break;
    }
    case 254232:
    {
        returnValue = F("Plumpenweg");
        break;
    }
    case 254233:
    {
        returnValue = F("Plumpsfort");
        break;
    }
    case 254234:
    {
        returnValue = F("Plumpstr.");
        break;
    }
    case 254235:
    {
        returnValue = F("Plumstruk");
        break;
    }
    case 254236:
    {
        returnValue = F("Plumühler Weg");
        break;
    }
    case 254237:
    {
        returnValue = F("Plunderdorf");
        break;
    }
    case 254238:
    {
        returnValue = F("Plunderstr.");
        break;
    }
    case 254239:
    {
        returnValue = F("Plunderweg");
        break;
    }
    case 254240:
    {
        returnValue = F("Pluniens Gaas");
        break;
    }
    case 254241:
    {
        returnValue = F("Plunkauer Weg");
        break;
    }
    case 254242:
    {
        returnValue = F("Plusch");
        break;
    }
    case 254243:
    {
        returnValue = F("Plutohof");
        break;
    }
    case 254244:
    {
        returnValue = F("Plutoring");
        break;
    }
    case 254245:
    {
        returnValue = F("Plutostr.");
        break;
    }
    case 254246:
    {
        returnValue = F("Plutoweg");
        break;
    }
    case 254247:
    {
        returnValue = F("Plutschweg");
        break;
    }
    case 254248:
    {
        returnValue = F("Plutzerweg");
        break;
    }
    case 254249:
    {
        returnValue = F("Pluwig-Hammer");
        break;
    }
    case 254250:
    {
        returnValue = F("Pluwiger Str.");
        break;
    }
    case 254251:
    {
        returnValue = F("Plytenbergstr.");
        break;
    }
    case 254252:
    {
        returnValue = F("Plzener Str.");
        break;
    }
    case 254253:
    {
        returnValue = F("Pläckenweg");
        break;
    }
    case 254254:
    {
        returnValue = F("Pläckertstr.");
        break;
    }
    case 254255:
    {
        returnValue = F("Pläckerweg");
        break;
    }
    case 254256:
    {
        returnValue = F("Plänerleithenweg");
        break;
    }
    case 254257:
    {
        returnValue = F("Plänerstr.");
        break;
    }
    case 254258:
    {
        returnValue = F("Plänitzer Weg");
        break;
    }
    case 254259:
    {
        returnValue = F("Plänle");
        break;
    }
    case 254260:
    {
        returnValue = F("Plärnmühlweg");
        break;
    }
    case 254261:
    {
        returnValue = F("Plärrer");
        break;
    }
    case 254262:
    {
        returnValue = F("Pläsken");
        break;
    }
    case 254263:
    {
        returnValue = F("Pläskens Kamp");
        break;
    }
    case 254264:
    {
        returnValue = F("Pläterstr.");
        break;
    }
    case 254265:
    {
        returnValue = F("Plätschwiesen");
        break;
    }
    case 254266:
    {
        returnValue = F("Plättchesheide");
        break;
    }
    case 254267:
    {
        returnValue = F("Plätten Anlegestelle");
        break;
    }
    case 254268:
    {
        returnValue = F("Plättenweg");
        break;
    }
    case 254269:
    {
        returnValue = F("Plättenweide");
        break;
    }
    case 254270:
    {
        returnValue = F("Plätternweg");
        break;
    }
    case 254271:
    {
        returnValue = F("Plättigstr.");
        break;
    }
    case 254272:
    {
        returnValue = F("Plättigweg");
        break;
    }
    case 254273:
    {
        returnValue = F("Plättleweg");
        break;
    }
    case 254274:
    {
        returnValue = F("Plättlingsweg");
        break;
    }
    case 254275:
    {
        returnValue = F("Plätz");
        break;
    }
    case 254276:
    {
        returnValue = F("Plätzchen");
        break;
    }
    case 254277:
    {
        returnValue = F("Plätzelweg");
        break;
    }
    case 254278:
    {
        returnValue = F("Plätzen");
        break;
    }
    case 254279:
    {
        returnValue = F("Plätzer Weg");
        break;
    }
    case 254280:
    {
        returnValue = F("Plätzerstr.");
        break;
    }
    case 254281:
    {
        returnValue = F("Plätzl");
        break;
    }
    case 254282:
    {
        returnValue = F("Plätzle");
        break;
    }
    case 254283:
    {
        returnValue = F("Plätzlesweg");
        break;
    }
    case 254284:
    {
        returnValue = F("Plätzleweg");
        break;
    }
    case 254285:
    {
        returnValue = F("Plätzmatte");
        break;
    }
    case 254286:
    {
        returnValue = F("Plöck");
        break;
    }
    case 254287:
    {
        returnValue = F("Plöckensteinstr.");
        break;
    }
    case 254288:
    {
        returnValue = F("Plöckgasse");
        break;
    }
    case 254289:
    {
        returnValue = F("Plöckinger Str.");
        break;
    }
    case 254290:
    {
        returnValue = F("Plögereistr.");
        break;
    }
    case 254291:
    {
        returnValue = F("Plögergang");
        break;
    }
    case 254292:
    {
        returnValue = F("Plögerkamp");
        break;
    }
    case 254293:
    {
        returnValue = F("Plögerstr.");
        break;
    }
    case 254294:
    {
        returnValue = F("Plögerweg");
        break;
    }
    case 254295:
    {
        returnValue = F("Plöner Chaussee");
        break;
    }
    case 254296:
    {
        returnValue = F("Plöner Damm");
        break;
    }
    case 254297:
    {
        returnValue = F("Plöner Landstr.");
        break;
    }
    case 254298:
    {
        returnValue = F("Plöner Str.");
        break;
    }
    case 254299:
    {
        returnValue = F("Plöner Weg");
        break;
    }
    case 254300:
    {
        returnValue = F("Plönerstr.");
        break;
    }
    case 254301:
    {
        returnValue = F("Plönesweg");
        break;
    }
    case 254302:
    {
        returnValue = F("Plönhagen");
        break;
    }
    case 254303:
    {
        returnValue = F("Plönjeshausener Mühle");
        break;
    }
    case 254304:
    {
        returnValue = F("Plönjeshausener Str.");
        break;
    }
    case 254305:
    {
        returnValue = F("Plönlein");
        break;
    }
    case 254306:
    {
        returnValue = F("Plönort");
        break;
    }
    case 254307:
    {
        returnValue = F("Plörenstr.");
        break;
    }
    case 254308:
    {
        returnValue = F("Plörnbacher Str.");
        break;
    }
    case 254309:
    {
        returnValue = F("Plösen");
        break;
    }
    case 254310:
    {
        returnValue = F("Plösener Weg");
        break;
    }
    case 254311:
    {
        returnValue = F("Plösitzer Str.");
        break;
    }
    case 254312:
    {
        returnValue = F("Plötz");
        break;
    }
    case 254313:
    {
        returnValue = F("Plötzbergpfad");
        break;
    }
    case 254314:
    {
        returnValue = F("Plötzen");
        break;
    }
    case 254315:
    {
        returnValue = F("Plötzengrund");
        break;
    }
    case 254316:
    {
        returnValue = F("Plötzenseer Str.");
        break;
    }
    case 254317:
    {
        returnValue = F("Plötzenseeweg");
        break;
    }
    case 254318:
    {
        returnValue = F("Plötzensteg");
        break;
    }
    case 254319:
    {
        returnValue = F("Plötzenstr.");
        break;
    }
    case 254320:
    {
        returnValue = F("Plötzenweg");
        break;
    }
    case 254321:
    {
        returnValue = F("Plötzer Chaussee");
        break;
    }
    case 254322:
    {
        returnValue = F("Plötzer Tor");
        break;
    }
    case 254323:
    {
        returnValue = F("Plötzer Weg");
        break;
    }
    case 254324:
    {
        returnValue = F("Plötziner Chaussee");
        break;
    }
    case 254325:
    {
        returnValue = F("Plötziner Str.");
        break;
    }
    case 254326:
    {
        returnValue = F("Plötziner Weg");
        break;
    }
    case 254327:
    {
        returnValue = F("Plötzkauer Chaussee");
        break;
    }
    case 254328:
    {
        returnValue = F("Plötzkauer Weg");
        break;
    }
    case 254329:
    {
        returnValue = F("Plötzkyer Str.");
        break;
    }
    case 254330:
    {
        returnValue = F("Plötzstr.");
        break;
    }
    case 254331:
    {
        returnValue = F("Plötzweide");
        break;
    }
    case 254332:
    {
        returnValue = F("Plöwener Str.");
        break;
    }
    case 254333:
    {
        returnValue = F("Plöwener Weg");
        break;
    }
    case 254334:
    {
        returnValue = F("Plößberger Str.");
        break;
    }
    case 254335:
    {
        returnValue = F("Plößberger Weg");
        break;
    }
    case 254336:
    {
        returnValue = F("Plößnitz");
        break;
    }
    case 254337:
    {
        returnValue = F("Plößnitzer Str.");
        break;
    }
    case 254338:
    {
        returnValue = F("Plößnitzer Weg");
        break;
    }
    case 254339:
    {
        returnValue = F("Plückelsheide");
        break;
    }
    case 254340:
    {
        returnValue = F("Plückersburg");
        break;
    }
    case 254341:
    {
        returnValue = F("Plückersmühle");
        break;
    }
    case 254342:
    {
        returnValue = F("Plückertzstr.");
        break;
    }
    case 254343:
    {
        returnValue = F("Plückmannstr.");
        break;
    }
    case 254344:
    {
        returnValue = F("Plückwies");
        break;
    }
    case 254345:
    {
        returnValue = F("Plüderhäuser Str.");
        break;
    }
    case 254346:
    {
        returnValue = F("Plüderhäuser Weg");
        break;
    }
    case 254347:
    {
        returnValue = F("Plügge");
        break;
    }
    case 254348:
    {
        returnValue = F("Plüggentiner Str.");
        break;
    }
    case 254349:
    {
        returnValue = F("Plümelstr.");
        break;
    }
    case 254350:
    {
        returnValue = F("Plümer Feldweg");
        break;
    }
    case 254351:
    {
        returnValue = F("Plümers Kamp");
        break;
    }
    case 254352:
    {
        returnValue = F("Plümickestr.");
        break;
    }
    case 254353:
    {
        returnValue = F("Plümperwiesenweg");
        break;
    }
    case 254354:
    {
        returnValue = F("Plündergasse");
        break;
    }
    case 254355:
    {
        returnValue = F("Plünneckenweg");
        break;
    }
    case 254356:
    {
        returnValue = F("Plüschenworth");
        break;
    }
    case 254357:
    {
        returnValue = F("Plüschkestr.");
        break;
    }
    case 254358:
    {
        returnValue = F("Plüschower Dorfstr.");
        break;
    }
    case 254359:
    {
        returnValue = F("Plüschower Mühle");
        break;
    }
    case 254360:
    {
        returnValue = F("Plüschowstr.");
        break;
    }
    case 254361:
    {
        returnValue = F("Plüter");
        break;
    }
    case 254362:
    {
        returnValue = F("Plüßkuhle");
        break;
    }
    case 254363:
    {
        returnValue = F("Pniewystr.");
        break;
    }
    case 254364:
    {
        returnValue = F("Poaters Koamp");
        break;
    }
    case 254365:
    {
        returnValue = F("Pobershauer Flügel");
        break;
    }
    case 254366:
    {
        returnValue = F("Pobershauer Str.");
        break;
    }
    case 254367:
    {
        returnValue = F("Pobüller Weg");
        break;
    }
    case 254368:
    {
        returnValue = F("Poccistr.");
        break;
    }
    case 254369:
    {
        returnValue = F("Poche");
        break;
    }
    case 254370:
    {
        returnValue = F("Pochebachweg");
        break;
    }
    case 254371:
    {
        returnValue = F("Pochelstr.");
        break;
    }
    case 254372:
    {
        returnValue = F("Pochenstr.");
        break;
    }
    case 254373:
    {
        returnValue = F("Pocherstr.");
        break;
    }
    case 254374:
    {
        returnValue = F("Pochestr.");
        break;
    }
    case 254375:
    {
        returnValue = F("Pochetal");
        break;
    }
    case 254376:
    {
        returnValue = F("Pochgängerweg");
        break;
    }
    case 254377:
    {
        returnValue = F("Pochmühle");
        break;
    }
    case 254378:
    {
        returnValue = F("Pochmühlenweg");
        break;
    }
    case 254379:
    {
        returnValue = F("Pochrichstr.");
        break;
    }
    case 254380:
    {
        returnValue = F("Pochrigbergweg");
        break;
    }
    case 254381:
    {
        returnValue = F("Pochwerk");
        break;
    }
    case 254382:
    {
        returnValue = F("Pochwerkgasse");
        break;
    }
    case 254383:
    {
        returnValue = F("Pochwerksgrund");
        break;
    }
    case 254384:
    {
        returnValue = F("Pochwerkstr.");
        break;
    }
    case 254385:
    {
        returnValue = F("Pochzeugweg");
        break;
    }
    case 254386:
    {
        returnValue = F("Pockauer Str.");
        break;
    }
    case 254387:
    {
        returnValue = F("Pockautalweg");
        break;
    }
    case 254388:
    {
        returnValue = F("Pockelsstr.");
        break;
    }
    case 254389:
    {
        returnValue = F("Pockensatz");
        break;
    }
    case 254390:
    {
        returnValue = F("Pocketpark");
        break;
    }
    case 254391:
    {
        returnValue = F("Pockholter Weg");
        break;
    }
    case 254392:
    {
        returnValue = F("Pockinger Str.");
        break;
    }
    case 254393:
    {
        returnValue = F("Podbielskistr.");
        break;
    }
    case 254394:
    {
        returnValue = F("Poddelgraben");
        break;
    }
    case 254395:
    {
        returnValue = F("Poddelweg");
        break;
    }
    case 254396:
    {
        returnValue = F("Podelitzer Ring");
        break;
    }
    case 254397:
    {
        returnValue = F("Podelsatz");
        break;
    }
    case 254398:
    {
        returnValue = F("Podelwitz");
        break;
    }
    case 254399:
    {
        returnValue = F("Podelwitzer Hauptstr.");
        break;
    }
    case 254400:
    {
        returnValue = F("Podelwitzer Str.");
        break;
    }
    case 254401:
    {
        returnValue = F("Podelziger Str.");
        break;
    }
    case 254402:
    {
        returnValue = F("Podendorf");
        break;
    }
    case 254403:
    {
        returnValue = F("Podenweg");
        break;
    }
    case 254404:
    {
        returnValue = F("Podersamer Str.");
        break;
    }
    case 254405:
    {
        returnValue = F("Poderschauer Gasse");
        break;
    }
    case 254406:
    {
        returnValue = F("Poderschauer Str.");
        break;
    }
    case 254407:
    {
        returnValue = F("Podeusstr.");
        break;
    }
    case 254408:
    {
        returnValue = F("Podewilsstr.");
        break;
    }
    case 254409:
    {
        returnValue = F("Podewilstr.");
        break;
    }
    case 254410:
    {
        returnValue = F("Podinger Weg");
        break;
    }
    case 254411:
    {
        returnValue = F("Podroscher Str.");
        break;
    }
    case 254412:
    {
        returnValue = F("Podschützweg");
        break;
    }
    case 254413:
    {
        returnValue = F("Poelderstr.");
        break;
    }
    case 254414:
    {
        returnValue = F("Poeler Landweg");
        break;
    }
    case 254415:
    {
        returnValue = F("Poeler Ring");
        break;
    }
    case 254416:
    {
        returnValue = F("Poeler Str.");
        break;
    }
    case 254417:
    {
        returnValue = F("Poeler Weg");
        break;
    }
    case 254418:
    {
        returnValue = F("Poelmahnstr.");
        break;
    }
    case 254419:
    {
        returnValue = F("Poelstr.");
        break;
    }
    case 254420:
    {
        returnValue = F("Poelvenn");
        break;
    }
    case 254421:
    {
        returnValue = F("Poennensperchstr.");
        break;
    }
    case 254422:
    {
        returnValue = F("Poensgen-Park");
        break;
    }
    case 254423:
    {
        returnValue = F("Poensgen-und-Pfahler-Str.");
        break;
    }
    case 254424:
    {
        returnValue = F("Poensgenstr.");
        break;
    }
    case 254425:
    {
        returnValue = F("Poepperlingweg");
        break;
    }
    case 254426:
    {
        returnValue = F("Poeppigstr.");
        break;
    }
    case 254427:
    {
        returnValue = F("Poesiepfad");
        break;
    }
    case 254428:
    {
        returnValue = F("Poetengang");
        break;
    }
    case 254429:
    {
        returnValue = F("Poetengasse");
        break;
    }
    case 254430:
    {
        returnValue = F("Poetengäßchen");
        break;
    }
    case 254431:
    {
        returnValue = F("Poetenplatz");
        break;
    }
    case 254432:
    {
        returnValue = F("Poetensteg");
        break;
    }
    case 254433:
    {
        returnValue = F("Poetensteig");
        break;
    }
    case 254434:
    {
        returnValue = F("Poetenstieg");
        break;
    }
    case 254435:
    {
        returnValue = F("Poetenstr.");
        break;
    }
    case 254436:
    {
        returnValue = F("Poetenwald");
        break;
    }
    case 254437:
    {
        returnValue = F("Poetenweg");
        break;
    }
    case 254438:
    {
        returnValue = F("Poeth");
        break;
    }
    case 254439:
    {
        returnValue = F("Poethenberg");
        break;
    }
    case 254440:
    {
        returnValue = F("Poethenfeld");
        break;
    }
    case 254441:
    {
        returnValue = F("Poether Weg");
        break;
    }
    case 254442:
    {
        returnValue = F("Poetschstr.");
        break;
    }
    case 254443:
    {
        returnValue = F("Poettingerstr.");
        break;
    }
    case 254444:
    {
        returnValue = F("Poggelgasse");
        break;
    }
    case 254445:
    {
        returnValue = F("Poggelow");
        break;
    }
    case 254446:
    {
        returnValue = F("Poggemühlen");
        break;
    }
    case 254447:
    {
        returnValue = F("Poggenaue");
        break;
    }
    case 254448:
    {
        returnValue = F("Poggenbarg");
        break;
    }
    case 254449:
    {
        returnValue = F("Poggenberg");
        break;
    }
    case 254450:
    {
        returnValue = F("Poggenbreede");
        break;
    }
    case 254451:
    {
        returnValue = F("Poggenbreeden");
        break;
    }
    case 254452:
    {
        returnValue = F("Poggenbrook");
        break;
    }
    case 254453:
    {
        returnValue = F("Poggenbruchstr.");
        break;
    }
    case 254454:
    {
        returnValue = F("Poggenburg");
        break;
    }
    case 254455:
    {
        returnValue = F("Poggenburgstr.");
        break;
    }
    case 254456:
    {
        returnValue = F("Poggenburgsweg");
        break;
    }
    case 254457:
    {
        returnValue = F("Poggendanz");
        break;
    }
    case 254458:
    {
        returnValue = F("Poggendiek");
        break;
    }
    case 254459:
    {
        returnValue = F("Poggendorf");
        break;
    }
    case 254460:
    {
        returnValue = F("Poggendorfer Weg");
        break;
    }
    case 254461:
    {
        returnValue = F("Poggendörper Weg");
        break;
    }
    case 254462:
    {
        returnValue = F("Poggenecke");
        break;
    }
    case 254463:
    {
        returnValue = F("Poggenfehner Str.");
        break;
    }
    case 254464:
    {
        returnValue = F("Poggenhagener Str.");
        break;
    }
    case 254465:
    {
        returnValue = F("Poggenhof");
        break;
    }
    case 254466:
    {
        returnValue = F("Poggenhuhnweg");
        break;
    }
    case 254467:
    {
        returnValue = F("Poggenhusen");
        break;
    }
    case 254468:
    {
        returnValue = F("Poggenkamp");
        break;
    }
    case 254469:
    {
        returnValue = F("Poggenkrug");
        break;
    }
    case 254470:
    {
        returnValue = F("Poggenkrugsweg");
        break;
    }
    case 254471:
    {
        returnValue = F("Poggenkuhle");
        break;
    }
    case 254472:
    {
        returnValue = F("Poggenkärken");
        break;
    }
    case 254473:
    {
        returnValue = F("Poggenmoorstr.");
        break;
    }
    case 254474:
    {
        returnValue = F("Poggenmörken");
        break;
    }
    case 254475:
    {
        returnValue = F("Poggenort");
        break;
    }
    case 254476:
    {
        returnValue = F("Poggenortstr.");
        break;
    }
    case 254477:
    {
        returnValue = F("Poggenpad");
        break;
    }
    case 254478:
    {
        returnValue = F("Poggenpatt");
        break;
    }
    case 254479:
    {
        returnValue = F("Poggenpaulsweg");
        break;
    }
    case 254480:
    {
        returnValue = F("Poggenpohl");
        break;
    }
    case 254481:
    {
        returnValue = F("Poggenpohler Weg");
        break;
    }
    case 254482:
    {
        returnValue = F("Poggenpohlstr.");
        break;
    }
    case 254483:
    {
        returnValue = F("Poggenpohlsweg");
        break;
    }
    case 254484:
    {
        returnValue = F("Poggenpohlweg");
        break;
    }
    case 254485:
    {
        returnValue = F("Poggenpolderstr.");
        break;
    }
    case 254486:
    {
        returnValue = F("Poggenpoller");
        break;
    }
    case 254487:
    {
        returnValue = F("Poggenpuhl");
        break;
    }
    case 254488:
    {
        returnValue = F("Poggenrade");
        break;
    }
    case 254489:
    {
        returnValue = F("Poggensaal");
        break;
    }
    case 254490:
    {
        returnValue = F("Poggenschlatt");
        break;
    }
    case 254491:
    {
        returnValue = F("Poggenseer Str.");
        break;
    }
    case 254492:
    {
        returnValue = F("Poggenseer Weg");
        break;
    }
    case 254493:
    {
        returnValue = F("Poggensiek");
        break;
    }
    case 254494:
    {
        returnValue = F("Poggensoll");
        break;
    }
    case 254495:
    {
        returnValue = F("Poggensteert");
        break;
    }
    case 254496:
    {
        returnValue = F("Poggenstieg");
        break;
    }
    case 254497:
    {
        returnValue = F("Poggenstr.");
        break;
    }
    case 254498:
    {
        returnValue = F("Poggenweg");
        break;
    }
    case 254499:
    {
        returnValue = F("Poggenworthstr.");
        break;
    }
    case 254500:
    {
        returnValue = F("Poggeplatz");
        break;
    }
    case 254501:
    {
        returnValue = F("Poggeriestr.");
        break;
    }
    case 254502:
    {
        returnValue = F("Poggersdorf");
        break;
    }
    case 254503:
    {
        returnValue = F("Poggestr.");
        break;
    }
    case 254504:
    {
        returnValue = F("Poggeweg");
        break;
    }
    case 254505:
    {
        returnValue = F("Poggfred");
        break;
    }
    case 254506:
    {
        returnValue = F("Poghausener Str.");
        break;
    }
    case 254507:
    {
        returnValue = F("Poghausener-Grenz-Weg");
        break;
    }
    case 254508:
    {
        returnValue = F("Poghörn");
        break;
    }
    case 254509:
    {
        returnValue = F("Pogreßer Dorfstr.");
        break;
    }
    case 254510:
    {
        returnValue = F("Pogumer Str.");
        break;
    }
    case 254511:
    {
        returnValue = F("Pogumer Weg");
        break;
    }
    case 254512:
    {
        returnValue = F("Pohl-Gönser Pfad");
        break;
    }
    case 254513:
    {
        returnValue = F("Pohlackersweg");
        break;
    }
    case 254514:
    {
        returnValue = F("Pohlbörgerstr.");
        break;
    }
    case 254515:
    {
        returnValue = F("Pohlen");
        break;
    }
    case 254516:
    {
        returnValue = F("Pohler Bruch");
        break;
    }
    case 254517:
    {
        returnValue = F("Pohler Str.");
        break;
    }
    case 254518:
    {
        returnValue = F("Pohlersfeld");
        break;
    }
    case 254519:
    {
        returnValue = F("Pohlgartenstr.");
        break;
    }
    case 254520:
    {
        returnValue = F("Pohlgeers Kamp");
        break;
    }
    case 254521:
    {
        returnValue = F("Pohlgönser Str.");
        break;
    }
    case 254522:
    {
        returnValue = F("Pohlhausenstr.");
        break;
    }
    case 254523:
    {
        returnValue = F("Pohlhauser Str.");
        break;
    }
    case 254524:
    {
        returnValue = F("Pohlheimer Str.");
        break;
    }
    case 254525:
    {
        returnValue = F("Pohlhof");
        break;
    }
    case 254526:
    {
        returnValue = F("Pohlhoff");
        break;
    }
    case 254527:
    {
        returnValue = F("Pohlhofgasse");
        break;
    }
    case 254528:
    {
        returnValue = F("Pohliggrund");
        break;
    }
    case 254529:
    {
        returnValue = F("Pohligstr.");
        break;
    }
    case 254530:
    {
        returnValue = F("Pohligweg");
        break;
    }
    case 254531:
    {
        returnValue = F("Pohlischweg");
        break;
    }
    case 254532:
    {
        returnValue = F("Pohlitzer Mühle");
        break;
    }
    case 254533:
    {
        returnValue = F("Pohlitzer Mühle-Siedlung");
        break;
    }
    case 254534:
    {
        returnValue = F("Pohlitzer Str.");
        break;
    }
    case 254535:
    {
        returnValue = F("Pohlitzer Weg");
        break;
    }
    case 254536:
    {
        returnValue = F("Pohlitzplatz");
        break;
    }
    case 254537:
    {
        returnValue = F("Pohlkamp");
        break;
    }
    case 254538:
    {
        returnValue = F("Pohlmann's Weg");
        break;
    }
    case 254539:
    {
        returnValue = F("Pohlmanns Feld");
        break;
    }
    case 254540:
    {
        returnValue = F("Pohlmannstr.");
        break;
    }
    case 254541:
    {
        returnValue = F("Pohlmannsweg");
        break;
    }
    case 254542:
    {
        returnValue = F("Pohlmanstr.");
        break;
    }
    case 254543:
    {
        returnValue = F("Pohlrute");
        break;
    }
    case 254544:
    {
        returnValue = F("Pohlsgasse");
        break;
    }
    case 254545:
    {
        returnValue = F("Pohlsgäßchen");
        break;
    }
    case 254546:
    {
        returnValue = F("Pohlstr.");
        break;
    }
    case 254547:
    {
        returnValue = F("Pohlwaldsiedlung");
        break;
    }
    case 254548:
    {
        returnValue = F("Pohlweg");
        break;
    }
    case 254549:
    {
        returnValue = F("Pohlwiese");
        break;
    }
    case 254550:
    {
        returnValue = F("Pohlystr.");
        break;
    }
    case 254551:
    {
        returnValue = F("Pohnsdorfer Landstr.");
        break;
    }
    case 254552:
    {
        returnValue = F("Pohnsdorfer Str.");
        break;
    }
    case 254553:
    {
        returnValue = F("Pohnsdorfer Weg");
        break;
    }
    case 254554:
    {
        returnValue = F("Pohnshalligkoogstr.");
        break;
    }
    case 254555:
    {
        returnValue = F("Pohnstorf");
        break;
    }
    case 254556:
    {
        returnValue = F("Pohnstorfer Weg");
        break;
    }
    case 254557:
    {
        returnValue = F("Pohritzscher Str.");
        break;
    }
    case 254558:
    {
        returnValue = F("Pohritzscher-Weg");
        break;
    }
    case 254559:
    {
        returnValue = F("Pohrsdorfer Rand");
        break;
    }
    case 254560:
    {
        returnValue = F("Pohrsdorfer Str.");
        break;
    }
    case 254561:
    {
        returnValue = F("Pohrtstr.");
        break;
    }
    case 254562:
    {
        returnValue = F("Poigerstr.");
        break;
    }
    case 254563:
    {
        returnValue = F("Poigham");
        break;
    }
    case 254564:
    {
        returnValue = F("Poignring");
        break;
    }
    case 254565:
    {
        returnValue = F("Poilstr.");
        break;
    }
    case 254566:
    {
        returnValue = F("Poinger Str.");
        break;
    }
    case 254567:
    {
        returnValue = F("Poinger Weg");
        break;
    }
    case 254568:
    {
        returnValue = F("Point");
        break;
    }
    case 254569:
    {
        returnValue = F("Point Nord");
        break;
    }
    case 254570:
    {
        returnValue = F("Pointenstr.");
        break;
    }
    case 254571:
    {
        returnValue = F("Pointenweg");
        break;
    }
    case 254572:
    {
        returnValue = F("Pointer Brücke");
        break;
    }
    case 254573:
    {
        returnValue = F("Pointer Gasse");
        break;
    }
    case 254574:
    {
        returnValue = F("Pointgasse");
        break;
    }
    case 254575:
    {
        returnValue = F("Pointgraben");
        break;
    }
    case 254576:
    {
        returnValue = F("Pointhöheweg");
        break;
    }
    case 254577:
    {
        returnValue = F("Pointlfeld");
        break;
    }
    case 254578:
    {
        returnValue = F("Pointmühlstr.");
        break;
    }
    case 254579:
    {
        returnValue = F("Pointner-Au");
        break;
    }
    case 254580:
    {
        returnValue = F("Pointring");
        break;
    }
    case 254581:
    {
        returnValue = F("Pointsiedlung");
        break;
    }
    case 254582:
    {
        returnValue = F("Pointstr.");
        break;
    }
    case 254583:
    {
        returnValue = F("Pointweg");
        break;
    }
    case 254584:
    {
        returnValue = F("Pointwiese");
        break;
    }
    case 254585:
    {
        returnValue = F("Pointwiesen");
        break;
    }
    case 254586:
    {
        returnValue = F("Pointäcker");
        break;
    }
    case 254587:
    {
        returnValue = F("Pointäckerstr.");
        break;
    }
    case 254588:
    {
        returnValue = F("Pointäckerweg");
        break;
    }
    case 254589:
    {
        returnValue = F("Poischwitz");
        break;
    }
    case 254590:
    {
        returnValue = F("Poischwitzer Str.");
        break;
    }
    case 254591:
    {
        returnValue = F("Poisenblick");
        break;
    }
    case 254592:
    {
        returnValue = F("Poisentalstr.");
        break;
    }
    case 254593:
    {
        returnValue = F("Poisenwaldstr.");
        break;
    }
    case 254594:
    {
        returnValue = F("Poissystr.");
        break;
    }
    case 254595:
    {
        returnValue = F("Poitendorfer Damm");
        break;
    }
    case 254596:
    {
        returnValue = F("Poitendorfer Weg");
        break;
    }
    case 254597:
    {
        returnValue = F("Poitiers-Str.");
        break;
    }
    case 254598:
    {
        returnValue = F("Poititz");
        break;
    }
    case 254599:
    {
        returnValue = F("Poitscher Weg");
        break;
    }
    case 254600:
    {
        returnValue = F("Poitstr.");
        break;
    }
    case 254601:
    {
        returnValue = F("Poitzen");
        break;
    }
    case 254602:
    {
        returnValue = F("Poitzener Str.");
        break;
    }
    case 254603:
    {
        returnValue = F("Pokkenräthen");
        break;
    }
    case 254604:
    {
        returnValue = F("Pokornystr.");
        break;
    }
    case 254605:
    {
        returnValue = F("Pokrenter Str.");
        break;
    }
    case 254606:
    {
        returnValue = F("Pokusweg");
        break;
    }
    case 254607:
    {
        returnValue = F("Polabenweg");
        break;
    }
    case 254608:
    {
        returnValue = F("Polachtsweg");
        break;
    }
    case 254609:
    {
        returnValue = F("Polackstr.");
        break;
    }
    case 254610:
    {
        returnValue = F("Polarfuchs");
        break;
    }
    case 254611:
    {
        returnValue = F("Polarsternstr.");
        break;
    }
    case 254612:
    {
        returnValue = F("Polarstr.");
        break;
    }
    case 254613:
    {
        returnValue = F("Polarwölfe");
        break;
    }
    case 254614:
    {
        returnValue = F("Polaststr.");
        break;
    }
    case 254615:
    {
        returnValue = F("Polauer Weg");
        break;
    }
    case 254616:
    {
        returnValue = F("Polauner Str.");
        break;
    }
    case 254617:
    {
        returnValue = F("Polcher Str.");
        break;
    }
    case 254618:
    {
        returnValue = F("Polcherholz");
        break;
    }
    case 254619:
    {
        returnValue = F("Polchower Chaussee");
        break;
    }
    case 254620:
    {
        returnValue = F("Polchower Heide");
        break;
    }
    case 254621:
    {
        returnValue = F("Polchower Str.");
        break;
    }
    case 254622:
    {
        returnValue = F("Polder");
        break;
    }
    case 254623:
    {
        returnValue = F("Polderbergstr.");
        break;
    }
    case 254624:
    {
        returnValue = F("Polderbergweg");
        break;
    }
    case 254625:
    {
        returnValue = F("Polderdamm");
        break;
    }
    case 254626:
    {
        returnValue = F("Polderdamm (Teilpolder 3)");
        break;
    }
    case 254627:
    {
        returnValue = F("Polderdamm D");
        break;
    }
    case 254628:
    {
        returnValue = F("Polderstieg");
        break;
    }
    case 254629:
    {
        returnValue = F("Polderstr.");
        break;
    }
    case 254630:
    {
        returnValue = F("Poldertunweg");
        break;
    }
    case 254631:
    {
        returnValue = F("Polderweg");
        break;
    }
    case 254632:
    {
        returnValue = F("Polditz");
        break;
    }
    case 254633:
    {
        returnValue = F("Poldl-Schuhwerk-Str.");
        break;
    }
    case 254634:
    {
        returnValue = F("Pole-Poppenspäler-Ring");
        break;
    }
    case 254635:
    {
        returnValue = F("Pole-Poppenspäler-Stieg");
        break;
    }
    case 254636:
    {
        returnValue = F("Pole-Poppenspäler-Weg");
        break;
    }
    case 254637:
    {
        returnValue = F("Polenzer Gasse");
        break;
    }
    case 254638:
    {
        returnValue = F("Polenzer Hauptstr.");
        break;
    }
    case 254639:
    {
        returnValue = F("Polenzer Linden");
        break;
    }
    case 254640:
    {
        returnValue = F("Polenzer Str.");
        break;
    }
    case 254641:
    {
        returnValue = F("Polenzer Weg");
        break;
    }
    case 254642:
    {
        returnValue = F("Polenzkoer Weg");
        break;
    }
    case 254643:
    {
        returnValue = F("Polenzstr.");
        break;
    }
    case 254644:
    {
        returnValue = F("Polenztal");
        break;
    }
    case 254645:
    {
        returnValue = F("Polenztalstr.");
        break;
    }
    case 254646:
    {
        returnValue = F("Polenztalweg");
        break;
    }
    case 254647:
    {
        returnValue = F("Polenzwerder");
        break;
    }
    case 254648:
    {
        returnValue = F("Poleyer Str.");
        break;
    }
    case 254649:
    {
        returnValue = F("Poleymühle");
        break;
    }
    case 254650:
    {
        returnValue = F("Polhof");
        break;
    }
    case 254651:
    {
        returnValue = F("Polichstr.");
        break;
    }
    case 254652:
    {
        returnValue = F("Polierte Bahn");
        break;
    }
    case 254653:
    {
        returnValue = F("Polierteich");
        break;
    }
    case 254654:
    {
        returnValue = F("Polierweg");
        break;
    }
    case 254655:
    {
        returnValue = F("Politz-Pfad");
        break;
    }
    case 254656:
    {
        returnValue = F("Poliusstr.");
        break;
    }
    case 254657:
    {
        returnValue = F("Polizeibad");
        break;
    }
    case 254658:
    {
        returnValue = F("Polizeigasse");
        break;
    }
    case 254659:
    {
        returnValue = F("Polizeikreisel");
        break;
    }
    case 254660:
    {
        returnValue = F("Polizeirangen");
        break;
    }
    case 254661:
    {
        returnValue = F("Polizeyweg");
        break;
    }
    case 254662:
    {
        returnValue = F("Polkauer Str.");
        break;
    }
    case 254663:
    {
        returnValue = F("Polkebruchweg");
        break;
    }
    case 254664:
    {
        returnValue = F("Polkenberger Dorfstr.");
        break;
    }
    case 254665:
    {
        returnValue = F("Polkstr.");
        break;
    }
    case 254666:
    {
        returnValue = F("Polkvitz");
        break;
    }
    case 254667:
    {
        returnValue = F("Poll");
        break;
    }
    case 254668:
    {
        returnValue = F("Pollacher Weg");
        break;
    }
    case 254669:
    {
        returnValue = F("Pollanden");
        break;
    }
    case 254670:
    {
        returnValue = F("Pollaschweg");
        break;
    }
    case 254671:
    {
        returnValue = F("Pollbrede");
        break;
    }
    case 254672:
    {
        returnValue = F("Pollebener Str.");
        break;
    }
    case 254673:
    {
        returnValue = F("Pollebener Weg");
        break;
    }
    case 254674:
    {
        returnValue = F("Pollender Str.");
        break;
    }
    case 254675:
    {
        returnValue = F("Pollenderstr.");
        break;
    }
    case 254676:
    {
        returnValue = F("Pollenfeldweg");
        break;
    }
    case 254677:
    {
        returnValue = F("Pollengreutstr.");
        break;
    }
    case 254678:
    {
        returnValue = F("Pollenried");
        break;
    }
    case 254679:
    {
        returnValue = F("Pollenrieder Weg");
        break;
    }
    case 254680:
    {
        returnValue = F("Pollenstr.");
        break;
    }
    case 254681:
    {
        returnValue = F("Pollenweg");
        break;
    }
    case 254682:
    {
        returnValue = F("Poller Damm");
        break;
    }
    case 254683:
    {
        returnValue = F("Poller Esch");
        break;
    }
    case 254684:
    {
        returnValue = F("Poller Str.");
        break;
    }
    case 254685:
    {
        returnValue = F("Poller Weg");
        break;
    }
    case 254686:
    {
        returnValue = F("Pollerbäumchen");
        break;
    }
    case 254687:
    {
        returnValue = F("Pollerdiek");
        break;
    }
    case 254688:
    {
        returnValue = F("Pollerhofstr.");
        break;
    }
    case 254689:
    {
        returnValue = F("Pollerhügel");
        break;
    }
    case 254690:
    {
        returnValue = F("Pollerhütte");
        break;
    }
    case 254691:
    {
        returnValue = F("Pollerstr.");
        break;
    }
    case 254692:
    {
        returnValue = F("Pollertstr.");
        break;
    }
    case 254693:
    {
        returnValue = F("Pollertweg");
        break;
    }
    case 254694:
    {
        returnValue = F("Pollertweg I");
        break;
    }
    case 254695:
    {
        returnValue = F("Pollertweg II");
        break;
    }
    case 254696:
    {
        returnValue = F("Pollerweg");
        break;
    }
    case 254697:
    {
        returnValue = F("Pollesmaar");
        break;
    }
    case 254698:
    {
        returnValue = F("Pollestr.");
        break;
    }
    case 254699:
    {
        returnValue = F("Pollexweg");
        break;
    }
    case 254700:
    {
        returnValue = F("Pollhansfeld");
        break;
    }
    case 254701:
    {
        returnValue = F("Pollhansheide");
        break;
    }
    case 254702:
    {
        returnValue = F("Pollhofstr.");
        break;
    }
    case 254703:
    {
        returnValue = F("Pollhorn");
        break;
    }
    case 254704:
    {
        returnValue = F("Pollhöfen");
        break;
    }
    case 254705:
    {
        returnValue = F("Pollichstr.");
        break;
    }
    case 254706:
    {
        returnValue = F("Polligsstr.");
        break;
    }
    case 254707:
    {
        returnValue = F("Polling");
        break;
    }
    case 254708:
    {
        returnValue = F("Pollinger Str.");
        break;
    }
    case 254709:
    {
        returnValue = F("Pollingerstr.");
        break;
    }
    case 254710:
    {
        returnValue = F("Pollingpark");
        break;
    }
    case 254711:
    {
        returnValue = F("Pollitzer Weg");
        break;
    }
    case 254712:
    {
        returnValue = F("Pollitzer Winkel");
        break;
    }
    case 254713:
    {
        returnValue = F("Pollitzgang");
        break;
    }
    case 254714:
    {
        returnValue = F("Polliusweg");
        break;
    }
    case 254715:
    {
        returnValue = F("Pollkamp");
        break;
    }
    case 254716:
    {
        returnValue = F("Pollmannsgrund");
        break;
    }
    case 254717:
    {
        returnValue = F("Pollmannsweg");
        break;
    }
    case 254718:
    {
        returnValue = F("Pollmerallee");
        break;
    }
    case 254719:
    {
        returnValue = F("Pollmoosstr.");
        break;
    }
    case 254720:
    {
        returnValue = F("Pollnstr.");
        break;
    }
    case 254721:
    {
        returnValue = F("Pollsche Heide");
        break;
    }
    case 254722:
    {
        returnValue = F("Pollsenweg");
        break;
    }
    case 254723:
    {
        returnValue = F("Pollseweg");
        break;
    }
    case 254724:
    {
        returnValue = F("Pollstiege");
        break;
    }
    case 254725:
    {
        returnValue = F("Pollstr.");
        break;
    }
    case 254726:
    {
        returnValue = F("Polluxhof");
        break;
    }
    case 254727:
    {
        returnValue = F("Pollweg");
        break;
    }
    case 254728:
    {
        returnValue = F("Pollweinstr.");
        break;
    }
    case 254729:
    {
        returnValue = F("Polmansstr.");
        break;
    }
    case 254730:
    {
        returnValue = F("Polnische Hütte");
        break;
    }
    case 254731:
    {
        returnValue = F("Polnischer Hof");
        break;
    }
    case 254732:
    {
        returnValue = F("Poloweg");
        break;
    }
    case 254733:
    {
        returnValue = F("Polozker Str.");
        break;
    }
    case 254734:
    {
        returnValue = F("Polschebockstr.");
        break;
    }
    case 254735:
    {
        returnValue = F("Polsdorf");
        break;
    }
    case 254736:
    {
        returnValue = F("Polsdorfer Str.");
        break;
    }
    case 254737:
    {
        returnValue = F("Polsinger Weg");
        break;
    }
    case 254738:
    {
        returnValue = F("Polsterberg");
        break;
    }
    case 254739:
    {
        returnValue = F("Polstergasse");
        break;
    }
    case 254740:
    {
        returnValue = F("Polsterhofstr.");
        break;
    }
    case 254741:
    {
        returnValue = F("Polstr.");
        break;
    }
    case 254742:
    {
        returnValue = F("Polsumer Str.");
        break;
    }
    case 254743:
    {
        returnValue = F("Poltawaweg");
        break;
    }
    case 254744:
    {
        returnValue = F("Poltenbusch");
        break;
    }
    case 254745:
    {
        returnValue = F("Polterberg");
        break;
    }
    case 254746:
    {
        returnValue = F("Polterbrücke");
        break;
    }
    case 254747:
    {
        returnValue = F("Polterdamm");
        break;
    }
    case 254748:
    {
        returnValue = F("Poltesgarten");
        break;
    }
    case 254749:
    {
        returnValue = F("Polteweg");
        break;
    }
    case 254750:
    {
        returnValue = F("Polthierstr.");
        break;
    }
    case 254751:
    {
        returnValue = F("Poltlbauerweg");
        break;
    }
    case 254752:
    {
        returnValue = F("Poltnitzer Weg");
        break;
    }
    case 254753:
    {
        returnValue = F("Poltringer Hauptstr.");
        break;
    }
    case 254754:
    {
        returnValue = F("Poltringer Str.");
        break;
    }
    case 254755:
    {
        returnValue = F("Poltringer Weg");
        break;
    }
    case 254756:
    {
        returnValue = F("Polvitz");
        break;
    }
    case 254757:
    {
        returnValue = F("Polweg");
        break;
    }
    case 254758:
    {
        returnValue = F("Polydorstr.");
        break;
    }
    case 254759:
    {
        returnValue = F("Polygraphstr.");
        break;
    }
    case 254760:
    {
        returnValue = F("Polysiusstr.");
        break;
    }
    case 254761:
    {
        returnValue = F("Polytecplatz");
        break;
    }
    case 254762:
    {
        returnValue = F("Polzbergstr.");
        break;
    }
    case 254763:
    {
        returnValue = F("Polzenberg");
        break;
    }
    case 254764:
    {
        returnValue = F("Polzhausener Str.");
        break;
    }
    case 254765:
    {
        returnValue = F("Polziner Str.");
        break;
    }
    case 254766:
    {
        returnValue = F("Polziner Weg");
        break;
    }
    case 254767:
    {
        returnValue = F("Polzower Str.");
        break;
    }
    case 254768:
    {
        returnValue = F("Polzstr.");
        break;
    }
    case 254769:
    {
        returnValue = F("Polßener Mühle");
        break;
    }
    case 254770:
    {
        returnValue = F("Pomarium");
        break;
    }
    case 254771:
    {
        returnValue = F("Pombachbrücke");
        break;
    }
    case 254772:
    {
        returnValue = F("Pombergweg");
        break;
    }
    case 254773:
    {
        returnValue = F("Pomellen");
        break;
    }
    case 254774:
    {
        returnValue = F("Pomellener Weg");
        break;
    }
    case 254775:
    {
        returnValue = F("Pomeranzengasse");
        break;
    }
    case 254776:
    {
        returnValue = F("Pomeroder Platz");
        break;
    }
    case 254777:
    {
        returnValue = F("Pometsau");
        break;
    }
    case 254778:
    {
        returnValue = F("Pomhof");
        break;
    }
    case 254779:
    {
        returnValue = F("Pommardstr.");
        break;
    }
    case 254780:
    {
        returnValue = F("Pommelsbrunner Weg");
        break;
    }
    case 254781:
    {
        returnValue = F("Pommenicher Str.");
        break;
    }
    case 254782:
    {
        returnValue = F("Pommenweg");
        break;
    }
    case 254783:
    {
        returnValue = F("Pommer");
        break;
    }
    case 254784:
    {
        returnValue = F("Pommeranz");
        break;
    }
    case 254785:
    {
        returnValue = F("Pommerbachstr.");
        break;
    }
    case 254786:
    {
        returnValue = F("Pommerby");
        break;
    }
    case 254787:
    {
        returnValue = F("Pommerbyer Weg");
        break;
    }
    case 254788:
    {
        returnValue = F("Pommerbyholz");
        break;
    }
    case 254789:
    {
        returnValue = F("Pommerellenstr.");
        break;
    }
    case 254790:
    {
        returnValue = F("Pommeresch");
        break;
    }
    case 254791:
    {
        returnValue = F("Pommergasse");
        break;
    }
    case 254792:
    {
        returnValue = F("Pommerhof");
        break;
    }
    case 254793:
    {
        returnValue = F("Pommericher Weg");
        break;
    }
    case 254794:
    {
        returnValue = F("Pommerlesberg");
        break;
    }
    case 254795:
    {
        returnValue = F("Pommermühlweg");
        break;
    }
    case 254796:
    {
        returnValue = F("Pommern");
        break;
    }
    case 254797:
    {
        returnValue = F("Pommernallee");
        break;
    }
    case 254798:
    {
        returnValue = F("Pommerneck");
        break;
    }
    case 254799:
    {
        returnValue = F("Pommernkamp");
        break;
    }
    case 254800:
    {
        returnValue = F("Pommernredder");
        break;
    }
    case 254801:
    {
        returnValue = F("Pommernring");
        break;
    }
    case 254802:
    {
        returnValue = F("Pommernsiedlung");
        break;
    }
    case 254803:
    {
        returnValue = F("Pommernstiege");
        break;
    }
    case 254804:
    {
        returnValue = F("Pommernstr.");
        break;
    }
    case 254805:
    {
        returnValue = F("Pommernstrasse");
        break;
    }
    case 254806:
    {
        returnValue = F("Pommernweg");
        break;
    }
    case 254807:
    {
        returnValue = F("Pommernwinkel");
        break;
    }
    case 254808:
    {
        returnValue = F("Pommerotter Weg");
        break;
    }
    case 254809:
    {
        returnValue = F("Pommerrück");
        break;
    }
    case 254810:
    {
        returnValue = F("Pommersche Str.");
        break;
    }
    case 254811:
    {
        returnValue = F("Pommerscher Pfad");
        break;
    }
    case 254812:
    {
        returnValue = F("Pommersches Runddorf");
        break;
    }
    case 254813:
    {
        returnValue = F("Pommerstr.");
        break;
    }
    case 254814:
    {
        returnValue = F("Pommerweg");
        break;
    }
    case 254815:
    {
        returnValue = F("Pommespesch");
        break;
    }
    case 254816:
    {
        returnValue = F("Pommlitz");
        break;
    }
    case 254817:
    {
        returnValue = F("Pommlitzer Weg");
        break;
    }
    case 254818:
    {
        returnValue = F("Pommoisseler Str.");
        break;
    }
    case 254819:
    {
        returnValue = F("Pommrück");
        break;
    }
    case 254820:
    {
        returnValue = F("Pomnikweg");
        break;
    }
    case 254821:
    {
        returnValue = F("Pomnitzer Str.");
        break;
    }
    case 254822:
    {
        returnValue = F("Pomologie");
        break;
    }
    case 254823:
    {
        returnValue = F("Pomologische Gartenstr.");
        break;
    }
    case 254824:
    {
        returnValue = F("Pomona");
        break;
    }
    case 254825:
    {
        returnValue = F("Pomonaring");
        break;
    }
    case 254826:
    {
        returnValue = F("Pomonaweg");
        break;
    }
    case 254827:
    {
        returnValue = F("Pomosin-Werk");
        break;
    }
    case 254828:
    {
        returnValue = F("Pompejanumstr.");
        break;
    }
    case 254829:
    {
        returnValue = F("Pompelweg");
        break;
    }
    case 254830:
    {
        returnValue = F("Pompeyplatz");
        break;
    }
    case 254831:
    {
        returnValue = F("Pomplitzstr.");
        break;
    }
    case 254832:
    {
        returnValue = F("Pompstr.");
        break;
    }
    case 254833:
    {
        returnValue = F("Pomselberg");
        break;
    }
    case 254834:
    {
        returnValue = F("Pomßener Str.");
        break;
    }
    case 254835:
    {
        returnValue = F("Ponauer Str.");
        break;
    }
    case 254836:
    {
        returnValue = F("Pongbarg");
        break;
    }
    case 254837:
    {
        returnValue = F("Pongrazstr.");
        break;
    }
    case 254838:
    {
        returnValue = F("Pongser Heide");
        break;
    }
    case 254839:
    {
        returnValue = F("Pongser Kamp");
        break;
    }
    case 254840:
    {
        returnValue = F("Pongser Str.");
        break;
    }
    case 254841:
    {
        returnValue = F("Ponhardsberger Feld");
        break;
    }
    case 254842:
    {
        returnValue = F("Ponholzer Str.");
        break;
    }
    case 254843:
    {
        returnValue = F("Ponholzmühle");
        break;
    }
    case 254844:
    {
        returnValue = F("Ponholzweg");
        break;
    }
    case 254845:
    {
        returnValue = F("Ponickauer Str.");
        break;
    }
    case 254846:
    {
        returnValue = F("Ponickaustr.");
        break;
    }
    case 254847:
    {
        returnValue = F("Ponikauer Weg");
        break;
    }
    case 254848:
    {
        returnValue = F("Ponikauweg");
        break;
    }
    case 254849:
    {
        returnValue = F("Ponitzer Str.");
        break;
    }
    case 254850:
    {
        returnValue = F("Ponitzer Weg");
        break;
    }
    case 254851:
    {
        returnValue = F("Ponlach");
        break;
    }
    case 254852:
    {
        returnValue = F("Ponlach Wanderweg");
        break;
    }
    case 254853:
    {
        returnValue = F("Ponnsdorfer Str.");
        break;
    }
    case 254854:
    {
        returnValue = F("Ponnsdorfer Str. Ausbau");
        break;
    }
    case 254855:
    {
        returnValue = F("Ponnsdorfer Weg");
        break;
    }
    case 254856:
    {
        returnValue = F("Ponnötz");
        break;
    }
    case 254857:
    {
        returnValue = F("Ponsstr.");
        break;
    }
    case 254858:
    {
        returnValue = F("Pont de Claix Str.");
        break;
    }
    case 254859:
    {
        returnValue = F("Pont de Saint Valery en Caux");
        break;
    }
    case 254860:
    {
        returnValue = F("Pont de Wagram");
        break;
    }
    case 254861:
    {
        returnValue = F("Pont-Avener-Str.");
        break;
    }
    case 254862:
    {
        returnValue = F("Pont-Saint-Esprit-Platz");
        break;
    }
    case 254863:
    {
        returnValue = F("Pont-l'Evêque-Allee");
        break;
    }
    case 254864:
    {
        returnValue = F("Pont-à-Mousson-Ring");
        break;
    }
    case 254865:
    {
        returnValue = F("Pontanistr.");
        break;
    }
    case 254866:
    {
        returnValue = F("Pontanusstr.");
        break;
    }
    case 254867:
    {
        returnValue = F("Pontarlierstr.");
        break;
    }
    case 254868:
    {
        returnValue = F("Pontault-Combault-Platz");
        break;
    }
    case 254869:
    {
        returnValue = F("Pontault-Combault-Str.");
        break;
    }
    case 254870:
    {
        returnValue = F("Pontdriesch");
        break;
    }
    case 254871:
    {
        returnValue = F("Ponte Carlo");
        break;
    }
    case 254872:
    {
        returnValue = F("Pontenweg");
        break;
    }
    case 254873:
    {
        returnValue = F("Pontepark");
        break;
    }
    case 254874:
    {
        returnValue = F("Ponter Dorfstr.");
        break;
    }
    case 254875:
    {
        returnValue = F("Ponter Str.");
        break;
    }
    case 254876:
    {
        returnValue = F("Ponter Weg");
        break;
    }
    case 254877:
    {
        returnValue = F("Ponterstr.");
        break;
    }
    case 254878:
    {
        returnValue = F("Pontestr.");
        break;
    }
    case 254879:
    {
        returnValue = F("Pontewitz");
        break;
    }
    case 254880:
    {
        returnValue = F("Ponthal");
        break;
    }
    case 254881:
    {
        returnValue = F("Pontivystr.");
        break;
    }
    case 254882:
    {
        returnValue = F("Pontnewyddstr.");
        break;
    }
    case 254883:
    {
        returnValue = F("Pontohof");
        break;
    }
    case 254884:
    {
        returnValue = F("Pontoiser Str.");
        break;
    }
    case 254885:
    {
        returnValue = F("Pontorsonallee");
        break;
    }
    case 254886:
    {
        returnValue = F("Pontriesen");
        break;
    }
    case 254887:
    {
        returnValue = F("Pontsheide");
        break;
    }
    case 254888:
    {
        returnValue = F("Pontstr.");
        break;
    }
    case 254889:
    {
        returnValue = F("Pontwall");
        break;
    }
    case 254890:
    {
        returnValue = F("Ponyhof");
        break;
    }
    case 254891:
    {
        returnValue = F("Ponyreiten");
        break;
    }
    case 254892:
    {
        returnValue = F("Ponyrunde");
        break;
    }
    case 254893:
    {
        returnValue = F("Ponystr.");
        break;
    }
    case 254894:
    {
        returnValue = F("Ponyweg");
        break;
    }
    case 254895:
    {
        returnValue = F("Ponyweg (D3/D4)");
        break;
    }
    case 254896:
    {
        returnValue = F("Ponywiese");
        break;
    }
    case 254897:
    {
        returnValue = F("Poolplatz");
        break;
    }
    case 254898:
    {
        returnValue = F("Poolricht");
        break;
    }
    case 254899:
    {
        returnValue = F("Poolrichtsweg");
        break;
    }
    case 254900:
    {
        returnValue = F("Poolrien");
        break;
    }
    case 254901:
    {
        returnValue = F("Poolshelmte");
        break;
    }
    case 254902:
    {
        returnValue = F("Poolstich");
        break;
    }
    case 254903:
    {
        returnValue = F("Poolstieg");
        break;
    }
    case 254904:
    {
        returnValue = F("Poolstr.");
        break;
    }
    case 254905:
    {
        returnValue = F("Poolweg");
        break;
    }
    case 254906:
    {
        returnValue = F("Poornort");
        break;
    }
    case 254907:
    {
        returnValue = F("Poorstorfer Weg");
        break;
    }
    case 254908:
    {
        returnValue = F("Poorte");
        break;
    }
    case 254909:
    {
        returnValue = F("Pootendiek");
        break;
    }
    case 254910:
    {
        returnValue = F("Popelweg");
        break;
    }
    case 254911:
    {
        returnValue = F("Popenberg");
        break;
    }
    case 254912:
    {
        returnValue = F("Popendiekstr.");
        break;
    }
    case 254913:
    {
        returnValue = F("Popengasse");
        break;
    }
    case 254914:
    {
        returnValue = F("Popenser Str.");
        break;
    }
    case 254915:
    {
        returnValue = F("Popenstr.");
        break;
    }
    case 254916:
    {
        returnValue = F("Popenteich");
        break;
    }
    case 254917:
    {
        returnValue = F("Popitzweg");
        break;
    }
    case 254918:
    {
        returnValue = F("Popken Damm");
        break;
    }
    case 254919:
    {
        returnValue = F("Popkenhöger Str.");
        break;
    }
    case 254920:
    {
        returnValue = F("Popkenweg");
        break;
    }
    case 254921:
    {
        returnValue = F("Popowstr.");
        break;
    }
    case 254922:
    {
        returnValue = F("Poppau");
        break;
    }
    case 254923:
    {
        returnValue = F("Poppauer Str.");
        break;
    }
    case 254924:
    {
        returnValue = F("Poppauer Weg");
        break;
    }
    case 254925:
    {
        returnValue = F("Poppe-Folkerts-Str.");
        break;
    }
    case 254926:
    {
        returnValue = F("Poppel");
        break;
    }
    case 254927:
    {
        returnValue = F("Poppelbaumstr.");
        break;
    }
    case 254928:
    {
        returnValue = F("Poppeleslochweg");
        break;
    }
    case 254929:
    {
        returnValue = F("Poppelestr.");
        break;
    }
    case 254930:
    {
        returnValue = F("Poppeleweg");
        break;
    }
    case 254931:
    {
        returnValue = F("Poppelfeld");
        break;
    }
    case 254932:
    {
        returnValue = F("Poppelreunsweg");
        break;
    }
    case 254933:
    {
        returnValue = F("Poppelsdorfer Allee");
        break;
    }
    case 254934:
    {
        returnValue = F("Poppelvitz");
        break;
    }
    case 254935:
    {
        returnValue = F("Poppenbeck");
        break;
    }
    case 254936:
    {
        returnValue = F("Poppenbergweg");
        break;
    }
    case 254937:
    {
        returnValue = F("Poppenbrede");
        break;
    }
    case 254938:
    {
        returnValue = F("Poppenbrügger Weg");
        break;
    }
    case 254939:
    {
        returnValue = F("Poppenburger Str.");
        break;
    }
    case 254940:
    {
        returnValue = F("Poppenbüller Str.");
        break;
    }
    case 254941:
    {
        returnValue = F("Poppenbütteler Str.");
        break;
    }
    case 254942:
    {
        returnValue = F("Poppendiekweg");
        break;
    }
    case 254943:
    {
        returnValue = F("Poppendorf");
        break;
    }
    case 254944:
    {
        returnValue = F("Poppendorfer Str.");
        break;
    }
    case 254945:
    {
        returnValue = F("Poppengrüner Str.");
        break;
    }
    case 254946:
    {
        returnValue = F("Poppenhagener Str.");
        break;
    }
    case 254947:
    {
        returnValue = F("Poppenhalde");
        break;
    }
    case 254948:
    {
        returnValue = F("Poppenheimer Str.");
        break;
    }
    case 254949:
    {
        returnValue = F("Poppenhofer Weg");
        break;
    }
    case 254950:
    {
        returnValue = F("Poppenhäuser Dorfstr.");
        break;
    }
    case 254951:
    {
        returnValue = F("Poppenhäuser Str.");
        break;
    }
    case 254952:
    {
        returnValue = F("Poppenhäuser Weg");
        break;
    }
    case 254953:
    {
        returnValue = F("Poppenkamp");
        break;
    }
    case 254954:
    {
        returnValue = F("Poppenlauerer Str.");
        break;
    }
    case 254955:
    {
        returnValue = F("Poppenleiten");
        break;
    }
    case 254956:
    {
        returnValue = F("Poppenmeedeweg");
        break;
    }
    case 254957:
    {
        returnValue = F("Poppenrade");
        break;
    }
    case 254958:
    {
        returnValue = F("Poppenreuter Str.");
        break;
    }
    case 254959:
    {
        returnValue = F("Poppenreuth");
        break;
    }
    case 254960:
    {
        returnValue = F("Poppenreuther Brücke");
        break;
    }
    case 254961:
    {
        returnValue = F("Poppenreuther Str.");
        break;
    }
    case 254962:
    {
        returnValue = F("Poppenreuther-Berg-Str.");
        break;
    }
    case 254963:
    {
        returnValue = F("Poppenrichter Weg");
        break;
    }
    case 254964:
    {
        returnValue = F("Poppenroder Str.");
        break;
    }
    case 254965:
    {
        returnValue = F("Poppenrother Höhe");
        break;
    }
    case 254966:
    {
        returnValue = F("Poppenrother Str.");
        break;
    }
    case 254967:
    {
        returnValue = F("Poppensaal");
        break;
    }
    case 254968:
    {
        returnValue = F("Poppensiek");
        break;
    }
    case 254969:
    {
        returnValue = F("Poppenstein");
        break;
    }
    case 254970:
    {
        returnValue = F("Poppenstr.");
        break;
    }
    case 254971:
    {
        returnValue = F("Poppenweg");
        break;
    }
    case 254972:
    {
        returnValue = F("Poppenweiler Str.");
        break;
    }
    case 254973:
    {
        returnValue = F("Poppenweilerstr.");
        break;
    }
    case 254974:
    {
        returnValue = F("Poppenwinder Str.");
        break;
    }
    case 254975:
    {
        returnValue = F("Poppenwinder Weg");
        break;
    }
    case 254976:
    {
        returnValue = F("Poppenwurth");
        break;
    }
    case 254977:
    {
        returnValue = F("Poppergäßchen");
        break;
    }
    case 254978:
    {
        returnValue = F("Popperöder Gasse");
        break;
    }
    case 254979:
    {
        returnValue = F("Popperöder Str.");
        break;
    }
    case 254980:
    {
        returnValue = F("Poppesmühle");
        break;
    }
    case 254981:
    {
        returnValue = F("Poppestr.");
        break;
    }
    case 254982:
    {
        returnValue = F("Poppeweg");
        break;
    }
    case 254983:
    {
        returnValue = F("Popphalde");
        break;
    }
    case 254984:
    {
        returnValue = F("Poppholz");
        break;
    }
    case 254985:
    {
        returnValue = F("Poppis");
        break;
    }
    case 254986:
    {
        returnValue = F("Poppitzer Landstr.");
        break;
    }
    case 254987:
    {
        returnValue = F("Poppitzer Platz");
        break;
    }
    case 254988:
    {
        returnValue = F("Poppitzer Str.");
        break;
    }
    case 254989:
    {
        returnValue = F("Poppitzer Weg");
        break;
    }
    case 254990:
    {
        returnValue = F("Poppsches Gut");
        break;
    }
    case 254991:
    {
        returnValue = F("Poppspfad");
        break;
    }
    case 254992:
    {
        returnValue = F("Poppstr.");
        break;
    }
    case 254993:
    {
        returnValue = F("Poratz");
        break;
    }
    case 254994:
    {
        returnValue = F("Poratzstr.");
        break;
    }
    case 254995:
    {
        returnValue = F("Porbach");
        break;
    }
    case 254996:
    {
        returnValue = F("Porbitzer Str.");
        break;
    }
    case 254997:
    {
        returnValue = F("Poris-Lengefeld");
        break;
    }
    case 254998:
    {
        returnValue = F("Poristr.");
        break;
    }
    case 254999:
    {
        returnValue = F("Pornic Ufer");
        break;
    }
    case 255000:
    {
        returnValue = F("Pornichet-Ring");
        break;
    }
    case 255001:
    {
        returnValue = F("Pornitzstr.");
        break;
    }
    case 255002:
    {
        returnValue = F("Pornobrücke");
        break;
    }
    case 255003:
    {
        returnValue = F("Porphyr Lehrpfad");
        break;
    }
    case 255004:
    {
        returnValue = F("Porphyrstr.");
        break;
    }
    case 255005:
    {
        returnValue = F("Porphyrweg");
        break;
    }
    case 255006:
    {
        returnValue = F("Porrathstr.");
        break;
    }
    case 255007:
    {
        returnValue = F("Porrbacher Str.");
        break;
    }
    case 255008:
    {
        returnValue = F("Porrenkoogsweg");
        break;
    }
    case 255009:
    {
        returnValue = F("Porschendorfer Str.");
        break;
    }
    case 255010:
    {
        returnValue = F("Porschendorfer Weg");
        break;
    }
    case 255011:
    {
        returnValue = F("Porschendorfweg");
        break;
    }
    case 255012:
    {
        returnValue = F("Porschering");
        break;
    }
    case 255013:
    {
        returnValue = F("Porschestr.");
        break;
    }
    case 255014:
    {
        returnValue = F("Porscheweg");
        break;
    }
    case 255015:
    {
        returnValue = F("Porschnitzweg");
        break;
    }
    case 255016:
    {
        returnValue = F("Porschützer Weg");
        break;
    }
    case 255017:
    {
        returnValue = F("Porse-Privatweg");
        break;
    }
    case 255018:
    {
        returnValue = F("Porsestr.");
        break;
    }
    case 255019:
    {
        returnValue = F("Porstendorfer Str.");
        break;
    }
    case 255020:
    {
        returnValue = F("Porstendorfer Weg");
        break;
    }
    case 255021:
    {
        returnValue = F("Porstheide");
        break;
    }
    case 255022:
    {
        returnValue = F("Porstriehen");
        break;
    }
    case 255023:
    {
        returnValue = F("Porstweg");
        break;
    }
    case 255024:
    {
        returnValue = F("Port Arthur");
        break;
    }
    case 255025:
    {
        returnValue = F("Port-Bail-Promenade");
        break;
    }
    case 255026:
    {
        returnValue = F("Port-Louis-Platz");
        break;
    }
    case 255027:
    {
        returnValue = F("Port-Talbot-Str.");
        break;
    }
    case 255028:
    {
        returnValue = F("Porta Westfalica");
        break;
    }
    case 255029:
    {
        returnValue = F("Porta-Allee");
        break;
    }
    case 255030:
    {
        returnValue = F("Porta-Coeli-Ring");
        break;
    }
    case 255031:
    {
        returnValue = F("Porta-Nigra-Platz");
        break;
    }
    case 255032:
    {
        returnValue = F("Porta-Westfalica-Brücke");
        break;
    }
    case 255033:
    {
        returnValue = F("Portablick");
        break;
    }
    case 255034:
    {
        returnValue = F("Portal Avenue");
        break;
    }
    case 255035:
    {
        returnValue = F("Portalweg");
        break;
    }
    case 255036:
    {
        returnValue = F("Portastr.");
        break;
    }
    case 255037:
    {
        returnValue = F("Porte");
        break;
    }
    case 255038:
    {
        returnValue = F("Portegasse");
        break;
    }
    case 255039:
    {
        returnValue = F("Portejansweg");
        break;
    }
    case 255040:
    {
        returnValue = F("Porten Siepen");
        break;
    }
    case 255041:
    {
        returnValue = F("Portenhäger Str.");
        break;
    }
    case 255042:
    {
        returnValue = F("Portenkamp");
        break;
    }
    case 255043:
    {
        returnValue = F("Portenlänger-Geräumt");
        break;
    }
    case 255044:
    {
        returnValue = F("Portenlängerstr.");
        break;
    }
    case 255045:
    {
        returnValue = F("Portenrain");
        break;
    }
    case 255046:
    {
        returnValue = F("Portenschlagerweg");
        break;
    }
    case 255047:
    {
        returnValue = F("Portenstr.");
        break;
    }
    case 255048:
    {
        returnValue = F("Porteweg");
        break;
    }
    case 255049:
    {
        returnValue = F("Portgarten");
        break;
    }
    case 255050:
    {
        returnValue = F("Portheide");
        break;
    }
    case 255051:
    {
        returnValue = F("Portikus");
        break;
    }
    case 255052:
    {
        returnValue = F("Portikusgasse");
        break;
    }
    case 255053:
    {
        returnValue = F("Portitzer Str.");
        break;
    }
    case 255054:
    {
        returnValue = F("Portiunkulaweg");
        break;
    }
    case 255055:
    {
        returnValue = F("Portkamp");
        break;
    }
    case 255056:
    {
        returnValue = F("Portland Ring");
        break;
    }
    case 255057:
    {
        returnValue = F("Portlandstr.");
        break;
    }
    case 255058:
    {
        returnValue = F("Portlandweg");
        break;
    }
    case 255059:
    {
        returnValue = F("Portmanns Kamp");
        break;
    }
    case 255060:
    {
        returnValue = F("Portmanns Weg");
        break;
    }
    case 255061:
    {
        returnValue = F("Portmannweg");
        break;
    }
    case 255062:
    {
        returnValue = F("Portnergasse");
        break;
    }
    case 255063:
    {
        returnValue = F("Portnerstr.");
        break;
    }
    case 255064:
    {
        returnValue = F("Portsloger Damm");
        break;
    }
    case 255065:
    {
        returnValue = F("Portsloger Str.");
        break;
    }
    case 255066:
    {
        returnValue = F("Portstr.");
        break;
    }
    case 255067:
    {
        returnValue = F("Portugieserring");
        break;
    }
    case 255068:
    {
        returnValue = F("Portugieserstr.");
        break;
    }
    case 255069:
    {
        returnValue = F("Portugieserweg");
        break;
    }
    case 255070:
    {
        returnValue = F("Portugiesischer Weg");
        break;
    }
    case 255071:
    {
        returnValue = F("Portweg");
        break;
    }
    case 255072:
    {
        returnValue = F("Portzenbusch");
        break;
    }
    case 255073:
    {
        returnValue = F("Portzer Str.");
        break;
    }
    case 255074:
    {
        returnValue = F("Porvoostr.");
        break;
    }
    case 255075:
    {
        returnValue = F("Porzberg");
        break;
    }
    case 255076:
    {
        returnValue = F("Porzellangasse");
        break;
    }
    case 255077:
    {
        returnValue = F("Porzellanstr.");
        break;
    }
    case 255078:
    {
        returnValue = F("Porzellanweg");
        break;
    }
    case 255079:
    {
        returnValue = F("Porzellinergasse");
        break;
    }
    case 255080:
    {
        returnValue = F("Porzellinerstr.");
        break;
    }
    case 255081:
    {
        returnValue = F("Porzellinerweg");
        break;
    }
    case 255082:
    {
        returnValue = F("Porzelstr.");
        break;
    }
    case 255083:
    {
        returnValue = F("Porzeltstr.");
        break;
    }
    case 255084:
    {
        returnValue = F("Porzer Str.");
        break;
    }
    case 255085:
    {
        returnValue = F("Porßenweg");
        break;
    }
    case 255086:
    {
        returnValue = F("Posadowskystr.");
        break;
    }
    case 255087:
    {
        returnValue = F("Posaer Str.");
        break;
    }
    case 255088:
    {
        returnValue = F("Posaunengasse");
        break;
    }
    case 255089:
    {
        returnValue = F("Posberg");
        break;
    }
    case 255090:
    {
        returnValue = F("Posbergweg");
        break;
    }
    case 255091:
    {
        returnValue = F("Poschenhof");
        break;
    }
    case 255092:
    {
        returnValue = F("Poschenweg");
        break;
    }
    case 255093:
    {
        returnValue = F("Poschetsried");
        break;
    }
    case 255094:
    {
        returnValue = F("Poschetsrieder Str.");
        break;
    }
    case 255095:
    {
        returnValue = F("Poscheweg");
        break;
    }
    case 255096:
    {
        returnValue = F("Poschheide");
        break;
    }
    case 255097:
    {
        returnValue = F("Poschheider Str.");
        break;
    }
    case 255098:
    {
        returnValue = F("Poschinger Str.");
        break;
    }
    case 255099:
    {
        returnValue = F("Poschingerstr.");
        break;
    }
    case 255100:
    {
        returnValue = F("Poschlayer Weg");
        break;
    }
    case 255101:
    {
        returnValue = F("Poschmühl");
        break;
    }
    case 255102:
    {
        returnValue = F("Poschmühle");
        break;
    }
    case 255103:
    {
        returnValue = F("Poschweg");
        break;
    }
    case 255104:
    {
        returnValue = F("Poschwitzer Park");
        break;
    }
    case 255105:
    {
        returnValue = F("Poschwitzer Str.");
        break;
    }
    case 255106:
    {
        returnValue = F("Poseby");
        break;
    }
    case 255107:
    {
        returnValue = F("Poseckscher Garten");
        break;
    }
    case 255108:
    {
        returnValue = F("Posediner Str.");
        break;
    }
    case 255109:
    {
        returnValue = F("Poseidonstr.");
        break;
    }
    case 255110:
    {
        returnValue = F("Poseidonweg");
        break;
    }
    case 255111:
    {
        returnValue = F("Posen");
        break;
    }
    case 255112:
    {
        returnValue = F("Posener Ring");
        break;
    }
    case 255113:
    {
        returnValue = F("Posener Str.");
        break;
    }
    case 255114:
    {
        returnValue = F("Posener Weg");
        break;
    }
    case 255115:
    {
        returnValue = F("Posentsche Str.");
        break;
    }
    case 255116:
    {
        returnValue = F("Posenweg");
        break;
    }
    case 255117:
    {
        returnValue = F("Poseritz Ausbau");
        break;
    }
    case 255118:
    {
        returnValue = F("Poseritz Hof");
        break;
    }
    case 255119:
    {
        returnValue = F("Poseritzer Str.");
        break;
    }
    case 255120:
    {
        returnValue = F("Posernaer Weg");
        break;
    }
    case 255121:
    {
        returnValue = F("Posernweg");
        break;
    }
    case 255122:
    {
        returnValue = F("Posewald");
        break;
    }
    case 255123:
    {
        returnValue = F("Posewitz");
        break;
    }
    case 255124:
    {
        returnValue = F("Poshof");
        break;
    }
    case 255125:
    {
        returnValue = F("Posilipostr.");
        break;
    }
    case 255126:
    {
        returnValue = F("Posilippo-Tunnel");
        break;
    }
    case 255127:
    {
        returnValue = F("Poskeberg");
        break;
    }
    case 255128:
    {
        returnValue = F("Poskerweg");
        break;
    }
    case 255129:
    {
        returnValue = F("Posottendorfer Str.");
        break;
    }
    case 255130:
    {
        returnValue = F("Pospen Schneise");
        break;
    }
    case 255131:
    {
        returnValue = F("Poss Str.");
        break;
    }
    case 255132:
    {
        returnValue = F("Posse");
        break;
    }
    case 255133:
    {
        returnValue = F("Posseck");
        break;
    }
    case 255134:
    {
        returnValue = F("Possecker Str.");
        break;
    }
    case 255135:
    {
        returnValue = F("Posseltstr.");
        break;
    }
    case 255136:
    {
        returnValue = F("Posseltsweg");
        break;
    }
    case 255137:
    {
        returnValue = F("Possenallee");
        break;
    }
    case 255138:
    {
        returnValue = F("Possenbrock");
        break;
    }
    case 255139:
    {
        returnValue = F("Possendell");
        break;
    }
    case 255140:
    {
        returnValue = F("Possendorfer Str.");
        break;
    }
    case 255141:
    {
        returnValue = F("Possendorfer Weg");
        break;
    }
    case 255142:
    {
        returnValue = F("Possenhain");
        break;
    }
    case 255143:
    {
        returnValue = F("Possenhainer Str.");
        break;
    }
    case 255144:
    {
        returnValue = F("Possenheimer Str.");
        break;
    }
    case 255145:
    {
        returnValue = F("Possenhofener Str.");
        break;
    }
    case 255146:
    {
        returnValue = F("Possenwaldstr.");
        break;
    }
    case 255147:
    {
        returnValue = F("Possenweg");
        break;
    }
    case 255148:
    {
        returnValue = F("Possgraben");
        break;
    }
    case 255149:
    {
        returnValue = F("Possingsweg");
        break;
    }
    case 255150:
    {
        returnValue = F("Possluch");
        break;
    }
    case 255151:
    {
        returnValue = F("Postacker");
        break;
    }
    case 255152:
    {
        returnValue = F("Postackerweg");
        break;
    }
    case 255153:
    {
        returnValue = F("Postaer Str.");
        break;
    }
    case 255154:
    {
        returnValue = F("Postallee");
        break;
    }
    case 255155:
    {
        returnValue = F("Postanger");
        break;
    }
    case 255156:
    {
        returnValue = F("Postangerweg");
        break;
    }
    case 255157:
    {
        returnValue = F("Postauer Str.");
        break;
    }
    case 255158:
    {
        returnValue = F("Postbauer Str.");
        break;
    }
    case 255159:
    {
        returnValue = F("Postbauer Weg");
        break;
    }
    case 255160:
    {
        returnValue = F("Postberg");
        break;
    }
    case 255161:
    {
        returnValue = F("Postbergstr.");
        break;
    }
    case 255162:
    {
        returnValue = F("Postbotengestell");
        break;
    }
    case 255163:
    {
        returnValue = F("Postbotensteig");
        break;
    }
    case 255164:
    {
        returnValue = F("Postbotenweg");
        break;
    }
    case 255165:
    {
        returnValue = F("Postbreite");
        break;
    }
    case 255166:
    {
        returnValue = F("Postbrink");
        break;
    }
    case 255167:
    {
        returnValue = F("Postbrookstr.");
        break;
    }
    case 255168:
    {
        returnValue = F("Postbruch");
        break;
    }
    case 255169:
    {
        returnValue = F("Postbruchweg");
        break;
    }
    case 255170:
    {
        returnValue = F("Postbrunnenplatz");
        break;
    }
    case 255171:
    {
        returnValue = F("Postdamm");
        break;
    }
    case 255172:
    {
        returnValue = F("Postdeich");
        break;
    }
    case 255173:
    {
        returnValue = F("Posteholzer Str.");
        break;
    }
    case 255174:
    {
        returnValue = F("Posteichenweg");
        break;
    }
    case 255175:
    {
        returnValue = F("Postelberger Str.");
        break;
    }
    case 255176:
    {
        returnValue = F("Postelhofweg");
        break;
    }
    case 255177:
    {
        returnValue = F("Postelschlagsweg");
        break;
    }
    case 255178:
    {
        returnValue = F("Posten");
        break;
    }
    case 255179:
    {
        returnValue = F("Posten 6");
        break;
    }
    case 255180:
    {
        returnValue = F("Posten 77");
        break;
    }
    case 255181:
    {
        returnValue = F("Posten 90");
        break;
    }
    case 255182:
    {
        returnValue = F("Posten Bahnstrecke");
        break;
    }
    case 255183:
    {
        returnValue = F("Posten-19-Weg");
        break;
    }
    case 255184:
    {
        returnValue = F("Postenlinie");
        break;
    }
    case 255185:
    {
        returnValue = F("Postenweg");
        break;
    }
    case 255186:
    {
        returnValue = F("Postenweg der SS-Wachmannschaften");
        break;
    }
    case 255187:
    {
        returnValue = F("Postersteiner Str.");
        break;
    }
    case 255188:
    {
        returnValue = F("Posteschenstr.");
        break;
    }
    case 255189:
    {
        returnValue = F("Postfeld");
        break;
    }
    case 255190:
    {
        returnValue = F("Postfelden");
        break;
    }
    case 255191:
    {
        returnValue = F("Postfeldener Str.");
        break;
    }
    case 255192:
    {
        returnValue = F("Postfelder Str.");
        break;
    }
    case 255193:
    {
        returnValue = F("Postfelder Weg");
        break;
    }
    case 255194:
    {
        returnValue = F("Postfeldstr.");
        break;
    }
    case 255195:
    {
        returnValue = F("Postferiendorf");
        break;
    }
    case 255196:
    {
        returnValue = F("Postgang");
        break;
    }
    case 255197:
    {
        returnValue = F("Postgangerl");
        break;
    }
    case 255198:
    {
        returnValue = F("Postgarten");
        break;
    }
    case 255199:
    {
        returnValue = F("Postgartengasserl");
        break;
    }
    case 255200:
    {
        returnValue = F("Postgartenstr.");
        break;
    }
    case 255201:
    {
        returnValue = F("Postgartenweg");
        break;
    }
    case 255202:
    {
        returnValue = F("Postgasse");
        break;
    }
    case 255203:
    {
        returnValue = F("Postgassl");
        break;
    }
    case 255204:
    {
        returnValue = F("Postgaßle");
        break;
    }
    case 255205:
    {
        returnValue = F("Postgrabenstr.");
        break;
    }
    case 255206:
    {
        returnValue = F("Postgrund");
        break;
    }
    case 255207:
    {
        returnValue = F("Postgärten");
        break;
    }
    case 255208:
    {
        returnValue = F("Postgässchen");
        break;
    }
    case 255209:
    {
        returnValue = F("Postgässje");
        break;
    }
    case 255210:
    {
        returnValue = F("Postgässle");
        break;
    }
    case 255211:
    {
        returnValue = F("Postgäßchen");
        break;
    }
    case 255212:
    {
        returnValue = F("Postgäßle");
        break;
    }
    case 255213:
    {
        returnValue = F("Posthalter-Rothfischer-Str.");
        break;
    }
    case 255214:
    {
        returnValue = F("Posthaltergasse");
        break;
    }
    case 255215:
    {
        returnValue = F("Posthalters Weg");
        break;
    }
    case 255216:
    {
        returnValue = F("Posthalterslohne");
        break;
    }
    case 255217:
    {
        returnValue = F("Posthalterstieg");
        break;
    }
    case 255218:
    {
        returnValue = F("Posthalterstr.");
        break;
    }
    case 255219:
    {
        returnValue = F("Posthalterswaldsträßle");
        break;
    }
    case 255220:
    {
        returnValue = F("Posthaltersweg");
        break;
    }
    case 255221:
    {
        returnValue = F("Posthalterweg");
        break;
    }
    case 255222:
    {
        returnValue = F("Posthausen");
        break;
    }
    case 255223:
    {
        returnValue = F("Posthausstr.");
        break;
    }
    case 255224:
    {
        returnValue = F("Postheck");
        break;
    }
    case 255225:
    {
        returnValue = F("Postheim");
        break;
    }
    case 255226:
    {
        returnValue = F("Postheimstr.");
        break;
    }
    case 255227:
    {
        returnValue = F("Postheimweg");
        break;
    }
    case 255228:
    {
        returnValue = F("Posthiusstr.");
        break;
    }
    case 255229:
    {
        returnValue = F("Posthoek");
        break;
    }
    case 255230:
    {
        returnValue = F("Posthof");
        break;
    }
    case 255231:
    {
        returnValue = F("Posthofstr.");
        break;
    }
    case 255232:
    {
        returnValue = F("Posthofweg");
        break;
    }
    case 255233:
    {
        returnValue = F("Posthohl");
        break;
    }
    case 255234:
    {
        returnValue = F("Posthohle");
        break;
    }
    case 255235:
    {
        returnValue = F("Posthorn");
        break;
    }
    case 255236:
    {
        returnValue = F("Posthornweg");
        break;
    }
    case 255237:
    {
        returnValue = F("Posthorstweg");
        break;
    }
    case 255238:
    {
        returnValue = F("Posthäuschen");
        break;
    }
    case 255239:
    {
        returnValue = F("Posthäuser");
        break;
    }
    case 255240:
    {
        returnValue = F("Postillionseck");
        break;
    }
    case 255241:
    {
        returnValue = F("Postillionstr.");
        break;
    }
    case 255242:
    {
        returnValue = F("Postillionsweg");
        break;
    }
    case 255243:
    {
        returnValue = F("Postillionweg");
        break;
    }
    case 255244:
    {
        returnValue = F("Postkabelweg");
        break;
    }
    case 255245:
    {
        returnValue = F("Postkamp");
        break;
    }
    case 255246:
    {
        returnValue = F("Postkellerstr.");
        break;
    }
    case 255247:
    {
        returnValue = F("Postkellerweg");
        break;
    }
    case 255248:
    {
        returnValue = F("Postknoten");
        break;
    }
    case 255249:
    {
        returnValue = F("Postkreisel");
        break;
    }
    case 255250:
    {
        returnValue = F("Postkutsche");
        break;
    }
    case 255251:
    {
        returnValue = F("Postkutschenweg");
        break;
    }
    case 255252:
    {
        returnValue = F("Postlandstr.");
        break;
    }
    case 255253:
    {
        returnValue = F("Postleite");
        break;
    }
    case 255254:
    {
        returnValue = F("Postleitenstr.");
        break;
    }
    case 255255:
    {
        returnValue = F("Postliner Str.");
        break;
    }
    case 255256:
    {
        returnValue = F("Postlohne");
        break;
    }
    case 255257:
    {
        returnValue = F("Postlücke");
        break;
    }
    case 255258:
    {
        returnValue = F("Postmeister-Steiner-Weg");
        break;
    }
    case 255259:
    {
        returnValue = F("Postmeisterstr.");
        break;
    }
    case 255260:
    {
        returnValue = F("Postmeisterweg");
        break;
    }
    case 255261:
    {
        returnValue = F("Postmoor");
        break;
    }
    case 255262:
    {
        returnValue = F("Postmoos");
        break;
    }
    case 255263:
    {
        returnValue = F("Postmähderweg");
        break;
    }
    case 255264:
    {
        returnValue = F("Postmünsterer Str.");
        break;
    }
    case 255265:
    {
        returnValue = F("Postpad");
        break;
    }
    case 255266:
    {
        returnValue = F("Postpark");
        break;
    }
    case 255267:
    {
        returnValue = F("Postpassage");
        break;
    }
    case 255268:
    {
        returnValue = F("Postpfad");
        break;
    }
    case 255269:
    {
        returnValue = F("Postplatz");
        break;
    }
    case 255270:
    {
        returnValue = F("Postr.");
        break;
    }
    case 255271:
    {
        returnValue = F("Postredder");
        break;
    }
    case 255272:
    {
        returnValue = F("Postreihe");
        break;
    }
    case 255273:
    {
        returnValue = F("Postreit");
        break;
    }
    case 255274:
    {
        returnValue = F("Postreiterweg");
        break;
    }
    case 255275:
    {
        returnValue = F("Postreith");
        break;
    }
    case 255276:
    {
        returnValue = F("Postreitweg");
        break;
    }
    case 255277:
    {
        returnValue = F("Postring");
        break;
    }
    case 255278:
    {
        returnValue = F("Postropsweg");
        break;
    }
    case 255279:
    {
        returnValue = F("Postschlüters Weg");
        break;
    }
    case 255280:
    {
        returnValue = F("Postschneise");
        break;
    }
    case 255281:
    {
        returnValue = F("Postsiedlung");
        break;
    }
    case 255282:
    {
        returnValue = F("Poststeg");
        break;
    }
    case 255283:
    {
        returnValue = F("Poststeig");
        break;
    }
    case 255284:
    {
        returnValue = F("Poststeige");
        break;
    }
    case 255285:
    {
        returnValue = F("Poststieg");
        break;
    }
    case 255286:
    {
        returnValue = F("Poststiege");
        break;
    }
    case 255287:
    {
        returnValue = F("Poststr.");
        break;
    }
    case 255288:
    {
        returnValue = F("Poststr. Nummer 20 a,b,c");
        break;
    }
    case 255289:
    {
        returnValue = F("Poststr.-Heerstr.");
        break;
    }
    case 255290:
    {
        returnValue = F("Poststrat");
        break;
    }
    case 255291:
    {
        returnValue = F("Poststroot");
        break;
    }
    case 255292:
    {
        returnValue = F("Poststräßle");
        break;
    }
    case 255293:
    {
        returnValue = F("Postsäulenweg");
        break;
    }
    case 255294:
    {
        returnValue = F("Postteichweg");
        break;
    }
    case 255295:
    {
        returnValue = F("Posttor");
        break;
    }
    case 255296:
    {
        returnValue = F("Postturmstr.");
        break;
    }
    case 255297:
    {
        returnValue = F("Postturmweg");
        break;
    }
    case 255298:
    {
        returnValue = F("Posttwete");
        break;
    }
    case 255299:
    {
        returnValue = F("Posttwiete");
        break;
    }
    case 255300:
    {
        returnValue = F("Postviertelweg");
        break;
    }
    case 255301:
    {
        returnValue = F("Postwai");
        break;
    }
    case 255302:
    {
        returnValue = F("Postweberweg");
        break;
    }
    case 255303:
    {
        returnValue = F("Postweg");
        break;
    }
    case 255304:
    {
        returnValue = F("Postweg (neu)");
        break;
    }
    case 255305:
    {
        returnValue = F("Postweg Nord");
        break;
    }
    case 255306:
    {
        returnValue = F("Postwegle");
        break;
    }
    case 255307:
    {
        returnValue = F("Postweilerweg");
        break;
    }
    case 255308:
    {
        returnValue = F("Postwiese");
        break;
    }
    case 255309:
    {
        returnValue = F("Postwiesenpfad");
        break;
    }
    case 255310:
    {
        returnValue = F("Postwiesenschneise");
        break;
    }
    case 255311:
    {
        returnValue = F("Postwiesenstr.");
        break;
    }
    case 255312:
    {
        returnValue = F("Postwiesenweg");
        break;
    }
    case 255313:
    {
        returnValue = F("Postwinkel");
        break;
    }
    case 255314:
    {
        returnValue = F("Postwirtstr.");
        break;
    }
    case 255315:
    {
        returnValue = F("Postwirtweg");
        break;
    }
    case 255316:
    {
        returnValue = F("Potaschenkopfweg");
        break;
    }
    case 255317:
    {
        returnValue = F("Potaschtalstr.");
        break;
    }
    case 255318:
    {
        returnValue = F("Potemannweg");
        break;
    }
    case 255319:
    {
        returnValue = F("Potenberg");
        break;
    }
    case 255320:
    {
        returnValue = F("Potenburger Weg");
        break;
    }
    case 255321:
    {
        returnValue = F("Potenhoff");
        break;
    }
    case 255322:
    {
        returnValue = F("Poterey");
        break;
    }
    case 255323:
    {
        returnValue = F("Potgeterstr.");
        break;
    }
    case 255324:
    {
        returnValue = F("Poth");
        break;
    }
    case 255325:
    {
        returnValue = F("Poth'scher Kamp");
        break;
    }
    case 255326:
    {
        returnValue = F("Pothhof");
        break;
    }
    case 255327:
    {
        returnValue = F("Pothmannshof");
        break;
    }
    case 255328:
    {
        returnValue = F("Pothmannstr.");
        break;
    }
    case 255329:
    {
        returnValue = F("Pothmannsweg");
        break;
    }
    case 255330:
    {
        returnValue = F("Pothofstr.");
        break;
    }
    case 255331:
    {
        returnValue = F("Poths Kreuz");
        break;
    }
    case 255332:
    {
        returnValue = F("Pothscher Hof");
        break;
    }
    case 255333:
    {
        returnValue = F("Potjörns Garten");
        break;
    }
    case 255334:
    {
        returnValue = F("Potmecker Weg");
        break;
    }
    case 255335:
    {
        returnValue = F("Potrasweg");
        break;
    }
    case 255336:
    {
        returnValue = F("Potschappler Str.");
        break;
    }
    case 255337:
    {
        returnValue = F("Potsdamer Allee");
        break;
    }
    case 255338:
    {
        returnValue = F("Potsdamer Chaussee");
        break;
    }
    case 255339:
    {
        returnValue = F("Potsdamer Damm");
        break;
    }
    case 255340:
    {
        returnValue = F("Potsdamer Kehre");
        break;
    }
    case 255341:
    {
        returnValue = F("Potsdamer Landstr.");
        break;
    }
    case 255342:
    {
        returnValue = F("Potsdamer Platz");
        break;
    }
    case 255343:
    {
        returnValue = F("Potsdamer Ring");
        break;
    }
    case 255344:
    {
        returnValue = F("Potsdamer Str.");
        break;
    }
    case 255345:
    {
        returnValue = F("Potsdamer Weg");
        break;
    }
    case 255346:
    {
        returnValue = F("Potsdamer Winkel");
        break;
    }
    case 255347:
    {
        returnValue = F("Potsdammer Platz");
        break;
    }
    case 255348:
    {
        returnValue = F("Potsdamstr.");
        break;
    }
    case 255349:
    {
        returnValue = F("Potshauser Str.");
        break;
    }
    case 255350:
    {
        returnValue = F("Pott's Holte");
        break;
    }
    case 255351:
    {
        returnValue = F("Pott-Jost-Brücke");
        break;
    }
    case 255352:
    {
        returnValue = F("Pottacker");
        break;
    }
    case 255353:
    {
        returnValue = F("Pottackerring");
        break;
    }
    case 255354:
    {
        returnValue = F("Pottackersweg");
        break;
    }
    case 255355:
    {
        returnValue = F("Pottaschenloch");
        break;
    }
    case 255356:
    {
        returnValue = F("Pottaschenweg");
        break;
    }
    case 255357:
    {
        returnValue = F("Pottaschhütte");
        break;
    }
    case 255358:
    {
        returnValue = F("Pottbackerslohne");
        break;
    }
    case 255359:
    {
        returnValue = F("Pottbaker Ring");
        break;
    }
    case 255360:
    {
        returnValue = F("Pottbecker Weg");
        break;
    }
    case 255361:
    {
        returnValue = F("Pottberg");
        break;
    }
    case 255362:
    {
        returnValue = F("Pottberghang");
        break;
    }
    case 255363:
    {
        returnValue = F("Pottberghöhe");
        break;
    }
    case 255364:
    {
        returnValue = F("Pottbergkrug");
        break;
    }
    case 255365:
    {
        returnValue = F("Pottbergsweg");
        break;
    }
    case 255366:
    {
        returnValue = F("Pottbolddamm");
        break;
    }
    case 255367:
    {
        returnValue = F("Pottbrink");
        break;
    }
    case 255368:
    {
        returnValue = F("Pottbäckerstr.");
        break;
    }
    case 255369:
    {
        returnValue = F("Pottbäckerweg");
        break;
    }
    case 255370:
    {
        returnValue = F("Pottebackerstr.");
        break;
    }
    case 255371:
    {
        returnValue = F("Pottegatt");
        break;
    }
    case 255372:
    {
        returnValue = F("Pottenau");
        break;
    }
    case 255373:
    {
        returnValue = F("Pottenberg");
        break;
    }
    case 255374:
    {
        returnValue = F("Pottendorfer Weg");
        break;
    }
    case 255375:
    {
        returnValue = F("Pottenhauser Str.");
        break;
    }
    case 255376:
    {
        returnValue = F("Pottenhof");
        break;
    }
    case 255377:
    {
        returnValue = F("Pottenmühlenweg");
        break;
    }
    case 255378:
    {
        returnValue = F("Pottenort");
        break;
    }
    case 255379:
    {
        returnValue = F("Pottensteiner Str.");
        break;
    }
    case 255380:
    {
        returnValue = F("Potterkuhle");
        break;
    }
    case 255381:
    {
        returnValue = F("Potters-Bar-Platz");
        break;
    }
    case 255382:
    {
        returnValue = F("Potterstr.");
        break;
    }
    case 255383:
    {
        returnValue = F("Pottgartenweg");
        break;
    }
    case 255384:
    {
        returnValue = F("Pottgasse");
        break;
    }
    case 255385:
    {
        returnValue = F("Pottgießers Pfad");
        break;
    }
    case 255386:
    {
        returnValue = F("Pottgießerstr.");
        break;
    }
    case 255387:
    {
        returnValue = F("Pottgraben");
        break;
    }
    case 255388:
    {
        returnValue = F("Pottgüterweg");
        break;
    }
    case 255389:
    {
        returnValue = F("Potthast-von-Minden-Str.");
        break;
    }
    case 255390:
    {
        returnValue = F("Potthastweg");
        break;
    }
    case 255391:
    {
        returnValue = F("Potthof");
        break;
    }
    case 255392:
    {
        returnValue = F("Potthoff");
        break;
    }
    case 255393:
    {
        returnValue = F("Potthoffshof");
        break;
    }
    case 255394:
    {
        returnValue = F("Potthoffskamp");
        break;
    }
    case 255395:
    {
        returnValue = F("Potthoffstr.");
        break;
    }
    case 255396:
    {
        returnValue = F("Potthoffweg");
        break;
    }
    case 255397:
    {
        returnValue = F("Potthofstr.");
        break;
    }
    case 255398:
    {
        returnValue = F("Potthofsweg");
        break;
    }
    case 255399:
    {
        returnValue = F("Potthofweg");
        break;
    }
    case 255400:
    {
        returnValue = F("Potthuslohne");
        break;
    }
    case 255401:
    {
        returnValue = F("Potthäger Damm");
        break;
    }
    case 255402:
    {
        returnValue = F("Pottkamp");
        break;
    }
    case 255403:
    {
        returnValue = F("Pottkuhlenweg");
        break;
    }
    case 255404:
    {
        returnValue = F("Pottlandstr.");
        break;
    }
    case 255405:
    {
        returnValue = F("Pottlehmplatz");
        break;
    }
    case 255406:
    {
        returnValue = F("Pottloch");
        break;
    }
    case 255407:
    {
        returnValue = F("Pottmagweg");
        break;
    }
    case 255408:
    {
        returnValue = F("Pottmeierweg");
        break;
    }
    case 255409:
    {
        returnValue = F("Pottmoor");
        break;
    }
    case 255410:
    {
        returnValue = F("Pottschapplitzer Str.");
        break;
    }
    case 255411:
    {
        returnValue = F("Pottschütt");
        break;
    }
    case 255412:
    {
        returnValue = F("Pottschütterweg");
        break;
    }
    case 255413:
    {
        returnValue = F("Pottskooten");
        break;
    }
    case 255414:
    {
        returnValue = F("Pottstiege");
        break;
    }
    case 255415:
    {
        returnValue = F("Pottstr.");
        break;
    }
    case 255416:
    {
        returnValue = F("Pottugäßchen");
        break;
    }
    case 255417:
    {
        returnValue = F("Pottumer Str.");
        break;
    }
    case 255418:
    {
        returnValue = F("Pottweg");
        break;
    }
    case 255419:
    {
        returnValue = F("Pottwiesenstr.");
        break;
    }
    case 255420:
    {
        returnValue = F("Pottwärder");
        break;
    }
    case 255421:
    {
        returnValue = F("Potzbergstr.");
        break;
    }
    case 255422:
    {
        returnValue = F("Potzemergarten");
        break;
    }
    case 255423:
    {
        returnValue = F("Potzener Str.");
        break;
    }
    case 255424:
    {
        returnValue = F("Potzenhof");
        break;
    }
    case 255425:
    {
        returnValue = F("Potzhofer Str.");
        break;
    }
    case 255426:
    {
        returnValue = F("Potzwenden");
        break;
    }
    case 255427:
    {
        returnValue = F("Poucher Dorfplatz");
        break;
    }
    case 255428:
    {
        returnValue = F("Poucher Hauptstr.");
        break;
    }
    case 255429:
    {
        returnValue = F("Poucher Weg");
        break;
    }
    case 255430:
    {
        returnValue = F("Pouilly-Brücke");
        break;
    }
    case 255431:
    {
        returnValue = F("Pouilly-Platz");
        break;
    }
    case 255432:
    {
        returnValue = F("Poujolsberg");
        break;
    }
    case 255433:
    {
        returnValue = F("Pousenberg");
        break;
    }
    case 255434:
    {
        returnValue = F("Poussiergässchen");
        break;
    }
    case 255435:
    {
        returnValue = F("Pouzauges Ring");
        break;
    }
    case 255436:
    {
        returnValue = F("Poveglianostr.");
        break;
    }
    case 255437:
    {
        returnValue = F("Povelstr.");
        break;
    }
    case 255438:
    {
        returnValue = F("Power Weg");
        break;
    }
    case 255439:
    {
        returnValue = F("Powundener Str.");
        break;
    }
    case 255440:
    {
        returnValue = F("Poxdorfer Str.");
        break;
    }
    case 255441:
    {
        returnValue = F("Poxdorfer Weg");
        break;
    }
    case 255442:
    {
        returnValue = F("Poxstall");
        break;
    }
    case 255443:
    {
        returnValue = F("Poyckstr.");
        break;
    }
    case 255444:
    {
        returnValue = F("Poyenberger Kamp");
        break;
    }
    case 255445:
    {
        returnValue = F("Poyenberger Weg");
        break;
    }
    case 255446:
    {
        returnValue = F("Poyenweg");
        break;
    }
    case 255447:
    {
        returnValue = F("Poysdorfer Str.");
        break;
    }
    case 255448:
    {
        returnValue = F("Poyßlstr.");
        break;
    }
    case 255449:
    {
        returnValue = F("Pozerner Weg");
        break;
    }
    case 255450:
    {
        returnValue = F("Poznaner Str.");
        break;
    }
    case 255451:
    {
        returnValue = F("Pozzistr.");
        break;
    }
    case 255452:
    {
        returnValue = F("Poßacker");
        break;
    }
    case 255453:
    {
        returnValue = F("Poßbergweg");
        break;
    }
    case 255454:
    {
        returnValue = F("Poßfeld");
        break;
    }
    case 255455:
    {
        returnValue = F("Poßkamp");
        break;
    }
    case 255456:
    {
        returnValue = F("Poßweg");
        break;
    }
    case 255457:
    {
        returnValue = F("Pr.-Ströher-Allee");
        break;
    }
    case 255458:
    {
        returnValue = F("Prachaticer Str.");
        break;
    }
    case 255459:
    {
        returnValue = F("Prachatitzer Str.");
        break;
    }
    case 255460:
    {
        returnValue = F("Prachatitzstr.");
        break;
    }
    case 255461:
    {
        returnValue = F("Prachenau");
        break;
    }
    case 255462:
    {
        returnValue = F("Pracherbusch");
        break;
    }
    case 255463:
    {
        returnValue = F("Pracherdamm");
        break;
    }
    case 255464:
    {
        returnValue = F("Pracherstieg");
        break;
    }
    case 255465:
    {
        returnValue = F("Pracherstr.");
        break;
    }
    case 255466:
    {
        returnValue = F("Pracherweg");
        break;
    }
    case 255467:
    {
        returnValue = F("Prachritzer Str.");
        break;
    }
    case 255468:
    {
        returnValue = F("Prachter Str.");
        break;
    }
    case 255469:
    {
        returnValue = F("Prachterdiek");
        break;
    }
    case 255470:
    {
        returnValue = F("Prachterstr.");
        break;
    }
    case 255471:
    {
        returnValue = F("Prachtstauden und Sommerblumen");
        break;
    }
    case 255472:
    {
        returnValue = F("Prachtstr.");
        break;
    }
    case 255473:
    {
        returnValue = F("Prachweg");
        break;
    }
    case 255474:
    {
        returnValue = F("Prackendorf");
        break;
    }
    case 255475:
    {
        returnValue = F("Prackenfelser Str.");
        break;
    }
    case 255476:
    {
        returnValue = F("Prader Str.");
        break;
    }
    case 255477:
    {
        returnValue = F("Pradestr.");
        break;
    }
    case 255478:
    {
        returnValue = F("Prading");
        break;
    }
    case 255479:
    {
        returnValue = F("Praestsches Feld");
        break;
    }
    case 255480:
    {
        returnValue = F("Praetoriusbogen");
        break;
    }
    case 255481:
    {
        returnValue = F("Praetoriusstr.");
        break;
    }
    case 255482:
    {
        returnValue = F("Praetoriusweg");
        break;
    }
    case 255483:
    {
        returnValue = F("Pragelastr.");
        break;
    }
    case 255484:
    {
        returnValue = F("Pragelatostr.");
        break;
    }
    case 255485:
    {
        returnValue = F("Prager Allee");
        break;
    }
    case 255486:
    {
        returnValue = F("Prager Gasse");
        break;
    }
    case 255487:
    {
        returnValue = F("Prager Ring");
        break;
    }
    case 255488:
    {
        returnValue = F("Prager Schulstr.");
        break;
    }
    case 255489:
    {
        returnValue = F("Prager Str.");
        break;
    }
    case 255490:
    {
        returnValue = F("Prager Weg");
        break;
    }
    case 255491:
    {
        returnValue = F("Pragerbauern-Gäßchen");
        break;
    }
    case 255492:
    {
        returnValue = F("Pragpaul");
        break;
    }
    case 255493:
    {
        returnValue = F("Pragstr.");
        break;
    }
    case 255494:
    {
        returnValue = F("Prahlbreite");
        break;
    }
    case 255495:
    {
        returnValue = F("Prahlsdorfer Weg");
        break;
    }
    case 255496:
    {
        returnValue = F("Prahlstr.");
        break;
    }
    case 255497:
    {
        returnValue = F("Prahmstr.");
        break;
    }
    case 255498:
    {
        returnValue = F("Prahmweg");
        break;
    }
    case 255499:
    {
        returnValue = F("Praidenloherstr.");
        break;
    }
    case 255500:
    {
        returnValue = F("Praklastr.");
        break;
    }
    case 255501:
    {
        returnValue = F("Pralistr.");
        break;
    }
    case 255502:
    {
        returnValue = F("Praliweg");
        break;
    }
    case 255503:
    {
        returnValue = F("Pramersbuch");
        break;
    }
    case 255504:
    {
        returnValue = F("Pramestr.");
        break;
    }
    case 255505:
    {
        returnValue = F("Pramsdorfer Str.");
        break;
    }
    case 255506:
    {
        returnValue = F("Pramsdorfer Weg");
        break;
    }
    case 255507:
    {
        returnValue = F("Pramwinkl");
        break;
    }
    case 255508:
    {
        returnValue = F("Pranckhstr.");
        break;
    }
    case 255509:
    {
        returnValue = F("Prandtlstr.");
        break;
    }
    case 255510:
    {
        returnValue = F("Prandtnerstr.");
        break;
    }
    case 255511:
    {
        returnValue = F("Prangelweg");
        break;
    }
    case 255512:
    {
        returnValue = F("Prangenberg");
        break;
    }
    case 255513:
    {
        returnValue = F("Prangenkopfweg");
        break;
    }
    case 255514:
    {
        returnValue = F("Prangenweg");
        break;
    }
    case 255515:
    {
        returnValue = F("Pranger Str.");
        break;
    }
    case 255516:
    {
        returnValue = F("Prangerkotten");
        break;
    }
    case 255517:
    {
        returnValue = F("Prangertshof");
        break;
    }
    case 255518:
    {
        returnValue = F("Prangerweg");
        break;
    }
    case 255519:
    {
        returnValue = F("Pranges Garten");
        break;
    }
    case 255520:
    {
        returnValue = F("Prangstr.");
        break;
    }
    case 255521:
    {
        returnValue = F("Pranitzer Str.");
        break;
    }
    case 255522:
    {
        returnValue = F("Pranitzer Weg");
        break;
    }
    case 255523:
    {
        returnValue = F("Prankelstr.");
        break;
    }
    case 255524:
    {
        returnValue = F("Prappacher Str.");
        break;
    }
    case 255525:
    {
        returnValue = F("Prarostinoweg");
        break;
    }
    case 255526:
    {
        returnValue = F("Praschweg");
        break;
    }
    case 255527:
    {
        returnValue = F("Praschwitzer Weg");
        break;
    }
    case 255528:
    {
        returnValue = F("Prasdörper Wegg");
        break;
    }
    case 255529:
    {
        returnValue = F("Prassenhof");
        break;
    }
    case 255530:
    {
        returnValue = F("Prasserbergweg");
        break;
    }
    case 255531:
    {
        returnValue = F("Pratauer Bergstr.");
        break;
    }
    case 255532:
    {
        returnValue = F("Pratauer Feldstr.");
        break;
    }
    case 255533:
    {
        returnValue = F("Pratauer Gartenstr.");
        break;
    }
    case 255534:
    {
        returnValue = F("Pratauer Lindenstr.");
        break;
    }
    case 255535:
    {
        returnValue = F("Pratauer Mittelstr.");
        break;
    }
    case 255536:
    {
        returnValue = F("Pratauer Mühlweg");
        break;
    }
    case 255537:
    {
        returnValue = F("Pratauer Rosenweg");
        break;
    }
    case 255538:
    {
        returnValue = F("Pratauer Schulstr.");
        break;
    }
    case 255539:
    {
        returnValue = F("Pratauer Str.");
        break;
    }
    case 255540:
    {
        returnValue = F("Pratauer Südstr.");
        break;
    }
    case 255541:
    {
        returnValue = F("Pratauer Winkel");
        break;
    }
    case 255542:
    {
        returnValue = F("Praterschütz");
        break;
    }
    case 255543:
    {
        returnValue = F("Praterweg");
        break;
    }
    case 255544:
    {
        returnValue = F("Pratjestr.");
        break;
    }
    case 255545:
    {
        returnValue = F("Pratjeweg");
        break;
    }
    case 255546:
    {
        returnValue = F("Prato-Str.");
        break;
    }
    case 255547:
    {
        returnValue = F("Pratschütz");
        break;
    }
    case 255548:
    {
        returnValue = F("Prattelner Str.");
        break;
    }
    case 255549:
    {
        returnValue = F("Prattenborgweg");
        break;
    }
    case 255550:
    {
        returnValue = F("Prattendorfer Weg");
        break;
    }
    case 255551:
    {
        returnValue = F("Prattwinkel");
        break;
    }
    case 255552:
    {
        returnValue = F("Pratzschwitzer Allee");
        break;
    }
    case 255553:
    {
        returnValue = F("Pratzschwitzer Str.");
        break;
    }
    case 255554:
    {
        returnValue = F("Prauneckgasse");
        break;
    }
    case 255555:
    {
        returnValue = F("Praunheimer Weg");
        break;
    }
    case 255556:
    {
        returnValue = F("Prausitzer Str.");
        break;
    }
    case 255557:
    {
        returnValue = F("Prausitzer Weg");
        break;
    }
    case 255558:
    {
        returnValue = F("Prausnitzer Str.");
        break;
    }
    case 255559:
    {
        returnValue = F("Praßbergstr.");
        break;
    }
    case 255560:
    {
        returnValue = F("Praßerstr.");
        break;
    }
    case 255561:
    {
        returnValue = F("Praßreuter Str.");
        break;
    }
    case 255562:
    {
        returnValue = F("Praël-Str.");
        break;
    }
    case 255563:
    {
        returnValue = F("Prebelow");
        break;
    }
    case 255564:
    {
        returnValue = F("Prebitzer Str.");
        break;
    }
    case 255565:
    {
        returnValue = F("Prebrunnallee");
        break;
    }
    case 255566:
    {
        returnValue = F("Prebrunnstr.");
        break;
    }
    case 255567:
    {
        returnValue = F("Prechtberg");
        break;
    }
    case 255568:
    {
        returnValue = F("Prechtlmühlstr.");
        break;
    }
    case 255569:
    {
        returnValue = F("Prechtlstr.");
        break;
    }
    case 255570:
    {
        returnValue = F("Prechtweg");
        break;
    }
    case 255571:
    {
        returnValue = F("Precyring");
        break;
    }
    case 255572:
    {
        returnValue = F("Predazzoallee");
        break;
    }
    case 255573:
    {
        returnValue = F("Preddöhler Str.");
        break;
    }
    case 255574:
    {
        returnValue = F("Preddöhler Weg");
        break;
    }
    case 255575:
    {
        returnValue = F("Predel");
        break;
    }
    case 255576:
    {
        returnValue = F("Predigergasse");
        break;
    }
    case 255577:
    {
        returnValue = F("Predigergäßle");
        break;
    }
    case 255578:
    {
        returnValue = F("Predigerplatz");
        break;
    }
    case 255579:
    {
        returnValue = F("Predigersteig");
        break;
    }
    case 255580:
    {
        returnValue = F("Predigerstr.");
        break;
    }
    case 255581:
    {
        returnValue = F("Predigerweg");
        break;
    }
    case 255582:
    {
        returnValue = F("Predigtstuhl-Passage");
        break;
    }
    case 255583:
    {
        returnValue = F("Predigtstuhlring");
        break;
    }
    case 255584:
    {
        returnValue = F("Predigtstuhlstr.");
        break;
    }
    case 255585:
    {
        returnValue = F("Predöhl");
        break;
    }
    case 255586:
    {
        returnValue = F("Predöhlstr.");
        break;
    }
    case 255587:
    {
        returnValue = F("Preefelder Weg");
        break;
    }
    case 255588:
    {
        returnValue = F("Preenweg");
        break;
    }
    case 255589:
    {
        returnValue = F("Preesterbarg");
        break;
    }
    case 255590:
    {
        returnValue = F("Preestergang");
        break;
    }
    case 255591:
    {
        returnValue = F("Preesterkoppel");
        break;
    }
    case 255592:
    {
        returnValue = F("Preesterstieg");
        break;
    }
    case 255593:
    {
        returnValue = F("Preesterstraat");
        break;
    }
    case 255594:
    {
        returnValue = F("Preetz");
        break;
    }
    case 255595:
    {
        returnValue = F("Preetz-Dorfstr.");
        break;
    }
    case 255596:
    {
        returnValue = F("Preetzen");
        break;
    }
    case 255597:
    {
        returnValue = F("Preetzer Chaussee");
        break;
    }
    case 255598:
    {
        returnValue = F("Preetzer Landstr.");
        break;
    }
    case 255599:
    {
        returnValue = F("Preetzer Redder");
        break;
    }
    case 255600:
    {
        returnValue = F("Preetzer Str.");
        break;
    }
    case 255601:
    {
        returnValue = F("Preetzer Weg");
        break;
    }
    case 255602:
    {
        returnValue = F("Prefagstr.");
        break;
    }
    case 255603:
    {
        returnValue = F("Pregelstr.");
        break;
    }
    case 255604:
    {
        returnValue = F("Pregelweg");
        break;
    }
    case 255605:
    {
        returnValue = F("Pregemühle");
        break;
    }
    case 255606:
    {
        returnValue = F("Pregenrothweg");
        break;
    }
    case 255607:
    {
        returnValue = F("Preggelende");
        break;
    }
    case 255608:
    {
        returnValue = F("Pregizergasse");
        break;
    }
    case 255609:
    {
        returnValue = F("Pregizerstr.");
        break;
    }
    case 255610:
    {
        returnValue = F("Preglerstr.");
        break;
    }
    case 255611:
    {
        returnValue = F("Preglerweg");
        break;
    }
    case 255612:
    {
        returnValue = F("Prehlis");
        break;
    }
    case 255613:
    {
        returnValue = F("Prehlitzer Anger");
        break;
    }
    case 255614:
    {
        returnValue = F("Prehna");
        break;
    }
    case 255615:
    {
        returnValue = F("Prehnsfelde");
        break;
    }
    case 255616:
    {
        returnValue = F("Prehnsfelder Weg");
        break;
    }
    case 255617:
    {
        returnValue = F("Prehnshorst");
        break;
    }
    case 255618:
    {
        returnValue = F("Prehnskamp");
        break;
    }
    case 255619:
    {
        returnValue = F("Preilacker Weg");
        break;
    }
    case 255620:
    {
        returnValue = F("Preilipper Str.");
        break;
    }
    case 255621:
    {
        returnValue = F("Preinersdorfstr.");
        break;
    }
    case 255622:
    {
        returnValue = F("Preinhok");
        break;
    }
    case 255623:
    {
        returnValue = F("Preinstr.");
        break;
    }
    case 255624:
    {
        returnValue = F("Preintinger Str.");
        break;
    }
    case 255625:
    {
        returnValue = F("Preisbergstr.");
        break;
    }
    case 255626:
    {
        returnValue = F("Preisdorfer Str.");
        break;
    }
    case 255627:
    {
        returnValue = F("Preiselbeerenweg");
        break;
    }
    case 255628:
    {
        returnValue = F("Preiselbeerweg");
        break;
    }
    case 255629:
    {
        returnValue = F("Preisenberg");
        break;
    }
    case 255630:
    {
        returnValue = F("Preisenberger Weg");
        break;
    }
    case 255631:
    {
        returnValue = F("Preisendorfer Feld");
        break;
    }
    case 255632:
    {
        returnValue = F("Preisenfeldweg");
        break;
    }
    case 255633:
    {
        returnValue = F("Preisengasse");
        break;
    }
    case 255634:
    {
        returnValue = F("Preiserweg");
        break;
    }
    case 255635:
    {
        returnValue = F("Preisingerlohweg");
        break;
    }
    case 255636:
    {
        returnValue = F("Preisingerweg");
        break;
    }
    case 255637:
    {
        returnValue = F("Preissbachtal");
        break;
    }
    case 255638:
    {
        returnValue = F("Preisstr.");
        break;
    }
    case 255639:
    {
        returnValue = F("Preister Moor");
        break;
    }
    case 255640:
    {
        returnValue = F("Preister Str.");
        break;
    }
    case 255641:
    {
        returnValue = F("Preisterkamp");
        break;
    }
    case 255642:
    {
        returnValue = F("Preititzer Str.");
        break;
    }
    case 255643:
    {
        returnValue = F("Preitnacherweg");
        break;
    }
    case 255644:
    {
        returnValue = F("Preißach");
        break;
    }
    case 255645:
    {
        returnValue = F("Preißacher Str.");
        break;
    }
    case 255646:
    {
        returnValue = F("Preißelbeerweg");
        break;
    }
    case 255647:
    {
        returnValue = F("Preißhausstr.");
        break;
    }
    case 255648:
    {
        returnValue = F("Prekerstr.");
        break;
    }
    case 255649:
    {
        returnValue = F("Prelitz");
        break;
    }
    case 255650:
    {
        returnValue = F("Prellen");
        break;
    }
    case 255651:
    {
        returnValue = F("Prellergasse");
        break;
    }
    case 255652:
    {
        returnValue = F("Prellerpromenade");
        break;
    }
    case 255653:
    {
        returnValue = F("Prellerstr.");
        break;
    }
    case 255654:
    {
        returnValue = F("Prellerweg");
        break;
    }
    case 255655:
    {
        returnValue = F("Prelles");
        break;
    }
    case 255656:
    {
        returnValue = F("Prellingerstr.");
        break;
    }
    case 255657:
    {
        returnValue = F("Prellstr.");
        break;
    }
    case 255658:
    {
        returnValue = F("Prellweg");
        break;
    }
    case 255659:
    {
        returnValue = F("Premacher Str.");
        break;
    }
    case 255660:
    {
        returnValue = F("Premacher Weg");
        break;
    }
    case 255661:
    {
        returnValue = F("Premauerstr.");
        break;
    }
    case 255662:
    {
        returnValue = F("Premberger Str.");
        break;
    }
    case 255663:
    {
        returnValue = F("Premberger Weg");
        break;
    }
    case 255664:
    {
        returnValue = F("Premenreuther Str.");
        break;
    }
    case 255665:
    {
        returnValue = F("Premer Str.");
        break;
    }
    case 255666:
    {
        returnValue = F("Premerzhofener Str.");
        break;
    }
    case 255667:
    {
        returnValue = F("Premicher Str.");
        break;
    }
    case 255668:
    {
        returnValue = F("Premischer Weg");
        break;
    }
    case 255669:
    {
        returnValue = F("Premiumweg P 13 Boyneburg");
        break;
    }
    case 255670:
    {
        returnValue = F("Premnitzer Str.");
        break;
    }
    case 255671:
    {
        returnValue = F("Premsdorf");
        break;
    }
    case 255672:
    {
        returnValue = F("Premsdorfer Weg");
        break;
    }
    case 255673:
    {
        returnValue = F("Premsendorf");
        break;
    }
    case 255674:
    {
        returnValue = F("Premsliner Str.");
        break;
    }
    case 255675:
    {
        returnValue = F("Prendener Allee");
        break;
    }
    case 255676:
    {
        returnValue = F("Prendener Dorfstr.");
        break;
    }
    case 255677:
    {
        returnValue = F("Prendener Str.");
        break;
    }
    case 255678:
    {
        returnValue = F("Prendener Weg");
        break;
    }
    case 255679:
    {
        returnValue = F("Prengers Padd");
        break;
    }
    case 255680:
    {
        returnValue = F("Prennerstr.");
        break;
    }
    case 255681:
    {
        returnValue = F("Prensdorf");
        break;
    }
    case 255682:
    {
        returnValue = F("Prentnerstr.");
        break;
    }
    case 255683:
    {
        returnValue = F("Prentstr.");
        break;
    }
    case 255684:
    {
        returnValue = F("Prenzlauer Allee");
        break;
    }
    case 255685:
    {
        returnValue = F("Prenzlauer Chaussee");
        break;
    }
    case 255686:
    {
        returnValue = F("Prenzlauer Str.");
        break;
    }
    case 255687:
    {
        returnValue = F("Prenzlauer Tor");
        break;
    }
    case 255688:
    {
        returnValue = F("Prenzlauer Weg");
        break;
    }
    case 255689:
    {
        returnValue = F("Prenzlauer-Berg-Str.");
        break;
    }
    case 255690:
    {
        returnValue = F("Prenzlerweg");
        break;
    }
    case 255691:
    {
        returnValue = F("Prepow");
        break;
    }
    case 255692:
    {
        returnValue = F("Preppach");
        break;
    }
    case 255693:
    {
        returnValue = F("Preppacher Str.");
        break;
    }
    case 255694:
    {
        returnValue = F("Prerower Ring");
        break;
    }
    case 255695:
    {
        returnValue = F("Prerower Str.");
        break;
    }
    case 255696:
    {
        returnValue = F("Presberstr.");
        break;
    }
    case 255697:
    {
        returnValue = F("Prescherstr.");
        break;
    }
    case 255698:
    {
        returnValue = F("Preschersträßle");
        break;
    }
    case 255699:
    {
        returnValue = F("Preschlin-Allee");
        break;
    }
    case 255700:
    {
        returnValue = F("Presen");
        break;
    }
    case 255701:
    {
        returnValue = F("Presenchener Weg");
        break;
    }
    case 255702:
    {
        returnValue = F("Presenske");
        break;
    }
    case 255703:
    {
        returnValue = F("Presles Str.");
        break;
    }
    case 255704:
    {
        returnValue = F("Presley Boulevard");
        break;
    }
    case 255705:
    {
        returnValue = F("Pressather Str.");
        break;
    }
    case 255706:
    {
        returnValue = F("Pressbroe");
        break;
    }
    case 255707:
    {
        returnValue = F("Pressburger Str.");
        break;
    }
    case 255708:
    {
        returnValue = F("Pressecker Str.");
        break;
    }
    case 255709:
    {
        returnValue = F("Presseler Str.");
        break;
    }
    case 255710:
    {
        returnValue = F("Presselstr.");
        break;
    }
    case 255711:
    {
        returnValue = F("Pressener Str.");
        break;
    }
    case 255712:
    {
        returnValue = F("Pressentinstr.");
        break;
    }
    case 255713:
    {
        returnValue = F("Pressestr.");
        break;
    }
    case 255714:
    {
        returnValue = F("Pressetunnel");
        break;
    }
    case 255715:
    {
        returnValue = F("Presseweg");
        break;
    }
    case 255716:
    {
        returnValue = F("Pressgrund");
        break;
    }
    case 255717:
    {
        returnValue = F("Pressnitzweg");
        break;
    }
    case 255718:
    {
        returnValue = F("Pressäcker");
        break;
    }
    case 255719:
    {
        returnValue = F("Prestelstr.");
        break;
    }
    case 255720:
    {
        returnValue = F("Presteneck");
        break;
    }
    case 255721:
    {
        returnValue = F("Presteneckerkopf-Weg");
        break;
    }
    case 255722:
    {
        returnValue = F("Prester-Privatweg");
        break;
    }
    case 255723:
    {
        returnValue = F("Presterkoppel");
        break;
    }
    case 255724:
    {
        returnValue = F("Prestermüssen");
        break;
    }
    case 255725:
    {
        returnValue = F("Prestonstr.");
        break;
    }
    case 255726:
    {
        returnValue = F("Prestwickstr.");
        break;
    }
    case 255727:
    {
        returnValue = F("Prethtalstr.");
        break;
    }
    case 255728:
    {
        returnValue = F("Pretlackstr.");
        break;
    }
    case 255729:
    {
        returnValue = F("Pretschergasse");
        break;
    }
    case 255730:
    {
        returnValue = F("Prettelshofer Str.");
        break;
    }
    case 255731:
    {
        returnValue = F("Pretterweg");
        break;
    }
    case 255732:
    {
        returnValue = F("Prettiner Landstr.");
        break;
    }
    case 255733:
    {
        returnValue = F("Prettiner Str.");
        break;
    }
    case 255734:
    {
        returnValue = F("Prettlackschneise");
        break;
    }
    case 255735:
    {
        returnValue = F("Pretzabruck");
        break;
    }
    case 255736:
    {
        returnValue = F("Pretzer Str.");
        break;
    }
    case 255737:
    {
        returnValue = F("Pretzfelder Kirschenweg");
        break;
    }
    case 255738:
    {
        returnValue = F("Pretzfelder Str.");
        break;
    }
    case 255739:
    {
        returnValue = F("Pretziener Str.");
        break;
    }
    case 255740:
    {
        returnValue = F("Pretziener Weg");
        break;
    }
    case 255741:
    {
        returnValue = F("Pretzierer Dorfstr.");
        break;
    }
    case 255742:
    {
        returnValue = F("Pretzierer Str.");
        break;
    }
    case 255743:
    {
        returnValue = F("Pretzschendorfer Str.");
        break;
    }
    case 255744:
    {
        returnValue = F("Pretzscher Allee");
        break;
    }
    case 255745:
    {
        returnValue = F("Pretzscher Str.");
        break;
    }
    case 255746:
    {
        returnValue = F("Pretzscher Talweg");
        break;
    }
    case 255747:
    {
        returnValue = F("Preulgasse");
        break;
    }
    case 255748:
    {
        returnValue = F("Preulstr.");
        break;
    }
    case 255749:
    {
        returnValue = F("Preungesheimer Weg");
        break;
    }
    case 255750:
    {
        returnValue = F("Preunschener Str.");
        break;
    }
    case 255751:
    {
        returnValue = F("Preunschener Weg");
        break;
    }
    case 255752:
    {
        returnValue = F("Preusch");
        break;
    }
    case 255753:
    {
        returnValue = F("Preuschelweg");
        break;
    }
    case 255754:
    {
        returnValue = F("Preuscher Str.");
        break;
    }
    case 255755:
    {
        returnValue = F("Preuschlwiesen");
        break;
    }
    case 255756:
    {
        returnValue = F("Preuschwitzer Str.");
        break;
    }
    case 255757:
    {
        returnValue = F("Preuschwitzer Weg");
        break;
    }
    case 255758:
    {
        returnValue = F("Preuskerstr.");
        break;
    }
    case 255759:
    {
        returnValue = F("Preussagstr.");
        break;
    }
    case 255760:
    {
        returnValue = F("Preussenstr. 10 - 18");
        break;
    }
    case 255761:
    {
        returnValue = F("Preussenweg");
        break;
    }
    case 255762:
    {
        returnValue = F("Preusweg");
        break;
    }
    case 255763:
    {
        returnValue = F("Preuß-Siedlung");
        break;
    }
    case 255764:
    {
        returnValue = F("Preußborn");
        break;
    }
    case 255765:
    {
        returnValue = F("Preußenallee");
        break;
    }
    case 255766:
    {
        returnValue = F("Preußenburg");
        break;
    }
    case 255767:
    {
        returnValue = F("Preußendamm");
        break;
    }
    case 255768:
    {
        returnValue = F("Preußeneck");
        break;
    }
    case 255769:
    {
        returnValue = F("Preußengasse");
        break;
    }
    case 255770:
    {
        returnValue = F("Preußenhäusle");
        break;
    }
    case 255771:
    {
        returnValue = F("Preußenkoppel");
        break;
    }
    case 255772:
    {
        returnValue = F("Preußenmarkt");
        break;
    }
    case 255773:
    {
        returnValue = F("Preußenplatz");
        break;
    }
    case 255774:
    {
        returnValue = F("Preußenring");
        break;
    }
    case 255775:
    {
        returnValue = F("Preußenschneise");
        break;
    }
    case 255776:
    {
        returnValue = F("Preußensteg");
        break;
    }
    case 255777:
    {
        returnValue = F("Preußenstr.");
        break;
    }
    case 255778:
    {
        returnValue = F("Preußenteile");
        break;
    }
    case 255779:
    {
        returnValue = F("Preußenweg");
        break;
    }
    case 255780:
    {
        returnValue = F("Preußerstr.");
        break;
    }
    case 255781:
    {
        returnValue = F("Preußhofweg");
        break;
    }
    case 255782:
    {
        returnValue = F("Preußisch Oldendorfer Bergstr.");
        break;
    }
    case 255783:
    {
        returnValue = F("Preußisch-Eylau-Str.");
        break;
    }
    case 255784:
    {
        returnValue = F("Preußisch-Holland-Str.");
        break;
    }
    case 255785:
    {
        returnValue = F("Preußischer Hut");
        break;
    }
    case 255786:
    {
        returnValue = F("Preußlitzer Str.");
        break;
    }
    case 255787:
    {
        returnValue = F("Preußnitz");
        break;
    }
    case 255788:
    {
        returnValue = F("Preußnitzer Str.");
        break;
    }
    case 255789:
    {
        returnValue = F("Preußstr.");
        break;
    }
    case 255790:
    {
        returnValue = F("Prevorster Str.");
        break;
    }
    case 255791:
    {
        returnValue = F("Prevorster Weg");
        break;
    }
    case 255792:
    {
        returnValue = F("Prex");
        break;
    }
    case 255793:
    {
        returnValue = F("Prexer Weg");
        break;
    }
    case 255794:
    {
        returnValue = F("Preyersmühle");
        break;
    }
    case 255795:
    {
        returnValue = F("Preyerstr.");
        break;
    }
    case 255796:
    {
        returnValue = F("Preysing Geräumt");
        break;
    }
    case 255797:
    {
        returnValue = F("Preysing-Allee");
        break;
    }
    case 255798:
    {
        returnValue = F("Preysingplatz");
        break;
    }
    case 255799:
    {
        returnValue = F("Preysingstr.");
        break;
    }
    case 255800:
    {
        returnValue = F("Preyßstr.");
        break;
    }
    case 255801:
    {
        returnValue = F("Prezelle Siedlung");
        break;
    }
    case 255802:
    {
        returnValue = F("Prezeller Str");
        break;
    }
    case 255803:
    {
        returnValue = F("Prezeller Str.");
        break;
    }
    case 255804:
    {
        returnValue = F("Prezeller Weg");
        break;
    }
    case 255805:
    {
        returnValue = F("Preß");
        break;
    }
    case 255806:
    {
        returnValue = F("Preßburger Str.");
        break;
    }
    case 255807:
    {
        returnValue = F("Preßgasse");
        break;
    }
    case 255808:
    {
        returnValue = F("Preßlich");
        break;
    }
    case 255809:
    {
        returnValue = F("Preßling");
        break;
    }
    case 255810:
    {
        returnValue = F("Preßnitzer Str.");
        break;
    }
    case 255811:
    {
        returnValue = F("Preßnitztalstr.");
        break;
    }
    case 255812:
    {
        returnValue = F("Preßnitzweg");
        break;
    }
    case 255813:
    {
        returnValue = F("Preßstr.");
        break;
    }
    case 255814:
    {
        returnValue = F("Preßwitzer Str.");
        break;
    }
    case 255815:
    {
        returnValue = F("Prešover Str.");
        break;
    }
    case 255816:
    {
        returnValue = F("Priamosstr.");
        break;
    }
    case 255817:
    {
        returnValue = F("Pribbenow");
        break;
    }
    case 255818:
    {
        returnValue = F("Pribbenower Str.");
        break;
    }
    case 255819:
    {
        returnValue = F("Pribbenower Weg");
        break;
    }
    case 255820:
    {
        returnValue = F("Priborner Str.");
        break;
    }
    case 255821:
    {
        returnValue = F("Prichsenstädter Str.");
        break;
    }
    case 255822:
    {
        returnValue = F("Prickartzweg");
        break;
    }
    case 255823:
    {
        returnValue = F("Prickelend");
        break;
    }
    case 255824:
    {
        returnValue = F("Prickenweg");
        break;
    }
    case 255825:
    {
        returnValue = F("Pricker Str.");
        break;
    }
    case 255826:
    {
        returnValue = F("Priebuser Str.");
        break;
    }
    case 255827:
    {
        returnValue = F("Prieche");
        break;
    }
    case 255828:
    {
        returnValue = F("Priedel");
        break;
    }
    case 255829:
    {
        returnValue = F("Priedelrundweg");
        break;
    }
    case 255830:
    {
        returnValue = F("Priedelweg");
        break;
    }
    case 255831:
    {
        returnValue = F("Priefeler Str.");
        break;
    }
    case 255832:
    {
        returnValue = F("Prieferstr.");
        break;
    }
    case 255833:
    {
        returnValue = F("Priegendorfer Str.");
        break;
    }
    case 255834:
    {
        returnValue = F("Priegendorfer Weg");
        break;
    }
    case 255835:
    {
        returnValue = F("Priegnitz");
        break;
    }
    case 255836:
    {
        returnValue = F("Priehlweg");
        break;
    }
    case 255837:
    {
        returnValue = F("Priel");
        break;
    }
    case 255838:
    {
        returnValue = F("Prieler Str.");
        break;
    }
    case 255839:
    {
        returnValue = F("Prielfeldweg");
        break;
    }
    case 255840:
    {
        returnValue = F("Prielhofer Weg");
        break;
    }
    case 255841:
    {
        returnValue = F("Prielhofweg");
        break;
    }
    case 255842:
    {
        returnValue = F("Prielmayerstr.");
        break;
    }
    case 255843:
    {
        returnValue = F("Prielmayrstr.");
        break;
    }
    case 255844:
    {
        returnValue = F("Prielstr.");
        break;
    }
    case 255845:
    {
        returnValue = F("Prielweg");
        break;
    }
    case 255846:
    {
        returnValue = F("Prielwirtstr.");
        break;
    }
    case 255847:
    {
        returnValue = F("Priemelsfehn");
        break;
    }
    case 255848:
    {
        returnValue = F("Priemen");
        break;
    }
    case 255849:
    {
        returnValue = F("Priemenstr.");
        break;
    }
    case 255850:
    {
        returnValue = F("Priemer Str.");
        break;
    }
    case 255851:
    {
        returnValue = F("Priemershof");
        break;
    }
    case 255852:
    {
        returnValue = F("Priemershofer Weg");
        break;
    }
    case 255853:
    {
        returnValue = F("Priemitzstr.");
        break;
    }
    case 255854:
    {
        returnValue = F("Priener Str.");
        break;
    }
    case 255855:
    {
        returnValue = F("Prienfeldstr.");
        break;
    }
    case 255856:
    {
        returnValue = F("Prienstr.");
        break;
    }
    case 255857:
    {
        returnValue = F("Prientalweg");
        break;
    }
    case 255858:
    {
        returnValue = F("Prienzing-Siedlung");
        break;
    }
    case 255859:
    {
        returnValue = F("Prienzing-Tradl");
        break;
    }
    case 255860:
    {
        returnValue = F("Prieperter Landstr.");
        break;
    }
    case 255861:
    {
        returnValue = F("Prieperter Weg");
        break;
    }
    case 255862:
    {
        returnValue = F("Prieroser Dorfaue");
        break;
    }
    case 255863:
    {
        returnValue = F("Prieroser Dorfstr.");
        break;
    }
    case 255864:
    {
        returnValue = F("Prieroser Landstr.");
        break;
    }
    case 255865:
    {
        returnValue = F("Prieroser Str.");
        break;
    }
    case 255866:
    {
        returnValue = F("Prieroser Weg");
        break;
    }
    case 255867:
    {
        returnValue = F("Prierowseestr.");
        break;
    }
    case 255868:
    {
        returnValue = F("Priesa");
        break;
    }
    case 255869:
    {
        returnValue = F("Prieschkaer Weg");
        break;
    }
    case 255870:
    {
        returnValue = F("Priesdorfer Str.");
        break;
    }
    case 255871:
    {
        returnValue = F("Priesen");
        break;
    }
    case 255872:
    {
        returnValue = F("Priesener Anger");
        break;
    }
    case 255873:
    {
        returnValue = F("Priesener Dorfstr.");
        break;
    }
    case 255874:
    {
        returnValue = F("Priesenthal");
        break;
    }
    case 255875:
    {
        returnValue = F("Priesenweg");
        break;
    }
    case 255876:
    {
        returnValue = F("Prieserstr.");
        break;
    }
    case 255877:
    {
        returnValue = F("Priesholz");
        break;
    }
    case 255878:
    {
        returnValue = F("Priesholzmühle");
        break;
    }
    case 255879:
    {
        returnValue = F("Priesitz");
        break;
    }
    case 255880:
    {
        returnValue = F("Prieskamp");
        break;
    }
    case 255881:
    {
        returnValue = F("Priesner Weg");
        break;
    }
    case 255882:
    {
        returnValue = F("Priesteblicher Str.");
        break;
    }
    case 255883:
    {
        returnValue = F("Priesterath");
        break;
    }
    case 255884:
    {
        returnValue = F("Priesterbach");
        break;
    }
    case 255885:
    {
        returnValue = F("Priesterbrink");
        break;
    }
    case 255886:
    {
        returnValue = F("Priesterbrücke");
        break;
    }
    case 255887:
    {
        returnValue = F("Priesterei");
        break;
    }
    case 255888:
    {
        returnValue = F("Priestergasse");
        break;
    }
    case 255889:
    {
        returnValue = F("Priesterkoppel");
        break;
    }
    case 255890:
    {
        returnValue = F("Priesterpfuhl");
        break;
    }
    case 255891:
    {
        returnValue = F("Priesterrain");
        break;
    }
    case 255892:
    {
        returnValue = F("Priesterredder");
        break;
    }
    case 255893:
    {
        returnValue = F("Priesters Hof");
        break;
    }
    case 255894:
    {
        returnValue = F("Priestersberg");
        break;
    }
    case 255895:
    {
        returnValue = F("Priestershof");
        break;
    }
    case 255896:
    {
        returnValue = F("Priestersteig");
        break;
    }
    case 255897:
    {
        returnValue = F("Priesterstr.");
        break;
    }
    case 255898:
    {
        returnValue = F("Priestertoft");
        break;
    }
    case 255899:
    {
        returnValue = F("Priestertörle");
        break;
    }
    case 255900:
    {
        returnValue = F("Priesterweg");
        break;
    }
    case 255901:
    {
        returnValue = F("Priestewitzer Str.");
        break;
    }
    case 255902:
    {
        returnValue = F("Priestädt");
        break;
    }
    case 255903:
    {
        returnValue = F("Prietitzer Str.");
        break;
    }
    case 255904:
    {
        returnValue = F("Prietzener Dorfstr.");
        break;
    }
    case 255905:
    {
        returnValue = F("Prietzener Str.");
        break;
    }
    case 255906:
    {
        returnValue = F("Priewasserweg");
        break;
    }
    case 255907:
    {
        returnValue = F("Prieweg");
        break;
    }
    case 255908:
    {
        returnValue = F("Prießener Str.");
        break;
    }
    case 255909:
    {
        returnValue = F("Prießnitzblick");
        break;
    }
    case 255910:
    {
        returnValue = F("Prießnitzer Str.");
        break;
    }
    case 255911:
    {
        returnValue = F("Prießnitzhof");
        break;
    }
    case 255912:
    {
        returnValue = F("Prießnitzstr.");
        break;
    }
    case 255913:
    {
        returnValue = F("Prießnitztalstr.");
        break;
    }
    case 255914:
    {
        returnValue = F("Prießnitzweg");
        break;
    }
    case 255915:
    {
        returnValue = F("Priggenhagener Str.");
        break;
    }
    case 255916:
    {
        returnValue = F("Prignitzer Str.");
        break;
    }
    case 255917:
    {
        returnValue = F("Prignitzer Weg");
        break;
    }
    case 255918:
    {
        returnValue = F("Prignitzstr.");
        break;
    }
    case 255919:
    {
        returnValue = F("Pril");
        break;
    }
    case 255920:
    {
        returnValue = F("Prillwitz");
        break;
    }
    case 255921:
    {
        returnValue = F("Prillwitzer Weg");
        break;
    }
    case 255922:
    {
        returnValue = F("Primanker Dorfstr.");
        break;
    }
    case 255923:
    {
        returnValue = F("Primariusgraben");
        break;
    }
    case 255924:
    {
        returnValue = F("Primbsenhof");
        break;
    }
    case 255925:
    {
        returnValue = F("Primelecke");
        break;
    }
    case 255926:
    {
        returnValue = F("Primelgasse");
        break;
    }
    case 255927:
    {
        returnValue = F("Primelnweg");
        break;
    }
    case 255928:
    {
        returnValue = F("Primelsteig");
        break;
    }
    case 255929:
    {
        returnValue = F("Primelstr.");
        break;
    }
    case 255930:
    {
        returnValue = F("Primelweg");
        break;
    }
    case 255931:
    {
        returnValue = F("Primengarten");
        break;
    }
    case 255932:
    {
        returnValue = F("Primer Str.");
        break;
    }
    case 255933:
    {
        returnValue = F("Primerburg");
        break;
    }
    case 255934:
    {
        returnValue = F("Primholzweg");
        break;
    }
    case 255935:
    {
        returnValue = F("Primianusplatz");
        break;
    }
    case 255936:
    {
        returnValue = F("Primianusstr.");
        break;
    }
    case 255937:
    {
        returnValue = F("Primkerstr.");
        break;
    }
    case 255938:
    {
        returnValue = F("Primmelwitz");
        break;
    }
    case 255939:
    {
        returnValue = F("Primmerbachweg");
        break;
    }
    case 255940:
    {
        returnValue = F("Primsaue");
        break;
    }
    case 255941:
    {
        returnValue = F("Primsener Weg");
        break;
    }
    case 255942:
    {
        returnValue = F("Primshallen Park");
        break;
    }
    case 255943:
    {
        returnValue = F("Primsstr.");
        break;
    }
    case 255944:
    {
        returnValue = F("Primstaler Panoramapfad");
        break;
    }
    case 255945:
    {
        returnValue = F("Primstaler Panoramaweg");
        break;
    }
    case 255946:
    {
        returnValue = F("Primstaler Str.");
        break;
    }
    case 255947:
    {
        returnValue = F("Primstalradweg");
        break;
    }
    case 255948:
    {
        returnValue = F("Primstalstr.");
        break;
    }
    case 255949:
    {
        returnValue = F("Primstr.");
        break;
    }
    case 255950:
    {
        returnValue = F("Primsweg");
        break;
    }
    case 255951:
    {
        returnValue = F("Primsweilerstr.");
        break;
    }
    case 255952:
    {
        returnValue = F("Primtalstr.");
        break;
    }
    case 255953:
    {
        returnValue = F("Primus-Truber-Str.");
        break;
    }
    case 255954:
    {
        returnValue = F("Primwiesen");
        break;
    }
    case 255955:
    {
        returnValue = F("Prinerberg");
        break;
    }
    case 255956:
    {
        returnValue = F("Pringy-Platz");
        break;
    }
    case 255957:
    {
        returnValue = F("Printzenhof");
        break;
    }
    case 255958:
    {
        returnValue = F("Printzstr.");
        break;
    }
    case 255959:
    {
        returnValue = F("Prinz Heinrich Platz");
        break;
    }
    case 255960:
    {
        returnValue = F("Prinz Max-Weg");
        break;
    }
    case 255961:
    {
        returnValue = F("Prinz Wilhelm Weg");
        break;
    }
    case 255962:
    {
        returnValue = F("Prinz-Adalbert-Str.");
        break;
    }
    case 255963:
    {
        returnValue = F("Prinz-Alexander-Str.");
        break;
    }
    case 255964:
    {
        returnValue = F("Prinz-Alfons-Allee");
        break;
    }
    case 255965:
    {
        returnValue = F("Prinz-Alfons-Str.");
        break;
    }
    case 255966:
    {
        returnValue = F("Prinz-Alfons-Weg");
        break;
    }
    case 255967:
    {
        returnValue = F("Prinz-Anselm-Allee");
        break;
    }
    case 255968:
    {
        returnValue = F("Prinz-Carl-Anlage");
        break;
    }
    case 255969:
    {
        returnValue = F("Prinz-Christians-Weg");
        break;
    }
    case 255970:
    {
        returnValue = F("Prinz-Claus-Str.");
        break;
    }
    case 255971:
    {
        returnValue = F("Prinz-Emil-Garten");
        break;
    }
    case 255972:
    {
        returnValue = F("Prinz-Emil-Schneise");
        break;
    }
    case 255973:
    {
        returnValue = F("Prinz-Eugen-Platz");
        break;
    }
    case 255974:
    {
        returnValue = F("Prinz-Eugen-Str.");
        break;
    }
    case 255975:
    {
        returnValue = F("Prinz-Eugen-Weg");
        break;
    }
    case 255976:
    {
        returnValue = F("Prinz-Ferdinand-Platz");
        break;
    }
    case 255977:
    {
        returnValue = F("Prinz-Ferdinand-Str.");
        break;
    }
    case 255978:
    {
        returnValue = F("Prinz-Friedrich-Allee");
        break;
    }
    case 255979:
    {
        returnValue = F("Prinz-Friedrich-Anlage");
        break;
    }
    case 255980:
    {
        returnValue = F("Prinz-Friedrich-Brücke");
        break;
    }
    case 255981:
    {
        returnValue = F("Prinz-Friedrich-Karl-Str.");
        break;
    }
    case 255982:
    {
        returnValue = F("Prinz-Fritzi-Allee");
        break;
    }
    case 255983:
    {
        returnValue = F("Prinz-Georg-Str.");
        break;
    }
    case 255984:
    {
        returnValue = F("Prinz-Heinrich-Str.");
        break;
    }
    case 255985:
    {
        returnValue = F("Prinz-Kari-Weg");
        break;
    }
    case 255986:
    {
        returnValue = F("Prinz-Karl-Allee");
        break;
    }
    case 255987:
    {
        returnValue = F("Prinz-Karl-Egon-Str.");
        break;
    }
    case 255988:
    {
        returnValue = F("Prinz-Karl-Geräumt");
        break;
    }
    case 255989:
    {
        returnValue = F("Prinz-Karl-Str.");
        break;
    }
    case 255990:
    {
        returnValue = F("Prinz-Louis-Ferdinand-Str.");
        break;
    }
    case 255991:
    {
        returnValue = F("Prinz-Ludwig-Str.");
        break;
    }
    case 255992:
    {
        returnValue = F("Prinz-Ludwig-Weg");
        break;
    }
    case 255993:
    {
        returnValue = F("Prinz-Luitpold-Str.");
        break;
    }
    case 255994:
    {
        returnValue = F("Prinz-Max-Allee");
        break;
    }
    case 255995:
    {
        returnValue = F("Prinz-Max-Str.");
        break;
    }
    case 255996:
    {
        returnValue = F("Prinz-Maximilian-zu-Wied-Str.");
        break;
    }
    case 255997:
    {
        returnValue = F("Prinz-Moritz-Park");
        break;
    }
    case 255998:
    {
        returnValue = F("Prinz-Moritz-Weg");
        break;
    }
    case 255999:
    {
        returnValue = F("Prinz-Otto-Str.");
        break;
    }
    case 256000:
    {
        returnValue = F("Prinz-Ratibor-Str.");
        break;
    }
    case 256001:
    {
        returnValue = F("Prinz-Rupprecht-Str.");
        break;
    }
    case 256002:
    {
        returnValue = F("Prinz-Schöller-Allee");
        break;
    }
    case 256003:
    {
        returnValue = F("Prinz-Viktor-Str.");
        break;
    }
    case 256004:
    {
        returnValue = F("Prinz-Weimar-Str.");
        break;
    }
    case 256005:
    {
        returnValue = F("Prinz-Wilhelm-Str.");
        break;
    }
    case 256006:
    {
        returnValue = F("Prinzbacher Str.");
        break;
    }
    case 256007:
    {
        returnValue = F("Prinzbachweg");
        break;
    }
    case 256008:
    {
        returnValue = F("Prinzen Hof");
        break;
    }
    case 256009:
    {
        returnValue = F("Prinzenacker");
        break;
    }
    case 256010:
    {
        returnValue = F("Prinzenapfelweg");
        break;
    }
    case 256011:
    {
        returnValue = F("Prinzenaue");
        break;
    }
    case 256012:
    {
        returnValue = F("Prinzenberg");
        break;
    }
    case 256013:
    {
        returnValue = F("Prinzenbergstr.");
        break;
    }
    case 256014:
    {
        returnValue = F("Prinzenbergweg");
        break;
    }
    case 256015:
    {
        returnValue = F("Prinzenbrücke");
        break;
    }
    case 256016:
    {
        returnValue = F("Prinzenburg");
        break;
    }
    case 256017:
    {
        returnValue = F("Prinzendamm");
        break;
    }
    case 256018:
    {
        returnValue = F("Prinzeneiche");
        break;
    }
    case 256019:
    {
        returnValue = F("Prinzengarten");
        break;
    }
    case 256020:
    {
        returnValue = F("Prinzengartenschneise");
        break;
    }
    case 256021:
    {
        returnValue = F("Prinzengasse");
        break;
    }
    case 256022:
    {
        returnValue = F("Prinzengraben");
        break;
    }
    case 256023:
    {
        returnValue = F("Prinzengracht");
        break;
    }
    case 256024:
    {
        returnValue = F("Prinzengässchen");
        break;
    }
    case 256025:
    {
        returnValue = F("Prinzenhof");
        break;
    }
    case 256026:
    {
        returnValue = F("Prinzenhofstr.");
        break;
    }
    case 256027:
    {
        returnValue = F("Prinzenholzweg");
        break;
    }
    case 256028:
    {
        returnValue = F("Prinzenhöhe");
        break;
    }
    case 256029:
    {
        returnValue = F("Prinzeninsel");
        break;
    }
    case 256030:
    {
        returnValue = F("Prinzeninselweg");
        break;
    }
    case 256031:
    {
        returnValue = F("Prinzenkamp");
        break;
    }
    case 256032:
    {
        returnValue = F("Prinzenkopfstr.");
        break;
    }
    case 256033:
    {
        returnValue = F("Prinzenpalais");
        break;
    }
    case 256034:
    {
        returnValue = F("Prinzenpark");
        break;
    }
    case 256035:
    {
        returnValue = F("Prinzenplatz");
        break;
    }
    case 256036:
    {
        returnValue = F("Prinzenruhweg");
        break;
    }
    case 256037:
    {
        returnValue = F("Prinzenschneise");
        break;
    }
    case 256038:
    {
        returnValue = F("Prinzensitz");
        break;
    }
    case 256039:
    {
        returnValue = F("Prinzensitzrückenweg");
        break;
    }
    case 256040:
    {
        returnValue = F("Prinzensteg");
        break;
    }
    case 256041:
    {
        returnValue = F("Prinzensteig");
        break;
    }
    case 256042:
    {
        returnValue = F("Prinzensteinweg");
        break;
    }
    case 256043:
    {
        returnValue = F("Prinzenstr.");
        break;
    }
    case 256044:
    {
        returnValue = F("Prinzenteich");
        break;
    }
    case 256045:
    {
        returnValue = F("Prinzenweg");
        break;
    }
    case 256046:
    {
        returnValue = F("Prinzenwiese");
        break;
    }
    case 256047:
    {
        returnValue = F("Prinzenwinkel");
        break;
    }
    case 256048:
    {
        returnValue = F("Prinzerei");
        break;
    }
    case 256049:
    {
        returnValue = F("Prinzessenchausee");
        break;
    }
    case 256050:
    {
        returnValue = F("Prinzessensteig");
        break;
    }
    case 256051:
    {
        returnValue = F("Prinzessenweg");
        break;
    }
    case 256052:
    {
        returnValue = F("Prinzessin-Margaret-Allee");
        break;
    }
    case 256053:
    {
        returnValue = F("Prinzessinnentrift");
        break;
    }
    case 256054:
    {
        returnValue = F("Prinzessinnenweg");
        break;
    }
    case 256055:
    {
        returnValue = F("Prinzessinstr.");
        break;
    }
    case 256056:
    {
        returnValue = F("Prinzeß-Amalien-Str.");
        break;
    }
    case 256057:
    {
        returnValue = F("Prinzeß-Luise-Str.");
        break;
    }
    case 256058:
    {
        returnValue = F("Prinzeßgäßchen");
        break;
    }
    case 256059:
    {
        returnValue = F("Prinzeßstr.");
        break;
    }
    case 256060:
    {
        returnValue = F("Prinzgasse");
        break;
    }
    case 256061:
    {
        returnValue = F("Prinzhornsheide");
        break;
    }
    case 256062:
    {
        returnValue = F("Prinzhornstr.");
        break;
    }
    case 256063:
    {
        returnValue = F("Prinzhügel");
        break;
    }
    case 256064:
    {
        returnValue = F("Prinzingstr.");
        break;
    }
    case 256065:
    {
        returnValue = F("Prinzkessel");
        break;
    }
    case 256066:
    {
        returnValue = F("Prinzregent-Luidpold-Str.");
        break;
    }
    case 256067:
    {
        returnValue = F("Prinzregent-Luitpold-Brücke");
        break;
    }
    case 256068:
    {
        returnValue = F("Prinzregent-Luitpold-Str.");
        break;
    }
    case 256069:
    {
        returnValue = F("Prinzregenten-Platz");
        break;
    }
    case 256070:
    {
        returnValue = F("Prinzregentenplatz");
        break;
    }
    case 256071:
    {
        returnValue = F("Prinzregentenstr.");
        break;
    }
    case 256072:
    {
        returnValue = F("Prinzregentenweg");
        break;
    }
    case 256073:
    {
        returnValue = F("Prinzstr.");
        break;
    }
    case 256074:
    {
        returnValue = F("Prinzweg");
        break;
    }
    case 256075:
    {
        returnValue = F("Prinzwiese");
        break;
    }
    case 256076:
    {
        returnValue = F("Prinzwinkel");
        break;
    }
    case 256077:
    {
        returnValue = F("Prior-Bilstein-Str.");
        break;
    }
    case 256078:
    {
        returnValue = F("Prior-Lefarth-Weg");
        break;
    }
    case 256079:
    {
        returnValue = F("Prior-Löß-Weg");
        break;
    }
    case 256080:
    {
        returnValue = F("Priorauer Str.");
        break;
    }
    case 256081:
    {
        returnValue = F("Priorberg");
        break;
    }
    case 256082:
    {
        returnValue = F("Priorberger Str.");
        break;
    }
    case 256083:
    {
        returnValue = F("Prioreier Str.");
        break;
    }
    case 256084:
    {
        returnValue = F("Priorhofstr.");
        break;
    }
    case 256085:
    {
        returnValue = F("Priors Garten");
        break;
    }
    case 256086:
    {
        returnValue = F("Priorsberg");
        break;
    }
    case 256087:
    {
        returnValue = F("Priorsfelsenweg");
        break;
    }
    case 256088:
    {
        returnValue = F("Priorsgarten");
        break;
    }
    case 256089:
    {
        returnValue = F("Priorsheide");
        break;
    }
    case 256090:
    {
        returnValue = F("Priorstr.");
        break;
    }
    case 256091:
    {
        returnValue = F("Priorter Dorfstr.");
        break;
    }
    case 256092:
    {
        returnValue = F("Priorter Str.");
        break;
    }
    case 256093:
    {
        returnValue = F("Prisannewitzer Str.");
        break;
    }
    case 256094:
    {
        returnValue = F("Prischoßstr.");
        break;
    }
    case 256095:
    {
        returnValue = F("Prischoßweg");
        break;
    }
    case 256096:
    {
        returnValue = F("Prisdorfer Str.");
        break;
    }
    case 256097:
    {
        returnValue = F("Prisewitz-Allee");
        break;
    }
    case 256098:
    {
        returnValue = F("Prislicher Str.");
        break;
    }
    case 256099:
    {
        returnValue = F("Prissath");
        break;
    }
    case 256100:
    {
        returnValue = F("Prissather Weg");
        break;
    }
    case 256101:
    {
        returnValue = F("Prisselberger Str.");
        break;
    }
    case 256102:
    {
        returnValue = F("Prisselstr.");
        break;
    }
    case 256103:
    {
        returnValue = F("Pritschenweg");
        break;
    }
    case 256104:
    {
        returnValue = F("Pritschönaer Weg");
        break;
    }
    case 256105:
    {
        returnValue = F("Prittitzer Weg");
        break;
    }
    case 256106:
    {
        returnValue = F("Pritzen-Dorfstr.");
        break;
    }
    case 256107:
    {
        returnValue = F("Pritzen-Ressener Weg");
        break;
    }
    case 256108:
    {
        returnValue = F("Pritzenow");
        break;
    }
    case 256109:
    {
        returnValue = F("Pritzerber Hauptstr.");
        break;
    }
    case 256110:
    {
        returnValue = F("Pritzerber Str.");
        break;
    }
    case 256111:
    {
        returnValue = F("Pritzerber Weg");
        break;
    }
    case 256112:
    {
        returnValue = F("Pritzierer Str.");
        break;
    }
    case 256113:
    {
        returnValue = F("Pritzwalker Chaussee");
        break;
    }
    case 256114:
    {
        returnValue = F("Pritzwalker Str.");
        break;
    }
    case 256115:
    {
        returnValue = F("Pritzwalker Str. Ausbau");
        break;
    }
    case 256116:
    {
        returnValue = F("Pritzwalker Str. Falkenhagen");
        break;
    }
    case 256117:
    {
        returnValue = F("Pritzwalker Str. Giesensdorf");
        break;
    }
    case 256118:
    {
        returnValue = F("Pritzwalker Weg");
        break;
    }
    case 256119:
    {
        returnValue = F("Pritzwinkel");
        break;
    }
    case 256120:
    {
        returnValue = F("Privasstr.");
        break;
    }
    case 256121:
    {
        returnValue = F("Privat Weg Zufahrt");
        break;
    }
    case 256122:
    {
        returnValue = F("PrivatSteig");
        break;
    }
    case 256123:
    {
        returnValue = F("Privatbungalowsiedlung");
        break;
    }
    case 256124:
    {
        returnValue = F("Privater Durchgang");
        break;
    }
    case 256125:
    {
        returnValue = F("Privater Fußweg");
        break;
    }
    case 256126:
    {
        returnValue = F("Privater Garten");
        break;
    }
    case 256127:
    {
        returnValue = F("Privater Park");
        break;
    }
    case 256128:
    {
        returnValue = F("Privater Strand");
        break;
    }
    case 256129:
    {
        returnValue = F("Privatgrund");
        break;
    }
    case 256130:
    {
        returnValue = F("Privatpark");
        break;
    }
    case 256131:
    {
        returnValue = F("Privatpark Axelmannstein Hotel");
        break;
    }
    case 256132:
    {
        returnValue = F("Privatpark Erwin Junker");
        break;
    }
    case 256133:
    {
        returnValue = F("Privatparkanlage Müller");
        break;
    }
    case 256134:
    {
        returnValue = F("Privatstr.");
        break;
    }
    case 256135:
    {
        returnValue = F("Privatstr. (nur für Anwohner)");
        break;
    }
    case 256136:
    {
        returnValue = F("Privatstr. des Bundes");
        break;
    }
    case 256137:
    {
        returnValue = F("Privatweg");
        break;
    }
    case 256138:
    {
        returnValue = F("Privatweg - Private Path");
        break;
    }
    case 256139:
    {
        returnValue = F("Privatweg / Privat");
        break;
    }
    case 256140:
    {
        returnValue = F("Privatweg Frohnhofweg 12 ,12a, 12b, 12c");
        break;
    }
    case 256141:
    {
        returnValue = F("Privatweg Frohnhofweg 14 , 14a , 14b");
        break;
    }
    case 256142:
    {
        returnValue = F("Privatweg Golfclub Gelstern");
        break;
    }
    case 256143:
    {
        returnValue = F("Privatweg I");
        break;
    }
    case 256144:
    {
        returnValue = F("Privatweg Lockmühle");
        break;
    }
    case 256145:
    {
        returnValue = F("Privatweg Portland");
        break;
    }
    case 256146:
    {
        returnValue = F("Privatweg Wupperverband");
        break;
    }
    case 256147:
    {
        returnValue = F("Privatweg nicht öffentlich");
        break;
    }
    case 256148:
    {
        returnValue = F("Privatzufahrt Hausnummer 31-33a");
        break;
    }
    case 256149:
    {
        returnValue = F("Privinzialstr.");
        break;
    }
    case 256150:
    {
        returnValue = F("Priwallweg");
        break;
    }
    case 256151:
    {
        returnValue = F("Prizrenstr.");
        break;
    }
    case 256152:
    {
        returnValue = F("ProACTIV-Platz");
        break;
    }
    case 256153:
    {
        returnValue = F("Probacher Str.");
        break;
    }
    case 256154:
    {
        returnValue = F("Probbacher Str.");
        break;
    }
    case 256155:
    {
        returnValue = F("Probbacher Weg");
        break;
    }
    case 256156:
    {
        returnValue = F("Probfeld");
        break;
    }
    case 256157:
    {
        returnValue = F("Probmühlenstr.");
        break;
    }
    case 256158:
    {
        returnValue = F("Probst Jesar");
        break;
    }
    case 256159:
    {
        returnValue = F("Probst Wooser Str.");
        break;
    }
    case 256160:
    {
        returnValue = F("Probst-Burchard-Str.");
        break;
    }
    case 256161:
    {
        returnValue = F("Probst-Daisenberger-Str.");
        break;
    }
    case 256162:
    {
        returnValue = F("Probst-Gerhard-Str.");
        break;
    }
    case 256163:
    {
        returnValue = F("Probst-Hartwig-Str.");
        break;
    }
    case 256164:
    {
        returnValue = F("Probst-Heso-Str.");
        break;
    }
    case 256165:
    {
        returnValue = F("Probst-Josef-Streb-Weg");
        break;
    }
    case 256166:
    {
        returnValue = F("Probst-Raven-Str.");
        break;
    }
    case 256167:
    {
        returnValue = F("Probst-Rifid-Str.");
        break;
    }
    case 256168:
    {
        returnValue = F("Probst-Siegmund-Str.");
        break;
    }
    case 256169:
    {
        returnValue = F("Probst-Sigl-Str.");
        break;
    }
    case 256170:
    {
        returnValue = F("Probstallee");
        break;
    }
    case 256171:
    {
        returnValue = F("Probstberg");
        break;
    }
    case 256172:
    {
        returnValue = F("Probstberg Weg");
        break;
    }
    case 256173:
    {
        returnValue = F("Probstbuehndstr.");
        break;
    }
    case 256174:
    {
        returnValue = F("Probstbühndstr.");
        break;
    }
    case 256175:
    {
        returnValue = F("Probstei");
        break;
    }
    case 256176:
    {
        returnValue = F("Probsteiburg");
        break;
    }
    case 256177:
    {
        returnValue = F("Probsteier Allee");
        break;
    }
    case 256178:
    {
        returnValue = F("Probsteigasse");
        break;
    }
    case 256179:
    {
        returnValue = F("Probsteihof");
        break;
    }
    case 256180:
    {
        returnValue = F("Probsteimühle");
        break;
    }
    case 256181:
    {
        returnValue = F("Probsteisiedlung");
        break;
    }
    case 256182:
    {
        returnValue = F("Probsteistr.");
        break;
    }
    case 256183:
    {
        returnValue = F("Probsteiweg");
        break;
    }
    case 256184:
    {
        returnValue = F("Probsteizella");
        break;
    }
    case 256185:
    {
        returnValue = F("Probstendamm");
        break;
    }
    case 256186:
    {
        returnValue = F("Probstforst");
        break;
    }
    case 256187:
    {
        returnValue = F("Probstgasse");
        break;
    }
    case 256188:
    {
        returnValue = F("Probstgrund");
        break;
    }
    case 256189:
    {
        returnValue = F("Probsthainer Str.");
        break;
    }
    case 256190:
    {
        returnValue = F("Probsthainer Weg");
        break;
    }
    case 256191:
    {
        returnValue = F("Probsthaldeweg");
        break;
    }
    case 256192:
    {
        returnValue = F("Probsthof");
        break;
    }
    case 256193:
    {
        returnValue = F("Probstholz");
        break;
    }
    case 256194:
    {
        returnValue = F("Probsthäger Str.");
        break;
    }
    case 256195:
    {
        returnValue = F("Probstrieder Weg");
        break;
    }
    case 256196:
    {
        returnValue = F("Probstschwaigstr.");
        break;
    }
    case 256197:
    {
        returnValue = F("Probststr.");
        break;
    }
    case 256198:
    {
        returnValue = F("Probstwaldweg");
        break;
    }
    case 256199:
    {
        returnValue = F("Probstweg");
        break;
    }
    case 256200:
    {
        returnValue = F("Probstzellaer Str.");
        break;
    }
    case 256201:
    {
        returnValue = F("Procter & Gamble-Str.");
        break;
    }
    case 256202:
    {
        returnValue = F("Proeskamp");
        break;
    }
    case 256203:
    {
        returnValue = F("Prof. Amelung-Weg");
        break;
    }
    case 256204:
    {
        returnValue = F("Prof. Dr. Basler Weg");
        break;
    }
    case 256205:
    {
        returnValue = F("Prof. Dr. Biedenkopf-Platz");
        break;
    }
    case 256206:
    {
        returnValue = F("Prof. H. Rosensträter-Weg");
        break;
    }
    case 256207:
    {
        returnValue = F("Prof. Hans-Goldschmidt-Weg");
        break;
    }
    case 256208:
    {
        returnValue = F("Prof. Kneib-Str.");
        break;
    }
    case 256209:
    {
        returnValue = F("Prof. Kurt Lehmann Weg");
        break;
    }
    case 256210:
    {
        returnValue = F("Prof. Schlie-Weg");
        break;
    }
    case 256211:
    {
        returnValue = F("Prof.-A.-Riffel-Str.");
        break;
    }
    case 256212:
    {
        returnValue = F("Prof.-Achleitner-Str.");
        break;
    }
    case 256213:
    {
        returnValue = F("Prof.-Adolf-Döbele-Weg");
        break;
    }
    case 256214:
    {
        returnValue = F("Prof.-Albert-Boerger-Str.");
        break;
    }
    case 256215:
    {
        returnValue = F("Prof.-Albert-Str.");
        break;
    }
    case 256216:
    {
        returnValue = F("Prof.-Alfons-Thome-Str.");
        break;
    }
    case 256217:
    {
        returnValue = F("Prof.-Algermissen-Str.");
        break;
    }
    case 256218:
    {
        returnValue = F("Prof.-Alois-Groh-Str.");
        break;
    }
    case 256219:
    {
        returnValue = F("Prof.-Alois-Knöpfler-Weg");
        break;
    }
    case 256220:
    {
        returnValue = F("Prof.-Anding-Str.");
        break;
    }
    case 256221:
    {
        returnValue = F("Prof.-Andreas-Schubert-Str.");
        break;
    }
    case 256222:
    {
        returnValue = F("Prof.-Arneth-Str.");
        break;
    }
    case 256223:
    {
        returnValue = F("Prof.-Baader-Weg");
        break;
    }
    case 256224:
    {
        returnValue = F("Prof.-Bachofer-Str.");
        break;
    }
    case 256225:
    {
        returnValue = F("Prof.-Baldes-Str.");
        break;
    }
    case 256226:
    {
        returnValue = F("Prof.-Bauer-Str.");
        break;
    }
    case 256227:
    {
        returnValue = F("Prof.-Baumgartner-Str.");
        break;
    }
    case 256228:
    {
        returnValue = F("Prof.-Behrens-Str.");
        break;
    }
    case 256229:
    {
        returnValue = F("Prof.-Behring-Str.");
        break;
    }
    case 256230:
    {
        returnValue = F("Prof.-Benjamin-Allee");
        break;
    }
    case 256231:
    {
        returnValue = F("Prof.-Berberich-Str.");
        break;
    }
    case 256232:
    {
        returnValue = F("Prof.-Bier-Str.");
        break;
    }
    case 256233:
    {
        returnValue = F("Prof.-Bolter-Str.");
        break;
    }
    case 256234:
    {
        returnValue = F("Prof.-Brandi-Str.");
        break;
    }
    case 256235:
    {
        returnValue = F("Prof.-Buchner-Str.");
        break;
    }
    case 256236:
    {
        returnValue = F("Prof.-Böhm-Str.");
        break;
    }
    case 256237:
    {
        returnValue = F("Prof.-Carl-Fischer-Weg");
        break;
    }
    case 256238:
    {
        returnValue = F("Prof.-Cloos-Str.");
        break;
    }
    case 256239:
    {
        returnValue = F("Prof.-Dathe-Str.");
        break;
    }
    case 256240:
    {
        returnValue = F("Prof.-Dehm-Str.");
        break;
    }
    case 256241:
    {
        returnValue = F("Prof.-Dieringer-Str.");
        break;
    }
    case 256242:
    {
        returnValue = F("Prof.-Dietl-Anlage");
        break;
    }
    case 256243:
    {
        returnValue = F("Prof.-Dietl-Weg");
        break;
    }
    case 256244:
    {
        returnValue = F("Prof.-Dieß-Str.");
        break;
    }
    case 256245:
    {
        returnValue = F("Prof.-Domagk-Str.");
        break;
    }
    case 256246:
    {
        returnValue = F("Prof.-Dr.-August-Bier-Str.");
        break;
    }
    case 256247:
    {
        returnValue = F("Prof.-Dr.-Dieckmann-Str.");
        break;
    }
    case 256248:
    {
        returnValue = F("Prof.-Dr.-Dölger-Str.");
        break;
    }
    case 256249:
    {
        returnValue = F("Prof.-Dr.-Eugen-Kisch-Str.");
        break;
    }
    case 256250:
    {
        returnValue = F("Prof.-Dr.-Friedrich-Schneider-Str.");
        break;
    }
    case 256251:
    {
        returnValue = F("Prof.-Dr.-Heinen-Weg");
        break;
    }
    case 256252:
    {
        returnValue = F("Prof.-Dr.-Karl-Berner-Str.");
        break;
    }
    case 256253:
    {
        returnValue = F("Prof.-Dr.-Konrad-Zuse-Str.");
        break;
    }
    case 256254:
    {
        returnValue = F("Prof.-Dr.-Max-Lange-Weg");
        break;
    }
    case 256255:
    {
        returnValue = F("Prof.-Dr.-Pier-Str.");
        break;
    }
    case 256256:
    {
        returnValue = F("Prof.-Dr.-Schedel-Str.");
        break;
    }
    case 256257:
    {
        returnValue = F("Prof.-Dr.-Schmaltz-Str.");
        break;
    }
    case 256258:
    {
        returnValue = F("Prof.-Dr.-Schneider-Str.");
        break;
    }
    case 256259:
    {
        returnValue = F("Prof.-Dr.-Sellmann-Str.");
        break;
    }
    case 256260:
    {
        returnValue = F("Prof.-Dr.-Solleder-Str.");
        break;
    }
    case 256261:
    {
        returnValue = F("Prof.-Dr.-Vogel-Str.");
        break;
    }
    case 256262:
    {
        returnValue = F("Prof.-Dr.-Wannagat-Weg");
        break;
    }
    case 256263:
    {
        returnValue = F("Prof.-Dr.-Wolfgang-Kaden-Str.");
        break;
    }
    case 256264:
    {
        returnValue = F("Prof.-Drexler-Weg");
        break;
    }
    case 256265:
    {
        returnValue = F("Prof.-Dursthoff-Weg");
        break;
    }
    case 256266:
    {
        returnValue = F("Prof.-Egon-Schneider-Weg");
        break;
    }
    case 256267:
    {
        returnValue = F("Prof.-Elisabeth-Stoeber-Weg");
        break;
    }
    case 256268:
    {
        returnValue = F("Prof.-Erik-Wolf-Weg");
        break;
    }
    case 256269:
    {
        returnValue = F("Prof.-Erler-Weg");
        break;
    }
    case 256270:
    {
        returnValue = F("Prof.-Ferdinand-A.-Kehrer-Str.");
        break;
    }
    case 256271:
    {
        returnValue = F("Prof.-Franke-Platz");
        break;
    }
    case 256272:
    {
        returnValue = F("Prof.-Franke-Weg");
        break;
    }
    case 256273:
    {
        returnValue = F("Prof.-Franz-Huth-Str.");
        break;
    }
    case 256274:
    {
        returnValue = F("Prof.-Frege-Str.");
        break;
    }
    case 256275:
    {
        returnValue = F("Prof.-Friedrich-Weg");
        break;
    }
    case 256276:
    {
        returnValue = F("Prof.-Frosch-Str.");
        break;
    }
    case 256277:
    {
        returnValue = F("Prof.-Gamperl-Str.");
        break;
    }
    case 256278:
    {
        returnValue = F("Prof.-Georg-Lenz-Str.");
        break;
    }
    case 256279:
    {
        returnValue = F("Prof.-Gerhardinger-Str.");
        break;
    }
    case 256280:
    {
        returnValue = F("Prof.-Gottfried-Bombach-Str.");
        break;
    }
    case 256281:
    {
        returnValue = F("Prof.-Gudrun-Bestmann-Weg");
        break;
    }
    case 256282:
    {
        returnValue = F("Prof.-Guhr-Str.");
        break;
    }
    case 256283:
    {
        returnValue = F("Prof.-Göttsberger-Str.");
        break;
    }
    case 256284:
    {
        returnValue = F("Prof.-Götze-Str.");
        break;
    }
    case 256285:
    {
        returnValue = F("Prof.-Haack-Str.");
        break;
    }
    case 256286:
    {
        returnValue = F("Prof.-Hahn-Str.");
        break;
    }
    case 256287:
    {
        returnValue = F("Prof.-Hamann-Str.");
        break;
    }
    case 256288:
    {
        returnValue = F("Prof.-Hans-Böhringer-Str.");
        break;
    }
    case 256289:
    {
        returnValue = F("Prof.-Heigl-Str.");
        break;
    }
    case 256290:
    {
        returnValue = F("Prof.-Heinrich-Düker-Str.");
        break;
    }
    case 256291:
    {
        returnValue = F("Prof.-Heinrich-Geißler-Str.");
        break;
    }
    case 256292:
    {
        returnValue = F("Prof.-Herbert-Jordan-Str.");
        break;
    }
    case 256293:
    {
        returnValue = F("Prof.-Heribert-Braun-Weg");
        break;
    }
    case 256294:
    {
        returnValue = F("Prof.-Hermann- Müller-Str.");
        break;
    }
    case 256295:
    {
        returnValue = F("Prof.-Hermann-Klare-Str.");
        break;
    }
    case 256296:
    {
        returnValue = F("Prof.-Hilgenfeldt-Str.");
        break;
    }
    case 256297:
    {
        returnValue = F("Prof.-Hillerbrand-Str.");
        break;
    }
    case 256298:
    {
        returnValue = F("Prof.-Hofmann-Str.");
        break;
    }
    case 256299:
    {
        returnValue = F("Prof.-Holzt-Str.");
        break;
    }
    case 256300:
    {
        returnValue = F("Prof.-Horstmann-Str.");
        break;
    }
    case 256301:
    {
        returnValue = F("Prof.-Hubbuch-Str.");
        break;
    }
    case 256302:
    {
        returnValue = F("Prof.-Häberle-Str.");
        break;
    }
    case 256303:
    {
        returnValue = F("Prof.-Höpke-Str.");
        break;
    }
    case 256304:
    {
        returnValue = F("Prof.-Hüsing-Platz");
        break;
    }
    case 256305:
    {
        returnValue = F("Prof.-Joliot-Curie-Str.");
        break;
    }
    case 256306:
    {
        returnValue = F("Prof.-Jorns-Str.");
        break;
    }
    case 256307:
    {
        returnValue = F("Prof.-Josef-Schick-Str.");
        break;
    }
    case 256308:
    {
        returnValue = F("Prof.-Jostes-Str.");
        break;
    }
    case 256309:
    {
        returnValue = F("Prof.-Julius-Wagner-Str.");
        break;
    }
    case 256310:
    {
        returnValue = F("Prof.-Jung-Str.");
        break;
    }
    case 256311:
    {
        returnValue = F("Prof.-Kaisser-Str.");
        break;
    }
    case 256312:
    {
        returnValue = F("Prof.-Karl-Bohland-Str.");
        break;
    }
    case 256313:
    {
        returnValue = F("Prof.-Kast-Weg");
        break;
    }
    case 256314:
    {
        returnValue = F("Prof.-Kehrer-Str.");
        break;
    }
    case 256315:
    {
        returnValue = F("Prof.-Kiesow-Weg");
        break;
    }
    case 256316:
    {
        returnValue = F("Prof.-Klapp-Str.");
        break;
    }
    case 256317:
    {
        returnValue = F("Prof.-Koopmann-Str.");
        break;
    }
    case 256318:
    {
        returnValue = F("Prof.-Kraus-Str.");
        break;
    }
    case 256319:
    {
        returnValue = F("Prof.-Krumbholz-Str.");
        break;
    }
    case 256320:
    {
        returnValue = F("Prof.-Kuhn-Str.");
        break;
    }
    case 256321:
    {
        returnValue = F("Prof.-Kurt-Huber-Str.");
        break;
    }
    case 256322:
    {
        returnValue = F("Prof.-Köhler-Str.");
        break;
    }
    case 256323:
    {
        returnValue = F("Prof.-Körnicke-Str.");
        break;
    }
    case 256324:
    {
        returnValue = F("Prof.-Kühne-Str.");
        break;
    }
    case 256325:
    {
        returnValue = F("Prof.-Künzig-Str.");
        break;
    }
    case 256326:
    {
        returnValue = F("Prof.-Langhorst-Str.");
        break;
    }
    case 256327:
    {
        returnValue = F("Prof.-Lauenstein-Str.");
        break;
    }
    case 256328:
    {
        returnValue = F("Prof.-Lauterbach-Str.");
        break;
    }
    case 256329:
    {
        returnValue = F("Prof.-Lebsche-Str.");
        break;
    }
    case 256330:
    {
        returnValue = F("Prof.-Lohmeyer-Str.");
        break;
    }
    case 256331:
    {
        returnValue = F("Prof.-Ludwig-Renner-Weg");
        break;
    }
    case 256332:
    {
        returnValue = F("Prof.-Maier-Leibnitz-Str.");
        break;
    }
    case 256333:
    {
        returnValue = F("Prof.-Maier-Weg");
        break;
    }
    case 256334:
    {
        returnValue = F("Prof.-Manegold-Str.");
        break;
    }
    case 256335:
    {
        returnValue = F("Prof.-Mausbach-Str.");
        break;
    }
    case 256336:
    {
        returnValue = F("Prof.-Max-Wilms-Str.");
        break;
    }
    case 256337:
    {
        returnValue = F("Prof.-Mederer-Str.");
        break;
    }
    case 256338:
    {
        returnValue = F("Prof.-Meisinger-Weg");
        break;
    }
    case 256339:
    {
        returnValue = F("Prof.-Mendel-Str.");
        break;
    }
    case 256340:
    {
        returnValue = F("Prof.-Mohrmann-Weg");
        break;
    }
    case 256341:
    {
        returnValue = F("Prof.-Much-Str.");
        break;
    }
    case 256342:
    {
        returnValue = F("Prof.-Munzer-Ring");
        break;
    }
    case 256343:
    {
        returnValue = F("Prof.-Müller-Olm-Str.");
        break;
    }
    case 256344:
    {
        returnValue = F("Prof.-Naegle-Platz");
        break;
    }
    case 256345:
    {
        returnValue = F("Prof.-Nagel-Str.");
        break;
    }
    case 256346:
    {
        returnValue = F("Prof.-Neidhardt-Siedlung");
        break;
    }
    case 256347:
    {
        returnValue = F("Prof.-Neugebauer-Weg");
        break;
    }
    case 256348:
    {
        returnValue = F("Prof.-Neureuter-Str.");
        break;
    }
    case 256349:
    {
        returnValue = F("Prof.-Nöller-Str.");
        break;
    }
    case 256350:
    {
        returnValue = F("Prof.-Otto-Dill-Str.");
        break;
    }
    case 256351:
    {
        returnValue = F("Prof.-Pabst-Str.");
        break;
    }
    case 256352:
    {
        returnValue = F("Prof.-Paul-Köhler-Str.");
        break;
    }
    case 256353:
    {
        returnValue = F("Prof.-Paul-Raabe-Platz");
        break;
    }
    case 256354:
    {
        returnValue = F("Prof.-Peter-Wust-Str.");
        break;
    }
    case 256355:
    {
        returnValue = F("Prof.-Pickel-Str.");
        break;
    }
    case 256356:
    {
        returnValue = F("Prof.-Pirlet-Str.");
        break;
    }
    case 256357:
    {
        returnValue = F("Prof.-Pirlett-Str.");
        break;
    }
    case 256358:
    {
        returnValue = F("Prof.-Porsche-Str.");
        break;
    }
    case 256359:
    {
        returnValue = F("Prof.-Prechtl-Str.");
        break;
    }
    case 256360:
    {
        returnValue = F("Prof.-Rademacher-Str.");
        break;
    }
    case 256361:
    {
        returnValue = F("Prof.-Rajewsky-Str.");
        break;
    }
    case 256362:
    {
        returnValue = F("Prof.-Rapmund-Str.");
        break;
    }
    case 256363:
    {
        returnValue = F("Prof.-Rauschen-Str.");
        break;
    }
    case 256364:
    {
        returnValue = F("Prof.-Reiter-Str.");
        break;
    }
    case 256365:
    {
        returnValue = F("Prof.-Richard-Beck-Str.");
        break;
    }
    case 256366:
    {
        returnValue = F("Prof.-Richard-Paulick-Ring");
        break;
    }
    case 256367:
    {
        returnValue = F("Prof.-Rieber-Str.");
        break;
    }
    case 256368:
    {
        returnValue = F("Prof.-Robert-Ellscheid-Weg");
        break;
    }
    case 256369:
    {
        returnValue = F("Prof.-Roßmäßler-Str.");
        break;
    }
    case 256370:
    {
        returnValue = F("Prof.-Rucker-Str.");
        break;
    }
    case 256371:
    {
        returnValue = F("Prof.-Rüdiger-Bormann-Str.");
        break;
    }
    case 256372:
    {
        returnValue = F("Prof.-Rüsche-Str.");
        break;
    }
    case 256373:
    {
        returnValue = F("Prof.-Sauer-Weg");
        break;
    }
    case 256374:
    {
        returnValue = F("Prof.-Sauerbruch-Str.");
        break;
    }
    case 256375:
    {
        returnValue = F("Prof.-Sauerbruch-Weg");
        break;
    }
    case 256376:
    {
        returnValue = F("Prof.-Scheibe-Str.");
        break;
    }
    case 256377:
    {
        returnValue = F("Prof.-Schipperges-Str.");
        break;
    }
    case 256378:
    {
        returnValue = F("Prof.-Schirmeyer-Str.");
        break;
    }
    case 256379:
    {
        returnValue = F("Prof.-Schlossmacher-Str.");
        break;
    }
    case 256380:
    {
        returnValue = F("Prof.-Schloßstein-Str.");
        break;
    }
    case 256381:
    {
        returnValue = F("Prof.-Schlösser-Weg");
        break;
    }
    case 256382:
    {
        returnValue = F("Prof.-Schmidt-Str.");
        break;
    }
    case 256383:
    {
        returnValue = F("Prof.-Schmidtmüller-Str.");
        break;
    }
    case 256384:
    {
        returnValue = F("Prof.-Schmiedeknecht-Str.");
        break;
    }
    case 256385:
    {
        returnValue = F("Prof.-Schmucker-Str.");
        break;
    }
    case 256386:
    {
        returnValue = F("Prof.-Schober-Weg");
        break;
    }
    case 256387:
    {
        returnValue = F("Prof.-Schreyögg-Platz");
        break;
    }
    case 256388:
    {
        returnValue = F("Prof.-Schröder-Str.");
        break;
    }
    case 256389:
    {
        returnValue = F("Prof.-Schultes-Str.");
        break;
    }
    case 256390:
    {
        returnValue = F("Prof.-Schwenkel-Str.");
        break;
    }
    case 256391:
    {
        returnValue = F("Prof.-Settegast-Weg");
        break;
    }
    case 256392:
    {
        returnValue = F("Prof.-Simmel-Str.");
        break;
    }
    case 256393:
    {
        returnValue = F("Prof.-Springer-Str.");
        break;
    }
    case 256394:
    {
        returnValue = F("Prof.-Stark-Str.");
        break;
    }
    case 256395:
    {
        returnValue = F("Prof.-Stelzenberger-Str.");
        break;
    }
    case 256396:
    {
        returnValue = F("Prof.-Tiedemann-Str.");
        break;
    }
    case 256397:
    {
        returnValue = F("Prof.-Trumpp-Weg");
        break;
    }
    case 256398:
    {
        returnValue = F("Prof.-Träger-Str.");
        break;
    }
    case 256399:
    {
        returnValue = F("Prof.-Tychsen-Ring");
        break;
    }
    case 256400:
    {
        returnValue = F("Prof.-Urban-Str.");
        break;
    }
    case 256401:
    {
        returnValue = F("Prof.-Virchow-Str.");
        break;
    }
    case 256402:
    {
        returnValue = F("Prof.-Voigt-Str.");
        break;
    }
    case 256403:
    {
        returnValue = F("Prof.-Völzing-Ring");
        break;
    }
    case 256404:
    {
        returnValue = F("Prof.-W.-Kempff-Weg");
        break;
    }
    case 256405:
    {
        returnValue = F("Prof.-Weber-Str.");
        break;
    }
    case 256406:
    {
        returnValue = F("Prof.-Werner-Str.");
        break;
    }
    case 256407:
    {
        returnValue = F("Prof.-Wilhelm-Ring");
        break;
    }
    case 256408:
    {
        returnValue = F("Prof.-Winklhofer-Weg");
        break;
    }
    case 256409:
    {
        returnValue = F("Prof.-Zenneck-Weg");
        break;
    }
    case 256410:
    {
        returnValue = F("Prof.-von-Capitaine-Str.");
        break;
    }
    case 256411:
    {
        returnValue = F("Profener Bahnhofstr.");
        break;
    }
    case 256412:
    {
        returnValue = F("Profener Hauptstr.");
        break;
    }
    case 256413:
    {
        returnValue = F("Professor Kirschner Str.");
        break;
    }
    case 256414:
    {
        returnValue = F("Professor Neeb Str.");
        break;
    }
    case 256415:
    {
        returnValue = F("Professor-Adler-Str.");
        break;
    }
    case 256416:
    {
        returnValue = F("Professor-Albert-Str.");
        break;
    }
    case 256417:
    {
        returnValue = F("Professor-Amelung-Weg");
        break;
    }
    case 256418:
    {
        returnValue = F("Professor-Arens-Str.");
        break;
    }
    case 256419:
    {
        returnValue = F("Professor-Arneth-Str.");
        break;
    }
    case 256420:
    {
        returnValue = F("Professor-Bader-Str.");
        break;
    }
    case 256421:
    {
        returnValue = F("Professor-Baier-Str.");
        break;
    }
    case 256422:
    {
        returnValue = F("Professor-Bamann-Str.");
        break;
    }
    case 256423:
    {
        returnValue = F("Professor-Bauer-Str.");
        break;
    }
    case 256424:
    {
        returnValue = F("Professor-Baum-Str.");
        break;
    }
    case 256425:
    {
        returnValue = F("Professor-Becksmann-Str.");
        break;
    }
    case 256426:
    {
        returnValue = F("Professor-Belser-Str.");
        break;
    }
    case 256427:
    {
        returnValue = F("Professor-Beltz-Weg");
        break;
    }
    case 256428:
    {
        returnValue = F("Professor-Berberich-Str.");
        break;
    }
    case 256429:
    {
        returnValue = F("Professor-Berger-Str.");
        break;
    }
    case 256430:
    {
        returnValue = F("Professor-Bernhard-Winter-Str.");
        break;
    }
    case 256431:
    {
        returnValue = F("Professor-Bock-Weg");
        break;
    }
    case 256432:
    {
        returnValue = F("Professor-Borchers-Str.");
        break;
    }
    case 256433:
    {
        returnValue = F("Professor-Braun-Str.");
        break;
    }
    case 256434:
    {
        returnValue = F("Professor-Brinkmann-Str.");
        break;
    }
    case 256435:
    {
        returnValue = F("Professor-Brögger-Str.");
        break;
    }
    case 256436:
    {
        returnValue = F("Professor-Buchwald-Str.");
        break;
    }
    case 256437:
    {
        returnValue = F("Professor-Buttersack-Str.");
        break;
    }
    case 256438:
    {
        returnValue = F("Professor-C.-Ehrenberg-Weg");
        break;
    }
    case 256439:
    {
        returnValue = F("Professor-Carl-Bantzer-Str.");
        break;
    }
    case 256440:
    {
        returnValue = F("Professor-Carl-Hanusch-Str.");
        break;
    }
    case 256441:
    {
        returnValue = F("Professor-Carl-Reiser-Str.");
        break;
    }
    case 256442:
    {
        returnValue = F("Professor-Dempf-Str.");
        break;
    }
    case 256443:
    {
        returnValue = F("Professor-Derra-Str.");
        break;
    }
    case 256444:
    {
        returnValue = F("Professor-Deubel-Str.");
        break;
    }
    case 256445:
    {
        returnValue = F("Professor-Deutinger-Str.");
        break;
    }
    case 256446:
    {
        returnValue = F("Professor-Dieß-Str.");
        break;
    }
    case 256447:
    {
        returnValue = F("Professor-Dillinger-Weg");
        break;
    }
    case 256448:
    {
        returnValue = F("Professor-Doktor-Walter-Friedrich-Str.");
        break;
    }
    case 256449:
    {
        returnValue = F("Professor-Doktor-Werner-Str.");
        break;
    }
    case 256450:
    {
        returnValue = F("Professor-Domagk-Weg");
        break;
    }
    case 256451:
    {
        returnValue = F("Professor-Dr.-Franke-Brücke");
        break;
    }
    case 256452:
    {
        returnValue = F("Professor-Dr.-Pawlow-Str.");
        break;
    }
    case 256453:
    {
        returnValue = F("Professor-Dr.-Stamm-Str.");
        break;
    }
    case 256454:
    {
        returnValue = F("Professor-Drexel-Str.");
        break;
    }
    case 256455:
    {
        returnValue = F("Professor-Drück-Str.");
        break;
    }
    case 256456:
    {
        returnValue = F("Professor-Döllgast-Str.");
        break;
    }
    case 256457:
    {
        returnValue = F("Professor-Eberlein-Str.");
        break;
    }
    case 256458:
    {
        returnValue = F("Professor-Ecker-Str.");
        break;
    }
    case 256459:
    {
        returnValue = F("Professor-Eichel-Brücke");
        break;
    }
    case 256460:
    {
        returnValue = F("Professor-Eichler-Str.");
        break;
    }
    case 256461:
    {
        returnValue = F("Professor-Eichmann-Str.");
        break;
    }
    case 256462:
    {
        returnValue = F("Professor-Eiermann-Str.");
        break;
    }
    case 256463:
    {
        returnValue = F("Professor-Ellissen-Str.");
        break;
    }
    case 256464:
    {
        returnValue = F("Professor-Erdmann-Weg");
        break;
    }
    case 256465:
    {
        returnValue = F("Professor-Esser-Str.");
        break;
    }
    case 256466:
    {
        returnValue = F("Professor-Feise-Str.");
        break;
    }
    case 256467:
    {
        returnValue = F("Professor-Feldmann-Str.");
        break;
    }
    case 256468:
    {
        returnValue = F("Professor-Florax-Str.");
        break;
    }
    case 256469:
    {
        returnValue = F("Professor-Franz-Becker-Str.");
        break;
    }
    case 256470:
    {
        returnValue = F("Professor-Friedrich-von-Keller-Weg");
        break;
    }
    case 256471:
    {
        returnValue = F("Professor-Fritz-Klee-Str.");
        break;
    }
    case 256472:
    {
        returnValue = F("Professor-Föhr-Str.");
        break;
    }
    case 256473:
    {
        returnValue = F("Professor-Gaßmeyer-Str.");
        break;
    }
    case 256474:
    {
        returnValue = F("Professor-Gloy-Weg");
        break;
    }
    case 256475:
    {
        returnValue = F("Professor-Graf-Str.");
        break;
    }
    case 256476:
    {
        returnValue = F("Professor-Grasegger-Str.");
        break;
    }
    case 256477:
    {
        returnValue = F("Professor-Gärtner-Str.");
        break;
    }
    case 256478:
    {
        returnValue = F("Professor-Göttsberg-Str.");
        break;
    }
    case 256479:
    {
        returnValue = F("Professor-Göttsberger-Str.");
        break;
    }
    case 256480:
    {
        returnValue = F("Professor-Haas-Str.");
        break;
    }
    case 256481:
    {
        returnValue = F("Professor-Habermann-Weg");
        break;
    }
    case 256482:
    {
        returnValue = F("Professor-Hahn-Str.");
        break;
    }
    case 256483:
    {
        returnValue = F("Professor-Haindl-Str.");
        break;
    }
    case 256484:
    {
        returnValue = F("Professor-Hamp-Str.");
        break;
    }
    case 256485:
    {
        returnValue = F("Professor-Hartmann-Str.");
        break;
    }
    case 256486:
    {
        returnValue = F("Professor-Hasl-Str.");
        break;
    }
    case 256487:
    {
        returnValue = F("Professor-Hecht-Weg");
        break;
    }
    case 256488:
    {
        returnValue = F("Professor-Hegenauer-Str.");
        break;
    }
    case 256489:
    {
        returnValue = F("Professor-Heller-Str.");
        break;
    }
    case 256490:
    {
        returnValue = F("Professor-Hermann-Junker-Str.");
        break;
    }
    case 256491:
    {
        returnValue = F("Professor-Hermann-Maetzig Wanderweg");
        break;
    }
    case 256492:
    {
        returnValue = F("Professor-Hermann-Moelzig-Wanderweg");
        break;
    }
    case 256493:
    {
        returnValue = F("Professor-Hermann-Staudinger-Str.");
        break;
    }
    case 256494:
    {
        returnValue = F("Professor-Herrmann-Platz");
        break;
    }
    case 256495:
    {
        returnValue = F("Professor-Heuss-Str.");
        break;
    }
    case 256496:
    {
        returnValue = F("Professor-Hillebrandt-Str.");
        break;
    }
    case 256497:
    {
        returnValue = F("Professor-Hippchen-Str.");
        break;
    }
    case 256498:
    {
        returnValue = F("Professor-Hirschmann-Str.");
        break;
    }
    case 256499:
    {
        returnValue = F("Professor-Hitzberger-Str.");
        break;
    }
    case 256500:
    {
        returnValue = F("Professor-Hoberg-Str.");
        break;
    }
    case 256501:
    {
        returnValue = F("Professor-Hoffmann-Str.");
        break;
    }
    case 256502:
    {
        returnValue = F("Professor-Hofmeier-Gang");
        break;
    }
    case 256503:
    {
        returnValue = F("Professor-Hubbuch-Str.");
        break;
    }
    case 256504:
    {
        returnValue = F("Professor-Huber-Str.");
        break;
    }
    case 256505:
    {
        returnValue = F("Professor-Humke-Weg");
        break;
    }
    case 256506:
    {
        returnValue = F("Professor-Hummel-Weg");
        break;
    }
    case 256507:
    {
        returnValue = F("Professor-Ida-Ehre-Str.");
        break;
    }
    case 256508:
    {
        returnValue = F("Professor-Iwersen-Str.");
        break;
    }
    case 256509:
    {
        returnValue = F("Professor-Jann-Gasse");
        break;
    }
    case 256510:
    {
        returnValue = F("Professor-Josef-Weigl-Str.");
        break;
    }
    case 256511:
    {
        returnValue = F("Professor-Jäcklein-Str.");
        break;
    }
    case 256512:
    {
        returnValue = F("Professor-Kalmbacher-Str.");
        break;
    }
    case 256513:
    {
        returnValue = F("Professor-Karsten-Weg");
        break;
    }
    case 256514:
    {
        returnValue = F("Professor-Katerkamp-Str.");
        break;
    }
    case 256515:
    {
        returnValue = F("Professor-Kist-Str.");
        break;
    }
    case 256516:
    {
        returnValue = F("Professor-Kleiber-Str.");
        break;
    }
    case 256517:
    {
        returnValue = F("Professor-Knipping-Str.");
        break;
    }
    case 256518:
    {
        returnValue = F("Professor-Kohlrausch-Str.");
        break;
    }
    case 256519:
    {
        returnValue = F("Professor-Krauß-Str.");
        break;
    }
    case 256520:
    {
        returnValue = F("Professor-Kress-Weg");
        break;
    }
    case 256521:
    {
        returnValue = F("Professor-Krieg-Str.");
        break;
    }
    case 256522:
    {
        returnValue = F("Professor-Krämer-Str.");
        break;
    }
    case 256523:
    {
        returnValue = F("Professor-Krüger-Weg");
        break;
    }
    case 256524:
    {
        returnValue = F("Professor-Kurt-Huber-Str.");
        break;
    }
    case 256525:
    {
        returnValue = F("Professor-Kurt-Sauer-Str.");
        break;
    }
    case 256526:
    {
        returnValue = F("Professor-Köbele-Weg");
        break;
    }
    case 256527:
    {
        returnValue = F("Professor-Kötting-Str.");
        break;
    }
    case 256528:
    {
        returnValue = F("Professor-Kück-Str.");
        break;
    }
    case 256529:
    {
        returnValue = F("Professor-Kümmell-Str.");
        break;
    }
    case 256530:
    {
        returnValue = F("Professor-Ludwig-Knaus-Str.");
        break;
    }
    case 256531:
    {
        returnValue = F("Professor-Lübeck-Str.");
        break;
    }
    case 256532:
    {
        returnValue = F("Professor-Mader-Str.");
        break;
    }
    case 256533:
    {
        returnValue = F("Professor-Mangold-Weg");
        break;
    }
    case 256534:
    {
        returnValue = F("Professor-Martini-Str.");
        break;
    }
    case 256535:
    {
        returnValue = F("Professor-Mauder-Str.");
        break;
    }
    case 256536:
    {
        returnValue = F("Professor-Max-Dieckmann-Platz");
        break;
    }
    case 256537:
    {
        returnValue = F("Professor-Max-Lange-Platz");
        break;
    }
    case 256538:
    {
        returnValue = F("Professor-Mayr-Str.");
        break;
    }
    case 256539:
    {
        returnValue = F("Professor-Mensing-Str.");
        break;
    }
    case 256540:
    {
        returnValue = F("Professor-Menzel-Str.");
        break;
    }
    case 256541:
    {
        returnValue = F("Professor-Messerschmitt-Str.");
        break;
    }
    case 256542:
    {
        returnValue = F("Professor-Michael-Sachs-Str.");
        break;
    }
    case 256543:
    {
        returnValue = F("Professor-Mitscherlich-Allee");
        break;
    }
    case 256544:
    {
        returnValue = F("Professor-Munzer-Ring");
        break;
    }
    case 256545:
    {
        returnValue = F("Professor-Möhlmann-Str.");
        break;
    }
    case 256546:
    {
        returnValue = F("Professor-Müller-Str.");
        break;
    }
    case 256547:
    {
        returnValue = F("Professor-Neher-Str.");
        break;
    }
    case 256548:
    {
        returnValue = F("Professor-Notton-Str.");
        break;
    }
    case 256549:
    {
        returnValue = F("Professor-Oelkers-Str.");
        break;
    }
    case 256550:
    {
        returnValue = F("Professor-Opladen-Str.");
        break;
    }
    case 256551:
    {
        returnValue = F("Professor-Ott-Str.");
        break;
    }
    case 256552:
    {
        returnValue = F("Professor-Otto-Hupp-Str.");
        break;
    }
    case 256553:
    {
        returnValue = F("Professor-Penck-Str.");
        break;
    }
    case 256554:
    {
        returnValue = F("Professor-Philipp-Fischer-Str.");
        break;
    }
    case 256555:
    {
        returnValue = F("Professor-Plücker-Str.");
        break;
    }
    case 256556:
    {
        returnValue = F("Professor-Plühr-Str.");
        break;
    }
    case 256557:
    {
        returnValue = F("Professor-Pohlmann-Str.");
        break;
    }
    case 256558:
    {
        returnValue = F("Professor-Prakke-Str.");
        break;
    }
    case 256559:
    {
        returnValue = F("Professor-Prestel-Str.");
        break;
    }
    case 256560:
    {
        returnValue = F("Professor-Pächtner-Str.");
        break;
    }
    case 256561:
    {
        returnValue = F("Professor-Reger-Str.");
        break;
    }
    case 256562:
    {
        returnValue = F("Professor-Rehm-Str.");
        break;
    }
    case 256563:
    {
        returnValue = F("Professor-Riffel-Str.");
        break;
    }
    case 256564:
    {
        returnValue = F("Professor-Rippel-Str.");
        break;
    }
    case 256565:
    {
        returnValue = F("Professor-Ritter-Str.");
        break;
    }
    case 256566:
    {
        returnValue = F("Professor-Roßmäßler-Str.");
        break;
    }
    case 256567:
    {
        returnValue = F("Professor-Ruckes-Str.");
        break;
    }
    case 256568:
    {
        returnValue = F("Professor-Rupp-Str.");
        break;
    }
    case 256569:
    {
        returnValue = F("Professor-Röntgen-Str.");
        break;
    }
    case 256570:
    {
        returnValue = F("Professor-Rösner-Weg");
        break;
    }
    case 256571:
    {
        returnValue = F("Professor-Rüdinger-Str.");
        break;
    }
    case 256572:
    {
        returnValue = F("Professor-Sakmann-Str.");
        break;
    }
    case 256573:
    {
        returnValue = F("Professor-Sand-Str.");
        break;
    }
    case 256574:
    {
        returnValue = F("Professor-Sauerbruch-Str.");
        break;
    }
    case 256575:
    {
        returnValue = F("Professor-Schacht-Str.");
        break;
    }
    case 256576:
    {
        returnValue = F("Professor-Scharrer-Str.");
        break;
    }
    case 256577:
    {
        returnValue = F("Professor-Scheeben-Str.");
        break;
    }
    case 256578:
    {
        returnValue = F("Professor-Schelkle-Str.");
        break;
    }
    case 256579:
    {
        returnValue = F("Professor-Schinnerer-Str.");
        break;
    }
    case 256580:
    {
        returnValue = F("Professor-Schmeil-Allee");
        break;
    }
    case 256581:
    {
        returnValue = F("Professor-Schmid-Str.");
        break;
    }
    case 256582:
    {
        returnValue = F("Professor-Schmidt-Str.");
        break;
    }
    case 256583:
    {
        returnValue = F("Professor-Schmieden-Str.");
        break;
    }
    case 256584:
    {
        returnValue = F("Professor-Schmieder-Str.");
        break;
    }
    case 256585:
    {
        returnValue = F("Professor-Schröder-Weg");
        break;
    }
    case 256586:
    {
        returnValue = F("Professor-Schröter-Str.");
        break;
    }
    case 256587:
    {
        returnValue = F("Professor-Schröter-Weg");
        break;
    }
    case 256588:
    {
        returnValue = F("Professor-Schuler-Str.");
        break;
    }
    case 256589:
    {
        returnValue = F("Professor-Schulte-Str.");
        break;
    }
    case 256590:
    {
        returnValue = F("Professor-Schumacher-Str.");
        break;
    }
    case 256591:
    {
        returnValue = F("Professor-Sedlmeier-Weg");
        break;
    }
    case 256592:
    {
        returnValue = F("Professor-Sell-Str.");
        break;
    }
    case 256593:
    {
        returnValue = F("Professor-Siegmund-Str.");
        break;
    }
    case 256594:
    {
        returnValue = F("Professor-Specht-Str.");
        break;
    }
    case 256595:
    {
        returnValue = F("Professor-Stahl-Str.");
        break;
    }
    case 256596:
    {
        returnValue = F("Professor-Stark-Str.");
        break;
    }
    case 256597:
    {
        returnValue = F("Professor-Stock-Str.");
        break;
    }
    case 256598:
    {
        returnValue = F("Professor-Stroß-Weg");
        break;
    }
    case 256599:
    {
        returnValue = F("Professor-Struve-Weg");
        break;
    }
    case 256600:
    {
        returnValue = F("Professor-Sudhoff-Str.");
        break;
    }
    case 256601:
    {
        returnValue = F("Professor-Theis-Str.");
        break;
    }
    case 256602:
    {
        returnValue = F("Professor-Thomsen-Weg");
        break;
    }
    case 256603:
    {
        returnValue = F("Professor-Tischleder-Str.");
        break;
    }
    case 256604:
    {
        returnValue = F("Professor-Uhden-Str.");
        break;
    }
    case 256605:
    {
        returnValue = F("Professor-Venturini-Str.");
        break;
    }
    case 256606:
    {
        returnValue = F("Professor-Vershofen-Str.");
        break;
    }
    case 256607:
    {
        returnValue = F("Professor-Vogt-Weg");
        break;
    }
    case 256608:
    {
        returnValue = F("Professor-Vormfelde-Str.");
        break;
    }
    case 256609:
    {
        returnValue = F("Professor-Wackerle-Str.");
        break;
    }
    case 256610:
    {
        returnValue = F("Professor-Wagenfeld-Ring");
        break;
    }
    case 256611:
    {
        returnValue = F("Professor-Wagner-Str.");
        break;
    }
    case 256612:
    {
        returnValue = F("Professor-Waldvogel-Str.");
        break;
    }
    case 256613:
    {
        returnValue = F("Professor-Wenz-Str.");
        break;
    }
    case 256614:
    {
        returnValue = F("Professor-Westermann-Str.");
        break;
    }
    case 256615:
    {
        returnValue = F("Professor-Wiarda-Str.");
        break;
    }
    case 256616:
    {
        returnValue = F("Professor-Willkomm-Str.");
        break;
    }
    case 256617:
    {
        returnValue = F("Professor-Wilmers-Str.");
        break;
    }
    case 256618:
    {
        returnValue = F("Professor-Wurm-Str.");
        break;
    }
    case 256619:
    {
        returnValue = F("Professor-Wörl-Str.");
        break;
    }
    case 256620:
    {
        returnValue = F("Professor-Zeller-Str.");
        break;
    }
    case 256621:
    {
        returnValue = F("Professor-Zenneck-Str.");
        break;
    }
    case 256622:
    {
        returnValue = F("Professor-Zintl-Str.");
        break;
    }
    case 256623:
    {
        returnValue = F("Professor-Zutt-Weg");
        break;
    }
    case 256624:
    {
        returnValue = F("Professor-von-Finck-Str.");
        break;
    }
    case 256625:
    {
        returnValue = F("Professor-von-Klitzing-Str.");
        break;
    }
    case 256626:
    {
        returnValue = F("Professorenweg");
        break;
    }
    case 256627:
    {
        returnValue = F("Proffenstiege");
        break;
    }
    case 256628:
    {
        returnValue = F("Proffenweg");
        break;
    }
    case 256629:
    {
        returnValue = F("Proffgasse");
        break;
    }
    case 256630:
    {
        returnValue = F("Profgarten");
        break;
    }
    case 256631:
    {
        returnValue = F("Profisch");
        break;
    }
    case 256632:
    {
        returnValue = F("Profischer Str.");
        break;
    }
    case 256633:
    {
        returnValue = F("Profischer Weg");
        break;
    }
    case 256634:
    {
        returnValue = F("Profit");
        break;
    }
    case 256635:
    {
        returnValue = F("Profitweg");
        break;
    }
    case 256636:
    {
        returnValue = F("Progasse");
        break;
    }
    case 256637:
    {
        returnValue = F("Progreßweg");
        break;
    }
    case 256638:
    {
        returnValue = F("Prohner Str.");
        break;
    }
    case 256639:
    {
        returnValue = F("Proitze");
        break;
    }
    case 256640:
    {
        returnValue = F("Proitzer Platz");
        break;
    }
    case 256641:
    {
        returnValue = F("Proitzer Weg");
        break;
    }
    case 256642:
    {
        returnValue = F("Projektstr.");
        break;
    }
    case 256643:
    {
        returnValue = F("Prokofjewstr.");
        break;
    }
    case 256644:
    {
        returnValue = F("Prokopiusstr.");
        break;
    }
    case 256645:
    {
        returnValue = F("Prolin-Park");
        break;
    }
    case 256646:
    {
        returnValue = F("Prolliussteig");
        break;
    }
    case 256647:
    {
        returnValue = F("Prollstr.");
        break;
    }
    case 256648:
    {
        returnValue = F("Prombach");
        break;
    }
    case 256649:
    {
        returnValue = F("Prombacher Str.");
        break;
    }
    case 256650:
    {
        returnValue = F("Promenade");
        break;
    }
    case 256651:
    {
        returnValue = F("Promenade Am Alten Binnenhafen");
        break;
    }
    case 256652:
    {
        returnValue = F("Promenade Am Alten Innenhafen");
        break;
    }
    case 256653:
    {
        returnValue = F("Promenade Am Mühlenhölzchen");
        break;
    }
    case 256654:
    {
        returnValue = F("Promenade La Chapelle des Fougeretz");
        break;
    }
    case 256655:
    {
        returnValue = F("Promenade am Museumshafen");
        break;
    }
    case 256656:
    {
        returnValue = F("Promenade de Bar-sur-Aube");
        break;
    }
    case 256657:
    {
        returnValue = F("Promenade der Wild- und Strauchrosen");
        break;
    }
    case 256658:
    {
        returnValue = F("Promenadenbrücke am Wangermeer");
        break;
    }
    case 256659:
    {
        returnValue = F("Promenadengäßchen");
        break;
    }
    case 256660:
    {
        returnValue = F("Promenadenring");
        break;
    }
    case 256661:
    {
        returnValue = F("Promenadenstr.");
        break;
    }
    case 256662:
    {
        returnValue = F("Promenadenweg");
        break;
    }
    case 256663:
    {
        returnValue = F("Promenadestr.");
        break;
    }
    case 256664:
    {
        returnValue = F("Promenadeweg");
        break;
    }
    case 256665:
    {
        returnValue = F("Promille-Weg");
        break;
    }
    case 256666:
    {
        returnValue = F("Promillesträßle");
        break;
    }
    case 256667:
    {
        returnValue = F("Promilleweg");
        break;
    }
    case 256668:
    {
        returnValue = F("Promillsträssle");
        break;
    }
    case 256669:
    {
        returnValue = F("Prommenadenweg");
        break;
    }
    case 256670:
    {
        returnValue = F("Promnitzer Fußweg");
        break;
    }
    case 256671:
    {
        returnValue = F("Promnitzer Str.");
        break;
    }
    case 256672:
    {
        returnValue = F("Promnitzweg");
        break;
    }
    case 256673:
    {
        returnValue = F("Prompersweg");
        break;
    }
    case 256674:
    {
        returnValue = F("Pronathstr.");
        break;
    }
    case 256675:
    {
        returnValue = F("Pronsdorfer Weg");
        break;
    }
    case 256676:
    {
        returnValue = F("Pronsfelder Str.");
        break;
    }
    case 256677:
    {
        returnValue = F("Pronstorfer Str.");
        break;
    }
    case 256678:
    {
        returnValue = F("Pronterei");
        break;
    }
    case 256679:
    {
        returnValue = F("Pronzini Weg");
        break;
    }
    case 256680:
    {
        returnValue = F("Propelhöhle");
        break;
    }
    case 256681:
    {
        returnValue = F("Propelstr.");
        break;
    }
    case 256682:
    {
        returnValue = F("Prophetenberg");
        break;
    }
    case 256683:
    {
        returnValue = F("Prophetenhörn");
        break;
    }
    case 256684:
    {
        returnValue = F("Prophetenmühlenweg");
        break;
    }
    case 256685:
    {
        returnValue = F("Proppertweg");
        break;
    }
    case 256686:
    {
        returnValue = F("Propst-Bechte-Platz");
        break;
    }
    case 256687:
    {
        returnValue = F("Propst-Böckler-Str.");
        break;
    }
    case 256688:
    {
        returnValue = F("Propst-Bödiker Str.");
        break;
    }
    case 256689:
    {
        returnValue = F("Propst-Bömer-Str.");
        break;
    }
    case 256690:
    {
        returnValue = F("Propst-Denkhoff-Weg");
        break;
    }
    case 256691:
    {
        returnValue = F("Propst-Ermward-Ring");
        break;
    }
    case 256692:
    {
        returnValue = F("Propst-Ernst-Weg");
        break;
    }
    case 256693:
    {
        returnValue = F("Propst-Gerhard-Str.");
        break;
    }
    case 256694:
    {
        returnValue = F("Propst-Gerhoh-Str.");
        break;
    }
    case 256695:
    {
        returnValue = F("Propst-Grüneis-Str.");
        break;
    }
    case 256696:
    {
        returnValue = F("Propst-Hamm-Weg");
        break;
    }
    case 256697:
    {
        returnValue = F("Propst-Hartl-Str.");
        break;
    }
    case 256698:
    {
        returnValue = F("Propst-Hugenroth-Str.");
        break;
    }
    case 256699:
    {
        returnValue = F("Propst-Konermann-Weg");
        break;
    }
    case 256700:
    {
        returnValue = F("Propst-Krane-Platz");
        break;
    }
    case 256701:
    {
        returnValue = F("Propst-Krüppel-Str.");
        break;
    }
    case 256702:
    {
        returnValue = F("Propst-Köster-Str.");
        break;
    }
    case 256703:
    {
        returnValue = F("Propst-Kügelin-Str.");
        break;
    }
    case 256704:
    {
        returnValue = F("Propst-Laumann-Str.");
        break;
    }
    case 256705:
    {
        returnValue = F("Propst-Mayer-Str.");
        break;
    }
    case 256706:
    {
        returnValue = F("Propst-Mayr-Str.");
        break;
    }
    case 256707:
    {
        returnValue = F("Propst-Metternich-Str.");
        break;
    }
    case 256708:
    {
        returnValue = F("Propst-Meyer-Str.");
        break;
    }
    case 256709:
    {
        returnValue = F("Propst-Morhardt-Str.");
        break;
    }
    case 256710:
    {
        returnValue = F("Propst-Niehues-Str.");
        break;
    }
    case 256711:
    {
        returnValue = F("Propst-Nissen-Weg");
        break;
    }
    case 256712:
    {
        returnValue = F("Propst-Nübel-Str.");
        break;
    }
    case 256713:
    {
        returnValue = F("Propst-Pricking-Str.");
        break;
    }
    case 256714:
    {
        returnValue = F("Propst-Röhl-Str.");
        break;
    }
    case 256715:
    {
        returnValue = F("Propst-Schrull-Weg");
        break;
    }
    case 256716:
    {
        returnValue = F("Propst-Sievert-Weg");
        break;
    }
    case 256717:
    {
        returnValue = F("Propst-Tittelbach-Weg");
        break;
    }
    case 256718:
    {
        returnValue = F("Propst-Treplin-Weg");
        break;
    }
    case 256719:
    {
        returnValue = F("Propst-Wehage-Str.");
        break;
    }
    case 256720:
    {
        returnValue = F("Propst-Wenker-Str.");
        break;
    }
    case 256721:
    {
        returnValue = F("Propst-Zobel-Str.");
        break;
    }
    case 256722:
    {
        returnValue = F("Propstbalken");
        break;
    }
    case 256723:
    {
        returnValue = F("Propstei");
        break;
    }
    case 256724:
    {
        returnValue = F("Propsteigarten");
        break;
    }
    case 256725:
    {
        returnValue = F("Propsteigasse");
        break;
    }
    case 256726:
    {
        returnValue = F("Propsteigaßl");
        break;
    }
    case 256727:
    {
        returnValue = F("Propsteihof");
        break;
    }
    case 256728:
    {
        returnValue = F("Propsteiplatz");
        break;
    }
    case 256729:
    {
        returnValue = F("Propsteistr.");
        break;
    }
    case 256730:
    {
        returnValue = F("Propsteiweg");
        break;
    }
    case 256731:
    {
        returnValue = F("Propstenstr.");
        break;
    }
    case 256732:
    {
        returnValue = F("Propsthofstr.");
        break;
    }
    case 256733:
    {
        returnValue = F("Propstweg");
        break;
    }
    case 256734:
    {
        returnValue = F("Proraer Allee");
        break;
    }
    case 256735:
    {
        returnValue = F("Proraer Chaussee");
        break;
    }
    case 256736:
    {
        returnValue = F("Proraer Str.");
        break;
    }
    case 256737:
    {
        returnValue = F("Proschwitzer Str.");
        break;
    }
    case 256738:
    {
        returnValue = F("Proschwitzer Weg");
        break;
    }
    case 256739:
    {
        returnValue = F("Prosekalstr.");
        break;
    }
    case 256740:
    {
        returnValue = F("Prositz");
        break;
    }
    case 256741:
    {
        returnValue = F("Proskestr.");
        break;
    }
    case 256742:
    {
        returnValue = F("Prosnitz");
        break;
    }
    case 256743:
    {
        returnValue = F("Prosnitzer Wende");
        break;
    }
    case 256744:
    {
        returnValue = F("Prosper-Park");
        break;
    }
    case 256745:
    {
        returnValue = F("Prosperstr.");
        break;
    }
    case 256746:
    {
        returnValue = F("Prosselsheimer Str.");
        break;
    }
    case 256747:
    {
        returnValue = F("Prostekath");
        break;
    }
    case 256748:
    {
        returnValue = F("Prostewardsweg");
        break;
    }
    case 256749:
    {
        returnValue = F("Protasiusstr.");
        break;
    }
    case 256750:
    {
        returnValue = F("Prote-Straßburg-Weg");
        break;
    }
    case 256751:
    {
        returnValue = F("Protestr.");
        break;
    }
    case 256752:
    {
        returnValue = F("Proteststr.");
        break;
    }
    case 256753:
    {
        returnValue = F("Protschenbergstufen");
        break;
    }
    case 256754:
    {
        returnValue = F("Protsorgstr.");
        break;
    }
    case 256755:
    {
        returnValue = F("Protthöchte");
        break;
    }
    case 256756:
    {
        returnValue = F("Protzenweiherbrücke");
        break;
    }
    case 256757:
    {
        returnValue = F("Proustweg");
        break;
    }
    case 256758:
    {
        returnValue = F("Provencestr.");
        break;
    }
    case 256759:
    {
        returnValue = F("Provenceweg");
        break;
    }
    case 256760:
    {
        returnValue = F("Provianthausstr.");
        break;
    }
    case 256761:
    {
        returnValue = F("Proviantweg");
        break;
    }
    case 256762:
    {
        returnValue = F("Provinzial-Forst");
        break;
    }
    case 256763:
    {
        returnValue = F("Provinzialsiedlung");
        break;
    }
    case 256764:
    {
        returnValue = F("Provinzialstr.");
        break;
    }
    case 256765:
    {
        returnValue = F("Provinzstr.");
        break;
    }
    case 256766:
    {
        returnValue = F("Provinzweg");
        break;
    }
    case 256767:
    {
        returnValue = F("Provisorgäßle");
        break;
    }
    case 256768:
    {
        returnValue = F("Provisorische Anbindung zur Walter-Spiller-Brücke");
        break;
    }
    case 256769:
    {
        returnValue = F("Provisorium");
        break;
    }
    case 256770:
    {
        returnValue = F("Provisstr.");
        break;
    }
    case 256771:
    {
        returnValue = F("Provitwiese");
        break;
    }
    case 256772:
    {
        returnValue = F("Prowinkel");
        break;
    }
    case 256773:
    {
        returnValue = F("Proworoffweg");
        break;
    }
    case 256774:
    {
        returnValue = F("Prozeltener Weg");
        break;
    }
    case 256775:
    {
        returnValue = F("Prozessallee");
        break;
    }
    case 256776:
    {
        returnValue = F("Prozessbrunnenweg");
        break;
    }
    case 256777:
    {
        returnValue = F("Prozessessionsweg");
        break;
    }
    case 256778:
    {
        returnValue = F("Prozessionsschneise");
        break;
    }
    case 256779:
    {
        returnValue = F("Prozessionsweg");
        break;
    }
    case 256780:
    {
        returnValue = F("Prozessweg");
        break;
    }
    case 256781:
    {
        returnValue = F("Prozeßmoorweg");
        break;
    }
    case 256782:
    {
        returnValue = F("Prozeßweg");
        break;
    }
    case 256783:
    {
        returnValue = F("Proßweg");
        break;
    }
    case 256784:
    {
        returnValue = F("Prudentiastr.");
        break;
    }
    case 256785:
    {
        returnValue = F("Prudniker Kreisel");
        break;
    }
    case 256786:
    {
        returnValue = F("Pruihausen");
        break;
    }
    case 256787:
    {
        returnValue = F("Prumbomweg");
        break;
    }
    case 256788:
    {
        returnValue = F("Prumeallee");
        break;
    }
    case 256789:
    {
        returnValue = F("Prummerner Weg");
        break;
    }
    case 256790:
    {
        returnValue = F("Prunkelweg");
        break;
    }
    case 256791:
    {
        returnValue = F("Prunkstr.");
        break;
    }
    case 256792:
    {
        returnValue = F("Prunkweg");
        break;
    }
    case 256793:
    {
        returnValue = F("Prunn");
        break;
    }
    case 256794:
    {
        returnValue = F("Prunner Bergstr.");
        break;
    }
    case 256795:
    {
        returnValue = F("Prunner Hauptstr.");
        break;
    }
    case 256796:
    {
        returnValue = F("Prunner Str.");
        break;
    }
    case 256797:
    {
        returnValue = F("Prunstwiete");
        break;
    }
    case 256798:
    {
        returnValue = F("Prunusbrink");
        break;
    }
    case 256799:
    {
        returnValue = F("Prunzelberg");
        break;
    }
    case 256800:
    {
        returnValue = F("Pruppach");
        break;
    }
    case 256801:
    {
        returnValue = F("Pruppacher Hauptstr.");
        break;
    }
    case 256802:
    {
        returnValue = F("Pruppacher Weg");
        break;
    }
    case 256803:
    {
        returnValue = F("Prussman Avenue");
        break;
    }
    case 256804:
    {
        returnValue = F("Pruthstr.");
        break;
    }
    case 256805:
    {
        returnValue = F("Prympark");
        break;
    }
    case 256806:
    {
        returnValue = F("Prymstr.");
        break;
    }
    case 256807:
    {
        returnValue = F("Przemyśl-Weg");
        break;
    }
    case 256808:
    {
        returnValue = F("Przewalski- Urwildpferde");
        break;
    }
    case 256809:
    {
        returnValue = F("Präbachstr.");
        break;
    }
    case 256810:
    {
        returnValue = F("Prächtinger Hauptstr.");
        break;
    }
    case 256811:
    {
        returnValue = F("Prächtinger Str.");
        break;
    }
    case 256812:
    {
        returnValue = F("Prädikatsallee");
        break;
    }
    case 256813:
    {
        returnValue = F("Prädikaturstr.");
        break;
    }
    case 256814:
    {
        returnValue = F("Prädikower Str.");
        break;
    }
    case 256815:
    {
        returnValue = F("Prädikower Weg");
        break;
    }
    case 256816:
    {
        returnValue = F("Präfekturhof");
        break;
    }
    case 256817:
    {
        returnValue = F("Prägarten");
        break;
    }
    case 256818:
    {
        returnValue = F("Prägenhofstr.");
        break;
    }
    case 256819:
    {
        returnValue = F("Präkelweg");
        break;
    }
    case 256820:
    {
        returnValue = F("Präkert");
        break;
    }
    case 256821:
    {
        returnValue = F("Präl.-Röll-Weg");
        break;
    }
    case 256822:
    {
        returnValue = F("Prälank-Dorf");
        break;
    }
    case 256823:
    {
        returnValue = F("Prälanker Weg");
        break;
    }
    case 256824:
    {
        returnValue = F("Prälat-Alberstötter-Str.");
        break;
    }
    case 256825:
    {
        returnValue = F("Prälat-Anheier-Str.");
        break;
    }
    case 256826:
    {
        returnValue = F("Prälat-Axtmann-Ring");
        break;
    }
    case 256827:
    {
        returnValue = F("Prälat-Baldauf-Str.");
        break;
    }
    case 256828:
    {
        returnValue = F("Prälat-Bank-Str.");
        break;
    }
    case 256829:
    {
        returnValue = F("Prälat-Bartels-Str.");
        break;
    }
    case 256830:
    {
        returnValue = F("Prälat-Beigel-Str.");
        break;
    }
    case 256831:
    {
        returnValue = F("Prälat-Beinhölzl-Str.");
        break;
    }
    case 256832:
    {
        returnValue = F("Prälat-Benz-Str.");
        break;
    }
    case 256833:
    {
        returnValue = F("Prälat-Benz-Weg");
        break;
    }
    case 256834:
    {
        returnValue = F("Prälat-Briechle-Weg");
        break;
    }
    case 256835:
    {
        returnValue = F("Prälat-Brommer-Str.");
        break;
    }
    case 256836:
    {
        returnValue = F("Prälat-Buchholz-Str.");
        break;
    }
    case 256837:
    {
        returnValue = F("Prälat-Buchner-Str.");
        break;
    }
    case 256838:
    {
        returnValue = F("Prälat-Buschmeier-Str.");
        break;
    }
    case 256839:
    {
        returnValue = F("Prälat-Caire-Str.");
        break;
    }
    case 256840:
    {
        returnValue = F("Prälat-Degener-Str.");
        break;
    }
    case 256841:
    {
        returnValue = F("Prälat-Diehl-Str.");
        break;
    }
    case 256842:
    {
        returnValue = F("Prälat-Dimpfl-Str.");
        break;
    }
    case 256843:
    {
        returnValue = F("Prälat-Dorr-Str.");
        break;
    }
    case 256844:
    {
        returnValue = F("Prälat-Dr.-Hartig-Str.");
        break;
    }
    case 256845:
    {
        returnValue = F("Prälat-Dr.-Selung-Str.");
        break;
    }
    case 256846:
    {
        returnValue = F("Prälat-Dörfler-Str.");
        break;
    }
    case 256847:
    {
        returnValue = F("Prälat-Eckhard-Str.");
        break;
    }
    case 256848:
    {
        returnValue = F("Prälat-Eichenlaub-Str.");
        break;
    }
    case 256849:
    {
        returnValue = F("Prälat-Endrich-Platz");
        break;
    }
    case 256850:
    {
        returnValue = F("Prälat-Englhardt-Str.");
        break;
    }
    case 256851:
    {
        returnValue = F("Prälat-Faber-Str.");
        break;
    }
    case 256852:
    {
        returnValue = F("Prälat-Fiedler-Str.");
        break;
    }
    case 256853:
    {
        returnValue = F("Prälat-Fischer-Str.");
        break;
    }
    case 256854:
    {
        returnValue = F("Prälat-Foltz-Str.");
        break;
    }
    case 256855:
    {
        returnValue = F("Prälat-Franken-Str.");
        break;
    }
    case 256856:
    {
        returnValue = F("Prälat-Fries-Str.");
        break;
    }
    case 256857:
    {
        returnValue = F("Prälat-Goebel-Str.");
        break;
    }
    case 256858:
    {
        returnValue = F("Prälat-Graf-Str.");
        break;
    }
    case 256859:
    {
        returnValue = F("Prälat-Griener-Str.");
        break;
    }
    case 256860:
    {
        returnValue = F("Prälat-Gräf-Str.");
        break;
    }
    case 256861:
    {
        returnValue = F("Prälat-Gschwind-Kreuzweg");
        break;
    }
    case 256862:
    {
        returnValue = F("Prälat-Haas-Str.");
        break;
    }
    case 256863:
    {
        returnValue = F("Prälat-Hartz-Str.");
        break;
    }
    case 256864:
    {
        returnValue = F("Prälat-Heckelmann-Str.");
        break;
    }
    case 256865:
    {
        returnValue = F("Prälat-Heinrich-Fischer-Platz");
        break;
    }
    case 256866:
    {
        returnValue = F("Prälat-Hermann-Str.");
        break;
    }
    case 256867:
    {
        returnValue = F("Prälat-Hinderberger-Str.");
        break;
    }
    case 256868:
    {
        returnValue = F("Prälat-Holl-Str.");
        break;
    }
    case 256869:
    {
        returnValue = F("Prälat-Hufnagel-Str.");
        break;
    }
    case 256870:
    {
        returnValue = F("Prälat-Hummel-Str.");
        break;
    }
    case 256871:
    {
        returnValue = F("Prälat-Husse-Platz");
        break;
    }
    case 256872:
    {
        returnValue = F("Prälat-Höing-Str.");
        break;
    }
    case 256873:
    {
        returnValue = F("Prälat-Kaiser-Str.");
        break;
    }
    case 256874:
    {
        returnValue = F("Prälat-Kastenholz-Platz");
        break;
    }
    case 256875:
    {
        returnValue = F("Prälat-Kluge-Str.");
        break;
    }
    case 256876:
    {
        returnValue = F("Prälat-Knaupp-Weg");
        break;
    }
    case 256877:
    {
        returnValue = F("Prälat-Koch-Str.");
        break;
    }
    case 256878:
    {
        returnValue = F("Prälat-Koll-Weg");
        break;
    }
    case 256879:
    {
        returnValue = F("Prälat-Konermann-Str.");
        break;
    }
    case 256880:
    {
        returnValue = F("Prälat-Kopp-Str.");
        break;
    }
    case 256881:
    {
        returnValue = F("Prälat-Kraus-Str.");
        break;
    }
    case 256882:
    {
        returnValue = F("Prälat-Kreutz-Str.");
        break;
    }
    case 256883:
    {
        returnValue = F("Prälat-Krämer-Str.");
        break;
    }
    case 256884:
    {
        returnValue = F("Prälat-Kuffner-Str.");
        break;
    }
    case 256885:
    {
        returnValue = F("Prälat-Kufner-Str.");
        break;
    }
    case 256886:
    {
        returnValue = F("Prälat-Kürzinger-Str.");
        break;
    }
    case 256887:
    {
        returnValue = F("Prälat-Langhauser-Str.");
        break;
    }
    case 256888:
    {
        returnValue = F("Prälat-Lauer-Str.");
        break;
    }
    case 256889:
    {
        returnValue = F("Prälat-Lessenich-Str.");
        break;
    }
    case 256890:
    {
        returnValue = F("Prälat-Leutgeb-Str.");
        break;
    }
    case 256891:
    {
        returnValue = F("Prälat-Lewen-Str.");
        break;
    }
    case 256892:
    {
        returnValue = F("Prälat-Linus-Bopp-Platz");
        break;
    }
    case 256893:
    {
        returnValue = F("Prälat-Ludsteck-Str.");
        break;
    }
    case 256894:
    {
        returnValue = F("Prälat-Lutz-Str.");
        break;
    }
    case 256895:
    {
        returnValue = F("Prälat-Marschall-Str.");
        break;
    }
    case 256896:
    {
        returnValue = F("Prälat-Martin-Rohrmeier-Weg");
        break;
    }
    case 256897:
    {
        returnValue = F("Prälat-Mayer-Platz");
        break;
    }
    case 256898:
    {
        returnValue = F("Prälat-Meier-Platz");
        break;
    }
    case 256899:
    {
        returnValue = F("Prälat-Meindl-Str.");
        break;
    }
    case 256900:
    {
        returnValue = F("Prälat-Meixner-Str.");
        break;
    }
    case 256901:
    {
        returnValue = F("Prälat-Michael-Höck-Str.");
        break;
    }
    case 256902:
    {
        returnValue = F("Prälat-Morthorst-Str.");
        break;
    }
    case 256903:
    {
        returnValue = F("Prälat-Mühldorfer-Str.");
        break;
    }
    case 256904:
    {
        returnValue = F("Prälat-Müller-Str.");
        break;
    }
    case 256905:
    {
        returnValue = F("Prälat-Neun-Str.");
        break;
    }
    case 256906:
    {
        returnValue = F("Prälat-Nißl-Str.");
        break;
    }
    case 256907:
    {
        returnValue = F("Prälat-Pfanzelt-Str.");
        break;
    }
    case 256908:
    {
        returnValue = F("Prälat-Popp-Weg");
        break;
    }
    case 256909:
    {
        returnValue = F("Prälat-Reitzer-Str.");
        break;
    }
    case 256910:
    {
        returnValue = F("Prälat-Rieger-Str.");
        break;
    }
    case 256911:
    {
        returnValue = F("Prälat-Roderer-Str.");
        break;
    }
    case 256912:
    {
        returnValue = F("Prälat-Roth-Str.");
        break;
    }
    case 256913:
    {
        returnValue = F("Prälat-Ruf-Str.");
        break;
    }
    case 256914:
    {
        returnValue = F("Prälat-Rößler-Str.");
        break;
    }
    case 256915:
    {
        returnValue = F("Prälat-Satzger-Str.");
        break;
    }
    case 256916:
    {
        returnValue = F("Prälat-Sauer-Str.");
        break;
    }
    case 256917:
    {
        returnValue = F("Prälat-Schneider-Str.");
        break;
    }
    case 256918:
    {
        returnValue = F("Prälat-Schuh-Weg");
        break;
    }
    case 256919:
    {
        returnValue = F("Prälat-Schwamborn-Str.");
        break;
    }
    case 256920:
    {
        returnValue = F("Prälat-Schweiger-Weg");
        break;
    }
    case 256921:
    {
        returnValue = F("Prälat-Schütz-Str.");
        break;
    }
    case 256922:
    {
        returnValue = F("Prälat-Sindersberger-Str.");
        break;
    }
    case 256923:
    {
        returnValue = F("Prälat-Sommer-Str.");
        break;
    }
    case 256924:
    {
        returnValue = F("Prälat-Sperber-Platz");
        break;
    }
    case 256925:
    {
        returnValue = F("Prälat-Stein-Str.");
        break;
    }
    case 256926:
    {
        returnValue = F("Prälat-Stephan-Str.");
        break;
    }
    case 256927:
    {
        returnValue = F("Prälat-Stiefvater-Weg");
        break;
    }
    case 256928:
    {
        returnValue = F("Prälat-Storck-Str.");
        break;
    }
    case 256929:
    {
        returnValue = F("Prälat-Subtil-Ring");
        break;
    }
    case 256930:
    {
        returnValue = F("Prälat-Thaller-Str.");
        break;
    }
    case 256931:
    {
        returnValue = F("Prälat-Triller-Str.");
        break;
    }
    case 256932:
    {
        returnValue = F("Prälat-Töpsl-Str.");
        break;
    }
    case 256933:
    {
        returnValue = F("Prälat-Uttlinger-Str.");
        break;
    }
    case 256934:
    {
        returnValue = F("Prälat-Walter-Str.");
        break;
    }
    case 256935:
    {
        returnValue = F("Prälat-Walzer-Passage");
        break;
    }
    case 256936:
    {
        returnValue = F("Prälat-Werthmann-Ring");
        break;
    }
    case 256937:
    {
        returnValue = F("Prälat-Werthmann-Str.");
        break;
    }
    case 256938:
    {
        returnValue = F("Prälat-Wirtz-Str.");
        break;
    }
    case 256939:
    {
        returnValue = F("Prälat-Wolker-Str.");
        break;
    }
    case 256940:
    {
        returnValue = F("Prälat-Zellner-Str.");
        break;
    }
    case 256941:
    {
        returnValue = F("Prälat-Zimmerman-Str.");
        break;
    }
    case 256942:
    {
        returnValue = F("Prälat-Zimmermann-Str.");
        break;
    }
    case 256943:
    {
        returnValue = F("Prälat-de-Waal-Str.");
        break;
    }
    case 256944:
    {
        returnValue = F("Prälat_Eggersdorfer-Str.");
        break;
    }
    case 256945:
    {
        returnValue = F("Prälaten-Hartl-Str.");
        break;
    }
    case 256946:
    {
        returnValue = F("Prälatenberg");
        break;
    }
    case 256947:
    {
        returnValue = F("Prälatengarten");
        break;
    }
    case 256948:
    {
        returnValue = F("Prälatenstr.");
        break;
    }
    case 256949:
    {
        returnValue = F("Prälatenweg");
        break;
    }
    case 256950:
    {
        returnValue = F("Prälatenwinkel");
        break;
    }
    case 256951:
    {
        returnValue = F("Prälaturstr.");
        break;
    }
    case 256952:
    {
        returnValue = F("Prämienstr.");
        break;
    }
    case 256953:
    {
        returnValue = F("Prämonstratenserberg");
        break;
    }
    case 256954:
    {
        returnValue = F("Prämonstratenserstr.");
        break;
    }
    case 256955:
    {
        returnValue = F("Präntlweg");
        break;
    }
    case 256956:
    {
        returnValue = F("Prärie mit Stauden");
        break;
    }
    case 256957:
    {
        returnValue = F("Präriehunde");
        break;
    }
    case 256958:
    {
        returnValue = F("Präsauka");
        break;
    }
    case 256959:
    {
        returnValue = F("Präsenkamp");
        break;
    }
    case 256960:
    {
        returnValue = F("Präsenzgasse");
        break;
    }
    case 256961:
    {
        returnValue = F("Präsenzgässle");
        break;
    }
    case 256962:
    {
        returnValue = F("Präsenzgäßchen");
        break;
    }
    case 256963:
    {
        returnValue = F("Präsenzgäßle");
        break;
    }
    case 256964:
    {
        returnValue = F("Präses-Held-Str.");
        break;
    }
    case 256965:
    {
        returnValue = F("Präses-Koch-Str.");
        break;
    }
    case 256966:
    {
        returnValue = F("Präses-Wirtz-Weg");
        break;
    }
    case 256967:
    {
        returnValue = F("Präsident-Friese-Weg");
        break;
    }
    case 256968:
    {
        returnValue = F("Präsident-Herwig-Str.");
        break;
    }
    case 256969:
    {
        returnValue = F("Präsident-Keil-Platz");
        break;
    }
    case 256970:
    {
        returnValue = F("Präsident-Mohr-Str.");
        break;
    }
    case 256971:
    {
        returnValue = F("Präsident-Thoma-Weg");
        break;
    }
    case 256972:
    {
        returnValue = F("Präsidentenstr.");
        break;
    }
    case 256973:
    {
        returnValue = F("Präsidentenweg");
        break;
    }
    case 256974:
    {
        returnValue = F("Präsidentstr.");
        break;
    }
    case 256975:
    {
        returnValue = F("Prästers Jaat");
        break;
    }
    case 256976:
    {
        returnValue = F("Prästerstigh");
        break;
    }
    case 256977:
    {
        returnValue = F("Prätoriusstr.");
        break;
    }
    case 256978:
    {
        returnValue = F("Präzeptorhof");
        break;
    }
    case 256979:
    {
        returnValue = F("Pré-Saint-Gervais-Str.");
        break;
    }
    case 256980:
    {
        returnValue = F("Pröbelsfeld");
        break;
    }
    case 256981:
    {
        returnValue = F("Pröbenweg");
        break;
    }
    case 256982:
    {
        returnValue = F("Pröbstenerstr.");
        break;
    }
    case 256983:
    {
        returnValue = F("Pröbstenweg");
        break;
    }
    case 256984:
    {
        returnValue = F("Pröbstinger Busch");
        break;
    }
    case 256985:
    {
        returnValue = F("Pröbstingholz");
        break;
    }
    case 256986:
    {
        returnValue = F("Pröbstings Heide");
        break;
    }
    case 256987:
    {
        returnValue = F("Pröbstingstr.");
        break;
    }
    case 256988:
    {
        returnValue = F("Pröbstingweg");
        break;
    }
    case 256989:
    {
        returnValue = F("Pröbstlstr.");
        break;
    }
    case 256990:
    {
        returnValue = F("Pröda");
        break;
    }
    case 256991:
    {
        returnValue = F("Prödeler Str.");
        break;
    }
    case 256992:
    {
        returnValue = F("Prödeler Weg");
        break;
    }
    case 256993:
    {
        returnValue = F("Prödelweg");
        break;
    }
    case 256994:
    {
        returnValue = F("Prölitzschweg");
        break;
    }
    case 256995:
    {
        returnValue = F("Pröllengasse");
        break;
    }
    case 256996:
    {
        returnValue = F("Pröllerstr.");
        break;
    }
    case 256997:
    {
        returnValue = F("Pröllerweg");
        break;
    }
    case 256998:
    {
        returnValue = F("Prönsdorf");
        break;
    }
    case 256999:
    {
        returnValue = F("Pröpstinghoff");
        break;
    }
    case 257000:
    {
        returnValue = F("Pröpstingweg");
        break;
    }
    case 257001:
    {
        returnValue = F("Prösaer Weg");
        break;
    }
    case 257002:
    {
        returnValue = F("Pröschstr.");
        break;
    }
    case 257003:
    {
        returnValue = F("Prösener Weg");
        break;
    }
    case 257004:
    {
        returnValue = F("Prösitz");
        break;
    }
    case 257005:
    {
        returnValue = F("Prösten");
        break;
    }
    case 257006:
    {
        returnValue = F("Pröstrich");
        break;
    }
    case 257007:
    {
        returnValue = F("Pröstteft");
        break;
    }
    case 257008:
    {
        returnValue = F("Pröstwai");
        break;
    }
    case 257009:
    {
        returnValue = F("Prötschenbacher Weg");
        break;
    }
    case 257010:
    {
        returnValue = F("Pröttitzer Str.");
        break;
    }
    case 257011:
    {
        returnValue = F("Pröttliner Dorfstr.");
        break;
    }
    case 257012:
    {
        returnValue = F("Pröttliner Hauptstr.");
        break;
    }
    case 257013:
    {
        returnValue = F("Prötze");
        break;
    }
    case 257014:
    {
        returnValue = F("Prötzeler Chaussee");
        break;
    }
    case 257015:
    {
        returnValue = F("Prötzeler Str.");
        break;
    }
    case 257016:
    {
        returnValue = F("Prötzelsdorfer Weg");
        break;
    }
    case 257017:
    {
        returnValue = F("Prötzelweg");
        break;
    }
    case 257018:
    {
        returnValue = F("Prötzeweg");
        break;
    }
    case 257019:
    {
        returnValue = F("Prövenholzstr.");
        break;
    }
    case 257020:
    {
        returnValue = F("Prößdorfer Weg");
        break;
    }
    case 257021:
    {
        returnValue = F("Prößelbuckweg");
        break;
    }
    case 257022:
    {
        returnValue = F("Prößlstr.");
        break;
    }
    case 257023:
    {
        returnValue = F("Prüfeninger Höhe");
        break;
    }
    case 257024:
    {
        returnValue = F("Prüfeninger Schloßstr.");
        break;
    }
    case 257025:
    {
        returnValue = F("Prüfeninger Schulgasse");
        break;
    }
    case 257026:
    {
        returnValue = F("Prüfeninger Str.");
        break;
    }
    case 257027:
    {
        returnValue = F("Prüfeninger Weg");
        break;
    }
    case 257028:
    {
        returnValue = F("Prüfern");
        break;
    }
    case 257029:
    {
        returnValue = F("Prüferstr.");
        break;
    }
    case 257030:
    {
        returnValue = F("Prügelallee");
        break;
    }
    case 257031:
    {
        returnValue = F("Prügelbahnweg");
        break;
    }
    case 257032:
    {
        returnValue = F("Prügelberg");
        break;
    }
    case 257033:
    {
        returnValue = F("Prügeler Weg");
        break;
    }
    case 257034:
    {
        returnValue = F("Prügelgasse");
        break;
    }
    case 257035:
    {
        returnValue = F("Prügelweg");
        break;
    }
    case 257036:
    {
        returnValue = F("Prüglweg");
        break;
    }
    case 257037:
    {
        returnValue = F("Prühler Str.");
        break;
    }
    case 257038:
    {
        returnValue = F("Prühlitz");
        break;
    }
    case 257039:
    {
        returnValue = F("Prühlitzer Str.");
        break;
    }
    case 257040:
    {
        returnValue = F("Prühlstr.");
        break;
    }
    case 257041:
    {
        returnValue = F("Prüll");
        break;
    }
    case 257042:
    {
        returnValue = F("Prüllageweg");
        break;
    }
    case 257043:
    {
        returnValue = F("Prüllsbirkig");
        break;
    }
    case 257044:
    {
        returnValue = F("Prüllstr.");
        break;
    }
    case 257045:
    {
        returnValue = F("Prümburgstr.");
        break;
    }
    case 257046:
    {
        returnValue = F("Prümer Berg");
        break;
    }
    case 257047:
    {
        returnValue = F("Prümer Str.");
        break;
    }
    case 257048:
    {
        returnValue = F("Prümer Wall");
        break;
    }
    case 257049:
    {
        returnValue = F("Prümer Weg");
        break;
    }
    case 257050:
    {
        returnValue = F("Prümerweg");
        break;
    }
    case 257051:
    {
        returnValue = F("Prümmenfeld");
        break;
    }
    case 257052:
    {
        returnValue = F("Prümmenweg");
        break;
    }
    case 257053:
    {
        returnValue = F("Prümmsgasse");
        break;
    }
    case 257054:
    {
        returnValue = F("Prümstr.");
        break;
    }
    case 257055:
    {
        returnValue = F("Prümtalstr.");
        break;
    }
    case 257056:
    {
        returnValue = F("Prümzurlayer Str.");
        break;
    }
    case 257057:
    {
        returnValue = F("Prüngselter");
        break;
    }
    case 257058:
    {
        returnValue = F("Prünster Dorfstr.");
        break;
    }
    case 257059:
    {
        returnValue = F("Prünster Ring");
        break;
    }
    case 257060:
    {
        returnValue = F("Prünster Weg");
        break;
    }
    case 257061:
    {
        returnValue = F("Prünstweg");
        break;
    }
    case 257062:
    {
        returnValue = F("Prüssenstr.");
        break;
    }
    case 257063:
    {
        returnValue = F("Prüssestr.");
        break;
    }
    case 257064:
    {
        returnValue = F("Prüssingstr.");
        break;
    }
    case 257065:
    {
        returnValue = F("Prützen");
        break;
    }
    case 257066:
    {
        returnValue = F("Prüßentrift");
        break;
    }
    case 257067:
    {
        returnValue = F("Pschachelstr.");
        break;
    }
    case 257068:
    {
        returnValue = F("Pschorrgasse");
        break;
    }
    case 257069:
    {
        returnValue = F("Pschorrstr.");
        break;
    }
    case 257070:
    {
        returnValue = F("Pskower Str.");
        break;
    }
    case 257071:
    {
        returnValue = F("Pskowstr.");
        break;
    }
    case 257072:
    {
        returnValue = F("Puan-Stöven-Weg");
        break;
    }
    case 257073:
    {
        returnValue = F("Puccini-Ring");
        break;
    }
    case 257074:
    {
        returnValue = F("Puccinistr.");
        break;
    }
    case 257075:
    {
        returnValue = F("Pucciniweg");
        break;
    }
    case 257076:
    {
        returnValue = F("Puchberger Ring");
        break;
    }
    case 257077:
    {
        returnValue = F("Puchberger Str.");
        break;
    }
    case 257078:
    {
        returnValue = F("Puchbergerstr.");
        break;
    }
    case 257079:
    {
        returnValue = F("Puchbergerweg");
        break;
    }
    case 257080:
    {
        returnValue = F("Pucher");
        break;
    }
    case 257081:
    {
        returnValue = F("Pucher Weg");
        break;
    }
    case 257082:
    {
        returnValue = F("Pucherstr.");
        break;
    }
    case 257083:
    {
        returnValue = F("Puchheimer Str.");
        break;
    }
    case 257084:
    {
        returnValue = F("Puchheimer Weg");
        break;
    }
    case 257085:
    {
        returnValue = F("Puchhof");
        break;
    }
    case 257086:
    {
        returnValue = F("Puchhofer Str.");
        break;
    }
    case 257087:
    {
        returnValue = F("Puchhofer Weg");
        break;
    }
    case 257088:
    {
        returnValue = F("Puchower Chaussee");
        break;
    }
    case 257089:
    {
        returnValue = F("Puchower Weg");
        break;
    }
    case 257090:
    {
        returnValue = F("Puchtastr.");
        break;
    }
    case 257091:
    {
        returnValue = F("Puchtweg");
        break;
    }
    case 257092:
    {
        returnValue = F("Puck'sche Koppel");
        break;
    }
    case 257093:
    {
        returnValue = F("Puckewese");
        break;
    }
    case 257094:
    {
        returnValue = F("Puckscher Hof");
        break;
    }
    case 257095:
    {
        returnValue = F("Puddemin");
        break;
    }
    case 257096:
    {
        returnValue = F("Puddeweg");
        break;
    }
    case 257097:
    {
        returnValue = F("Pudelfehner Weg");
        break;
    }
    case 257098:
    {
        returnValue = F("Pudelgasse");
        break;
    }
    case 257099:
    {
        returnValue = F("Pudelhofsweg");
        break;
    }
    case 257100:
    {
        returnValue = F("Pudelmützweg");
        break;
    }
    case 257101:
    {
        returnValue = F("Pudelwiese");
        break;
    }
    case 257102:
    {
        returnValue = F("Puderbacher Str.");
        break;
    }
    case 257103:
    {
        returnValue = F("Puderbacher Weg");
        break;
    }
    case 257104:
    {
        returnValue = F("Puecherstr.");
        break;
    }
    case 257105:
    {
        returnValue = F("Puetgasse");
        break;
    }
    case 257106:
    {
        returnValue = F("Pufendorfstr.");
        break;
    }
    case 257107:
    {
        returnValue = F("Pufferholzweg");
        break;
    }
    case 257108:
    {
        returnValue = F("Pufferstr.");
        break;
    }
    case 257109:
    {
        returnValue = F("Puggenhorst");
        break;
    }
    case 257110:
    {
        returnValue = F("Pugholz");
        break;
    }
    case 257111:
    {
        returnValue = F("Pugmai");
        break;
    }
    case 257112:
    {
        returnValue = F("Puheweg");
        break;
    }
    case 257113:
    {
        returnValue = F("Puhl");
        break;
    }
    case 257114:
    {
        returnValue = F("Puhler Str.");
        break;
    }
    case 257115:
    {
        returnValue = F("Puhlmannsteig");
        break;
    }
    case 257116:
    {
        returnValue = F("Puhls Brück");
        break;
    }
    case 257117:
    {
        returnValue = F("Puhlstr.");
        break;
    }
    case 257118:
    {
        returnValue = F("Puhäcker");
        break;
    }
    case 257119:
    {
        returnValue = F("Puida");
        break;
    }
    case 257120:
    {
        returnValue = F("Puidstr.");
        break;
    }
    case 257121:
    {
        returnValue = F("Puisterpatt");
        break;
    }
    case 257122:
    {
        returnValue = F("Puisterweg");
        break;
    }
    case 257123:
    {
        returnValue = F("Puitweg");
        break;
    }
    case 257124:
    {
        returnValue = F("Pula-Str.");
        break;
    }
    case 257125:
    {
        returnValue = F("Puldgasse");
        break;
    }
    case 257126:
    {
        returnValue = F("Pulfrichstr.");
        break;
    }
    case 257127:
    {
        returnValue = F("Pulgarer Weg");
        break;
    }
    case 257128:
    {
        returnValue = F("Pulheimer Str.");
        break;
    }
    case 257129:
    {
        returnValue = F("Pulheimer Weg");
        break;
    }
    case 257130:
    {
        returnValue = F("Pulignystr.");
        break;
    }
    case 257131:
    {
        returnValue = F("Pulitzer Grund");
        break;
    }
    case 257132:
    {
        returnValue = F("Pulitzer Weg");
        break;
    }
    case 257133:
    {
        returnValue = F("Pull");
        break;
    }
    case 257134:
    {
        returnValue = F("Pullach");
        break;
    }
    case 257135:
    {
        returnValue = F("Pullacher Au");
        break;
    }
    case 257136:
    {
        returnValue = F("Pullacher Kirchweg");
        break;
    }
    case 257137:
    {
        returnValue = F("Pullacher Kreisel");
        break;
    }
    case 257138:
    {
        returnValue = F("Pullacher Str.");
        break;
    }
    case 257139:
    {
        returnValue = F("Pullachstr.");
        break;
    }
    case 257140:
    {
        returnValue = F("Pullenried");
        break;
    }
    case 257141:
    {
        returnValue = F("Puller Weg");
        break;
    }
    case 257142:
    {
        returnValue = F("Pullerweg");
        break;
    }
    case 257143:
    {
        returnValue = F("Pullinger Hauptstr.");
        break;
    }
    case 257144:
    {
        returnValue = F("Pullingstr.");
        break;
    }
    case 257145:
    {
        returnValue = F("Pulnoy-Str.");
        break;
    }
    case 257146:
    {
        returnValue = F("Pulort");
        break;
    }
    case 257147:
    {
        returnValue = F("Pulpattweg");
        break;
    }
    case 257148:
    {
        returnValue = F("Pulsberger Weg");
        break;
    }
    case 257149:
    {
        returnValue = F("Pulschnitzberg");
        break;
    }
    case 257150:
    {
        returnValue = F("Pulsener Weg");
        break;
    }
    case 257151:
    {
        returnValue = F("Pulser Str.");
        break;
    }
    case 257152:
    {
        returnValue = F("Pulsitzer Hauptstr.");
        break;
    }
    case 257153:
    {
        returnValue = F("Pulsitzer Weg");
        break;
    }
    case 257154:
    {
        returnValue = F("Pulsnitzer Str.");
        break;
    }
    case 257155:
    {
        returnValue = F("Pulsnitzstr.");
        break;
    }
    case 257156:
    {
        returnValue = F("Pulsnitztalstr.");
        break;
    }
    case 257157:
    {
        returnValue = F("Pulsnitzweg");
        break;
    }
    case 257158:
    {
        returnValue = F("Pulspfordaer Str.");
        break;
    }
    case 257159:
    {
        returnValue = F("Pulsstr.");
        break;
    }
    case 257160:
    {
        returnValue = F("Pulster Weg");
        break;
    }
    case 257161:
    {
        returnValue = F("Pulsweg");
        break;
    }
    case 257162:
    {
        returnValue = F("Pulterei");
        break;
    }
    case 257163:
    {
        returnValue = F("Pulterkuhle");
        break;
    }
    case 257164:
    {
        returnValue = F("Pultfeldstr.");
        break;
    }
    case 257165:
    {
        returnValue = F("Pulverbeck");
        break;
    }
    case 257166:
    {
        returnValue = F("Pulverberg");
        break;
    }
    case 257167:
    {
        returnValue = F("Pulverbergstr.");
        break;
    }
    case 257168:
    {
        returnValue = F("Pulverbächleweg");
        break;
    }
    case 257169:
    {
        returnValue = F("Pulverdamm");
        break;
    }
    case 257170:
    {
        returnValue = F("Pulverdingen");
        break;
    }
    case 257171:
    {
        returnValue = F("Pulverdinger Str.");
        break;
    }
    case 257172:
    {
        returnValue = F("Pulverei");
        break;
    }
    case 257173:
    {
        returnValue = F("Pulvergarten");
        break;
    }
    case 257174:
    {
        returnValue = F("Pulvergartenstr.");
        break;
    }
    case 257175:
    {
        returnValue = F("Pulvergasse");
        break;
    }
    case 257176:
    {
        returnValue = F("Pulvergässle");
        break;
    }
    case 257177:
    {
        returnValue = F("Pulvergäßchen");
        break;
    }
    case 257178:
    {
        returnValue = F("Pulverhaus");
        break;
    }
    case 257179:
    {
        returnValue = F("Pulverhausweg");
        break;
    }
    case 257180:
    {
        returnValue = F("Pulverhof");
        break;
    }
    case 257181:
    {
        returnValue = F("Pulverhofstr.");
        break;
    }
    case 257182:
    {
        returnValue = F("Pulverholz");
        break;
    }
    case 257183:
    {
        returnValue = F("Pulverholzer Ziegeleiweg");
        break;
    }
    case 257184:
    {
        returnValue = F("Pulverholzer Ziegelteich");
        break;
    }
    case 257185:
    {
        returnValue = F("Pulverholzweg");
        break;
    }
    case 257186:
    {
        returnValue = F("Pulverhäuserweg");
        break;
    }
    case 257187:
    {
        returnValue = F("Pulverhäuslekopfweg");
        break;
    }
    case 257188:
    {
        returnValue = F("Pulverhäusleweg");
        break;
    }
    case 257189:
    {
        returnValue = F("Pulverich");
        break;
    }
    case 257190:
    {
        returnValue = F("Pulverkamp");
        break;
    }
    case 257191:
    {
        returnValue = F("Pulvermaarstr.");
        break;
    }
    case 257192:
    {
        returnValue = F("Pulvermacherei");
        break;
    }
    case 257193:
    {
        returnValue = F("Pulvermatte");
        break;
    }
    case 257194:
    {
        returnValue = F("Pulvermühle");
        break;
    }
    case 257195:
    {
        returnValue = F("Pulvermühle Pferdebahn");
        break;
    }
    case 257196:
    {
        returnValue = F("Pulvermühlenweg");
        break;
    }
    case 257197:
    {
        returnValue = F("Pulvermühlstr.");
        break;
    }
    case 257198:
    {
        returnValue = F("Pulvermühlweg");
        break;
    }
    case 257199:
    {
        returnValue = F("Pulvermüllerweg");
        break;
    }
    case 257200:
    {
        returnValue = F("Pulverpohl");
        break;
    }
    case 257201:
    {
        returnValue = F("Pulverrasen");
        break;
    }
    case 257202:
    {
        returnValue = F("Pulversteinstr.");
        break;
    }
    case 257203:
    {
        returnValue = F("Pulverstr.");
        break;
    }
    case 257204:
    {
        returnValue = F("Pulvertal");
        break;
    }
    case 257205:
    {
        returnValue = F("Pulvertalweg");
        break;
    }
    case 257206:
    {
        returnValue = F("Pulvertobelweg");
        break;
    }
    case 257207:
    {
        returnValue = F("Pulverturm");
        break;
    }
    case 257208:
    {
        returnValue = F("Pulverturmgasse");
        break;
    }
    case 257209:
    {
        returnValue = F("Pulverturmsstr.");
        break;
    }
    case 257210:
    {
        returnValue = F("Pulverturmstr.");
        break;
    }
    case 257211:
    {
        returnValue = F("Pulverturmwall");
        break;
    }
    case 257212:
    {
        returnValue = F("Pulverturmweg");
        break;
    }
    case 257213:
    {
        returnValue = F("Pulverwaldstr.");
        break;
    }
    case 257214:
    {
        returnValue = F("Pulverweg");
        break;
    }
    case 257215:
    {
        returnValue = F("Pulverwiesen");
        break;
    }
    case 257216:
    {
        returnValue = F("Pulverwiesenweg");
        break;
    }
    case 257217:
    {
        returnValue = F("Pulzhofweg");
        break;
    }
    case 257218:
    {
        returnValue = F("Pulzweg");
        break;
    }
    case 257219:
    {
        returnValue = F("Puma Way");
        break;
    }
    case 257220:
    {
        returnValue = F("Pumberg");
        break;
    }
    case 257221:
    {
        returnValue = F("Pummergasse");
        break;
    }
    case 257222:
    {
        returnValue = F("Pump");
        break;
    }
    case 257223:
    {
        returnValue = F("Pumpe");
        break;
    }
    case 257224:
    {
        returnValue = F("Pumpe Ausbau");
        break;
    }
    case 257225:
    {
        returnValue = F("Pumpelhorn");
        break;
    }
    case 257226:
    {
        returnValue = F("Pumpenburg");
        break;
    }
    case 257227:
    {
        returnValue = F("Pumpeneck");
        break;
    }
    case 257228:
    {
        returnValue = F("Pumpengasse");
        break;
    }
    case 257229:
    {
        returnValue = F("Pumpenhausweg");
        break;
    }
    case 257230:
    {
        returnValue = F("Pumpenlaufrad");
        break;
    }
    case 257231:
    {
        returnValue = F("Pumpenpatt");
        break;
    }
    case 257232:
    {
        returnValue = F("Pumpensteg");
        break;
    }
    case 257233:
    {
        returnValue = F("Pumpenstr.");
        break;
    }
    case 257234:
    {
        returnValue = F("Pumpenweg");
        break;
    }
    case 257235:
    {
        returnValue = F("Pumper Hörn");
        break;
    }
    case 257236:
    {
        returnValue = F("Pumperberg");
        break;
    }
    case 257237:
    {
        returnValue = F("Pumperhölzl");
        break;
    }
    case 257238:
    {
        returnValue = F("Pumperhörner Weg");
        break;
    }
    case 257239:
    {
        returnValue = F("Pumperie");
        break;
    }
    case 257240:
    {
        returnValue = F("Pumpheide");
        break;
    }
    case 257241:
    {
        returnValue = F("Pumphof");
        break;
    }
    case 257242:
    {
        returnValue = F("Pumphusen");
        break;
    }
    case 257243:
    {
        returnValue = F("Pumpkoppel");
        break;
    }
    case 257244:
    {
        returnValue = F("Pumpschänkenweg");
        break;
    }
    case 257245:
    {
        returnValue = F("Pumpsieler Str.");
        break;
    }
    case 257246:
    {
        returnValue = F("Pumpstation");
        break;
    }
    case 257247:
    {
        returnValue = F("Pumpstationsweg");
        break;
    }
    case 257248:
    {
        returnValue = F("Pumpstr.");
        break;
    }
    case 257249:
    {
        returnValue = F("Pumptrack");
        break;
    }
    case 257250:
    {
        returnValue = F("Pumpweg");
        break;
    }
    case 257251:
    {
        returnValue = F("Pumpwerkstr.");
        break;
    }
    case 257252:
    {
        returnValue = F("Pumpwerkweg");
        break;
    }
    case 257253:
    {
        returnValue = F("Pundmanns Breite");
        break;
    }
    case 257254:
    {
        returnValue = F("Punenstr.");
        break;
    }
    case 257255:
    {
        returnValue = F("Pungelscheider Weg");
        break;
    }
    case 257256:
    {
        returnValue = F("Pungemühle");
        break;
    }
    case 257257:
    {
        returnValue = F("Pungshausstr.");
        break;
    }
    case 257258:
    {
        returnValue = F("Punkerstr.");
        break;
    }
    case 257259:
    {
        returnValue = F("Punktweg");
        break;
    }
    case 257260:
    {
        returnValue = F("Punnershof");
        break;
    }
    case 257261:
    {
        returnValue = F("Punschern");
        break;
    }
    case 257262:
    {
        returnValue = F("Punschernstr.");
        break;
    }
    case 257263:
    {
        returnValue = F("Puntenwinkel");
        break;
    }
    case 257264:
    {
        returnValue = F("Puntereistr.");
        break;
    }
    case 257265:
    {
        returnValue = F("Punzenmoos");
        break;
    }
    case 257266:
    {
        returnValue = F("Punzenweg");
        break;
    }
    case 257267:
    {
        returnValue = F("Pupinweg");
        break;
    }
    case 257268:
    {
        returnValue = F("Puppberg");
        break;
    }
    case 257269:
    {
        returnValue = F("Puppelgasse");
        break;
    }
    case 257270:
    {
        returnValue = F("Puppendorf");
        break;
    }
    case 257271:
    {
        returnValue = F("Puppendorfer Privatweg");
        break;
    }
    case 257272:
    {
        returnValue = F("Puppendorfer Weg");
        break;
    }
    case 257273:
    {
        returnValue = F("Puppensiedlung");
        break;
    }
    case 257274:
    {
        returnValue = F("Puppenspielerweg");
        break;
    }
    case 257275:
    {
        returnValue = F("Puppenstr.");
        break;
    }
    case 257276:
    {
        returnValue = F("Puppenweg");
        break;
    }
    case 257277:
    {
        returnValue = F("Pupplinger Weg");
        break;
    }
    case 257278:
    {
        returnValue = F("Purchhauserstr.");
        break;
    }
    case 257279:
    {
        returnValue = F("Purd");
        break;
    }
    case 257280:
    {
        returnValue = F("Purfinger Str.");
        break;
    }
    case 257281:
    {
        returnValue = F("Purfinger-Geräumt");
        break;
    }
    case 257282:
    {
        returnValue = F("Purfinger-Haupt-Geräumt");
        break;
    }
    case 257283:
    {
        returnValue = F("Purgoldstr.");
        break;
    }
    case 257284:
    {
        returnValue = F("Puricellistr.");
        break;
    }
    case 257285:
    {
        returnValue = F("Purkering");
        break;
    }
    case 257286:
    {
        returnValue = F("Purkersdorfer Str.");
        break;
    }
    case 257287:
    {
        returnValue = F("Purkshof");
        break;
    }
    case 257288:
    {
        returnValue = F("Purkswarfer Weg");
        break;
    }
    case 257289:
    {
        returnValue = F("Purmannstr.");
        break;
    }
    case 257290:
    {
        returnValue = F("Purpenhalde");
        break;
    }
    case 257291:
    {
        returnValue = F("Purrbachstr.");
        break;
    }
    case 257292:
    {
        returnValue = F("Purrbeck");
        break;
    }
    case 257293:
    {
        returnValue = F("Purrmannstr.");
        break;
    }
    case 257294:
    {
        returnValue = F("Purrmannweg");
        break;
    }
    case 257295:
    {
        returnValue = F("Purschenstein");
        break;
    }
    case 257296:
    {
        returnValue = F("Purschwitzer Str.");
        break;
    }
    case 257297:
    {
        returnValue = F("Pursrucker Str.");
        break;
    }
    case 257298:
    {
        returnValue = F("Purtschellerstr.");
        break;
    }
    case 257299:
    {
        returnValue = F("Purtweg");
        break;
    }
    case 257300:
    {
        returnValue = F("Purweider Weg");
        break;
    }
    case 257301:
    {
        returnValue = F("Purzelgasse");
        break;
    }
    case 257302:
    {
        returnValue = F("Purzelgraben");
        break;
    }
    case 257303:
    {
        returnValue = F("Puschendorf");
        break;
    }
    case 257304:
    {
        returnValue = F("Puschendorfer Str.");
        break;
    }
    case 257305:
    {
        returnValue = F("Puschenweg");
        break;
    }
    case 257306:
    {
        returnValue = F("Puschkental");
        break;
    }
    case 257307:
    {
        returnValue = F("Puschkin-Ufer");
        break;
    }
    case 257308:
    {
        returnValue = F("Puschkinallee");
        break;
    }
    case 257309:
    {
        returnValue = F("Puschkinpark");
        break;
    }
    case 257310:
    {
        returnValue = F("Puschkinplatz");
        break;
    }
    case 257311:
    {
        returnValue = F("Puschkinpromenade");
        break;
    }
    case 257312:
    {
        returnValue = F("Puschkinring");
        break;
    }
    case 257313:
    {
        returnValue = F("Puschkinstr.");
        break;
    }
    case 257314:
    {
        returnValue = F("Puschkinweg");
        break;
    }
    case 257315:
    {
        returnValue = F("Puschweg");
        break;
    }
    case 257316:
    {
        returnValue = F("Puschwitz");
        break;
    }
    case 257317:
    {
        returnValue = F("Puschwitzer Hauptstr.");
        break;
    }
    case 257318:
    {
        returnValue = F("Puschwitzer Weg");
        break;
    }
    case 257319:
    {
        returnValue = F("Pusenhof");
        break;
    }
    case 257320:
    {
        returnValue = F("Pusenweg");
        break;
    }
    case 257321:
    {
        returnValue = F("Puslweg");
        break;
    }
    case 257322:
    {
        returnValue = F("Pusselsheimer Str.");
        break;
    }
    case 257323:
    {
        returnValue = F("Pussenweg");
        break;
    }
    case 257324:
    {
        returnValue = F("Pustekowstr.");
        break;
    }
    case 257325:
    {
        returnValue = F("Pustenbach");
        break;
    }
    case 257326:
    {
        returnValue = F("Pusterohrweg");
        break;
    }
    case 257327:
    {
        returnValue = F("Pustertalstr.");
        break;
    }
    case 257328:
    {
        returnValue = F("Pustetstr.");
        break;
    }
    case 257329:
    {
        returnValue = F("Pustetweg");
        break;
    }
    case 257330:
    {
        returnValue = F("Pustkuchenstr.");
        break;
    }
    case 257331:
    {
        returnValue = F("Pustohl");
        break;
    }
    case 257332:
    {
        returnValue = F("Pustohler Chaussee");
        break;
    }
    case 257333:
    {
        returnValue = F("Pustow Ausbau");
        break;
    }
    case 257334:
    {
        returnValue = F("Pustweg");
        break;
    }
    case 257335:
    {
        returnValue = F("Pusutredder");
        break;
    }
    case 257336:
    {
        returnValue = F("Putbuser Chaussee");
        break;
    }
    case 257337:
    {
        returnValue = F("Putbuser Str.");
        break;
    }
    case 257338:
    {
        returnValue = F("Putbuser Weg");
        break;
    }
    case 257339:
    {
        returnValue = F("Puteauxpromenade");
        break;
    }
    case 257340:
    {
        returnValue = F("Putenmatt");
        break;
    }
    case 257341:
    {
        returnValue = F("Putensener Dorfstr.");
        break;
    }
    case 257342:
    {
        returnValue = F("Putensener Str.");
        break;
    }
    case 257343:
    {
        returnValue = F("Putensener Weg");
        break;
    }
    case 257344:
    {
        returnValue = F("Putenweg");
        break;
    }
    case 257345:
    {
        returnValue = F("Putergarten");
        break;
    }
    case 257346:
    {
        returnValue = F("Puterkamp");
        break;
    }
    case 257347:
    {
        returnValue = F("Putjeberg");
        break;
    }
    case 257348:
    {
        returnValue = F("Putjebusch");
        break;
    }
    case 257349:
    {
        returnValue = F("Putjengang");
        break;
    }
    case 257350:
    {
        returnValue = F("Putjeredder");
        break;
    }
    case 257351:
    {
        returnValue = F("Putlitzer Str.");
        break;
    }
    case 257352:
    {
        returnValue = F("Putlitzer Weg");
        break;
    }
    case 257353:
    {
        returnValue = F("Putlitzstr.");
        break;
    }
    case 257354:
    {
        returnValue = F("Putloser Chaussee");
        break;
    }
    case 257355:
    {
        returnValue = F("Putostr.");
        break;
    }
    case 257356:
    {
        returnValue = F("Puttbarg");
        break;
    }
    case 257357:
    {
        returnValue = F("Puttenbruch");
        break;
    }
    case 257358:
    {
        returnValue = F("Putterberg");
        break;
    }
    case 257359:
    {
        returnValue = F("Puttgardenstr.");
        break;
    }
    case 257360:
    {
        returnValue = F("Puttinger Str.");
        break;
    }
    case 257361:
    {
        returnValue = F("Puttinger Wiese");
        break;
    }
    case 257362:
    {
        returnValue = F("Puttland");
        break;
    }
    case 257363:
    {
        returnValue = F("Puttlitzstr.");
        break;
    }
    case 257364:
    {
        returnValue = F("Puttrichberg");
        break;
    }
    case 257365:
    {
        returnValue = F("Putz");
        break;
    }
    case 257366:
    {
        returnValue = F("Putz-Lange Weg");
        break;
    }
    case 257367:
    {
        returnValue = F("Putzar");
        break;
    }
    case 257368:
    {
        returnValue = F("Putzarer Damm");
        break;
    }
    case 257369:
    {
        returnValue = F("Putzbrunner Str.");
        break;
    }
    case 257370:
    {
        returnValue = F("Putzebecken");
        break;
    }
    case 257371:
    {
        returnValue = F("Putzenreuthstr.");
        break;
    }
    case 257372:
    {
        returnValue = F("Putzergasse");
        break;
    }
    case 257373:
    {
        returnValue = F("Putzgartenstr.");
        break;
    }
    case 257374:
    {
        returnValue = F("Putzgässle");
        break;
    }
    case 257375:
    {
        returnValue = F("Putzhagen");
        break;
    }
    case 257376:
    {
        returnValue = F("Putzhof");
        break;
    }
    case 257377:
    {
        returnValue = F("Putziger Str.");
        break;
    }
    case 257378:
    {
        returnValue = F("Putzkauer Str.");
        break;
    }
    case 257379:
    {
        returnValue = F("Putzkauer Weg");
        break;
    }
    case 257380:
    {
        returnValue = F("Putzmühlenweg");
        break;
    }
    case 257381:
    {
        returnValue = F("Putzwall");
        break;
    }
    case 257382:
    {
        returnValue = F("Putzweg");
        break;
    }
    case 257383:
    {
        returnValue = F("Putzwinkelweg");
        break;
    }
    case 257384:
    {
        returnValue = F("Puzemannsgasse");
        break;
    }
    case 257385:
    {
        returnValue = F("Pußta");
        break;
    }
    case 257386:
    {
        returnValue = F("Pućik");
        break;
    }
    case 257387:
    {
        returnValue = F("Pyer Kirchweg");
        break;
    }
    case 257388:
    {
        returnValue = F("Pyer Str.");
        break;
    }
    case 257389:
    {
        returnValue = F("Pyramidenbrücke");
        break;
    }
    case 257390:
    {
        returnValue = F("Pyramidenplatz");
        break;
    }
    case 257391:
    {
        returnValue = F("Pyramidenstr.");
        break;
    }
    case 257392:
    {
        returnValue = F("Pyramidenweg");
        break;
    }
    case 257393:
    {
        returnValue = F("Pyramooser Str.");
        break;
    }
    case 257394:
    {
        returnValue = F("Pyras");
        break;
    }
    case 257395:
    {
        returnValue = F("Pyraser Hauptstr.");
        break;
    }
    case 257396:
    {
        returnValue = F("Pyrastr.");
        break;
    }
    case 257397:
    {
        returnValue = F("Pyratalstr.");
        break;
    }
    case 257398:
    {
        returnValue = F("Pyrbaumer Str.");
        break;
    }
    case 257399:
    {
        returnValue = F("Pyrbaumer Weg");
        break;
    }
    case 257400:
    {
        returnValue = F("Pyrenweg");
        break;
    }
    case 257401:
    {
        returnValue = F("Pyrenäenstr.");
        break;
    }
    case 257402:
    {
        returnValue = F("Pyritzer Str.");
        break;
    }
    case 257403:
    {
        returnValue = F("Pyrkstockstr.");
        break;
    }
    case 257404:
    {
        returnValue = F("Pyrmonter Str.");
        break;
    }
    case 257405:
    {
        returnValue = F("Pyrnaer Str.");
        break;
    }
    case 257406:
    {
        returnValue = F("Pythagoweg");
        break;
    }
    case 257407:
    {
        returnValue = F("Pápa-Str.");
        break;
    }
    case 257408:
    {
        returnValue = F("Pächterstr.");
        break;
    }
    case 257409:
    {
        returnValue = F("Pächterweg");
        break;
    }
    case 257410:
    {
        returnValue = F("Pädagogengang");
        break;
    }
    case 257411:
    {
        returnValue = F("Pädagogenweg");
        break;
    }
    case 257412:
    {
        returnValue = F("Pädagogienstr.");
        break;
    }
    case 257413:
    {
        returnValue = F("Pädagogstr.");
        break;
    }
    case 257414:
    {
        returnValue = F("Pädche");
        break;
    }
    case 257415:
    {
        returnValue = F("Pägereckweg");
        break;
    }
    case 257416:
    {
        returnValue = F("Pählbrücke");
        break;
    }
    case 257417:
    {
        returnValue = F("Pählenweg");
        break;
    }
    case 257418:
    {
        returnValue = F("Pähler Str.");
        break;
    }
    case 257419:
    {
        returnValue = F("Pähler Weg");
        break;
    }
    case 257420:
    {
        returnValue = F("Pähler-Hart-Str.");
        break;
    }
    case 257421:
    {
        returnValue = F("Pählstr.");
        break;
    }
    case 257422:
    {
        returnValue = F("Pälitzhof");
        break;
    }
    case 257423:
    {
        returnValue = F("Pälzer Park");
        break;
    }
    case 257424:
    {
        returnValue = F("Pälzäcker");
        break;
    }
    case 257425:
    {
        returnValue = F("Pämerhauk");
        break;
    }
    case 257426:
    {
        returnValue = F("Pängelantonweg");
        break;
    }
    case 257427:
    {
        returnValue = F("Pänzelsgarten");
        break;
    }
    case 257428:
    {
        returnValue = F("Pänzingerweg");
        break;
    }
    case 257429:
    {
        returnValue = F("Pänzjass");
        break;
    }
    case 257430:
    {
        returnValue = F("Päonienweg");
        break;
    }
    case 257431:
    {
        returnValue = F("Päpinghauser Str.");
        break;
    }
    case 257432:
    {
        returnValue = F("Päpsen");
        break;
    }
    case 257433:
    {
        returnValue = F("Päpser Str.");
        break;
    }
    case 257434:
    {
        returnValue = F("Päpser Weg");
        break;
    }
    case 257435:
    {
        returnValue = F("Pärdendyckweg");
        break;
    }
    case 257436:
    {
        returnValue = F("Pärrnerweg");
        break;
    }
    case 257437:
    {
        returnValue = F("Pärweg");
        break;
    }
    case 257438:
    {
        returnValue = F("Päser Weg");
        break;
    }
    case 257439:
    {
        returnValue = F("Pässchen");
        break;
    }
    case 257440:
    {
        returnValue = F("Pätscherweg");
        break;
    }
    case 257441:
    {
        returnValue = F("Pättken");
        break;
    }
    case 257442:
    {
        returnValue = F("Pätzer Dorfaue");
        break;
    }
    case 257443:
    {
        returnValue = F("Pätzer Friedensstr.");
        break;
    }
    case 257444:
    {
        returnValue = F("Pätzer Goethestr.");
        break;
    }
    case 257445:
    {
        returnValue = F("Pätzer Kiefernweg");
        break;
    }
    case 257446:
    {
        returnValue = F("Pätzer Mittelweg");
        break;
    }
    case 257447:
    {
        returnValue = F("Pätzer Str.");
        break;
    }
    case 257448:
    {
        returnValue = F("Pätzer Waldstr.");
        break;
    }
    case 257449:
    {
        returnValue = F("Pätzingerstr.");
        break;
    }
    case 257450:
    {
        returnValue = F("Pätzkamp");
        break;
    }
    case 257451:
    {
        returnValue = F("Pätzoldweg");
        break;
    }
    case 257452:
    {
        returnValue = F("Pätzsoldweg");
        break;
    }
    case 257453:
    {
        returnValue = F("Päwesiner Chaussee");
        break;
    }
    case 257454:
    {
        returnValue = F("Päßchen");
        break;
    }
    case 257455:
    {
        returnValue = F("Päßler-Weg");
        break;
    }
    case 257456:
    {
        returnValue = F("Périgueux-Kreisel");
        break;
    }
    case 257457:
    {
        returnValue = F("Péronnas-Platz");
        break;
    }
    case 257458:
    {
        returnValue = F("Pöbbeckenmühle");
        break;
    }
    case 257459:
    {
        returnValue = F("Pöbeltalstr.");
        break;
    }
    case 257460:
    {
        returnValue = F("Pöbeltalweg");
        break;
    }
    case 257461:
    {
        returnValue = F("Pöbenhausen");
        break;
    }
    case 257462:
    {
        returnValue = F("Pöcking");
        break;
    }
    case 257463:
    {
        returnValue = F("Pöckinger Fußweg");
        break;
    }
    case 257464:
    {
        returnValue = F("Pöckinger Str.");
        break;
    }
    case 257465:
    {
        returnValue = F("Pödeldorfer Str.");
        break;
    }
    case 257466:
    {
        returnValue = F("Pödelwitz");
        break;
    }
    case 257467:
    {
        returnValue = F("Pödelwitzer Str.");
        break;
    }
    case 257468:
    {
        returnValue = F("Pöding");
        break;
    }
    case 257469:
    {
        returnValue = F("Pödinghauser Landweg");
        break;
    }
    case 257470:
    {
        returnValue = F("Pödinghauser Str.");
        break;
    }
    case 257471:
    {
        returnValue = F("Pöglitzer Str.");
        break;
    }
    case 257472:
    {
        returnValue = F("Pöglstr.");
        break;
    }
    case 257473:
    {
        returnValue = F("Pöhl");
        break;
    }
    case 257474:
    {
        returnValue = F("Pöhlaer Steig");
        break;
    }
    case 257475:
    {
        returnValue = F("Pöhlaer Str.");
        break;
    }
    case 257476:
    {
        returnValue = F("Pöhlauer Ring");
        break;
    }
    case 257477:
    {
        returnValue = F("Pöhlauer Str.");
        break;
    }
    case 257478:
    {
        returnValue = F("Pöhlbergsiedlung");
        break;
    }
    case 257479:
    {
        returnValue = F("Pöhlbergstr.");
        break;
    }
    case 257480:
    {
        returnValue = F("Pöhlder Kreisel");
        break;
    }
    case 257481:
    {
        returnValue = F("Pöhlder Str.");
        break;
    }
    case 257482:
    {
        returnValue = F("Pöhle");
        break;
    }
    case 257483:
    {
        returnValue = F("Pöhlen");
        break;
    }
    case 257484:
    {
        returnValue = F("Pöhlengässchen");
        break;
    }
    case 257485:
    {
        returnValue = F("Pöhlenstr.");
        break;
    }
    case 257486:
    {
        returnValue = F("Pöhlenweg");
        break;
    }
    case 257487:
    {
        returnValue = F("Pöhler Str.");
        break;
    }
    case 257488:
    {
        returnValue = F("Pöhler Weg");
        break;
    }
    case 257489:
    {
        returnValue = F("Pöhlesgasse");
        break;
    }
    case 257490:
    {
        returnValue = F("Pöhlestr.");
        break;
    }
    case 257491:
    {
        returnValue = F("Pöhleweg");
        break;
    }
    case 257492:
    {
        returnValue = F("Pöhlgasse");
        break;
    }
    case 257493:
    {
        returnValue = F("Pöhlmanngasse");
        break;
    }
    case 257494:
    {
        returnValue = F("Pöhlparkstr.");
        break;
    }
    case 257495:
    {
        returnValue = F("Pöhlser Str.");
        break;
    }
    case 257496:
    {
        returnValue = F("Pöhlser Weg");
        break;
    }
    case 257497:
    {
        returnValue = F("Pöhlstr.");
        break;
    }
    case 257498:
    {
        returnValue = F("Pöhlweg");
        break;
    }
    case 257499:
    {
        returnValue = F("Pölbitzer Kirchsteig");
        break;
    }
    case 257500:
    {
        returnValue = F("Pölbitzer Str.");
        break;
    }
    case 257501:
    {
        returnValue = F("Pölbitzer Weg");
        break;
    }
    case 257502:
    {
        returnValue = F("Pölching");
        break;
    }
    case 257503:
    {
        returnValue = F("Pölchinger Str.");
        break;
    }
    case 257504:
    {
        returnValue = F("Pölchower Str.");
        break;
    }
    case 257505:
    {
        returnValue = F("Pölerter Bahnhof");
        break;
    }
    case 257506:
    {
        returnValue = F("Pöling");
        break;
    }
    case 257507:
    {
        returnValue = F("Pölinger Heide");
        break;
    }
    case 257508:
    {
        returnValue = F("Pölitzer Str.");
        break;
    }
    case 257509:
    {
        returnValue = F("Pölitzer Weg");
        break;
    }
    case 257510:
    {
        returnValue = F("Pölitzfeld");
        break;
    }
    case 257511:
    {
        returnValue = F("Pölitzstr.");
        break;
    }
    case 257512:
    {
        returnValue = F("Pölkenstr.");
        break;
    }
    case 257513:
    {
        returnValue = F("Pölkentor");
        break;
    }
    case 257514:
    {
        returnValue = F("Pölkerweg");
        break;
    }
    case 257515:
    {
        returnValue = F("Pölkestr.");
        break;
    }
    case 257516:
    {
        returnValue = F("Pöllandtstr.");
        break;
    }
    case 257517:
    {
        returnValue = F("Pöllatschlucht Sommerweg");
        break;
    }
    case 257518:
    {
        returnValue = F("Pöllatweg");
        break;
    }
    case 257519:
    {
        returnValue = F("Pölle");
        break;
    }
    case 257520:
    {
        returnValue = F("Pöllenstr.");
        break;
    }
    case 257521:
    {
        returnValue = F("Pöllenweg");
        break;
    }
    case 257522:
    {
        returnValue = F("Pöllersdorf");
        break;
    }
    case 257523:
    {
        returnValue = F("Pöllersdorfer Str.");
        break;
    }
    case 257524:
    {
        returnValue = F("Pöllinger Hauptstr.");
        break;
    }
    case 257525:
    {
        returnValue = F("Pöllinger Str.");
        break;
    }
    case 257526:
    {
        returnValue = F("Pöllitzer Bergsiedlung");
        break;
    }
    case 257527:
    {
        returnValue = F("Pöllnitzstr.");
        break;
    }
    case 257528:
    {
        returnValue = F("Pöllnitzweg");
        break;
    }
    case 257529:
    {
        returnValue = F("Pöllwitzer Anger");
        break;
    }
    case 257530:
    {
        returnValue = F("Pöllwitzer Flügel");
        break;
    }
    case 257531:
    {
        returnValue = F("Pöllwitzer Weg");
        break;
    }
    case 257532:
    {
        returnValue = F("Pölser Str.");
        break;
    }
    case 257533:
    {
        returnValue = F("Pölsfelder Str.");
        break;
    }
    case 257534:
    {
        returnValue = F("Pölsfelder Weg");
        break;
    }
    case 257535:
    {
        returnValue = F("Pöltnerstr.");
        break;
    }
    case 257536:
    {
        returnValue = F("Pölz");
        break;
    }
    case 257537:
    {
        returnValue = F("Pölzer Str.");
        break;
    }
    case 257538:
    {
        returnValue = F("Pölziger Str.");
        break;
    }
    case 257539:
    {
        returnValue = F("Pölzweg");
        break;
    }
    case 257540:
    {
        returnValue = F("Pömbser Str.");
        break;
    }
    case 257541:
    {
        returnValue = F("Pömerstr.");
        break;
    }
    case 257542:
    {
        returnValue = F("Pömmelter Str.");
        break;
    }
    case 257543:
    {
        returnValue = F("Pömpers Feld");
        break;
    }
    case 257544:
    {
        returnValue = F("Pönaiergasse");
        break;
    }
    case 257545:
    {
        returnValue = F("Pönblick");
        break;
    }
    case 257546:
    {
        returnValue = F("Pönitzer Chaussee");
        break;
    }
    case 257547:
    {
        returnValue = F("Pönitzer Str.");
        break;
    }
    case 257548:
    {
        returnValue = F("Pönitzer Weg");
        break;
    }
    case 257549:
    {
        returnValue = F("Pönterbach Brücke");
        break;
    }
    case 257550:
    {
        returnValue = F("Pönterberg");
        break;
    }
    case 257551:
    {
        returnValue = F("Pöntermühle");
        break;
    }
    case 257552:
    {
        returnValue = F("Pöntertalstr.");
        break;
    }
    case 257553:
    {
        returnValue = F("Pöplitzer Weg");
        break;
    }
    case 257554:
    {
        returnValue = F("Pöppelbreite");
        break;
    }
    case 257555:
    {
        returnValue = F("Pöppeldiek");
        break;
    }
    case 257556:
    {
        returnValue = F("Pöppelhöfenweg");
        break;
    }
    case 257557:
    {
        returnValue = F("Pöppelkamp");
        break;
    }
    case 257558:
    {
        returnValue = F("Pöppelmannstr.");
        break;
    }
    case 257559:
    {
        returnValue = F("Pöppelmannwall");
        break;
    }
    case 257560:
    {
        returnValue = F("Pöppelmannweg");
        break;
    }
    case 257561:
    {
        returnValue = F("Pöppenweg");
        break;
    }
    case 257562:
    {
        returnValue = F("Pöppinghauser Furt");
        break;
    }
    case 257563:
    {
        returnValue = F("Pöppinghauser Str.");
        break;
    }
    case 257564:
    {
        returnValue = F("Pöppinghausstr.");
        break;
    }
    case 257565:
    {
        returnValue = F("Pöppinghäuser Str.");
        break;
    }
    case 257566:
    {
        returnValue = F("Pöpplhof");
        break;
    }
    case 257567:
    {
        returnValue = F("Pöppschener Str.");
        break;
    }
    case 257568:
    {
        returnValue = F("Pörbitscher Hang");
        break;
    }
    case 257569:
    {
        returnValue = F("Pörbitscher Platz");
        break;
    }
    case 257570:
    {
        returnValue = F("Pörbitscher Weg");
        break;
    }
    case 257571:
    {
        returnValue = F("Pöringer Str.");
        break;
    }
    case 257572:
    {
        returnValue = F("Pöritzsch");
        break;
    }
    case 257573:
    {
        returnValue = F("Pöritzscher Ufer");
        break;
    }
    case 257574:
    {
        returnValue = F("Pörmelweg");
        break;
    }
    case 257575:
    {
        returnValue = F("Pörmitzer Weg");
        break;
    }
    case 257576:
    {
        returnValue = F("Pörnbacher Str.");
        break;
    }
    case 257577:
    {
        returnValue = F("Pörndorfer Str.");
        break;
    }
    case 257578:
    {
        returnValue = F("Pörrbacher Str.");
        break;
    }
    case 257579:
    {
        returnValue = F("Pörschpesch");
        break;
    }
    case 257580:
    {
        returnValue = F("Pörsdorfer Weg");
        break;
    }
    case 257581:
    {
        returnValue = F("Pörtnerskamp");
        break;
    }
    case 257582:
    {
        returnValue = F("Pörtschacher Weg");
        break;
    }
    case 257583:
    {
        returnValue = F("Pörzbergtunnel");
        break;
    }
    case 257584:
    {
        returnValue = F("Pöschendorfer Str.");
        break;
    }
    case 257585:
    {
        returnValue = F("Pöschlmüllerweg");
        break;
    }
    case 257586:
    {
        returnValue = F("Pöschstr.");
        break;
    }
    case 257587:
    {
        returnValue = F("Pöschwitz");
        break;
    }
    case 257588:
    {
        returnValue = F("Pösel");
        break;
    }
    case 257589:
    {
        returnValue = F("Pösigker Landstr.");
        break;
    }
    case 257590:
    {
        returnValue = F("Pösigker Str.");
        break;
    }
    case 257591:
    {
        returnValue = F("Pösinger Str.");
        break;
    }
    case 257592:
    {
        returnValue = F("Pösling");
        break;
    }
    case 257593:
    {
        returnValue = F("Pösneck");
        break;
    }
    case 257594:
    {
        returnValue = F("Pösselstr.");
        break;
    }
    case 257595:
    {
        returnValue = F("Pössinger Str.");
        break;
    }
    case 257596:
    {
        returnValue = F("Pöstenschneise");
        break;
    }
    case 257597:
    {
        returnValue = F("Pöstenweg");
        break;
    }
    case 257598:
    {
        returnValue = F("Pötewitzer Weg");
        break;
    }
    case 257599:
    {
        returnValue = F("Pöthener Str.");
        break;
    }
    case 257600:
    {
        returnValue = F("Pöthener Weg");
        break;
    }
    case 257601:
    {
        returnValue = F("Pötingstr.");
        break;
    }
    case 257602:
    {
        returnValue = F("Pötjerwinkel");
        break;
    }
    case 257603:
    {
        returnValue = F("Pötnitz");
        break;
    }
    case 257604:
    {
        returnValue = F("Pötrauer Str.");
        break;
    }
    case 257605:
    {
        returnValue = F("Pötrauer Weg");
        break;
    }
    case 257606:
    {
        returnValue = F("Pötschalmweg");
        break;
    }
    case 257607:
    {
        returnValue = F("Pötschenerstr.");
        break;
    }
    case 257608:
    {
        returnValue = F("Pöttacker");
        break;
    }
    case 257609:
    {
        returnValue = F("Pöttbeek");
        break;
    }
    case 257610:
    {
        returnValue = F("Pöttcherbrink");
        break;
    }
    case 257611:
    {
        returnValue = F("Pöttchereiweg");
        break;
    }
    case 257612:
    {
        returnValue = F("Pöttcherheide");
        break;
    }
    case 257613:
    {
        returnValue = F("Pöttcherhof");
        break;
    }
    case 257614:
    {
        returnValue = F("Pöttcherstr.");
        break;
    }
    case 257615:
    {
        returnValue = F("Pöttcherwiesen");
        break;
    }
    case 257616:
    {
        returnValue = F("Pöttekamp");
        break;
    }
    case 257617:
    {
        returnValue = F("Pötterberg");
        break;
    }
    case 257618:
    {
        returnValue = F("Pöttering");
        break;
    }
    case 257619:
    {
        returnValue = F("Pötterstelle");
        break;
    }
    case 257620:
    {
        returnValue = F("Pötterweg");
        break;
    }
    case 257621:
    {
        returnValue = F("Pöttgenstr.");
        break;
    }
    case 257622:
    {
        returnValue = F("Pöttinger Weg");
        break;
    }
    case 257623:
    {
        returnValue = F("Pöttingerstr.");
        break;
    }
    case 257624:
    {
        returnValue = F("Pöttingerweg");
        break;
    }
    case 257625:
    {
        returnValue = F("Pöttjer Berg");
        break;
    }
    case 257626:
    {
        returnValue = F("Pöttjerdeel");
        break;
    }
    case 257627:
    {
        returnValue = F("Pöttken");
        break;
    }
    case 257628:
    {
        returnValue = F("Pöttkerweg");
        break;
    }
    case 257629:
    {
        returnValue = F("Pöttmeser Str.");
        break;
    }
    case 257630:
    {
        returnValue = F("Pöttweg");
        break;
    }
    case 257631:
    {
        returnValue = F("Pötzelstr.");
        break;
    }
    case 257632:
    {
        returnValue = F("Pötzer Kirchweg");
        break;
    }
    case 257633:
    {
        returnValue = F("Pötzer Landwehr");
        break;
    }
    case 257634:
    {
        returnValue = F("Pötzer Steinbruchweg");
        break;
    }
    case 257635:
    {
        returnValue = F("Pötzer Str.");
        break;
    }
    case 257636:
    {
        returnValue = F("Pötzingerweg");
        break;
    }
    case 257637:
    {
        returnValue = F("Pötzling");
        break;
    }
    case 257638:
    {
        returnValue = F("Pötzlstr.");
        break;
    }
    case 257639:
    {
        returnValue = F("Pötzmeser Gangsteig");
        break;
    }
    case 257640:
    {
        returnValue = F("Pötzmeser Str.");
        break;
    }
    case 257641:
    {
        returnValue = F("Pötzplatz");
        break;
    }
    case 257642:
    {
        returnValue = F("Pötzschaer Weg");
        break;
    }
    case 257643:
    {
        returnValue = F("Pötzschauer Str.");
        break;
    }
    case 257644:
    {
        returnValue = F("Pötzschauer Weg");
        break;
    }
    case 257645:
    {
        returnValue = F("Pößmoos");
        break;
    }
    case 257646:
    {
        returnValue = F("Pößnecker Str.");
        break;
    }
    case 257647:
    {
        returnValue = F("Pößnitzstr.");
        break;
    }
    case 257648:
    {
        returnValue = F("Püchauer Str.");
        break;
    }
    case 257649:
    {
        returnValue = F("Püchersreuter Str.");
        break;
    }
    case 257650:
    {
        returnValue = F("Püchitz");
        break;
    }
    case 257651:
    {
        returnValue = F("Püchl");
        break;
    }
    case 257652:
    {
        returnValue = F("Pück-Deel");
        break;
    }
    case 257653:
    {
        returnValue = F("Pücklerstr.");
        break;
    }
    case 257654:
    {
        returnValue = F("Pücklerweg");
        break;
    }
    case 257655:
    {
        returnValue = F("Püggen");
        break;
    }
    case 257656:
    {
        returnValue = F("Püggener Str.");
        break;
    }
    case 257657:
    {
        returnValue = F("Püggener Weg");
        break;
    }
    case 257658:
    {
        returnValue = F("Pühlheimer Str.");
        break;
    }
    case 257659:
    {
        returnValue = F("Pühlhof");
        break;
    }
    case 257660:
    {
        returnValue = F("Pühlstr.");
        break;
    }
    case 257661:
    {
        returnValue = F("Pülfringer Str.");
        break;
    }
    case 257662:
    {
        returnValue = F("Pülfringerstr.");
        break;
    }
    case 257663:
    {
        returnValue = F("Pülgershäuschenweg");
        break;
    }
    case 257664:
    {
        returnValue = F("Püllenweg");
        break;
    }
    case 257665:
    {
        returnValue = F("Püllersreuth");
        break;
    }
    case 257666:
    {
        returnValue = F("Pülsdorf");
        break;
    }
    case 257667:
    {
        returnValue = F("Pülziger Dorfstr.");
        break;
    }
    case 257668:
    {
        returnValue = F("Pülziger Str.");
        break;
    }
    case 257669:
    {
        returnValue = F("Pülziger Weg");
        break;
    }
    case 257670:
    {
        returnValue = F("Pümpchen");
        break;
    }
    case 257671:
    {
        returnValue = F("Püngel");
        break;
    }
    case 257672:
    {
        returnValue = F("Püngelbach");
        break;
    }
    case 257673:
    {
        returnValue = F("Püngelerstr.");
        break;
    }
    case 257674:
    {
        returnValue = F("Püngelsberg");
        break;
    }
    case 257675:
    {
        returnValue = F("Püngelshof");
        break;
    }
    case 257676:
    {
        returnValue = F("Pünstorfer Str.");
        break;
    }
    case 257677:
    {
        returnValue = F("Püntendamm");
        break;
    }
    case 257678:
    {
        returnValue = F("Pünteweg");
        break;
    }
    case 257679:
    {
        returnValue = F("Püntkers Patt");
        break;
    }
    case 257680:
    {
        returnValue = F("Pünzendorf");
        break;
    }
    case 257681:
    {
        returnValue = F("Pürckhauerstr.");
        break;
    }
    case 257682:
    {
        returnValue = F("Pürgener Schleif-Weg");
        break;
    }
    case 257683:
    {
        returnValue = F("Pürgener Str.");
        break;
    }
    case 257684:
    {
        returnValue = F("Pürgger Weg");
        break;
    }
    case 257685:
    {
        returnValue = F("Pürgler Str.");
        break;
    }
    case 257686:
    {
        returnValue = F("Pürkenfels");
        break;
    }
    case 257687:
    {
        returnValue = F("Pürkwanger Str.");
        break;
    }
    case 257688:
    {
        returnValue = F("Pürsch-Geräumt");
        break;
    }
    case 257689:
    {
        returnValue = F("Pürschgerichtsweg");
        break;
    }
    case 257690:
    {
        returnValue = F("Pürschling-Weg");
        break;
    }
    case 257691:
    {
        returnValue = F("Pürschlingstr.");
        break;
    }
    case 257692:
    {
        returnValue = F("Pürschlingweg");
        break;
    }
    case 257693:
    {
        returnValue = F("Pürschläger Weg");
        break;
    }
    case 257694:
    {
        returnValue = F("Pürschweg");
        break;
    }
    case 257695:
    {
        returnValue = F("Pürschützstr.");
        break;
    }
    case 257696:
    {
        returnValue = F("Pürstener Str.");
        break;
    }
    case 257697:
    {
        returnValue = F("Pürstlingstr.");
        break;
    }
    case 257698:
    {
        returnValue = F("Pürten");
        break;
    }
    case 257699:
    {
        returnValue = F("Pürting");
        break;
    }
    case 257700:
    {
        returnValue = F("Püschower Str.");
        break;
    }
    case 257701:
    {
        returnValue = F("Püschstr.");
        break;
    }
    case 257702:
    {
        returnValue = F("Püschwiese");
        break;
    }
    case 257703:
    {
        returnValue = F("Püsselbürener Damm");
        break;
    }
    case 257704:
    {
        returnValue = F("Püsselbürener Grenze");
        break;
    }
    case 257705:
    {
        returnValue = F("Püsselbürener Str.");
        break;
    }
    case 257706:
    {
        returnValue = F("Püssensheimer Str.");
        break;
    }
    case 257707:
    {
        returnValue = F("Püsterberg");
        break;
    }
    case 257708:
    {
        returnValue = F("Pütjenweg");
        break;
    }
    case 257709:
    {
        returnValue = F("Pütjerweg");
        break;
    }
    case 257710:
    {
        returnValue = F("Pütnitzer Str.");
        break;
    }
    case 257711:
    {
        returnValue = F("Pütrichstr.");
        break;
    }
    case 257712:
    {
        returnValue = F("Pütt");
        break;
    }
    case 257713:
    {
        returnValue = F("Püttchenschneise");
        break;
    }
    case 257714:
    {
        returnValue = F("Püttchergasse");
        break;
    }
    case 257715:
    {
        returnValue = F("Pütte 1");
        break;
    }
    case 257716:
    {
        returnValue = F("Pütte 10");
        break;
    }
    case 257717:
    {
        returnValue = F("Pütte 11");
        break;
    }
    case 257718:
    {
        returnValue = F("Pütte 12");
        break;
    }
    case 257719:
    {
        returnValue = F("Pütte 2");
        break;
    }
    case 257720:
    {
        returnValue = F("Pütte 3");
        break;
    }
    case 257721:
    {
        returnValue = F("Pütte 4");
        break;
    }
    case 257722:
    {
        returnValue = F("Pütte 5");
        break;
    }
    case 257723:
    {
        returnValue = F("Pütte 6");
        break;
    }
    case 257724:
    {
        returnValue = F("Pütte 7");
        break;
    }
    case 257725:
    {
        returnValue = F("Pütte 8");
        break;
    }
    case 257726:
    {
        returnValue = F("Pütte 9");
        break;
    }
    case 257727:
    {
        returnValue = F("Püttelkower Chaussee");
        break;
    }
    case 257728:
    {
        returnValue = F("Püttelkower Weg");
        break;
    }
    case 257729:
    {
        returnValue = F("Püttenanger");
        break;
    }
    case 257730:
    {
        returnValue = F("Püttenbeckstr.");
        break;
    }
    case 257731:
    {
        returnValue = F("Püttenbollenweg");
        break;
    }
    case 257732:
    {
        returnValue = F("Püttenpatt");
        break;
    }
    case 257733:
    {
        returnValue = F("Püttenweg");
        break;
    }
    case 257734:
    {
        returnValue = F("Pütter Str.");
        break;
    }
    case 257735:
    {
        returnValue = F("Pütterfeld");
        break;
    }
    case 257736:
    {
        returnValue = F("Pütterhof");
        break;
    }
    case 257737:
    {
        returnValue = F("Pütterhöfe");
        break;
    }
    case 257738:
    {
        returnValue = F("Pütterstr.");
        break;
    }
    case 257739:
    {
        returnValue = F("Pütterweg");
        break;
    }
    case 257740:
    {
        returnValue = F("Pütthauser Str.");
        break;
    }
    case 257741:
    {
        returnValue = F("Pütthof");
        break;
    }
    case 257742:
    {
        returnValue = F("Püttingweg");
        break;
    }
    case 257743:
    {
        returnValue = F("Püttjerberg");
        break;
    }
    case 257744:
    {
        returnValue = F("Püttkesberge");
        break;
    }
    case 257745:
    {
        returnValue = F("Püttkuhle");
        break;
    }
    case 257746:
    {
        returnValue = F("Püttlach");
        break;
    }
    case 257747:
    {
        returnValue = F("Püttlacher Weg");
        break;
    }
    case 257748:
    {
        returnValue = F("Püttlinger Str.");
        break;
    }
    case 257749:
    {
        returnValue = F("Püttlinger Weg");
        break;
    }
    case 257750:
    {
        returnValue = F("Püttmannstr.");
        break;
    }
    case 257751:
    {
        returnValue = F("Püttnerstr.");
        break;
    }
    case 257752:
    {
        returnValue = F("Püttsee");
        break;
    }
    case 257753:
    {
        returnValue = F("Püttstr.");
        break;
    }
    case 257754:
    {
        returnValue = F("Püttweg");
        break;
    }
    case 257755:
    {
        returnValue = F("Pützauel");
        break;
    }
    case 257756:
    {
        returnValue = F("Pützbachstr.");
        break;
    }
    case 257757:
    {
        returnValue = F("Pützbachweg");
        break;
    }
    case 257758:
    {
        returnValue = F("Pützbarg");
        break;
    }
    case 257759:
    {
        returnValue = F("Pützbenden");
        break;
    }
    case 257760:
    {
        returnValue = F("Pützberg");
        break;
    }
    case 257761:
    {
        returnValue = F("Pützberger Höhe");
        break;
    }
    case 257762:
    {
        returnValue = F("Pützbergring");
        break;
    }
    case 257763:
    {
        returnValue = F("Pützborner Str.");
        break;
    }
    case 257764:
    {
        returnValue = F("Pützbruchstr.");
        break;
    }
    case 257765:
    {
        returnValue = F("Pützbungert");
        break;
    }
    case 257766:
    {
        returnValue = F("Pützbusch");
        break;
    }
    case 257767:
    {
        returnValue = F("Pützchensweg");
        break;
    }
    case 257768:
    {
        returnValue = F("Pützdelle");
        break;
    }
    case 257769:
    {
        returnValue = F("Pützdorfer Str.");
        break;
    }
    case 257770:
    {
        returnValue = F("Pützdrieschstr.");
        break;
    }
    case 257771:
    {
        returnValue = F("Pützer Str.");
        break;
    }
    case 257772:
    {
        returnValue = F("Pützer Weg");
        break;
    }
    case 257773:
    {
        returnValue = F("Pützerau");
        break;
    }
    case 257774:
    {
        returnValue = F("Pützerhof");
        break;
    }
    case 257775:
    {
        returnValue = F("Pützerstr.");
        break;
    }
    case 257776:
    {
        returnValue = F("Pützfeld");
        break;
    }
    case 257777:
    {
        returnValue = F("Pützfeldchen");
        break;
    }
    case 257778:
    {
        returnValue = F("Pützfeldstr.");
        break;
    }
    case 257779:
    {
        returnValue = F("Pützflußweg");
        break;
    }
    case 257780:
    {
        returnValue = F("Pützfuhr");
        break;
    }
    case 257781:
    {
        returnValue = F("Pützgarten");
        break;
    }
    case 257782:
    {
        returnValue = F("Pützgasse");
        break;
    }
    case 257783:
    {
        returnValue = F("Pützgesbenden");
        break;
    }
    case 257784:
    {
        returnValue = F("Pützgracht");
        break;
    }
    case 257785:
    {
        returnValue = F("Pützhardt");
        break;
    }
    case 257786:
    {
        returnValue = F("Pützhecke");
        break;
    }
    case 257787:
    {
        returnValue = F("Pützhorn");
        break;
    }
    case 257788:
    {
        returnValue = F("Pützlinger Dorfstr.");
        break;
    }
    case 257789:
    {
        returnValue = F("Pützlinger Entengarten");
        break;
    }
    case 257790:
    {
        returnValue = F("Pützlinger Hinterdorf");
        break;
    }
    case 257791:
    {
        returnValue = F("Pützlinger Str.");
        break;
    }
    case 257792:
    {
        returnValue = F("Pützlohner Str.");
        break;
    }
    case 257793:
    {
        returnValue = F("Pützrather Weg");
        break;
    }
    case 257794:
    {
        returnValue = F("Pützstr.");
        break;
    }
    case 257795:
    {
        returnValue = F("Pützstücker Str.");
        break;
    }
    case 257796:
    {
        returnValue = F("Pütztal");
        break;
    }
    case 257797:
    {
        returnValue = F("Pützweg");
        break;
    }
    case 257798:
    {
        returnValue = F("Pützweide");
        break;
    }
    case 257799:
    {
        returnValue = F("Pützwiese");
        break;
    }
    case 257800:
    {
        returnValue = F("Pützwiesenstr.");
        break;
    }
    }
    return returnValue;
}
