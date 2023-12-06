#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameW3(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 340034:
    {
        returnValue = F("Wolfhartsgasse");
        break;
    }
    case 340035:
    {
        returnValue = F("Wolfhartstr.");
        break;
    }
    case 340036:
    {
        returnValue = F("Wolfheckenweg");
        break;
    }
    case 340037:
    {
        returnValue = F("Wolfhelmstr.");
        break;
    }
    case 340038:
    {
        returnValue = F("Wolfhof");
        break;
    }
    case 340039:
    {
        returnValue = F("Wolfhäule");
        break;
    }
    case 340040:
    {
        returnValue = F("Wolfigweg");
        break;
    }
    case 340041:
    {
        returnValue = F("Wolfing");
        break;
    }
    case 340042:
    {
        returnValue = F("Wolfinger Str.");
        break;
    }
    case 340043:
    {
        returnValue = F("Wolfingerstr.");
        break;
    }
    case 340044:
    {
        returnValue = F("Wolfingerweg");
        break;
    }
    case 340045:
    {
        returnValue = F("Wolfinstr.");
        break;
    }
    case 340046:
    {
        returnValue = F("Wolfischbühlweg");
        break;
    }
    case 340047:
    {
        returnValue = F("Wolfkehln");
        break;
    }
    case 340048:
    {
        returnValue = F("Wolfkehlstr.");
        break;
    }
    case 340049:
    {
        returnValue = F("Wolflehen");
        break;
    }
    case 340050:
    {
        returnValue = F("Wolflier");
        break;
    }
    case 340051:
    {
        returnValue = F("Wolflochweg");
        break;
    }
    case 340052:
    {
        returnValue = F("Wolfmannshäuser Str.");
        break;
    }
    case 340053:
    {
        returnValue = F("Wolfmüllerstr.");
        break;
    }
    case 340054:
    {
        returnValue = F("Wolfmüllerweg");
        break;
    }
    case 340055:
    {
        returnValue = F("Wolfradshof");
        break;
    }
    case 340056:
    {
        returnValue = F("Wolfrainweg");
        break;
    }
    case 340057:
    {
        returnValue = F("Wolfram-Stronk-Weg");
        break;
    }
    case 340058:
    {
        returnValue = F("Wolfram-von-Eschenbach-Platz");
        break;
    }
    case 340059:
    {
        returnValue = F("Wolfram-von-Eschenbach-Str.");
        break;
    }
    case 340060:
    {
        returnValue = F("Wolframs-Eschenbacher-Str.");
        break;
    }
    case 340061:
    {
        returnValue = F("Wolframsdorfer Str.");
        break;
    }
    case 340062:
    {
        returnValue = F("Wolframstr.");
        break;
    }
    case 340063:
    {
        returnValue = F("Wolframsweg");
        break;
    }
    case 340064:
    {
        returnValue = F("WolframvVon-Eschenbach Str.");
        break;
    }
    case 340065:
    {
        returnValue = F("Wolframweg");
        break;
    }
    case 340066:
    {
        returnValue = F("Wolfratshausener Str.");
        break;
    }
    case 340067:
    {
        returnValue = F("Wolfratshauser Str.");
        break;
    }
    case 340068:
    {
        returnValue = F("Wolfratz");
        break;
    }
    case 340069:
    {
        returnValue = F("Wolfringer Str.");
        break;
    }
    case 340070:
    {
        returnValue = F("Wolfristkopfweg");
        break;
    }
    case 340071:
    {
        returnValue = F("Wolfsacker");
        break;
    }
    case 340072:
    {
        returnValue = F("Wolfsackerring");
        break;
    }
    case 340073:
    {
        returnValue = F("Wolfsackerstr.");
        break;
    }
    case 340074:
    {
        returnValue = F("Wolfsackerweg");
        break;
    }
    case 340075:
    {
        returnValue = F("Wolfsangel");
        break;
    }
    case 340076:
    {
        returnValue = F("Wolfsanger");
        break;
    }
    case 340077:
    {
        returnValue = F("Wolfsangerstr.");
        break;
    }
    case 340078:
    {
        returnValue = F("Wolfsauer Str.");
        break;
    }
    case 340079:
    {
        returnValue = F("Wolfsaugenstr.");
        break;
    }
    case 340080:
    {
        returnValue = F("Wolfsbach");
        break;
    }
    case 340081:
    {
        returnValue = F("Wolfsbacher Str.");
        break;
    }
    case 340082:
    {
        returnValue = F("Wolfsbacher Weg");
        break;
    }
    case 340083:
    {
        returnValue = F("Wolfsbachstr.");
        break;
    }
    case 340084:
    {
        returnValue = F("Wolfsbachtal");
        break;
    }
    case 340085:
    {
        returnValue = F("Wolfsbachweg");
        break;
    }
    case 340086:
    {
        returnValue = F("Wolfsbahn");
        break;
    }
    case 340087:
    {
        returnValue = F("Wolfsbeetstr.");
        break;
    }
    case 340088:
    {
        returnValue = F("Wolfsbehringer Str.");
        break;
    }
    case 340089:
    {
        returnValue = F("Wolfsbend");
        break;
    }
    case 340090:
    {
        returnValue = F("Wolfsberg");
        break;
    }
    case 340091:
    {
        returnValue = F("Wolfsberger Anger");
        break;
    }
    case 340092:
    {
        returnValue = F("Wolfsberger Gasse");
        break;
    }
    case 340093:
    {
        returnValue = F("Wolfsberger Gänseberg");
        break;
    }
    case 340094:
    {
        returnValue = F("Wolfsberger Pfarre");
        break;
    }
    case 340095:
    {
        returnValue = F("Wolfsberger Schacht");
        break;
    }
    case 340096:
    {
        returnValue = F("Wolfsberger Str.");
        break;
    }
    case 340097:
    {
        returnValue = F("Wolfsberger Weg");
        break;
    }
    case 340098:
    {
        returnValue = F("Wolfsbergstr.");
        break;
    }
    case 340099:
    {
        returnValue = F("Wolfsbergtunnel");
        break;
    }
    case 340100:
    {
        returnValue = F("Wolfsbergweg");
        break;
    }
    case 340101:
    {
        returnValue = F("Wolfsborn");
        break;
    }
    case 340102:
    {
        returnValue = F("Wolfsbornstr.");
        break;
    }
    case 340103:
    {
        returnValue = F("Wolfsboss");
        break;
    }
    case 340104:
    {
        returnValue = F("Wolfsbreite");
        break;
    }
    case 340105:
    {
        returnValue = F("Wolfsbrink");
        break;
    }
    case 340106:
    {
        returnValue = F("Wolfsbronn");
        break;
    }
    case 340107:
    {
        returnValue = F("Wolfsbruch");
        break;
    }
    case 340108:
    {
        returnValue = F("Wolfsbrunnen-Aukopfweg");
        break;
    }
    case 340109:
    {
        returnValue = F("Wolfsbrunnenschneise");
        break;
    }
    case 340110:
    {
        returnValue = F("Wolfsbrunnensteige");
        break;
    }
    case 340111:
    {
        returnValue = F("Wolfsbrunnenstr.");
        break;
    }
    case 340112:
    {
        returnValue = F("Wolfsbrunnenweg");
        break;
    }
    case 340113:
    {
        returnValue = F("Wolfsbrücke");
        break;
    }
    case 340114:
    {
        returnValue = F("Wolfsbrünnle Weg");
        break;
    }
    case 340115:
    {
        returnValue = F("Wolfsbuch");
        break;
    }
    case 340116:
    {
        returnValue = F("Wolfsbucher Weg");
        break;
    }
    case 340117:
    {
        returnValue = F("Wolfsburger Str.");
        break;
    }
    case 340118:
    {
        returnValue = F("Wolfsburger Weg");
        break;
    }
    case 340119:
    {
        returnValue = F("Wolfsburgstr.");
        break;
    }
    case 340120:
    {
        returnValue = F("Wolfsbusch");
        break;
    }
    case 340121:
    {
        returnValue = F("Wolfsbuschweg");
        break;
    }
    case 340122:
    {
        returnValue = F("Wolfsbühl");
        break;
    }
    case 340123:
    {
        returnValue = F("Wolfsbühler Eschle");
        break;
    }
    case 340124:
    {
        returnValue = F("Wolfsbühlsteige");
        break;
    }
    case 340125:
    {
        returnValue = F("Wolfsbühlstr.");
        break;
    }
    case 340126:
    {
        returnValue = F("Wolfsbühlweg");
        break;
    }
    case 340127:
    {
        returnValue = F("Wolfschachtstr.");
        break;
    }
    case 340128:
    {
        returnValue = F("Wolfscharre");
        break;
    }
    case 340129:
    {
        returnValue = F("Wolfschartstr.");
        break;
    }
    case 340130:
    {
        returnValue = F("Wolfschlader Weg");
        break;
    }
    case 340131:
    {
        returnValue = F("Wolfschlag");
        break;
    }
    case 340132:
    {
        returnValue = F("Wolfschlucht");
        break;
    }
    case 340133:
    {
        returnValue = F("Wolfschluchtweg");
        break;
    }
    case 340134:
    {
        returnValue = F("Wolfschlugener Weg");
        break;
    }
    case 340135:
    {
        returnValue = F("Wolfschluger Str.");
        break;
    }
    case 340136:
    {
        returnValue = F("Wolfschluger Weg");
        break;
    }
    case 340137:
    {
        returnValue = F("Wolfschneise");
        break;
    }
    case 340138:
    {
        returnValue = F("Wolfsdeich");
        break;
    }
    case 340139:
    {
        returnValue = F("Wolfsdell");
        break;
    }
    case 340140:
    {
        returnValue = F("Wolfsdelle");
        break;
    }
    case 340141:
    {
        returnValue = F("Wolfsdorfer Str.");
        break;
    }
    case 340142:
    {
        returnValue = F("Wolfseck");
        break;
    }
    case 340143:
    {
        returnValue = F("Wolfsecke");
        break;
    }
    case 340144:
    {
        returnValue = F("Wolfseckweg");
        break;
    }
    case 340145:
    {
        returnValue = F("Wolfsee");
        break;
    }
    case 340146:
    {
        returnValue = F("Wolfseeweg");
        break;
    }
    case 340147:
    {
        returnValue = F("Wolfsegger Str.");
        break;
    }
    case 340148:
    {
        returnValue = F("Wolfseifenbachweg");
        break;
    }
    case 340149:
    {
        returnValue = F("Wolfseifener Str.");
        break;
    }
    case 340150:
    {
        returnValue = F("Wolfser Str.");
        break;
    }
    case 340151:
    {
        returnValue = F("Wolfser Äcker");
        break;
    }
    case 340152:
    {
        returnValue = F("Wolfserlen");
        break;
    }
    case 340153:
    {
        returnValue = F("Wolfsersteig");
        break;
    }
    case 340154:
    {
        returnValue = F("Wolfsfalter");
        break;
    }
    case 340155:
    {
        returnValue = F("Wolfsfeld");
        break;
    }
    case 340156:
    {
        returnValue = F("Wolfsfeldener Weg");
        break;
    }
    case 340157:
    {
        returnValue = F("Wolfsfelder Weg");
        break;
    }
    case 340158:
    {
        returnValue = F("Wolfsfurth");
        break;
    }
    case 340159:
    {
        returnValue = F("Wolfsgalgen");
        break;
    }
    case 340160:
    {
        returnValue = F("Wolfsgalgenallee");
        break;
    }
    case 340161:
    {
        returnValue = F("Wolfsgang");
        break;
    }
    case 340162:
    {
        returnValue = F("Wolfsgangstr.");
        break;
    }
    case 340163:
    {
        returnValue = F("Wolfsgarten");
        break;
    }
    case 340164:
    {
        returnValue = F("Wolfsgarten-Schneise");
        break;
    }
    case 340165:
    {
        returnValue = F("Wolfsgartenschneise");
        break;
    }
    case 340166:
    {
        returnValue = F("Wolfsgartenstr.");
        break;
    }
    case 340167:
    {
        returnValue = F("Wolfsgartenweg");
        break;
    }
    case 340168:
    {
        returnValue = F("Wolfsgasse");
        break;
    }
    case 340169:
    {
        returnValue = F("Wolfsgefärth");
        break;
    }
    case 340170:
    {
        returnValue = F("Wolfsgewanne");
        break;
    }
    case 340171:
    {
        returnValue = F("Wolfsgraben");
        break;
    }
    case 340172:
    {
        returnValue = F("Wolfsgrabenstr.");
        break;
    }
    case 340173:
    {
        returnValue = F("Wolfsgrabenweg");
        break;
    }
    case 340174:
    {
        returnValue = F("Wolfsgracht");
        break;
    }
    case 340175:
    {
        returnValue = F("Wolfsgrube");
        break;
    }
    case 340176:
    {
        returnValue = F("Wolfsgruben");
        break;
    }
    case 340177:
    {
        returnValue = F("Wolfsgruben-Schneise");
        break;
    }
    case 340178:
    {
        returnValue = F("Wolfsgrubengasse");
        break;
    }
    case 340179:
    {
        returnValue = F("Wolfsgrubensteig");
        break;
    }
    case 340180:
    {
        returnValue = F("Wolfsgrubenstr.");
        break;
    }
    case 340181:
    {
        returnValue = F("Wolfsgrubenweg");
        break;
    }
    case 340182:
    {
        returnValue = F("Wolfsgrubeweg");
        break;
    }
    case 340183:
    {
        returnValue = F("Wolfsgrubstr.");
        break;
    }
    case 340184:
    {
        returnValue = F("Wolfsgrund");
        break;
    }
    case 340185:
    {
        returnValue = F("Wolfsgrunder Weg");
        break;
    }
    case 340186:
    {
        returnValue = F("Wolfsgrundweg");
        break;
    }
    case 340187:
    {
        returnValue = F("Wolfsgruppen");
        break;
    }
    case 340188:
    {
        returnValue = F("Wolfsgrüben");
        break;
    }
    case 340189:
    {
        returnValue = F("Wolfsgrünstr.");
        break;
    }
    case 340190:
    {
        returnValue = F("Wolfsgurgel");
        break;
    }
    case 340191:
    {
        returnValue = F("Wolfsgärten");
        break;
    }
    case 340192:
    {
        returnValue = F("Wolfsgässle");
        break;
    }
    case 340193:
    {
        returnValue = F("Wolfsgäßchen");
        break;
    }
    case 340194:
    {
        returnValue = F("Wolfshagen");
        break;
    }
    case 340195:
    {
        returnValue = F("Wolfshagen-Dorfstr.");
        break;
    }
    case 340196:
    {
        returnValue = F("Wolfshagener Damm");
        break;
    }
    case 340197:
    {
        returnValue = F("Wolfshagener Str.");
        break;
    }
    case 340198:
    {
        returnValue = F("Wolfshagener Weg");
        break;
    }
    case 340199:
    {
        returnValue = F("Wolfshahn");
        break;
    }
    case 340200:
    {
        returnValue = F("Wolfshain");
        break;
    }
    case 340201:
    {
        returnValue = F("Wolfshainer Str.");
        break;
    }
    case 340202:
    {
        returnValue = F("Wolfshalde");
        break;
    }
    case 340203:
    {
        returnValue = F("Wolfshaldenweg");
        break;
    }
    case 340204:
    {
        returnValue = F("Wolfshausener Str.");
        break;
    }
    case 340205:
    {
        returnValue = F("Wolfshauser Str.");
        break;
    }
    case 340206:
    {
        returnValue = F("Wolfshausweg");
        break;
    }
    case 340207:
    {
        returnValue = F("Wolfsheck");
        break;
    }
    case 340208:
    {
        returnValue = F("Wolfshecke");
        break;
    }
    case 340209:
    {
        returnValue = F("Wolfsheckenweg");
        break;
    }
    case 340210:
    {
        returnValue = F("Wolfsheide");
        break;
    }
    case 340211:
    {
        returnValue = F("Wolfsheideweg");
        break;
    }
    case 340212:
    {
        returnValue = F("Wolfsheimer Str.");
        break;
    }
    case 340213:
    {
        returnValue = F("Wolfsheule");
        break;
    }
    case 340214:
    {
        returnValue = F("Wolfshof");
        break;
    }
    case 340215:
    {
        returnValue = F("Wolfshofer Weg");
        break;
    }
    case 340216:
    {
        returnValue = F("Wolfshohlstr.");
        break;
    }
    case 340217:
    {
        returnValue = F("Wolfshohn");
        break;
    }
    case 340218:
    {
        returnValue = F("Wolfsholz");
        break;
    }
    case 340219:
    {
        returnValue = F("Wolfshorn");
        break;
    }
    case 340220:
    {
        returnValue = F("Wolfshovener Gasse");
        break;
    }
    case 340221:
    {
        returnValue = F("Wolfshovener Str.");
        break;
    }
    case 340222:
    {
        returnValue = F("Wolfshäger Str.");
        break;
    }
    case 340223:
    {
        returnValue = F("Wolfshäuser Str.");
        break;
    }
    case 340224:
    {
        returnValue = F("Wolfshöhe");
        break;
    }
    case 340225:
    {
        returnValue = F("Wolfshöhle");
        break;
    }
    case 340226:
    {
        returnValue = F("Wolfshöhlenweg");
        break;
    }
    case 340227:
    {
        returnValue = F("Wolfshövel");
        break;
    }
    case 340228:
    {
        returnValue = F("Wolfshügel");
        break;
    }
    case 340229:
    {
        returnValue = F("Wolfsiedlung");
        break;
    }
    case 340230:
    {
        returnValue = F("Wolfsiek");
        break;
    }
    case 340231:
    {
        returnValue = F("Wolfsiepen");
        break;
    }
    case 340232:
    {
        returnValue = F("Wolfsindisweg");
        break;
    }
    case 340233:
    {
        returnValue = F("Wolfsjagdweg");
        break;
    }
    case 340234:
    {
        returnValue = F("Wolfskammer");
        break;
    }
    case 340235:
    {
        returnValue = F("Wolfskamp");
        break;
    }
    case 340236:
    {
        returnValue = F("Wolfskamphof");
        break;
    }
    case 340237:
    {
        returnValue = F("Wolfskapellenstr.");
        break;
    }
    case 340238:
    {
        returnValue = F("Wolfskaul");
        break;
    }
    case 340239:
    {
        returnValue = F("Wolfskaule");
        break;
    }
    case 340240:
    {
        returnValue = F("Wolfskauler Bahn");
        break;
    }
    case 340241:
    {
        returnValue = F("Wolfskauler Str.");
        break;
    }
    case 340242:
    {
        returnValue = F("Wolfskaulstr.");
        break;
    }
    case 340243:
    {
        returnValue = F("Wolfskaut");
        break;
    }
    case 340244:
    {
        returnValue = F("Wolfskaute");
        break;
    }
    case 340245:
    {
        returnValue = F("Wolfskauter Str.");
        break;
    }
    case 340246:
    {
        returnValue = F("Wolfskauterweg");
        break;
    }
    case 340247:
    {
        returnValue = F("Wolfskautstr.");
        break;
    }
    case 340248:
    {
        returnValue = F("Wolfskeelstr.");
        break;
    }
    case 340249:
    {
        returnValue = F("Wolfskehl");
        break;
    }
    case 340250:
    {
        returnValue = F("Wolfskehle");
        break;
    }
    case 340251:
    {
        returnValue = F("Wolfskehlenweg");
        break;
    }
    case 340252:
    {
        returnValue = F("Wolfskehler Str.");
        break;
    }
    case 340253:
    {
        returnValue = F("Wolfskehlstr.");
        break;
    }
    case 340254:
    {
        returnValue = F("Wolfskehlweg");
        break;
    }
    case 340255:
    {
        returnValue = F("Wolfskernstr.");
        break;
    }
    case 340256:
    {
        returnValue = F("Wolfskeule");
        break;
    }
    case 340257:
    {
        returnValue = F("Wolfsklinge");
        break;
    }
    case 340258:
    {
        returnValue = F("Wolfsklingentalstr.");
        break;
    }
    case 340259:
    {
        returnValue = F("Wolfsklingenweg");
        break;
    }
    case 340260:
    {
        returnValue = F("Wolfskoben");
        break;
    }
    case 340261:
    {
        returnValue = F("Wolfskoppel");
        break;
    }
    case 340262:
    {
        returnValue = F("Wolfskrugweg");
        break;
    }
    case 340263:
    {
        returnValue = F("Wolfskrögen");
        break;
    }
    case 340264:
    {
        returnValue = F("Wolfskuhl");
        break;
    }
    case 340265:
    {
        returnValue = F("Wolfskuhl Weg");
        break;
    }
    case 340266:
    {
        returnValue = F("Wolfskuhle");
        break;
    }
    case 340267:
    {
        returnValue = F("Wolfskuhlen");
        break;
    }
    case 340268:
    {
        returnValue = F("Wolfskull");
        break;
    }
    case 340269:
    {
        returnValue = F("Wolfskummer");
        break;
    }
    case 340270:
    {
        returnValue = F("Wolfslach");
        break;
    }
    case 340271:
    {
        returnValue = F("Wolfslachstr.");
        break;
    }
    case 340272:
    {
        returnValue = F("Wolfslahnerweg");
        break;
    }
    case 340273:
    {
        returnValue = F("Wolfslaker Str.");
        break;
    }
    case 340274:
    {
        returnValue = F("Wolfslaker Weg");
        break;
    }
    case 340275:
    {
        returnValue = F("Wolfslaufstr.");
        break;
    }
    case 340276:
    {
        returnValue = F("Wolfslegelstr.");
        break;
    }
    case 340277:
    {
        returnValue = F("Wolfslehrpfad");
        break;
    }
    case 340278:
    {
        returnValue = F("Wolfsleite");
        break;
    }
    case 340279:
    {
        returnValue = F("Wolfsleithe");
        break;
    }
    case 340280:
    {
        returnValue = F("Wolfslist-Weg");
        break;
    }
    case 340281:
    {
        returnValue = F("Wolfslocher Str.");
        break;
    }
    case 340282:
    {
        returnValue = F("Wolfslochstr.");
        break;
    }
    case 340283:
    {
        returnValue = F("Wolfslochweg");
        break;
    }
    case 340284:
    {
        returnValue = F("Wolfsloh");
        break;
    }
    case 340285:
    {
        returnValue = F("Wolfslohe");
        break;
    }
    case 340286:
    {
        returnValue = F("Wolfsloher Weg");
        break;
    }
    case 340287:
    {
        returnValue = F("Wolfslückenweg");
        break;
    }
    case 340288:
    {
        returnValue = F("Wolfsmaettler");
        break;
    }
    case 340289:
    {
        returnValue = F("Wolfsmahd");
        break;
    }
    case 340290:
    {
        returnValue = F("Wolfsmatt");
        break;
    }
    case 340291:
    {
        returnValue = F("Wolfsmilchweg");
        break;
    }
    case 340292:
    {
        returnValue = F("Wolfsmoosweg");
        break;
    }
    case 340293:
    {
        returnValue = F("Wolfsmühle");
        break;
    }
    case 340294:
    {
        returnValue = F("Wolfsmühlenweg");
        break;
    }
    case 340295:
    {
        returnValue = F("Wolfsmühleweg");
        break;
    }
    case 340296:
    {
        returnValue = F("Wolfsmühlstr.");
        break;
    }
    case 340297:
    {
        returnValue = F("Wolfsmünsterer Str.");
        break;
    }
    case 340298:
    {
        returnValue = F("Wolfsnest");
        break;
    }
    case 340299:
    {
        returnValue = F("Wolfspassage");
        break;
    }
    case 340300:
    {
        returnValue = F("Wolfspfad");
        break;
    }
    case 340301:
    {
        returnValue = F("Wolfspfützer Str.");
        break;
    }
    case 340302:
    {
        returnValue = F("Wolfspfützer Weg");
        break;
    }
    case 340303:
    {
        returnValue = F("Wolfspoint");
        break;
    }
    case 340304:
    {
        returnValue = F("Wolfsradweg");
        break;
    }
    case 340305:
    {
        returnValue = F("Wolfsrain");
        break;
    }
    case 340306:
    {
        returnValue = F("Wolfsrathstr.");
        break;
    }
    case 340307:
    {
        returnValue = F("Wolfsried");
        break;
    }
    case 340308:
    {
        returnValue = F("Wolfsruh");
        break;
    }
    case 340309:
    {
        returnValue = F("Wolfsruher Weg");
        break;
    }
    case 340310:
    {
        returnValue = F("Wolfsrücken");
        break;
    }
    case 340311:
    {
        returnValue = F("Wolfsschatten");
        break;
    }
    case 340312:
    {
        returnValue = F("Wolfsschlade");
        break;
    }
    case 340313:
    {
        returnValue = F("Wolfsschlucht");
        break;
    }
    case 340314:
    {
        returnValue = F("Wolfsschlucht-Märchenplatz");
        break;
    }
    case 340315:
    {
        returnValue = F("Wolfsschluchtpfad");
        break;
    }
    case 340316:
    {
        returnValue = F("Wolfsschluchtweg");
        break;
    }
    case 340317:
    {
        returnValue = F("Wolfsstall");
        break;
    }
    case 340318:
    {
        returnValue = F("Wolfsstange");
        break;
    }
    case 340319:
    {
        returnValue = F("Wolfssteg");
        break;
    }
    case 340320:
    {
        returnValue = F("Wolfssteig");
        break;
    }
    case 340321:
    {
        returnValue = F("Wolfssteinweg");
        break;
    }
    case 340322:
    {
        returnValue = F("Wolfsstieg");
        break;
    }
    case 340323:
    {
        returnValue = F("Wolfsstiege");
        break;
    }
    case 340324:
    {
        returnValue = F("Wolfsstr.");
        break;
    }
    case 340325:
    {
        returnValue = F("Wolfsstücke");
        break;
    }
    case 340326:
    {
        returnValue = F("Wolfstal");
        break;
    }
    case 340327:
    {
        returnValue = F("Wolfstalflurstr.");
        break;
    }
    case 340328:
    {
        returnValue = F("Wolfstalstr.");
        break;
    }
    case 340329:
    {
        returnValue = F("Wolfstalstrecke");
        break;
    }
    case 340330:
    {
        returnValue = F("Wolfstalweg");
        break;
    }
    case 340331:
    {
        returnValue = F("Wolfstapper Weg");
        break;
    }
    case 340332:
    {
        returnValue = F("Wolfsteiche");
        break;
    }
    case 340333:
    {
        returnValue = F("Wolfsteig");
        break;
    }
    case 340334:
    {
        returnValue = F("Wolfsteige");
        break;
    }
    case 340335:
    {
        returnValue = F("Wolfstein");
        break;
    }
    case 340336:
    {
        returnValue = F("Wolfsteiner Platz");
        break;
    }
    case 340337:
    {
        returnValue = F("Wolfsteiner Schloßpark");
        break;
    }
    case 340338:
    {
        returnValue = F("Wolfsteiner Str.");
        break;
    }
    case 340339:
    {
        returnValue = F("Wolfsteinerau");
        break;
    }
    case 340340:
    {
        returnValue = F("Wolfsteinerstr.");
        break;
    }
    case 340341:
    {
        returnValue = F("Wolfsteinstr.");
        break;
    }
    case 340342:
    {
        returnValue = F("Wolfstellenweg");
        break;
    }
    case 340343:
    {
        returnValue = F("Wolfstellweg");
        break;
    }
    case 340344:
    {
        returnValue = F("Wolfstempel");
        break;
    }
    case 340345:
    {
        returnValue = F("Wolfsthalplatz");
        break;
    }
    case 340346:
    {
        returnValue = F("Wolfstieg");
        break;
    }
    case 340347:
    {
        returnValue = F("Wolfstr.");
        break;
    }
    case 340348:
    {
        returnValue = F("Wolfstränkschneise");
        break;
    }
    case 340349:
    {
        returnValue = F("Wolfstück");
        break;
    }
    case 340350:
    {
        returnValue = F("Wolfsweg");
        break;
    }
    case 340351:
    {
        returnValue = F("Wolfsweide");
        break;
    }
    case 340352:
    {
        returnValue = F("Wolfswerder");
        break;
    }
    case 340353:
    {
        returnValue = F("Wolfswiesen");
        break;
    }
    case 340354:
    {
        returnValue = F("Wolfswiesenweg");
        break;
    }
    case 340355:
    {
        returnValue = F("Wolfswingertstr.");
        break;
    }
    case 340356:
    {
        returnValue = F("Wolfswinkel");
        break;
    }
    case 340357:
    {
        returnValue = F("Wolfswinkelstr.");
        break;
    }
    case 340358:
    {
        returnValue = F("Wolfswinkler Str.");
        break;
    }
    case 340359:
    {
        returnValue = F("Wolfszaunweg");
        break;
    }
    case 340360:
    {
        returnValue = F("Wolfszählweg");
        break;
    }
    case 340361:
    {
        returnValue = F("Wolfsäcker");
        break;
    }
    case 340362:
    {
        returnValue = F("Wolfsäckerstr.");
        break;
    }
    case 340363:
    {
        returnValue = F("Wolfsäckerweg");
        break;
    }
    case 340364:
    {
        returnValue = F("Wolfsäger Weg");
        break;
    }
    case 340365:
    {
        returnValue = F("Wolfsäulenweg");
        break;
    }
    case 340366:
    {
        returnValue = F("Wolfsölden Nr.");
        break;
    }
    case 340367:
    {
        returnValue = F("Wolfsölder Weg");
        break;
    }
    case 340368:
    {
        returnValue = F("Wolfsöldsträßle");
        break;
    }
    case 340369:
    {
        returnValue = F("Wolftalstr.");
        break;
    }
    case 340370:
    {
        returnValue = F("Wolftalweg");
        break;
    }
    case 340371:
    {
        returnValue = F("Wolfter");
        break;
    }
    case 340372:
    {
        returnValue = F("Wolfteroder Str.");
        break;
    }
    case 340373:
    {
        returnValue = F("Wolfteroder Weg");
        break;
    }
    case 340374:
    {
        returnValue = F("Wolfterwanderweg 1");
        break;
    }
    case 340375:
    {
        returnValue = F("Wolftitzer Str.");
        break;
    }
    case 340376:
    {
        returnValue = F("Wolftrigelstr.");
        break;
    }
    case 340377:
    {
        returnValue = F("Wolfurtstr.");
        break;
    }
    case 340378:
    {
        returnValue = F("Wolfweg");
        break;
    }
    case 340379:
    {
        returnValue = F("Wolfwiesenstr.");
        break;
    }
    case 340380:
    {
        returnValue = F("Wolfwinkelchenweg");
        break;
    }
    case 340381:
    {
        returnValue = F("Wolfwinkelweg");
        break;
    }
    case 340382:
    {
        returnValue = F("Wolfzahnstr.");
        break;
    }
    case 340383:
    {
        returnValue = F("Wolfzorner Str.");
        break;
    }
    case 340384:
    {
        returnValue = F("Wolfäcker");
        break;
    }
    case 340385:
    {
        returnValue = F("Wolfäckerstr.");
        break;
    }
    case 340386:
    {
        returnValue = F("Wolfäckerweg");
        break;
    }
    case 340387:
    {
        returnValue = F("Wolgaster Landstr.");
        break;
    }
    case 340388:
    {
        returnValue = F("Wolgaster Str.");
        break;
    }
    case 340389:
    {
        returnValue = F("Wolgaster Weg");
        break;
    }
    case 340390:
    {
        returnValue = F("Wolgastr.");
        break;
    }
    case 340391:
    {
        returnValue = F("Wolgemutstr.");
        break;
    }
    case 340392:
    {
        returnValue = F("Wolgerain");
        break;
    }
    case 340393:
    {
        returnValue = F("Wolkauer Str.");
        break;
    }
    case 340394:
    {
        returnValue = F("Wolkenberger Weg");
        break;
    }
    case 340395:
    {
        returnValue = F("Wolkenburg");
        break;
    }
    case 340396:
    {
        returnValue = F("Wolkenburger Str.");
        break;
    }
    case 340397:
    {
        returnValue = F("Wolkenburgstr.");
        break;
    }
    case 340398:
    {
        returnValue = F("Wolkenburgweg");
        break;
    }
    case 340399:
    {
        returnValue = F("Wolkener Str.");
        break;
    }
    case 340400:
    {
        returnValue = F("Wolkener Weg");
        break;
    }
    case 340401:
    {
        returnValue = F("Wolkengasse");
        break;
    }
    case 340402:
    {
        returnValue = F("Wolkenhof");
        break;
    }
    case 340403:
    {
        returnValue = F("Wolkenhütteweg");
        break;
    }
    case 340404:
    {
        returnValue = F("Wolkenstein");
        break;
    }
    case 340405:
    {
        returnValue = F("Wolkensteiner Str.");
        break;
    }
    case 340406:
    {
        returnValue = F("Wolkensteinstr.");
        break;
    }
    case 340407:
    {
        returnValue = F("Wolkensteinweg");
        break;
    }
    case 340408:
    {
        returnValue = F("Wolkenstieg");
        break;
    }
    case 340409:
    {
        returnValue = F("Wolkenweher Dorfstr.");
        break;
    }
    case 340410:
    {
        returnValue = F("Wolkenweher Weg");
        break;
    }
    case 340411:
    {
        returnValue = F("Wolker Chaussee");
        break;
    }
    case 340412:
    {
        returnValue = F("Wolkeringer Str.");
        break;
    }
    case 340413:
    {
        returnValue = F("Wolkersdorf");
        break;
    }
    case 340414:
    {
        returnValue = F("Wolkersdorfer Berg");
        break;
    }
    case 340415:
    {
        returnValue = F("Wolkersdorfer Hauptstr.");
        break;
    }
    case 340416:
    {
        returnValue = F("Wolkersdorfer Str.");
        break;
    }
    case 340417:
    {
        returnValue = F("Wolkerstr.");
        break;
    }
    case 340418:
    {
        returnValue = F("Wolkertshofener Str.");
        break;
    }
    case 340419:
    {
        returnValue = F("Wolketsweiler");
        break;
    }
    case 340420:
    {
        returnValue = F("Wolkmannstr.");
        break;
    }
    case 340421:
    {
        returnValue = F("Wolkow");
        break;
    }
    case 340422:
    {
        returnValue = F("Wolkower Weg");
        break;
    }
    case 340423:
    {
        returnValue = F("Wolkramshäuser Str.");
        break;
    }
    case 340424:
    {
        returnValue = F("Wolkshäuser Str.");
        break;
    }
    case 340425:
    {
        returnValue = F("Wolkwitz");
        break;
    }
    case 340426:
    {
        returnValue = F("Wolkwitzer Wech");
        break;
    }
    case 340427:
    {
        returnValue = F("Wollaberger Str.");
        break;
    }
    case 340428:
    {
        returnValue = F("Wollaher Str.");
        break;
    }
    case 340429:
    {
        returnValue = F("Wollaher Weg");
        break;
    }
    case 340430:
    {
        returnValue = F("Wollanger");
        break;
    }
    case 340431:
    {
        returnValue = F("Wollankstr.");
        break;
    }
    case 340432:
    {
        returnValue = F("Wollauer Str.");
        break;
    }
    case 340433:
    {
        returnValue = F("Wollbacher Str.");
        break;
    }
    case 340434:
    {
        returnValue = F("Wollbachstr.");
        break;
    }
    case 340435:
    {
        returnValue = F("Wollbergsredder");
        break;
    }
    case 340436:
    {
        returnValue = F("Wollblumenschlagweg");
        break;
    }
    case 340437:
    {
        returnValue = F("Wollblumenweg");
        break;
    }
    case 340438:
    {
        returnValue = F("Wollblöcken");
        break;
    }
    case 340439:
    {
        returnValue = F("Wollbrandshäuser Str.");
        break;
    }
    case 340440:
    {
        returnValue = F("Wollbrechtshof");
        break;
    }
    case 340441:
    {
        returnValue = F("Wollbrouk");
        break;
    }
    case 340442:
    {
        returnValue = F("Wollbrügger Str.");
        break;
    }
    case 340443:
    {
        returnValue = F("Wollburgsweg");
        break;
    }
    case 340444:
    {
        returnValue = F("Wolle-Kriwanek-Weg");
        break;
    }
    case 340445:
    {
        returnValue = F("Wolleberstee");
        break;
    }
    case 340446:
    {
        returnValue = F("Wollenberg");
        break;
    }
    case 340447:
    {
        returnValue = F("Wollenberg-Hangweg");
        break;
    }
    case 340448:
    {
        returnValue = F("Wollenbergblick");
        break;
    }
    case 340449:
    {
        returnValue = F("Wollenberger Schmiede");
        break;
    }
    case 340450:
    {
        returnValue = F("Wollenbergstr.");
        break;
    }
    case 340451:
    {
        returnValue = F("Wollenfelsweg");
        break;
    }
    case 340452:
    {
        returnValue = F("Wollenhausweg");
        break;
    }
    case 340453:
    {
        returnValue = F("Wollenlochsträßle");
        break;
    }
    case 340454:
    {
        returnValue = F("Wollensiepen");
        break;
    }
    case 340455:
    {
        returnValue = F("Wollenthin");
        break;
    }
    case 340456:
    {
        returnValue = F("Wollenweberstr.");
        break;
    }
    case 340457:
    {
        returnValue = F("Wollepark");
        break;
    }
    case 340458:
    {
        returnValue = F("Wollering");
        break;
    }
    case 340459:
    {
        returnValue = F("Wollersdorf");
        break;
    }
    case 340460:
    {
        returnValue = F("Wollersdorfer Str.");
        break;
    }
    case 340461:
    {
        returnValue = F("Wollersleben");
        break;
    }
    case 340462:
    {
        returnValue = F("Wollerslebener Dorfstr.");
        break;
    }
    case 340463:
    {
        returnValue = F("Wollerstr.");
        break;
    }
    case 340464:
    {
        returnValue = F("Wollersum");
        break;
    }
    case 340465:
    {
        returnValue = F("Wollersumer Str.");
        break;
    }
    case 340466:
    {
        returnValue = F("Wolleshuus");
        break;
    }
    case 340467:
    {
        returnValue = F("Wolletzer Str.");
        break;
    }
    case 340468:
    {
        returnValue = F("Wolletzer Weg");
        break;
    }
    case 340469:
    {
        returnValue = F("Wollgasse");
        break;
    }
    case 340470:
    {
        returnValue = F("Wollgrasstr.");
        break;
    }
    case 340471:
    {
        returnValue = F("Wollgrasweg");
        break;
    }
    case 340472:
    {
        returnValue = F("Wollham");
        break;
    }
    case 340473:
    {
        returnValue = F("Wollin");
        break;
    }
    case 340474:
    {
        returnValue = F("Wollin Siedlung");
        break;
    }
    case 340475:
    {
        returnValue = F("Wolliner Str.");
        break;
    }
    case 340476:
    {
        returnValue = F("Wolliner Weg");
        break;
    }
    case 340477:
    {
        returnValue = F("Wollingster Dorfstr.");
        break;
    }
    case 340478:
    {
        returnValue = F("Wollingster Str.");
        break;
    }
    case 340479:
    {
        returnValue = F("Wollingstr.");
        break;
    }
    case 340480:
    {
        returnValue = F("Wollinstr.");
        break;
    }
    case 340481:
    {
        returnValue = F("Wollinweg");
        break;
    }
    case 340482:
    {
        returnValue = F("Wollishauser Weg");
        break;
    }
    case 340483:
    {
        returnValue = F("Wollkaule");
        break;
    }
    case 340484:
    {
        returnValue = F("Wollm");
        break;
    }
    case 340485:
    {
        returnValue = F("Wollmannsdorf");
        break;
    }
    case 340486:
    {
        returnValue = F("Wollmannstetten");
        break;
    }
    case 340487:
    {
        returnValue = F("Wollmarer Weg");
        break;
    }
    case 340488:
    {
        returnValue = F("Wollmarkt");
        break;
    }
    case 340489:
    {
        returnValue = F("Wollmarktstr.");
        break;
    }
    case 340490:
    {
        returnValue = F("Wollmatinger Str.");
        break;
    }
    case 340491:
    {
        returnValue = F("Wollmeine");
        break;
    }
    case 340492:
    {
        returnValue = F("Wollmershäuser Str.");
        break;
    }
    case 340493:
    {
        returnValue = F("Wollmershäuser Weg");
        break;
    }
    case 340494:
    {
        returnValue = F("Wollmesheimer Hauptstr.");
        break;
    }
    case 340495:
    {
        returnValue = F("Wollmesheimer Höhe");
        break;
    }
    case 340496:
    {
        returnValue = F("Wollmesheimer Pfad");
        break;
    }
    case 340497:
    {
        returnValue = F("Wollmesheimer Str.");
        break;
    }
    case 340498:
    {
        returnValue = F("Wollreffenweg");
        break;
    }
    case 340499:
    {
        returnValue = F("Wollriede");
        break;
    }
    case 340500:
    {
        returnValue = F("Wollröder Weg");
        break;
    }
    case 340501:
    {
        returnValue = F("Wollscheid");
        break;
    }
    case 340502:
    {
        returnValue = F("Wollscheider-Hof");
        break;
    }
    case 340503:
    {
        returnValue = F("Wollschlägers Weg");
        break;
    }
    case 340504:
    {
        returnValue = F("Wollschow");
        break;
    }
    case 340505:
    {
        returnValue = F("Wollseifener Str.");
        break;
    }
    case 340506:
    {
        returnValue = F("Wollspinnerstr.");
        break;
    }
    case 340507:
    {
        returnValue = F("Wollstegge");
        break;
    }
    case 340508:
    {
        returnValue = F("Wollsteiner Str.");
        break;
    }
    case 340509:
    {
        returnValue = F("Wollsteiner Weg");
        break;
    }
    case 340510:
    {
        returnValue = F("Wollstr.");
        break;
    }
    case 340511:
    {
        returnValue = F("Wollwaschweg");
        break;
    }
    case 340512:
    {
        returnValue = F("Wollwebergasse");
        break;
    }
    case 340513:
    {
        returnValue = F("Wollweberstr.");
        break;
    }
    case 340514:
    {
        returnValue = F("Wollweg");
        break;
    }
    case 340515:
    {
        returnValue = F("Wolläcker");
        break;
    }
    case 340516:
    {
        returnValue = F("Wolmersdorfer Str.");
        break;
    }
    case 340517:
    {
        returnValue = F("Wolmershagen");
        break;
    }
    case 340518:
    {
        returnValue = F("Wolmirshorster Str.");
        break;
    }
    case 340519:
    {
        returnValue = F("Wolmirslebener Str.");
        break;
    }
    case 340520:
    {
        returnValue = F("Wolmirstedter Chaussee");
        break;
    }
    case 340521:
    {
        returnValue = F("Wolmirstedter Landstr.");
        break;
    }
    case 340522:
    {
        returnValue = F("Wolmirstedter Str.");
        break;
    }
    case 340523:
    {
        returnValue = F("Wolnzacher Str.");
        break;
    }
    case 340524:
    {
        returnValue = F("Wolnzacher Weg");
        break;
    }
    case 340525:
    {
        returnValue = F("Wolperndorfer Ring");
        break;
    }
    case 340526:
    {
        returnValue = F("Wolpernweg");
        break;
    }
    case 340527:
    {
        returnValue = F("Wolperode");
        break;
    }
    case 340528:
    {
        returnValue = F("Wolperstr.");
        break;
    }
    case 340529:
    {
        returnValue = F("Wolpertsau");
        break;
    }
    case 340530:
    {
        returnValue = F("Wolpertsdorf");
        break;
    }
    case 340531:
    {
        returnValue = F("Wolpertsdorfer Str.");
        break;
    }
    case 340532:
    {
        returnValue = F("Wolpertshausener Str.");
        break;
    }
    case 340533:
    {
        returnValue = F("Wolpertsheimer Weg");
        break;
    }
    case 340534:
    {
        returnValue = F("Wolpertstetten");
        break;
    }
    case 340535:
    {
        returnValue = F("Wolpertstetter Str.");
        break;
    }
    case 340536:
    {
        returnValue = F("Wolpertstr.");
        break;
    }
    case 340537:
    {
        returnValue = F("Wolpertsweg");
        break;
    }
    case 340538:
    {
        returnValue = F("Wolpertswender Str.");
        break;
    }
    case 340539:
    {
        returnValue = F("Wolpfad");
        break;
    }
    case 340540:
    {
        returnValue = F("Wolprylastr.");
        break;
    }
    case 340541:
    {
        returnValue = F("Wolrad-Kreusler-Str.");
        break;
    }
    case 340542:
    {
        returnValue = F("Wolradstr.");
        break;
    }
    case 340543:
    {
        returnValue = F("Wolschina");
        break;
    }
    case 340544:
    {
        returnValue = F("Wolschinkaweg");
        break;
    }
    case 340545:
    {
        returnValue = F("Wolsdorfer Str.");
        break;
    }
    case 340546:
    {
        returnValue = F("Wolsfelder Berg");
        break;
    }
    case 340547:
    {
        returnValue = F("Wolsfelder Str.");
        break;
    }
    case 340548:
    {
        returnValue = F("Wolsifferstr.");
        break;
    }
    case 340549:
    {
        returnValue = F("Woltem");
        break;
    }
    case 340550:
    {
        returnValue = F("Woltenberg");
        break;
    }
    case 340551:
    {
        returnValue = F("Wolter-von-Plettenberg-Str.");
        break;
    }
    case 340552:
    {
        returnValue = F("Wolter-von-Plettenberg-Weg");
        break;
    }
    case 340553:
    {
        returnValue = F("Wolterberger Weg");
        break;
    }
    case 340554:
    {
        returnValue = F("Wolterdinger Dorfstr.");
        break;
    }
    case 340555:
    {
        returnValue = F("Wolteritzer Str.");
        break;
    }
    case 340556:
    {
        returnValue = F("Wolterkamp");
        break;
    }
    case 340557:
    {
        returnValue = F("Woltermanns Maate");
        break;
    }
    case 340558:
    {
        returnValue = F("Wolters-Kluwer-Str.");
        break;
    }
    case 340559:
    {
        returnValue = F("Woltersberg");
        break;
    }
    case 340560:
    {
        returnValue = F("Woltersburg");
        break;
    }
    case 340561:
    {
        returnValue = F("Woltersburger Mühle");
        break;
    }
    case 340562:
    {
        returnValue = F("Woltersburger Mühlenweg");
        break;
    }
    case 340563:
    {
        returnValue = F("Woltersdamm");
        break;
    }
    case 340564:
    {
        returnValue = F("Woltersdorf");
        break;
    }
    case 340565:
    {
        returnValue = F("Woltersdorfer Allee");
        break;
    }
    case 340566:
    {
        returnValue = F("Woltersdorfer Kirchsteig");
        break;
    }
    case 340567:
    {
        returnValue = F("Woltersdorfer Landstr.");
        break;
    }
    case 340568:
    {
        returnValue = F("Woltersdorfer Landweg");
        break;
    }
    case 340569:
    {
        returnValue = F("Woltersdorfer Str.");
        break;
    }
    case 340570:
    {
        returnValue = F("Woltersdorfer Weg");
        break;
    }
    case 340571:
    {
        returnValue = F("Woltersgasse");
        break;
    }
    case 340572:
    {
        returnValue = F("Woltershofen");
        break;
    }
    case 340573:
    {
        returnValue = F("Woltershäger Weg");
        break;
    }
    case 340574:
    {
        returnValue = F("Wolterskamp");
        break;
    }
    case 340575:
    {
        returnValue = F("Wolterssiepen");
        break;
    }
    case 340576:
    {
        returnValue = F("Woltersterborger Str.");
        break;
    }
    case 340577:
    {
        returnValue = F("Wolterstorffstr.");
        break;
    }
    case 340578:
    {
        returnValue = F("Wolterstr.");
        break;
    }
    case 340579:
    {
        returnValue = F("Woltersweg");
        break;
    }
    case 340580:
    {
        returnValue = F("Wolthauser Damm");
        break;
    }
    case 340581:
    {
        returnValue = F("Wolthof");
        break;
    }
    case 340582:
    {
        returnValue = F("Wolthuser Dorfstr.");
        break;
    }
    case 340583:
    {
        returnValue = F("Wolthuser Kirchweg");
        break;
    }
    case 340584:
    {
        returnValue = F("Wolthuser Str.");
        break;
    }
    case 340585:
    {
        returnValue = F("Wolthäuser Str.");
        break;
    }
    case 340586:
    {
        returnValue = F("Woltingstr.");
        break;
    }
    case 340587:
    {
        returnValue = F("Woltmannbrücke");
        break;
    }
    case 340588:
    {
        returnValue = F("Woltmühle");
        break;
    }
    case 340589:
    {
        returnValue = F("Woltorfer Str.");
        break;
    }
    case 340590:
    {
        returnValue = F("Woltow");
        break;
    }
    case 340591:
    {
        returnValue = F("Woltower Str.");
        break;
    }
    case 340592:
    {
        returnValue = F("Woltringhausen");
        break;
    }
    case 340593:
    {
        returnValue = F("Woltringhäuser Weg");
        break;
    }
    case 340594:
    {
        returnValue = F("Woltruper Siedlung");
        break;
    }
    case 340595:
    {
        returnValue = F("Woltruper Wiesen");
        break;
    }
    case 340596:
    {
        returnValue = F("Woltweg");
        break;
    }
    case 340597:
    {
        returnValue = F("Woltwiescher Str.");
        break;
    }
    case 340598:
    {
        returnValue = F("Woltwiescher Weg");
        break;
    }
    case 340599:
    {
        returnValue = F("Woltzetener Reihe");
        break;
    }
    case 340600:
    {
        returnValue = F("Woltzetener Str.");
        break;
    }
    case 340601:
    {
        returnValue = F("Wolwergasse");
        break;
    }
    case 340602:
    {
        returnValue = F("Wolwerskopf");
        break;
    }
    case 340603:
    {
        returnValue = F("Wolweshof");
        break;
    }
    case 340604:
    {
        returnValue = F("Wolyniezstr.");
        break;
    }
    case 340605:
    {
        returnValue = F("Wolzenstr.");
        break;
    }
    case 340606:
    {
        returnValue = F("Wolziger Chaussee");
        break;
    }
    case 340607:
    {
        returnValue = F("Wolziger Hauptstr.");
        break;
    }
    case 340608:
    {
        returnValue = F("Wolziger Waldweg");
        break;
    }
    case 340609:
    {
        returnValue = F("Wolzogenpark");
        break;
    }
    case 340610:
    {
        returnValue = F("Womburgstr.");
        break;
    }
    case 340611:
    {
        returnValue = F("Womke");
        break;
    }
    case 340612:
    {
        returnValue = F("Wommelshäuser Str.");
        break;
    }
    case 340613:
    {
        returnValue = F("Wonneberg");
        break;
    }
    case 340614:
    {
        returnValue = F("Wonnecker Str.");
        break;
    }
    case 340615:
    {
        returnValue = F("Wonnegauer Str.");
        break;
    }
    case 340616:
    {
        returnValue = F("Wonnegaustr.");
        break;
    }
    case 340617:
    {
        returnValue = F("Wonnental");
        break;
    }
    case 340618:
    {
        returnValue = F("Wonnentaler Weg");
        break;
    }
    case 340619:
    {
        returnValue = F("Wonnentalweg");
        break;
    }
    case 340620:
    {
        returnValue = F("Wonning");
        break;
    }
    case 340621:
    {
        returnValue = F("Wonnitz");
        break;
    }
    case 340622:
    {
        returnValue = F("Wonnitzer Str.");
        break;
    }
    case 340623:
    {
        returnValue = F("Wonsamstr.");
        break;
    }
    case 340624:
    {
        returnValue = F("Wonsheimer Str.");
        break;
    }
    case 340625:
    {
        returnValue = F("Wonsteige");
        break;
    }
    case 340626:
    {
        returnValue = F("Woodbachweg");
        break;
    }
    case 340627:
    {
        returnValue = F("Woodcock Hill");
        break;
    }
    case 340628:
    {
        returnValue = F("Wooganlage");
        break;
    }
    case 340629:
    {
        returnValue = F("Wooggasse");
        break;
    }
    case 340630:
    {
        returnValue = F("Woogmorgen");
        break;
    }
    case 340631:
    {
        returnValue = F("Woogsdammweg");
        break;
    }
    case 340632:
    {
        returnValue = F("Woogseestr.");
        break;
    }
    case 340633:
    {
        returnValue = F("Woogsstr.");
        break;
    }
    case 340634:
    {
        returnValue = F("Woogstr.");
        break;
    }
    case 340635:
    {
        returnValue = F("Woogtal");
        break;
    }
    case 340636:
    {
        returnValue = F("Woogtalstr.");
        break;
    }
    case 340637:
    {
        returnValue = F("Woogweg");
        break;
    }
    case 340638:
    {
        returnValue = F("Woolnougthstr.");
        break;
    }
    case 340639:
    {
        returnValue = F("Woord");
        break;
    }
    case 340640:
    {
        returnValue = F("Woordstr.");
        break;
    }
    case 340641:
    {
        returnValue = F("Woorke");
        break;
    }
    case 340642:
    {
        returnValue = F("Woort");
        break;
    }
    case 340643:
    {
        returnValue = F("Woorte");
        break;
    }
    case 340644:
    {
        returnValue = F("Woorteweg");
        break;
    }
    case 340645:
    {
        returnValue = F("Woorth");
        break;
    }
    case 340646:
    {
        returnValue = F("Woorthstr.");
        break;
    }
    case 340647:
    {
        returnValue = F("Woorthweg");
        break;
    }
    case 340648:
    {
        returnValue = F("Woortstr.");
        break;
    }
    case 340649:
    {
        returnValue = F("Woosmerhof");
        break;
    }
    case 340650:
    {
        returnValue = F("Woostener Str.");
        break;
    }
    case 340651:
    {
        returnValue = F("Woot");
        break;
    }
    case 340652:
    {
        returnValue = F("Wootzenweg");
        break;
    }
    case 340653:
    {
        returnValue = F("Woperstr.");
        break;
    }
    case 340654:
    {
        returnValue = F("Wopfnerstr.");
        break;
    }
    case 340655:
    {
        returnValue = F("Woppenkamper Höhe");
        break;
    }
    case 340656:
    {
        returnValue = F("Woppenkamper Str.");
        break;
    }
    case 340657:
    {
        returnValue = F("Woppenrieth");
        break;
    }
    case 340658:
    {
        returnValue = F("Woquarder Reihe");
        break;
    }
    case 340659:
    {
        returnValue = F("Woquarder Ring");
        break;
    }
    case 340660:
    {
        returnValue = F("Woradgasse");
        break;
    }
    case 340661:
    {
        returnValue = F("Worbelhag");
        break;
    }
    case 340662:
    {
        returnValue = F("Worbiser Str.");
        break;
    }
    case 340663:
    {
        returnValue = F("Worbiser Weg");
        break;
    }
    case 340664:
    {
        returnValue = F("Worblingen Aachbrücke");
        break;
    }
    case 340665:
    {
        returnValue = F("Worblinger Str.");
        break;
    }
    case 340666:
    {
        returnValue = F("Worcester Str.");
        break;
    }
    case 340667:
    {
        returnValue = F("Word");
        break;
    }
    case 340668:
    {
        returnValue = F("Wordenbecker Weg");
        break;
    }
    case 340669:
    {
        returnValue = F("Wordgarten");
        break;
    }
    case 340670:
    {
        returnValue = F("Wordgasse");
        break;
    }
    case 340671:
    {
        returnValue = F("Worgberg");
        break;
    }
    case 340672:
    {
        returnValue = F("Woriner Str.");
        break;
    }
    case 340673:
    {
        returnValue = F("Woriner Weg");
        break;
    }
    case 340674:
    {
        returnValue = F("Woringer Str.");
        break;
    }
    case 340675:
    {
        returnValue = F("Woringer Weg");
        break;
    }
    case 340676:
    {
        returnValue = F("Worm");
        break;
    }
    case 340677:
    {
        returnValue = F("Wormatiastr.");
        break;
    }
    case 340678:
    {
        returnValue = F("Wormbacher Str.");
        break;
    }
    case 340679:
    {
        returnValue = F("Wormelner Str.");
        break;
    }
    case 340680:
    {
        returnValue = F("Wormelner Twete");
        break;
    }
    case 340681:
    {
        returnValue = F("Wormersdorfer Str.");
        break;
    }
    case 340682:
    {
        returnValue = F("Wormgermühle");
        break;
    }
    case 340683:
    {
        returnValue = F("Wormketal");
        break;
    }
    case 340684:
    {
        returnValue = F("Wormlager Str.");
        break;
    }
    case 340685:
    {
        returnValue = F("Wormlandstr.");
        break;
    }
    case 340686:
    {
        returnValue = F("Wormoever");
        break;
    }
    case 340687:
    {
        returnValue = F("Wormsbergweg");
        break;
    }
    case 340688:
    {
        returnValue = F("Wormscheid");
        break;
    }
    case 340689:
    {
        returnValue = F("Wormsdorfer Str.");
        break;
    }
    case 340690:
    {
        returnValue = F("Wormser Gasse");
        break;
    }
    case 340691:
    {
        returnValue = F("Wormser Gässchen");
        break;
    }
    case 340692:
    {
        returnValue = F("Wormser Landstr.");
        break;
    }
    case 340693:
    {
        returnValue = F("Wormser Lanstr.");
        break;
    }
    case 340694:
    {
        returnValue = F("Wormser Str.");
        break;
    }
    case 340695:
    {
        returnValue = F("Wormser Weg");
        break;
    }
    case 340696:
    {
        returnValue = F("Wormshöft");
        break;
    }
    case 340697:
    {
        returnValue = F("Wormstedter Str.");
        break;
    }
    case 340698:
    {
        returnValue = F("Wormsweg");
        break;
    }
    case 340699:
    {
        returnValue = F("Worndorfer Str.");
        break;
    }
    case 340700:
    {
        returnValue = F("Wornstorf");
        break;
    }
    case 340701:
    {
        returnValue = F("Worphauser Landstr.");
        break;
    }
    case 340702:
    {
        returnValue = F("Worpheimer Str.");
        break;
    }
    case 340703:
    {
        returnValue = F("Worpsweder Str.");
        break;
    }
    case 340704:
    {
        returnValue = F("Worringer Landstr.");
        break;
    }
    case 340705:
    {
        returnValue = F("Worringer Str.");
        break;
    }
    case 340706:
    {
        returnValue = F("Worringer Weg");
        break;
    }
    case 340707:
    {
        returnValue = F("Wortelstetter Str.");
        break;
    }
    case 340708:
    {
        returnValue = F("Worth");
        break;
    }
    case 340709:
    {
        returnValue = F("Worth Höfe");
        break;
    }
    case 340710:
    {
        returnValue = F("Worthbarg");
        break;
    }
    case 340711:
    {
        returnValue = F("Worthe");
        break;
    }
    case 340712:
    {
        returnValue = F("Worthen");
        break;
    }
    case 340713:
    {
        returnValue = F("Worther Str.");
        break;
    }
    case 340714:
    {
        returnValue = F("Worther Twiete");
        break;
    }
    case 340715:
    {
        returnValue = F("Worther Weg");
        break;
    }
    case 340716:
    {
        returnValue = F("Wortheweg");
        break;
    }
    case 340717:
    {
        returnValue = F("Worthgarten");
        break;
    }
    case 340718:
    {
        returnValue = F("Worthingtonstr.");
        break;
    }
    case 340719:
    {
        returnValue = F("Worthkoppel");
        break;
    }
    case 340720:
    {
        returnValue = F("Worthnocken");
        break;
    }
    case 340721:
    {
        returnValue = F("Worthstr.");
        break;
    }
    case 340722:
    {
        returnValue = F("Worthweg");
        break;
    }
    case 340723:
    {
        returnValue = F("Wortkamp");
        break;
    }
    case 340724:
    {
        returnValue = F("Wortlandstr.");
        break;
    }
    case 340725:
    {
        returnValue = F("Wortmannstr.");
        break;
    }
    case 340726:
    {
        returnValue = F("Wortstr.");
        break;
    }
    case 340727:
    {
        returnValue = F("Wortwinstr.");
        break;
    }
    case 340728:
    {
        returnValue = F("Woserow");
        break;
    }
    case 340729:
    {
        returnValue = F("Wossidlostr.");
        break;
    }
    case 340730:
    {
        returnValue = F("Wostevitz");
        break;
    }
    case 340731:
    {
        returnValue = F("Wostokweg");
        break;
    }
    case 340732:
    {
        returnValue = F("Wotangang");
        break;
    }
    case 340733:
    {
        returnValue = F("Wotansblick");
        break;
    }
    case 340734:
    {
        returnValue = F("Wotanskamp");
        break;
    }
    case 340735:
    {
        returnValue = F("Wotanstr.");
        break;
    }
    case 340736:
    {
        returnValue = F("Wotanweg");
        break;
    }
    case 340737:
    {
        returnValue = F("Wotenick");
        break;
    }
    case 340738:
    {
        returnValue = F("Wotersener Weg");
        break;
    }
    case 340739:
    {
        returnValue = F("Wotzmannsreut");
        break;
    }
    case 340740:
    {
        returnValue = F("Woutersfeld");
        break;
    }
    case 340741:
    {
        returnValue = F("Woxdorfer Weg");
        break;
    }
    case 340742:
    {
        returnValue = F("Woyblick");
        break;
    }
    case 340743:
    {
        returnValue = F("Woydts-Lüttje-Padd");
        break;
    }
    case 340744:
    {
        returnValue = F("Wozetener Weg");
        break;
    }
    case 340745:
    {
        returnValue = F("Wozinkler Weg");
        break;
    }
    case 340746:
    {
        returnValue = F("Wraagaard");
        break;
    }
    case 340747:
    {
        returnValue = F("Wrack");
        break;
    }
    case 340748:
    {
        returnValue = F("Wrakelbergweg");
        break;
    }
    case 340749:
    {
        returnValue = F("Wrampenfeld");
        break;
    }
    case 340750:
    {
        returnValue = F("Wrampestr.");
        break;
    }
    case 340751:
    {
        returnValue = F("Wrangelpromenade");
        break;
    }
    case 340752:
    {
        returnValue = F("Wrangelsburger Weg");
        break;
    }
    case 340753:
    {
        returnValue = F("Wrangelstr.");
        break;
    }
    case 340754:
    {
        returnValue = F("Wrantepott");
        break;
    }
    case 340755:
    {
        returnValue = F("Wrechener Str.");
        break;
    }
    case 340756:
    {
        returnValue = F("Wredenhagener Str.");
        break;
    }
    case 340757:
    {
        returnValue = F("Wredestr.");
        break;
    }
    case 340758:
    {
        returnValue = F("Wredowplatz");
        break;
    }
    case 340759:
    {
        returnValue = F("Wredowstr.");
        break;
    }
    case 340760:
    {
        returnValue = F("Wreedenschlag");
        break;
    }
    case 340761:
    {
        returnValue = F("Wremer Specken");
        break;
    }
    case 340762:
    {
        returnValue = F("Wremer Str.");
        break;
    }
    case 340763:
    {
        returnValue = F("Wremer Tief Nordstrand");
        break;
    }
    case 340764:
    {
        returnValue = F("Wreschener Allee");
        break;
    }
    case 340765:
    {
        returnValue = F("Wrestedter Str.");
        break;
    }
    case 340766:
    {
        returnValue = F("Wrexener Str.");
        break;
    }
    case 340767:
    {
        returnValue = F("Wriedeler Str.");
        break;
    }
    case 340768:
    {
        returnValue = F("Wriedsal");
        break;
    }
    case 340769:
    {
        returnValue = F("Wriedstücke");
        break;
    }
    case 340770:
    {
        returnValue = F("Wriethen");
        break;
    }
    case 340771:
    {
        returnValue = F("Wriethstr.");
        break;
    }
    case 340772:
    {
        returnValue = F("Wrietreith");
        break;
    }
    case 340773:
    {
        returnValue = F("Wriezener Str.");
        break;
    }
    case 340774:
    {
        returnValue = F("Wrisbergweg");
        break;
    }
    case 340775:
    {
        returnValue = F("Wrister Str.");
        break;
    }
    case 340776:
    {
        returnValue = F("Wrodow");
        break;
    }
    case 340777:
    {
        returnValue = F("Wrom");
        break;
    }
    case 340778:
    {
        returnValue = F("Wrtschaftsweg");
        break;
    }
    case 340779:
    {
        returnValue = F("Wrömmelsberg");
        break;
    }
    case 340780:
    {
        returnValue = F("Wublitzbrücke");
        break;
    }
    case 340781:
    {
        returnValue = F("Wuchers Gäßle");
        break;
    }
    case 340782:
    {
        returnValue = F("Wuckenweg");
        break;
    }
    case 340783:
    {
        returnValue = F("Wucker");
        break;
    }
    case 340784:
    {
        returnValue = F("Wuckestr.");
        break;
    }
    case 340785:
    {
        returnValue = F("Wuddelstraat");
        break;
    }
    case 340786:
    {
        returnValue = F("Wudicker Bahnhofstr.");
        break;
    }
    case 340787:
    {
        returnValue = F("Wudicker Waldweg");
        break;
    }
    case 340788:
    {
        returnValue = F("Wugg-Retzer-Str.");
        break;
    }
    case 340789:
    {
        returnValue = F("Wuhden");
        break;
    }
    case 340790:
    {
        returnValue = F("Wuhdener Weg");
        break;
    }
    case 340791:
    {
        returnValue = F("Wuhle-Park");
        break;
    }
    case 340792:
    {
        returnValue = F("Wuhlenburg");
        break;
    }
    case 340793:
    {
        returnValue = F("Wuhlerweg");
        break;
    }
    case 340794:
    {
        returnValue = F("Wuhlesteg");
        break;
    }
    case 340795:
    {
        returnValue = F("Wuhleweg");
        break;
    }
    case 340796:
    {
        returnValue = F("Wuhlgartenstr.");
        break;
    }
    case 340797:
    {
        returnValue = F("Wuhlgraben");
        break;
    }
    case 340798:
    {
        returnValue = F("Wuhlhorst");
        break;
    }
    case 340799:
    {
        returnValue = F("Wuhlhorster Str.");
        break;
    }
    case 340800:
    {
        returnValue = F("Wuhlsgasse");
        break;
    }
    case 340801:
    {
        returnValue = F("Wuhneweg");
        break;
    }
    case 340802:
    {
        returnValue = F("Wuhnitzer Str.");
        break;
    }
    case 340803:
    {
        returnValue = F("Wuhr");
        break;
    }
    case 340804:
    {
        returnValue = F("Wuhrbichl");
        break;
    }
    case 340805:
    {
        returnValue = F("Wuhrhalden");
        break;
    }
    case 340806:
    {
        returnValue = F("Wuhrleite");
        break;
    }
    case 340807:
    {
        returnValue = F("Wuhrmatten");
        break;
    }
    case 340808:
    {
        returnValue = F("Wuhrowstr.");
        break;
    }
    case 340809:
    {
        returnValue = F("Wuhrstein");
        break;
    }
    case 340810:
    {
        returnValue = F("Wuhrstr.");
        break;
    }
    case 340811:
    {
        returnValue = F("Wuhrt");
        break;
    }
    case 340812:
    {
        returnValue = F("Wuhrt Ruhm");
        break;
    }
    case 340813:
    {
        returnValue = F("Wuhrweg");
        break;
    }
    case 340814:
    {
        returnValue = F("Wuhsen");
        break;
    }
    case 340815:
    {
        returnValue = F("Wuischgasse");
        break;
    }
    case 340816:
    {
        returnValue = F("Wulberg");
        break;
    }
    case 340817:
    {
        returnValue = F("Wulbern");
        break;
    }
    case 340818:
    {
        returnValue = F("Wulbrandsweg");
        break;
    }
    case 340819:
    {
        returnValue = F("Wuldegapstr.");
        break;
    }
    case 340820:
    {
        returnValue = F("Wulderheideweg");
        break;
    }
    case 340821:
    {
        returnValue = F("Wuldeschlucht");
        break;
    }
    case 340822:
    {
        returnValue = F("Wuldeweg");
        break;
    }
    case 340823:
    {
        returnValue = F("Wulersweg");
        break;
    }
    case 340824:
    {
        returnValue = F("Wulf-Isebrand-Siedlung");
        break;
    }
    case 340825:
    {
        returnValue = F("Wulf-Isebrand-Str.");
        break;
    }
    case 340826:
    {
        returnValue = F("Wulf-Werum-Str.");
        break;
    }
    case 340827:
    {
        returnValue = F("Wulfbrede");
        break;
    }
    case 340828:
    {
        returnValue = F("Wulfeistr.");
        break;
    }
    case 340829:
    {
        returnValue = F("Wulfelader Str.");
        break;
    }
    case 340830:
    {
        returnValue = F("Wulfenauer Damm");
        break;
    }
    case 340831:
    {
        returnValue = F("Wulfenauer Mark");
        break;
    }
    case 340832:
    {
        returnValue = F("Wulfenbüller Weg");
        break;
    }
    case 340833:
    {
        returnValue = F("Wulfener Hals Weg");
        break;
    }
    case 340834:
    {
        returnValue = F("Wulfener Landstr.");
        break;
    }
    case 340835:
    {
        returnValue = F("Wulfener Landweg");
        break;
    }
    case 340836:
    {
        returnValue = F("Wulfener Markt");
        break;
    }
    case 340837:
    {
        returnValue = F("Wulfener Str.");
        break;
    }
    case 340838:
    {
        returnValue = F("Wulfener Weg");
        break;
    }
    case 340839:
    {
        returnValue = F("Wulfenhusen");
        break;
    }
    case 340840:
    {
        returnValue = F("Wulfentange");
        break;
    }
    case 340841:
    {
        returnValue = F("Wulfenweg");
        break;
    }
    case 340842:
    {
        returnValue = F("Wulferdingsener Str.");
        break;
    }
    case 340843:
    {
        returnValue = F("Wulferhook");
        break;
    }
    case 340844:
    {
        returnValue = F("Wulferhooksweg");
        break;
    }
    case 340845:
    {
        returnValue = F("Wulferichstr.");
        break;
    }
    case 340846:
    {
        returnValue = F("Wulferings Damm");
        break;
    }
    case 340847:
    {
        returnValue = F("Wulferkamp");
        break;
    }
    case 340848:
    {
        returnValue = F("Wulferschlaa");
        break;
    }
    case 340849:
    {
        returnValue = F("Wulfersdorf");
        break;
    }
    case 340850:
    {
        returnValue = F("Wulfersdorfer Str.");
        break;
    }
    case 340851:
    {
        returnValue = F("Wulfersdorfer Weg");
        break;
    }
    case 340852:
    {
        returnValue = F("Wulfersteig");
        break;
    }
    case 340853:
    {
        returnValue = F("Wulfertshauser Str.");
        break;
    }
    case 340854:
    {
        returnValue = F("Wulfertstr.");
        break;
    }
    case 340855:
    {
        returnValue = F("Wulfertweg");
        break;
    }
    case 340856:
    {
        returnValue = F("Wulfes Hop");
        break;
    }
    case 340857:
    {
        returnValue = F("Wulfesberg");
        break;
    }
    case 340858:
    {
        returnValue = F("Wulfeskuhle");
        break;
    }
    case 340859:
    {
        returnValue = F("Wulfesmühle");
        break;
    }
    case 340860:
    {
        returnValue = F("Wulfesweide");
        break;
    }
    case 340861:
    {
        returnValue = F("Wulfetannen");
        break;
    }
    case 340862:
    {
        returnValue = F("Wulff'sche Kehre");
        break;
    }
    case 340863:
    {
        returnValue = F("Wulffenstr.");
        break;
    }
    case 340864:
    {
        returnValue = F("Wulffhagenstr.");
        break;
    }
    case 340865:
    {
        returnValue = F("Wulfhagen");
        break;
    }
    case 340866:
    {
        returnValue = F("Wulfhooper Heide");
        break;
    }
    case 340867:
    {
        returnValue = F("Wulfhop");
        break;
    }
    case 340868:
    {
        returnValue = F("Wulfhorn");
        break;
    }
    case 340869:
    {
        returnValue = F("Wulfhorster Str.");
        break;
    }
    case 340870:
    {
        returnValue = F("Wulfhorststr.");
        break;
    }
    case 340871:
    {
        returnValue = F("Wulfhörnsweg");
        break;
    }
    case 340872:
    {
        returnValue = F("Wulfing");
        break;
    }
    case 340873:
    {
        returnValue = F("Wulfingstr.");
        break;
    }
    case 340874:
    {
        returnValue = F("Wulfkampsweg");
        break;
    }
    case 340875:
    {
        returnValue = F("Wulflamufer");
        break;
    }
    case 340876:
    {
        returnValue = F("Wulfringser Berg");
        break;
    }
    case 340877:
    {
        returnValue = F("Wulfringser Weg");
        break;
    }
    case 340878:
    {
        returnValue = F("Wulfsacker");
        break;
    }
    case 340879:
    {
        returnValue = F("Wulfsburg");
        break;
    }
    case 340880:
    {
        returnValue = F("Wulfsdieker-Damm");
        break;
    }
    case 340881:
    {
        returnValue = F("Wulfsdorfer Weg");
        break;
    }
    case 340882:
    {
        returnValue = F("Wulfsdünen");
        break;
    }
    case 340883:
    {
        returnValue = F("Wulfsener Mühlenweg");
        break;
    }
    case 340884:
    {
        returnValue = F("Wulfshagen");
        break;
    }
    case 340885:
    {
        returnValue = F("Wulfsholz");
        break;
    }
    case 340886:
    {
        returnValue = F("Wulfshäger Str.");
        break;
    }
    case 340887:
    {
        returnValue = F("Wulfshäger Weg");
        break;
    }
    case 340888:
    {
        returnValue = F("Wulfskammer");
        break;
    }
    case 340889:
    {
        returnValue = F("Wulfskamp");
        break;
    }
    case 340890:
    {
        returnValue = F("Wulfskotten");
        break;
    }
    case 340891:
    {
        returnValue = F("Wulfskuhl");
        break;
    }
    case 340892:
    {
        returnValue = F("Wulfsloh");
        break;
    }
    case 340893:
    {
        returnValue = F("Wulfsmoor");
        break;
    }
    case 340894:
    {
        returnValue = F("Wulfsmühlenweg");
        break;
    }
    case 340895:
    {
        returnValue = F("Wulfsoder Str.");
        break;
    }
    case 340896:
    {
        returnValue = F("Wulfsoder Weg");
        break;
    }
    case 340897:
    {
        returnValue = F("Wulfstal");
        break;
    }
    case 340898:
    {
        returnValue = F("Wulfsteert");
        break;
    }
    case 340899:
    {
        returnValue = F("Wulfstorfer Str.");
        break;
    }
    case 340900:
    {
        returnValue = F("Wulfstorfer Weg");
        break;
    }
    case 340901:
    {
        returnValue = F("Wulfstr.");
        break;
    }
    case 340902:
    {
        returnValue = F("Wulfswarfe");
        break;
    }
    case 340903:
    {
        returnValue = F("Wulfsweg");
        break;
    }
    case 340904:
    {
        returnValue = F("Wulftener Str.");
        break;
    }
    case 340905:
    {
        returnValue = F("Wulkauer Dorfstr.");
        break;
    }
    case 340906:
    {
        returnValue = F("Wulkenziner Str.");
        break;
    }
    case 340907:
    {
        returnValue = F("Wulkersdorfer Str.");
        break;
    }
    case 340908:
    {
        returnValue = F("Wulkops Weg");
        break;
    }
    case 340909:
    {
        returnValue = F("Wulkower Chaussee");
        break;
    }
    case 340910:
    {
        returnValue = F("Wulkower Dorfstr.");
        break;
    }
    case 340911:
    {
        returnValue = F("Wulkower Str.");
        break;
    }
    case 340912:
    {
        returnValue = F("Wulkower Weg");
        break;
    }
    case 340913:
    {
        returnValue = F("Wulkowstr.");
        break;
    }
    case 340914:
    {
        returnValue = F("Wulksfelder Damm");
        break;
    }
    case 340915:
    {
        returnValue = F("Wulksfelder Dorfstr.");
        break;
    }
    case 340916:
    {
        returnValue = F("Wullaweg");
        break;
    }
    case 340917:
    {
        returnValue = F("Wullbeck");
        break;
    }
    case 340918:
    {
        returnValue = F("Wullbrey");
        break;
    }
    case 340919:
    {
        returnValue = F("Wullbrink");
        break;
    }
    case 340920:
    {
        returnValue = F("Wulleberg");
        break;
    }
    case 340921:
    {
        returnValue = F("Wullenbergsweg");
        break;
    }
    case 340922:
    {
        returnValue = F("Wullenbrinkstr.");
        break;
    }
    case 340923:
    {
        returnValue = F("Wullendorfer Str.");
        break;
    }
    case 340924:
    {
        returnValue = F("Wullenstetter Str.");
        break;
    }
    case 340925:
    {
        returnValue = F("Wullenweberstr.");
        break;
    }
    case 340926:
    {
        returnValue = F("Wullesee");
        break;
    }
    case 340927:
    {
        returnValue = F("Wullestr.");
        break;
    }
    case 340928:
    {
        returnValue = F("Wullgrasweg");
        break;
    }
    case 340929:
    {
        returnValue = F("Wullhop");
        break;
    }
    case 340930:
    {
        returnValue = F("Wullingerweg");
        break;
    }
    case 340931:
    {
        returnValue = F("Wullmoor");
        break;
    }
    case 340932:
    {
        returnValue = F("Wullwinkel");
        break;
    }
    case 340933:
    {
        returnValue = F("Wulmenau");
        break;
    }
    case 340934:
    {
        returnValue = F("Wulmer Hauptstr.");
        break;
    }
    case 340935:
    {
        returnValue = F("Wulmer Str.");
        break;
    }
    case 340936:
    {
        returnValue = F("Wulmstorfer Moor");
        break;
    }
    case 340937:
    {
        returnValue = F("Wulmstorfer Str.");
        break;
    }
    case 340938:
    {
        returnValue = F("Wulmstorfer Wiesen");
        break;
    }
    case 340939:
    {
        returnValue = F("Wulsbütteler Str.");
        break;
    }
    case 340940:
    {
        returnValue = F("Wulschener Str.");
        break;
    }
    case 340941:
    {
        returnValue = F("Wulsdorfer Str.");
        break;
    }
    case 340942:
    {
        returnValue = F("Wulsenberg");
        break;
    }
    case 340943:
    {
        returnValue = F("Wulsgraben");
        break;
    }
    case 340944:
    {
        returnValue = F("Wulsterner Str.");
        break;
    }
    case 340945:
    {
        returnValue = F("Wulststr.");
        break;
    }
    case 340946:
    {
        returnValue = F("Wulverlage");
        break;
    }
    case 340947:
    {
        returnValue = F("Wulverlohweg");
        break;
    }
    case 340948:
    {
        returnValue = F("Wulverschlade");
        break;
    }
    case 340949:
    {
        returnValue = F("Wulweg");
        break;
    }
    case 340950:
    {
        returnValue = F("Wulwesecke");
        break;
    }
    case 340951:
    {
        returnValue = F("Wulweseike");
        break;
    }
    case 340952:
    {
        returnValue = F("Wulwesweg");
        break;
    }
    case 340953:
    {
        returnValue = F("Wulzenberg");
        break;
    }
    case 340954:
    {
        returnValue = F("Wulzenbergstr.");
        break;
    }
    case 340955:
    {
        returnValue = F("Wulzenweg");
        break;
    }
    case 340956:
    {
        returnValue = F("Wulzer Str.");
        break;
    }
    case 340957:
    {
        returnValue = F("Wulzweg");
        break;
    }
    case 340958:
    {
        returnValue = F("Wunaustr.");
        break;
    }
    case 340959:
    {
        returnValue = F("Wunderberger Weg");
        break;
    }
    case 340960:
    {
        returnValue = F("Wunderburg");
        break;
    }
    case 340961:
    {
        returnValue = F("Wunderbütteler Kirchweg");
        break;
    }
    case 340962:
    {
        returnValue = F("Wundergasse");
        break;
    }
    case 340963:
    {
        returnValue = F("Wunderknabenweg");
        break;
    }
    case 340964:
    {
        returnValue = F("Wunderlehofweg");
        break;
    }
    case 340965:
    {
        returnValue = F("Wunderlesestr.");
        break;
    }
    case 340966:
    {
        returnValue = F("Wunderlestr.");
        break;
    }
    case 340967:
    {
        returnValue = F("Wundermühlweg");
        break;
    }
    case 340968:
    {
        returnValue = F("Wunderschneise");
        break;
    }
    case 340969:
    {
        returnValue = F("Wundersgutstr.");
        break;
    }
    case 340970:
    {
        returnValue = F("Wunderthauser Str.");
        break;
    }
    case 340971:
    {
        returnValue = F("Wunderwaldstr.");
        break;
    }
    case 340972:
    {
        returnValue = F("Wunderweg");
        break;
    }
    case 340973:
    {
        returnValue = F("Wunderwelt Wasser");
        break;
    }
    case 340974:
    {
        returnValue = F("Wundramstr.");
        break;
    }
    case 340975:
    {
        returnValue = F("Wundramweg");
        break;
    }
    case 340976:
    {
        returnValue = F("Wundtstr.");
        break;
    }
    case 340977:
    {
        returnValue = F("Wung");
        break;
    }
    case 340978:
    {
        returnValue = F("Wunibaldstr.");
        break;
    }
    case 340979:
    {
        returnValue = F("Wunneleite");
        break;
    }
    case 340980:
    {
        returnValue = F("Wunnensteinstr.");
        break;
    }
    case 340981:
    {
        returnValue = F("Wunnensteinweg");
        break;
    }
    case 340982:
    {
        returnValue = F("Wunneweg");
        break;
    }
    case 340983:
    {
        returnValue = F("Wunneyweg");
        break;
    }
    case 340984:
    {
        returnValue = F("Wunramstr.");
        break;
    }
    case 340985:
    {
        returnValue = F("Wunschenberg");
        break;
    }
    case 340986:
    {
        returnValue = F("Wunschwitz");
        break;
    }
    case 340987:
    {
        returnValue = F("Wunsiedeler Str.");
        break;
    }
    case 340988:
    {
        returnValue = F("Wunsiedler Steig");
        break;
    }
    case 340989:
    {
        returnValue = F("Wunsiedler Str.");
        break;
    }
    case 340990:
    {
        returnValue = F("Wunstorfer Damm");
        break;
    }
    case 340991:
    {
        returnValue = F("Wunstorfer Str.");
        break;
    }
    case 340992:
    {
        returnValue = F("Wunstorfer Weg");
        break;
    }
    case 340993:
    {
        returnValue = F("Wuord");
        break;
    }
    case 340994:
    {
        returnValue = F("Wuppenweg");
        break;
    }
    case 340995:
    {
        returnValue = F("Wuppermannshof");
        break;
    }
    case 340996:
    {
        returnValue = F("Wuppermannstr.");
        break;
    }
    case 340997:
    {
        returnValue = F("Wupperstr.");
        break;
    }
    case 340998:
    {
        returnValue = F("Wuppertaler Str.");
        break;
    }
    case 340999:
    {
        returnValue = F("Wuppertalstr.");
        break;
    }
    case 341000:
    {
        returnValue = F("Wupperweg");
        break;
    }
    case 341001:
    {
        returnValue = F("Wurbiser Str.");
        break;
    }
    case 341002:
    {
        returnValue = F("Wurgwitz Schule");
        break;
    }
    case 341003:
    {
        returnValue = F("Wurgwitzer Landstr.");
        break;
    }
    case 341004:
    {
        returnValue = F("Wurgwitzer Str.");
        break;
    }
    case 341005:
    {
        returnValue = F("Wurinstr.");
        break;
    }
    case 341006:
    {
        returnValue = F("Wurlitz");
        break;
    }
    case 341007:
    {
        returnValue = F("Wurlsteig");
        break;
    }
    case 341008:
    {
        returnValue = F("Wurlweg");
        break;
    }
    case 341009:
    {
        returnValue = F("Wurmansauer Str.");
        break;
    }
    case 341010:
    {
        returnValue = F("Wurmaue");
        break;
    }
    case 341011:
    {
        returnValue = F("Wurmbachstr.");
        break;
    }
    case 341012:
    {
        returnValue = F("Wurmbachtal");
        break;
    }
    case 341013:
    {
        returnValue = F("Wurmbenden");
        break;
    }
    case 341014:
    {
        returnValue = F("Wurmberg");
        break;
    }
    case 341015:
    {
        returnValue = F("Wurmberger Str.");
        break;
    }
    case 341016:
    {
        returnValue = F("Wurmbergstr.");
        break;
    }
    case 341017:
    {
        returnValue = F("Wurmbergweg");
        break;
    }
    case 341018:
    {
        returnValue = F("Wurmeck");
        break;
    }
    case 341019:
    {
        returnValue = F("Wurmer Weg");
        break;
    }
    case 341020:
    {
        returnValue = F("Wurmerich");
        break;
    }
    case 341021:
    {
        returnValue = F("Wurmfeld");
        break;
    }
    case 341022:
    {
        returnValue = F("Wurmflakstr.");
        break;
    }
    case 341023:
    {
        returnValue = F("Wurmgang");
        break;
    }
    case 341024:
    {
        returnValue = F("Wurmgäßchen");
        break;
    }
    case 341025:
    {
        returnValue = F("Wurmkamp");
        break;
    }
    case 341026:
    {
        returnValue = F("Wurmker Weg");
        break;
    }
    case 341027:
    {
        returnValue = F("Wurmlinger Str.");
        break;
    }
    case 341028:
    {
        returnValue = F("Wurms Bichl");
        break;
    }
    case 341029:
    {
        returnValue = F("Wurmshamer Str.");
        break;
    }
    case 341030:
    {
        returnValue = F("Wurmstallweg");
        break;
    }
    case 341031:
    {
        returnValue = F("Wurmsteige");
        break;
    }
    case 341032:
    {
        returnValue = F("Wurmsteinweg");
        break;
    }
    case 341033:
    {
        returnValue = F("Wurmstr.");
        break;
    }
    case 341034:
    {
        returnValue = F("Wurmtalbrücke");
        break;
    }
    case 341035:
    {
        returnValue = F("Wurmtalstr.");
        break;
    }
    case 341036:
    {
        returnValue = F("Wurper Str.");
        break;
    }
    case 341037:
    {
        returnValue = F("Wurper Weg");
        break;
    }
    case 341038:
    {
        returnValue = F("Wurpweg");
        break;
    }
    case 341039:
    {
        returnValue = F("Wurstbauerweg");
        break;
    }
    case 341040:
    {
        returnValue = F("Wurstberg");
        break;
    }
    case 341041:
    {
        returnValue = F("Wurstbergkopfweg");
        break;
    }
    case 341042:
    {
        returnValue = F("Wurstekessel");
        break;
    }
    case 341043:
    {
        returnValue = F("Wurster Landstr.");
        break;
    }
    case 341044:
    {
        returnValue = F("Wurster Moorweg");
        break;
    }
    case 341045:
    {
        returnValue = F("Wurster Str.");
        break;
    }
    case 341046:
    {
        returnValue = F("Wurster Weg");
        break;
    }
    case 341047:
    {
        returnValue = F("Wurster-von-Kreuzberg-Str.");
        break;
    }
    case 341048:
    {
        returnValue = F("Wursterweg");
        break;
    }
    case 341049:
    {
        returnValue = F("Wurstgässchen");
        break;
    }
    case 341050:
    {
        returnValue = F("Wursthof");
        break;
    }
    case 341051:
    {
        returnValue = F("Wurstsalatbrücke");
        break;
    }
    case 341052:
    {
        returnValue = F("Wurt");
        break;
    }
    case 341053:
    {
        returnValue = F("Wurteckstr.");
        break;
    }
    case 341054:
    {
        returnValue = F("Wurtelbursweg");
        break;
    }
    case 341055:
    {
        returnValue = F("Wurtestr.");
        break;
    }
    case 341056:
    {
        returnValue = F("Wurth");
        break;
    }
    case 341057:
    {
        returnValue = F("Wurthdamm");
        break;
    }
    case 341058:
    {
        returnValue = F("Wurthflether Kirchweg");
        break;
    }
    case 341059:
    {
        returnValue = F("Wurthstr.");
        break;
    }
    case 341060:
    {
        returnValue = F("Wurthweg");
        break;
    }
    case 341061:
    {
        returnValue = F("Wurtkampstr.");
        break;
    }
    case 341062:
    {
        returnValue = F("Wurtleutetweute");
        break;
    }
    case 341063:
    {
        returnValue = F("Wurtscheid");
        break;
    }
    case 341064:
    {
        returnValue = F("Wurtsgraben");
        break;
    }
    case 341065:
    {
        returnValue = F("Wurtsteege");
        break;
    }
    case 341066:
    {
        returnValue = F("Wurtstr.");
        break;
    }
    case 341067:
    {
        returnValue = F("Wurtwinkel");
        break;
    }
    case 341068:
    {
        returnValue = F("Wurzacher Str.");
        break;
    }
    case 341069:
    {
        returnValue = F("Wurzachweg");
        break;
    }
    case 341070:
    {
        returnValue = F("Wurzbacher Str.");
        break;
    }
    case 341071:
    {
        returnValue = F("Wurzbachsteig");
        break;
    }
    case 341072:
    {
        returnValue = F("Wurzbachweg");
        break;
    }
    case 341073:
    {
        returnValue = F("Wurzbergstr.");
        break;
    }
    case 341074:
    {
        returnValue = F("Wurzelbachweg");
        break;
    }
    case 341075:
    {
        returnValue = F("Wurzelbahn");
        break;
    }
    case 341076:
    {
        returnValue = F("Wurzelberg");
        break;
    }
    case 341077:
    {
        returnValue = F("Wurzelbergstr.");
        break;
    }
    case 341078:
    {
        returnValue = F("Wurzelbergweg");
        break;
    }
    case 341079:
    {
        returnValue = F("Wurzelbruchpark");
        break;
    }
    case 341080:
    {
        returnValue = F("Wurzelbruchweg");
        break;
    }
    case 341081:
    {
        returnValue = F("Wurzelbrunnenstr.");
        break;
    }
    case 341082:
    {
        returnValue = F("Wurzelfurth");
        break;
    }
    case 341083:
    {
        returnValue = F("Wurzelförde");
        break;
    }
    case 341084:
    {
        returnValue = F("Wurzelgraben");
        break;
    }
    case 341085:
    {
        returnValue = F("Wurzelkamp");
        break;
    }
    case 341086:
    {
        returnValue = F("Wurzelredder");
        break;
    }
    case 341087:
    {
        returnValue = F("Wurzelrudis-Gipfelrunde");
        break;
    }
    case 341088:
    {
        returnValue = F("Wurzelsteg");
        break;
    }
    case 341089:
    {
        returnValue = F("Wurzelweg");
        break;
    }
    case 341090:
    {
        returnValue = F("Wurzener Landstr.");
        break;
    }
    case 341091:
    {
        returnValue = F("Wurzener Platz");
        break;
    }
    case 341092:
    {
        returnValue = F("Wurzener Str.");
        break;
    }
    case 341093:
    {
        returnValue = F("Wurzenweg");
        break;
    }
    case 341094:
    {
        returnValue = F("Wurzer Str.");
        break;
    }
    case 341095:
    {
        returnValue = F("Wurzerstr.");
        break;
    }
    case 341096:
    {
        returnValue = F("Wurzerweg");
        break;
    }
    case 341097:
    {
        returnValue = F("Wurzgartenkopfweg");
        break;
    }
    case 341098:
    {
        returnValue = F("Wurzgrund");
        break;
    }
    case 341099:
    {
        returnValue = F("Wurzner Str.");
        break;
    }
    case 341100:
    {
        returnValue = F("Wurzrainweg");
        break;
    }
    case 341101:
    {
        returnValue = F("Wurzweg");
        break;
    }
    case 341102:
    {
        returnValue = F("Wuschitzer Weg");
        break;
    }
    case 341103:
    {
        returnValue = F("Wuspenhof");
        break;
    }
    case 341104:
    {
        returnValue = F("Wusseken");
        break;
    }
    case 341105:
    {
        returnValue = F("Wusseldornstr.");
        break;
    }
    case 341106:
    {
        returnValue = F("Wussentin");
        break;
    }
    case 341107:
    {
        returnValue = F("Wussentiner Damm");
        break;
    }
    case 341108:
    {
        returnValue = F("Wustbach");
        break;
    }
    case 341109:
    {
        returnValue = F("Wustbacher Str.");
        break;
    }
    case 341110:
    {
        returnValue = F("Wustenrieter Weg");
        break;
    }
    case 341111:
    {
        returnValue = F("Wustentalstr.");
        break;
    }
    case 341112:
    {
        returnValue = F("Wuster Ring");
        break;
    }
    case 341113:
    {
        returnValue = F("Wuster Str.");
        break;
    }
    case 341114:
    {
        returnValue = F("Wusterauer Anger");
        break;
    }
    case 341115:
    {
        returnValue = F("Wusterhausener Str.");
        break;
    }
    case 341116:
    {
        returnValue = F("Wusterhusener Str.");
        break;
    }
    case 341117:
    {
        returnValue = F("Wustermarker Allee");
        break;
    }
    case 341118:
    {
        returnValue = F("Wustermarker Str.");
        break;
    }
    case 341119:
    {
        returnValue = F("Wusterwitzer Str.");
        break;
    }
    case 341120:
    {
        returnValue = F("Wustmanndörfel");
        break;
    }
    case 341121:
    {
        returnValue = F("Wustrewer Str.");
        break;
    }
    case 341122:
    {
        returnValue = F("Wustrewer Weg");
        break;
    }
    case 341123:
    {
        returnValue = F("Wustrickweg");
        break;
    }
    case 341124:
    {
        returnValue = F("Wustroweg");
        break;
    }
    case 341125:
    {
        returnValue = F("Wustrower Chaussee");
        break;
    }
    case 341126:
    {
        returnValue = F("Wustrower Str.");
        break;
    }
    case 341127:
    {
        returnValue = F("Wustrower Weg");
        break;
    }
    case 341128:
    {
        returnValue = F("Wustuben");
        break;
    }
    case 341129:
    {
        returnValue = F("Wustuben-Autengrün");
        break;
    }
    case 341130:
    {
        returnValue = F("Wustvieler Weg");
        break;
    }
    case 341131:
    {
        returnValue = F("Wutachblickstr.");
        break;
    }
    case 341132:
    {
        returnValue = F("Wutachmatte");
        break;
    }
    case 341133:
    {
        returnValue = F("Wutachmühle");
        break;
    }
    case 341134:
    {
        returnValue = F("Wutachrandweg");
        break;
    }
    case 341135:
    {
        returnValue = F("Wutachstr.");
        break;
    }
    case 341136:
    {
        returnValue = F("Wutachtalblick");
        break;
    }
    case 341137:
    {
        returnValue = F("Wutachweg");
        break;
    }
    case 341138:
    {
        returnValue = F("Wutgenaustr.");
        break;
    }
    case 341139:
    {
        returnValue = F("Wuthaer Weg");
        break;
    }
    case 341140:
    {
        returnValue = F("Wuthenaustr.");
        break;
    }
    case 341141:
    {
        returnValue = F("Wuthenow");
        break;
    }
    case 341142:
    {
        returnValue = F("Wuthenower Str.");
        break;
    }
    case 341143:
    {
        returnValue = F("Wuthenower Weg");
        break;
    }
    case 341144:
    {
        returnValue = F("Wutiker Str.");
        break;
    }
    case 341145:
    {
        returnValue = F("Wutiker Weg");
        break;
    }
    case 341146:
    {
        returnValue = F("Wuttigmühlstr.");
        break;
    }
    case 341147:
    {
        returnValue = F("Wutzelskühn");
        break;
    }
    case 341148:
    {
        returnValue = F("Wutzelskühner Str.");
        break;
    }
    case 341149:
    {
        returnValue = F("Wutzmühle");
        break;
    }
    case 341150:
    {
        returnValue = F("Wutzmühlstr.");
        break;
    }
    case 341151:
    {
        returnValue = F("Wutzow");
        break;
    }
    case 341152:
    {
        returnValue = F("Wutöschinger Str.");
        break;
    }
    case 341153:
    {
        returnValue = F("Wybbert");
        break;
    }
    case 341154:
    {
        returnValue = F("Wyckgasse");
        break;
    }
    case 341155:
    {
        returnValue = F("Wydenbrugkstr.");
        break;
    }
    case 341156:
    {
        returnValue = F("Wydhösselstr.");
        break;
    }
    case 341157:
    {
        returnValue = F("Wydratstr.");
        break;
    }
    case 341158:
    {
        returnValue = F("Wyfeld");
        break;
    }
    case 341159:
    {
        returnValue = F("Wygbertgang");
        break;
    }
    case 341160:
    {
        returnValue = F("Wyhler Str.");
        break;
    }
    case 341161:
    {
        returnValue = F("Wyhra-Wanderweg");
        break;
    }
    case 341162:
    {
        returnValue = F("Wyhraaue");
        break;
    }
    case 341163:
    {
        returnValue = F("Wyhraer Str.");
        break;
    }
    case 341164:
    {
        returnValue = F("Wyhraer Weg");
        break;
    }
    case 341165:
    {
        returnValue = F("Wyker Str.");
        break;
    }
    case 341166:
    {
        returnValue = F("Wyker Weg");
        break;
    }
    case 341167:
    {
        returnValue = F("Wykhoffweg");
        break;
    }
    case 341168:
    {
        returnValue = F("Wylackstr.");
        break;
    }
    case 341169:
    {
        returnValue = F("Wylerter Hauptstr.");
        break;
    }
    case 341170:
    {
        returnValue = F("Wylichstr.");
        break;
    }
    case 341171:
    {
        returnValue = F("Wylreweg");
        break;
    }
    case 341172:
    {
        returnValue = F("Wymarstr.");
        break;
    }
    case 341173:
    {
        returnValue = F("Wymeerster Hauptstr.");
        break;
    }
    case 341174:
    {
        returnValue = F("Wyneckenstr.");
        break;
    }
    case 341175:
    {
        returnValue = F("Wynham-Nord");
        break;
    }
    case 341176:
    {
        returnValue = F("Wynhamer Str.");
        break;
    }
    case 341177:
    {
        returnValue = F("Wynhamster Kolk");
        break;
    }
    case 341178:
    {
        returnValue = F("Wynrichstr.");
        break;
    }
    case 341179:
    {
        returnValue = F("Wyschgorodweg");
        break;
    }
    case 341180:
    {
        returnValue = F("Wyschitzer Str.");
        break;
    }
    case 341181:
    {
        returnValue = F("Wysuntweg");
        break;
    }
    case 341182:
    {
        returnValue = F("Wyttenbachstr.");
        break;
    }
    case 341183:
    {
        returnValue = F("Wächerstr.");
        break;
    }
    case 341184:
    {
        returnValue = F("Wächlingen");
        break;
    }
    case 341185:
    {
        returnValue = F("Wächtergang");
        break;
    }
    case 341186:
    {
        returnValue = F("Wächtergasse");
        break;
    }
    case 341187:
    {
        returnValue = F("Wächterhofstr.");
        break;
    }
    case 341188:
    {
        returnValue = F("Wächterhäuser Str.");
        break;
    }
    case 341189:
    {
        returnValue = F("Wächteringer Str.");
        break;
    }
    case 341190:
    {
        returnValue = F("Wächterkamp");
        break;
    }
    case 341191:
    {
        returnValue = F("Wächterplatz");
        break;
    }
    case 341192:
    {
        returnValue = F("Wächters Gang");
        break;
    }
    case 341193:
    {
        returnValue = F("Wächtersbacher Str.");
        break;
    }
    case 341194:
    {
        returnValue = F("Wächtersbacher Weg");
        break;
    }
    case 341195:
    {
        returnValue = F("Wächtersbergstr.");
        break;
    }
    case 341196:
    {
        returnValue = F("Wächterseeschneise");
        break;
    }
    case 341197:
    {
        returnValue = F("Wächtersgang");
        break;
    }
    case 341198:
    {
        returnValue = F("Wächtersgasse");
        break;
    }
    case 341199:
    {
        returnValue = F("Wächtersgraben");
        break;
    }
    case 341200:
    {
        returnValue = F("Wächterspfad");
        break;
    }
    case 341201:
    {
        returnValue = F("Wächterstaffel");
        break;
    }
    case 341202:
    {
        returnValue = F("Wächtersteg");
        break;
    }
    case 341203:
    {
        returnValue = F("Wächtersteig");
        break;
    }
    case 341204:
    {
        returnValue = F("Wächterstieg");
        break;
    }
    case 341205:
    {
        returnValue = F("Wächterstr.");
        break;
    }
    case 341206:
    {
        returnValue = F("Wächterweg");
        break;
    }
    case 341207:
    {
        returnValue = F("Wächtlerstr.");
        break;
    }
    case 341208:
    {
        returnValue = F("Wächweg");
        break;
    }
    case 341209:
    {
        returnValue = F("Wäckerlestr.");
        break;
    }
    case 341210:
    {
        returnValue = F("Wäckerleweg");
        break;
    }
    case 341211:
    {
        returnValue = F("Wägnergasse");
        break;
    }
    case 341212:
    {
        returnValue = F("Wägnergäßle");
        break;
    }
    case 341213:
    {
        returnValue = F("Wägnerstr.");
        break;
    }
    case 341214:
    {
        returnValue = F("Wähaus-Ehrling");
        break;
    }
    case 341215:
    {
        returnValue = F("Wählerhöfe");
        break;
    }
    case 341216:
    {
        returnValue = F("Wählhoop");
        break;
    }
    case 341217:
    {
        returnValue = F("Wählingstr.");
        break;
    }
    case 341218:
    {
        returnValue = F("Wählitzer Weg");
        break;
    }
    case 341219:
    {
        returnValue = F("Wähmannstr.");
        break;
    }
    case 341220:
    {
        returnValue = F("Wähnerstr.");
        break;
    }
    case 341221:
    {
        returnValue = F("Währentruper Str.");
        break;
    }
    case 341222:
    {
        returnValue = F("Wäistrooss");
        break;
    }
    case 341223:
    {
        returnValue = F("Wäitkamp");
        break;
    }
    case 341224:
    {
        returnValue = F("Wäldchen");
        break;
    }
    case 341225:
    {
        returnValue = F("Wäldchenstr.");
        break;
    }
    case 341226:
    {
        returnValue = F("Wäldchenweg");
        break;
    }
    case 341227:
    {
        returnValue = F("Wäldchesborn");
        break;
    }
    case 341228:
    {
        returnValue = F("Wäldchesgasse");
        break;
    }
    case 341229:
    {
        returnValue = F("Wäldchesstr.");
        break;
    }
    case 341230:
    {
        returnValue = F("Wäldchestal");
        break;
    }
    case 341231:
    {
        returnValue = F("Wäldchesweg");
        break;
    }
    case 341232:
    {
        returnValue = F("Wäldelallee");
        break;
    }
    case 341233:
    {
        returnValue = F("Wäldele");
        break;
    }
    case 341234:
    {
        returnValue = F("Wäldelebühl");
        break;
    }
    case 341235:
    {
        returnValue = F("Wäldeleweg");
        break;
    }
    case 341236:
    {
        returnValue = F("Wäldemlerundweg");
        break;
    }
    case 341237:
    {
        returnValue = F("Wäldemleweg");
        break;
    }
    case 341238:
    {
        returnValue = F("Wäldenbronner Str.");
        break;
    }
    case 341239:
    {
        returnValue = F("Wäldener Str.");
        break;
    }
    case 341240:
    {
        returnValue = F("Wäldenstr.");
        break;
    }
    case 341241:
    {
        returnValue = F("Wälder");
        break;
    }
    case 341242:
    {
        returnValue = F("Wälder der Erde - Waldlehrpfad");
        break;
    }
    case 341243:
    {
        returnValue = F("Wälderbusch");
        break;
    }
    case 341244:
    {
        returnValue = F("Wälderhofweg");
        break;
    }
    case 341245:
    {
        returnValue = F("Wäldern");
        break;
    }
    case 341246:
    {
        returnValue = F("Wäldersgasse");
        break;
    }
    case 341247:
    {
        returnValue = F("Wäldershäuser Str.");
        break;
    }
    case 341248:
    {
        returnValue = F("Wälderstr.");
        break;
    }
    case 341249:
    {
        returnValue = F("Wälderweg");
        break;
    }
    case 341250:
    {
        returnValue = F("Wäldestr.");
        break;
    }
    case 341251:
    {
        returnValue = F("Wäldgener Weg");
        break;
    }
    case 341252:
    {
        returnValue = F("Wäldinstr.");
        break;
    }
    case 341253:
    {
        returnValue = F("Wäldla");
        break;
    }
    case 341254:
    {
        returnValue = F("Wäldle");
        break;
    }
    case 341255:
    {
        returnValue = F("Wäldleinstr.");
        break;
    }
    case 341256:
    {
        returnValue = F("Wäldleinweg");
        break;
    }
    case 341257:
    {
        returnValue = F("Wäldlerstr.");
        break;
    }
    case 341258:
    {
        returnValue = F("Wäldlerweg");
        break;
    }
    case 341259:
    {
        returnValue = F("Wäldlesgasse");
        break;
    }
    case 341260:
    {
        returnValue = F("Wäldlesweg");
        break;
    }
    case 341261:
    {
        returnValue = F("Wäldlesäcker");
        break;
    }
    case 341262:
    {
        returnValue = F("Wäldleweg");
        break;
    }
    case 341263:
    {
        returnValue = F("Wälkershof");
        break;
    }
    case 341264:
    {
        returnValue = F("Wälkesberg");
        break;
    }
    case 341265:
    {
        returnValue = F("Wällenberg");
        break;
    }
    case 341266:
    {
        returnValue = F("Wällenweg");
        break;
    }
    case 341267:
    {
        returnValue = F("Wäller Weg");
        break;
    }
    case 341268:
    {
        returnValue = F("Wällertorstr.");
        break;
    }
    case 341269:
    {
        returnValue = F("Wällkenstr.");
        break;
    }
    case 341270:
    {
        returnValue = F("Wälschbachstr.");
        break;
    }
    case 341271:
    {
        returnValue = F("Wälschbucher Str.");
        break;
    }
    case 341272:
    {
        returnValue = F("Wälschenstr.");
        break;
    }
    case 341273:
    {
        returnValue = F("Wälzbachweg");
        break;
    }
    case 341274:
    {
        returnValue = F("Wälzebach");
        break;
    }
    case 341275:
    {
        returnValue = F("Wälzebachstr.");
        break;
    }
    case 341276:
    {
        returnValue = F("Wämskenweg");
        break;
    }
    case 341277:
    {
        returnValue = F("Wämstlergäßchen");
        break;
    }
    case 341278:
    {
        returnValue = F("Wängen");
        break;
    }
    case 341279:
    {
        returnValue = F("Wännleinweg");
        break;
    }
    case 341280:
    {
        returnValue = F("Wärderstr.");
        break;
    }
    case 341281:
    {
        returnValue = F("Wärmersbacher Weg");
        break;
    }
    case 341282:
    {
        returnValue = F("Wärmpulle");
        break;
    }
    case 341283:
    {
        returnValue = F("Wärtchengasse");
        break;
    }
    case 341284:
    {
        returnValue = F("Wärterhaus");
        break;
    }
    case 341285:
    {
        returnValue = F("Wärterhaus Goddin");
        break;
    }
    case 341286:
    {
        returnValue = F("Wärterweg");
        break;
    }
    case 341287:
    {
        returnValue = F("Wäschbacherhof");
        break;
    }
    case 341288:
    {
        returnValue = F("Wäschbachhangweg");
        break;
    }
    case 341289:
    {
        returnValue = F("Wäschbachpädel");
        break;
    }
    case 341290:
    {
        returnValue = F("Wäschbachstr.");
        break;
    }
    case 341291:
    {
        returnValue = F("Wäschbachweg");
        break;
    }
    case 341292:
    {
        returnValue = F("Wäschbachwiesen");
        break;
    }
    case 341293:
    {
        returnValue = F("Wäsche");
        break;
    }
    case 341294:
    {
        returnValue = F("Wäschebachkreisel");
        break;
    }
    case 341295:
    {
        returnValue = F("Wäschegrund");
        break;
    }
    case 341296:
    {
        returnValue = F("Wäschenbeurener Str.");
        break;
    }
    case 341297:
    {
        returnValue = F("Wäschenbrink");
        break;
    }
    case 341298:
    {
        returnValue = F("Wäschenweg");
        break;
    }
    case 341299:
    {
        returnValue = F("Wäschepfad");
        break;
    }
    case 341300:
    {
        returnValue = F("Wäschepump");
        break;
    }
    case 341301:
    {
        returnValue = F("Wäscherberg");
        break;
    }
    case 341302:
    {
        returnValue = F("Wäscherburgsteige");
        break;
    }
    case 341303:
    {
        returnValue = F("Wäschereiweg");
        break;
    }
    case 341304:
    {
        returnValue = F("Wäschergäßle");
        break;
    }
    case 341305:
    {
        returnValue = F("Wäscherhof");
        break;
    }
    case 341306:
    {
        returnValue = F("Wäscherhofstr.");
        break;
    }
    case 341307:
    {
        returnValue = F("Wäschertskaulen");
        break;
    }
    case 341308:
    {
        returnValue = F("Wäscherzell");
        break;
    }
    case 341309:
    {
        returnValue = F("Wäscheweg");
        break;
    }
    case 341310:
    {
        returnValue = F("Wäschgasse");
        break;
    }
    case 341311:
    {
        returnValue = F("Wäschgrub");
        break;
    }
    case 341312:
    {
        returnValue = F("Wäschgöltengässle");
        break;
    }
    case 341313:
    {
        returnValue = F("Wäschhausen");
        break;
    }
    case 341314:
    {
        returnValue = F("Wäschholenweg");
        break;
    }
    case 341315:
    {
        returnValue = F("Wäschkestr.");
        break;
    }
    case 341316:
    {
        returnValue = F("Wäschkeweg");
        break;
    }
    case 341317:
    {
        returnValue = F("Wäschlacker Weg");
        break;
    }
    case 341318:
    {
        returnValue = F("Wäschleiten");
        break;
    }
    case 341319:
    {
        returnValue = F("Wäschstr.");
        break;
    }
    case 341320:
    {
        returnValue = F("Wäschweg");
        break;
    }
    case 341321:
    {
        returnValue = F("Wäsenweg");
        break;
    }
    case 341322:
    {
        returnValue = F("Wäsleinstr.");
        break;
    }
    case 341323:
    {
        returnValue = F("Wäslerring");
        break;
    }
    case 341324:
    {
        returnValue = F("Wässerchen");
        break;
    }
    case 341325:
    {
        returnValue = F("Wässergrabenstr.");
        break;
    }
    case 341326:
    {
        returnValue = F("Wässerigter Weg");
        break;
    }
    case 341327:
    {
        returnValue = F("Wässerle");
        break;
    }
    case 341328:
    {
        returnValue = F("Wässerlesweg");
        break;
    }
    case 341329:
    {
        returnValue = F("Wässerleweg");
        break;
    }
    case 341330:
    {
        returnValue = F("Wässernach");
        break;
    }
    case 341331:
    {
        returnValue = F("Wässernachstr.");
        break;
    }
    case 341332:
    {
        returnValue = F("Wässertalweg");
        break;
    }
    case 341333:
    {
        returnValue = F("Wässerungsweg");
        break;
    }
    case 341334:
    {
        returnValue = F("Wässerweg");
        break;
    }
    case 341335:
    {
        returnValue = F("Wässerwiesen");
        break;
    }
    case 341336:
    {
        returnValue = F("Wässigertal");
        break;
    }
    case 341337:
    {
        returnValue = F("Wässingerstr.");
        break;
    }
    case 341338:
    {
        returnValue = F("Wässriger Weg");
        break;
    }
    case 341339:
    {
        returnValue = F("Wästerstr.");
        break;
    }
    case 341340:
    {
        returnValue = F("Wätjens Barg");
        break;
    }
    case 341341:
    {
        returnValue = F("Wätjens Garten");
        break;
    }
    case 341342:
    {
        returnValue = F("Wätjens Park");
        break;
    }
    case 341343:
    {
        returnValue = F("Wätjenstr.");
        break;
    }
    case 341344:
    {
        returnValue = F("Wätjeweg");
        break;
    }
    case 341345:
    {
        returnValue = F("Wätzumer Str.");
        break;
    }
    case 341346:
    {
        returnValue = F("Wätzumer Tor");
        break;
    }
    case 341347:
    {
        returnValue = F("Wäädenaask");
        break;
    }
    case 341348:
    {
        returnValue = F("Wöbbeler Str.");
        break;
    }
    case 341349:
    {
        returnValue = F("Wöbbeliner Str.");
        break;
    }
    case 341350:
    {
        returnValue = F("Wöbbensredder");
        break;
    }
    case 341351:
    {
        returnValue = F("Wöbekingstr.");
        break;
    }
    case 341352:
    {
        returnValue = F("Wöbser Str.");
        break;
    }
    case 341353:
    {
        returnValue = F("Wöbser Weg");
        break;
    }
    case 341354:
    {
        returnValue = F("Wöbsmoor");
        break;
    }
    case 341355:
    {
        returnValue = F("Wöckenerweg");
        break;
    }
    case 341356:
    {
        returnValue = F("Wöddelkamp");
        break;
    }
    case 341357:
    {
        returnValue = F("Wöddeltwiete");
        break;
    }
    case 341358:
    {
        returnValue = F("Wöhler Passage");
        break;
    }
    case 341359:
    {
        returnValue = F("Wöhler Str.");
        break;
    }
    case 341360:
    {
        returnValue = F("Wöhler Weg");
        break;
    }
    case 341361:
    {
        returnValue = F("Wöhler-Platz");
        break;
    }
    case 341362:
    {
        returnValue = F("Wöhlerstr.");
        break;
    }
    case 341363:
    {
        returnValue = F("Wöhlerweg");
        break;
    }
    case 341364:
    {
        returnValue = F("Wöhllstr.");
        break;
    }
    case 341365:
    {
        returnValue = F("Wöhlsdorf");
        break;
    }
    case 341366:
    {
        returnValue = F("Wöhlsdorfer Str.");
        break;
    }
    case 341367:
    {
        returnValue = F("Wöhlsdorfer Weg");
        break;
    }
    case 341368:
    {
        returnValue = F("Wöhnekörben");
        break;
    }
    case 341369:
    {
        returnValue = F("Wöhningen");
        break;
    }
    case 341370:
    {
        returnValue = F("Wöhr");
        break;
    }
    case 341371:
    {
        returnValue = F("Wöhranger");
        break;
    }
    case 341372:
    {
        returnValue = F("Wöhrangerstr.");
        break;
    }
    case 341373:
    {
        returnValue = F("Wöhrbergweg");
        break;
    }
    case 341374:
    {
        returnValue = F("Wöhrd");
        break;
    }
    case 341375:
    {
        returnValue = F("Wöhrd-Park");
        break;
    }
    case 341376:
    {
        returnValue = F("Wöhrden");
        break;
    }
    case 341377:
    {
        returnValue = F("Wöhrdenberg");
        break;
    }
    case 341378:
    {
        returnValue = F("Wöhrdenbrücke");
        break;
    }
    case 341379:
    {
        returnValue = F("Wöhrdener Hafen");
        break;
    }
    case 341380:
    {
        returnValue = F("Wöhrdener Park");
        break;
    }
    case 341381:
    {
        returnValue = F("Wöhrdener Weg");
        break;
    }
    case 341382:
    {
        returnValue = F("Wöhrdenstr.");
        break;
    }
    case 341383:
    {
        returnValue = F("Wöhrdestr.");
        break;
    }
    case 341384:
    {
        returnValue = F("Wöhrdetalstr.");
        break;
    }
    case 341385:
    {
        returnValue = F("Wöhrendamm");
        break;
    }
    case 341386:
    {
        returnValue = F("Wöhrenstr.");
        break;
    }
    case 341387:
    {
        returnValue = F("Wöhrenweg");
        break;
    }
    case 341388:
    {
        returnValue = F("Wöhrer Str.");
        break;
    }
    case 341389:
    {
        returnValue = F("Wöhrgarten");
        break;
    }
    case 341390:
    {
        returnValue = F("Wöhrgasse");
        break;
    }
    case 341391:
    {
        returnValue = F("Wöhrhof");
        break;
    }
    case 341392:
    {
        returnValue = F("Wöhrhofstr.");
        break;
    }
    case 341393:
    {
        returnValue = F("Wöhrhofweg");
        break;
    }
    case 341394:
    {
        returnValue = F("Wöhrleite");
        break;
    }
    case 341395:
    {
        returnValue = F("Wöhrlesberg");
        break;
    }
    case 341396:
    {
        returnValue = F("Wöhrletstr.");
        break;
    }
    case 341397:
    {
        returnValue = F("Wöhrleweg");
        break;
    }
    case 341398:
    {
        returnValue = F("Wöhrlweg");
        break;
    }
    case 341399:
    {
        returnValue = F("Wöhrmannstr.");
        break;
    }
    case 341400:
    {
        returnValue = F("Wöhrplatz");
        break;
    }
    case 341401:
    {
        returnValue = F("Wöhrsbach-Brücke");
        break;
    }
    case 341402:
    {
        returnValue = F("Wöhrsee");
        break;
    }
    case 341403:
    {
        returnValue = F("Wöhrsiek");
        break;
    }
    case 341404:
    {
        returnValue = F("Wöhrsteinstr.");
        break;
    }
    case 341405:
    {
        returnValue = F("Wöhrstr.");
        break;
    }
    case 341406:
    {
        returnValue = F("Wöhrtstr.");
        break;
    }
    case 341407:
    {
        returnValue = F("Wöhrtwiesengasse");
        break;
    }
    case 341408:
    {
        returnValue = F("Wöhrvorstadt");
        break;
    }
    case 341409:
    {
        returnValue = F("Wöhrweg");
        break;
    }
    case 341410:
    {
        returnValue = F("Wöhrwiese");
        break;
    }
    case 341411:
    {
        returnValue = F("Wöhrwiesen");
        break;
    }
    case 341412:
    {
        returnValue = F("Wölbelingstr.");
        break;
    }
    case 341413:
    {
        returnValue = F("Wölbelstr.");
        break;
    }
    case 341414:
    {
        returnValue = F("Wölbitzweg");
        break;
    }
    case 341415:
    {
        returnValue = F("Wölblinstr.");
        break;
    }
    case 341416:
    {
        returnValue = F("Wölfchenweg");
        break;
    }
    case 341417:
    {
        returnValue = F("Wölfchesbitzstr.");
        break;
    }
    case 341418:
    {
        returnValue = F("Wölfchesweg");
        break;
    }
    case 341419:
    {
        returnValue = F("Wölfe");
        break;
    }
    case 341420:
    {
        returnValue = F("Wölfelsdorfer Ring");
        break;
    }
    case 341421:
    {
        returnValue = F("Wölfelsgasse");
        break;
    }
    case 341422:
    {
        returnValue = F("Wölfelsgrund");
        break;
    }
    case 341423:
    {
        returnValue = F("Wölfelstr.");
        break;
    }
    case 341424:
    {
        returnValue = F("Wölfelweg");
        break;
    }
    case 341425:
    {
        returnValue = F("Wölfenbach");
        break;
    }
    case 341426:
    {
        returnValue = F("Wölfer Str.");
        break;
    }
    case 341427:
    {
        returnValue = F("Wölferbütter Str.");
        break;
    }
    case 341428:
    {
        returnValue = F("Wölferlinger Str.");
        break;
    }
    case 341429:
    {
        returnValue = F("Wölfershecke");
        break;
    }
    case 341430:
    {
        returnValue = F("Wölfersheimer Weg");
        break;
    }
    case 341431:
    {
        returnValue = F("Wölfershäuser Str.");
        break;
    }
    case 341432:
    {
        returnValue = F("Wölfershäuser Weg");
        break;
    }
    case 341433:
    {
        returnValue = F("Wölferstr.");
        break;
    }
    case 341434:
    {
        returnValue = F("Wölfeweg");
        break;
    }
    case 341435:
    {
        returnValue = F("Wölffelstr.");
        break;
    }
    case 341436:
    {
        returnValue = F("Wölffleweg");
        break;
    }
    case 341437:
    {
        returnValue = F("Wölfinger Str.");
        break;
    }
    case 341438:
    {
        returnValue = F("Wölfiser Str.");
        break;
    }
    case 341439:
    {
        returnValue = F("Wölfl");
        break;
    }
    case 341440:
    {
        returnValue = F("Wölfleinstr.");
        break;
    }
    case 341441:
    {
        returnValue = F("Wölfleloch");
        break;
    }
    case 341442:
    {
        returnValue = F("Wölflerweg");
        break;
    }
    case 341443:
    {
        returnValue = F("Wölflesweg");
        break;
    }
    case 341444:
    {
        returnValue = F("Wölfleweg");
        break;
    }
    case 341445:
    {
        returnValue = F("Wölflibrücke");
        break;
    }
    case 341446:
    {
        returnValue = F("Wölflinstr.");
        break;
    }
    case 341447:
    {
        returnValue = F("Wölflinweg");
        break;
    }
    case 341448:
    {
        returnValue = F("Wölflisweg");
        break;
    }
    case 341449:
    {
        returnValue = F("Wölflkofen");
        break;
    }
    case 341450:
    {
        returnValue = F("Wölflstr.");
        break;
    }
    case 341451:
    {
        returnValue = F("Wölfslöcherweg");
        break;
    }
    case 341452:
    {
        returnValue = F("Wölkau");
        break;
    }
    case 341453:
    {
        returnValue = F("Wölkauer Landstr.");
        break;
    }
    case 341454:
    {
        returnValue = F("Wölkauer Str.");
        break;
    }
    case 341455:
    {
        returnValue = F("Wölkauer Weg");
        break;
    }
    case 341456:
    {
        returnValue = F("Wölkendorfer Str.");
        break;
    }
    case 341457:
    {
        returnValue = F("Wölkersdorf");
        break;
    }
    case 341458:
    {
        returnValue = F("Wölkische Str.");
        break;
    }
    case 341459:
    {
        returnValue = F("Wölkstr.");
        break;
    }
    case 341460:
    {
        returnValue = F("Wöllbachsweg");
        break;
    }
    case 341461:
    {
        returnValue = F("Wöllbachweg");
        break;
    }
    case 341462:
    {
        returnValue = F("Wöllekuhl");
        break;
    }
    case 341463:
    {
        returnValue = F("Wöllenbruch");
        break;
    }
    case 341464:
    {
        returnValue = F("Wöllergasse");
        break;
    }
    case 341465:
    {
        returnValue = F("Wöllersberg");
        break;
    }
    case 341466:
    {
        returnValue = F("Wöllersheim");
        break;
    }
    case 341467:
    {
        returnValue = F("Wöllersheimer Weg");
        break;
    }
    case 341468:
    {
        returnValue = F("Wöllersteinweg");
        break;
    }
    case 341469:
    {
        returnValue = F("Wöllhauser Platz");
        break;
    }
    case 341470:
    {
        returnValue = F("Wöllhauser Str.");
        break;
    }
    case 341471:
    {
        returnValue = F("Wöllinger Weg");
        break;
    }
    case 341472:
    {
        returnValue = F("Wöllingerstr.");
        break;
    }
    case 341473:
    {
        returnValue = F("Wöllmarshäuser Weg");
        break;
    }
    case 341474:
    {
        returnValue = F("Wöllmener Str.");
        break;
    }
    case 341475:
    {
        returnValue = F("Wöllmetzhofen");
        break;
    }
    case 341476:
    {
        returnValue = F("Wöllnauer Chaussee");
        break;
    }
    case 341477:
    {
        returnValue = F("Wöllnauer Str.");
        break;
    }
    case 341478:
    {
        returnValue = F("Wöllnauer Weg");
        break;
    }
    case 341479:
    {
        returnValue = F("Wöllnitzer Oberweg");
        break;
    }
    case 341480:
    {
        returnValue = F("Wöllnitzer Str.");
        break;
    }
    case 341481:
    {
        returnValue = F("Wöllsdorfer Ring");
        break;
    }
    case 341482:
    {
        returnValue = F("Wöllsteiner Str.");
        break;
    }
    case 341483:
    {
        returnValue = F("Wöllsteiner Weg");
        break;
    }
    case 341484:
    {
        returnValue = F("Wölmerser Str.");
        break;
    }
    case 341485:
    {
        returnValue = F("Wölmes Kamp");
        break;
    }
    case 341486:
    {
        returnValue = F("Wölmsdorf");
        break;
    }
    case 341487:
    {
        returnValue = F("Wölmsdorfer Weg");
        break;
    }
    case 341488:
    {
        returnValue = F("Wölper Ring");
        break;
    }
    case 341489:
    {
        returnValue = F("Wölper Weg");
        break;
    }
    case 341490:
    {
        returnValue = F("Wölperner Str.");
        break;
    }
    case 341491:
    {
        returnValue = F("Wölperwiesenweg");
        break;
    }
    case 341492:
    {
        returnValue = F("Wölpser Weg");
        break;
    }
    case 341493:
    {
        returnValue = F("Wölsauer Str.");
        break;
    }
    case 341494:
    {
        returnValue = F("Wölsauerhammer");
        break;
    }
    case 341495:
    {
        returnValue = F("Wölschendorf");
        break;
    }
    case 341496:
    {
        returnValue = F("Wölsenberger Str.");
        break;
    }
    case 341497:
    {
        returnValue = F("Wölsenbergstr.");
        break;
    }
    case 341498:
    {
        returnValue = F("Wölsickendorfer Str.");
        break;
    }
    case 341499:
    {
        returnValue = F("Wöltendorf");
        break;
    }
    case 341500:
    {
        returnValue = F("Wöltersstr.");
        break;
    }
    case 341501:
    {
        returnValue = F("Wölzower Weg");
        break;
    }
    case 341502:
    {
        returnValue = F("Wömperners Weg");
        break;
    }
    case 341503:
    {
        returnValue = F("Wönkhausen");
        break;
    }
    case 341504:
    {
        returnValue = F("Wöpel");
        break;
    }
    case 341505:
    {
        returnValue = F("Wöpelberg");
        break;
    }
    case 341506:
    {
        returnValue = F("Wöpplinsberger Str.");
        break;
    }
    case 341507:
    {
        returnValue = F("Wöpplinsberger Weg");
        break;
    }
    case 341508:
    {
        returnValue = F("Wöpse");
        break;
    }
    case 341509:
    {
        returnValue = F("Wöpser Ahe");
        break;
    }
    case 341510:
    {
        returnValue = F("Wöpser Berg");
        break;
    }
    case 341511:
    {
        returnValue = F("Wöpser Maidamm");
        break;
    }
    case 341512:
    {
        returnValue = F("Wöpser Steinkuhle");
        break;
    }
    case 341513:
    {
        returnValue = F("Wörbelbergstr.");
        break;
    }
    case 341514:
    {
        returnValue = F("Wörbesgarten");
        break;
    }
    case 341515:
    {
        returnValue = F("Wörde");
        break;
    }
    case 341516:
    {
        returnValue = F("Wördehoffstr.");
        break;
    }
    case 341517:
    {
        returnValue = F("Wördeholz");
        break;
    }
    case 341518:
    {
        returnValue = F("Wördeländer Str.");
        break;
    }
    case 341519:
    {
        returnValue = F("Wördemannweg");
        break;
    }
    case 341520:
    {
        returnValue = F("Wörden Pättken");
        break;
    }
    case 341521:
    {
        returnValue = F("Wördenfeldstr.");
        break;
    }
    case 341522:
    {
        returnValue = F("Wördenweg");
        break;
    }
    case 341523:
    {
        returnValue = F("Wörderfeld");
        break;
    }
    case 341524:
    {
        returnValue = F("Wörderfeld \"Donnerecke");
        break;
    }
    case 341525:
    {
        returnValue = F("Wördeweg");
        break;
    }
    case 341526:
    {
        returnValue = F("Wördken");
        break;
    }
    case 341527:
    {
        returnValue = F("Wördstr.");
        break;
    }
    case 341528:
    {
        returnValue = F("Wöresbacher Str.");
        break;
    }
    case 341529:
    {
        returnValue = F("Wörgötterplatz");
        break;
    }
    case 341530:
    {
        returnValue = F("Wörishofener Str.");
        break;
    }
    case 341531:
    {
        returnValue = F("Wörishofer Str.");
        break;
    }
    case 341532:
    {
        returnValue = F("Wörkamp");
        break;
    }
    case 341533:
    {
        returnValue = F("Wörlanger");
        break;
    }
    case 341534:
    {
        returnValue = F("Wörleweg");
        break;
    }
    case 341535:
    {
        returnValue = F("Wörlham");
        break;
    }
    case 341536:
    {
        returnValue = F("Wörlitzer Markt");
        break;
    }
    case 341537:
    {
        returnValue = F("Wörlitzer Parkstr.");
        break;
    }
    case 341538:
    {
        returnValue = F("Wörlitzer Str.");
        break;
    }
    case 341539:
    {
        returnValue = F("Wörlkamp");
        break;
    }
    case 341540:
    {
        returnValue = F("Wörlstr.");
        break;
    }
    case 341541:
    {
        returnValue = F("Wörlveitstr.");
        break;
    }
    case 341542:
    {
        returnValue = F("Wörmer Landwehr");
        break;
    }
    case 341543:
    {
        returnValue = F("Wörmer Str.");
        break;
    }
    case 341544:
    {
        returnValue = F("Wörmer Weg");
        break;
    }
    case 341545:
    {
        returnValue = F("Wörmersdorfer Leite");
        break;
    }
    case 341546:
    {
        returnValue = F("Wörmertorgasse");
        break;
    }
    case 341547:
    {
        returnValue = F("Wörmge");
        break;
    }
    case 341548:
    {
        returnValue = F("Wörmickestr.");
        break;
    }
    case 341549:
    {
        returnValue = F("Wörmkestr.");
        break;
    }
    case 341550:
    {
        returnValue = F("Wörmlitzer Str.");
        break;
    }
    case 341551:
    {
        returnValue = F("Wörmlitzer Weg");
        break;
    }
    case 341552:
    {
        returnValue = F("Wörmlitzer weg");
        break;
    }
    case 341553:
    {
        returnValue = F("Wörnaustr.");
        break;
    }
    case 341554:
    {
        returnValue = F("Wörnbrunner Str.");
        break;
    }
    case 341555:
    {
        returnValue = F("Wörnbrunner-Geräumt");
        break;
    }
    case 341556:
    {
        returnValue = F("Wörner Damm");
        break;
    }
    case 341557:
    {
        returnValue = F("Wörnergasse");
        break;
    }
    case 341558:
    {
        returnValue = F("Wörnersberger Str.");
        break;
    }
    case 341559:
    {
        returnValue = F("Wörnershalde");
        break;
    }
    case 341560:
    {
        returnValue = F("Wörnerstr.");
        break;
    }
    case 341561:
    {
        returnValue = F("Wörnerweg");
        break;
    }
    case 341562:
    {
        returnValue = F("Wörnetstr.");
        break;
    }
    case 341563:
    {
        returnValue = F("Wörnitzpark");
        break;
    }
    case 341564:
    {
        returnValue = F("Wörnitzstr.");
        break;
    }
    case 341565:
    {
        returnValue = F("Wörnitzweg");
        break;
    }
    case 341566:
    {
        returnValue = F("Wörnsergrund");
        break;
    }
    case 341567:
    {
        returnValue = F("Wörnsmühler Str.");
        break;
    }
    case 341568:
    {
        returnValue = F("Wörnstorf");
        break;
    }
    case 341569:
    {
        returnValue = F("Wörnstr.");
        break;
    }
    case 341570:
    {
        returnValue = F("Wörpe Park");
        break;
    }
    case 341571:
    {
        returnValue = F("Wörpedahler Str.");
        break;
    }
    case 341572:
    {
        returnValue = F("Wörpedorfer Ring");
        break;
    }
    case 341573:
    {
        returnValue = F("Wörpedorfer Str.");
        break;
    }
    case 341574:
    {
        returnValue = F("Wörpener Hauptstr.");
        break;
    }
    case 341575:
    {
        returnValue = F("Wörpener Landstr.");
        break;
    }
    case 341576:
    {
        returnValue = F("Wörpestr.");
        break;
    }
    case 341577:
    {
        returnValue = F("Wörpeweg");
        break;
    }
    case 341578:
    {
        returnValue = F("Wörrstädter Str.");
        break;
    }
    case 341579:
    {
        returnValue = F("Wörrstädter Weg");
        break;
    }
    case 341580:
    {
        returnValue = F("Wörsbacher Str.");
        break;
    }
    case 341581:
    {
        returnValue = F("Wörsbachstr.");
        break;
    }
    case 341582:
    {
        returnValue = F("Wörschberger Weg");
        break;
    }
    case 341583:
    {
        returnValue = F("Wörschelstr.");
        break;
    }
    case 341584:
    {
        returnValue = F("Wörschgasse");
        break;
    }
    case 341585:
    {
        returnValue = F("Wörschhauser Str.");
        break;
    }
    case 341586:
    {
        returnValue = F("Wörschweilerstr.");
        break;
    }
    case 341587:
    {
        returnValue = F("Wörsdorfer Str.");
        break;
    }
    case 341588:
    {
        returnValue = F("Wört");
        break;
    }
    case 341589:
    {
        returnValue = F("Wörtelstr.");
        break;
    }
    case 341590:
    {
        returnValue = F("Wörtelweg");
        break;
    }
    case 341591:
    {
        returnValue = F("Wörter Str.");
        break;
    }
    case 341592:
    {
        returnValue = F("Wörth");
        break;
    }
    case 341593:
    {
        returnValue = F("Wörthbrücke");
        break;
    }
    case 341594:
    {
        returnValue = F("Wörthelalle");
        break;
    }
    case 341595:
    {
        returnValue = F("Wörther Str.");
        break;
    }
    case 341596:
    {
        returnValue = F("Wörther Weg");
        break;
    }
    case 341597:
    {
        returnValue = F("Wörther-Kirch-Str.");
        break;
    }
    case 341598:
    {
        returnValue = F("Wörthestr.");
        break;
    }
    case 341599:
    {
        returnValue = F("Wörthfeldstr.");
        break;
    }
    case 341600:
    {
        returnValue = F("Wörthgasse");
        break;
    }
    case 341601:
    {
        returnValue = F("Wörthsee Roßschwemme");
        break;
    }
    case 341602:
    {
        returnValue = F("Wörthseestr.");
        break;
    }
    case 341603:
    {
        returnValue = F("Wörthseeweg");
        break;
    }
    case 341604:
    {
        returnValue = F("Wörthsgasse");
        break;
    }
    case 341605:
    {
        returnValue = F("Wörthstr.");
        break;
    }
    case 341606:
    {
        returnValue = F("Wörthweg");
        break;
    }
    case 341607:
    {
        returnValue = F("Wörtwiese");
        break;
    }
    case 341608:
    {
        returnValue = F("Wöschbacher Str.");
        break;
    }
    case 341609:
    {
        returnValue = F("Wöschbacher Weg");
        break;
    }
    case 341610:
    {
        returnValue = F("Wöschenweg");
        break;
    }
    case 341611:
    {
        returnValue = F("Wösekenweg");
        break;
    }
    case 341612:
    {
        returnValue = F("Wössinger Str.");
        break;
    }
    case 341613:
    {
        returnValue = F("Wössinger Weg");
        break;
    }
    case 341614:
    {
        returnValue = F("Wöste");
        break;
    }
    case 341615:
    {
        returnValue = F("Wöstemühle");
        break;
    }
    case 341616:
    {
        returnValue = F("Wöstendamm");
        break;
    }
    case 341617:
    {
        returnValue = F("Wöstenhof");
        break;
    }
    case 341618:
    {
        returnValue = F("Wöstenstiege");
        break;
    }
    case 341619:
    {
        returnValue = F("Wöstenstr.");
        break;
    }
    case 341620:
    {
        returnValue = F("Wöstenweg");
        break;
    }
    case 341621:
    {
        returnValue = F("Wöstergasse");
        break;
    }
    case 341622:
    {
        returnValue = F("Wöstering");
        break;
    }
    case 341623:
    {
        returnValue = F("Wösteweg");
        break;
    }
    case 341624:
    {
        returnValue = F("Wöstungs-Schneise");
        break;
    }
    case 341625:
    {
        returnValue = F("Wöttlinstr.");
        break;
    }
    case 341626:
    {
        returnValue = F("Wöylenweg");
        break;
    }
    case 341627:
    {
        returnValue = F("Wü 3");
        break;
    }
    case 341628:
    {
        returnValue = F("Wübbelers Kamp");
        break;
    }
    case 341629:
    {
        returnValue = F("Wübbelmanns Weg");
        break;
    }
    case 341630:
    {
        returnValue = F("Wübbelweg");
        break;
    }
    case 341631:
    {
        returnValue = F("Wübbenhof");
        break;
    }
    case 341632:
    {
        returnValue = F("Wübbenhorstweg");
        break;
    }
    case 341633:
    {
        returnValue = F("Wübbenkamp");
        break;
    }
    case 341634:
    {
        returnValue = F("Wübbethun");
        break;
    }
    case 341635:
    {
        returnValue = F("Wüchern");
        break;
    }
    case 341636:
    {
        returnValue = F("Wühlestr.");
        break;
    }
    case 341637:
    {
        returnValue = F("Wühlsbachwegstr.");
        break;
    }
    case 341638:
    {
        returnValue = F("Wühlweg");
        break;
    }
    case 341639:
    {
        returnValue = F("Wühnried");
        break;
    }
    case 341640:
    {
        returnValue = F("Wührden");
        break;
    }
    case 341641:
    {
        returnValue = F("Wührdenstr.");
        break;
    }
    case 341642:
    {
        returnValue = F("Wühre");
        break;
    }
    case 341643:
    {
        returnValue = F("Wührefeldweg");
        break;
    }
    case 341644:
    {
        returnValue = F("Wühren");
        break;
    }
    case 341645:
    {
        returnValue = F("Wührenallee");
        break;
    }
    case 341646:
    {
        returnValue = F("Wührenbeksweg");
        break;
    }
    case 341647:
    {
        returnValue = F("Wührenbühl");
        break;
    }
    case 341648:
    {
        returnValue = F("Wührener Weg");
        break;
    }
    case 341649:
    {
        returnValue = F("Wührenredder");
        break;
    }
    case 341650:
    {
        returnValue = F("Wührenweg");
        break;
    }
    case 341651:
    {
        returnValue = F("Wührenwiesen");
        break;
    }
    case 341652:
    {
        returnValue = F("Wührerfeld");
        break;
    }
    case 341653:
    {
        returnValue = F("Wührerweg");
        break;
    }
    case 341654:
    {
        returnValue = F("Wührestr.");
        break;
    }
    case 341655:
    {
        returnValue = F("Wühreweg");
        break;
    }
    case 341656:
    {
        returnValue = F("Wührstr.");
        break;
    }
    case 341657:
    {
        returnValue = F("Wülbeck");
        break;
    }
    case 341658:
    {
        returnValue = F("Wülfeler Str.");
        break;
    }
    case 341659:
    {
        returnValue = F("Wülfentrup");
        break;
    }
    case 341660:
    {
        returnValue = F("Wülferheide");
        break;
    }
    case 341661:
    {
        returnValue = F("Wülfermühle");
        break;
    }
    case 341662:
    {
        returnValue = F("Wülferoder Str.");
        break;
    }
    case 341663:
    {
        returnValue = F("Wülfers Wennige");
        break;
    }
    case 341664:
    {
        returnValue = F("Wülfersche Str.");
        break;
    }
    case 341665:
    {
        returnValue = F("Wülfershauser Str.");
        break;
    }
    case 341666:
    {
        returnValue = F("Wülfershäuser Str.");
        break;
    }
    case 341667:
    {
        returnValue = F("Wülfersreuth");
        break;
    }
    case 341668:
    {
        returnValue = F("Wülferstr.");
        break;
    }
    case 341669:
    {
        returnValue = F("Wülfersweg");
        break;
    }
    case 341670:
    {
        returnValue = F("Wülfertstr.");
        break;
    }
    case 341671:
    {
        returnValue = F("Wülfinger Str.");
        break;
    }
    case 341672:
    {
        returnValue = F("Wülfingstr.");
        break;
    }
    case 341673:
    {
        returnValue = F("Wülfling");
        break;
    }
    case 341674:
    {
        returnValue = F("Wülflinger Str.");
        break;
    }
    case 341675:
    {
        returnValue = F("Wülfrather Str.");
        break;
    }
    case 341676:
    {
        returnValue = F("Wülfringhausener Str.");
        break;
    }
    case 341677:
    {
        returnValue = F("Wülfter Str.");
        break;
    }
    case 341678:
    {
        returnValue = F("Wülkersweg");
        break;
    }
    case 341679:
    {
        returnValue = F("Wülknitzer Str.");
        break;
    }
    case 341680:
    {
        returnValue = F("Wülknitzer Weg");
        break;
    }
    case 341681:
    {
        returnValue = F("Wüllener Friedhofstr.");
        break;
    }
    case 341682:
    {
        returnValue = F("Wüllener Str.");
        break;
    }
    case 341683:
    {
        returnValue = F("Wüllenheide");
        break;
    }
    case 341684:
    {
        returnValue = F("Wüllers Weg");
        break;
    }
    case 341685:
    {
        returnValue = F("Wüllerslebener Str.");
        break;
    }
    case 341686:
    {
        returnValue = F("Wüllmersener Achterstr.");
        break;
    }
    case 341687:
    {
        returnValue = F("Wüllmersener Dorfstr.");
        break;
    }
    case 341688:
    {
        returnValue = F("Wülmerser Weg");
        break;
    }
    case 341689:
    {
        returnValue = F("Wülmser Weg");
        break;
    }
    case 341690:
    {
        returnValue = F("Wülmser Weg - Neubau");
        break;
    }
    case 341691:
    {
        returnValue = F("Wülperöder Str.");
        break;
    }
    case 341692:
    {
        returnValue = F("Wülperöder Weg");
        break;
    }
    case 341693:
    {
        returnValue = F("Wülpker Hang");
        break;
    }
    case 341694:
    {
        returnValue = F("Wülpker Str.");
        break;
    }
    case 341695:
    {
        returnValue = F("Wülscheider Str.");
        break;
    }
    case 341696:
    {
        returnValue = F("Wültgensstr.");
        break;
    }
    case 341697:
    {
        returnValue = F("Wümbacher Fußweg");
        break;
    }
    case 341698:
    {
        returnValue = F("Wümbacher Landstr.");
        break;
    }
    case 341699:
    {
        returnValue = F("Wümbacher Str.");
        break;
    }
    case 341700:
    {
        returnValue = F("Wümme");
        break;
    }
    case 341701:
    {
        returnValue = F("Wümmebogen");
        break;
    }
    case 341702:
    {
        returnValue = F("Wümmehof");
        break;
    }
    case 341703:
    {
        returnValue = F("Wümmepark");
        break;
    }
    case 341704:
    {
        returnValue = F("Wümmer Hauptstr.");
        break;
    }
    case 341705:
    {
        returnValue = F("Wümmer Moorweg");
        break;
    }
    case 341706:
    {
        returnValue = F("Wümmer Trift");
        break;
    }
    case 341707:
    {
        returnValue = F("Wümmering");
        break;
    }
    case 341708:
    {
        returnValue = F("Wümmestieg");
        break;
    }
    case 341709:
    {
        returnValue = F("Wümmestr.");
        break;
    }
    case 341710:
    {
        returnValue = F("Wümmetal");
        break;
    }
    case 341711:
    {
        returnValue = F("Wümmetrift");
        break;
    }
    case 341712:
    {
        returnValue = F("Wümmeweg");
        break;
    }
    case 341713:
    {
        returnValue = F("Wümmingen");
        break;
    }
    case 341714:
    {
        returnValue = F("Wümminger Weg");
        break;
    }
    case 341715:
    {
        returnValue = F("Wümminger Wiesen");
        break;
    }
    case 341716:
    {
        returnValue = F("Wünkers Weg");
        break;
    }
    case 341717:
    {
        returnValue = F("Wünnebergstr.");
        break;
    }
    case 341718:
    {
        returnValue = F("Wünnenberger Str.");
        break;
    }
    case 341719:
    {
        returnValue = F("Wünner Str.");
        break;
    }
    case 341720:
    {
        returnValue = F("Wünningweg");
        break;
    }
    case 341721:
    {
        returnValue = F("Wünnowweg");
        break;
    }
    case 341722:
    {
        returnValue = F("Wünostr.");
        break;
    }
    case 341723:
    {
        returnValue = F("Wünschberg");
        break;
    }
    case 341724:
    {
        returnValue = F("Wünschelhofgasse");
        break;
    }
    case 341725:
    {
        returnValue = F("Wünschelstr.");
        break;
    }
    case 341726:
    {
        returnValue = F("Wünschen-Mooser-Str.");
        break;
    }
    case 341727:
    {
        returnValue = F("Wünschendorfer Str.");
        break;
    }
    case 341728:
    {
        returnValue = F("Wünschendorfer Weg");
        break;
    }
    case 341729:
    {
        returnValue = F("Wünschensdorfer Weg");
        break;
    }
    case 341730:
    {
        returnValue = F("Wünschensuhler Str.");
        break;
    }
    case 341731:
    {
        returnValue = F("Wünschensuhler Weg");
        break;
    }
    case 341732:
    {
        returnValue = F("Wünscher Str.");
        break;
    }
    case 341733:
    {
        returnValue = F("Wünscher Weg");
        break;
    }
    case 341734:
    {
        returnValue = F("Wünschgarten");
        break;
    }
    case 341735:
    {
        returnValue = F("Wünschmichelbacher Str.");
        break;
    }
    case 341736:
    {
        returnValue = F("Wünschtalweg");
        break;
    }
    case 341737:
    {
        returnValue = F("Wünsdorfer Platz");
        break;
    }
    case 341738:
    {
        returnValue = F("Wünsdorfer Seestr.");
        break;
    }
    case 341739:
    {
        returnValue = F("Wünsdorfer Str.");
        break;
    }
    case 341740:
    {
        returnValue = F("Wünsdorfer Waldweg");
        break;
    }
    case 341741:
    {
        returnValue = F("Wünsdorfer Weg");
        break;
    }
    case 341742:
    {
        returnValue = F("Wünstener Weg");
        break;
    }
    case 341743:
    {
        returnValue = F("Wüppelser Altendeich");
        break;
    }
    case 341744:
    {
        returnValue = F("Wüppelsergroden");
        break;
    }
    case 341745:
    {
        returnValue = F("Wüpping");
        break;
    }
    case 341746:
    {
        returnValue = F("Wüppings Weide");
        break;
    }
    case 341747:
    {
        returnValue = F("Würbenthaler Str.");
        break;
    }
    case 341748:
    {
        returnValue = F("Würchhausen");
        break;
    }
    case 341749:
    {
        returnValue = F("Würden");
        break;
    }
    case 341750:
    {
        returnValue = F("Würdener Weg");
        break;
    }
    case 341751:
    {
        returnValue = F("Würdenhainer Dorfstr.");
        break;
    }
    case 341752:
    {
        returnValue = F("Würdenhainer Str.");
        break;
    }
    case 341753:
    {
        returnValue = F("Würdenkoppel");
        break;
    }
    case 341754:
    {
        returnValue = F("Würdinger Str.");
        break;
    }
    case 341755:
    {
        returnValue = F("Würdinghauser Str.");
        break;
    }
    case 341756:
    {
        returnValue = F("Würdtweinstr.");
        break;
    }
    case 341757:
    {
        returnValue = F("Würen");
        break;
    }
    case 341758:
    {
        returnValue = F("Würenweg");
        break;
    }
    case 341759:
    {
        returnValue = F("Würfeltalweg");
        break;
    }
    case 341760:
    {
        returnValue = F("Würfelturmstr.");
        break;
    }
    case 341761:
    {
        returnValue = F("Würfelweg");
        break;
    }
    case 341762:
    {
        returnValue = F("Würflau");
        break;
    }
    case 341763:
    {
        returnValue = F("Würflauer Weg");
        break;
    }
    case 341764:
    {
        returnValue = F("Würgasser Str.");
        break;
    }
    case 341765:
    {
        returnValue = F("Würgebachsweg");
        break;
    }
    case 341766:
    {
        returnValue = F("Würgendorfer Str.");
        break;
    }
    case 341767:
    {
        returnValue = F("Würkertstr.");
        break;
    }
    case 341768:
    {
        returnValue = F("Würmanger");
        break;
    }
    case 341769:
    {
        returnValue = F("Würmbachstr.");
        break;
    }
    case 341770:
    {
        returnValue = F("Würmer Lochweg");
        break;
    }
    case 341771:
    {
        returnValue = F("Würmersheimer Str.");
        break;
    }
    case 341772:
    {
        returnValue = F("Würmhalde");
        break;
    }
    case 341773:
    {
        returnValue = F("Würmhaldeweg");
        break;
    }
    case 341774:
    {
        returnValue = F("Würmmühle");
        break;
    }
    case 341775:
    {
        returnValue = F("Würmseeweg");
        break;
    }
    case 341776:
    {
        returnValue = F("Würmstr.");
        break;
    }
    case 341777:
    {
        returnValue = F("Würmtalstr.");
        break;
    }
    case 341778:
    {
        returnValue = F("Würmweg");
        break;
    }
    case 341779:
    {
        returnValue = F("Würrigser Str.");
        break;
    }
    case 341780:
    {
        returnValue = F("Würschnitzaue");
        break;
    }
    case 341781:
    {
        returnValue = F("Würschnitzer Str.");
        break;
    }
    case 341782:
    {
        returnValue = F("Würschnitzer Weg");
        break;
    }
    case 341783:
    {
        returnValue = F("Würschum");
        break;
    }
    case 341784:
    {
        returnValue = F("Würschwitzer Str.");
        break;
    }
    case 341785:
    {
        returnValue = F("Würselener Str.");
        break;
    }
    case 341786:
    {
        returnValue = F("Würselener Weg");
        break;
    }
    case 341787:
    {
        returnValue = F("Würtenberg");
        break;
    }
    case 341788:
    {
        returnValue = F("Würtenbergerstr.");
        break;
    }
    case 341789:
    {
        returnValue = F("Würth Skulpturengarten");
        break;
    }
    case 341790:
    {
        returnValue = F("Würthstr.");
        break;
    }
    case 341791:
    {
        returnValue = F("Würthweg");
        break;
    }
    case 341792:
    {
        returnValue = F("Würtinger Str.");
        break;
    }
    case 341793:
    {
        returnValue = F("Württemberger Hof");
        break;
    }
    case 341794:
    {
        returnValue = F("Württemberger Str.");
        break;
    }
    case 341795:
    {
        returnValue = F("Württemberger Weg");
        break;
    }
    case 341796:
    {
        returnValue = F("Württemberger-Wald-Weg");
        break;
    }
    case 341797:
    {
        returnValue = F("Württembergerhofweg");
        break;
    }
    case 341798:
    {
        returnValue = F("Württembergerstr.");
        break;
    }
    case 341799:
    {
        returnValue = F("Württembergerweg");
        break;
    }
    case 341800:
    {
        returnValue = F("Württembergische Str.");
        break;
    }
    case 341801:
    {
        returnValue = F("Württembergplatz");
        break;
    }
    case 341802:
    {
        returnValue = F("Württembergstr.");
        break;
    }
    case 341803:
    {
        returnValue = F("Würzbacher Str.");
        break;
    }
    case 341804:
    {
        returnValue = F("Würzbacher Weg");
        break;
    }
    case 341805:
    {
        returnValue = F("Würzbachstr.");
        break;
    }
    case 341806:
    {
        returnValue = F("Würzberg");
        break;
    }
    case 341807:
    {
        returnValue = F("Würzbergweg");
        break;
    }
    case 341808:
    {
        returnValue = F("Würzburger Gasse");
        break;
    }
    case 341809:
    {
        returnValue = F("Würzburger Haus");
        break;
    }
    case 341810:
    {
        returnValue = F("Würzburger Höhe");
        break;
    }
    case 341811:
    {
        returnValue = F("Würzburger Landstr.");
        break;
    }
    case 341812:
    {
        returnValue = F("Würzburger Str.");
        break;
    }
    case 341813:
    {
        returnValue = F("Würzburger Weg");
        break;
    }
    case 341814:
    {
        returnValue = F("Würzbühl");
        break;
    }
    case 341815:
    {
        returnValue = F("Würzelt");
        break;
    }
    case 341816:
    {
        returnValue = F("Würzemoos");
        break;
    }
    case 341817:
    {
        returnValue = F("Würzerweg");
        break;
    }
    case 341818:
    {
        returnValue = F("Würzgartenstr.");
        break;
    }
    case 341819:
    {
        returnValue = F("Würzgasse");
        break;
    }
    case 341820:
    {
        returnValue = F("Würzhaubachweg");
        break;
    }
    case 341821:
    {
        returnValue = F("Würzlaysteig");
        break;
    }
    case 341822:
    {
        returnValue = F("Würzmühle");
        break;
    }
    case 341823:
    {
        returnValue = F("Wüschheimer Str.");
        break;
    }
    case 341824:
    {
        returnValue = F("Wüschheimer Weg");
        break;
    }
    case 341825:
    {
        returnValue = F("Wüste");
        break;
    }
    case 341826:
    {
        returnValue = F("Wüste Brücke Weg");
        break;
    }
    case 341827:
    {
        returnValue = F("Wüste Gasse");
        break;
    }
    case 341828:
    {
        returnValue = F("Wüste Hufen");
        break;
    }
    case 341829:
    {
        returnValue = F("Wüste Köditz");
        break;
    }
    case 341830:
    {
        returnValue = F("Wüste Wiese");
        break;
    }
    case 341831:
    {
        returnValue = F("Wüste Wolferstedt");
        break;
    }
    case 341832:
    {
        returnValue = F("Wüste Worth");
        break;
    }
    case 341833:
    {
        returnValue = F("Wüstebergblick");
        break;
    }
    case 341834:
    {
        returnValue = F("Wüsteburg");
        break;
    }
    case 341835:
    {
        returnValue = F("Wüstefeldstr.");
        break;
    }
    case 341836:
    {
        returnValue = F("Wüstefeldweg");
        break;
    }
    case 341837:
    {
        returnValue = F("Wüstegasse");
        break;
    }
    case 341838:
    {
        returnValue = F("Wüstemark");
        break;
    }
    case 341839:
    {
        returnValue = F("Wüstemarker Str.");
        break;
    }
    case 341840:
    {
        returnValue = F("Wüstemarker Weg");
        break;
    }
    case 341841:
    {
        returnValue = F("Wüstemser Str.");
        break;
    }
    case 341842:
    {
        returnValue = F("Wüstemser Weg");
        break;
    }
    case 341843:
    {
        returnValue = F("Wüstemünte");
        break;
    }
    case 341844:
    {
        returnValue = F("Wüsten");
        break;
    }
    case 341845:
    {
        returnValue = F("Wüstenahorner Str.");
        break;
    }
    case 341846:
    {
        returnValue = F("Wüstenarmschneise");
        break;
    }
    case 341847:
    {
        returnValue = F("Wüstenau");
        break;
    }
    case 341848:
    {
        returnValue = F("Wüstenauer Weg");
        break;
    }
    case 341849:
    {
        returnValue = F("Wüstenbacher Weg");
        break;
    }
    case 341850:
    {
        returnValue = F("Wüstenbachweg");
        break;
    }
    case 341851:
    {
        returnValue = F("Wüstenbergstr.");
        break;
    }
    case 341852:
    {
        returnValue = F("Wüstenbergweg");
        break;
    }
    case 341853:
    {
        returnValue = F("Wüstenbilow");
        break;
    }
    case 341854:
    {
        returnValue = F("Wüstenbrander Schulstr.");
        break;
    }
    case 341855:
    {
        returnValue = F("Wüstenbrander Str.");
        break;
    }
    case 341856:
    {
        returnValue = F("Wüstenbrunner Str.");
        break;
    }
    case 341857:
    {
        returnValue = F("Wüstenbrühlstr.");
        break;
    }
    case 341858:
    {
        returnValue = F("Wüstendorf");
        break;
    }
    case 341859:
    {
        returnValue = F("Wüstendorfer Str.");
        break;
    }
    case 341860:
    {
        returnValue = F("Wüstenei");
        break;
    }
    case 341861:
    {
        returnValue = F("Wüstener Str.");
        break;
    }
    case 341862:
    {
        returnValue = F("Wüstener Weg");
        break;
    }
    case 341863:
    {
        returnValue = F("Wüsteneutzscher Str.");
        break;
    }
    case 341864:
    {
        returnValue = F("Wüsteneyer Weg");
        break;
    }
    case 341865:
    {
        returnValue = F("Wüstenfelde");
        break;
    }
    case 341866:
    {
        returnValue = F("Wüstenfelder Str.");
        break;
    }
    case 341867:
    {
        returnValue = F("Wüstenfelder Weg");
        break;
    }
    case 341868:
    {
        returnValue = F("Wüstenfeldstr.");
        break;
    }
    case 341869:
    {
        returnValue = F("Wüstenfeldweg");
        break;
    }
    case 341870:
    {
        returnValue = F("Wüstengasse");
        break;
    }
    case 341871:
    {
        returnValue = F("Wüstengrabenweg");
        break;
    }
    case 341872:
    {
        returnValue = F("Wüstenhagener Str.");
        break;
    }
    case 341873:
    {
        returnValue = F("Wüstenhain");
        break;
    }
    case 341874:
    {
        returnValue = F("Wüstenhainer Str.");
        break;
    }
    case 341875:
    {
        returnValue = F("Wüstenherscheid");
        break;
    }
    case 341876:
    {
        returnValue = F("Wüstenhof");
        break;
    }
    case 341877:
    {
        returnValue = F("Wüstenhofer Hang");
        break;
    }
    case 341878:
    {
        returnValue = F("Wüstenhäger Str.");
        break;
    }
    case 341879:
    {
        returnValue = F("Wüstenhöfener Aue");
        break;
    }
    case 341880:
    {
        returnValue = F("Wüstenhöfener Dorfstr.");
        break;
    }
    case 341881:
    {
        returnValue = F("Wüstenhöfener Spring");
        break;
    }
    case 341882:
    {
        returnValue = F("Wüstenhöfener Str.");
        break;
    }
    case 341883:
    {
        returnValue = F("Wüstenhöfener Weg");
        break;
    }
    case 341884:
    {
        returnValue = F("Wüstenjerichower Chaussee");
        break;
    }
    case 341885:
    {
        returnValue = F("Wüstenlochweg");
        break;
    }
    case 341886:
    {
        returnValue = F("Wüstenpforte");
        break;
    }
    case 341887:
    {
        returnValue = F("Wüstenroda");
        break;
    }
    case 341888:
    {
        returnValue = F("Wüstenroter Str.");
        break;
    }
    case 341889:
    {
        returnValue = F("Wüstenrothweg");
        break;
    }
    case 341890:
    {
        returnValue = F("Wüstenrotstr.");
        break;
    }
    case 341891:
    {
        returnValue = F("Wüstenschlette");
        break;
    }
    case 341892:
    {
        returnValue = F("Wüstenstr.");
        break;
    }
    case 341893:
    {
        returnValue = F("Wüstentalskopf");
        break;
    }
    case 341894:
    {
        returnValue = F("Wüstenteichen");
        break;
    }
    case 341895:
    {
        returnValue = F("Wüstenteichstr.");
        break;
    }
    case 341896:
    {
        returnValue = F("Wüstenweg");
        break;
    }
    case 341897:
    {
        returnValue = F("Wüstenwetzdorf");
        break;
    }
    case 341898:
    {
        returnValue = F("Wüstenwetzdorfer Weg");
        break;
    }
    case 341899:
    {
        returnValue = F("Wüster Dorfweg");
        break;
    }
    case 341900:
    {
        returnValue = F("Wüster Heckenweg");
        break;
    }
    case 341901:
    {
        returnValue = F("Wüsterhöhe");
        break;
    }
    case 341902:
    {
        returnValue = F("Wüstermarke");
        break;
    }
    case 341903:
    {
        returnValue = F("Wüstermarke-Sorge");
        break;
    }
    case 341904:
    {
        returnValue = F("Wüsterotstr.");
        break;
    }
    case 341905:
    {
        returnValue = F("Wüsterweg");
        break;
    }
    case 341906:
    {
        returnValue = F("Wüstes Kalktal");
        break;
    }
    case 341907:
    {
        returnValue = F("Wüsteweg");
        break;
    }
    case 341908:
    {
        returnValue = F("Wüstgasse");
        break;
    }
    case 341909:
    {
        returnValue = F("Wüstgrabow");
        break;
    }
    case 341910:
    {
        returnValue = F("Wüsthaldenweg");
        break;
    }
    case 341911:
    {
        returnValue = F("Wüstinger Ring");
        break;
    }
    case 341912:
    {
        returnValue = F("Wüstlautenbach");
        break;
    }
    case 341913:
    {
        returnValue = F("Wüstlochschleifweg");
        break;
    }
    case 341914:
    {
        returnValue = F("Wüstlochweg");
        break;
    }
    case 341915:
    {
        returnValue = F("Wüstphül Siedlung");
        break;
    }
    case 341916:
    {
        returnValue = F("Wüstreben");
        break;
    }
    case 341917:
    {
        returnValue = F("Wüstrich");
        break;
    }
    case 341918:
    {
        returnValue = F("Wüstrottweg");
        break;
    }
    case 341919:
    {
        returnValue = F("Wüstseifen");
        break;
    }
    case 341920:
    {
        returnValue = F("Wüststeimel");
        break;
    }
    case 341921:
    {
        returnValue = F("Wüststr.");
        break;
    }
    case 341922:
    {
        returnValue = F("Wüstung Hohenrode");
        break;
    }
    case 341923:
    {
        returnValue = F("Wüstung Keffelke");
        break;
    }
    case 341924:
    {
        returnValue = F("Wüstungssteiner Str.");
        break;
    }
    case 341925:
    {
        returnValue = F("Wüstweilerstr.");
        break;
    }
    case 341926:
    {
        returnValue = F("Wüstwiesenweg");
        break;
    }
    case 341927:
    {
        returnValue = F("Wütigergrabenweg");
        break;
    }
    }
    return returnValue;
}
