#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameA5(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 40004:
    {
        returnValue = F("An der Zwönitz");
        break;
    }
    case 40005:
    {
        returnValue = F("An der Zäun");
        break;
    }
    case 40006:
    {
        returnValue = F("An der Zöllnerkoppel");
        break;
    }
    case 40007:
    {
        returnValue = F("An der alten B 40");
        break;
    }
    case 40008:
    {
        returnValue = F("An der alten B 420");
        break;
    }
    case 40009:
    {
        returnValue = F("An der alten B 5");
        break;
    }
    case 40010:
    {
        returnValue = F("An der alten Bahn");
        break;
    }
    case 40011:
    {
        returnValue = F("An der alten Bleiche");
        break;
    }
    case 40012:
    {
        returnValue = F("An der alten Buche");
        break;
    }
    case 40013:
    {
        returnValue = F("An der alten Bundesstr.");
        break;
    }
    case 40014:
    {
        returnValue = F("An der alten Deponie");
        break;
    }
    case 40015:
    {
        returnValue = F("An der alten Dorfstr.");
        break;
    }
    case 40016:
    {
        returnValue = F("An der alten Drift");
        break;
    }
    case 40017:
    {
        returnValue = F("An der alten Eiche");
        break;
    }
    case 40018:
    {
        returnValue = F("An der alten Elbe");
        break;
    }
    case 40019:
    {
        returnValue = F("An der alten Elster");
        break;
    }
    case 40020:
    {
        returnValue = F("An der alten Festwiese");
        break;
    }
    case 40021:
    {
        returnValue = F("An der alten Fähre");
        break;
    }
    case 40022:
    {
        returnValue = F("An der alten Gemeinde");
        break;
    }
    case 40023:
    {
        returnValue = F("An der alten Gärtnerei");
        break;
    }
    case 40024:
    {
        returnValue = F("An der alten Jugendherberge");
        break;
    }
    case 40025:
    {
        returnValue = F("An der alten Kirche");
        break;
    }
    case 40026:
    {
        returnValue = F("An der alten Landwehr");
        break;
    }
    case 40027:
    {
        returnValue = F("An der alten Leine");
        break;
    }
    case 40028:
    {
        returnValue = F("An der alten Mittelstr.");
        break;
    }
    case 40029:
    {
        returnValue = F("An der alten Molkerei");
        break;
    }
    case 40030:
    {
        returnValue = F("An der alten Mulde");
        break;
    }
    case 40031:
    {
        returnValue = F("An der alten Mühle");
        break;
    }
    case 40032:
    {
        returnValue = F("An der alten Pferdebahn");
        break;
    }
    case 40033:
    {
        returnValue = F("An der alten Post");
        break;
    }
    case 40034:
    {
        returnValue = F("An der alten Preppach");
        break;
    }
    case 40035:
    {
        returnValue = F("An der alten Räucherei");
        break;
    }
    case 40036:
    {
        returnValue = F("An der alten Salzstr.");
        break;
    }
    case 40037:
    {
        returnValue = F("An der alten Sandgrube");
        break;
    }
    case 40038:
    {
        returnValue = F("An der alten Schmiede");
        break;
    }
    case 40039:
    {
        returnValue = F("An der alten Schule");
        break;
    }
    case 40040:
    {
        returnValue = F("An der alten Schäferei");
        break;
    }
    case 40041:
    {
        returnValue = F("An der alten Siedlung");
        break;
    }
    case 40042:
    {
        returnValue = F("An der alten Silberstr.");
        break;
    }
    case 40043:
    {
        returnValue = F("An der alten Spinnerei");
        break;
    }
    case 40044:
    {
        returnValue = F("An der alten Trift");
        break;
    }
    case 40045:
    {
        returnValue = F("An der alten Weberei");
        break;
    }
    case 40046:
    {
        returnValue = F("An der alten Ziegelei");
        break;
    }
    case 40047:
    {
        returnValue = F("An der biologischen Bundesanstalt");
        break;
    }
    case 40048:
    {
        returnValue = F("An der breiten Wiese");
        break;
    }
    case 40049:
    {
        returnValue = F("An der dicken Eiche");
        break;
    }
    case 40050:
    {
        returnValue = F("An der dänischen Kirche");
        break;
    }
    case 40051:
    {
        returnValue = F("An der ehemaligen Molkerei");
        break;
    }
    case 40052:
    {
        returnValue = F("An der großen Jahna");
        break;
    }
    case 40053:
    {
        returnValue = F("An der großen Trift");
        break;
    }
    case 40054:
    {
        returnValue = F("An der grünen Bank");
        break;
    }
    case 40055:
    {
        returnValue = F("An der hohen Steyer");
        break;
    }
    case 40056:
    {
        returnValue = F("An der kleinen Heide");
        break;
    }
    case 40057:
    {
        returnValue = F("An der kleinen Hohl");
        break;
    }
    case 40058:
    {
        returnValue = F("An der kleinen Jahna");
        break;
    }
    case 40059:
    {
        returnValue = F("An der kleinen Mühle");
        break;
    }
    case 40060:
    {
        returnValue = F("An der kleinen Ruhr");
        break;
    }
    case 40061:
    {
        returnValue = F("An der kleinen Schmiech");
        break;
    }
    case 40062:
    {
        returnValue = F("An der kleinen Trift");
        break;
    }
    case 40063:
    {
        returnValue = F("An der langen Hecke");
        break;
    }
    case 40064:
    {
        returnValue = F("An der langen Mauer");
        break;
    }
    case 40065:
    {
        returnValue = F("An der langen Wiese");
        break;
    }
    case 40066:
    {
        returnValue = F("An der neuen Mühle");
        break;
    }
    case 40067:
    {
        returnValue = F("An der neuen Siedlung");
        break;
    }
    case 40068:
    {
        returnValue = F("An der unteren Mühle");
        break;
    }
    case 40069:
    {
        returnValue = F("An der unteren Schule");
        break;
    }
    case 40070:
    {
        returnValue = F("An der Ölmuhle");
        break;
    }
    case 40071:
    {
        returnValue = F("An der Ölmühle");
        break;
    }
    case 40072:
    {
        returnValue = F("An der Ölschnitz");
        break;
    }
    case 40073:
    {
        returnValue = F("An der Österau");
        break;
    }
    case 40074:
    {
        returnValue = F("An der Überfallhase");
        break;
    }
    case 40075:
    {
        returnValue = F("An der Üppel");
        break;
    }
    case 40076:
    {
        returnValue = F("An d’ Logeree");
        break;
    }
    case 40077:
    {
        returnValue = F("An'n Bööm'kamp");
        break;
    }
    case 40078:
    {
        returnValue = F("An'n Fleet");
        break;
    }
    case 40079:
    {
        returnValue = F("An'n Hoven");
        break;
    }
    case 40080:
    {
        returnValue = F("An'n Hungerbeek");
        break;
    }
    case 40081:
    {
        returnValue = F("An'n Kroog");
        break;
    }
    case 40082:
    {
        returnValue = F("An'n Kösterbarg");
        break;
    }
    case 40083:
    {
        returnValue = F("An'n Meinkenhoff");
        break;
    }
    case 40084:
    {
        returnValue = F("An'n Möhlendiek");
        break;
    }
    case 40085:
    {
        returnValue = F("An'n Pauhl");
        break;
    }
    case 40086:
    {
        returnValue = F("An'n Slagboom");
        break;
    }
    case 40087:
    {
        returnValue = F("An'n Sprüttenhus");
        break;
    }
    case 40088:
    {
        returnValue = F("An'n Swarten Pohl");
        break;
    }
    case 40089:
    {
        returnValue = F("An'n Tiebarg");
        break;
    }
    case 40090:
    {
        returnValue = F("An'n Warerlock");
        break;
    }
    case 40091:
    {
        returnValue = F("An't Blink");
        break;
    }
    case 40092:
    {
        returnValue = F("An't Brunmeer");
        break;
    }
    case 40093:
    {
        returnValue = F("An't Deep");
        break;
    }
    case 40094:
    {
        returnValue = F("An't Dokterhuus");
        break;
    }
    case 40095:
    {
        returnValue = F("An't Dorp");
        break;
    }
    case 40096:
    {
        returnValue = F("An't Ehrenmal");
        break;
    }
    case 40097:
    {
        returnValue = F("An't Heidweg");
        break;
    }
    case 40098:
    {
        returnValue = F("An't Holt");
        break;
    }
    case 40099:
    {
        returnValue = F("An't Karkhoff");
        break;
    }
    case 40100:
    {
        returnValue = F("An't Lindeken");
        break;
    }
    case 40101:
    {
        returnValue = F("An't Lummert");
        break;
    }
    case 40102:
    {
        returnValue = F("An't Moorkuhl");
        break;
    }
    case 40103:
    {
        returnValue = F("An't Möhlendoor");
        break;
    }
    case 40104:
    {
        returnValue = F("An't Ojemanns Plaats");
        break;
    }
    case 40105:
    {
        returnValue = F("An't Pumpwark");
        break;
    }
    case 40106:
    {
        returnValue = F("An't Schaar");
        break;
    }
    case 40107:
    {
        returnValue = F("An't Schwalkersnüst");
        break;
    }
    case 40108:
    {
        returnValue = F("An't Schütt");
        break;
    }
    case 40109:
    {
        returnValue = F("An't Stauwark");
        break;
    }
    case 40110:
    {
        returnValue = F("An't Steenhus");
        break;
    }
    case 40111:
    {
        returnValue = F("An't Stäppken");
        break;
    }
    case 40112:
    {
        returnValue = F("An't Vogskampen");
        break;
    }
    case 40113:
    {
        returnValue = F("An't Över");
        break;
    }
    case 40114:
    {
        returnValue = F("Anbau");
        break;
    }
    case 40115:
    {
        returnValue = F("Anbauerstr.");
        break;
    }
    case 40116:
    {
        returnValue = F("Anbaustr.");
        break;
    }
    case 40117:
    {
        returnValue = F("Anbauweg");
        break;
    }
    case 40118:
    {
        returnValue = F("Anbellstr.");
        break;
    }
    case 40119:
    {
        returnValue = F("Anbindung Bauhaltestelle");
        break;
    }
    case 40120:
    {
        returnValue = F("Anbindung Strutt");
        break;
    }
    case 40121:
    {
        returnValue = F("Ancenis-Str.");
        break;
    }
    case 40122:
    {
        returnValue = F("Ancilla-Schwarz-Weg");
        break;
    }
    case 40123:
    {
        returnValue = F("Ancinner Ring");
        break;
    }
    case 40124:
    {
        returnValue = F("Anckenstr.");
        break;
    }
    case 40125:
    {
        returnValue = F("Ancora-Ring");
        break;
    }
    case 40126:
    {
        returnValue = F("And Togsloot");
        break;
    }
    case 40127:
    {
        returnValue = F("Andachtsplatz");
        break;
    }
    case 40128:
    {
        returnValue = F("Andachtsstätte");
        break;
    }
    case 40129:
    {
        returnValue = F("Andachtsweg");
        break;
    }
    case 40130:
    {
        returnValue = F("Andau");
        break;
    }
    case 40131:
    {
        returnValue = F("Andechser Str.");
        break;
    }
    case 40132:
    {
        returnValue = F("Andechser Waldweg");
        break;
    }
    case 40133:
    {
        returnValue = F("Andechser Weg");
        break;
    }
    case 40134:
    {
        returnValue = F("Andechsstr.");
        break;
    }
    case 40135:
    {
        returnValue = F("Andechsweg");
        break;
    }
    case 40136:
    {
        returnValue = F("Andeckallee");
        break;
    }
    case 40137:
    {
        returnValue = F("Andeler Weg");
        break;
    }
    case 40138:
    {
        returnValue = F("Andelfinger Str.");
        break;
    }
    case 40139:
    {
        returnValue = F("Andelsbachstr.");
        break;
    }
    case 40140:
    {
        returnValue = F("Andelsbachweg");
        break;
    }
    case 40141:
    {
        returnValue = F("Andelshofer Weg");
        break;
    }
    case 40142:
    {
        returnValue = F("Andelweg");
        break;
    }
    case 40143:
    {
        returnValue = F("Andenhäuser Str.");
        break;
    }
    case 40144:
    {
        returnValue = F("Andeper Weg");
        break;
    }
    case 40145:
    {
        returnValue = F("Anderbecker Chaussee");
        break;
    }
    case 40146:
    {
        returnValue = F("Anderbecker Str.");
        break;
    }
    case 40147:
    {
        returnValue = F("Anderbecker Weg");
        break;
    }
    case 40148:
    {
        returnValue = F("Anderes Gewand");
        break;
    }
    case 40149:
    {
        returnValue = F("Anderhalbs");
        break;
    }
    case 40150:
    {
        returnValue = F("Anderhalfdiemmtenweg");
        break;
    }
    case 40151:
    {
        returnValue = F("Anderl Geräumt");
        break;
    }
    case 40152:
    {
        returnValue = F("Anderlbauer Weg");
        break;
    }
    case 40153:
    {
        returnValue = F("Anderlhof");
        break;
    }
    case 40154:
    {
        returnValue = F("Anderlinger Str.");
        break;
    }
    case 40155:
    {
        returnValue = F("Anderlmühle");
        break;
    }
    case 40156:
    {
        returnValue = F("Anderlwies");
        break;
    }
    case 40157:
    {
        returnValue = F("Andermattweg");
        break;
    }
    case 40158:
    {
        returnValue = F("Andernacher Str.");
        break;
    }
    case 40159:
    {
        returnValue = F("Andernacher Weg");
        break;
    }
    case 40160:
    {
        returnValue = F("Anders-Celsius-Str.");
        break;
    }
    case 40161:
    {
        returnValue = F("Andersbach");
        break;
    }
    case 40162:
    {
        returnValue = F("Andersen-Nexö-Str.");
        break;
    }
    case 40163:
    {
        returnValue = F("Andersen-Weg");
        break;
    }
    case 40164:
    {
        returnValue = F("Andersen-Wohnpark");
        break;
    }
    case 40165:
    {
        returnValue = F("Andersenstr.");
        break;
    }
    case 40166:
    {
        returnValue = F("Andersenweg");
        break;
    }
    case 40167:
    {
        returnValue = F("Andershofer Dorfstr.");
        break;
    }
    case 40168:
    {
        returnValue = F("Andershofer Hang");
        break;
    }
    case 40169:
    {
        returnValue = F("Andershofer Ufer");
        break;
    }
    case 40170:
    {
        returnValue = F("Andershofer Weide");
        break;
    }
    case 40171:
    {
        returnValue = F("Andersweg");
        break;
    }
    case 40172:
    {
        returnValue = F("Andertal");
        break;
    }
    case 40173:
    {
        returnValue = F("Anderten");
        break;
    }
    case 40174:
    {
        returnValue = F("Anderten-Hämelsee");
        break;
    }
    case 40175:
    {
        returnValue = F("Anderter Str.");
        break;
    }
    case 40176:
    {
        returnValue = F("Anderwarfen");
        break;
    }
    case 40177:
    {
        returnValue = F("Anderweg");
        break;
    }
    case 40178:
    {
        returnValue = F("Andingstr.");
        break;
    }
    case 40179:
    {
        returnValue = F("Andisleber Str.");
        break;
    }
    case 40180:
    {
        returnValue = F("Andlaustr.");
        break;
    }
    case 40181:
    {
        returnValue = F("Andlauweg");
        break;
    }
    case 40182:
    {
        returnValue = F("Andlawweg");
        break;
    }
    case 40183:
    {
        returnValue = F("Andlerstr.");
        break;
    }
    case 40184:
    {
        returnValue = F("Andorf");
        break;
    }
    case 40185:
    {
        returnValue = F("Andorfer Str.");
        break;
    }
    case 40186:
    {
        returnValue = F("Andover Str.");
        break;
    }
    case 40187:
    {
        returnValue = F("Andre-Noel-Str.");
        break;
    }
    case 40188:
    {
        returnValue = F("Andrea Hilse Park");
        break;
    }
    case 40189:
    {
        returnValue = F("Andreaestr.");
        break;
    }
    case 40190:
    {
        returnValue = F("Andreas-Bauer-Str.");
        break;
    }
    case 40191:
    {
        returnValue = F("Andreas-Baumann-Str.");
        break;
    }
    case 40192:
    {
        returnValue = F("Andreas-Bock-Str.");
        break;
    }
    case 40193:
    {
        returnValue = F("Andreas-Bopp-Str.");
        break;
    }
    case 40194:
    {
        returnValue = F("Andreas-Brentano-Str.");
        break;
    }
    case 40195:
    {
        returnValue = F("Andreas-Brugger-Str.");
        break;
    }
    case 40196:
    {
        returnValue = F("Andreas-Brugger-Weg");
        break;
    }
    case 40197:
    {
        returnValue = F("Andreas-Bräm-Str.");
        break;
    }
    case 40198:
    {
        returnValue = F("Andreas-Christiansen-Str.");
        break;
    }
    case 40199:
    {
        returnValue = F("Andreas-Clausen-Str.");
        break;
    }
    case 40200:
    {
        returnValue = F("Andreas-Danzer-Weg");
        break;
    }
    case 40201:
    {
        returnValue = F("Andreas-Deininger-Str.");
        break;
    }
    case 40202:
    {
        returnValue = F("Andreas-Diettmann-Str.");
        break;
    }
    case 40203:
    {
        returnValue = F("Andreas-Dirks-Str.");
        break;
    }
    case 40204:
    {
        returnValue = F("Andreas-Doll-Str.");
        break;
    }
    case 40205:
    {
        returnValue = F("Andreas-Dück-Str.");
        break;
    }
    case 40206:
    {
        returnValue = F("Andreas-Etschmann-Str.");
        break;
    }
    case 40207:
    {
        returnValue = F("Andreas-Fack-Str.");
        break;
    }
    case 40208:
    {
        returnValue = F("Andreas-Fendt-Ring");
        break;
    }
    case 40209:
    {
        returnValue = F("Andreas-Förster-Str.");
        break;
    }
    case 40210:
    {
        returnValue = F("Andreas-Geyer-Weg");
        break;
    }
    case 40211:
    {
        returnValue = F("Andreas-Glas-Str.");
        break;
    }
    case 40212:
    {
        returnValue = F("Andreas-Greger-Str.");
        break;
    }
    case 40213:
    {
        returnValue = F("Andreas-Halbig-Str.");
        break;
    }
    case 40214:
    {
        returnValue = F("Andreas-Hecht-Str.");
        break;
    }
    case 40215:
    {
        returnValue = F("Andreas-Heck-Str.");
        break;
    }
    case 40216:
    {
        returnValue = F("Andreas-Hermes-Str.");
        break;
    }
    case 40217:
    {
        returnValue = F("Andreas-Herrneisen-Str.");
        break;
    }
    case 40218:
    {
        returnValue = F("Andreas-Herz-Str.");
        break;
    }
    case 40219:
    {
        returnValue = F("Andreas-Hetzel-Str.");
        break;
    }
    case 40220:
    {
        returnValue = F("Andreas-Hippler-Str.");
        break;
    }
    case 40221:
    {
        returnValue = F("Andreas-Hofer-Str.");
        break;
    }
    case 40222:
    {
        returnValue = F("Andreas-Hofer-Weg");
        break;
    }
    case 40223:
    {
        returnValue = F("Andreas-Hofmann-Str.");
        break;
    }
    case 40224:
    {
        returnValue = F("Andreas-Hojer-Ring");
        break;
    }
    case 40225:
    {
        returnValue = F("Andreas-Holzamer-Ring");
        break;
    }
    case 40226:
    {
        returnValue = F("Andreas-Hupfer-Str.");
        break;
    }
    case 40227:
    {
        returnValue = F("Andreas-Häusler-Str.");
        break;
    }
    case 40228:
    {
        returnValue = F("Andreas-Hübbe-Wai");
        break;
    }
    case 40229:
    {
        returnValue = F("Andreas-Imminger-Str.");
        break;
    }
    case 40230:
    {
        returnValue = F("Andreas-Jerin-Str.");
        break;
    }
    case 40231:
    {
        returnValue = F("Andreas-Jochum-Str.");
        break;
    }
    case 40232:
    {
        returnValue = F("Andreas-Joseph-Hofmann-Str.");
        break;
    }
    case 40233:
    {
        returnValue = F("Andreas-Jäger-Weg");
        break;
    }
    case 40234:
    {
        returnValue = F("Andreas-Kaiser-Str.");
        break;
    }
    case 40235:
    {
        returnValue = F("Andreas-Kasperbauer-Str.");
        break;
    }
    case 40236:
    {
        returnValue = F("Andreas-Kemmler-Weg");
        break;
    }
    case 40237:
    {
        returnValue = F("Andreas-Kieser-Str.");
        break;
    }
    case 40238:
    {
        returnValue = F("Andreas-Kley-Str.");
        break;
    }
    case 40239:
    {
        returnValue = F("Andreas-Knauer-Str.");
        break;
    }
    case 40240:
    {
        returnValue = F("Andreas-Kneucker-Str.");
        break;
    }
    case 40241:
    {
        returnValue = F("Andreas-Koch-Str.");
        break;
    }
    case 40242:
    {
        returnValue = F("Andreas-Koob-Str.");
        break;
    }
    case 40243:
    {
        returnValue = F("Andreas-Kölle-Str.");
        break;
    }
    case 40244:
    {
        returnValue = F("Andreas-Lang-Str.");
        break;
    }
    case 40245:
    {
        returnValue = F("Andreas-Lehr-Str.");
        break;
    }
    case 40246:
    {
        returnValue = F("Andreas-Lettner-Str.");
        break;
    }
    case 40247:
    {
        returnValue = F("Andreas-Limmer-Str.");
        break;
    }
    case 40248:
    {
        returnValue = F("Andreas-Lochner-Str.");
        break;
    }
    case 40249:
    {
        returnValue = F("Andreas-Löber-Platz");
        break;
    }
    case 40250:
    {
        returnValue = F("Andreas-Maisel-Weg");
        break;
    }
    case 40251:
    {
        returnValue = F("Andreas-Malsy-Str.");
        break;
    }
    case 40252:
    {
        returnValue = F("Andreas-Mayer-Str.");
        break;
    }
    case 40253:
    {
        returnValue = F("Andreas-Mayr-Str.");
        break;
    }
    case 40254:
    {
        returnValue = F("Andreas-Mitterfellner-Str.");
        break;
    }
    case 40255:
    {
        returnValue = F("Andreas-Mors-Weg");
        break;
    }
    case 40256:
    {
        returnValue = F("Andreas-Moser-Weg");
        break;
    }
    case 40257:
    {
        returnValue = F("Andreas-Much-Str.");
        break;
    }
    case 40258:
    {
        returnValue = F("Andreas-Müller-Weg");
        break;
    }
    case 40259:
    {
        returnValue = F("Andreas-Nielsen-Str.");
        break;
    }
    case 40260:
    {
        returnValue = F("Andreas-Paulus-Str.");
        break;
    }
    case 40261:
    {
        returnValue = F("Andreas-Prühl-Str.");
        break;
    }
    case 40262:
    {
        returnValue = F("Andreas-Raselius-Str.");
        break;
    }
    case 40263:
    {
        returnValue = F("Andreas-Rauch-Str.");
        break;
    }
    case 40264:
    {
        returnValue = F("Andreas-Rogg-Gasse");
        break;
    }
    case 40265:
    {
        returnValue = F("Andreas-Roll-Weg");
        break;
    }
    case 40266:
    {
        returnValue = F("Andreas-Sammer-Str.");
        break;
    }
    case 40267:
    {
        returnValue = F("Andreas-Sapper-Str.");
        break;
    }
    case 40268:
    {
        returnValue = F("Andreas-Scheck-Str.");
        break;
    }
    case 40269:
    {
        returnValue = F("Andreas-Schill-Str.");
        break;
    }
    case 40270:
    {
        returnValue = F("Andreas-Schlee-Str.");
        break;
    }
    case 40271:
    {
        returnValue = F("Andreas-Schlüter-Str.");
        break;
    }
    case 40272:
    {
        returnValue = F("Andreas-Schlüter-Weg");
        break;
    }
    case 40273:
    {
        returnValue = F("Andreas-Schmeller-Str.");
        break;
    }
    case 40274:
    {
        returnValue = F("Andreas-Schmid-Str.");
        break;
    }
    case 40275:
    {
        returnValue = F("Andreas-Schmidt-Gedächtnisweg");
        break;
    }
    case 40276:
    {
        returnValue = F("Andreas-Schneider-Weg");
        break;
    }
    case 40277:
    {
        returnValue = F("Andreas-Schreck-Str.");
        break;
    }
    case 40278:
    {
        returnValue = F("Andreas-Schubert-Str.");
        break;
    }
    case 40279:
    {
        returnValue = F("Andreas-Schuster-Str.");
        break;
    }
    case 40280:
    {
        returnValue = F("Andreas-Schäffer-Weg");
        break;
    }
    case 40281:
    {
        returnValue = F("Andreas-Schüller-Str.");
        break;
    }
    case 40282:
    {
        returnValue = F("Andreas-Seider-Str.");
        break;
    }
    case 40283:
    {
        returnValue = F("Andreas-Seitz-Weg");
        break;
    }
    case 40284:
    {
        returnValue = F("Andreas-Seufert-Ring");
        break;
    }
    case 40285:
    {
        returnValue = F("Andreas-Sohn-Str.");
        break;
    }
    case 40286:
    {
        returnValue = F("Andreas-Stahl-Str.");
        break;
    }
    case 40287:
    {
        returnValue = F("Andreas-Steinmetz-Str.");
        break;
    }
    case 40288:
    {
        returnValue = F("Andreas-Stief-Str.");
        break;
    }
    case 40289:
    {
        returnValue = F("Andreas-Strobel-Str.");
        break;
    }
    case 40290:
    {
        returnValue = F("Andreas-Strobl-Str.");
        break;
    }
    case 40291:
    {
        returnValue = F("Andreas-Thoma-Str.");
        break;
    }
    case 40292:
    {
        returnValue = F("Andreas-Tremmel-Str.");
        break;
    }
    case 40293:
    {
        returnValue = F("Andreas-Urlaub-Str.");
        break;
    }
    case 40294:
    {
        returnValue = F("Andreas-Vöst-Str.");
        break;
    }
    case 40295:
    {
        returnValue = F("Andreas-Wagner-Str.");
        break;
    }
    case 40296:
    {
        returnValue = F("Andreas-Weiß-Str.");
        break;
    }
    case 40297:
    {
        returnValue = F("Andreas-Werckmeister-Str.");
        break;
    }
    case 40298:
    {
        returnValue = F("Andreas-Wilhelmy-Str.");
        break;
    }
    case 40299:
    {
        returnValue = F("Andreas-Wünsch-Str.");
        break;
    }
    case 40300:
    {
        returnValue = F("Andreas-Zwosta-Str.");
        break;
    }
    case 40301:
    {
        returnValue = F("Andreas-von-Grumbach-Str.");
        break;
    }
    case 40302:
    {
        returnValue = F("Andreasabfahrt");
        break;
    }
    case 40303:
    {
        returnValue = F("Andreasberg");
        break;
    }
    case 40304:
    {
        returnValue = F("Andreasberger Str.");
        break;
    }
    case 40305:
    {
        returnValue = F("Andreasgasse");
        break;
    }
    case 40306:
    {
        returnValue = F("Andreaskirchplatz");
        break;
    }
    case 40307:
    {
        returnValue = F("Andreasplatz");
        break;
    }
    case 40308:
    {
        returnValue = F("Andreasruh");
        break;
    }
    case 40309:
    {
        returnValue = F("Andreasstaffel");
        break;
    }
    case 40310:
    {
        returnValue = F("Andreassteig");
        break;
    }
    case 40311:
    {
        returnValue = F("Andreasstiftstr.");
        break;
    }
    case 40312:
    {
        returnValue = F("Andreasstr.");
        break;
    }
    case 40313:
    {
        returnValue = F("Andreastor");
        break;
    }
    case 40314:
    {
        returnValue = F("Andreastr.");
        break;
    }
    case 40315:
    {
        returnValue = F("Andreasweg");
        break;
    }
    case 40316:
    {
        returnValue = F("Andreaweg");
        break;
    }
    case 40317:
    {
        returnValue = F("Andreestr.");
        break;
    }
    case 40318:
    {
        returnValue = F("Andresenstr.");
        break;
    }
    case 40319:
    {
        returnValue = F("Andresgasse");
        break;
    }
    case 40320:
    {
        returnValue = F("Andresstr.");
        break;
    }
    case 40321:
    {
        returnValue = F("Andrestr.");
        break;
    }
    case 40322:
    {
        returnValue = F("Andreästr.");
        break;
    }
    case 40323:
    {
        returnValue = F("Andreäweg");
        break;
    }
    case 40324:
    {
        returnValue = F("Andrijan-Nikolajew-Siedlung");
        break;
    }
    case 40325:
    {
        returnValue = F("Andruffstr.");
        break;
    }
    case 40326:
    {
        returnValue = F("Andruper Str.");
        break;
    }
    case 40327:
    {
        returnValue = F("Andruper Weg");
        break;
    }
    case 40328:
    {
        returnValue = F("Andrychowstr.");
        break;
    }
    case 40329:
    {
        returnValue = F("Andräweg");
        break;
    }
    case 40330:
    {
        returnValue = F("André-Citroen Str.");
        break;
    }
    case 40331:
    {
        returnValue = F("André-Delorme-Str.");
        break;
    }
    case 40332:
    {
        returnValue = F("André-Vasseur-Str.");
        break;
    }
    case 40333:
    {
        returnValue = F("Andréstr.");
        break;
    }
    case 40334:
    {
        returnValue = F("Anebosstr.");
        break;
    }
    case 40335:
    {
        returnValue = F("Anebosweg");
        break;
    }
    case 40336:
    {
        returnValue = F("Aneemonenweg");
        break;
    }
    case 40337:
    {
        returnValue = F("Anemolter Str.");
        break;
    }
    case 40338:
    {
        returnValue = F("Anemonenbogen");
        break;
    }
    case 40339:
    {
        returnValue = F("Anemonenring");
        break;
    }
    case 40340:
    {
        returnValue = F("Anemonenstr.");
        break;
    }
    case 40341:
    {
        returnValue = F("Anemonental");
        break;
    }
    case 40342:
    {
        returnValue = F("Anemonenweg");
        break;
    }
    case 40343:
    {
        returnValue = F("Anesorgenstr.");
        break;
    }
    case 40344:
    {
        returnValue = F("Anette-Kolb-Str.");
        break;
    }
    case 40345:
    {
        returnValue = F("Anette-Thoma-Weg");
        break;
    }
    case 40346:
    {
        returnValue = F("Anette-von-Droste-Hülshoff-Weg");
        break;
    }
    case 40347:
    {
        returnValue = F("Anetzbergerhof");
        break;
    }
    case 40348:
    {
        returnValue = F("Anewang");
        break;
    }
    case 40349:
    {
        returnValue = F("Anfahrt Forstgut Berlitzgrube");
        break;
    }
    case 40350:
    {
        returnValue = F("Anfallweg");
        break;
    }
    case 40351:
    {
        returnValue = F("Anfangmühlweg");
        break;
    }
    case 40352:
    {
        returnValue = F("Angela-Fraundorfer-Str.");
        break;
    }
    case 40353:
    {
        returnValue = F("Angelaweg");
        break;
    }
    case 40354:
    {
        returnValue = F("Angelbach");
        break;
    }
    case 40355:
    {
        returnValue = F("Angelbecker Damm");
        break;
    }
    case 40356:
    {
        returnValue = F("Angelbecker Feld");
        break;
    }
    case 40357:
    {
        returnValue = F("Angelbecker Str.");
        break;
    }
    case 40358:
    {
        returnValue = F("Angelberg");
        break;
    }
    case 40359:
    {
        returnValue = F("Angelbergstr.");
        break;
    }
    case 40360:
    {
        returnValue = F("Angelboweg");
        break;
    }
    case 40361:
    {
        returnValue = F("Angelesbuschweg");
        break;
    }
    case 40362:
    {
        returnValue = F("Angelestr.");
        break;
    }
    case 40363:
    {
        returnValue = F("Angeleweg");
        break;
    }
    case 40364:
    {
        returnValue = F("Angelfeldstr.");
        break;
    }
    case 40365:
    {
        returnValue = F("Angelgartenstr.");
        break;
    }
    case 40366:
    {
        returnValue = F("Angelgasse");
        break;
    }
    case 40367:
    {
        returnValue = F("Angelgärten");
        break;
    }
    case 40368:
    {
        returnValue = F("Angelhof");
        break;
    }
    case 40369:
    {
        returnValue = F("Angelhofstr.");
        break;
    }
    case 40370:
    {
        returnValue = F("Angelhofweg");
        break;
    }
    case 40371:
    {
        returnValue = F("Angelika-Kauffmann-Weg");
        break;
    }
    case 40372:
    {
        returnValue = F("Angelikastr.");
        break;
    }
    case 40373:
    {
        returnValue = F("Angelikaweg");
        break;
    }
    case 40374:
    {
        returnValue = F("Angelina-Egger-Str.");
        break;
    }
    case 40375:
    {
        returnValue = F("Angelina-Martin-Str.");
        break;
    }
    case 40376:
    {
        returnValue = F("Angeliter Weg");
        break;
    }
    case 40377:
    {
        returnValue = F("Angellocher Str.");
        break;
    }
    case 40378:
    {
        returnValue = F("Angelmannstr.");
        break;
    }
    case 40379:
    {
        returnValue = F("Angelner Str.");
        break;
    }
    case 40380:
    {
        returnValue = F("Angelnstr.");
        break;
    }
    case 40381:
    {
        returnValue = F("Angelsbachweg");
        break;
    }
    case 40382:
    {
        returnValue = F("Angelsberg");
        break;
    }
    case 40383:
    {
        returnValue = F("Angelsportverein Dohren");
        break;
    }
    case 40384:
    {
        returnValue = F("Angelsteiner Str.");
        break;
    }
    case 40385:
    {
        returnValue = F("Angelstr.");
        break;
    }
    case 40386:
    {
        returnValue = F("Angeltalweg");
        break;
    }
    case 40387:
    {
        returnValue = F("Angeltürner Str.");
        break;
    }
    case 40388:
    {
        returnValue = F("Angelungstr.");
        break;
    }
    case 40389:
    {
        returnValue = F("Angelus-Silesius-Str.");
        break;
    }
    case 40390:
    {
        returnValue = F("Angelusstr.");
        break;
    }
    case 40391:
    {
        returnValue = F("Angelwasenstr.");
        break;
    }
    case 40392:
    {
        returnValue = F("Angelweg");
        break;
    }
    case 40393:
    {
        returnValue = F("Angelwiese");
        break;
    }
    case 40394:
    {
        returnValue = F("Angeläcker");
        break;
    }
    case 40395:
    {
        returnValue = F("Angenröder Str.");
        break;
    }
    case 40396:
    {
        returnValue = F("Angenthoer");
        break;
    }
    case 40397:
    {
        returnValue = F("Anger");
        break;
    }
    case 40398:
    {
        returnValue = F("Anger-Geräumt");
        break;
    }
    case 40399:
    {
        returnValue = F("Angeracker");
        break;
    }
    case 40400:
    {
        returnValue = F("Angerapper Platz");
        break;
    }
    case 40401:
    {
        returnValue = F("Angerbachstr.");
        break;
    }
    case 40402:
    {
        returnValue = F("Angerbauerstr.");
        break;
    }
    case 40403:
    {
        returnValue = F("Angerberg");
        break;
    }
    case 40404:
    {
        returnValue = F("Angerbergstr.");
        break;
    }
    case 40405:
    {
        returnValue = F("Angerbeutenweg");
        break;
    }
    case 40406:
    {
        returnValue = F("Angerbichl");
        break;
    }
    case 40407:
    {
        returnValue = F("Angerbitz");
        break;
    }
    case 40408:
    {
        returnValue = F("Angerbogen");
        break;
    }
    case 40409:
    {
        returnValue = F("Angerbreite");
        break;
    }
    case 40410:
    {
        returnValue = F("Angerburger Str.");
        break;
    }
    case 40411:
    {
        returnValue = F("Angerburger Weg");
        break;
    }
    case 40412:
    {
        returnValue = F("Angerdamm");
        break;
    }
    case 40413:
    {
        returnValue = F("Angerer Steig");
        break;
    }
    case 40414:
    {
        returnValue = F("Angerer Str.");
        break;
    }
    case 40415:
    {
        returnValue = F("Angererstr.");
        break;
    }
    case 40416:
    {
        returnValue = F("Angererweg");
        break;
    }
    case 40417:
    {
        returnValue = F("Angerfeld");
        break;
    }
    case 40418:
    {
        returnValue = F("Angerfeldstr.");
        break;
    }
    case 40419:
    {
        returnValue = F("Angerfeldweg");
        break;
    }
    case 40420:
    {
        returnValue = F("Angerfleck");
        break;
    }
    case 40421:
    {
        returnValue = F("Angerflutwehr");
        break;
    }
    case 40422:
    {
        returnValue = F("Angergasse");
        break;
    }
    case 40423:
    {
        returnValue = F("Angergraben");
        break;
    }
    case 40424:
    {
        returnValue = F("Angergwand");
        break;
    }
    case 40425:
    {
        returnValue = F("Angergärten");
        break;
    }
    case 40426:
    {
        returnValue = F("Angergässchen");
        break;
    }
    case 40427:
    {
        returnValue = F("Angerhausenstege");
        break;
    }
    case 40428:
    {
        returnValue = F("Angerheckweg");
        break;
    }
    case 40429:
    {
        returnValue = F("Angerhofstr.");
        break;
    }
    case 40430:
    {
        returnValue = F("Angerholzstr.");
        break;
    }
    case 40431:
    {
        returnValue = F("Angerhoop");
        break;
    }
    case 40432:
    {
        returnValue = F("Angerhäuser");
        break;
    }
    case 40433:
    {
        returnValue = F("Angerhöfe");
        break;
    }
    case 40434:
    {
        returnValue = F("Angerhöhe");
        break;
    }
    case 40435:
    {
        returnValue = F("Angerklosterstr.");
        break;
    }
    case 40436:
    {
        returnValue = F("Angerl");
        break;
    }
    case 40437:
    {
        returnValue = F("Angerle");
        break;
    }
    case 40438:
    {
        returnValue = F("Angerleite");
        break;
    }
    case 40439:
    {
        returnValue = F("Angerleiten");
        break;
    }
    case 40440:
    {
        returnValue = F("Angerlstr.");
        break;
    }
    case 40441:
    {
        returnValue = F("Angerlweg");
        break;
    }
    case 40442:
    {
        returnValue = F("Angermannfeld");
        break;
    }
    case 40443:
    {
        returnValue = F("Angermannstr.");
        break;
    }
    case 40444:
    {
        returnValue = F("Angermoosstr.");
        break;
    }
    case 40445:
    {
        returnValue = F("Angermühle");
        break;
    }
    case 40446:
    {
        returnValue = F("Angermühlenweg");
        break;
    }
    case 40447:
    {
        returnValue = F("Angermühlstr.");
        break;
    }
    case 40448:
    {
        returnValue = F("Angermüllerweg");
        break;
    }
    case 40449:
    {
        returnValue = F("Angermünder Chaussee");
        break;
    }
    case 40450:
    {
        returnValue = F("Angermünder Ende");
        break;
    }
    case 40451:
    {
        returnValue = F("Angermünder Str.");
        break;
    }
    case 40452:
    {
        returnValue = F("Angermünder Weg");
        break;
    }
    case 40453:
    {
        returnValue = F("Angern");
        break;
    }
    case 40454:
    {
        returnValue = F("Angerpassage");
        break;
    }
    case 40455:
    {
        returnValue = F("Angerpforte");
        break;
    }
    case 40456:
    {
        returnValue = F("Angerplatz");
        break;
    }
    case 40457:
    {
        returnValue = F("Angerpoint");
        break;
    }
    case 40458:
    {
        returnValue = F("Angerpointstr.");
        break;
    }
    case 40459:
    {
        returnValue = F("Angerreuth");
        break;
    }
    case 40460:
    {
        returnValue = F("Angersbacher Str.");
        break;
    }
    case 40461:
    {
        returnValue = F("Angersbacher Weg");
        break;
    }
    case 40462:
    {
        returnValue = F("Angersbachweg");
        break;
    }
    case 40463:
    {
        returnValue = F("Angerschleife");
        break;
    }
    case 40464:
    {
        returnValue = F("Angersdorfer Str.");
        break;
    }
    case 40465:
    {
        returnValue = F("Angersiedlung");
        break;
    }
    case 40466:
    {
        returnValue = F("Angersiefen");
        break;
    }
    case 40467:
    {
        returnValue = F("Angerskirchen");
        break;
    }
    case 40468:
    {
        returnValue = F("Angersleiten");
        break;
    }
    case 40469:
    {
        returnValue = F("Angersteig");
        break;
    }
    case 40470:
    {
        returnValue = F("Angersteige");
        break;
    }
    case 40471:
    {
        returnValue = F("Angerstr.");
        break;
    }
    case 40472:
    {
        returnValue = F("Angert");
        break;
    }
    case 40473:
    {
        returnValue = F("Angertor");
        break;
    }
    case 40474:
    {
        returnValue = F("Angertorstr.");
        break;
    }
    case 40475:
    {
        returnValue = F("Angertstr.");
        break;
    }
    case 40476:
    {
        returnValue = F("Angerweg");
        break;
    }
    case 40477:
    {
        returnValue = F("Angerweidachstr.");
        break;
    }
    case 40478:
    {
        returnValue = F("Angerweidestr.");
        break;
    }
    case 40479:
    {
        returnValue = F("Angerweiher");
        break;
    }
    case 40480:
    {
        returnValue = F("Angerwiese");
        break;
    }
    case 40481:
    {
        returnValue = F("Angerwiesenweg");
        break;
    }
    case 40482:
    {
        returnValue = F("Angerzeile");
        break;
    }
    case 40483:
    {
        returnValue = F("Angeräckerweg");
        break;
    }
    case 40484:
    {
        returnValue = F("Angewann");
        break;
    }
    case 40485:
    {
        returnValue = F("Angiwarenweg");
        break;
    }
    case 40486:
    {
        returnValue = F("Anglberg");
        break;
    }
    case 40487:
    {
        returnValue = F("Anglergasse");
        break;
    }
    case 40488:
    {
        returnValue = F("Anglerkolonie");
        break;
    }
    case 40489:
    {
        returnValue = F("Anglerpfad");
        break;
    }
    case 40490:
    {
        returnValue = F("Anglersteig");
        break;
    }
    case 40491:
    {
        returnValue = F("Anglerstr.");
        break;
    }
    case 40492:
    {
        returnValue = F("Anglerweg");
        break;
    }
    case 40493:
    {
        returnValue = F("Anglhof");
        break;
    }
    case 40494:
    {
        returnValue = F("Anglstr.");
        break;
    }
    case 40495:
    {
        returnValue = F("Angorastr.");
        break;
    }
    case 40496:
    {
        returnValue = F("Angra Pequena");
        break;
    }
    case 40497:
    {
        returnValue = F("Angschieder Weg");
        break;
    }
    case 40498:
    {
        returnValue = F("Angst");
        break;
    }
    case 40499:
    {
        returnValue = F("Angstweg");
        break;
    }
    case 40500:
    {
        returnValue = F("Anhalter Platz");
        break;
    }
    case 40501:
    {
        returnValue = F("Anhalter Str.");
        break;
    }
    case 40502:
    {
        returnValue = F("Anhalter Weg");
        break;
    }
    case 40503:
    {
        returnValue = F("Anhaltiner Platz");
        break;
    }
    case 40504:
    {
        returnValue = F("Anhaltiner Str.");
        break;
    }
    case 40505:
    {
        returnValue = F("Anhaltiner Weg");
        break;
    }
    case 40506:
    {
        returnValue = F("Anhaltinerring");
        break;
    }
    case 40507:
    {
        returnValue = F("Anhaltstr.");
        break;
    }
    case 40508:
    {
        returnValue = F("Anhaltsweg");
        break;
    }
    case 40509:
    {
        returnValue = F("Anhausen");
        break;
    }
    case 40510:
    {
        returnValue = F("Anhauser Str.");
        break;
    }
    case 40511:
    {
        returnValue = F("Anhauser Weg");
        break;
    }
    case 40512:
    {
        returnValue = F("Anhauser Wiesen");
        break;
    }
    case 40513:
    {
        returnValue = F("Anhauserweg");
        break;
    }
    case 40514:
    {
        returnValue = F("Anhofener Str.");
        break;
    }
    case 40515:
    {
        returnValue = F("Anhofenstr.");
        break;
    }
    case 40516:
    {
        returnValue = F("Anhofer Mühle");
        break;
    }
    case 40517:
    {
        returnValue = F("Anholter Str.");
        break;
    }
    case 40518:
    {
        returnValue = F("Anholtseweg");
        break;
    }
    case 40519:
    {
        returnValue = F("Anhäuser Str.");
        break;
    }
    case 40520:
    {
        returnValue = F("Anhäuserstr.");
        break;
    }
    case 40521:
    {
        returnValue = F("Anhöhe");
        break;
    }
    case 40522:
    {
        returnValue = F("Anhöhe Eisengießerei");
        break;
    }
    case 40523:
    {
        returnValue = F("Anicher Str.");
        break;
    }
    case 40524:
    {
        returnValue = F("Anilinerstr.");
        break;
    }
    case 40525:
    {
        returnValue = F("Anilinstr.");
        break;
    }
    case 40526:
    {
        returnValue = F("Anisweg");
        break;
    }
    case 40527:
    {
        returnValue = F("Anita-Augspurg-Str.");
        break;
    }
    case 40528:
    {
        returnValue = F("Anita-Ree-Str.");
        break;
    }
    case 40529:
    {
        returnValue = F("Anitz");
        break;
    }
    case 40530:
    {
        returnValue = F("Anja-Niedringhaus-Str.");
        break;
    }
    case 40531:
    {
        returnValue = F("Ankamp");
        break;
    }
    case 40532:
    {
        returnValue = F("Anke Weg");
        break;
    }
    case 40533:
    {
        returnValue = F("Ankelbachweg");
        break;
    }
    case 40534:
    {
        returnValue = F("Ankenbronnen");
        break;
    }
    case 40535:
    {
        returnValue = F("Ankenbühlweg");
        break;
    }
    case 40536:
    {
        returnValue = F("Ankenmoosstr.");
        break;
    }
    case 40537:
    {
        returnValue = F("Ankenreuterstr.");
        break;
    }
    case 40538:
    {
        returnValue = F("Ankenweg");
        break;
    }
    case 40539:
    {
        returnValue = F("Anker");
        break;
    }
    case 40540:
    {
        returnValue = F("Anker Flügel");
        break;
    }
    case 40541:
    {
        returnValue = F("Anker See");
        break;
    }
    case 40542:
    {
        returnValue = F("Anker Weg");
        break;
    }
    case 40543:
    {
        returnValue = F("Anker-Garten");
        break;
    }
    case 40544:
    {
        returnValue = F("Ankerallee");
        break;
    }
    case 40545:
    {
        returnValue = F("Ankerberg");
        break;
    }
    case 40546:
    {
        returnValue = F("Ankerbrücke");
        break;
    }
    case 40547:
    {
        returnValue = F("Ankergasse");
        break;
    }
    case 40548:
    {
        returnValue = F("Ankerplatz");
        break;
    }
    case 40549:
    {
        returnValue = F("Ankershagener Str.");
        break;
    }
    case 40550:
    {
        returnValue = F("Ankerstr.");
        break;
    }
    case 40551:
    {
        returnValue = F("Ankersweg");
        break;
    }
    case 40552:
    {
        returnValue = F("Ankerweg");
        break;
    }
    case 40553:
    {
        returnValue = F("Ankerwirtsgasse");
        break;
    }
    case 40554:
    {
        returnValue = F("Anklamer Allee");
        break;
    }
    case 40555:
    {
        returnValue = F("Anklamer Chaussee");
        break;
    }
    case 40556:
    {
        returnValue = F("Anklamer Feld");
        break;
    }
    case 40557:
    {
        returnValue = F("Anklamer Fähre");
        break;
    }
    case 40558:
    {
        returnValue = F("Anklamer Landstr.");
        break;
    }
    case 40559:
    {
        returnValue = F("Anklamer Str.");
        break;
    }
    case 40560:
    {
        returnValue = F("Ankoferstr.");
        break;
    }
    case 40561:
    {
        returnValue = F("Ankohrweg");
        break;
    }
    case 40562:
    {
        returnValue = F("Ankommensplatz");
        break;
    }
    case 40563:
    {
        returnValue = F("Ankumer Damm");
        break;
    }
    case 40564:
    {
        returnValue = F("Ankumer Str.");
        break;
    }
    case 40565:
    {
        returnValue = F("Ankumer Weg");
        break;
    }
    case 40566:
    {
        returnValue = F("Anlage");
        break;
    }
    case 40567:
    {
        returnValue = F("Anlage Pegau");
        break;
    }
    case 40568:
    {
        returnValue = F("Anlage am Hohlenstein");
        break;
    }
    case 40569:
    {
        returnValue = F("Anlage mit kleiner Vitrine zur Stadtgeschichte");
        break;
    }
    case 40570:
    {
        returnValue = F("Anlagen");
        break;
    }
    case 40571:
    {
        returnValue = F("Anlagenstr.");
        break;
    }
    case 40572:
    {
        returnValue = F("Anlagenweg");
        break;
    }
    case 40573:
    {
        returnValue = F("Anlahrweg");
        break;
    }
    case 40574:
    {
        returnValue = F("Anlauterweg");
        break;
    }
    case 40575:
    {
        returnValue = F("Anleft");
        break;
    }
    case 40576:
    {
        returnValue = F("Anleger");
        break;
    }
    case 40577:
    {
        returnValue = F("Anleger 1 Rössler");
        break;
    }
    case 40578:
    {
        returnValue = F("Anleger 2 Rössler Linie");
        break;
    }
    case 40579:
    {
        returnValue = F("Anleger 3 Bingen-Rüdesh.");
        break;
    }
    case 40580:
    {
        returnValue = F("Anleger 4 Rössler");
        break;
    }
    case 40581:
    {
        returnValue = F("Anleger 5 Rössler");
        break;
    }
    case 40582:
    {
        returnValue = F("Anleger 6");
        break;
    }
    case 40583:
    {
        returnValue = F("Anleger 7 Köln-Düsseldorfer");
        break;
    }
    case 40584:
    {
        returnValue = F("Anleger Eschauel");
        break;
    }
    case 40585:
    {
        returnValue = F("Anleger Fegetasche");
        break;
    }
    case 40586:
    {
        returnValue = F("Anleger K-D");
        break;
    }
    case 40587:
    {
        returnValue = F("Anleger Lorch");
        break;
    }
    case 40588:
    {
        returnValue = F("Anlegestelle \"Etta von Dangast");
        break;
    }
    case 40589:
    {
        returnValue = F("Anlegestelle Goch Kessel");
        break;
    }
    case 40590:
    {
        returnValue = F("Anlegtraufweg");
        break;
    }
    case 40591:
    {
        returnValue = F("Anlegweg");
        break;
    }
    case 40592:
    {
        returnValue = F("Anliegerstr.");
        break;
    }
    case 40593:
    {
        returnValue = F("Anliegerweg");
        break;
    }
    case 40594:
    {
        returnValue = F("Anlohstr.");
        break;
    }
    case 40595:
    {
        returnValue = F("Anlägle");
        break;
    }
    case 40596:
    {
        returnValue = F("Anmannshauweg");
        break;
    }
    case 40597:
    {
        returnValue = F("Ann Breden Winkel");
        break;
    }
    case 40598:
    {
        returnValue = F("Ann Gallbarg");
        break;
    }
    case 40599:
    {
        returnValue = F("Anna Campbell Str.");
        break;
    }
    case 40600:
    {
        returnValue = F("Anna Kym - Stadtpark");
        break;
    }
    case 40601:
    {
        returnValue = F("Anna-Barbara-Gross-Str.");
        break;
    }
    case 40602:
    {
        returnValue = F("Anna-Beckert-Weg");
        break;
    }
    case 40603:
    {
        returnValue = F("Anna-Bender-Str.");
        break;
    }
    case 40604:
    {
        returnValue = F("Anna-Blos-Str.");
        break;
    }
    case 40605:
    {
        returnValue = F("Anna-Blos-Weg");
        break;
    }
    case 40606:
    {
        returnValue = F("Anna-Casalter-Str.");
        break;
    }
    case 40607:
    {
        returnValue = F("Anna-Castens-Str.");
        break;
    }
    case 40608:
    {
        returnValue = F("Anna-Catharina-Haug-Weg");
        break;
    }
    case 40609:
    {
        returnValue = F("Anna-Dankwart-Weg");
        break;
    }
    case 40610:
    {
        returnValue = F("Anna-Debyl-Str.");
        break;
    }
    case 40611:
    {
        returnValue = F("Anna-Ehlers-Str.");
        break;
    }
    case 40612:
    {
        returnValue = F("Anna-Esche-Gäßchen");
        break;
    }
    case 40613:
    {
        returnValue = F("Anna-Esche-Str.");
        break;
    }
    case 40614:
    {
        returnValue = F("Anna-Essinger-Str.");
        break;
    }
    case 40615:
    {
        returnValue = F("Anna-Felbinger-Str.");
        break;
    }
    case 40616:
    {
        returnValue = F("Anna-Feldhusen-Str.");
        break;
    }
    case 40617:
    {
        returnValue = F("Anna-Fischer-Weg");
        break;
    }
    case 40618:
    {
        returnValue = F("Anna-Friedrich-Str.");
        break;
    }
    case 40619:
    {
        returnValue = F("Anna-Garten");
        break;
    }
    case 40620:
    {
        returnValue = F("Anna-Gerresheim-Str.");
        break;
    }
    case 40621:
    {
        returnValue = F("Anna-Golin-Weg");
        break;
    }
    case 40622:
    {
        returnValue = F("Anna-Haag-Ring");
        break;
    }
    case 40623:
    {
        returnValue = F("Anna-Haag-Str.");
        break;
    }
    case 40624:
    {
        returnValue = F("Anna-Haag-Weg");
        break;
    }
    case 40625:
    {
        returnValue = F("Anna-Hage-Weg");
        break;
    }
    case 40626:
    {
        returnValue = F("Anna-Hake-Weg");
        break;
    }
    case 40627:
    {
        returnValue = F("Anna-Hanke-Weg");
        break;
    }
    case 40628:
    {
        returnValue = F("Anna-Hausen-Str.");
        break;
    }
    case 40629:
    {
        returnValue = F("Anna-Heitmann-Weg");
        break;
    }
    case 40630:
    {
        returnValue = F("Anna-Herrmann-Str.");
        break;
    }
    case 40631:
    {
        returnValue = F("Anna-Hieber-Str.");
        break;
    }
    case 40632:
    {
        returnValue = F("Anna-Hirsch-Str.");
        break;
    }
    case 40633:
    {
        returnValue = F("Anna-Hochbaum-Platz");
        break;
    }
    case 40634:
    {
        returnValue = F("Anna-Hoffmann-Weg");
        break;
    }
    case 40635:
    {
        returnValue = F("Anna-Holmer-Weg");
        break;
    }
    case 40636:
    {
        returnValue = F("Anna-Ismair-Weg");
        break;
    }
    case 40637:
    {
        returnValue = F("Anna-Karbe-Str.");
        break;
    }
    case 40638:
    {
        returnValue = F("Anna-Karbe-Weg");
        break;
    }
    case 40639:
    {
        returnValue = F("Anna-Keller-Weg");
        break;
    }
    case 40640:
    {
        returnValue = F("Anna-Kreis-Str.");
        break;
    }
    case 40641:
    {
        returnValue = F("Anna-Kroher-Str.");
        break;
    }
    case 40642:
    {
        returnValue = F("Anna-Kästner-Str.");
        break;
    }
    case 40643:
    {
        returnValue = F("Anna-Landmann-Str.");
        break;
    }
    case 40644:
    {
        returnValue = F("Anna-Leite");
        break;
    }
    case 40645:
    {
        returnValue = F("Anna-Lindh-Weg");
        break;
    }
    case 40646:
    {
        returnValue = F("Anna-Magdalena-Bach-Str.");
        break;
    }
    case 40647:
    {
        returnValue = F("Anna-Maria-Gansen-Str.");
        break;
    }
    case 40648:
    {
        returnValue = F("Anna-Maria-Heuck-Str.");
        break;
    }
    case 40649:
    {
        returnValue = F("Anna-Maria-Jhering-Str.");
        break;
    }
    case 40650:
    {
        returnValue = F("Anna-Maria-Koller-Str.");
        break;
    }
    case 40651:
    {
        returnValue = F("Anna-Maria-Weg");
        break;
    }
    case 40652:
    {
        returnValue = F("Anna-Marie-Ortlieb-Str.");
        break;
    }
    case 40653:
    {
        returnValue = F("Anna-Maus-Str.");
        break;
    }
    case 40654:
    {
        returnValue = F("Anna-Müller-Str.");
        break;
    }
    case 40655:
    {
        returnValue = F("Anna-Neff-Str.");
        break;
    }
    case 40656:
    {
        returnValue = F("Anna-Nill-Weg");
        break;
    }
    case 40657:
    {
        returnValue = F("Anna-Nopper-Str.");
        break;
    }
    case 40658:
    {
        returnValue = F("Anna-Ovena-Hoyer-Str.");
        break;
    }
    case 40659:
    {
        returnValue = F("Anna-Paul-Str.");
        break;
    }
    case 40660:
    {
        returnValue = F("Anna-Paumann-Str.");
        break;
    }
    case 40661:
    {
        returnValue = F("Anna-Petrat-Str.");
        break;
    }
    case 40662:
    {
        returnValue = F("Anna-Pfund-Str.");
        break;
    }
    case 40663:
    {
        returnValue = F("Anna-Rauh-Str.");
        break;
    }
    case 40664:
    {
        returnValue = F("Anna-Reich-Str.");
        break;
    }
    case 40665:
    {
        returnValue = F("Anna-Richter-Str.");
        break;
    }
    case 40666:
    {
        returnValue = F("Anna-Salome-Str.");
        break;
    }
    case 40667:
    {
        returnValue = F("Anna-Saur-Weg");
        break;
    }
    case 40668:
    {
        returnValue = F("Anna-Schieber-Weg");
        break;
    }
    case 40669:
    {
        returnValue = F("Anna-Schmöle-Str.");
        break;
    }
    case 40670:
    {
        returnValue = F("Anna-Schäffer-Str.");
        break;
    }
    case 40671:
    {
        returnValue = F("Anna-Seghers-Ring");
        break;
    }
    case 40672:
    {
        returnValue = F("Anna-Seghers-Str.");
        break;
    }
    case 40673:
    {
        returnValue = F("Anna-Seghers-Weg");
        break;
    }
    case 40674:
    {
        returnValue = F("Anna-Selzer-Str.");
        break;
    }
    case 40675:
    {
        returnValue = F("Anna-Siemsen-Str.");
        break;
    }
    case 40676:
    {
        returnValue = F("Anna-Siemsen-Weg");
        break;
    }
    case 40677:
    {
        returnValue = F("Anna-Sigmund-Str.");
        break;
    }
    case 40678:
    {
        returnValue = F("Anna-Simon-Weg");
        break;
    }
    case 40679:
    {
        returnValue = F("Anna-Sophien-Str.");
        break;
    }
    case 40680:
    {
        returnValue = F("Anna-Stobitzer-Ring");
        break;
    }
    case 40681:
    {
        returnValue = F("Anna-Stock-Str.");
        break;
    }
    case 40682:
    {
        returnValue = F("Anna-Taeschner-Str.");
        break;
    }
    case 40683:
    {
        returnValue = F("Anna-Tattenberger-Str.");
        break;
    }
    case 40684:
    {
        returnValue = F("Anna-Thamm-Str.");
        break;
    }
    case 40685:
    {
        returnValue = F("Anna-Theurer-Str.");
        break;
    }
    case 40686:
    {
        returnValue = F("Anna-Tiessen-Str.");
        break;
    }
    case 40687:
    {
        returnValue = F("Anna-Ulner-Str.");
        break;
    }
    case 40688:
    {
        returnValue = F("Anna-Vagt-Weg");
        break;
    }
    case 40689:
    {
        returnValue = F("Anna-Vogel-Str.");
        break;
    }
    case 40690:
    {
        returnValue = F("Anna-Walboem-Weg");
        break;
    }
    case 40691:
    {
        returnValue = F("Anna-Warth-Str.");
        break;
    }
    case 40692:
    {
        returnValue = F("Anna-Wasner-Str.");
        break;
    }
    case 40693:
    {
        returnValue = F("Anna-Weißbecker-Str.");
        break;
    }
    case 40694:
    {
        returnValue = F("Anna-Wiemer-Weg");
        break;
    }
    case 40695:
    {
        returnValue = F("Anna-Wunderlich-Weg");
        break;
    }
    case 40696:
    {
        returnValue = F("Anna-Zammert-Str.");
        break;
    }
    case 40697:
    {
        returnValue = F("Anna-Zeiser-Str.");
        break;
    }
    case 40698:
    {
        returnValue = F("Anna-Zentgraf-Str.");
        break;
    }
    case 40699:
    {
        returnValue = F("Anna-von-Baden-Weg");
        break;
    }
    case 40700:
    {
        returnValue = F("Anna-von-Borries-Weg");
        break;
    }
    case 40701:
    {
        returnValue = F("Anna-von-Buchwaldt-Weg");
        break;
    }
    case 40702:
    {
        returnValue = F("Anna-von-Canstein-Str.");
        break;
    }
    case 40703:
    {
        returnValue = F("Anna-von-Cleve-Str.");
        break;
    }
    case 40704:
    {
        returnValue = F("Anna-von-Freyberg-Str.");
        break;
    }
    case 40705:
    {
        returnValue = F("Anna-von-Holtzbrinck-Str.");
        break;
    }
    case 40706:
    {
        returnValue = F("Anna-von-Isenburg-Weg");
        break;
    }
    case 40707:
    {
        returnValue = F("Anna-von-Noel-Weg");
        break;
    }
    case 40708:
    {
        returnValue = F("Anna-von-Russegg-Weg");
        break;
    }
    case 40709:
    {
        returnValue = F("Anna-von-Wahl-Weg");
        break;
    }
    case 40710:
    {
        returnValue = F("Annaberg");
        break;
    }
    case 40711:
    {
        returnValue = F("Annaberger Stieg");
        break;
    }
    case 40712:
    {
        returnValue = F("Annaberger Str.");
        break;
    }
    case 40713:
    {
        returnValue = F("Annabergplatz");
        break;
    }
    case 40714:
    {
        returnValue = F("Annabergstr.");
        break;
    }
    case 40715:
    {
        returnValue = F("Annabergweg");
        break;
    }
    case 40716:
    {
        returnValue = F("Annaburger Str.");
        break;
    }
    case 40717:
    {
        returnValue = F("Annafeldstr.");
        break;
    }
    case 40718:
    {
        returnValue = F("Annahaidweg");
        break;
    }
    case 40719:
    {
        returnValue = F("Annahalde");
        break;
    }
    case 40720:
    {
        returnValue = F("Annahof");
        break;
    }
    case 40721:
    {
        returnValue = F("Annahütter Str.");
        break;
    }
    case 40722:
    {
        returnValue = F("Annapark");
        break;
    }
    case 40723:
    {
        returnValue = F("Annapfad");
        break;
    }
    case 40724:
    {
        returnValue = F("Annaplatz");
        break;
    }
    case 40725:
    {
        returnValue = F("Annaröder Str.");
        break;
    }
    case 40726:
    {
        returnValue = F("Annaröder Weg");
        break;
    }
    case 40727:
    {
        returnValue = F("Annaseeweg");
        break;
    }
    case 40728:
    {
        returnValue = F("Annastr.");
        break;
    }
    case 40729:
    {
        returnValue = F("Annathaler Str.");
        break;
    }
    case 40730:
    {
        returnValue = F("Annathalmühle");
        break;
    }
    case 40731:
    {
        returnValue = F("Annaweg");
        break;
    }
    case 40732:
    {
        returnValue = F("Annawiesen");
        break;
    }
    case 40733:
    {
        returnValue = F("Anne Pierkoppel");
        break;
    }
    case 40734:
    {
        returnValue = F("Anne-Frank-Hof");
        break;
    }
    case 40735:
    {
        returnValue = F("Anne-Frank-Platz");
        break;
    }
    case 40736:
    {
        returnValue = F("Anne-Frank-Ring");
        break;
    }
    case 40737:
    {
        returnValue = F("Anne-Frank-Str.");
        break;
    }
    case 40738:
    {
        returnValue = F("Anne-Frank-Weg");
        break;
    }
    case 40739:
    {
        returnValue = F("Anne-Jennfeldt-Str.");
        break;
    }
    case 40740:
    {
        returnValue = F("Annecke-Str.");
        break;
    }
    case 40741:
    {
        returnValue = F("Annecybrücke");
        break;
    }
    case 40742:
    {
        returnValue = F("Annegarnstr.");
        break;
    }
    case 40743:
    {
        returnValue = F("Anneli-Voigt-Str.");
        break;
    }
    case 40744:
    {
        returnValue = F("Annelie-von-Heyl-Str.");
        break;
    }
    case 40745:
    {
        returnValue = F("Annelie-von-Sievers-Weg");
        break;
    }
    case 40746:
    {
        returnValue = F("Annelies-Kupper-Allee");
        break;
    }
    case 40747:
    {
        returnValue = F("Anneliese-Bilger-Platz");
        break;
    }
    case 40748:
    {
        returnValue = F("Anneliese-Brühl-Weg");
        break;
    }
    case 40749:
    {
        returnValue = F("Anneliese-Deschauer-Str.");
        break;
    }
    case 40750:
    {
        returnValue = F("Anneliese-Heller-Weg");
        break;
    }
    case 40751:
    {
        returnValue = F("Anneliese-Kaiser-Str.");
        break;
    }
    case 40752:
    {
        returnValue = F("Anneliese-Schmidt-Ring");
        break;
    }
    case 40753:
    {
        returnValue = F("Anneliesensteg");
        break;
    }
    case 40754:
    {
        returnValue = F("Anneliesenweg");
        break;
    }
    case 40755:
    {
        returnValue = F("Annelieseweg");
        break;
    }
    case 40756:
    {
        returnValue = F("Annelise-Heikaus-Str.");
        break;
    }
    case 40757:
    {
        returnValue = F("Annemaire-Renger-Str.");
        break;
    }
    case 40758:
    {
        returnValue = F("Annemarie-Griesinger-Ring");
        break;
    }
    case 40759:
    {
        returnValue = F("Annemarie-Jacob-Str.");
        break;
    }
    case 40760:
    {
        returnValue = F("Annemarie-Renger-Str.");
        break;
    }
    case 40761:
    {
        returnValue = F("Annemarie-Renger-Weg");
        break;
    }
    case 40762:
    {
        returnValue = F("Annemariental");
        break;
    }
    case 40763:
    {
        returnValue = F("Annemarienweg");
        break;
    }
    case 40764:
    {
        returnValue = F("Annemariestr.");
        break;
    }
    case 40765:
    {
        returnValue = F("Annemassepark");
        break;
    }
    case 40766:
    {
        returnValue = F("Annemirl-Bauer-Str.");
        break;
    }
    case 40767:
    {
        returnValue = F("Annenberg");
        break;
    }
    case 40768:
    {
        returnValue = F("Annenbergstr.");
        break;
    }
    case 40769:
    {
        returnValue = F("Annenborn");
        break;
    }
    case 40770:
    {
        returnValue = F("Annenburg");
        break;
    }
    case 40771:
    {
        returnValue = F("Annengasse");
        break;
    }
    case 40772:
    {
        returnValue = F("Annenhof");
        break;
    }
    case 40773:
    {
        returnValue = F("Annenhofer Katen");
        break;
    }
    case 40774:
    {
        returnValue = F("Annenhofer Weg");
        break;
    }
    case 40775:
    {
        returnValue = F("Annenkamp");
        break;
    }
    case 40776:
    {
        returnValue = F("Annenkirchplatz");
        break;
    }
    case 40777:
    {
        returnValue = F("Annenruhschneise");
        break;
    }
    case 40778:
    {
        returnValue = F("Annenstr.");
        break;
    }
    case 40779:
    {
        returnValue = F("Annentaler Berg");
        break;
    }
    case 40780:
    {
        returnValue = F("Annentaler Bogen");
        break;
    }
    case 40781:
    {
        returnValue = F("Annenwalde");
        break;
    }
    case 40782:
    {
        returnValue = F("Annenwalder Str.");
        break;
    }
    case 40783:
    {
        returnValue = F("Annenwalder Weg");
        break;
    }
    case 40784:
    {
        returnValue = F("Annenweg");
        break;
    }
    case 40785:
    {
        returnValue = F("Annenwiese");
        break;
    }
    case 40786:
    {
        returnValue = F("Annepauten");
        break;
    }
    case 40787:
    {
        returnValue = F("Annerlgasse");
        break;
    }
    case 40788:
    {
        returnValue = F("Anneröder Str.");
        break;
    }
    case 40789:
    {
        returnValue = F("Anneslück");
        break;
    }
    case 40790:
    {
        returnValue = F("Annette-Kolb-Str.");
        break;
    }
    case 40791:
    {
        returnValue = F("Annette-Kolb-Weg");
        break;
    }
    case 40792:
    {
        returnValue = F("Annette-Thoma-Str.");
        break;
    }
    case 40793:
    {
        returnValue = F("Annette-Thoma-Weg");
        break;
    }
    case 40794:
    {
        returnValue = F("Annette-Weg");
        break;
    }
    case 40795:
    {
        returnValue = F("Annette-v.-Droste-Hülshoff-Weg");
        break;
    }
    case 40796:
    {
        returnValue = F("Annette-v.Droste-Hülshoff-Weg");
        break;
    }
    case 40797:
    {
        returnValue = F("Annette-von-Droste-Hülshoff-Str.");
        break;
    }
    case 40798:
    {
        returnValue = F("Annette-von-Droste-Hülshoff-Weg");
        break;
    }
    case 40799:
    {
        returnValue = F("Annettenweg");
        break;
    }
    case 40800:
    {
        returnValue = F("Annettestr.");
        break;
    }
    case 40801:
    {
        returnValue = F("Annetteweg");
        break;
    }
    case 40802:
    {
        returnValue = F("Anneweg");
        break;
    }
    case 40803:
    {
        returnValue = F("Anni-Albers-Str.");
        break;
    }
    case 40804:
    {
        returnValue = F("Anni-Krauss-Str.");
        break;
    }
    case 40805:
    {
        returnValue = F("Anni-Leib-Weg");
        break;
    }
    case 40806:
    {
        returnValue = F("Anni-Reichl-Weg");
        break;
    }
    case 40807:
    {
        returnValue = F("Anni-Siepe-Str.");
        break;
    }
    case 40808:
    {
        returnValue = F("Anni-Simmeth-Weg");
        break;
    }
    case 40809:
    {
        returnValue = F("Anni-Wienbruch-Weg");
        break;
    }
    case 40810:
    {
        returnValue = F("Annie Merz Anlage");
        break;
    }
    case 40811:
    {
        returnValue = F("Anning");
        break;
    }
    case 40812:
    {
        returnValue = F("Anno-Knütgen-Str.");
        break;
    }
    case 40813:
    {
        returnValue = F("Anno-Santo-Siedlung");
        break;
    }
    case 40814:
    {
        returnValue = F("Annograben");
        break;
    }
    case 40815:
    {
        returnValue = F("Annonay-Garten");
        break;
    }
    case 40816:
    {
        returnValue = F("Annonaybrücke");
        break;
    }
    case 40817:
    {
        returnValue = F("Annonaystr.");
        break;
    }
    case 40818:
    {
        returnValue = F("Annostr.");
        break;
    }
    case 40819:
    {
        returnValue = F("Annot-Jacobi-Str.");
        break;
    }
    case 40820:
    {
        returnValue = F("Annweiler Str.");
        break;
    }
    case 40821:
    {
        returnValue = F("Anny-Auerbach-Weg");
        break;
    }
    case 40822:
    {
        returnValue = F("Anny-Ondra-Bogen");
        break;
    }
    case 40823:
    {
        returnValue = F("Anny-Schlemm-Str.");
        break;
    }
    case 40824:
    {
        returnValue = F("Anny-Trapp-Str.");
        break;
    }
    case 40825:
    {
        returnValue = F("Anorganaplatz");
        break;
    }
    case 40826:
    {
        returnValue = F("Anostr.");
        break;
    }
    case 40827:
    {
        returnValue = F("Anraffer Str.");
        break;
    }
    case 40828:
    {
        returnValue = F("Anrather Str.");
        break;
    }
    case 40829:
    {
        returnValue = F("Anrathsweg");
        break;
    }
    case 40830:
    {
        returnValue = F("Anreppener Str.");
        break;
    }
    case 40831:
    {
        returnValue = F("Anrichterstr.");
        break;
    }
    case 40832:
    {
        returnValue = F("Anröchter Str.");
        break;
    }
    case 40833:
    {
        returnValue = F("Anröder Weg");
        break;
    }
    case 40834:
    {
        returnValue = F("Ansbacher Hof");
        break;
    }
    case 40835:
    {
        returnValue = F("Ansbacher Str.");
        break;
    }
    case 40836:
    {
        returnValue = F("Ansbachring");
        break;
    }
    case 40837:
    {
        returnValue = F("Ansbachweg");
        break;
    }
    case 40838:
    {
        returnValue = F("Ansbergstr.");
        break;
    }
    case 40839:
    {
        returnValue = F("Anscharstr.");
        break;
    }
    case 40840:
    {
        returnValue = F("Anschlag");
        break;
    }
    case 40841:
    {
        returnValue = F("Anschlussgleis Werk Kiefer");
        break;
    }
    case 40842:
    {
        returnValue = F("Anschottredder");
        break;
    }
    case 40843:
    {
        returnValue = F("Anschützstr.");
        break;
    }
    case 40844:
    {
        returnValue = F("Ansdorfer Str.");
        break;
    }
    case 40845:
    {
        returnValue = F("Ansel-Andrae-Str.");
        break;
    }
    case 40846:
    {
        returnValue = F("Anselbachstr.");
        break;
    }
    case 40847:
    {
        returnValue = F("Anselm-Ellinger-Str.");
        break;
    }
    case 40848:
    {
        returnValue = F("Anselm-Erb-Str.");
        break;
    }
    case 40849:
    {
        returnValue = F("Anselm-Feuerbach-Str.");
        break;
    }
    case 40850:
    {
        returnValue = F("Anselm-Pflug-Str.");
        break;
    }
    case 40851:
    {
        returnValue = F("Anselm-Schott-Weg");
        break;
    }
    case 40852:
    {
        returnValue = F("Anselm-von-Eicholzheim-Str.");
        break;
    }
    case 40853:
    {
        returnValue = F("Anselma-Bopp-Str.");
        break;
    }
    case 40854:
    {
        returnValue = F("Anselmentstr.");
        break;
    }
    case 40855:
    {
        returnValue = F("Anselmstr.");
        break;
    }
    case 40856:
    {
        returnValue = F("Anselmweg");
        break;
    }
    case 40857:
    {
        returnValue = F("Ansfeldschneise");
        break;
    }
    case 40858:
    {
        returnValue = F("Ansgarstr.");
        break;
    }
    case 40859:
    {
        returnValue = F("Ansgarweg");
        break;
    }
    case 40860:
    {
        returnValue = F("Ansheristr.");
        break;
    }
    case 40861:
    {
        returnValue = F("Anshövel");
        break;
    }
    case 40862:
    {
        returnValue = F("Anspacher Str.");
        break;
    }
    case 40863:
    {
        returnValue = F("Anspacherweg");
        break;
    }
    case 40864:
    {
        returnValue = F("Anspachweg");
        break;
    }
    case 40865:
    {
        returnValue = F("Anspann");
        break;
    }
    case 40866:
    {
        returnValue = F("Anspelstr.");
        break;
    }
    case 40867:
    {
        returnValue = F("Anspännlein");
        break;
    }
    case 40868:
    {
        returnValue = F("Anstaltsstr.");
        break;
    }
    case 40869:
    {
        returnValue = F("Anstaltstr.");
        break;
    }
    case 40870:
    {
        returnValue = F("Anstedt");
        break;
    }
    case 40871:
    {
        returnValue = F("Anstieg");
        break;
    }
    case 40872:
    {
        returnValue = F("Ansverusweg");
        break;
    }
    case 40873:
    {
        returnValue = F("Ant Blink");
        break;
    }
    case 40874:
    {
        returnValue = F("Ant Breetland");
        break;
    }
    case 40875:
    {
        returnValue = F("Ant Dörp");
        break;
    }
    case 40876:
    {
        returnValue = F("Ant Flintenkamp");
        break;
    }
    case 40877:
    {
        returnValue = F("Ant Gast");
        break;
    }
    case 40878:
    {
        returnValue = F("Ant Gulfhofsee");
        break;
    }
    case 40879:
    {
        returnValue = F("Ant Holt");
        break;
    }
    case 40880:
    {
        returnValue = F("Ant Karkland");
        break;
    }
    case 40881:
    {
        returnValue = F("Ant Koornfeld");
        break;
    }
    case 40882:
    {
        returnValue = F("Ant Kruse Bömken");
        break;
    }
    case 40883:
    {
        returnValue = F("Ant Körtland");
        break;
    }
    case 40884:
    {
        returnValue = F("Ant Leegmoor");
        break;
    }
    case 40885:
    {
        returnValue = F("Ant Möhlensteen");
        break;
    }
    case 40886:
    {
        returnValue = F("Ant Schütthock");
        break;
    }
    case 40887:
    {
        returnValue = F("Ant Spöölplatz");
        break;
    }
    case 40888:
    {
        returnValue = F("Antaresstr.");
        break;
    }
    case 40889:
    {
        returnValue = F("Antdorfer Str.");
        break;
    }
    case 40890:
    {
        returnValue = F("Antegoren");
        break;
    }
    case 40891:
    {
        returnValue = F("Antel");
        break;
    }
    case 40892:
    {
        returnValue = F("Antelsdorf");
        break;
    }
    case 40893:
    {
        returnValue = F("Antenberg");
        break;
    }
    case 40894:
    {
        returnValue = F("Antendorfer Str.");
        break;
    }
    case 40895:
    {
        returnValue = F("Antener Str.");
        break;
    }
    case 40896:
    {
        returnValue = F("Antenfressen");
        break;
    }
    case 40897:
    {
        returnValue = F("Antennenweg");
        break;
    }
    case 40898:
    {
        returnValue = F("Antenringer Str.");
        break;
    }
    case 40899:
    {
        returnValue = F("Antenstr.");
        break;
    }
    case 40900:
    {
        returnValue = F("Antersdorf");
        break;
    }
    case 40901:
    {
        returnValue = F("Antersdorfer Str.");
        break;
    }
    case 40902:
    {
        returnValue = F("Anterskofen");
        break;
    }
    case 40903:
    {
        returnValue = F("Antestalstr.");
        break;
    }
    case 40904:
    {
        returnValue = F("Antholzen");
        break;
    }
    case 40905:
    {
        returnValue = F("Anthrazitweg");
        break;
    }
    case 40906:
    {
        returnValue = F("Anthurienweg");
        break;
    }
    case 40907:
    {
        returnValue = F("Antikeweg");
        break;
    }
    case 40908:
    {
        returnValue = F("Antjenpoolweg");
        break;
    }
    case 40909:
    {
        returnValue = F("Antlesbrunnweg");
        break;
    }
    case 40910:
    {
        returnValue = F("Antoine-Balcet-Weg");
        break;
    }
    case 40911:
    {
        returnValue = F("Antoinettenhof");
        break;
    }
    case 40912:
    {
        returnValue = F("Antoinettenstr.");
        break;
    }
    case 40913:
    {
        returnValue = F("Antoinettenweg");
        break;
    }
    case 40914:
    {
        returnValue = F("Anton Günther Weg");
        break;
    }
    case 40915:
    {
        returnValue = F("Anton Vogl Str.");
        break;
    }
    case 40916:
    {
        returnValue = F("Anton-Ahle-Weg");
        break;
    }
    case 40917:
    {
        returnValue = F("Anton-Andre-Weg");
        break;
    }
    case 40918:
    {
        returnValue = F("Anton-Aulke-Str.");
        break;
    }
    case 40919:
    {
        returnValue = F("Anton-Aulke-Weg");
        break;
    }
    case 40920:
    {
        returnValue = F("Anton-Bachschmid-Str.");
        break;
    }
    case 40921:
    {
        returnValue = F("Anton-Bartl-Str.");
        break;
    }
    case 40922:
    {
        returnValue = F("Anton-Bartscher-Str.");
        break;
    }
    case 40923:
    {
        returnValue = F("Anton-Barz-Str.");
        break;
    }
    case 40924:
    {
        returnValue = F("Anton-Baumann-Str.");
        break;
    }
    case 40925:
    {
        returnValue = F("Anton-Baur-Str.");
        break;
    }
    case 40926:
    {
        returnValue = F("Anton-Beilhack-Str.");
        break;
    }
    case 40927:
    {
        returnValue = F("Anton-Berner-Str.");
        break;
    }
    case 40928:
    {
        returnValue = F("Anton-Bessmann-Ring");
        break;
    }
    case 40929:
    {
        returnValue = F("Anton-Beusch-Str.");
        break;
    }
    case 40930:
    {
        returnValue = F("Anton-Bieber-Weg");
        break;
    }
    case 40931:
    {
        returnValue = F("Anton-Bischof-Str.");
        break;
    }
    case 40932:
    {
        returnValue = F("Anton-Boneberg-Ring");
        break;
    }
    case 40933:
    {
        returnValue = F("Anton-Braith-Weg");
        break;
    }
    case 40934:
    {
        returnValue = F("Anton-Brandl-Platz");
        break;
    }
    case 40935:
    {
        returnValue = F("Anton-Brandl-Str.");
        break;
    }
    case 40936:
    {
        returnValue = F("Anton-Braun-Str.");
        break;
    }
    case 40937:
    {
        returnValue = F("Anton-Brems-Str.");
        break;
    }
    case 40938:
    {
        returnValue = F("Anton-Bruckner Str.");
        break;
    }
    case 40939:
    {
        returnValue = F("Anton-Bruckner-Ring");
        break;
    }
    case 40940:
    {
        returnValue = F("Anton-Bruckner-Str.");
        break;
    }
    case 40941:
    {
        returnValue = F("Anton-Bruckner-Weg");
        break;
    }
    case 40942:
    {
        returnValue = F("Anton-Brune-Weg");
        break;
    }
    case 40943:
    {
        returnValue = F("Anton-Brüll-Weg");
        break;
    }
    case 40944:
    {
        returnValue = F("Anton-Buhl-Weg");
        break;
    }
    case 40945:
    {
        returnValue = F("Anton-Burgmaier-Str.");
        break;
    }
    case 40946:
    {
        returnValue = F("Anton-Burkard-Str.");
        break;
    }
    case 40947:
    {
        returnValue = F("Anton-Böhmer-Str.");
        break;
    }
    case 40948:
    {
        returnValue = F("Anton-Calaminus-Str.");
        break;
    }
    case 40949:
    {
        returnValue = F("Anton-Cordie-Platz");
        break;
    }
    case 40950:
    {
        returnValue = F("Anton-Corvinus-Weg");
        break;
    }
    case 40951:
    {
        returnValue = F("Anton-Cramer-Weg");
        break;
    }
    case 40952:
    {
        returnValue = F("Anton-Danner-Park");
        break;
    }
    case 40953:
    {
        returnValue = F("Anton-Deiter-Str.");
        break;
    }
    case 40954:
    {
        returnValue = F("Anton-Dey-Str.");
        break;
    }
    case 40955:
    {
        returnValue = F("Anton-Dietrich-Str.");
        break;
    }
    case 40956:
    {
        returnValue = F("Anton-Dost-Str.");
        break;
    }
    case 40957:
    {
        returnValue = F("Anton-Drisch-Str.");
        break;
    }
    case 40958:
    {
        returnValue = F("Anton-Dräger-Str.");
        break;
    }
    case 40959:
    {
        returnValue = F("Anton-Dräxl-Str.");
        break;
    }
    case 40960:
    {
        returnValue = F("Anton-Ebner-Weg");
        break;
    }
    case 40961:
    {
        returnValue = F("Anton-Eisenhut-Str.");
        break;
    }
    case 40962:
    {
        returnValue = F("Anton-Elsperger-Platz");
        break;
    }
    case 40963:
    {
        returnValue = F("Anton-Emmerling-Str.");
        break;
    }
    case 40964:
    {
        returnValue = F("Anton-Engels-Str.");
        break;
    }
    case 40965:
    {
        returnValue = F("Anton-Esen-Str.");
        break;
    }
    case 40966:
    {
        returnValue = F("Anton-Ettmayr-Str.");
        break;
    }
    case 40967:
    {
        returnValue = F("Anton-Fackler-Ring");
        break;
    }
    case 40968:
    {
        returnValue = F("Anton-Fahrner-Str.");
        break;
    }
    case 40969:
    {
        returnValue = F("Anton-Faltermaier-Str.");
        break;
    }
    case 40970:
    {
        returnValue = F("Anton-Fehr-Str.");
        break;
    }
    case 40971:
    {
        returnValue = F("Anton-Ferazin-Str.");
        break;
    }
    case 40972:
    {
        returnValue = F("Anton-Ferstl-Str.");
        break;
    }
    case 40973:
    {
        returnValue = F("Anton-Feuerer-Platz");
        break;
    }
    case 40974:
    {
        returnValue = F("Anton-Fils-Str.");
        break;
    }
    case 40975:
    {
        returnValue = F("Anton-Fischer-Str.");
        break;
    }
    case 40976:
    {
        returnValue = F("Anton-Fischer-Weg");
        break;
    }
    case 40977:
    {
        returnValue = F("Anton-Flettner-Str.");
        break;
    }
    case 40978:
    {
        returnValue = F("Anton-Fokken-Weg");
        break;
    }
    case 40979:
    {
        returnValue = F("Anton-Forner-Weg");
        break;
    }
    case 40980:
    {
        returnValue = F("Anton-Forster-Str.");
        break;
    }
    case 40981:
    {
        returnValue = F("Anton-Franz-Str.");
        break;
    }
    case 40982:
    {
        returnValue = F("Anton-Fränznick-Str.");
        break;
    }
    case 40983:
    {
        returnValue = F("Anton-Fröhlich-Str.");
        break;
    }
    case 40984:
    {
        returnValue = F("Anton-Fuge-Weg");
        break;
    }
    case 40985:
    {
        returnValue = F("Anton-Führer-Str.");
        break;
    }
    case 40986:
    {
        returnValue = F("Anton-Gabele-Str.");
        break;
    }
    case 40987:
    {
        returnValue = F("Anton-Gabele-Weg");
        break;
    }
    case 40988:
    {
        returnValue = F("Anton-Geiß-Str.");
        break;
    }
    case 40989:
    {
        returnValue = F("Anton-Gilch-Str.");
        break;
    }
    case 40990:
    {
        returnValue = F("Anton-Gillhuber-Str.");
        break;
    }
    case 40991:
    {
        returnValue = F("Anton-Gober-Str.");
        break;
    }
    case 40992:
    {
        returnValue = F("Anton-Goth-Str.");
        break;
    }
    case 40993:
    {
        returnValue = F("Anton-Grandauer-Str.");
        break;
    }
    case 40994:
    {
        returnValue = F("Anton-Greis-Str.");
        break;
    }
    case 40995:
    {
        returnValue = F("Anton-Grimmer-Str.");
        break;
    }
    case 40996:
    {
        returnValue = F("Anton-Guenther-Str.");
        break;
    }
    case 40997:
    {
        returnValue = F("Anton-Gäck-Str.");
        break;
    }
    case 40998:
    {
        returnValue = F("Anton-Götz-Str.");
        break;
    }
    case 40999:
    {
        returnValue = F("Anton-Günther-Berg");
        break;
    }
    case 41000:
    {
        returnValue = F("Anton-Günther-Platz");
        break;
    }
    case 41001:
    {
        returnValue = F("Anton-Günther-Steig");
        break;
    }
    case 41002:
    {
        returnValue = F("Anton-Günther-Str.");
        break;
    }
    case 41003:
    {
        returnValue = F("Anton-Günther-Weg");
        break;
    }
    case 41004:
    {
        returnValue = F("Anton-Haaf-Weg");
        break;
    }
    case 41005:
    {
        returnValue = F("Anton-Haas-Str.");
        break;
    }
    case 41006:
    {
        returnValue = F("Anton-Haberl-Str.");
        break;
    }
    case 41007:
    {
        returnValue = F("Anton-Hackl-Str.");
        break;
    }
    case 41008:
    {
        returnValue = F("Anton-Haisch-Str.");
        break;
    }
    case 41009:
    {
        returnValue = F("Anton-Hansen-Str.");
        break;
    }
    case 41010:
    {
        returnValue = F("Anton-Happach-Str.");
        break;
    }
    case 41011:
    {
        returnValue = F("Anton-Hart-Str.");
        break;
    }
    case 41012:
    {
        returnValue = F("Anton-Hattemer-Str.");
        break;
    }
    case 41013:
    {
        returnValue = F("Anton-Hauser-Str.");
        break;
    }
    case 41014:
    {
        returnValue = F("Anton-Hechtl-Str.");
        break;
    }
    case 41015:
    {
        returnValue = F("Anton-Heinen-Str.");
        break;
    }
    case 41016:
    {
        returnValue = F("Anton-Henkel-Str.");
        break;
    }
    case 41017:
    {
        returnValue = F("Anton-Hermann-Str.");
        break;
    }
    case 41018:
    {
        returnValue = F("Anton-Heuberger-Weg");
        break;
    }
    case 41019:
    {
        returnValue = F("Anton-Hilbert-Str.");
        break;
    }
    case 41020:
    {
        returnValue = F("Anton-Hilckmann-Str.");
        break;
    }
    case 41021:
    {
        returnValue = F("Anton-Hillebrand-Weg");
        break;
    }
    case 41022:
    {
        returnValue = F("Anton-Hiller-Str.");
        break;
    }
    case 41023:
    {
        returnValue = F("Anton-Hirschberger-Str.");
        break;
    }
    case 41024:
    {
        returnValue = F("Anton-Hoch-Str.");
        break;
    }
    case 41025:
    {
        returnValue = F("Anton-Hochkirchen-Str.");
        break;
    }
    case 41026:
    {
        returnValue = F("Anton-Hoffmann-Str.");
        break;
    }
    case 41027:
    {
        returnValue = F("Anton-Hofmann-Str.");
        break;
    }
    case 41028:
    {
        returnValue = F("Anton-Hohl-Str.");
        break;
    }
    case 41029:
    {
        returnValue = F("Anton-Holz-Str.");
        break;
    }
    case 41030:
    {
        returnValue = F("Anton-Holzhey-Str.");
        break;
    }
    case 41031:
    {
        returnValue = F("Anton-Hubert-Str.");
        break;
    }
    case 41032:
    {
        returnValue = F("Anton-Hug-Weg");
        break;
    }
    case 41033:
    {
        returnValue = F("Anton-Häring-Str.");
        break;
    }
    case 41034:
    {
        returnValue = F("Anton-Höfter-Str.");
        break;
    }
    case 41035:
    {
        returnValue = F("Anton-Hölscher-Str.");
        break;
    }
    case 41036:
    {
        returnValue = F("Anton-Ilg-Str.");
        break;
    }
    case 41037:
    {
        returnValue = F("Anton-Jansen-Str.");
        break;
    }
    case 41038:
    {
        returnValue = F("Anton-Jaumann-Industriepark");
        break;
    }
    case 41039:
    {
        returnValue = F("Anton-Jaumann-Str.");
        break;
    }
    case 41040:
    {
        returnValue = F("Anton-Josef-Schuster-Str.");
        break;
    }
    case 41041:
    {
        returnValue = F("Anton-Jünglings-Gäßchen");
        break;
    }
    case 41042:
    {
        returnValue = F("Anton-Kanz-Str.");
        break;
    }
    case 41043:
    {
        returnValue = F("Anton-Keffer-Str.");
        break;
    }
    case 41044:
    {
        returnValue = F("Anton-Khann-Weg");
        break;
    }
    case 41045:
    {
        returnValue = F("Anton-Kiene-Weg");
        break;
    }
    case 41046:
    {
        returnValue = F("Anton-Kleber-Brücke");
        break;
    }
    case 41047:
    {
        returnValue = F("Anton-Klein-Str.");
        break;
    }
    case 41048:
    {
        returnValue = F("Anton-Knab-Ring");
        break;
    }
    case 41049:
    {
        returnValue = F("Anton-Kock-Weg");
        break;
    }
    case 41050:
    {
        returnValue = F("Anton-Kolbeck-Str.");
        break;
    }
    case 41051:
    {
        returnValue = F("Anton-Krümmer-Str.");
        break;
    }
    case 41052:
    {
        returnValue = F("Anton-Köcking-Gasse");
        break;
    }
    case 41053:
    {
        returnValue = F("Anton-Küster-Str.");
        break;
    }
    case 41054:
    {
        returnValue = F("Anton-Lamprecht-Ring");
        break;
    }
    case 41055:
    {
        returnValue = F("Anton-Laumen-Str.");
        break;
    }
    case 41056:
    {
        returnValue = F("Anton-Leo-Str.");
        break;
    }
    case 41057:
    {
        returnValue = F("Anton-Linzen-Str.");
        break;
    }
    case 41058:
    {
        returnValue = F("Anton-Lips-Str.");
        break;
    }
    case 41059:
    {
        returnValue = F("Anton-Lutz-Str.");
        break;
    }
    case 41060:
    {
        returnValue = F("Anton-Lux-Ring");
        break;
    }
    case 41061:
    {
        returnValue = F("Anton-Machein-Str.");
        break;
    }
    case 41062:
    {
        returnValue = F("Anton-Mann-Str.");
        break;
    }
    case 41063:
    {
        returnValue = F("Anton-Maurer-Str.");
        break;
    }
    case 41064:
    {
        returnValue = F("Anton-Meier-Str.");
        break;
    }
    case 41065:
    {
        returnValue = F("Anton-Meyer-Str.");
        break;
    }
    case 41066:
    {
        returnValue = F("Anton-Moosmüller-Str.");
        break;
    }
    case 41067:
    {
        returnValue = F("Anton-Mormann-Str.");
        break;
    }
    case 41068:
    {
        returnValue = F("Anton-Munding-Weg");
        break;
    }
    case 41069:
    {
        returnValue = F("Anton-Murk-Str.");
        break;
    }
    case 41070:
    {
        returnValue = F("Anton-Mödl-Str.");
        break;
    }
    case 41071:
    {
        returnValue = F("Anton-Möller-Weg");
        break;
    }
    case 41072:
    {
        returnValue = F("Anton-Mönch-Str.");
        break;
    }
    case 41073:
    {
        returnValue = F("Anton-Mühldorfer-Str.");
        break;
    }
    case 41074:
    {
        returnValue = F("Anton-Müller-Str.");
        break;
    }
    case 41075:
    {
        returnValue = F("Anton-Nagel-Str.");
        break;
    }
    case 41076:
    {
        returnValue = F("Anton-Nagenrauft-Str.");
        break;
    }
    case 41077:
    {
        returnValue = F("Anton-Niederleuthner-Brücke");
        break;
    }
    case 41078:
    {
        returnValue = F("Anton-Niessing-Str.");
        break;
    }
    case 41079:
    {
        returnValue = F("Anton-Nöbl-Str.");
        break;
    }
    case 41080:
    {
        returnValue = F("Anton-Nücken-Str.");
        break;
    }
    case 41081:
    {
        returnValue = F("Anton-Ortner-Str.");
        break;
    }
    case 41082:
    {
        returnValue = F("Anton-Paehler-Str.");
        break;
    }
    case 41083:
    {
        returnValue = F("Anton-Paintner-Weg");
        break;
    }
    case 41084:
    {
        returnValue = F("Anton-Paulus-Str.");
        break;
    }
    case 41085:
    {
        returnValue = F("Anton-Pech-Str.");
        break;
    }
    case 41086:
    {
        returnValue = F("Anton-Pech-Weg");
        break;
    }
    case 41087:
    {
        returnValue = F("Anton-Pendele-Str.");
        break;
    }
    case 41088:
    {
        returnValue = F("Anton-Perdolt-Str.");
        break;
    }
    case 41089:
    {
        returnValue = F("Anton-Pieper-Str.");
        break;
    }
    case 41090:
    {
        returnValue = F("Anton-Pilgram-Weg");
        break;
    }
    case 41091:
    {
        returnValue = F("Anton-Praetorius-Weg");
        break;
    }
    case 41092:
    {
        returnValue = F("Anton-Pröbstl-Str.");
        break;
    }
    case 41093:
    {
        returnValue = F("Anton-Pötzl-Str.");
        break;
    }
    case 41094:
    {
        returnValue = F("Anton-Racky-Str.");
        break;
    }
    case 41095:
    {
        returnValue = F("Anton-Rausch-Str.");
        break;
    }
    case 41096:
    {
        returnValue = F("Anton-Rauscher-Str.");
        break;
    }
    case 41097:
    {
        returnValue = F("Anton-Reicha-Str.");
        break;
    }
    case 41098:
    {
        returnValue = F("Anton-Reichle-Str.");
        break;
    }
    case 41099:
    {
        returnValue = F("Anton-Reling-Str.");
        break;
    }
    case 41100:
    {
        returnValue = F("Anton-Richter-Weg");
        break;
    }
    case 41101:
    {
        returnValue = F("Anton-Ritzer-Str.");
        break;
    }
    case 41102:
    {
        returnValue = F("Anton-Roth-Str.");
        break;
    }
    case 41103:
    {
        returnValue = F("Anton-Roth-Weg");
        break;
    }
    case 41104:
    {
        returnValue = F("Anton-Runte-Str.");
        break;
    }
    case 41105:
    {
        returnValue = F("Anton-Rößling-Str.");
        break;
    }
    case 41106:
    {
        returnValue = F("Anton-Sabel-Str.");
        break;
    }
    case 41107:
    {
        returnValue = F("Anton-Saefkow-Ring");
        break;
    }
    case 41108:
    {
        returnValue = F("Anton-Saefkow-Str.");
        break;
    }
    case 41109:
    {
        returnValue = F("Anton-Saxl-Str.");
        break;
    }
    case 41110:
    {
        returnValue = F("Anton-Schaidler-Str.");
        break;
    }
    case 41111:
    {
        returnValue = F("Anton-Schell-Str.");
        break;
    }
    case 41112:
    {
        returnValue = F("Anton-Scherer-Str.");
        break;
    }
    case 41113:
    {
        returnValue = F("Anton-Scherübl-Str.");
        break;
    }
    case 41114:
    {
        returnValue = F("Anton-Schlecker-Str.");
        break;
    }
    case 41115:
    {
        returnValue = F("Anton-Schlemmer-Str.");
        break;
    }
    case 41116:
    {
        returnValue = F("Anton-Schmid-Str.");
        break;
    }
    case 41117:
    {
        returnValue = F("Anton-Schmidt-Str.");
        break;
    }
    case 41118:
    {
        returnValue = F("Anton-Schnack-Str.");
        break;
    }
    case 41119:
    {
        returnValue = F("Anton-Schneider-Str.");
        break;
    }
    case 41120:
    {
        returnValue = F("Anton-Schneider-Weg");
        break;
    }
    case 41121:
    {
        returnValue = F("Anton-Schneller-Str.");
        break;
    }
    case 41122:
    {
        returnValue = F("Anton-Schulte-Str.");
        break;
    }
    case 41123:
    {
        returnValue = F("Anton-Schwan-Str.");
        break;
    }
    case 41124:
    {
        returnValue = F("Anton-Seith-Platz");
        break;
    }
    case 41125:
    {
        returnValue = F("Anton-Sickenberger-Str.");
        break;
    }
    case 41126:
    {
        returnValue = F("Anton-Siegel-Str.");
        break;
    }
    case 41127:
    {
        returnValue = F("Anton-Sommer-Str.");
        break;
    }
    case 41128:
    {
        returnValue = F("Anton-Sorg-Ring");
        break;
    }
    case 41129:
    {
        returnValue = F("Anton-Spotka-Str.");
        break;
    }
    case 41130:
    {
        returnValue = F("Anton-Springer-Str.");
        break;
    }
    case 41131:
    {
        returnValue = F("Anton-Staudacher-Str.");
        break;
    }
    case 41132:
    {
        returnValue = F("Anton-Stettner-Str.");
        break;
    }
    case 41133:
    {
        returnValue = F("Anton-Storch-Str.");
        break;
    }
    case 41134:
    {
        returnValue = F("Anton-Sturm-Str.");
        break;
    }
    case 41135:
    {
        returnValue = F("Anton-Thoma-Weg");
        break;
    }
    case 41136:
    {
        returnValue = F("Anton-Thraen-Str.");
        break;
    }
    case 41137:
    {
        returnValue = F("Anton-Uhrenbacher-Str.");
        break;
    }
    case 41138:
    {
        returnValue = F("Anton-Ulbrich-Str.");
        break;
    }
    case 41139:
    {
        returnValue = F("Anton-Unger-Str.");
        break;
    }
    case 41140:
    {
        returnValue = F("Anton-Vogt-Str.");
        break;
    }
    case 41141:
    {
        returnValue = F("Anton-Voreck-Weg");
        break;
    }
    case 41142:
    {
        returnValue = F("Anton-Wagner-Str.");
        break;
    }
    case 41143:
    {
        returnValue = F("Anton-Waldner-Str.");
        break;
    }
    case 41144:
    {
        returnValue = F("Anton-Wandinger-Str.");
        break;
    }
    case 41145:
    {
        returnValue = F("Anton-Weber-Str.");
        break;
    }
    case 41146:
    {
        returnValue = F("Anton-Webern-Str.");
        break;
    }
    case 41147:
    {
        returnValue = F("Anton-Wegener-Weg");
        break;
    }
    case 41148:
    {
        returnValue = F("Anton-Weisrock-Weg");
        break;
    }
    case 41149:
    {
        returnValue = F("Anton-Wempe-Str.");
        break;
    }
    case 41150:
    {
        returnValue = F("Anton-Wendt-Str.");
        break;
    }
    case 41151:
    {
        returnValue = F("Anton-Wengert-Str.");
        break;
    }
    case 41152:
    {
        returnValue = F("Anton-Wetterer-Str.");
        break;
    }
    case 41153:
    {
        returnValue = F("Anton-Wiede-Str.");
        break;
    }
    case 41154:
    {
        returnValue = F("Anton-Wiederhut-Str.");
        break;
    }
    case 41155:
    {
        returnValue = F("Anton-Wilhelm-Schelle-Str.");
        break;
    }
    case 41156:
    {
        returnValue = F("Anton-Winkler-Str.");
        break;
    }
    case 41157:
    {
        returnValue = F("Anton-Wintergerst-Str.");
        break;
    }
    case 41158:
    {
        returnValue = F("Anton-Wurzer-Str.");
        break;
    }
    case 41159:
    {
        returnValue = F("Anton-Zech-Str.");
        break;
    }
    case 41160:
    {
        returnValue = F("Anton-Zwengauer-Weg");
        break;
    }
    case 41161:
    {
        returnValue = F("Anton-vom-Kocher-Weg");
        break;
    }
    case 41162:
    {
        returnValue = F("Anton-von-Rieppel-Str.");
        break;
    }
    case 41163:
    {
        returnValue = F("Anton-von-Rotenhan-Str.");
        break;
    }
    case 41164:
    {
        returnValue = F("Anton-von-Wehner-Str.");
        break;
    }
    case 41165:
    {
        returnValue = F("Antonia-Philomena-Bauer-Weg");
        break;
    }
    case 41166:
    {
        returnValue = F("Antonia-Visconti-Str.");
        break;
    }
    case 41167:
    {
        returnValue = F("Antoniaweg");
        break;
    }
    case 41168:
    {
        returnValue = F("Antonibergstr.");
        break;
    }
    case 41169:
    {
        returnValue = F("Antonibreite");
        break;
    }
    case 41170:
    {
        returnValue = F("Antonie-Meyer-Weg");
        break;
    }
    case 41171:
    {
        returnValue = F("Antonie-Rädler-Weg");
        break;
    }
    case 41172:
    {
        returnValue = F("Antonie-Woerner-Str.");
        break;
    }
    case 41173:
    {
        returnValue = F("Antonienstr.");
        break;
    }
    case 41174:
    {
        returnValue = F("Antonienweg");
        break;
    }
    case 41175:
    {
        returnValue = F("Antoniestr.");
        break;
    }
    case 41176:
    {
        returnValue = F("Antonigasse");
        break;
    }
    case 41177:
    {
        returnValue = F("Antonin Artaud Str.");
        break;
    }
    case 41178:
    {
        returnValue = F("Antonio-Bossi-Str.");
        break;
    }
    case 41179:
    {
        returnValue = F("Antonio-Forteschi-Str.");
        break;
    }
    case 41180:
    {
        returnValue = F("Antonisstr.");
        break;
    }
    case 41181:
    {
        returnValue = F("Antonistr.");
        break;
    }
    case 41182:
    {
        returnValue = F("Antoniter Klostergarten");
        break;
    }
    case 41183:
    {
        returnValue = F("Antonitergasse");
        break;
    }
    case 41184:
    {
        returnValue = F("Antoniterhofstr.");
        break;
    }
    case 41185:
    {
        returnValue = F("Antoniterplatz");
        break;
    }
    case 41186:
    {
        returnValue = F("Antoniterstr.");
        break;
    }
    case 41187:
    {
        returnValue = F("Antonius-Claret-Str.");
        break;
    }
    case 41188:
    {
        returnValue = F("Antonius-Tappehorn-Str.");
        break;
    }
    case 41189:
    {
        returnValue = F("Antonius-Weber-Str.");
        break;
    }
    case 41190:
    {
        returnValue = F("Antoniusberg");
        break;
    }
    case 41191:
    {
        returnValue = F("Antoniusesch");
        break;
    }
    case 41192:
    {
        returnValue = F("Antoniusgasse");
        break;
    }
    case 41193:
    {
        returnValue = F("Antoniusgutweg");
        break;
    }
    case 41194:
    {
        returnValue = F("Antoniusgäßchen");
        break;
    }
    case 41195:
    {
        returnValue = F("Antoniushof");
        break;
    }
    case 41196:
    {
        returnValue = F("Antoniushäusleweg");
        break;
    }
    case 41197:
    {
        returnValue = F("Antoniuspfad");
        break;
    }
    case 41198:
    {
        returnValue = F("Antoniusplatz");
        break;
    }
    case 41199:
    {
        returnValue = F("Antoniusstiege");
        break;
    }
    case 41200:
    {
        returnValue = F("Antoniusstr.");
        break;
    }
    case 41201:
    {
        returnValue = F("Antoniusweg");
        break;
    }
    case 41202:
    {
        returnValue = F("Antoniweg");
        break;
    }
    case 41203:
    {
        returnValue = F("Antonsgasse");
        break;
    }
    case 41204:
    {
        returnValue = F("Antonskamp");
        break;
    }
    case 41205:
    {
        returnValue = F("Antonsruh");
        break;
    }
    case 41206:
    {
        returnValue = F("Antonsthaler Str.");
        break;
    }
    case 41207:
    {
        returnValue = F("Antonstr.");
        break;
    }
    case 41208:
    {
        returnValue = F("Antonsweg");
        break;
    }
    case 41209:
    {
        returnValue = F("Antweiler Höll");
        break;
    }
    case 41210:
    {
        returnValue = F("Antweiler Weg");
        break;
    }
    case 41211:
    {
        returnValue = F("Antweilerweg");
        break;
    }
    case 41212:
    {
        returnValue = F("Antwerpener Str.");
        break;
    }
    case 41213:
    {
        returnValue = F("Antwerpenstr.");
        break;
    }
    case 41214:
    {
        returnValue = F("Antzstr.");
        break;
    }
    case 41215:
    {
        returnValue = F("Anwaltinger Weg");
        break;
    }
    case 41216:
    {
        returnValue = F("Anwaltstr.");
        break;
    }
    case 41217:
    {
        returnValue = F("Anwand");
        break;
    }
    case 41218:
    {
        returnValue = F("Anwandel");
        break;
    }
    case 41219:
    {
        returnValue = F("Anwanden");
        break;
    }
    case 41220:
    {
        returnValue = F("Anwandener Str.");
        break;
    }
    case 41221:
    {
        returnValue = F("Anwandenweg");
        break;
    }
    case 41222:
    {
        returnValue = F("Anwanderstr.");
        break;
    }
    case 41223:
    {
        returnValue = F("Anwanderweg");
        break;
    }
    case 41224:
    {
        returnValue = F("Anwandstr.");
        break;
    }
    case 41225:
    {
        returnValue = F("Anwandweg");
        break;
    }
    case 41226:
    {
        returnValue = F("Anwaß");
        break;
    }
    case 41227:
    {
        returnValue = F("Anweg");
        break;
    }
    case 41228:
    {
        returnValue = F("Anweilstr.");
        break;
    }
    case 41229:
    {
        returnValue = F("Anwendel");
        break;
    }
    case 41230:
    {
        returnValue = F("Anwendersweg");
        break;
    }
    case 41231:
    {
        returnValue = F("Anwenderweg");
        break;
    }
    case 41232:
    {
        returnValue = F("Anwendweg");
        break;
    }
    case 41233:
    {
        returnValue = F("Anwenne");
        break;
    }
    case 41234:
    {
        returnValue = F("Anwänden");
        break;
    }
    case 41235:
    {
        returnValue = F("Anwänderweg");
        break;
    }
    case 41236:
    {
        returnValue = F("Anxbacher Str.");
        break;
    }
    case 41237:
    {
        returnValue = F("Anxbachstr.");
        break;
    }
    case 41238:
    {
        returnValue = F("Anzenbichelstr.");
        break;
    }
    case 41239:
    {
        returnValue = F("Anzenbrunn");
        break;
    }
    case 41240:
    {
        returnValue = F("Anzengruberstr.");
        break;
    }
    case 41241:
    {
        returnValue = F("Anzengruberweg");
        break;
    }
    case 41242:
    {
        returnValue = F("Anzenhofen");
        break;
    }
    case 41243:
    {
        returnValue = F("Anzenhofer Str.");
        break;
    }
    case 41244:
    {
        returnValue = F("Anzensteinstr.");
        break;
    }
    case 41245:
    {
        returnValue = F("Anzenthaler Ring");
        break;
    }
    case 41246:
    {
        returnValue = F("Anzenweg");
        break;
    }
    case 41247:
    {
        returnValue = F("Anzhofen");
        break;
    }
    case 41248:
    {
        returnValue = F("Anzing");
        break;
    }
    case 41249:
    {
        returnValue = F("Anzinger Siedlung");
        break;
    }
    case 41250:
    {
        returnValue = F("Anzinger Str.");
        break;
    }
    case 41251:
    {
        returnValue = F("Anzinger Weg");
        break;
    }
    case 41252:
    {
        returnValue = F("Anzingerstr.");
        break;
    }
    case 41253:
    {
        returnValue = F("Anzlesau");
        break;
    }
    case 41254:
    {
        returnValue = F("An´t Bääk");
        break;
    }
    case 41255:
    {
        returnValue = F("Aoks Immenschur");
        break;
    }
    case 41256:
    {
        returnValue = F("Apatiner Str.");
        break;
    }
    case 41257:
    {
        returnValue = F("Apcer Str.");
        break;
    }
    case 41258:
    {
        returnValue = F("Apeldamm");
        break;
    }
    case 41259:
    {
        returnValue = F("Apeldorner Str.");
        break;
    }
    case 41260:
    {
        returnValue = F("Apeldör");
        break;
    }
    case 41261:
    {
        returnValue = F("Apeler Weg");
        break;
    }
    case 41262:
    {
        returnValue = F("Apelerner Str.");
        break;
    }
    case 41263:
    {
        returnValue = F("Apelers Fuhren");
        break;
    }
    case 41264:
    {
        returnValue = F("Apelmeierstr.");
        break;
    }
    case 41265:
    {
        returnValue = F("Apels Gut");
        break;
    }
    case 41266:
    {
        returnValue = F("Apelsbergstr.");
        break;
    }
    case 41267:
    {
        returnValue = F("Apelstedt");
        break;
    }
    case 41268:
    {
        returnValue = F("Apelsteinallee");
        break;
    }
    case 41269:
    {
        returnValue = F("Apelstr.");
        break;
    }
    case 41270:
    {
        returnValue = F("Apelteich");
        break;
    }
    case 41271:
    {
        returnValue = F("Apelweg");
        break;
    }
    case 41272:
    {
        returnValue = F("Apenberg");
        break;
    }
    case 41273:
    {
        returnValue = F("Apenburger Hof");
        break;
    }
    case 41274:
    {
        returnValue = F("Apenburger Str.");
        break;
    }
    case 41275:
    {
        returnValue = F("Apenrader Str.");
        break;
    }
    case 41276:
    {
        returnValue = F("Apenrader Weg");
        break;
    }
    case 41277:
    {
        returnValue = F("Apenser Ring");
        break;
    }
    case 41278:
    {
        returnValue = F("Apenser Str.");
        break;
    }
    case 41279:
    {
        returnValue = F("Apfelallee");
        break;
    }
    case 41280:
    {
        returnValue = F("Apfelbach");
        break;
    }
    case 41281:
    {
        returnValue = F("Apfelbacher Str.");
        break;
    }
    case 41282:
    {
        returnValue = F("Apfelbachweg");
        break;
    }
    case 41283:
    {
        returnValue = F("Apfelbaumerweg");
        break;
    }
    case 41284:
    {
        returnValue = F("Apfelbaumgasse");
        break;
    }
    case 41285:
    {
        returnValue = F("Apfelbaumhof");
        break;
    }
    case 41286:
    {
        returnValue = F("Apfelbaumweg");
        break;
    }
    case 41287:
    {
        returnValue = F("Apfelberg");
        break;
    }
    case 41288:
    {
        returnValue = F("Apfelbergweg");
        break;
    }
    case 41289:
    {
        returnValue = F("Apfelblütenweg");
        break;
    }
    case 41290:
    {
        returnValue = F("Apfelborn");
        break;
    }
    case 41291:
    {
        returnValue = F("Apfeldorfer Str.");
        break;
    }
    case 41292:
    {
        returnValue = F("Apfelergeten");
        break;
    }
    case 41293:
    {
        returnValue = F("Apfelgarten");
        break;
    }
    case 41294:
    {
        returnValue = F("Apfelgasse");
        break;
    }
    case 41295:
    {
        returnValue = F("Apfelgässle");
        break;
    }
    case 41296:
    {
        returnValue = F("Apfelhain");
        break;
    }
    case 41297:
    {
        returnValue = F("Apfelhof");
        break;
    }
    case 41298:
    {
        returnValue = F("Apfelkamp");
        break;
    }
    case 41299:
    {
        returnValue = F("Apfelmarkt");
        break;
    }
    case 41300:
    {
        returnValue = F("Apfelrain");
        break;
    }
    case 41301:
    {
        returnValue = F("Apfelring");
        break;
    }
    case 41302:
    {
        returnValue = F("Apfelrondell");
        break;
    }
    case 41303:
    {
        returnValue = F("Apfelschneise");
        break;
    }
    case 41304:
    {
        returnValue = F("Apfelspalier");
        break;
    }
    case 41305:
    {
        returnValue = F("Apfelsteig");
        break;
    }
    case 41306:
    {
        returnValue = F("Apfelstieg");
        break;
    }
    case 41307:
    {
        returnValue = F("Apfelstr.");
        break;
    }
    case 41308:
    {
        returnValue = F("Apfelstädt, Wandersleber Str.");
        break;
    }
    case 41309:
    {
        returnValue = F("Apfelstädter Weg");
        break;
    }
    case 41310:
    {
        returnValue = F("Apfelstädtufer");
        break;
    }
    case 41311:
    {
        returnValue = F("Apfeltal");
        break;
    }
    case 41312:
    {
        returnValue = F("Apfeltalstr.");
        break;
    }
    case 41313:
    {
        returnValue = F("Apfeltracher Str.");
        break;
    }
    case 41314:
    {
        returnValue = F("Apfeltranger Dorfstr.");
        break;
    }
    case 41315:
    {
        returnValue = F("Apfeltranger Str.");
        break;
    }
    case 41316:
    {
        returnValue = F("Apfeltrift");
        break;
    }
    case 41317:
    {
        returnValue = F("Apfelweg");
        break;
    }
    case 41318:
    {
        returnValue = F("Apfelwiese");
        break;
    }
    case 41319:
    {
        returnValue = F("Apflauer Str.");
        break;
    }
    case 41320:
    {
        returnValue = F("Apian-Bennewitz-Str.");
        break;
    }
    case 41321:
    {
        returnValue = F("Apianring");
        break;
    }
    case 41322:
    {
        returnValue = F("Apianstr.");
        break;
    }
    case 41323:
    {
        returnValue = F("Apitzweg");
        break;
    }
    case 41324:
    {
        returnValue = F("Apmannsweg");
        break;
    }
    case 41325:
    {
        returnValue = F("Apoiger Str.");
        break;
    }
    case 41326:
    {
        returnValue = F("Apoldaer Str.");
        break;
    }
    case 41327:
    {
        returnValue = F("Apoldaer Weg");
        break;
    }
    case 41328:
    {
        returnValue = F("Apollinarisblick");
        break;
    }
    case 41329:
    {
        returnValue = F("Apollinarisstr.");
        break;
    }
    case 41330:
    {
        returnValue = F("Apollinarisweg");
        break;
    }
    case 41331:
    {
        returnValue = F("Apolloniagasse");
        break;
    }
    case 41332:
    {
        returnValue = F("Apolloniastr.");
        break;
    }
    case 41333:
    {
        returnValue = F("Apolloniaweg");
        break;
    }
    case 41334:
    {
        returnValue = F("Apollonienmarkt");
        break;
    }
    case 41335:
    {
        returnValue = F("Apollonienstr.");
        break;
    }
    case 41336:
    {
        returnValue = F("Apollonienweg");
        break;
    }
    case 41337:
    {
        returnValue = F("Apollostr.");
        break;
    }
    case 41338:
    {
        returnValue = F("Apollotunnel");
        break;
    }
    case 41339:
    {
        returnValue = F("Apostelgasse");
        break;
    }
    case 41340:
    {
        returnValue = F("Apostelholzweg");
        break;
    }
    case 41341:
    {
        returnValue = F("Apostelpfad");
        break;
    }
    case 41342:
    {
        returnValue = F("Apostelplatz");
        break;
    }
    case 41343:
    {
        returnValue = F("Apostelstr.");
        break;
    }
    case 41344:
    {
        returnValue = F("Apostelweg");
        break;
    }
    case 41345:
    {
        returnValue = F("Apotekergang");
        break;
    }
    case 41346:
    {
        returnValue = F("Apotheken-Passage");
        break;
    }
    case 41347:
    {
        returnValue = F("Apothekenbrücke");
        break;
    }
    case 41348:
    {
        returnValue = F("Apothekengasse");
        break;
    }
    case 41349:
    {
        returnValue = F("Apothekengässchen");
        break;
    }
    case 41350:
    {
        returnValue = F("Apothekenstr.");
        break;
    }
    case 41351:
    {
        returnValue = F("Apothekenweg");
        break;
    }
    case 41352:
    {
        returnValue = F("Apotheker-Drees-Str.");
        break;
    }
    case 41353:
    {
        returnValue = F("Apotheker-Ernsting-Str.");
        break;
    }
    case 41354:
    {
        returnValue = F("Apotheker-Gelb-Str.");
        break;
    }
    case 41355:
    {
        returnValue = F("Apotheker-Herb-Str.");
        break;
    }
    case 41356:
    {
        returnValue = F("Apotheker-Hummel-Str.");
        break;
    }
    case 41357:
    {
        returnValue = F("Apothekerberg");
        break;
    }
    case 41358:
    {
        returnValue = F("Apothekergarten");
        break;
    }
    case 41359:
    {
        returnValue = F("Apothekergasse");
        break;
    }
    case 41360:
    {
        returnValue = F("Apothekergraben");
        break;
    }
    case 41361:
    {
        returnValue = F("Apothekergässchen");
        break;
    }
    case 41362:
    {
        returnValue = F("Apothekergäßchen");
        break;
    }
    case 41363:
    {
        returnValue = F("Apothekergäßle");
        break;
    }
    case 41364:
    {
        returnValue = F("Apothekerholz");
        break;
    }
    case 41365:
    {
        returnValue = F("Apothekerkamp");
        break;
    }
    case 41366:
    {
        returnValue = F("Apothekers Hohle");
        break;
    }
    case 41367:
    {
        returnValue = F("Apothekerstieg");
        break;
    }
    case 41368:
    {
        returnValue = F("Apothekerstiege");
        break;
    }
    case 41369:
    {
        returnValue = F("Apothekerstr.");
        break;
    }
    case 41370:
    {
        returnValue = F("Apothekertwiete");
        break;
    }
    case 41371:
    {
        returnValue = F("Apothekerweg");
        break;
    }
    case 41372:
    {
        returnValue = F("Appelallee");
        break;
    }
    case 41373:
    {
        returnValue = F("Appelaustr.");
        break;
    }
    case 41374:
    {
        returnValue = F("Appelbecker Mühlenweg");
        break;
    }
    case 41375:
    {
        returnValue = F("Appelbomweg");
        break;
    }
    case 41376:
    {
        returnValue = F("Appelboomweg");
        break;
    }
    case 41377:
    {
        returnValue = F("Appelchaussee");
        break;
    }
    case 41378:
    {
        returnValue = F("Appeldorner Str.");
        break;
    }
    case 41379:
    {
        returnValue = F("Appeler Moor");
        break;
    }
    case 41380:
    {
        returnValue = F("Appeler Str.");
        break;
    }
    case 41381:
    {
        returnValue = F("Appeler Weg");
        break;
    }
    case 41382:
    {
        returnValue = F("Appelhagen");
        break;
    }
    case 41383:
    {
        returnValue = F("Appelhof");
        break;
    }
    case 41384:
    {
        returnValue = F("Appelhoff");
        break;
    }
    case 41385:
    {
        returnValue = F("Appelhofstr.");
        break;
    }
    case 41386:
    {
        returnValue = F("Appelhofweg");
        break;
    }
    case 41387:
    {
        returnValue = F("Appelholzweg");
        break;
    }
    case 41388:
    {
        returnValue = F("Appelhäger Chaussee");
        break;
    }
    case 41389:
    {
        returnValue = F("Appelhäger Weg");
        break;
    }
    case 41390:
    {
        returnValue = F("Appelhülsener Str.");
        break;
    }
    case 41391:
    {
        returnValue = F("Appeljord");
        break;
    }
    case 41392:
    {
        returnValue = F("Appelkamp");
        break;
    }
    case 41393:
    {
        returnValue = F("Appellandstr.");
        break;
    }
    case 41394:
    {
        returnValue = F("Appellhof");
        break;
    }
    case 41395:
    {
        returnValue = F("Appellplatz");
        break;
    }
    case 41396:
    {
        returnValue = F("Appelner Str.");
        break;
    }
    case 41397:
    {
        returnValue = F("Appelsberg");
        break;
    }
    case 41398:
    {
        returnValue = F("Appelsbergstr.");
        break;
    }
    case 41399:
    {
        returnValue = F("Appelseckschneise");
        break;
    }
    case 41400:
    {
        returnValue = F("Appelsgasse");
        break;
    }
    case 41401:
    {
        returnValue = F("Appelshofer Dorfstr.");
        break;
    }
    case 41402:
    {
        returnValue = F("Appelsweg");
        break;
    }
    case 41403:
    {
        returnValue = F("Appelwarder");
        break;
    }
    case 41404:
    {
        returnValue = F("Appelweg");
        break;
    }
    case 41405:
    {
        returnValue = F("Appelwiese");
        break;
    }
    case 41406:
    {
        returnValue = F("Appenbergstr.");
        break;
    }
    case 41407:
    {
        returnValue = F("Appenborner Weg");
        break;
    }
    case 41408:
    {
        returnValue = F("Appendorfer Weg");
        break;
    }
    case 41409:
    {
        returnValue = F("Appengasse");
        break;
    }
    case 41410:
    {
        returnValue = F("Appenhainer Str.");
        break;
    }
    case 41411:
    {
        returnValue = F("Appenhaldenweg");
        break;
    }
    case 41412:
    {
        returnValue = F("Appenhauweg");
        break;
    }
    case 41413:
    {
        returnValue = F("Appenheimer Str.");
        break;
    }
    case 41414:
    {
        returnValue = F("Appenklinge");
        break;
    }
    case 41415:
    {
        returnValue = F("Appenlöchle");
        break;
    }
    case 41416:
    {
        returnValue = F("Appenmoosstr.");
        break;
    }
    case 41417:
    {
        returnValue = F("Appenmühle");
        break;
    }
    case 41418:
    {
        returnValue = F("Appenonnenweg");
        break;
    }
    case 41419:
    {
        returnValue = F("Appenroder Str.");
        break;
    }
    case 41420:
    {
        returnValue = F("Appenroder Weg");
        break;
    }
    case 41421:
    {
        returnValue = F("Appenrother Weg");
        break;
    }
    case 41422:
    {
        returnValue = F("Appenröder Str.");
        break;
    }
    case 41423:
    {
        returnValue = F("Appensiefener Weg");
        break;
    }
    case 41424:
    {
        returnValue = F("Appenstr.");
        break;
    }
    case 41425:
    {
        returnValue = F("Appentalstr.");
        break;
    }
    case 41426:
    {
        returnValue = F("Appenweierer Str.");
        break;
    }
    case 41427:
    {
        returnValue = F("Appenzeller Str.");
        break;
    }
    case 41428:
    {
        returnValue = F("Appenzellerweg");
        break;
    }
    case 41429:
    {
        returnValue = F("Appersdorfer Str.");
        break;
    }
    case 41430:
    {
        returnValue = F("Apperting");
        break;
    }
    case 41431:
    {
        returnValue = F("Appertshofener Weg");
        break;
    }
    case 41432:
    {
        returnValue = F("Appetshofen");
        break;
    }
    case 41433:
    {
        returnValue = F("Appetshofener Str.");
        break;
    }
    case 41434:
    {
        returnValue = F("Appianistr.");
        break;
    }
    case 41435:
    {
        returnValue = F("Appmannsberg");
        break;
    }
    case 41436:
    {
        returnValue = F("Appoigny-Str.");
        break;
    }
    case 41437:
    {
        returnValue = F("Appolsheimer Str.");
        break;
    }
    case 41438:
    {
        returnValue = F("Aprath");
        break;
    }
    case 41439:
    {
        returnValue = F("Aprelle");
        break;
    }
    case 41440:
    {
        returnValue = F("Aprikosenstr.");
        break;
    }
    case 41441:
    {
        returnValue = F("Aprikosenweg");
        break;
    }
    case 41442:
    {
        returnValue = F("Apweilerweg");
        break;
    }
    case 41443:
    {
        returnValue = F("Aquamarinweg");
        break;
    }
    case 41444:
    {
        returnValue = F("Aquapark");
        break;
    }
    case 41445:
    {
        returnValue = F("Aquädukt");
        break;
    }
    case 41446:
    {
        returnValue = F("Araberweg");
        break;
    }
    case 41447:
    {
        returnValue = F("Aralallee");
        break;
    }
    case 41448:
    {
        returnValue = F("Aralienweg");
        break;
    }
    case 41449:
    {
        returnValue = F("Arandstr.");
        break;
    }
    case 41450:
    {
        returnValue = F("Arankaweg");
        break;
    }
    case 41451:
    {
        returnValue = F("Arastr.");
        break;
    }
    case 41452:
    {
        returnValue = F("Arbach");
        break;
    }
    case 41453:
    {
        returnValue = F("Arbach ob der Str.");
        break;
    }
    case 41454:
    {
        returnValue = F("Arbacher Str.");
        break;
    }
    case 41455:
    {
        returnValue = F("Arbachmühle");
        break;
    }
    case 41456:
    {
        returnValue = F("Arbachstr.");
        break;
    }
    case 41457:
    {
        returnValue = F("Arbachweg");
        break;
    }
    case 41458:
    {
        returnValue = F("Arbecksstieg");
        break;
    }
    case 41459:
    {
        returnValue = F("Arbeckstwiete");
        break;
    }
    case 41460:
    {
        returnValue = F("Arbecksweg");
        break;
    }
    case 41461:
    {
        returnValue = F("Arbeiterweg");
        break;
    }
    case 41462:
    {
        returnValue = F("Arbeitsamtstr.");
        break;
    }
    case 41463:
    {
        returnValue = F("Arbeitsdienstweg");
        break;
    }
    case 41464:
    {
        returnValue = F("Arbeitsdienstweg / Fledermauspfad");
        break;
    }
    case 41465:
    {
        returnValue = F("Arbeitsdienstweg [K2] [K9]");
        break;
    }
    case 41466:
    {
        returnValue = F("Arbeitslosenweg");
        break;
    }
    case 41467:
    {
        returnValue = F("Arbeitssteg");
        break;
    }
    case 41468:
    {
        returnValue = F("Arbeostr.");
        break;
    }
    case 41469:
    {
        returnValue = F("Arbeoweg");
        break;
    }
    case 41470:
    {
        returnValue = F("Arberblick");
        break;
    }
    case 41471:
    {
        returnValue = F("Arberger Weg");
        break;
    }
    case 41472:
    {
        returnValue = F("Arberhochstr.");
        break;
    }
    case 41473:
    {
        returnValue = F("Arberlandstr.");
        break;
    }
    case 41474:
    {
        returnValue = F("Arberring");
        break;
    }
    case 41475:
    {
        returnValue = F("Arberseestr.");
        break;
    }
    case 41476:
    {
        returnValue = F("Arberseeweg");
        break;
    }
    case 41477:
    {
        returnValue = F("Arberstr.");
        break;
    }
    case 41478:
    {
        returnValue = F("Arberweg");
        break;
    }
    case 41479:
    {
        returnValue = F("Arbing");
        break;
    }
    case 41480:
    {
        returnValue = F("Arbinger Str.");
        break;
    }
    case 41481:
    {
        returnValue = F("Arbingerstr.");
        break;
    }
    case 41482:
    {
        returnValue = F("Arbiostr.");
        break;
    }
    case 41483:
    {
        returnValue = F("Arbketal");
        break;
    }
    case 41484:
    {
        returnValue = F("Arboretum");
        break;
    }
    case 41485:
    {
        returnValue = F("Arboretum - Waldlehrpfad");
        break;
    }
    case 41486:
    {
        returnValue = F("Arboretum Eberbach");
        break;
    }
    case 41487:
    {
        returnValue = F("Arboretum Ebstorf");
        break;
    }
    case 41488:
    {
        returnValue = F("Arboretum Ellerhoop");
        break;
    }
    case 41489:
    {
        returnValue = F("Arboretum Kornebene");
        break;
    }
    case 41490:
    {
        returnValue = F("Arboretum Lausitzer Wäldchen");
        break;
    }
    case 41491:
    {
        returnValue = F("Arboretum Piesberg");
        break;
    }
    case 41492:
    {
        returnValue = F("Arboretum Sportpacour Erwachsene");
        break;
    }
    case 41493:
    {
        returnValue = F("Arboretum Tannenhöft");
        break;
    }
    case 41494:
    {
        returnValue = F("Arboretum Wildeshausen");
        break;
    }
    case 41495:
    {
        returnValue = F("Arboretum am Bernloch");
        break;
    }
    case 41496:
    {
        returnValue = F("Arboretum für Bäume und Sträucher an der Kern-Saatschul-Hütte");
        break;
    }
    case 41497:
    {
        returnValue = F("Arborner Weg");
        break;
    }
    case 41498:
    {
        returnValue = F("Arbshagen");
        break;
    }
    case 41499:
    {
        returnValue = F("Arbshagen-Hof");
        break;
    }
    case 41500:
    {
        returnValue = F("ArcelorMittal-Str.");
        break;
    }
    case 41501:
    {
        returnValue = F("Arcener Str.");
        break;
    }
    case 41502:
    {
        returnValue = F("Archaeopteryxsteig");
        break;
    }
    case 41503:
    {
        returnValue = F("Arche");
        break;
    }
    case 41504:
    {
        returnValue = F("Arche Noah, Garten der Sinne");
        break;
    }
    case 41505:
    {
        returnValue = F("Archenbrücke");
        break;
    }
    case 41506:
    {
        returnValue = F("Archenholdring");
        break;
    }
    case 41507:
    {
        returnValue = F("Archenholdweg");
        break;
    }
    case 41508:
    {
        returnValue = F("Archenweyererweg");
        break;
    }
    case 41509:
    {
        returnValue = F("Archepark");
        break;
    }
    case 41510:
    {
        returnValue = F("Archfelder Str.");
        break;
    }
    case 41511:
    {
        returnValue = F("Architektur Park");
        break;
    }
    case 41512:
    {
        returnValue = F("Archivstr.");
        break;
    }
    case 41513:
    {
        returnValue = F("Archshofen");
        break;
    }
    case 41514:
    {
        returnValue = F("Archstr.");
        break;
    }
    case 41515:
    {
        returnValue = F("Archtalstr.");
        break;
    }
    case 41516:
    {
        returnValue = F("Archweg");
        break;
    }
    case 41517:
    {
        returnValue = F("Archäologiepark Römische Villa Borg");
        break;
    }
    case 41518:
    {
        returnValue = F("Archäologischer Park Ostkastell");
        break;
    }
    case 41519:
    {
        returnValue = F("Archäologischer Wanderpfad Daudieck");
        break;
    }
    case 41520:
    {
        returnValue = F("Arcoplatz");
        break;
    }
    case 41521:
    {
        returnValue = F("Arcostr.");
        break;
    }
    case 41522:
    {
        returnValue = F("Ardeckblick");
        break;
    }
    case 41523:
    {
        returnValue = F("Ardennenring");
        break;
    }
    case 41524:
    {
        returnValue = F("Ardennenstr.");
        break;
    }
    case 41525:
    {
        returnValue = F("Ardey");
        break;
    }
    case 41526:
    {
        returnValue = F("Ardeyer Str.");
        break;
    }
    case 41527:
    {
        returnValue = F("Ardeyweg");
        break;
    }
    case 41528:
    {
        returnValue = F("Ardlingsweg");
        break;
    }
    case 41529:
    {
        returnValue = F("Ardtstr.");
        break;
    }
    case 41530:
    {
        returnValue = F("Ardweg");
        break;
    }
    case 41531:
    {
        returnValue = F("Aremberger Str.");
        break;
    }
    case 41532:
    {
        returnValue = F("Arena");
        break;
    }
    case 41533:
    {
        returnValue = F("Arenberger Str.");
        break;
    }
    case 41534:
    {
        returnValue = F("Arenbergstr.");
        break;
    }
    case 41535:
    {
        returnValue = F("Arenbergweg");
        break;
    }
    case 41536:
    {
        returnValue = F("Arenborner Str.");
        break;
    }
    case 41537:
    {
        returnValue = F("Arend-Braye-Str.");
        break;
    }
    case 41538:
    {
        returnValue = F("Arend-Braye-Weg");
        break;
    }
    case 41539:
    {
        returnValue = F("Arend-Smid-Str.");
        break;
    }
    case 41540:
    {
        returnValue = F("Arendorf");
        break;
    }
    case 41541:
    {
        returnValue = F("Arendseer Damm");
        break;
    }
    case 41542:
    {
        returnValue = F("Arendseer Str.");
        break;
    }
    case 41543:
    {
        returnValue = F("Arendseer Weg");
        break;
    }
    case 41544:
    {
        returnValue = F("Arendsstr.");
        break;
    }
    case 41545:
    {
        returnValue = F("Arendtstr.");
        break;
    }
    case 41546:
    {
        returnValue = F("Arenenbergweg");
        break;
    }
    case 41547:
    {
        returnValue = F("Arenholzer Dorfstr.");
        break;
    }
    case 41548:
    {
        returnValue = F("Arenholzfeld");
        break;
    }
    case 41549:
    {
        returnValue = F("Arensberg");
        break;
    }
    case 41550:
    {
        returnValue = F("Arensberger Weg");
        break;
    }
    case 41551:
    {
        returnValue = F("Arensbergstr.");
        break;
    }
    case 41552:
    {
        returnValue = F("Arensburg");
        break;
    }
    case 41553:
    {
        returnValue = F("Arensburger Str.");
        break;
    }
    case 41554:
    {
        returnValue = F("Arensdorfer Weg");
        break;
    }
    case 41555:
    {
        returnValue = F("Arensnester Str.");
        break;
    }
    case 41556:
    {
        returnValue = F("Arensweg");
        break;
    }
    case 41557:
    {
        returnValue = F("Arentsee");
        break;
    }
    case 41558:
    {
        returnValue = F("Arenzhainer Dorfstr.");
        break;
    }
    case 41559:
    {
        returnValue = F("Arenzhainer Str.");
        break;
    }
    case 41560:
    {
        returnValue = F("Aresinger Siedlung");
        break;
    }
    case 41561:
    {
        returnValue = F("Aresinger Str.");
        break;
    }
    case 41562:
    {
        returnValue = F("Aretinstr.");
        break;
    }
    case 41563:
    {
        returnValue = F("Aretzweg");
        break;
    }
    case 41564:
    {
        returnValue = F("Arfkamp");
        break;
    }
    case 41565:
    {
        returnValue = F("Arfling");
        break;
    }
    case 41566:
    {
        returnValue = F("Arfrade");
        break;
    }
    case 41567:
    {
        returnValue = F("Arft Kamp");
        break;
    }
    case 41568:
    {
        returnValue = F("Arftenkamp");
        break;
    }
    case 41569:
    {
        returnValue = F("Arfurter Str.");
        break;
    }
    case 41570:
    {
        returnValue = F("Arfurter Weg");
        break;
    }
    case 41571:
    {
        returnValue = F("Argelanderstr.");
        break;
    }
    case 41572:
    {
        returnValue = F("Argelsrieder Weg");
        break;
    }
    case 41573:
    {
        returnValue = F("Argenauweg");
        break;
    }
    case 41574:
    {
        returnValue = F("Argenbrunnenstr.");
        break;
    }
    case 41575:
    {
        returnValue = F("Argenbühler Str.");
        break;
    }
    case 41576:
    {
        returnValue = F("Argeninsel");
        break;
    }
    case 41577:
    {
        returnValue = F("Argenring");
        break;
    }
    case 41578:
    {
        returnValue = F("Argensee Wanderpfad");
        break;
    }
    case 41579:
    {
        returnValue = F("Argenseeweg");
        break;
    }
    case 41580:
    {
        returnValue = F("Argensiedlung");
        break;
    }
    case 41581:
    {
        returnValue = F("Argenstr.");
        break;
    }
    case 41582:
    {
        returnValue = F("Argentalstr.");
        break;
    }
    case 41583:
    {
        returnValue = F("Argenthaler Str.");
        break;
    }
    case 41584:
    {
        returnValue = F("Argenweg");
        break;
    }
    case 41585:
    {
        returnValue = F("Argeter Str.");
        break;
    }
    case 41586:
    {
        returnValue = F("Argeter Weg");
        break;
    }
    case 41587:
    {
        returnValue = F("Argeweg");
        break;
    }
    case 41588:
    {
        returnValue = F("Arglestr.");
        break;
    }
    case 41589:
    {
        returnValue = F("Argonnenstr.");
        break;
    }
    case 41590:
    {
        returnValue = F("Argonnenweg");
        break;
    }
    case 41591:
    {
        returnValue = F("Argonstr.");
        break;
    }
    case 41592:
    {
        returnValue = F("Argula-von-Grumbach-Str.");
        break;
    }
    case 41593:
    {
        returnValue = F("Argula-von-Stauff-Str.");
        break;
    }
    case 41594:
    {
        returnValue = F("Arheilger Str.");
        break;
    }
    case 41595:
    {
        returnValue = F("Arheilger Weg");
        break;
    }
    case 41596:
    {
        returnValue = F("Arholzener Str.");
        break;
    }
    case 41597:
    {
        returnValue = F("Aribertstr.");
        break;
    }
    case 41598:
    {
        returnValue = F("Aribostr.");
        break;
    }
    case 41599:
    {
        returnValue = F("Ariendorfer Str.");
        break;
    }
    case 41600:
    {
        returnValue = F("Ariendorfer Weg");
        break;
    }
    case 41601:
    {
        returnValue = F("Arienheller");
        break;
    }
    case 41602:
    {
        returnValue = F("Arienheller Str.");
        break;
    }
    case 41603:
    {
        returnValue = F("Arienwatter Bool");
        break;
    }
    case 41604:
    {
        returnValue = F("Arigistr.");
        break;
    }
    case 41605:
    {
        returnValue = F("Aringer Kirchweg");
        break;
    }
    case 41606:
    {
        returnValue = F("Aringer Weg");
        break;
    }
    case 41607:
    {
        returnValue = F("Arionweg");
        break;
    }
    case 41608:
    {
        returnValue = F("Aristide-Briand-Str.");
        break;
    }
    case 41609:
    {
        returnValue = F("Aritaring");
        break;
    }
    case 41610:
    {
        returnValue = F("Ariusstr.");
        break;
    }
    case 41611:
    {
        returnValue = F("Arizonastr.");
        break;
    }
    case 41612:
    {
        returnValue = F("Arkadensteg");
        break;
    }
    case 41613:
    {
        returnValue = F("Arkadenstr.");
        break;
    }
    case 41614:
    {
        returnValue = F("Arkadenweg");
        break;
    }
    case 41615:
    {
        returnValue = F("Arkau");
        break;
    }
    case 41616:
    {
        returnValue = F("Arkaustr.");
        break;
    }
    case 41617:
    {
        returnValue = F("Arkeburger Str.");
        break;
    }
    case 41618:
    {
        returnValue = F("Arkel");
        break;
    }
    case 41619:
    {
        returnValue = F("Arkelspang");
        break;
    }
    case 41620:
    {
        returnValue = F("Arkenstr.");
        break;
    }
    case 41621:
    {
        returnValue = F("Arkenwälderhof");
        break;
    }
    case 41622:
    {
        returnValue = F("Arkona");
        break;
    }
    case 41623:
    {
        returnValue = F("Arkonablick");
        break;
    }
    case 41624:
    {
        returnValue = F("Arkonastr.");
        break;
    }
    case 41625:
    {
        returnValue = F("Arl");
        break;
    }
    case 41626:
    {
        returnValue = F("Arlacher Str.");
        break;
    }
    case 41627:
    {
        returnValue = F("Arlas");
        break;
    }
    case 41628:
    {
        returnValue = F("Arlaser Weg");
        break;
    }
    case 41629:
    {
        returnValue = F("Arlaustieg");
        break;
    }
    case 41630:
    {
        returnValue = F("Arlbergstr.");
        break;
    }
    case 41631:
    {
        returnValue = F("Arlener Str.");
        break;
    }
    case 41632:
    {
        returnValue = F("Arler Str.");
        break;
    }
    case 41633:
    {
        returnValue = F("Arler Weg");
        break;
    }
    case 41634:
    {
        returnValue = F("Arlesberger Str.");
        break;
    }
    case 41635:
    {
        returnValue = F("Arlesbrunnenstr.");
        break;
    }
    case 41636:
    {
        returnValue = F("Arlesrieder Str.");
        break;
    }
    case 41637:
    {
        returnValue = F("Arleting");
        break;
    }
    case 41638:
    {
        returnValue = F("Arlewatter Straat");
        break;
    }
    case 41639:
    {
        returnValue = F("Arlinghausstr.");
        break;
    }
    case 41640:
    {
        returnValue = F("Arloner Str.");
        break;
    }
    case 41641:
    {
        returnValue = F("Arlskaut");
        break;
    }
    case 41642:
    {
        returnValue = F("Armand-Conan-Platz");
        break;
    }
    case 41643:
    {
        returnValue = F("Armannsberger Str.");
        break;
    }
    case 41644:
    {
        returnValue = F("Armannspergstr.");
        break;
    }
    case 41645:
    {
        returnValue = F("Armanspergstr.");
        break;
    }
    case 41646:
    {
        returnValue = F("Armaturenstr.");
        break;
    }
    case 41647:
    {
        returnValue = F("Armbergsweg");
        break;
    }
    case 41648:
    {
        returnValue = F("Armborst");
        break;
    }
    case 41649:
    {
        returnValue = F("Armbrusterstr.");
        break;
    }
    case 41650:
    {
        returnValue = F("Armbruststr.");
        break;
    }
    case 41651:
    {
        returnValue = F("Arme Reihe");
        break;
    }
    case 41652:
    {
        returnValue = F("Arme-Sünder-Gasse");
        break;
    }
    case 41653:
    {
        returnValue = F("Arme-Sünder-Gäßchen");
        break;
    }
    case 41654:
    {
        returnValue = F("Arme-Sünder-Weg");
        break;
    }
    case 41655:
    {
        returnValue = F("Armeding");
        break;
    }
    case 41656:
    {
        returnValue = F("Armedinger Weg");
        break;
    }
    case 41657:
    {
        returnValue = F("Armee Geräumt");
        break;
    }
    case 41658:
    {
        returnValue = F("Armeisenweg");
        break;
    }
    case 41659:
    {
        returnValue = F("Armenberg");
        break;
    }
    case 41660:
    {
        returnValue = F("Armenfeldweg");
        break;
    }
    case 41661:
    {
        returnValue = F("Armengrund");
        break;
    }
    case 41662:
    {
        returnValue = F("Armenhöfestr.");
        break;
    }
    case 41663:
    {
        returnValue = F("Armenlandsweg");
        break;
    }
    case 41664:
    {
        returnValue = F("Armenpfad");
        break;
    }
    case 41665:
    {
        returnValue = F("Armenschlagweg");
        break;
    }
    case 41666:
    {
        returnValue = F("Armer-Sünder-Weg");
        break;
    }
    case 41667:
    {
        returnValue = F("Armersünderweg");
        break;
    }
    case 41668:
    {
        returnValue = F("Armes Lau");
        break;
    }
    case 41669:
    {
        returnValue = F("Armesbergstr.");
        break;
    }
    case 41670:
    {
        returnValue = F("Armesbergweg");
        break;
    }
    case 41671:
    {
        returnValue = F("Armeseelenstr.");
        break;
    }
    case 41672:
    {
        returnValue = F("Armesündergasse");
        break;
    }
    case 41673:
    {
        returnValue = F("Armesünderstr.");
        break;
    }
    case 41674:
    {
        returnValue = F("Armetshofen");
        break;
    }
    case 41675:
    {
        returnValue = F("Armgasse");
        break;
    }
    case 41676:
    {
        returnValue = F("Armin-Baumert-Weg");
        break;
    }
    case 41677:
    {
        returnValue = F("Armin-Commichau-Str.");
        break;
    }
    case 41678:
    {
        returnValue = F("Armin-Funke-Weg");
        break;
    }
    case 41679:
    {
        returnValue = F("Armin-Hary-Str.");
        break;
    }
    case 41680:
    {
        returnValue = F("Armin-Huber-Weg");
        break;
    }
    case 41681:
    {
        returnValue = F("Armin-Human-Str.");
        break;
    }
    case 41682:
    {
        returnValue = F("Armin-Knab-Str.");
        break;
    }
    case 41683:
    {
        returnValue = F("Armin-Knab-Weg");
        break;
    }
    case 41684:
    {
        returnValue = F("Armin-Knap-Winkel");
        break;
    }
    case 41685:
    {
        returnValue = F("Armin-Reumann-Str.");
        break;
    }
    case 41686:
    {
        returnValue = F("Armin-T.-Wegner-Weg");
        break;
    }
    case 41687:
    {
        returnValue = F("Arminiuspark");
        break;
    }
    case 41688:
    {
        returnValue = F("Arminiusstr.");
        break;
    }
    case 41689:
    {
        returnValue = F("Arminiusweg");
        break;
    }
    case 41690:
    {
        returnValue = F("Arminstr.");
        break;
    }
    case 41691:
    {
        returnValue = F("Arminweg");
        break;
    }
    case 41692:
    {
        returnValue = F("Armlandstr.");
        break;
    }
    case 41693:
    {
        returnValue = F("Armsener Dorfstr.");
        break;
    }
    case 41694:
    {
        returnValue = F("Armsener Str.");
        break;
    }
    case 41695:
    {
        returnValue = F("Armsheimer Str.");
        break;
    }
    case 41696:
    {
        returnValue = F("Armsheimer Weg");
        break;
    }
    case 41697:
    {
        returnValue = F("Armslohweg");
        break;
    }
    case 41698:
    {
        returnValue = F("Armstr.");
        break;
    }
    case 41699:
    {
        returnValue = F("Armstrongstr.");
        break;
    }
    case 41700:
    {
        returnValue = F("Armsündergässle");
        break;
    }
    case 41701:
    {
        returnValue = F("Armsünderweg");
        break;
    }
    case 41702:
    {
        returnValue = F("Armwischenweg");
        break;
    }
    case 41703:
    {
        returnValue = F("Arn-Harjes-Weg");
        break;
    }
    case 41704:
    {
        returnValue = F("Arnacher Str.");
        break;
    }
    case 41705:
    {
        returnValue = F("Arnaudstr.");
        break;
    }
    case 41706:
    {
        returnValue = F("Arnaudweg");
        break;
    }
    case 41707:
    {
        returnValue = F("Arnauer Str.");
        break;
    }
    case 41708:
    {
        returnValue = F("Arnbacher Str.");
        break;
    }
    case 41709:
    {
        returnValue = F("Arnbacher Weg");
        break;
    }
    case 41710:
    {
        returnValue = F("Arnbachstr.");
        break;
    }
    case 41711:
    {
        returnValue = F("Arnbrucker Steig");
        break;
    }
    case 41712:
    {
        returnValue = F("Arnbrucker Str.");
        break;
    }
    case 41713:
    {
        returnValue = F("Arnbucher Weg");
        break;
    }
    case 41714:
    {
        returnValue = F("Arndorfer Steig");
        break;
    }
    case 41715:
    {
        returnValue = F("Arndorfer Str.");
        break;
    }
    case 41716:
    {
        returnValue = F("Arndsbergstr.");
        break;
    }
    case 41717:
    {
        returnValue = F("Arndtsberg");
        break;
    }
    case 41718:
    {
        returnValue = F("Arndtstr.");
        break;
    }
    case 41719:
    {
        returnValue = F("Arndtweg");
        break;
    }
    case 41720:
    {
        returnValue = F("Arne-Jacobsen-Stieg");
        break;
    }
    case 41721:
    {
        returnValue = F("Arneburger Str.");
        break;
    }
    case 41722:
    {
        returnValue = F("Arneburger Weg");
        break;
    }
    case 41723:
    {
        returnValue = F("Arnegger Str.");
        break;
    }
    case 41724:
    {
        returnValue = F("Arnest");
        break;
    }
    case 41725:
    {
        returnValue = F("Arngaster Str.");
        break;
    }
    case 41726:
    {
        returnValue = F("Arnheim Park");
        break;
    }
    case 41727:
    {
        returnValue = F("Arnheimer Str.");
        break;
    }
    case 41728:
    {
        returnValue = F("Arnheimstr.");
        break;
    }
    case 41729:
    {
        returnValue = F("Arnheiter Hof");
        break;
    }
    case 41730:
    {
        returnValue = F("Arnheiter Str.");
        break;
    }
    case 41731:
    {
        returnValue = F("Arnhelmstr.");
        break;
    }
    case 41732:
    {
        returnValue = F("Arnhoch");
        break;
    }
    case 41733:
    {
        returnValue = F("Arnhofen");
        break;
    }
    case 41734:
    {
        returnValue = F("Arnhofener Str.");
        break;
    }
    case 41735:
    {
        returnValue = F("Arnhofener Weg");
        break;
    }
    case 41736:
    {
        returnValue = F("Arnhofer Weg");
        break;
    }
    case 41737:
    {
        returnValue = F("Arnika-Weg");
        break;
    }
    case 41738:
    {
        returnValue = F("Arnikagrund");
        break;
    }
    case 41739:
    {
        returnValue = F("Arnikastr.");
        break;
    }
    case 41740:
    {
        returnValue = F("Arnikaweg");
        break;
    }
    case 41741:
    {
        returnValue = F("Arnimer Weg");
        break;
    }
    case 41742:
    {
        returnValue = F("Arnims Gestell");
        break;
    }
    case 41743:
    {
        returnValue = F("Arnimstr.");
        break;
    }
    case 41744:
    {
        returnValue = F("Arnings Hof");
        break;
    }
    case 41745:
    {
        returnValue = F("Arnings Patt");
        break;
    }
    case 41746:
    {
        returnValue = F("Arnings Törn");
        break;
    }
    case 41747:
    {
        returnValue = F("Arnings Wiese");
        break;
    }
    case 41748:
    {
        returnValue = F("Arningsfeld");
        break;
    }
    case 41749:
    {
        returnValue = F("Arnischen Busch");
        break;
    }
    case 41750:
    {
        returnValue = F("Arnisser Blick");
        break;
    }
    case 41751:
    {
        returnValue = F("Arnisser Str.");
        break;
    }
    case 41752:
    {
        returnValue = F("Arnistal");
        break;
    }
    case 41753:
    {
        returnValue = F("Arno-Bahndorf-Str.");
        break;
    }
    case 41754:
    {
        returnValue = F("Arno-Berger-Str.");
        break;
    }
    case 41755:
    {
        returnValue = F("Arno-Esch-Str.");
        break;
    }
    case 41756:
    {
        returnValue = F("Arno-Franz-Str.");
        break;
    }
    case 41757:
    {
        returnValue = F("Arno-Förster-Str.");
        break;
    }
    case 41758:
    {
        returnValue = F("Arno-Holz-Weg");
        break;
    }
    case 41759:
    {
        returnValue = F("Arno-Jacoby-Str.");
        break;
    }
    case 41760:
    {
        returnValue = F("Arno-Müller-Str.");
        break;
    }
    case 41761:
    {
        returnValue = F("Arno-Münch-Str.");
        break;
    }
    case 41762:
    {
        returnValue = F("Arno-Neubert-Allee");
        break;
    }
    case 41763:
    {
        returnValue = F("Arno-Reichmann-Str.");
        break;
    }
    case 41764:
    {
        returnValue = F("Arno-Schlothauer-Str.");
        break;
    }
    case 41765:
    {
        returnValue = F("Arno-Schmidt-Str.");
        break;
    }
    case 41766:
    {
        returnValue = F("Arno-Schmidt-Weg");
        break;
    }
    case 41767:
    {
        returnValue = F("Arno-Schüller-Str.");
        break;
    }
    case 41768:
    {
        returnValue = F("Arno-Seidl-Schulz-Str.");
        break;
    }
    case 41769:
    {
        returnValue = F("Arno-Wiemann-Weg");
        break;
    }
    case 41770:
    {
        returnValue = F("Arnold Schneise");
        break;
    }
    case 41771:
    {
        returnValue = F("Arnold-Breithor-Str.");
        break;
    }
    case 41772:
    {
        returnValue = F("Arnold-Butzbach-Str.");
        break;
    }
    case 41773:
    {
        returnValue = F("Arnold-Butzbach-Weg");
        break;
    }
    case 41774:
    {
        returnValue = F("Arnold-Böcklin-Str.");
        break;
    }
    case 41775:
    {
        returnValue = F("Arnold-Dammers-Weg");
        break;
    }
    case 41776:
    {
        returnValue = F("Arnold-Erlanger-Str.");
        break;
    }
    case 41777:
    {
        returnValue = F("Arnold-Hentschel-Str.");
        break;
    }
    case 41778:
    {
        returnValue = F("Arnold-Homberg-Str.");
        break;
    }
    case 41779:
    {
        returnValue = F("Arnold-Huppertz-Str.");
        break;
    }
    case 41780:
    {
        returnValue = F("Arnold-Janssen-Str.");
        break;
    }
    case 41781:
    {
        returnValue = F("Arnold-Jäger-Str.");
        break;
    }
    case 41782:
    {
        returnValue = F("Arnold-Köberlin-Weg");
        break;
    }
    case 41783:
    {
        returnValue = F("Arnold-Marggraff-Weg");
        break;
    }
    case 41784:
    {
        returnValue = F("Arnold-Rütter-Str.");
        break;
    }
    case 41785:
    {
        returnValue = F("Arnold-Schindler-Str.");
        break;
    }
    case 41786:
    {
        returnValue = F("Arnold-Schönberg-Ring");
        break;
    }
    case 41787:
    {
        returnValue = F("Arnold-Schönberg-Str.");
        break;
    }
    case 41788:
    {
        returnValue = F("Arnold-Schönberg-Weg");
        break;
    }
    case 41789:
    {
        returnValue = F("Arnold-Ulitz-Weg");
        break;
    }
    case 41790:
    {
        returnValue = F("Arnold-Westerkamp-Str.");
        break;
    }
    case 41791:
    {
        returnValue = F("Arnold-Zweig-Str.");
        break;
    }
    case 41792:
    {
        returnValue = F("Arnold-von-Podewils-Str.");
        break;
    }
    case 41793:
    {
        returnValue = F("Arnoldi Loipe");
        break;
    }
    case 41794:
    {
        returnValue = F("Arnoldiplatz");
        break;
    }
    case 41795:
    {
        returnValue = F("Arnoldistr.");
        break;
    }
    case 41796:
    {
        returnValue = F("Arnolds Boulevard");
        break;
    }
    case 41797:
    {
        returnValue = F("Arnoldsbrunnenweg");
        break;
    }
    case 41798:
    {
        returnValue = F("Arnoldsdorfer Str.");
        break;
    }
    case 41799:
    {
        returnValue = F("Arnoldsgrüner Str.");
        break;
    }
    case 41800:
    {
        returnValue = F("Arnoldshainer Weg");
        break;
    }
    case 41801:
    {
        returnValue = F("Arnoldshammer");
        break;
    }
    case 41802:
    {
        returnValue = F("Arnoldshammerring");
        break;
    }
    case 41803:
    {
        returnValue = F("Arnoldshof");
        break;
    }
    case 41804:
    {
        returnValue = F("Arnoldstr.");
        break;
    }
    case 41805:
    {
        returnValue = F("Arnoldsweg");
        break;
    }
    case 41806:
    {
        returnValue = F("Arnoldsweilerstr.");
        break;
    }
    case 41807:
    {
        returnValue = F("Arnoldsweilerweg");
        break;
    }
    case 41808:
    {
        returnValue = F("Arnoldusstr.");
        break;
    }
    case 41809:
    {
        returnValue = F("Arnoldystr.");
        break;
    }
    case 41810:
    {
        returnValue = F("Arnostr.");
        break;
    }
    case 41811:
    {
        returnValue = F("Arnouviller Ring");
        break;
    }
    case 41812:
    {
        returnValue = F("Arnoweg");
        break;
    }
    case 41813:
    {
        returnValue = F("Arnpeckstr.");
        break;
    }
    case 41814:
    {
        returnValue = F("Arnsbacher Str.");
        break;
    }
    case 41815:
    {
        returnValue = F("Arnsberg");
        break;
    }
    case 41816:
    {
        returnValue = F("Arnsberger Str.");
        break;
    }
    case 41817:
    {
        returnValue = F("Arnsberger Weg");
        break;
    }
    case 41818:
    {
        returnValue = F("Arnsbergweg");
        break;
    }
    case 41819:
    {
        returnValue = F("Arnsburger Str.");
        break;
    }
    case 41820:
    {
        returnValue = F("Arnsburgstr.");
        break;
    }
    case 41821:
    {
        returnValue = F("Arnschwanger Str.");
        break;
    }
    case 41822:
    {
        returnValue = F("Arnsdorf");
        break;
    }
    case 41823:
    {
        returnValue = F("Arnsdorfer Str.");
        break;
    }
    case 41824:
    {
        returnValue = F("Arnsdorfer Weg");
        break;
    }
    case 41825:
    {
        returnValue = F("Arnsfelder Str.");
        break;
    }
    case 41826:
    {
        returnValue = F("Arnsgrün");
        break;
    }
    case 41827:
    {
        returnValue = F("Arnsgrüner Kirchsteig");
        break;
    }
    case 41828:
    {
        returnValue = F("Arnsgrüner Str.");
        break;
    }
    case 41829:
    {
        returnValue = F("Arnsgrüner Weg");
        break;
    }
    case 41830:
    {
        returnValue = F("Arnshainer Str.");
        break;
    }
    case 41831:
    {
        returnValue = F("Arnshainer Weg");
        break;
    }
    case 41832:
    {
        returnValue = F("Arnshaugk");
        break;
    }
    case 41833:
    {
        returnValue = F("Arnshaugker Str.");
        break;
    }
    case 41834:
    {
        returnValue = F("Arnshäuser Str.");
        break;
    }
    case 41835:
    {
        returnValue = F("Arnshöchstädt");
        break;
    }
    case 41836:
    {
        returnValue = F("Arnspitzstr.");
        break;
    }
    case 41837:
    {
        returnValue = F("Arnstedter Schulstr.");
        break;
    }
    case 41838:
    {
        returnValue = F("Arnstedter Str.");
        break;
    }
    case 41839:
    {
        returnValue = F("Arnstedter Trift");
        break;
    }
    case 41840:
    {
        returnValue = F("Arnstedter Weg");
        break;
    }
    case 41841:
    {
        returnValue = F("Arnstedtstr.");
        break;
    }
    case 41842:
    {
        returnValue = F("Arnstein");
        break;
    }
    case 41843:
    {
        returnValue = F("Arnsteiner Str.");
        break;
    }
    case 41844:
    {
        returnValue = F("Arnsteiner Weg");
        break;
    }
    case 41845:
    {
        returnValue = F("Arnstorfer Str.");
        break;
    }
    case 41846:
    {
        returnValue = F("Arnstädter Chaussee");
        break;
    }
    case 41847:
    {
        returnValue = F("Arnstädter Hohle");
        break;
    }
    case 41848:
    {
        returnValue = F("Arnstädter Str.");
        break;
    }
    case 41849:
    {
        returnValue = F("Arnulfstr.");
        break;
    }
    case 41850:
    {
        returnValue = F("Arnulfusbergstr.");
        break;
    }
    case 41851:
    {
        returnValue = F("Arnulfusstr.");
        break;
    }
    case 41852:
    {
        returnValue = F("Arnulfweg");
        break;
    }
    case 41853:
    {
        returnValue = F("Arnumer Feldweg");
        break;
    }
    case 41854:
    {
        returnValue = F("Arnumer Kirchstr.");
        break;
    }
    case 41855:
    {
        returnValue = F("Arnumer Landwehr");
        break;
    }
    case 41856:
    {
        returnValue = F("Arnumer Str.");
        break;
    }
    case 41857:
    {
        returnValue = F("Arnzeller Str.");
        break;
    }
    case 41858:
    {
        returnValue = F("Arnzhäuschen");
        break;
    }
    case 41859:
    {
        returnValue = F("Arode");
        break;
    }
    case 41860:
    {
        returnValue = F("Arolser Str.");
        break;
    }
    case 41861:
    {
        returnValue = F("Aroniaweg");
        break;
    }
    case 41862:
    {
        returnValue = F("Arp-Arens-Str.");
        break;
    }
    case 41863:
    {
        returnValue = F("Arp-Schnitger-Str.");
        break;
    }
    case 41864:
    {
        returnValue = F("Arp-Schnitger-Weg");
        break;
    }
    case 41865:
    {
        returnValue = F("Arp-Schnittger-Str.");
        break;
    }
    case 41866:
    {
        returnValue = F("Arp-von-Düring-Weg");
        break;
    }
    case 41867:
    {
        returnValue = F("Arpker Weg");
        break;
    }
    case 41868:
    {
        returnValue = F("Arpsdamm");
        break;
    }
    case 41869:
    {
        returnValue = F("Arpsdorfer Str.");
        break;
    }
    case 41870:
    {
        returnValue = F("Arpsdorfer Weg");
        break;
    }
    case 41871:
    {
        returnValue = F("Arr Längsstoppel");
        break;
    }
    case 41872:
    {
        returnValue = F("Arracher Höhe");
        break;
    }
    case 41873:
    {
        returnValue = F("Arracher Weg");
        break;
    }
    case 41874:
    {
        returnValue = F("Arradonstr.");
        break;
    }
    case 41875:
    {
        returnValue = F("Arraschneise");
        break;
    }
    case 41876:
    {
        returnValue = F("Arraser Str.");
        break;
    }
    case 41877:
    {
        returnValue = F("Arrenbrechtstr.");
        break;
    }
    case 41878:
    {
        returnValue = F("Arrerberg");
        break;
    }
    case 41879:
    {
        returnValue = F("Arresthausgasse");
        break;
    }
    case 41880:
    {
        returnValue = F("Arrheniusweg");
        break;
    }
    case 41881:
    {
        returnValue = F("Arrild");
        break;
    }
    case 41882:
    {
        returnValue = F("Arriweg");
        break;
    }
    case 41883:
    {
        returnValue = F("Ars Natura");
        break;
    }
    case 41884:
    {
        returnValue = F("Ars Natura MTB Trail zur Fulda");
        break;
    }
    case 41885:
    {
        returnValue = F("Arschterlocher Weg");
        break;
    }
    case 41886:
    {
        returnValue = F("Arsenalgarten");
        break;
    }
    case 41887:
    {
        returnValue = F("Arsenalplatz");
        break;
    }
    case 41888:
    {
        returnValue = F("Arsenalstr.");
        break;
    }
    case 41889:
    {
        returnValue = F("Arsenius-Graf-Str.");
        break;
    }
    case 41890:
    {
        returnValue = F("Arsenius-Pfaff-Str.");
        break;
    }
    case 41891:
    {
        returnValue = F("Artamhof");
        break;
    }
    case 41892:
    {
        returnValue = F("Artegastr.");
        break;
    }
    case 41893:
    {
        returnValue = F("Artenweg");
        break;
    }
    case 41894:
    {
        returnValue = F("Artern'scher Weg");
        break;
    }
    case 41895:
    {
        returnValue = F("Arterner Str.");
        break;
    }
    case 41896:
    {
        returnValue = F("Arterner Weg");
        break;
    }
    case 41897:
    {
        returnValue = F("Arternsches Tor");
        break;
    }
    case 41898:
    {
        returnValue = F("Arterscher Weg");
        break;
    }
    case 41899:
    {
        returnValue = F("Arteserstr.");
        break;
    }
    case 41900:
    {
        returnValue = F("Artesgrüner Str.");
        break;
    }
    case 41901:
    {
        returnValue = F("Arthel");
        break;
    }
    case 41902:
    {
        returnValue = F("Arthur-Beil-Str.");
        break;
    }
    case 41903:
    {
        returnValue = F("Arthur-Borghard-Weg");
        break;
    }
    case 41904:
    {
        returnValue = F("Arthur-Boskamp-Weg");
        break;
    }
    case 41905:
    {
        returnValue = F("Arthur-Brasgalla-Steig");
        break;
    }
    case 41906:
    {
        returnValue = F("Arthur-Christiansen-Str.");
        break;
    }
    case 41907:
    {
        returnValue = F("Arthur-Eden-Str.");
        break;
    }
    case 41908:
    {
        returnValue = F("Arthur-Emmerlich-Str.");
        break;
    }
    case 41909:
    {
        returnValue = F("Arthur-Falk-Str.");
        break;
    }
    case 41910:
    {
        returnValue = F("Arthur-Fuhr-Str.");
        break;
    }
    case 41911:
    {
        returnValue = F("Arthur-Geiß-Str.");
        break;
    }
    case 41912:
    {
        returnValue = F("Arthur-Goldschmidt-Weg");
        break;
    }
    case 41913:
    {
        returnValue = F("Arthur-Graf-Str.");
        break;
    }
    case 41914:
    {
        returnValue = F("Arthur-Grimm-Weg");
        break;
    }
    case 41915:
    {
        returnValue = F("Arthur-Gruber-Str.");
        break;
    }
    case 41916:
    {
        returnValue = F("Arthur-Hecker-Str.");
        break;
    }
    case 41917:
    {
        returnValue = F("Arthur-Hehl-Str.");
        break;
    }
    case 41918:
    {
        returnValue = F("Arthur-Heyland-Str.");
        break;
    }
    case 41919:
    {
        returnValue = F("Arthur-Hoffmann-Str.");
        break;
    }
    case 41920:
    {
        returnValue = F("Arthur-Hustig-Str.");
        break;
    }
    case 41921:
    {
        returnValue = F("Arthur-Johlige-Weg");
        break;
    }
    case 41922:
    {
        returnValue = F("Arthur-Junghans-Str.");
        break;
    }
    case 41923:
    {
        returnValue = F("Arthur-Kiehne-Str.");
        break;
    }
    case 41924:
    {
        returnValue = F("Arthur-Korn-Str.");
        break;
    }
    case 41925:
    {
        returnValue = F("Arthur-Kühne-Str.");
        break;
    }
    case 41926:
    {
        returnValue = F("Arthur-Ladwig-Str.");
        break;
    }
    case 41927:
    {
        returnValue = F("Arthur-M.-Miller-Str.");
        break;
    }
    case 41928:
    {
        returnValue = F("Arthur-Mahler-Str.");
        break;
    }
    case 41929:
    {
        returnValue = F("Arthur-Moritz-Weg");
        break;
    }
    case 41930:
    {
        returnValue = F("Arthur-Müller-Str.");
        break;
    }
    case 41931:
    {
        returnValue = F("Arthur-Nisio-Str.");
        break;
    }
    case 41932:
    {
        returnValue = F("Arthur-Pollack-Str.");
        break;
    }
    case 41933:
    {
        returnValue = F("Arthur-Rauner-Str.");
        break;
    }
    case 41934:
    {
        returnValue = F("Arthur-Sauer-Anlage");
        break;
    }
    case 41935:
    {
        returnValue = F("Arthur-Scheibner-Str.");
        break;
    }
    case 41936:
    {
        returnValue = F("Arthur-Scheunert-Allee");
        break;
    }
    case 41937:
    {
        returnValue = F("Arthur-Schulz-Str.");
        break;
    }
    case 41938:
    {
        returnValue = F("Arthur-Soltau-Weg");
        break;
    }
    case 41939:
    {
        returnValue = F("Arthur-Ullrich-Str.");
        break;
    }
    case 41940:
    {
        returnValue = F("Arthur-Wasse-Weg");
        break;
    }
    case 41941:
    {
        returnValue = F("Arthur-Wilke-Str.");
        break;
    }
    case 41942:
    {
        returnValue = F("Arthur-Zabel-Str.");
        break;
    }
    case 41943:
    {
        returnValue = F("Arthur-Zabel-Weg");
        break;
    }
    case 41944:
    {
        returnValue = F("Arthur-von-Lenthe-Str.");
        break;
    }
    case 41945:
    {
        returnValue = F("Arthur-von-Weinberg-Platz");
        break;
    }
    case 41946:
    {
        returnValue = F("Arthurweg");
        break;
    }
    case 41947:
    {
        returnValue = F("Artickelweg");
        break;
    }
    case 41948:
    {
        returnValue = F("Artilleriepark");
        break;
    }
    case 41949:
    {
        returnValue = F("Artilleriestr.");
        break;
    }
    case 41950:
    {
        returnValue = F("Artillerieweg");
        break;
    }
    case 41951:
    {
        returnValue = F("Artlandstr.");
        break;
    }
    case 41952:
    {
        returnValue = F("Artlenburger Landstr.");
        break;
    }
    case 41953:
    {
        returnValue = F("Artlishalde");
        break;
    }
    case 41954:
    {
        returnValue = F("Artlkofen");
        break;
    }
    case 41955:
    {
        returnValue = F("Artmann-Garten");
        break;
    }
    case 41956:
    {
        returnValue = F("Artmannweg");
        break;
    }
    case 41957:
    {
        returnValue = F("Artosstr.");
        break;
    }
    case 41958:
    {
        returnValue = F("Artur Gemmel Weg");
        break;
    }
    case 41959:
    {
        returnValue = F("Artur-Becker-Ring");
        break;
    }
    case 41960:
    {
        returnValue = F("Artur-Becker-Str.");
        break;
    }
    case 41961:
    {
        returnValue = F("Artur-Benseler-Str.");
        break;
    }
    case 41962:
    {
        returnValue = F("Artur-Fischer-Str.");
        break;
    }
    case 41963:
    {
        returnValue = F("Artur-Hauer-Str.");
        break;
    }
    case 41964:
    {
        returnValue = F("Artur-Höhn-Str.");
        break;
    }
    case 41965:
    {
        returnValue = F("Artur-Klötzner-Str.");
        break;
    }
    case 41966:
    {
        returnValue = F("Artur-Kraft-Str.");
        break;
    }
    case 41967:
    {
        returnValue = F("Artur-Neumann-Str.");
        break;
    }
    case 41968:
    {
        returnValue = F("Artur-Proeller-Str.");
        break;
    }
    case 41969:
    {
        returnValue = F("Artur-Schäfer-Platz");
        break;
    }
    case 41970:
    {
        returnValue = F("Artur-Tübel-Str.");
        break;
    }
    case 41971:
    {
        returnValue = F("Artur-Uhl-Weg");
        break;
    }
    case 41972:
    {
        returnValue = F("Artäcker");
        break;
    }
    case 41973:
    {
        returnValue = F("Artäckerstr.");
        break;
    }
    case 41974:
    {
        returnValue = F("Arup-Aruper Feld");
        break;
    }
    case 41975:
    {
        returnValue = F("Arup-Aruper Str.");
        break;
    }
    case 41976:
    {
        returnValue = F("Arup-Ascheberger Str.");
        break;
    }
    case 41977:
    {
        returnValue = F("Arup-Hagenweg");
        break;
    }
    case 41978:
    {
        returnValue = F("Aruper Str.");
        break;
    }
    case 41979:
    {
        returnValue = F("Arvenweg");
        break;
    }
    case 41980:
    {
        returnValue = F("Arwaldweg");
        break;
    }
    case 41981:
    {
        returnValue = F("Arweg");
        break;
    }
    case 41982:
    {
        returnValue = F("Arzbach");
        break;
    }
    case 41983:
    {
        returnValue = F("Arzbacher Str.");
        break;
    }
    case 41984:
    {
        returnValue = F("Arzberg");
        break;
    }
    case 41985:
    {
        returnValue = F("Arzberger Str.");
        break;
    }
    case 41986:
    {
        returnValue = F("Arzbergstr.");
        break;
    }
    case 41987:
    {
        returnValue = F("Arzbergweg");
        break;
    }
    case 41988:
    {
        returnValue = F("Arzbühlstr.");
        break;
    }
    case 41989:
    {
        returnValue = F("Arzet");
        break;
    }
    case 41990:
    {
        returnValue = F("Arzetstr.");
        break;
    }
    case 41991:
    {
        returnValue = F("Arzetweg");
        break;
    }
    case 41992:
    {
        returnValue = F("Arzfeldstr.");
        break;
    }
    case 41993:
    {
        returnValue = F("Arzgrund");
        break;
    }
    case 41994:
    {
        returnValue = F("Arzheimer Str.");
        break;
    }
    case 41995:
    {
        returnValue = F("Arzlohe");
        break;
    }
    case 41996:
    {
        returnValue = F("Arzloher Str.");
        break;
    }
    case 41997:
    {
        returnValue = F("Arzloher Weg");
        break;
    }
    case 41998:
    {
        returnValue = F("Arztbergstr.");
        break;
    }
    case 41999:
    {
        returnValue = F("Arztenbühl");
        break;
    }
    case 42000:
    {
        returnValue = F("Arztgasse");
        break;
    }
    case 42001:
    {
        returnValue = F("Arzweg");
        break;
    }
    case 42002:
    {
        returnValue = F("Asam-Ring");
        break;
    }
    case 42003:
    {
        returnValue = F("Asambogen");
        break;
    }
    case 42004:
    {
        returnValue = F("Asamklammstr.");
        break;
    }
    case 42005:
    {
        returnValue = F("Asamplatz");
        break;
    }
    case 42006:
    {
        returnValue = F("Asamring");
        break;
    }
    case 42007:
    {
        returnValue = F("Asamstr.");
        break;
    }
    case 42008:
    {
        returnValue = F("Asamweg");
        break;
    }
    case 42009:
    {
        returnValue = F("Asang");
        break;
    }
    case 42010:
    {
        returnValue = F("Asanger Str.");
        break;
    }
    case 42011:
    {
        returnValue = F("Asanger Weg");
        break;
    }
    case 42012:
    {
        returnValue = F("Asangstr.");
        break;
    }
    case 42013:
    {
        returnValue = F("Asangsträßle");
        break;
    }
    case 42014:
    {
        returnValue = F("Asangweg");
        break;
    }
    case 42015:
    {
        returnValue = F("Asbach");
        break;
    }
    case 42016:
    {
        returnValue = F("Asbach-Kuffinger-Weg");
        break;
    }
    case 42017:
    {
        returnValue = F("Asbacher Landstr.");
        break;
    }
    case 42018:
    {
        returnValue = F("Asbacher Str.");
        break;
    }
    case 42019:
    {
        returnValue = F("Asbacher Weg");
        break;
    }
    case 42020:
    {
        returnValue = F("Asbachstr.");
        break;
    }
    case 42021:
    {
        returnValue = F("Asbachweg");
        break;
    }
    case 42022:
    {
        returnValue = F("Asbahrenwisch");
        break;
    }
    case 42023:
    {
        returnValue = F("Asbecker Str.");
        break;
    }
    case 42024:
    {
        returnValue = F("Asbeckerdamm");
        break;
    }
    case 42025:
    {
        returnValue = F("Asberger Str.");
        break;
    }
    case 42026:
    {
        returnValue = F("Asbergweg");
        break;
    }
    case 42027:
    {
        returnValue = F("Asbrockweg");
        break;
    }
    case 42028:
    {
        returnValue = F("Asbrook");
        break;
    }
    case 42029:
    {
        returnValue = F("Asbrucher Str.");
        break;
    }
    case 42030:
    {
        returnValue = F("Aschach");
        break;
    }
    case 42031:
    {
        returnValue = F("Aschacher Str.");
        break;
    }
    case 42032:
    {
        returnValue = F("Aschacher Weg");
        break;
    }
    case 42033:
    {
        returnValue = F("Aschacherstr.");
        break;
    }
    case 42034:
    {
        returnValue = F("Aschachweg");
        break;
    }
    case 42035:
    {
        returnValue = F("Aschaer Str.");
        break;
    }
    case 42036:
    {
        returnValue = F("Aschafeldstr.");
        break;
    }
    case 42037:
    {
        returnValue = F("Aschaffenburger Str.");
        break;
    }
    case 42038:
    {
        returnValue = F("Aschaffenburger Weg");
        break;
    }
    case 42039:
    {
        returnValue = F("Aschaffstr.");
        break;
    }
    case 42040:
    {
        returnValue = F("Ascharaer Höhe");
        break;
    }
    case 42041:
    {
        returnValue = F("Ascharaer Kreuz");
        break;
    }
    case 42042:
    {
        returnValue = F("Ascharaer Str.");
        break;
    }
    case 42043:
    {
        returnValue = F("Ascharaer Weg");
        break;
    }
    case 42044:
    {
        returnValue = F("Aschau");
        break;
    }
    case 42045:
    {
        returnValue = F("Aschauer Hofkoppel");
        break;
    }
    case 42046:
    {
        returnValue = F("Aschauer Landstr.");
        break;
    }
    case 42047:
    {
        returnValue = F("Aschauer Str.");
        break;
    }
    case 42048:
    {
        returnValue = F("Aschauer Weg");
        break;
    }
    case 42049:
    {
        returnValue = F("Aschauerweiherstr.");
        break;
    }
    case 42050:
    {
        returnValue = F("Aschauhof");
        break;
    }
    case 42051:
    {
        returnValue = F("Aschauweg");
        break;
    }
    case 42052:
    {
        returnValue = F("Aschbach");
        break;
    }
    case 42053:
    {
        returnValue = F("Aschbacher Str.");
        break;
    }
    case 42054:
    {
        returnValue = F("Aschbachstr.");
        break;
    }
    case 42055:
    {
        returnValue = F("Aschbachweg");
        break;
    }
    case 42056:
    {
        returnValue = F("Aschberg");
        break;
    }
    case 42057:
    {
        returnValue = F("Aschbergstr.");
        break;
    }
    case 42058:
    {
        returnValue = F("Aschbergweg");
        break;
    }
    case 42059:
    {
        returnValue = F("Aschbuck");
        break;
    }
    case 42060:
    {
        returnValue = F("Aschbühl");
        break;
    }
    case 42061:
    {
        returnValue = F("Ascheberger Str.");
        break;
    }
    case 42062:
    {
        returnValue = F("Aschebloßweg");
        break;
    }
    case 42063:
    {
        returnValue = F("Aschebreite");
        break;
    }
    case 42064:
    {
        returnValue = F("Aschehübelweg");
        break;
    }
    case 42065:
    {
        returnValue = F("Ascheloher Weg");
        break;
    }
    case 42066:
    {
        returnValue = F("Aschenbachweg");
        break;
    }
    case 42067:
    {
        returnValue = F("Aschenberg");
        break;
    }
    case 42068:
    {
        returnValue = F("Aschenbergstr.");
        break;
    }
    case 42069:
    {
        returnValue = F("Aschenborn");
        break;
    }
    case 42070:
    {
        returnValue = F("Aschenbrennersteig");
        break;
    }
    case 42071:
    {
        returnValue = F("Aschenbrennerstr.");
        break;
    }
    case 42072:
    {
        returnValue = F("Aschenbrennerweg");
        break;
    }
    case 42073:
    {
        returnValue = F("Aschenbrödelweg");
        break;
    }
    case 42074:
    {
        returnValue = F("Aschenbuckelweg");
        break;
    }
    case 42075:
    {
        returnValue = F("Aschendorfer Str.");
        break;
    }
    case 42076:
    {
        returnValue = F("Aschendorfer Weg");
        break;
    }
    case 42077:
    {
        returnValue = F("Aschener Bruchweg");
        break;
    }
    case 42078:
    {
        returnValue = F("Aschener Forstweg");
        break;
    }
    case 42079:
    {
        returnValue = F("Aschener Str.");
        break;
    }
    case 42080:
    {
        returnValue = F("Aschengasse");
        break;
    }
    case 42081:
    {
        returnValue = F("Aschengrundweg");
        break;
    }
    case 42082:
    {
        returnValue = F("Aschenhausweg");
        break;
    }
    case 42083:
    {
        returnValue = F("Aschenhof");
        break;
    }
    case 42084:
    {
        returnValue = F("Aschenhoferweg");
        break;
    }
    case 42085:
    {
        returnValue = F("Aschenhofstr.");
        break;
    }
    case 42086:
    {
        returnValue = F("Aschenhäuser Str.");
        break;
    }
    case 42087:
    {
        returnValue = F("Aschenhäuser Weg");
        break;
    }
    case 42088:
    {
        returnValue = F("Aschenhüttenweg");
        break;
    }
    case 42089:
    {
        returnValue = F("Aschenort");
        break;
    }
    case 42090:
    {
        returnValue = F("Aschenplatz");
        break;
    }
    case 42091:
    {
        returnValue = F("Aschenputtelweg");
        break;
    }
    case 42092:
    {
        returnValue = F("Aschenreutestr.");
        break;
    }
    case 42093:
    {
        returnValue = F("Aschenrother Weg");
        break;
    }
    case 42094:
    {
        returnValue = F("Aschenstedter Str.");
        break;
    }
    case 42095:
    {
        returnValue = F("Aschental");
        break;
    }
    case 42096:
    {
        returnValue = F("Aschentalweg");
        break;
    }
    case 42097:
    {
        returnValue = F("Aschenweg");
        break;
    }
    case 42098:
    {
        returnValue = F("Aschepohl");
        break;
    }
    case 42099:
    {
        returnValue = F("Ascher Bahnhofstr.");
        break;
    }
    case 42100:
    {
        returnValue = F("Ascher Steig");
        break;
    }
    case 42101:
    {
        returnValue = F("Ascher Str.");
        break;
    }
    case 42102:
    {
        returnValue = F("Ascher Weg");
        break;
    }
    case 42103:
    {
        returnValue = F("Ascherbachstr.");
        break;
    }
    case 42104:
    {
        returnValue = F("Ascherbachweg");
        break;
    }
    case 42105:
    {
        returnValue = F("Ascherberg");
        break;
    }
    case 42106:
    {
        returnValue = F("Ascherfeld");
        break;
    }
    case 42107:
    {
        returnValue = F("Ascherhau");
        break;
    }
    case 42108:
    {
        returnValue = F("Ascheriedweg");
        break;
    }
    case 42109:
    {
        returnValue = F("Ascheringer Str.");
        break;
    }
    case 42110:
    {
        returnValue = F("Ascheringer Weg");
        break;
    }
    case 42111:
    {
        returnValue = F("Aschershain");
        break;
    }
    case 42112:
    {
        returnValue = F("Aschershainer Str.");
        break;
    }
    case 42113:
    {
        returnValue = F("Aschersleben");
        break;
    }
    case 42114:
    {
        returnValue = F("Ascherslebener Landstr.");
        break;
    }
    case 42115:
    {
        returnValue = F("Ascherslebener Str.");
        break;
    }
    case 42116:
    {
        returnValue = F("Ascherslebener Weg");
        break;
    }
    case 42117:
    {
        returnValue = F("Ascherstr.");
        break;
    }
    case 42118:
    {
        returnValue = F("Ascheröde Str.");
        break;
    }
    case 42119:
    {
        returnValue = F("Ascheröder Str.");
        break;
    }
    case 42120:
    {
        returnValue = F("Aschestr.");
        break;
    }
    case 42121:
    {
        returnValue = F("Ascheyer Str.");
        break;
    }
    case 42122:
    {
        returnValue = F("Aschfelder Str.");
        break;
    }
    case 42123:
    {
        returnValue = F("Aschgrund");
        break;
    }
    case 42124:
    {
        returnValue = F("Aschhausenstr.");
        break;
    }
    case 42125:
    {
        returnValue = F("Aschhauser Str.");
        break;
    }
    case 42126:
    {
        returnValue = F("Aschheimer Str.");
        break;
    }
    case 42127:
    {
        returnValue = F("Aschhofener Str.");
        break;
    }
    case 42128:
    {
        returnValue = F("Aschhofenstr.");
        break;
    }
    case 42129:
    {
        returnValue = F("Aschhooptwiete");
        break;
    }
    case 42130:
    {
        returnValue = F("Aschhoopweg");
        break;
    }
    case 42131:
    {
        returnValue = F("Aschhorn");
        break;
    }
    case 42132:
    {
        returnValue = F("Aschhorner Str.");
        break;
    }
    case 42133:
    {
        returnValue = F("Aschhäuser Str.");
        break;
    }
    case 42134:
    {
        returnValue = F("Aschingerstr.");
        break;
    }
    case 42135:
    {
        returnValue = F("Aschmahdweg");
        break;
    }
    case 42136:
    {
        returnValue = F("Aschmannstr.");
        break;
    }
    case 42137:
    {
        returnValue = F("Aschmattstr.");
        break;
    }
    case 42138:
    {
        returnValue = F("Aschoffbahn");
        break;
    }
    case 42139:
    {
        returnValue = F("Aschoffweg");
        break;
    }
    case 42140:
    {
        returnValue = F("Ascholdinger Str.");
        break;
    }
    case 42141:
    {
        returnValue = F("Ascholtshausen");
        break;
    }
    case 42142:
    {
        returnValue = F("Aschopsberg");
        break;
    }
    case 42143:
    {
        returnValue = F("Aschwardener Str.");
        break;
    }
    case 42144:
    {
        returnValue = F("Asdonkshofstr.");
        break;
    }
    case 42145:
    {
        returnValue = F("Aselage");
        break;
    }
    case 42146:
    {
        returnValue = F("Aselebener Weg");
        break;
    }
    case 42147:
    {
        returnValue = F("Aseler Str.");
        break;
    }
    case 42148:
    {
        returnValue = F("Asem Hauptweg");
        break;
    }
    case 42149:
    {
        returnValue = F("Asemisser Allee");
        break;
    }
    case 42150:
    {
        returnValue = F("Asenbach");
        break;
    }
    case 42151:
    {
        returnValue = F("Asenbachstr.");
        break;
    }
    case 42152:
    {
        returnValue = F("Asendorfer Str.");
        break;
    }
    case 42153:
    {
        returnValue = F("Asenfeld");
        break;
    }
    case 42154:
    {
        returnValue = F("Asenham");
        break;
    }
    case 42155:
    {
        returnValue = F("Asenhamer Str.");
        break;
    }
    case 42156:
    {
        returnValue = F("Asenhamer Weg");
        break;
    }
    case 42157:
    {
        returnValue = F("Asenkofen");
        break;
    }
    case 42158:
    {
        returnValue = F("Asfeldstr.");
        break;
    }
    case 42159:
    {
        returnValue = F("Asham");
        break;
    }
    case 42160:
    {
        returnValue = F("Ashamer Weg");
        break;
    }
    case 42161:
    {
        returnValue = F("Ashausener Str.");
        break;
    }
    case 42162:
    {
        returnValue = F("Asiatischer Garten");
        break;
    }
    case 42163:
    {
        returnValue = F("Asigweg");
        break;
    }
    case 42164:
    {
        returnValue = F("Asing");
        break;
    }
    case 42165:
    {
        returnValue = F("Asinger Weg");
        break;
    }
    case 42166:
    {
        returnValue = F("Askampstr.");
        break;
    }
    case 42167:
    {
        returnValue = F("Askaniaweg");
        break;
    }
    case 42168:
    {
        returnValue = F("Askanierweg");
        break;
    }
    case 42169:
    {
        returnValue = F("Askanische Str.");
        break;
    }
    case 42170:
    {
        returnValue = F("Askenleite");
        break;
    }
    case 42171:
    {
        returnValue = F("Asker Str.");
        break;
    }
    case 42172:
    {
        returnValue = F("Asklepiosstr.");
        break;
    }
    case 42173:
    {
        returnValue = F("Askoppel");
        break;
    }
    case 42174:
    {
        returnValue = F("Aslage");
        break;
    }
    case 42175:
    {
        returnValue = F("Aslager Str.");
        break;
    }
    case 42176:
    {
        returnValue = F("Asmai");
        break;
    }
    case 42177:
    {
        returnValue = F("Asmannskotten");
        break;
    }
    case 42178:
    {
        returnValue = F("Asmus-Carstens-Hag");
        break;
    }
    case 42179:
    {
        returnValue = F("Asmus-Remmer-Weg");
        break;
    }
    case 42180:
    {
        returnValue = F("Asmus-Schneise");
        break;
    }
    case 42181:
    {
        returnValue = F("Asmusrain");
        break;
    }
    case 42182:
    {
        returnValue = F("Asmussenstr.");
        break;
    }
    case 42183:
    {
        returnValue = F("Asmusstedt");
        break;
    }
    case 42184:
    {
        returnValue = F("Asmusweg");
        break;
    }
    case 42185:
    {
        returnValue = F("Asmückweg");
        break;
    }
    case 42186:
    {
        returnValue = F("Aspacher");
        break;
    }
    case 42187:
    {
        returnValue = F("Aspacher Str.");
        break;
    }
    case 42188:
    {
        returnValue = F("Aspacher Weg");
        break;
    }
    case 42189:
    {
        returnValue = F("Aspachhöfer Str.");
        break;
    }
    case 42190:
    {
        returnValue = F("Aspachstr.");
        break;
    }
    case 42191:
    {
        returnValue = F("Aspachweg");
        break;
    }
    case 42192:
    {
        returnValue = F("Aspastr.");
        break;
    }
    case 42193:
    {
        returnValue = F("Aspelallee");
        break;
    }
    case 42194:
    {
        returnValue = F("Aspeler Bachtal");
        break;
    }
    case 42195:
    {
        returnValue = F("Aspelerstr.");
        break;
    }
    case 42196:
    {
        returnValue = F("Aspeloh");
        break;
    }
    case 42197:
    {
        returnValue = F("Aspelohe");
        break;
    }
    case 42198:
    {
        returnValue = F("Aspelsgasse");
        break;
    }
    case 42199:
    {
        returnValue = F("Aspeltweg");
        break;
    }
    case 42200:
    {
        returnValue = F("Aspelweg");
        break;
    }
    case 42201:
    {
        returnValue = F("Aspelwiese");
        break;
    }
    case 42202:
    {
        returnValue = F("Aspen");
        break;
    }
    case 42203:
    {
        returnValue = F("Aspen Weg");
        break;
    }
    case 42204:
    {
        returnValue = F("Aspen-Colorado-Anlage");
        break;
    }
    case 42205:
    {
        returnValue = F("Aspenbodenschneise");
        break;
    }
    case 42206:
    {
        returnValue = F("Aspenbusch");
        break;
    }
    case 42207:
    {
        returnValue = F("Aspeneck");
        break;
    }
    case 42208:
    {
        returnValue = F("Aspenfeld");
        break;
    }
    case 42209:
    {
        returnValue = F("Aspenhag-Schneise");
        break;
    }
    case 42210:
    {
        returnValue = F("Aspenhalde");
        break;
    }
    case 42211:
    {
        returnValue = F("Aspenhauweg");
        break;
    }
    case 42212:
    {
        returnValue = F("Aspenheck");
        break;
    }
    case 42213:
    {
        returnValue = F("Aspenhecke");
        break;
    }
    case 42214:
    {
        returnValue = F("Aspenhof");
        break;
    }
    case 42215:
    {
        returnValue = F("Aspenhäuser");
        break;
    }
    case 42216:
    {
        returnValue = F("Aspenkehle");
        break;
    }
    case 42217:
    {
        returnValue = F("Aspenlochgrabenweg");
        break;
    }
    case 42218:
    {
        returnValue = F("Aspenlochweg");
        break;
    }
    case 42219:
    {
        returnValue = F("Aspenrainweg");
        break;
    }
    case 42220:
    {
        returnValue = F("Aspenschneise");
        break;
    }
    case 42221:
    {
        returnValue = F("Aspenschopfsträßchen");
        break;
    }
    case 42222:
    {
        returnValue = F("Aspenstr.");
        break;
    }
    case 42223:
    {
        returnValue = F("Aspenweg");
        break;
    }
    case 42224:
    {
        returnValue = F("Asperfeldweg");
        break;
    }
    case 42225:
    {
        returnValue = F("Asperger Str.");
        break;
    }
    case 42226:
    {
        returnValue = F("Asperger Weg");
        break;
    }
    case 42227:
    {
        returnValue = F("Aspergle");
        break;
    }
    case 42228:
    {
        returnValue = F("Asperglenstr.");
        break;
    }
    case 42229:
    {
        returnValue = F("Aspergstr.");
        break;
    }
    case 42230:
    {
        returnValue = F("Aspergweg");
        break;
    }
    case 42231:
    {
        returnValue = F("Aspergäßchen");
        break;
    }
    case 42232:
    {
        returnValue = F("Asperhorner Weg");
        break;
    }
    case 42233:
    {
        returnValue = F("Asperkamp");
        break;
    }
    case 42234:
    {
        returnValue = F("Aspernstr.");
        break;
    }
    case 42235:
    {
        returnValue = F("Aspernweg");
        break;
    }
    case 42236:
    {
        returnValue = F("Asperreutherweg");
        break;
    }
    case 42237:
    {
        returnValue = F("Aspertsham");
        break;
    }
    case 42238:
    {
        returnValue = F("Asperweg");
        break;
    }
    case 42239:
    {
        returnValue = F("Aspeweg");
        break;
    }
    case 42240:
    {
        returnValue = F("Asphalweg");
        break;
    }
    case 42241:
    {
        returnValue = F("Asphenmühle");
        break;
    }
    case 42242:
    {
        returnValue = F("Aspher Str.");
        break;
    }
    case 42243:
    {
        returnValue = F("Aspich Klamm");
        break;
    }
    case 42244:
    {
        returnValue = F("Aspich Klamm (D1/D2/D4)");
        break;
    }
    case 42245:
    {
        returnValue = F("Aspichlerweg");
        break;
    }
    case 42246:
    {
        returnValue = F("Aspichstr.");
        break;
    }
    case 42247:
    {
        returnValue = F("Aspisheimer Str.");
        break;
    }
    case 42248:
    {
        returnValue = F("Aspisheimer Weg");
        break;
    }
    case 42249:
    {
        returnValue = F("Aspweg");
        break;
    }
    case 42250:
    {
        returnValue = F("Assamstadter Str.");
        break;
    }
    case 42251:
    {
        returnValue = F("Assamstadter Weg");
        break;
    }
    case 42252:
    {
        returnValue = F("Assar-Gabrielsson-Str.");
        break;
    }
    case 42253:
    {
        returnValue = F("Assbachstr.");
        break;
    }
    case 42254:
    {
        returnValue = F("Assbrook");
        break;
    }
    case 42255:
    {
        returnValue = F("Asse");
        break;
    }
    case 42256:
    {
        returnValue = F("Asseblick");
        break;
    }
    case 42257:
    {
        returnValue = F("Asseburger Str.");
        break;
    }
    case 42258:
    {
        returnValue = F("Assel");
        break;
    }
    case 42259:
    {
        returnValue = F("Asseler Außendeich");
        break;
    }
    case 42260:
    {
        returnValue = F("Asseler Deichstr.");
        break;
    }
    case 42261:
    {
        returnValue = F("Asseler Feldstr.");
        break;
    }
    case 42262:
    {
        returnValue = F("Asseler Hafenstr.");
        break;
    }
    case 42263:
    {
        returnValue = F("Asseler Str.");
        break;
    }
    case 42264:
    {
        returnValue = F("Asselermoor");
        break;
    }
    case 42265:
    {
        returnValue = F("Asselersand");
        break;
    }
    case 42266:
    {
        returnValue = F("Asselfinger Str.");
        break;
    }
    case 42267:
    {
        returnValue = F("Asselfinger Weg");
        break;
    }
    case 42268:
    {
        returnValue = F("Asselheimer Str.");
        break;
    }
    case 42269:
    {
        returnValue = F("Asselheimer Weg");
        break;
    }
    case 42270:
    {
        returnValue = F("Asselsteinstr.");
        break;
    }
    case 42271:
    {
        returnValue = F("Asselweg");
        break;
    }
    case 42272:
    {
        returnValue = F("Assenbucher Str.");
        break;
    }
    case 42273:
    {
        returnValue = F("Assendorfer Weg");
        break;
    }
    case 42274:
    {
        returnValue = F("Assenheimer Str.");
        break;
    }
    case 42275:
    {
        returnValue = F("Assenheimer Weg");
        break;
    }
    case 42276:
    {
        returnValue = F("Assenkoppeln");
        break;
    }
    case 42277:
    {
        returnValue = F("Assessorenweg");
        break;
    }
    case 42278:
    {
        returnValue = F("Assessorstr.");
        break;
    }
    case 42279:
    {
        returnValue = F("Assestr.");
        break;
    }
    case 42280:
    {
        returnValue = F("Asseweg");
        break;
    }
    case 42281:
    {
        returnValue = F("Assulzer Hof");
        break;
    }
    case 42282:
    {
        returnValue = F("Assulzer Str.");
        break;
    }
    case 42283:
    {
        returnValue = F("Assumstadt");
        break;
    }
    case 42284:
    {
        returnValue = F("Ast");
        break;
    }
    case 42285:
    {
        returnValue = F("Astede");
        break;
    }
    case 42286:
    {
        returnValue = F("Asten");
        break;
    }
    case 42287:
    {
        returnValue = F("Astenweg");
        break;
    }
    case 42288:
    {
        returnValue = F("Aster Str.");
        break;
    }
    case 42289:
    {
        returnValue = F("Asterbacherweg");
        break;
    }
    case 42290:
    {
        returnValue = F("Asterloh");
        break;
    }
    case 42291:
    {
        returnValue = F("Asterlohweg");
        break;
    }
    case 42292:
    {
        returnValue = F("Asterngasse");
        break;
    }
    case 42293:
    {
        returnValue = F("Asternhof");
        break;
    }
    case 42294:
    {
        returnValue = F("Asternplatz");
        break;
    }
    case 42295:
    {
        returnValue = F("Asternring");
        break;
    }
    case 42296:
    {
        returnValue = F("Asternstr.");
        break;
    }
    case 42297:
    {
        returnValue = F("Asternweg");
        break;
    }
    case 42298:
    {
        returnValue = F("Asterstr.");
        break;
    }
    case 42299:
    {
        returnValue = F("Asterweg");
        break;
    }
    case 42300:
    {
        returnValue = F("Asterwisch");
        break;
    }
    case 42301:
    {
        returnValue = F("Astheimer Str.");
        break;
    }
    case 42302:
    {
        returnValue = F("Astheimer Weg");
        break;
    }
    case 42303:
    {
        returnValue = F("Asthofertränk-Schneise");
        break;
    }
    case 42304:
    {
        returnValue = F("Asthoop");
        break;
    }
    case 42305:
    {
        returnValue = F("Astiallee");
        break;
    }
    case 42306:
    {
        returnValue = F("Astrachan");
        break;
    }
    case 42307:
    {
        returnValue = F("Astrastr.");
        break;
    }
    case 42308:
    {
        returnValue = F("Astreastr.");
        break;
    }
    case 42309:
    {
        returnValue = F("Astrid-Lindgren-Park");
        break;
    }
    case 42310:
    {
        returnValue = F("Astrid-Lindgren-Platz");
        break;
    }
    case 42311:
    {
        returnValue = F("Astrid-Lindgren-Ring");
        break;
    }
    case 42312:
    {
        returnValue = F("Astrid-Lindgren-Str.");
        break;
    }
    case 42313:
    {
        returnValue = F("Astrid-Lindgren-Weg");
        break;
    }
    case 42314:
    {
        returnValue = F("Astropfad");
        break;
    }
    case 42315:
    {
        returnValue = F("Astruper Str.");
        break;
    }
    case 42316:
    {
        returnValue = F("Astruper Weg");
        break;
    }
    case 42317:
    {
        returnValue = F("Aststr.");
        break;
    }
    case 42318:
    {
        returnValue = F("Asturenweg");
        break;
    }
    case 42319:
    {
        returnValue = F("Astweg");
        break;
    }
    case 42320:
    {
        returnValue = F("Astwiesen");
        break;
    }
    case 42321:
    {
        returnValue = F("Asweilerweg");
        break;
    }
    case 42322:
    {
        returnValue = F("Aswinstr.");
        break;
    }
    case 42323:
    {
        returnValue = F("Asylstr.");
        break;
    }
    case 42324:
    {
        returnValue = F("Ataşehir-Park");
        break;
    }
    case 42325:
    {
        returnValue = F("Atchenbach");
        break;
    }
    case 42326:
    {
        returnValue = F("Atdorf");
        break;
    }
    case 42327:
    {
        returnValue = F("Atem-Weg");
        break;
    }
    case 42328:
    {
        returnValue = F("Ateritzer Gartenstr.");
        break;
    }
    case 42329:
    {
        returnValue = F("Ateritzer Lindenstr.");
        break;
    }
    case 42330:
    {
        returnValue = F("Ath");
        break;
    }
    case 42331:
    {
        returnValue = F("Athanasius-Kircher-Str.");
        break;
    }
    case 42332:
    {
        returnValue = F("Athanasius-Miller-Str.");
        break;
    }
    case 42333:
    {
        returnValue = F("Athener Str.");
        break;
    }
    case 42334:
    {
        returnValue = F("Athener Weg");
        break;
    }
    case 42335:
    {
        returnValue = F("Athenstr.");
        break;
    }
    case 42336:
    {
        returnValue = F("Ather Str.");
        break;
    }
    case 42337:
    {
        returnValue = F("Athis-Mons-Anlage");
        break;
    }
    case 42338:
    {
        returnValue = F("Athletenweg");
        break;
    }
    case 42339:
    {
        returnValue = F("Atlantastr.");
        break;
    }
    case 42340:
    {
        returnValue = F("Atlantikstr.");
        break;
    }
    case 42341:
    {
        returnValue = F("Atoll-Arkaden");
        break;
    }
    case 42342:
    {
        returnValue = F("Atomgasse");
        break;
    }
    case 42343:
    {
        returnValue = F("Atomill");
        break;
    }
    case 42344:
    {
        returnValue = F("Atomstr.");
        break;
    }
    case 42345:
    {
        returnValue = F("Atostr.");
        break;
    }
    case 42346:
    {
        returnValue = F("Atrium");
        break;
    }
    case 42347:
    {
        returnValue = F("Attelsteg");
        break;
    }
    case 42348:
    {
        returnValue = F("Attelthal");
        break;
    }
    case 42349:
    {
        returnValue = F("Attelweg");
        break;
    }
    case 42350:
    {
        returnValue = F("Attenastr.");
        break;
    }
    case 42351:
    {
        returnValue = F("Attenbachstr.");
        break;
    }
    case 42352:
    {
        returnValue = F("Attenberger Feld");
        break;
    }
    case 42353:
    {
        returnValue = F("Attenbergstr.");
        break;
    }
    case 42354:
    {
        returnValue = F("Attenbühlweg");
        break;
    }
    case 42355:
    {
        returnValue = F("Attendorf");
        break;
    }
    case 42356:
    {
        returnValue = F("Attendorner-Tor-Str.");
        break;
    }
    case 42357:
    {
        returnValue = F("Attenfelder Weg");
        break;
    }
    case 42358:
    {
        returnValue = F("Attenhamer Str.");
        break;
    }
    case 42359:
    {
        returnValue = F("Attenhausen");
        break;
    }
    case 42360:
    {
        returnValue = F("Attenhauser Str.");
        break;
    }
    case 42361:
    {
        returnValue = F("Attenhofener Str.");
        break;
    }
    case 42362:
    {
        returnValue = F("Attenhofer Str.");
        break;
    }
    case 42363:
    {
        returnValue = F("Attenkam");
        break;
    }
    case 42364:
    {
        returnValue = F("Attenkamer Str.");
        break;
    }
    case 42365:
    {
        returnValue = F("Attenmoos");
        break;
    }
    case 42366:
    {
        returnValue = F("Attentalstr.");
        break;
    }
    case 42367:
    {
        returnValue = F("Attenweiler Str.");
        break;
    }
    case 42368:
    {
        returnValue = F("Attenzeller Str.");
        break;
    }
    case 42369:
    {
        returnValue = F("Atternweg");
        break;
    }
    case 42370:
    {
        returnValue = F("Atterstr.");
        break;
    }
    case 42371:
    {
        returnValue = F("Attichweg");
        break;
    }
    case 42372:
    {
        returnValue = F("Attigfelder");
        break;
    }
    case 42373:
    {
        returnValue = F("Attigstr.");
        break;
    }
    case 42374:
    {
        returnValue = F("Attigweg");
        break;
    }
    case 42375:
    {
        returnValue = F("Attilastr.");
        break;
    }
    case 42376:
    {
        returnValue = F("Atting");
        break;
    }
    case 42377:
    {
        returnValue = F("Attinger Str.");
        break;
    }
    case 42378:
    {
        returnValue = F("Attinger Weg");
        break;
    }
    case 42379:
    {
        returnValue = F("Attlesee");
        break;
    }
    case 42380:
    {
        returnValue = F("Attlisberg");
        break;
    }
    case 42381:
    {
        returnValue = F("Attostr.");
        break;
    }
    case 42382:
    {
        returnValue = F("Attoweg");
        break;
    }
    case 42383:
    {
        returnValue = F("Atzbacher Str.");
        break;
    }
    case 42384:
    {
        returnValue = F("Atzbachstr.");
        break;
    }
    case 42385:
    {
        returnValue = F("Atzberg");
        break;
    }
    case 42386:
    {
        returnValue = F("Atzel");
        break;
    }
    case 42387:
    {
        returnValue = F("Atzelberg");
        break;
    }
    case 42388:
    {
        returnValue = F("Atzelgifter Mühle");
        break;
    }
    case 42389:
    {
        returnValue = F("Atzelhof");
        break;
    }
    case 42390:
    {
        returnValue = F("Atzelsberg");
        break;
    }
    case 42391:
    {
        returnValue = F("Atzelsberger Steige");
        break;
    }
    case 42392:
    {
        returnValue = F("Atzelsberger Str.");
        break;
    }
    case 42393:
    {
        returnValue = F("Atzeltrift");
        break;
    }
    case 42394:
    {
        returnValue = F("Atzelweg");
        break;
    }
    case 42395:
    {
        returnValue = F("Atzemer Str.");
        break;
    }
    case 42396:
    {
        returnValue = F("Atzenbach");
        break;
    }
    case 42397:
    {
        returnValue = F("Atzenberg");
        break;
    }
    case 42398:
    {
        returnValue = F("Atzenberger Str.");
        break;
    }
    case 42399:
    {
        returnValue = F("Atzenbergweg");
        break;
    }
    case 42400:
    {
        returnValue = F("Atzendorfer Str.");
        break;
    }
    case 42401:
    {
        returnValue = F("Atzendorfer Weg");
        break;
    }
    case 42402:
    {
        returnValue = F("Atzenheimweg");
        break;
    }
    case 42403:
    {
        returnValue = F("Atzenhof");
        break;
    }
    case 42404:
    {
        returnValue = F("Atzenroder Kirchweg");
        break;
    }
    case 42405:
    {
        returnValue = F("Atzenstr.");
        break;
    }
    case 42406:
    {
        returnValue = F("Atzenweg");
        break;
    }
    case 42407:
    {
        returnValue = F("Atzenwengertweg");
        break;
    }
    case 42408:
    {
        returnValue = F("Atzerode");
        break;
    }
    case 42409:
    {
        returnValue = F("Atzesberg");
        break;
    }
    case 42410:
    {
        returnValue = F("Atzhäuser Str.");
        break;
    }
    case 42411:
    {
        returnValue = F("Atzinger Allee");
        break;
    }
    case 42412:
    {
        returnValue = F("Atzinger Str.");
        break;
    }
    case 42413:
    {
        returnValue = F("Atzmannsberg");
        break;
    }
    case 42414:
    {
        returnValue = F("Atzmannsricht");
        break;
    }
    case 42415:
    {
        returnValue = F("Atzmannsrichter Str.");
        break;
    }
    case 42416:
    {
        returnValue = F("Atzmansberg");
        break;
    }
    case 42417:
    {
        returnValue = F("Au");
        break;
    }
    case 42418:
    {
        returnValue = F("Au im Wald");
        break;
    }
    case 42419:
    {
        returnValue = F("Au vorm Wald");
        break;
    }
    case 42420:
    {
        returnValue = F("Au-Brücke");
        break;
    }
    case 42421:
    {
        returnValue = F("Auacker");
        break;
    }
    case 42422:
    {
        returnValue = F("Auackergasse");
        break;
    }
    case 42423:
    {
        returnValue = F("Auackerring");
        break;
    }
    case 42424:
    {
        returnValue = F("Auackerstr.");
        break;
    }
    case 42425:
    {
        returnValue = F("Auackerweg");
        break;
    }
    case 42426:
    {
        returnValue = F("Auangerstr.");
        break;
    }
    case 42427:
    {
        returnValue = F("Aubach");
        break;
    }
    case 42428:
    {
        returnValue = F("Aubachblick");
        break;
    }
    case 42429:
    {
        returnValue = F("Aubachbrücke");
        break;
    }
    case 42430:
    {
        returnValue = F("Aubachmühle");
        break;
    }
    case 42431:
    {
        returnValue = F("Aubachstr.");
        break;
    }
    case 42432:
    {
        returnValue = F("Aubachtalstr.");
        break;
    }
    case 42433:
    {
        returnValue = F("Aubachweg");
        break;
    }
    case 42434:
    {
        returnValue = F("Aubarg");
        break;
    }
    case 42435:
    {
        returnValue = F("Aubek");
        break;
    }
    case 42436:
    {
        returnValue = F("Aubenasstr.");
        break;
    }
    case 42437:
    {
        returnValue = F("Auber Dorfstr.");
        break;
    }
    case 42438:
    {
        returnValue = F("Auber Str.");
        break;
    }
    case 42439:
    {
        returnValue = F("Auber Weg");
        break;
    }
    case 42440:
    {
        returnValue = F("Auberg");
        break;
    }
    case 42441:
    {
        returnValue = F("Aubergenviller Allee");
        break;
    }
    case 42442:
    {
        returnValue = F("Auberger Str.");
        break;
    }
    case 42443:
    {
        returnValue = F("Aubergstr.");
        break;
    }
    case 42444:
    {
        returnValue = F("Aubergweg");
        break;
    }
    case 42445:
    {
        returnValue = F("Auberlenstr.");
        break;
    }
    case 42446:
    {
        returnValue = F("Aubernweg");
        break;
    }
    case 42447:
    {
        returnValue = F("Aubersbachstr.");
        break;
    }
    case 42448:
    {
        returnValue = F("Aubertweg");
        break;
    }
    case 42449:
    {
        returnValue = F("Aubignystr.");
        break;
    }
    case 42450:
    {
        returnValue = F("Aubinger Str.");
        break;
    }
    case 42451:
    {
        returnValue = F("Aubinger Weg");
        break;
    }
    case 42452:
    {
        returnValue = F("Aubingerstr.");
        break;
    }
    case 42453:
    {
        returnValue = F("Aublick");
        break;
    }
    case 42454:
    {
        returnValue = F("Aubohlhof");
        break;
    }
    case 42455:
    {
        returnValue = F("Aubohlweg");
        break;
    }
    case 42456:
    {
        returnValue = F("Aubrook");
        break;
    }
    case 42457:
    {
        returnValue = F("Aubruchsweg");
        break;
    }
    case 42458:
    {
        returnValue = F("Aubrücke");
        break;
    }
    case 42459:
    {
        returnValue = F("Aubstr.");
        break;
    }
    case 42460:
    {
        returnValue = F("Aubuck");
        break;
    }
    case 42461:
    {
        returnValue = F("Auburger Str.");
        break;
    }
    case 42462:
    {
        returnValue = F("Aubweg");
        break;
    }
    case 42463:
    {
        returnValue = F("Aubächleweg");
        break;
    }
    case 42464:
    {
        returnValue = F("Aubäcker");
        break;
    }
    case 42465:
    {
        returnValue = F("Auchhalderkopfweg");
        break;
    }
    case 42466:
    {
        returnValue = F("Auchhalderweg");
        break;
    }
    case 42467:
    {
        returnValue = F("Auchsesheimer Str.");
        break;
    }
    case 42468:
    {
        returnValue = F("Auchskopfstr.");
        break;
    }
    case 42469:
    {
        returnValue = F("Aucht");
        break;
    }
    case 42470:
    {
        returnValue = F("Auchten");
        break;
    }
    case 42471:
    {
        returnValue = F("Auchten Weg");
        break;
    }
    case 42472:
    {
        returnValue = F("Auchtenstr.");
        break;
    }
    case 42473:
    {
        returnValue = F("Auchtert");
        break;
    }
    case 42474:
    {
        returnValue = F("Auchtertgasse");
        break;
    }
    case 42475:
    {
        returnValue = F("Auchtertstr.");
        break;
    }
    case 42476:
    {
        returnValue = F("Auchterttalstr.");
        break;
    }
    case 42477:
    {
        returnValue = F("Auchtertweg");
        break;
    }
    case 42478:
    {
        returnValue = F("Auchtstr.");
        break;
    }
    case 42479:
    {
        returnValue = F("Auchtweg");
        break;
    }
    case 42480:
    {
        returnValue = F("Auchtweide");
        break;
    }
    case 42481:
    {
        returnValue = F("Auchtwiesen");
        break;
    }
    case 42482:
    {
        returnValue = F("Auckenroder Weg");
        break;
    }
    case 42483:
    {
        returnValue = F("Auckentalweg");
        break;
    }
    case 42484:
    {
        returnValue = F("Aud der Heid");
        break;
    }
    case 42485:
    {
        returnValue = F("Aud der Nauwiese");
        break;
    }
    case 42486:
    {
        returnValue = F("Audenhainer Str.");
        break;
    }
    case 42487:
    {
        returnValue = F("Auderather Str.");
        break;
    }
    case 42488:
    {
        returnValue = F("Audifaxstr.");
        break;
    }
    case 42489:
    {
        returnValue = F("Audigast");
        break;
    }
    case 42490:
    {
        returnValue = F("Audigaster Str.");
        break;
    }
    case 42491:
    {
        returnValue = F("Audobelring");
        break;
    }
    case 42492:
    {
        returnValue = F("Audorf");
        break;
    }
    case 42493:
    {
        returnValue = F("Audorfer Weg");
        break;
    }
    case 42494:
    {
        returnValue = F("Audre-Lorde-Str.");
        break;
    }
    case 42495:
    {
        returnValue = F("Aue");
        break;
    }
    case 42496:
    {
        returnValue = F("Aue-Dittersdorfer-Weg");
        break;
    }
    case 42497:
    {
        returnValue = F("Aue-Nord");
        break;
    }
    case 42498:
    {
        returnValue = F("Aue/Ottenshof");
        break;
    }
    case 42499:
    {
        returnValue = F("Aueblick");
        break;
    }
    case 42500:
    {
        returnValue = F("Auebrücke");
        break;
    }
    case 42501:
    {
        returnValue = F("Auedamm");
        break;
    }
    case 42502:
    {
        returnValue = F("Auedeich");
        break;
    }
    case 42503:
    {
        returnValue = F("Auefeld");
        break;
    }
    case 42504:
    {
        returnValue = F("Auegrund");
        break;
    }
    case 42505:
    {
        returnValue = F("Auekamp");
        break;
    }
    case 42506:
    {
        returnValue = F("Aueler Str.");
        break;
    }
    case 42507:
    {
        returnValue = F("Aueler Weg");
        break;
    }
    case 42508:
    {
        returnValue = F("Aueller Weg");
        break;
    }
    case 42509:
    {
        returnValue = F("Auelsgarten");
        break;
    }
    case 42510:
    {
        returnValue = F("Auelshag");
        break;
    }
    case 42511:
    {
        returnValue = F("Auelstr.");
        break;
    }
    case 42512:
    {
        returnValue = F("Auelsweg");
        break;
    }
    case 42513:
    {
        returnValue = F("Auelswiese");
        break;
    }
    case 42514:
    {
        returnValue = F("Auemühle");
        break;
    }
    case 42515:
    {
        returnValue = F("Auenallee");
        break;
    }
    case 42516:
    {
        returnValue = F("Auenbachstr.");
        break;
    }
    case 42517:
    {
        returnValue = F("Auenberg");
        break;
    }
    case 42518:
    {
        returnValue = F("Auenblick");
        break;
    }
    case 42519:
    {
        returnValue = F("Auenblickstr.");
        break;
    }
    case 42520:
    {
        returnValue = F("Auenbruch");
        break;
    }
    case 42521:
    {
        returnValue = F("Auenbühl");
        break;
    }
    case 42522:
    {
        returnValue = F("Auenbüttel");
        break;
    }
    case 42523:
    {
        returnValue = F("Auendorfer Steige");
        break;
    }
    case 42524:
    {
        returnValue = F("Auendorfer Str.");
        break;
    }
    case 42525:
    {
        returnValue = F("Auenecke");
        break;
    }
    case 42526:
    {
        returnValue = F("Auener Str.");
        break;
    }
    case 42527:
    {
        returnValue = F("Auener Weg");
        break;
    }
    case 42528:
    {
        returnValue = F("Auenfeld");
        break;
    }
    case 42529:
    {
        returnValue = F("Auenfeldweg");
        break;
    }
    case 42530:
    {
        returnValue = F("Auengartenstr.");
        break;
    }
    case 42531:
    {
        returnValue = F("Auengrund");
        break;
    }
    case 42532:
    {
        returnValue = F("Auenhainer Allee");
        break;
    }
    case 42533:
    {
        returnValue = F("Auenhainer Str.");
        break;
    }
    case 42534:
    {
        returnValue = F("Auenhausener Weg");
        break;
    }
    case 42535:
    {
        returnValue = F("Auenhauser Str.");
        break;
    }
    case 42536:
    {
        returnValue = F("Auenhauser Weg");
        break;
    }
    case 42537:
    {
        returnValue = F("Auenheim");
        break;
    }
    case 42538:
    {
        returnValue = F("Auenland");
        break;
    }
    case 42539:
    {
        returnValue = F("Auenloch");
        break;
    }
    case 42540:
    {
        returnValue = F("Auenpark");
        break;
    }
    case 42541:
    {
        returnValue = F("Auenplatz");
        break;
    }
    case 42542:
    {
        returnValue = F("Auenrand");
        break;
    }
    case 42543:
    {
        returnValue = F("Auenring");
        break;
    }
    case 42544:
    {
        returnValue = F("Auensbach");
        break;
    }
    case 42545:
    {
        returnValue = F("Auensiedlung");
        break;
    }
    case 42546:
    {
        returnValue = F("Auensteig");
        break;
    }
    case 42547:
    {
        returnValue = F("Auensteiner Str.");
        break;
    }
    case 42548:
    {
        returnValue = F("Auenstr.");
        break;
    }
    case 42549:
    {
        returnValue = F("Auental");
        break;
    }
    case 42550:
    {
        returnValue = F("Auenweg");
        break;
    }
    case 42551:
    {
        returnValue = F("Auenwiese");
        break;
    }
    case 42552:
    {
        returnValue = F("Auenwinkel");
        break;
    }
    case 42553:
    {
        returnValue = F("Auepark");
        break;
    }
    case 42554:
    {
        returnValue = F("Auepfad");
        break;
    }
    case 42555:
    {
        returnValue = F("Auer Feldweg");
        break;
    }
    case 42556:
    {
        returnValue = F("Auer Kirchweg");
        break;
    }
    case 42557:
    {
        returnValue = F("Auer Str.");
        break;
    }
    case 42558:
    {
        returnValue = F("Auer Talstr.");
        break;
    }
    case 42559:
    {
        returnValue = F("Auer Weg");
        break;
    }
    case 42560:
    {
        returnValue = F("Auerbach");
        break;
    }
    case 42561:
    {
        returnValue = F("Auerbach Str.");
        break;
    }
    case 42562:
    {
        returnValue = F("Auerbacher Str.");
        break;
    }
    case 42563:
    {
        returnValue = F("Auerbacher Weg");
        break;
    }
    case 42564:
    {
        returnValue = F("Auerbacherberg");
        break;
    }
    case 42565:
    {
        returnValue = F("Auerbacherweg");
        break;
    }
    case 42566:
    {
        returnValue = F("Auerbachs Hof");
        break;
    }
    case 42567:
    {
        returnValue = F("Auerbachshof");
        break;
    }
    case 42568:
    {
        returnValue = F("Auerbachstr.");
        break;
    }
    case 42569:
    {
        returnValue = F("Auerbachweg");
        break;
    }
    case 42570:
    {
        returnValue = F("Auerberg");
        break;
    }
    case 42571:
    {
        returnValue = F("Auerbergskopfweg");
        break;
    }
    case 42572:
    {
        returnValue = F("Auerbergstr.");
        break;
    }
    case 42573:
    {
        returnValue = F("Auerbergweg");
        break;
    }
    case 42574:
    {
        returnValue = F("Auerburgstr.");
        break;
    }
    case 42575:
    {
        returnValue = F("Auerdörfl");
        break;
    }
    case 42576:
    {
        returnValue = F("Auergasse");
        break;
    }
    case 42577:
    {
        returnValue = F("Auerhahnbalz");
        break;
    }
    case 42578:
    {
        returnValue = F("Auerhahnbergweg");
        break;
    }
    case 42579:
    {
        returnValue = F("Auerhahndamm");
        break;
    }
    case 42580:
    {
        returnValue = F("Auerhahnköpfleweg");
        break;
    }
    case 42581:
    {
        returnValue = F("Auerhahnloipe");
        break;
    }
    case 42582:
    {
        returnValue = F("Auerhahnpfad");
        break;
    }
    case 42583:
    {
        returnValue = F("Auerhahnring");
        break;
    }
    case 42584:
    {
        returnValue = F("Auerhahnsberg");
        break;
    }
    case 42585:
    {
        returnValue = F("Auerhahnschleife");
        break;
    }
    case 42586:
    {
        returnValue = F("Auerhahnschneise");
        break;
    }
    case 42587:
    {
        returnValue = F("Auerhahnstr.");
        break;
    }
    case 42588:
    {
        returnValue = F("Auerhahnweg");
        break;
    }
    case 42589:
    {
        returnValue = F("Auerhammerstr.");
        break;
    }
    case 42590:
    {
        returnValue = F("Auerhanweg");
        break;
    }
    case 42591:
    {
        returnValue = F("Auering");
        break;
    }
    case 42592:
    {
        returnValue = F("Auerkieler Str.");
        break;
    }
    case 42593:
    {
        returnValue = F("Auerlandstr.");
        break;
    }
    case 42594:
    {
        returnValue = F("Auermühle");
        break;
    }
    case 42595:
    {
        returnValue = F("Auermühler Weg");
        break;
    }
    case 42596:
    {
        returnValue = F("Auerner Weg");
        break;
    }
    case 42597:
    {
        returnValue = F("Auernheimer Str.");
        break;
    }
    case 42598:
    {
        returnValue = F("Auernheimer Weg");
        break;
    }
    case 42599:
    {
        returnValue = F("Auernloh");
        break;
    }
    case 42600:
    {
        returnValue = F("Auerochsen");
        break;
    }
    case 42601:
    {
        returnValue = F("Auerose");
        break;
    }
    case 42602:
    {
        returnValue = F("Auerrain");
        break;
    }
    case 42603:
    {
        returnValue = F("Auersbergstr.");
        break;
    }
    case 42604:
    {
        returnValue = F("Auersbergweg");
        break;
    }
    case 42605:
    {
        returnValue = F("Auersburgstr.");
        break;
    }
    case 42606:
    {
        returnValue = F("Auerschmied");
        break;
    }
    case 42607:
    {
        returnValue = F("Auerschützer Str.");
        break;
    }
    case 42608:
    {
        returnValue = F("Auersmacherstr.");
        break;
    }
    case 42609:
    {
        returnValue = F("Auerspergstr.");
        break;
    }
    case 42610:
    {
        returnValue = F("Auerspitzstr.");
        break;
    }
    case 42611:
    {
        returnValue = F("Auerstedter Hauptstr.");
        break;
    }
    case 42612:
    {
        returnValue = F("Auerstedter Mühlstr.");
        break;
    }
    case 42613:
    {
        returnValue = F("Auerstedter Obergasse");
        break;
    }
    case 42614:
    {
        returnValue = F("Auerstedter Siedlung");
        break;
    }
    case 42615:
    {
        returnValue = F("Auerstedter Ziegeleistr.");
        break;
    }
    case 42616:
    {
        returnValue = F("Auerstr.");
        break;
    }
    case 42617:
    {
        returnValue = F("Auertalstr.");
        break;
    }
    case 42618:
    {
        returnValue = F("Auerwangstr.");
        break;
    }
    case 42619:
    {
        returnValue = F("Auerweg");
        break;
    }
    case 42620:
    {
        returnValue = F("Auerwildweg");
        break;
    }
    case 42621:
    {
        returnValue = F("Auestade");
        break;
    }
    case 42622:
    {
        returnValue = F("Auestieg");
        break;
    }
    case 42623:
    {
        returnValue = F("Auestr.");
        break;
    }
    case 42624:
    {
        returnValue = F("Auetal");
        break;
    }
    case 42625:
    {
        returnValue = F("Auetalstr.");
        break;
    }
    case 42626:
    {
        returnValue = F("Auetalweg");
        break;
    }
    case 42627:
    {
        returnValue = F("Aueweg");
        break;
    }
    case 42628:
    {
        returnValue = F("Auf Abert");
        break;
    }
    case 42629:
    {
        returnValue = F("Auf Aderich");
        break;
    }
    case 42630:
    {
        returnValue = F("Auf Aelenpesch");
        break;
    }
    case 42631:
    {
        returnValue = F("Auf Ahlenbuch");
        break;
    }
    case 42632:
    {
        returnValue = F("Auf Aigen");
        break;
    }
    case 42633:
    {
        returnValue = F("Auf Alland");
        break;
    }
    case 42634:
    {
        returnValue = F("Auf Allmesch");
        break;
    }
    case 42635:
    {
        returnValue = F("Auf Altschloß");
        break;
    }
    case 42636:
    {
        returnValue = F("Auf Alzert");
        break;
    }
    case 42637:
    {
        returnValue = F("Auf Arthof");
        break;
    }
    case 42638:
    {
        returnValue = F("Auf Arxt");
        break;
    }
    case 42639:
    {
        returnValue = F("Auf Bach");
        break;
    }
    case 42640:
    {
        returnValue = F("Auf Bachert");
        break;
    }
    case 42641:
    {
        returnValue = F("Auf Backes");
        break;
    }
    case 42642:
    {
        returnValue = F("Auf Bammerst");
        break;
    }
    case 42643:
    {
        returnValue = F("Auf Bandels");
        break;
    }
    case 42644:
    {
        returnValue = F("Auf Banneich");
        break;
    }
    case 42645:
    {
        returnValue = F("Auf Banneid");
        break;
    }
    case 42646:
    {
        returnValue = F("Auf Bauerhaus");
        break;
    }
    case 42647:
    {
        returnValue = F("Auf Baul");
        break;
    }
    case 42648:
    {
        returnValue = F("Auf Baulers");
        break;
    }
    case 42649:
    {
        returnValue = F("Auf Becheln");
        break;
    }
    case 42650:
    {
        returnValue = F("Auf Beenzelt");
        break;
    }
    case 42651:
    {
        returnValue = F("Auf Beilsteinchen");
        break;
    }
    case 42652:
    {
        returnValue = F("Auf Beiwenacker");
        break;
    }
    case 42653:
    {
        returnValue = F("Auf Belgenhöchst");
        break;
    }
    case 42654:
    {
        returnValue = F("Auf Bennfeld");
        break;
    }
    case 42655:
    {
        returnValue = F("Auf Berken");
        break;
    }
    case 42656:
    {
        returnValue = F("Auf Beuel");
        break;
    }
    case 42657:
    {
        returnValue = F("Auf Beul");
        break;
    }
    case 42658:
    {
        returnValue = F("Auf Bickelstein");
        break;
    }
    case 42659:
    {
        returnValue = F("Auf Biedenhof");
        break;
    }
    case 42660:
    {
        returnValue = F("Auf Bindt");
        break;
    }
    case 42661:
    {
        returnValue = F("Auf Binken");
        break;
    }
    case 42662:
    {
        returnValue = F("Auf Binsen Nück");
        break;
    }
    case 42663:
    {
        returnValue = F("Auf Birk");
        break;
    }
    case 42664:
    {
        returnValue = F("Auf Birken");
        break;
    }
    case 42665:
    {
        returnValue = F("Auf Birket");
        break;
    }
    case 42666:
    {
        returnValue = F("Auf Bobüsch");
        break;
    }
    case 42667:
    {
        returnValue = F("Auf Bockelter");
        break;
    }
    case 42668:
    {
        returnValue = F("Auf Boesten");
        break;
    }
    case 42669:
    {
        returnValue = F("Auf Bollen");
        break;
    }
    case 42670:
    {
        returnValue = F("Auf Bornfeld");
        break;
    }
    case 42671:
    {
        returnValue = F("Auf Botteldorr");
        break;
    }
    case 42672:
    {
        returnValue = F("Auf Brandenbüsch");
        break;
    }
    case 42673:
    {
        returnValue = F("Auf Braunsfeld");
        break;
    }
    case 42674:
    {
        returnValue = F("Auf Braunshell");
        break;
    }
    case 42675:
    {
        returnValue = F("Auf Breiten");
        break;
    }
    case 42676:
    {
        returnValue = F("Auf Breitheck");
        break;
    }
    case 42677:
    {
        returnValue = F("Auf Briddel");
        break;
    }
    case 42678:
    {
        returnValue = F("Auf Brockhausen");
        break;
    }
    case 42679:
    {
        returnValue = F("Auf Brohl");
        break;
    }
    case 42680:
    {
        returnValue = F("Auf Bruch");
        break;
    }
    case 42681:
    {
        returnValue = F("Auf Brüchelhöh");
        break;
    }
    case 42682:
    {
        returnValue = F("Auf Brühl");
        break;
    }
    case 42683:
    {
        returnValue = F("Auf Buch");
        break;
    }
    case 42684:
    {
        returnValue = F("Auf Buchen");
        break;
    }
    case 42685:
    {
        returnValue = F("Auf Bulz");
        break;
    }
    case 42686:
    {
        returnValue = F("Auf Burggarten");
        break;
    }
    case 42687:
    {
        returnValue = F("Auf Burghöh");
        break;
    }
    case 42688:
    {
        returnValue = F("Auf Buschacker");
        break;
    }
    case 42689:
    {
        returnValue = F("Auf Bäderich");
        break;
    }
    case 42690:
    {
        returnValue = F("Auf Böhms Garten");
        break;
    }
    case 42691:
    {
        returnValue = F("Auf Bühl");
        break;
    }
    case 42692:
    {
        returnValue = F("Auf Cales");
        break;
    }
    case 42693:
    {
        returnValue = F("Auf Cassel");
        break;
    }
    case 42694:
    {
        returnValue = F("Auf Dalen");
        break;
    }
    case 42695:
    {
        returnValue = F("Auf Daubhaus");
        break;
    }
    case 42696:
    {
        returnValue = F("Auf Debert");
        break;
    }
    case 42697:
    {
        returnValue = F("Auf Den Dungen");
        break;
    }
    case 42698:
    {
        returnValue = F("Auf Der Lehmkaute");
        break;
    }
    case 42699:
    {
        returnValue = F("Auf Der Steinkaut");
        break;
    }
    case 42700:
    {
        returnValue = F("Auf Der Werft");
        break;
    }
    case 42701:
    {
        returnValue = F("Auf Dick Heck");
        break;
    }
    case 42702:
    {
        returnValue = F("Auf Dohnschet");
        break;
    }
    case 42703:
    {
        returnValue = F("Auf Dompen");
        break;
    }
    case 42704:
    {
        returnValue = F("Auf Dornbruch");
        break;
    }
    case 42705:
    {
        returnValue = F("Auf Dornwies");
        break;
    }
    case 42706:
    {
        returnValue = F("Auf Dragoner");
        break;
    }
    case 42707:
    {
        returnValue = F("Auf Drei Eichen");
        break;
    }
    case 42708:
    {
        returnValue = F("Auf Dreimorgen");
        break;
    }
    case 42709:
    {
        returnValue = F("Auf Dungen");
        break;
    }
    case 42710:
    {
        returnValue = F("Auf Ebenhöh");
        break;
    }
    case 42711:
    {
        returnValue = F("Auf Egerten");
        break;
    }
    case 42712:
    {
        returnValue = F("Auf Eich");
        break;
    }
    case 42713:
    {
        returnValue = F("Auf Eilen Pesch");
        break;
    }
    case 42714:
    {
        returnValue = F("Auf Eisen");
        break;
    }
    case 42715:
    {
        returnValue = F("Auf Eitzenpütz");
        break;
    }
    case 42716:
    {
        returnValue = F("Auf Ellenborn");
        break;
    }
    case 42717:
    {
        returnValue = F("Auf Engelen");
        break;
    }
    case 42718:
    {
        returnValue = F("Auf Engelspiel");
        break;
    }
    case 42719:
    {
        returnValue = F("Auf Engelsrech");
        break;
    }
    case 42720:
    {
        returnValue = F("Auf Erden");
        break;
    }
    case 42721:
    {
        returnValue = F("Auf Erkelreg");
        break;
    }
    case 42722:
    {
        returnValue = F("Auf Esenlechen");
        break;
    }
    case 42723:
    {
        returnValue = F("Auf Exenbaul");
        break;
    }
    case 42724:
    {
        returnValue = F("Auf Faller");
        break;
    }
    case 42725:
    {
        returnValue = F("Auf Fallert");
        break;
    }
    case 42726:
    {
        returnValue = F("Auf Fasel");
        break;
    }
    case 42727:
    {
        returnValue = F("Auf Ferbel");
        break;
    }
    case 42728:
    {
        returnValue = F("Auf Firsten");
        break;
    }
    case 42729:
    {
        returnValue = F("Auf Flör");
        break;
    }
    case 42730:
    {
        returnValue = F("Auf Frau Holl");
        break;
    }
    case 42731:
    {
        returnValue = F("Auf Frohnscheid");
        break;
    }
    case 42732:
    {
        returnValue = F("Auf Fronacker");
        break;
    }
    case 42733:
    {
        returnValue = F("Auf Gesetz");
        break;
    }
    case 42734:
    {
        returnValue = F("Auf Giehberg");
        break;
    }
    case 42735:
    {
        returnValue = F("Auf Glöckerszaun");
        break;
    }
    case 42736:
    {
        returnValue = F("Auf Gohl");
        break;
    }
    case 42737:
    {
        returnValue = F("Auf Gottes Spuren");
        break;
    }
    case 42738:
    {
        returnValue = F("Auf Gottrod");
        break;
    }
    case 42739:
    {
        returnValue = F("Auf Graben");
        break;
    }
    case 42740:
    {
        returnValue = F("Auf Grau");
        break;
    }
    case 42741:
    {
        returnValue = F("Auf Grauenthal");
        break;
    }
    case 42742:
    {
        returnValue = F("Auf Green");
        break;
    }
    case 42743:
    {
        returnValue = F("Auf Grosselsland");
        break;
    }
    case 42744:
    {
        returnValue = F("Auf Gölten");
        break;
    }
    case 42745:
    {
        returnValue = F("Auf Hahn");
        break;
    }
    case 42746:
    {
        returnValue = F("Auf Hahndorn");
        break;
    }
    case 42747:
    {
        returnValue = F("Auf Halenfeld");
        break;
    }
    case 42748:
    {
        returnValue = F("Auf Hardt");
        break;
    }
    case 42749:
    {
        returnValue = F("Auf Hart");
        break;
    }
    case 42750:
    {
        returnValue = F("Auf Hasenwiese");
        break;
    }
    case 42751:
    {
        returnValue = F("Auf Hasert");
        break;
    }
    case 42752:
    {
        returnValue = F("Auf Hasselt");
        break;
    }
    case 42753:
    {
        returnValue = F("Auf Haustert");
        break;
    }
    case 42754:
    {
        returnValue = F("Auf Hauwert");
        break;
    }
    case 42755:
    {
        returnValue = F("Auf Heddert");
        break;
    }
    case 42756:
    {
        returnValue = F("Auf Hegfeld");
        break;
    }
    case 42757:
    {
        returnValue = F("Auf Heibenacker");
        break;
    }
    case 42758:
    {
        returnValue = F("Auf Heiden");
        break;
    }
    case 42759:
    {
        returnValue = F("Auf Heinzenbuchen");
        break;
    }
    case 42760:
    {
        returnValue = F("Auf Heipel");
        break;
    }
    case 42761:
    {
        returnValue = F("Auf Helmert");
        break;
    }
    case 42762:
    {
        returnValue = F("Auf Helwen");
        break;
    }
    case 42763:
    {
        returnValue = F("Auf Herfeld");
        break;
    }
    case 42764:
    {
        returnValue = F("Auf Herrmannsmauer");
        break;
    }
    case 42765:
    {
        returnValue = F("Auf Hirschen");
        break;
    }
    case 42766:
    {
        returnValue = F("Auf Hirtenwies");
        break;
    }
    case 42767:
    {
        returnValue = F("Auf Hirtig");
        break;
    }
    case 42768:
    {
        returnValue = F("Auf Hisel");
        break;
    }
    case 42769:
    {
        returnValue = F("Auf Hochstetten");
        break;
    }
    case 42770:
    {
        returnValue = F("Auf Hockenbühl");
        break;
    }
    case 42771:
    {
        returnValue = F("Auf Hofen");
        break;
    }
    case 42772:
    {
        returnValue = F("Auf Hohbaum");
        break;
    }
    case 42773:
    {
        returnValue = F("Auf Horngarten");
        break;
    }
    case 42774:
    {
        returnValue = F("Auf Horst");
        break;
    }
    case 42775:
    {
        returnValue = F("Auf Hostert");
        break;
    }
    case 42776:
    {
        returnValue = F("Auf Häckelsberg");
        break;
    }
    case 42777:
    {
        returnValue = F("Auf Häpelt");
        break;
    }
    case 42778:
    {
        returnValue = F("Auf Hüscheid");
        break;
    }
    case 42779:
    {
        returnValue = F("Auf Imber");
        break;
    }
    case 42780:
    {
        returnValue = F("Auf Isels");
        break;
    }
    case 42781:
    {
        returnValue = F("Auf Jakobsgarten");
        break;
    }
    case 42782:
    {
        returnValue = F("Auf Jung's Wies");
        break;
    }
    case 42783:
    {
        returnValue = F("Auf Kai");
        break;
    }
    case 42784:
    {
        returnValue = F("Auf Kalker");
        break;
    }
    case 42785:
    {
        returnValue = F("Auf Kallenfels");
        break;
    }
    case 42786:
    {
        returnValue = F("Auf Kammern");
        break;
    }
    case 42787:
    {
        returnValue = F("Auf Kampelt");
        break;
    }
    case 42788:
    {
        returnValue = F("Auf Kampen");
        break;
    }
    case 42789:
    {
        returnValue = F("Auf Kantel");
        break;
    }
    case 42790:
    {
        returnValue = F("Auf Katzelter");
        break;
    }
    case 42791:
    {
        returnValue = F("Auf Keilen");
        break;
    }
    case 42792:
    {
        returnValue = F("Auf Kellerchen");
        break;
    }
    case 42793:
    {
        returnValue = F("Auf Kellerspesch");
        break;
    }
    case 42794:
    {
        returnValue = F("Auf Kerbel");
        break;
    }
    case 42795:
    {
        returnValue = F("Auf Kiefern");
        break;
    }
    case 42796:
    {
        returnValue = F("Auf Kinnscheid");
        break;
    }
    case 42797:
    {
        returnValue = F("Auf Kipp");
        break;
    }
    case 42798:
    {
        returnValue = F("Auf Kirschgarten");
        break;
    }
    case 42799:
    {
        returnValue = F("Auf Klingelborner Heid");
        break;
    }
    case 42800:
    {
        returnValue = F("Auf Klingelter");
        break;
    }
    case 42801:
    {
        returnValue = F("Auf Klingen");
        break;
    }
    case 42802:
    {
        returnValue = F("Auf Kloos");
        break;
    }
    case 42803:
    {
        returnValue = F("Auf Klopp");
        break;
    }
    case 42804:
    {
        returnValue = F("Auf Knopspesch");
        break;
    }
    case 42805:
    {
        returnValue = F("Auf Kochenwinkel");
        break;
    }
    case 42806:
    {
        returnValue = F("Auf Koisdorf");
        break;
    }
    case 42807:
    {
        returnValue = F("Auf Kollmannstriesch");
        break;
    }
    case 42808:
    {
        returnValue = F("Auf Kommer");
        break;
    }
    case 42809:
    {
        returnValue = F("Auf Koop");
        break;
    }
    case 42810:
    {
        returnValue = F("Auf Krain");
        break;
    }
    case 42811:
    {
        returnValue = F("Auf Krain unterm Berg");
        break;
    }
    case 42812:
    {
        returnValue = F("Auf Kraus");
        break;
    }
    case 42813:
    {
        returnValue = F("Auf Kreimerborn");
        break;
    }
    case 42814:
    {
        returnValue = F("Auf Krein");
        break;
    }
    case 42815:
    {
        returnValue = F("Auf Kremel");
        break;
    }
    case 42816:
    {
        returnValue = F("Auf Kreuz");
        break;
    }
    case 42817:
    {
        returnValue = F("Auf Krummenacker");
        break;
    }
    case 42818:
    {
        returnValue = F("Auf Krummheck");
        break;
    }
    case 42819:
    {
        returnValue = F("Auf Krumrech");
        break;
    }
    case 42820:
    {
        returnValue = F("Auf Krämel");
        break;
    }
    case 42821:
    {
        returnValue = F("Auf Krämer");
        break;
    }
    case 42822:
    {
        returnValue = F("Auf Kräuselem");
        break;
    }
    case 42823:
    {
        returnValue = F("Auf Kuckeral");
        break;
    }
    case 42824:
    {
        returnValue = F("Auf Kyllerhöhe");
        break;
    }
    case 42825:
    {
        returnValue = F("Auf Käntcheshöhe");
        break;
    }
    case 42826:
    {
        returnValue = F("Auf Köhnerrain");
        break;
    }
    case 42827:
    {
        returnValue = F("Auf Köpfchen");
        break;
    }
    case 42828:
    {
        returnValue = F("Auf Landern");
        break;
    }
    case 42829:
    {
        returnValue = F("Auf Langes");
        break;
    }
    case 42830:
    {
        returnValue = F("Auf Langgarten");
        break;
    }
    case 42831:
    {
        returnValue = F("Auf Langreis");
        break;
    }
    case 42832:
    {
        returnValue = F("Auf Lauterborn");
        break;
    }
    case 42833:
    {
        returnValue = F("Auf Lehm");
        break;
    }
    case 42834:
    {
        returnValue = F("Auf Lehn");
        break;
    }
    case 42835:
    {
        returnValue = F("Auf Leidenberg");
        break;
    }
    case 42836:
    {
        returnValue = F("Auf Leim");
        break;
    }
    case 42837:
    {
        returnValue = F("Auf Lett");
        break;
    }
    case 42838:
    {
        returnValue = F("Auf Leyenfeld");
        break;
    }
    case 42839:
    {
        returnValue = F("Auf Liesenberg");
        break;
    }
    case 42840:
    {
        returnValue = F("Auf Linden");
        break;
    }
    case 42841:
    {
        returnValue = F("Auf Lischeid");
        break;
    }
    case 42842:
    {
        returnValue = F("Auf Lohren");
        break;
    }
    case 42843:
    {
        returnValue = F("Auf Löbern");
        break;
    }
    case 42844:
    {
        returnValue = F("Auf Löbsch");
        break;
    }
    case 42845:
    {
        returnValue = F("Auf Löhborn");
        break;
    }
    case 42846:
    {
        returnValue = F("Auf Löw");
        break;
    }
    case 42847:
    {
        returnValue = F("Auf Marscheid");
        break;
    }
    case 42848:
    {
        returnValue = F("Auf Mascheid");
        break;
    }
    case 42849:
    {
        returnValue = F("Auf Mathiasberg");
        break;
    }
    case 42850:
    {
        returnValue = F("Auf Mauern");
        break;
    }
    case 42851:
    {
        returnValue = F("Auf Mees");
        break;
    }
    case 42852:
    {
        returnValue = F("Auf Merscheid");
        break;
    }
    case 42853:
    {
        returnValue = F("Auf Merschel");
        break;
    }
    case 42854:
    {
        returnValue = F("Auf Mertesborn");
        break;
    }
    case 42855:
    {
        returnValue = F("Auf Merzborn");
        break;
    }
    case 42856:
    {
        returnValue = F("Auf Mess");
        break;
    }
    case 42857:
    {
        returnValue = F("Auf Metzel");
        break;
    }
    case 42858:
    {
        returnValue = F("Auf Michelfeld");
        break;
    }
    case 42859:
    {
        returnValue = F("Auf Missel");
        break;
    }
    case 42860:
    {
        returnValue = F("Auf Mittelfelden");
        break;
    }
    case 42861:
    {
        returnValue = F("Auf Mittelhardt");
        break;
    }
    case 42862:
    {
        returnValue = F("Auf Mohren");
        break;
    }
    case 42863:
    {
        returnValue = F("Auf Mohrpesch");
        break;
    }
    case 42864:
    {
        returnValue = F("Auf Moor");
        break;
    }
    case 42865:
    {
        returnValue = F("Auf Mühlberg");
        break;
    }
    case 42866:
    {
        returnValue = F("Auf Mühlenfeld");
        break;
    }
    case 42867:
    {
        returnValue = F("Auf Mühlenrech");
        break;
    }
    case 42868:
    {
        returnValue = F("Auf Münsterhöh");
        break;
    }
    case 42869:
    {
        returnValue = F("Auf Münzelt");
        break;
    }
    case 42870:
    {
        returnValue = F("Auf Naubrich");
        break;
    }
    case 42871:
    {
        returnValue = F("Auf Neukreuz");
        break;
    }
    case 42872:
    {
        returnValue = F("Auf Nordfeld");
        break;
    }
    case 42873:
    {
        returnValue = F("Auf Ober Dahr");
        break;
    }
    case 42874:
    {
        returnValue = F("Auf Oberborn");
        break;
    }
    case 42875:
    {
        returnValue = F("Auf Oleck");
        break;
    }
    case 42876:
    {
        returnValue = F("Auf Omesen");
        break;
    }
    case 42877:
    {
        returnValue = F("Auf Pastorsfeld");
        break;
    }
    case 42878:
    {
        returnValue = F("Auf Patersland");
        break;
    }
    case 42879:
    {
        returnValue = F("Auf Paulskreuz");
        break;
    }
    case 42880:
    {
        returnValue = F("Auf Pehlen");
        break;
    }
    case 42881:
    {
        returnValue = F("Auf Pellert");
        break;
    }
    case 42882:
    {
        returnValue = F("Auf Periol");
        break;
    }
    case 42883:
    {
        returnValue = F("Auf Pesch");
        break;
    }
    case 42884:
    {
        returnValue = F("Auf Peschhelle");
        break;
    }
    case 42885:
    {
        returnValue = F("Auf Petsch");
        break;
    }
    case 42886:
    {
        returnValue = F("Auf Pfadsbach");
        break;
    }
    case 42887:
    {
        returnValue = F("Auf Pfuhlst");
        break;
    }
    case 42888:
    {
        returnValue = F("Auf Plandert");
        break;
    }
    case 42889:
    {
        returnValue = F("Auf Potzerbach");
        break;
    }
    case 42890:
    {
        returnValue = F("Auf Probert");
        break;
    }
    case 42891:
    {
        returnValue = F("Auf Proffen");
        break;
    }
    case 42892:
    {
        returnValue = F("Auf Prüfeld");
        break;
    }
    case 42893:
    {
        returnValue = F("Auf Pötsch");
        break;
    }
    case 42894:
    {
        returnValue = F("Auf Quart");
        break;
    }
    case 42895:
    {
        returnValue = F("Auf Reileff");
        break;
    }
    case 42896:
    {
        returnValue = F("Auf Reinskopf");
        break;
    }
    case 42897:
    {
        returnValue = F("Auf Reiserfeld");
        break;
    }
    case 42898:
    {
        returnValue = F("Auf Reissenmauer");
        break;
    }
    case 42899:
    {
        returnValue = F("Auf Renges");
        break;
    }
    case 42900:
    {
        returnValue = F("Auf Renzelbach");
        break;
    }
    case 42901:
    {
        returnValue = F("Auf Ringel");
        break;
    }
    case 42902:
    {
        returnValue = F("Auf Ripp");
        break;
    }
    case 42903:
    {
        returnValue = F("Auf Rodel");
        break;
    }
    case 42904:
    {
        returnValue = F("Auf Rodemers");
        break;
    }
    case 42905:
    {
        returnValue = F("Auf Rodert");
        break;
    }
    case 42906:
    {
        returnValue = F("Auf Rollstein");
        break;
    }
    case 42907:
    {
        returnValue = F("Auf Rothenfeld");
        break;
    }
    case 42908:
    {
        returnValue = F("Auf Rotrötchen");
        break;
    }
    case 42909:
    {
        returnValue = F("Auf Rottern");
        break;
    }
    case 42910:
    {
        returnValue = F("Auf Rubersberg");
        break;
    }
    case 42911:
    {
        returnValue = F("Auf Ruckbein");
        break;
    }
    case 42912:
    {
        returnValue = F("Auf Rudert");
        break;
    }
    case 42913:
    {
        returnValue = F("Auf Rödern");
        break;
    }
    case 42914:
    {
        returnValue = F("Auf Röhling");
        break;
    }
    case 42915:
    {
        returnValue = F("Auf Röth");
        break;
    }
    case 42916:
    {
        returnValue = F("Auf Rütt");
        break;
    }
    case 42917:
    {
        returnValue = F("Auf Sabel");
        break;
    }
    case 42918:
    {
        returnValue = F("Auf Sanders Kampe");
        break;
    }
    case 42919:
    {
        returnValue = F("Auf Sangen");
        break;
    }
    case 42920:
    {
        returnValue = F("Auf Schafroth");
        break;
    }
    case 42921:
    {
        returnValue = F("Auf Schalkenfeld");
        break;
    }
    case 42922:
    {
        returnValue = F("Auf Schalmen");
        break;
    }
    case 42923:
    {
        returnValue = F("Auf Scharlatz");
        break;
    }
    case 42924:
    {
        returnValue = F("Auf Scheiblingen");
        break;
    }
    case 42925:
    {
        returnValue = F("Auf Scheid");
        break;
    }
    case 42926:
    {
        returnValue = F("Auf Scheiden");
        break;
    }
    case 42927:
    {
        returnValue = F("Auf Schied");
        break;
    }
    case 42928:
    {
        returnValue = F("Auf Schieferstein");
        break;
    }
    case 42929:
    {
        returnValue = F("Auf Schiels");
        break;
    }
    case 42930:
    {
        returnValue = F("Auf Schlädt");
        break;
    }
    case 42931:
    {
        returnValue = F("Auf Schmitz Pösch");
        break;
    }
    case 42932:
    {
        returnValue = F("Auf Schmitzpesch");
        break;
    }
    case 42933:
    {
        returnValue = F("Auf Schnös");
        break;
    }
    case 42934:
    {
        returnValue = F("Auf Schock");
        break;
    }
    case 42935:
    {
        returnValue = F("Auf Schodenpfädchen");
        break;
    }
    case 42936:
    {
        returnValue = F("Auf Schoos");
        break;
    }
    case 42937:
    {
        returnValue = F("Auf Schoppfeld");
        break;
    }
    case 42938:
    {
        returnValue = F("Auf Schruf");
        break;
    }
    case 42939:
    {
        returnValue = F("Auf Sehr");
        break;
    }
    case 42940:
    {
        returnValue = F("Auf Seihen");
        break;
    }
    case 42941:
    {
        returnValue = F("Auf Seiters");
        break;
    }
    case 42942:
    {
        returnValue = F("Auf Selms");
        break;
    }
    case 42943:
    {
        returnValue = F("Auf Silchenrath");
        break;
    }
    case 42944:
    {
        returnValue = F("Auf Sins");
        break;
    }
    case 42945:
    {
        returnValue = F("Auf Sohler");
        break;
    }
    case 42946:
    {
        returnValue = F("Auf Sonnenschein");
        break;
    }
    case 42947:
    {
        returnValue = F("Auf Sordel");
        break;
    }
    case 42948:
    {
        returnValue = F("Auf Springen");
        break;
    }
    case 42949:
    {
        returnValue = F("Auf Staffels");
        break;
    }
    case 42950:
    {
        returnValue = F("Auf Stauden");
        break;
    }
    case 42951:
    {
        returnValue = F("Auf Staudigt");
        break;
    }
    case 42952:
    {
        returnValue = F("Auf Steffelsen");
        break;
    }
    case 42953:
    {
        returnValue = F("Auf Steig");
        break;
    }
    case 42954:
    {
        returnValue = F("Auf Steinen");
        break;
    }
    case 42955:
    {
        returnValue = F("Auf Steinert");
        break;
    }
    case 42956:
    {
        returnValue = F("Auf Steines");
        break;
    }
    case 42957:
    {
        returnValue = F("Auf Steiniger");
        break;
    }
    case 42958:
    {
        returnValue = F("Auf Steinigt");
        break;
    }
    case 42959:
    {
        returnValue = F("Auf Steinisch");
        break;
    }
    case 42960:
    {
        returnValue = F("Auf Sterzen");
        break;
    }
    case 42961:
    {
        returnValue = F("Auf Stieneckers");
        break;
    }
    case 42962:
    {
        returnValue = F("Auf Stocken");
        break;
    }
    case 42963:
    {
        returnValue = F("Auf Strangen");
        break;
    }
    case 42964:
    {
        returnValue = F("Auf Strieglen");
        break;
    }
    case 42965:
    {
        returnValue = F("Auf Ständling");
        break;
    }
    case 42966:
    {
        returnValue = F("Auf Stürmerisch");
        break;
    }
    case 42967:
    {
        returnValue = F("Auf Säbsel");
        break;
    }
    case 42968:
    {
        returnValue = F("Auf Taubentälchen");
        break;
    }
    case 42969:
    {
        returnValue = F("Auf Tellen");
        break;
    }
    case 42970:
    {
        returnValue = F("Auf Thanisch");
        break;
    }
    case 42971:
    {
        returnValue = F("Auf Thiebert");
        break;
    }
    case 42972:
    {
        returnValue = F("Auf Thurnbaum");
        break;
    }
    case 42973:
    {
        returnValue = F("Auf Tommet");
        break;
    }
    case 42974:
    {
        returnValue = F("Auf Tremmelt");
        break;
    }
    case 42975:
    {
        returnValue = F("Auf Trommerst");
        break;
    }
    case 42976:
    {
        returnValue = F("Auf Ulca");
        break;
    }
    case 42977:
    {
        returnValue = F("Auf Urbett");
        break;
    }
    case 42978:
    {
        returnValue = F("Auf Veldenz");
        break;
    }
    case 42979:
    {
        returnValue = F("Auf Vorwigs Hof");
        break;
    }
    case 42980:
    {
        returnValue = F("Auf Waatscheidt");
        break;
    }
    case 42981:
    {
        returnValue = F("Auf Wack");
        break;
    }
    case 42982:
    {
        returnValue = F("Auf Wacken");
        break;
    }
    case 42983:
    {
        returnValue = F("Auf Walbern");
        break;
    }
    case 42984:
    {
        returnValue = F("Auf Walgen");
        break;
    }
    case 42985:
    {
        returnValue = F("Auf Wallers");
        break;
    }
    case 42986:
    {
        returnValue = F("Auf Walsweiler");
        break;
    }
    case 42987:
    {
        returnValue = F("Auf Wamescht");
        break;
    }
    case 42988:
    {
        returnValue = F("Auf Wangen");
        break;
    }
    case 42989:
    {
        returnValue = F("Auf Wasem");
        break;
    }
    case 42990:
    {
        returnValue = F("Auf Weierbach");
        break;
    }
    case 42991:
    {
        returnValue = F("Auf Weihsert");
        break;
    }
    case 42992:
    {
        returnValue = F("Auf Weil");
        break;
    }
    case 42993:
    {
        returnValue = F("Auf Weiler");
        break;
    }
    case 42994:
    {
        returnValue = F("Auf Weilerland");
        break;
    }
    case 42995:
    {
        returnValue = F("Auf Weisburg");
        break;
    }
    case 42996:
    {
        returnValue = F("Auf Weiselstein");
        break;
    }
    case 42997:
    {
        returnValue = F("Auf Weissplätzchen");
        break;
    }
    case 42998:
    {
        returnValue = F("Auf Weißmauer");
        break;
    }
    case 42999:
    {
        returnValue = F("Auf Wenzelt");
        break;
    }
    case 43000:
    {
        returnValue = F("Auf Werdenstein");
        break;
    }
    case 43001:
    {
        returnValue = F("Auf Weweln");
        break;
    }
    case 43002:
    {
        returnValue = F("Auf Wiehl");
        break;
    }
    case 43003:
    {
        returnValue = F("Auf Wieschen");
        break;
    }
    case 43004:
    {
        returnValue = F("Auf Wippelt");
        break;
    }
    case 43005:
    {
        returnValue = F("Auf Wissen Woog");
        break;
    }
    case 43006:
    {
        returnValue = F("Auf Wissert");
        break;
    }
    case 43007:
    {
        returnValue = F("Auf Wittum");
        break;
    }
    case 43008:
    {
        returnValue = F("Auf Wolfers");
        break;
    }
    case 43009:
    {
        returnValue = F("Auf Wolfsgang");
        break;
    }
    case 43010:
    {
        returnValue = F("Auf Wollscheid");
        break;
    }
    case 43011:
    {
        returnValue = F("Auf Wyhlen");
        break;
    }
    case 43012:
    {
        returnValue = F("Auf Zellerberg");
        break;
    }
    case 43013:
    {
        returnValue = F("Auf Zevenich");
        break;
    }
    case 43014:
    {
        returnValue = F("Auf Zimmers");
        break;
    }
    case 43015:
    {
        returnValue = F("Auf Zimmet");
        break;
    }
    case 43016:
    {
        returnValue = F("Auf Zohlen");
        break;
    }
    case 43017:
    {
        returnValue = F("Auf das Loh");
        break;
    }
    case 43018:
    {
        returnValue = F("Auf dem Aaler");
        break;
    }
    case 43019:
    {
        returnValue = F("Auf dem Abtsberg");
        break;
    }
    case 43020:
    {
        returnValue = F("Auf dem Achenbach");
        break;
    }
    case 43021:
    {
        returnValue = F("Auf dem Acker");
        break;
    }
    case 43022:
    {
        returnValue = F("Auf dem Adchen");
        break;
    }
    case 43023:
    {
        returnValue = F("Auf dem Adel");
        break;
    }
    case 43024:
    {
        returnValue = F("Auf dem Ahfeld");
        break;
    }
    case 43025:
    {
        returnValue = F("Auf dem Ahlhorn");
        break;
    }
    case 43026:
    {
        returnValue = F("Auf dem Ahorn");
        break;
    }
    case 43027:
    {
        returnValue = F("Auf dem Ahrenberg");
        break;
    }
    case 43028:
    {
        returnValue = F("Auf dem Alten Berg");
        break;
    }
    case 43029:
    {
        returnValue = F("Auf dem Alten Garten");
        break;
    }
    case 43030:
    {
        returnValue = F("Auf dem Alten Hof");
        break;
    }
    case 43031:
    {
        returnValue = F("Auf dem Altengarten");
        break;
    }
    case 43032:
    {
        returnValue = F("Auf dem Alzerberg");
        break;
    }
    case 43033:
    {
        returnValue = F("Auf dem Amt");
        break;
    }
    case 43034:
    {
        returnValue = F("Auf dem Amte");
        break;
    }
    case 43035:
    {
        returnValue = F("Auf dem Amthaupt");
        break;
    }
    case 43036:
    {
        returnValue = F("Auf dem Amtshof");
        break;
    }
    case 43037:
    {
        returnValue = F("Auf dem Angel");
        break;
    }
    case 43038:
    {
        returnValue = F("Auf dem Anger");
        break;
    }
    case 43039:
    {
        returnValue = F("Auf dem Angespanne");
        break;
    }
    case 43040:
    {
        returnValue = F("Auf dem Annenhof");
        break;
    }
    case 43041:
    {
        returnValue = F("Auf dem Armes");
        break;
    }
    case 43042:
    {
        returnValue = F("Auf dem Aspen");
        break;
    }
    case 43043:
    {
        returnValue = F("Auf dem Auel");
        break;
    }
    case 43044:
    {
        returnValue = F("Auf dem Aulend");
        break;
    }
    case 43045:
    {
        returnValue = F("Auf dem Aurain");
        break;
    }
    case 43046:
    {
        returnValue = F("Auf dem Bach");
        break;
    }
    case 43047:
    {
        returnValue = F("Auf dem Bache");
        break;
    }
    case 43048:
    {
        returnValue = F("Auf dem Bahlen");
        break;
    }
    case 43049:
    {
        returnValue = F("Auf dem Bahndamm");
        break;
    }
    case 43050:
    {
        returnValue = F("Auf dem Bake");
        break;
    }
    case 43051:
    {
        returnValue = F("Auf dem Balkan");
        break;
    }
    case 43052:
    {
        returnValue = F("Auf dem Balkenkamp");
        break;
    }
    case 43053:
    {
        returnValue = F("Auf dem Bamberg");
        break;
    }
    case 43054:
    {
        returnValue = F("Auf dem Bandel");
        break;
    }
    case 43055:
    {
        returnValue = F("Auf dem Bangert");
        break;
    }
    case 43056:
    {
        returnValue = F("Auf dem Barmen");
        break;
    }
    case 43057:
    {
        returnValue = F("Auf dem Bauert");
        break;
    }
    case 43058:
    {
        returnValue = F("Auf dem Baumbus");
        break;
    }
    case 43059:
    {
        returnValue = F("Auf dem Baumgarten");
        break;
    }
    case 43060:
    {
        returnValue = F("Auf dem Baumort");
        break;
    }
    case 43061:
    {
        returnValue = F("Auf dem Beeren");
        break;
    }
    case 43062:
    {
        returnValue = F("Auf dem Beiengarten");
        break;
    }
    case 43063:
    {
        returnValue = F("Auf dem Bek");
        break;
    }
    case 43064:
    {
        returnValue = F("Auf dem Bellert");
        break;
    }
    case 43065:
    {
        returnValue = F("Auf dem Bend");
        break;
    }
    case 43066:
    {
        returnValue = F("Auf dem Bende");
        break;
    }
    case 43067:
    {
        returnValue = F("Auf dem Bente");
        break;
    }
    case 43068:
    {
        returnValue = F("Auf dem Berg");
        break;
    }
    case 43069:
    {
        returnValue = F("Auf dem Berge");
        break;
    }
    case 43070:
    {
        returnValue = F("Auf dem Bergfeld");
        break;
    }
    case 43071:
    {
        returnValue = F("Auf dem Berggarten");
        break;
    }
    case 43072:
    {
        returnValue = F("Auf dem Bergkrug");
        break;
    }
    case 43073:
    {
        returnValue = F("Auf dem Bergle");
        break;
    }
    case 43074:
    {
        returnValue = F("Auf dem Berkenstein");
        break;
    }
    case 43075:
    {
        returnValue = F("Auf dem Bermeke");
        break;
    }
    case 43076:
    {
        returnValue = F("Auf dem Beuel");
        break;
    }
    case 43077:
    {
        returnValue = F("Auf dem Beul");
        break;
    }
    case 43078:
    {
        returnValue = F("Auf dem Bienenfeld");
        break;
    }
    case 43079:
    {
        returnValue = F("Auf dem Bierenfeld");
        break;
    }
    case 43080:
    {
        returnValue = F("Auf dem Biertal");
        break;
    }
    case 43081:
    {
        returnValue = F("Auf dem Bies");
        break;
    }
    case 43082:
    {
        returnValue = F("Auf dem Bild");
        break;
    }
    case 43083:
    {
        returnValue = F("Auf dem Bind");
        break;
    }
    case 43084:
    {
        returnValue = F("Auf dem Binden");
        break;
    }
    case 43085:
    {
        returnValue = F("Auf dem Birgel");
        break;
    }
    case 43086:
    {
        returnValue = F("Auf dem Birkel");
        break;
    }
    case 43087:
    {
        returnValue = F("Auf dem Birkenbruch");
        break;
    }
    case 43088:
    {
        returnValue = F("Auf dem Birkenfeld");
        break;
    }
    case 43089:
    {
        returnValue = F("Auf dem Bitzchen");
        break;
    }
    case 43090:
    {
        returnValue = F("Auf dem Blankenacker");
        break;
    }
    case 43091:
    {
        returnValue = F("Auf dem Blauen");
        break;
    }
    case 43092:
    {
        returnValue = F("Auf dem Blaul");
        break;
    }
    case 43093:
    {
        returnValue = F("Auf dem Bleeck");
        break;
    }
    case 43094:
    {
        returnValue = F("Auf dem Bleeke");
        break;
    }
    case 43095:
    {
        returnValue = F("Auf dem Bleeken");
        break;
    }
    case 43096:
    {
        returnValue = F("Auf dem Blick");
        break;
    }
    case 43097:
    {
        returnValue = F("Auf dem Blomberg");
        break;
    }
    case 43098:
    {
        returnValue = F("Auf dem Bock");
        break;
    }
    case 43099:
    {
        returnValue = F("Auf dem Bockesfeld");
        break;
    }
    case 43100:
    {
        returnValue = F("Auf dem Boden");
        break;
    }
    case 43101:
    {
        returnValue = F("Auf dem Bol");
        break;
    }
    case 43102:
    {
        returnValue = F("Auf dem Boll");
        break;
    }
    case 43103:
    {
        returnValue = F("Auf dem Bolle");
        break;
    }
    case 43104:
    {
        returnValue = F("Auf dem Bombach");
        break;
    }
    case 43105:
    {
        returnValue = F("Auf dem Bonnheck");
        break;
    }
    case 43106:
    {
        returnValue = F("Auf dem Bopp");
        break;
    }
    case 43107:
    {
        returnValue = F("Auf dem Bor");
        break;
    }
    case 43108:
    {
        returnValue = F("Auf dem Borgkamp");
        break;
    }
    case 43109:
    {
        returnValue = F("Auf dem Born");
        break;
    }
    case 43110:
    {
        returnValue = F("Auf dem Bornberg");
        break;
    }
    case 43111:
    {
        returnValue = F("Auf dem Borneberg");
        break;
    }
    case 43112:
    {
        returnValue = F("Auf dem Bornholt");
        break;
    }
    case 43113:
    {
        returnValue = F("Auf dem Bornstück");
        break;
    }
    case 43114:
    {
        returnValue = F("Auf dem Boxberg");
        break;
    }
    case 43115:
    {
        returnValue = F("Auf dem Brachfeld");
        break;
    }
    case 43116:
    {
        returnValue = F("Auf dem Bracken");
        break;
    }
    case 43117:
    {
        returnValue = F("Auf dem Brand");
        break;
    }
    case 43118:
    {
        returnValue = F("Auf dem Brande");
        break;
    }
    case 43119:
    {
        returnValue = F("Auf dem Branden");
        break;
    }
    case 43120:
    {
        returnValue = F("Auf dem Brast");
        break;
    }
    case 43121:
    {
        returnValue = F("Auf dem Braste");
        break;
    }
    case 43122:
    {
        returnValue = F("Auf dem Brauck");
        break;
    }
    case 43123:
    {
        returnValue = F("Auf dem Bredenbusch");
        break;
    }
    case 43124:
    {
        returnValue = F("Auf dem Breiten Hofe");
        break;
    }
    case 43125:
    {
        returnValue = F("Auf dem Breiten Stein");
        break;
    }
    case 43126:
    {
        returnValue = F("Auf dem Breitenacker");
        break;
    }
    case 43127:
    {
        returnValue = F("Auf dem Breitenbusch");
        break;
    }
    case 43128:
    {
        returnValue = F("Auf dem Breitenfeld");
        break;
    }
    case 43129:
    {
        returnValue = F("Auf dem Bremer");
        break;
    }
    case 43130:
    {
        returnValue = F("Auf dem Bremfeld");
        break;
    }
    case 43131:
    {
        returnValue = F("Auf dem Brend");
        break;
    }
    case 43132:
    {
        returnValue = F("Auf dem Brennen");
        break;
    }
    case 43133:
    {
        returnValue = F("Auf dem Brett");
        break;
    }
    case 43134:
    {
        returnValue = F("Auf dem Breuel");
        break;
    }
    case 43135:
    {
        returnValue = F("Auf dem Brink");
        break;
    }
    case 43136:
    {
        returnValue = F("Auf dem Brinke");
        break;
    }
    case 43137:
    {
        returnValue = F("Auf dem Brinkfeld");
        break;
    }
    case 43138:
    {
        returnValue = F("Auf dem Brocke");
        break;
    }
    case 43139:
    {
        returnValue = F("Auf dem Broekland");
        break;
    }
    case 43140:
    {
        returnValue = F("Auf dem Broich");
        break;
    }
    case 43141:
    {
        returnValue = F("Auf dem Brook");
        break;
    }
    case 43142:
    {
        returnValue = F("Auf dem Brouch");
        break;
    }
    case 43143:
    {
        returnValue = F("Auf dem Bruch");
        break;
    }
    case 43144:
    {
        returnValue = F("Auf dem Bruche");
        break;
    }
    case 43145:
    {
        returnValue = F("Auf dem Bruckberge");
        break;
    }
    case 43146:
    {
        returnValue = F("Auf dem Brunnen");
        break;
    }
    case 43147:
    {
        returnValue = F("Auf dem Bröhl");
        break;
    }
    case 43148:
    {
        returnValue = F("Auf dem Brüchelchen");
        break;
    }
    case 43149:
    {
        returnValue = F("Auf dem Brückenberg");
        break;
    }
    case 43150:
    {
        returnValue = F("Auf dem Brüderberg");
        break;
    }
    case 43151:
    {
        returnValue = F("Auf dem Brühl");
        break;
    }
    case 43152:
    {
        returnValue = F("Auf dem Bubenberg");
        break;
    }
    case 43153:
    {
        returnValue = F("Auf dem Buchberg");
        break;
    }
    case 43154:
    {
        returnValue = F("Auf dem Buchhof");
        break;
    }
    case 43155:
    {
        returnValue = F("Auf dem Buck");
        break;
    }
    case 43156:
    {
        returnValue = F("Auf dem Buckenberge");
        break;
    }
    case 43157:
    {
        returnValue = F("Auf dem Bungert");
        break;
    }
    case 43158:
    {
        returnValue = F("Auf dem Burberg");
        break;
    }
    case 43159:
    {
        returnValue = F("Auf dem Burgberg");
        break;
    }
    case 43160:
    {
        returnValue = F("Auf dem Burgflecken");
        break;
    }
    case 43161:
    {
        returnValue = F("Auf dem Burghof");
        break;
    }
    case 43162:
    {
        returnValue = F("Auf dem Burgstück");
        break;
    }
    case 43163:
    {
        returnValue = F("Auf dem Burgweg");
        break;
    }
    case 43164:
    {
        returnValue = F("Auf dem Burlande");
        break;
    }
    case 43165:
    {
        returnValue = F("Auf dem Burren");
        break;
    }
    case 43166:
    {
        returnValue = F("Auf dem Bus");
        break;
    }
    case 43167:
    {
        returnValue = F("Auf dem Busch");
        break;
    }
    case 43168:
    {
        returnValue = F("Auf dem Busche");
        break;
    }
    case 43169:
    {
        returnValue = F("Auf dem Böckeler");
        break;
    }
    case 43170:
    {
        returnValue = F("Auf dem Böcken");
        break;
    }
    case 43171:
    {
        returnValue = F("Auf dem Bögel");
        break;
    }
    case 43172:
    {
        returnValue = F("Auf dem Böhl");
        break;
    }
    case 43173:
    {
        returnValue = F("Auf dem Böhne-Brinke");
        break;
    }
    case 43174:
    {
        returnValue = F("Auf dem Börnchen");
        break;
    }
    case 43175:
    {
        returnValue = F("Auf dem Bös");
        break;
    }
    case 43176:
    {
        returnValue = F("Auf dem Büchel");
        break;
    }
    case 43177:
    {
        returnValue = F("Auf dem Bückeberg");
        break;
    }
    case 43178:
    {
        returnValue = F("Auf dem Bügen");
        break;
    }
    case 43179:
    {
        returnValue = F("Auf dem Bühl");
        break;
    }
    case 43180:
    {
        returnValue = F("Auf dem Büld");
        break;
    }
    case 43181:
    {
        returnValue = F("Auf dem Bült");
        break;
    }
    case 43182:
    {
        returnValue = F("Auf dem Bülten");
        break;
    }
    case 43183:
    {
        returnValue = F("Auf dem Bürgel");
        break;
    }
    case 43184:
    {
        returnValue = F("Auf dem Bürgle");
        break;
    }
    case 43185:
    {
        returnValue = F("Auf dem Büschel");
        break;
    }
    case 43186:
    {
        returnValue = F("Auf dem Büschelchen");
        break;
    }
    case 43187:
    {
        returnValue = F("Auf dem Daasberg");
        break;
    }
    case 43188:
    {
        returnValue = F("Auf dem Dackscheid");
        break;
    }
    case 43189:
    {
        returnValue = F("Auf dem Dalsen");
        break;
    }
    case 43190:
    {
        returnValue = F("Auf dem Damm");
        break;
    }
    case 43191:
    {
        returnValue = F("Auf dem Damme");
        break;
    }
    case 43192:
    {
        returnValue = F("Auf dem Dammich");
        break;
    }
    case 43193:
    {
        returnValue = F("Auf dem Dammicht");
        break;
    }
    case 43194:
    {
        returnValue = F("Auf dem Dattel");
        break;
    }
    case 43195:
    {
        returnValue = F("Auf dem Daubmann");
        break;
    }
    case 43196:
    {
        returnValue = F("Auf dem Daubus");
        break;
    }
    case 43197:
    {
        returnValue = F("Auf dem Deich");
        break;
    }
    case 43198:
    {
        returnValue = F("Auf dem Deiche");
        break;
    }
    case 43199:
    {
        returnValue = F("Auf dem Deister");
        break;
    }
    case 43200:
    {
        returnValue = F("Auf dem Dempel");
        break;
    }
    case 43201:
    {
        returnValue = F("Auf dem Diek");
        break;
    }
    case 43202:
    {
        returnValue = F("Auf dem Dillen");
        break;
    }
    case 43203:
    {
        returnValue = F("Auf dem Dillenberg");
        break;
    }
    case 43204:
    {
        returnValue = F("Auf dem Dohlenberg");
        break;
    }
    case 43205:
    {
        returnValue = F("Auf dem Dom");
        break;
    }
    case 43206:
    {
        returnValue = F("Auf dem Domacker");
        break;
    }
    case 43207:
    {
        returnValue = F("Auf dem Donn");
        break;
    }
    case 43208:
    {
        returnValue = F("Auf dem Dorfbach");
        break;
    }
    case 43209:
    {
        returnValue = F("Auf dem Dorfe");
        break;
    }
    case 43210:
    {
        returnValue = F("Auf dem Dorfgraben");
        break;
    }
    case 43211:
    {
        returnValue = F("Auf dem Dorn");
        break;
    }
    case 43212:
    {
        returnValue = F("Auf dem Dreianger");
        break;
    }
    case 43213:
    {
        returnValue = F("Auf dem Dreisch");
        break;
    }
    case 43214:
    {
        returnValue = F("Auf dem Dresch");
        break;
    }
    case 43215:
    {
        returnValue = F("Auf dem Drescher");
        break;
    }
    case 43216:
    {
        returnValue = F("Auf dem Driesch");
        break;
    }
    case 43217:
    {
        returnValue = F("Auf dem Drittel");
        break;
    }
    case 43218:
    {
        returnValue = F("Auf dem Drohn");
        break;
    }
    case 43219:
    {
        returnValue = F("Auf dem Drohne");
        break;
    }
    case 43220:
    {
        returnValue = F("Auf dem Dudel");
        break;
    }
    case 43221:
    {
        returnValue = F("Auf dem Döhren");
        break;
    }
    case 43222:
    {
        returnValue = F("Auf dem Dörn");
        break;
    }
    case 43223:
    {
        returnValue = F("Auf dem Dörnberg");
        break;
    }
    case 43224:
    {
        returnValue = F("Auf dem Dümmer");
        break;
    }
    case 43225:
    {
        returnValue = F("Auf dem Dümpel");
        break;
    }
    case 43226:
    {
        returnValue = F("Auf dem Dün");
        break;
    }
    case 43227:
    {
        returnValue = F("Auf dem Düsen");
        break;
    }
    case 43228:
    {
        returnValue = F("Auf dem Ebenhahn");
        break;
    }
    case 43229:
    {
        returnValue = F("Auf dem Ebental");
        break;
    }
    case 43230:
    {
        returnValue = F("Auf dem Eberbach");
        break;
    }
    case 43231:
    {
        returnValue = F("Auf dem Ebert");
        break;
    }
    case 43232:
    {
        returnValue = F("Auf dem Echer");
        break;
    }
    case 43233:
    {
        returnValue = F("Auf dem Eck");
        break;
    }
    case 43234:
    {
        returnValue = F("Auf dem Edler");
        break;
    }
    case 43235:
    {
        returnValue = F("Auf dem Eggenberg");
        break;
    }
    case 43236:
    {
        returnValue = F("Auf dem Eichberg");
        break;
    }
    case 43237:
    {
        returnValue = F("Auf dem Eichelchen");
        break;
    }
    case 43238:
    {
        returnValue = F("Auf dem Eichenfeld");
        break;
    }
    case 43239:
    {
        returnValue = F("Auf dem Eichenkamp");
        break;
    }
    case 43240:
    {
        returnValue = F("Auf dem Eichholz");
        break;
    }
    case 43241:
    {
        returnValue = F("Auf dem Eichholzer Acker");
        break;
    }
    case 43242:
    {
        returnValue = F("Auf dem Eigen");
        break;
    }
    case 43243:
    {
        returnValue = F("Auf dem Eisfeld");
        break;
    }
    case 43244:
    {
        returnValue = F("Auf dem Eiskeller");
        break;
    }
    case 43245:
    {
        returnValue = F("Auf dem Ellenberg");
        break;
    }
    case 43246:
    {
        returnValue = F("Auf dem Elm");
        break;
    }
    case 43247:
    {
        returnValue = F("Auf dem Elmet");
        break;
    }
    case 43248:
    {
        returnValue = F("Auf dem Elmhorstberg");
        break;
    }
    case 43249:
    {
        returnValue = F("Auf dem Engel");
        break;
    }
    case 43250:
    {
        returnValue = F("Auf dem Ent");
        break;
    }
    case 43251:
    {
        returnValue = F("Auf dem Erbesgarten");
        break;
    }
    case 43252:
    {
        returnValue = F("Auf dem Erdstück");
        break;
    }
    case 43253:
    {
        returnValue = F("Auf dem Erlenberg");
        break;
    }
    case 43254:
    {
        returnValue = F("Auf dem Erzberg");
        break;
    }
    case 43255:
    {
        returnValue = F("Auf dem Esch");
        break;
    }
    case 43256:
    {
        returnValue = F("Auf dem Eschert");
        break;
    }
    case 43257:
    {
        returnValue = F("Auf dem Eschgarten");
        break;
    }
    case 43258:
    {
        returnValue = F("Auf dem Espe");
        break;
    }
    case 43259:
    {
        returnValue = F("Auf dem Espel");
        break;
    }
    case 43260:
    {
        returnValue = F("Auf dem Espen");
        break;
    }
    case 43261:
    {
        returnValue = F("Auf dem Essenberg");
        break;
    }
    case 43262:
    {
        returnValue = F("Auf dem Essig");
        break;
    }
    case 43263:
    {
        returnValue = F("Auf dem Eulenberg");
        break;
    }
    case 43264:
    {
        returnValue = F("Auf dem Eulenkamp");
        break;
    }
    case 43265:
    {
        returnValue = F("Auf dem Ewiger");
        break;
    }
    case 43266:
    {
        returnValue = F("Auf dem Eyland");
        break;
    }
    case 43267:
    {
        returnValue = F("Auf dem Falgen");
        break;
    }
    case 43268:
    {
        returnValue = F("Auf dem Falkenberg");
        break;
    }
    case 43269:
    {
        returnValue = F("Auf dem Faller");
        break;
    }
    case 43270:
    {
        returnValue = F("Auf dem Fange");
        break;
    }
    case 43271:
    {
        returnValue = F("Auf dem Faulacker");
        break;
    }
    case 43272:
    {
        returnValue = F("Auf dem Faß");
        break;
    }
    case 43273:
    {
        returnValue = F("Auf dem Feld");
        break;
    }
    case 43274:
    {
        returnValue = F("Auf dem Feldchen");
        break;
    }
    case 43275:
    {
        returnValue = F("Auf dem Felde");
        break;
    }
    case 43276:
    {
        returnValue = F("Auf dem Feldele");
        break;
    }
    case 43277:
    {
        returnValue = F("Auf dem Feldkamp");
        break;
    }
    case 43278:
    {
        returnValue = F("Auf dem Fels");
        break;
    }
    case 43279:
    {
        returnValue = F("Auf dem Felsacker");
        break;
    }
    case 43280:
    {
        returnValue = F("Auf dem Felsen");
        break;
    }
    case 43281:
    {
        returnValue = F("Auf dem Fiening");
        break;
    }
    case 43282:
    {
        returnValue = F("Auf dem Filz");
        break;
    }
    case 43283:
    {
        returnValue = F("Auf dem Flaage");
        break;
    }
    case 43284:
    {
        returnValue = F("Auf dem Flachsbeet");
        break;
    }
    case 43285:
    {
        returnValue = F("Auf dem Flachsmarkt");
        break;
    }
    case 43286:
    {
        returnValue = F("Auf dem Flage");
        break;
    }
    case 43287:
    {
        returnValue = F("Auf dem Flecken");
        break;
    }
    case 43288:
    {
        returnValue = F("Auf dem Flidd");
        break;
    }
    case 43289:
    {
        returnValue = F("Auf dem Flintenhöbel");
        break;
    }
    case 43290:
    {
        returnValue = F("Auf dem Flur");
        break;
    }
    case 43291:
    {
        returnValue = F("Auf dem Flurzaun");
        break;
    }
    case 43292:
    {
        returnValue = F("Auf dem Flürchen");
        break;
    }
    case 43293:
    {
        returnValue = F("Auf dem Forst");
        break;
    }
    case 43294:
    {
        returnValue = F("Auf dem Franzen");
        break;
    }
    case 43295:
    {
        returnValue = F("Auf dem Franzensberg");
        break;
    }
    case 43296:
    {
        returnValue = F("Auf dem Freiland");
        break;
    }
    case 43297:
    {
        returnValue = F("Auf dem Freitag");
        break;
    }
    case 43298:
    {
        returnValue = F("Auf dem Frongrund");
        break;
    }
    case 43299:
    {
        returnValue = F("Auf dem Fronhof");
        break;
    }
    case 43300:
    {
        returnValue = F("Auf dem Fuchsberg");
        break;
    }
    case 43301:
    {
        returnValue = F("Auf dem Füllstall");
        break;
    }
    case 43302:
    {
        returnValue = F("Auf dem Fürfurter Hof");
        break;
    }
    case 43303:
    {
        returnValue = F("Auf dem Fürling");
        break;
    }
    case 43304:
    {
        returnValue = F("Auf dem G'hau");
        break;
    }
    case 43305:
    {
        returnValue = F("Auf dem Gaden");
        break;
    }
    case 43306:
    {
        returnValue = F("Auf dem Galberg");
        break;
    }
    case 43307:
    {
        returnValue = F("Auf dem Galgenberg");
        break;
    }
    case 43308:
    {
        returnValue = F("Auf dem Galgenbühl");
        break;
    }
    case 43309:
    {
        returnValue = F("Auf dem Gang");
        break;
    }
    case 43310:
    {
        returnValue = F("Auf dem Gansacker");
        break;
    }
    case 43311:
    {
        returnValue = F("Auf dem Garrath");
        break;
    }
    case 43312:
    {
        returnValue = F("Auf dem Garten");
        break;
    }
    case 43313:
    {
        returnValue = F("Auf dem Gartenberge");
        break;
    }
    case 43314:
    {
        returnValue = F("Auf dem Gartenstück");
        break;
    }
    case 43315:
    {
        returnValue = F("Auf dem Gartshof");
        break;
    }
    case 43316:
    {
        returnValue = F("Auf dem Gaulersberg");
        break;
    }
    case 43317:
    {
        returnValue = F("Auf dem Gehicht");
        break;
    }
    case 43318:
    {
        returnValue = F("Auf dem Gehren");
        break;
    }
    case 43319:
    {
        returnValue = F("Auf dem Geishübel");
        break;
    }
    case 43320:
    {
        returnValue = F("Auf dem Gelkenkamp");
        break;
    }
    case 43321:
    {
        returnValue = F("Auf dem Gerstenberg");
        break;
    }
    case 43322:
    {
        returnValue = F("Auf dem Gesetz");
        break;
    }
    case 43323:
    {
        returnValue = F("Auf dem Gewann");
        break;
    }
    case 43324:
    {
        returnValue = F("Auf dem Gewölb");
        break;
    }
    case 43325:
    {
        returnValue = F("Auf dem Geyersrech");
        break;
    }
    case 43326:
    {
        returnValue = F("Auf dem Giefelstein");
        break;
    }
    case 43327:
    {
        returnValue = F("Auf dem Gier");
        break;
    }
    case 43328:
    {
        returnValue = F("Auf dem Gipsberg");
        break;
    }
    case 43329:
    {
        returnValue = F("Auf dem Gladeberg");
        break;
    }
    case 43330:
    {
        returnValue = F("Auf dem Gleichen");
        break;
    }
    case 43331:
    {
        returnValue = F("Auf dem Gleichen Morgen");
        break;
    }
    case 43332:
    {
        returnValue = F("Auf dem Godenstedter Berg");
        break;
    }
    case 43333:
    {
        returnValue = F("Auf dem Goldacker");
        break;
    }
    case 43334:
    {
        returnValue = F("Auf dem Goldberg");
        break;
    }
    case 43335:
    {
        returnValue = F("Auf dem Goldberge");
        break;
    }
    case 43336:
    {
        returnValue = F("Auf dem Graben");
        break;
    }
    case 43337:
    {
        returnValue = F("Auf dem Green");
        break;
    }
    case 43338:
    {
        returnValue = F("Auf dem Gries");
        break;
    }
    case 43339:
    {
        returnValue = F("Auf dem Großen Feld");
        break;
    }
    case 43340:
    {
        returnValue = F("Auf dem Großen Felde");
        break;
    }
    case 43341:
    {
        returnValue = F("Auf dem Großen Kampe");
        break;
    }
    case 43342:
    {
        returnValue = F("Auf dem Großen Ruhm");
        break;
    }
    case 43343:
    {
        returnValue = F("Auf dem Grudde");
        break;
    }
    case 43344:
    {
        returnValue = F("Auf dem Grund");
        break;
    }
    case 43345:
    {
        returnValue = F("Auf dem Grümbel");
        break;
    }
    case 43346:
    {
        returnValue = F("Auf dem Grün");
        break;
    }
    case 43347:
    {
        returnValue = F("Auf dem Grünen Berg");
        break;
    }
    case 43348:
    {
        returnValue = F("Auf dem Grünten");
        break;
    }
    case 43349:
    {
        returnValue = F("Auf dem Gumschlag");
        break;
    }
    case 43350:
    {
        returnValue = F("Auf dem Gut");
        break;
    }
    case 43351:
    {
        returnValue = F("Auf dem Gute");
        break;
    }
    case 43352:
    {
        returnValue = F("Auf dem Gutshof");
        break;
    }
    case 43353:
    {
        returnValue = F("Auf dem Gänseland");
        break;
    }
    case 43354:
    {
        returnValue = F("Auf dem Gärtchen");
        break;
    }
    case 43355:
    {
        returnValue = F("Auf dem Gässchen");
        break;
    }
    case 43356:
    {
        returnValue = F("Auf dem Gäu");
        break;
    }
    case 43357:
    {
        returnValue = F("Auf dem Haag");
        break;
    }
    case 43358:
    {
        returnValue = F("Auf dem Haage");
        break;
    }
    case 43359:
    {
        returnValue = F("Auf dem Haar");
        break;
    }
    case 43360:
    {
        returnValue = F("Auf dem Haarbau");
        break;
    }
    case 43361:
    {
        returnValue = F("Auf dem Haarkamp");
        break;
    }
    case 43362:
    {
        returnValue = F("Auf dem Haaskopf");
        break;
    }
    case 43363:
    {
        returnValue = F("Auf dem Hachenei");
        break;
    }
    case 43364:
    {
        returnValue = F("Auf dem Haeken");
        break;
    }
    case 43365:
    {
        returnValue = F("Auf dem Hag");
        break;
    }
    case 43366:
    {
        returnValue = F("Auf dem Hagel");
        break;
    }
    case 43367:
    {
        returnValue = F("Auf dem Hagen");
        break;
    }
    case 43368:
    {
        returnValue = F("Auf dem Hagenbach");
        break;
    }
    case 43369:
    {
        returnValue = F("Auf dem Hagenberg");
        break;
    }
    case 43370:
    {
        returnValue = F("Auf dem Hagh");
        break;
    }
    case 43371:
    {
        returnValue = F("Auf dem Hahlgarten");
        break;
    }
    case 43372:
    {
        returnValue = F("Auf dem Hahn");
        break;
    }
    case 43373:
    {
        returnValue = F("Auf dem Hahnacker");
        break;
    }
    case 43374:
    {
        returnValue = F("Auf dem Hahnen");
        break;
    }
    case 43375:
    {
        returnValue = F("Auf dem Hahnenkamp");
        break;
    }
    case 43376:
    {
        returnValue = F("Auf dem Haidchen");
        break;
    }
    case 43377:
    {
        returnValue = F("Auf dem Hain");
        break;
    }
    case 43378:
    {
        returnValue = F("Auf dem Hainspiel");
        break;
    }
    case 43379:
    {
        returnValue = F("Auf dem Hall");
        break;
    }
    case 43380:
    {
        returnValue = F("Auf dem Hals");
        break;
    }
    case 43381:
    {
        returnValue = F("Auf dem Halvent");
        break;
    }
    case 43382:
    {
        returnValue = F("Auf dem Hambach");
        break;
    }
    case 43383:
    {
        returnValue = F("Auf dem Hamm");
        break;
    }
    case 43384:
    {
        returnValue = F("Auf dem Hanen");
        break;
    }
    case 43385:
    {
        returnValue = F("Auf dem Hanfsacke");
        break;
    }
    case 43386:
    {
        returnValue = F("Auf dem Hang");
        break;
    }
    case 43387:
    {
        returnValue = F("Auf dem Hardt");
        break;
    }
    case 43388:
    {
        returnValue = F("Auf dem Hardtberg");
        break;
    }
    case 43389:
    {
        returnValue = F("Auf dem Hasenberg");
        break;
    }
    case 43390:
    {
        returnValue = F("Auf dem Hasenkrug");
        break;
    }
    case 43391:
    {
        returnValue = F("Auf dem Hasenlehn");
        break;
    }
    case 43392:
    {
        returnValue = F("Auf dem Hasenstock");
        break;
    }
    case 43393:
    {
        returnValue = F("Auf dem Haspel");
        break;
    }
    case 43394:
    {
        returnValue = F("Auf dem Hassel");
        break;
    }
    case 43395:
    {
        returnValue = F("Auf dem Hasselfeld");
        break;
    }
    case 43396:
    {
        returnValue = F("Auf dem Hau");
        break;
    }
    case 43397:
    {
        returnValue = F("Auf dem Hauel");
        break;
    }
    case 43398:
    {
        returnValue = F("Auf dem Haupte");
        break;
    }
    case 43399:
    {
        returnValue = F("Auf dem Heckerfeld");
        break;
    }
    case 43400:
    {
        returnValue = F("Auf dem Heede");
        break;
    }
    case 43401:
    {
        returnValue = F("Auf dem Heg");
        break;
    }
    case 43402:
    {
        returnValue = F("Auf dem Hegekamp");
        break;
    }
    case 43403:
    {
        returnValue = F("Auf dem Hegenfeld");
        break;
    }
    case 43404:
    {
        returnValue = F("Auf dem Hehm");
        break;
    }
    case 43405:
    {
        returnValue = F("Auf dem Heidberg");
        break;
    }
    case 43406:
    {
        returnValue = F("Auf dem Heidchen");
        break;
    }
    case 43407:
    {
        returnValue = F("Auf dem Heideckle");
        break;
    }
    case 43408:
    {
        returnValue = F("Auf dem Heidelberg");
        break;
    }
    case 43409:
    {
        returnValue = F("Auf dem Heidgen");
        break;
    }
    case 43410:
    {
        returnValue = F("Auf dem Heidlande");
        break;
    }
    case 43411:
    {
        returnValue = F("Auf dem Heidstock");
        break;
    }
    case 43412:
    {
        returnValue = F("Auf dem Heiken");
        break;
    }
    case 43413:
    {
        returnValue = F("Auf dem Heiligen Geisthof");
        break;
    }
    case 43414:
    {
        returnValue = F("Auf dem Heiligen Kampe");
        break;
    }
    case 43415:
    {
        returnValue = F("Auf dem Heiligenberg");
        break;
    }
    case 43416:
    {
        returnValue = F("Auf dem Heiligenfeld");
        break;
    }
    case 43417:
    {
        returnValue = F("Auf dem Heimenwasen");
        break;
    }
    case 43418:
    {
        returnValue = F("Auf dem Heinberg");
        break;
    }
    case 43419:
    {
        returnValue = F("Auf dem Heinrichshof");
        break;
    }
    case 43420:
    {
        returnValue = F("Auf dem Heisen");
        break;
    }
    case 43421:
    {
        returnValue = F("Auf dem Heisterberge");
        break;
    }
    case 43422:
    {
        returnValue = F("Auf dem Heldreeg");
        break;
    }
    case 43423:
    {
        returnValue = F("Auf dem Helgen");
        break;
    }
    case 43424:
    {
        returnValue = F("Auf dem Helmt");
        break;
    }
    case 43425:
    {
        returnValue = F("Auf dem Heng");
        break;
    }
    case 43426:
    {
        returnValue = F("Auf dem Hermes");
        break;
    }
    case 43427:
    {
        returnValue = F("Auf dem Herrenberg");
        break;
    }
    case 43428:
    {
        returnValue = F("Auf dem Herrengraben");
        break;
    }
    case 43429:
    {
        returnValue = F("Auf dem Hertscheid");
        break;
    }
    case 43430:
    {
        returnValue = F("Auf dem Herzberg");
        break;
    }
    case 43431:
    {
        returnValue = F("Auf dem Herzenberg");
        break;
    }
    case 43432:
    {
        returnValue = F("Auf dem Hessel");
        break;
    }
    case 43433:
    {
        returnValue = F("Auf dem Heuchelberg");
        break;
    }
    case 43434:
    {
        returnValue = F("Auf dem Heutberg");
        break;
    }
    case 43435:
    {
        returnValue = F("Auf dem Heyer");
        break;
    }
    case 43436:
    {
        returnValue = F("Auf dem Hiebchen");
        break;
    }
    case 43437:
    {
        returnValue = F("Auf dem Hielig");
        break;
    }
    case 43438:
    {
        returnValue = F("Auf dem Hiewel");
        break;
    }
    case 43439:
    {
        returnValue = F("Auf dem Hilkenrath");
        break;
    }
    case 43440:
    {
        returnValue = F("Auf dem Hinterberg");
        break;
    }
    case 43441:
    {
        returnValue = F("Auf dem Hinterbuck");
        break;
    }
    case 43442:
    {
        returnValue = F("Auf dem Hinterstein");
        break;
    }
    case 43443:
    {
        returnValue = F("Auf dem Hirschel");
        break;
    }
    case 43444:
    {
        returnValue = F("Auf dem Hirtle");
        break;
    }
    case 43445:
    {
        returnValue = F("Auf dem Hochfeld");
        break;
    }
    case 43446:
    {
        returnValue = F("Auf dem Hochgesträß");
        break;
    }
    case 43447:
    {
        returnValue = F("Auf dem Hochrain");
        break;
    }
    case 43448:
    {
        returnValue = F("Auf dem Hochrück");
        break;
    }
    case 43449:
    {
        returnValue = F("Auf dem Hock");
        break;
    }
    case 43450:
    {
        returnValue = F("Auf dem Hoebelchen");
        break;
    }
    case 43451:
    {
        returnValue = F("Auf dem Hof");
        break;
    }
    case 43452:
    {
        returnValue = F("Auf dem Hofacker");
        break;
    }
    case 43453:
    {
        returnValue = F("Auf dem Hofdrosten");
        break;
    }
    case 43454:
    {
        returnValue = F("Auf dem Hofe");
        break;
    }
    case 43455:
    {
        returnValue = F("Auf dem Hofefeld");
        break;
    }
    case 43456:
    {
        returnValue = F("Auf dem Hofene");
        break;
    }
    case 43457:
    {
        returnValue = F("Auf dem Hoff");
        break;
    }
    case 43458:
    {
        returnValue = F("Auf dem Hofland");
        break;
    }
    case 43459:
    {
        returnValue = F("Auf dem Hohberg");
        break;
    }
    case 43460:
    {
        returnValue = F("Auf dem Hohen Felde");
        break;
    }
    case 43461:
    {
        returnValue = F("Auf dem Hohen Fels");
        break;
    }
    case 43462:
    {
        returnValue = F("Auf dem Hohen Rade");
        break;
    }
    case 43463:
    {
        returnValue = F("Auf dem Hohen Rain");
        break;
    }
    case 43464:
    {
        returnValue = F("Auf dem Hohen Stein");
        break;
    }
    case 43465:
    {
        returnValue = F("Auf dem Hohendorn");
        break;
    }
    case 43466:
    {
        returnValue = F("Auf dem Hohenfeld");
        break;
    }
    case 43467:
    {
        returnValue = F("Auf dem Hohl");
        break;
    }
    case 43468:
    {
        returnValue = F("Auf dem Hohlacker");
        break;
    }
    case 43469:
    {
        returnValue = F("Auf dem Hohland");
        break;
    }
    case 43470:
    {
        returnValue = F("Auf dem Hohlenberg");
        break;
    }
    case 43471:
    {
        returnValue = F("Auf dem Hohlrech");
        break;
    }
    case 43472:
    {
        returnValue = F("Auf dem Hohlweg");
        break;
    }
    case 43473:
    {
        returnValue = F("Auf dem Hohn");
        break;
    }
    case 43474:
    {
        returnValue = F("Auf dem Hohnert");
        break;
    }
    case 43475:
    {
        returnValue = F("Auf dem Hollacker");
        break;
    }
    case 43476:
    {
        returnValue = F("Auf dem Hollen");
        break;
    }
    case 43477:
    {
        returnValue = F("Auf dem Hollunder");
        break;
    }
    case 43478:
    {
        returnValue = F("Auf dem Holm");
        break;
    }
    case 43479:
    {
        returnValue = F("Auf dem Holtfeld");
        break;
    }
    case 43480:
    {
        returnValue = F("Auf dem Holzbuckel");
        break;
    }
    case 43481:
    {
        returnValue = F("Auf dem Holzkamp");
        break;
    }
    case 43482:
    {
        returnValue = F("Auf dem Holzweg");
        break;
    }
    case 43483:
    {
        returnValue = F("Auf dem Homberge");
        break;
    }
    case 43484:
    {
        returnValue = F("Auf dem Hombeutel");
        break;
    }
    case 43485:
    {
        returnValue = F("Auf dem Hommerich");
        break;
    }
    case 43486:
    {
        returnValue = F("Auf dem Hook");
        break;
    }
    case 43487:
    {
        returnValue = F("Auf dem Hopfenberg");
        break;
    }
    case 43488:
    {
        returnValue = F("Auf dem Horn");
        break;
    }
    case 43489:
    {
        returnValue = F("Auf dem Horne");
        break;
    }
    case 43490:
    {
        returnValue = F("Auf dem Hosterns");
        break;
    }
    case 43491:
    {
        returnValue = F("Auf dem Hostert");
        break;
    }
    case 43492:
    {
        returnValue = F("Auf dem Hottenberge");
        break;
    }
    case 43493:
    {
        returnValue = F("Auf dem Howe");
        break;
    }
    case 43494:
    {
        returnValue = F("Auf dem Huchte");
        break;
    }
    case 43495:
    {
        returnValue = F("Auf dem Hufacker");
        break;
    }
    case 43496:
    {
        returnValue = F("Auf dem Humberg");
        break;
    }
    case 43497:
    {
        returnValue = F("Auf dem Hundsacker");
        break;
    }
    case 43498:
    {
        returnValue = F("Auf dem Hundshövel");
        break;
    }
    case 43499:
    {
        returnValue = F("Auf dem Hundsrück");
        break;
    }
    case 43500:
    {
        returnValue = F("Auf dem Hungerfelde");
        break;
    }
    case 43501:
    {
        returnValue = F("Auf dem Hunsrücken");
        break;
    }
    case 43502:
    {
        returnValue = F("Auf dem Huschten");
        break;
    }
    case 43503:
    {
        returnValue = F("Auf dem Häfken");
        break;
    }
    case 43504:
    {
        returnValue = F("Auf dem Hähnchen");
        break;
    }
    case 43505:
    {
        returnValue = F("Auf dem Hänning");
        break;
    }
    case 43506:
    {
        returnValue = F("Auf dem Härdtchen");
        break;
    }
    case 43507:
    {
        returnValue = F("Auf dem Häring");
        break;
    }
    case 43508:
    {
        returnValue = F("Auf dem Häselberg");
        break;
    }
    case 43509:
    {
        returnValue = F("Auf dem Häslich");
        break;
    }
    case 43510:
    {
        returnValue = F("Auf dem Höbel");
        break;
    }
    case 43511:
    {
        returnValue = F("Auf dem Höchst");
        break;
    }
    case 43512:
    {
        returnValue = F("Auf dem Höchsten");
        break;
    }
    case 43513:
    {
        returnValue = F("Auf dem Höfchen");
        break;
    }
    case 43514:
    {
        returnValue = F("Auf dem Höffchen");
        break;
    }
    case 43515:
    {
        returnValue = F("Auf dem Höhchen");
        break;
    }
    case 43516:
    {
        returnValue = F("Auf dem Höher Berg");
        break;
    }
    case 43517:
    {
        returnValue = F("Auf dem Hölsch");
        break;
    }
    case 43518:
    {
        returnValue = F("Auf dem Höppel");
        break;
    }
    case 43519:
    {
        returnValue = F("Auf dem Hörig");
        break;
    }
    case 43520:
    {
        returnValue = F("Auf dem Hörnchen");
        break;
    }
    case 43521:
    {
        returnValue = F("Auf dem Hösten");
        break;
    }
    case 43522:
    {
        returnValue = F("Auf dem Hövel");
        break;
    }
    case 43523:
    {
        returnValue = F("Auf dem Höverich");
        break;
    }
    case 43524:
    {
        returnValue = F("Auf dem Höwel");
        break;
    }
    case 43525:
    {
        returnValue = F("Auf dem Hübel");
        break;
    }
    case 43526:
    {
        returnValue = F("Auf dem Hügel");
        break;
    }
    case 43527:
    {
        returnValue = F("Auf dem Hügelchen");
        break;
    }
    case 43528:
    {
        returnValue = F("Auf dem Hüls");
        break;
    }
    case 43529:
    {
        returnValue = F("Auf dem Hünigen");
        break;
    }
    case 43530:
    {
        returnValue = F("Auf dem Hürter");
        break;
    }
    case 43531:
    {
        returnValue = F("Auf dem Hüttenbaum");
        break;
    }
    case 43532:
    {
        returnValue = F("Auf dem Hüttenberg");
        break;
    }
    case 43533:
    {
        returnValue = F("Auf dem Hüttenflur");
        break;
    }
    case 43534:
    {
        returnValue = F("Auf dem Hüwel");
        break;
    }
    case 43535:
    {
        returnValue = F("Auf dem Hüßloh");
        break;
    }
    case 43536:
    {
        returnValue = F("Auf dem Immel");
        break;
    }
    case 43537:
    {
        returnValue = F("Auf dem Int");
        break;
    }
    case 43538:
    {
        returnValue = F("Auf dem Ith");
        break;
    }
    case 43539:
    {
        returnValue = F("Auf dem Jacobsberg");
        break;
    }
    case 43540:
    {
        returnValue = F("Auf dem Jakob");
        break;
    }
    case 43541:
    {
        returnValue = F("Auf dem Jakobsberg");
        break;
    }
    case 43542:
    {
        returnValue = F("Auf dem Joch");
        break;
    }
    case 43543:
    {
        returnValue = F("Auf dem Jordan");
        break;
    }
    case 43544:
    {
        returnValue = F("Auf dem Judenbuckel");
        break;
    }
    case 43545:
    {
        returnValue = F("Auf dem Judenfriedhof");
        break;
    }
    case 43546:
    {
        returnValue = F("Auf dem Jägermorgen");
        break;
    }
    case 43547:
    {
        returnValue = F("Auf dem Kahn");
        break;
    }
    case 43548:
    {
        returnValue = F("Auf dem Kalk");
        break;
    }
    case 43549:
    {
        returnValue = F("Auf dem Kalke");
        break;
    }
    case 43550:
    {
        returnValue = F("Auf dem Kalkofen");
        break;
    }
    case 43551:
    {
        returnValue = F("Auf dem Kalköfele");
        break;
    }
    case 43552:
    {
        returnValue = F("Auf dem Kaltenhagen");
        break;
    }
    case 43553:
    {
        returnValue = F("Auf dem Kaltenstein");
        break;
    }
    case 43554:
    {
        returnValue = F("Auf dem Kalwerkamp");
        break;
    }
    case 43555:
    {
        returnValue = F("Auf dem Kamm");
        break;
    }
    case 43556:
    {
        returnValue = F("Auf dem Kamp");
        break;
    }
    case 43557:
    {
        returnValue = F("Auf dem Kampe");
        break;
    }
    case 43558:
    {
        returnValue = F("Auf dem Kampen");
        break;
    }
    case 43559:
    {
        returnValue = F("Auf dem Kapellberg");
        break;
    }
    case 43560:
    {
        returnValue = F("Auf dem Kapf");
        break;
    }
    case 43561:
    {
        returnValue = F("Auf dem Kasparhof");
        break;
    }
    case 43562:
    {
        returnValue = F("Auf dem Katmel");
        break;
    }
    case 43563:
    {
        returnValue = F("Auf dem Katzenberg");
        break;
    }
    case 43564:
    {
        returnValue = F("Auf dem Katzenkopf");
        break;
    }
    case 43565:
    {
        returnValue = F("Auf dem Kee");
        break;
    }
    case 43566:
    {
        returnValue = F("Auf dem Keiertstück");
        break;
    }
    case 43567:
    {
        returnValue = F("Auf dem Keil");
        break;
    }
    case 43568:
    {
        returnValue = F("Auf dem Keller");
        break;
    }
    case 43569:
    {
        returnValue = F("Auf dem Kellerberg");
        break;
    }
    case 43570:
    {
        returnValue = F("Auf dem Kern");
        break;
    }
    case 43571:
    {
        returnValue = F("Auf dem Kerslah");
        break;
    }
    case 43572:
    {
        returnValue = F("Auf dem Kertel");
        break;
    }
    case 43573:
    {
        returnValue = F("Auf dem Kessling");
        break;
    }
    case 43574:
    {
        returnValue = F("Auf dem Kiel");
        break;
    }
    case 43575:
    {
        returnValue = F("Auf dem Kiemel");
        break;
    }
    case 43576:
    {
        returnValue = F("Auf dem Kies");
        break;
    }
    case 43577:
    {
        returnValue = F("Auf dem Kiesel");
        break;
    }
    case 43578:
    {
        returnValue = F("Auf dem Kiewitt");
        break;
    }
    case 43579:
    {
        returnValue = F("Auf dem Kindergarten");
        break;
    }
    case 43580:
    {
        returnValue = F("Auf dem Kippel");
        break;
    }
    case 43581:
    {
        returnValue = F("Auf dem Kirchberg");
        break;
    }
    case 43582:
    {
        returnValue = F("Auf dem Kirchenflur");
        break;
    }
    case 43583:
    {
        returnValue = F("Auf dem Kirchenland");
        break;
    }
    case 43584:
    {
        returnValue = F("Auf dem Kirchenstück");
        break;
    }
    case 43585:
    {
        returnValue = F("Auf dem Kirchgarten");
        break;
    }
    case 43586:
    {
        returnValue = F("Auf dem Kirschbaum");
        break;
    }
    case 43587:
    {
        returnValue = F("Auf dem Kirschgarten");
        break;
    }
    case 43588:
    {
        returnValue = F("Auf dem Kiss");
        break;
    }
    case 43589:
    {
        returnValue = F("Auf dem Kissel");
        break;
    }
    case 43590:
    {
        returnValue = F("Auf dem Kissen");
        break;
    }
    case 43591:
    {
        returnValue = F("Auf dem Kiß");
        break;
    }
    case 43592:
    {
        returnValue = F("Auf dem Klap");
        break;
    }
    case 43593:
    {
        returnValue = F("Auf dem Klapperhagen");
        break;
    }
    case 43594:
    {
        returnValue = F("Auf dem Klebe");
        break;
    }
    case 43595:
    {
        returnValue = F("Auf dem Kleeblatt");
        break;
    }
    case 43596:
    {
        returnValue = F("Auf dem Kleehügel");
        break;
    }
    case 43597:
    {
        returnValue = F("Auf dem Klei");
        break;
    }
    case 43598:
    {
        returnValue = F("Auf dem Kleinen Berge");
        break;
    }
    case 43599:
    {
        returnValue = F("Auf dem Kleinfeld");
        break;
    }
    case 43600:
    {
        returnValue = F("Auf dem Klengenberg");
        break;
    }
    case 43601:
    {
        returnValue = F("Auf dem Kley");
        break;
    }
    case 43602:
    {
        returnValue = F("Auf dem Klimp");
        break;
    }
    case 43603:
    {
        returnValue = F("Auf dem Klimpe");
        break;
    }
    case 43604:
    {
        returnValue = F("Auf dem Klingberge");
        break;
    }
    case 43605:
    {
        returnValue = F("Auf dem Klingenberg");
        break;
    }
    case 43606:
    {
        returnValue = F("Auf dem Klink");
        break;
    }
    case 43607:
    {
        returnValue = F("Auf dem Klinkenberg");
        break;
    }
    case 43608:
    {
        returnValue = F("Auf dem Klinkgraben");
        break;
    }
    case 43609:
    {
        returnValue = F("Auf dem Klinte");
        break;
    }
    case 43610:
    {
        returnValue = F("Auf dem Klopp");
        break;
    }
    case 43611:
    {
        returnValue = F("Auf dem Kloster");
        break;
    }
    case 43612:
    {
        returnValue = F("Auf dem Kläpperchen");
        break;
    }
    case 43613:
    {
        returnValue = F("Auf dem Klöpfchen");
        break;
    }
    case 43614:
    {
        returnValue = F("Auf dem Klüschenberg");
        break;
    }
    case 43615:
    {
        returnValue = F("Auf dem Knapp");
        break;
    }
    case 43616:
    {
        returnValue = F("Auf dem Knappe");
        break;
    }
    case 43617:
    {
        returnValue = F("Auf dem Knipp");
        break;
    }
    case 43618:
    {
        returnValue = F("Auf dem Knippen");
        break;
    }
    case 43619:
    {
        returnValue = F("Auf dem Knochen");
        break;
    }
    case 43620:
    {
        returnValue = F("Auf dem Knopp");
        break;
    }
    case 43621:
    {
        returnValue = F("Auf dem Knorren");
        break;
    }
    case 43622:
    {
        returnValue = F("Auf dem Knupp");
        break;
    }
    case 43623:
    {
        returnValue = F("Auf dem Knüll");
        break;
    }
    case 43624:
    {
        returnValue = F("Auf dem Kohlert");
        break;
    }
    case 43625:
    {
        returnValue = F("Auf dem Kohlknippen");
        break;
    }
    case 43626:
    {
        returnValue = F("Auf dem Kolben");
        break;
    }
    case 43627:
    {
        returnValue = F("Auf dem Kolksbruch");
        break;
    }
    case 43628:
    {
        returnValue = F("Auf dem Kolven");
        break;
    }
    case 43629:
    {
        returnValue = F("Auf dem Kooten");
        break;
    }
    case 43630:
    {
        returnValue = F("Auf dem Kopf");
        break;
    }
    case 43631:
    {
        returnValue = F("Auf dem Koppel");
        break;
    }
    case 43632:
    {
        returnValue = F("Auf dem Kordel");
        break;
    }
    case 43633:
    {
        returnValue = F("Auf dem Kornfeld");
        break;
    }
    case 43634:
    {
        returnValue = F("Auf dem Kottenflürchen");
        break;
    }
    case 43635:
    {
        returnValue = F("Auf dem Krahwinkel");
        break;
    }
    case 43636:
    {
        returnValue = F("Auf dem Kramberg");
        break;
    }
    case 43637:
    {
        returnValue = F("Auf dem Kramer");
        break;
    }
    case 43638:
    {
        returnValue = F("Auf dem Krammerich");
        break;
    }
    case 43639:
    {
        returnValue = F("Auf dem Krein");
        break;
    }
    case 43640:
    {
        returnValue = F("Auf dem Kreis");
        break;
    }
    case 43641:
    {
        returnValue = F("Auf dem Kreutzer");
        break;
    }
    case 43642:
    {
        returnValue = F("Auf dem Kreuz");
        break;
    }
    case 43643:
    {
        returnValue = F("Auf dem Kreuzberg");
        break;
    }
    case 43644:
    {
        returnValue = F("Auf dem Kreuzfeld");
        break;
    }
    case 43645:
    {
        returnValue = F("Auf dem Kreuzgarten");
        break;
    }
    case 43646:
    {
        returnValue = F("Auf dem Kreuzmahd");
        break;
    }
    case 43647:
    {
        returnValue = F("Auf dem Kreuzweg");
        break;
    }
    case 43648:
    {
        returnValue = F("Auf dem Krittenschlag");
        break;
    }
    case 43649:
    {
        returnValue = F("Auf dem Krombach");
        break;
    }
    case 43650:
    {
        returnValue = F("Auf dem Kronenberg");
        break;
    }
    case 43651:
    {
        returnValue = F("Auf dem Kronert");
        break;
    }
    case 43652:
    {
        returnValue = F("Auf dem Kronsbach");
        break;
    }
    case 43653:
    {
        returnValue = F("Auf dem Krummstück");
        break;
    }
    case 43654:
    {
        returnValue = F("Auf dem Krönsen");
        break;
    }
    case 43655:
    {
        returnValue = F("Auf dem Krümpel");
        break;
    }
    case 43656:
    {
        returnValue = F("Auf dem Krüschen");
        break;
    }
    case 43657:
    {
        returnValue = F("Auf dem Kuckuck");
        break;
    }
    case 43658:
    {
        returnValue = F("Auf dem Kugelwasen");
        break;
    }
    case 43659:
    {
        returnValue = F("Auf dem Kuhberg");
        break;
    }
    case 43660:
    {
        returnValue = F("Auf dem Kuhblick");
        break;
    }
    case 43661:
    {
        returnValue = F("Auf dem Kuhkamp");
        break;
    }
    case 43662:
    {
        returnValue = F("Auf dem Kuhrehdel");
        break;
    }
    case 43663:
    {
        returnValue = F("Auf dem Kyberg");
        break;
    }
    case 43664:
    {
        returnValue = F("Auf dem Kämpen");
        break;
    }
    case 43665:
    {
        returnValue = F("Auf dem Känel");
        break;
    }
    case 43666:
    {
        returnValue = F("Auf dem Käulchen");
        break;
    }
    case 43667:
    {
        returnValue = F("Auf dem Köhlenbühl");
        break;
    }
    case 43668:
    {
        returnValue = F("Auf dem Köll");
        break;
    }
    case 43669:
    {
        returnValue = F("Auf dem Königsberg");
        break;
    }
    case 43670:
    {
        returnValue = F("Auf dem Köppchen");
        break;
    }
    case 43671:
    {
        returnValue = F("Auf dem Köppel");
        break;
    }
    case 43672:
    {
        returnValue = F("Auf dem Köppel I");
        break;
    }
    case 43673:
    {
        returnValue = F("Auf dem Köppel II");
        break;
    }
    case 43674:
    {
        returnValue = F("Auf dem Köppel III");
        break;
    }
    case 43675:
    {
        returnValue = F("Auf dem Küppel");
        break;
    }
    case 43676:
    {
        returnValue = F("Auf dem Land");
        break;
    }
    case 43677:
    {
        returnValue = F("Auf dem Lande");
        break;
    }
    case 43678:
    {
        returnValue = F("Auf dem Landgraben");
        break;
    }
    case 43679:
    {
        returnValue = F("Auf dem Langenbroich");
        break;
    }
    case 43680:
    {
        returnValue = F("Auf dem Langenfeld");
        break;
    }
    case 43681:
    {
        returnValue = F("Auf dem Langenfelde");
        break;
    }
    case 43682:
    {
        returnValue = F("Auf dem Langenhain");
        break;
    }
    case 43683:
    {
        returnValue = F("Auf dem Langert");
        break;
    }
    case 43684:
    {
        returnValue = F("Auf dem Langloos");
        break;
    }
    case 43685:
    {
        returnValue = F("Auf dem Langstück");
        break;
    }
    case 43686:
    {
        returnValue = F("Auf dem Langwehr");
        break;
    }
    case 43687:
    {
        returnValue = F("Auf dem Lau");
        break;
    }
    case 43688:
    {
        returnValue = F("Auf dem Lauborn");
        break;
    }
    case 43689:
    {
        returnValue = F("Auf dem Lay");
        break;
    }
    case 43690:
    {
        returnValue = F("Auf dem Leber");
        break;
    }
    case 43691:
    {
        returnValue = F("Auf dem Lechfeld");
        break;
    }
    case 43692:
    {
        returnValue = F("Auf dem Leger");
        break;
    }
    case 43693:
    {
        returnValue = F("Auf dem Leh");
        break;
    }
    case 43694:
    {
        returnValue = F("Auf dem Lehbuh");
        break;
    }
    case 43695:
    {
        returnValue = F("Auf dem Lehen");
        break;
    }
    case 43696:
    {
        returnValue = F("Auf dem Lehm");
        break;
    }
    case 43697:
    {
        returnValue = F("Auf dem Lehmberg");
        break;
    }
    case 43698:
    {
        returnValue = F("Auf dem Lehmrücken");
        break;
    }
    case 43699:
    {
        returnValue = F("Auf dem Lehnacker");
        break;
    }
    case 43700:
    {
        returnValue = F("Auf dem Leihen");
        break;
    }
    case 43701:
    {
        returnValue = F("Auf dem Leim");
        break;
    }
    case 43702:
    {
        returnValue = F("Auf dem Leimen");
        break;
    }
    case 43703:
    {
        returnValue = F("Auf dem Leisch");
        break;
    }
    case 43704:
    {
        returnValue = F("Auf dem Leitzberg");
        break;
    }
    case 43705:
    {
        returnValue = F("Auf dem Lerchenberg");
        break;
    }
    case 43706:
    {
        returnValue = F("Auf dem Lerchenfeld");
        break;
    }
    case 43707:
    {
        returnValue = F("Auf dem Lewrot");
        break;
    }
    case 43708:
    {
        returnValue = F("Auf dem Liechen");
        break;
    }
    case 43709:
    {
        returnValue = F("Auf dem Limes");
        break;
    }
    case 43710:
    {
        returnValue = F("Auf dem Lindenhof");
        break;
    }
    case 43711:
    {
        returnValue = F("Auf dem Linder");
        break;
    }
    case 43712:
    {
        returnValue = F("Auf dem Linnert");
        break;
    }
    case 43713:
    {
        returnValue = F("Auf dem Linnes");
        break;
    }
    case 43714:
    {
        returnValue = F("Auf dem Lockhorn");
        break;
    }
    case 43715:
    {
        returnValue = F("Auf dem Loh");
        break;
    }
    case 43716:
    {
        returnValue = F("Auf dem Lohberg");
        break;
    }
    case 43717:
    {
        returnValue = F("Auf dem Lohe");
        break;
    }
    case 43718:
    {
        returnValue = F("Auf dem Lohesch");
        break;
    }
    case 43719:
    {
        returnValue = F("Auf dem Lohkamp");
        break;
    }
    case 43720:
    {
        returnValue = F("Auf dem Lohn");
        break;
    }
    case 43721:
    {
        returnValue = F("Auf dem Lohne");
        break;
    }
    case 43722:
    {
        returnValue = F("Auf dem Lohrpfad");
        break;
    }
    case 43723:
    {
        returnValue = F("Auf dem Losfeld");
        break;
    }
    case 43724:
    {
        returnValue = F("Auf dem Lunderich");
        break;
    }
    case 43725:
    {
        returnValue = F("Auf dem Längert");
        break;
    }
    case 43726:
    {
        returnValue = F("Auf dem Länker");
        break;
    }
    case 43727:
    {
        returnValue = F("Auf dem Löh");
        break;
    }
    case 43728:
    {
        returnValue = F("Auf dem Löttringsen");
        break;
    }
    case 43729:
    {
        returnValue = F("Auf dem Löwenstück");
        break;
    }
    case 43730:
    {
        returnValue = F("Auf dem Lück");
        break;
    }
    case 43731:
    {
        returnValue = F("Auf dem Lüh");
        break;
    }
    case 43732:
    {
        returnValue = F("Auf dem Mackenberg");
        break;
    }
    case 43733:
    {
        returnValue = F("Auf dem Maindamm");
        break;
    }
    case 43734:
    {
        returnValue = F("Auf dem Maiskamp");
        break;
    }
    case 43735:
    {
        returnValue = F("Auf dem Mandahle");
        break;
    }
    case 43736:
    {
        returnValue = F("Auf dem Markstein");
        break;
    }
    case 43737:
    {
        returnValue = F("Auf dem Markstücken");
        break;
    }
    case 43738:
    {
        returnValue = F("Auf dem Marktplatz");
        break;
    }
    case 43739:
    {
        returnValue = F("Auf dem Martinsberg");
        break;
    }
    case 43740:
    {
        returnValue = F("Auf dem Meere");
        break;
    }
    case 43741:
    {
        returnValue = F("Auf dem Meerrain");
        break;
    }
    case 43742:
    {
        returnValue = F("Auf dem Meierhof");
        break;
    }
    case 43743:
    {
        returnValue = F("Auf dem Meisensohl");
        break;
    }
    case 43744:
    {
        returnValue = F("Auf dem Mesch");
        break;
    }
    case 43745:
    {
        returnValue = F("Auf dem Metterling");
        break;
    }
    case 43746:
    {
        returnValue = F("Auf dem Meyerhof");
        break;
    }
    case 43747:
    {
        returnValue = F("Auf dem Meyerhofe");
        break;
    }
    case 43748:
    {
        returnValue = F("Auf dem Mittelgraben");
        break;
    }
    case 43749:
    {
        returnValue = F("Auf dem Mittelkamp");
        break;
    }
    case 43750:
    {
        returnValue = F("Auf dem Mittelwege");
        break;
    }
    case 43751:
    {
        returnValue = F("Auf dem Mohnbleek");
        break;
    }
    case 43752:
    {
        returnValue = F("Auf dem Molzberg");
        break;
    }
    case 43753:
    {
        returnValue = F("Auf dem Monental");
        break;
    }
    case 43754:
    {
        returnValue = F("Auf dem Moordeich");
        break;
    }
    case 43755:
    {
        returnValue = F("Auf dem Moore");
        break;
    }
    case 43756:
    {
        returnValue = F("Auf dem Moorhofe");
        break;
    }
    case 43757:
    {
        returnValue = F("Auf dem Moorlande");
        break;
    }
    case 43758:
    {
        returnValue = F("Auf dem Moos");
        break;
    }
    case 43759:
    {
        returnValue = F("Auf dem Morgen");
        break;
    }
    case 43760:
    {
        returnValue = F("Auf dem Mull");
        break;
    }
    case 43761:
    {
        returnValue = F("Auf dem Märchen");
        break;
    }
    case 43762:
    {
        returnValue = F("Auf dem Mäuerchen");
        break;
    }
    case 43763:
    {
        returnValue = F("Auf dem Mäuerle");
        break;
    }
    case 43764:
    {
        returnValue = F("Auf dem Mölmen");
        break;
    }
    case 43765:
    {
        returnValue = F("Auf dem Mühlberg");
        break;
    }
    case 43766:
    {
        returnValue = F("Auf dem Mühlenberg");
        break;
    }
    case 43767:
    {
        returnValue = F("Auf dem Mühlenbungert");
        break;
    }
    case 43768:
    {
        returnValue = F("Auf dem Mühlenfeld");
        break;
    }
    case 43769:
    {
        returnValue = F("Auf dem Mühlenkamp");
        break;
    }
    case 43770:
    {
        returnValue = F("Auf dem Mühlenrech");
        break;
    }
    case 43771:
    {
        returnValue = F("Auf dem Mühlenstiege");
        break;
    }
    case 43772:
    {
        returnValue = F("Auf dem Mühlental");
        break;
    }
    case 43773:
    {
        returnValue = F("Auf dem Mühlgraben");
        break;
    }
    case 43774:
    {
        returnValue = F("Auf dem Mühlmerk");
        break;
    }
    case 43775:
    {
        returnValue = F("Auf dem Nagd");
        break;
    }
    case 43776:
    {
        returnValue = F("Auf dem Nagd / Falkenweg");
        break;
    }
    case 43777:
    {
        returnValue = F("Auf dem Nassen");
        break;
    }
    case 43778:
    {
        returnValue = F("Auf dem Nauberg");
        break;
    }
    case 43779:
    {
        returnValue = F("Auf dem Nebel");
        break;
    }
    case 43780:
    {
        returnValue = F("Auf dem Neuen Kampe");
        break;
    }
    case 43781:
    {
        returnValue = F("Auf dem Neuen Lande");
        break;
    }
    case 43782:
    {
        returnValue = F("Auf dem Niedern Bruch");
        break;
    }
    case 43783:
    {
        returnValue = F("Auf dem Nippes");
        break;
    }
    case 43784:
    {
        returnValue = F("Auf dem Nochen");
        break;
    }
    case 43785:
    {
        returnValue = F("Auf dem Nocken");
        break;
    }
    case 43786:
    {
        returnValue = F("Auf dem Nordhofe");
        break;
    }
    case 43787:
    {
        returnValue = F("Auf dem Nöchel");
        break;
    }
    case 43788:
    {
        returnValue = F("Auf dem Nüchel");
        break;
    }
    case 43789:
    {
        returnValue = F("Auf dem Oberen Hassel");
        break;
    }
    case 43790:
    {
        returnValue = F("Auf dem Oberen Petershof");
        break;
    }
    case 43791:
    {
        returnValue = F("Auf dem Oberfelde");
        break;
    }
    case 43792:
    {
        returnValue = F("Auf dem Ochsenmaul");
        break;
    }
    case 43793:
    {
        returnValue = F("Auf dem Oerden");
        break;
    }
    case 43794:
    {
        returnValue = F("Auf dem Ohlenberg");
        break;
    }
    case 43795:
    {
        returnValue = F("Auf dem Ornst");
        break;
    }
    case 43796:
    {
        returnValue = F("Auf dem Ort");
        break;
    }
    case 43797:
    {
        returnValue = F("Auf dem Osterberg");
        break;
    }
    case 43798:
    {
        returnValue = F("Auf dem Osterpfädchen");
        break;
    }
    case 43799:
    {
        returnValue = F("Auf dem Paisch");
        break;
    }
    case 43800:
    {
        returnValue = F("Auf dem Palmstein");
        break;
    }
    case 43801:
    {
        returnValue = F("Auf dem Panzenberg");
        break;
    }
    case 43802:
    {
        returnValue = F("Auf dem Papenstein");
        break;
    }
    case 43803:
    {
        returnValue = F("Auf dem Papierkamp");
        break;
    }
    case 43804:
    {
        returnValue = F("Auf dem Paradiese");
        break;
    }
    case 43805:
    {
        returnValue = F("Auf dem Paschhügel");
        break;
    }
    case 43806:
    {
        returnValue = F("Auf dem Patt");
        break;
    }
    case 43807:
    {
        returnValue = F("Auf dem Pattlande");
        break;
    }
    case 43808:
    {
        returnValue = F("Auf dem Pemel");
        break;
    }
    case 43809:
    {
        returnValue = F("Auf dem Perg");
        break;
    }
    case 43810:
    {
        returnValue = F("Auf dem Peter");
        break;
    }
    case 43811:
    {
        returnValue = F("Auf dem Pfad");
        break;
    }
    case 43812:
    {
        returnValue = F("Auf dem Pfahl");
        break;
    }
    case 43813:
    {
        returnValue = F("Auf dem Pfarrdriesch");
        break;
    }
    case 43814:
    {
        returnValue = F("Auf dem Pfarrland");
        break;
    }
    case 43815:
    {
        returnValue = F("Auf dem Pfarrstück");
        break;
    }
    case 43816:
    {
        returnValue = F("Auf dem Pfeiffen");
        break;
    }
    case 43817:
    {
        returnValue = F("Auf dem Pferdsborn");
        break;
    }
    case 43818:
    {
        returnValue = F("Auf dem Pfingstanger");
        break;
    }
    case 43819:
    {
        returnValue = F("Auf dem Pfingsthof");
        break;
    }
    case 43820:
    {
        returnValue = F("Auf dem Pfingstrasen");
        break;
    }
    case 43821:
    {
        returnValue = F("Auf dem Pflanzenberg");
        break;
    }
    case 43822:
    {
        returnValue = F("Auf dem Pflänzer");
        break;
    }
    case 43823:
    {
        returnValue = F("Auf dem Pfuhl");
        break;
    }
    case 43824:
    {
        returnValue = F("Auf dem Pilch");
        break;
    }
    case 43825:
    {
        returnValue = F("Auf dem Pitzberg");
        break;
    }
    case 43826:
    {
        returnValue = F("Auf dem Placke");
        break;
    }
    case 43827:
    {
        returnValue = F("Auf dem Placken");
        break;
    }
    case 43828:
    {
        returnValue = F("Auf dem Plage");
        break;
    }
    case 43829:
    {
        returnValue = F("Auf dem Plan");
        break;
    }
    case 43830:
    {
        returnValue = F("Auf dem Plane");
        break;
    }
    case 43831:
    {
        returnValue = F("Auf dem Platz");
        break;
    }
    case 43832:
    {
        returnValue = F("Auf dem Platze");
        break;
    }
    case 43833:
    {
        returnValue = F("Auf dem Plänzer");
        break;
    }
    case 43834:
    {
        returnValue = F("Auf dem Pohl");
        break;
    }
    case 43835:
    {
        returnValue = F("Auf dem Pol");
        break;
    }
    case 43836:
    {
        returnValue = F("Auf dem Pompbeuel");
        break;
    }
    case 43837:
    {
        returnValue = F("Auf dem Poppert");
        break;
    }
    case 43838:
    {
        returnValue = F("Auf dem Poss");
        break;
    }
    case 43839:
    {
        returnValue = F("Auf dem Possen");
        break;
    }
    case 43840:
    {
        returnValue = F("Auf dem Posten");
        break;
    }
    case 43841:
    {
        returnValue = F("Auf dem Praun");
        break;
    }
    case 43842:
    {
        returnValue = F("Auf dem Priel");
        break;
    }
    case 43843:
    {
        returnValue = F("Auf dem Pritzel");
        break;
    }
    case 43844:
    {
        returnValue = F("Auf dem Puhl");
        break;
    }
    case 43845:
    {
        returnValue = F("Auf dem Pörchen");
        break;
    }
    case 43846:
    {
        returnValue = F("Auf dem Quabben");
        break;
    }
    case 43847:
    {
        returnValue = F("Auf dem Quäcken");
        break;
    }
    case 43848:
    {
        returnValue = F("Auf dem Rabenfittich");
        break;
    }
    case 43849:
    {
        returnValue = F("Auf dem Radacker");
        break;
    }
    case 43850:
    {
        returnValue = F("Auf dem Rade");
        break;
    }
    case 43851:
    {
        returnValue = F("Auf dem Radeköppel");
        break;
    }
    case 43852:
    {
        returnValue = F("Auf dem Raden");
        break;
    }
    case 43853:
    {
        returnValue = F("Auf dem Rahden");
        break;
    }
    case 43854:
    {
        returnValue = F("Auf dem Rahe");
        break;
    }
    case 43855:
    {
        returnValue = F("Auf dem Rahm");
        break;
    }
    case 43856:
    {
        returnValue = F("Auf dem Rahmwall");
        break;
    }
    case 43857:
    {
        returnValue = F("Auf dem Rain");
        break;
    }
    case 43858:
    {
        returnValue = F("Auf dem Raine");
        break;
    }
    case 43859:
    {
        returnValue = F("Auf dem Ralande");
        break;
    }
    case 43860:
    {
        returnValue = F("Auf dem Rasen");
        break;
    }
    case 43861:
    {
        returnValue = F("Auf dem Rasselberg");
        break;
    }
    case 43862:
    {
        returnValue = F("Auf dem Rathe");
        break;
    }
    case 43863:
    {
        returnValue = F("Auf dem Rathwege");
        break;
    }
    case 43864:
    {
        returnValue = F("Auf dem Rausch");
        break;
    }
    case 43865:
    {
        returnValue = F("Auf dem Rech");
        break;
    }
    case 43866:
    {
        returnValue = F("Auf dem Reech");
        break;
    }
    case 43867:
    {
        returnValue = F("Auf dem Rehmke");
        break;
    }
    case 43868:
    {
        returnValue = F("Auf dem Reinsadel");
        break;
    }
    case 43869:
    {
        returnValue = F("Auf dem Reithen");
        break;
    }
    case 43870:
    {
        returnValue = F("Auf dem Reller");
        break;
    }
    case 43871:
    {
        returnValue = F("Auf dem Rempart");
        break;
    }
    case 43872:
    {
        returnValue = F("Auf dem Reusch");
        break;
    }
    case 43873:
    {
        returnValue = F("Auf dem Rheinberg");
        break;
    }
    case 43874:
    {
        returnValue = F("Auf dem Rheinblick");
        break;
    }
    case 43875:
    {
        returnValue = F("Auf dem Richtepatt");
        break;
    }
    case 43876:
    {
        returnValue = F("Auf dem Ried");
        break;
    }
    case 43877:
    {
        returnValue = F("Auf dem Riedel");
        break;
    }
    case 43878:
    {
        returnValue = F("Auf dem Riedwoog");
        break;
    }
    case 43879:
    {
        returnValue = F("Auf dem Ring");
        break;
    }
    case 43880:
    {
        returnValue = F("Auf dem Risch");
        break;
    }
    case 43881:
    {
        returnValue = F("Auf dem Rist");
        break;
    }
    case 43882:
    {
        returnValue = F("Auf dem Ritten");
        break;
    }
    case 43883:
    {
        returnValue = F("Auf dem Ritterfleck");
        break;
    }
    case 43884:
    {
        returnValue = F("Auf dem Rod");
        break;
    }
    case 43885:
    {
        returnValue = F("Auf dem Rodde");
        break;
    }
    case 43886:
    {
        returnValue = F("Auf dem Rode");
        break;
    }
    case 43887:
    {
        returnValue = F("Auf dem Rodeland");
        break;
    }
    case 43888:
    {
        returnValue = F("Auf dem Roden");
        break;
    }
    case 43889:
    {
        returnValue = F("Auf dem Rodt");
        break;
    }
    case 43890:
    {
        returnValue = F("Auf dem Rohborn");
        break;
    }
    case 43891:
    {
        returnValue = F("Auf dem Rohde");
        break;
    }
    case 43892:
    {
        returnValue = F("Auf dem Rohrkamp");
        break;
    }
    case 43893:
    {
        returnValue = F("Auf dem Roland");
        break;
    }
    case 43894:
    {
        returnValue = F("Auf dem Romert");
        break;
    }
    case 43895:
    {
        returnValue = F("Auf dem Roppels");
        break;
    }
    case 43896:
    {
        returnValue = F("Auf dem Rosack");
        break;
    }
    case 43897:
    {
        returnValue = F("Auf dem Rosenberg");
        break;
    }
    case 43898:
    {
        returnValue = F("Auf dem Rosengarten");
        break;
    }
    case 43899:
    {
        returnValue = F("Auf dem Rosenkämpchen");
        break;
    }
    case 43900:
    {
        returnValue = F("Auf dem Rosten");
        break;
    }
    case 43901:
    {
        returnValue = F("Auf dem Rotacker");
        break;
    }
    case 43902:
    {
        returnValue = F("Auf dem Rotbuck");
        break;
    }
    case 43903:
    {
        returnValue = F("Auf dem Roten Stein");
        break;
    }
    case 43904:
    {
        returnValue = F("Auf dem Roth");
        break;
    }
    case 43905:
    {
        returnValue = F("Auf dem Rothberg");
        break;
    }
    case 43906:
    {
        returnValue = F("Auf dem Rotlauf");
        break;
    }
    case 43907:
    {
        returnValue = F("Auf dem Rott");
        break;
    }
    case 43908:
    {
        returnValue = F("Auf dem Rottfeld");
        break;
    }
    case 43909:
    {
        returnValue = F("Auf dem Rottlande");
        break;
    }
    case 43910:
    {
        returnValue = F("Auf dem Roßbühl");
        break;
    }
    case 43911:
    {
        returnValue = F("Auf dem Roßschwamm");
        break;
    }
    case 43912:
    {
        returnValue = F("Auf dem Ruben");
        break;
    }
    case 43913:
    {
        returnValue = F("Auf dem Rucken");
        break;
    }
    case 43914:
    {
        returnValue = F("Auf dem Ruhbühl");
        break;
    }
    case 43915:
    {
        returnValue = F("Auf dem Rullstein");
        break;
    }
    case 43916:
    {
        returnValue = F("Auf dem Ruppels");
        break;
    }
    case 43917:
    {
        returnValue = F("Auf dem Rusch");
        break;
    }
    case 43918:
    {
        returnValue = F("Auf dem Rußkampe");
        break;
    }
    case 43919:
    {
        returnValue = F("Auf dem Rähden");
        break;
    }
    case 43920:
    {
        returnValue = F("Auf dem Rähmchen");
        break;
    }
    case 43921:
    {
        returnValue = F("Auf dem Rödchen");
        break;
    }
    case 43922:
    {
        returnValue = F("Auf dem Röden");
        break;
    }
    case 43923:
    {
        returnValue = F("Auf dem Röffel");
        break;
    }
    case 43924:
    {
        returnValue = F("Auf dem Römer");
        break;
    }
    case 43925:
    {
        returnValue = F("Auf dem Röthen");
        break;
    }
    case 43926:
    {
        returnValue = F("Auf dem Röttchen");
        break;
    }
    case 43927:
    {
        returnValue = F("Auf dem Rövekamp");
        break;
    }
    case 43928:
    {
        returnValue = F("Auf dem Rübenkämpchen");
        break;
    }
    case 43929:
    {
        returnValue = F("Auf dem Rübkamp");
        break;
    }
    case 43930:
    {
        returnValue = F("Auf dem Rück");
        break;
    }
    case 43931:
    {
        returnValue = F("Auf dem Rückardt");
        break;
    }
    case 43932:
    {
        returnValue = F("Auf dem Rügge");
        break;
    }
    case 43933:
    {
        returnValue = F("Auf dem Rümmer");
        break;
    }
    case 43934:
    {
        returnValue = F("Auf dem Rüppchen");
        break;
    }
    case 43935:
    {
        returnValue = F("Auf dem Rüschau");
        break;
    }
    case 43936:
    {
        returnValue = F("Auf dem Saal");
        break;
    }
    case 43937:
    {
        returnValue = F("Auf dem Saan");
        break;
    }
    case 43938:
    {
        returnValue = F("Auf dem Saatkamp");
        break;
    }
    case 43939:
    {
        returnValue = F("Auf dem Sabel");
        break;
    }
    case 43940:
    {
        returnValue = F("Auf dem Salzberge");
        break;
    }
    case 43941:
    {
        returnValue = F("Auf dem Salzmannstale");
        break;
    }
    case 43942:
    {
        returnValue = F("Auf dem Salzstock");
        break;
    }
    case 43943:
    {
        returnValue = F("Auf dem Sand");
        break;
    }
    case 43944:
    {
        returnValue = F("Auf dem Sandberg");
        break;
    }
    case 43945:
    {
        returnValue = F("Auf dem Sande");
        break;
    }
    case 43946:
    {
        returnValue = F("Auf dem Sandfeld");
        break;
    }
    case 43947:
    {
        returnValue = F("Auf dem Sann");
        break;
    }
    case 43948:
    {
        returnValue = F("Auf dem Sassenhagen");
        break;
    }
    case 43949:
    {
        returnValue = F("Auf dem Sattel");
        break;
    }
    case 43950:
    {
        returnValue = F("Auf dem Sauerfeld");
        break;
    }
    case 43951:
    {
        returnValue = F("Auf dem Schachen");
        break;
    }
    case 43952:
    {
        returnValue = F("Auf dem Schacht");
        break;
    }
    case 43953:
    {
        returnValue = F("Auf dem Schafhof");
        break;
    }
    case 43954:
    {
        returnValue = F("Auf dem Schafhofe");
        break;
    }
    case 43955:
    {
        returnValue = F("Auf dem Schafrain");
        break;
    }
    case 43956:
    {
        returnValue = F("Auf dem Schafstall");
        break;
    }
    case 43957:
    {
        returnValue = F("Auf dem Schafwasen");
        break;
    }
    case 43958:
    {
        returnValue = F("Auf dem Schagen");
        break;
    }
    case 43959:
    {
        returnValue = F("Auf dem Schalken");
        break;
    }
    case 43960:
    {
        returnValue = F("Auf dem Schamberg");
        break;
    }
    case 43961:
    {
        returnValue = F("Auf dem Schare");
        break;
    }
    case 43962:
    {
        returnValue = F("Auf dem Scharfen");
        break;
    }
    case 43963:
    {
        returnValue = F("Auf dem Schaumberg");
        break;
    }
    case 43964:
    {
        returnValue = F("Auf dem Scheckenhof");
        break;
    }
    case 43965:
    {
        returnValue = F("Auf dem Schee");
        break;
    }
    case 43966:
    {
        returnValue = F("Auf dem Scheid");
        break;
    }
    case 43967:
    {
        returnValue = F("Auf dem Scheit");
        break;
    }
    case 43968:
    {
        returnValue = F("Auf dem Scheitberg");
        break;
    }
    case 43969:
    {
        returnValue = F("Auf dem Schelberg");
        break;
    }
    case 43970:
    {
        returnValue = F("Auf dem Schelland");
        break;
    }
    case 43971:
    {
        returnValue = F("Auf dem Scheuberg");
        break;
    }
    case 43972:
    {
        returnValue = F("Auf dem Scheunenbrink");
        break;
    }
    case 43973:
    {
        returnValue = F("Auf dem Schiebel");
        break;
    }
    case 43974:
    {
        returnValue = F("Auf dem Schiefen Berge");
        break;
    }
    case 43975:
    {
        returnValue = F("Auf dem Schierlaykopf");
        break;
    }
    case 43976:
    {
        returnValue = F("Auf dem Schießberg");
        break;
    }
    case 43977:
    {
        returnValue = F("Auf dem Schild");
        break;
    }
    case 43978:
    {
        returnValue = F("Auf dem Schildchen");
        break;
    }
    case 43979:
    {
        returnValue = F("Auf dem Schilde");
        break;
    }
    case 43980:
    {
        returnValue = F("Auf dem Schildrain");
        break;
    }
    case 43981:
    {
        returnValue = F("Auf dem Schilken");
        break;
    }
    case 43982:
    {
        returnValue = F("Auf dem Schille");
        break;
    }
    case 43983:
    {
        returnValue = F("Auf dem Schilling");
        break;
    }
    case 43984:
    {
        returnValue = F("Auf dem Schimmel");
        break;
    }
    case 43985:
    {
        returnValue = F("Auf dem Schimmerich");
        break;
    }
    case 43986:
    {
        returnValue = F("Auf dem Schind");
        break;
    }
    case 43987:
    {
        returnValue = F("Auf dem Schipp");
        break;
    }
    case 43988:
    {
        returnValue = F("Auf dem Schlaage");
        break;
    }
    case 43989:
    {
        returnValue = F("Auf dem Schlackkamp");
        break;
    }
    case 43990:
    {
        returnValue = F("Auf dem Schlag");
        break;
    }
    case 43991:
    {
        returnValue = F("Auf dem Schlagstück");
        break;
    }
    case 43992:
    {
        returnValue = F("Auf dem Schlatt");
        break;
    }
    case 43993:
    {
        returnValue = F("Auf dem Schlaute");
        break;
    }
    case 43994:
    {
        returnValue = F("Auf dem Schleich");
        break;
    }
    case 43995:
    {
        returnValue = F("Auf dem Schleyhahn");
        break;
    }
    case 43996:
    {
        returnValue = F("Auf dem Schlinken");
        break;
    }
    case 43997:
    {
        returnValue = F("Auf dem Schloss");
        break;
    }
    case 43998:
    {
        returnValue = F("Auf dem Schlossbuckel");
        break;
    }
    case 43999:
    {
        returnValue = F("Auf dem Schloß");
        break;
    }
    case 44000:
    {
        returnValue = F("Auf dem Schloßberg");
        break;
    }
    case 44001:
    {
        returnValue = F("Auf dem Schnee");
        break;
    }
    case 44002:
    {
        returnValue = F("Auf dem Schneiderberg");
        break;
    }
    case 44003:
    {
        returnValue = F("Auf dem Schoor");
        break;
    }
    case 44004:
    {
        returnValue = F("Auf dem Schoppen");
        break;
    }
    case 44005:
    {
        returnValue = F("Auf dem Schoss");
        break;
    }
    case 44006:
    {
        returnValue = F("Auf dem Schreikampe");
        break;
    }
    case 44007:
    {
        returnValue = F("Auf dem Schulberg");
        break;
    }
    case 44008:
    {
        returnValue = F("Auf dem Schusterberg");
        break;
    }
    case 44009:
    {
        returnValue = F("Auf dem Schuß");
        break;
    }
    case 44010:
    {
        returnValue = F("Auf dem Schweinstrieb");
        break;
    }
    case 44011:
    {
        returnValue = F("Auf dem Schäferrain");
        break;
    }
    case 44012:
    {
        returnValue = F("Auf dem Schönberg");
        break;
    }
    case 44013:
    {
        returnValue = F("Auf dem Schönwasen");
        break;
    }
    case 44014:
    {
        returnValue = F("Auf dem Seel");
        break;
    }
    case 44015:
    {
        returnValue = F("Auf dem Seewald");
        break;
    }
    case 44016:
    {
        returnValue = F("Auf dem Seifen");
        break;
    }
    case 44017:
    {
        returnValue = F("Auf dem Semmelfeld");
        break;
    }
    case 44018:
    {
        returnValue = F("Auf dem Sessel");
        break;
    }
    case 44019:
    {
        returnValue = F("Auf dem Siebent");
        break;
    }
    case 44020:
    {
        returnValue = F("Auf dem Silberberg");
        break;
    }
    case 44021:
    {
        returnValue = F("Auf dem Sodenkamp");
        break;
    }
    case 44022:
    {
        returnValue = F("Auf dem Soder");
        break;
    }
    case 44023:
    {
        returnValue = F("Auf dem Sohl");
        break;
    }
    case 44024:
    {
        returnValue = F("Auf dem Sonnberg");
        break;
    }
    case 44025:
    {
        returnValue = F("Auf dem Sonnenberg");
        break;
    }
    case 44026:
    {
        returnValue = F("Auf dem Sonnenborn");
        break;
    }
    case 44027:
    {
        returnValue = F("Auf dem Sonnenhügel");
        break;
    }
    case 44028:
    {
        returnValue = F("Auf dem Sottland");
        break;
    }
    case 44029:
    {
        returnValue = F("Auf dem Spachel");
        break;
    }
    case 44030:
    {
        returnValue = F("Auf dem Sperlingsberg");
        break;
    }
    case 44031:
    {
        returnValue = F("Auf dem Spich");
        break;
    }
    case 44032:
    {
        returnValue = F("Auf dem Spieles");
        break;
    }
    case 44033:
    {
        returnValue = F("Auf dem Spilling");
        break;
    }
    case 44034:
    {
        returnValue = F("Auf dem Spinnweg");
        break;
    }
    case 44035:
    {
        returnValue = F("Auf dem Spitt");
        break;
    }
    case 44036:
    {
        returnValue = F("Auf dem Sportplatz");
        break;
    }
    case 44037:
    {
        returnValue = F("Auf dem Springe");
        break;
    }
    case 44038:
    {
        returnValue = F("Auf dem Sprung");
        break;
    }
    case 44039:
    {
        returnValue = F("Auf dem Spurk");
        break;
    }
    case 44040:
    {
        returnValue = F("Auf dem Spörgenkamp");
        break;
    }
    case 44041:
    {
        returnValue = F("Auf dem Staffel");
        break;
    }
    case 44042:
    {
        returnValue = F("Auf dem Stappen");
        break;
    }
    case 44043:
    {
        returnValue = F("Auf dem Statt");
        break;
    }
    case 44044:
    {
        returnValue = F("Auf dem Stausten");
        break;
    }
    case 44045:
    {
        returnValue = F("Auf dem Steeg");
        break;
    }
    case 44046:
    {
        returnValue = F("Auf dem Steg");
        break;
    }
    case 44047:
    {
        returnValue = F("Auf dem Stehberge");
        break;
    }
    case 44048:
    {
        returnValue = F("Auf dem Steig");
        break;
    }
    case 44049:
    {
        returnValue = F("Auf dem Stein");
        break;
    }
    case 44050:
    {
        returnValue = F("Auf dem Steinacker");
        break;
    }
    case 44051:
    {
        returnValue = F("Auf dem Steinbach");
        break;
    }
    case 44052:
    {
        returnValue = F("Auf dem Steinberg");
        break;
    }
    case 44053:
    {
        returnValue = F("Auf dem Steinbruch");
        break;
    }
    case 44054:
    {
        returnValue = F("Auf dem Steinbüchel");
        break;
    }
    case 44055:
    {
        returnValue = F("Auf dem Steinchen");
        break;
    }
    case 44056:
    {
        returnValue = F("Auf dem Steineberg");
        break;
    }
    case 44057:
    {
        returnValue = F("Auf dem Steinenberg");
        break;
    }
    case 44058:
    {
        returnValue = F("Auf dem Steingen");
        break;
    }
    case 44059:
    {
        returnValue = F("Auf dem Steinkamp");
        break;
    }
    case 44060:
    {
        returnValue = F("Auf dem Steinstück");
        break;
    }
    case 44061:
    {
        returnValue = F("Auf dem Steinwerder");
        break;
    }
    case 44062:
    {
        returnValue = F("Auf dem Stephansberg");
        break;
    }
    case 44063:
    {
        returnValue = F("Auf dem Stepken");
        break;
    }
    case 44064:
    {
        returnValue = F("Auf dem Stern");
        break;
    }
    case 44065:
    {
        returnValue = F("Auf dem Stich");
        break;
    }
    case 44066:
    {
        returnValue = F("Auf dem Stiel");
        break;
    }
    case 44067:
    {
        returnValue = F("Auf dem Stift");
        break;
    }
    case 44068:
    {
        returnValue = F("Auf dem Stifte");
        break;
    }
    case 44069:
    {
        returnValue = F("Auf dem Stiwäldchen");
        break;
    }
    case 44070:
    {
        returnValue = F("Auf dem Stock");
        break;
    }
    case 44071:
    {
        returnValue = F("Auf dem Stockacker");
        break;
    }
    case 44072:
    {
        returnValue = F("Auf dem Str.nberg");
        break;
    }
    case 44073:
    {
        returnValue = F("Auf dem Strautberg");
        break;
    }
    case 44074:
    {
        returnValue = F("Auf dem Strengel");
        break;
    }
    case 44075:
    {
        returnValue = F("Auf dem Strengelchen");
        break;
    }
    case 44076:
    {
        returnValue = F("Auf dem Strepel");
        break;
    }
    case 44077:
    {
        returnValue = F("Auf dem Strifft");
        break;
    }
    case 44078:
    {
        returnValue = F("Auf dem Stroh");
        break;
    }
    case 44079:
    {
        returnValue = F("Auf dem Strohe");
        break;
    }
    case 44080:
    {
        returnValue = F("Auf dem Stubben");
        break;
    }
    case 44081:
    {
        returnValue = F("Auf dem Stucks");
        break;
    }
    case 44082:
    {
        returnValue = F("Auf dem Stufenberg");
        break;
    }
    case 44083:
    {
        returnValue = F("Auf dem Stumpf");
        break;
    }
    case 44084:
    {
        returnValue = F("Auf dem Sturren");
        break;
    }
    case 44085:
    {
        returnValue = F("Auf dem Stück");
        break;
    }
    case 44086:
    {
        returnValue = F("Auf dem Stückchen");
        break;
    }
    case 44087:
    {
        returnValue = F("Auf dem Stüh");
        break;
    }
    case 44088:
    {
        returnValue = F("Auf dem Stühr");
        break;
    }
    case 44089:
    {
        returnValue = F("Auf dem Stümpfchen");
        break;
    }
    case 44090:
    {
        returnValue = F("Auf dem Sundern");
        break;
    }
    case 44091:
    {
        returnValue = F("Auf dem Sägeplatz");
        break;
    }
    case 44092:
    {
        returnValue = F("Auf dem Sülle");
        break;
    }
    case 44093:
    {
        returnValue = F("Auf dem Sündern");
        break;
    }
    case 44094:
    {
        returnValue = F("Auf dem Tal");
        break;
    }
    case 44095:
    {
        returnValue = F("Auf dem Talrain");
        break;
    }
    case 44096:
    {
        returnValue = F("Auf dem Tannenberg");
        break;
    }
    case 44097:
    {
        returnValue = F("Auf dem Tanzplatz");
        break;
    }
    case 44098:
    {
        returnValue = F("Auf dem Taubhaus");
        break;
    }
    case 44099:
    {
        returnValue = F("Auf dem Teich");
        break;
    }
    case 44100:
    {
        returnValue = F("Auf dem Teichberge");
        break;
    }
    case 44101:
    {
        returnValue = F("Auf dem Teiche");
        break;
    }
    case 44102:
    {
        returnValue = F("Auf dem Tellkamp");
        break;
    }
    case 44103:
    {
        returnValue = F("Auf dem Tempel");
        break;
    }
    case 44104:
    {
        returnValue = F("Auf dem Terlich");
        break;
    }
    case 44105:
    {
        returnValue = F("Auf dem Teurenkauf");
        break;
    }
    case 44106:
    {
        returnValue = F("Auf dem Thie");
        break;
    }
    case 44107:
    {
        returnValue = F("Auf dem Thones");
        break;
    }
    case 44108:
    {
        returnValue = F("Auf dem Tigge");
        break;
    }
    case 44109:
    {
        returnValue = F("Auf dem Tischlerland");
        break;
    }
    case 44110:
    {
        returnValue = F("Auf dem Tonacker");
        break;
    }
    case 44111:
    {
        returnValue = F("Auf dem Tonberge");
        break;
    }
    case 44112:
    {
        returnValue = F("Auf dem Tor");
        break;
    }
    case 44113:
    {
        returnValue = F("Auf dem Tortelberge");
        break;
    }
    case 44114:
    {
        returnValue = F("Auf dem Treppchen");
        break;
    }
    case 44115:
    {
        returnValue = F("Auf dem Tribunal");
        break;
    }
    case 44116:
    {
        returnValue = F("Auf dem Trieb");
        break;
    }
    case 44117:
    {
        returnValue = F("Auf dem Triesch");
        break;
    }
    case 44118:
    {
        returnValue = F("Auf dem Tripp");
        break;
    }
    case 44119:
    {
        returnValue = F("Auf dem Troppenbruch");
        break;
    }
    case 44120:
    {
        returnValue = F("Auf dem Träuschfeld");
        break;
    }
    case 44121:
    {
        returnValue = F("Auf dem Tunnel");
        break;
    }
    case 44122:
    {
        returnValue = F("Auf dem Turnerplatz");
        break;
    }
    case 44123:
    {
        returnValue = F("Auf dem Ufer");
        break;
    }
    case 44124:
    {
        returnValue = F("Auf dem Umgang");
        break;
    }
    case 44125:
    {
        returnValue = F("Auf dem Unner");
        break;
    }
    case 44126:
    {
        returnValue = F("Auf dem Vender");
        break;
    }
    case 44127:
    {
        returnValue = F("Auf dem Venn");
        break;
    }
    case 44128:
    {
        returnValue = F("Auf dem Vennberg");
        break;
    }
    case 44129:
    {
        returnValue = F("Auf dem Versandweg");
        break;
    }
    case 44130:
    {
        returnValue = F("Auf dem Viertel");
        break;
    }
    case 44131:
    {
        returnValue = F("Auf dem Vietsmorgen");
        break;
    }
    case 44132:
    {
        returnValue = F("Auf dem Vievacker");
        break;
    }
    case 44133:
    {
        returnValue = F("Auf dem Vogelherd");
        break;
    }
    case 44134:
    {
        returnValue = F("Auf dem Vogelsgesang");
        break;
    }
    case 44135:
    {
        returnValue = F("Auf dem Volke");
        break;
    }
    case 44136:
    {
        returnValue = F("Auf dem Vorfeld");
        break;
    }
    case 44137:
    {
        returnValue = F("Auf dem Vorrel");
        break;
    }
    case 44138:
    {
        returnValue = F("Auf dem Voßberge");
        break;
    }
    case 44139:
    {
        returnValue = F("Auf dem Völker");
        break;
    }
    case 44140:
    {
        returnValue = F("Auf dem Waas");
        break;
    }
    case 44141:
    {
        returnValue = F("Auf dem Waasem");
        break;
    }
    case 44142:
    {
        returnValue = F("Auf dem Wachtfelsen");
        break;
    }
    case 44143:
    {
        returnValue = F("Auf dem Wachtlande");
        break;
    }
    case 44144:
    {
        returnValue = F("Auf dem Wacken");
        break;
    }
    case 44145:
    {
        returnValue = F("Auf dem Wall");
        break;
    }
    case 44146:
    {
        returnValue = F("Auf dem Walle");
        break;
    }
    case 44147:
    {
        returnValue = F("Auf dem Walzel");
        break;
    }
    case 44148:
    {
        returnValue = F("Auf dem Wandel");
        break;
    }
    case 44149:
    {
        returnValue = F("Auf dem Warteberg");
        break;
    }
    case 44150:
    {
        returnValue = F("Auf dem Wasem");
        break;
    }
    case 44151:
    {
        returnValue = F("Auf dem Wasen");
        break;
    }
    case 44152:
    {
        returnValue = F("Auf dem Wasser");
        break;
    }
    case 44153:
    {
        returnValue = F("Auf dem Wasserturm");
        break;
    }
    case 44154:
    {
        returnValue = F("Auf dem Weedeland");
        break;
    }
    case 44155:
    {
        returnValue = F("Auf dem Weel");
        break;
    }
    case 44156:
    {
        returnValue = F("Auf dem Wehrgarten");
        break;
    }
    case 44157:
    {
        returnValue = F("Auf dem Wehrt");
        break;
    }
    case 44158:
    {
        returnValue = F("Auf dem Weidedeich");
        break;
    }
    case 44159:
    {
        returnValue = F("Auf dem Weidenkopf");
        break;
    }
    case 44160:
    {
        returnValue = F("Auf dem Weidinger");
        break;
    }
    case 44161:
    {
        returnValue = F("Auf dem Weier");
        break;
    }
    case 44162:
    {
        returnValue = F("Auf dem Weihen");
        break;
    }
    case 44163:
    {
        returnValue = F("Auf dem Weiher");
        break;
    }
    case 44164:
    {
        returnValue = F("Auf dem Weiherchen");
        break;
    }
    case 44165:
    {
        returnValue = F("Auf dem Weiherstein");
        break;
    }
    case 44166:
    {
        returnValue = F("Auf dem Weikershain");
        break;
    }
    case 44167:
    {
        returnValue = F("Auf dem Weinberg");
        break;
    }
    case 44168:
    {
        returnValue = F("Auf dem Weingarten");
        break;
    }
    case 44169:
    {
        returnValue = F("Auf dem Weisenland");
        break;
    }
    case 44170:
    {
        returnValue = F("Auf dem Weisling");
        break;
    }
    case 44171:
    {
        returnValue = F("Auf dem Weisrink");
        break;
    }
    case 44172:
    {
        returnValue = F("Auf dem Weiters");
        break;
    }
    case 44173:
    {
        returnValue = F("Auf dem Weißenborn");
        break;
    }
    case 44174:
    {
        returnValue = F("Auf dem Weißgerber");
        break;
    }
    case 44175:
    {
        returnValue = F("Auf dem Wenden");
        break;
    }
    case 44176:
    {
        returnValue = F("Auf dem Wentzenrod");
        break;
    }
    case 44177:
    {
        returnValue = F("Auf dem Werder");
        break;
    }
    case 44178:
    {
        returnValue = F("Auf dem Werkfeld");
        break;
    }
    case 44179:
    {
        returnValue = F("Auf dem Wert");
        break;
    }
    case 44180:
    {
        returnValue = F("Auf dem Werth");
        break;
    }
    case 44181:
    {
        returnValue = F("Auf dem Westerfelde");
        break;
    }
    case 44182:
    {
        returnValue = F("Auf dem Westkamp");
        break;
    }
    case 44183:
    {
        returnValue = F("Auf dem Wichtel");
        break;
    }
    case 44184:
    {
        returnValue = F("Auf dem Wickchen");
        break;
    }
    case 44185:
    {
        returnValue = F("Auf dem Wickert");
        break;
    }
    case 44186:
    {
        returnValue = F("Auf dem Wickscheid");
        break;
    }
    case 44187:
    {
        returnValue = F("Auf dem Widdum");
        break;
    }
    case 44188:
    {
        returnValue = F("Auf dem Wieferich");
        break;
    }
    case 44189:
    {
        returnValue = F("Auf dem Wiehe");
        break;
    }
    case 44190:
    {
        returnValue = F("Auf dem Wiehern");
        break;
    }
    case 44191:
    {
        returnValue = F("Auf dem Wieksberg");
        break;
    }
    case 44192:
    {
        returnValue = F("Auf dem Wieschen");
        break;
    }
    case 44193:
    {
        returnValue = F("Auf dem Wiesenberg");
        break;
    }
    case 44194:
    {
        returnValue = F("Auf dem Wiesenböhl");
        break;
    }
    case 44195:
    {
        returnValue = F("Auf dem Wiesengraben");
        break;
    }
    case 44196:
    {
        returnValue = F("Auf dem Wiesenplatz");
        break;
    }
    case 44197:
    {
        returnValue = F("Auf dem Wieshof");
        break;
    }
    case 44198:
    {
        returnValue = F("Auf dem Wilcher");
        break;
    }
    case 44199:
    {
        returnValue = F("Auf dem Wildhagen");
        break;
    }
    case 44200:
    {
        returnValue = F("Auf dem Willem");
        break;
    }
    case 44201:
    {
        returnValue = F("Auf dem Wind");
        break;
    }
    case 44202:
    {
        returnValue = F("Auf dem Windmühlenberge");
        break;
    }
    case 44203:
    {
        returnValue = F("Auf dem Wingert");
        break;
    }
    case 44204:
    {
        returnValue = F("Auf dem Wingerter");
        break;
    }
    case 44205:
    {
        returnValue = F("Auf dem Winkel");
        break;
    }
    case 44206:
    {
        returnValue = F("Auf dem Winneweg");
        break;
    }
    case 44207:
    {
        returnValue = F("Auf dem Winterberg");
        break;
    }
    case 44208:
    {
        returnValue = F("Auf dem Winterfeld");
        break;
    }
    case 44209:
    {
        returnValue = F("Auf dem Wintersberg");
        break;
    }
    case 44210:
    {
        returnValue = F("Auf dem Wirtsstück");
        break;
    }
    case 44211:
    {
        returnValue = F("Auf dem Wischelchen");
        break;
    }
    case 44212:
    {
        returnValue = F("Auf dem Wittel");
        break;
    }
    case 44213:
    {
        returnValue = F("Auf dem Wittenberge");
        break;
    }
    case 44214:
    {
        returnValue = F("Auf dem Wißbonnen");
        break;
    }
    case 44215:
    {
        returnValue = F("Auf dem Wolfsberg");
        break;
    }
    case 44216:
    {
        returnValue = F("Auf dem Wollerscheid");
        break;
    }
    case 44217:
    {
        returnValue = F("Auf dem Woopen");
        break;
    }
    case 44218:
    {
        returnValue = F("Auf dem Wällenberg");
        break;
    }
    case 44219:
    {
        returnValue = F("Auf dem Wäschbleul");
        break;
    }
    case 44220:
    {
        returnValue = F("Auf dem Wäscher");
        break;
    }
    case 44221:
    {
        returnValue = F("Auf dem Wört");
        break;
    }
    case 44222:
    {
        returnValue = F("Auf dem Wörth");
        break;
    }
    case 44223:
    {
        returnValue = F("Auf dem Wümsch");
        break;
    }
    case 44224:
    {
        returnValue = F("Auf dem Zaumerich");
        break;
    }
    case 44225:
    {
        returnValue = F("Auf dem Zaun");
        break;
    }
    case 44226:
    {
        returnValue = F("Auf dem Zehnthöbel");
        break;
    }
    case 44227:
    {
        returnValue = F("Auf dem Zetel");
        break;
    }
    case 44228:
    {
        returnValue = F("Auf dem Ziegenberge");
        break;
    }
    case 44229:
    {
        returnValue = F("Auf dem Zieglers");
        break;
    }
    case 44230:
    {
        returnValue = F("Auf dem Ziel");
        break;
    }
    case 44231:
    {
        returnValue = F("Auf dem Ziemberg");
        break;
    }
    case 44232:
    {
        returnValue = F("Auf dem Zilles");
        break;
    }
    case 44233:
    {
        returnValue = F("Auf dem Zimmermann");
        break;
    }
    case 44234:
    {
        returnValue = F("Auf dem Zimmerplatz");
        break;
    }
    case 44235:
    {
        returnValue = F("Auf dem Zohlsfeld");
        break;
    }
    case 44236:
    {
        returnValue = F("Auf dem Zollhof");
        break;
    }
    case 44237:
    {
        returnValue = F("Auf dem Zuckerberg");
        break;
    }
    case 44238:
    {
        returnValue = F("Auf dem Zuschlag");
        break;
    }
    case 44239:
    {
        returnValue = F("Auf dem Zäunchen");
        break;
    }
    case 44240:
    {
        returnValue = F("Auf dem alten Berg");
        break;
    }
    case 44241:
    {
        returnValue = F("Auf dem alten Garten");
        break;
    }
    case 44242:
    {
        returnValue = F("Auf dem alten Hof");
        break;
    }
    case 44243:
    {
        returnValue = F("Auf dem alten Sportplatz");
        break;
    }
    case 44244:
    {
        returnValue = F("Auf dem großen Stück");
        break;
    }
    case 44245:
    {
        returnValue = F("Auf dem hohen Hügel");
        break;
    }
    case 44246:
    {
        returnValue = F("Auf dem hohen Rain");
        break;
    }
    case 44247:
    {
        returnValue = F("Auf dem kleinen Felde");
        break;
    }
    case 44248:
    {
        returnValue = F("Auf dem kleinen Hügel");
        break;
    }
    case 44249:
    {
        returnValue = F("Auf dem langen Garten");
        break;
    }
    case 44250:
    {
        returnValue = F("Auf dem langen Morgen");
        break;
    }
    case 44251:
    {
        returnValue = F("Auf dem langen Stück");
        break;
    }
    case 44252:
    {
        returnValue = F("Auf dem oberen Ende");
        break;
    }
    case 44253:
    {
        returnValue = F("Auf dem roten Felde");
        break;
    }
    case 44254:
    {
        returnValue = F("Auf dem unteren Kreuzstück");
        break;
    }
    case 44255:
    {
        returnValue = F("Auf dem weißen Berg");
        break;
    }
    case 44256:
    {
        returnValue = F("Auf dem Äcker");
        break;
    }
    case 44257:
    {
        returnValue = F("Auf dem Äckerchen");
        break;
    }
    case 44258:
    {
        returnValue = F("Auf dem Öhlig");
        break;
    }
    case 44259:
    {
        returnValue = F("Auf dem Ösch");
        break;
    }
    case 44260:
    {
        returnValue = F("Auf dem Überloor");
        break;
    }
    case 44261:
    {
        returnValue = F("Auf den Aachen");
        break;
    }
    case 44262:
    {
        returnValue = F("Auf den Acht Morgen");
        break;
    }
    case 44263:
    {
        returnValue = F("Auf den Athen");
        break;
    }
    case 44264:
    {
        returnValue = F("Auf den Bann");
        break;
    }
    case 44265:
    {
        returnValue = F("Auf den Beeten");
        break;
    }
    case 44266:
    {
        returnValue = F("Auf den Behnen");
        break;
    }
    case 44267:
    {
        returnValue = F("Auf den Benden");
        break;
    }
    case 44268:
    {
        returnValue = F("Auf den Benken");
        break;
    }
    case 44269:
    {
        returnValue = F("Auf den Bergen");
        break;
    }
    case 44270:
    {
        returnValue = F("Auf den Berken");
        break;
    }
    case 44271:
    {
        returnValue = F("Auf den Besenäckern");
        break;
    }
    case 44272:
    {
        returnValue = F("Auf den Betzen");
        break;
    }
    case 44273:
    {
        returnValue = F("Auf den Biegen");
        break;
    }
    case 44274:
    {
        returnValue = F("Auf den Birken");
        break;
    }
    case 44275:
    {
        returnValue = F("Auf den Bitzen");
        break;
    }
    case 44276:
    {
        returnValue = F("Auf den Bleeken");
        break;
    }
    case 44277:
    {
        returnValue = F("Auf den Blöcken");
        break;
    }
    case 44278:
    {
        returnValue = F("Auf den Bracken");
        break;
    }
    case 44279:
    {
        returnValue = F("Auf den Breien");
        break;
    }
    case 44280:
    {
        returnValue = F("Auf den Breiten");
        break;
    }
    case 44281:
    {
        returnValue = F("Auf den Bremestücken");
        break;
    }
    case 44282:
    {
        returnValue = F("Auf den Brennen");
        break;
    }
    case 44283:
    {
        returnValue = F("Auf den Bröken");
        break;
    }
    case 44284:
    {
        returnValue = F("Auf den Brüchen");
        break;
    }
    case 44285:
    {
        returnValue = F("Auf den Bungerten");
        break;
    }
    case 44286:
    {
        returnValue = F("Auf den Bühren");
        break;
    }
    case 44287:
    {
        returnValue = F("Auf den Bülten");
        break;
    }
    case 44288:
    {
        returnValue = F("Auf den Dellen");
        break;
    }
    case 44289:
    {
        returnValue = F("Auf den Diekackern");
        break;
    }
    case 44290:
    {
        returnValue = F("Auf den Doren");
        break;
    }
    case 44291:
    {
        returnValue = F("Auf den Dornen");
        break;
    }
    case 44292:
    {
        returnValue = F("Auf den Drei Morgen");
        break;
    }
    case 44293:
    {
        returnValue = F("Auf den Dreimorgen");
        break;
    }
    case 44294:
    {
        returnValue = F("Auf den Drieschern");
        break;
    }
    case 44295:
    {
        returnValue = F("Auf den Dünen");
        break;
    }
    case 44296:
    {
        returnValue = F("Auf den Eichen");
        break;
    }
    case 44297:
    {
        returnValue = F("Auf den Eichhöfen");
        break;
    }
    case 44298:
    {
        returnValue = F("Auf den Eicken");
        break;
    }
    case 44299:
    {
        returnValue = F("Auf den Eisen");
        break;
    }
    case 44300:
    {
        returnValue = F("Auf den Elfmorgen");
        break;
    }
    case 44301:
    {
        returnValue = F("Auf den Ellern");
        break;
    }
    case 44302:
    {
        returnValue = F("Auf den Engelwiesen");
        break;
    }
    case 44303:
    {
        returnValue = F("Auf den Erlen");
        break;
    }
    case 44304:
    {
        returnValue = F("Auf den Eschenäckern");
        break;
    }
    case 44305:
    {
        returnValue = F("Auf den Espen");
        break;
    }
    case 44306:
    {
        returnValue = F("Auf den Feldern");
        break;
    }
    case 44307:
    {
        returnValue = F("Auf den Feldäckern");
        break;
    }
    case 44308:
    {
        returnValue = F("Auf den Felsen");
        break;
    }
    case 44309:
    {
        returnValue = F("Auf den Fennen");
        break;
    }
    case 44310:
    {
        returnValue = F("Auf den Flur");
        break;
    }
    case 44311:
    {
        returnValue = F("Auf den Frohndäckern");
        break;
    }
    case 44312:
    {
        returnValue = F("Auf den Fuchslöchern");
        break;
    }
    case 44313:
    {
        returnValue = F("Auf den Gebinden");
        break;
    }
    case 44314:
    {
        returnValue = F("Auf den Gehren");
        break;
    }
    case 44315:
    {
        returnValue = F("Auf den Gemeindehöfen");
        break;
    }
    case 44316:
    {
        returnValue = F("Auf den Gruben");
        break;
    }
    case 44317:
    {
        returnValue = F("Auf den Gräben");
        break;
    }
    case 44318:
    {
        returnValue = F("Auf den Grünerlen");
        break;
    }
    case 44319:
    {
        returnValue = F("Auf den Gänsewiesen");
        break;
    }
    case 44320:
    {
        returnValue = F("Auf den Gärten");
        break;
    }
    case 44321:
    {
        returnValue = F("Auf den Gütern");
        break;
    }
    case 44322:
    {
        returnValue = F("Auf den Haaren");
        break;
    }
    case 44323:
    {
        returnValue = F("Auf den Haien");
        break;
    }
    case 44324:
    {
        returnValue = F("Auf den Halden");
        break;
    }
    case 44325:
    {
        returnValue = F("Auf den Hallen");
        break;
    }
    case 44326:
    {
        returnValue = F("Auf den Hauen");
        break;
    }
    case 44327:
    {
        returnValue = F("Auf den Heeresbenden");
        break;
    }
    case 44328:
    {
        returnValue = F("Auf den Heidäckern");
        break;
    }
    case 44329:
    {
        returnValue = F("Auf den Heilberg");
        break;
    }
    case 44330:
    {
        returnValue = F("Auf den Heseln");
        break;
    }
    case 44331:
    {
        returnValue = F("Auf den Hoecken");
        break;
    }
    case 44332:
    {
        returnValue = F("Auf den Hohen Gräben");
        break;
    }
    case 44333:
    {
        returnValue = F("Auf den Hollen");
        break;
    }
    case 44334:
    {
        returnValue = F("Auf den Hufenstücken");
        break;
    }
    case 44335:
    {
        returnValue = F("Auf den Hundstangen");
        break;
    }
    case 44336:
    {
        returnValue = F("Auf den Hähnen");
        break;
    }
    case 44337:
    {
        returnValue = F("Auf den Häusern");
        break;
    }
    case 44338:
    {
        returnValue = F("Auf den Höfen");
        break;
    }
    case 44339:
    {
        returnValue = F("Auf den Höfften");
        break;
    }
    case 44340:
    {
        returnValue = F("Auf den Höhen");
        break;
    }
    case 44341:
    {
        returnValue = F("Auf den Hörnern");
        break;
    }
    case 44342:
    {
        returnValue = F("Auf den Hüften");
        break;
    }
    case 44343:
    {
        returnValue = F("Auf den Hüllen");
        break;
    }
    case 44344:
    {
        returnValue = F("Auf den Hüpperpäulen");
        break;
    }
    case 44345:
    {
        returnValue = F("Auf den Kampen");
        break;
    }
    case 44346:
    {
        returnValue = F("Auf den Kaulen");
        break;
    }
    case 44347:
    {
        returnValue = F("Auf den Kellern");
        break;
    }
    case 44348:
    {
        returnValue = F("Auf den Kiesäckern");
        break;
    }
    case 44349:
    {
        returnValue = F("Auf den Kleinen Steinen");
        break;
    }
    case 44350:
    {
        returnValue = F("Auf den Klippen");
        break;
    }
    case 44351:
    {
        returnValue = F("Auf den Klutenstücken");
        break;
    }
    case 44352:
    {
        returnValue = F("Auf den Knollen");
        break;
    }
    case 44353:
    {
        returnValue = F("Auf den Kohlhöfen");
        break;
    }
    case 44354:
    {
        returnValue = F("Auf den Koppeln");
        break;
    }
    case 44355:
    {
        returnValue = F("Auf den Krautgärten");
        break;
    }
    case 44356:
    {
        returnValue = F("Auf den Krautsatteln");
        break;
    }
    case 44357:
    {
        returnValue = F("Auf den Kreuzen");
        break;
    }
    case 44358:
    {
        returnValue = F("Auf den Krögen");
        break;
    }
    case 44359:
    {
        returnValue = F("Auf den Krücken");
        break;
    }
    case 44360:
    {
        returnValue = F("Auf den Kuhlen");
        break;
    }
    case 44361:
    {
        returnValue = F("Auf den Kämpen");
        break;
    }
    case 44362:
    {
        returnValue = F("Auf den Kämpen Dorf 10");
        break;
    }
    case 44363:
    {
        returnValue = F("Auf den Kämpen Dorf 12");
        break;
    }
    case 44364:
    {
        returnValue = F("Auf den Kämpen Dorf 13");
        break;
    }
    case 44365:
    {
        returnValue = F("Auf den Kämpen Dorf 3");
        break;
    }
    case 44366:
    {
        returnValue = F("Auf den Kämpen Dorf 4");
        break;
    }
    case 44367:
    {
        returnValue = F("Auf den Kämpen Dorf 5");
        break;
    }
    case 44368:
    {
        returnValue = F("Auf den Kämpen Dorf 6");
        break;
    }
    case 44369:
    {
        returnValue = F("Auf den Kämpen Dorf 7");
        break;
    }
    case 44370:
    {
        returnValue = F("Auf den Kämpen Dorf 8");
        break;
    }
    case 44371:
    {
        returnValue = F("Auf den Kämpen Dorf 9");
        break;
    }
    case 44372:
    {
        returnValue = F("Auf den Köppen");
        break;
    }
    case 44373:
    {
        returnValue = F("Auf den Köven");
        break;
    }
    case 44374:
    {
        returnValue = F("Auf den Lehen");
        break;
    }
    case 44375:
    {
        returnValue = F("Auf den Lerchen");
        break;
    }
    case 44376:
    {
        returnValue = F("Auf den Linteln");
        break;
    }
    case 44377:
    {
        returnValue = F("Auf den Mauern");
        break;
    }
    case 44378:
    {
        returnValue = F("Auf den Mauren");
        break;
    }
    case 44379:
    {
        returnValue = F("Auf den Metten");
        break;
    }
    case 44380:
    {
        returnValue = F("Auf den Middeln");
        break;
    }
    case 44381:
    {
        returnValue = F("Auf den Morgen");
        break;
    }
    case 44382:
    {
        returnValue = F("Auf den Mushöfen");
        break;
    }
    case 44383:
    {
        returnValue = F("Auf den Niederwiesen");
        break;
    }
    case 44384:
    {
        returnValue = F("Auf den Oberfeldern");
        break;
    }
    case 44385:
    {
        returnValue = F("Auf den Oesen");
        break;
    }
    case 44386:
    {
        returnValue = F("Auf den Pfarrwiesen");
        break;
    }
    case 44387:
    {
        returnValue = F("Auf den Pielstücken");
        break;
    }
    case 44388:
    {
        returnValue = F("Auf den Planken");
        break;
    }
    case 44389:
    {
        returnValue = F("Auf den Plätzen");
        break;
    }
    case 44390:
    {
        returnValue = F("Auf den Pädgern");
        break;
    }
    case 44391:
    {
        returnValue = F("Auf den Päschen");
        break;
    }
    case 44392:
    {
        returnValue = F("Auf den Querten");
        break;
    }
    case 44393:
    {
        returnValue = F("Auf den Rainen");
        break;
    }
    case 44394:
    {
        returnValue = F("Auf den Raten");
        break;
    }
    case 44395:
    {
        returnValue = F("Auf den Rathen");
        break;
    }
    case 44396:
    {
        returnValue = F("Auf den Reisenen");
        break;
    }
    case 44397:
    {
        returnValue = F("Auf den Rien");
        break;
    }
    case 44398:
    {
        returnValue = F("Auf den Ritten");
        break;
    }
    case 44399:
    {
        returnValue = F("Auf den Rotten");
        break;
    }
    case 44400:
    {
        returnValue = F("Auf den Röden");
        break;
    }
    case 44401:
    {
        returnValue = F("Auf den Rödern");
        break;
    }
    case 44402:
    {
        returnValue = F("Auf den Röhren");
        break;
    }
    case 44403:
    {
        returnValue = F("Auf den Röthen");
        break;
    }
    case 44404:
    {
        returnValue = F("Auf den Schafellern");
        break;
    }
    case 44405:
    {
        returnValue = F("Auf den Schanzen");
        break;
    }
    case 44406:
    {
        returnValue = F("Auf den Schatzgemahden");
        break;
    }
    case 44407:
    {
        returnValue = F("Auf den Schladen");
        break;
    }
    case 44408:
    {
        returnValue = F("Auf den Schmaläckern");
        break;
    }
    case 44409:
    {
        returnValue = F("Auf den Schollen");
        break;
    }
    case 44410:
    {
        returnValue = F("Auf den Schächten");
        break;
    }
    case 44411:
    {
        returnValue = F("Auf den Seemarken");
        break;
    }
    case 44412:
    {
        returnValue = F("Auf den Siebenbergen");
        break;
    }
    case 44413:
    {
        returnValue = F("Auf den Siekhöfen");
        break;
    }
    case 44414:
    {
        returnValue = F("Auf den Spitzenfeldern");
        break;
    }
    case 44415:
    {
        returnValue = F("Auf den Steinbrücken");
        break;
    }
    case 44416:
    {
        returnValue = F("Auf den Steinen");
        break;
    }
    case 44417:
    {
        returnValue = F("Auf den Steinern");
        break;
    }
    case 44418:
    {
        returnValue = F("Auf den Steinäckern");
        break;
    }
    case 44419:
    {
        returnValue = F("Auf den Stieden");
        break;
    }
    case 44420:
    {
        returnValue = F("Auf den Stockäckern");
        break;
    }
    case 44421:
    {
        returnValue = F("Auf den Strickern");
        break;
    }
    case 44422:
    {
        returnValue = F("Auf den Stämmen");
        break;
    }
    case 44423:
    {
        returnValue = F("Auf den Stöcken");
        break;
    }
    case 44424:
    {
        returnValue = F("Auf den Stücken");
        break;
    }
    case 44425:
    {
        returnValue = F("Auf den Stühlen");
        break;
    }
    case 44426:
    {
        returnValue = F("Auf den Stümpfen");
        break;
    }
    case 44427:
    {
        returnValue = F("Auf den Sängen");
        break;
    }
    case 44428:
    {
        returnValue = F("Auf den Trieb");
        break;
    }
    case 44429:
    {
        returnValue = F("Auf den Triefesgärten");
        break;
    }
    case 44430:
    {
        returnValue = F("Auf den Trieschern");
        break;
    }
    case 44431:
    {
        returnValue = F("Auf den Vier Morgen");
        break;
    }
    case 44432:
    {
        returnValue = F("Auf den Wacken");
        break;
    }
    case 44433:
    {
        returnValue = F("Auf den Waldgärten");
        break;
    }
    case 44434:
    {
        returnValue = F("Auf den Weiden");
        break;
    }
    case 44435:
    {
        returnValue = F("Auf den Wellen");
        break;
    }
    case 44436:
    {
        returnValue = F("Auf den Wiesen");
        break;
    }
    case 44437:
    {
        returnValue = F("Auf den Wingerten");
        break;
    }
    case 44438:
    {
        returnValue = F("Auf den Wischhöfen");
        break;
    }
    case 44439:
    {
        returnValue = F("Auf den Wällen");
        break;
    }
    case 44440:
    {
        returnValue = F("Auf den Wöhren");
        break;
    }
    case 44441:
    {
        returnValue = F("Auf den Würen");
        break;
    }
    case 44442:
    {
        returnValue = F("Auf den Zeilen");
        break;
    }
    case 44443:
    {
        returnValue = F("Auf den Zäunen");
        break;
    }
    case 44444:
    {
        returnValue = F("Auf den acht Morgen");
        break;
    }
    case 44445:
    {
        returnValue = F("Auf den alten Gärten");
        break;
    }
    case 44446:
    {
        returnValue = F("Auf den drei Viertel");
        break;
    }
    case 44447:
    {
        returnValue = F("Auf den fünf Morgen");
        break;
    }
    case 44448:
    {
        returnValue = F("Auf den langen Stücken");
        break;
    }
    case 44449:
    {
        returnValue = F("Auf den neuen Höfen");
        break;
    }
    case 44450:
    {
        returnValue = F("Auf den schwarzen Morgen");
        break;
    }
    case 44451:
    {
        returnValue = F("Auf den sieben Morgen");
        break;
    }
    case 44452:
    {
        returnValue = F("Auf den unteren Aspen");
        break;
    }
    case 44453:
    {
        returnValue = F("Auf den vier Morgen");
        break;
    }
    case 44454:
    {
        returnValue = F("Auf den Äckern");
        break;
    }
    case 44455:
    {
        returnValue = F("Auf den Ängern");
        break;
    }
    case 44456:
    {
        returnValue = F("Auf den Überwiesen");
        break;
    }
    case 44457:
    {
        returnValue = F("Auf der Aar");
        break;
    }
    case 44458:
    {
        returnValue = F("Auf der Acht");
        break;
    }
    case 44459:
    {
        returnValue = F("Auf der Ader");
        break;
    }
    case 44460:
    {
        returnValue = F("Auf der Aerk");
        break;
    }
    case 44461:
    {
        returnValue = F("Auf der Aesch");
        break;
    }
    case 44462:
    {
        returnValue = F("Auf der Ahe");
        break;
    }
    case 44463:
    {
        returnValue = F("Auf der Ahr");
        break;
    }
    case 44464:
    {
        returnValue = F("Auf der Albach");
        break;
    }
    case 44465:
    {
        returnValue = F("Auf der Allinger Höhe");
        break;
    }
    case 44466:
    {
        returnValue = F("Auf der Alloge");
        break;
    }
    case 44467:
    {
        returnValue = F("Auf der Alm");
        break;
    }
    case 44468:
    {
        returnValue = F("Auf der Alten Breide");
        break;
    }
    case 44469:
    {
        returnValue = F("Auf der Alten Fuhr");
        break;
    }
    case 44470:
    {
        returnValue = F("Auf der Alten Scheuer");
        break;
    }
    case 44471:
    {
        returnValue = F("Auf der Amelshard");
        break;
    }
    case 44472:
    {
        returnValue = F("Auf der Ammert");
        break;
    }
    case 44473:
    {
        returnValue = F("Auf der Amtskoppel");
        break;
    }
    case 44474:
    {
        returnValue = F("Auf der Angst");
        break;
    }
    case 44475:
    {
        returnValue = F("Auf der Ansatz");
        break;
    }
    case 44476:
    {
        returnValue = F("Auf der Anwend");
        break;
    }
    case 44477:
    {
        returnValue = F("Auf der Anwende");
        break;
    }
    case 44478:
    {
        returnValue = F("Auf der Ath");
        break;
    }
    case 44479:
    {
        returnValue = F("Auf der Atzel");
        break;
    }
    case 44480:
    {
        returnValue = F("Auf der Au");
        break;
    }
    case 44481:
    {
        returnValue = F("Auf der Aub");
        break;
    }
    case 44482:
    {
        returnValue = F("Auf der Aue");
        break;
    }
    case 44483:
    {
        returnValue = F("Auf der Auwiese");
        break;
    }
    case 44484:
    {
        returnValue = F("Auf der Bach");
        break;
    }
    case 44485:
    {
        returnValue = F("Auf der Bachhell");
        break;
    }
    case 44486:
    {
        returnValue = F("Auf der Bag");
        break;
    }
    case 44487:
    {
        returnValue = F("Auf der Barlage");
        break;
    }
    case 44488:
    {
        returnValue = F("Auf der Batterie");
        break;
    }
    case 44489:
    {
        returnValue = F("Auf der Bauer");
        break;
    }
    case 44490:
    {
        returnValue = F("Auf der Baul");
        break;
    }
    case 44491:
    {
        returnValue = F("Auf der Baumecke");
        break;
    }
    case 44492:
    {
        returnValue = F("Auf der Bauna");
        break;
    }
    case 44493:
    {
        returnValue = F("Auf der Bausch");
        break;
    }
    case 44494:
    {
        returnValue = F("Auf der Bayerswiese");
        break;
    }
    case 44495:
    {
        returnValue = F("Auf der Bayn");
        break;
    }
    case 44496:
    {
        returnValue = F("Auf der Beikhorst");
        break;
    }
    case 44497:
    {
        returnValue = F("Auf der Beil");
        break;
    }
    case 44498:
    {
        returnValue = F("Auf der Bein");
        break;
    }
    case 44499:
    {
        returnValue = F("Auf der Beind");
        break;
    }
    case 44500:
    {
        returnValue = F("Auf der Beinde");
        break;
    }
    case 44501:
    {
        returnValue = F("Auf der Beine");
        break;
    }
    case 44502:
    {
        returnValue = F("Auf der Beke");
        break;
    }
    case 44503:
    {
        returnValue = F("Auf der Bell");
        break;
    }
    case 44504:
    {
        returnValue = F("Auf der Benn");
        break;
    }
    case 44505:
    {
        returnValue = F("Auf der Berghufe");
        break;
    }
    case 44506:
    {
        returnValue = F("Auf der Berglach");
        break;
    }
    case 44507:
    {
        returnValue = F("Auf der Bergwies");
        break;
    }
    case 44508:
    {
        returnValue = F("Auf der Bergwiese");
        break;
    }
    case 44509:
    {
        returnValue = F("Auf der Besetze");
        break;
    }
    case 44510:
    {
        returnValue = F("Auf der Betz");
        break;
    }
    case 44511:
    {
        returnValue = F("Auf der Beun");
        break;
    }
    case 44512:
    {
        returnValue = F("Auf der Beunde");
        break;
    }
    case 44513:
    {
        returnValue = F("Auf der Beune");
        break;
    }
    case 44514:
    {
        returnValue = F("Auf der Bever");
        break;
    }
    case 44515:
    {
        returnValue = F("Auf der Biber");
        break;
    }
    case 44516:
    {
        returnValue = F("Auf der Bilz");
        break;
    }
    case 44517:
    {
        returnValue = F("Auf der Binde");
        break;
    }
    case 44518:
    {
        returnValue = F("Auf der Binge");
        break;
    }
    case 44519:
    {
        returnValue = F("Auf der Binn");
        break;
    }
    case 44520:
    {
        returnValue = F("Auf der Bins");
        break;
    }
    case 44521:
    {
        returnValue = F("Auf der Bint");
        break;
    }
    case 44522:
    {
        returnValue = F("Auf der Birke");
        break;
    }
    case 44523:
    {
        returnValue = F("Auf der Bismarckhöhe");
        break;
    }
    case 44524:
    {
        returnValue = F("Auf der Bitz");
        break;
    }
    case 44525:
    {
        returnValue = F("Auf der Bitze");
        break;
    }
    case 44526:
    {
        returnValue = F("Auf der Bitzen");
        break;
    }
    case 44527:
    {
        returnValue = F("Auf der Blaicken");
        break;
    }
    case 44528:
    {
        returnValue = F("Auf der Blanke");
        break;
    }
    case 44529:
    {
        returnValue = F("Auf der Blautsch");
        break;
    }
    case 44530:
    {
        returnValue = F("Auf der Bleeke");
        break;
    }
    case 44531:
    {
        returnValue = F("Auf der Bleiche");
        break;
    }
    case 44532:
    {
        returnValue = F("Auf der Bletz");
        break;
    }
    case 44533:
    {
        returnValue = F("Auf der Blöse");
        break;
    }
    case 44534:
    {
        returnValue = F("Auf der Boine");
        break;
    }
    case 44535:
    {
        returnValue = F("Auf der Bolte");
        break;
    }
    case 44536:
    {
        returnValue = F("Auf der Bomert");
        break;
    }
    case 44537:
    {
        returnValue = F("Auf der Borg");
        break;
    }
    case 44538:
    {
        returnValue = F("Auf der Borke");
        break;
    }
    case 44539:
    {
        returnValue = F("Auf der Bornau");
        break;
    }
    case 44540:
    {
        returnValue = F("Auf der Bornscheidt");
        break;
    }
    case 44541:
    {
        returnValue = F("Auf der Bornwiese");
        break;
    }
    case 44542:
    {
        returnValue = F("Auf der Borr");
        break;
    }
    case 44543:
    {
        returnValue = F("Auf der Boursch");
        break;
    }
    case 44544:
    {
        returnValue = F("Auf der Brach");
        break;
    }
    case 44545:
    {
        returnValue = F("Auf der Brache");
        break;
    }
    case 44546:
    {
        returnValue = F("Auf der Bracht");
        break;
    }
    case 44547:
    {
        returnValue = F("Auf der Brake");
        break;
    }
    case 44548:
    {
        returnValue = F("Auf der Braunshöll");
        break;
    }
    case 44549:
    {
        returnValue = F("Auf der Bredde");
        break;
    }
    case 44550:
    {
        returnValue = F("Auf der Brede");
        break;
    }
    case 44551:
    {
        returnValue = F("Auf der Bree");
        break;
    }
    case 44552:
    {
        returnValue = F("Auf der Breede");
        break;
    }
    case 44553:
    {
        returnValue = F("Auf der Breit");
        break;
    }
    case 44554:
    {
        returnValue = F("Auf der Breite");
        break;
    }
    case 44555:
    {
        returnValue = F("Auf der Breiten");
        break;
    }
    case 44556:
    {
        returnValue = F("Auf der Breitenwiese");
        break;
    }
    case 44557:
    {
        returnValue = F("Auf der Brinkschmiede");
        break;
    }
    case 44558:
    {
        returnValue = F("Auf der Bruchhohl");
        break;
    }
    case 44559:
    {
        returnValue = F("Auf der Brunk");
        break;
    }
    case 44560:
    {
        returnValue = F("Auf der Brunnenstube");
        break;
    }
    case 44561:
    {
        returnValue = F("Auf der Brück");
        break;
    }
    case 44562:
    {
        returnValue = F("Auf der Brücke");
        break;
    }
    case 44563:
    {
        returnValue = F("Auf der Buch");
        break;
    }
    case 44564:
    {
        returnValue = F("Auf der Buchhaide");
        break;
    }
    case 44565:
    {
        returnValue = F("Auf der Budenbach");
        break;
    }
    case 44566:
    {
        returnValue = F("Auf der Buhs");
        break;
    }
    case 44567:
    {
        returnValue = F("Auf der Bulau");
        break;
    }
    case 44568:
    {
        returnValue = F("Auf der Bullenkoppel");
        break;
    }
    case 44569:
    {
        returnValue = F("Auf der Bult");
        break;
    }
    case 44570:
    {
        returnValue = F("Auf der Buntwies");
        break;
    }
    case 44571:
    {
        returnValue = F("Auf der Burg");
        break;
    }
    case 44572:
    {
        returnValue = F("Auf der Burghardt");
        break;
    }
    case 44573:
    {
        returnValue = F("Auf der Burgwiese");
        break;
    }
    case 44574:
    {
        returnValue = F("Auf der Burnick");
        break;
    }
    case 44575:
    {
        returnValue = F("Auf der Buttstädter Höhe");
        break;
    }
    case 44576:
    {
        returnValue = F("Auf der Bäche");
        break;
    }
    case 44577:
    {
        returnValue = F("Auf der Bärenhütte");
        break;
    }
    case 44578:
    {
        returnValue = F("Auf der Bäune");
        break;
    }
    case 44579:
    {
        returnValue = F("Auf der Böhl");
        break;
    }
    case 44580:
    {
        returnValue = F("Auf der Bölze");
        break;
    }
    case 44581:
    {
        returnValue = F("Auf der Börse");
        break;
    }
    case 44582:
    {
        returnValue = F("Auf der Bühle");
        break;
    }
    case 44583:
    {
        returnValue = F("Auf der Bühne");
        break;
    }
    case 44584:
    {
        returnValue = F("Auf der Bühnhardt");
        break;
    }
    case 44585:
    {
        returnValue = F("Auf der Bülte");
        break;
    }
    case 44586:
    {
        returnValue = F("Auf der Bünd");
        break;
    }
    case 44587:
    {
        returnValue = F("Auf der Bündt");
        break;
    }
    case 44588:
    {
        returnValue = F("Auf der Bünn");
        break;
    }
    case 44589:
    {
        returnValue = F("Auf der Bünne");
        break;
    }
    case 44590:
    {
        returnValue = F("Auf der Bünte");
        break;
    }
    case 44591:
    {
        returnValue = F("Auf der Bürg");
        break;
    }
    case 44592:
    {
        returnValue = F("Auf der Bütz");
        break;
    }
    case 44593:
    {
        returnValue = F("Auf der Dahl");
        break;
    }
    case 44594:
    {
        returnValue = F("Auf der Dahne");
        break;
    }
    case 44595:
    {
        returnValue = F("Auf der Dalge");
        break;
    }
    case 44596:
    {
        returnValue = F("Auf der Darre");
        break;
    }
    case 44597:
    {
        returnValue = F("Auf der Dasslage");
        break;
    }
    case 44598:
    {
        returnValue = F("Auf der Dau");
        break;
    }
    case 44599:
    {
        returnValue = F("Auf der Dell");
        break;
    }
    case 44600:
    {
        returnValue = F("Auf der Deltmerei");
        break;
    }
    case 44601:
    {
        returnValue = F("Auf der Derrwies");
        break;
    }
    case 44602:
    {
        returnValue = F("Auf der Dohnhorst");
        break;
    }
    case 44603:
    {
        returnValue = F("Auf der Dommert");
        break;
    }
    case 44604:
    {
        returnValue = F("Auf der Domäne");
        break;
    }
    case 44605:
    {
        returnValue = F("Auf der Donau");
        break;
    }
    case 44606:
    {
        returnValue = F("Auf der Donn");
        break;
    }
    case 44607:
    {
        returnValue = F("Auf der Dorfstätte");
        break;
    }
    case 44608:
    {
        returnValue = F("Auf der Dorfwiese");
        break;
    }
    case 44609:
    {
        returnValue = F("Auf der Dorfwild");
        break;
    }
    case 44610:
    {
        returnValue = F("Auf der Dorheid");
        break;
    }
    case 44611:
    {
        returnValue = F("Auf der Draad");
        break;
    }
    case 44612:
    {
        returnValue = F("Auf der Dray");
        break;
    }
    case 44613:
    {
        returnValue = F("Auf der Dreesche");
        break;
    }
    case 44614:
    {
        returnValue = F("Auf der Dreispitz");
        break;
    }
    case 44615:
    {
        returnValue = F("Auf der Drenße");
        break;
    }
    case 44616:
    {
        returnValue = F("Auf der Drift");
        break;
    }
    case 44617:
    {
        returnValue = F("Auf der Dry");
        break;
    }
    case 44618:
    {
        returnValue = F("Auf der Däll");
        break;
    }
    case 44619:
    {
        returnValue = F("Auf der Döllau");
        break;
    }
    case 44620:
    {
        returnValue = F("Auf der Dörr");
        break;
    }
    case 44621:
    {
        returnValue = F("Auf der Dört");
        break;
    }
    case 44622:
    {
        returnValue = F("Auf der Dürrenweid");
        break;
    }
    case 44623:
    {
        returnValue = F("Auf der Eben");
        break;
    }
    case 44624:
    {
        returnValue = F("Auf der Ebene");
        break;
    }
    case 44625:
    {
        returnValue = F("Auf der Ebest");
        break;
    }
    case 44626:
    {
        returnValue = F("Auf der Ebing");
        break;
    }
    case 44627:
    {
        returnValue = F("Auf der Ebnung");
        break;
    }
    case 44628:
    {
        returnValue = F("Auf der Eck");
        break;
    }
    case 44629:
    {
        returnValue = F("Auf der Ecke");
        break;
    }
    case 44630:
    {
        returnValue = F("Auf der Eckt");
        break;
    }
    case 44631:
    {
        returnValue = F("Auf der Egart");
        break;
    }
    case 44632:
    {
        returnValue = F("Auf der Egg");
        break;
    }
    case 44633:
    {
        returnValue = F("Auf der Eich");
        break;
    }
    case 44634:
    {
        returnValue = F("Auf der Eiche");
        break;
    }
    case 44635:
    {
        returnValue = F("Auf der Eichelsbach");
        break;
    }
    case 44636:
    {
        returnValue = F("Auf der Eichenhöhe");
        break;
    }
    case 44637:
    {
        returnValue = F("Auf der Eichhöh");
        break;
    }
    case 44638:
    {
        returnValue = F("Auf der Eichwiese");
        break;
    }
    case 44639:
    {
        returnValue = F("Auf der Eierwiese");
        break;
    }
    case 44640:
    {
        returnValue = F("Auf der Eisenhufe");
        break;
    }
    case 44641:
    {
        returnValue = F("Auf der Elbe");
        break;
    }
    case 44642:
    {
        returnValue = F("Auf der Enkelwies");
        break;
    }
    case 44643:
    {
        returnValue = F("Auf der Ente");
        break;
    }
    case 44644:
    {
        returnValue = F("Auf der Entenweide");
        break;
    }
    case 44645:
    {
        returnValue = F("Auf der Enthütte");
        break;
    }
    case 44646:
    {
        returnValue = F("Auf der Erbesbitz");
        break;
    }
    case 44647:
    {
        returnValue = F("Auf der Erdmaar");
        break;
    }
    case 44648:
    {
        returnValue = F("Auf der Ergeten");
        break;
    }
    case 44649:
    {
        returnValue = F("Auf der Erle");
        break;
    }
    case 44650:
    {
        returnValue = F("Auf der Erlenwiese");
        break;
    }
    case 44651:
    {
        returnValue = F("Auf der Erzgred");
        break;
    }
    case 44652:
    {
        returnValue = F("Auf der Erzgrub");
        break;
    }
    case 44653:
    {
        returnValue = F("Auf der Esch");
        break;
    }
    case 44654:
    {
        returnValue = F("Auf der Esche");
        break;
    }
    case 44655:
    {
        returnValue = F("Auf der Etz");
        break;
    }
    case 44656:
    {
        returnValue = F("Auf der Fabrik");
        break;
    }
    case 44657:
    {
        returnValue = F("Auf der Fahlhorst");
        break;
    }
    case 44658:
    {
        returnValue = F("Auf der Fahrt");
        break;
    }
    case 44659:
    {
        returnValue = F("Auf der Faldersgaß");
        break;
    }
    case 44660:
    {
        returnValue = F("Auf der Fallscheuer");
        break;
    }
    case 44661:
    {
        returnValue = F("Auf der Feldwiese");
        break;
    }
    case 44662:
    {
        returnValue = F("Auf der Fels");
        break;
    }
    case 44663:
    {
        returnValue = F("Auf der Fenn");
        break;
    }
    case 44664:
    {
        returnValue = F("Auf der Ferlicht");
        break;
    }
    case 44665:
    {
        returnValue = F("Auf der Finken");
        break;
    }
    case 44666:
    {
        returnValue = F("Auf der Flachsbach");
        break;
    }
    case 44667:
    {
        returnValue = F("Auf der Flachsbitz");
        break;
    }
    case 44668:
    {
        returnValue = F("Auf der Flage");
        break;
    }
    case 44669:
    {
        returnValue = F("Auf der Flips");
        break;
    }
    case 44670:
    {
        returnValue = F("Auf der Fluhe");
        break;
    }
    case 44671:
    {
        returnValue = F("Auf der Flur");
        break;
    }
    case 44672:
    {
        returnValue = F("Auf der Flöte");
        break;
    }
    case 44673:
    {
        returnValue = F("Auf der Flüh");
        break;
    }
    case 44674:
    {
        returnValue = F("Auf der Forst");
        break;
    }
    case 44675:
    {
        returnValue = F("Auf der Frankenburg");
        break;
    }
    case 44676:
    {
        returnValue = F("Auf der Freiheit");
        break;
    }
    case 44677:
    {
        returnValue = F("Auf der Frey");
        break;
    }
    case 44678:
    {
        returnValue = F("Auf der Fromgasse");
        break;
    }
    case 44679:
    {
        returnValue = F("Auf der Fröhn");
        break;
    }
    case 44680:
    {
        returnValue = F("Auf der Frühwiese");
        break;
    }
    case 44681:
    {
        returnValue = F("Auf der Fuchshöhl");
        break;
    }
    case 44682:
    {
        returnValue = F("Auf der Furth");
        break;
    }
    case 44683:
    {
        returnValue = F("Auf der Föhr");
        break;
    }
    case 44684:
    {
        returnValue = F("Auf der Füll");
        break;
    }
    case 44685:
    {
        returnValue = F("Auf der Fürstenwiese");
        break;
    }
    case 44686:
    {
        returnValue = F("Auf der Gans");
        break;
    }
    case 44687:
    {
        returnValue = F("Auf der Gass");
        break;
    }
    case 44688:
    {
        returnValue = F("Auf der Gasse");
        break;
    }
    case 44689:
    {
        returnValue = F("Auf der Gaste");
        break;
    }
    case 44690:
    {
        returnValue = F("Auf der Gaß");
        break;
    }
    case 44691:
    {
        returnValue = F("Auf der Gaßwiese");
        break;
    }
    case 44692:
    {
        returnValue = F("Auf der Gebind");
        break;
    }
    case 44693:
    {
        returnValue = F("Auf der Gebinne");
        break;
    }
    case 44694:
    {
        returnValue = F("Auf der Gebühne");
        break;
    }
    case 44695:
    {
        returnValue = F("Auf der Geest");
        break;
    }
    case 44696:
    {
        returnValue = F("Auf der Gehlke");
        break;
    }
    case 44697:
    {
        returnValue = F("Auf der Geicht");
        break;
    }
    case 44698:
    {
        returnValue = F("Auf der Geiershütt");
        break;
    }
    case 44699:
    {
        returnValue = F("Auf der Geierslay");
        break;
    }
    case 44700:
    {
        returnValue = F("Auf der Geig");
        break;
    }
    case 44701:
    {
        returnValue = F("Auf der Geigerhalde");
        break;
    }
    case 44702:
    {
        returnValue = F("Auf der Geigt");
        break;
    }
    case 44703:
    {
        returnValue = F("Auf der Geist");
        break;
    }
    case 44704:
    {
        returnValue = F("Auf der Gemeinde");
        break;
    }
    case 44705:
    {
        returnValue = F("Auf der Gerbe");
        break;
    }
    case 44706:
    {
        returnValue = F("Auf der Gethe");
        break;
    }
    case 44707:
    {
        returnValue = F("Auf der Gewann");
        break;
    }
    case 44708:
    {
        returnValue = F("Auf der Gibb");
        break;
    }
    case 44709:
    {
        returnValue = F("Auf der Gickelsburg");
        break;
    }
    case 44710:
    {
        returnValue = F("Auf der Gieß");
        break;
    }
    case 44711:
    {
        returnValue = F("Auf der Ginster");
        break;
    }
    case 44712:
    {
        returnValue = F("Auf der Glaake");
        break;
    }
    case 44713:
    {
        returnValue = F("Auf der Gleich");
        break;
    }
    case 44714:
    {
        returnValue = F("Auf der Goldenen Höhe");
        break;
    }
    case 44715:
    {
        returnValue = F("Auf der Golz");
        break;
    }
    case 44716:
    {
        returnValue = F("Auf der Goß");
        break;
    }
    case 44717:
    {
        returnValue = F("Auf der Grabenbach");
        break;
    }
    case 44718:
    {
        returnValue = F("Auf der Grafschaft");
        break;
    }
    case 44719:
    {
        returnValue = F("Auf der Grefenfurth");
        break;
    }
    case 44720:
    {
        returnValue = F("Auf der Grenz");
        break;
    }
    case 44721:
    {
        returnValue = F("Auf der Greth");
        break;
    }
    case 44722:
    {
        returnValue = F("Auf der Greuß");
        break;
    }
    case 44723:
    {
        returnValue = F("Auf der Griedelbach");
        break;
    }
    case 44724:
    {
        returnValue = F("Auf der Gries");
        break;
    }
    case 44725:
    {
        returnValue = F("Auf der Großen Str.");
        break;
    }
    case 44726:
    {
        returnValue = F("Auf der Grub");
        break;
    }
    case 44727:
    {
        returnValue = F("Auf der Grube");
        break;
    }
    case 44728:
    {
        returnValue = F("Auf der Grummetswiese");
        break;
    }
    case 44729:
    {
        returnValue = F("Auf der Grundwies");
        break;
    }
    case 44730:
    {
        returnValue = F("Auf der Gröbe");
        break;
    }
    case 44731:
    {
        returnValue = F("Auf der Grün");
        break;
    }
    case 44732:
    {
        returnValue = F("Auf der Gänsalm");
        break;
    }
    case 44733:
    {
        returnValue = F("Auf der Gänseweide");
        break;
    }
    case 44734:
    {
        returnValue = F("Auf der Gänsmatt");
        break;
    }
    case 44735:
    {
        returnValue = F("Auf der Gänsweide");
        break;
    }
    case 44736:
    {
        returnValue = F("Auf der Göll");
        break;
    }
    case 44737:
    {
        returnValue = F("Auf der Günne");
        break;
    }
    case 44738:
    {
        returnValue = F("Auf der Haag");
        break;
    }
    case 44739:
    {
        returnValue = F("Auf der Haar");
        break;
    }
    case 44740:
    {
        returnValue = F("Auf der Haardt");
        break;
    }
    case 44741:
    {
        returnValue = F("Auf der Haare");
        break;
    }
    case 44742:
    {
        returnValue = F("Auf der Hadern");
        break;
    }
    case 44743:
    {
        returnValue = F("Auf der Haferstoppel");
        break;
    }
    case 44744:
    {
        returnValue = F("Auf der Hage");
        break;
    }
    case 44745:
    {
        returnValue = F("Auf der Hahl");
        break;
    }
    case 44746:
    {
        returnValue = F("Auf der Hahnau");
        break;
    }
    case 44747:
    {
        returnValue = F("Auf der Hahnheck");
        break;
    }
    case 44748:
    {
        returnValue = F("Auf der Hahr");
        break;
    }
    case 44749:
    {
        returnValue = F("Auf der Haid");
        break;
    }
    case 44750:
    {
        returnValue = F("Auf der Haide");
        break;
    }
    case 44751:
    {
        returnValue = F("Auf der Hain");
        break;
    }
    case 44752:
    {
        returnValue = F("Auf der Hainbuche");
        break;
    }
    case 44753:
    {
        returnValue = F("Auf der Hake");
        break;
    }
    case 44754:
    {
        returnValue = F("Auf der Halbinsel");
        break;
    }
    case 44755:
    {
        returnValue = F("Auf der Halde");
        break;
    }
    case 44756:
    {
        returnValue = F("Auf der Halden");
        break;
    }
    case 44757:
    {
        returnValue = F("Auf der Haley");
        break;
    }
    case 44758:
    {
        returnValue = F("Auf der Hall");
        break;
    }
    case 44759:
    {
        returnValue = F("Auf der Halle");
        break;
    }
    case 44760:
    {
        returnValue = F("Auf der Hammeraue");
        break;
    }
    case 44761:
    {
        returnValue = F("Auf der Hanfröste");
        break;
    }
    case 44762:
    {
        returnValue = F("Auf der Hanfstelle");
        break;
    }
    case 44763:
    {
        returnValue = F("Auf der Hannighorst");
        break;
    }
    case 44764:
    {
        returnValue = F("Auf der Hard");
        break;
    }
    case 44765:
    {
        returnValue = F("Auf der Hardt");
        break;
    }
    case 44766:
    {
        returnValue = F("Auf der Harle");
        break;
    }
    case 44767:
    {
        returnValue = F("Auf der Harth");
        break;
    }
    case 44768:
    {
        returnValue = F("Auf der Hasenplatte");
        break;
    }
    case 44769:
    {
        returnValue = F("Auf der Hassel");
        break;
    }
    case 44770:
    {
        returnValue = F("Auf der Hatterwiese");
        break;
    }
    case 44771:
    {
        returnValue = F("Auf der Hau");
        break;
    }
    case 44772:
    {
        returnValue = F("Auf der Haube");
        break;
    }
    case 44773:
    {
        returnValue = F("Auf der Haure");
        break;
    }
    case 44774:
    {
        returnValue = F("Auf der Hausmatt");
        break;
    }
    case 44775:
    {
        returnValue = F("Auf der Hausstelle");
        break;
    }
    case 44776:
    {
        returnValue = F("Auf der Hay");
        break;
    }
    case 44777:
    {
        returnValue = F("Auf der Hayert");
        break;
    }
    case 44778:
    {
        returnValue = F("Auf der Hebert");
        break;
    }
    case 44779:
    {
        returnValue = F("Auf der Heck");
        break;
    }
    case 44780:
    {
        returnValue = F("Auf der Hecke");
        break;
    }
    case 44781:
    {
        returnValue = F("Auf der Heckwiese");
        break;
    }
    case 44782:
    {
        returnValue = F("Auf der Heeg");
        break;
    }
    case 44783:
    {
        returnValue = F("Auf der Hefe");
        break;
    }
    case 44784:
    {
        returnValue = F("Auf der Heg");
        break;
    }
    case 44785:
    {
        returnValue = F("Auf der Hege");
        break;
    }
    case 44786:
    {
        returnValue = F("Auf der Hegeweide");
        break;
    }
    case 44787:
    {
        returnValue = F("Auf der Heggenbrede");
        break;
    }
    case 44788:
    {
        returnValue = F("Auf der Hehl");
        break;
    }
    case 44789:
    {
        returnValue = F("Auf der Heid");
        break;
    }
    case 44790:
    {
        returnValue = F("Auf der Heide");
        break;
    }
    case 44791:
    {
        returnValue = F("Auf der Heidlinge");
        break;
    }
    case 44792:
    {
        returnValue = F("Auf der Heidwende");
        break;
    }
    case 44793:
    {
        returnValue = F("Auf der Heilswiese");
        break;
    }
    case 44794:
    {
        returnValue = F("Auf der Heister");
        break;
    }
    case 44795:
    {
        returnValue = F("Auf der Held");
        break;
    }
    case 44796:
    {
        returnValue = F("Auf der Helden");
        break;
    }
    case 44797:
    {
        returnValue = F("Auf der Hell");
        break;
    }
    case 44798:
    {
        returnValue = F("Auf der Helle");
        break;
    }
    case 44799:
    {
        returnValue = F("Auf der Helt");
        break;
    }
    case 44800:
    {
        returnValue = F("Auf der Helte");
        break;
    }
    case 44801:
    {
        returnValue = F("Auf der Helten");
        break;
    }
    case 44802:
    {
        returnValue = F("Auf der Hemsteege");
        break;
    }
    case 44803:
    {
        returnValue = F("Auf der Hengte");
        break;
    }
    case 44804:
    {
        returnValue = F("Auf der Henschwies");
        break;
    }
    case 44805:
    {
        returnValue = F("Auf der Herberg");
        break;
    }
    case 44806:
    {
        returnValue = F("Auf der Herberge");
        break;
    }
    case 44807:
    {
        returnValue = F("Auf der Herbsthöhe");
        break;
    }
    case 44808:
    {
        returnValue = F("Auf der Herde");
        break;
    }
    case 44809:
    {
        returnValue = F("Auf der Herrenweide");
        break;
    }
    case 44810:
    {
        returnValue = F("Auf der Herze");
        break;
    }
    case 44811:
    {
        returnValue = F("Auf der Hild");
        break;
    }
    case 44812:
    {
        returnValue = F("Auf der Hill");
        break;
    }
    case 44813:
    {
        returnValue = F("Auf der Hille");
        break;
    }
    case 44814:
    {
        returnValue = F("Auf der Hilt");
        break;
    }
    case 44815:
    {
        returnValue = F("Auf der Hinterheck");
        break;
    }
    case 44816:
    {
        returnValue = F("Auf der Hirschhöhe");
        break;
    }
    case 44817:
    {
        returnValue = F("Auf der Hirscht");
        break;
    }
    case 44818:
    {
        returnValue = F("Auf der Hochfahrt");
        break;
    }
    case 44819:
    {
        returnValue = F("Auf der Hochhechel");
        break;
    }
    case 44820:
    {
        returnValue = F("Auf der Hochreuth");
        break;
    }
    case 44821:
    {
        returnValue = F("Auf der Hochwiese");
        break;
    }
    case 44822:
    {
        returnValue = F("Auf der Hof");
        break;
    }
    case 44823:
    {
        returnValue = F("Auf der Hofbitze");
        break;
    }
    case 44824:
    {
        returnValue = F("Auf der Hofestadt");
        break;
    }
    case 44825:
    {
        returnValue = F("Auf der Hofestatt");
        break;
    }
    case 44826:
    {
        returnValue = F("Auf der Hofkoppel");
        break;
    }
    case 44827:
    {
        returnValue = F("Auf der Hofreite");
        break;
    }
    case 44828:
    {
        returnValue = F("Auf der Hofstatt");
        break;
    }
    case 44829:
    {
        returnValue = F("Auf der Hohen Fuhr");
        break;
    }
    case 44830:
    {
        returnValue = F("Auf der Hohen Hardt");
        break;
    }
    case 44831:
    {
        returnValue = F("Auf der Hohengrub");
        break;
    }
    case 44832:
    {
        returnValue = F("Auf der Hohl");
        break;
    }
    case 44833:
    {
        returnValue = F("Auf der Hohlbach");
        break;
    }
    case 44834:
    {
        returnValue = F("Auf der Hohlbuch");
        break;
    }
    case 44835:
    {
        returnValue = F("Auf der Hohldreff");
        break;
    }
    case 44836:
    {
        returnValue = F("Auf der Hohlmauer");
        break;
    }
    case 44837:
    {
        returnValue = F("Auf der Hohstadt");
        break;
    }
    case 44838:
    {
        returnValue = F("Auf der Holl");
        break;
    }
    case 44839:
    {
        returnValue = F("Auf der Holzbitz");
        break;
    }
    case 44840:
    {
        returnValue = F("Auf der Holzlohe");
        break;
    }
    case 44841:
    {
        returnValue = F("Auf der Holzwiese");
        break;
    }
    case 44842:
    {
        returnValue = F("Auf der Hopfel");
        break;
    }
    case 44843:
    {
        returnValue = F("Auf der Horrei");
        break;
    }
    case 44844:
    {
        returnValue = F("Auf der Horst");
        break;
    }
    case 44845:
    {
        returnValue = F("Auf der Horst Nord");
        break;
    }
    case 44846:
    {
        returnValue = F("Auf der Horst Süd");
        break;
    }
    case 44847:
    {
        returnValue = F("Auf der Hospel");
        break;
    }
    case 44848:
    {
        returnValue = F("Auf der Hostert");
        break;
    }
    case 44849:
    {
        returnValue = F("Auf der Houff");
        break;
    }
    case 44850:
    {
        returnValue = F("Auf der Hove");
        break;
    }
    case 44851:
    {
        returnValue = F("Auf der Hub");
        break;
    }
    case 44852:
    {
        returnValue = F("Auf der Hude");
        break;
    }
    case 44853:
    {
        returnValue = F("Auf der Hudt");
        break;
    }
    case 44854:
    {
        returnValue = F("Auf der Huf");
        break;
    }
    case 44855:
    {
        returnValue = F("Auf der Hufe");
        break;
    }
    case 44856:
    {
        returnValue = F("Auf der Huh");
        break;
    }
    case 44857:
    {
        returnValue = F("Auf der Huhf");
        break;
    }
    case 44858:
    {
        returnValue = F("Auf der Huhfuhr");
        break;
    }
    case 44859:
    {
        returnValue = F("Auf der Huile");
        break;
    }
    case 44860:
    {
        returnValue = F("Auf der Hundsstang");
        break;
    }
    case 44861:
    {
        returnValue = F("Auf der Huneterhard");
        break;
    }
    case 44862:
    {
        returnValue = F("Auf der Hurst");
        break;
    }
    case 44863:
    {
        returnValue = F("Auf der Hurt");
        break;
    }
    case 44864:
    {
        returnValue = F("Auf der Hurth");
        break;
    }
    case 44865:
    {
        returnValue = F("Auf der Husareninsel");
        break;
    }
    case 44866:
    {
        returnValue = F("Auf der Huschenburg");
        break;
    }
    case 44867:
    {
        returnValue = F("Auf der Hut");
        break;
    }
    case 44868:
    {
        returnValue = F("Auf der Hutbreiten");
        break;
    }
    case 44869:
    {
        returnValue = F("Auf der Hute");
        break;
    }
    case 44870:
    {
        returnValue = F("Auf der Huth");
        break;
    }
    case 44871:
    {
        returnValue = F("Auf der Hutweide");
        break;
    }
    case 44872:
    {
        returnValue = F("Auf der Häckelsgass");
        break;
    }
    case 44873:
    {
        returnValue = F("Auf der Hälde");
        break;
    }
    case 44874:
    {
        returnValue = F("Auf der Härte");
        break;
    }
    case 44875:
    {
        returnValue = F("Auf der Härtel");
        break;
    }
    case 44876:
    {
        returnValue = F("Auf der Hääg");
        break;
    }
    case 44877:
    {
        returnValue = F("Auf der Höchnis");
        break;
    }
    case 44878:
    {
        returnValue = F("Auf der Höchst");
        break;
    }
    case 44879:
    {
        returnValue = F("Auf der Höchte");
        break;
    }
    case 44880:
    {
        returnValue = F("Auf der Hödde");
        break;
    }
    case 44881:
    {
        returnValue = F("Auf der Hödstatt");
        break;
    }
    case 44882:
    {
        returnValue = F("Auf der Höft");
        break;
    }
    case 44883:
    {
        returnValue = F("Auf der Höfte");
        break;
    }
    case 44884:
    {
        returnValue = F("Auf der Höh");
        break;
    }
    case 44885:
    {
        returnValue = F("Auf der Höh'");
        break;
    }
    case 44886:
    {
        returnValue = F("Auf der Höhe");
        break;
    }
    case 44887:
    {
        returnValue = F("Auf der Höhenwies");
        break;
    }
    case 44888:
    {
        returnValue = F("Auf der Höhl");
        break;
    }
    case 44889:
    {
        returnValue = F("Auf der Höhle");
        break;
    }
    case 44890:
    {
        returnValue = F("Auf der Höll");
        break;
    }
    case 44891:
    {
        returnValue = F("Auf der Hölle");
        break;
    }
    case 44892:
    {
        returnValue = F("Auf der Hörne");
        break;
    }
    case 44893:
    {
        returnValue = F("Auf der Hörst");
        break;
    }
    case 44894:
    {
        returnValue = F("Auf der Höve");
        break;
    }
    case 44895:
    {
        returnValue = F("Auf der Hübben");
        break;
    }
    case 44896:
    {
        returnValue = F("Auf der Hühnertränk");
        break;
    }
    case 44897:
    {
        returnValue = F("Auf der Hühnerweid");
        break;
    }
    case 44898:
    {
        returnValue = F("Auf der Hüll");
        break;
    }
    case 44899:
    {
        returnValue = F("Auf der Hürth");
        break;
    }
    case 44900:
    {
        returnValue = F("Auf der Hütt");
        break;
    }
    case 44901:
    {
        returnValue = F("Auf der Hütte");
        break;
    }
    case 44902:
    {
        returnValue = F("Auf der Hüwel");
        break;
    }
    case 44903:
    {
        returnValue = F("Auf der Igelstätte");
        break;
    }
    case 44904:
    {
        returnValue = F("Auf der Ihlsbeck Loge");
        break;
    }
    case 44905:
    {
        returnValue = F("Auf der Insel");
        break;
    }
    case 44906:
    {
        returnValue = F("Auf der Irrlitz");
        break;
    }
    case 44907:
    {
        returnValue = F("Auf der Jaucht");
        break;
    }
    case 44908:
    {
        returnValue = F("Auf der Jaugel");
        break;
    }
    case 44909:
    {
        returnValue = F("Auf der Jeich");
        break;
    }
    case 44910:
    {
        returnValue = F("Auf der Joch");
        break;
    }
    case 44911:
    {
        returnValue = F("Auf der Joerde");
        break;
    }
    case 44912:
    {
        returnValue = F("Auf der Judenhut");
        break;
    }
    case 44913:
    {
        returnValue = F("Auf der Juhöhe");
        break;
    }
    case 44914:
    {
        returnValue = F("Auf der Jöst");
        break;
    }
    case 44915:
    {
        returnValue = F("Auf der Jücht");
        break;
    }
    case 44916:
    {
        returnValue = F("Auf der Kaiserwiese");
        break;
    }
    case 44917:
    {
        returnValue = F("Auf der Kaiten");
        break;
    }
    case 44918:
    {
        returnValue = F("Auf der Kalkkaul");
        break;
    }
    case 44919:
    {
        returnValue = F("Auf der Kammer");
        break;
    }
    case 44920:
    {
        returnValue = F("Auf der Kante");
        break;
    }
    case 44921:
    {
        returnValue = F("Auf der Kanzel");
        break;
    }
    case 44922:
    {
        returnValue = F("Auf der Kapelle");
        break;
    }
    case 44923:
    {
        returnValue = F("Auf der Kapenburg");
        break;
    }
    case 44924:
    {
        returnValue = F("Auf der Kappel");
        break;
    }
    case 44925:
    {
        returnValue = F("Auf der Karlshöhe");
        break;
    }
    case 44926:
    {
        returnValue = F("Auf der Kassebeerenworth");
        break;
    }
    case 44927:
    {
        returnValue = F("Auf der Katenkoppel");
        break;
    }
    case 44928:
    {
        returnValue = F("Auf der Katz");
        break;
    }
    case 44929:
    {
        returnValue = F("Auf der Katzenbach");
        break;
    }
    case 44930:
    {
        returnValue = F("Auf der Katzenburg");
        break;
    }
    case 44931:
    {
        returnValue = F("Auf der Kaub");
        break;
    }
    case 44932:
    {
        returnValue = F("Auf der Kaul");
        break;
    }
    case 44933:
    {
        returnValue = F("Auf der Kaulbahn");
        break;
    }
    case 44934:
    {
        returnValue = F("Auf der Kaut");
        break;
    }
    case 44935:
    {
        returnValue = F("Auf der Kave");
        break;
    }
    case 44936:
    {
        returnValue = F("Auf der Kehr");
        break;
    }
    case 44937:
    {
        returnValue = F("Auf der Kehrt");
        break;
    }
    case 44938:
    {
        returnValue = F("Auf der Kelter");
        break;
    }
    case 44939:
    {
        returnValue = F("Auf der Kelterwies");
        break;
    }
    case 44940:
    {
        returnValue = F("Auf der Kenner Ley");
        break;
    }
    case 44941:
    {
        returnValue = F("Auf der Kicks");
        break;
    }
    case 44942:
    {
        returnValue = F("Auf der Kimm");
        break;
    }
    case 44943:
    {
        returnValue = F("Auf der Kipp");
        break;
    }
    case 44944:
    {
        returnValue = F("Auf der Kirchbreite");
        break;
    }
    case 44945:
    {
        returnValue = F("Auf der Kirchwiese");
        break;
    }
    case 44946:
    {
        returnValue = F("Auf der Kirt");
        break;
    }
    case 44947:
    {
        returnValue = F("Auf der Kirth");
        break;
    }
    case 44948:
    {
        returnValue = F("Auf der Kisse");
        break;
    }
    case 44949:
    {
        returnValue = F("Auf der Kissel");
        break;
    }
    case 44950:
    {
        returnValue = F("Auf der Kissenbrede");
        break;
    }
    case 44951:
    {
        returnValue = F("Auf der Klamm");
        break;
    }
    case 44952:
    {
        returnValue = F("Auf der Klamme");
        break;
    }
    case 44953:
    {
        returnValue = F("Auf der Klapp");
        break;
    }
    case 44954:
    {
        returnValue = F("Auf der Klaus");
        break;
    }
    case 44955:
    {
        returnValue = F("Auf der Klause");
        break;
    }
    case 44956:
    {
        returnValue = F("Auf der Kleebitze");
        break;
    }
    case 44957:
    {
        returnValue = F("Auf der Kleewiese");
        break;
    }
    case 44958:
    {
        returnValue = F("Auf der Klenge");
        break;
    }
    case 44959:
    {
        returnValue = F("Auf der Klinge");
        break;
    }
    case 44960:
    {
        returnValue = F("Auf der Klingen");
        break;
    }
    case 44961:
    {
        returnValue = F("Auf der Klingenburg");
        break;
    }
    case 44962:
    {
        returnValue = F("Auf der Klink");
        break;
    }
    case 44963:
    {
        returnValue = F("Auf der Klitzenburg");
        break;
    }
    case 44964:
    {
        returnValue = F("Auf der Klopp");
        break;
    }
    case 44965:
    {
        returnValue = F("Auf der Klostermauer");
        break;
    }
    case 44966:
    {
        returnValue = F("Auf der Klus");
        break;
    }
    case 44967:
    {
        returnValue = F("Auf der Kluse");
        break;
    }
    case 44968:
    {
        returnValue = F("Auf der Klüsserather Acht");
        break;
    }
    case 44969:
    {
        returnValue = F("Auf der Knag");
        break;
    }
    case 44970:
    {
        returnValue = F("Auf der Knippe");
        break;
    }
    case 44971:
    {
        returnValue = F("Auf der Kohlhardt");
        break;
    }
    case 44972:
    {
        returnValue = F("Auf der Kohlplatte");
        break;
    }
    case 44973:
    {
        returnValue = F("Auf der Kohlstatt");
        break;
    }
    case 44974:
    {
        returnValue = F("Auf der Kohr");
        break;
    }
    case 44975:
    {
        returnValue = F("Auf der Kolonie");
        break;
    }
    case 44976:
    {
        returnValue = F("Auf der Kombitz");
        break;
    }
    case 44977:
    {
        returnValue = F("Auf der Komm");
        break;
    }
    case 44978:
    {
        returnValue = F("Auf der Konn");
        break;
    }
    case 44979:
    {
        returnValue = F("Auf der Kop");
        break;
    }
    case 44980:
    {
        returnValue = F("Auf der Kopf");
        break;
    }
    case 44981:
    {
        returnValue = F("Auf der Koppel");
        break;
    }
    case 44982:
    {
        returnValue = F("Auf der Koppelwiese");
        break;
    }
    case 44983:
    {
        returnValue = F("Auf der Kornbitz");
        break;
    }
    case 44984:
    {
        returnValue = F("Auf der Kornburg");
        break;
    }
    case 44985:
    {
        returnValue = F("Auf der Korst");
        break;
    }
    case 44986:
    {
        returnValue = F("Auf der Kotte");
        break;
    }
    case 44987:
    {
        returnValue = F("Auf der Kraft");
        break;
    }
    case 44988:
    {
        returnValue = F("Auf der Kratz");
        break;
    }
    case 44989:
    {
        returnValue = F("Auf der Kraus");
        break;
    }
    case 44990:
    {
        returnValue = F("Auf der Krautweide");
        break;
    }
    case 44991:
    {
        returnValue = F("Auf der Kreh");
        break;
    }
    case 44992:
    {
        returnValue = F("Auf der Krejuhl");
        break;
    }
    case 44993:
    {
        returnValue = F("Auf der Kreuzwies");
        break;
    }
    case 44994:
    {
        returnValue = F("Auf der Kreuzwiese");
        break;
    }
    case 44995:
    {
        returnValue = F("Auf der Kripp");
        break;
    }
    case 44996:
    {
        returnValue = F("Auf der Kritsch");
        break;
    }
    case 44997:
    {
        returnValue = F("Auf der Kruk");
        break;
    }
    case 44998:
    {
        returnValue = F("Auf der Kräh");
        break;
    }
    case 44999:
    {
        returnValue = F("Auf der Krämerbreite");
        break;
    }
    case 45000:
    {
        returnValue = F("Auf der Krümme");
        break;
    }
    case 45001:
    {
        returnValue = F("Auf der Kuckucksweide");
        break;
    }
    case 45002:
    {
        returnValue = F("Auf der Kumm");
        break;
    }
    case 45003:
    {
        returnValue = F("Auf der Kunn");
        break;
    }
    case 45004:
    {
        returnValue = F("Auf der Kunst");
        break;
    }
    case 45005:
    {
        returnValue = F("Auf der Kupp");
        break;
    }
    case 45006:
    {
        returnValue = F("Auf der Kuppe");
        break;
    }
    case 45007:
    {
        returnValue = F("Auf der Kurzel");
        break;
    }
    case 45008:
    {
        returnValue = F("Auf der Kutte");
        break;
    }
    case 45009:
    {
        returnValue = F("Auf der Kälberweide");
        break;
    }
    case 45010:
    {
        returnValue = F("Auf der Kämpe");
        break;
    }
    case 45011:
    {
        returnValue = F("Auf der Köbs");
        break;
    }
    case 45012:
    {
        returnValue = F("Auf der Köhne");
        break;
    }
    case 45013:
    {
        returnValue = F("Auf der Körtge");
        break;
    }
    case 45014:
    {
        returnValue = F("Auf der Kühtränk");
        break;
    }
    case 45015:
    {
        returnValue = F("Auf der Kümm");
        break;
    }
    case 45016:
    {
        returnValue = F("Auf der Kürze");
        break;
    }
    case 45017:
    {
        returnValue = F("Auf der Kürzt");
        break;
    }
    case 45018:
    {
        returnValue = F("Auf der Laag");
        break;
    }
    case 45019:
    {
        returnValue = F("Auf der Laake");
        break;
    }
    case 45020:
    {
        returnValue = F("Auf der Laase");
        break;
    }
    case 45021:
    {
        returnValue = F("Auf der Lach");
        break;
    }
    case 45022:
    {
        returnValue = F("Auf der Lache");
        break;
    }
    case 45023:
    {
        returnValue = F("Auf der Lachen");
        break;
    }
    case 45024:
    {
        returnValue = F("Auf der Lade");
        break;
    }
    case 45025:
    {
        returnValue = F("Auf der Lage");
        break;
    }
    case 45026:
    {
        returnValue = F("Auf der Lahn");
        break;
    }
    case 45027:
    {
        returnValue = F("Auf der Lai");
        break;
    }
    case 45028:
    {
        returnValue = F("Auf der Laibe");
        break;
    }
    case 45029:
    {
        returnValue = F("Auf der Lake");
        break;
    }
    case 45030:
    {
        returnValue = F("Auf der Landwehr");
        break;
    }
    case 45031:
    {
        returnValue = F("Auf der Langen Wiese");
        break;
    }
    case 45032:
    {
        returnValue = F("Auf der Langenbach");
        break;
    }
    case 45033:
    {
        returnValue = F("Auf der Langheck");
        break;
    }
    case 45034:
    {
        returnValue = F("Auf der Langweid");
        break;
    }
    case 45035:
    {
        returnValue = F("Auf der Langwies");
        break;
    }
    case 45036:
    {
        returnValue = F("Auf der Lank");
        break;
    }
    case 45037:
    {
        returnValue = F("Auf der Lau");
        break;
    }
    case 45038:
    {
        returnValue = F("Auf der Laube");
        break;
    }
    case 45039:
    {
        returnValue = F("Auf der Laubwiese");
        break;
    }
    case 45040:
    {
        returnValue = F("Auf der Lay");
        break;
    }
    case 45041:
    {
        returnValue = F("Auf der Laye");
        break;
    }
    case 45042:
    {
        returnValue = F("Auf der Leege");
        break;
    }
    case 45043:
    {
        returnValue = F("Auf der Leer");
        break;
    }
    case 45044:
    {
        returnValue = F("Auf der Leh");
        break;
    }
    case 45045:
    {
        returnValue = F("Auf der Lehmenkaut");
        break;
    }
    case 45046:
    {
        returnValue = F("Auf der Lehmhorst");
        break;
    }
    case 45047:
    {
        returnValue = F("Auf der Lehmkaul");
        break;
    }
    case 45048:
    {
        returnValue = F("Auf der Lehmkaut");
        break;
    }
    case 45049:
    {
        returnValue = F("Auf der Lehmkaute");
        break;
    }
    case 45050:
    {
        returnValue = F("Auf der Lehmkuhle");
        break;
    }
    case 45051:
    {
        returnValue = F("Auf der Lehn");
        break;
    }
    case 45052:
    {
        returnValue = F("Auf der Lehr");
        break;
    }
    case 45053:
    {
        returnValue = F("Auf der Leier");
        break;
    }
    case 45054:
    {
        returnValue = F("Auf der Leimbrede");
        break;
    }
    case 45055:
    {
        returnValue = F("Auf der Leimenkaut");
        break;
    }
    case 45056:
    {
        returnValue = F("Auf der Leimenkuhle");
        break;
    }
    case 45057:
    {
        returnValue = F("Auf der Leimkaul");
        break;
    }
    case 45058:
    {
        returnValue = F("Auf der Leimkaut");
        break;
    }
    case 45059:
    {
        returnValue = F("Auf der Leimstruth");
        break;
    }
    case 45060:
    {
        returnValue = F("Auf der Leite");
        break;
    }
    case 45061:
    {
        returnValue = F("Auf der Leiten");
        break;
    }
    case 45062:
    {
        returnValue = F("Auf der Letteilung");
        break;
    }
    case 45063:
    {
        returnValue = F("Auf der Leuchtenburg");
        break;
    }
    case 45064:
    {
        returnValue = F("Auf der Lex");
        break;
    }
    case 45065:
    {
        returnValue = F("Auf der Ley");
        break;
    }
    case 45066:
    {
        returnValue = F("Auf der Leye");
        break;
    }
    case 45067:
    {
        returnValue = F("Auf der Lichs");
        break;
    }
    case 45068:
    {
        returnValue = F("Auf der Lichtnau");
        break;
    }
    case 45069:
    {
        returnValue = F("Auf der Lichtung");
        break;
    }
    case 45070:
    {
        returnValue = F("Auf der Liebfrauenkirch");
        break;
    }
    case 45071:
    {
        returnValue = F("Auf der Lied");
        break;
    }
    case 45072:
    {
        returnValue = F("Auf der Liede");
        break;
    }
    case 45073:
    {
        returnValue = F("Auf der Liemecke");
        break;
    }
    case 45074:
    {
        returnValue = F("Auf der Lier");
        break;
    }
    case 45075:
    {
        returnValue = F("Auf der Liet");
        break;
    }
    case 45076:
    {
        returnValue = F("Auf der Lieth");
        break;
    }
    case 45077:
    {
        returnValue = F("Auf der Limmert");
        break;
    }
    case 45078:
    {
        returnValue = F("Auf der Lind");
        break;
    }
    case 45079:
    {
        returnValue = F("Auf der Linde");
        break;
    }
    case 45080:
    {
        returnValue = F("Auf der Linie");
        break;
    }
    case 45081:
    {
        returnValue = F("Auf der Linnart");
        break;
    }
    case 45082:
    {
        returnValue = F("Auf der List");
        break;
    }
    case 45083:
    {
        returnValue = F("Auf der Liß");
        break;
    }
    case 45084:
    {
        returnValue = F("Auf der Loch");
        break;
    }
    case 45085:
    {
        returnValue = F("Auf der Loge");
        break;
    }
    case 45086:
    {
        returnValue = F("Auf der Loh");
        break;
    }
    case 45087:
    {
        returnValue = F("Auf der Lohbach");
        break;
    }
    case 45088:
    {
        returnValue = F("Auf der Lohe");
        break;
    }
    case 45089:
    {
        returnValue = F("Auf der Looge");
        break;
    }
    case 45090:
    {
        returnValue = F("Auf der Luft");
        break;
    }
    case 45091:
    {
        returnValue = F("Auf der Lug");
        break;
    }
    case 45092:
    {
        returnValue = F("Auf der Lust");
        break;
    }
    case 45093:
    {
        returnValue = F("Auf der Luxenburg");
        break;
    }
    case 45094:
    {
        returnValue = F("Auf der Lyck");
        break;
    }
    case 45095:
    {
        returnValue = F("Auf der Lähr");
        break;
    }
    case 45096:
    {
        returnValue = F("Auf der Lährwiese");
        break;
    }
    case 45097:
    {
        returnValue = F("Auf der Länge");
        break;
    }
    case 45098:
    {
        returnValue = F("Auf der Länger");
        break;
    }
    case 45099:
    {
        returnValue = F("Auf der Löbke");
        break;
    }
    case 45100:
    {
        returnValue = F("Auf der Löh");
        break;
    }
    case 45101:
    {
        returnValue = F("Auf der Lück");
        break;
    }
    case 45102:
    {
        returnValue = F("Auf der Lüh");
        break;
    }
    case 45103:
    {
        returnValue = F("Auf der Lüss");
        break;
    }
    case 45104:
    {
        returnValue = F("Auf der Lützelbach");
        break;
    }
    case 45105:
    {
        returnValue = F("Auf der Maar");
        break;
    }
    case 45106:
    {
        returnValue = F("Auf der Maatheide");
        break;
    }
    case 45107:
    {
        returnValue = F("Auf der Mahle");
        break;
    }
    case 45108:
    {
        returnValue = F("Auf der Mainhöhe");
        break;
    }
    case 45109:
    {
        returnValue = F("Auf der Manner");
        break;
    }
    case 45110:
    {
        returnValue = F("Auf der Mark");
        break;
    }
    case 45111:
    {
        returnValue = F("Auf der Marsch");
        break;
    }
    case 45112:
    {
        returnValue = F("Auf der Marschbach");
        break;
    }
    case 45113:
    {
        returnValue = F("Auf der Marter");
        break;
    }
    case 45114:
    {
        returnValue = F("Auf der Masch");
        break;
    }
    case 45115:
    {
        returnValue = F("Auf der Masse");
        break;
    }
    case 45116:
    {
        returnValue = F("Auf der Mauer");
        break;
    }
    case 45117:
    {
        returnValue = F("Auf der Maxhöhe");
        break;
    }
    case 45118:
    {
        returnValue = F("Auf der Mede");
        break;
    }
    case 45119:
    {
        returnValue = F("Auf der Meente");
        break;
    }
    case 45120:
    {
        returnValue = F("Auf der Meierei");
        break;
    }
    case 45121:
    {
        returnValue = F("Auf der Meine");
        break;
    }
    case 45122:
    {
        returnValue = F("Auf der Meinte");
        break;
    }
    case 45123:
    {
        returnValue = F("Auf der Melm");
        break;
    }
    case 45124:
    {
        returnValue = F("Auf der Menge");
        break;
    }
    case 45125:
    {
        returnValue = F("Auf der Menn");
        break;
    }
    case 45126:
    {
        returnValue = F("Auf der Mersch");
        break;
    }
    case 45127:
    {
        returnValue = F("Auf der Mesche");
        break;
    }
    case 45128:
    {
        returnValue = F("Auf der Mess");
        break;
    }
    case 45129:
    {
        returnValue = F("Auf der Messbach");
        break;
    }
    case 45130:
    {
        returnValue = F("Auf der Metter");
        break;
    }
    case 45131:
    {
        returnValue = F("Auf der Mihlaer Höhe");
        break;
    }
    case 45132:
    {
        returnValue = F("Auf der Mittagsweide");
        break;
    }
    case 45133:
    {
        returnValue = F("Auf der Miß");
        break;
    }
    case 45134:
    {
        returnValue = F("Auf der Moll");
        break;
    }
    case 45135:
    {
        returnValue = F("Auf der Moorlage");
        break;
    }
    case 45136:
    {
        returnValue = F("Auf der Mooth");
        break;
    }
    case 45137:
    {
        returnValue = F("Auf der Morgenröte");
        break;
    }
    case 45138:
    {
        returnValue = F("Auf der Morgenweide");
        break;
    }
    case 45139:
    {
        returnValue = F("Auf der Mothe");
        break;
    }
    case 45140:
    {
        returnValue = F("Auf der Muhl");
        break;
    }
    case 45141:
    {
        returnValue = F("Auf der Mönchheide");
        break;
    }
    case 45142:
    {
        returnValue = F("Auf der Mühl");
        break;
    }
    case 45143:
    {
        returnValue = F("Auf der Mühle");
        break;
    }
    case 45144:
    {
        returnValue = F("Auf der Mühlenbreite");
        break;
    }
    case 45145:
    {
        returnValue = F("Auf der Mühlenscheib");
        break;
    }
    case 45146:
    {
        returnValue = F("Auf der Mühlenwies");
        break;
    }
    case 45147:
    {
        returnValue = F("Auf der Mühlhecke");
        break;
    }
    case 45148:
    {
        returnValue = F("Auf der Mühlwiese");
        break;
    }
    case 45149:
    {
        returnValue = F("Auf der Münze");
        break;
    }
    case 45150:
    {
        returnValue = F("Auf der Nacht");
        break;
    }
    case 45151:
    {
        returnValue = F("Auf der Nachthut");
        break;
    }
    case 45152:
    {
        returnValue = F("Auf der Nachtweide");
        break;
    }
    case 45153:
    {
        returnValue = F("Auf der Nate");
        break;
    }
    case 45154:
    {
        returnValue = F("Auf der Nauwiese");
        break;
    }
    case 45155:
    {
        returnValue = F("Auf der Neidecke");
        break;
    }
    case 45156:
    {
        returnValue = F("Auf der Neusetze");
        break;
    }
    case 45157:
    {
        returnValue = F("Auf der Neustadt");
        break;
    }
    case 45158:
    {
        returnValue = F("Auf der Neuweide");
        break;
    }
    case 45159:
    {
        returnValue = F("Auf der Neuwies");
        break;
    }
    case 45160:
    {
        returnValue = F("Auf der Neuwiese");
        break;
    }
    case 45161:
    {
        returnValue = F("Auf der Nick");
        break;
    }
    case 45162:
    {
        returnValue = F("Auf der Nohr");
        break;
    }
    case 45163:
    {
        returnValue = F("Auf der Nonnenwiese");
        break;
    }
    case 45164:
    {
        returnValue = F("Auf der Norr");
        break;
    }
    case 45165:
    {
        returnValue = F("Auf der Nuer");
        break;
    }
    case 45166:
    {
        returnValue = F("Auf der Nöll");
        break;
    }
    case 45167:
    {
        returnValue = F("Auf der Nörr");
        break;
    }
    case 45168:
    {
        returnValue = F("Auf der Nück");
        break;
    }
    case 45169:
    {
        returnValue = F("Auf der Oberau");
        break;
    }
    case 45170:
    {
        returnValue = F("Auf der Oberburg");
        break;
    }
    case 45171:
    {
        returnValue = F("Auf der Oberen Au");
        break;
    }
    case 45172:
    {
        returnValue = F("Auf der Oberplatte");
        break;
    }
    case 45173:
    {
        returnValue = F("Auf der Ochsenheide");
        break;
    }
    case 45174:
    {
        returnValue = F("Auf der Oh");
        break;
    }
    case 45175:
    {
        returnValue = F("Auf der Ohe");
        break;
    }
    case 45176:
    {
        returnValue = F("Auf der Olk");
        break;
    }
    case 45177:
    {
        returnValue = F("Auf der Onner");
        break;
    }
    case 45178:
    {
        returnValue = F("Auf der Ostsee");
        break;
    }
    case 45179:
    {
        returnValue = F("Auf der Papenburg");
        break;
    }
    case 45180:
    {
        returnValue = F("Auf der Paschenburg");
        break;
    }
    case 45181:
    {
        returnValue = F("Auf der Pat");
        break;
    }
    case 45182:
    {
        returnValue = F("Auf der Pechhütte");
        break;
    }
    case 45183:
    {
        returnValue = F("Auf der Perds");
        break;
    }
    case 45184:
    {
        returnValue = F("Auf der Persch");
        break;
    }
    case 45185:
    {
        returnValue = F("Auf der Peterswiese");
        break;
    }
    case 45186:
    {
        returnValue = F("Auf der Peunt");
        break;
    }
    case 45187:
    {
        returnValue = F("Auf der Pfalz");
        break;
    }
    case 45188:
    {
        returnValue = F("Auf der Pfaurade");
        break;
    }
    case 45189:
    {
        returnValue = F("Auf der Pferdekoppel");
        break;
    }
    case 45190:
    {
        returnValue = F("Auf der Pferdsweide");
        break;
    }
    case 45191:
    {
        returnValue = F("Auf der Pfiffershecke");
        break;
    }
    case 45192:
    {
        returnValue = F("Auf der Pfingstweide");
        break;
    }
    case 45193:
    {
        returnValue = F("Auf der Pick");
        break;
    }
    case 45194:
    {
        returnValue = F("Auf der Pirsch");
        break;
    }
    case 45195:
    {
        returnValue = F("Auf der Plantage");
        break;
    }
    case 45196:
    {
        returnValue = F("Auf der Platsch");
        break;
    }
    case 45197:
    {
        returnValue = F("Auf der Platt");
        break;
    }
    case 45198:
    {
        returnValue = F("Auf der Platte");
        break;
    }
    case 45199:
    {
        returnValue = F("Auf der Plett");
        break;
    }
    case 45200:
    {
        returnValue = F("Auf der Plinke");
        break;
    }
    case 45201:
    {
        returnValue = F("Auf der Plätsch");
        break;
    }
    case 45202:
    {
        returnValue = F("Auf der Point");
        break;
    }
    case 45203:
    {
        returnValue = F("Auf der Portenlay");
        break;
    }
    case 45204:
    {
        returnValue = F("Auf der Porth");
        break;
    }
    case 45205:
    {
        returnValue = F("Auf der Poßwies");
        break;
    }
    case 45206:
    {
        returnValue = F("Auf der Puit");
        break;
    }
    case 45207:
    {
        returnValue = F("Auf der Pulz");
        break;
    }
    case 45208:
    {
        returnValue = F("Auf der Purth");
        break;
    }
    case 45209:
    {
        returnValue = F("Auf der Pütz");
        break;
    }
    case 45210:
    {
        returnValue = F("Auf der Rahm");
        break;
    }
    case 45211:
    {
        returnValue = F("Auf der Raht");
        break;
    }
    case 45212:
    {
        returnValue = F("Auf der Rain");
        break;
    }
    case 45213:
    {
        returnValue = F("Auf der Raise");
        break;
    }
    case 45214:
    {
        returnValue = F("Auf der Ram");
        break;
    }
    case 45215:
    {
        returnValue = F("Auf der Ramhorst");
        break;
    }
    case 45216:
    {
        returnValue = F("Auf der Ramm");
        break;
    }
    case 45217:
    {
        returnValue = F("Auf der Rast");
        break;
    }
    case 45218:
    {
        returnValue = F("Auf der Rausch");
        break;
    }
    case 45219:
    {
        returnValue = F("Auf der Reckte");
        break;
    }
    case 45220:
    {
        returnValue = F("Auf der Reede");
        break;
    }
    case 45221:
    {
        returnValue = F("Auf der Reih");
        break;
    }
    case 45222:
    {
        returnValue = F("Auf der Reihe");
        break;
    }
    case 45223:
    {
        returnValue = F("Auf der Reisheck");
        break;
    }
    case 45224:
    {
        returnValue = F("Auf der Reitwiesen");
        break;
    }
    case 45225:
    {
        returnValue = F("Auf der Rell");
        break;
    }
    case 45226:
    {
        returnValue = F("Auf der Renne");
        break;
    }
    case 45227:
    {
        returnValue = F("Auf der Retz");
        break;
    }
    case 45228:
    {
        returnValue = F("Auf der Reusch");
        break;
    }
    case 45229:
    {
        returnValue = F("Auf der Reut");
        break;
    }
    case 45230:
    {
        returnValue = F("Auf der Reute");
        break;
    }
    case 45231:
    {
        returnValue = F("Auf der Reutte");
        break;
    }
    case 45232:
    {
        returnValue = F("Auf der Rheinhöhe");
        break;
    }
    case 45233:
    {
        returnValue = F("Auf der Ried");
        break;
    }
    case 45234:
    {
        returnValue = F("Auf der Riede");
        break;
    }
    case 45235:
    {
        returnValue = F("Auf der Riege");
        break;
    }
    case 45236:
    {
        returnValue = F("Auf der Riehe");
        break;
    }
    case 45237:
    {
        returnValue = F("Auf der Rieke");
        break;
    }
    case 45238:
    {
        returnValue = F("Auf der Riekte");
        break;
    }
    case 45239:
    {
        returnValue = F("Auf der Riese");
        break;
    }
    case 45240:
    {
        returnValue = F("Auf der Riesen");
        break;
    }
    case 45241:
    {
        returnValue = F("Auf der Rinn");
        break;
    }
    case 45242:
    {
        returnValue = F("Auf der Rinne");
        break;
    }
    case 45243:
    {
        returnValue = F("Auf der Ritsch");
        break;
    }
    case 45244:
    {
        returnValue = F("Auf der Ritschlay");
        break;
    }
    case 45245:
    {
        returnValue = F("Auf der Ritzwies");
        break;
    }
    case 45246:
    {
        returnValue = F("Auf der Rode");
        break;
    }
    case 45247:
    {
        returnValue = F("Auf der Rodt");
        break;
    }
    case 45248:
    {
        returnValue = F("Auf der Roeß");
        break;
    }
    case 45249:
    {
        returnValue = F("Auf der Rohe");
        break;
    }
    case 45250:
    {
        returnValue = F("Auf der Rohrbach");
        break;
    }
    case 45251:
    {
        returnValue = F("Auf der Roll");
        break;
    }
    case 45252:
    {
        returnValue = F("Auf der Roos");
        break;
    }
    case 45253:
    {
        returnValue = F("Auf der Rooster");
        break;
    }
    case 45254:
    {
        returnValue = F("Auf der Rosenheide");
        break;
    }
    case 45255:
    {
        returnValue = F("Auf der Rosselhecke");
        break;
    }
    case 45256:
    {
        returnValue = F("Auf der Rossweide");
        break;
    }
    case 45257:
    {
        returnValue = F("Auf der Rot");
        break;
    }
    case 45258:
    {
        returnValue = F("Auf der Rotbitz");
        break;
    }
    case 45259:
    {
        returnValue = F("Auf der Roten Erde");
        break;
    }
    case 45260:
    {
        returnValue = F("Auf der Rothe");
        break;
    }
    case 45261:
    {
        returnValue = F("Auf der Ruitsch");
        break;
    }
    case 45262:
    {
        returnValue = F("Auf der Rulle");
        break;
    }
    case 45263:
    {
        returnValue = F("Auf der Rut");
        break;
    }
    case 45264:
    {
        returnValue = F("Auf der Rute");
        break;
    }
    case 45265:
    {
        returnValue = F("Auf der Rutsch");
        break;
    }
    case 45266:
    {
        returnValue = F("Auf der Röde");
        break;
    }
    case 45267:
    {
        returnValue = F("Auf der Röhre");
        break;
    }
    case 45268:
    {
        returnValue = F("Auf der Röte");
        break;
    }
    case 45269:
    {
        returnValue = F("Auf der Röth");
        break;
    }
    case 45270:
    {
        returnValue = F("Auf der Röthe");
        break;
    }
    case 45271:
    {
        returnValue = F("Auf der Rötschen");
        break;
    }
    case 45272:
    {
        returnValue = F("Auf der Rötz");
        break;
    }
    case 45273:
    {
        returnValue = F("Auf der Rüge");
        break;
    }
    case 45274:
    {
        returnValue = F("Auf der Rütsch");
        break;
    }
    case 45275:
    {
        returnValue = F("Auf der Rütsche");
        break;
    }
    case 45276:
    {
        returnValue = F("Auf der Rütte");
        break;
    }
    case 45277:
    {
        returnValue = F("Auf der Sandhohl");
        break;
    }
    case 45278:
    {
        returnValue = F("Auf der Sandhöhe");
        break;
    }
    case 45279:
    {
        returnValue = F("Auf der Sandkaul");
        break;
    }
    case 45280:
    {
        returnValue = F("Auf der Sandkaut");
        break;
    }
    case 45281:
    {
        returnValue = F("Auf der Sandseite");
        break;
    }
    case 45282:
    {
        returnValue = F("Auf der Sang");
        break;
    }
    case 45283:
    {
        returnValue = F("Auf der Sapp");
        break;
    }
    case 45284:
    {
        returnValue = F("Auf der Sauerbrei");
        break;
    }
    case 45285:
    {
        returnValue = F("Auf der Sauwiese");
        break;
    }
    case 45286:
    {
        returnValue = F("Auf der Schach");
        break;
    }
    case 45287:
    {
        returnValue = F("Auf der Schadenbach");
        break;
    }
    case 45288:
    {
        returnValue = F("Auf der Schafweide");
        break;
    }
    case 45289:
    {
        returnValue = F("Auf der Schahl");
        break;
    }
    case 45290:
    {
        returnValue = F("Auf der Schanz");
        break;
    }
    case 45291:
    {
        returnValue = F("Auf der Schanze");
        break;
    }
    case 45292:
    {
        returnValue = F("Auf der Schaufel");
        break;
    }
    case 45293:
    {
        returnValue = F("Auf der Schawe");
        break;
    }
    case 45294:
    {
        returnValue = F("Auf der Scheib");
        break;
    }
    case 45295:
    {
        returnValue = F("Auf der Scheibe");
        break;
    }
    case 45296:
    {
        returnValue = F("Auf der Scheiben");
        break;
    }
    case 45297:
    {
        returnValue = F("Auf der Scheierlwiese");
        break;
    }
    case 45298:
    {
        returnValue = F("Auf der Schell");
        break;
    }
    case 45299:
    {
        returnValue = F("Auf der Schere");
        break;
    }
    case 45300:
    {
        returnValue = F("Auf der Scherersmatt");
        break;
    }
    case 45301:
    {
        returnValue = F("Auf der Scheubahn");
        break;
    }
    case 45302:
    {
        returnValue = F("Auf der Scheuer");
        break;
    }
    case 45303:
    {
        returnValue = F("Auf der Schiefer");
        break;
    }
    case 45304:
    {
        returnValue = F("Auf der Schieferkaut");
        break;
    }
    case 45305:
    {
        returnValue = F("Auf der Schießhütte");
        break;
    }
    case 45306:
    {
        returnValue = F("Auf der Schießmauer");
        break;
    }
    case 45307:
    {
        returnValue = F("Auf der Schifferei");
        break;
    }
    case 45308:
    {
        returnValue = F("Auf der Schildhecke");
        break;
    }
    case 45309:
    {
        returnValue = F("Auf der Schinze");
        break;
    }
    case 45310:
    {
        returnValue = F("Auf der Schlaat");
        break;
    }
    case 45311:
    {
        returnValue = F("Auf der Schlack");
        break;
    }
    case 45312:
    {
        returnValue = F("Auf der Schlad");
        break;
    }
    case 45313:
    {
        returnValue = F("Auf der Schlagd");
        break;
    }
    case 45314:
    {
        returnValue = F("Auf der Schlatt");
        break;
    }
    case 45315:
    {
        returnValue = F("Auf der Schlecht");
        break;
    }
    case 45316:
    {
        returnValue = F("Auf der Schled");
        break;
    }
    case 45317:
    {
        returnValue = F("Auf der Schleif");
        break;
    }
    case 45318:
    {
        returnValue = F("Auf der Schlenke");
        break;
    }
    case 45319:
    {
        returnValue = F("Auf der Schleuseninsel");
        break;
    }
    case 45320:
    {
        returnValue = F("Auf der Schlicht");
        break;
    }
    case 45321:
    {
        returnValue = F("Auf der Schlipf");
        break;
    }
    case 45322:
    {
        returnValue = F("Auf der Schloßbreite");
        break;
    }
    case 45323:
    {
        returnValue = F("Auf der Schloßweide");
        break;
    }
    case 45324:
    {
        returnValue = F("Auf der Schlund");
        break;
    }
    case 45325:
    {
        returnValue = F("Auf der Schlädt");
        break;
    }
    case 45326:
    {
        returnValue = F("Auf der Schmelz");
        break;
    }
    case 45327:
    {
        returnValue = F("Auf der Schmelze");
        break;
    }
    case 45328:
    {
        returnValue = F("Auf der Schmette");
        break;
    }
    case 45329:
    {
        returnValue = F("Auf der Schmidt");
        break;
    }
    case 45330:
    {
        returnValue = F("Auf der Schmidtswiese");
        break;
    }
    case 45331:
    {
        returnValue = F("Auf der Schmill");
        break;
    }
    case 45332:
    {
        returnValue = F("Auf der Schmitt");
        break;
    }
    case 45333:
    {
        returnValue = F("Auf der Schnath");
        break;
    }
    case 45334:
    {
        returnValue = F("Auf der Schneiderei");
        break;
    }
    case 45335:
    {
        returnValue = F("Auf der Schnurre");
        break;
    }
    case 45336:
    {
        returnValue = F("Auf der Scholle");
        break;
    }
    case 45337:
    {
        returnValue = F("Auf der Schorr");
        break;
    }
    case 45338:
    {
        returnValue = F("Auf der Schraie");
        break;
    }
    case 45339:
    {
        returnValue = F("Auf der Schrann");
        break;
    }
    case 45340:
    {
        returnValue = F("Auf der Schreife");
        break;
    }
    case 45341:
    {
        returnValue = F("Auf der Schulmatt");
        break;
    }
    case 45342:
    {
        returnValue = F("Auf der Schulwiese");
        break;
    }
    case 45343:
    {
        returnValue = F("Auf der Schur");
        break;
    }
    case 45344:
    {
        returnValue = F("Auf der Schurf");
        break;
    }
    case 45345:
    {
        returnValue = F("Auf der Schwanhecke");
        break;
    }
    case 45346:
    {
        returnValue = F("Auf der Schwarz");
        break;
    }
    case 45347:
    {
        returnValue = F("Auf der Schwefelsburg");
        break;
    }
    case 45348:
    {
        returnValue = F("Auf der Schweineinsel");
        break;
    }
    case 45349:
    {
        returnValue = F("Auf der Schweiz");
        break;
    }
    case 45350:
    {
        returnValue = F("Auf der Schwemme");
        break;
    }
    case 45351:
    {
        returnValue = F("Auf der Schwärz");
        break;
    }
    case 45352:
    {
        returnValue = F("Auf der Schwärzhöhe");
        break;
    }
    case 45353:
    {
        returnValue = F("Auf der Schäferei");
        break;
    }
    case 45354:
    {
        returnValue = F("Auf der Schüpp");
        break;
    }
    case 45355:
    {
        returnValue = F("Auf der Schütte");
        break;
    }
    case 45356:
    {
        returnValue = F("Auf der Schützeneich");
        break;
    }
    case 45357:
    {
        returnValue = F("Auf der Schützenhöhe");
        break;
    }
    case 45358:
    {
        returnValue = F("Auf der Seeburg");
        break;
    }
    case 45359:
    {
        returnValue = F("Auf der Seeleite");
        break;
    }
    case 45360:
    {
        returnValue = F("Auf der Seelshardt");
        break;
    }
    case 45361:
    {
        returnValue = F("Auf der Sees");
        break;
    }
    case 45362:
    {
        returnValue = F("Auf der Seilbahn");
        break;
    }
    case 45363:
    {
        returnValue = F("Auf der Selle");
        break;
    }
    case 45364:
    {
        returnValue = F("Auf der Semseg");
        break;
    }
    case 45365:
    {
        returnValue = F("Auf der Senne");
        break;
    }
    case 45366:
    {
        returnValue = F("Auf der Setz");
        break;
    }
    case 45367:
    {
        returnValue = F("Auf der Sicht");
        break;
    }
    case 45368:
    {
        returnValue = F("Auf der Sieb");
        break;
    }
    case 45369:
    {
        returnValue = F("Auf der Sieber");
        break;
    }
    case 45370:
    {
        returnValue = F("Auf der Silz");
        break;
    }
    case 45371:
    {
        returnValue = F("Auf der Sohle");
        break;
    }
    case 45372:
    {
        returnValue = F("Auf der Sonnenläng");
        break;
    }
    case 45373:
    {
        returnValue = F("Auf der Sonnenseite");
        break;
    }
    case 45374:
    {
        returnValue = F("Auf der Sonnenwiese");
        break;
    }
    case 45375:
    {
        returnValue = F("Auf der Sonnseit");
        break;
    }
    case 45376:
    {
        returnValue = F("Auf der Sorge");
        break;
    }
    case 45377:
    {
        returnValue = F("Auf der Spani");
        break;
    }
    case 45378:
    {
        returnValue = F("Auf der Spar");
        break;
    }
    case 45379:
    {
        returnValue = F("Auf der Spees");
        break;
    }
    case 45380:
    {
        returnValue = F("Auf der Spitze");
        break;
    }
    case 45381:
    {
        returnValue = F("Auf der Spoor");
        break;
    }
    case 45382:
    {
        returnValue = F("Auf der Spreeg");
        break;
    }
    case 45383:
    {
        returnValue = F("Auf der Spreit");
        break;
    }
    case 45384:
    {
        returnValue = F("Auf der Spöck");
        break;
    }
    case 45385:
    {
        returnValue = F("Auf der Stadt");
        break;
    }
    case 45386:
    {
        returnValue = F("Auf der Stadthöhe");
        break;
    }
    case 45387:
    {
        returnValue = F("Auf der Stadtmauer");
        break;
    }
    case 45388:
    {
        returnValue = F("Auf der Staffel");
        break;
    }
    case 45389:
    {
        returnValue = F("Auf der Staig");
        break;
    }
    case 45390:
    {
        returnValue = F("Auf der Staue");
        break;
    }
    case 45391:
    {
        returnValue = F("Auf der Stautg");
        break;
    }
    case 45392:
    {
        returnValue = F("Auf der Steede");
        break;
    }
    case 45393:
    {
        returnValue = F("Auf der Stehwiese");
        break;
    }
    case 45394:
    {
        returnValue = F("Auf der Steig");
        break;
    }
    case 45395:
    {
        returnValue = F("Auf der Steige");
        break;
    }
    case 45396:
    {
        returnValue = F("Auf der Steil");
        break;
    }
    case 45397:
    {
        returnValue = F("Auf der Steinbrede");
        break;
    }
    case 45398:
    {
        returnValue = F("Auf der Steinbreite");
        break;
    }
    case 45399:
    {
        returnValue = F("Auf der Steine");
        break;
    }
    case 45400:
    {
        returnValue = F("Auf der Steinförde");
        break;
    }
    case 45401:
    {
        returnValue = F("Auf der Steinge");
        break;
    }
    case 45402:
    {
        returnValue = F("Auf der Steingrube");
        break;
    }
    case 45403:
    {
        returnValue = F("Auf der Steinkaul");
        break;
    }
    case 45404:
    {
        returnValue = F("Auf der Steinkaut");
        break;
    }
    case 45405:
    {
        returnValue = F("Auf der Steinkuhle");
        break;
    }
    case 45406:
    {
        returnValue = F("Auf der Steinlage");
        break;
    }
    case 45407:
    {
        returnValue = F("Auf der Steinmauer");
        break;
    }
    case 45408:
    {
        returnValue = F("Auf der Steinrausch");
        break;
    }
    case 45409:
    {
        returnValue = F("Auf der Steinritsche");
        break;
    }
    case 45410:
    {
        returnValue = F("Auf der Steinrutsch");
        break;
    }
    case 45411:
    {
        returnValue = F("Auf der Steinung");
        break;
    }
    case 45412:
    {
        returnValue = F("Auf der Steip");
        break;
    }
    case 45413:
    {
        returnValue = F("Auf der Stelle");
        break;
    }
    case 45414:
    {
        returnValue = F("Auf der Stersch");
        break;
    }
    case 45415:
    {
        returnValue = F("Auf der Stichel");
        break;
    }
    case 45416:
    {
        returnValue = F("Auf der Stiegel");
        break;
    }
    case 45417:
    {
        returnValue = F("Auf der Stiegen");
        break;
    }
    case 45418:
    {
        returnValue = F("Auf der Stier");
        break;
    }
    case 45419:
    {
        returnValue = F("Auf der Stiftsfreiheit");
        break;
    }
    case 45420:
    {
        returnValue = F("Auf der Stippe");
        break;
    }
    case 45421:
    {
        returnValue = F("Auf der Stockmatt");
        break;
    }
    case 45422:
    {
        returnValue = F("Auf der Strehl");
        break;
    }
    case 45423:
    {
        returnValue = F("Auf der Stroht");
        break;
    }
    case 45424:
    {
        returnValue = F("Auf der Stroot");
        break;
    }
    case 45425:
    {
        returnValue = F("Auf der Stroth");
        break;
    }
    case 45426:
    {
        returnValue = F("Auf der Struth");
        break;
    }
    case 45427:
    {
        returnValue = F("Auf der Ströh");
        break;
    }
    case 45428:
    {
        returnValue = F("Auf der Stärke");
        break;
    }
    case 45429:
    {
        returnValue = F("Auf der Stöckte");
        break;
    }
    case 45430:
    {
        returnValue = F("Auf der Stöwwe");
        break;
    }
    case 45431:
    {
        returnValue = F("Auf der Subach");
        break;
    }
    case 45432:
    {
        returnValue = F("Auf der Säge");
        break;
    }
    case 45433:
    {
        returnValue = F("Auf der Sähm");
        break;
    }
    case 45434:
    {
        returnValue = F("Auf der Sülte");
        break;
    }
    case 45435:
    {
        returnValue = F("Auf der Sünd");
        break;
    }
    case 45436:
    {
        returnValue = F("Auf der Sünde");
        break;
    }
    case 45437:
    {
        returnValue = F("Auf der Tafel");
        break;
    }
    case 45438:
    {
        returnValue = F("Auf der Tann");
        break;
    }
    case 45439:
    {
        returnValue = F("Auf der Tannen");
        break;
    }
    case 45440:
    {
        returnValue = F("Auf der Taubenacht");
        break;
    }
    case 45441:
    {
        returnValue = F("Auf der Teichhöhe");
        break;
    }
    case 45442:
    {
        returnValue = F("Auf der Teichwiese");
        break;
    }
    case 45443:
    {
        returnValue = F("Auf der Tenne");
        break;
    }
    case 45444:
    {
        returnValue = F("Auf der Teusch");
        break;
    }
    case 45445:
    {
        returnValue = F("Auf der Thomm");
        break;
    }
    case 45446:
    {
        returnValue = F("Auf der Thran");
        break;
    }
    case 45447:
    {
        returnValue = F("Auf der Thüne");
        break;
    }
    case 45448:
    {
        returnValue = F("Auf der Tiefen Wiese");
        break;
    }
    case 45449:
    {
        returnValue = F("Auf der Timmhorst");
        break;
    }
    case 45450:
    {
        returnValue = F("Auf der Tonau");
        break;
    }
    case 45451:
    {
        returnValue = F("Auf der Trat");
        break;
    }
    case 45452:
    {
        returnValue = F("Auf der Trath");
        break;
    }
    case 45453:
    {
        returnValue = F("Auf der Treber");
        break;
    }
    case 45454:
    {
        returnValue = F("Auf der Treib");
        break;
    }
    case 45455:
    {
        returnValue = F("Auf der Trift");
        break;
    }
    case 45456:
    {
        returnValue = F("Auf der Tromm");
        break;
    }
    case 45457:
    {
        returnValue = F("Auf der Träf");
        break;
    }
    case 45458:
    {
        returnValue = F("Auf der Tränk");
        break;
    }
    case 45459:
    {
        returnValue = F("Auf der Twacht");
        break;
    }
    case 45460:
    {
        returnValue = F("Auf der Tweeren");
        break;
    }
    case 45461:
    {
        returnValue = F("Auf der Twente");
        break;
    }
    case 45462:
    {
        returnValue = F("Auf der Twete");
        break;
    }
    case 45463:
    {
        returnValue = F("Auf der Ullenstedt");
        break;
    }
    case 45464:
    {
        returnValue = F("Auf der Unteren Weide");
        break;
    }
    case 45465:
    {
        returnValue = F("Auf der Urlage");
        break;
    }
    case 45466:
    {
        returnValue = F("Auf der Vedert");
        break;
    }
    case 45467:
    {
        returnValue = F("Auf der Viehburg");
        break;
    }
    case 45468:
    {
        returnValue = F("Auf der Viehtrift");
        break;
    }
    case 45469:
    {
        returnValue = F("Auf der Viehweid");
        break;
    }
    case 45470:
    {
        returnValue = F("Auf der Vogelruthe");
        break;
    }
    case 45471:
    {
        returnValue = F("Auf der Vogelsburg");
        break;
    }
    case 45472:
    {
        returnValue = F("Auf der Vogelwiese");
        break;
    }
    case 45473:
    {
        returnValue = F("Auf der Volme");
        break;
    }
    case 45474:
    {
        returnValue = F("Auf der Voßhardt");
        break;
    }
    case 45475:
    {
        returnValue = F("Auf der Vöhde");
        break;
    }
    case 45476:
    {
        returnValue = F("Auf der Waad");
        break;
    }
    case 45477:
    {
        returnValue = F("Auf der Wache");
        break;
    }
    case 45478:
    {
        returnValue = F("Auf der Wacht");
        break;
    }
    case 45479:
    {
        returnValue = F("Auf der Wachthütte");
        break;
    }
    case 45480:
    {
        returnValue = F("Auf der Wachtrift");
        break;
    }
    case 45481:
    {
        returnValue = F("Auf der Wahme");
        break;
    }
    case 45482:
    {
        returnValue = F("Auf der Waldheide");
        break;
    }
    case 45483:
    {
        returnValue = F("Auf der Wallstähe");
        break;
    }
    case 45484:
    {
        returnValue = F("Auf der Walme");
        break;
    }
    case 45485:
    {
        returnValue = F("Auf der Wanne");
        break;
    }
    case 45486:
    {
        returnValue = F("Auf der Warf");
        break;
    }
    case 45487:
    {
        returnValue = F("Auf der Wart");
        break;
    }
    case 45488:
    {
        returnValue = F("Auf der Warte");
        break;
    }
    case 45489:
    {
        returnValue = F("Auf der Warth");
        break;
    }
    case 45490:
    {
        returnValue = F("Auf der Warthe");
        break;
    }
    case 45491:
    {
        returnValue = F("Auf der Wasch");
        break;
    }
    case 45492:
    {
        returnValue = F("Auf der Wasserfurche");
        break;
    }
    case 45493:
    {
        returnValue = F("Auf der Wasserschep");
        break;
    }
    case 45494:
    {
        returnValue = F("Auf der Wegelänge");
        break;
    }
    case 45495:
    {
        returnValue = F("Auf der Wegscheid");
        break;
    }
    case 45496:
    {
        returnValue = F("Auf der Wehme");
        break;
    }
    case 45497:
    {
        returnValue = F("Auf der Wehmhude");
        break;
    }
    case 45498:
    {
        returnValue = F("Auf der Wehrte");
        break;
    }
    case 45499:
    {
        returnValue = F("Auf der Weid");
        break;
    }
    case 45500:
    {
        returnValue = F("Auf der Weide");
        break;
    }
    case 45501:
    {
        returnValue = F("Auf der Weilerbacher Brücke");
        break;
    }
    case 45502:
    {
        returnValue = F("Auf der Weingartsweide");
        break;
    }
    case 45503:
    {
        returnValue = F("Auf der Weisley");
        break;
    }
    case 45504:
    {
        returnValue = F("Auf der Weißburg");
        break;
    }
    case 45505:
    {
        returnValue = F("Auf der Weißerde");
        break;
    }
    case 45506:
    {
        returnValue = F("Auf der Welge");
        break;
    }
    case 45507:
    {
        returnValue = F("Auf der Welle");
        break;
    }
    case 45508:
    {
        returnValue = F("Auf der Wendel");
        break;
    }
    case 45509:
    {
        returnValue = F("Auf der Wenge");
        break;
    }
    case 45510:
    {
        returnValue = F("Auf der Werth");
        break;
    }
    case 45511:
    {
        returnValue = F("Auf der Wescher");
        break;
    }
    case 45512:
    {
        returnValue = F("Auf der Westerheide");
        break;
    }
    case 45513:
    {
        returnValue = F("Auf der Weth");
        break;
    }
    case 45514:
    {
        returnValue = F("Auf der Wethau");
        break;
    }
    case 45515:
    {
        returnValue = F("Auf der Wettern");
        break;
    }
    case 45516:
    {
        returnValue = F("Auf der Wick");
        break;
    }
    case 45517:
    {
        returnValue = F("Auf der Wieden");
        break;
    }
    case 45518:
    {
        returnValue = F("Auf der Wiedhecke");
        break;
    }
    case 45519:
    {
        returnValue = F("Auf der Wiege");
        break;
    }
    case 45520:
    {
        returnValue = F("Auf der Wierde");
        break;
    }
    case 45521:
    {
        returnValue = F("Auf der Wies");
        break;
    }
    case 45522:
    {
        returnValue = F("Auf der Wiese");
        break;
    }
    case 45523:
    {
        returnValue = F("Auf der Wild");
        break;
    }
    case 45524:
    {
        returnValue = F("Auf der Wils");
        break;
    }
    case 45525:
    {
        returnValue = F("Auf der Wiltinger Kupp");
        break;
    }
    case 45526:
    {
        returnValue = F("Auf der Wilz");
        break;
    }
    case 45527:
    {
        returnValue = F("Auf der Wilze");
        break;
    }
    case 45528:
    {
        returnValue = F("Auf der Windhecke");
        break;
    }
    case 45529:
    {
        returnValue = F("Auf der Windmühle");
        break;
    }
    case 45530:
    {
        returnValue = F("Auf der Windschnorr");
        break;
    }
    case 45531:
    {
        returnValue = F("Auf der Windschnur");
        break;
    }
    case 45532:
    {
        returnValue = F("Auf der Winkelhard");
        break;
    }
    case 45533:
    {
        returnValue = F("Auf der Winkenheide");
        break;
    }
    case 45534:
    {
        returnValue = F("Auf der Winneburg");
        break;
    }
    case 45535:
    {
        returnValue = F("Auf der Winsche");
        break;
    }
    case 45536:
    {
        returnValue = F("Auf der Wirth");
        break;
    }
    case 45537:
    {
        returnValue = F("Auf der Wirtzbitz");
        break;
    }
    case 45538:
    {
        returnValue = F("Auf der Wittenburg");
        break;
    }
    case 45539:
    {
        returnValue = F("Auf der Woge");
        break;
    }
    case 45540:
    {
        returnValue = F("Auf der Wohert");
        break;
    }
    case 45541:
    {
        returnValue = F("Auf der Wolfsburg");
        break;
    }
    case 45542:
    {
        returnValue = F("Auf der Wolfshardt");
        break;
    }
    case 45543:
    {
        returnValue = F("Auf der Wolfskaul");
        break;
    }
    case 45544:
    {
        returnValue = F("Auf der Wolfskaut");
        break;
    }
    case 45545:
    {
        returnValue = F("Auf der Woort");
        break;
    }
    case 45546:
    {
        returnValue = F("Auf der Worte");
        break;
    }
    case 45547:
    {
        returnValue = F("Auf der Worth");
        break;
    }
    case 45548:
    {
        returnValue = F("Auf der Wurt");
        break;
    }
    case 45549:
    {
        returnValue = F("Auf der Wurth");
        break;
    }
    case 45550:
    {
        returnValue = F("Auf der Wusten");
        break;
    }
    case 45551:
    {
        returnValue = F("Auf der Wäschbach");
        break;
    }
    case 45552:
    {
        returnValue = F("Auf der Wöhre");
        break;
    }
    case 45553:
    {
        returnValue = F("Auf der Wörth");
        break;
    }
    case 45554:
    {
        returnValue = F("Auf der Wühle");
        break;
    }
    case 45555:
    {
        returnValue = F("Auf der Zargaß");
        break;
    }
    case 45556:
    {
        returnValue = F("Auf der Zehnt");
        break;
    }
    case 45557:
    {
        returnValue = F("Auf der Zeil");
        break;
    }
    case 45558:
    {
        returnValue = F("Auf der Zeilheg");
        break;
    }
    case 45559:
    {
        returnValue = F("Auf der Zein");
        break;
    }
    case 45560:
    {
        returnValue = F("Auf der Zell");
        break;
    }
    case 45561:
    {
        returnValue = F("Auf der Ziegelbreite");
        break;
    }
    case 45562:
    {
        returnValue = F("Auf der Ziegelhütte");
        break;
    }
    case 45563:
    {
        returnValue = F("Auf der Ziegelhütte 6-8");
        break;
    }
    case 45564:
    {
        returnValue = F("Auf der Zinn");
        break;
    }
    case 45565:
    {
        returnValue = F("Auf der Zinne");
        break;
    }
    case 45566:
    {
        returnValue = F("Auf der Zinnet");
        break;
    }
    case 45567:
    {
        returnValue = F("Auf der Zwergheck");
        break;
    }
    case 45568:
    {
        returnValue = F("Auf der alten Bitz");
        break;
    }
    case 45569:
    {
        returnValue = F("Auf der alten Burg");
        break;
    }
    case 45570:
    {
        returnValue = F("Auf der alten Wiese");
        break;
    }
    case 45571:
    {
        returnValue = F("Auf der faulen Brache");
        break;
    }
    case 45572:
    {
        returnValue = F("Auf der großen Heide");
        break;
    }
    case 45573:
    {
        returnValue = F("Auf der großen Hohl");
        break;
    }
    case 45574:
    {
        returnValue = F("Auf der großen Seite");
        break;
    }
    case 45575:
    {
        returnValue = F("Auf der hohen Amel");
        break;
    }
    case 45576:
    {
        returnValue = F("Auf der kleinen Platt");
        break;
    }
    case 45577:
    {
        returnValue = F("Auf der neuen Heide");
        break;
    }
    case 45578:
    {
        returnValue = F("Auf der neuen Kohlaue");
        break;
    }
    case 45579:
    {
        returnValue = F("Auf der oberen Liß");
        break;
    }
    case 45580:
    {
        returnValue = F("Auf der unteren Liß");
        break;
    }
    case 45581:
    {
        returnValue = F("Auf der warmen Steig");
        break;
    }
    case 45582:
    {
        returnValue = F("Auf der Öd");
        break;
    }
    case 45583:
    {
        returnValue = F("Auf die Bell");
        break;
    }
    case 45584:
    {
        returnValue = F("Auf die Haingärten");
        break;
    }
    case 45585:
    {
        returnValue = F("Auf die Höff");
        break;
    }
    case 45586:
    {
        returnValue = F("Auf die Senn");
        break;
    }
    case 45587:
    {
        returnValue = F("Auf die Stecken");
        break;
    }
    case 45588:
    {
        returnValue = F("Auf die Viehtrift");
        break;
    }
    case 45589:
    {
        returnValue = F("Auf drei Vierteln");
        break;
    }
    case 45590:
    {
        returnValue = F("Auf'm Acker");
        break;
    }
    case 45591:
    {
        returnValue = F("Auf'm Alten Garten");
        break;
    }
    case 45592:
    {
        returnValue = F("Auf'm Altengarten");
        break;
    }
    case 45593:
    {
        returnValue = F("Auf'm Bangert");
        break;
    }
    case 45594:
    {
        returnValue = F("Auf'm Berg");
        break;
    }
    case 45595:
    {
        returnValue = F("Auf'm Beuel");
        break;
    }
    case 45596:
    {
        returnValue = F("Auf'm Bildkäppele");
        break;
    }
    case 45597:
    {
        returnValue = F("Auf'm Bocksbart");
        break;
    }
    case 45598:
    {
        returnValue = F("Auf'm Brühl");
        break;
    }
    case 45599:
    {
        returnValue = F("Auf'm Bungert");
        break;
    }
    case 45600:
    {
        returnValue = F("Auf'm Bäumchen");
        break;
    }
    case 45601:
    {
        returnValue = F("Auf'm Bötzchen");
        break;
    }
    case 45602:
    {
        returnValue = F("Auf'm Büchel");
        break;
    }
    case 45603:
    {
        returnValue = F("Auf'm Carlsberg");
        break;
    }
    case 45604:
    {
        returnValue = F("Auf'm Charweg");
        break;
    }
    case 45605:
    {
        returnValue = F("Auf'm Dörnchen");
        break;
    }
    case 45606:
    {
        returnValue = F("Auf'm Eichhahn");
        break;
    }
    case 45607:
    {
        returnValue = F("Auf'm Ernsenhahn");
        break;
    }
    case 45608:
    {
        returnValue = F("Auf'm Erscheng");
        break;
    }
    case 45609:
    {
        returnValue = F("Auf'm Esch");
        break;
    }
    case 45610:
    {
        returnValue = F("Auf'm Geifen");
        break;
    }
    case 45611:
    {
        returnValue = F("Auf'm Grendel");
        break;
    }
    case 45612:
    {
        returnValue = F("Auf'm Gräverich");
        break;
    }
    case 45613:
    {
        returnValue = F("Auf'm Hauk");
        break;
    }
    case 45614:
    {
        returnValue = F("Auf'm Henchen");
        break;
    }
    case 45615:
    {
        returnValue = F("Auf'm Herz");
        break;
    }
    case 45616:
    {
        returnValue = F("Auf'm Hob");
        break;
    }
    case 45617:
    {
        returnValue = F("Auf'm Hofacker");
        break;
    }
    case 45618:
    {
        returnValue = F("Auf'm Hollerstock");
        break;
    }
    case 45619:
    {
        returnValue = F("Auf'm Hunzel");
        break;
    }
    case 45620:
    {
        returnValue = F("Auf'm Höstert");
        break;
    }
    case 45621:
    {
        returnValue = F("Auf'm Hübeling");
        break;
    }
    case 45622:
    {
        returnValue = F("Auf'm Hügelchen");
        break;
    }
    case 45623:
    {
        returnValue = F("Auf'm Kappelacker");
        break;
    }
    case 45624:
    {
        returnValue = F("Auf'm Katzenplatz");
        break;
    }
    case 45625:
    {
        returnValue = F("Auf'm Kickel");
        break;
    }
    case 45626:
    {
        returnValue = F("Auf'm Kies");
        break;
    }
    case 45627:
    {
        returnValue = F("Auf'm Kirchenbühl");
        break;
    }
    case 45628:
    {
        returnValue = F("Auf'm Kissel");
        break;
    }
    case 45629:
    {
        returnValue = F("Auf'm Kley");
        break;
    }
    case 45630:
    {
        returnValue = F("Auf'm Klompertshof");
        break;
    }
    case 45631:
    {
        returnValue = F("Auf'm Klopp");
        break;
    }
    case 45632:
    {
        returnValue = F("Auf'm Kostenkamp");
        break;
    }
    case 45633:
    {
        returnValue = F("Auf'm Kreiter");
        break;
    }
    case 45634:
    {
        returnValue = F("Auf'm Kutsch");
        break;
    }
    case 45635:
    {
        returnValue = F("Auf'm Körtchen");
        break;
    }
    case 45636:
    {
        returnValue = F("Auf'm Löhn");
        break;
    }
    case 45637:
    {
        returnValue = F("Auf'm Mäuerchen");
        break;
    }
    case 45638:
    {
        returnValue = F("Auf'm Mühlenberg");
        break;
    }
    case 45639:
    {
        returnValue = F("Auf'm Nussbaum");
        break;
    }
    case 45640:
    {
        returnValue = F("Auf'm Ockert");
        break;
    }
    case 45641:
    {
        returnValue = F("Auf'm Pesch");
        break;
    }
    case 45642:
    {
        returnValue = F("Auf'm Platz");
        break;
    }
    case 45643:
    {
        returnValue = F("Auf'm Rausch");
        break;
    }
    case 45644:
    {
        returnValue = F("Auf'm Rech");
        break;
    }
    case 45645:
    {
        returnValue = F("Auf'm Rohn");
        break;
    }
    case 45646:
    {
        returnValue = F("Auf'm Rotenacker");
        break;
    }
    case 45647:
    {
        returnValue = F("Auf'm Rothenhügel");
        break;
    }
    case 45648:
    {
        returnValue = F("Auf'm Scheerchen");
        break;
    }
    case 45649:
    {
        returnValue = F("Auf'm Scheid");
        break;
    }
    case 45650:
    {
        returnValue = F("Auf'm Schinnhengst");
        break;
    }
    case 45651:
    {
        returnValue = F("Auf'm Schloß");
        break;
    }
    case 45652:
    {
        returnValue = F("Auf'm Seiberg");
        break;
    }
    case 45653:
    {
        returnValue = F("Auf'm Sinnen");
        break;
    }
    case 45654:
    {
        returnValue = F("Auf'm Sonnenhügel");
        break;
    }
    case 45655:
    {
        returnValue = F("Auf'm Spiess");
        break;
    }
    case 45656:
    {
        returnValue = F("Auf'm Stamp");
        break;
    }
    case 45657:
    {
        returnValue = F("Auf'm Steg");
        break;
    }
    case 45658:
    {
        returnValue = F("Auf'm Steinhaufen");
        break;
    }
    case 45659:
    {
        returnValue = F("Auf'm Strüdchen");
        break;
    }
    case 45660:
    {
        returnValue = F("Auf'm Strüthgen");
        break;
    }
    case 45661:
    {
        returnValue = F("Auf'm Stück");
        break;
    }
    case 45662:
    {
        returnValue = F("Auf'm Teich");
        break;
    }
    case 45663:
    {
        returnValue = F("Auf'm Thie");
        break;
    }
    case 45664:
    {
        returnValue = F("Auf'm Thümels");
        break;
    }
    case 45665:
    {
        returnValue = F("Auf'm Triesch");
        break;
    }
    case 45666:
    {
        returnValue = F("Auf'm Wasem");
        break;
    }
    case 45667:
    {
        returnValue = F("Auf'm Weiher");
        break;
    }
    case 45668:
    {
        returnValue = F("Auf'm Winkel");
        break;
    }
    case 45669:
    {
        returnValue = F("Auf'm Wittem");
        break;
    }
    case 45670:
    {
        returnValue = F("Auf`m Zisselborn");
        break;
    }
    case 45671:
    {
        returnValue = F("Aufackerstr.");
        break;
    }
    case 45672:
    {
        returnValue = F("Aufackerweg");
        break;
    }
    case 45673:
    {
        returnValue = F("Aufbaustr.");
        break;
    }
    case 45674:
    {
        returnValue = F("Aufbauweg");
        break;
    }
    case 45675:
    {
        returnValue = F("Aufeld");
        break;
    }
    case 45676:
    {
        returnValue = F("Aufelder Weg");
        break;
    }
    case 45677:
    {
        returnValue = F("Aufeldstr.");
        break;
    }
    case 45678:
    {
        returnValue = F("Aufeldweg");
        break;
    }
    case 45679:
    {
        returnValue = F("Aufenauer Str.");
        break;
    }
    case 45680:
    {
        returnValue = F("Auffahrt");
        break;
    }
    case 45681:
    {
        returnValue = F("Auffahrt Berg-Skiteam");
        break;
    }
    case 45682:
    {
        returnValue = F("Auffangstation für Großkatzen");
        break;
    }
    case 45683:
    {
        returnValue = F("Auffeld");
        break;
    }
    case 45684:
    {
        returnValue = F("Auffenbergstr.");
        break;
    }
    case 45685:
    {
        returnValue = F("Aufgang Burgruine");
        break;
    }
    case 45686:
    {
        returnValue = F("Aufgang zum Schloss");
        break;
    }
    case 45687:
    {
        returnValue = F("Aufgangsstr.");
        break;
    }
    case 45688:
    {
        returnValue = F("Aufgehende");
        break;
    }
    case 45689:
    {
        returnValue = F("Aufham");
        break;
    }
    case 45690:
    {
        returnValue = F("Aufhamer Str.");
        break;
    }
    case 45691:
    {
        returnValue = F("Aufhausener Str.");
        break;
    }
    case 45692:
    {
        returnValue = F("Aufhausener Weg");
        break;
    }
    case 45693:
    {
        returnValue = F("Aufhauser Str.");
        break;
    }
    case 45694:
    {
        returnValue = F("Aufhauser Weg");
        break;
    }
    case 45695:
    {
        returnValue = F("Aufhausner Weg");
        break;
    }
    case 45696:
    {
        returnValue = F("Aufhofener Str.");
        break;
    }
    case 45697:
    {
        returnValue = F("Aufhofer Str.");
        break;
    }
    case 45698:
    {
        returnValue = F("Aufhüttenweg");
        break;
    }
    case 45699:
    {
        returnValue = F("Aufkirch");
        break;
    }
    case 45700:
    {
        returnValue = F("Aufkirchen");
        break;
    }
    case 45701:
    {
        returnValue = F("Aufkirchener Str.");
        break;
    }
    case 45702:
    {
        returnValue = F("Aufkirchener Weg");
        break;
    }
    case 45703:
    {
        returnValue = F("Aufkircher Str.");
        break;
    }
    case 45704:
    {
        returnValue = F("Aufkirchner Str.");
        break;
    }
    case 45705:
    {
        returnValue = F("Aufkirchner Weg");
        break;
    }
    case 45706:
    {
        returnValue = F("Auflangenstr.");
        break;
    }
    case 45707:
    {
        returnValue = F("Aufleg");
        break;
    }
    case 45708:
    {
        returnValue = F("Aufm Berg");
        break;
    }
    case 45709:
    {
        returnValue = F("Aufm Driesch");
        break;
    }
    case 45710:
    {
        returnValue = F("Aufm Girrtal");
        break;
    }
    case 45711:
    {
        returnValue = F("Aufm Kirchstück");
        break;
    }
    case 45712:
    {
        returnValue = F("Aufm Kreuzkamp");
        break;
    }
    case 45713:
    {
        returnValue = F("Aufm Schild");
        break;
    }
    case 45714:
    {
        returnValue = F("Aufm Siegler");
        break;
    }
    case 45715:
    {
        returnValue = F("Aufm Wasem");
        break;
    }
    case 45716:
    {
        returnValue = F("Aufm Wieschen");
        break;
    }
    case 45717:
    {
        returnValue = F("Aufmberg");
        break;
    }
    case 45718:
    {
        returnValue = F("Aufs Heft");
        break;
    }
    case 45719:
    {
        returnValue = F("Aufsee");
        break;
    }
    case 45720:
    {
        returnValue = F("Aufsicht");
        break;
    }
    case 45721:
    {
        returnValue = F("Aufspringmühle");
        break;
    }
    case 45722:
    {
        returnValue = F("Aufwurf");
        break;
    }
    case 45723:
    {
        returnValue = F("Aufzug");
        break;
    }
    case 45724:
    {
        returnValue = F("Aufzugweg");
        break;
    }
    case 45725:
    {
        returnValue = F("Auf´m Egg");
        break;
    }
    case 45726:
    {
        returnValue = F("Auf´m Heidfeld");
        break;
    }
    case 45727:
    {
        returnValue = F("Auf´m Schlädderich");
        break;
    }
    case 45728:
    {
        returnValue = F("Augaarder Weg");
        break;
    }
    case 45729:
    {
        returnValue = F("Augang");
        break;
    }
    case 45730:
    {
        returnValue = F("Augarten");
        break;
    }
    case 45731:
    {
        returnValue = F("Augartenstr.");
        break;
    }
    case 45732:
    {
        returnValue = F("Augartstr.");
        break;
    }
    case 45733:
    {
        returnValue = F("Augasse");
        break;
    }
    case 45734:
    {
        returnValue = F("Augelbaumstr.");
        break;
    }
    case 45735:
    {
        returnValue = F("Augenberg");
        break;
    }
    case 45736:
    {
        returnValue = F("Augenbergweg");
        break;
    }
    case 45737:
    {
        returnValue = F("Augenriedstr.");
        break;
    }
    case 45738:
    {
        returnValue = F("Augenseestr.");
        break;
    }
    case 45739:
    {
        returnValue = F("Augenweide");
        break;
    }
    case 45740:
    {
        returnValue = F("Augezder Str.");
        break;
    }
    case 45741:
    {
        returnValue = F("Auggartenstr.");
        break;
    }
    case 45742:
    {
        returnValue = F("Auggenbach");
        break;
    }
    case 45743:
    {
        returnValue = F("Auggener Str.");
        break;
    }
    case 45744:
    {
        returnValue = F("Auggener Weg");
        break;
    }
    case 45745:
    {
        returnValue = F("Auggenthal");
        break;
    }
    case 45746:
    {
        returnValue = F("Augitweg");
        break;
    }
    case 45747:
    {
        returnValue = F("Auglersweg");
        break;
    }
    case 45748:
    {
        returnValue = F("Augraben");
        break;
    }
    case 45749:
    {
        returnValue = F("Augrabenstr.");
        break;
    }
    case 45750:
    {
        returnValue = F("Augrund");
        break;
    }
    case 45751:
    {
        returnValue = F("Augrät");
        break;
    }
    case 45752:
    {
        returnValue = F("Augsbarg");
        break;
    }
    case 45753:
    {
        returnValue = F("Augsbergweg");
        break;
    }
    case 45754:
    {
        returnValue = F("Augsburger Botengasse");
        break;
    }
    case 45755:
    {
        returnValue = F("Augsburger Greppe");
        break;
    }
    case 45756:
    {
        returnValue = F("Augsburger Str.");
        break;
    }
    case 45757:
    {
        returnValue = F("Augsburger Weg");
        break;
    }
    case 45758:
    {
        returnValue = F("Augsdorfer Str.");
        break;
    }
    case 45759:
    {
        returnValue = F("Augsfelder Str.");
        break;
    }
    case 45760:
    {
        returnValue = F("Augstbaumfeld");
        break;
    }
    case 45761:
    {
        returnValue = F("Augstbergstr.");
        break;
    }
    case 45762:
    {
        returnValue = F("Augstbergweg");
        break;
    }
    case 45763:
    {
        returnValue = F("Augsteiner");
        break;
    }
    case 45764:
    {
        returnValue = F("August Bebel Str.");
        break;
    }
    case 45765:
    {
        returnValue = F("August Blepp Weg");
        break;
    }
    case 45766:
    {
        returnValue = F("August Horn Park");
        break;
    }
    case 45767:
    {
        returnValue = F("August- Walter-Weg");
        break;
    }
    case 45768:
    {
        returnValue = F("August-Auwärter-Str.");
        break;
    }
    case 45769:
    {
        returnValue = F("August-Bader-Weg");
        break;
    }
    case 45770:
    {
        returnValue = F("August-Barack-Str.");
        break;
    }
    case 45771:
    {
        returnValue = F("August-Bartels-Str.");
        break;
    }
    case 45772:
    {
        returnValue = F("August-Bartels-Weg");
        break;
    }
    case 45773:
    {
        returnValue = F("August-Bartelt-Str.");
        break;
    }
    case 45774:
    {
        returnValue = F("August-Bauer-Str.");
        break;
    }
    case 45775:
    {
        returnValue = F("August-Bauer-Weg");
        break;
    }
    case 45776:
    {
        returnValue = F("August-Bebel Str.");
        break;
    }
    case 45777:
    {
        returnValue = F("August-Bebel-Allee");
        break;
    }
    case 45778:
    {
        returnValue = F("August-Bebel-Gasse");
        break;
    }
    case 45779:
    {
        returnValue = F("August-Bebel-Hof");
        break;
    }
    case 45780:
    {
        returnValue = F("August-Bebel-Park");
        break;
    }
    case 45781:
    {
        returnValue = F("August-Bebel-Platz");
        break;
    }
    case 45782:
    {
        returnValue = F("August-Bebel-Ring");
        break;
    }
    case 45783:
    {
        returnValue = F("August-Bebel-Siedlung");
        break;
    }
    case 45784:
    {
        returnValue = F("August-Bebel-Str.");
        break;
    }
    case 45785:
    {
        returnValue = F("August-Bebel-Weg");
        break;
    }
    case 45786:
    {
        returnValue = F("August-Bechter-Str.");
        break;
    }
    case 45787:
    {
        returnValue = F("August-Beck-Str.");
        break;
    }
    case 45788:
    {
        returnValue = F("August-Becker-Str.");
        break;
    }
    case 45789:
    {
        returnValue = F("August-Beckmann-Str.");
        break;
    }
    case 45790:
    {
        returnValue = F("August-Beckmann-Weg");
        break;
    }
    case 45791:
    {
        returnValue = F("August-Bendler-Str.");
        break;
    }
    case 45792:
    {
        returnValue = F("August-Berberich-Str.");
        break;
    }
    case 45793:
    {
        returnValue = F("August-Berger-Str.");
        break;
    }
    case 45794:
    {
        returnValue = F("August-Berthelt-Str.");
        break;
    }
    case 45795:
    {
        returnValue = F("August-Beule-Str.");
        break;
    }
    case 45796:
    {
        returnValue = F("August-Beyer-Weg");
        break;
    }
    case 45797:
    {
        returnValue = F("August-Bilstein-Str.");
        break;
    }
    case 45798:
    {
        returnValue = F("August-Birkmaier-Weg");
        break;
    }
    case 45799:
    {
        returnValue = F("August-Blepp-Str.");
        break;
    }
    case 45800:
    {
        returnValue = F("August-Blessing-Str.");
        break;
    }
    case 45801:
    {
        returnValue = F("August-Blotenberg-Str.");
        break;
    }
    case 45802:
    {
        returnValue = F("August-Blödner-Str.");
        break;
    }
    case 45803:
    {
        returnValue = F("August-Born-Str.");
        break;
    }
    case 45804:
    {
        returnValue = F("August-Borsig-Str.");
        break;
    }
    case 45805:
    {
        returnValue = F("August-Bretschneider-Str.");
        break;
    }
    case 45806:
    {
        returnValue = F("August-Brust-Str.");
        break;
    }
    case 45807:
    {
        returnValue = F("August-Brändle-Str.");
        break;
    }
    case 45808:
    {
        returnValue = F("August-Brüser-Str.");
        break;
    }
    case 45809:
    {
        returnValue = F("August-Bungert-Allee");
        break;
    }
    case 45810:
    {
        returnValue = F("August-Burg-Str.");
        break;
    }
    case 45811:
    {
        returnValue = F("August-Buß-Weg");
        break;
    }
    case 45812:
    {
        returnValue = F("August-Böhm-Str.");
        break;
    }
    case 45813:
    {
        returnValue = F("August-Bücher-Str.");
        break;
    }
    case 45814:
    {
        returnValue = F("August-Christen-Str.");
        break;
    }
    case 45815:
    {
        returnValue = F("August-Claas-Str.");
        break;
    }
    case 45816:
    {
        returnValue = F("August-Colditz-Str.");
        break;
    }
    case 45817:
    {
        returnValue = F("August-Conrad-Str.");
        break;
    }
    case 45818:
    {
        returnValue = F("August-Cords-Park");
        break;
    }
    case 45819:
    {
        returnValue = F("August-Crelle-Str.");
        break;
    }
    case 45820:
    {
        returnValue = F("August-Creutzburg-Str.");
        break;
    }
    case 45821:
    {
        returnValue = F("August-Croissant-Str.");
        break;
    }
    case 45822:
    {
        returnValue = F("August-Dehning-Weg");
        break;
    }
    case 45823:
    {
        returnValue = F("August-Deller-Str.");
        break;
    }
    case 45824:
    {
        returnValue = F("August-Dietzschold-Str.");
        break;
    }
    case 45825:
    {
        returnValue = F("August-Dreier-Str.");
        break;
    }
    case 45826:
    {
        returnValue = F("August-Dähn-Str.");
        break;
    }
    case 45827:
    {
        returnValue = F("August-Dönitz-Platz");
        break;
    }
    case 45828:
    {
        returnValue = F("August-Düker-Str.");
        break;
    }
    case 45829:
    {
        returnValue = F("August-Eckardt-Str.");
        break;
    }
    case 45830:
    {
        returnValue = F("August-Ehrlacher-Str.");
        break;
    }
    case 45831:
    {
        returnValue = F("August-Eisele-Str.");
        break;
    }
    case 45832:
    {
        returnValue = F("August-Eisenmann-Str.");
        break;
    }
    case 45833:
    {
        returnValue = F("August-Ellinger-Str.");
        break;
    }
    case 45834:
    {
        returnValue = F("August-Endell-Weg");
        break;
    }
    case 45835:
    {
        returnValue = F("August-Engelen-Str.");
        break;
    }
    case 45836:
    {
        returnValue = F("August-Engels-Str.");
        break;
    }
    case 45837:
    {
        returnValue = F("August-Euler-Str.");
        break;
    }
    case 45838:
    {
        returnValue = F("August-Euler-Weg");
        break;
    }
    case 45839:
    {
        returnValue = F("August-Everding-Str.");
        break;
    }
    case 45840:
    {
        returnValue = F("August-Exter-Str.");
        break;
    }
    case 45841:
    {
        returnValue = F("August-Feine-Str.");
        break;
    }
    case 45842:
    {
        returnValue = F("August-Fischer-Str.");
        break;
    }
    case 45843:
    {
        returnValue = F("August-Fleischer-Str.");
        break;
    }
    case 45844:
    {
        returnValue = F("August-Franck-Str.");
        break;
    }
    case 45845:
    {
        returnValue = F("August-Francke-Weg");
        break;
    }
    case 45846:
    {
        returnValue = F("August-Frey-Weg");
        break;
    }
    case 45847:
    {
        returnValue = F("August-Fritzsche-Str.");
        break;
    }
    case 45848:
    {
        returnValue = F("August-Fröhlich-Str.");
        break;
    }
    case 45849:
    {
        returnValue = F("August-Gabler-Str.");
        break;
    }
    case 45850:
    {
        returnValue = F("August-Gaiser-Str.");
        break;
    }
    case 45851:
    {
        returnValue = F("August-Ganther-Str.");
        break;
    }
    case 45852:
    {
        returnValue = F("August-Gauer-Str.");
        break;
    }
    case 45853:
    {
        returnValue = F("August-Geers-Str.");
        break;
    }
    case 45854:
    {
        returnValue = F("August-Geier-Str.");
        break;
    }
    case 45855:
    {
        returnValue = F("August-Genth-Str.");
        break;
    }
    case 45856:
    {
        returnValue = F("August-Gerlach-Str.");
        break;
    }
    case 45857:
    {
        returnValue = F("August-Glockner-Ring");
        break;
    }
    case 45858:
    {
        returnValue = F("August-Gramenstetter-Str.");
        break;
    }
    case 45859:
    {
        returnValue = F("August-Graßl-Str.");
        break;
    }
    case 45860:
    {
        returnValue = F("August-Gröber-Platz");
        break;
    }
    case 45861:
    {
        returnValue = F("August-Haasbach-Str.");
        break;
    }
    case 45862:
    {
        returnValue = F("August-Hagen-Weg");
        break;
    }
    case 45863:
    {
        returnValue = F("August-Halm-Str.");
        break;
    }
    case 45864:
    {
        returnValue = F("August-Hebenstreit-Str.");
        break;
    }
    case 45865:
    {
        returnValue = F("August-Heckel-Weg");
        break;
    }
    case 45866:
    {
        returnValue = F("August-Hederer-Str.");
        break;
    }
    case 45867:
    {
        returnValue = F("August-Heeke-Str.");
        break;
    }
    case 45868:
    {
        returnValue = F("August-Heinrich-Str.");
        break;
    }
    case 45869:
    {
        returnValue = F("August-Heinrich-Weg");
        break;
    }
    case 45870:
    {
        returnValue = F("August-Heisler-Weg");
        break;
    }
    case 45871:
    {
        returnValue = F("August-Helmker-Str.");
        break;
    }
    case 45872:
    {
        returnValue = F("August-Henkel-Str.");
        break;
    }
    case 45873:
    {
        returnValue = F("August-Henze-Str.");
        break;
    }
    case 45874:
    {
        returnValue = F("August-Herbart-Str.");
        break;
    }
    case 45875:
    {
        returnValue = F("August-Hermann-Francke-Str.");
        break;
    }
    case 45876:
    {
        returnValue = F("August-Herold-Str.");
        break;
    }
    case 45877:
    {
        returnValue = F("August-Herold-Weg");
        break;
    }
    case 45878:
    {
        returnValue = F("August-Hinrichs-Str.");
        break;
    }
    case 45879:
    {
        returnValue = F("August-Hinrichs-Weg");
        break;
    }
    case 45880:
    {
        returnValue = F("August-Hirsch-Str.");
        break;
    }
    case 45881:
    {
        returnValue = F("August-Hoffmann-Str.");
        break;
    }
    case 45882:
    {
        returnValue = F("August-Horch-Str.");
        break;
    }
    case 45883:
    {
        returnValue = F("August-Huber-Str.");
        break;
    }
    case 45884:
    {
        returnValue = F("August-Höfener-Str.");
        break;
    }
    case 45885:
    {
        returnValue = F("August-Imhof-Str.");
        break;
    }
    case 45886:
    {
        returnValue = F("August-Jacobs-Ring");
        break;
    }
    case 45887:
    {
        returnValue = F("August-Jaspert-Str.");
        break;
    }
    case 45888:
    {
        returnValue = F("August-Kageler-Weg");
        break;
    }
    case 45889:
    {
        returnValue = F("August-Keiler-Str.");
        break;
    }
    case 45890:
    {
        returnValue = F("August-Kett-Weg");
        break;
    }
    case 45891:
    {
        returnValue = F("August-Kettler-Str.");
        break;
    }
    case 45892:
    {
        returnValue = F("August-Kienzle-Str.");
        break;
    }
    case 45893:
    {
        returnValue = F("August-Kirsch-Str.");
        break;
    }
    case 45894:
    {
        returnValue = F("August-Klemm-Str.");
        break;
    }
    case 45895:
    {
        returnValue = F("August-Klingebiel-Str.");
        break;
    }
    case 45896:
    {
        returnValue = F("August-Knoke-Platz");
        break;
    }
    case 45897:
    {
        returnValue = F("August-Koch-Str.");
        break;
    }
    case 45898:
    {
        returnValue = F("August-Kohrs-Str.");
        break;
    }
    case 45899:
    {
        returnValue = F("August-Kreß-Str.");
        break;
    }
    case 45900:
    {
        returnValue = F("August-Krieg-Weg");
        break;
    }
    case 45901:
    {
        returnValue = F("August-Krönert-Str.");
        break;
    }
    case 45902:
    {
        returnValue = F("August-Kröpke-Weg");
        break;
    }
    case 45903:
    {
        returnValue = F("August-Kuschmirz-Str.");
        break;
    }
    case 45904:
    {
        returnValue = F("August-Köhler-Str.");
        break;
    }
    case 45905:
    {
        returnValue = F("August-Kömpel-Str.");
        break;
    }
    case 45906:
    {
        returnValue = F("August-König-Str.");
        break;
    }
    case 45907:
    {
        returnValue = F("August-Kühl-Str.");
        break;
    }
    case 45908:
    {
        returnValue = F("August-Kühling-Str.");
        break;
    }
    case 45909:
    {
        returnValue = F("August-Kümpers-Str.");
        break;
    }
    case 45910:
    {
        returnValue = F("August-Lahr-Str.");
        break;
    }
    case 45911:
    {
        returnValue = F("August-Lange-Str.");
        break;
    }
    case 45912:
    {
        returnValue = F("August-Laukhuff-Str.");
        break;
    }
    case 45913:
    {
        returnValue = F("August-Lechler-Str.");
        break;
    }
    case 45914:
    {
        returnValue = F("August-Lenz-Weg");
        break;
    }
    case 45915:
    {
        returnValue = F("August-Levin-Str.");
        break;
    }
    case 45916:
    {
        returnValue = F("August-Ludwig-Str.");
        break;
    }
    case 45917:
    {
        returnValue = F("August-Luppold-Str.");
        break;
    }
    case 45918:
    {
        returnValue = F("August-Lutz-Str.");
        break;
    }
    case 45919:
    {
        returnValue = F("August-Lämmle-Str.");
        break;
    }
    case 45920:
    {
        returnValue = F("August-Lämmle-Weg");
        break;
    }
    case 45921:
    {
        returnValue = F("August-Läpple-Str.");
        break;
    }
    case 45922:
    {
        returnValue = F("August-Läpple-Weg");
        break;
    }
    case 45923:
    {
        returnValue = F("August-Löning-Str.");
        break;
    }
    case 45924:
    {
        returnValue = F("August-Lütgenau-Str.");
        break;
    }
    case 45925:
    {
        returnValue = F("August-Macke-Allee");
        break;
    }
    case 45926:
    {
        returnValue = F("August-Macke-Str.");
        break;
    }
    case 45927:
    {
        returnValue = F("August-Macke-Weg");
        break;
    }
    case 45928:
    {
        returnValue = F("August-Mattausch-Park");
        break;
    }
    case 45929:
    {
        returnValue = F("August-Matthes-Weg");
        break;
    }
    case 45930:
    {
        returnValue = F("August-Mayer-Str.");
        break;
    }
    case 45931:
    {
        returnValue = F("August-Meisel-Str.");
        break;
    }
    case 45932:
    {
        returnValue = F("August-Meyer-Weg");
        break;
    }
    case 45933:
    {
        returnValue = F("August-Mittelsten-Scheid-Str.");
        break;
    }
    case 45934:
    {
        returnValue = F("August-Moralt-Str.");
        break;
    }
    case 45935:
    {
        returnValue = F("August-Möller-Str.");
        break;
    }
    case 45936:
    {
        returnValue = F("August-Müller-Str.");
        break;
    }
    case 45937:
    {
        returnValue = F("August-Neidert-Str.");
        break;
    }
    case 45938:
    {
        returnValue = F("August-Neuhaus-Str.");
        break;
    }
    case 45939:
    {
        returnValue = F("August-Neuhäusel-Str.");
        break;
    }
    case 45940:
    {
        returnValue = F("August-Neumann-Str.");
        break;
    }
    case 45941:
    {
        returnValue = F("August-Nützel-Str.");
        break;
    }
    case 45942:
    {
        returnValue = F("August-Oppenberg-Str.");
        break;
    }
    case 45943:
    {
        returnValue = F("August-Otto-Str.");
        break;
    }
    case 45944:
    {
        returnValue = F("August-Paris-Str.");
        break;
    }
    case 45945:
    {
        returnValue = F("August-Petermann-Weg");
        break;
    }
    case 45946:
    {
        returnValue = F("August-Pfänder-Str.");
        break;
    }
    case 45947:
    {
        returnValue = F("August-Prante-Weg");
        break;
    }
    case 45948:
    {
        returnValue = F("August-Prechter-Str.");
        break;
    }
    case 45949:
    {
        returnValue = F("August-Probst-Weg");
        break;
    }
    case 45950:
    {
        returnValue = F("August-Reiser-Str.");
        break;
    }
    case 45951:
    {
        returnValue = F("August-Reuter-Str.");
        break;
    }
    case 45952:
    {
        returnValue = F("August-Riesinger-Str.");
        break;
    }
    case 45953:
    {
        returnValue = F("August-Röhmeier-Weg");
        break;
    }
    case 45954:
    {
        returnValue = F("August-Sach-Str.");
        break;
    }
    case 45955:
    {
        returnValue = F("August-Sander-Str.");
        break;
    }
    case 45956:
    {
        returnValue = F("August-Sauer-Str.");
        break;
    }
    case 45957:
    {
        returnValue = F("August-Scheffler-Str.");
        break;
    }
    case 45958:
    {
        returnValue = F("August-Scherer-Str.");
        break;
    }
    case 45959:
    {
        returnValue = F("August-Schmauß-Str.");
        break;
    }
    case 45960:
    {
        returnValue = F("August-Schmidt-Ring");
        break;
    }
    case 45961:
    {
        returnValue = F("August-Schmidt-Str.");
        break;
    }
    case 45962:
    {
        returnValue = F("August-Schneider-Str.");
        break;
    }
    case 45963:
    {
        returnValue = F("August-Scholl-Str.");
        break;
    }
    case 45964:
    {
        returnValue = F("August-Schröder-Str.");
        break;
    }
    case 45965:
    {
        returnValue = F("August-Schuhmacher-Str.");
        break;
    }
    case 45966:
    {
        returnValue = F("August-Schuler-Ring");
        break;
    }
    case 45967:
    {
        returnValue = F("August-Schumacher-Weg");
        break;
    }
    case 45968:
    {
        returnValue = F("August-Schärttner-Weg");
        break;
    }
    case 45969:
    {
        returnValue = F("August-Sebald-Str.");
        break;
    }
    case 45970:
    {
        returnValue = F("August-Seidel-Str.");
        break;
    }
    case 45971:
    {
        returnValue = F("August-Sieghardt-Str.");
        break;
    }
    case 45972:
    {
        returnValue = F("August-Skirde-Weg");
        break;
    }
    case 45973:
    {
        returnValue = F("August-Sperl-Str.");
        break;
    }
    case 45974:
    {
        returnValue = F("August-Spiegel-Str.");
        break;
    }
    case 45975:
    {
        returnValue = F("August-Springer-Weg");
        break;
    }
    case 45976:
    {
        returnValue = F("August-Stecher-Str.");
        break;
    }
    case 45977:
    {
        returnValue = F("August-Steinmetz-Ring");
        break;
    }
    case 45978:
    {
        returnValue = F("August-Storm-Str.");
        break;
    }
    case 45979:
    {
        returnValue = F("August-Streufert-Str.");
        break;
    }
    case 45980:
    {
        returnValue = F("August-Strindberg-Weg");
        break;
    }
    case 45981:
    {
        returnValue = F("August-Söding-Str.");
        break;
    }
    case 45982:
    {
        returnValue = F("August-Süßdorf-Str.");
        break;
    }
    case 45983:
    {
        returnValue = F("August-Talmon-Str.");
        break;
    }
    case 45984:
    {
        returnValue = F("August-Thalheimer-Str.");
        break;
    }
    case 45985:
    {
        returnValue = F("August-Thewes-Weg");
        break;
    }
    case 45986:
    {
        returnValue = F("August-Thienemann-Str.");
        break;
    }
    case 45987:
    {
        returnValue = F("August-Thyssen-Str.");
        break;
    }
    case 45988:
    {
        returnValue = F("August-Trinius-Str.");
        break;
    }
    case 45989:
    {
        returnValue = F("August-Trunk-Str.");
        break;
    }
    case 45990:
    {
        returnValue = F("August-Uhlmann-Str.");
        break;
    }
    case 45991:
    {
        returnValue = F("August-Ullrich-Str.");
        break;
    }
    case 45992:
    {
        returnValue = F("August-Unmüßig-Str.");
        break;
    }
    case 45993:
    {
        returnValue = F("August-Unterholzner-Str.");
        break;
    }
    case 45994:
    {
        returnValue = F("August-Vogel-Str.");
        break;
    }
    case 45995:
    {
        returnValue = F("August-Voßmer-Weg");
        break;
    }
    case 45996:
    {
        returnValue = F("August-Wacker-Str.");
        break;
    }
    case 45997:
    {
        returnValue = F("August-Wagner-Str.");
        break;
    }
    case 45998:
    {
        returnValue = F("August-Wallenstein-Str.");
        break;
    }
    case 45999:
    {
        returnValue = F("August-Wedemeyer-Str.");
        break;
    }
    case 46000:
    {
        returnValue = F("August-Wegmann-Str.");
        break;
    }
    case 46001:
    {
        returnValue = F("August-Weilert-Park");
        break;
    }
    case 46002:
    {
        returnValue = F("August-Weise-Str.");
        break;
    }
    case 46003:
    {
        returnValue = F("August-Wessendorf-Weg");
        break;
    }
    case 46004:
    {
        returnValue = F("August-Wessing-Damm");
        break;
    }
    case 46005:
    {
        returnValue = F("August-Wessing-Str.");
        break;
    }
    case 46006:
    {
        returnValue = F("August-Wessing-Weg");
        break;
    }
    case 46007:
    {
        returnValue = F("August-Wiehe-Str.");
        break;
    }
    case 46008:
    {
        returnValue = F("August-Wieschemeyer-Str.");
        break;
    }
    case 46009:
    {
        returnValue = F("August-Wiest-Str.");
        break;
    }
    case 46010:
    {
        returnValue = F("August-Wilhelm-Pfäffle-Str.");
        break;
    }
    case 46011:
    {
        returnValue = F("August-Wilhelm-Str.");
        break;
    }
    case 46012:
    {
        returnValue = F("August-Winkhaus-Str.");
        break;
    }
    case 46013:
    {
        returnValue = F("August-Winnecke-Str.");
        break;
    }
    case 46014:
    {
        returnValue = F("August-Wischel-Str.");
        break;
    }
    case 46015:
    {
        returnValue = F("August-Wondra-Wäldchen (Eichwäldchen)");
        break;
    }
    case 46016:
    {
        returnValue = F("August-Wörner-Str.");
        break;
    }
    case 46017:
    {
        returnValue = F("August-Ziegelmüller-Str.");
        break;
    }
    case 46018:
    {
        returnValue = F("August-Ziegler-Weg");
        break;
    }
    case 46019:
    {
        returnValue = F("August-Zierfuß-Str.");
        break;
    }
    case 46020:
    {
        returnValue = F("August-von-Voit-Ring");
        break;
    }
    case 46021:
    {
        returnValue = F("Augusta-Bender-Str.");
        break;
    }
    case 46022:
    {
        returnValue = F("Augusta-Sibylla-Str.");
        break;
    }
    case 46023:
    {
        returnValue = F("Augusta-Stolberg-Str.");
        break;
    }
    case 46024:
    {
        returnValue = F("Augustastr.");
        break;
    }
    case 46025:
    {
        returnValue = F("Augustaweg");
        break;
    }
    case 46026:
    {
        returnValue = F("Augustdorfer Str.");
        break;
    }
    case 46027:
    {
        returnValue = F("Auguste Sievers Park");
        break;
    }
    case 46028:
    {
        returnValue = F("Auguste-Eisenlohr-Str.");
        break;
    }
    case 46029:
    {
        returnValue = F("Auguste-Förster-Str.");
        break;
    }
    case 46030:
    {
        returnValue = F("Auguste-Holle-Str.");
        break;
    }
    case 46031:
    {
        returnValue = F("Auguste-Krüger-Str.");
        break;
    }
    case 46032:
    {
        returnValue = F("Auguste-Piccard-Weg");
        break;
    }
    case 46033:
    {
        returnValue = F("Auguste-Renoir-Str.");
        break;
    }
    case 46034:
    {
        returnValue = F("Auguste-Schmidt-Str.");
        break;
    }
    case 46035:
    {
        returnValue = F("Auguste-Stolberg-Weg");
        break;
    }
    case 46036:
    {
        returnValue = F("Auguste-Städele-Weg");
        break;
    }
    case 46037:
    {
        returnValue = F("Auguste-Supper-Str.");
        break;
    }
    case 46038:
    {
        returnValue = F("Auguste-Supper-Weg");
        break;
    }
    case 46039:
    {
        returnValue = F("Auguste-Victoria-Weg");
        break;
    }
    case 46040:
    {
        returnValue = F("Auguste-Winkler-Str.");
        break;
    }
    case 46041:
    {
        returnValue = F("Auguste-Wittig-Str.");
        break;
    }
    case 46042:
    {
        returnValue = F("Augusten Geräumt");
        break;
    }
    case 46043:
    {
        returnValue = F("Augustenberg");
        break;
    }
    case 46044:
    {
        returnValue = F("Augustenburger Str.");
        break;
    }
    case 46045:
    {
        returnValue = F("Augustenfelder Weg");
        break;
    }
    case 46046:
    {
        returnValue = F("Augustenhof");
        break;
    }
    case 46047:
    {
        returnValue = F("Augustenhöhe");
        break;
    }
    case 46048:
    {
        returnValue = F("Augustenruh");
        break;
    }
    case 46049:
    {
        returnValue = F("Augustensteig");
        break;
    }
    case 46050:
    {
        returnValue = F("Augustenstr.");
        break;
    }
    case 46051:
    {
        returnValue = F("Augustental");
        break;
    }
    case 46052:
    {
        returnValue = F("Augustenthal");
        break;
    }
    case 46053:
    {
        returnValue = F("Augustenweg");
        break;
    }
    case 46054:
    {
        returnValue = F("Augustestr.");
        break;
    }
    case 46055:
    {
        returnValue = F("Augustfelder Damm");
        break;
    }
    case 46056:
    {
        returnValue = F("Augustgasse");
        break;
    }
    case 46057:
    {
        returnValue = F("Augustgroden");
        break;
    }
    case 46058:
    {
        returnValue = F("Augustin-Bea-Str.");
        break;
    }
    case 46059:
    {
        returnValue = F("Augustin-Buselmeier-Str.");
        break;
    }
    case 46060:
    {
        returnValue = F("Augustin-Jehle-Weg");
        break;
    }
    case 46061:
    {
        returnValue = F("Augustin-Knoodt-Weg");
        break;
    }
    case 46062:
    {
        returnValue = F("Augustin-Messerich-Str.");
        break;
    }
    case 46063:
    {
        returnValue = F("Augustin-Schlegel-Str.");
        break;
    }
    case 46064:
    {
        returnValue = F("Augustin-Schulte-Weg");
        break;
    }
    case 46065:
    {
        returnValue = F("Augustin-Simnacher-Str.");
        break;
    }
    case 46066:
    {
        returnValue = F("Augustin-Soll-Str.");
        break;
    }
    case 46067:
    {
        returnValue = F("Augustin-Violet-Str.");
        break;
    }
    case 46068:
    {
        returnValue = F("Augustin-Wibbelt-Str.");
        break;
    }
    case 46069:
    {
        returnValue = F("Augustin-Wibbelt-Weg");
        break;
    }
    case 46070:
    {
        returnValue = F("Augustinerberg");
        break;
    }
    case 46071:
    {
        returnValue = F("Augustinergasse");
        break;
    }
    case 46072:
    {
        returnValue = F("Augustinern");
        break;
    }
    case 46073:
    {
        returnValue = F("Augustinerplatz");
        break;
    }
    case 46074:
    {
        returnValue = F("Augustinerring");
        break;
    }
    case 46075:
    {
        returnValue = F("Augustinerstr.");
        break;
    }
    case 46076:
    {
        returnValue = F("Augustinerweg");
        break;
    }
    case 46077:
    {
        returnValue = F("Augustinstr.");
        break;
    }
    case 46078:
    {
        returnValue = F("Augustinsweg");
        break;
    }
    case 46079:
    {
        returnValue = F("Augustinumstr.");
        break;
    }
    case 46080:
    {
        returnValue = F("Augustinusstr.");
        break;
    }
    case 46081:
    {
        returnValue = F("Augustinusweg");
        break;
    }
    case 46082:
    {
        returnValue = F("Auguststr.");
        break;
    }
    case 46083:
    {
        returnValue = F("Augusttal");
        break;
    }
    case 46084:
    {
        returnValue = F("Augustus Pfad");
        break;
    }
    case 46085:
    {
        returnValue = F("Augustusberg");
        break;
    }
    case 46086:
    {
        returnValue = F("Augustusburg");
        break;
    }
    case 46087:
    {
        returnValue = F("Augustusburger Str.");
        break;
    }
    case 46088:
    {
        returnValue = F("Augustushof");
        break;
    }
    case 46089:
    {
        returnValue = F("Augustushöhe");
        break;
    }
    case 46090:
    {
        returnValue = F("Augustuspark");
        break;
    }
    case 46091:
    {
        returnValue = F("Augustusring");
        break;
    }
    case 46092:
    {
        returnValue = F("Augustusstr.");
        break;
    }
    case 46093:
    {
        returnValue = F("Augustusweg");
        break;
    }
    case 46094:
    {
        returnValue = F("Augustweg");
        break;
    }
    case 46095:
    {
        returnValue = F("Augut-Herold-Weg | Weinwanderweg");
        break;
    }
    case 46096:
    {
        returnValue = F("Augy-Str.");
        break;
    }
    case 46097:
    {
        returnValue = F("Augziner Str.");
        break;
    }
    case 46098:
    {
        returnValue = F("Augärten");
        break;
    }
    case 46099:
    {
        returnValue = F("Auhagener Str.");
        break;
    }
    case 46100:
    {
        returnValue = F("Auhagenstr.");
        break;
    }
    case 46101:
    {
        returnValue = F("Auhalde");
        break;
    }
    case 46102:
    {
        returnValue = F("Auhaldenstr.");
        break;
    }
    case 46103:
    {
        returnValue = F("Auhaldenweg");
        break;
    }
    case 46104:
    {
        returnValue = F("Auhang");
        break;
    }
    case 46105:
    {
        returnValue = F("Auhaus");
        break;
    }
    case 46106:
    {
        returnValue = F("Auhausen");
        break;
    }
    case 46107:
    {
        returnValue = F("Auhausener Str.");
        break;
    }
    case 46108:
    {
        returnValue = F("Auheckenstr.");
        break;
    }
    case 46109:
    {
        returnValue = F("Auheimer Str.");
        break;
    }
    case 46110:
    {
        returnValue = F("Auhof");
        break;
    }
    case 46111:
    {
        returnValue = F("Auhofen");
        break;
    }
    case 46112:
    {
        returnValue = F("Auhofer Str.");
        break;
    }
    case 46113:
    {
        returnValue = F("Auhofer Weg");
        break;
    }
    case 46114:
    {
        returnValue = F("Auhofstr.");
        break;
    }
    case 46115:
    {
        returnValue = F("Auhofweg");
        break;
    }
    case 46116:
    {
        returnValue = F("Auholz");
        break;
    }
    case 46117:
    {
        returnValue = F("Auholzweg");
        break;
    }
    case 46118:
    {
        returnValue = F("Auhäger Str.");
        break;
    }
    case 46119:
    {
        returnValue = F("Auhäusl");
        break;
    }
    case 46120:
    {
        returnValue = F("Auhöfe");
        break;
    }
    case 46121:
    {
        returnValue = F("Auhügelstr.");
        break;
    }
    case 46122:
    {
        returnValue = F("Auinger Str.");
        break;
    }
    case 46123:
    {
        returnValue = F("Auinger Weg");
        break;
    }
    case 46124:
    {
        returnValue = F("Aukammer");
        break;
    }
    case 46125:
    {
        returnValue = F("Aukamp");
        break;
    }
    case 46126:
    {
        returnValue = F("Aukampsweg");
        break;
    }
    case 46127:
    {
        returnValue = F("Aukenser Kirchpatt");
        break;
    }
    case 46128:
    {
        returnValue = F("Aukjerstr.");
        break;
    }
    case 46129:
    {
        returnValue = F("Auknüll");
        break;
    }
    case 46130:
    {
        returnValue = F("Aukofener Str.");
        break;
    }
    case 46131:
    {
        returnValue = F("Aukoppel");
        break;
    }
    case 46132:
    {
        returnValue = F("Aukrug");
        break;
    }
    case 46133:
    {
        returnValue = F("Aukrugstr.");
        break;
    }
    case 46134:
    {
        returnValue = F("Aulablick");
        break;
    }
    case 46135:
    {
        returnValue = F("Aulachweg");
        break;
    }
    case 46136:
    {
        returnValue = F("Aulaichstr.");
        break;
    }
    case 46137:
    {
        returnValue = F("Aulastr.");
        break;
    }
    case 46138:
    {
        returnValue = F("Aulaweg");
        break;
    }
    case 46139:
    {
        returnValue = F("Aulawiesen");
        break;
    }
    case 46140:
    {
        returnValue = F("Aulbachstr.");
        break;
    }
    case 46141:
    {
        returnValue = F("Aulbachweg");
        break;
    }
    case 46142:
    {
        returnValue = F("Aulbertstr.");
        break;
    }
    case 46143:
    {
        returnValue = F("Auleber Str.");
        break;
    }
    case 46144:
    {
        returnValue = F("Auleite");
        break;
    }
    case 46145:
    {
        returnValue = F("Aulenbacher Str.");
        break;
    }
    case 46146:
    {
        returnValue = F("Aulenbruch");
        break;
    }
    case 46147:
    {
        returnValue = F("Aulendorfer Str.");
        break;
    }
    case 46148:
    {
        returnValue = F("Aulendorfer Weg");
        break;
    }
    case 46149:
    {
        returnValue = F("Aulenhäuser Str.");
        break;
    }
    case 46150:
    {
        returnValue = F("Aulenhäuser Weg");
        break;
    }
    case 46151:
    {
        returnValue = F("Aulergasse");
        break;
    }
    case 46152:
    {
        returnValue = F("Aulestr.");
        break;
    }
    case 46153:
    {
        returnValue = F("Aulflucht");
        break;
    }
    case 46154:
    {
        returnValue = F("Aulgasse");
        break;
    }
    case 46155:
    {
        returnValue = F("Aulhauser Platz");
        break;
    }
    case 46156:
    {
        returnValue = F("Aulhauser Str.");
        break;
    }
    case 46157:
    {
        returnValue = F("Auligk");
        break;
    }
    case 46158:
    {
        returnValue = F("Aulkenweg");
        break;
    }
    case 46159:
    {
        returnValue = F("Aulkestr.");
        break;
    }
    case 46160:
    {
        returnValue = F("Aulkeweg");
        break;
    }
    case 46161:
    {
        returnValue = F("Aulnoye-Aymeries-Platz");
        break;
    }
    case 46162:
    {
        returnValue = F("Auloweg");
        break;
    }
    case 46163:
    {
        returnValue = F("Aulstr.");
        break;
    }
    case 46164:
    {
        returnValue = F("Aulswinkel");
        break;
    }
    case 46165:
    {
        returnValue = F("Aulter Platz");
        break;
    }
    case 46166:
    {
        returnValue = F("Aulzhauser Str.");
        break;
    }
    case 46167:
    {
        returnValue = F("Aulücke");
        break;
    }
    case 46168:
    {
        returnValue = F("Aumaer Str.");
        break;
    }
    case 46169:
    {
        returnValue = F("Aumaische Str.");
        break;
    }
    case 46170:
    {
        returnValue = F("Aumanns Damm");
        break;
    }
    case 46171:
    {
        returnValue = F("Aumastr.");
        break;
    }
    case 46172:
    {
        returnValue = F("Aumattenweg");
        break;
    }
    case 46173:
    {
        returnValue = F("Aumattweg");
        break;
    }
    case 46174:
    {
        returnValue = F("Aumbach");
        break;
    }
    case 46175:
    {
        returnValue = F("Aumbacher Str.");
        break;
    }
    case 46176:
    {
        returnValue = F("Aumenauer Weg");
        break;
    }
    case 46177:
    {
        returnValue = F("Aumerhöhe");
        break;
    }
    case 46178:
    {
        returnValue = F("Aumerich");
        break;
    }
    case 46179:
    {
        returnValue = F("Aumillerstr.");
        break;
    }
    case 46180:
    {
        returnValue = F("Aumoosstr.");
        break;
    }
    case 46181:
    {
        returnValue = F("Aumühlbrücke");
        break;
    }
    case 46182:
    {
        returnValue = F("Aumühle");
        break;
    }
    case 46183:
    {
        returnValue = F("Aumühlen");
        break;
    }
    case 46184:
    {
        returnValue = F("Aumühlengasse");
        break;
    }
    case 46185:
    {
        returnValue = F("Aumühlenstr.");
        break;
    }
    case 46186:
    {
        returnValue = F("Aumühlenweg");
        break;
    }
    case 46187:
    {
        returnValue = F("Aumühler Berg");
        break;
    }
    case 46188:
    {
        returnValue = F("Aumühler Weg");
        break;
    }
    case 46189:
    {
        returnValue = F("Aumühlstr.");
        break;
    }
    case 46190:
    {
        returnValue = F("Aumühlweg");
        break;
    }
    case 46191:
    {
        returnValue = F("Aumüllerstr.");
        break;
    }
    case 46192:
    {
        returnValue = F("Aunerweg");
        break;
    }
    case 46193:
    {
        returnValue = F("Aunham");
        break;
    }
    case 46194:
    {
        returnValue = F("Aunhamer Höhenstr.");
        break;
    }
    case 46195:
    {
        returnValue = F("Aunhamer Weg");
        break;
    }
    case 46196:
    {
        returnValue = F("Aunkofener Siedlung");
        break;
    }
    case 46197:
    {
        returnValue = F("Aunkofener Str.");
        break;
    }
    case 46198:
    {
        returnValue = F("Aupitzbachweg");
        break;
    }
    case 46199:
    {
        returnValue = F("Aupitzer Str.");
        break;
    }
    case 46200:
    {
        returnValue = F("Aupitzer Weg");
        break;
    }
    case 46201:
    {
        returnValue = F("Auplatz");
        break;
    }
    case 46202:
    {
        returnValue = F("Aupoint");
        break;
    }
    case 46203:
    {
        returnValue = F("Auppen");
        break;
    }
    case 46204:
    {
        returnValue = F("Auraberg");
        break;
    }
    case 46205:
    {
        returnValue = F("Aurach");
        break;
    }
    case 46206:
    {
        returnValue = F("Auracher Bergstr.");
        break;
    }
    case 46207:
    {
        returnValue = F("Auracher Str.");
        break;
    }
    case 46208:
    {
        returnValue = F("Auracher Weg");
        break;
    }
    case 46209:
    {
        returnValue = F("Aurachgrund");
        break;
    }
    case 46210:
    {
        returnValue = F("Aurachköpflweg");
        break;
    }
    case 46211:
    {
        returnValue = F("Aurachpromenade");
        break;
    }
    case 46212:
    {
        returnValue = F("Aurachstr.");
        break;
    }
    case 46213:
    {
        returnValue = F("Aurachweg");
        break;
    }
    case 46214:
    {
        returnValue = F("Auraer Str.");
        break;
    }
    case 46215:
    {
        returnValue = F("Auraer Tal");
        break;
    }
    case 46216:
    {
        returnValue = F("Auraer Talweg");
        break;
    }
    case 46217:
    {
        returnValue = F("Auraer Weg");
        break;
    }
    case 46218:
    {
        returnValue = F("Aurain");
        break;
    }
    case 46219:
    {
        returnValue = F("Aurainweg");
        break;
    }
    case 46220:
    {
        returnValue = F("Auratalstr.");
        break;
    }
    case 46221:
    {
        returnValue = F("Aurauer Hauptstr.");
        break;
    }
    case 46222:
    {
        returnValue = F("Aurauer Ring");
        break;
    }
    case 46223:
    {
        returnValue = F("Aurauer Weg");
        break;
    }
    case 46224:
    {
        returnValue = F("Auray Str.");
        break;
    }
    case 46225:
    {
        returnValue = F("Aurbacherstr.");
        break;
    }
    case 46226:
    {
        returnValue = F("Auredder");
        break;
    }
    case 46227:
    {
        returnValue = F("Aurel-Kohler-Str.");
        break;
    }
    case 46228:
    {
        returnValue = F("Aureliusplatz");
        break;
    }
    case 46229:
    {
        returnValue = F("Aureusstr.");
        break;
    }
    case 46230:
    {
        returnValue = F("Aureuteweg");
        break;
    }
    case 46231:
    {
        returnValue = F("Auricher Höcht");
        break;
    }
    case 46232:
    {
        returnValue = F("Auricher Landstr.");
        break;
    }
    case 46233:
    {
        returnValue = F("Auricher Meedeweg");
        break;
    }
    case 46234:
    {
        returnValue = F("Auricher Str.");
        break;
    }
    case 46235:
    {
        returnValue = F("Auricher Weg");
        break;
    }
    case 46236:
    {
        returnValue = F("Aurikelstr.");
        break;
    }
    case 46237:
    {
        returnValue = F("Aurikelweg");
        break;
    }
    case 46238:
    {
        returnValue = F("Auring");
        break;
    }
    case 46239:
    {
        returnValue = F("Auritzer Dorfplatz");
        break;
    }
    case 46240:
    {
        returnValue = F("Auritzer Weg");
        break;
    }
    case 46241:
    {
        returnValue = F("Auroffer Weg");
        break;
    }
    case 46242:
    {
        returnValue = F("Aurolfing");
        break;
    }
    case 46243:
    {
        returnValue = F("Aurorastr.");
        break;
    }
    case 46244:
    {
        returnValue = F("Auroraweg");
        break;
    }
    case 46245:
    {
        returnValue = F("Aurüttebühlweg");
        break;
    }
    case 46246:
    {
        returnValue = F("Ausackerbrück");
        break;
    }
    case 46247:
    {
        returnValue = F("Ausangweg");
        break;
    }
    case 46248:
    {
        returnValue = F("Ausbacher Str.");
        break;
    }
    case 46249:
    {
        returnValue = F("Ausbachstr.");
        break;
    }
    case 46250:
    {
        returnValue = F("Ausbachweg");
        break;
    }
    case 46251:
    {
        returnValue = F("Ausbau");
        break;
    }
    case 46252:
    {
        returnValue = F("Ausbau 1");
        break;
    }
    case 46253:
    {
        returnValue = F("Ausbau 2");
        break;
    }
    case 46254:
    {
        returnValue = F("Ausbau Altenlinden");
        break;
    }
    case 46255:
    {
        returnValue = F("Ausbau Autobahn");
        break;
    }
    case 46256:
    {
        returnValue = F("Ausbau Bahnhofstr.");
        break;
    }
    case 46257:
    {
        returnValue = F("Ausbau Barkow");
        break;
    }
    case 46258:
    {
        returnValue = F("Ausbau Blandikow");
        break;
    }
    case 46259:
    {
        returnValue = F("Ausbau Dassow");
        break;
    }
    case 46260:
    {
        returnValue = F("Ausbau Dorf Zechlin");
        break;
    }
    case 46261:
    {
        returnValue = F("Ausbau Drispeth");
        break;
    }
    case 46262:
    {
        returnValue = F("Ausbau Falkenthal");
        break;
    }
    case 46263:
    {
        returnValue = F("Ausbau Grabow");
        break;
    }
    case 46264:
    {
        returnValue = F("Ausbau Groß Labenz");
        break;
    }
    case 46265:
    {
        returnValue = F("Ausbau Hebel");
        break;
    }
    case 46266:
    {
        returnValue = F("Ausbau Holz");
        break;
    }
    case 46267:
    {
        returnValue = F("Ausbau Kanal");
        break;
    }
    case 46268:
    {
        returnValue = F("Ausbau Katerberg");
        break;
    }
    case 46269:
    {
        returnValue = F("Ausbau Kiekut");
        break;
    }
    case 46270:
    {
        returnValue = F("Ausbau Kindshagen");
        break;
    }
    case 46271:
    {
        returnValue = F("Ausbau Klein Salitz");
        break;
    }
    case 46272:
    {
        returnValue = F("Ausbau Kressiner Weg");
        break;
    }
    case 46273:
    {
        returnValue = F("Ausbau Lindenstr.");
        break;
    }
    case 46274:
    {
        returnValue = F("Ausbau Löbnitz");
        break;
    }
    case 46275:
    {
        returnValue = F("Ausbau Mon-Caprice");
        break;
    }
    case 46276:
    {
        returnValue = F("Ausbau Mühle");
        break;
    }
    case 46277:
    {
        returnValue = F("Ausbau Mühlenholz");
        break;
    }
    case 46278:
    {
        returnValue = F("Ausbau Neuer Teich");
        break;
    }
    case 46279:
    {
        returnValue = F("Ausbau Oegeln");
        break;
    }
    case 46280:
    {
        returnValue = F("Ausbau Oldenstorf");
        break;
    }
    case 46281:
    {
        returnValue = F("Ausbau Ost");
        break;
    }
    case 46282:
    {
        returnValue = F("Ausbau Poseriner Chaussee");
        break;
    }
    case 46283:
    {
        returnValue = F("Ausbau Qualitz");
        break;
    }
    case 46284:
    {
        returnValue = F("Ausbau Radegast");
        break;
    }
    case 46285:
    {
        returnValue = F("Ausbau Rosenow");
        break;
    }
    case 46286:
    {
        returnValue = F("Ausbau Rüthnick");
        break;
    }
    case 46287:
    {
        returnValue = F("Ausbau Schäferei");
        break;
    }
    case 46288:
    {
        returnValue = F("Ausbau Schönfelder Weg");
        break;
    }
    case 46289:
    {
        returnValue = F("Ausbau Sievershagen");
        break;
    }
    case 46290:
    {
        returnValue = F("Ausbau Süd");
        break;
    }
    case 46291:
    {
        returnValue = F("Ausbau Wackerberge");
        break;
    }
    case 46292:
    {
        returnValue = F("Ausbau Wallitz");
        break;
    }
    case 46293:
    {
        returnValue = F("Ausbau Wanzlitz");
        break;
    }
    case 46294:
    {
        returnValue = F("Ausbau Wardow");
        break;
    }
    case 46295:
    {
        returnValue = F("Ausbau Weisiner Weg");
        break;
    }
    case 46296:
    {
        returnValue = F("Ausbau West-Bahnhaus");
        break;
    }
    case 46297:
    {
        returnValue = F("Ausbau Windmühle");
        break;
    }
    case 46298:
    {
        returnValue = F("Ausbau Wriezener Str.");
        break;
    }
    case 46299:
    {
        returnValue = F("Ausbau am Damm");
        break;
    }
    case 46300:
    {
        returnValue = F("Ausbau am See");
        break;
    }
    case 46301:
    {
        returnValue = F("Ausbau nach Petersdorf");
        break;
    }
    case 46302:
    {
        returnValue = F("Ausbau-Dorf");
        break;
    }
    case 46303:
    {
        returnValue = F("Ausbau-Sportplatz");
        break;
    }
    case 46304:
    {
        returnValue = F("Ausbau-Str. des Friedens");
        break;
    }
    case 46305:
    {
        returnValue = F("Ausbau-Thalmühle");
        break;
    }
    case 46306:
    {
        returnValue = F("Ausbauten");
        break;
    }
    case 46307:
    {
        returnValue = F("Ausbauten-Benziner Chaussee");
        break;
    }
    case 46308:
    {
        returnValue = F("Ausbeckplatzl");
        break;
    }
    case 46309:
    {
        returnValue = F("Ausbildungs- und Gesundheitszentrum - Weg der Mitte");
        break;
    }
    case 46310:
    {
        returnValue = F("Ausbildungsplatz Grundübungen");
        break;
    }
    case 46311:
    {
        returnValue = F("Ausbildungsplatz Motorkettensägen");
        break;
    }
    case 46312:
    {
        returnValue = F("Ausblickreicher Höhenweg");
        break;
    }
    case 46313:
    {
        returnValue = F("Ausbuschweg");
        break;
    }
    case 46314:
    {
        returnValue = F("Ausbütteler Weg");
        break;
    }
    case 46315:
    {
        returnValue = F("Auschberg");
        break;
    }
    case 46316:
    {
        returnValue = F("Auscheter Str.");
        break;
    }
    case 46317:
    {
        returnValue = F("Auschneise");
        break;
    }
    case 46318:
    {
        returnValue = F("Ausdorferstr.");
        break;
    }
    case 46319:
    {
        returnValue = F("Ausfahrt");
        break;
    }
    case 46320:
    {
        returnValue = F("Ausfallweg");
        break;
    }
    case 46321:
    {
        returnValue = F("Ausfeldstr.");
        break;
    }
    case 46322:
    {
        returnValue = F("Ausgehobene Allee");
        break;
    }
    case 46323:
    {
        returnValue = F("Ausgesteinter Weg");
        break;
    }
    case 46324:
    {
        returnValue = F("Ausgleichsfläche");
        break;
    }
    case 46325:
    {
        returnValue = F("Aushubweg");
        break;
    }
    case 46326:
    {
        returnValue = F("Ausiedlung");
        break;
    }
    case 46327:
    {
        returnValue = F("Auskopfweg");
        break;
    }
    case 46328:
    {
        returnValue = F("Auslaufwerkstr.");
        break;
    }
    case 46329:
    {
        returnValue = F("Auslebener Weg");
        break;
    }
    case 46330:
    {
        returnValue = F("Ausoniusring");
        break;
    }
    case 46331:
    {
        returnValue = F("Ausoniusstr.");
        break;
    }
    case 46332:
    {
        returnValue = F("Ausoniusufer");
        break;
    }
    case 46333:
    {
        returnValue = F("Ausoniusweg");
        break;
    }
    case 46334:
    {
        returnValue = F("Ausrückeweg");
        break;
    }
    case 46335:
    {
        returnValue = F("Ausscheerstelle");
        break;
    }
    case 46336:
    {
        returnValue = F("Ausselbeeker Weg");
        break;
    }
    case 46337:
    {
        returnValue = F("Aussenfenne");
        break;
    }
    case 46338:
    {
        returnValue = F("Aussenliegend");
        break;
    }
    case 46339:
    {
        returnValue = F("Ausserdorf");
        break;
    }
    case 46340:
    {
        returnValue = F("Aussichtshüttenweg");
        break;
    }
    case 46341:
    {
        returnValue = F("Aussichtsplattform Steinbruch");
        break;
    }
    case 46342:
    {
        returnValue = F("Aussichtsplattform Steinbruch Plettenberg");
        break;
    }
    case 46343:
    {
        returnValue = F("Aussichtspunkt");
        break;
    }
    case 46344:
    {
        returnValue = F("Aussichtsterasse");
        break;
    }
    case 46345:
    {
        returnValue = F("Aussichtsweg");
        break;
    }
    case 46346:
    {
        returnValue = F("Aussiedler");
        break;
    }
    case 46347:
    {
        returnValue = F("Aussiedlerhof");
        break;
    }
    case 46348:
    {
        returnValue = F("Aussiedlerhof Dörrhöfer");
        break;
    }
    case 46349:
    {
        returnValue = F("Aussiedlerhöfe");
        break;
    }
    case 46350:
    {
        returnValue = F("Aussiedlung");
        break;
    }
    case 46351:
    {
        returnValue = F("Aussiedlungshof");
        break;
    }
    case 46352:
    {
        returnValue = F("Aussiger Str.");
        break;
    }
    case 46353:
    {
        returnValue = F("Aussiger Weg");
        break;
    }
    case 46354:
    {
        returnValue = F("Ausstellung Gladiatoren");
        break;
    }
    case 46355:
    {
        returnValue = F("Ausstellung historische Landmaschinen");
        break;
    }
    case 46356:
    {
        returnValue = F("Austeg");
        break;
    }
    case 46357:
    {
        returnValue = F("Austelweg");
        break;
    }
    case 46358:
    {
        returnValue = F("Austener Str.");
        break;
    }
    case 46359:
    {
        returnValue = F("Austenkamp");
        break;
    }
    case 46360:
    {
        returnValue = F("Austernbank");
        break;
    }
    case 46361:
    {
        returnValue = F("Austernfischerstieg");
        break;
    }
    case 46362:
    {
        returnValue = F("Austernfischerweg");
        break;
    }
    case 46363:
    {
        returnValue = F("Austernstr.");
        break;
    }
    case 46364:
    {
        returnValue = F("Austernweg");
        break;
    }
    case 46365:
    {
        returnValue = F("Austerstücke");
        break;
    }
    case 46366:
    {
        returnValue = F("Austmannshof");
        break;
    }
    case 46367:
    {
        returnValue = F("Austpassage");
        break;
    }
    case 46368:
    {
        returnValue = F("Austr.");
        break;
    }
    case 46369:
    {
        returnValue = F("Austrich");
        break;
    }
    case 46370:
    {
        returnValue = F("Auststr.");
        break;
    }
    case 46371:
    {
        returnValue = F("Austum");
        break;
    }
    case 46372:
    {
        returnValue = F("Ausweg");
        break;
    }
    case 46373:
    {
        returnValue = F("Ausweich");
        break;
    }
    case 46374:
    {
        returnValue = F("Ausweichstelle");
        break;
    }
    case 46375:
    {
        returnValue = F("Ausweichstelle 10");
        break;
    }
    case 46376:
    {
        returnValue = F("Ausweichstelle 11");
        break;
    }
    case 46377:
    {
        returnValue = F("Ausweichstelle 12");
        break;
    }
    case 46378:
    {
        returnValue = F("Ausweichstelle 13");
        break;
    }
    case 46379:
    {
        returnValue = F("Ausweichstelle 9");
        break;
    }
    case 46380:
    {
        returnValue = F("Ausweichübungsgelände");
        break;
    }
    case 46381:
    {
        returnValue = F("Ausweilerstr.");
        break;
    }
    case 46382:
    {
        returnValue = F("Auswärtiges Gehöft");
        break;
    }
    case 46383:
    {
        returnValue = F("Auszugsäcker");
        break;
    }
    case 46384:
    {
        returnValue = F("Autal");
        break;
    }
    case 46385:
    {
        returnValue = F("Autalstr.");
        break;
    }
    case 46386:
    {
        returnValue = F("Autalweg");
        break;
    }
    case 46387:
    {
        returnValue = F("Autannenweg");
        break;
    }
    case 46388:
    {
        returnValue = F("Autenbachstr.");
        break;
    }
    case 46389:
    {
        returnValue = F("Autenbrunnstr.");
        break;
    }
    case 46390:
    {
        returnValue = F("Autengrundstr.");
        break;
    }
    case 46391:
    {
        returnValue = F("Autengrüner Str.");
        break;
    }
    case 46392:
    {
        returnValue = F("Autengrünweg");
        break;
    }
    case 46393:
    {
        returnValue = F("Autenried");
        break;
    }
    case 46394:
    {
        returnValue = F("Autenrieder Str.");
        break;
    }
    case 46395:
    {
        returnValue = F("Autenrieth Urban-Weg");
        break;
    }
    case 46396:
    {
        returnValue = F("Autenstr.");
        break;
    }
    case 46397:
    {
        returnValue = F("Autenweiler");
        break;
    }
    case 46398:
    {
        returnValue = F("Autenweiler Str.");
        break;
    }
    case 46399:
    {
        returnValue = F("Auterwitz");
        break;
    }
    case 46400:
    {
        returnValue = F("Autharistr.");
        break;
    }
    case 46401:
    {
        returnValue = F("Authausener Str.");
        break;
    }
    case 46402:
    {
        returnValue = F("Authenrieth-Siedlung");
        break;
    }
    case 46403:
    {
        returnValue = F("Authstr.");
        break;
    }
    case 46404:
    {
        returnValue = F("Autmutstr.");
        break;
    }
    case 46405:
    {
        returnValue = F("Auto-Focus");
        break;
    }
    case 46406:
    {
        returnValue = F("Auto-Union-Ring");
        break;
    }
    case 46407:
    {
        returnValue = F("Autobahn");
        break;
    }
    case 46408:
    {
        returnValue = F("Autobahnbrücke Hohenschöpping");
        break;
    }
    case 46409:
    {
        returnValue = F("Autobahnmeisterei");
        break;
    }
    case 46410:
    {
        returnValue = F("Autobahnsiedlung");
        break;
    }
    case 46411:
    {
        returnValue = F("Autobahnstr.");
        break;
    }
    case 46412:
    {
        returnValue = F("Autobahnweg");
        break;
    }
    case 46413:
    {
        returnValue = F("Automeile");
        break;
    }
    case 46414:
    {
        returnValue = F("Autoscooter");
        break;
    }
    case 46415:
    {
        returnValue = F("Autunnel");
        break;
    }
    case 46416:
    {
        returnValue = F("Autwiet");
        break;
    }
    case 46417:
    {
        returnValue = F("Autzensiedlung");
        break;
    }
    case 46418:
    {
        returnValue = F("Auwald - Pfad");
        break;
    }
    case 46419:
    {
        returnValue = F("Auwaldpfad");
        break;
    }
    case 46420:
    {
        returnValue = F("Auwaldring");
        break;
    }
    case 46421:
    {
        returnValue = F("Auwaldstr.");
        break;
    }
    case 46422:
    {
        returnValue = F("Auwaldweg");
        break;
    }
    case 46423:
    {
        returnValue = F("Auweg");
        break;
    }
    case 46424:
    {
        returnValue = F("Auweler Feld");
        break;
    }
    case 46425:
    {
        returnValue = F("Auwer Str.");
        break;
    }
    case 46426:
    {
        returnValue = F("Auwer Weg");
        break;
    }
    case 46427:
    {
        returnValue = F("Auwerastr.");
        break;
    }
    case 46428:
    {
        returnValue = F("Auwiese");
        break;
    }
    case 46429:
    {
        returnValue = F("Auwiesen");
        break;
    }
    case 46430:
    {
        returnValue = F("Auwiesenbrücke");
        break;
    }
    case 46431:
    {
        returnValue = F("Auwiesenstr.");
        break;
    }
    case 46432:
    {
        returnValue = F("Auwiesenweg");
        break;
    }
    case 46433:
    {
        returnValue = F("Auwiesstr.");
        break;
    }
    case 46434:
    {
        returnValue = F("Auwinkel");
        break;
    }
    case 46435:
    {
        returnValue = F("Auwisch");
        break;
    }
    case 46436:
    {
        returnValue = F("Auwstr.");
        break;
    }
    case 46437:
    {
        returnValue = F("Auzingerstr.");
        break;
    }
    case 46438:
    {
        returnValue = F("Außenbereich");
        break;
    }
    case 46439:
    {
        returnValue = F("Außenbesitz");
        break;
    }
    case 46440:
    {
        returnValue = F("Außendeich");
        break;
    }
    case 46441:
    {
        returnValue = F("Außendeicher Str.");
        break;
    }
    case 46442:
    {
        returnValue = F("Außendeichsweg");
        break;
    }
    case 46443:
    {
        returnValue = F("Außendorfstr.");
        break;
    }
    case 46444:
    {
        returnValue = F("Außener Str.");
        break;
    }
    case 46445:
    {
        returnValue = F("Außengarten");
        break;
    }
    case 46446:
    {
        returnValue = F("Außengehöft");
        break;
    }
    case 46447:
    {
        returnValue = F("Außenland");
        break;
    }
    case 46448:
    {
        returnValue = F("Außenliegend");
        break;
    }
    case 46449:
    {
        returnValue = F("Außenliegende Gebäude");
        break;
    }
    case 46450:
    {
        returnValue = F("Außenried");
        break;
    }
    case 46451:
    {
        returnValue = F("Außenring");
        break;
    }
    case 46452:
    {
        returnValue = F("Außenschlag");
        break;
    }
    case 46453:
    {
        returnValue = F("Außenschlagweg");
        break;
    }
    case 46454:
    {
        returnValue = F("Außenweg");
        break;
    }
    case 46455:
    {
        returnValue = F("Außer Ort");
        break;
    }
    case 46456:
    {
        returnValue = F("Außerdorf");
        break;
    }
    case 46457:
    {
        returnValue = F("Außere Plößberger Str.");
        break;
    }
    case 46458:
    {
        returnValue = F("Außerfeld");
        break;
    }
    case 46459:
    {
        returnValue = F("Außerfeldweg");
        break;
    }
    case 46460:
    {
        returnValue = F("Außerhalb");
        break;
    }
    case 46461:
    {
        returnValue = F("Außerhalb 1");
        break;
    }
    case 46462:
    {
        returnValue = F("Außerhalb 11");
        break;
    }
    case 46463:
    {
        returnValue = F("Außerhalb 13");
        break;
    }
    case 46464:
    {
        returnValue = F("Außerhalb Allmendfeld");
        break;
    }
    case 46465:
    {
        returnValue = F("Außerhalb Balkhausen");
        break;
    }
    case 46466:
    {
        returnValue = F("Außerhalb Nieder Saulheim");
        break;
    }
    case 46467:
    {
        returnValue = F("Außerhalb Nieder-Saulheim");
        break;
    }
    case 46468:
    {
        returnValue = F("Außerhalb Ost");
        break;
    }
    case 46469:
    {
        returnValue = F("Außerhalb Schwabsburg");
        break;
    }
    case 46470:
    {
        returnValue = F("Außerhalb Wallbach");
        break;
    }
    case 46471:
    {
        returnValue = F("Außerhalb des Ortes");
        break;
    }
    case 46472:
    {
        returnValue = F("Außerhalb-Büdesheim");
        break;
    }
    case 46473:
    {
        returnValue = F("Außerhalb-Große Lache");
        break;
    }
    case 46474:
    {
        returnValue = F("Außerhalb-Kempten");
        break;
    }
    case 46475:
    {
        returnValue = F("Außerhalb-Sponsheim");
        break;
    }
    case 46476:
    {
        returnValue = F("Außerm Dorf");
        break;
    }
    case 46477:
    {
        returnValue = F("Außerm Pfarrgarten");
        break;
    }
    case 46478:
    {
        returnValue = F("Außermatt");
        break;
    }
    case 46479:
    {
        returnValue = F("Außerstadt");
        break;
    }
    case 46480:
    {
        returnValue = F("Außerweg");
        break;
    }
    case 46481:
    {
        returnValue = F("Auäcker");
        break;
    }
    case 46482:
    {
        returnValue = F("Auäckerstr.");
        break;
    }
    case 46483:
    {
        returnValue = F("Auäckerweg");
        break;
    }
    case 46484:
    {
        returnValue = F("Avallonstr.");
        break;
    }
    case 46485:
    {
        returnValue = F("Ave-Maria-Weg");
        break;
    }
    case 46486:
    {
        returnValue = F("Avenarius-Park");
        break;
    }
    case 46487:
    {
        returnValue = F("Avenbachstr.");
        break;
    }
    case 46488:
    {
        returnValue = F("Avenbachwasen");
        break;
    }
    case 46489:
    {
        returnValue = F("Avendorfer Weg");
        break;
    }
    case 46490:
    {
        returnValue = F("Avenida de Castanheira de Pera");
        break;
    }
    case 46491:
    {
        returnValue = F("Avenida de Inka");
        break;
    }
    case 46492:
    {
        returnValue = F("Avenser Str.");
        break;
    }
    case 46493:
    {
        returnValue = F("Avenser Weg");
        break;
    }
    case 46494:
    {
        returnValue = F("Avensermoor");
        break;
    }
    case 46495:
    {
        returnValue = F("Avensermoorweg");
        break;
    }
    case 46496:
    {
        returnValue = F("Aventinstr.");
        break;
    }
    case 46497:
    {
        returnValue = F("Aventinusplatz");
        break;
    }
    case 46498:
    {
        returnValue = F("Aventinusstr.");
        break;
    }
    case 46499:
    {
        returnValue = F("Aventinusweg");
        break;
    }
    case 46500:
    {
        returnValue = F("Aventofter Str.");
        break;
    }
    case 46501:
    {
        returnValue = F("Avenue 1");
        break;
    }
    case 46502:
    {
        returnValue = F("Avenue B");
        break;
    }
    case 46503:
    {
        returnValue = F("Avenue Saint Sebastien");
        break;
    }
    case 46504:
    {
        returnValue = F("Avenue St. Sebastien");
        break;
    }
    case 46505:
    {
        returnValue = F("Avenue de la Blies");
        break;
    }
    case 46506:
    {
        returnValue = F("Averbecker Weg");
        break;
    }
    case 46507:
    {
        returnValue = F("Averbecks Hof");
        break;
    }
    case 46508:
    {
        returnValue = F("Averdamstr.");
        break;
    }
    case 46509:
    {
        returnValue = F("Averdung");
        break;
    }
    case 46510:
    {
        returnValue = F("Averdunksweg");
        break;
    }
    case 46511:
    {
        returnValue = F("Averfleth");
        break;
    }
    case 46512:
    {
        returnValue = F("Averlaker Str.");
        break;
    }
    case 46513:
    {
        returnValue = F("Avidesweg");
        break;
    }
    case 46514:
    {
        returnValue = F("Avisgrund");
        break;
    }
    case 46515:
    {
        returnValue = F("Avizer Str.");
        break;
    }
    case 46516:
    {
        returnValue = F("Avrilléstr.");
        break;
    }
    case 46517:
    {
        returnValue = F("Awarenring");
        break;
    }
    case 46518:
    {
        returnValue = F("Axamsplatz");
        break;
    }
    case 46519:
    {
        returnValue = F("Axdorfer Feld");
        break;
    }
    case 46520:
    {
        returnValue = F("Axdorfer Str.");
        break;
    }
    case 46521:
    {
        returnValue = F("Axel-Lipp-Str.");
        break;
    }
    case 46522:
    {
        returnValue = F("Axelbachstr.");
        break;
    }
    case 46523:
    {
        returnValue = F("Axelshof");
        break;
    }
    case 46524:
    {
        returnValue = F("Axenberg");
        break;
    }
    case 46525:
    {
        returnValue = F("Axendorfer Weg");
        break;
    }
    case 46526:
    {
        returnValue = F("Axenweg");
        break;
    }
    case 46527:
    {
        returnValue = F("Axiener Feldstr.");
        break;
    }
    case 46528:
    {
        returnValue = F("Axiener Str.");
        break;
    }
    case 46529:
    {
        returnValue = F("Axtbachtal");
        break;
    }
    case 46530:
    {
        returnValue = F("Axtbergweg");
        break;
    }
    case 46531:
    {
        returnValue = F("Axthausener Weg");
        break;
    }
    case 46532:
    {
        returnValue = F("Axtheid");
        break;
    }
    case 46533:
    {
        returnValue = F("Axtlohesackweg");
        break;
    }
    case 46534:
    {
        returnValue = F("Axtstr.");
        break;
    }
    case 46535:
    {
        returnValue = F("Axöd");
        break;
    }
    case 46536:
    {
        returnValue = F("Axöd Siedlung");
        break;
    }
    case 46537:
    {
        returnValue = F("Axöder Höhe");
        break;
    }
    case 46538:
    {
        returnValue = F("Axöder Ring");
        break;
    }
    case 46539:
    {
        returnValue = F("Ayassenweg");
        break;
    }
    case 46540:
    {
        returnValue = F("Ayenscherweg");
        break;
    }
    case 46541:
    {
        returnValue = F("Ayenwolder Str.");
        break;
    }
    case 46542:
    {
        returnValue = F("Ayestr.");
        break;
    }
    case 46543:
    {
        returnValue = F("Ayheckenweg");
        break;
    }
    case 46544:
    {
        returnValue = F("Ayinger Str.");
        break;
    }
    case 46545:
    {
        returnValue = F("Ayinger Weg");
        break;
    }
    case 46546:
    {
        returnValue = F("Aylenbergstr.");
        break;
    }
    case 46547:
    {
        returnValue = F("Aylenstr.");
        break;
    }
    case 46548:
    {
        returnValue = F("Aylsdorfer Str.");
        break;
    }
    case 46549:
    {
        returnValue = F("Ayrton-Senna-Str.");
        break;
    }
    case 46550:
    {
        returnValue = F("Aystetter Str.");
        break;
    }
    case 46551:
    {
        returnValue = F("Aystetter Weg");
        break;
    }
    case 46552:
    {
        returnValue = F("Aystr.");
        break;
    }
    case 46553:
    {
        returnValue = F("Ayweg");
        break;
    }
    case 46554:
    {
        returnValue = F("Azaleenring");
        break;
    }
    case 46555:
    {
        returnValue = F("Azaleenstr.");
        break;
    }
    case 46556:
    {
        returnValue = F("Azaleenweg");
        break;
    }
    case 46557:
    {
        returnValue = F("Azamstr.");
        break;
    }
    case 46558:
    {
        returnValue = F("Azenbergstr.");
        break;
    }
    case 46559:
    {
        returnValue = F("Azendorf");
        break;
    }
    case 46560:
    {
        returnValue = F("Azlweg");
        break;
    }
    case 46561:
    {
        returnValue = F("Azoplatz");
        break;
    }
    case 46562:
    {
        returnValue = F("Azuritweg");
        break;
    }
    case 46563:
    {
        returnValue = F("Azurstr.");
        break;
    }
    case 46564:
    {
        returnValue = F("Aßbachstr.");
        break;
    }
    case 46565:
    {
        returnValue = F("Aßbruchweg");
        break;
    }
    case 46566:
    {
        returnValue = F("Aßlarer Platz");
        break;
    }
    case 46567:
    {
        returnValue = F("Aßlarer Weg");
        break;
    }
    case 46568:
    {
        returnValue = F("Aßlinger Str.");
        break;
    }
    case 46569:
    {
        returnValue = F("Aßlkofen");
        break;
    }
    case 46570:
    {
        returnValue = F("Aßlkofener Str.");
        break;
    }
    case 46571:
    {
        returnValue = F("Aßlschwang");
        break;
    }
    case 46572:
    {
        returnValue = F("Aßmannshardter Str.");
        break;
    }
    case 46573:
    {
        returnValue = F("Aßmannweg");
        break;
    }
    case 46574:
    {
        returnValue = F("Aßweilerstr.");
        break;
    }
    case 46575:
    {
        returnValue = F("Aäckerweg");
        break;
    }
    }
    return returnValue;
}
