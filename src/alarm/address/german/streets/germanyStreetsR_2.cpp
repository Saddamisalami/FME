#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameR2(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 260026:
{
returnValue = F("Raster Str.");
break;
}
case 260027:
{
returnValue = F("Rasterhof");
break;
}
case 260028:
{
returnValue = F("Rasteweg");
break;
}
case 260029:
{
returnValue = F("Rastfeldchen");
break;
}
case 260030:
{
returnValue = F("Rastfeldstr.");
break;
}
case 260031:
{
returnValue = F("Rasthalde");
break;
}
case 260032:
{
returnValue = F("Rasthausstr.");
break;
}
case 260033:
{
returnValue = F("Rasthofweg");
break;
}
case 260034:
{
returnValue = F("Rastkapellenstr.");
break;
}
case 260035:
{
returnValue = F("Rastorfer Mühle");
break;
}
case 260036:
{
returnValue = F("Rastorfer Ring");
break;
}
case 260037:
{
returnValue = F("Rastorfer Str.");
break;
}
case 260038:
{
returnValue = F("Rastower Berg");
break;
}
case 260039:
{
returnValue = F("Rastower Weg");
break;
}
case 260040:
{
returnValue = F("Rastpfuhl");
break;
}
case 260041:
{
returnValue = F("Rastplatz");
break;
}
case 260042:
{
returnValue = F("Rastplatz \"Am Bibelheim");
break;
}
case 260043:
{
returnValue = F("Rastplatz Kammerforst");
break;
}
case 260044:
{
returnValue = F("Rastplatz Osterkalle");
break;
}
case 260045:
{
returnValue = F("Rastplatz Sandiegel");
break;
}
case 260046:
{
returnValue = F("Rastplatz Spessartfreunde Sailauf");
break;
}
case 260047:
{
returnValue = F("Rastplatz am Kunoldsteich");
break;
}
case 260048:
{
returnValue = F("Rastplatz an der Dahme");
break;
}
case 260049:
{
returnValue = F("Rastplatzweg");
break;
}
case 260050:
{
returnValue = F("Raststr.");
break;
}
case 260051:
{
returnValue = F("Raststätte");
break;
}
case 260052:
{
returnValue = F("Raststätte Börde Süd");
break;
}
case 260053:
{
returnValue = F("Raststätte Kindelsberg");
break;
}
case 260054:
{
returnValue = F("Rastweg");
break;
}
case 260055:
{
returnValue = F("Rastweiherstr.");
break;
}
case 260056:
{
returnValue = F("Rasweg");
break;
}
case 260057:
{
returnValue = F("Rat-Beil-Str.");
break;
}
case 260058:
{
returnValue = F("Rat-Deycks-Str.");
break;
}
case 260059:
{
returnValue = F("Rat-Hasse-Promenade");
break;
}
case 260060:
{
returnValue = F("Rat-Jung-Str.");
break;
}
case 260061:
{
returnValue = F("Rat-Kaffl-Str.");
break;
}
case 260062:
{
returnValue = F("Rat-Klingmann-Weg");
break;
}
case 260063:
{
returnValue = F("Rat-Müller-Str.");
break;
}
case 260064:
{
returnValue = F("Rat-Scholz-Str.");
break;
}
case 260065:
{
returnValue = F("Rat-Tressel-Str.");
break;
}
case 260066:
{
returnValue = F("Ratdoltstr.");
break;
}
case 260067:
{
returnValue = F("Ratekauer Weg");
break;
}
case 260068:
{
returnValue = F("Raterinks Eschweg");
break;
}
case 260069:
{
returnValue = F("Ratgarstr.");
break;
}
case 260070:
{
returnValue = F("Ratgebstr.");
break;
}
case 260071:
{
returnValue = F("Ratgebweg");
break;
}
case 260072:
{
returnValue = F("Rath");
break;
}
case 260073:
{
returnValue = F("Rath-Forsbacher Weg");
break;
}
case 260074:
{
returnValue = F("Ratharistr.");
break;
}
case 260075:
{
returnValue = F("Rathaus");
break;
}
case 260076:
{
returnValue = F("Rathaus Passage");
break;
}
case 260077:
{
returnValue = F("Rathaus Platz");
break;
}
case 260078:
{
returnValue = F("Rathaus-Passage");
break;
}
case 260079:
{
returnValue = F("Rathausallee");
break;
}
case 260080:
{
returnValue = F("Rathausberg");
break;
}
case 260081:
{
returnValue = F("Rathausbrücke");
break;
}
case 260082:
{
returnValue = F("Rathausgalerie");
break;
}
case 260083:
{
returnValue = F("Rathausgang");
break;
}
case 260084:
{
returnValue = F("Rathausgarten");
break;
}
case 260085:
{
returnValue = F("Rathausgasse");
break;
}
case 260086:
{
returnValue = F("Rathausgässele");
break;
}
case 260087:
{
returnValue = F("Rathausgässle");
break;
}
case 260088:
{
returnValue = F("Rathausgäßchen");
break;
}
case 260089:
{
returnValue = F("Rathausgäßle");
break;
}
case 260090:
{
returnValue = F("Rathausgäßlein");
break;
}
case 260091:
{
returnValue = F("Rathaushof");
break;
}
case 260092:
{
returnValue = F("Rathausloh");
break;
}
case 260093:
{
returnValue = F("Rathausmarkt");
break;
}
case 260094:
{
returnValue = F("Rathauspad");
break;
}
case 260095:
{
returnValue = F("Rathauspark");
break;
}
case 260096:
{
returnValue = F("Rathauspark Löbtau");
break;
}
case 260097:
{
returnValue = F("Rathauspark Siedenburg");
break;
}
case 260098:
{
returnValue = F("Rathauspark mit Stadtkirche");
break;
}
case 260099:
{
returnValue = F("Rathauspassage");
break;
}
case 260100:
{
returnValue = F("Rathausplatz");
break;
}
case 260101:
{
returnValue = F("Rathausplatz Rosengarten");
break;
}
case 260102:
{
returnValue = F("Rathausquartier");
break;
}
case 260103:
{
returnValue = F("Rathausring");
break;
}
case 260104:
{
returnValue = F("Rathaussstr.");
break;
}
case 260105:
{
returnValue = F("Rathaussteig");
break;
}
case 260106:
{
returnValue = F("Rathaussteige");
break;
}
case 260107:
{
returnValue = F("Rathausstiege");
break;
}
case 260108:
{
returnValue = F("Rathausstr.");
break;
}
case 260109:
{
returnValue = F("Rathaussträßle");
break;
}
case 260110:
{
returnValue = F("Rathaustorstr.");
break;
}
case 260111:
{
returnValue = F("Rathaustr.");
break;
}
case 260112:
{
returnValue = F("Rathaustunnel");
break;
}
case 260113:
{
returnValue = F("Rathausturmplatz");
break;
}
case 260114:
{
returnValue = F("Rathaustwiete");
break;
}
case 260115:
{
returnValue = F("Rathausufer");
break;
}
case 260116:
{
returnValue = F("Rathausvorplatz");
break;
}
case 260117:
{
returnValue = F("Rathausweg");
break;
}
case 260118:
{
returnValue = F("Rathauswiese");
break;
}
case 260119:
{
returnValue = F("Rathauswinkel");
break;
}
case 260120:
{
returnValue = F("Rathebur Dorfstr.");
break;
}
case 260121:
{
returnValue = F("Ratheimer Markt");
break;
}
case 260122:
{
returnValue = F("Ratheimer Str.");
break;
}
case 260123:
{
returnValue = F("Rathelbecker Weg");
break;
}
case 260124:
{
returnValue = F("Rathelbeckstr.");
break;
}
case 260125:
{
returnValue = F("Rathenau Park");
break;
}
case 260126:
{
returnValue = F("Rathenau-Str.");
break;
}
case 260127:
{
returnValue = F("Rathenauallee");
break;
}
case 260128:
{
returnValue = F("Rathenaupark");
break;
}
case 260129:
{
returnValue = F("Rathenauplan");
break;
}
case 260130:
{
returnValue = F("Rathenauplatz");
break;
}
case 260131:
{
returnValue = F("Rathenauring");
break;
}
case 260132:
{
returnValue = F("Rathenaustr.");
break;
}
case 260133:
{
returnValue = F("Rathenauufer");
break;
}
case 260134:
{
returnValue = F("Rathenauweg");
break;
}
case 260135:
{
returnValue = F("Rathendorf");
break;
}
case 260136:
{
returnValue = F("Rathendorfer Str.");
break;
}
case 260137:
{
returnValue = F("Rathener Str.");
break;
}
case 260138:
{
returnValue = F("Rathengasse");
break;
}
case 260139:
{
returnValue = F("Rathenow");
break;
}
case 260140:
{
returnValue = F("Rathenower Chaussee");
break;
}
case 260141:
{
returnValue = F("Rathenower Heerstr.");
break;
}
case 260142:
{
returnValue = F("Rathenower Landstr.");
break;
}
case 260143:
{
returnValue = F("Rathenower Str.");
break;
}
case 260144:
{
returnValue = F("Rathenower Weg");
break;
}
case 260145:
{
returnValue = F("Rathenowstr.");
break;
}
case 260146:
{
returnValue = F("Rathensteig");
break;
}
case 260147:
{
returnValue = F("Rather Broich");
break;
}
case 260148:
{
returnValue = F("Rather Bungert");
break;
}
case 260149:
{
returnValue = F("Rather Heide");
break;
}
case 260150:
{
returnValue = F("Rather Höhe");
break;
}
case 260151:
{
returnValue = F("Rather Kirchplatz");
break;
}
case 260152:
{
returnValue = F("Rather Kirchweg");
break;
}
case 260153:
{
returnValue = F("Rather Kopf");
break;
}
case 260154:
{
returnValue = F("Rather Kreuzweg");
break;
}
case 260155:
{
returnValue = F("Rather Markt");
break;
}
case 260156:
{
returnValue = F("Rather Mauspfad");
break;
}
case 260157:
{
returnValue = F("Rather Mühle");
break;
}
case 260158:
{
returnValue = F("Rather Mühlenweg");
break;
}
case 260159:
{
returnValue = F("Rather Ring");
break;
}
case 260160:
{
returnValue = F("Rather Schulstr.");
break;
}
case 260161:
{
returnValue = F("Rather Steig");
break;
}
case 260162:
{
returnValue = F("Rather Str.");
break;
}
case 260163:
{
returnValue = F("Rather Weg");
break;
}
case 260164:
{
returnValue = F("Rather Weierweg");
break;
}
case 260165:
{
returnValue = F("Rather Weiherweg");
break;
}
case 260166:
{
returnValue = F("Ratherfelder Str.");
break;
}
case 260167:
{
returnValue = F("Rathergasse");
break;
}
case 260168:
{
returnValue = F("Ratherhofstr.");
break;
}
case 260169:
{
returnValue = F("Ratherkämp");
break;
}
case 260170:
{
returnValue = F("Ratherstr.");
break;
}
case 260171:
{
returnValue = F("Rathewalder Fußweg");
break;
}
case 260172:
{
returnValue = F("Rathewitz");
break;
}
case 260173:
{
returnValue = F("Rathfeld");
break;
}
case 260174:
{
returnValue = F("Rathfelderstr.");
break;
}
case 260175:
{
returnValue = F("Rathfeldstr.");
break;
}
case 260176:
{
returnValue = F("Rathgasse");
break;
}
case 260177:
{
returnValue = F("Rathgeb");
break;
}
case 260178:
{
returnValue = F("Rathgeberhof");
break;
}
case 260179:
{
returnValue = F("Rathgeberstr.");
break;
}
case 260180:
{
returnValue = F("Rathingstr.");
break;
}
case 260181:
{
returnValue = F("Rathjensdorfer Weg");
break;
}
case 260182:
{
returnValue = F("Rathjenweg");
break;
}
case 260183:
{
returnValue = F("Rathkrügen");
break;
}
case 260184:
{
returnValue = F("Rathland");
break;
}
case 260185:
{
returnValue = F("Rathlosen");
break;
}
case 260186:
{
returnValue = F("Rathmacherweg");
break;
}
case 260187:
{
returnValue = F("Rathmann-Benecke-Str.");
break;
}
case 260188:
{
returnValue = F("Rathmann-Cohrs-Str.");
break;
}
case 260189:
{
returnValue = F("Rathmann-Tetens-Str.");
break;
}
case 260190:
{
returnValue = F("Rathmannsdorf-Hof");
break;
}
case 260191:
{
returnValue = F("Rathmannsdorfer Str.");
break;
}
case 260192:
{
returnValue = F("Rathmannsdorfer Weg");
break;
}
case 260193:
{
returnValue = F("Rathmannstr.");
break;
}
case 260194:
{
returnValue = F("Rathmecker Platz");
break;
}
case 260195:
{
returnValue = F("Rathmecker Weg");
break;
}
case 260196:
{
returnValue = F("Rathmering");
break;
}
case 260197:
{
returnValue = F("Rathmerring");
break;
}
case 260198:
{
returnValue = F("Rathof");
break;
}
case 260199:
{
returnValue = F("Rathoffsweg");
break;
}
case 260200:
{
returnValue = F("Rathofplatz");
break;
}
case 260201:
{
returnValue = F("Rathofstr.");
break;
}
case 260202:
{
returnValue = F("Raths Kamp");
break;
}
case 260203:
{
returnValue = F("Rathsamer Weg");
break;
}
case 260204:
{
returnValue = F("Rathsberg");
break;
}
case 260205:
{
returnValue = F("Rathsberger Steige");
break;
}
case 260206:
{
returnValue = F("Rathsberger Str.");
break;
}
case 260207:
{
returnValue = F("Rathsbergstr.");
break;
}
case 260208:
{
returnValue = F("Rathsdorf");
break;
}
case 260209:
{
returnValue = F("Rathsfeld");
break;
}
case 260210:
{
returnValue = F("Rathsfelder Str.");
break;
}
case 260211:
{
returnValue = F("Rathsholz");
break;
}
case 260212:
{
returnValue = F("Rathsstr.");
break;
}
case 260213:
{
returnValue = F("Rathstocker Str.");
break;
}
case 260214:
{
returnValue = F("Rathstr.");
break;
}
case 260215:
{
returnValue = F("Rathsweiden");
break;
}
case 260216:
{
returnValue = F("Rathwiesenschneise");
break;
}
case 260217:
{
returnValue = F("Ratiborer Str.");
break;
}
case 260218:
{
returnValue = F("Ratiborer Weg");
break;
}
case 260219:
{
returnValue = F("Ratiborstr.");
break;
}
case 260220:
{
returnValue = F("Ratiborweg");
break;
}
case 260221:
{
returnValue = F("Ratiloring");
break;
}
case 260222:
{
returnValue = F("Ratinger Landstr.");
break;
}
case 260223:
{
returnValue = F("Ratinger Str.");
break;
}
case 260224:
{
returnValue = F("Ratinger Tor");
break;
}
case 260225:
{
returnValue = F("Ratinger Weg");
break;
}
case 260226:
{
returnValue = F("Rationalstr.");
break;
}
case 260227:
{
returnValue = F("Ratisstr.");
break;
}
case 260228:
{
returnValue = F("Ratje");
break;
}
case 260229:
{
returnValue = F("Ratjendorf");
break;
}
case 260230:
{
returnValue = F("Ratjendorfer Weg");
break;
}
case 260231:
{
returnValue = F("Ratkestr.");
break;
}
case 260232:
{
returnValue = F("Ratleikstr.");
break;
}
case 260233:
{
returnValue = F("Ratmerstein");
break;
}
case 260234:
{
returnValue = F("Ratoldusstr.");
break;
}
case 260235:
{
returnValue = F("Ratoldweg");
break;
}
case 260236:
{
returnValue = F("Ratoltweg");
break;
}
case 260237:
{
returnValue = F("Ratperoniusstr.");
break;
}
case 260238:
{
returnValue = F("Ratsackerweg");
break;
}
case 260239:
{
returnValue = F("Ratsallee");
break;
}
case 260240:
{
returnValue = F("Ratsbleiche");
break;
}
case 260241:
{
returnValue = F("Ratsbruch");
break;
}
case 260242:
{
returnValue = F("Ratscheller Weg");
break;
}
case 260243:
{
returnValue = F("Ratschner Anger");
break;
}
case 260244:
{
returnValue = F("Ratschner Weg");
break;
}
case 260245:
{
returnValue = F("Ratsdienergarten");
break;
}
case 260246:
{
returnValue = F("Ratsdienerweg");
break;
}
case 260247:
{
returnValue = F("Ratseck Schneise");
break;
}
case 260248:
{
returnValue = F("Ratsfeld");
break;
}
case 260249:
{
returnValue = F("Ratsfreischulstr.");
break;
}
case 260250:
{
returnValue = F("Ratsgang");
break;
}
case 260251:
{
returnValue = F("Ratsgasse");
break;
}
case 260252:
{
returnValue = F("Ratsgraben");
break;
}
case 260253:
{
returnValue = F("Ratsgäßchen");
break;
}
case 260254:
{
returnValue = F("Ratsheideweg");
break;
}
case 260255:
{
returnValue = F("Ratsheimer Hof");
break;
}
case 260256:
{
returnValue = F("Ratsherr-Becker-Str.");
break;
}
case 260257:
{
returnValue = F("Ratsherr-Dr.-Jacobi-Str.");
break;
}
case 260258:
{
returnValue = F("Ratsherr-Hoopmann-Str.");
break;
}
case 260259:
{
returnValue = F("Ratsherr-Schlikker-Str.");
break;
}
case 260260:
{
returnValue = F("Ratsherr-Schulze-Str.");
break;
}
case 260261:
{
returnValue = F("Ratsherr-Seitz-Weg");
break;
}
case 260262:
{
returnValue = F("Ratsherrenbrücke");
break;
}
case 260263:
{
returnValue = F("Ratsherrenstr.");
break;
}
case 260264:
{
returnValue = F("Ratsherrenweg");
break;
}
case 260265:
{
returnValue = F("Ratsherrnweg");
break;
}
case 260266:
{
returnValue = F("Ratsherrstr.");
break;
}
case 260267:
{
returnValue = F("Ratshof");
break;
}
case 260268:
{
returnValue = F("Ratsiek");
break;
}
case 260269:
{
returnValue = F("Ratskamp");
break;
}
case 260270:
{
returnValue = F("Ratskellerstr.");
break;
}
case 260271:
{
returnValue = F("Ratskiefern");
break;
}
case 260272:
{
returnValue = F("Ratsknick");
break;
}
case 260273:
{
returnValue = F("Ratsmühlensteig");
break;
}
case 260274:
{
returnValue = F("Ratsmühlenweg");
break;
}
case 260275:
{
returnValue = F("Ratspassage");
break;
}
case 260276:
{
returnValue = F("Ratsplatz");
break;
}
case 260277:
{
returnValue = F("Ratsschreibergasse");
break;
}
case 260278:
{
returnValue = F("Ratsseite-Am Waldrand");
break;
}
case 260279:
{
returnValue = F("Ratsseite-Blauer Stein");
break;
}
case 260280:
{
returnValue = F("Ratsseite-Hauptstr.");
break;
}
case 260281:
{
returnValue = F("Ratsseite-Rathausstr.");
break;
}
case 260282:
{
returnValue = F("Ratsseite-Stangenweg");
break;
}
case 260283:
{
returnValue = F("Ratsseite-Wagenbachtal");
break;
}
case 260284:
{
returnValue = F("Ratsseite-Wiesenweg");
break;
}
case 260285:
{
returnValue = F("Ratssollweg");
break;
}
case 260286:
{
returnValue = F("Ratsspiekerpark");
break;
}
case 260287:
{
returnValue = F("Ratssteinbruchweg");
break;
}
case 260288:
{
returnValue = F("Ratsstiege");
break;
}
case 260289:
{
returnValue = F("Ratsstr.");
break;
}
case 260290:
{
returnValue = F("Ratstannenweg");
break;
}
case 260291:
{
returnValue = F("Ratsteich");
break;
}
case 260292:
{
returnValue = F("Ratstein");
break;
}
case 260293:
{
returnValue = F("Ratstr.");
break;
}
case 260294:
{
returnValue = F("Ratstwete");
break;
}
case 260295:
{
returnValue = F("Ratswaage");
break;
}
case 260296:
{
returnValue = F("Ratswall");
break;
}
case 260297:
{
returnValue = F("Ratsweg");
break;
}
case 260298:
{
returnValue = F("Ratswegbrücke");
break;
}
case 260299:
{
returnValue = F("Ratswegkreisel");
break;
}
case 260300:
{
returnValue = F("Ratsweinberg");
break;
}
case 260301:
{
returnValue = F("Ratswerder");
break;
}
case 260302:
{
returnValue = F("Ratswiese");
break;
}
case 260303:
{
returnValue = F("Ratswiesen");
break;
}
case 260304:
{
returnValue = F("Ratswinkel");
break;
}
case 260305:
{
returnValue = F("Ratsziegelei");
break;
}
case 260306:
{
returnValue = F("Rattachweg");
break;
}
case 260307:
{
returnValue = F("Rattelsdorfer Str.");
break;
}
case 260308:
{
returnValue = F("Rattelshof");
break;
}
case 260309:
{
returnValue = F("Rattenbacher Str.");
break;
}
case 260310:
{
returnValue = F("Rattenberg");
break;
}
case 260311:
{
returnValue = F("Rattenberger Str.");
break;
}
case 260312:
{
returnValue = F("Ratteneckweg");
break;
}
case 260313:
{
returnValue = F("Rattener Str.");
break;
}
case 260314:
{
returnValue = F("Rattenharzer Str.");
break;
}
case 260315:
{
returnValue = F("Rattenhau");
break;
}
case 260316:
{
returnValue = F("Rattenkirchner Str.");
break;
}
case 260317:
{
returnValue = F("Rattentunnel");
break;
}
case 260318:
{
returnValue = F("Rattersberg");
break;
}
case 260319:
{
returnValue = F("Rattey");
break;
}
case 260320:
{
returnValue = F("Ratteyer Damm");
break;
}
case 260321:
{
returnValue = F("Rattinger Weg");
break;
}
case 260322:
{
returnValue = F("Rattinghausen");
break;
}
case 260323:
{
returnValue = F("Rattinghauser Weg");
break;
}
case 260324:
{
returnValue = F("Rattlarer Str.");
break;
}
case 260325:
{
returnValue = F("Rattlerstr.");
break;
}
case 260326:
{
returnValue = F("Rattmannsdorfer Weg");
break;
}
case 260327:
{
returnValue = F("Rattstadter Str.");
break;
}
case 260328:
{
returnValue = F("Rattwitzer Str.");
break;
}
case 260329:
{
returnValue = F("Ratweg");
break;
}
case 260330:
{
returnValue = F("Ratzdorfer Str.");
break;
}
case 260331:
{
returnValue = F("Ratzebergerweg");
break;
}
case 260332:
{
returnValue = F("Ratzebuhrer Allee");
break;
}
case 260333:
{
returnValue = F("Ratzeburg");
break;
}
case 260334:
{
returnValue = F("Ratzeburger Allee");
break;
}
case 260335:
{
returnValue = F("Ratzeburger Chaussee");
break;
}
case 260336:
{
returnValue = F("Ratzeburger Landstr.");
break;
}
case 260337:
{
returnValue = F("Ratzeburger Str.");
break;
}
case 260338:
{
returnValue = F("Ratzeburger Weg");
break;
}
case 260339:
{
returnValue = F("Ratzeburgstr.");
break;
}
case 260340:
{
returnValue = F("Ratzebuschstr.");
break;
}
case 260341:
{
returnValue = F("Ratzeler Str.");
break;
}
case 260342:
{
returnValue = F("Ratzelstr.");
break;
}
case 260343:
{
returnValue = F("Ratzenberg");
break;
}
case 260344:
{
returnValue = F("Ratzenbergrundweg");
break;
}
case 260345:
{
returnValue = F("Ratzenbuckelallee");
break;
}
case 260346:
{
returnValue = F("Ratzenbüchelstr.");
break;
}
case 260347:
{
returnValue = F("Ratzener Str.");
break;
}
case 260348:
{
returnValue = F("Ratzengasse");
break;
}
case 260349:
{
returnValue = F("Ratzengraben");
break;
}
case 260350:
{
returnValue = F("Ratzengrundweg");
break;
}
case 260351:
{
returnValue = F("Ratzenhofener Str.");
break;
}
case 260352:
{
returnValue = F("Ratzersdorfer Str.");
break;
}
case 260353:
{
returnValue = F("Ratzerter Weg");
break;
}
case 260354:
{
returnValue = F("Ratzgasse");
break;
}
case 260355:
{
returnValue = F("Ratzinger Weg");
break;
}
case 260356:
{
returnValue = F("Rauackerweg");
break;
}
case 260357:
{
returnValue = F("Raubach");
break;
}
case 260358:
{
returnValue = F("Raubacher Pfädchen");
break;
}
case 260359:
{
returnValue = F("Raubacher Str.");
break;
}
case 260360:
{
returnValue = F("Raubacher Weg");
break;
}
case 260361:
{
returnValue = F("Raubachstr.");
break;
}
case 260362:
{
returnValue = F("Raubachweg");
break;
}
case 260363:
{
returnValue = F("Raubbergstr.");
break;
}
case 260364:
{
returnValue = F("Raubeckstr.");
break;
}
case 260365:
{
returnValue = F("Raubershof");
break;
}
case 260366:
{
returnValue = F("Raubershofer Weg");
break;
}
case 260367:
{
returnValue = F("Raubersried");
break;
}
case 260368:
{
returnValue = F("Raubersrieder Weg");
break;
}
case 260369:
{
returnValue = F("Rauberstr.");
break;
}
case 260370:
{
returnValue = F("Rauberweg");
break;
}
case 260371:
{
returnValue = F("Rauberweiherhaus");
break;
}
case 260372:
{
returnValue = F("Rauberweiherhauser Str.");
break;
}
case 260373:
{
returnValue = F("Rauberweiherstr.");
break;
}
case 260374:
{
returnValue = F("Raubgrafentunnel");
break;
}
case 260375:
{
returnValue = F("Raubkammerweg");
break;
}
case 260376:
{
returnValue = F("Raubleh");
break;
}
case 260377:
{
returnValue = F("Raublinger Str.");
break;
}
case 260378:
{
returnValue = F("Raublochstr.");
break;
}
case 260379:
{
returnValue = F("Raubrittergraben");
break;
}
case 260380:
{
returnValue = F("Raubritterpfad Stornfels");
break;
}
case 260381:
{
returnValue = F("Raubsteinschlüchte");
break;
}
case 260382:
{
returnValue = F("Raubühl");
break;
}
case 260383:
{
returnValue = F("Raubühlweg");
break;
}
case 260384:
{
returnValue = F("Rauchbeinstr.");
break;
}
case 260385:
{
returnValue = F("Rauchberg");
break;
}
case 260386:
{
returnValue = F("Rauchbichl");
break;
}
case 260387:
{
returnValue = F("Rauchenauel");
break;
}
case 260388:
{
returnValue = F("Rauchenbergstr.");
break;
}
case 260389:
{
returnValue = F("Rauchenbergweg");
break;
}
case 260390:
{
returnValue = F("Rauchenhalde");
break;
}
case 260391:
{
returnValue = F("Raucherbereich");
break;
}
case 260392:
{
returnValue = F("Raucherhof");
break;
}
case 260393:
{
returnValue = F("Rauchfussweg");
break;
}
case 260394:
{
returnValue = F("Rauchfußstr.");
break;
}
case 260395:
{
returnValue = F("Rauchgründlein");
break;
}
case 260396:
{
returnValue = F("Rauchlederweg");
break;
}
case 260397:
{
returnValue = F("Rauchlochweg");
break;
}
case 260398:
{
returnValue = F("Rauchmüllerstr.");
break;
}
case 260399:
{
returnValue = F("Rauchschwaigweg");
break;
}
case 260400:
{
returnValue = F("Rauchschwalbe Rundweg");
break;
}
case 260401:
{
returnValue = F("Rauchschwalbenweg");
break;
}
case 260402:
{
returnValue = F("Rauchstr.");
break;
}
case 260403:
{
returnValue = F("Rauchweg");
break;
}
case 260404:
{
returnValue = F("Rauchwinkel");
break;
}
case 260405:
{
returnValue = F("Rauchwinkelgasse");
break;
}
case 260406:
{
returnValue = F("Rauchäcker-Ring");
break;
}
case 260407:
{
returnValue = F("Rauchäckerstr.");
break;
}
case 260408:
{
returnValue = F("Raudelle");
break;
}
case 260409:
{
returnValue = F("Raudener Str.");
break;
}
case 260410:
{
returnValue = F("Raudengrund");
break;
}
case 260411:
{
returnValue = F("Raudenitzer Berg");
break;
}
case 260412:
{
returnValue = F("Raudestr.");
break;
}
case 260413:
{
returnValue = F("Raudigelweg");
break;
}
case 260414:
{
returnValue = F("Raudnitzer Str.");
break;
}
case 260415:
{
returnValue = F("Raudobelweg");
break;
}
case 260416:
{
returnValue = F("Raudtener Str.");
break;
}
case 260417:
{
returnValue = F("Raue Gaß");
break;
}
case 260418:
{
returnValue = F("Raue Halde");
break;
}
case 260419:
{
returnValue = F("Raue Äcker");
break;
}
case 260420:
{
returnValue = F("Rauenberg");
break;
}
case 260421:
{
returnValue = F("Rauenberger Str.");
break;
}
case 260422:
{
returnValue = F("Rauenbergweg");
break;
}
case 260423:
{
returnValue = F("Rauenbuch");
break;
}
case 260424:
{
returnValue = F("Rauendahlstr.");
break;
}
case 260425:
{
returnValue = F("Rauenecker Weg");
break;
}
case 260426:
{
returnValue = F("Raueneckgasse");
break;
}
case 260427:
{
returnValue = F("Raueneggstr.");
break;
}
case 260428:
{
returnValue = F("Rauener Kirchweg");
break;
}
case 260429:
{
returnValue = F("Rauener Str.");
break;
}
case 260430:
{
returnValue = F("Rauengrundstr.");
break;
}
case 260431:
{
returnValue = F("Rauenhahn");
break;
}
case 260432:
{
returnValue = F("Rauenhahner Mühle");
break;
}
case 260433:
{
returnValue = F("Rauenhahner Weg");
break;
}
case 260434:
{
returnValue = F("Rauensiepenstr.");
break;
}
case 260435:
{
returnValue = F("Rauenstadter Str.");
break;
}
case 260436:
{
returnValue = F("Rauenstein");
break;
}
case 260437:
{
returnValue = F("Rauensteiner Str.");
break;
}
case 260438:
{
returnValue = F("Rauensteinstr.");
break;
}
case 260439:
{
returnValue = F("Rauensteinweg");
break;
}
case 260440:
{
returnValue = F("Rauental");
break;
}
case 260441:
{
returnValue = F("Rauentaler Bergstr.");
break;
}
case 260442:
{
returnValue = F("Rauentaler Str.");
break;
}
case 260443:
{
returnValue = F("Rauentalshöhe");
break;
}
case 260444:
{
returnValue = F("Rauenthaler Str.");
break;
}
case 260445:
{
returnValue = F("Rauenthaler Weg");
break;
}
case 260446:
{
returnValue = F("Rauenweg");
break;
}
case 260447:
{
returnValue = F("Rauer Grund");
break;
}
case 260448:
{
returnValue = F("Rauer Werth");
break;
}
case 260449:
{
returnValue = F("Rauershofstr.");
break;
}
case 260450:
{
returnValue = F("Rauesstückweg");
break;
}
case 260451:
{
returnValue = F("Raufeldstr.");
break;
}
case 260452:
{
returnValue = F("Raufendorfer Gasse");
break;
}
case 260453:
{
returnValue = F("Raufengraben");
break;
}
case 260454:
{
returnValue = F("Raufenweg");
break;
}
case 260455:
{
returnValue = F("Raufteschstr.");
break;
}
case 260456:
{
returnValue = F("Raugasse");
break;
}
case 260457:
{
returnValue = F("Rauglenwiesen");
break;
}
case 260458:
{
returnValue = F("Raugrabenweg");
break;
}
case 260459:
{
returnValue = F("Raugraf-Georg-Str.");
break;
}
case 260460:
{
returnValue = F("Raugrafenstr.");
break;
}
case 260461:
{
returnValue = F("Raugrundstr.");
break;
}
case 260462:
{
returnValue = F("Raugrundweg");
break;
}
case 260463:
{
returnValue = F("Rauhaldenweg");
break;
}
case 260464:
{
returnValue = F("Rauhaldweg");
break;
}
case 260465:
{
returnValue = F("Rauhalmstr.");
break;
}
case 260466:
{
returnValue = F("Rauhausfeld");
break;
}
case 260467:
{
returnValue = F("Rauhbach");
break;
}
case 260468:
{
returnValue = F("Rauhbank");
break;
}
case 260469:
{
returnValue = F("Rauhbergen");
break;
}
case 260470:
{
returnValue = F("Rauhbergstr.");
break;
}
case 260471:
{
returnValue = F("Rauhbergstrraße");
break;
}
case 260472:
{
returnValue = F("Rauhbusch");
break;
}
case 260473:
{
returnValue = F("Rauhe Brühl");
break;
}
case 260474:
{
returnValue = F("Rauhe Egge");
break;
}
case 260475:
{
returnValue = F("Rauhe Gasse");
break;
}
case 260476:
{
returnValue = F("Rauhe Halde Weg");
break;
}
case 260477:
{
returnValue = F("Rauhe Hardt");
break;
}
case 260478:
{
returnValue = F("Rauhe Hecke");
break;
}
case 260479:
{
returnValue = F("Rauhe Horst");
break;
}
case 260480:
{
returnValue = F("Rauhe Häge");
break;
}
case 260481:
{
returnValue = F("Rauhe Hüls");
break;
}
case 260482:
{
returnValue = F("Rauhe Kämpe");
break;
}
case 260483:
{
returnValue = F("Rauhe Steige");
break;
}
case 260484:
{
returnValue = F("Rauhe Str.");
break;
}
case 260485:
{
returnValue = F("Rauhe Stätte");
break;
}
case 260486:
{
returnValue = F("Rauhe Wiese");
break;
}
case 260487:
{
returnValue = F("Rauhe Wiesen");
break;
}
case 260488:
{
returnValue = F("Rauheck");
break;
}
case 260489:
{
returnValue = F("Rauheckstr.");
break;
}
case 260490:
{
returnValue = F("Rauhecksweg");
break;
}
case 260491:
{
returnValue = F("Rauheckweg");
break;
}
case 260492:
{
returnValue = F("Rauhehorst");
break;
}
case 260493:
{
returnValue = F("Rauhem See Rundweg");
break;
}
case 260494:
{
returnValue = F("Rauhen Debus");
break;
}
case 260495:
{
returnValue = F("Rauhen See Rundweg");
break;
}
case 260496:
{
returnValue = F("Rauhen Sundern");
break;
}
case 260497:
{
returnValue = F("Rauhenbergstr.");
break;
}
case 260498:
{
returnValue = F("Rauhenbergweg");
break;
}
case 260499:
{
returnValue = F("Rauhenbichl");
break;
}
case 260500:
{
returnValue = F("Rauhensteinstr.");
break;
}
case 260501:
{
returnValue = F("Rauhensteinweg");
break;
}
case 260502:
{
returnValue = F("Rauhenstr.");
break;
}
case 260503:
{
returnValue = F("Rauhentalstr.");
break;
}
case 260504:
{
returnValue = F("Rauhenwiesen");
break;
}
case 260505:
{
returnValue = F("Rauhenzeller Str.");
break;
}
case 260506:
{
returnValue = F("Rauher Berg");
break;
}
case 260507:
{
returnValue = F("Rauher Burren");
break;
}
case 260508:
{
returnValue = F("Rauher Busch");
break;
}
case 260509:
{
returnValue = F("Rauher Dorn");
break;
}
case 260510:
{
returnValue = F("Rauher Grund");
break;
}
case 260511:
{
returnValue = F("Rauher Hohn");
break;
}
case 260512:
{
returnValue = F("Rauher Hund");
break;
}
case 260513:
{
returnValue = F("Rauher Hügel");
break;
}
case 260514:
{
returnValue = F("Rauher Kamp");
break;
}
case 260515:
{
returnValue = F("Rauher Kapf Weg");
break;
}
case 260516:
{
returnValue = F("Rauher Siefen");
break;
}
case 260517:
{
returnValue = F("Rauher Stich");
break;
}
case 260518:
{
returnValue = F("Rauher Stiefel");
break;
}
case 260519:
{
returnValue = F("Rauher Str.");
break;
}
case 260520:
{
returnValue = F("Rauher Wald Weg");
break;
}
case 260521:
{
returnValue = F("Rauher Weg");
break;
}
case 260522:
{
returnValue = F("Rauher-Kulm-Str.");
break;
}
case 260523:
{
returnValue = F("Rauher-Triebweg");
break;
}
case 260524:
{
returnValue = F("Rauherstr.");
break;
}
case 260525:
{
returnValue = F("Rauherweg");
break;
}
case 260526:
{
returnValue = F("Rauhes Luch");
break;
}
case 260527:
{
returnValue = F("Rauhgasse");
break;
}
case 260528:
{
returnValue = F("Rauhglassertweg");
break;
}
case 260529:
{
returnValue = F("Rauhgässleweg");
break;
}
case 260530:
{
returnValue = F("Rauhhalde");
break;
}
case 260531:
{
returnValue = F("Rauhhaldenweg");
break;
}
case 260532:
{
returnValue = F("Rauhhau");
break;
}
case 260533:
{
returnValue = F("Rauhhornstr.");
break;
}
case 260534:
{
returnValue = F("Rauhhornweg");
break;
}
case 260535:
{
returnValue = F("Rauhhölterberg");
break;
}
case 260536:
{
returnValue = F("Rauhkampweg");
break;
}
case 260537:
{
returnValue = F("Rauhkastenweg");
break;
}
case 260538:
{
returnValue = F("Rauhkopfstr.");
break;
}
case 260539:
{
returnValue = F("Rauhleite");
break;
}
case 260540:
{
returnValue = F("Rauhleitenstr.");
break;
}
case 260541:
{
returnValue = F("Rauhmühle Planie");
break;
}
case 260542:
{
returnValue = F("Rauhofweg");
break;
}
case 260543:
{
returnValue = F("Rauholzstr.");
break;
}
case 260544:
{
returnValue = F("Rauhornweg");
break;
}
case 260545:
{
returnValue = F("Rauhschlade");
break;
}
case 260546:
{
returnValue = F("Rauhtopfweg");
break;
}
case 260547:
{
returnValue = F("Rauhutstr.");
break;
}
case 260548:
{
returnValue = F("Rauhweid");
break;
}
case 260549:
{
returnValue = F("Rauhwiesen");
break;
}
case 260550:
{
returnValue = F("Rauhwiesenstr.");
break;
}
case 260551:
{
returnValue = F("Rauhwiesenweg");
break;
}
case 260552:
{
returnValue = F("Rauhäckerstr.");
break;
}
case 260553:
{
returnValue = F("Rauhöfer Weg");
break;
}
case 260554:
{
returnValue = F("Rauhörnleweg");
break;
}
case 260555:
{
returnValue = F("Rauhöschweg");
break;
}
case 260556:
{
returnValue = F("Raukamp");
break;
}
case 260557:
{
returnValue = F("Raukastenweg");
break;
}
case 260558:
{
returnValue = F("Raukenweg");
break;
}
case 260559:
{
returnValue = F("Rauklingenweg");
break;
}
case 260560:
{
returnValue = F("Rauklohweg");
break;
}
case 260561:
{
returnValue = F("Rauks Feld");
break;
}
case 260562:
{
returnValue = F("Rauksloh");
break;
}
case 260563:
{
returnValue = F("Rauland");
break;
}
case 260564:
{
returnValue = F("Raulfs Ufer");
break;
}
case 260565:
{
returnValue = F("Raulfskamp");
break;
}
case 260566:
{
returnValue = F("Raulsweg");
break;
}
case 260567:
{
returnValue = F("Raum");
break;
}
case 260568:
{
returnValue = F("Raumannskaul");
break;
}
case 260569:
{
returnValue = F("Raumbacher Str.");
break;
}
case 260570:
{
returnValue = F("Raumberger Weg");
break;
}
case 260571:
{
returnValue = F("Raumbergweg");
break;
}
case 260572:
{
returnValue = F("Raumbuschweg");
break;
}
case 260573:
{
returnValue = F("Raumeholz");
break;
}
case 260574:
{
returnValue = F("Raumelsberg");
break;
}
case 260575:
{
returnValue = F("Raumelstr.");
break;
}
case 260576:
{
returnValue = F("Raumer Str.");
break;
}
case 260577:
{
returnValue = F("Raumersgasse");
break;
}
case 260578:
{
returnValue = F("Raumerstr.");
break;
}
case 260579:
{
returnValue = F("Raumklammer");
break;
}
case 260580:
{
returnValue = F("Raumländer Str.");
break;
}
case 260581:
{
returnValue = F("Raumoos");
break;
}
case 260582:
{
returnValue = F("Raumredder");
break;
}
case 260583:
{
returnValue = F("Raumstr.");
break;
}
case 260584:
{
returnValue = F("Raumweg");
break;
}
case 260585:
{
returnValue = F("Raumüllerweg");
break;
}
case 260586:
{
returnValue = F("Raun");
break;
}
case 260587:
{
returnValue = F("Raunauer Str.");
break;
}
case 260588:
{
returnValue = F("Raunberg");
break;
}
case 260589:
{
returnValue = F("Rauner Grenzweg");
break;
}
case 260590:
{
returnValue = F("Rauner Grundweg");
break;
}
case 260591:
{
returnValue = F("Rauner Kirchsteig");
break;
}
case 260592:
{
returnValue = F("Rauner Str.");
break;
}
case 260593:
{
returnValue = F("Raunergrund");
break;
}
case 260594:
{
returnValue = F("Raunerstr.");
break;
}
case 260595:
{
returnValue = F("Raunertshofener Str.");
break;
}
case 260596:
{
returnValue = F("Raunerweg");
break;
}
case 260597:
{
returnValue = F("Raunheimer Bruchweg");
break;
}
case 260598:
{
returnValue = F("Raunheimer Str.");
break;
}
case 260599:
{
returnValue = F("Raunitzer Str.");
break;
}
case 260600:
{
returnValue = F("Raunsbergweg");
break;
}
case 260601:
{
returnValue = F("Raunsetstr.");
break;
}
case 260602:
{
returnValue = F("Raunsfeldhöhe");
break;
}
case 260603:
{
returnValue = F("Raunsgasse");
break;
}
case 260604:
{
returnValue = F("Raunsstr.");
break;
}
case 260605:
{
returnValue = F("Raunstr.");
break;
}
case 260606:
{
returnValue = F("Raunsweg");
break;
}
case 260607:
{
returnValue = F("Raunswiesenweg");
break;
}
case 260608:
{
returnValue = F("Raunsäckerweg");
break;
}
case 260609:
{
returnValue = F("Raupelsweg");
break;
}
case 260610:
{
returnValue = F("Raupenbachstr.");
break;
}
case 260611:
{
returnValue = F("Raupenberg");
break;
}
case 260612:
{
returnValue = F("Raupenbergstr.");
break;
}
case 260613:
{
returnValue = F("Raupenbergweg");
break;
}
case 260614:
{
returnValue = F("Raupenbuschweg");
break;
}
case 260615:
{
returnValue = F("Raupenfraßgestell");
break;
}
case 260616:
{
returnValue = F("Raupengasse");
break;
}
case 260617:
{
returnValue = F("Raupenhain");
break;
}
case 260618:
{
returnValue = F("Raupenhainer Str.");
break;
}
case 260619:
{
returnValue = F("Raupenhainer Weg");
break;
}
case 260620:
{
returnValue = F("Raupenhell");
break;
}
case 260621:
{
returnValue = F("Raupenlochweg");
break;
}
case 260622:
{
returnValue = F("Raupennestweg");
break;
}
case 260623:
{
returnValue = F("Raupenschlag");
break;
}
case 260624:
{
returnValue = F("Raupensteinweg");
break;
}
case 260625:
{
returnValue = F("Raupental");
break;
}
case 260626:
{
returnValue = F("Raupenweg");
break;
}
case 260627:
{
returnValue = F("Raupershofstr.");
break;
}
case 260628:
{
returnValue = F("Raupertstr.");
break;
}
case 260629:
{
returnValue = F("Raupolzer Weg");
break;
}
case 260630:
{
returnValue = F("Raurikerstr.");
break;
}
case 260631:
{
returnValue = F("Rauschbachhaldenweg");
break;
}
case 260632:
{
returnValue = F("Rauschbachstr.");
break;
}
case 260633:
{
returnValue = F("Rauschbart");
break;
}
case 260634:
{
returnValue = F("Rauschbartweg");
break;
}
case 260635:
{
returnValue = F("Rauschbeerstr.");
break;
}
case 260636:
{
returnValue = F("Rauschbeerweg");
break;
}
case 260637:
{
returnValue = F("Rauschbergstr.");
break;
}
case 260638:
{
returnValue = F("Rauschbergweg");
break;
}
case 260639:
{
returnValue = F("Rauschbuchweg");
break;
}
case 260640:
{
returnValue = F("Rausche-Hain-Weg");
break;
}
case 260641:
{
returnValue = F("Rauscheider Str.");
break;
}
case 260642:
{
returnValue = F("Rauscheidstr.");
break;
}
case 260643:
{
returnValue = F("Rauschelbach");
break;
}
case 260644:
{
returnValue = F("Rauschenbach");
break;
}
case 260645:
{
returnValue = F("Rauschenbachstr.");
break;
}
case 260646:
{
returnValue = F("Rauschenbachweg");
break;
}
case 260647:
{
returnValue = F("Rauschenberg");
break;
}
case 260648:
{
returnValue = F("Rauschenberger Str.");
break;
}
case 260649:
{
returnValue = F("Rauschenbergstr.");
break;
}
case 260650:
{
returnValue = F("Rauschenbergweg");
break;
}
case 260651:
{
returnValue = F("Rauschenbrunnenweg");
break;
}
case 260652:
{
returnValue = F("Rauschenburgstr.");
break;
}
case 260653:
{
returnValue = F("Rauschenbusch Weg");
break;
}
case 260654:
{
returnValue = F("Rauschenbuschstr.");
break;
}
case 260655:
{
returnValue = F("Rauschendorfer Str.");
break;
}
case 260656:
{
returnValue = F("Rauschendorfer Weg");
break;
}
case 260657:
{
returnValue = F("Rauschener Str.");
break;
}
case 260658:
{
returnValue = F("Rauschenflussweg");
break;
}
case 260659:
{
returnValue = F("Rauschenflußweg");
break;
}
case 260660:
{
returnValue = F("Rauschengasse");
break;
}
case 260661:
{
returnValue = F("Rauschengesees");
break;
}
case 260662:
{
returnValue = F("Rauschenhammermühle");
break;
}
case 260663:
{
returnValue = F("Rauschenplatstr.");
break;
}
case 260664:
{
returnValue = F("Rauschenwasser");
break;
}
case 260665:
{
returnValue = F("Rauschenweg");
break;
}
case 260666:
{
returnValue = F("Rauscher");
break;
}
case 260667:
{
returnValue = F("Rauscher Fußweg");
break;
}
case 260668:
{
returnValue = F("Rauscher Park");
break;
}
case 260669:
{
returnValue = F("Rauscher Str.");
break;
}
case 260670:
{
returnValue = F("Rauscher Weg");
break;
}
case 260671:
{
returnValue = F("Rauschergasse");
break;
}
case 260672:
{
returnValue = F("Rauschermühle");
break;
}
case 260673:
{
returnValue = F("Rauschermühlenstr.");
break;
}
case 260674:
{
returnValue = F("Rauscherstr.");
break;
}
case 260675:
{
returnValue = F("Rauscherweg");
break;
}
case 260676:
{
returnValue = F("Rauschet");
break;
}
case 260677:
{
returnValue = F("Rauscheweg");
break;
}
case 260678:
{
returnValue = F("Rauschgasse");
break;
}
case 260679:
{
returnValue = F("Rauschgassl");
break;
}
case 260680:
{
returnValue = F("Rauschgraben");
break;
}
case 260681:
{
returnValue = F("Rauschhuber");
break;
}
case 260682:
{
returnValue = F("Rausching");
break;
}
case 260683:
{
returnValue = F("Rauschpennstr.");
break;
}
case 260684:
{
returnValue = F("Rauschwalder Str.");
break;
}
case 260685:
{
returnValue = F("Rauschweg");
break;
}
case 260686:
{
returnValue = F("Rauschweiglstr.");
break;
}
case 260687:
{
returnValue = F("Rausdorfer Str.");
break;
}
case 260688:
{
returnValue = F("Rausdorfer Weg");
break;
}
case 260689:
{
returnValue = F("Rausenbergerstr.");
break;
}
case 260690:
{
returnValue = F("Raushofstr.");
break;
}
case 260691:
{
returnValue = F("Rausinger Str.");
break;
}
case 260692:
{
returnValue = F("Rausse");
break;
}
case 260693:
{
returnValue = F("Rausteinstr.");
break;
}
case 260694:
{
returnValue = F("Raustr.");
break;
}
case 260695:
{
returnValue = F("Rautal");
break;
}
case 260696:
{
returnValue = F("Rautal-Klingenweg");
break;
}
case 260697:
{
returnValue = F("Rautalweg");
break;
}
case 260698:
{
returnValue = F("Rautbrühl");
break;
}
case 260699:
{
returnValue = F("Raute");
break;
}
case 260700:
{
returnValue = F("Rautebuschschneise");
break;
}
case 260701:
{
returnValue = F("Rautenbachbrücke");
break;
}
case 260702:
{
returnValue = F("Rautenbacher Weg");
break;
}
case 260703:
{
returnValue = F("Rautenbachstr.");
break;
}
case 260704:
{
returnValue = F("Rautenberg");
break;
}
case 260705:
{
returnValue = F("Rautenberger Str.");
break;
}
case 260706:
{
returnValue = F("Rautenbergstr.");
break;
}
case 260707:
{
returnValue = F("Rautenbergweg");
break;
}
case 260708:
{
returnValue = F("Rautenbreite");
break;
}
case 260709:
{
returnValue = F("Rautendeleinweg");
break;
}
case 260710:
{
returnValue = F("Rautendorfer Damm");
break;
}
case 260711:
{
returnValue = F("Rautendorfer Landstr.");
break;
}
case 260712:
{
returnValue = F("Rautendorfer Meinheide");
break;
}
case 260713:
{
returnValue = F("Rautendorfer Str.");
break;
}
case 260714:
{
returnValue = F("Rautenfeld");
break;
}
case 260715:
{
returnValue = F("Rautengasse");
break;
}
case 260716:
{
returnValue = F("Rautenhofer Damm");
break;
}
case 260717:
{
returnValue = F("Rautenhofer Weg");
break;
}
case 260718:
{
returnValue = F("Rautenkranz");
break;
}
case 260719:
{
returnValue = F("Rautenkranzer Str.");
break;
}
case 260720:
{
returnValue = F("Rautenkranzer Weg");
break;
}
case 260721:
{
returnValue = F("Rautenkranzer Wiesenweg");
break;
}
case 260722:
{
returnValue = F("Rautensteig");
break;
}
case 260723:
{
returnValue = F("Rautenstr.");
break;
}
case 260724:
{
returnValue = F("Rautenstrauchstr.");
break;
}
case 260725:
{
returnValue = F("Rautenthalerstr.");
break;
}
case 260726:
{
returnValue = F("Rautenweg");
break;
}
case 260727:
{
returnValue = F("Rauterbergweg");
break;
}
case 260728:
{
returnValue = F("Rauterkusen");
break;
}
case 260729:
{
returnValue = F("Rauterstr.");
break;
}
case 260730:
{
returnValue = F("Rautertstr.");
break;
}
case 260731:
{
returnValue = F("Rauteweg");
break;
}
case 260732:
{
returnValue = F("Rauthausgäßle");
break;
}
case 260733:
{
returnValue = F("Rauthauweg");
break;
}
case 260734:
{
returnValue = F("Rautheimer Platz");
break;
}
case 260735:
{
returnValue = F("Rautheimer Str.");
break;
}
case 260736:
{
returnValue = F("Rautheimhöhe");
break;
}
case 260737:
{
returnValue = F("Rauthstr.");
break;
}
case 260738:
{
returnValue = F("Rautschbergweg");
break;
}
case 260739:
{
returnValue = F("Rautschwaldweg");
break;
}
case 260740:
{
returnValue = F("Rautstr.");
break;
}
case 260741:
{
returnValue = F("Rautweg");
break;
}
case 260742:
{
returnValue = F("Rautzenberg");
break;
}
case 260743:
{
returnValue = F("Rauwagnerstr.");
break;
}
case 260744:
{
returnValue = F("Rauwaldstr.");
break;
}
case 260745:
{
returnValue = F("Rauweg");
break;
}
case 260746:
{
returnValue = F("Rauwiesenstr.");
break;
}
case 260747:
{
returnValue = F("Rauwiesenweg");
break;
}
case 260748:
{
returnValue = F("Rauwolffstr.");
break;
}
case 260749:
{
returnValue = F("Rauwöhrstr.");
break;
}
case 260750:
{
returnValue = F("Rauxeler Str.");
break;
}
case 260751:
{
returnValue = F("Raußlitzer Str.");
break;
}
case 260752:
{
returnValue = F("Raußmühlstr.");
break;
}
case 260753:
{
returnValue = F("Ravardistr.");
break;
}
case 260754:
{
returnValue = F("Raveike");
break;
}
case 260755:
{
returnValue = F("Ravel-Weg");
break;
}
case 260756:
{
returnValue = F("Ravelinstr.");
break;
}
case 260757:
{
returnValue = F("Ravelsberger Allee");
break;
}
case 260758:
{
returnValue = F("Ravelsberger Str.");
break;
}
case 260759:
{
returnValue = F("Ravelstr.");
break;
}
case 260760:
{
returnValue = F("Ravenbusch");
break;
}
case 260761:
{
returnValue = F("Ravendyk");
break;
}
case 260762:
{
returnValue = F("Ravener Dorfstr.");
break;
}
case 260763:
{
returnValue = F("Ravener Str.");
break;
}
case 260764:
{
returnValue = F("Ravengiersburger Str.");
break;
}
case 260765:
{
returnValue = F("Ravenhorster Steig");
break;
}
case 260766:
{
returnValue = F("Ravenna-Park");
break;
}
case 260767:
{
returnValue = F("Ravennaschlucht");
break;
}
case 260768:
{
returnValue = F("Ravensberg");
break;
}
case 260769:
{
returnValue = F("Ravensberger Freistuhl");
break;
}
case 260770:
{
returnValue = F("Ravensberger Holz");
break;
}
case 260771:
{
returnValue = F("Ravensberger Park");
break;
}
case 260772:
{
returnValue = F("Ravensberger Ring");
break;
}
case 260773:
{
returnValue = F("Ravensberger Str.");
break;
}
case 260774:
{
returnValue = F("Ravensberger Weg");
break;
}
case 260775:
{
returnValue = F("Ravensbergerstr.");
break;
}
case 260776:
{
returnValue = F("Ravensberggestell");
break;
}
case 260777:
{
returnValue = F("Ravensbergstr.");
break;
}
case 260778:
{
returnValue = F("Ravensbergweg");
break;
}
case 260779:
{
returnValue = F("Ravensbrink");
break;
}
case 260780:
{
returnValue = F("Ravensbrücker Dorfstr.");
break;
}
case 260781:
{
returnValue = F("Ravensburg");
break;
}
case 260782:
{
returnValue = F("Ravensburger Platz");
break;
}
case 260783:
{
returnValue = F("Ravensburger Str.");
break;
}
case 260784:
{
returnValue = F("Ravensburger Weg");
break;
}
case 260785:
{
returnValue = F("Ravensburgstr.");
break;
}
case 260786:
{
returnValue = F("Ravenshörn");
break;
}
case 260787:
{
returnValue = F("Ravenskamp");
break;
}
case 260788:
{
returnValue = F("Ravenslandstr.");
break;
}
case 260789:
{
returnValue = F("Ravenspurgerstr.");
break;
}
case 260790:
{
returnValue = F("Ravensruher Weg");
break;
}
case 260791:
{
returnValue = F("Ravensstr.");
break;
}
case 260792:
{
returnValue = F("Ravensteiner Promenade");
break;
}
case 260793:
{
returnValue = F("Ravensteiner Str.");
break;
}
case 260794:
{
returnValue = F("Ravensteiner Weg");
break;
}
case 260795:
{
returnValue = F("Ravensteinstr.");
break;
}
case 260796:
{
returnValue = F("Ravensteinweg");
break;
}
case 260797:
{
returnValue = F("Ravensteynstr.");
break;
}
case 260798:
{
returnValue = F("Ravensteynweg");
break;
}
case 260799:
{
returnValue = F("Ravenstr.");
break;
}
case 260800:
{
returnValue = F("Ravensweg");
break;
}
case 260801:
{
returnValue = F("Ravenswiede");
break;
}
case 260802:
{
returnValue = F("Ravenweg");
break;
}
case 260803:
{
returnValue = F("Ravenéstr.");
break;
}
case 260804:
{
returnValue = F("Raversbeurener Pfad");
break;
}
case 260805:
{
returnValue = F("Ravestr.");
break;
}
case 260806:
{
returnValue = F("Ravesweg");
break;
}
case 260807:
{
returnValue = F("Raviele");
break;
}
case 260808:
{
returnValue = F("Ravolzhäuser Str.");
break;
}
case 260809:
{
returnValue = F("Rawaule");
break;
}
case 260810:
{
returnValue = F("Raweinstr.");
break;
}
case 260811:
{
returnValue = F("Rawers Hof");
break;
}
case 260812:
{
returnValue = F("Rawerspurte");
break;
}
case 260813:
{
returnValue = F("Rawestr.");
break;
}
case 260814:
{
returnValue = F("Rawiestr.");
break;
}
case 260815:
{
returnValue = F("Rawisch");
break;
}
case 260816:
{
returnValue = F("Rawitscher Str.");
break;
}
case 260817:
{
returnValue = F("Ray");
break;
}
case 260818:
{
returnValue = F("Rayendonk");
break;
}
case 260819:
{
returnValue = F("Rayener Kirchweg");
break;
}
case 260820:
{
returnValue = F("Rayener Str.");
break;
}
case 260821:
{
returnValue = F("Rayer Str.");
break;
}
case 260822:
{
returnValue = F("Rayer Weg");
break;
}
case 260823:
{
returnValue = F("Raykoppeln");
break;
}
case 260824:
{
returnValue = F("Raymannsgrund");
break;
}
case 260825:
{
returnValue = F("Raymond-Jacquet-Weg");
break;
}
case 260826:
{
returnValue = F("Raymondstr.");
break;
}
case 260827:
{
returnValue = F("Raymund-Schmitt-Str.");
break;
}
case 260828:
{
returnValue = F("Raymundweg");
break;
}
case 260829:
{
returnValue = F("Raysebruch");
break;
}
case 260830:
{
returnValue = F("Rayskistr.");
break;
}
case 260831:
{
returnValue = F("Raßbach");
break;
}
case 260832:
{
returnValue = F("Raßbachplatz");
break;
}
case 260833:
{
returnValue = F("Raßberg");
break;
}
case 260834:
{
returnValue = F("Raßdorf");
break;
}
case 260835:
{
returnValue = F("Raßdorfer Str.");
break;
}
case 260836:
{
returnValue = F("Raßdörferstr.");
break;
}
case 260837:
{
returnValue = F("Raßingvenn");
break;
}
case 260838:
{
returnValue = F("Raßlitz");
break;
}
case 260839:
{
returnValue = F("Raßmannsdorf");
break;
}
case 260840:
{
returnValue = F("Raßmannsdorfer Str.");
break;
}
case 260841:
{
returnValue = F("Raßnitzer Str.");
break;
}
case 260842:
{
returnValue = F("Raßthaler-Weg");
break;
}
case 260843:
{
returnValue = F("Raßweilerstr.");
break;
}
case 260844:
{
returnValue = F("Raßweilerweg");
break;
}
case 260845:
{
returnValue = F("Reaktorwiese");
break;
}
case 260846:
{
returnValue = F("Realschule");
break;
}
case 260847:
{
returnValue = F("Realschulstr.");
break;
}
case 260848:
{
returnValue = F("Realschulweg");
break;
}
case 260849:
{
returnValue = F("Realweg");
break;
}
case 260850:
{
returnValue = F("Reauer Weg");
break;
}
case 260851:
{
returnValue = F("Reaumurweg");
break;
}
case 260852:
{
returnValue = F("Rebacker");
break;
}
case 260853:
{
returnValue = F("Rebackerweg");
break;
}
case 260854:
{
returnValue = F("Rebaystr.");
break;
}
case 260855:
{
returnValue = F("Rebbachstr.");
break;
}
case 260856:
{
returnValue = F("Rebbeker Str.");
break;
}
case 260857:
{
returnValue = F("Rebbelmundstr.");
break;
}
case 260858:
{
returnValue = F("Rebbelrother Str.");
break;
}
case 260859:
{
returnValue = F("Rebbelstieg");
break;
}
case 260860:
{
returnValue = F("Rebbelteichstr.");
break;
}
case 260861:
{
returnValue = F("Rebberg");
break;
}
case 260862:
{
returnValue = F("Rebbergblick");
break;
}
case 260863:
{
returnValue = F("Rebbergstr.");
break;
}
case 260864:
{
returnValue = F("Rebbergweg");
break;
}
case 260865:
{
returnValue = F("Rebberlaher Str.");
break;
}
case 260866:
{
returnValue = F("Rebberlaher Weg");
break;
}
case 260867:
{
returnValue = F("Rebblick");
break;
}
case 260868:
{
returnValue = F("Rebblütenweg");
break;
}
case 260869:
{
returnValue = F("Rebbächel");
break;
}
case 260870:
{
returnValue = F("Rebdorfer Steg");
break;
}
case 260871:
{
returnValue = F("Rebdorfer Str.");
break;
}
case 260872:
{
returnValue = F("Rebecca-Hanf-Str.");
break;
}
case 260873:
{
returnValue = F("Rebeken");
break;
}
case 260874:
{
returnValue = F("Rebekkaweg");
break;
}
case 260875:
{
returnValue = F("Rebell");
break;
}
case 260876:
{
returnValue = F("Rebelower Damm");
break;
}
case 260877:
{
returnValue = F("Rebels");
break;
}
case 260878:
{
returnValue = F("Rebelswisch");
break;
}
case 260879:
{
returnValue = F("Rebenblütenweg");
break;
}
case 260880:
{
returnValue = F("Rebenbreite");
break;
}
case 260881:
{
returnValue = F("Rebenfeld");
break;
}
case 260882:
{
returnValue = F("Rebengarten");
break;
}
case 260883:
{
returnValue = F("Rebengartenstr.");
break;
}
case 260884:
{
returnValue = F("Rebengasse");
break;
}
case 260885:
{
returnValue = F("Rebengärten");
break;
}
case 260886:
{
returnValue = F("Rebenhang");
break;
}
case 260887:
{
returnValue = F("Rebenhügel");
break;
}
case 260888:
{
returnValue = F("Rebenkamp");
break;
}
case 260889:
{
returnValue = F("Rebenlandweg");
break;
}
case 260890:
{
returnValue = F("Rebenlaube");
break;
}
case 260891:
{
returnValue = F("Rebenpfad");
break;
}
case 260892:
{
returnValue = F("Rebenrain");
break;
}
case 260893:
{
returnValue = F("Rebenranke");
break;
}
case 260894:
{
returnValue = F("Rebenreute");
break;
}
case 260895:
{
returnValue = F("Rebenring");
break;
}
case 260896:
{
returnValue = F("Rebensdorf");
break;
}
case 260897:
{
returnValue = F("Rebenstorfer Weg");
break;
}
case 260898:
{
returnValue = F("Rebenstr.");
break;
}
case 260899:
{
returnValue = F("Rebenstück");
break;
}
case 260900:
{
returnValue = F("Rebenweg");
break;
}
case 260901:
{
returnValue = F("Rebenwinkel");
break;
}
case 260902:
{
returnValue = F("Rebergasse");
break;
}
case 260903:
{
returnValue = F("Rebersreuther Dorfstr.");
break;
}
case 260904:
{
returnValue = F("Rebersreuther Hauptstr.");
break;
}
case 260905:
{
returnValue = F("Reberstr.");
break;
}
case 260906:
{
returnValue = F("Reberweg");
break;
}
case 260907:
{
returnValue = F("Rebesbrunn");
break;
}
case 260908:
{
returnValue = F("Rebesbrunner Str.");
break;
}
case 260909:
{
returnValue = F("Rebesgrüner Str.");
break;
}
case 260910:
{
returnValue = F("Rebetsmatt");
break;
}
case 260911:
{
returnValue = F("Rebgarten");
break;
}
case 260912:
{
returnValue = F("Rebgartenstr.");
break;
}
case 260913:
{
returnValue = F("Rebgartenweg");
break;
}
case 260914:
{
returnValue = F("Rebgasse");
break;
}
case 260915:
{
returnValue = F("Rebgutstr.");
break;
}
case 260916:
{
returnValue = F("Rebgärten");
break;
}
case 260917:
{
returnValue = F("Rebgärtenstr.");
break;
}
case 260918:
{
returnValue = F("Rebgärtle");
break;
}
case 260919:
{
returnValue = F("Rebgässle");
break;
}
case 260920:
{
returnValue = F("Rebhalde");
break;
}
case 260921:
{
returnValue = F("Rebhaldenstr.");
break;
}
case 260922:
{
returnValue = F("Rebhaldenweg");
break;
}
case 260923:
{
returnValue = F("Rebhangstr.");
break;
}
case 260924:
{
returnValue = F("Rebhanstr.");
break;
}
case 260925:
{
returnValue = F("Rebhaunpatt");
break;
}
case 260926:
{
returnValue = F("Rebhauweg");
break;
}
case 260927:
{
returnValue = F("Rebhislitour");
break;
}
case 260928:
{
returnValue = F("Rebhofweg");
break;
}
case 260929:
{
returnValue = F("Rebholzstr.");
break;
}
case 260930:
{
returnValue = F("Rebholzweg");
break;
}
case 260931:
{
returnValue = F("Rebhuhnbogen");
break;
}
case 260932:
{
returnValue = F("Rebhuhndamm");
break;
}
case 260933:
{
returnValue = F("Rebhuhnfeld");
break;
}
case 260934:
{
returnValue = F("Rebhuhngang");
break;
}
case 260935:
{
returnValue = F("Rebhuhngasse");
break;
}
case 260936:
{
returnValue = F("Rebhuhnheide");
break;
}
case 260937:
{
returnValue = F("Rebhuhnkette");
break;
}
case 260938:
{
returnValue = F("Rebhuhnpfad");
break;
}
case 260939:
{
returnValue = F("Rebhuhnsteig");
break;
}
case 260940:
{
returnValue = F("Rebhuhnstiege");
break;
}
case 260941:
{
returnValue = F("Rebhuhnstr.");
break;
}
case 260942:
{
returnValue = F("Rebhuhnswinkel");
break;
}
case 260943:
{
returnValue = F("Rebhuhnweg");
break;
}
case 260944:
{
returnValue = F("Rebhuhnwinkel");
break;
}
case 260945:
{
returnValue = F("Rebhügel");
break;
}
case 260946:
{
returnValue = F("Rebioverbindungsweg");
break;
}
case 260947:
{
returnValue = F("Rebioweg");
break;
}
case 260948:
{
returnValue = F("Reblandstr.");
break;
}
case 260949:
{
returnValue = F("Reblandweg");
break;
}
case 260950:
{
returnValue = F("Reblausweg");
break;
}
case 260951:
{
returnValue = F("Rebleweiher");
break;
}
case 260952:
{
returnValue = F("Reblin");
break;
}
case 260953:
{
returnValue = F("Reblingstr.");
break;
}
case 260954:
{
returnValue = F("Reblingweg");
break;
}
case 260955:
{
returnValue = F("Reblistr.");
break;
}
case 260956:
{
returnValue = F("Rebländerweg");
break;
}
case 260957:
{
returnValue = F("Rebmannshalde");
break;
}
case 260958:
{
returnValue = F("Rebmannstr.");
break;
}
case 260959:
{
returnValue = F("Rebmannsweg");
break;
}
case 260960:
{
returnValue = F("Rebmättleweg");
break;
}
case 260961:
{
returnValue = F("Rebschulweg");
break;
}
case 260962:
{
returnValue = F("Rebsdorfer Str.");
break;
}
case 260963:
{
returnValue = F("Rebstallweg");
break;
}
case 260964:
{
returnValue = F("Rebsteig");
break;
}
case 260965:
{
returnValue = F("Rebsteige");
break;
}
case 260966:
{
returnValue = F("Rebstock");
break;
}
case 260967:
{
returnValue = F("Rebstockpark");
break;
}
case 260968:
{
returnValue = F("Rebstockstr.");
break;
}
case 260969:
{
returnValue = F("Rebstockweg");
break;
}
case 260970:
{
returnValue = F("Rebstr.");
break;
}
case 260971:
{
returnValue = F("Rebstuhlweg");
break;
}
case 260972:
{
returnValue = F("Rebstöckel");
break;
}
case 260973:
{
returnValue = F("Rebstöcker Str.");
break;
}
case 260974:
{
returnValue = F("Rebstöcker Weg");
break;
}
case 260975:
{
returnValue = F("Rebusgasse");
break;
}
case 260976:
{
returnValue = F("Rebweg");
break;
}
case 260977:
{
returnValue = F("Rebwäldele");
break;
}
case 260978:
{
returnValue = F("Recepturhof");
break;
}
case 260979:
{
returnValue = F("Recha-Freier-Platz");
break;
}
case 260980:
{
returnValue = F("Recha-Freier-Str.");
break;
}
case 260981:
{
returnValue = F("Rechackerweg");
break;
}
case 260982:
{
returnValue = F("Rechbach");
break;
}
case 260983:
{
returnValue = F("Rechbachweg");
break;
}
case 260984:
{
returnValue = F("Rechberg");
break;
}
case 260985:
{
returnValue = F("Rechberg Geräumt");
break;
}
case 260986:
{
returnValue = F("Rechberger Str.");
break;
}
case 260987:
{
returnValue = F("Rechberger Weg");
break;
}
case 260988:
{
returnValue = F("Rechberghäuser Str.");
break;
}
case 260989:
{
returnValue = F("Rechberghäuser Weg");
break;
}
case 260990:
{
returnValue = F("Rechbergring");
break;
}
case 260991:
{
returnValue = F("Rechbergstr.");
break;
}
case 260992:
{
returnValue = F("Rechbergweg");
break;
}
case 260993:
{
returnValue = F("Recheder Mühlenweg");
break;
}
case 260994:
{
returnValue = F("Recheldorf");
break;
}
case 260995:
{
returnValue = F("Rechelkopfstr.");
break;
}
case 260996:
{
returnValue = F("Rechelkopfweg");
break;
}
case 260997:
{
returnValue = F("Rechelsberg");
break;
}
case 260998:
{
returnValue = F("Rechelshäuserstr.");
break;
}
case 260999:
{
returnValue = F("Rechelsiepen");
break;
}
case 261000:
{
returnValue = F("Rechen");
break;
}
case 261001:
{
returnValue = F("Rechenacker");
break;
}
case 261002:
{
returnValue = F("Rechenau");
break;
}
case 261003:
{
returnValue = F("Rechenauerstr.");
break;
}
case 261004:
{
returnValue = F("Rechenbachstr.");
break;
}
case 261005:
{
returnValue = F("Rechenberg");
break;
}
case 261006:
{
returnValue = F("Rechenbergallee");
break;
}
case 261007:
{
returnValue = F("Rechenberganlage");
break;
}
case 261008:
{
returnValue = F("Rechenberger Str.");
break;
}
case 261009:
{
returnValue = F("Rechenbergstr.");
break;
}
case 261010:
{
returnValue = F("Rechenbergweg");
break;
}
case 261011:
{
returnValue = F("Rechener Str.");
break;
}
case 261012:
{
returnValue = F("Rechenfahrt");
break;
}
case 261013:
{
returnValue = F("Rechenhausener Str.");
break;
}
case 261014:
{
returnValue = F("Rechenhäuschen");
break;
}
case 261015:
{
returnValue = F("Rechenmachergasse");
break;
}
case 261016:
{
returnValue = F("Rechenmachers Gässle");
break;
}
case 261017:
{
returnValue = F("Rechenmacherweg");
break;
}
case 261018:
{
returnValue = F("Rechenmeisterweg");
break;
}
case 261019:
{
returnValue = F("Rechenmühle");
break;
}
case 261020:
{
returnValue = F("Rechenstr.");
break;
}
case 261021:
{
returnValue = F("Rechensöldenweg");
break;
}
case 261022:
{
returnValue = F("Rechentshofener Str.");
break;
}
case 261023:
{
returnValue = F("Rechentshofer Str.");
break;
}
case 261024:
{
returnValue = F("Rechenweg");
break;
}
case 261025:
{
returnValue = F("Rechenwiesenstr.");
break;
}
case 261026:
{
returnValue = F("Rechertsried");
break;
}
case 261027:
{
returnValue = F("Rechertsrieder Str.");
break;
}
case 261028:
{
returnValue = F("Recheweg");
break;
}
case 261029:
{
returnValue = F("Rechgasse");
break;
}
case 261030:
{
returnValue = F("Rechliner Str.");
break;
}
case 261031:
{
returnValue = F("Rechlstr.");
break;
}
case 261032:
{
returnValue = F("Rechmühle");
break;
}
case 261033:
{
returnValue = F("Rechneigrabenstr.");
break;
}
case 261034:
{
returnValue = F("Rechnerstr.");
break;
}
case 261035:
{
returnValue = F("Rechnitzstr.");
break;
}
case 261036:
{
returnValue = F("Rechstieg");
break;
}
case 261037:
{
returnValue = F("Rechstr.");
break;
}
case 261038:
{
returnValue = F("Recht Up");
break;
}
case 261039:
{
returnValue = F("Rechte Bachgasse");
break;
}
case 261040:
{
returnValue = F("Rechte Brandstr.");
break;
}
case 261041:
{
returnValue = F("Rechte Hahnenbachstr.");
break;
}
case 261042:
{
returnValue = F("Rechte Maingasse");
break;
}
case 261043:
{
returnValue = F("Rechte Tauberstr.");
break;
}
case 261044:
{
returnValue = F("Rechteber Str.");
break;
}
case 261045:
{
returnValue = F("Rechtenbach");
break;
}
case 261046:
{
returnValue = F("Rechtenbacher Hohl");
break;
}
case 261047:
{
returnValue = F("Rechtenbacher Str.");
break;
}
case 261048:
{
returnValue = F("Rechtenbachweg");
break;
}
case 261049:
{
returnValue = F("Rechtenflether Str.");
break;
}
case 261050:
{
returnValue = F("Rechtensteiner Str.");
break;
}
case 261051:
{
returnValue = F("Rechtensteinstr.");
break;
}
case 261052:
{
returnValue = F("Rechter Kreuthweg");
break;
}
case 261053:
{
returnValue = F("Rechter Mühltalweg");
break;
}
case 261054:
{
returnValue = F("Rechter Pappelbach-Wiesenweg");
break;
}
case 261055:
{
returnValue = F("Rechter Römerstallweg");
break;
}
case 261056:
{
returnValue = F("Rechter Steig");
break;
}
case 261057:
{
returnValue = F("Rechter Weg");
break;
}
case 261058:
{
returnValue = F("Rechter Weiler");
break;
}
case 261059:
{
returnValue = F("Rechterallee");
break;
}
case 261060:
{
returnValue = F("Rechterfelder Str.");
break;
}
case 261061:
{
returnValue = F("Rechtern");
break;
}
case 261062:
{
returnValue = F("Rechtern-Weg");
break;
}
case 261063:
{
returnValue = F("Rechterner Moorweg");
break;
}
case 261064:
{
returnValue = F("Rechterner Str.");
break;
}
case 261065:
{
returnValue = F("Rechternstr.");
break;
}
case 261066:
{
returnValue = F("Rechtes Hosenbein");
break;
}
case 261067:
{
returnValue = F("Rechtes Schöntal");
break;
}
case 261068:
{
returnValue = F("Rechtfeld");
break;
}
case 261069:
{
returnValue = F("Rechthalerweg");
break;
}
case 261070:
{
returnValue = F("Rechthienstr.");
break;
}
case 261071:
{
returnValue = F("Rechtiener Esch");
break;
}
case 261072:
{
returnValue = F("Rechtmurgstr.");
break;
}
case 261073:
{
returnValue = F("Rechts am Gäßchen");
break;
}
case 261074:
{
returnValue = F("Rechts dem Albach");
break;
}
case 261075:
{
returnValue = F("Rechts der Alb");
break;
}
case 261076:
{
returnValue = F("Rechts der Schamlah");
break;
}
case 261077:
{
returnValue = F("Rechts der langen Richtstatt");
break;
}
case 261078:
{
returnValue = F("Rechtsanwalt-Krauß-Str.");
break;
}
case 261079:
{
returnValue = F("Rechtstr.");
break;
}
case 261080:
{
returnValue = F("Rechtsweg");
break;
}
case 261081:
{
returnValue = F("Rechtweg");
break;
}
case 261082:
{
returnValue = F("Rechweg");
break;
}
case 261083:
{
returnValue = F("Rechwies");
break;
}
case 261084:
{
returnValue = F("Reckahner Dorfstr.");
break;
}
case 261085:
{
returnValue = F("Reckahner Str.");
break;
}
case 261086:
{
returnValue = F("Recke");
break;
}
case 261087:
{
returnValue = F("Reckelsumer Bach");
break;
}
case 261088:
{
returnValue = F("Reckelsumer Str.");
break;
}
case 261089:
{
returnValue = F("Reckenbacher Str.");
break;
}
case 261090:
{
returnValue = F("Reckenbachstr.");
break;
}
case 261091:
{
returnValue = F("Reckenberg");
break;
}
case 261092:
{
returnValue = F("Reckenberger Str.");
break;
}
case 261093:
{
returnValue = F("Reckenberger Weg");
break;
}
case 261094:
{
returnValue = F("Reckenbergstr.");
break;
}
case 261095:
{
returnValue = F("Reckenbruch");
break;
}
case 261096:
{
returnValue = F("Reckenbuckweg");
break;
}
case 261097:
{
returnValue = F("Reckenbühler Str.");
break;
}
case 261098:
{
returnValue = F("Reckendorfer Weg");
break;
}
case 261099:
{
returnValue = F("Reckenfelder Str.");
break;
}
case 261100:
{
returnValue = F("Reckenforst");
break;
}
case 261101:
{
returnValue = F("Reckengasse");
break;
}
case 261102:
{
returnValue = F("Reckenheek");
break;
}
case 261103:
{
returnValue = F("Reckenhöfe");
break;
}
case 261104:
{
returnValue = F("Reckenmattenstr.");
break;
}
case 261105:
{
returnValue = F("Reckenricht");
break;
}
case 261106:
{
returnValue = F("Reckenrother Weg");
break;
}
case 261107:
{
returnValue = F("Reckensbergstr.");
break;
}
case 261108:
{
returnValue = F("Reckenschwangweg");
break;
}
case 261109:
{
returnValue = F("Reckensteinstr.");
break;
}
case 261110:
{
returnValue = F("Reckenstetten");
break;
}
case 261111:
{
returnValue = F("Reckenstr.");
break;
}
case 261112:
{
returnValue = F("Reckentalstr.");
break;
}
case 261113:
{
returnValue = F("Reckenthaler Str.");
break;
}
case 261114:
{
returnValue = F("Reckenthiner Str.");
break;
}
case 261115:
{
returnValue = F("Reckenthiner Weg");
break;
}
case 261116:
{
returnValue = F("Reckenweg");
break;
}
case 261117:
{
returnValue = F("Reckenziner Dorfstr.");
break;
}
case 261118:
{
returnValue = F("Reckenziner Str.");
break;
}
case 261119:
{
returnValue = F("Recker Grenze");
break;
}
case 261120:
{
returnValue = F("Recker Str.");
break;
}
case 261121:
{
returnValue = F("Reckerberg");
break;
}
case 261122:
{
returnValue = F("Reckerdamm");
break;
}
case 261123:
{
returnValue = F("Reckerdingstr.");
break;
}
case 261124:
{
returnValue = F("Reckerdingsweg");
break;
}
case 261125:
{
returnValue = F("Reckerscheider Str.");
break;
}
case 261126:
{
returnValue = F("Reckershardt");
break;
}
case 261127:
{
returnValue = F("Reckerstal");
break;
}
case 261128:
{
returnValue = F("Reckerstaler Str.");
break;
}
case 261129:
{
returnValue = F("Reckerts Weg");
break;
}
case 261130:
{
returnValue = F("Reckertstr.");
break;
}
case 261131:
{
returnValue = F("Reckeröder Str.");
break;
}
case 261132:
{
returnValue = F("Reckestr.");
break;
}
case 261133:
{
returnValue = F("Reckfeldstr.");
break;
}
case 261134:
{
returnValue = F("Reckhammerstr.");
break;
}
case 261135:
{
returnValue = F("Reckhammerweg");
break;
}
case 261136:
{
returnValue = F("Reckhof");
break;
}
case 261137:
{
returnValue = F("Reckholdernweg");
break;
}
case 261138:
{
returnValue = F("Reckholderreben");
break;
}
case 261139:
{
returnValue = F("Reckholderstr.");
break;
}
case 261140:
{
returnValue = F("Reckinger Str.");
break;
}
case 261141:
{
returnValue = F("Reckingstr.");
break;
}
case 261142:
{
returnValue = F("Recklenbergweg");
break;
}
case 261143:
{
returnValue = F("Recklinger Str.");
break;
}
case 261144:
{
returnValue = F("Recklinghausen");
break;
}
case 261145:
{
returnValue = F("Recklinghauser Str.");
break;
}
case 261146:
{
returnValue = F("Recklinghäuser Damm");
break;
}
case 261147:
{
returnValue = F("Recklinghäuser Str.");
break;
}
case 261148:
{
returnValue = F("Recklingser Str.");
break;
}
case 261149:
{
returnValue = F("Reckmannallee");
break;
}
case 261150:
{
returnValue = F("Reckmannshof");
break;
}
case 261151:
{
returnValue = F("Reckmühle");
break;
}
case 261152:
{
returnValue = F("Recknitz");
break;
}
case 261153:
{
returnValue = F("Recknitzallee");
break;
}
case 261154:
{
returnValue = F("Recknitzring");
break;
}
case 261155:
{
returnValue = F("Recknitzsteig");
break;
}
case 261156:
{
returnValue = F("Recknitzstr.");
break;
}
case 261157:
{
returnValue = F("Recknitzweg");
break;
}
case 261158:
{
returnValue = F("Reckröder Str.");
break;
}
case 261159:
{
returnValue = F("Reckröder Weg");
break;
}
case 261160:
{
returnValue = F("Recksteinstr.");
break;
}
case 261161:
{
returnValue = F("Reckstr.");
break;
}
case 261162:
{
returnValue = F("Recksweg");
break;
}
case 261163:
{
returnValue = F("Reckumer Heide");
break;
}
case 261164:
{
returnValue = F("Reckumer Ring");
break;
}
case 261165:
{
returnValue = F("Reckumer Str.");
break;
}
case 261166:
{
returnValue = F("Reckweg");
break;
}
case 261167:
{
returnValue = F("Reckwiese");
break;
}
case 261168:
{
returnValue = F("Reckwitz");
break;
}
case 261169:
{
returnValue = F("Reclamstr.");
break;
}
case 261170:
{
returnValue = F("Redarierstr.");
break;
}
case 261171:
{
returnValue = F("Redaweg");
break;
}
case 261172:
{
returnValue = F("Redcarstr.");
break;
}
case 261173:
{
returnValue = F("Reddagstr.");
break;
}
case 261174:
{
returnValue = F("Reddebeitz");
break;
}
case 261175:
{
returnValue = F("Reddebeitzer Weg");
break;
}
case 261176:
{
returnValue = F("Reddeber Weg");
break;
}
case 261177:
{
returnValue = F("Reddeberweg");
break;
}
case 261178:
{
returnValue = F("Reddehals");
break;
}
case 261179:
{
returnValue = F("Reddehäuser Str.");
break;
}
case 261180:
{
returnValue = F("Reddenweg");
break;
}
case 261181:
{
returnValue = F("Redder");
break;
}
case 261182:
{
returnValue = F("Redder Str.");
break;
}
case 261183:
{
returnValue = F("Redder am See");
break;
}
case 261184:
{
returnValue = F("Redderallee");
break;
}
case 261185:
{
returnValue = F("Redderbek");
break;
}
case 261186:
{
returnValue = F("Redderberg");
break;
}
case 261187:
{
returnValue = F("Redderblecken");
break;
}
case 261188:
{
returnValue = F("Redderblick");
break;
}
case 261189:
{
returnValue = F("Redderbusch");
break;
}
case 261190:
{
returnValue = F("Redderdoorstraat");
break;
}
case 261191:
{
returnValue = F("Redderhagenweg");
break;
}
case 261192:
{
returnValue = F("Redderkamp");
break;
}
case 261193:
{
returnValue = F("Redderkate");
break;
}
case 261194:
{
returnValue = F("Redderkoppel");
break;
}
case 261195:
{
returnValue = F("Redderkoppelweg");
break;
}
case 261196:
{
returnValue = F("Redderkrog");
break;
}
case 261197:
{
returnValue = F("Redderlohe");
break;
}
case 261198:
{
returnValue = F("Reddernweg");
break;
}
case 261199:
{
returnValue = F("Redderschmiede");
break;
}
case 261200:
{
returnValue = F("Reddersdyck");
break;
}
case 261201:
{
returnValue = F("Reddersenstr.");
break;
}
case 261202:
{
returnValue = F("Redderser Str.");
break;
}
case 261203:
{
returnValue = F("Reddershof");
break;
}
case 261204:
{
returnValue = F("Redderstieg");
break;
}
case 261205:
{
returnValue = F("Redderstr.");
break;
}
case 261206:
{
returnValue = F("Redderstücken");
break;
}
case 261207:
{
returnValue = F("Redderweg");
break;
}
case 261208:
{
returnValue = F("Reddiener Kirchweg");
break;
}
case 261209:
{
returnValue = F("Reddigauer Str.");
break;
}
case 261210:
{
returnValue = F("Reddinger Weg");
break;
}
case 261211:
{
returnValue = F("Reddingshäuser Weg");
break;
}
case 261212:
{
returnValue = F("Redecker Hauptweg");
break;
}
case 261213:
{
returnValue = F("Redecker Str.");
break;
}
case 261214:
{
returnValue = F("Redeckerstr.");
break;
}
case 261215:
{
returnValue = F("Redeckweg");
break;
}
case 261216:
{
returnValue = F("Redefiner Weg");
break;
}
case 261217:
{
returnValue = F("Redegeldstr.");
break;
}
case 261218:
{
returnValue = F("Redekerstr.");
break;
}
case 261219:
{
returnValue = F("Redekerweg");
break;
}
case 261220:
{
returnValue = F("Redekiner Str.");
break;
}
case 261221:
{
returnValue = F("Redekiner Weg");
break;
}
case 261222:
{
returnValue = F("Redekinerweg");
break;
}
case 261223:
{
returnValue = F("Redelbergstr.");
break;
}
case 261224:
{
returnValue = F("Redelsau");
break;
}
case 261225:
{
returnValue = F("Redemitz");
break;
}
case 261226:
{
returnValue = F("Redenallee");
break;
}
case 261227:
{
returnValue = F("Redenbacher Str.");
break;
}
case 261228:
{
returnValue = F("Redener Str.");
break;
}
case 261229:
{
returnValue = F("Redener Weg");
break;
}
case 261230:
{
returnValue = F("Redenstr.");
break;
}
case 261231:
{
returnValue = F("Redentiner Landstr.");
break;
}
case 261232:
{
returnValue = F("Redenweg");
break;
}
case 261233:
{
returnValue = F("Redererstr.");
break;
}
case 261234:
{
returnValue = F("Rederhof");
break;
}
case 261235:
{
returnValue = F("Rederkreuzblick");
break;
}
case 261236:
{
returnValue = F("Redern Schneise");
break;
}
case 261237:
{
returnValue = F("Rederscheider Str.");
break;
}
case 261238:
{
returnValue = F("Rederscheider Weg");
break;
}
case 261239:
{
returnValue = F("Rederstaller Str.");
break;
}
case 261240:
{
returnValue = F("Rederstr.");
break;
}
case 261241:
{
returnValue = F("Rederweg");
break;
}
case 261242:
{
returnValue = F("Rederzhausener Weg");
break;
}
case 261243:
{
returnValue = F("Rederzhauser Str.");
break;
}
case 261244:
{
returnValue = F("Redesch");
break;
}
case 261245:
{
returnValue = F("Redesweg");
break;
}
case 261246:
{
returnValue = F("Redewisch Ausbau");
break;
}
case 261247:
{
returnValue = F("Redewischer Str.");
break;
}
case 261248:
{
returnValue = F("Redigerstr.");
break;
}
case 261249:
{
returnValue = F("Redigerweg");
break;
}
case 261250:
{
returnValue = F("Redinger Triftweg");
break;
}
case 261251:
{
returnValue = F("Redinghovenstr.");
break;
}
case 261252:
{
returnValue = F("Redinskamp");
break;
}
case 261253:
{
returnValue = F("Redlefsstr.");
break;
}
case 261254:
{
returnValue = F("Redlendorf");
break;
}
case 261255:
{
returnValue = F("Redlichstr.");
break;
}
case 261256:
{
returnValue = F("Redling");
break;
}
case 261257:
{
returnValue = F("Redlinghausstr.");
break;
}
case 261258:
{
returnValue = F("Redlingsweg");
break;
}
case 261259:
{
returnValue = F("Redlmühl");
break;
}
case 261260:
{
returnValue = F("Redmannstr.");
break;
}
case 261261:
{
returnValue = F("Redmannweg");
break;
}
case 261262:
{
returnValue = F("Rednitzgrundweg");
break;
}
case 261263:
{
returnValue = F("Rednitzhang");
break;
}
case 261264:
{
returnValue = F("Rednitzhembacher Str.");
break;
}
case 261265:
{
returnValue = F("Rednitzstr.");
break;
}
case 261266:
{
returnValue = F("Rednitzweg");
break;
}
case 261267:
{
returnValue = F("Redoutenweg");
break;
}
case 261268:
{
returnValue = F("Redtenbacherstr.");
break;
}
case 261269:
{
returnValue = F("Reduitstr.");
break;
}
case 261270:
{
returnValue = F("Redweiherstr.");
break;
}
case 261271:
{
returnValue = F("Redwisch");
break;
}
case 261272:
{
returnValue = F("Redwitzer Str.");
break;
}
case 261273:
{
returnValue = F("Redwitzer Weg");
break;
}
case 261274:
{
returnValue = F("Redwitzstr.");
break;
}
case 261275:
{
returnValue = F("Reecker Hauptstr.");
break;
}
case 261276:
{
returnValue = F("Reecker Heide");
break;
}
case 261277:
{
returnValue = F("Reedenweg");
break;
}
case 261278:
{
returnValue = F("Reeder-Ramien-Str.");
break;
}
case 261279:
{
returnValue = F("Reeder-Schiff-Str.");
break;
}
case 261280:
{
returnValue = F("Reeder-Wempe-Str.");
break;
}
case 261281:
{
returnValue = F("Reeder-tom-Dieck-Str.");
break;
}
case 261282:
{
returnValue = F("Reederstr.");
break;
}
case 261283:
{
returnValue = F("Reedestr.");
break;
}
case 261284:
{
returnValue = F("Reefgasse");
break;
}
case 261285:
{
returnValue = F("Reefmannsweg");
break;
}
case 261286:
{
returnValue = F("Reeg");
break;
}
case 261287:
{
returnValue = F("Reehhof");
break;
}
case 261288:
{
returnValue = F("Reeke");
break;
}
case 261289:
{
returnValue = F("Reekeberg");
break;
}
case 261290:
{
returnValue = F("Reeken");
break;
}
case 261291:
{
returnValue = F("Reekens Kamp");
break;
}
case 261292:
{
returnValue = F("Reekenweg");
break;
}
case 261293:
{
returnValue = F("Reeker Barg");
break;
}
case 261294:
{
returnValue = F("Reekestr.");
break;
}
case 261295:
{
returnValue = F("Reekeweg");
break;
}
case 261296:
{
returnValue = F("Reekscher Weg");
break;
}
case 261297:
{
returnValue = F("Reekstr.");
break;
}
case 261298:
{
returnValue = F("Reelingstr.");
break;
}
case 261299:
{
returnValue = F("Reelitzsteg");
break;
}
case 261300:
{
returnValue = F("Reelkirchener Str.");
break;
}
case 261301:
{
returnValue = F("Reelsberg");
break;
}
case 261302:
{
returnValue = F("Reelser Str.");
break;
}
case 261303:
{
returnValue = F("Reelserloh");
break;
}
case 261304:
{
returnValue = F("Reem");
break;
}
case 261305:
{
returnValue = F("Reener Str.");
break;
}
case 261306:
{
returnValue = F("Reenerland");
break;
}
case 261307:
{
returnValue = F("Reenkamp");
break;
}
case 261308:
{
returnValue = F("Reent-Eilts-Weg");
break;
}
case 261309:
{
returnValue = F("Reepen");
break;
}
case 261310:
{
returnValue = F("Reepenweg");
break;
}
case 261311:
{
returnValue = F("Reeperbahn");
break;
}
case 261312:
{
returnValue = F("Reeperstieg");
break;
}
case 261313:
{
returnValue = F("Reepeweg");
break;
}
case 261314:
{
returnValue = F("Reepkamp");
break;
}
case 261315:
{
returnValue = F("Reepmoorsweg");
break;
}
case 261316:
{
returnValue = F("Reeps");
break;
}
case 261317:
{
returnValue = F("Reepschlägerbahn");
break;
}
case 261318:
{
returnValue = F("Reepschlägerstr.");
break;
}
case 261319:
{
returnValue = F("Reepschlägertwiete");
break;
}
case 261320:
{
returnValue = F("Reepschlägerweg");
break;
}
case 261321:
{
returnValue = F("Reepsholter Alter Weg");
break;
}
case 261322:
{
returnValue = F("Reepsholter Birkenweg");
break;
}
case 261323:
{
returnValue = F("Reepsholter Feldkamp");
break;
}
case 261324:
{
returnValue = F("Reepsholter Feldweg");
break;
}
case 261325:
{
returnValue = F("Reepsholter Grenzweg");
break;
}
case 261326:
{
returnValue = F("Reepsholter Hauptstr.");
break;
}
case 261327:
{
returnValue = F("Reepsholter Rosenweg");
break;
}
case 261328:
{
returnValue = F("Reerer Damm");
break;
}
case 261329:
{
returnValue = F("Reerslake");
break;
}
case 261330:
{
returnValue = F("Reersumer Str.");
break;
}
case 261331:
{
returnValue = F("Reesbachstr.");
break;
}
case 261332:
{
returnValue = F("Reesberg");
break;
}
case 261333:
{
returnValue = F("Reesbergsiedlung");
break;
}
case 261334:
{
returnValue = F("Reesbergstr.");
break;
}
case 261335:
{
returnValue = F("Reesbergweg");
break;
}
case 261336:
{
returnValue = F("Reesdorfer Dorfstr.");
break;
}
case 261337:
{
returnValue = F("Reesdorfer Str.");
break;
}
case 261338:
{
returnValue = F("Reesdorfer Weg");
break;
}
case 261339:
{
returnValue = F("Reese");
break;
}
case 261340:
{
returnValue = F("Reese-Park");
break;
}
case 261341:
{
returnValue = F("Reeseallee");
break;
}
case 261342:
{
returnValue = F("Reesenanger");
break;
}
case 261343:
{
returnValue = F("Reesenbarg");
break;
}
case 261344:
{
returnValue = F("Reesenberg");
break;
}
case 261345:
{
returnValue = F("Reesenbüttler Graben");
break;
}
case 261346:
{
returnValue = F("Reesenbüttler Redder");
break;
}
case 261347:
{
returnValue = F("Reesendamm");
break;
}
case 261348:
{
returnValue = F("Reesener Str.");
break;
}
case 261349:
{
returnValue = F("Reesenhöh");
break;
}
case 261350:
{
returnValue = F("Reesenkamp");
break;
}
case 261351:
{
returnValue = F("Reesenufer");
break;
}
case 261352:
{
returnValue = F("Reeser Feld");
break;
}
case 261353:
{
returnValue = F("Reeser Landstr.");
break;
}
case 261354:
{
returnValue = F("Reeser Str.");
break;
}
case 261355:
{
returnValue = F("Reeser Weg");
break;
}
case 261356:
{
returnValue = F("Reeserschanz");
break;
}
case 261357:
{
returnValue = F("Reesestr.");
break;
}
case 261358:
{
returnValue = F("Reeseweg");
break;
}
case 261359:
{
returnValue = F("Reeshoe");
break;
}
case 261360:
{
returnValue = F("Reeshoop");
break;
}
case 261361:
{
returnValue = F("Reesiekplatz");
break;
}
case 261362:
{
returnValue = F("Reessingstr.");
break;
}
case 261363:
{
returnValue = F("Reestower Str.");
break;
}
case 261364:
{
returnValue = F("Reetbrook");
break;
}
case 261365:
{
returnValue = F("Reeteck");
break;
}
case 261366:
{
returnValue = F("Reetgang");
break;
}
case 261367:
{
returnValue = F("Reethausweg");
break;
}
case 261368:
{
returnValue = F("Reethlaake");
break;
}
case 261369:
{
returnValue = F("Reethoop");
break;
}
case 261370:
{
returnValue = F("Reethoopsdamm");
break;
}
case 261371:
{
returnValue = F("Reethweg");
break;
}
case 261372:
{
returnValue = F("Reethwinkel");
break;
}
case 261373:
{
returnValue = F("Reetkrüger Weg");
break;
}
case 261374:
{
returnValue = F("Reetmoor");
break;
}
case 261375:
{
returnValue = F("Reetsbergspur");
break;
}
case 261376:
{
returnValue = F("Reetsteg");
break;
}
case 261377:
{
returnValue = F("Reetstr.");
break;
}
case 261378:
{
returnValue = F("Reetwarder");
break;
}
case 261379:
{
returnValue = F("Reetweg");
break;
}
case 261380:
{
returnValue = F("Reetwiese");
break;
}
case 261381:
{
returnValue = F("Reetwieske");
break;
}
case 261382:
{
returnValue = F("Reetz");
break;
}
case 261383:
{
returnValue = F("Reetzenhweg");
break;
}
case 261384:
{
returnValue = F("Reetzenstr.");
break;
}
case 261385:
{
returnValue = F("Reetzer Str.");
break;
}
case 261386:
{
returnValue = F("Reetzer Weg");
break;
}
case 261387:
{
returnValue = F("Reetzerhütten");
break;
}
case 261388:
{
returnValue = F("Reetzstr.");
break;
}
case 261389:
{
returnValue = F("Reezenweg");
break;
}
case 261390:
{
returnValue = F("Reezer Str.");
break;
}
case 261391:
{
returnValue = F("Reezer Weg");
break;
}
case 261392:
{
returnValue = F("Reeßumer Str.");
break;
}
case 261393:
{
returnValue = F("Reeßweg");
break;
}
case 261394:
{
returnValue = F("Refardtsweg");
break;
}
case 261395:
{
returnValue = F("Referendarweg");
break;
}
case 261396:
{
returnValue = F("Referinghauser Str.");
break;
}
case 261397:
{
returnValue = F("Refers Siek");
break;
}
case 261398:
{
returnValue = F("Refertrift");
break;
}
case 261399:
{
returnValue = F("Reffenstr.");
break;
}
case 261400:
{
returnValue = F("Reffenthaler Weg");
break;
}
case 261401:
{
returnValue = F("Reffestr.");
break;
}
case 261402:
{
returnValue = F("Refflingser Str.");
break;
}
case 261403:
{
returnValue = F("Reformierter Friedhof");
break;
}
case 261404:
{
returnValue = F("Reformierter Kirchgang");
break;
}
case 261405:
{
returnValue = F("Reformierter Schulgang");
break;
}
case 261406:
{
returnValue = F("Reformstr.");
break;
}
case 261407:
{
returnValue = F("Reformweg");
break;
}
case 261408:
{
returnValue = F("Refrather Str.");
break;
}
case 261409:
{
returnValue = F("Refrather Weg");
break;
}
case 261410:
{
returnValue = F("RefuGHium");
break;
}
case 261411:
{
returnValue = F("Regastr.");
break;
}
case 261412:
{
returnValue = F("Regattaring");
break;
}
case 261413:
{
returnValue = F("Regattastr.");
break;
}
case 261414:
{
returnValue = F("Regattaweg");
break;
}
case 261415:
{
returnValue = F("Regattawiese");
break;
}
case 261416:
{
returnValue = F("Regaweg");
break;
}
case 261417:
{
returnValue = F("Regberger Weg");
break;
}
case 261418:
{
returnValue = F("Regeberg");
break;
}
case 261419:
{
returnValue = F("Regede");
break;
}
case 261420:
{
returnValue = F("Regel");
break;
}
case 261421:
{
returnValue = F("Regel-Weg");
break;
}
case 261422:
{
returnValue = F("Regelbaumstr.");
break;
}
case 261423:
{
returnValue = F("Regelbaumweg");
break;
}
case 261424:
{
returnValue = F("Regeldamm");
break;
}
case 261425:
{
returnValue = F("Regelesberg");
break;
}
case 261426:
{
returnValue = F("Regeleskopfweg");
break;
}
case 261427:
{
returnValue = F("Regelfeld");
break;
}
case 261428:
{
returnValue = F("Regelkamp");
break;
}
case 261429:
{
returnValue = F("Regelland");
break;
}
case 261430:
{
returnValue = F("Regelmannsbrunner Weg");
break;
}
case 261431:
{
returnValue = F("Regelsbach");
break;
}
case 261432:
{
returnValue = F("Regelsbacher Str.");
break;
}
case 261433:
{
returnValue = F("Regelsbachhangweg");
break;
}
case 261434:
{
returnValue = F("Regelsberger Str.");
break;
}
case 261435:
{
returnValue = F("Regelsdorfer Str.");
break;
}
case 261436:
{
returnValue = F("Regelsrott");
break;
}
case 261437:
{
returnValue = F("Regelstr.");
break;
}
case 261438:
{
returnValue = F("Regelweg");
break;
}
case 261439:
{
returnValue = F("Regenbacher Steige");
break;
}
case 261440:
{
returnValue = F("Regenbacher Str.");
break;
}
case 261441:
{
returnValue = F("Regenbacher Weg");
break;
}
case 261442:
{
returnValue = F("Regenbachtal");
break;
}
case 261443:
{
returnValue = F("Regenbergastr.");
break;
}
case 261444:
{
returnValue = F("Regenbergpromenade");
break;
}
case 261445:
{
returnValue = F("Regenbergstr.");
break;
}
case 261446:
{
returnValue = F("Regenbill");
break;
}
case 261447:
{
returnValue = F("Regenbogen");
break;
}
case 261448:
{
returnValue = F("Regenbogengasse");
break;
}
case 261449:
{
returnValue = F("Regenbogenstr.");
break;
}
case 261450:
{
returnValue = F("Regenbogenweg");
break;
}
case 261451:
{
returnValue = F("Regenboldstr.");
break;
}
case 261452:
{
returnValue = F("Regenbrook");
break;
}
case 261453:
{
returnValue = F("Regenbrücke (Holzbrücke)");
break;
}
case 261454:
{
returnValue = F("Regendorfer Str.");
break;
}
case 261455:
{
returnValue = F("Regendächle");
break;
}
case 261456:
{
returnValue = F("Regener Str.");
break;
}
case 261457:
{
returnValue = F("Regener Weg");
break;
}
case 261458:
{
returnValue = F("Regenerstr.");
break;
}
case 261459:
{
returnValue = F("Regenfeld");
break;
}
case 261460:
{
returnValue = F("Regengasse");
break;
}
case 261461:
{
returnValue = F("Regenhertzweg");
break;
}
case 261462:
{
returnValue = F("Regenholz");
break;
}
case 261463:
{
returnValue = F("Regenhäuser Str.");
break;
}
case 261464:
{
returnValue = F("Regenhüttener Hochstr.");
break;
}
case 261465:
{
returnValue = F("Regenkamp");
break;
}
case 261466:
{
returnValue = F("Regenleitenstr.");
break;
}
case 261467:
{
returnValue = F("Regenmanteler Str.");
break;
}
case 261468:
{
returnValue = F("Regenmanteler Weg");
break;
}
case 261469:
{
returnValue = F("Regenpfeiferstr.");
break;
}
case 261470:
{
returnValue = F("Regenpfeiferweg");
break;
}
case 261471:
{
returnValue = F("Regenrückhaltebecken");
break;
}
case 261472:
{
returnValue = F("Regens-Rössle-Str.");
break;
}
case 261473:
{
returnValue = F("Regens-Wagner-Platz");
break;
}
case 261474:
{
returnValue = F("Regens-Wagner-Str.");
break;
}
case 261475:
{
returnValue = F("Regensbruch");
break;
}
case 261476:
{
returnValue = F("Regensburger Allee");
break;
}
case 261477:
{
returnValue = F("Regensburger Ring");
break;
}
case 261478:
{
returnValue = F("Regensburger Steig");
break;
}
case 261479:
{
returnValue = F("Regensburger Str.");
break;
}
case 261480:
{
returnValue = F("Regensburger Torplatz");
break;
}
case 261481:
{
returnValue = F("Regensburger Weg");
break;
}
case 261482:
{
returnValue = F("Regensburgerstr.");
break;
}
case 261483:
{
returnValue = F("Regensgasse");
break;
}
case 261484:
{
returnValue = F("Regenspiegel");
break;
}
case 261485:
{
returnValue = F("Regenstaufer Str.");
break;
}
case 261486:
{
returnValue = F("Regenstaufer Weg");
break;
}
case 261487:
{
returnValue = F("Regensteinsweg");
break;
}
case 261488:
{
returnValue = F("Regenstorstr.");
break;
}
case 261489:
{
returnValue = F("Regenstr.");
break;
}
case 261490:
{
returnValue = F("Regentalblick");
break;
}
case 261491:
{
returnValue = F("Regentalstr.");
break;
}
case 261492:
{
returnValue = F("Regentalweg");
break;
}
case 261493:
{
returnValue = F("Regentenallee");
break;
}
case 261494:
{
returnValue = F("Regentenstr.");
break;
}
case 261495:
{
returnValue = F("Regenter Str.");
break;
}
case 261496:
{
returnValue = F("Regentrude");
break;
}
case 261497:
{
returnValue = F("Regentstr.");
break;
}
case 261498:
{
returnValue = F("Regentsweilerweg");
break;
}
case 261499:
{
returnValue = F("Regentütenstieg");
break;
}
case 261500:
{
returnValue = F("Regenuferweg");
break;
}
case 261501:
{
returnValue = F("Regenwalder Str.");
break;
}
case 261502:
{
returnValue = F("Regenwasserrückhaltebecken und Bahndamm Park");
break;
}
case 261503:
{
returnValue = F("Regenweg");
break;
}
case 261504:
{
returnValue = F("Regenäcker");
break;
}
case 261505:
{
returnValue = F("Reger Weg");
break;
}
case 261506:
{
returnValue = F("Regerhof");
break;
}
case 261507:
{
returnValue = F("Regerstr.");
break;
}
case 261508:
{
returnValue = F("Regerweg");
break;
}
case 261509:
{
returnValue = F("Regetestr.");
break;
}
case 261510:
{
returnValue = F("Regewidisstr.");
break;
}
case 261511:
{
returnValue = F("Regierungsstr.");
break;
}
case 261512:
{
returnValue = F("Regiestr.");
break;
}
case 261513:
{
returnValue = F("Regilostr.");
break;
}
case 261514:
{
returnValue = F("Regiltor");
break;
}
case 261515:
{
returnValue = F("Regiment-Piemont-Str.");
break;
}
case 261516:
{
returnValue = F("Regimentstr.");
break;
}
case 261517:
{
returnValue = F("Regimentweg");
break;
}
case 261518:
{
returnValue = F("Regina-Brunner-Str.");
break;
}
case 261519:
{
returnValue = F("Regina-Isecke-Str.");
break;
}
case 261520:
{
returnValue = F("Regina-Jonas-Weg");
break;
}
case 261521:
{
returnValue = F("Regina-Kaufmann-Weg");
break;
}
case 261522:
{
returnValue = F("Regina-Kirchmaier-Str.");
break;
}
case 261523:
{
returnValue = F("Regina-Nieberg-Str.");
break;
}
case 261524:
{
returnValue = F("Regina-Pacis-Weg");
break;
}
case 261525:
{
returnValue = F("Regina-Protmann-Str.");
break;
}
case 261526:
{
returnValue = F("Regina-Quast-Str.");
break;
}
case 261527:
{
returnValue = F("Regina-Schwabe-Str.");
break;
}
case 261528:
{
returnValue = F("Regina-Spiegel-Str.");
break;
}
case 261529:
{
returnValue = F("Regina-Str.");
break;
}
case 261530:
{
returnValue = F("Regina-Ullmann-Str.");
break;
}
case 261531:
{
returnValue = F("Regina-Ullmann-Weg");
break;
}
case 261532:
{
returnValue = F("Reginald-Husen-Str.");
break;
}
case 261533:
{
returnValue = F("Reginastr.");
break;
}
case 261534:
{
returnValue = F("Reginaweg");
break;
}
case 261535:
{
returnValue = F("Regine-Hildebrandt-Str.");
break;
}
case 261536:
{
returnValue = F("Regine-Jolberg-Str.");
break;
}
case 261537:
{
returnValue = F("Regine-Merkle-Weg");
break;
}
case 261538:
{
returnValue = F("Reginenkamp");
break;
}
case 261539:
{
returnValue = F("Reginenstr.");
break;
}
case 261540:
{
returnValue = F("Reginesheimer Str.");
break;
}
case 261541:
{
returnValue = F("Reginharda-Nehmer-Str.");
break;
}
case 261542:
{
returnValue = F("Reginhardstr.");
break;
}
case 261543:
{
returnValue = F("Reginharstr.");
break;
}
case 261544:
{
returnValue = F("Reginhild-Saur-Str.");
break;
}
case 261545:
{
returnValue = F("Reginlindenpark");
break;
}
case 261546:
{
returnValue = F("Reginlindweg");
break;
}
case 261547:
{
returnValue = F("Reginostr.");
break;
}
case 261548:
{
returnValue = F("Reginpertstr.");
break;
}
case 261549:
{
returnValue = F("Reginriedstr.");
break;
}
case 261550:
{
returnValue = F("Reginstr.");
break;
}
case 261551:
{
returnValue = F("Reginusstr.");
break;
}
case 261552:
{
returnValue = F("Reginusweg");
break;
}
case 261553:
{
returnValue = F("Regiomontanusweg");
break;
}
case 261554:
{
returnValue = F("Regioparkring");
break;
}
case 261555:
{
returnValue = F("Regiser Str.");
break;
}
case 261556:
{
returnValue = F("Reglergasse");
break;
}
case 261557:
{
returnValue = F("Reglermauer");
break;
}
case 261558:
{
returnValue = F("Reglitzstr.");
break;
}
case 261559:
{
returnValue = F("Regniet");
break;
}
case 261560:
{
returnValue = F("Regnitstr.");
break;
}
case 261561:
{
returnValue = F("Regnitzau");
break;
}
case 261562:
{
returnValue = F("Regnitzblick");
break;
}
case 261563:
{
returnValue = F("Regnitzlosauer Park");
break;
}
case 261564:
{
returnValue = F("Regnitzlosauer Str.");
break;
}
case 261565:
{
returnValue = F("Regnitzstr.");
break;
}
case 261566:
{
returnValue = F("Regnitzweg");
break;
}
case 261567:
{
returnValue = F("Regtweg");
break;
}
case 261568:
{
returnValue = F("Regulastr.");
break;
}
case 261569:
{
returnValue = F("Regulaweg");
break;
}
case 261570:
{
returnValue = F("Regulshausener Str.");
break;
}
case 261571:
{
returnValue = F("Reh Geräumt");
break;
}
case 261572:
{
returnValue = F("Reh-Allee");
break;
}
case 261573:
{
returnValue = F("Reh-Schneise");
break;
}
case 261574:
{
returnValue = F("Reha-Mathel-Falk-Weg");
break;
}
case 261575:
{
returnValue = F("Reha-Zentrum");
break;
}
case 261576:
{
returnValue = F("Rehabilitationszentrum für Kinder, Jugendliche und junge Erwachsene");
break;
}
case 261577:
{
returnValue = F("Rehackerstr.");
break;
}
case 261578:
{
returnValue = F("Rehackerweg");
break;
}
case 261579:
{
returnValue = F("Rehagen");
break;
}
case 261580:
{
returnValue = F("Rehagener Bahnhofstr.");
break;
}
case 261581:
{
returnValue = F("Rehagener Dorfaue");
break;
}
case 261582:
{
returnValue = F("Rehagener Hauptstr.");
break;
}
case 261583:
{
returnValue = F("Rehagener Str.");
break;
}
case 261584:
{
returnValue = F("Rehagenring");
break;
}
case 261585:
{
returnValue = F("Rehain");
break;
}
case 261586:
{
returnValue = F("Rehainweg");
break;
}
case 261587:
{
returnValue = F("Rehaldenweg");
break;
}
case 261588:
{
returnValue = F("Rehanger");
break;
}
case 261589:
{
returnValue = F("Rehau-Str.");
break;
}
case 261590:
{
returnValue = F("Rehauer Str.");
break;
}
case 261591:
{
returnValue = F("Rehauer Weg");
break;
}
case 261592:
{
returnValue = F("Rehbach");
break;
}
case 261593:
{
returnValue = F("Rehbach Rundwanderweg");
break;
}
case 261594:
{
returnValue = F("Rehbacher Anger");
break;
}
case 261595:
{
returnValue = F("Rehbacher Str.");
break;
}
case 261596:
{
returnValue = F("Rehbacher Weg");
break;
}
case 261597:
{
returnValue = F("Rehbachpfad");
break;
}
case 261598:
{
returnValue = F("Rehbachstr.");
break;
}
case 261599:
{
returnValue = F("Rehbachtal");
break;
}
case 261600:
{
returnValue = F("Rehbachweg");
break;
}
case 261601:
{
returnValue = F("Rehbarg");
break;
}
case 261602:
{
returnValue = F("Rehbecker Weg");
break;
}
case 261603:
{
returnValue = F("Rehbehrsmoor");
break;
}
case 261604:
{
returnValue = F("Rehbenitzwinkel");
break;
}
case 261605:
{
returnValue = F("Rehbent");
break;
}
case 261606:
{
returnValue = F("Rehberg");
break;
}
case 261607:
{
returnValue = F("Rehberg-Siedlung");
break;
}
case 261608:
{
returnValue = F("Rehberge");
break;
}
case 261609:
{
returnValue = F("Rehberger Grabenweg");
break;
}
case 261610:
{
returnValue = F("Rehberger Planweg");
break;
}
case 261611:
{
returnValue = F("Rehberger Str.");
break;
}
case 261612:
{
returnValue = F("Rehberger Weg");
break;
}
case 261613:
{
returnValue = F("Rehbergort");
break;
}
case 261614:
{
returnValue = F("Rehbergstr.");
break;
}
case 261615:
{
returnValue = F("Rehbergsträßle");
break;
}
case 261616:
{
returnValue = F("Rehbergweg");
break;
}
case 261617:
{
returnValue = F("Rehbeutelweg");
break;
}
case 261618:
{
returnValue = F("Rehbichler Weg");
break;
}
case 261619:
{
returnValue = F("Rehbiegel");
break;
}
case 261620:
{
returnValue = F("Rehbockschneise");
break;
}
case 261621:
{
returnValue = F("Rehbocksecke");
break;
}
case 261622:
{
returnValue = F("Rehbockseckschneise");
break;
}
case 261623:
{
returnValue = F("Rehbocksheide");
break;
}
case 261624:
{
returnValue = F("Rehbockstr.");
break;
}
case 261625:
{
returnValue = F("Rehbocksweg");
break;
}
case 261626:
{
returnValue = F("Rehbockswinkel");
break;
}
case 261627:
{
returnValue = F("Rehbocktal");
break;
}
case 261628:
{
returnValue = F("Rehbockweg");
break;
}
case 261629:
{
returnValue = F("Rehborner Str.");
break;
}
case 261630:
{
returnValue = F("Rehbreede");
break;
}
case 261631:
{
returnValue = F("Rehbrink");
break;
}
case 261632:
{
returnValue = F("Rehbrook");
break;
}
case 261633:
{
returnValue = F("Rehbruch");
break;
}
case 261634:
{
returnValue = F("Rehbruchspfad");
break;
}
case 261635:
{
returnValue = F("Rehbrunnenweg");
break;
}
case 261636:
{
returnValue = F("Rehbrückenweg");
break;
}
case 261637:
{
returnValue = F("Rehbrünneleweg");
break;
}
case 261638:
{
returnValue = F("Rehbuckel");
break;
}
case 261639:
{
returnValue = F("Rehburg");
break;
}
case 261640:
{
returnValue = F("Rehburger Str.");
break;
}
case 261641:
{
returnValue = F("Rehburrenweg");
break;
}
case 261642:
{
returnValue = F("Rehbusch");
break;
}
case 261643:
{
returnValue = F("Rehbuschfeld");
break;
}
case 261644:
{
returnValue = F("Rehbuschweg");
break;
}
case 261645:
{
returnValue = F("Rehbush");
break;
}
case 261646:
{
returnValue = F("Rehbühl");
break;
}
case 261647:
{
returnValue = F("Rehbühlsiedlung");
break;
}
case 261648:
{
returnValue = F("Rehbühlstr.");
break;
}
case 261649:
{
returnValue = F("Rehbühlwaldstr.");
break;
}
case 261650:
{
returnValue = F("Rehbühlweg");
break;
}
case 261651:
{
returnValue = F("Rehder-Weg");
break;
}
case 261652:
{
returnValue = F("Rehderbrücke");
break;
}
case 261653:
{
returnValue = F("Rehdobel");
break;
}
case 261654:
{
returnValue = F("Rehdorfer Str.");
break;
}
case 261655:
{
returnValue = F("Reheck");
break;
}
case 261656:
{
returnValue = F("Rehecke");
break;
}
case 261657:
{
returnValue = F("Rehefelder Str.");
break;
}
case 261658:
{
returnValue = F("Rehehausen");
break;
}
case 261659:
{
returnValue = F("Rehehäuser Berg");
break;
}
case 261660:
{
returnValue = F("Reheisweg");
break;
}
case 261661:
{
returnValue = F("Rehenweg");
break;
}
case 261662:
{
returnValue = F("Rehenwiesen");
break;
}
case 261663:
{
returnValue = F("Reher Str.");
break;
}
case 261664:
{
returnValue = F("Reher Weg");
break;
}
case 261665:
{
returnValue = F("Reherberg");
break;
}
case 261666:
{
returnValue = F("Reherkamp");
break;
}
case 261667:
{
returnValue = F("Reherlen");
break;
}
case 261668:
{
returnValue = F("Reherstr.");
break;
}
case 261669:
{
returnValue = F("Rehersweg");
break;
}
case 261670:
{
returnValue = F("Reherweg");
break;
}
case 261671:
{
returnValue = F("Rehestädter Str.");
break;
}
case 261672:
{
returnValue = F("Rehestädter Weg");
break;
}
case 261673:
{
returnValue = F("Rehfeld");
break;
}
case 261674:
{
returnValue = F("Rehfelder Friedensstr.");
break;
}
case 261675:
{
returnValue = F("Rehfelder Str.");
break;
}
case 261676:
{
returnValue = F("Rehfelder Weg");
break;
}
case 261677:
{
returnValue = F("Rehfeldstr.");
break;
}
case 261678:
{
returnValue = F("Rehfeldweg");
break;
}
case 261679:
{
returnValue = F("Rehfeuters Kamp");
break;
}
case 261680:
{
returnValue = F("Rehfinger Str.");
break;
}
case 261681:
{
returnValue = F("Rehflucht");
break;
}
case 261682:
{
returnValue = F("Rehfuesstr.");
break;
}
case 261683:
{
returnValue = F("Rehfährte");
break;
}
case 261684:
{
returnValue = F("Rehgarten");
break;
}
case 261685:
{
returnValue = F("Rehgartenstr.");
break;
}
case 261686:
{
returnValue = F("Rehgartenweg");
break;
}
case 261687:
{
returnValue = F("Rehgasse");
break;
}
case 261688:
{
returnValue = F("Rehgebietsweg");
break;
}
case 261689:
{
returnValue = F("Rehgebirgsstr.");
break;
}
case 261690:
{
returnValue = F("Rehgraben");
break;
}
case 261691:
{
returnValue = F("Rehgrabenstr.");
break;
}
case 261692:
{
returnValue = F("Rehgrabenweg");
break;
}
case 261693:
{
returnValue = F("Rehgrund");
break;
}
case 261694:
{
returnValue = F("Rehgtland");
break;
}
case 261695:
{
returnValue = F("Rehgärtenweg");
break;
}
case 261696:
{
returnValue = F("Rehhagen");
break;
}
case 261697:
{
returnValue = F("Rehhagenhof");
break;
}
case 261698:
{
returnValue = F("Rehhagens Gang");
break;
}
case 261699:
{
returnValue = F("Rehhagenstr.");
break;
}
case 261700:
{
returnValue = F("Rehhagweg");
break;
}
case 261701:
{
returnValue = F("Rehhahn");
break;
}
case 261702:
{
returnValue = F("Rehhahnweg");
break;
}
case 261703:
{
returnValue = F("Rehhalde");
break;
}
case 261704:
{
returnValue = F("Rehhaldenstr.");
break;
}
case 261705:
{
returnValue = F("Rehhaldenweg");
break;
}
case 261706:
{
returnValue = F("Rehhaldeweg");
break;
}
case 261707:
{
returnValue = F("Rehhardt");
break;
}
case 261708:
{
returnValue = F("Rehhecke");
break;
}
case 261709:
{
returnValue = F("Rehheckenweg");
break;
}
case 261710:
{
returnValue = F("Rehheide");
break;
}
case 261711:
{
returnValue = F("Rehhof");
break;
}
case 261712:
{
returnValue = F("Rehhofer Weg");
break;
}
case 261713:
{
returnValue = F("Rehhofsteige");
break;
}
case 261714:
{
returnValue = F("Rehhofstr.");
break;
}
case 261715:
{
returnValue = F("Rehhofweg");
break;
}
case 261716:
{
returnValue = F("Rehhorst");
break;
}
case 261717:
{
returnValue = F("Rehhorster Str.");
break;
}
case 261718:
{
returnValue = F("Rehhorster Weg");
break;
}
case 261719:
{
returnValue = F("Rehhängweg");
break;
}
case 261720:
{
returnValue = F("Rehhäusergasse");
break;
}
case 261721:
{
returnValue = F("Rehhöfer Str.");
break;
}
case 261722:
{
returnValue = F("Rehhübelweg");
break;
}
case 261723:
{
returnValue = F("Rehhütleweg");
break;
}
case 261724:
{
returnValue = F("Rehhütte");
break;
}
case 261725:
{
returnValue = F("Rehhüttenweg");
break;
}
case 261726:
{
returnValue = F("Rehhütter Str.");
break;
}
case 261727:
{
returnValue = F("Rehhütterstr.");
break;
}
case 261728:
{
returnValue = F("Rehjahr");
break;
}
case 261729:
{
returnValue = F("Rehkamp");
break;
}
case 261730:
{
returnValue = F("Rehklingenweg");
break;
}
case 261731:
{
returnValue = F("Rehklint");
break;
}
case 261732:
{
returnValue = F("Rehkopfweg");
break;
}
case 261733:
{
returnValue = F("Rehkoppel");
break;
}
case 261734:
{
returnValue = F("Rehkuhlenweg");
break;
}
case 261735:
{
returnValue = F("Rehkuppenweg");
break;
}
case 261736:
{
returnValue = F("Rehlagerweg");
break;
}
case 261737:
{
returnValue = F("Rehlake");
break;
}
case 261738:
{
returnValue = F("Rehland");
break;
}
case 261739:
{
returnValue = F("Rehleinstr.");
break;
}
case 261740:
{
returnValue = F("Rehleite");
break;
}
case 261741:
{
returnValue = F("Rehleitenstr.");
break;
}
case 261742:
{
returnValue = F("Rehleitenweg");
break;
}
case 261743:
{
returnValue = F("Rehleiter");
break;
}
case 261744:
{
returnValue = F("Rehleweg");
break;
}
case 261745:
{
returnValue = F("Rehlingenstr.");
break;
}
case 261746:
{
returnValue = F("Rehlinger Berg");
break;
}
case 261747:
{
returnValue = F("Rehlinger Str.");
break;
}
case 261748:
{
returnValue = F("Rehlinger Weg");
break;
}
case 261749:
{
returnValue = F("Rehlingerstr.");
break;
}
case 261750:
{
returnValue = F("Rehlingstr.");
break;
}
case 261751:
{
returnValue = F("Rehloge");
break;
}
case 261752:
{
returnValue = F("Rehm");
break;
}
case 261753:
{
returnValue = F("Rehmannstr.");
break;
}
case 261754:
{
returnValue = F("Rehmannsweg");
break;
}
case 261755:
{
returnValue = F("Rehmannweg");
break;
}
case 261756:
{
returnValue = F("Rehmater Weg");
break;
}
case 261757:
{
returnValue = F("Rehmattenstr.");
break;
}
case 261758:
{
returnValue = F("Rehmattweg");
break;
}
case 261759:
{
returnValue = F("Rehmen");
break;
}
case 261760:
{
returnValue = F("Rehmenbachsträßle");
break;
}
case 261761:
{
returnValue = F("Rehmenberg");
break;
}
case 261762:
{
returnValue = F("Rehmenbreiten");
break;
}
case 261763:
{
returnValue = F("Rehmendamm");
break;
}
case 261764:
{
returnValue = F("Rehmengäßle");
break;
}
case 261765:
{
returnValue = F("Rehmenhalde");
break;
}
case 261766:
{
returnValue = F("Rehmenhellmer");
break;
}
case 261767:
{
returnValue = F("Rehmenkoppel");
break;
}
case 261768:
{
returnValue = F("Rehmenstieg");
break;
}
case 261769:
{
returnValue = F("Rehmenweg");
break;
}
case 261770:
{
returnValue = F("Rehmer");
break;
}
case 261771:
{
returnValue = F("Rehmer Breede");
break;
}
case 261772:
{
returnValue = F("Rehmer Feld");
break;
}
case 261773:
{
returnValue = F("Rehmer Heide");
break;
}
case 261774:
{
returnValue = F("Rehmer See");
break;
}
case 261775:
{
returnValue = F("Rehmer Steinkamp");
break;
}
case 261776:
{
returnValue = F("Rehmer Weg");
break;
}
case 261777:
{
returnValue = F("Rehmerloher Str.");
break;
}
case 261778:
{
returnValue = F("Rehmkamp");
break;
}
case 261779:
{
returnValue = F("Rehmkestr.");
break;
}
case 261780:
{
returnValue = F("Rehmkoppel");
break;
}
case 261781:
{
returnValue = F("Rehmoorsweg");
break;
}
case 261782:
{
returnValue = F("Rehmooser Weg");
break;
}
case 261783:
{
returnValue = F("Rehmoosstr.");
break;
}
case 261784:
{
returnValue = F("Rehmplatz");
break;
}
case 261785:
{
returnValue = F("Rehms Gehaege");
break;
}
case 261786:
{
returnValue = F("Rehmsdorfer Gartenstr.");
break;
}
case 261787:
{
returnValue = F("Rehmsdorfer Hauptstr.");
break;
}
case 261788:
{
returnValue = F("Rehmsdorfer Str.");
break;
}
case 261789:
{
returnValue = F("Rehmstedts Padd");
break;
}
case 261790:
{
returnValue = F("Rehmstr.");
break;
}
case 261791:
{
returnValue = F("Rehmstroth");
break;
}
case 261792:
{
returnValue = F("Rehmsweg");
break;
}
case 261793:
{
returnValue = F("Rehmweg");
break;
}
case 261794:
{
returnValue = F("Rehmättelweg");
break;
}
case 261795:
{
returnValue = F("Rehn-Campe");
break;
}
case 261796:
{
returnValue = F("Rehnaer Str.");
break;
}
case 261797:
{
returnValue = F("Rehnaer Str. Wedendorf");
break;
}
case 261798:
{
returnValue = F("Rehnaer Tor");
break;
}
case 261799:
{
returnValue = F("Rehnaer Weg");
break;
}
case 261800:
{
returnValue = F("Rehnaweg");
break;
}
case 261801:
{
returnValue = F("Rehnenmühlestr.");
break;
}
case 261802:
{
returnValue = F("Rehnert");
break;
}
case 261803:
{
returnValue = F("Rehnestweg");
break;
}
case 261804:
{
returnValue = F("Rehngartenstr.");
break;
}
case 261805:
{
returnValue = F("Rehnocken");
break;
}
case 261806:
{
returnValue = F("Rehnsdorfer Weg");
break;
}
case 261807:
{
returnValue = F("Rehnstr.");
break;
}
case 261808:
{
returnValue = F("Rehobothweg");
break;
}
case 261809:
{
returnValue = F("Rehofstr.");
break;
}
case 261810:
{
returnValue = F("Rehornweg");
break;
}
case 261811:
{
returnValue = F("Rehovotstr.");
break;
}
case 261812:
{
returnValue = F("Rehpfad");
break;
}
case 261813:
{
returnValue = F("Rehpfadstr.");
break;
}
case 261814:
{
returnValue = F("Rehr");
break;
}
case 261815:
{
returnValue = F("Rehrbrinkstr.");
break;
}
case 261816:
{
returnValue = F("Rehre");
break;
}
case 261817:
{
returnValue = F("Rehrener Str.");
break;
}
case 261818:
{
returnValue = F("Rehrfeldweg");
break;
}
case 261819:
{
returnValue = F("Rehrhof");
break;
}
case 261820:
{
returnValue = F("Rehrhofer Weg");
break;
}
case 261821:
{
returnValue = F("Rehrhöfe");
break;
}
case 261822:
{
returnValue = F("Rehrkamp");
break;
}
case 261823:
{
returnValue = F("Rehrkampsweg");
break;
}
case 261824:
{
returnValue = F("Rehrosbacher Weg");
break;
}
case 261825:
{
returnValue = F("Rehrstr.");
break;
}
case 261826:
{
returnValue = F("Rehrweg");
break;
}
case 261827:
{
returnValue = F("Rehrwieher Str.");
break;
}
case 261828:
{
returnValue = F("Rehschaln");
break;
}
case 261829:
{
returnValue = F("Rehschlagweg");
break;
}
case 261830:
{
returnValue = F("Rehschneise");
break;
}
case 261831:
{
returnValue = F("Rehsener Str.");
break;
}
case 261832:
{
returnValue = F("Rehsenweg");
break;
}
case 261833:
{
returnValue = F("Rehsiepen");
break;
}
case 261834:
{
returnValue = F("Rehsiepenweg");
break;
}
case 261835:
{
returnValue = F("Rehsprung");
break;
}
case 261836:
{
returnValue = F("Rehsprungweg");
break;
}
case 261837:
{
returnValue = F("Rehsteg");
break;
}
case 261838:
{
returnValue = F("Rehsteig");
break;
}
case 261839:
{
returnValue = F("Rehsteige");
break;
}
case 261840:
{
returnValue = F("Rehstieg");
break;
}
case 261841:
{
returnValue = F("Rehstr.");
break;
}
case 261842:
{
returnValue = F("Rehstrasse");
break;
}
case 261843:
{
returnValue = F("Rehstübleweg");
break;
}
case 261844:
{
returnValue = F("Rehsumpfstr.");
break;
}
case 261845:
{
returnValue = F("Rehtal");
break;
}
case 261846:
{
returnValue = F("Rehtaler Weg");
break;
}
case 261847:
{
returnValue = F("Rehteich");
break;
}
case 261848:
{
returnValue = F("Rehteichweg");
break;
}
case 261849:
{
returnValue = F("Rehtränke");
break;
}
case 261850:
{
returnValue = F("Rehtälchen");
break;
}
case 261851:
{
returnValue = F("Rehunger Str.");
break;
}
case 261852:
{
returnValue = F("Rehwagenstr.");
break;
}
case 261853:
{
returnValue = F("Rehwaldeweg");
break;
}
case 261854:
{
returnValue = F("Rehwalds Möbelstr.");
break;
}
case 261855:
{
returnValue = F("Rehwaldweg");
break;
}
case 261856:
{
returnValue = F("Rehwechsel");
break;
}
case 261857:
{
returnValue = F("Rehweg");
break;
}
case 261858:
{
returnValue = F("Rehweide");
break;
}
case 261859:
{
returnValue = F("Rehweiherstr.");
break;
}
case 261860:
{
returnValue = F("Rehweiler Str.");
break;
}
case 261861:
{
returnValue = F("Rehweiler Weg");
break;
}
case 261862:
{
returnValue = F("Rehwiese");
break;
}
case 261863:
{
returnValue = F("Rehwiesen");
break;
}
case 261864:
{
returnValue = F("Rehwiesenstr.");
break;
}
case 261865:
{
returnValue = F("Rehwiesenweg");
break;
}
case 261866:
{
returnValue = F("Rehwieslesweg");
break;
}
case 261867:
{
returnValue = F("Rehwild");
break;
}
case 261868:
{
returnValue = F("Rehwinkel");
break;
}
case 261869:
{
returnValue = F("Rehwinkelstr.");
break;
}
case 261870:
{
returnValue = F("Rehwinkelweg");
break;
}
case 261871:
{
returnValue = F("Rehwisch");
break;
}
case 261872:
{
returnValue = F("Reibegäßle");
break;
}
case 261873:
{
returnValue = F("Reibelsgasse");
break;
}
case 261874:
{
returnValue = F("Reibeltgasse");
break;
}
case 261875:
{
returnValue = F("Reibeltstr.");
break;
}
case 261876:
{
returnValue = F("Reiben");
break;
}
case 261877:
{
returnValue = F("Reibenfeld");
break;
}
case 261878:
{
returnValue = F("Reibenrade");
break;
}
case 261879:
{
returnValue = F("Reiberg");
break;
}
case 261880:
{
returnValue = F("Reibergassel");
break;
}
case 261881:
{
returnValue = F("Reibergassl");
break;
}
case 261882:
{
returnValue = F("Reibertenröder Str.");
break;
}
case 261883:
{
returnValue = F("Reibertenröder Weg");
break;
}
case 261884:
{
returnValue = F("Reiboldschachtring");
break;
}
case 261885:
{
returnValue = F("Reiboldsgrüner Str.");
break;
}
case 261886:
{
returnValue = F("Reiboldsruh");
break;
}
case 261887:
{
returnValue = F("Reiboldstr.");
break;
}
case 261888:
{
returnValue = F("Reibuschweg");
break;
}
case 261889:
{
returnValue = F("Reichard-Str.");
break;
}
case 261890:
{
returnValue = F("Reichardsroth");
break;
}
case 261891:
{
returnValue = F("Reichardsrother Weg");
break;
}
case 261892:
{
returnValue = F("Reichardstr.");
break;
}
case 261893:
{
returnValue = F("Reichardsweide");
break;
}
case 261894:
{
returnValue = F("Reichardtpark");
break;
}
case 261895:
{
returnValue = F("Reichardts Garten");
break;
}
case 261896:
{
returnValue = F("Reichardtsdorf");
break;
}
case 261897:
{
returnValue = F("Reichardtsdorfer Weg");
break;
}
case 261898:
{
returnValue = F("Reichardtstieg");
break;
}
case 261899:
{
returnValue = F("Reichardtstr.");
break;
}
case 261900:
{
returnValue = F("Reichardtswerbener Str.");
break;
}
case 261901:
{
returnValue = F("Reichardweg");
break;
}
case 261902:
{
returnValue = F("Reichartshausen");
break;
}
case 261903:
{
returnValue = F("Reichartshäuser Berg");
break;
}
case 261904:
{
returnValue = F("Reichartshäuser Str.");
break;
}
case 261905:
{
returnValue = F("Reichartshäuserhof");
break;
}
case 261906:
{
returnValue = F("Reichartstr.");
break;
}
case 261907:
{
returnValue = F("Reichauer Str.");
break;
}
case 261908:
{
returnValue = F("Reichbrunstr.");
break;
}
case 261909:
{
returnValue = F("Reiche Gasse");
break;
}
case 261910:
{
returnValue = F("Reiche Str.");
break;
}
case 261911:
{
returnValue = F("Reichelsberg");
break;
}
case 261912:
{
returnValue = F("Reichelsdell");
break;
}
case 261913:
{
returnValue = F("Reichelsdorfer Hauptstr.");
break;
}
case 261914:
{
returnValue = F("Reichelsdorfer Schulgasse");
break;
}
case 261915:
{
returnValue = F("Reichelsheimer Str.");
break;
}
case 261916:
{
returnValue = F("Reichelsheimer Weg");
break;
}
case 261917:
{
returnValue = F("Reichelshofer Str.");
break;
}
case 261918:
{
returnValue = F("Reichelshöfer Str.");
break;
}
case 261919:
{
returnValue = F("Reichelshöfer Weg");
break;
}
case 261920:
{
returnValue = F("Reichelstr.");
break;
}
case 261921:
{
returnValue = F("Reichelsweg");
break;
}
case 261922:
{
returnValue = F("Reichelsweiherstr.");
break;
}
case 261923:
{
returnValue = F("Reicheltgässchen");
break;
}
case 261924:
{
returnValue = F("Reicheltshofen");
break;
}
case 261925:
{
returnValue = F("Reicheltstr.");
break;
}
case 261926:
{
returnValue = F("Reicheltweg");
break;
}
case 261927:
{
returnValue = F("Reichelweg");
break;
}
case 261928:
{
returnValue = F("Reicheläcker");
break;
}
case 261929:
{
returnValue = F("Reichenau");
break;
}
case 261930:
{
returnValue = F("Reichenaublick");
break;
}
case 261931:
{
returnValue = F("Reichenauer Str.");
break;
}
case 261932:
{
returnValue = F("Reichenauer Weg");
break;
}
case 261933:
{
returnValue = F("Reichenauring");
break;
}
case 261934:
{
returnValue = F("Reichenaustr.");
break;
}
case 261935:
{
returnValue = F("Reichenauweg");
break;
}
case 261936:
{
returnValue = F("Reichenbach");
break;
}
case 261937:
{
returnValue = F("Reichenbach Dorfstr.");
break;
}
case 261938:
{
returnValue = F("Reichenbacher Bergweg");
break;
}
case 261939:
{
returnValue = F("Reichenbacher Hauptstr.");
break;
}
case 261940:
{
returnValue = F("Reichenbacher Hof");
break;
}
case 261941:
{
returnValue = F("Reichenbacher Kirchweg");
break;
}
case 261942:
{
returnValue = F("Reichenbacher Str.");
break;
}
case 261943:
{
returnValue = F("Reichenbacher Weg");
break;
}
case 261944:
{
returnValue = F("Reichenbacher Wäldchen");
break;
}
case 261945:
{
returnValue = F("Reichenbacher-Markt-Weg");
break;
}
case 261946:
{
returnValue = F("Reichenbacherhof");
break;
}
case 261947:
{
returnValue = F("Reichenbacherholzweg");
break;
}
case 261948:
{
returnValue = F("Reichenbachertalweg");
break;
}
case 261949:
{
returnValue = F("Reichenbacherweg");
break;
}
case 261950:
{
returnValue = F("Reichenbachgasse");
break;
}
case 261951:
{
returnValue = F("Reichenbachmühle");
break;
}
case 261952:
{
returnValue = F("Reichenbachschneise");
break;
}
case 261953:
{
returnValue = F("Reichenbachstr.");
break;
}
case 261954:
{
returnValue = F("Reichenbachtal");
break;
}
case 261955:
{
returnValue = F("Reichenbachtalsträßle");
break;
}
case 261956:
{
returnValue = F("Reichenbachweg");
break;
}
case 261957:
{
returnValue = F("Reichenberg");
break;
}
case 261958:
{
returnValue = F("Reichenberger Allee");
break;
}
case 261959:
{
returnValue = F("Reichenberger Chaussee");
break;
}
case 261960:
{
returnValue = F("Reichenberger Hauptstr.");
break;
}
case 261961:
{
returnValue = F("Reichenberger Ring");
break;
}
case 261962:
{
returnValue = F("Reichenberger Str.");
break;
}
case 261963:
{
returnValue = F("Reichenberger Weg");
break;
}
case 261964:
{
returnValue = F("Reichenbergerstr.");
break;
}
case 261965:
{
returnValue = F("Reichenbergstr.");
break;
}
case 261966:
{
returnValue = F("Reichenbergweg");
break;
}
case 261967:
{
returnValue = F("Reichenborner Str.");
break;
}
case 261968:
{
returnValue = F("Reichenbrander Str.");
break;
}
case 261969:
{
returnValue = F("Reichenbrunner Str.");
break;
}
case 261970:
{
returnValue = F("Reichenbucher Str.");
break;
}
case 261971:
{
returnValue = F("Reichenbuchweg");
break;
}
case 261972:
{
returnValue = F("Reichenburger Str.");
break;
}
case 261973:
{
returnValue = F("Reichenbächle");
break;
}
case 261974:
{
returnValue = F("Reichendorfer Str.");
break;
}
case 261975:
{
returnValue = F("Reichendorfer Weg");
break;
}
case 261976:
{
returnValue = F("Reichenecker Str.");
break;
}
case 261977:
{
returnValue = F("Reichenecker Weg");
break;
}
case 261978:
{
returnValue = F("Reicheneibacher Str.");
break;
}
case 261979:
{
returnValue = F("Reichener Str.");
break;
}
case 261980:
{
returnValue = F("Reichenfeld");
break;
}
case 261981:
{
returnValue = F("Reichenfels");
break;
}
case 261982:
{
returnValue = F("Reichenfelser Str.");
break;
}
case 261983:
{
returnValue = F("Reichengasse");
break;
}
case 261984:
{
returnValue = F("Reichengraben");
break;
}
case 261985:
{
returnValue = F("Reichengrundstr.");
break;
}
case 261986:
{
returnValue = F("Reichenhagener Str.");
break;
}
case 261987:
{
returnValue = F("Reichenhain");
break;
}
case 261988:
{
returnValue = F("Reichenhainer Mühlberg");
break;
}
case 261989:
{
returnValue = F("Reichenhainer Str.");
break;
}
case 261990:
{
returnValue = F("Reichenhainer Weg");
break;
}
case 261991:
{
returnValue = F("Reichenhalden");
break;
}
case 261992:
{
returnValue = F("Reichenhaller Str.");
break;
}
case 261993:
{
returnValue = F("Reichenhardt");
break;
}
case 261994:
{
returnValue = F("Reichenhardtstr.");
break;
}
case 261995:
{
returnValue = F("Reichenhof");
break;
}
case 261996:
{
returnValue = F("Reichenhofer Weg");
break;
}
case 261997:
{
returnValue = F("Reichenholz");
break;
}
case 261998:
{
returnValue = F("Reichenhäuser Str.");
break;
}
case 261999:
{
returnValue = F("Reichenower Str.");
break;
}
case 262000:
{
returnValue = F("Reichenower Weg");
break;
}
case 262001:
{
returnValue = F("Reichenreihe");
break;
}
case 262002:
{
returnValue = F("Reichensand");
break;
}
case 262003:
{
returnValue = F("Reichenschwander Str.");
break;
}
case 262004:
{
returnValue = F("Reichenschwander Weg");
break;
}
case 262005:
{
returnValue = F("Reichenspergerplatz");
break;
}
case 262006:
{
returnValue = F("Reichenspergerstr.");
break;
}
case 262007:
{
returnValue = F("Reichenstein");
break;
}
case 262008:
{
returnValue = F("Reichensteiner Str.");
break;
}
case 262009:
{
returnValue = F("Reichensteiner Weg");
break;
}
case 262010:
{
returnValue = F("Reichensteinstr.");
break;
}
case 262011:
{
returnValue = F("Reichenstetterstr.");
break;
}
case 262012:
{
returnValue = F("Reichenstr.");
break;
}
case 262013:
{
returnValue = F("Reichensächser Str.");
break;
}
case 262014:
{
returnValue = F("Reichentaler Str.");
break;
}
case 262015:
{
returnValue = F("Reichenthaler Weg");
break;
}
case 262016:
{
returnValue = F("Reichenthalstr.");
break;
}
case 262017:
{
returnValue = F("Reichenwalder Chaussee");
break;
}
case 262018:
{
returnValue = F("Reichenwalder Str.");
break;
}
case 262019:
{
returnValue = F("Reichenwallerstr.");
break;
}
case 262020:
{
returnValue = F("Reichenwallnerstr.");
break;
}
case 262021:
{
returnValue = F("Reicher Winkel");
break;
}
case 262022:
{
returnValue = F("Reicher-Leute-Stege");
break;
}
case 262023:
{
returnValue = F("Reichergasse");
break;
}
case 262024:
{
returnValue = F("Reichersdorf");
break;
}
case 262025:
{
returnValue = F("Reichersdorfer Str.");
break;
}
case 262026:
{
returnValue = F("Reichersteiner Str.");
break;
}
case 262027:
{
returnValue = F("Reicherthof");
break;
}
case 262028:
{
returnValue = F("Reicherts Planie");
break;
}
case 262029:
{
returnValue = F("Reichertsberg");
break;
}
case 262030:
{
returnValue = F("Reichertsgasse");
break;
}
case 262031:
{
returnValue = F("Reichertsgraben");
break;
}
case 262032:
{
returnValue = F("Reichertshalde");
break;
}
case 262033:
{
returnValue = F("Reichertshausener Str.");
break;
}
case 262034:
{
returnValue = F("Reichertshofenstr.");
break;
}
case 262035:
{
returnValue = F("Reichertshofer Str.");
break;
}
case 262036:
{
returnValue = F("Reichertshäuser Str.");
break;
}
case 262037:
{
returnValue = F("Reichertsklinge");
break;
}
case 262038:
{
returnValue = F("Reichertsmahd-Planie");
break;
}
case 262039:
{
returnValue = F("Reichertsrieder Str.");
break;
}
case 262040:
{
returnValue = F("Reichertstr.");
break;
}
case 262041:
{
returnValue = F("Reichertsweg");
break;
}
case 262042:
{
returnValue = F("Reichertswinn");
break;
}
case 262043:
{
returnValue = F("Reichertweg");
break;
}
case 262044:
{
returnValue = F("Reicherzaunstr.");
break;
}
case 262045:
{
returnValue = F("Reichestr.");
break;
}
case 262046:
{
returnValue = F("Reicheteile");
break;
}
case 262047:
{
returnValue = F("Reichewiesenweg");
break;
}
case 262048:
{
returnValue = F("Reichgasse");
break;
}
case 262049:
{
returnValue = F("Reichhardtstr.");
break;
}
case 262050:
{
returnValue = F("Reichhausener Str.");
break;
}
case 262051:
{
returnValue = F("Reichhelmstr.");
break;
}
case 262052:
{
returnValue = F("Reichhof");
break;
}
case 262053:
{
returnValue = F("Reichhofstr.");
break;
}
case 262054:
{
returnValue = F("Reichholzer Weg");
break;
}
case 262055:
{
returnValue = F("Reichklarastr.");
break;
}
case 262056:
{
returnValue = F("Reichkobl");
break;
}
case 262057:
{
returnValue = F("Reichlberg");
break;
}
case 262058:
{
returnValue = F("Reichlensbergweg");
break;
}
case 262059:
{
returnValue = F("Reichlestr.");
break;
}
case 262060:
{
returnValue = F("Reichlesweg");
break;
}
case 262061:
{
returnValue = F("Reichlgasse");
break;
}
case 262062:
{
returnValue = F("Reichlin-Meldegg-Str.");
break;
}
case 262063:
{
returnValue = F("Reichlin-Meldegg-Weg");
break;
}
case 262064:
{
returnValue = F("Reichlin-von-Meldegg-Str.");
break;
}
case 262065:
{
returnValue = F("Reichlinger Str.");
break;
}
case 262066:
{
returnValue = F("Reichlingshardtweg");
break;
}
case 262067:
{
returnValue = F("Reichlinstr.");
break;
}
case 262068:
{
returnValue = F("Reichlkofen");
break;
}
case 262069:
{
returnValue = F("Reichloser Str.");
break;
}
case 262070:
{
returnValue = F("Reichlsiedlung");
break;
}
case 262071:
{
returnValue = F("Reichmannshäuser Str.");
break;
}
case 262072:
{
returnValue = F("Reichmannstr.");
break;
}
case 262073:
{
returnValue = F("Reicholdsgrüner Str.");
break;
}
case 262074:
{
returnValue = F("Reichowplatz");
break;
}
case 262075:
{
returnValue = F("Reichpietschstr.");
break;
}
case 262076:
{
returnValue = F("Reichsabtei");
break;
}
case 262077:
{
returnValue = F("Reichsallee");
break;
}
case 262078:
{
returnValue = F("Reichsapfelstr.");
break;
}
case 262079:
{
returnValue = F("Reichsapfelweg");
break;
}
case 262080:
{
returnValue = F("Reichsbahnerstr.");
break;
}
case 262081:
{
returnValue = F("Reichsbahnsiedlung");
break;
}
case 262082:
{
returnValue = F("Reichsbahnstr.");
break;
}
case 262083:
{
returnValue = F("Reichsberger Str.");
break;
}
case 262084:
{
returnValue = F("Reichsbodenweg");
break;
}
case 262085:
{
returnValue = F("Reichsbundsiedlung");
break;
}
case 262086:
{
returnValue = F("Reichsbundstr.");
break;
}
case 262087:
{
returnValue = F("Reichsbundweg");
break;
}
case 262088:
{
returnValue = F("Reichsburgstr.");
break;
}
case 262089:
{
returnValue = F("Reichsdanksiedlung");
break;
}
case 262090:
{
returnValue = F("Reichsdorfstr.");
break;
}
case 262091:
{
returnValue = F("Reichsforststr.");
break;
}
case 262092:
{
returnValue = F("Reichsgartenstr.");
break;
}
case 262093:
{
returnValue = F("Reichsgasse");
break;
}
case 262094:
{
returnValue = F("Reichsgrafenstr.");
break;
}
case 262095:
{
returnValue = F("Reichsgräfin-Weg");
break;
}
case 262096:
{
returnValue = F("Reichshain");
break;
}
case 262097:
{
returnValue = F("Reichshofer Str.");
break;
}
case 262098:
{
returnValue = F("Reichshofstr.");
break;
}
case 262099:
{
returnValue = F("Reichshöferstr.");
break;
}
case 262100:
{
returnValue = F("Reichskanzler-Müller-Str.");
break;
}
case 262101:
{
returnValue = F("Reichsmarkstr.");
break;
}
case 262102:
{
returnValue = F("Reichsmühle");
break;
}
case 262103:
{
returnValue = F("Reichsplatz");
break;
}
case 262104:
{
returnValue = F("Reichspoststr.");
break;
}
case 262105:
{
returnValue = F("Reichspräsident-Ebert-Str.");
break;
}
case 262106:
{
returnValue = F("Reichssiedlung");
break;
}
case 262107:
{
returnValue = F("Reichssteinweg");
break;
}
case 262108:
{
returnValue = F("Reichsstiftstr.");
break;
}
case 262109:
{
returnValue = F("Reichsstr.");
break;
}
case 262110:
{
returnValue = F("Reichsstädter Str.");
break;
}
case 262111:
{
returnValue = F("Reichstaler Hof");
break;
}
case 262112:
{
returnValue = F("Reichstalpfad");
break;
}
case 262113:
{
returnValue = F("Reichsteiner Str.");
break;
}
case 262114:
{
returnValue = F("Reichstorf");
break;
}
case 262115:
{
returnValue = F("Reichstr.");
break;
}
case 262116:
{
returnValue = F("Reichstädter Str.");
break;
}
case 262117:
{
returnValue = F("Reichswaisenhausstr.");
break;
}
case 262118:
{
returnValue = F("Reichswaldallee");
break;
}
case 262119:
{
returnValue = F("Reichswaldring");
break;
}
case 262120:
{
returnValue = F("Reichswaldstr.");
break;
}
case 262121:
{
returnValue = F("Reichswaldwiese");
break;
}
case 262122:
{
returnValue = F("Reichsweg");
break;
}
case 262123:
{
returnValue = F("Reichswehrstr.");
break;
}
case 262124:
{
returnValue = F("Reichwalder Weg");
break;
}
case 262125:
{
returnValue = F("Reichwaldstr.");
break;
}
case 262126:
{
returnValue = F("Reichweinstr.");
break;
}
case 262127:
{
returnValue = F("Reichweinweg");
break;
}
case 262128:
{
returnValue = F("Reickertstr.");
break;
}
case 262129:
{
returnValue = F("Reickesschneise");
break;
}
case 262130:
{
returnValue = F("Reickstr.");
break;
}
case 262131:
{
returnValue = F("Reidebachbrücke");
break;
}
case 262132:
{
returnValue = F("Reideburger Landstr.");
break;
}
case 262133:
{
returnValue = F("Reideburger Str.");
break;
}
case 262134:
{
returnValue = F("Reidelbach");
break;
}
case 262135:
{
returnValue = F("Reidelbacher Str.");
break;
}
case 262136:
{
returnValue = F("Reidelbachweg");
break;
}
case 262137:
{
returnValue = F("Reidelinger Weg");
break;
}
case 262138:
{
returnValue = F("Reidelstr.");
break;
}
case 262139:
{
returnValue = F("Reidemeisterstr.");
break;
}
case 262140:
{
returnValue = F("Reidemeisterweg");
break;
}
case 262141:
{
returnValue = F("Reidenbruch");
break;
}
case 262142:
{
returnValue = F("Reidenfeld");
break;
}
case 262143:
{
returnValue = F("Reidepromenade");
break;
}
case 262144:
{
returnValue = F("Reider Str.");
break;
}
case 262145:
{
returnValue = F("Reiderländer Str.");
break;
}
case 262146:
{
returnValue = F("Reidershofer Str.");
break;
}
case 262147:
{
returnValue = F("Reiderstr.");
break;
}
case 262148:
{
returnValue = F("Reiderweg");
break;
}
case 262149:
{
returnValue = F("Reiditzer Weg");
break;
}
case 262150:
{
returnValue = F("Reidschott");
break;
}
case 262151:
{
returnValue = F("Reidstr.");
break;
}
case 262152:
{
returnValue = F("Reidtmeisterstr.");
break;
}
case 262153:
{
returnValue = F("Reidweg");
break;
}
case 262154:
{
returnValue = F("Reielgasse");
break;
}
case 262155:
{
returnValue = F("Reiersbacher Str.");
break;
}
case 262156:
{
returnValue = F("Reiersdorf");
break;
}
case 262157:
{
returnValue = F("Reiersdorfer Str.");
break;
}
case 262158:
{
returnValue = F("Reiersdorfer Weg");
break;
}
case 262159:
{
returnValue = F("Reifarthstr.");
break;
}
case 262160:
{
returnValue = F("Reifberg");
break;
}
case 262161:
{
returnValue = F("Reifbergweg");
break;
}
case 262162:
{
returnValue = F("Reifelbergstr.");
break;
}
case 262163:
{
returnValue = F("Reifeld");
break;
}
case 262164:
{
returnValue = F("Reifelder Weg");
break;
}
case 262165:
{
returnValue = F("Reifenberg");
break;
}
case 262166:
{
returnValue = F("Reifenberger Hof");
break;
}
case 262167:
{
returnValue = F("Reifenberger Str.");
break;
}
case 262168:
{
returnValue = F("Reifenberger Weg");
break;
}
case 262169:
{
returnValue = F("Reifenbergstr.");
break;
}
case 262170:
{
returnValue = F("Reifengarten");
break;
}
case 262171:
{
returnValue = F("Reifenhofstr.");
break;
}
case 262172:
{
returnValue = F("Reifenkopfstr.");
break;
}
case 262173:
{
returnValue = F("Reifenrotstr.");
break;
}
case 262174:
{
returnValue = F("Reifensteiner Str.");
break;
}
case 262175:
{
returnValue = F("Reifensteinstr.");
break;
}
case 262176:
{
returnValue = F("Reifensteinweg");
break;
}
case 262177:
{
returnValue = F("Reifenstr.");
break;
}
case 262178:
{
returnValue = F("Reifenstuelstr.");
break;
}
case 262179:
{
returnValue = F("Reifental");
break;
}
case 262180:
{
returnValue = F("Reifenwerkring");
break;
}
case 262181:
{
returnValue = F("Reifenwerkstr.");
break;
}
case 262182:
{
returnValue = F("Reiferbahn");
break;
}
case 262183:
{
returnValue = F("Reiferbornstr.");
break;
}
case 262184:
{
returnValue = F("Reifergang");
break;
}
case 262185:
{
returnValue = F("Reifersbrunner Str.");
break;
}
case 262186:
{
returnValue = F("Reiferscheidstr.");
break;
}
case 262187:
{
returnValue = F("Reifersdorfer Str.");
break;
}
case 262188:
{
returnValue = F("Reiferstr.");
break;
}
case 262189:
{
returnValue = F("Reiferweg");
break;
}
case 262190:
{
returnValue = F("Reiffeisenplatz");
break;
}
case 262191:
{
returnValue = F("Reiffeisenstr.");
break;
}
case 262192:
{
returnValue = F("Reiffelbacher Str.");
break;
}
case 262193:
{
returnValue = F("Reiffenbergstr.");
break;
}
case 262194:
{
returnValue = F("Reiffenbergweg");
break;
}
case 262195:
{
returnValue = F("Reiffengasse");
break;
}
case 262196:
{
returnValue = F("Reiffenstr.");
break;
}
case 262197:
{
returnValue = F("Reiffenstuelstr.");
break;
}
case 262198:
{
returnValue = F("Reiffenstuelweg");
break;
}
case 262199:
{
returnValue = F("Reifferscheider Str.");
break;
}
case 262200:
{
returnValue = F("Reifferscheider Weg");
break;
}
case 262201:
{
returnValue = F("Reifferscheidstr.");
break;
}
case 262202:
{
returnValue = F("Reifferscheidtsgässchen");
break;
}
case 262203:
{
returnValue = F("Reiffstr.");
break;
}
case 262204:
{
returnValue = F("Reifhalde");
break;
}
case 262205:
{
returnValue = F("Reifinger Str.");
break;
}
case 262206:
{
returnValue = F("Reifkrautsweg");
break;
}
case 262207:
{
returnValue = F("Reifldinger Str.");
break;
}
case 262208:
{
returnValue = F("Reiflestr.");
break;
}
case 262209:
{
returnValue = F("Reiflochweg");
break;
}
case 262210:
{
returnValue = F("Reifländer Str.");
break;
}
case 262211:
{
returnValue = F("Reifmattweg");
break;
}
case 262212:
{
returnValue = F("Reifsfeldstr.");
break;
}
case 262213:
{
returnValue = F("Reifsteckengasse");
break;
}
case 262214:
{
returnValue = F("Reifsteckstr.");
break;
}
case 262215:
{
returnValue = F("Reifsteinweg");
break;
}
case 262216:
{
returnValue = F("Reifstock");
break;
}
case 262217:
{
returnValue = F("Reiftal");
break;
}
case 262218:
{
returnValue = F("Reiftalweg");
break;
}
case 262219:
{
returnValue = F("Reifträgerweg");
break;
}
case 262220:
{
returnValue = F("Reifweg");
break;
}
case 262221:
{
returnValue = F("Reifwiesenweg");
break;
}
case 262222:
{
returnValue = F("Reifziehberg");
break;
}
case 262223:
{
returnValue = F("Reigasse");
break;
}
case 262224:
{
returnValue = F("Reigate & Banstead-Platz");
break;
}
case 262225:
{
returnValue = F("Reigelsbergweg");
break;
}
case 262226:
{
returnValue = F("Reiger Weg");
break;
}
case 262227:
{
returnValue = F("Reigernweg");
break;
}
case 262228:
{
returnValue = F("Reigersbergstr.");
break;
}
case 262229:
{
returnValue = F("Reigersvlietallee");
break;
}
case 262230:
{
returnValue = F("Reiglmühlweg");
break;
}
case 262231:
{
returnValue = F("Reiglstr.");
break;
}
case 262232:
{
returnValue = F("Reihbäumer Weg");
break;
}
case 262233:
{
returnValue = F("Reihdamm");
break;
}
case 262234:
{
returnValue = F("Reihe");
break;
}
case 262235:
{
returnValue = F("Reihe 1");
break;
}
case 262236:
{
returnValue = F("Reihe 2");
break;
}
case 262237:
{
returnValue = F("Reihe Bäume");
break;
}
case 262238:
{
returnValue = F("Reihe-Bäume-Schneise");
break;
}
case 262239:
{
returnValue = F("Reiheichen");
break;
}
case 262240:
{
returnValue = F("Reihekamp");
break;
}
case 262241:
{
returnValue = F("Reihelberg");
break;
}
case 262242:
{
returnValue = F("Reihenbaumweg");
break;
}
case 262243:
{
returnValue = F("Reihendorfer Weg");
break;
}
case 262244:
{
returnValue = F("Reihener Str.");
break;
}
case 262245:
{
returnValue = F("Reihener Weg");
break;
}
case 262246:
{
returnValue = F("Reihengartenweg");
break;
}
case 262247:
{
returnValue = F("Reihengasse");
break;
}
case 262248:
{
returnValue = F("Reihenhausring");
break;
}
case 262249:
{
returnValue = F("Reihenhausweg");
break;
}
case 262250:
{
returnValue = F("Reihenpesch");
break;
}
case 262251:
{
returnValue = F("Reihenstr.");
break;
}
case 262252:
{
returnValue = F("Reihenweg");
break;
}
case 262253:
{
returnValue = F("Reiher");
break;
}
case 262254:
{
returnValue = F("Reiherbach");
break;
}
case 262255:
{
returnValue = F("Reiherbachstr.");
break;
}
case 262256:
{
returnValue = F("Reiherberg");
break;
}
case 262257:
{
returnValue = F("Reiherbergstr.");
break;
}
case 262258:
{
returnValue = F("Reiherbruch");
break;
}
case 262259:
{
returnValue = F("Reiherbusch");
break;
}
case 262260:
{
returnValue = F("Reiherbusch Brücke");
break;
}
case 262261:
{
returnValue = F("Reihereck");
break;
}
case 262262:
{
returnValue = F("Reiherfeld");
break;
}
case 262263:
{
returnValue = F("Reihergrund");
break;
}
case 262264:
{
returnValue = F("Reiherhagen");
break;
}
case 262265:
{
returnValue = F("Reiherhof");
break;
}
case 262266:
{
returnValue = F("Reiherholt");
break;
}
case 262267:
{
returnValue = F("Reiherholz");
break;
}
case 262268:
{
returnValue = F("Reiherhorst");
break;
}
case 262269:
{
returnValue = F("Reiherhorstweg");
break;
}
case 262270:
{
returnValue = F("Reiherkamp");
break;
}
case 262271:
{
returnValue = F("Reiherkolonie");
break;
}
case 262272:
{
returnValue = F("Reihermoorweg");
break;
}
case 262273:
{
returnValue = F("Reihernweg");
break;
}
case 262274:
{
returnValue = F("Reiherplatz");
break;
}
case 262275:
{
returnValue = F("Reihersbergstr.");
break;
}
case 262276:
{
returnValue = F("Reihersgasse");
break;
}
case 262277:
{
returnValue = F("Reihersiedlung");
break;
}
case 262278:
{
returnValue = F("Reihersteg");
break;
}
case 262279:
{
returnValue = F("Reiherstieg");
break;
}
case 262280:
{
returnValue = F("Reiherstiege");
break;
}
case 262281:
{
returnValue = F("Reiherstor");
break;
}
case 262282:
{
returnValue = F("Reiherstr.");
break;
}
case 262283:
{
returnValue = F("Reihertief");
break;
}
case 262284:
{
returnValue = F("Reiherwaldstr.");
break;
}
case 262285:
{
returnValue = F("Reiherwaldweg");
break;
}
case 262286:
{
returnValue = F("Reiherweg");
break;
}
case 262287:
{
returnValue = F("Reiherwiese");
break;
}
case 262288:
{
returnValue = F("Reiherwinkel");
break;
}
case 262289:
{
returnValue = F("Reihingweg");
break;
}
case 262290:
{
returnValue = F("Reihlenstr.");
break;
}
case 262291:
{
returnValue = F("Reihstr.");
break;
}
case 262292:
{
returnValue = F("Reihweg");
break;
}
case 262293:
{
returnValue = F("Reihwiesenweg");
break;
}
case 262294:
{
returnValue = F("Reihzecher Str.");
break;
}
case 262295:
{
returnValue = F("Reiinge");
break;
}
case 262296:
{
returnValue = F("Reikeringer Str.");
break;
}
case 262297:
{
returnValue = F("Reikherstr.");
break;
}
case 262298:
{
returnValue = F("Reil");
break;
}
case 262299:
{
returnValue = F("Reilchen");
break;
}
case 262300:
{
returnValue = F("Reileifzer Str.");
break;
}
case 262301:
{
returnValue = F("Reilinger Eck");
break;
}
case 262302:
{
returnValue = F("Reilinger Str.");
break;
}
case 262303:
{
returnValue = F("Reilinger Weg");
break;
}
case 262304:
{
returnValue = F("Reilinsberg");
break;
}
case 262305:
{
returnValue = F("Reilmannsweg");
break;
}
case 262306:
{
returnValue = F("Reiloser Str.");
break;
}
case 262307:
{
returnValue = F("Reilsheck");
break;
}
case 262308:
{
returnValue = F("Reilsheimer Mühlweg");
break;
}
case 262309:
{
returnValue = F("Reilsheimer Str.");
break;
}
case 262310:
{
returnValue = F("Reilsheimer Weg");
break;
}
case 262311:
{
returnValue = F("Reilshof");
break;
}
case 262312:
{
returnValue = F("Reilstr.");
break;
}
case 262313:
{
returnValue = F("Reilweg");
break;
}
case 262314:
{
returnValue = F("Reimanns Kotten");
break;
}
case 262315:
{
returnValue = F("Reimannstr.");
break;
}
case 262316:
{
returnValue = F("Reimannsweg");
break;
}
case 262317:
{
returnValue = F("Reimanstr.");
break;
}
case 262318:
{
returnValue = F("Reimarstr.");
break;
}
case 262319:
{
returnValue = F("Reimboldshäuser Str.");
break;
}
case 262320:
{
returnValue = F("Reimelstr.");
break;
}
case 262321:
{
returnValue = F("Reimelsweg");
break;
}
case 262322:
{
returnValue = F("Reimenröder Str.");
break;
}
case 262323:
{
returnValue = F("Reimer-Hansen-Str.");
break;
}
case 262324:
{
returnValue = F("Reimer-von-Wiemerstedt-Str.");
break;
}
case 262325:
{
returnValue = F("Reimerdeskamp");
break;
}
case 262326:
{
returnValue = F("Reimerdesstr.");
break;
}
case 262327:
{
returnValue = F("Reimerdinger Str.");
break;
}
case 262328:
{
returnValue = F("Reimergasse");
break;
}
case 262329:
{
returnValue = F("Reimeringhäuser Weg");
break;
}
case 262330:
{
returnValue = F("Reimers Kamp");
break;
}
case 262331:
{
returnValue = F("Reimers Kolken");
break;
}
case 262332:
{
returnValue = F("Reimersbude");
break;
}
case 262333:
{
returnValue = F("Reimersgrüner Str.");
break;
}
case 262334:
{
returnValue = F("Reimershagen");
break;
}
case 262335:
{
returnValue = F("Reimershofer Weg");
break;
}
case 262336:
{
returnValue = F("Reimerskoppel");
break;
}
case 262337:
{
returnValue = F("Reimersstr.");
break;
}
case 262338:
{
returnValue = F("Reimerstr.");
break;
}
case 262339:
{
returnValue = F("Reimerstwiete");
break;
}
case 262340:
{
returnValue = F("Reimersweg");
break;
}
case 262341:
{
returnValue = F("Reimersäge");
break;
}
case 262342:
{
returnValue = F("Reimert-Hansen-Weg");
break;
}
case 262343:
{
returnValue = F("Reimerweg");
break;
}
case 262344:
{
returnValue = F("Reimlers Teich");
break;
}
case 262345:
{
returnValue = F("Reimmannstr.");
break;
}
case 262346:
{
returnValue = F("Reimodisstr.");
break;
}
case 262347:
{
returnValue = F("Reimsbacher Str.");
break;
}
case 262348:
{
returnValue = F("Reimser Str.");
break;
}
case 262349:
{
returnValue = F("Reimsweg");
break;
}
case 262350:
{
returnValue = F("Reimweg");
break;
}
case 262351:
{
returnValue = F("Reinacher Weg");
break;
}
case 262352:
{
returnValue = F("Reinacher-Härlin-Weg");
break;
}
case 262353:
{
returnValue = F("Reinachstr.");
break;
}
case 262354:
{
returnValue = F("Reinachweg");
break;
}
case 262355:
{
returnValue = F("Reinald-von-Dassel-Str.");
break;
}
case 262356:
{
returnValue = F("Reinaldstr.");
break;
}
case 262357:
{
returnValue = F("Reinartzpfad");
break;
}
case 262358:
{
returnValue = F("Reinarzstr.");
break;
}
case 262359:
{
returnValue = F("Reinau");
break;
}
case 262360:
{
returnValue = F("Reinbachstr.");
break;
}
case 262361:
{
returnValue = F("Reinbachweg");
break;
}
case 262362:
{
returnValue = F("Reinbeckeweg");
break;
}
case 262363:
{
returnValue = F("Reinbeckstr.");
break;
}
case 262364:
{
returnValue = F("Reinbeker Str.");
break;
}
case 262365:
{
returnValue = F("Reinbeker Weg");
break;
}
case 262366:
{
returnValue = F("Reinberg");
break;
}
case 262367:
{
returnValue = F("Reinberger Dorfstr.");
break;
}
case 262368:
{
returnValue = F("Reinberger Str.");
break;
}
case 262369:
{
returnValue = F("Reinberger Weg");
break;
}
case 262370:
{
returnValue = F("Reinbergstr.");
break;
}
case 262371:
{
returnValue = F("Reinboldweg");
break;
}
case 262372:
{
returnValue = F("Reinborner Str.");
break;
}
case 262373:
{
returnValue = F("Reinborner Weg");
break;
}
case 262374:
{
returnValue = F("Reinbothweg");
break;
}
case 262375:
{
returnValue = F("Reinbotostr.");
break;
}
case 262376:
{
returnValue = F("Reinbotstr.");
break;
}
case 262377:
{
returnValue = F("Reinckestr.");
break;
}
case 262378:
{
returnValue = F("Reindersdamm");
break;
}
case 262379:
{
returnValue = F("Reindershof");
break;
}
case 262380:
{
returnValue = F("Reindersweg");
break;
}
case 262381:
{
returnValue = F("Reindl");
break;
}
case 262382:
{
returnValue = F("Reindlhofstr.");
break;
}
case 262383:
{
returnValue = F("Reindlstr.");
break;
}
case 262384:
{
returnValue = F("Reindlweg");
break;
}
case 262385:
{
returnValue = F("Reindorfer Dorfstr.");
break;
}
case 262386:
{
returnValue = F("Reindorfer Eck");
break;
}
case 262387:
{
returnValue = F("Reindorfer Feldweg");
break;
}
case 262388:
{
returnValue = F("Reindorfer Landstr.");
break;
}
case 262389:
{
returnValue = F("Reindorfer Osterberg");
break;
}
case 262390:
{
returnValue = F("Reindorfer Schulweg");
break;
}
case 262391:
{
returnValue = F("Reindorfer Str.");
break;
}
case 262392:
{
returnValue = F("Reindorfer Weg");
break;
}
case 262393:
{
returnValue = F("Reindorfer Wiesenweg");
break;
}
case 262394:
{
returnValue = F("Reine");
break;
}
case 262395:
{
returnValue = F("Reine Gasse");
break;
}
case 262396:
{
returnValue = F("Reinebuld");
break;
}
case 262397:
{
returnValue = F("Reineburgstr.");
break;
}
case 262398:
{
returnValue = F("Reineburgweg");
break;
}
case 262399:
{
returnValue = F("Reineckenweg");
break;
}
case 262400:
{
returnValue = F("Reineckerstr.");
break;
}
case 262401:
{
returnValue = F("Reineckestr.");
break;
}
case 262402:
{
returnValue = F("Reineckeweg");
break;
}
case 262403:
{
returnValue = F("Reinefarthstr.");
break;
}
case 262404:
{
returnValue = F("Reinekamp");
break;
}
case 262405:
{
returnValue = F("Reineke-Fuchs-Weg");
break;
}
case 262406:
{
returnValue = F("Reinekens Grund");
break;
}
case 262407:
{
returnValue = F("Reinekering");
break;
}
case 262408:
{
returnValue = F("Reinekestr.");
break;
}
case 262409:
{
returnValue = F("Reinekeweg");
break;
}
case 262410:
{
returnValue = F("Reinekingstr.");
break;
}
case 262411:
{
returnValue = F("Reinenhof");
break;
}
case 262412:
{
returnValue = F("Reiner Mertens Platz");
break;
}
case 262413:
{
returnValue = F("Reiner Str.");
break;
}
case 262414:
{
returnValue = F("Reiner Wißmann-Weg");
break;
}
case 262415:
{
returnValue = F("Reiner-Daelen-Str.");
break;
}
case 262416:
{
returnValue = F("Reiner-Hütten-Str.");
break;
}
case 262417:
{
returnValue = F("Reiner-Klimke-Str.");
break;
}
case 262418:
{
returnValue = F("Reiner-Klimke-Weg");
break;
}
case 262419:
{
returnValue = F("Reiner-Lange-Str.");
break;
}
case 262420:
{
returnValue = F("Reiner-Lintermans-Str.");
break;
}
case 262421:
{
returnValue = F("Reiner-Reineccius-Str.");
break;
}
case 262422:
{
returnValue = F("Reiner-Trillen-Str.");
break;
}
case 262423:
{
returnValue = F("Reiner-Zimmermann-Str.");
break;
}
case 262424:
{
returnValue = F("Reinerbachweg");
break;
}
case 262425:
{
returnValue = F("Reinerbecker Str.");
break;
}
case 262426:
{
returnValue = F("Reinerhofweg");
break;
}
case 262427:
{
returnValue = F("Reinermannstr.");
break;
}
case 262428:
{
returnValue = F("Reinersdorfer Str.");
break;
}
case 262429:
{
returnValue = F("Reinerskamp");
break;
}
case 262430:
{
returnValue = F("Reinersreuth");
break;
}
case 262431:
{
returnValue = F("Reinersreuther Str.");
break;
}
case 262432:
{
returnValue = F("Reinersstr.");
break;
}
case 262433:
{
returnValue = F("Reinerstr.");
break;
}
case 262434:
{
returnValue = F("Reinersweg");
break;
}
case 262435:
{
returnValue = F("Reinertstr.");
break;
}
case 262436:
{
returnValue = F("Reinerzauer Oberdörfle");
break;
}
case 262437:
{
returnValue = F("Reinerzauer Rötenbächle");
break;
}
case 262438:
{
returnValue = F("Reinerzauer Steige");
break;
}
case 262439:
{
returnValue = F("Reinerzauer Str.");
break;
}
case 262440:
{
returnValue = F("Reinerzauer Talstr.");
break;
}
case 262441:
{
returnValue = F("Reinerzauer Unterdörfle");
break;
}
case 262442:
{
returnValue = F("Reinerzaustr.");
break;
}
case 262443:
{
returnValue = F("Reinerzer Ring");
break;
}
case 262444:
{
returnValue = F("Reinerzer Str.");
break;
}
case 262445:
{
returnValue = F("Reinerzer Weg");
break;
}
case 262446:
{
returnValue = F("Reinetalweg");
break;
}
case 262447:
{
returnValue = F("Reinfeld");
break;
}
case 262448:
{
returnValue = F("Reinfelder Str.");
break;
}
case 262449:
{
returnValue = F("Reinfridusstr.");
break;
}
case 262450:
{
returnValue = F("Reinganumstr.");
break;
}
case 262451:
{
returnValue = F("Reingard-Heider-Str.");
break;
}
case 262452:
{
returnValue = F("Reingardis-Hauser-Str.");
break;
}
case 262453:
{
returnValue = F("Reingartenstr.");
break;
}
case 262454:
{
returnValue = F("Reingertstr.");
break;
}
case 262455:
{
returnValue = F("Reingoldweg");
break;
}
case 262456:
{
returnValue = F("Reingrub");
break;
}
case 262457:
{
returnValue = F("Reingruber Weg");
break;
}
case 262458:
{
returnValue = F("Reingsen");
break;
}
case 262459:
{
returnValue = F("Reingser Weg");
break;
}
case 262460:
{
returnValue = F("Reinhard-Baumeister-Platz");
break;
}
case 262461:
{
returnValue = F("Reinhard-Boetzkes-Str.");
break;
}
case 262462:
{
returnValue = F("Reinhard-Booz-Str.");
break;
}
case 262463:
{
returnValue = F("Reinhard-Freericks-Str.");
break;
}
case 262464:
{
returnValue = F("Reinhard-Götte-Weg");
break;
}
case 262465:
{
returnValue = F("Reinhard-Hanack-Str.");
break;
}
case 262466:
{
returnValue = F("Reinhard-Hoppe-Str.");
break;
}
case 262467:
{
returnValue = F("Reinhard-Keiser-Str.");
break;
}
case 262468:
{
returnValue = F("Reinhard-Klose-Weg");
break;
}
case 262469:
{
returnValue = F("Reinhard-Koch-Str.");
break;
}
case 262470:
{
returnValue = F("Reinhard-Kuhlmann-Str.");
break;
}
case 262471:
{
returnValue = F("Reinhard-Lakomy-Str.");
break;
}
case 262472:
{
returnValue = F("Reinhard-Leutner-Str.");
break;
}
case 262473:
{
returnValue = F("Reinhard-Maack-Str.");
break;
}
case 262474:
{
returnValue = F("Reinhard-Mannesmann-Str.");
break;
}
case 262475:
{
returnValue = F("Reinhard-Mannesmann-Weg");
break;
}
case 262476:
{
returnValue = F("Reinhard-Müller-Ring");
break;
}
case 262477:
{
returnValue = F("Reinhard-Raffalt-Str.");
break;
}
case 262478:
{
returnValue = F("Reinhard-Rau-Siedlung");
break;
}
case 262479:
{
returnValue = F("Reinhard-Reichenbach-Str.");
break;
}
case 262480:
{
returnValue = F("Reinhard-Reichnow-Str.");
break;
}
case 262481:
{
returnValue = F("Reinhard-Rube-Str.");
break;
}
case 262482:
{
returnValue = F("Reinhard-Rödel-Weg");
break;
}
case 262483:
{
returnValue = F("Reinhard-Samesreuther-Str.");
break;
}
case 262484:
{
returnValue = F("Reinhard-Scheuerle-Weg");
break;
}
case 262485:
{
returnValue = F("Reinhard-Schiestel-Str.");
break;
}
case 262486:
{
returnValue = F("Reinhard-Schmidt-Str.");
break;
}
case 262487:
{
returnValue = F("Reinhard-Seidemann-Str.");
break;
}
case 262488:
{
returnValue = F("Reinhard-Stier-Str.");
break;
}
case 262489:
{
returnValue = F("Reinhard-Strecker-Str.");
break;
}
case 262490:
{
returnValue = F("Reinhard-Strecker-Weg");
break;
}
case 262491:
{
returnValue = F("Reinhard-Uhlig-Str.");
break;
}
case 262492:
{
returnValue = F("Reinhard-Weg");
break;
}
case 262493:
{
returnValue = F("Reinhard-Wirtgen-Str.");
break;
}
case 262494:
{
returnValue = F("Reinhard-Wohltmann-Str.");
break;
}
case 262495:
{
returnValue = F("Reinhard-von-Koenig-Str.");
break;
}
case 262496:
{
returnValue = F("Reinhard-zu-Rhynern-Str.");
break;
}
case 262497:
{
returnValue = F("Reinhards");
break;
}
case 262498:
{
returnValue = F("Reinhards Berg");
break;
}
case 262499:
{
returnValue = F("Reinhardsachsener Str.");
break;
}
case 262500:
{
returnValue = F("Reinhardsau");
break;
}
case 262501:
{
returnValue = F("Reinhardsbrunn");
break;
}
case 262502:
{
returnValue = F("Reinhardsbrunner Str.");
break;
}
case 262503:
{
returnValue = F("Reinhardser Str.");
break;
}
case 262504:
{
returnValue = F("Reinhardsgasse");
break;
}
case 262505:
{
returnValue = F("Reinhardshainer Str.");
break;
}
case 262506:
{
returnValue = F("Reinhardshainer Weg");
break;
}
case 262507:
{
returnValue = F("Reinhardshausen");
break;
}
case 262508:
{
returnValue = F("Reinhardshof");
break;
}
case 262509:
{
returnValue = F("Reinhardshäuser Str.");
break;
}
case 262510:
{
returnValue = F("Reinhardshöfer Str.");
break;
}
case 262511:
{
returnValue = F("Reinhardsleiten");
break;
}
case 262512:
{
returnValue = F("Reinhardsrieder Str.");
break;
}
case 262513:
{
returnValue = F("Reinhardsrieth");
break;
}
case 262514:
{
returnValue = F("Reinhardstoettnerstr.");
break;
}
case 262515:
{
returnValue = F("Reinhardstr.");
break;
}
case 262516:
{
returnValue = F("Reinhardswaldschule");
break;
}
case 262517:
{
returnValue = F("Reinhardswaldstr.");
break;
}
case 262518:
{
returnValue = F("Reinhardswaldweg");
break;
}
case 262519:
{
returnValue = F("Reinhardsweg");
break;
}
case 262520:
{
returnValue = F("Reinhardswiesen");
break;
}
case 262521:
{
returnValue = F("Reinhardtallee");
break;
}
case 262522:
{
returnValue = F("Reinhardtsdorf");
break;
}
case 262523:
{
returnValue = F("Reinhardtsgrimmaer Str.");
break;
}
case 262524:
{
returnValue = F("Reinhardtsgrund");
break;
}
case 262525:
{
returnValue = F("Reinhardtshof");
break;
}
case 262526:
{
returnValue = F("Reinhardtstal");
break;
}
case 262527:
{
returnValue = F("Reinhardtstr.");
break;
}
case 262528:
{
returnValue = F("Reinhardtswalde");
break;
}
case 262529:
{
returnValue = F("Reinhardtsweg");
break;
}
case 262530:
{
returnValue = F("Reinhardtweg");
break;
}
case 262531:
{
returnValue = F("Reinhardweg");
break;
}
case 262532:
{
returnValue = F("Reinhartshauser Str.");
break;
}
case 262533:
{
returnValue = F("Reinhartshofer Str.");
break;
}
case 262534:
{
returnValue = F("Reinhartsmais");
break;
}
case 262535:
{
returnValue = F("Reinhartsmühlstr.");
break;
}
case 262536:
{
returnValue = F("Reinharz");
break;
}
case 262537:
{
returnValue = F("Reinharzer Str.");
break;
}
case 262538:
{
returnValue = F("Reinharzer Weg");
break;
}
case 262539:
{
returnValue = F("Reinharzstr.");
break;
}
case 262540:
{
returnValue = F("Reinhausen");
break;
}
case 262541:
{
returnValue = F("Reinhausener Brücke");
break;
}
case 262542:
{
returnValue = F("Reinhausener Damm");
break;
}
case 262543:
{
returnValue = F("Reinhauser Brücke");
break;
}
case 262544:
{
returnValue = F("Reinhausweg");
break;
}
case 262545:
{
returnValue = F("Reinheimer Str.");
break;
}
case 262546:
{
returnValue = F("Reinheimer Weg");
break;
}
case 262547:
{
returnValue = F("Reinherstr.");
break;
}
case 262548:
{
returnValue = F("Reinhildenstr.");
break;
}
case 262549:
{
returnValue = F("Reinhildisstr.");
break;
}
case 262550:
{
returnValue = F("Reinhildisweg");
break;
}
case 262551:
{
returnValue = F("Reinhofweg");
break;
}
case 262552:
{
returnValue = F("Reinhold-Abele-Str.");
break;
}
case 262553:
{
returnValue = F("Reinhold-Bauch-Weg");
break;
}
case 262554:
{
returnValue = F("Reinhold-Bechtle-Str.");
break;
}
case 262555:
{
returnValue = F("Reinhold-Beck-Str.");
break;
}
case 262556:
{
returnValue = F("Reinhold-Becker-Str.");
break;
}
case 262557:
{
returnValue = F("Reinhold-Böhm-Str.");
break;
}
case 262558:
{
returnValue = F("Reinhold-Büttner-Str.");
break;
}
case 262559:
{
returnValue = F("Reinhold-Forster-Weg");
break;
}
case 262560:
{
returnValue = F("Reinhold-Frank-Str.");
break;
}
case 262561:
{
returnValue = F("Reinhold-Friedrichs-Str.");
break;
}
case 262562:
{
returnValue = F("Reinhold-Fyrnys-Str.");
break;
}
case 262563:
{
returnValue = F("Reinhold-Giese-Str.");
break;
}
case 262564:
{
returnValue = F("Reinhold-Grübl-Weg");
break;
}
case 262565:
{
returnValue = F("Reinhold-Hanke-Str.");
break;
}
case 262566:
{
returnValue = F("Reinhold-Huhn-Str.");
break;
}
case 262567:
{
returnValue = F("Reinhold-Härzer-Str.");
break;
}
case 262568:
{
returnValue = F("Reinhold-Jacob-Weg");
break;
}
case 262569:
{
returnValue = F("Reinhold-Kirn-Weg");
break;
}
case 262570:
{
returnValue = F("Reinhold-Kirsten-Str.");
break;
}
case 262571:
{
returnValue = F("Reinhold-Koeppel-Str.");
break;
}
case 262572:
{
returnValue = F("Reinhold-Koeppl-Str.");
break;
}
case 262573:
{
returnValue = F("Reinhold-Krauß-Str.");
break;
}
case 262574:
{
returnValue = F("Reinhold-Krüger-Str.");
break;
}
case 262575:
{
returnValue = F("Reinhold-Köhler-Str.");
break;
}
case 262576:
{
returnValue = F("Reinhold-Langenberger-Weg");
break;
}
case 262577:
{
returnValue = F("Reinhold-Lingner-Str.");
break;
}
case 262578:
{
returnValue = F("Reinhold-Lude-Weg");
break;
}
case 262579:
{
returnValue = F("Reinhold-Maier-Platz");
break;
}
case 262580:
{
returnValue = F("Reinhold-Maier-Str.");
break;
}
case 262581:
{
returnValue = F("Reinhold-Maier-Weg");
break;
}
case 262582:
{
returnValue = F("Reinhold-Meier-Platz");
break;
}
case 262583:
{
returnValue = F("Reinhold-Meyer-Str.");
break;
}
case 262584:
{
returnValue = F("Reinhold-Mohr-Ufer");
break;
}
case 262585:
{
returnValue = F("Reinhold-Müller-Str.");
break;
}
case 262586:
{
returnValue = F("Reinhold-Nägele-Hof");
break;
}
case 262587:
{
returnValue = F("Reinhold-Nägele-Weg");
break;
}
case 262588:
{
returnValue = F("Reinhold-Preiß-Str.");
break;
}
case 262589:
{
returnValue = F("Reinhold-Rost-Str.");
break;
}
case 262590:
{
returnValue = F("Reinhold-Schick-Platz");
break;
}
case 262591:
{
returnValue = F("Reinhold-Schleese-Str.");
break;
}
case 262592:
{
returnValue = F("Reinhold-Schmidt-Str.");
break;
}
case 262593:
{
returnValue = F("Reinhold-Schneider-Str.");
break;
}
case 262594:
{
returnValue = F("Reinhold-Schneider-Weg");
break;
}
case 262595:
{
returnValue = F("Reinhold-Schröder-Str.");
break;
}
case 262596:
{
returnValue = F("Reinhold-Schulze-Str.");
break;
}
case 262597:
{
returnValue = F("Reinhold-Silz-Platz");
break;
}
case 262598:
{
returnValue = F("Reinhold-Staudt-Platz");
break;
}
case 262599:
{
returnValue = F("Reinhold-Stief-Str.");
break;
}
case 262600:
{
returnValue = F("Reinhold-Tiling-Weg");
break;
}
case 262601:
{
returnValue = F("Reinhold-Timme-Str.");
break;
}
case 262602:
{
returnValue = F("Reinhold-Vöster-Str.");
break;
}
case 262603:
{
returnValue = F("Reinhold-Wagner-Str.");
break;
}
case 262604:
{
returnValue = F("Reinhold-Würth-Str.");
break;
}
case 262605:
{
returnValue = F("Reinhold-Zeller-Str.");
break;
}
case 262606:
{
returnValue = F("Reinhold-Zellner-Str.");
break;
}
case 262607:
{
returnValue = F("Reinhold-Zingel-Weg");
break;
}
case 262608:
{
returnValue = F("Reinholds-Pfad");
break;
}
case 262609:
{
returnValue = F("Reinholdshainer Str.");
break;
}
case 262610:
{
returnValue = F("Reinholdshöheweg");
break;
}
case 262611:
{
returnValue = F("Reinholdstr.");
break;
}
case 262612:
{
returnValue = F("Reinholdtrail");
break;
}
case 262613:
{
returnValue = F("Reinholdweg");
break;
}
case 262614:
{
returnValue = F("Reinhornweg");
break;
}
case 262615:
{
returnValue = F("Reinhäuser Landstr.");
break;
}
case 262616:
{
returnValue = F("Reinhäuser Str.");
break;
}
case 262617:
{
returnValue = F("Reinickendorfer Ring");
break;
}
case 262618:
{
returnValue = F("Reinickendorfer Str.");
break;
}
case 262619:
{
returnValue = F("Reinickendorfer Weg");
break;
}
case 262620:
{
returnValue = F("Reinickendorfweg");
break;
}
case 262621:
{
returnValue = F("Reinickestr.");
break;
}
case 262622:
{
returnValue = F("Reiniger Brücke");
break;
}
case 262623:
{
returnValue = F("Reiniger Str.");
break;
}
case 262624:
{
returnValue = F("Reinigerstr.");
break;
}
case 262625:
{
returnValue = F("Reinighofstr.");
break;
}
case 262626:
{
returnValue = F("Reinigsgässle");
break;
}
case 262627:
{
returnValue = F("Reinigshofstr.");
break;
}
case 262628:
{
returnValue = F("Reiningen");
break;
}
case 262629:
{
returnValue = F("Reininger Kirchweg");
break;
}
case 262630:
{
returnValue = F("Reininger Str.");
break;
}
case 262631:
{
returnValue = F("Reininghausen");
break;
}
case 262632:
{
returnValue = F("Reininghauser Str.");
break;
}
case 262633:
{
returnValue = F("Reiningstr.");
break;
}
case 262634:
{
returnValue = F("Reinisch Feld");
break;
}
case 262635:
{
returnValue = F("Reinkamp");
break;
}
case 262636:
{
returnValue = F("Reinkebarg");
break;
}
case 262637:
{
returnValue = F("Reinken Weide");
break;
}
case 262638:
{
returnValue = F("Reinkenort");
break;
}
case 262639:
{
returnValue = F("Reinkensweg");
break;
}
case 262640:
{
returnValue = F("Reinkental");
break;
}
case 262641:
{
returnValue = F("Reinkenweg");
break;
}
case 262642:
{
returnValue = F("Reinkenwiese");
break;
}
case 262643:
{
returnValue = F("Reinkers Kamp");
break;
}
case 262644:
{
returnValue = F("Reinkeweg");
break;
}
case 262645:
{
returnValue = F("Reinlemattweg");
break;
}
case 262646:
{
returnValue = F("Reinlestr.");
break;
}
case 262647:
{
returnValue = F("Reinmarstr.");
break;
}
case 262648:
{
returnValue = F("Reinmodisstr.");
break;
}
case 262649:
{
returnValue = F("Reinmuthstr.");
break;
}
case 262650:
{
returnValue = F("Reinold-Hagen-Str.");
break;
}
case 262651:
{
returnValue = F("Reinoldistr.");
break;
}
case 262652:
{
returnValue = F("Reinoldstr.");
break;
}
case 262653:
{
returnValue = F("Reinoldweg");
break;
}
case 262654:
{
returnValue = F("Reinowitzer Str.");
break;
}
case 262655:
{
returnValue = F("Reinpfad");
break;
}
case 262656:
{
returnValue = F("Reinpoldstr.");
break;
}
case 262657:
{
returnValue = F("Reinprechtinger Str.");
break;
}
case 262658:
{
returnValue = F("Reinpuscher Weg");
break;
}
case 262659:
{
returnValue = F("Reinsbach");
break;
}
case 262660:
{
returnValue = F("Reinsbeker Str.");
break;
}
case 262661:
{
returnValue = F("Reinsberger Park");
break;
}
case 262662:
{
returnValue = F("Reinsberger Str.");
break;
}
case 262663:
{
returnValue = F("Reinsbronn");
break;
}
case 262664:
{
returnValue = F("Reinsbüller Weg");
break;
}
case 262665:
{
returnValue = F("Reinschartenweg");
break;
}
case 262666:
{
returnValue = F("Reinsdorf");
break;
}
case 262667:
{
returnValue = F("Reinsdorfer Alte Gasse");
break;
}
case 262668:
{
returnValue = F("Reinsdorfer Gartenweg");
break;
}
case 262669:
{
returnValue = F("Reinsdorfer Nordstr.");
break;
}
case 262670:
{
returnValue = F("Reinsdorfer Park");
break;
}
case 262671:
{
returnValue = F("Reinsdorfer Str.");
break;
}
case 262672:
{
returnValue = F("Reinsdorfer Weg");
break;
}
case 262673:
{
returnValue = F("Reinsdorfer Weg Siedlung");
break;
}
case 262674:
{
returnValue = F("Reinsehlen");
break;
}
case 262675:
{
returnValue = F("Reinsehlener Weg");
break;
}
case 262676:
{
returnValue = F("Reinserturmweg");
break;
}
case 262677:
{
returnValue = F("Reinsfelder Weg");
break;
}
case 262678:
{
returnValue = F("Reinshagen");
break;
}
case 262679:
{
returnValue = F("Reinshagen-Ausbau");
break;
}
case 262680:
{
returnValue = F("Reinshagener Str.");
break;
}
case 262681:
{
returnValue = F("Reinshagener Weg");
break;
}
case 262682:
{
returnValue = F("Reinshagensbever");
break;
}
case 262683:
{
returnValue = F("Reinshagenstr.");
break;
}
case 262684:
{
returnValue = F("Reinshof");
break;
}
case 262685:
{
returnValue = F("Reinshäger Weg");
break;
}
case 262686:
{
returnValue = F("Reinskamp");
break;
}
case 262687:
{
returnValue = F("Reinsohlweg");
break;
}
case 262688:
{
returnValue = F("Reinsporter Str.");
break;
}
case 262689:
{
returnValue = F("Reinstedter Str.");
break;
}
case 262690:
{
returnValue = F("Reinstedter Weg");
break;
}
case 262691:
{
returnValue = F("Reinsteinstr.");
break;
}
case 262692:
{
returnValue = F("Reinstetter Str.");
break;
}
case 262693:
{
returnValue = F("Reinstorfer Ring");
break;
}
case 262694:
{
returnValue = F("Reinstorfer Str.");
break;
}
case 262695:
{
returnValue = F("Reinstorfer Weg");
break;
}
case 262696:
{
returnValue = F("Reinstorfer Weg Ausbau");
break;
}
case 262697:
{
returnValue = F("Reinstr.");
break;
}
case 262698:
{
returnValue = F("Reinsweg");
break;
}
case 262699:
{
returnValue = F("Reintal");
break;
}
case 262700:
{
returnValue = F("Reintalstr.");
break;
}
case 262701:
{
returnValue = F("Reintalweg");
break;
}
case 262702:
{
returnValue = F("Reintgasse");
break;
}
case 262703:
{
returnValue = F("Reinthalerstr.");
break;
}
case 262704:
{
returnValue = F("Reintjesweg");
break;
}
case 262705:
{
returnValue = F("Reinwaldstr.");
break;
}
case 262706:
{
returnValue = F("Reinwaltstr.");
break;
}
case 262707:
{
returnValue = F("Reinwardtstr.");
break;
}
case 262708:
{
returnValue = F("Reinwarzhofen");
break;
}
case 262709:
{
returnValue = F("Reinweg");
break;
}
case 262710:
{
returnValue = F("Reinzstr.");
break;
}
case 262711:
{
returnValue = F("Reinäckerweg");
break;
}
case 262712:
{
returnValue = F("Reinöhlstr.");
break;
}
case 262713:
{
returnValue = F("Reipeldinger Str.");
break;
}
case 262714:
{
returnValue = F("Reipisch");
break;
}
case 262715:
{
returnValue = F("Reipoldskircher Gasse");
break;
}
case 262716:
{
returnValue = F("Reis");
break;
}
case 262717:
{
returnValue = F("Reisach");
break;
}
case 262718:
{
returnValue = F("Reisachallee");
break;
}
case 262719:
{
returnValue = F("Reisachangerstr.");
break;
}
case 262720:
{
returnValue = F("Reisacher Bergweg");
break;
}
case 262721:
{
returnValue = F("Reisacher Str.");
break;
}
case 262722:
{
returnValue = F("Reisacher Weg");
break;
}
case 262723:
{
returnValue = F("Reisacherstr.");
break;
}
case 262724:
{
returnValue = F("Reisachstr.");
break;
}
case 262725:
{
returnValue = F("Reisachweg");
break;
}
case 262726:
{
returnValue = F("Reisachöd");
break;
}
case 262727:
{
returnValue = F("Reisackerweg");
break;
}
case 262728:
{
returnValue = F("Reisatstr.");
break;
}
case 262729:
{
returnValue = F("Reisaus");
break;
}
case 262730:
{
returnValue = F("Reisbacher Str.");
break;
}
case 262731:
{
returnValue = F("Reisbacherweg");
break;
}
case 262732:
{
returnValue = F("Reisbachstr.");
break;
}
case 262733:
{
returnValue = F("Reisbachweg");
break;
}
case 262734:
{
returnValue = F("Reisberg");
break;
}
case 262735:
{
returnValue = F("Reisbergbrücke");
break;
}
case 262736:
{
returnValue = F("Reisbergerfeld");
break;
}
case 262737:
{
returnValue = F("Reisbergerweg");
break;
}
case 262738:
{
returnValue = F("Reisbergstr.");
break;
}
case 262739:
{
returnValue = F("Reisbergweg");
break;
}
case 262740:
{
returnValue = F("Reisbichlweg");
break;
}
case 262741:
{
returnValue = F("Reisbrünndl");
break;
}
case 262742:
{
returnValue = F("Reischach");
break;
}
case 262743:
{
returnValue = F("Reischacher Str.");
break;
}
case 262744:
{
returnValue = F("Reischachstr.");
break;
}
case 262745:
{
returnValue = F("Reischauerstr.");
break;
}
case 262746:
{
returnValue = F("Reischbachstr.");
break;
}
case 262747:
{
returnValue = F("Reischberghalde");
break;
}
case 262748:
{
returnValue = F("Reischbergweg");
break;
}
case 262749:
{
returnValue = F("Reischbühlstr.");
break;
}
case 262750:
{
returnValue = F("Reischdorfer Weg");
break;
}
case 262751:
{
returnValue = F("Reischelplatz");
break;
}
case 262752:
{
returnValue = F("Reischelstr.");
break;
}
case 262753:
{
returnValue = F("Reischenau");
break;
}
case 262754:
{
returnValue = F("Reischenaustr.");
break;
}
case 262755:
{
returnValue = F("Reischenauweg");
break;
}
case 262756:
{
returnValue = F("Reischer Talweg");
break;
}
case 262757:
{
returnValue = F("Reischfleckweg");
break;
}
case 262758:
{
returnValue = F("Reischlberg");
break;
}
case 262759:
{
returnValue = F("Reischlestr.");
break;
}
case 262760:
{
returnValue = F("Reischlstr.");
break;
}
case 262761:
{
returnValue = F("Reischlweg");
break;
}
case 262762:
{
returnValue = F("Reischstr.");
break;
}
case 262763:
{
returnValue = F("Reischvitz");
break;
}
case 262764:
{
returnValue = F("Reiscopstr.");
break;
}
case 262765:
{
returnValue = F("Reisdorfer Bahnberg");
break;
}
case 262766:
{
returnValue = F("Reisdorfer Dorfstr.");
break;
}
case 262767:
{
returnValue = F("Reisdorfer Hauptstr.");
break;
}
case 262768:
{
returnValue = F("Reisdorfer Obergasse");
break;
}
case 262769:
{
returnValue = F("Reisdorfer Str.");
break;
}
case 262770:
{
returnValue = F("Reisdorfer Ziegeleiweg");
break;
}
case 262771:
{
returnValue = F("Reise");
break;
}
case 262772:
{
returnValue = F("Reiseburg");
break;
}
case 262773:
{
returnValue = F("Reiseck");
break;
}
case 262774:
{
returnValue = F("Reiseckenweg");
break;
}
case 262775:
{
returnValue = F("Reisegarten Weserufer");
break;
}
case 262776:
{
returnValue = F("Reiselbergweg");
break;
}
case 262777:
{
returnValue = F("Reiselfinger Kreuzweg");
break;
}
case 262778:
{
returnValue = F("Reisenbacher Str.");
break;
}
case 262779:
{
returnValue = F("Reisenbergstr.");
break;
}
case 262780:
{
returnValue = F("Reisenbergweg");
break;
}
case 262781:
{
returnValue = F("Reisener Str.");
break;
}
case 262782:
{
returnValue = F("Reisener Weg");
break;
}
case 262783:
{
returnValue = F("Reisengasse");
break;
}
case 262784:
{
returnValue = F("Reisensburger Str.");
break;
}
case 262785:
{
returnValue = F("Reisental");
break;
}
case 262786:
{
returnValue = F("Reisenthalstr.");
break;
}
case 262787:
{
returnValue = F("Reisepfad");
break;
}
case 262788:
{
returnValue = F("Reiser");
break;
}
case 262789:
{
returnValue = F("Reiser Weg");
break;
}
case 262790:
{
returnValue = F("Reiserbergstr.");
break;
}
case 262791:
{
returnValue = F("Reiserbergweg");
break;
}
case 262792:
{
returnValue = F("Reiserdorf");
break;
}
case 262793:
{
returnValue = F("Reisererstr.");
break;
}
case 262794:
{
returnValue = F("Reisererweg");
break;
}
case 262795:
{
returnValue = F("Reiserfeldstr.");
break;
}
case 262796:
{
returnValue = F("Reisergass");
break;
}
case 262797:
{
returnValue = F("Reisergasse");
break;
}
case 262798:
{
returnValue = F("Reisergrund");
break;
}
case 262799:
{
returnValue = F("Reiserhartpfad");
break;
}
case 262800:
{
returnValue = F("Reiserpfad");
break;
}
case 262801:
{
returnValue = F("Reisersbach");
break;
}
case 262802:
{
returnValue = F("Reisersberg");
break;
}
case 262803:
{
returnValue = F("Reiserstr.");
break;
}
case 262804:
{
returnValue = F("Reisersweg");
break;
}
case 262805:
{
returnValue = F("Reisertstr.");
break;
}
case 262806:
{
returnValue = F("Reiserweg");
break;
}
case 262807:
{
returnValue = F("Reiseräcker");
break;
}
case 262808:
{
returnValue = F("Reisfelder Steige");
break;
}
case 262809:
{
returnValue = F("Reisfelder Weg");
break;
}
case 262810:
{
returnValue = F("Reisgang");
break;
}
case 262811:
{
returnValue = F("Reisgasse");
break;
}
case 262812:
{
returnValue = F("Reisgraben");
break;
}
case 262813:
{
returnValue = F("Reisgrube");
break;
}
case 262814:
{
returnValue = F("Reisgrubengasse");
break;
}
case 262815:
{
returnValue = F("Reishaldeallee");
break;
}
case 262816:
{
returnValue = F("Reishaldenweg");
break;
}
case 262817:
{
returnValue = F("Reishofstr.");
break;
}
case 262818:
{
returnValue = F("Reisholzer Bahnstr.");
break;
}
case 262819:
{
returnValue = F("Reisholzer Str.");
break;
}
case 262820:
{
returnValue = F("Reisholzer Werftstr.");
break;
}
case 262821:
{
returnValue = F("Reisholzstr.");
break;
}
case 262822:
{
returnValue = F("Reisieker Weg");
break;
}
case 262823:
{
returnValue = F("Reisigbachweg");
break;
}
case 262824:
{
returnValue = F("Reisiger Weg");
break;
}
case 262825:
{
returnValue = F("Reisighofweg");
break;
}
case 262826:
{
returnValue = F("Reisigstr.");
break;
}
case 262827:
{
returnValue = F("Reisigweg");
break;
}
case 262828:
{
returnValue = F("Reisinger- und Herbert-Anlagen");
break;
}
case 262829:
{
returnValue = F("Reisinger-Gaßl");
break;
}
case 262830:
{
returnValue = F("Reisingerstr.");
break;
}
case 262831:
{
returnValue = F("Reisingerweg");
break;
}
case 262832:
{
returnValue = F("Reiskestr.");
break;
}
case 262833:
{
returnValue = F("Reiskirchener Str.");
break;
}
case 262834:
{
returnValue = F("Reiskircher Str.");
break;
}
case 262835:
{
returnValue = F("Reislaser Str.");
break;
}
case 262836:
{
returnValue = F("Reisleinstr.");
break;
}
case 262837:
{
returnValue = F("Reislerweg");
break;
}
case 262838:
{
returnValue = F("Reisleweg");
break;
}
case 262839:
{
returnValue = F("Reislieth");
break;
}
case 262840:
{
returnValue = F("Reislinger Str.");
break;
}
case 262841:
{
returnValue = F("Reismannstr.");
break;
}
case 262842:
{
returnValue = F("Reismannweg");
break;
}
case 262843:
{
returnValue = F("Reismühle");
break;
}
case 262844:
{
returnValue = F("Reismühle Brücke Ost");
break;
}
case 262845:
{
returnValue = F("Reismühle Brücke West");
break;
}
case 262846:
{
returnValue = F("Reismühlenweg");
break;
}
case 262847:
{
returnValue = F("Reismühler Str.");
break;
}
case 262848:
{
returnValue = F("Reismühler Weg");
break;
}
case 262849:
{
returnValue = F("Reisnerweg");
break;
}
case 262850:
{
returnValue = F("Reissachweg");
break;
}
case 262851:
{
returnValue = F("Reisschneise");
break;
}
case 262852:
{
returnValue = F("Reissenhaldeweg");
break;
}
case 262853:
{
returnValue = F("Reisserstr.");
break;
}
case 262854:
{
returnValue = F("Reissgarten");
break;
}
case 262855:
{
returnValue = F("Reissingstr.");
break;
}
case 262856:
{
returnValue = F("Reisslerstr.");
break;
}
case 262857:
{
returnValue = F("Reissstr.");
break;
}
case 262858:
{
returnValue = F("Reisstr.");
break;
}
case 262859:
{
returnValue = F("Reistenhausener Str.");
break;
}
case 262860:
{
returnValue = F("Reistenhausener Weg");
break;
}
case 262861:
{
returnValue = F("Reistenhofweg");
break;
}
case 262862:
{
returnValue = F("Reistert");
break;
}
case 262863:
{
returnValue = F("Reistinger Str.");
break;
}
case 262864:
{
returnValue = F("Reistorffweg");
break;
}
case 262865:
{
returnValue = F("Reisweg");
break;
}
case 262866:
{
returnValue = F("Reisweilerstr.");
break;
}
case 262867:
{
returnValue = F("Reiswiese");
break;
}
case 262868:
{
returnValue = F("Reiswiesenweg");
break;
}
case 262869:
{
returnValue = F("Reit");
break;
}
case 262870:
{
returnValue = F("Reitacker");
break;
}
case 262871:
{
returnValue = F("Reitallee");
break;
}
case 262872:
{
returnValue = F("Reitbachgasse");
break;
}
case 262873:
{
returnValue = F("Reitbachweg");
break;
}
case 262874:
{
returnValue = F("Reitbahn");
break;
}
case 262875:
{
returnValue = F("Reitbahnstr.");
break;
}
case 262876:
{
returnValue = F("Reitbahnweg");
break;
}
case 262877:
{
returnValue = F("Reitberg");
break;
}
case 262878:
{
returnValue = F("Reitberger Str.");
break;
}
case 262879:
{
returnValue = F("Reitberger Weg");
break;
}
case 262880:
{
returnValue = F("Reitbergerstr.");
break;
}
case 262881:
{
returnValue = F("Reitbergerweg");
break;
}
case 262882:
{
returnValue = F("Reitbergstr.");
break;
}
case 262883:
{
returnValue = F("Reitbrake");
break;
}
case 262884:
{
returnValue = F("Reitbreite");
break;
}
case 262885:
{
returnValue = F("Reitbrückweg");
break;
}
case 262886:
{
returnValue = F("Reitbuckelstr.");
break;
}
case 262887:
{
returnValue = F("Reitdillenäcker");
break;
}
case 262888:
{
returnValue = F("Reitelbauerstr.");
break;
}
case 262889:
{
returnValue = F("Reiteleweg");
break;
}
case 262890:
{
returnValue = F("Reitelsberg");
break;
}
case 262891:
{
returnValue = F("Reitelshofen");
break;
}
case 262892:
{
returnValue = F("Reitemeyerweg");
break;
}
case 262893:
{
returnValue = F("Reitenbergstr.");
break;
}
case 262894:
{
returnValue = F("Reitenbergweg");
break;
}
case 262895:
{
returnValue = F("Reitende-Diener-Str.");
break;
}
case 262896:
{
returnValue = F("Reitensteiner Str.");
break;
}
case 262897:
{
returnValue = F("Reitenstr.");
break;
}
case 262898:
{
returnValue = F("Reitenweg");
break;
}
case 262899:
{
returnValue = F("Reitenäcker");
break;
}
case 262900:
{
returnValue = F("Reiter");
break;
}
case 262901:
{
returnValue = F("Reiter Rittergut Rethmar e.V.");
break;
}
case 262902:
{
returnValue = F("Reiter Weg");
break;
}
case 262903:
{
returnValue = F("Reiter-Hansl-Weg");
break;
}
case 262904:
{
returnValue = F("Reiteracker");
break;
}
case 262905:
{
returnValue = F("Reiterallee");
break;
}
case 262906:
{
returnValue = F("Reiteralpestr.");
break;
}
case 262907:
{
returnValue = F("Reiteralpeweg");
break;
}
case 262908:
{
returnValue = F("Reiteraustr.");
break;
}
case 262909:
{
returnValue = F("Reiterbahn");
break;
}
case 262910:
{
returnValue = F("Reiterberg Str.");
break;
}
case 262911:
{
returnValue = F("Reiterbrücke");
break;
}
case 262912:
{
returnValue = F("Reiterdamm");
break;
}
case 262913:
{
returnValue = F("Reitereck");
break;
}
case 262914:
{
returnValue = F("Reiterer");
break;
}
case 262915:
{
returnValue = F("Reiterfeld");
break;
}
case 262916:
{
returnValue = F("Reitergarten");
break;
}
case 262917:
{
returnValue = F("Reitergasse");
break;
}
case 262918:
{
returnValue = F("Reitergaßl");
break;
}
case 262919:
{
returnValue = F("Reitergässchen");
break;
}
case 262920:
{
returnValue = F("Reitergäßchen");
break;
}
case 262921:
{
returnValue = F("Reitergäßle");
break;
}
case 262922:
{
returnValue = F("Reiterhof");
break;
}
case 262923:
{
returnValue = F("Reiterhofstr.");
break;
}
case 262924:
{
returnValue = F("Reiterhofweg");
break;
}
case 262925:
{
returnValue = F("Reiterle");
break;
}
case 262926:
{
returnValue = F("Reiterleinstr.");
break;
}
case 262927:
{
returnValue = F("Reiterpfad");
break;
}
case 262928:
{
returnValue = F("Reiterpfadweg");
break;
}
case 262929:
{
returnValue = F("Reiterplatz");
break;
}
case 262930:
{
returnValue = F("Reiterport");
break;
}
case 262931:
{
returnValue = F("Reiterring");
break;
}
case 262932:
{
returnValue = F("Reiters Weg");
break;
}
case 262933:
{
returnValue = F("Reitersberg");
break;
}
case 262934:
{
returnValue = F("Reitersbruch");
break;
}
case 262935:
{
returnValue = F("Reitersbrunnenweg");
break;
}
case 262936:
{
returnValue = F("Reitersbuckel");
break;
}
case 262937:
{
returnValue = F("Reiterschanze");
break;
}
case 262938:
{
returnValue = F("Reitersdorfer Str.");
break;
}
case 262939:
{
returnValue = F("Reitersgasse");
break;
}
case 262940:
{
returnValue = F("Reitersgraben");
break;
}
case 262941:
{
returnValue = F("Reitershohle");
break;
}
case 262942:
{
returnValue = F("Reiterspfad");
break;
}
case 262943:
{
returnValue = F("Reiterspitzstr.");
break;
}
case 262944:
{
returnValue = F("Reiterstaig");
break;
}
case 262945:
{
returnValue = F("Reitersteig");
break;
}
case 262946:
{
returnValue = F("Reitersteige");
break;
}
case 262947:
{
returnValue = F("Reiterstieg");
break;
}
case 262948:
{
returnValue = F("Reiterstr.");
break;
}
case 262949:
{
returnValue = F("Reitersweg");
break;
}
case 262950:
{
returnValue = F("Reiterswiese");
break;
}
case 262951:
{
returnValue = F("Reitersäge");
break;
}
case 262952:
{
returnValue = F("Reitertor");
break;
}
case 262953:
{
returnValue = F("Reiterweg");
break;
}
case 262954:
{
returnValue = F("Reiterwiesen");
break;
}
case 262955:
{
returnValue = F("Reiterwinkel");
break;
}
case 262956:
{
returnValue = F("Reiterzentrum");
break;
}
case 262957:
{
returnValue = F("Reitfeld");
break;
}
case 262958:
{
returnValue = F("Reitfeldstr.");
break;
}
case 262959:
{
returnValue = F("Reitgaarstr.");
break;
}
case 262960:
{
returnValue = F("Reitgasse");
break;
}
case 262961:
{
returnValue = F("Reitgesing");
break;
}
case 262962:
{
returnValue = F("Reitgraben");
break;
}
case 262963:
{
returnValue = F("Reitgrabenweg");
break;
}
case 262964:
{
returnValue = F("Reitgrasweg");
break;
}
case 262965:
{
returnValue = F("Reith");
break;
}
case 262966:
{
returnValue = F("Reithackerweg");
break;
}
case 262967:
{
returnValue = F("Reithallenstr.");
break;
}
case 262968:
{
returnValue = F("Reithallenweg");
break;
}
case 262969:
{
returnValue = F("Reitham");
break;
}
case 262970:
{
returnValue = F("Reithammer Weg");
break;
}
case 262971:
{
returnValue = F("Reithanßen");
break;
}
case 262972:
{
returnValue = F("Reithausberg");
break;
}
case 262973:
{
returnValue = F("Reithausgasse");
break;
}
case 262974:
{
returnValue = F("Reithausplatz");
break;
}
case 262975:
{
returnValue = F("Reithausstr.");
break;
}
case 262976:
{
returnValue = F("Reithausweg");
break;
}
case 262977:
{
returnValue = F("Reitheck");
break;
}
case 262978:
{
returnValue = F("Reithen");
break;
}
case 262979:
{
returnValue = F("Reithend");
break;
}
case 262980:
{
returnValue = F("Reithenweg");
break;
}
case 262981:
{
returnValue = F("Reither Damm");
break;
}
case 262982:
{
returnValue = F("Reither Mühlstr.");
break;
}
case 262983:
{
returnValue = F("Reither Str.");
break;
}
case 262984:
{
returnValue = F("Reither Weg");
break;
}
case 262985:
{
returnValue = F("Reithesselstr.");
break;
}
case 262986:
{
returnValue = F("Reitheweg");
break;
}
case 262987:
{
returnValue = F("Reithfelder Str.");
break;
}
case 262988:
{
returnValue = F("Reithgasse");
break;
}
case 262989:
{
returnValue = F("Reithkamp");
break;
}
case 262990:
{
returnValue = F("Reithkampenweg");
break;
}
case 262991:
{
returnValue = F("Reithkampsweg");
break;
}
case 262992:
{
returnValue = F("Reithlandstr.");
break;
}
case 262993:
{
returnValue = F("Reithmaierstr.");
break;
}
case 262994:
{
returnValue = F("Reithmayrstr.");
break;
}
case 262995:
{
returnValue = F("Reithmoorweg");
break;
}
case 262996:
{
returnValue = F("Reithof");
break;
}
case 262997:
{
returnValue = F("Reithofener Str.");
break;
}
case 262998:
{
returnValue = F("Reithoferstr.");
break;
}
case 262999:
{
returnValue = F("Reithohl");
break;
}
case 263000:
{
returnValue = F("Reithohle");
break;
}
case 263001:
{
returnValue = F("Reithorn");
break;
}
case 263002:
{
returnValue = F("Reithstr.");
break;
}
case 263003:
{
returnValue = F("Reithweg");
break;
}
case 263004:
{
returnValue = F("Reithwiesen");
break;
}
case 263005:
{
returnValue = F("Reithäckerstr.");
break;
}
case 263006:
{
returnValue = F("Reitkamp");
break;
}
case 263007:
{
returnValue = F("Reitkampsweg");
break;
}
case 263008:
{
returnValue = F("Reitkkampenweg");
break;
}
case 263009:
{
returnValue = F("Reitl");
break;
}
case 263010:
{
returnValue = F("Reitlander Herrenweg");
break;
}
case 263011:
{
returnValue = F("Reitlander Str.");
break;
}
case 263012:
{
returnValue = F("Reitlanderzoll");
break;
}
case 263013:
{
returnValue = F("Reitler Str.");
break;
}
case 263014:
{
returnValue = F("Reitler Weg");
break;
}
case 263015:
{
returnValue = F("Reitleriedweg");
break;
}
case 263016:
{
returnValue = F("Reitleweg");
break;
}
case 263017:
{
returnValue = F("Reitling");
break;
}
case 263018:
{
returnValue = F("Reitlingerstr.");
break;
}
case 263019:
{
returnValue = F("Reitlingstal");
break;
}
case 263020:
{
returnValue = F("Reitlingstr.");
break;
}
case 263021:
{
returnValue = F("Reitlingweg");
break;
}
case 263022:
{
returnValue = F("Reitmaierstr.");
break;
}
case 263023:
{
returnValue = F("Reitmann");
break;
}
case 263024:
{
returnValue = F("Reitmayerplatz");
break;
}
case 263025:
{
returnValue = F("Reitmayrgäßchen");
break;
}
case 263026:
{
returnValue = F("Reitmeierfeld");
break;
}
case 263027:
{
returnValue = F("Reitmeierstr.");
break;
}
case 263028:
{
returnValue = F("Reitmoor");
break;
}
case 263029:
{
returnValue = F("Reitmoorweg");
break;
}
case 263030:
{
returnValue = F("Reitpfadweg");
break;
}
case 263031:
{
returnValue = F("Reitplatz");
break;
}
case 263032:
{
returnValue = F("Reitplatzstr.");
break;
}
case 263033:
{
returnValue = F("Reitplatzweg");
break;
}
case 263034:
{
returnValue = F("Reitprechtser Str.");
break;
}
case 263035:
{
returnValue = F("Reitscharter Weg");
break;
}
case 263036:
{
returnValue = F("Reitscharweg");
break;
}
case 263037:
{
returnValue = F("Reitscheider Str.");
break;
}
case 263038:
{
returnValue = F("Reitschneise");
break;
}
case 263039:
{
returnValue = F("Reitschulallee");
break;
}
case 263040:
{
returnValue = F("Reitschule");
break;
}
case 263041:
{
returnValue = F("Reitschulgasse");
break;
}
case 263042:
{
returnValue = F("Reitschulschlag");
break;
}
case 263043:
{
returnValue = F("Reitschulstr.");
break;
}
case 263044:
{
returnValue = F("Reitschulweg");
break;
}
case 263045:
{
returnValue = F("Reitschusterfeld");
break;
}
case 263046:
{
returnValue = F("Reitsdamm");
break;
}
case 263047:
{
returnValue = F("Reitstallstr.");
break;
}
case 263048:
{
returnValue = F("Reitstallweg");
break;
}
case 263049:
{
returnValue = F("Reitstege");
break;
}
case 263050:
{
returnValue = F("Reitsteig");
break;
}
case 263051:
{
returnValue = F("Reitsteige");
break;
}
case 263052:
{
returnValue = F("Reitstetten");
break;
}
case 263053:
{
returnValue = F("Reitstieg");
break;
}
case 263054:
{
returnValue = F("Reitstr.");
break;
}
case 263055:
{
returnValue = F("Reitställe");
break;
}
case 263056:
{
returnValue = F("Reittorner Str.");
break;
}
case 263057:
{
returnValue = F("Reitweg");
break;
}
case 263058:
{
returnValue = F("Reitweg Brücke");
break;
}
case 263059:
{
returnValue = F("Reitweg Entrup");
break;
}
case 263060:
{
returnValue = F("Reitweg F");
break;
}
case 263061:
{
returnValue = F("Reitweg Lützenkirchen");
break;
}
case 263062:
{
returnValue = F("Reitweg zum Turm Fremersberg");
break;
}
case 263063:
{
returnValue = F("Reitweg zur Klosterschänke");
break;
}
case 263064:
{
returnValue = F("Reitweg/Gestütswegstur");
break;
}
case 263065:
{
returnValue = F("Reitweiner Loose");
break;
}
case 263066:
{
returnValue = F("Reitweiner Weg");
break;
}
case 263067:
{
returnValue = F("Reitwiese");
break;
}
case 263068:
{
returnValue = F("Reitwiesenstr.");
break;
}
case 263069:
{
returnValue = F("Reitwiesenweg");
break;
}
case 263070:
{
returnValue = F("Reitwiesstr.");
break;
}
case 263071:
{
returnValue = F("Reitwinklerstr.");
break;
}
case 263072:
{
returnValue = F("Reitze");
break;
}
case 263073:
{
returnValue = F("Reitzebergstr.");
break;
}
case 263074:
{
returnValue = F("Reitzenberg");
break;
}
case 263075:
{
returnValue = F("Reitzengang");
break;
}
case 263076:
{
returnValue = F("Reitzengarten");
break;
}
case 263077:
{
returnValue = F("Reitzenhagener Str.");
break;
}
case 263078:
{
returnValue = F("Reitzenhainer Str.");
break;
}
case 263079:
{
returnValue = F("Reitzensteiner Weg");
break;
}
case 263080:
{
returnValue = F("Reitzensteinstr.");
break;
}
case 263081:
{
returnValue = F("Reitzenstruth");
break;
}
case 263082:
{
returnValue = F("Reitzergasse");
break;
}
case 263083:
{
returnValue = F("Reitzheckweg");
break;
}
case 263084:
{
returnValue = F("Reitzstr.");
break;
}
case 263085:
{
returnValue = F("Reitäckerweg");
break;
}
case 263086:
{
returnValue = F("Reitöster-Geräumt");
break;
}
case 263087:
{
returnValue = F("Reiweg");
break;
}
case 263088:
{
returnValue = F("Reiwickstiege");
break;
}
case 263089:
{
returnValue = F("Reizengasse");
break;
}
case 263090:
{
returnValue = F("Reizensteiner Weg");
break;
}
case 263091:
{
returnValue = F("Reiß-Schneise");
break;
}
case 263092:
{
returnValue = F("Reiß-Weg");
break;
}
case 263093:
{
returnValue = F("Reißaus");
break;
}
case 263094:
{
returnValue = F("Reißbergplatz");
break;
}
case 263095:
{
returnValue = F("Reißdamm");
break;
}
case 263096:
{
returnValue = F("Reißdammstr.");
break;
}
case 263097:
{
returnValue = F("Reißeckstr.");
break;
}
case 263098:
{
returnValue = F("Reißenbachstr.");
break;
}
case 263099:
{
returnValue = F("Reißenhöfle");
break;
}
case 263100:
{
returnValue = F("Reißenpoint");
break;
}
case 263101:
{
returnValue = F("Reißersgrund");
break;
}
case 263102:
{
returnValue = F("Reißerweg");
break;
}
case 263103:
{
returnValue = F("Reißhaldesträßle");
break;
}
case 263104:
{
returnValue = F("Reißhausstr.");
break;
}
case 263105:
{
returnValue = F("Reißholzweg");
break;
}
case 263106:
{
returnValue = F("Reißiger Gewerbering");
break;
}
case 263107:
{
returnValue = F("Reißiger Str.");
break;
}
case 263108:
{
returnValue = F("Reißigerstr.");
break;
}
case 263109:
{
returnValue = F("Reißigschneise");
break;
}
case 263110:
{
returnValue = F("Reißigstr.");
break;
}
case 263111:
{
returnValue = F("Reißigweg");
break;
}
case 263112:
{
returnValue = F("Reißinger Str.");
break;
}
case 263113:
{
returnValue = F("Reißmannstr.");
break;
}
case 263114:
{
returnValue = F("Reißnerstr.");
break;
}
case 263115:
{
returnValue = F("Reißschneise");
break;
}
case 263116:
{
returnValue = F("Reißstr.");
break;
}
case 263117:
{
returnValue = F("Reißweg");
break;
}
case 263118:
{
returnValue = F("Reißäckerwegle");
break;
}
case 263119:
{
returnValue = F("Rejenweg");
break;
}
case 263120:
{
returnValue = F("Reka-Alpenschlucht");
break;
}
case 263121:
{
returnValue = F("Rekateweg");
break;
}
case 263122:
{
returnValue = F("Rekener Postweg");
break;
}
case 263123:
{
returnValue = F("Rekener Str.");
break;
}
case 263124:
{
returnValue = F("Rekenweg");
break;
}
case 263125:
{
returnValue = F("Rekerbrink");
break;
}
case 263126:
{
returnValue = F("Rekershof");
break;
}
case 263127:
{
returnValue = F("Rekesfeldweg");
break;
}
case 263128:
{
returnValue = F("Rekor-Boyer-Weg");
break;
}
case 263129:
{
returnValue = F("Reksweg");
break;
}
case 263130:
{
returnValue = F("Rektenstr.");
break;
}
case 263131:
{
returnValue = F("Rektor Franz Diebel Weg");
break;
}
case 263132:
{
returnValue = F("Rektor-Bach-Str.");
break;
}
case 263133:
{
returnValue = F("Rektor-Backs-Str.");
break;
}
case 263134:
{
returnValue = F("Rektor-Baum-Str.");
break;
}
case 263135:
{
returnValue = F("Rektor-Biermaier-Str.");
break;
}
case 263136:
{
returnValue = F("Rektor-Block-Str.");
break;
}
case 263137:
{
returnValue = F("Rektor-Bongartz-Weg");
break;
}
case 263138:
{
returnValue = F("Rektor-Boyer-Weg");
break;
}
case 263139:
{
returnValue = F("Rektor-Budde-Str.");
break;
}
case 263140:
{
returnValue = F("Rektor-Bülch-Str.");
break;
}
case 263141:
{
returnValue = F("Rektor-Dorpmund-Str.");
break;
}
case 263142:
{
returnValue = F("Rektor-Dresen-Str.");
break;
}
case 263143:
{
returnValue = F("Rektor-Dölle-Str.");
break;
}
case 263144:
{
returnValue = F("Rektor-Esser-Str.");
break;
}
case 263145:
{
returnValue = F("Rektor-Eul-Str.");
break;
}
case 263146:
{
returnValue = F("Rektor-Falke-Str.");
break;
}
case 263147:
{
returnValue = F("Rektor-Fleischer-Str.");
break;
}
case 263148:
{
returnValue = F("Rektor-Forestier-Str.");
break;
}
case 263149:
{
returnValue = F("Rektor-Franke-Weg");
break;
}
case 263150:
{
returnValue = F("Rektor-Fründ-Str.");
break;
}
case 263151:
{
returnValue = F("Rektor-Ganten-Str.");
break;
}
case 263152:
{
returnValue = F("Rektor-Ganzenmüller-Str.");
break;
}
case 263153:
{
returnValue = F("Rektor-Garbers-Str.");
break;
}
case 263154:
{
returnValue = F("Rektor-Gieles-Str.");
break;
}
case 263155:
{
returnValue = F("Rektor-Harms-Weg");
break;
}
case 263156:
{
returnValue = F("Rektor-Hauf-Weg");
break;
}
case 263157:
{
returnValue = F("Rektor-Haushofer-Str.");
break;
}
case 263158:
{
returnValue = F("Rektor-Helten-Weg");
break;
}
case 263159:
{
returnValue = F("Rektor-Horn-Str.");
break;
}
case 263160:
{
returnValue = F("Rektor-Huber-Str.");
break;
}
case 263161:
{
returnValue = F("Rektor-Hugo-Str.");
break;
}
case 263162:
{
returnValue = F("Rektor-Junge-Str.");
break;
}
case 263163:
{
returnValue = F("Rektor-Karl-Kellner-Str.");
break;
}
case 263164:
{
returnValue = F("Rektor-Klaus-Str.");
break;
}
case 263165:
{
returnValue = F("Rektor-Koch-Str.");
break;
}
case 263166:
{
returnValue = F("Rektor-Kohl-Str.");
break;
}
case 263167:
{
returnValue = F("Rektor-Kolf-Weg");
break;
}
case 263168:
{
returnValue = F("Rektor-Kraus-Str.");
break;
}
case 263169:
{
returnValue = F("Rektor-Kruse-Weg");
break;
}
case 263170:
{
returnValue = F("Rektor-Kuper-Str.");
break;
}
case 263171:
{
returnValue = F("Rektor-Köhler-Str.");
break;
}
case 263172:
{
returnValue = F("Rektor-Ludwig-Weg");
break;
}
case 263173:
{
returnValue = F("Rektor-Lübmann-Weg");
break;
}
case 263174:
{
returnValue = F("Rektor-Mayr-Str.");
break;
}
case 263175:
{
returnValue = F("Rektor-Meller-Str.");
break;
}
case 263176:
{
returnValue = F("Rektor-Meyer-Pfad");
break;
}
case 263177:
{
returnValue = F("Rektor-Micus-Weg");
break;
}
case 263178:
{
returnValue = F("Rektor-Mohnen-Weg");
break;
}
case 263179:
{
returnValue = F("Rektor-Niederau-Str.");
break;
}
case 263180:
{
returnValue = F("Rektor-Peiffer-Str.");
break;
}
case 263181:
{
returnValue = F("Rektor-Pfisterhammer-Weg");
break;
}
case 263182:
{
returnValue = F("Rektor-Preller-Str.");
break;
}
case 263183:
{
returnValue = F("Rektor-Reiners-Str.");
break;
}
case 263184:
{
returnValue = F("Rektor-Reß-Str.");
break;
}
case 263185:
{
returnValue = F("Rektor-Riedel-Str.");
break;
}
case 263186:
{
returnValue = F("Rektor-Rose-Weg");
break;
}
case 263187:
{
returnValue = F("Rektor-Roth-Str.");
break;
}
case 263188:
{
returnValue = F("Rektor-Schanz-Str.");
break;
}
case 263189:
{
returnValue = F("Rektor-Schmidt-Str.");
break;
}
case 263190:
{
returnValue = F("Rektor-Schmitt-Str.");
break;
}
case 263191:
{
returnValue = F("Rektor-Seemann-Str.");
break;
}
case 263192:
{
returnValue = F("Rektor-Stein-Str.");
break;
}
case 263193:
{
returnValue = F("Rektor-Sturm-Str.");
break;
}
case 263194:
{
returnValue = F("Rektor-Surholt-Str.");
break;
}
case 263195:
{
returnValue = F("Rektor-Thar-Str.");
break;
}
case 263196:
{
returnValue = F("Rektor-Thoma-Str.");
break;
}
case 263197:
{
returnValue = F("Rektor-Wegner-Str.");
break;
}
case 263198:
{
returnValue = F("Rektor-Weh-Str.");
break;
}
case 263199:
{
returnValue = F("Rektor-Weil-Str.");
break;
}
case 263200:
{
returnValue = F("Rektor-Weiß-Str.");
break;
}
case 263201:
{
returnValue = F("Rektor-Westermann-Str.");
break;
}
case 263202:
{
returnValue = F("Rektor-Wilger-Str.");
break;
}
case 263203:
{
returnValue = F("Rektor-Wolf-Str.");
break;
}
case 263204:
{
returnValue = F("Rektor-Wurr-Str.");
break;
}
case 263205:
{
returnValue = F("Rektor-Wutz-Str.");
break;
}
case 263206:
{
returnValue = F("Rektor-Wüstefeld-Str.");
break;
}
case 263207:
{
returnValue = F("Rektor-von-Helden-Str.");
break;
}
case 263208:
{
returnValue = F("Rektoratsstr.");
break;
}
case 263209:
{
returnValue = F("Rektoratstr.");
break;
}
case 263210:
{
returnValue = F("Rektoratsweg");
break;
}
case 263211:
{
returnValue = F("Rektorgang");
break;
}
case 263212:
{
returnValue = F("Rektorgarten");
break;
}
case 263213:
{
returnValue = F("Rektors Wiese");
break;
}
case 263214:
{
returnValue = F("Rektorstr.");
break;
}
case 263215:
{
returnValue = F("Rektorweg");
break;
}
case 263216:
{
returnValue = F("Rekumer Bucht");
break;
}
case 263217:
{
returnValue = F("Rekumer Geest");
break;
}
case 263218:
{
returnValue = F("Rekumer Siel");
break;
}
case 263219:
{
returnValue = F("Rekumer Str.");
break;
}
case 263220:
{
returnValue = F("Rekumer Wurt");
break;
}
case 263221:
{
returnValue = F("Relaisstr.");
break;
}
case 263222:
{
returnValue = F("Relekes Weg");
break;
}
case 263223:
{
returnValue = F("Reling");
break;
}
case 263224:
{
returnValue = F("Rellauwiesen");
break;
}
case 263225:
{
returnValue = F("Rellensiefen");
break;
}
case 263226:
{
returnValue = F("Rellenweg");
break;
}
case 263227:
{
returnValue = F("Reller");
break;
}
case 263228:
{
returnValue = F("Rellerbusch");
break;
}
case 263229:
{
returnValue = F("Rellerriege");
break;
}
case 263230:
{
returnValue = F("Relliehäuser Str.");
break;
}
case 263231:
{
returnValue = F("Rellinger Str.");
break;
}
case 263232:
{
returnValue = F("Rellinger Weg");
break;
}
case 263233:
{
returnValue = F("Rellyner Str.");
break;
}
case 263234:
{
returnValue = F("Relohweg");
break;
}
case 263235:
{
returnValue = F("Relsberger Str.");
break;
}
case 263236:
{
returnValue = F("Relystr.");
break;
}
case 263237:
{
returnValue = F("Relzow");
break;
}
case 263238:
{
returnValue = F("Remaclusstr.");
break;
}
case 263239:
{
returnValue = F("Remagener Str.");
break;
}
case 263240:
{
returnValue = F("Remagener Weg");
break;
}
case 263241:
{
returnValue = F("Remanestr.");
break;
}
case 263242:
{
returnValue = F("Remarque-Weg");
break;
}
case 263243:
{
returnValue = F("Remarquestr.");
break;
}
case 263244:
{
returnValue = F("Remarqueweg");
break;
}
case 263245:
{
returnValue = F("Remarweg");
break;
}
case 263246:
{
returnValue = F("Rembacher Str.");
break;
}
case 263247:
{
returnValue = F("Remberger Str.");
break;
}
case 263248:
{
returnValue = F("Rembergstr.");
break;
}
case 263249:
{
returnValue = F("Rembertiring");
break;
}
case 263250:
{
returnValue = F("Rembertistr.");
break;
}
case 263251:
{
returnValue = F("Rembertitunnel");
break;
}
case 263252:
{
returnValue = F("Rembertstr.");
break;
}
case 263253:
{
returnValue = F("Rembken");
break;
}
case 263254:
{
returnValue = F("Remblinghauser Str.");
break;
}
case 263255:
{
returnValue = F("Remboldstr.");
break;
}
case 263256:
{
returnValue = F("Rembornstr.");
break;
}
case 263257:
{
returnValue = F("Rembrandtring");
break;
}
case 263258:
{
returnValue = F("Rembrandtstr.");
break;
}
case 263259:
{
returnValue = F("Rembrandtweg");
break;
}
case 263260:
{
returnValue = F("Rembrandtwinkel");
break;
}
case 263261:
{
returnValue = F("Rembrechtser Str.");
break;
}
case 263262:
{
returnValue = F("Rembrücker Str.");
break;
}
case 263263:
{
returnValue = F("Rembrücker Weg");
break;
}
case 263264:
{
returnValue = F("Rembrücker Wegschneise");
break;
}
case 263265:
{
returnValue = F("Rembühlstr.");
break;
}
case 263266:
{
returnValue = F("Remchingenstr.");
break;
}
case 263267:
{
returnValue = F("Remchinger Str.");
break;
}
case 263268:
{
returnValue = F("Remdaer Hauptstr.");
break;
}
case 263269:
{
returnValue = F("Remdaer Markt");
break;
}
case 263270:
{
returnValue = F("Remdaer Str.");
break;
}
case 263271:
{
returnValue = F("Remdaer Weg");
break;
}
case 263272:
{
returnValue = F("Remderodaer Str.");
break;
}
case 263273:
{
returnValue = F("Remelen");
break;
}
case 263274:
{
returnValue = F("Remelser Kanalweg");
break;
}
case 263275:
{
returnValue = F("Remelskamp");
break;
}
case 263276:
{
returnValue = F("Remen");
break;
}
case 263277:
{
returnValue = F("Remerscheider Str.");
break;
}
case 263278:
{
returnValue = F("Remerz");
break;
}
case 263279:
{
returnValue = F("Remeyerhofstr.");
break;
}
case 263280:
{
returnValue = F("Remi-Baert-Platz");
break;
}
case 263281:
{
returnValue = F("Remigerstr.");
break;
}
case 263282:
{
returnValue = F("Remigius-Vogel-Str.");
break;
}
case 263283:
{
returnValue = F("Remigius-Vollmann-Str.");
break;
}
case 263284:
{
returnValue = F("Remigiusbergstr.");
break;
}
case 263285:
{
returnValue = F("Remigiusbergweg");
break;
}
case 263286:
{
returnValue = F("Remigiusgasse");
break;
}
case 263287:
{
returnValue = F("Remigiuspark");
break;
}
case 263288:
{
returnValue = F("Remigiusplatz");
break;
}
case 263289:
{
returnValue = F("Remigiusstr.");
break;
}
case 263290:
{
returnValue = F("Remigiusweg");
break;
}
case 263291:
{
returnValue = F("Remise");
break;
}
case 263292:
{
returnValue = F("Remisenweg");
break;
}
case 263293:
{
returnValue = F("Remisenwege an der Esplanade");
break;
}
case 263294:
{
returnValue = F("Remisstr.");
break;
}
case 263295:
{
returnValue = F("Remitzhof");
break;
}
case 263296:
{
returnValue = F("Remkerslebener Darre");
break;
}
case 263297:
{
returnValue = F("Remkerslebener Str.");
break;
}
case 263298:
{
returnValue = F("Remkersleber Weg");
break;
}
case 263299:
{
returnValue = F("Remklotzsche Abladestelle");
break;
}
case 263300:
{
returnValue = F("Remlerstr.");
break;
}
case 263301:
{
returnValue = F("Remlin");
break;
}
case 263302:
{
returnValue = F("Remlinger Str.");
break;
}
case 263303:
{
returnValue = F("Remlingrade");
break;
}
case 263304:
{
returnValue = F("Remlingrade-Brücke");
break;
}
case 263305:
{
returnValue = F("Remlingstr.");
break;
}
case 263306:
{
returnValue = F("Remmbachstr.");
break;
}
case 263307:
{
returnValue = F("Remmeker Ring");
break;
}
case 263308:
{
returnValue = F("Remmelesweg");
break;
}
case 263309:
{
returnValue = F("Remmelhauser Weg");
break;
}
case 263310:
{
returnValue = F("Remmelser Weg");
break;
}
case 263311:
{
returnValue = F("Remmelskamp");
break;
}
case 263312:
{
returnValue = F("Remmelsohler Str.");
break;
}
case 263313:
{
returnValue = F("Remmelsohler Weg");
break;
}
case 263314:
{
returnValue = F("Remmeltshofener Dorfstr.");
break;
}
case 263315:
{
returnValue = F("Remmeltshofer Str.");
break;
}
case 263316:
{
returnValue = F("Remmeltstr.");
break;
}
case 263317:
{
returnValue = F("Remmelweg");
break;
}
case 263318:
{
returnValue = F("Remmengutweg");
break;
}
case 263319:
{
returnValue = F("Remmer-Boden-Str.");
break;
}
case 263320:
{
returnValue = F("Remmer-Harms-Eck");
break;
}
case 263321:
{
returnValue = F("Remmer-von-Seediek-Str.");
break;
}
case 263322:
{
returnValue = F("Remmers Garten");
break;
}
case 263323:
{
returnValue = F("Remmersgarten");
break;
}
case 263324:
{
returnValue = F("Remmerskamp");
break;
}
case 263325:
{
returnValue = F("Remmersweg");
break;
}
case 263326:
{
returnValue = F("Remmert");
break;
}
case 263327:
{
returnValue = F("Remmesweilerstr.");
break;
}
case 263328:
{
returnValue = F("Remmesweilerweg");
break;
}
case 263329:
{
returnValue = F("Remmeswiese");
break;
}
case 263330:
{
returnValue = F("Remmetsstr.");
break;
}
case 263331:
{
returnValue = F("Remmighauser Str.");
break;
}
case 263332:
{
returnValue = F("Remmingerstr.");
break;
}
case 263333:
{
returnValue = F("Remmingsheimer Str.");
break;
}
case 263334:
{
returnValue = F("Remmlingweg");
break;
}
case 263335:
{
returnValue = F("Remnitzhof");
break;
}
case 263336:
{
returnValue = F("Remnitzweg");
break;
}
case 263337:
{
returnValue = F("Remontedepot");
break;
}
case 263338:
{
returnValue = F("Remontehof");
break;
}
case 263339:
{
returnValue = F("Remontenstr.");
break;
}
case 263340:
{
returnValue = F("Remontenweg");
break;
}
case 263341:
{
returnValue = F("Remonteplatz");
break;
}
case 263342:
{
returnValue = F("Remontestr.");
break;
}
case 263343:
{
returnValue = F("Remonteweg");
break;
}
case 263344:
{
returnValue = F("Rempartstr.");
break;
}
case 263345:
{
returnValue = F("Rempenholzweg");
break;
}
case 263346:
{
returnValue = F("Rempenweg");
break;
}
case 263347:
{
returnValue = F("Remper Damm");
break;
}
case 263348:
{
returnValue = F("Remperger Str.");
break;
}
case 263349:
{
returnValue = F("Rempertshofen");
break;
}
case 263350:
{
returnValue = F("Rempesgrüner Str.");
break;
}
case 263351:
{
returnValue = F("Rempesgrüner Weg");
break;
}
case 263352:
{
returnValue = F("Rempliner Hauptstr.");
break;
}
case 263353:
{
returnValue = F("Remsaer Str.");
break;
}
case 263354:
{
returnValue = F("Remsaer Weg");
break;
}
case 263355:
{
returnValue = F("Remsaue");
break;
}
case 263356:
{
returnValue = F("Remsbrücke");
break;
}
case 263357:
{
returnValue = F("Remsbrücke Hebsack");
break;
}
case 263358:
{
returnValue = F("Remscheider Str.");
break;
}
case 263359:
{
returnValue = F("Remscheider Weg");
break;
}
case 263360:
{
returnValue = F("Remschleinweg");
break;
}
case 263361:
{
returnValue = F("Remschlitz");
break;
}
case 263362:
{
returnValue = F("Remschosser Str.");
break;
}
case 263363:
{
returnValue = F("Remschützer Str.");
break;
}
case 263364:
{
returnValue = F("Remse");
break;
}
case 263365:
{
returnValue = F("Remseder Str.");
break;
}
case 263366:
{
returnValue = F("Remser Str.");
break;
}
case 263367:
{
returnValue = F("Remser Weg");
break;
}
case 263368:
{
returnValue = F("Remsfelder Str.");
break;
}
case 263369:
{
returnValue = F("Remsgartenstr.");
break;
}
case 263370:
{
returnValue = F("Remshagener Str.");
break;
}
case 263371:
{
returnValue = F("Remshardweg");
break;
}
case 263372:
{
returnValue = F("Remsharter Str.");
break;
}
case 263373:
{
returnValue = F("Remshartgäßchen");
break;
}
case 263374:
{
returnValue = F("Remsingerstr.");
break;
}
case 263375:
{
returnValue = F("Remspark");
break;
}
case 263376:
{
returnValue = F("Remsquellenweg");
break;
}
case 263377:
{
returnValue = F("Remsradweg");
break;
}
case 263378:
{
returnValue = F("Remssteg");
break;
}
case 263379:
{
returnValue = F("Remsstr.");
break;
}
case 263380:
{
returnValue = F("Remstal Gartenschau 2019 Gelände");
break;
}
case 263381:
{
returnValue = F("Remstalstr.");
break;
}
case 263382:
{
returnValue = F("Remstoß");
break;
}
case 263383:
{
returnValue = F("Remstädter Str.");
break;
}
case 263384:
{
returnValue = F("Remstädter Weg");
break;
}
case 263385:
{
returnValue = F("Remswasen");
break;
}
case 263386:
{
returnValue = F("Remsweg");
break;
}
case 263387:
{
returnValue = F("Remtengrüner Str.");
break;
}
case 263388:
{
returnValue = F("Remtengrüner Weg");
break;
}
case 263389:
{
returnValue = F("Remtergang");
break;
}
case 263390:
{
returnValue = F("Remterweg");
break;
}
case 263391:
{
returnValue = F("Remusgasse");
break;
}
case 263392:
{
returnValue = F("Remusweg");
break;
}
case 263393:
{
returnValue = F("Remy-Brücke");
break;
}
case 263394:
{
returnValue = F("Remystr.");
break;
}
case 263395:
{
returnValue = F("Rena-Str.");
break;
}
case 263396:
{
returnValue = F("RenaissancePark");
break;
}
case 263397:
{
returnValue = F("Renaissancegarten");
break;
}
case 263398:
{
returnValue = F("Renata-Allee");
break;
}
case 263399:
{
returnValue = F("Renatastr.");
break;
}
case 263400:
{
returnValue = F("Renate-Hamburger-Str.");
break;
}
case 263401:
{
returnValue = F("Renate-Stumpf-Str.");
break;
}
case 263402:
{
returnValue = F("Renate-Weckwerth-Str.");
break;
}
case 263403:
{
returnValue = F("Renaturierter Burggraben");
break;
}
case 263404:
{
returnValue = F("Renaturierungsgebiet Esse");
break;
}
case 263405:
{
returnValue = F("Renatusstr.");
break;
}
case 263406:
{
returnValue = F("Renatusweg");
break;
}
case 263407:
{
returnValue = F("Renaudstr.");
break;
}
case 263408:
{
returnValue = F("Renault-Nissan-Str.");
break;
}
case 263409:
{
returnValue = F("Renaultstr.");
break;
}
case 263410:
{
returnValue = F("Renauweg");
break;
}
case 263411:
{
returnValue = F("Renchallee");
break;
}
case 263412:
{
returnValue = F("Renchbrücke");
break;
}
case 263413:
{
returnValue = F("Renchdamm");
break;
}
case 263414:
{
returnValue = F("Renchener Str.");
break;
}
case 263415:
{
returnValue = F("Renchener Weg");
break;
}
case 263416:
{
returnValue = F("Renchenweg");
break;
}
case 263417:
{
returnValue = F("Renchstr.");
break;
}
case 263418:
{
returnValue = F("Renchtalblick");
break;
}
case 263419:
{
returnValue = F("Renchtalpassage");
break;
}
case 263420:
{
returnValue = F("Renchtalstr.");
break;
}
case 263421:
{
returnValue = F("Renchweg");
break;
}
case 263422:
{
returnValue = F("Rencks Park");
break;
}
case 263423:
{
returnValue = F("Renckstr.");
break;
}
case 263424:
{
returnValue = F("Rendaer Str.");
break;
}
case 263425:
{
returnValue = F("Rendaer Weg");
break;
}
case 263426:
{
returnValue = F("Rendantenkoppel");
break;
}
case 263427:
{
returnValue = F("Rendelbahn");
break;
}
case 263428:
{
returnValue = F("Rendelberg");
break;
}
case 263429:
{
returnValue = F("Rendelberg Park");
break;
}
case 263430:
{
returnValue = F("Rendeler Pfad");
break;
}
case 263431:
{
returnValue = F("Rendeler Str.");
break;
}
case 263432:
{
returnValue = F("Rendelesweg");
break;
}
case 263433:
{
returnValue = F("Rendelkastell");
break;
}
case 263434:
{
returnValue = F("Rendelstr.");
break;
}
case 263435:
{
returnValue = F("Rendezvous");
break;
}
case 263436:
{
returnValue = F("Rendezvous-Brücke");
break;
}
case 263437:
{
returnValue = F("Rendsburger Landstr.");
break;
}
case 263438:
{
returnValue = F("Rendsburger Str.");
break;
}
case 263439:
{
returnValue = F("Rendsburger Weg");
break;
}
case 263440:
{
returnValue = F("Rene-Iskin-Ring");
break;
}
case 263441:
{
returnValue = F("Rene-Minville-Str.");
break;
}
case 263442:
{
returnValue = F("Rene-Schickele-Str.");
break;
}
case 263443:
{
returnValue = F("Rene-Schickele-Weg");
break;
}
case 263444:
{
returnValue = F("Reneauldstr.");
break;
}
case 263445:
{
returnValue = F("Reneklodenweg");
break;
}
case 263446:
{
returnValue = F("Renestr.");
break;
}
case 263447:
{
returnValue = F("Renetten-Weg");
break;
}
case 263448:
{
returnValue = F("Renettenpfad");
break;
}
case 263449:
{
returnValue = F("Renettenring");
break;
}
case 263450:
{
returnValue = F("Renettenstr.");
break;
}
case 263451:
{
returnValue = F("Renettenweg");
break;
}
case 263452:
{
returnValue = F("Renetteweg");
break;
}
case 263453:
{
returnValue = F("Renfrizhauser Str.");
break;
}
case 263454:
{
returnValue = F("Renfting");
break;
}
case 263455:
{
returnValue = F("Rengener Str.");
break;
}
case 263456:
{
returnValue = F("Rengerfohr");
break;
}
case 263457:
{
returnValue = F("Rengersdorf");
break;
}
case 263458:
{
returnValue = F("Rengersfeld");
break;
}
case 263459:
{
returnValue = F("Rengershauser Mühle");
break;
}
case 263460:
{
returnValue = F("Rengershäuser Landstr.");
break;
}
case 263461:
{
returnValue = F("Rengershäuser Str.");
break;
}
case 263462:
{
returnValue = F("Rengershäuser Weg");
break;
}
case 263463:
{
returnValue = F("Rengerstal");
break;
}
case 263464:
{
returnValue = F("Rengersweiler");
break;
}
case 263465:
{
returnValue = F("Rengerter Str.");
break;
}
case 263466:
{
returnValue = F("Rengerweg");
break;
}
case 263467:
{
returnValue = F("Rengoldshauser Str.");
break;
}
case 263468:
{
returnValue = F("Rengsdorfer Str.");
break;
}
case 263469:
{
returnValue = F("Rengsestr.");
break;
}
case 263470:
{
returnValue = F("Rengshäuser Str.");
break;
}
case 263471:
{
returnValue = F("Renhardsweilerstr.");
break;
}
case 263472:
{
returnValue = F("Renhartstr.");
break;
}
case 263473:
{
returnValue = F("Renkenberger Str.");
break;
}
case 263474:
{
returnValue = F("Renkenberger Weg");
break;
}
case 263475:
{
returnValue = F("Renkenhellmer");
break;
}
case 263476:
{
returnValue = F("Renkenrunsstr.");
break;
}
case 263477:
{
returnValue = F("Renkenstr.");
break;
}
case 263478:
{
returnValue = F("Renkenweg");
break;
}
case 263479:
{
returnValue = F("Renkerstr.");
break;
}
case 263480:
{
returnValue = F("Renkertsmühle");
break;
}
case 263481:
{
returnValue = F("Renkerweg");
break;
}
case 263482:
{
returnValue = F("Renkfeldweg");
break;
}
case 263483:
{
returnValue = F("Renkgasse");
break;
}
case 263484:
{
returnValue = F("Renkhauser Allee");
break;
}
case 263485:
{
returnValue = F("Renkteweg");
break;
}
case 263486:
{
returnValue = F("Renkumer Weg");
break;
}
case 263487:
{
returnValue = F("Rennacker");
break;
}
case 263488:
{
returnValue = F("Rennackerweg");
break;
}
case 263489:
{
returnValue = F("Rennauer Str.");
break;
}
case 263490:
{
returnValue = F("Rennbache");
break;
}
case 263491:
{
returnValue = F("Rennbachhangweg");
break;
}
case 263492:
{
returnValue = F("Rennbachschneise");
break;
}
case 263493:
{
returnValue = F("Rennbachsteige");
break;
}
case 263494:
{
returnValue = F("Rennbachstr.");
break;
}
case 263495:
{
returnValue = F("Rennbachtälesweg");
break;
}
case 263496:
{
returnValue = F("Rennbachweg");
break;
}
case 263497:
{
returnValue = F("Rennbahn");
break;
}
case 263498:
{
returnValue = F("Rennbahn-Passendorfer Wiesen");
break;
}
case 263499:
{
returnValue = F("Rennbahnallee");
break;
}
case 263500:
{
returnValue = F("Rennbahnkreuz");
break;
}
case 263501:
{
returnValue = F("Rennbahnpark");
break;
}
case 263502:
{
returnValue = F("Rennbahnring");
break;
}
case 263503:
{
returnValue = F("Rennbahnsiedlung");
break;
}
case 263504:
{
returnValue = F("Rennbahnstr.");
break;
}
case 263505:
{
returnValue = F("Rennbahnweg");
break;
}
case 263506:
{
returnValue = F("Rennbaumer Str.");
break;
}
case 263507:
{
returnValue = F("Rennbaumplatz");
break;
}
case 263508:
{
returnValue = F("Rennbaumstr.");
break;
}
case 263509:
{
returnValue = F("Rennbergstr.");
break;
}
case 263510:
{
returnValue = F("Rennbergweg");
break;
}
case 263511:
{
returnValue = F("Rennbruch");
break;
}
case 263512:
{
returnValue = F("Rennbruckweg");
break;
}
case 263513:
{
returnValue = F("Rennbrückenstr.");
break;
}
case 263514:
{
returnValue = F("Rennbühlweg");
break;
}
case 263515:
{
returnValue = F("Renne");
break;
}
case 263516:
{
returnValue = F("Rennebergsäcker");
break;
}
case 263517:
{
returnValue = F("Rennebergweg");
break;
}
case 263518:
{
returnValue = F("Rennebogen");
break;
}
case 263519:
{
returnValue = F("Rennebrücke");
break;
}
case 263520:
{
returnValue = F("Rennecker Weg");
break;
}
case 263521:
{
returnValue = F("Rennefeld");
break;
}
case 263522:
{
returnValue = F("Rennefelder Weg");
break;
}
case 263523:
{
returnValue = F("Rennefeldstr.");
break;
}
case 263524:
{
returnValue = F("Rennegestell");
break;
}
case 263525:
{
returnValue = F("Rennekamp");
break;
}
case 263526:
{
returnValue = F("Rennekoven");
break;
}
case 263527:
{
returnValue = F("Rennekämpe");
break;
}
case 263528:
{
returnValue = F("Rennelbergstr.");
break;
}
case 263529:
{
returnValue = F("Rennelswies");
break;
}
case 263530:
{
returnValue = F("Rennemannstieg");
break;
}
case 263531:
{
returnValue = F("Rennemattenweg");
break;
}
case 263532:
{
returnValue = F("Rennenbachweg");
break;
}
case 263533:
{
returnValue = F("Rennenberg");
break;
}
case 263534:
{
returnValue = F("Rennenbergblick");
break;
}
case 263535:
{
returnValue = F("Rennenbergstr.");
break;
}
case 263536:
{
returnValue = F("Rennengäßle");
break;
}
case 263537:
{
returnValue = F("Rennenhaustr.");
break;
}
case 263538:
{
returnValue = F("Rennenkamp");
break;
}
case 263539:
{
returnValue = F("Rennenäcker");
break;
}
case 263540:
{
returnValue = F("Renneperstr.");
break;
}
case 263541:
{
returnValue = F("Renner-Seitz-Str.");
break;
}
case 263542:
{
returnValue = F("Rennerbergstr.");
break;
}
case 263543:
{
returnValue = F("Rennerde");
break;
}
case 263544:
{
returnValue = F("Rennerebelweg");
break;
}
case 263545:
{
returnValue = F("Rennergasse");
break;
}
case 263546:
{
returnValue = F("Rennerhöhe");
break;
}
case 263547:
{
returnValue = F("Renneritzer Str.");
break;
}
case 263548:
{
returnValue = F("Rennerkreuzstr.");
break;
}
case 263549:
{
returnValue = F("Rennerle");
break;
}
case 263550:
{
returnValue = F("Rennermoos");
break;
}
case 263551:
{
returnValue = F("Rennerpark");
break;
}
case 263552:
{
returnValue = F("Rennerring");
break;
}
case 263553:
{
returnValue = F("Renners Feldweg");
break;
}
case 263554:
{
returnValue = F("Rennersberg");
break;
}
case 263555:
{
returnValue = F("Rennersdorfer Str.");
break;
}
case 263556:
{
returnValue = F("Rennershofstr.");
break;
}
case 263557:
{
returnValue = F("Rennerskamp");
break;
}
case 263558:
{
returnValue = F("Rennerstr.");
break;
}
case 263559:
{
returnValue = F("Rennerswald");
break;
}
case 263560:
{
returnValue = F("Rennertehäuser Weg");
break;
}
case 263561:
{
returnValue = F("Rennertshofener Str.");
break;
}
case 263562:
{
returnValue = F("Rennertshofener Weg");
break;
}
case 263563:
{
returnValue = F("Rennertshofer Weg");
break;
}
case 263564:
{
returnValue = F("Rennerweg");
break;
}
case 263565:
{
returnValue = F("Rennesberger Weg");
break;
}
case 263566:
{
returnValue = F("Rennesstr.");
break;
}
case 263567:
{
returnValue = F("Rennestr.");
break;
}
case 263568:
{
returnValue = F("Rennetal");
break;
}
case 263569:
{
returnValue = F("Rennewartstr.-Nord");
break;
}
case 263570:
{
returnValue = F("Rennewartstr.-Süd");
break;
}
case 263571:
{
returnValue = F("Renneweg");
break;
}
case 263572:
{
returnValue = F("Rennewischkamp");
break;
}
case 263573:
{
returnValue = F("Rennfeld");
break;
}
case 263574:
{
returnValue = F("Rennfeldstr.");
break;
}
case 263575:
{
returnValue = F("Rennfeldweg");
break;
}
case 263576:
{
returnValue = F("Renngass");
break;
}
case 263577:
{
returnValue = F("Renngasse");
break;
}
case 263578:
{
returnValue = F("Renngrubenstr.");
break;
}
case 263579:
{
returnValue = F("Renngässle");
break;
}
case 263580:
{
returnValue = F("Rennhof");
break;
}
case 263581:
{
returnValue = F("Rennhöfchen");
break;
}
case 263582:
{
returnValue = F("Rennhügel");
break;
}
case 263583:
{
returnValue = F("Rennich");
break;
}
case 263584:
{
returnValue = F("Rennichswiesen");
break;
}
case 263585:
{
returnValue = F("Rennigweg");
break;
}
case 263586:
{
returnValue = F("Rennigwiesen-Schneise");
break;
}
case 263587:
{
returnValue = F("Renninger Str.");
break;
}
case 263588:
{
returnValue = F("Rennkamps Gasse");
break;
}
case 263589:
{
returnValue = F("Rennlesbuckweg");
break;
}
case 263590:
{
returnValue = F("Rennlohstr.");
break;
}
case 263591:
{
returnValue = F("Rennmühle");
break;
}
case 263592:
{
returnValue = F("Rennmühlweg");
break;
}
case 263593:
{
returnValue = F("Rennofenweg");
break;
}
case 263594:
{
returnValue = F("Rennpatt");
break;
}
case 263595:
{
returnValue = F("Rennpaul");
break;
}
case 263596:
{
returnValue = F("Rennpfad");
break;
}
case 263597:
{
returnValue = F("Rennplanweg");
break;
}
case 263598:
{
returnValue = F("Rennplatzstr.");
break;
}
case 263599:
{
returnValue = F("Rennreuth");
break;
}
case 263600:
{
returnValue = F("Rennrodelstrecke");
break;
}
case 263601:
{
returnValue = F("Rennsahl");
break;
}
case 263602:
{
returnValue = F("Rennschneise");
break;
}
case 263603:
{
returnValue = F("Rennstattweg");
break;
}
case 263604:
{
returnValue = F("Rennsteig");
break;
}
case 263605:
{
returnValue = F("Rennsteig (Radroute)");
break;
}
case 263606:
{
returnValue = F("Rennsteig, Werra Burgen Steig");
break;
}
case 263607:
{
returnValue = F("Rennsteig-Dolmar-Weg");
break;
}
case 263608:
{
returnValue = F("Rennsteig-Str.");
break;
}
case 263609:
{
returnValue = F("Rennsteigpark");
break;
}
case 263610:
{
returnValue = F("Rennsteigstr.");
break;
}
case 263611:
{
returnValue = F("Rennsteigweg");
break;
}
case 263612:
{
returnValue = F("Rennstieg");
break;
}
case 263613:
{
returnValue = F("Rennstieg / Königsweg");
break;
}
case 263614:
{
returnValue = F("Rennstieg Hildesheim - Winzenburg");
break;
}
case 263615:
{
returnValue = F("Rennstr.");
break;
}
case 263616:
{
returnValue = F("Rennstrecke");
break;
}
case 263617:
{
returnValue = F("Rennstrecke des Soifa-Bobby-Clubs");
break;
}
case 263618:
{
returnValue = F("Renntalstr.");
break;
}
case 263619:
{
returnValue = F("Renntormauer");
break;
}
case 263620:
{
returnValue = F("Renntorwallstr.");
break;
}
case 263621:
{
returnValue = F("Rennuferstr.");
break;
}
case 263622:
{
returnValue = F("Rennweg");
break;
}
case 263623:
{
returnValue = F("Rennweilerstr.");
break;
}
case 263624:
{
returnValue = F("Rennwiese");
break;
}
case 263625:
{
returnValue = F("Rennwiesen");
break;
}
case 263626:
{
returnValue = F("Rennwiesenweg");
break;
}
case 263627:
{
returnValue = F("Renoirstr.");
break;
}
case 263628:
{
returnValue = F("Renoisstr.");
break;
}
case 263629:
{
returnValue = F("Renothenweg");
break;
}
case 263630:
{
returnValue = F("Renpfad");
break;
}
case 263631:
{
returnValue = F("Rensbachstr.");
break;
}
case 263632:
{
returnValue = F("Rensberg");
break;
}
case 263633:
{
returnValue = F("Renschenkamp");
break;
}
case 263634:
{
returnValue = F("Rensdorfer Bogen");
break;
}
case 263635:
{
returnValue = F("Rensdorfstr.");
break;
}
case 263636:
{
returnValue = F("Renseberg");
break;
}
case 263637:
{
returnValue = F("Rensefelder Str.");
break;
}
case 263638:
{
returnValue = F("Rensefelder Weg");
break;
}
case 263639:
{
returnValue = F("Rensekamp");
break;
}
case 263640:
{
returnValue = F("Renshäuser Str.");
break;
}
case 263641:
{
returnValue = F("Rensinger Chaussee");
break;
}
case 263642:
{
returnValue = F("Rensingstr.");
break;
}
case 263643:
{
returnValue = F("Rensingweg");
break;
}
case 263644:
{
returnValue = F("Renskenfeld");
break;
}
case 263645:
{
returnValue = F("Renslager Str.");
break;
}
case 263646:
{
returnValue = F("Rensmanns Gäßchen");
break;
}
case 263647:
{
returnValue = F("Renstr.");
break;
}
case 263648:
{
returnValue = F("Rensweg");
break;
}
case 263649:
{
returnValue = F("Rentamtsberg");
break;
}
case 263650:
{
returnValue = F("Rentamtsgasse");
break;
}
case 263651:
{
returnValue = F("Rentamtsgäßchen");
break;
}
case 263652:
{
returnValue = F("Rentamtstr.");
break;
}
case 263653:
{
returnValue = F("Rentamtsweg");
break;
}
case 263654:
{
returnValue = F("Rentbachweg");
break;
}
case 263655:
{
returnValue = F("Renteistr.");
break;
}
case 263656:
{
returnValue = F("Renteiweg");
break;
}
case 263657:
{
returnValue = F("Rentengasse");
break;
}
case 263658:
{
returnValue = F("Rentengut");
break;
}
case 263659:
{
returnValue = F("Rentenmarkstr.");
break;
}
case 263660:
{
returnValue = F("Rentensiedlung");
break;
}
case 263661:
{
returnValue = F("Rentenstr.");
break;
}
case 263662:
{
returnValue = F("Rentenweg");
break;
}
case 263663:
{
returnValue = F("Renterei");
break;
}
case 263664:
{
returnValue = F("Rentforter Str.");
break;
}
case 263665:
{
returnValue = F("Renthof");
break;
}
case 263666:
{
returnValue = F("Renthofstr.");
break;
}
case 263667:
{
returnValue = F("Renthswiese");
break;
}
case 263668:
{
returnValue = F("Rentiere");
break;
}
case 263669:
{
returnValue = F("Rentierweg");
break;
}
case 263670:
{
returnValue = F("Rentingweg");
break;
}
case 263671:
{
returnValue = F("Rentkammerweg");
break;
}
case 263672:
{
returnValue = F("Rentmeister-Wilthelm-Weg");
break;
}
case 263673:
{
returnValue = F("Rentmeistersfeld");
break;
}
case 263674:
{
returnValue = F("Rentmeisterskamp");
break;
}
case 263675:
{
returnValue = F("Rentmeisterstr.");
break;
}
case 263676:
{
returnValue = F("Rentmeisterweg");
break;
}
case 263677:
{
returnValue = F("Rentner Steg");
break;
}
case 263678:
{
returnValue = F("Rentnerbänkchen");
break;
}
case 263679:
{
returnValue = F("Rentnereck");
break;
}
case 263680:
{
returnValue = F("Rentnerpfad");
break;
}
case 263681:
{
returnValue = F("Rentnerschneise");
break;
}
case 263682:
{
returnValue = F("Rentnersteg");
break;
}
case 263683:
{
returnValue = F("Rentnersweg");
break;
}
case 263684:
{
returnValue = F("Rentnerweg");
break;
}
case 263685:
{
returnValue = F("Rentoftstr.");
break;
}
case 263686:
{
returnValue = F("Rentorf");
break;
}
case 263687:
{
returnValue = F("Rentrischer Str.");
break;
}
case 263688:
{
returnValue = F("Rentrischer Weg");
break;
}
case 263689:
{
returnValue = F("Rentrop");
break;
}
case 263690:
{
returnValue = F("Rentruper Str.");
break;
}
case 263691:
{
returnValue = F("Rentweg");
break;
}
case 263692:
{
returnValue = F("Rentweinsdorfer Str.");
break;
}
case 263693:
{
returnValue = F("Rentwertshäuser Str.");
break;
}
case 263694:
{
returnValue = F("Rentzschmühle");
break;
}
case 263695:
{
returnValue = F("Renusstr.");
break;
}
case 263696:
{
returnValue = F("Renversweg");
break;
}
case 263697:
{
returnValue = F("Renz");
break;
}
case 263698:
{
returnValue = F("Renz-Waller-Weg");
break;
}
case 263699:
{
returnValue = F("Renz-von-Damnitz-Ring");
break;
}
case 263700:
{
returnValue = F("Renzbergstr.");
break;
}
case 263701:
{
returnValue = F("Renzelberg");
break;
}
case 263702:
{
returnValue = F("Renzeler Str.");
break;
}
case 263703:
{
returnValue = F("Renzelshöhe");
break;
}
case 263704:
{
returnValue = F("Renzenbergstr.");
break;
}
case 263705:
{
returnValue = F("Renzenbergweg");
break;
}
case 263706:
{
returnValue = F("Renzenbühlweg");
break;
}
case 263707:
{
returnValue = F("Renzener Weg");
break;
}
case 263708:
{
returnValue = F("Renzenhofer Str.");
break;
}
case 263709:
{
returnValue = F("Renzentalschneise");
break;
}
case 263710:
{
returnValue = F("Renzentalweg");
break;
}
case 263711:
{
returnValue = F("Renzenweg");
break;
}
case 263712:
{
returnValue = F("Renzer Str.");
break;
}
case 263713:
{
returnValue = F("Renzer Weg");
break;
}
case 263714:
{
returnValue = F("Renzertstr.");
break;
}
case 263715:
{
returnValue = F("Renzig");
break;
}
case 263716:
{
returnValue = F("Renzower Str.");
break;
}
case 263717:
{
returnValue = F("Renzower Weg");
break;
}
case 263718:
{
returnValue = F("Renzstr.");
break;
}
case 263719:
{
returnValue = F("Renztalstr.");
break;
}
case 263720:
{
returnValue = F("Renzweg");
break;
}
case 263721:
{
returnValue = F("Renève-Str.");
break;
}
case 263722:
{
returnValue = F("René-Bohn-Str.");
break;
}
case 263723:
{
returnValue = F("René-Goscinny-Weg");
break;
}
case 263724:
{
returnValue = F("René-Schickele-Str.");
break;
}
case 263725:
{
returnValue = F("René-Schickele-Weg");
break;
}
case 263726:
{
returnValue = F("Rep. freies Wendland");
break;
}
case 263727:
{
returnValue = F("Repelener Str.");
break;
}
case 263728:
{
returnValue = F("Repeler Heide");
break;
}
case 263729:
{
returnValue = F("Repeler Weg");
break;
}
case 263730:
{
returnValue = F("Repenter Str.");
break;
}
case 263731:
{
returnValue = F("Reper Höhe");
break;
}
case 263732:
{
returnValue = F("Reper Weg");
break;
}
case 263733:
{
returnValue = F("Repetalstr.");
break;
}
case 263734:
{
returnValue = F("Repgowstr.");
break;
}
case 263735:
{
returnValue = F("Rephunstr.");
break;
}
case 263736:
{
returnValue = F("Repinghofener Str.");
break;
}
case 263737:
{
returnValue = F("Repitz");
break;
}
case 263738:
{
returnValue = F("Repitzer Weg");
break;
}
case 263739:
{
returnValue = F("Repkamp");
break;
}
case 263740:
{
returnValue = F("Repke");
break;
}
case 263741:
{
returnValue = F("Repker Damm");
break;
}
case 263742:
{
returnValue = F("Repker Dorfstr.");
break;
}
case 263743:
{
returnValue = F("Repker Esch");
break;
}
case 263744:
{
returnValue = F("Repker Str.");
break;
}
case 263745:
{
returnValue = F("Repker Weg");
break;
}
case 263746:
{
returnValue = F("Repkering");
break;
}
case 263747:
{
returnValue = F("Repkestr.");
break;
}
case 263748:
{
returnValue = F("Repkings Damm");
break;
}
case 263749:
{
returnValue = F("Repkowstr.");
break;
}
case 263750:
{
returnValue = F("Repmoor");
break;
}
case 263751:
{
returnValue = F("Repnitz");
break;
}
case 263752:
{
returnValue = F("Repp-Str.");
break;
}
case 263753:
{
returnValue = F("Reppach");
break;
}
case 263754:
{
returnValue = F("Reppel");
break;
}
case 263755:
{
returnValue = F("Reppeldein");
break;
}
case 263756:
{
returnValue = F("Reppelweg");
break;
}
case 263757:
{
returnValue = F("Reppener Str.");
break;
}
case 263758:
{
returnValue = F("Reppenholt");
break;
}
case 263759:
{
returnValue = F("Reppenort");
break;
}
case 263760:
{
returnValue = F("Reppentiner Weg");
break;
}
case 263761:
{
returnValue = F("Reppergässchen");
break;
}
case 263762:
{
returnValue = F("Repperndorfer Str.");
break;
}
case 263763:
{
returnValue = F("Reppersbergstr.");
break;
}
case 263764:
{
returnValue = F("Repperthalstr.");
break;
}
case 263765:
{
returnValue = F("Reppertsweg");
break;
}
case 263766:
{
returnValue = F("Repperweilerstr.");
break;
}
case 263767:
{
returnValue = F("Reppichauer Anger");
break;
}
case 263768:
{
returnValue = F("Reppichauer Str.");
break;
}
case 263769:
{
returnValue = F("Reppinghauser Str.");
break;
}
case 263770:
{
returnValue = F("Reppinicher Str.");
break;
}
case 263771:
{
returnValue = F("Reppinsche Allee");
break;
}
case 263772:
{
returnValue = F("Reppiser Str.");
break;
}
case 263773:
{
returnValue = F("Reppkotten");
break;
}
case 263774:
{
returnValue = F("Reppner Str.");
break;
}
case 263775:
{
returnValue = F("Reppnersche Str.");
break;
}
case 263776:
{
returnValue = F("Reprechtweg");
break;
}
case 263777:
{
returnValue = F("Repsch");
break;
}
case 263778:
{
returnValue = F("Repschenrother Str.");
break;
}
case 263779:
{
returnValue = F("Repsengasse");
break;
}
case 263780:
{
returnValue = F("Repser Gasse");
break;
}
case 263781:
{
returnValue = F("Repsgasse");
break;
}
case 263782:
{
returnValue = F("Repslöh");
break;
}
case 263783:
{
returnValue = F("Repsoldstr.");
break;
}
case 263784:
{
returnValue = F("Repsäcker");
break;
}
case 263785:
{
returnValue = F("Repticher Str.");
break;
}
case 263786:
{
returnValue = F("Republikaner");
break;
}
case 263787:
{
returnValue = F("Republikplatz");
break;
}
case 263788:
{
returnValue = F("Republikstr.");
break;
}
case 263789:
{
returnValue = F("Rericer Weg");
break;
}
case 263790:
{
returnValue = F("Reriker Chaussee");
break;
}
case 263791:
{
returnValue = F("Reriker Str.");
break;
}
case 263792:
{
returnValue = F("Rerinkstr.");
break;
}
case 263793:
{
returnValue = F("Rerkausenstr.");
break;
}
case 263794:
{
returnValue = F("Rermeedsweg");
break;
}
case 263795:
{
returnValue = F("Res-Fischer-Str.");
break;
}
case 263796:
{
returnValue = F("Resauer Weg");
break;
}
case 263797:
{
returnValue = F("Reschbachbrücke");
break;
}
case 263798:
{
returnValue = F("Reschbachstr.");
break;
}
case 263799:
{
returnValue = F("Reschbachweg");
break;
}
case 263800:
{
returnValue = F("Reschberg");
break;
}
case 263801:
{
returnValue = F("Reschbergweg");
break;
}
case 263802:
{
returnValue = F("Rescheid");
break;
}
case 263803:
{
returnValue = F("Reschenbachstr.");
break;
}
case 263804:
{
returnValue = F("Reschenberg");
break;
}
case 263805:
{
returnValue = F("Reschenbergstr.");
break;
}
case 263806:
{
returnValue = F("Reschenbergweg");
break;
}
case 263807:
{
returnValue = F("Reschendoblstr.");
break;
}
case 263808:
{
returnValue = F("Reschengasse");
break;
}
case 263809:
{
returnValue = F("Reschenhardweg");
break;
}
case 263810:
{
returnValue = F("Reschenstr.");
break;
}
case 263811:
{
returnValue = F("Reschenweg");
break;
}
case 263812:
{
returnValue = F("Reschhofweg");
break;
}
case 263813:
{
returnValue = F("Reschhäuserweg");
break;
}
case 263814:
{
returnValue = F("Reschitzastr.");
break;
}
case 263815:
{
returnValue = F("Reschop");
break;
}
case 263816:
{
returnValue = F("Reschop Carré Platz");
break;
}
case 263817:
{
returnValue = F("Reschstr.");
break;
}
case 263818:
{
returnValue = F("Reschweg");
break;
}
case 263819:
{
returnValue = F("Reschwitzer Str.");
break;
}
case 263820:
{
returnValue = F("Reseberg");
break;
}
case 263821:
{
returnValue = F("Resebergweg");
break;
}
case 263822:
{
returnValue = F("Resebrink");
break;
}
case 263823:
{
returnValue = F("Resedakante");
break;
}
case 263824:
{
returnValue = F("Resedapfad");
break;
}
case 263825:
{
returnValue = F("Resedastieg");
break;
}
case 263826:
{
returnValue = F("Resedastr.");
break;
}
case 263827:
{
returnValue = F("Resedaweg");
break;
}
case 263828:
{
returnValue = F("Resedenstr.");
break;
}
case 263829:
{
returnValue = F("Resedenweg");
break;
}
case 263830:
{
returnValue = F("Resegasse");
break;
}
case 263831:
{
returnValue = F("Reselager Mesch");
break;
}
case 263832:
{
returnValue = F("Reselager Rieden");
break;
}
case 263833:
{
returnValue = F("Reselager Str.");
break;
}
case 263834:
{
returnValue = F("Reselithweg");
break;
}
case 263835:
{
returnValue = F("Resenbarg");
break;
}
case 263836:
{
returnValue = F("Resenbrücke");
break;
}
case 263837:
{
returnValue = F("Resenhofweg");
break;
}
case 263838:
{
returnValue = F("Resenscheckstr.");
break;
}
case 263839:
{
returnValue = F("Resenstr.");
break;
}
case 263840:
{
returnValue = F("Resenweg");
break;
}
case 263841:
{
returnValue = F("Resenödstr.");
break;
}
case 263842:
{
returnValue = F("Reserveallee");
break;
}
case 263843:
{
returnValue = F("Reserveweg");
break;
}
case 263844:
{
returnValue = F("Reservoirperipherie");
break;
}
case 263845:
{
returnValue = F("Reservoirstr.");
break;
}
case 263846:
{
returnValue = F("Reservoirweg");
break;
}
case 263847:
{
returnValue = F("Resewitzstr.");
break;
}
case 263848:
{
returnValue = F("Resi-Quint-Str.");
break;
}
case 263849:
{
returnValue = F("Resi-Salomon-Str.");
break;
}
case 263850:
{
returnValue = F("Resi-Weglein-Gasse");
break;
}
case 263851:
{
returnValue = F("Resi-Weglein-Str.");
break;
}
case 263852:
{
returnValue = F("Residence-Park");
break;
}
case 263853:
{
returnValue = F("Residenz am Stausee");
break;
}
case 263854:
{
returnValue = F("Residenz im Park");
break;
}
case 263855:
{
returnValue = F("Residenzplatz");
break;
}
case 263856:
{
returnValue = F("Residenzstr.");
break;
}
case 263857:
{
returnValue = F("Residenzweg");
break;
}
case 263858:
{
returnValue = F("Resieck");
break;
}
case 263859:
{
returnValue = F("Resiek");
break;
}
case 263860:
{
returnValue = F("Resl-Garten");
break;
}
case 263861:
{
returnValue = F("Respenstr.");
break;
}
case 263862:
{
returnValue = F("Ressberg");
break;
}
case 263863:
{
returnValue = F("Resselstr.");
break;
}
case 263864:
{
returnValue = F("Resseltstr.");
break;
}
case 263865:
{
returnValue = F("Resselweg");
break;
}
case 263866:
{
returnValue = F("Ressener Dorfstr.");
break;
}
case 263867:
{
returnValue = F("Resser Grenzweg");
break;
}
case 263868:
{
returnValue = F("Resser Str.");
break;
}
case 263869:
{
returnValue = F("Resser Weg");
break;
}
case 263870:
{
returnValue = F("Resseriethe");
break;
}
case 263871:
{
returnValue = F("Ressestr.");
break;
}
case 263872:
{
returnValue = F("Ressings Feld");
break;
}
case 263873:
{
returnValue = F("Restanger");
break;
}
case 263874:
{
returnValue = F("Restbergstr.");
break;
}
case 263875:
{
returnValue = F("Restebusch");
break;
}
case 263876:
{
returnValue = F("Resterhafer Str.");
break;
}
case 263877:
{
returnValue = F("Resthauser Str.");
break;
}
case 263878:
{
returnValue = F("Resthof");
break;
}
case 263879:
{
returnValue = F("Resthofer Str.");
break;
}
case 263880:
{
returnValue = F("Resting");
break;
}
case 263881:
{
returnValue = F("Restrup");
break;
}
case 263882:
{
returnValue = F("Restruper Str.");
break;
}
case 263883:
{
returnValue = F("Restruper Weg");
break;
}
case 263884:
{
returnValue = F("Reststrauch");
break;
}
case 263885:
{
returnValue = F("Resum");
break;
}
case 263886:
{
returnValue = F("Retelsdorf");
break;
}
case 263887:
{
returnValue = F("Retelsdorfer Weg");
break;
}
case 263888:
{
returnValue = F("Retemeyerstr.");
break;
}
case 263889:
{
returnValue = F("Retford Str.");
break;
}
case 263890:
{
returnValue = F("Retgendorfer Str.");
break;
}
case 263891:
{
returnValue = F("Rethbergweg");
break;
}
case 263892:
{
returnValue = F("Rethbrook");
break;
}
case 263893:
{
returnValue = F("Rethbruch");
break;
}
case 263894:
{
returnValue = F("Rethdamm");
break;
}
case 263895:
{
returnValue = F("Rethdeich");
break;
}
case 263896:
{
returnValue = F("Retheler Str.");
break;
}
case 263897:
{
returnValue = F("Rethelstr.");
break;
}
case 263898:
{
returnValue = F("Rethelweg");
break;
}
case 263899:
{
returnValue = F("Rethemer Str.");
break;
}
case 263900:
{
returnValue = F("Rethemer Weg");
break;
}
case 263901:
{
returnValue = F("Rethen");
break;
}
case 263902:
{
returnValue = F("Rethen / Steinfeld");
break;
}
case 263903:
{
returnValue = F("Rethener Kirchweg");
break;
}
case 263904:
{
returnValue = F("Rethener Str.");
break;
}
case 263905:
{
returnValue = F("Rethener Winkel");
break;
}
case 263906:
{
returnValue = F("Rethfeld");
break;
}
case 263907:
{
returnValue = F("Rethfelder Ring");
break;
}
case 263908:
{
returnValue = F("Rethfelder Str.");
break;
}
case 263909:
{
returnValue = F("Rethfurt");
break;
}
case 263910:
{
returnValue = F("Rethgraben");
break;
}
case 263911:
{
returnValue = F("Rethhof");
break;
}
case 263912:
{
returnValue = F("Rethkamp");
break;
}
case 263913:
{
returnValue = F("Rethkampplatz");
break;
}
case 263914:
{
returnValue = F("Rethlager Weg");
break;
}
case 263915:
{
returnValue = F("Rethmarsche Str.");
break;
}
case 263916:
{
returnValue = F("Rethmarstr.");
break;
}
case 263917:
{
returnValue = F("Rethmeyers Weg");
break;
}
case 263918:
{
returnValue = F("Rethmoor");
break;
}
case 263919:
{
returnValue = F("Rethobergstr.");
break;
}
case 263920:
{
returnValue = F("Retholzstr.");
break;
}
case 263921:
{
returnValue = F("Rethrastr.");
break;
}
case 263922:
{
returnValue = F("Rethsahl");
break;
}
case 263923:
{
returnValue = F("Rethscheuerweg");
break;
}
case 263924:
{
returnValue = F("Rethsollskamp");
break;
}
case 263925:
{
returnValue = F("Rethweg");
break;
}
case 263926:
{
returnValue = F("Rethwettern");
break;
}
case 263927:
{
returnValue = F("Rethwiese");
break;
}
case 263928:
{
returnValue = F("Rethwiesen");
break;
}
case 263929:
{
returnValue = F("Rethwinkelweg");
break;
}
case 263930:
{
returnValue = F("Rethwisch");
break;
}
case 263931:
{
returnValue = F("Rethwischer Str.");
break;
}
case 263932:
{
returnValue = F("Rethwischer Weg");
break;
}
case 263933:
{
returnValue = F("Retinastr.");
break;
}
case 263934:
{
returnValue = F("Retirierter Graben");
break;
}
case 263935:
{
returnValue = F("Retort-Heide");
break;
}
case 263936:
{
returnValue = F("Retringen");
break;
}
case 263937:
{
returnValue = F("Retscheider Str.");
break;
}
case 263938:
{
returnValue = F("Retschenbachweg");
break;
}
case 263939:
{
returnValue = F("Retschenweg");
break;
}
case 263940:
{
returnValue = F("Retscherother Str.");
break;
}
case 263941:
{
returnValue = F("Retscherstr.");
break;
}
case 263942:
{
returnValue = F("Retschower Str.");
break;
}
case 263943:
{
returnValue = F("Retschower Weg");
break;
}
case 263944:
{
returnValue = F("Retschystr.");
break;
}
case 263945:
{
returnValue = F("Rettbacher Str.");
break;
}
case 263946:
{
returnValue = F("Rettbergstr.");
break;
}
case 263947:
{
returnValue = F("Rettbrook");
break;
}
case 263948:
{
returnValue = F("Rettchensdorfer Str.");
break;
}
case 263949:
{
returnValue = F("Rettchensdorfer Weg");
break;
}
case 263950:
{
returnValue = F("Rettelbuschweg");
break;
}
case 263951:
{
returnValue = F("Rettenbach");
break;
}
case 263952:
{
returnValue = F("Rettenbacher Str.");
break;
}
case 263953:
{
returnValue = F("Rettenbacher Weg");
break;
}
case 263954:
{
returnValue = F("Rettenbachstr.");
break;
}
case 263955:
{
returnValue = F("Rettenberg");
break;
}
case 263956:
{
returnValue = F("Rettenberger Str.");
break;
}
case 263957:
{
returnValue = F("Rettenberger Weg");
break;
}
case 263958:
{
returnValue = F("Rettenbergstr.");
break;
}
case 263959:
{
returnValue = F("Rettenburgweg");
break;
}
case 263960:
{
returnValue = F("Rettenstr.");
break;
}
case 263961:
{
returnValue = F("Retterner Weg");
break;
}
case 263962:
{
returnValue = F("Rettersbach");
break;
}
case 263963:
{
returnValue = F("Retterser Str.");
break;
}
case 263964:
{
returnValue = F("Rettersheimer Str.");
break;
}
case 263965:
{
returnValue = F("Retterter Weg");
break;
}
case 263966:
{
returnValue = F("Retteröder Str.");
break;
}
case 263967:
{
returnValue = F("Rettgenstedter Str.");
break;
}
case 263968:
{
returnValue = F("Rettichsberg");
break;
}
case 263969:
{
returnValue = F("Rettichstr.");
break;
}
case 263970:
{
returnValue = F("Rettichweg");
break;
}
case 263971:
{
returnValue = F("Rettigacker");
break;
}
case 263972:
{
returnValue = F("Rettigheimer Gasse");
break;
}
case 263973:
{
returnValue = F("Rettigheimer Str.");
break;
}
case 263974:
{
returnValue = F("Rettighofen");
break;
}
case 263975:
{
returnValue = F("Rettigs Grund");
break;
}
case 263976:
{
returnValue = F("Rettigstr.");
break;
}
case 263977:
{
returnValue = F("Rettiner Weg");
break;
}
case 263978:
{
returnValue = F("Rettistr.");
break;
}
case 263979:
{
returnValue = F("Rettmatt");
break;
}
case 263980:
{
returnValue = F("Rettmers Höhe");
break;
}
case 263981:
{
returnValue = F("Rettungsgasse");
break;
}
case 263982:
{
returnValue = F("Rettungsplatz");
break;
}
case 263983:
{
returnValue = F("Rettungssektor A");
break;
}
case 263984:
{
returnValue = F("Rettungssektor C");
break;
}
case 263985:
{
returnValue = F("Rettungssektor D");
break;
}
case 263986:
{
returnValue = F("Rettungssektor E");
break;
}
case 263987:
{
returnValue = F("Rettungssektor F");
break;
}
case 263988:
{
returnValue = F("Rettungssektor K / Reiselfinger Kreuzweg");
break;
}
case 263989:
{
returnValue = F("Rettungssektor L");
break;
}
case 263990:
{
returnValue = F("Rettungssektor N");
break;
}
case 263991:
{
returnValue = F("Rettungssektor Z1");
break;
}
case 263992:
{
returnValue = F("Rettungsspoor");
break;
}
case 263993:
{
returnValue = F("Rettungsstollen");
break;
}
case 263994:
{
returnValue = F("Rettungssweg Nr. 4");
break;
}
case 263995:
{
returnValue = F("Rettungstunnel");
break;
}
case 263996:
{
returnValue = F("Rettungstunnel 3 Bleßbergtunnel");
break;
}
case 263997:
{
returnValue = F("Rettungstunnel 4 Bleßbergtunnel");
break;
}
case 263998:
{
returnValue = F("Rettungstunnel NA2 / Tunnel Reitersberg");
break;
}
case 263999:
{
returnValue = F("Rettungsweg");
break;
}
case 264000:
{
returnValue = F("Rettungsweg DB Netz");
break;
}
case 264001:
{
returnValue = F("Rettungsweg Nr. 8");
break;
}
case 264002:
{
returnValue = F("Rettungszufahrt");
break;
}
case 264003:
{
returnValue = F("Rettungszufahrt Landrückentunnel");
break;
}
case 264004:
{
returnValue = F("Retzauer Str.");
break;
}
case 264005:
{
returnValue = F("Retzbachpark Gaimersheim");
break;
}
case 264006:
{
returnValue = F("Retzbachpark Gaimersheim II");
break;
}
case 264007:
{
returnValue = F("Retzbachweg");
break;
}
case 264008:
{
returnValue = F("Retzbuck");
break;
}
case 264009:
{
returnValue = F("Retzelweg");
break;
}
case 264010:
{
returnValue = F("Retzen");
break;
}
case 264011:
{
returnValue = F("Retzendorf");
break;
}
case 264012:
{
returnValue = F("Retzendorfer Str.");
break;
}
case 264013:
{
returnValue = F("Retzer Str.");
break;
}
case 264014:
{
returnValue = F("Retzerheide");
break;
}
case 264015:
{
returnValue = F("Retzerpark");
break;
}
case 264016:
{
returnValue = F("Retzerstr.");
break;
}
case 264017:
{
returnValue = F("Retzgrabenstr.");
break;
}
case 264018:
{
returnValue = F("Retzgrubenweg");
break;
}
case 264019:
{
returnValue = F("Retzin");
break;
}
case 264020:
{
returnValue = F("Retziner Str.");
break;
}
case 264021:
{
returnValue = F("Retziner Weg");
break;
}
case 264022:
{
returnValue = F("Retzklingenweg");
break;
}
case 264023:
{
returnValue = F("Retzlachweg");
break;
}
case 264024:
{
returnValue = F("Retzlweg");
break;
}
case 264025:
{
returnValue = F("Retzow");
break;
}
case 264026:
{
returnValue = F("Retzower Str.");
break;
}
case 264027:
{
returnValue = F("Retzower Weg");
break;
}
case 264028:
{
returnValue = F("Retzschgasse");
break;
}
case 264029:
{
returnValue = F("Retzstadter Str.");
break;
}
case 264030:
{
returnValue = F("Retzstr.");
break;
}
case 264031:
{
returnValue = F("Retüt");
break;
}
case 264032:
{
returnValue = F("Reubacher Hauptstr.");
break;
}
case 264033:
{
returnValue = F("Reubacher Str.");
break;
}
case 264034:
{
returnValue = F("Reubacher Weg");
break;
}
case 264035:
{
returnValue = F("Reuboldstr.");
break;
}
case 264036:
{
returnValue = F("Reuchlinstr.");
break;
}
case 264037:
{
returnValue = F("Reuchlinweg");
break;
}
case 264038:
{
returnValue = F("Reudenbach");
break;
}
case 264039:
{
returnValue = F("Reudener Str.");
break;
}
case 264040:
{
returnValue = F("Reudener Weg");
break;
}
case 264041:
{
returnValue = F("Reuderner Str.");
break;
}
case 264042:
{
returnValue = F("Reudnitz");
break;
}
case 264043:
{
returnValue = F("Reudnitzer Str.");
break;
}
case 264044:
{
returnValue = F("Reudnitzer Waldstr.");
break;
}
case 264045:
{
returnValue = F("Reuendorfer Weg");
break;
}
case 264046:
{
returnValue = F("Reuenthaler Str.");
break;
}
case 264047:
{
returnValue = F("Reuerergasse");
break;
}
case 264048:
{
returnValue = F("Reuetal");
break;
}
case 264049:
{
returnValue = F("Reuhtestr.");
break;
}
case 264050:
{
returnValue = F("Reukauf-Weg");
break;
}
case 264051:
{
returnValue = F("Reuken");
break;
}
case 264052:
{
returnValue = F("Reukersdorfer Weg");
break;
}
case 264053:
{
returnValue = F("Reulandstr.");
break;
}
case 264054:
{
returnValue = F("Reulbacher Str.");
break;
}
case 264055:
{
returnValue = F("Reulbacher Weg");
break;
}
case 264056:
{
returnValue = F("Reulchen");
break;
}
case 264057:
{
returnValue = F("Reuleauxstr.");
break;
}
case 264058:
{
returnValue = F("Reuleckestr.");
break;
}
case 264059:
{
returnValue = F("Reuleckeweg");
break;
}
case 264060:
{
returnValue = F("Reulenstr.");
break;
}
case 264061:
{
returnValue = F("Reulstr.");
break;
}
case 264062:
{
returnValue = F("Reulweg");
break;
}
case 264063:
{
returnValue = F("Reumannstr.");
break;
}
case 264064:
{
returnValue = F("Reumont-Promenade");
break;
}
case 264065:
{
returnValue = F("Reumontstr.");
break;
}
case 264066:
{
returnValue = F("Reumtengrüner Hauptstr.");
break;
}
case 264067:
{
returnValue = F("Reumtengrüner Str.");
break;
}
case 264068:
{
returnValue = F("Reumtengrüner Weg");
break;
}
case 264069:
{
returnValue = F("Reundorfer Str.");
break;
}
case 264070:
{
returnValue = F("Reunewegli");
break;
}
case 264071:
{
returnValue = F("Reuntweg");
break;
}
case 264072:
{
returnValue = F("Reupoldsroter Weg");
break;
}
case 264073:
{
returnValue = F("Reuriether Dorfstr.");
break;
}
case 264074:
{
returnValue = F("Reuriether Str.");
break;
}
case 264075:
{
returnValue = F("Reuriether Weg");
break;
}
case 264076:
{
returnValue = F("Reusaer Str.");
break;
}
case 264077:
{
returnValue = F("Reusaer Wald");
break;
}
case 264078:
{
returnValue = F("Reusaer Waldhaus");
break;
}
case 264079:
{
returnValue = F("Reusch");
break;
}
case 264080:
{
returnValue = F("Reuschbacher Str.");
break;
}
case 264081:
{
returnValue = F("Reuschberger Weg");
break;
}
case 264082:
{
returnValue = F("Reuschbergstr.");
break;
}
case 264083:
{
returnValue = F("Reuschelstr.");
break;
}
case 264084:
{
returnValue = F("Reuscheltalstr.");
break;
}
case 264085:
{
returnValue = F("Reuschenbach");
break;
}
case 264086:
{
returnValue = F("Reuschenberger Str.");
break;
}
case 264087:
{
returnValue = F("Reuschenberger Weg");
break;
}
case 264088:
{
returnValue = F("Reuschenhof");
break;
}
case 264089:
{
returnValue = F("Reuschenlay");
break;
}
case 264090:
{
returnValue = F("Reuscher Str.");
break;
}
case 264091:
{
returnValue = F("Reuscher Weg");
break;
}
case 264092:
{
returnValue = F("Reuscherstr.");
break;
}
case 264093:
{
returnValue = F("Reuscherweg");
break;
}
case 264094:
{
returnValue = F("Reuschhalde");
break;
}
case 264095:
{
returnValue = F("Reuschstr.");
break;
}
case 264096:
{
returnValue = F("Reuschweg");
break;
}
case 264097:
{
returnValue = F("Reusengasse");
break;
}
case 264098:
{
returnValue = F("Reusenort");
break;
}
case 264099:
{
returnValue = F("Reusenstr.");
break;
}
case 264100:
{
returnValue = F("Reusenweg");
break;
}
case 264101:
{
returnValue = F("Reusrather Str.");
break;
}
case 264102:
{
returnValue = F("Reuss-Schneise");
break;
}
case 264103:
{
returnValue = F("Reussengasse");
break;
}
case 264104:
{
returnValue = F("Reussensteinstr.");
break;
}
case 264105:
{
returnValue = F("Reustadt");
break;
}
case 264106:
{
returnValue = F("Reustener Str.");
break;
}
case 264107:
{
returnValue = F("Reustener Weg");
break;
}
case 264108:
{
returnValue = F("Reustensteinweg");
break;
}
case 264109:
{
returnValue = F("Reut");
break;
}
case 264110:
{
returnValue = F("Reut-Allee");
break;
}
case 264111:
{
returnValue = F("Reutacker");
break;
}
case 264112:
{
returnValue = F("Reutackerring");
break;
}
case 264113:
{
returnValue = F("Reutalweg");
break;
}
case 264114:
{
returnValue = F("Reutbergstr.");
break;
}
case 264115:
{
returnValue = F("Reutchen-Schneise");
break;
}
case 264116:
{
returnValue = F("Reute");
break;
}
case 264117:
{
returnValue = F("Reuteallee");
break;
}
case 264118:
{
returnValue = F("Reutebach");
break;
}
case 264119:
{
returnValue = F("Reutebachgasse");
break;
}
case 264120:
{
returnValue = F("Reutebachstr.");
break;
}
case 264121:
{
returnValue = F("Reutebühlstr.");
break;
}
case 264122:
{
returnValue = F("Reutecker Str.");
break;
}
case 264123:
{
returnValue = F("Reutegartenweg");
break;
}
case 264124:
{
returnValue = F("Reutegasse");
break;
}
case 264125:
{
returnValue = F("Reutehaagstr.");
break;
}
case 264126:
{
returnValue = F("Reutehaldeweg");
break;
}
case 264127:
{
returnValue = F("Reutehof");
break;
}
case 264128:
{
returnValue = F("Reutelberg");
break;
}
case 264129:
{
returnValue = F("Reutele");
break;
}
case 264130:
{
returnValue = F("Reuteleweg");
break;
}
case 264131:
{
returnValue = F("Reuten");
break;
}
case 264132:
{
returnValue = F("Reutenbachstr.");
break;
}
case 264133:
{
returnValue = F("Reutenberg");
break;
}
case 264134:
{
returnValue = F("Reutenbergstr.");
break;
}
case 264135:
{
returnValue = F("Reutenbergweg");
break;
}
case 264136:
{
returnValue = F("Reutenbüschel");
break;
}
case 264137:
{
returnValue = F("Reutenen");
break;
}
case 264138:
{
returnValue = F("Reutenenstr.");
break;
}
case 264139:
{
returnValue = F("Reutenenweg");
break;
}
case 264140:
{
returnValue = F("Reutener Str.");
break;
}
case 264141:
{
returnValue = F("Reutenhaldenweg");
break;
}
case 264142:
{
returnValue = F("Reutenhardtweg");
break;
}
case 264143:
{
returnValue = F("Reutenhof");
break;
}
case 264144:
{
returnValue = F("Reutenhofstr.");
break;
}
case 264145:
{
returnValue = F("Reutenmahd");
break;
}
case 264146:
{
returnValue = F("Reutenstr.");
break;
}
case 264147:
{
returnValue = F("Reutensweg");
break;
}
case 264148:
{
returnValue = F("Reutenweg");
break;
}
case 264149:
{
returnValue = F("Reuter Steig");
break;
}
case 264150:
{
returnValue = F("Reuter Steige");
break;
}
case 264151:
{
returnValue = F("Reuter Weg");
break;
}
case 264152:
{
returnValue = F("Reuterallee");
break;
}
case 264153:
{
returnValue = F("Reuteranger");
break;
}
case 264154:
{
returnValue = F("Reuterberg");
break;
}
case 264155:
{
returnValue = F("Reuterbergkopfweg");
break;
}
case 264156:
{
returnValue = F("Reuterdamm");
break;
}
case 264157:
{
returnValue = F("Reutergartenweg");
break;
}
case 264158:
{
returnValue = F("Reutergasse");
break;
}
case 264159:
{
returnValue = F("Reutergässchen");
break;
}
case 264160:
{
returnValue = F("Reuterhauweg");
break;
}
case 264161:
{
returnValue = F("Reuterhohlstr.");
break;
}
case 264162:
{
returnValue = F("Reuterhöhe");
break;
}
case 264163:
{
returnValue = F("Reuterkamp");
break;
}
case 264164:
{
returnValue = F("Reuterkoppel");
break;
}
case 264165:
{
returnValue = F("Reuterner Str.");
break;
}
case 264166:
{
returnValue = F("Reuternhof");
break;
}
case 264167:
{
returnValue = F("Reuternweg");
break;
}
case 264168:
{
returnValue = F("Reuterpark");
break;
}
case 264169:
{
returnValue = F("Reuterpfad");
break;
}
case 264170:
{
returnValue = F("Reuterplacken");
break;
}
case 264171:
{
returnValue = F("Reuterplatz");
break;
}
case 264172:
{
returnValue = F("Reuterpromenade");
break;
}
case 264173:
{
returnValue = F("Reuters Hof");
break;
}
case 264174:
{
returnValue = F("Reuters Ruh");
break;
}
case 264175:
{
returnValue = F("Reutersbergweg");
break;
}
case 264176:
{
returnValue = F("Reutersbrunner Weg");
break;
}
case 264177:
{
returnValue = F("Reutersbühlweg");
break;
}
case 264178:
{
returnValue = F("Reuterser Str.");
break;
}
case 264179:
{
returnValue = F("Reutersgarten");
break;
}
case 264180:
{
returnValue = F("Reutersgasse");
break;
}
case 264181:
{
returnValue = F("Reutershagweg");
break;
}
case 264182:
{
returnValue = F("Reutershagwinkel");
break;
}
case 264183:
{
returnValue = F("Reutershäger Weg");
break;
}
case 264184:
{
returnValue = F("Reuterspfad");
break;
}
case 264185:
{
returnValue = F("Reutersteig");
break;
}
case 264186:
{
returnValue = F("Reuterstr.");
break;
}
case 264187:
{
returnValue = F("Reutersweg");
break;
}
case 264188:
{
returnValue = F("Reuterweg");
break;
}
case 264189:
{
returnValue = F("Reuterweide");
break;
}
case 264190:
{
returnValue = F("Reuterwiese");
break;
}
case 264191:
{
returnValue = F("Reuterwiesen");
break;
}
case 264192:
{
returnValue = F("Reutesiedlung");
break;
}
case 264193:
{
returnValue = F("Reutesteig");
break;
}
case 264194:
{
returnValue = F("Reutestr.");
break;
}
case 264195:
{
returnValue = F("Reuteweg");
break;
}
case 264196:
{
returnValue = F("Reuteweg/Luitenwaldweg");
break;
}
case 264197:
{
returnValue = F("Reutewiesen");
break;
}
case 264198:
{
returnValue = F("Reutewiesenweg");
break;
}
case 264199:
{
returnValue = F("Reuteäckerstr.");
break;
}
case 264200:
{
returnValue = F("Reutfeldstr.");
break;
}
case 264201:
{
returnValue = F("Reutfellnerstr.");
break;
}
case 264202:
{
returnValue = F("Reutgartenweg");
break;
}
case 264203:
{
returnValue = F("Reutgasse");
break;
}
case 264204:
{
returnValue = F("Reutgraben");
break;
}
case 264205:
{
returnValue = F("Reutgrabenweg");
break;
}
case 264206:
{
returnValue = F("Reutgässle");
break;
}
case 264207:
{
returnValue = F("Reuth");
break;
}
case 264208:
{
returnValue = F("Reuthacker");
break;
}
case 264209:
{
returnValue = F("Reuthbergsiedlung");
break;
}
case 264210:
{
returnValue = F("Reuthbergstr.");
break;
}
case 264211:
{
returnValue = F("Reuthe");
break;
}
case 264212:
{
returnValue = F("Reuthebogen");
break;
}
case 264213:
{
returnValue = F("Reuthen");
break;
}
case 264214:
{
returnValue = F("Reuthenberg");
break;
}
case 264215:
{
returnValue = F("Reuthenenweg");
break;
}
case 264216:
{
returnValue = F("Reuthener Weg");
break;
}
case 264217:
{
returnValue = F("Reuthenkoppel");
break;
}
case 264218:
{
returnValue = F("Reuther Berg");
break;
}
case 264219:
{
returnValue = F("Reuther Feld");
break;
}
case 264220:
{
returnValue = F("Reuther Kirchsteig");
break;
}
case 264221:
{
returnValue = F("Reuther Steig");
break;
}
case 264222:
{
returnValue = F("Reuther Str.");
break;
}
case 264223:
{
returnValue = F("Reuther Waldstr.");
break;
}
case 264224:
{
returnValue = F("Reuther Weg");
break;
}
case 264225:
{
returnValue = F("Reutherbergtunnel");
break;
}
case 264226:
{
returnValue = F("Reuthersberg");
break;
}
case 264227:
{
returnValue = F("Reuthersteig");
break;
}
case 264228:
{
returnValue = F("Reuthersteigweg");
break;
}
case 264229:
{
returnValue = F("Reutheweg");
break;
}
case 264230:
{
returnValue = F("Reuthfeld");
break;
}
case 264231:
{
returnValue = F("Reuthflügel");
break;
}
case 264232:
{
returnValue = F("Reuthgasse");
break;
}
case 264233:
{
returnValue = F("Reuthhofstr.");
break;
}
case 264234:
{
returnValue = F("Reuthinger Weg");
break;
}
case 264235:
{
returnValue = F("Reuthinstr.");
break;
}
case 264236:
{
returnValue = F("Reuthlas");
break;
}
case 264237:
{
returnValue = F("Reuthlehenstr.");
break;
}
case 264238:
{
returnValue = F("Reuthleinweg");
break;
}
case 264239:
{
returnValue = F("Reuthlingerstr.");
break;
}
case 264240:
{
returnValue = F("Reuthof");
break;
}
case 264241:
{
returnValue = F("Reuthofen");
break;
}
case 264242:
{
returnValue = F("Reuthofstr.");
break;
}
case 264243:
{
returnValue = F("Reutholzweg");
break;
}
case 264244:
{
returnValue = F("Reuthseering");
break;
}
case 264245:
{
returnValue = F("Reuthstr.");
break;
}
case 264246:
{
returnValue = F("Reuthweg");
break;
}
case 264247:
{
returnValue = F("Reuthwingertstr.");
break;
}
case 264248:
{
returnValue = F("Reutibachweg");
break;
}
case 264249:
{
returnValue = F("Reutig");
break;
}
case 264250:
{
returnValue = F("Reutiner Berg");
break;
}
case 264251:
{
returnValue = F("Reutiner Brünnlesteig");
break;
}
case 264252:
{
returnValue = F("Reutiner Steige");
break;
}
case 264253:
{
returnValue = F("Reutiner Str.");
break;
}
case 264254:
{
returnValue = F("Reutiner Weg");
break;
}
case 264255:
{
returnValue = F("Reutinger Weg");
break;
}
case 264256:
{
returnValue = F("Reutinstr.");
break;
}
case 264257:
{
returnValue = F("Reutinweg");
break;
}
case 264258:
{
returnValue = F("Reutlas");
break;
}
case 264259:
{
returnValue = F("Reutleser Weg");
break;
}
case 264260:
{
returnValue = F("Reutlichweg");
break;
}
case 264261:
{
returnValue = F("Reutlingendorfer Str.");
break;
}
case 264262:
{
returnValue = F("Reutlinger Str.");
break;
}
case 264263:
{
returnValue = F("Reutlinger Weg");
break;
}
case 264264:
{
returnValue = F("Reutlinie");
break;
}
case 264265:
{
returnValue = F("Reutlüßstr.");
break;
}
case 264266:
{
returnValue = F("Reutmühle");
break;
}
case 264267:
{
returnValue = F("Reutmühler Str.");
break;
}
case 264268:
{
returnValue = F("Reutpfädle");
break;
}
case 264269:
{
returnValue = F("Reutstalweg");
break;
}
case 264270:
{
returnValue = F("Reutstr.");
break;
}
case 264271:
{
returnValue = F("Reutsächser Steige");
break;
}
case 264272:
{
returnValue = F("Reutter Weg");
break;
}
case 264273:
{
returnValue = F("Reutterstr.");
break;
}
case 264274:
{
returnValue = F("Reutterteichweg");
break;
}
case 264275:
{
returnValue = F("Reutteweg");
break;
}
case 264276:
{
returnValue = F("Reuttier Str.");
break;
}
case 264277:
{
returnValue = F("Reuttierstr.");
break;
}
case 264278:
{
returnValue = F("Reuttiner Weg");
break;
}
case 264279:
{
returnValue = F("Reutwaldallee");
break;
}
case 264280:
{
returnValue = F("Reutwaldstr.");
break;
}
case 264281:
{
returnValue = F("Reutwaldweg");
break;
}
case 264282:
{
returnValue = F("Reutweg");
break;
}
case 264283:
{
returnValue = F("Reutwiesenstr.");
break;
}
case 264284:
{
returnValue = F("Reutwiesenweg");
break;
}
case 264285:
{
returnValue = F("Reutzstr.");
break;
}
case 264286:
{
returnValue = F("Reutäcker");
break;
}
case 264287:
{
returnValue = F("Reutäckerstr.");
break;
}
case 264288:
{
returnValue = F("Reutäckerweg");
break;
}
case 264289:
{
returnValue = F("Reuzenbrunnenweg");
break;
}
case 264290:
{
returnValue = F("Reußenbachstr.");
break;
}
case 264291:
{
returnValue = F("Reußenberg");
break;
}
case 264292:
{
returnValue = F("Reußenbergstr.");
break;
}
case 264293:
{
returnValue = F("Reußendorfer Str.");
break;
}
case 264294:
{
returnValue = F("Reußendorfer Weg");
break;
}
case 264295:
{
returnValue = F("Reußener Park");
break;
}
case 264296:
{
returnValue = F("Reußener Str.");
break;
}
case 264297:
{
returnValue = F("Reußener Weg");
break;
}
case 264298:
{
returnValue = F("Reußengraben");
break;
}
case 264299:
{
returnValue = F("Reußengrundweg");
break;
}
case 264300:
{
returnValue = F("Reußenhainstr.");
break;
}
case 264301:
{
returnValue = F("Reußenkoog");
break;
}
case 264302:
{
returnValue = F("Reußenkreuz");
break;
}
case 264303:
{
returnValue = F("Reußenländer Str.");
break;
}
case 264304:
{
returnValue = F("Reußenplatz");
break;
}
case 264305:
{
returnValue = F("Reußensteinstr.");
break;
}
case 264306:
{
returnValue = F("Reußensteinweg");
break;
}
case 264307:
{
returnValue = F("Reußenweg");
break;
}
case 264308:
{
returnValue = F("Reußerhofstr.");
break;
}
case 264309:
{
returnValue = F("Reußeweg");
break;
}
case 264310:
{
returnValue = F("Reußische Gasse");
break;
}
case 264311:
{
returnValue = F("Reußische Str.");
break;
}
case 264312:
{
returnValue = F("Reußkamp");
break;
}
case 264313:
{
returnValue = F("Reußner Str.");
break;
}
case 264314:
{
returnValue = F("Reußner Weg");
break;
}
case 264315:
{
returnValue = F("Reußstr.");
break;
}
case 264316:
{
returnValue = F("Reußweg");
break;
}
case 264317:
{
returnValue = F("Revaler Str.");
break;
}
case 264318:
{
returnValue = F("Revalweg");
break;
}
case 264319:
{
returnValue = F("Reveler Weg");
break;
}
case 264320:
{
returnValue = F("Revensdorfer Weg");
break;
}
case 264321:
{
returnValue = F("Reventlouallee");
break;
}
case 264322:
{
returnValue = F("Reventloustr.");
break;
}
case 264323:
{
returnValue = F("Reventlowkehre");
break;
}
case 264324:
{
returnValue = F("Reventlowstr.");
break;
}
case 264325:
{
returnValue = F("Reverchonweg");
break;
}
case 264326:
{
returnValue = F("Revereystr.");
break;
}
case 264327:
{
returnValue = F("Revert's Esch");
break;
}
case 264328:
{
returnValue = F("Revidierweg");
break;
}
case 264329:
{
returnValue = F("Revierförster Hasselmann Schneise");
break;
}
case 264330:
{
returnValue = F("Revierförster Schneise");
break;
}
case 264331:
{
returnValue = F("Revierstr.");
break;
}
case 264332:
{
returnValue = F("Revierweg");
break;
}
case 264333:
{
returnValue = F("Reviolstr.");
break;
}
case 264334:
{
returnValue = F("Revkuhl");
break;
}
case 264335:
{
returnValue = F("Revolutionsweg");
break;
}
case 264336:
{
returnValue = F("Rewenweg");
break;
}
case 264337:
{
returnValue = F("Rewerkoppel");
break;
}
case 264338:
{
returnValue = F("Rewestr.");
break;
}
case 264339:
{
returnValue = F("Rewitzerstr.");
break;
}
case 264340:
{
returnValue = F("Rexengasse");
break;
}
case 264341:
{
returnValue = F("Rexer Str.");
break;
}
case 264342:
{
returnValue = F("Rexestr.");
break;
}
case 264343:
{
returnValue = F("Rexfeldstr.");
break;
}
case 264344:
{
returnValue = F("Rexinger Str.");
break;
}
case 264345:
{
returnValue = F("Rexroth-Park");
break;
}
case 264346:
{
returnValue = F("Rexrothstr.");
break;
}
case 264347:
{
returnValue = F("Rey");
break;
}
case 264348:
{
returnValue = F("Reyer Weg");
break;
}
case 264349:
{
returnValue = F("Reyerdingstiege");
break;
}
case 264350:
{
returnValue = F("Reyerhütter Str.");
break;
}
case 264351:
{
returnValue = F("Reyeringsort");
break;
}
case 264352:
{
returnValue = F("Reyersbacher Str.");
break;
}
case 264353:
{
returnValue = F("Reyershäuser Str.");
break;
}
case 264354:
{
returnValue = F("Reyerstr.");
break;
}
case 264355:
{
returnValue = F("Reygersstr.");
break;
}
case 264356:
{
returnValue = F("Reyherstr.");
break;
}
case 264357:
{
returnValue = F("Reyhingstr.");
break;
}
case 264358:
{
returnValue = F("Reykjavikstr.");
break;
}
case 264359:
{
returnValue = F("Reylaenderweg");
break;
}
case 264360:
{
returnValue = F("Reylestr.");
break;
}
case 264361:
{
returnValue = F("Reylstr.");
break;
}
case 264362:
{
returnValue = F("Reylsweg");
break;
}
case 264363:
{
returnValue = F("Reymannweg");
break;
}
case 264364:
{
returnValue = F("Reymerstr.");
break;
}
case 264365:
{
returnValue = F("Reyplatz");
break;
}
case 264366:
{
returnValue = F("Reytherstr.");
break;
}
case 264367:
{
returnValue = F("Reyweg");
break;
}
case 264368:
{
returnValue = F("Rezatgrund");
break;
}
case 264369:
{
returnValue = F("Rezatstr.");
break;
}
case 264370:
{
returnValue = F("Rezatweg");
break;
}
case 264371:
{
returnValue = F("Rezelsdorfer Str.");
break;
}
case 264372:
{
returnValue = F("Rezenbergweg");
break;
}
case 264373:
{
returnValue = F("Rezenweg");
break;
}
case 264374:
{
returnValue = F("Rezepterstr.");
break;
}
case 264375:
{
returnValue = F("Rezerstr.");
break;
}
case 264376:
{
returnValue = F("Reßweg");
break;
}
case 264377:
{
returnValue = F("Rhabanusstr.");
break;
}
case 264378:
{
returnValue = F("Rhabarberweg");
break;
}
case 264379:
{
returnValue = F("Rhadener Weg");
break;
}
case 264380:
{
returnValue = F("Rhadenweg");
break;
}
case 264381:
{
returnValue = F("Rhader Sand");
break;
}
case 264382:
{
returnValue = F("Rhader Str.");
break;
}
case 264383:
{
returnValue = F("Rhader Weg");
break;
}
case 264384:
{
returnValue = F("Rhaland");
break;
}
case 264385:
{
returnValue = F("Rhalandstr.");
break;
}
case 264386:
{
returnValue = F("Rhaner Str.");
break;
}
case 264387:
{
returnValue = F("Rhaner Zell");
break;
}
case 264388:
{
returnValue = F("Rhanwaltinger Str.");
break;
}
case 264389:
{
returnValue = F("Rhanwaltinger Weg");
break;
}
case 264390:
{
returnValue = F("Rhauder Landstr.");
break;
}
case 264391:
{
returnValue = F("Rhauder Mühlenweg");
break;
}
case 264392:
{
returnValue = F("Rhauder Str.");
break;
}
case 264393:
{
returnValue = F("Rhauder Weg");
break;
}
case 264394:
{
returnValue = F("Rhauderwieke");
break;
}
case 264395:
{
returnValue = F("Rhaunener Str.");
break;
}
case 264396:
{
returnValue = F("Rheda-Wiedenbrücker-Str.");
break;
}
case 264397:
{
returnValue = F("Rhedaer Str.");
break;
}
case 264398:
{
returnValue = F("Rhedebrügger Str.");
break;
}
case 264399:
{
returnValue = F("Rhedener Str.");
break;
}
case 264400:
{
returnValue = F("Rhedenstr.");
break;
}
case 264401:
{
returnValue = F("Rhedenweg");
break;
}
case 264402:
{
returnValue = F("Rheder Str.");
break;
}
case 264403:
{
returnValue = F("Rhederstr.");
break;
}
case 264404:
{
returnValue = F("Rhederweg");
break;
}
case 264405:
{
returnValue = F("Rhedichen");
break;
}
case 264406:
{
returnValue = F("Rhedstr.");
break;
}
case 264407:
{
returnValue = F("Rhedung");
break;
}
case 264408:
{
returnValue = F("Rhegiusstr.");
break;
}
case 264409:
{
returnValue = F("Rheider Weg");
break;
}
case 264410:
{
returnValue = F("Rheiderlandstr.");
break;
}
case 264411:
{
returnValue = F("Rheiderlandweg");
break;
}
case 264412:
{
returnValue = F("Rheidermeer");
break;
}
case 264413:
{
returnValue = F("Rheidter Str.");
break;
}
case 264414:
{
returnValue = F("Rheidter Weg");
break;
}
case 264415:
{
returnValue = F("Rheilweg");
break;
}
case 264416:
{
returnValue = F("Rhein-Dinas-Str.");
break;
}
case 264417:
{
returnValue = F("Rhein-Haardtbahn-Str.");
break;
}
case 264418:
{
returnValue = F("Rhein-Maas-Str.");
break;
}
case 264419:
{
returnValue = F("Rhein-Main-Donau-Damm");
break;
}
case 264420:
{
returnValue = F("Rhein-Mosel-Str.");
break;
}
case 264421:
{
returnValue = F("Rhein-Ruhr-Str.");
break;
}
case 264422:
{
returnValue = F("Rhein-Rureifel alt");
break;
}
case 264423:
{
returnValue = F("Rhein-Taunus-Str.");
break;
}
case 264424:
{
returnValue = F("Rhein-Wied-Eck");
break;
}
case 264425:
{
returnValue = F("Rhein-Wied-Stadion");
break;
}
case 264426:
{
returnValue = F("Rhein-Wied-Str.");
break;
}
case 264427:
{
returnValue = F("Rheinackerstr.");
break;
}
case 264428:
{
returnValue = F("Rheinallee");
break;
}
case 264429:
{
returnValue = F("Rheinanlage");
break;
}
case 264430:
{
returnValue = F("Rheinanlagen");
break;
}
case 264431:
{
returnValue = F("Rheinanlagen Erweiterung");
break;
}
case 264432:
{
returnValue = F("Rheinau");
break;
}
case 264433:
{
returnValue = F("Rheinaublickweg");
break;
}
case 264434:
{
returnValue = F("Rheinaue");
break;
}
case 264435:
{
returnValue = F("Rheinauen-Naturbeobachtungspfade");
break;
}
case 264436:
{
returnValue = F("Rheinauenhof");
break;
}
case 264437:
{
returnValue = F("Rheinauenstr.");
break;
}
case 264438:
{
returnValue = F("Rheinauenweg");
break;
}
case 264439:
{
returnValue = F("Rheinauer Kirchweg");
break;
}
case 264440:
{
returnValue = F("Rheinauer Ring");
break;
}
case 264441:
{
returnValue = F("Rheinauer Str.");
break;
}
case 264442:
{
returnValue = F("Rheinauestr.");
break;
}
case 264443:
{
returnValue = F("Rheinaueweg");
break;
}
case 264444:
{
returnValue = F("Rheinauf");
break;
}
case 264445:
{
returnValue = F("Rheinaustr.");
break;
}
case 264446:
{
returnValue = F("Rheinbabenallee");
break;
}
case 264447:
{
returnValue = F("Rheinbabenstr.");
break;
}
case 264448:
{
returnValue = F("Rheinbach");
break;
}
case 264449:
{
returnValue = F("Rheinbacher Höfe");
break;
}
case 264450:
{
returnValue = F("Rheinbacher Landstr.");
break;
}
case 264451:
{
returnValue = F("Rheinbacher Str.");
break;
}
case 264452:
{
returnValue = F("Rheinbacher Weg");
break;
}
case 264453:
{
returnValue = F("Rheinbachstr.");
break;
}
case 264454:
{
returnValue = F("Rheinbadstr.");
break;
}
case 264455:
{
returnValue = F("Rheinbadweg");
break;
}
case 264456:
{
returnValue = F("Rheinbahnstr.");
break;
}
case 264457:
{
returnValue = F("Rheinbeinweg");
break;
}
case 264458:
{
returnValue = F("Rheinberger Ring");
break;
}
case 264459:
{
returnValue = F("Rheinberger Str.");
break;
}
case 264460:
{
returnValue = F("Rheinberger Weg");
break;
}
case 264461:
{
returnValue = F("Rheinbergerstr.");
break;
}
case 264462:
{
returnValue = F("Rheinbergpfad");
break;
}
case 264463:
{
returnValue = F("Rheinbergstr.");
break;
}
case 264464:
{
returnValue = F("Rheinbleichardweg");
break;
}
case 264465:
{
returnValue = F("Rheinblick");
break;
}
case 264466:
{
returnValue = F("Rheinblick-Siedlung");
break;
}
case 264467:
{
returnValue = F("Rheinblickhof");
break;
}
case 264468:
{
returnValue = F("Rheinblickstr.");
break;
}
case 264469:
{
returnValue = F("Rheinblickweg");
break;
}
case 264470:
{
returnValue = F("Rheinbraunweg");
break;
}
case 264471:
{
returnValue = F("Rheinbrückenauffahrt");
break;
}
case 264472:
{
returnValue = F("Rheinbrückenstr.");
break;
}
case 264473:
{
returnValue = F("Rheinbrückstr.");
break;
}
case 264474:
{
returnValue = F("Rheinbächleweg");
break;
}
case 264475:
{
returnValue = F("Rheinböllener Str.");
break;
}
case 264476:
{
returnValue = F("Rheindahlener Str.");
break;
}
case 264477:
{
returnValue = F("Rheindamm");
break;
}
case 264478:
{
returnValue = F("Rheindammstr.");
break;
}
case 264479:
{
returnValue = F("Rheindeichstr.");
break;
}
case 264480:
{
returnValue = F("Rheindorfer Acker");
break;
}
case 264481:
{
returnValue = F("Rheindorfer Burg");
break;
}
case 264482:
{
returnValue = F("Rheindorfer Str.");
break;
}
case 264483:
{
returnValue = F("Rheindorfer-Burg-Weg");
break;
}
case 264484:
{
returnValue = F("Rheindorfweg");
break;
}
case 264485:
{
returnValue = F("Rheindörferstr.");
break;
}
case 264486:
{
returnValue = F("Rheindürkheimer Str.");
break;
}
case 264487:
{
returnValue = F("Rheinecke");
break;
}
case 264488:
{
returnValue = F("Rheinecker Str.");
break;
}
case 264489:
{
returnValue = F("Rheineckstr.");
break;
}
case 264490:
{
returnValue = F("Rheinelbe-Park");
break;
}
case 264491:
{
returnValue = F("Rheinelbestr.");
break;
}
case 264492:
{
returnValue = F("Rheinener Str.");
break;
}
case 264493:
{
returnValue = F("Rheinener Weg");
break;
}
case 264494:
{
returnValue = F("Rheiner Hof");
break;
}
case 264495:
{
returnValue = F("Rheiner Landstr.");
break;
}
case 264496:
{
returnValue = F("Rheiner Landweg");
break;
}
case 264497:
{
returnValue = F("Rheiner Str.");
break;
}
case 264498:
{
returnValue = F("Rheiner-Landstr.-001-098");
break;
}
case 264499:
{
returnValue = F("Rheinermark");
break;
}
case 264500:
{
returnValue = F("Rheinertstr.");
break;
}
case 264501:
{
returnValue = F("Rheinfallstr.");
break;
}
case 264502:
{
returnValue = F("Rheinfeld");
break;
}
case 264503:
{
returnValue = F("Rheinfeldener Allee");
break;
}
case 264504:
{
returnValue = F("Rheinfeldener Str.");
break;
}
case 264505:
{
returnValue = F("Rheinfelder Str.");
break;
}
case 264506:
{
returnValue = F("Rheinfeldshöfer Str.");
break;
}
case 264507:
{
returnValue = F("Rheinfeldstr.");
break;
}
case 264508:
{
returnValue = F("Rheinfeldsweg");
break;
}
case 264509:
{
returnValue = F("Rheinfeldweg");
break;
}
case 264510:
{
returnValue = F("Rheinfelser Str.");
break;
}
case 264511:
{
returnValue = F("Rheinfelsstr.");
break;
}
case 264512:
{
returnValue = F("Rheinfrankenstr.");
break;
}
case 264513:
{
returnValue = F("Rheinfähre");
break;
}
case 264514:
{
returnValue = F("Rheinfährstr.");
break;
}
case 264515:
{
returnValue = F("Rheingasse");
break;
}
case 264516:
{
returnValue = F("Rheingaublick");
break;
}
case 264517:
{
returnValue = F("Rheingauer Pfad");
break;
}
case 264518:
{
returnValue = F("Rheingauer Str.");
break;
}
case 264519:
{
returnValue = F("Rheingauer Weg");
break;
}
case 264520:
{
returnValue = F("Rheingauerstr.");
break;
}
case 264521:
{
returnValue = F("Rheingaustr.");
break;
}
case 264522:
{
returnValue = F("Rheingauwall");
break;
}
case 264523:
{
returnValue = F("Rheingauweg");
break;
}
case 264524:
{
returnValue = F("Rheingoldallee");
break;
}
case 264525:
{
returnValue = F("Rheingoldstr.");
break;
}
case 264526:
{
returnValue = F("Rheingoldweg");
break;
}
case 264527:
{
returnValue = F("Rheingraben");
break;
}
case 264528:
{
returnValue = F("Rheingraf-von-Salm-Str.");
break;
}
case 264529:
{
returnValue = F("Rheingrafenhof");
break;
}
case 264530:
{
returnValue = F("Rheingrafenstr.");
break;
}
case 264531:
{
returnValue = F("Rheingrüttäcker");
break;
}
case 264532:
{
returnValue = F("Rheingutstr.");
break;
}
case 264533:
{
returnValue = F("Rheingärten");
break;
}
case 264534:
{
returnValue = F("Rheingärtenstr.");
break;
}
case 264535:
{
returnValue = F("Rheingönheimer Str.");
break;
}
case 264536:
{
returnValue = F("Rheingönheimer Weg");
break;
}
case 264537:
{
returnValue = F("Rheinhafen");
break;
}
case 264538:
{
returnValue = F("Rheinhafenstr.");
break;
}
case 264539:
{
returnValue = F("Rheinhalde");
break;
}
case 264540:
{
returnValue = F("Rheinhardweg");
break;
}
case 264541:
{
returnValue = F("Rheinhauptdeich");
break;
}
case 264542:
{
returnValue = F("Rheinhausener Str.");
break;
}
case 264543:
{
returnValue = F("Rheinhausenstr.");
break;
}
case 264544:
{
returnValue = F("Rheinhauser Str.");
break;
}
case 264545:
{
returnValue = F("Rheinheimer Str.");
break;
}
case 264546:
{
returnValue = F("Rheinhelde Weg");
break;
}
case 264547:
{
returnValue = F("Rheinheldestr.");
break;
}
case 264548:
{
returnValue = F("Rheinhell");
break;
}
case 264549:
{
returnValue = F("Rheinhessen Weg");
break;
}
case 264550:
{
returnValue = F("Rheinhessenblick");
break;
}
case 264551:
{
returnValue = F("Rheinhessenring");
break;
}
case 264552:
{
returnValue = F("Rheinhessenstr.");
break;
}
case 264553:
{
returnValue = F("Rheinhorststr.");
break;
}
case 264554:
{
returnValue = F("Rheinhäuser Str.");
break;
}
case 264555:
{
returnValue = F("Rheinhäuser Weg");
break;
}
case 264556:
{
returnValue = F("Rheinhäuser Weide");
break;
}
case 264557:
{
returnValue = F("Rheinhöhe");
break;
}
case 264558:
{
returnValue = F("Rheinhöhenblick");
break;
}
case 264559:
{
returnValue = F("Rheinhöhenstr.");
break;
}
case 264560:
{
returnValue = F("Rheinhöhenweg");
break;
}
case 264561:
{
returnValue = F("Rheinhöller");
break;
}
case 264562:
{
returnValue = F("Rheinische Str.");
break;
}
case 264563:
{
returnValue = F("Rheinischer Ring");
break;
}
case 264564:
{
returnValue = F("Rheinkai");
break;
}
case 264565:
{
returnValue = F("Rheinkamper Str.");
break;
}
case 264566:
{
returnValue = F("Rheinlandstr.");
break;
}
case 264567:
{
returnValue = F("Rheinlustweg");
break;
}
case 264568:
{
returnValue = F("Rheinländer Weg");
break;
}
case 264569:
{
returnValue = F("Rheinländerstr.");
break;
}
case 264570:
{
returnValue = F("Rheinmattenbrücke");
break;
}
case 264571:
{
returnValue = F("Rheinmetallstr.");
break;
}
case 264572:
{
returnValue = F("Rheinpark");
break;
}
case 264573:
{
returnValue = F("Rheinpark EUROGA 2002 plus");
break;
}
case 264574:
{
returnValue = F("Rheinparkstr.");
break;
}
case 264575:
{
returnValue = F("Rheinparkuferweg");
break;
}
case 264576:
{
returnValue = F("Rheinpfad");
break;
}
case 264577:
{
returnValue = F("Rheinpfalzstr.");
break;
}
case 264578:
{
returnValue = F("Rheinpfälzerweg");
break;
}
case 264579:
{
returnValue = F("Rheinpreußenstr.");
break;
}
case 264580:
{
returnValue = F("Rheinpromenade");
break;
}
case 264581:
{
returnValue = F("Rheinpromenade Lülsdorf");
break;
}
case 264582:
{
returnValue = F("Rheinring");
break;
}
case 264583:
{
returnValue = F("Rheinrugenstr.");
break;
}
case 264584:
{
returnValue = F("Rheinsalm");
break;
}
case 264585:
{
returnValue = F("Rheinsberg");
break;
}
case 264586:
{
returnValue = F("Rheinsberger Birkenweg");
break;
}
case 264587:
{
returnValue = F("Rheinsberger Chaussee");
break;
}
case 264588:
{
returnValue = F("Rheinsberger Platz");
break;
}
case 264589:
{
returnValue = F("Rheinsberger Siedlung");
break;
}
case 264590:
{
returnValue = F("Rheinsberger Str.");
break;
}
case 264591:
{
returnValue = F("Rheinsberger Str. Farm");
break;
}
case 264592:
{
returnValue = F("Rheinsberger Weg");
break;
}
case 264593:
{
returnValue = F("Rheinsbergring");
break;
}
case 264594:
{
returnValue = F("Rheinsbergweg");
break;
}
case 264595:
{
returnValue = F("Rheinschanze");
break;
}
case 264596:
{
returnValue = F("Rheinseite");
break;
}
case 264597:
{
returnValue = F("Rheinseitenstr.");
break;
}
case 264598:
{
returnValue = F("Rheinsenderkreisel");
break;
}
case 264599:
{
returnValue = F("Rheinshagen");
break;
}
case 264600:
{
returnValue = F("Rheinshagener Weg");
break;
}
case 264601:
{
returnValue = F("Rheinsheimer Str.");
break;
}
case 264602:
{
returnValue = F("Rheinsheimer Weg");
break;
}
case 264603:
{
returnValue = F("Rheinstahlring");
break;
}
case 264604:
{
returnValue = F("Rheinstahlstr.");
break;
}
case 264605:
{
returnValue = F("Rheinsteig");
break;
}
case 264606:
{
returnValue = F("Rheinstiege");
break;
}
case 264607:
{
returnValue = F("Rheinstr.");
break;
}
case 264608:
{
returnValue = F("Rheinstr. Ost");
break;
}
case 264609:
{
returnValue = F("Rheinstr. West");
break;
}
case 264610:
{
returnValue = F("Rheinstrandallee");
break;
}
case 264611:
{
returnValue = F("Rheinstrandbad");
break;
}
case 264612:
{
returnValue = F("Rheinsträßchen");
break;
}
case 264613:
{
returnValue = F("Rheinsträßle");
break;
}
case 264614:
{
returnValue = F("Rheintal");
break;
}
case 264615:
{
returnValue = F("Rheintalbahnstr.");
break;
}
case 264616:
{
returnValue = F("Rheintalblick");
break;
}
case 264617:
{
returnValue = F("Rheintalstr.");
break;
}
case 264618:
{
returnValue = F("Rheintalweg");
break;
}
case 264619:
{
returnValue = F("Rheintorplatz");
break;
}
case 264620:
{
returnValue = F("Rheintorstr.");
break;
}
case 264621:
{
returnValue = F("Rheintöchterstr.");
break;
}
case 264622:
{
returnValue = F("Rheinufer");
break;
}
case 264623:
{
returnValue = F("Rheinuferpark Gailingen");
break;
}
case 264624:
{
returnValue = F("Rheinuferstr.");
break;
}
case 264625:
{
returnValue = F("Rheinuferweg");
break;
}
case 264626:
{
returnValue = F("Rheinvillenstr.");
break;
}
case 264627:
{
returnValue = F("Rheinvogtstr.");
break;
}
case 264628:
{
returnValue = F("Rheinvorlandweg");
break;
}
case 264629:
{
returnValue = F("Rheinwald-Schneise");
break;
}
case 264630:
{
returnValue = F("Rheinwaldstr.");
break;
}
case 264631:
{
returnValue = F("Rheinwaldweg");
break;
}
case 264632:
{
returnValue = F("Rheinwallgraben");
break;
}
case 264633:
{
returnValue = F("Rheinweg");
break;
}
case 264634:
{
returnValue = F("Rheinweide");
break;
}
case 264635:
{
returnValue = F("Rheinweidweg");
break;
}
case 264636:
{
returnValue = F("Rheinwerft");
break;
}
case 264637:
{
returnValue = F("Rheinwiese");
break;
}
case 264638:
{
returnValue = F("Rheinwiesen");
break;
}
case 264639:
{
returnValue = F("Rheinwiesen Neuss");
break;
}
case 264640:
{
returnValue = F("Rheinwiesenstr.");
break;
}
case 264641:
{
returnValue = F("Rheinzaberner Str.");
break;
}
case 264642:
{
returnValue = F("Rheinzollstr.");
break;
}
case 264643:
{
returnValue = F("Rhenaer Weg");
break;
}
case 264644:
{
returnValue = F("Rhenaniastr.");
break;
}
case 264645:
{
returnValue = F("Rhenaniaweg");
break;
}
case 264646:
{
returnValue = F("Rhenanusplatz");
break;
}
case 264647:
{
returnValue = F("Rhenastr.");
break;
}
case 264648:
{
returnValue = F("Rhenegger Str.");
break;
}
case 264649:
{
returnValue = F("Rhener Alpen");
break;
}
case 264650:
{
returnValue = F("Rhener Kehre");
break;
}
case 264651:
{
returnValue = F("Rhener Str.");
break;
}
case 264652:
{
returnValue = F("Rhenetal");
break;
}
case 264653:
{
returnValue = F("Rhenobotstr.");
break;
}
case 264654:
{
returnValue = F("Rhenser Str.");
break;
}
case 264655:
{
returnValue = F("Rhenus-Platz");
break;
}
case 264656:
{
returnValue = F("Rhenusallee");
break;
}
case 264657:
{
returnValue = F("Rhenusstr.");
break;
}
case 264658:
{
returnValue = F("Rhesusaffen");
break;
}
case 264659:
{
returnValue = F("Rheurdter Str.");
break;
}
case 264660:
{
returnValue = F("Rheuter Weg");
break;
}
case 264661:
{
returnValue = F("Rheyder Sand");
break;
}
case 264662:
{
returnValue = F("Rheydter Str.");
break;
}
case 264663:
{
returnValue = F("Rhibachweg");
break;
}
case 264664:
{
returnValue = F("Rhienbachstr.");
break;
}
case 264665:
{
returnValue = F("Rhiene");
break;
}
case 264666:
{
returnValue = F("Rhienende");
break;
}
case 264667:
{
returnValue = F("Rhienfeld");
break;
}
case 264668:
{
returnValue = F("Rhienscher Berg");
break;
}
case 264669:
{
returnValue = F("Rhienstr.");
break;
}
case 264670:
{
returnValue = F("Rhienweg");
break;
}
case 264671:
{
returnValue = F("Rhinaer Str.");
break;
}
case 264672:
{
returnValue = F("Rhinastr.");
break;
}
case 264673:
{
returnValue = F("Rhinelanderweg");
break;
}
case 264674:
{
returnValue = F("Rhingarten");
break;
}
case 264675:
{
returnValue = F("Rhinhöher Weg");
break;
}
case 264676:
{
returnValue = F("Rhinhörn");
break;
}
case 264677:
{
returnValue = F("Rhinkatenweg");
break;
}
case 264678:
{
returnValue = F("Rhinower Landstr.");
break;
}
case 264679:
{
returnValue = F("Rhinower Str.");
break;
}
case 264680:
{
returnValue = F("Rhinstr.");
break;
}
case 264681:
{
returnValue = F("Rhintal");
break;
}
case 264682:
{
returnValue = F("Rhinweg");
break;
}
case 264683:
{
returnValue = F("Rhodaer Chaussee");
break;
}
case 264684:
{
returnValue = F("Rhodaer Str.");
break;
}
case 264685:
{
returnValue = F("Rhode");
break;
}
case 264686:
{
returnValue = F("Rhode Island Avenue");
break;
}
case 264687:
{
returnValue = F("Rhodener Str.");
break;
}
case 264688:
{
returnValue = F("Rhodepark");
break;
}
case 264689:
{
returnValue = F("Rhoder Hauptstr.");
break;
}
case 264690:
{
returnValue = F("Rhoder Str.");
break;
}
case 264691:
{
returnValue = F("Rhoder Trift");
break;
}
case 264692:
{
returnValue = F("Rhoder Weg");
break;
}
case 264693:
{
returnValue = F("Rhodiaweg");
break;
}
case 264694:
{
returnValue = F("Rhodiusstr.");
break;
}
case 264695:
{
returnValue = F("Rhodlerstr.");
break;
}
case 264696:
{
returnValue = F("Rhododendrengarten");
break;
}
case 264697:
{
returnValue = F("Rhododendron");
break;
}
case 264698:
{
returnValue = F("Rhododendron Allee");
break;
}
case 264699:
{
returnValue = F("Rhododendron Garten");
break;
}
case 264700:
{
returnValue = F("Rhododendron- Rosen- und Besinnungspark");
break;
}
case 264701:
{
returnValue = F("Rhododendron-Allee");
break;
}
case 264702:
{
returnValue = F("Rhododendron-Park");
break;
}
case 264703:
{
returnValue = F("Rhododendron-Tal");
break;
}
case 264704:
{
returnValue = F("Rhododendronpark");
break;
}
case 264705:
{
returnValue = F("Rhododendronpark Brachtesender Busch");
break;
}
case 264706:
{
returnValue = F("Rhododendronpark Gut Lindenfels");
break;
}
case 264707:
{
returnValue = F("Rhododendronpark Jansen");
break;
}
case 264708:
{
returnValue = F("Rhododendronpark Triangel");
break;
}
case 264709:
{
returnValue = F("Rhododendronsenke");
break;
}
case 264710:
{
returnValue = F("Rhododendronstr.");
break;
}
case 264711:
{
returnValue = F("Rhododendronweg");
break;
}
case 264712:
{
returnValue = F("Rhodokamp");
break;
}
case 264713:
{
returnValue = F("Rhodomannstr.");
break;
}
case 264714:
{
returnValue = F("Rhodopark Hobbie");
break;
}
case 264715:
{
returnValue = F("Rhodosstr.");
break;
}
case 264716:
{
returnValue = F("Rhodter Str.");
break;
}
case 264717:
{
returnValue = F("Rhoenstr.");
break;
}
case 264718:
{
returnValue = F("Rhonardstr.");
break;
}
case 264719:
{
returnValue = F("Rhonbergstr.");
break;
}
case 264720:
{
returnValue = F("Rhonetalweg");
break;
}
case 264721:
{
returnValue = F("Rhoneweg");
break;
}
case 264722:
{
returnValue = F("Rhumbachstr.");
break;
}
case 264723:
{
returnValue = F("Rhumestr.");
break;
}
case 264724:
{
returnValue = F("Rhumeweg");
break;
}
case 264725:
{
returnValue = F("Rhynerberg");
break;
}
case 264726:
{
returnValue = F("Rhynerner Str.");
break;
}
case 264727:
{
returnValue = F("Rhynsweg");
break;
}
case 264728:
{
returnValue = F("Rhäden-Rundweg");
break;
}
case 264729:
{
returnValue = F("Rhädenweg");
break;
}
case 264730:
{
returnValue = F("Rhödaer Str.");
break;
}
case 264731:
{
returnValue = F("Rhödaer Weg");
break;
}
case 264732:
{
returnValue = F("Rhön-Rundweg 1 \"Rehbergwanderung");
break;
}
case 264733:
{
returnValue = F("Rhönbergstr.");
break;
}
case 264734:
{
returnValue = F("Rhönblick");
break;
}
case 264735:
{
returnValue = F("Rhönblickstr.");
break;
}
case 264736:
{
returnValue = F("Rhönblickweg");
break;
}
case 264737:
{
returnValue = F("Rhönbogen");
break;
}
case 264738:
{
returnValue = F("Rhöndorfer Str.");
break;
}
case 264739:
{
returnValue = F("Rhöngasse");
break;
}
case 264740:
{
returnValue = F("Rhönhallenstr.");
break;
}
case 264741:
{
returnValue = F("Rhönheimweg");
break;
}
case 264742:
{
returnValue = F("Rhönhof");
break;
}
case 264743:
{
returnValue = F("Rhönmalerring");
break;
}
case 264744:
{
returnValue = F("Rhönpforte");
break;
}
case 264745:
{
returnValue = F("Rhönplatz");
break;
}
case 264746:
{
returnValue = F("Rhönring");
break;
}
case 264747:
{
returnValue = F("Rhönringstr.");
break;
}
case 264748:
{
returnValue = F("Rhönstr.");
break;
}
case 264749:
{
returnValue = F("Rhönwaldstr.");
break;
}
case 264750:
{
returnValue = F("Rhönweg");
break;
}
case 264751:
{
returnValue = F("Rhönwind");
break;
}
case 264752:
{
returnValue = F("Rhündastr.");
break;
}
case 264753:
{
returnValue = F("Ria-Burkei-Str.");
break;
}
case 264754:
{
returnValue = F("Ria-Maternus-Platz");
break;
}
case 264755:
{
returnValue = F("Ria-Tiemann-Str.");
break;
}
case 264756:
{
returnValue = F("Rialtobrücke");
break;
}
case 264757:
{
returnValue = F("Riantecweg");
break;
}
case 264758:
{
returnValue = F("Ribbachweg");
break;
}
case 264759:
{
returnValue = F("Ribbecker Dorfstr.");
break;
}
case 264760:
{
returnValue = F("Ribbecker Str.");
break;
}
case 264761:
{
returnValue = F("Ribbecker Weg");
break;
}
case 264762:
{
returnValue = F("Ribbeckshorst");
break;
}
case 264763:
{
returnValue = F("Ribbeckstr.");
break;
}
case 264764:
{
returnValue = F("Ribbertstr.");
break;
}
case 264765:
{
returnValue = F("Ribbesbütteler Weg");
break;
}
case 264766:
{
returnValue = F("Ribbeweg");
break;
}
case 264767:
{
returnValue = F("Ribemontstr.");
break;
}
case 264768:
{
returnValue = F("Ribenz-Riegel-Weg");
break;
}
case 264769:
{
returnValue = F("Ribenzing");
break;
}
case 264770:
{
returnValue = F("Ribernusring");
break;
}
case 264771:
{
returnValue = F("Ribeweg");
break;
}
case 264772:
{
returnValue = F("Ribnitzer Landweg");
break;
}
case 264773:
{
returnValue = F("Ribnitzer Str.");
break;
}
case 264774:
{
returnValue = F("Ribolinshaldenweg");
break;
}
case 264775:
{
returnValue = F("Ribérac-Platz");
break;
}
case 264776:
{
returnValue = F("Ricarda-Huch Str.");
break;
}
case 264777:
{
returnValue = F("Ricarda-Huch-Bogen");
break;
}
case 264778:
{
returnValue = F("Ricarda-Huch-Hof");
break;
}
case 264779:
{
returnValue = F("Ricarda-Huch-Ring");
break;
}
case 264780:
{
returnValue = F("Ricarda-Huch-Str.");
break;
}
case 264781:
{
returnValue = F("Ricarda-Huch-Weg");
break;
}
case 264782:
{
returnValue = F("Ricardastr.");
break;
}
case 264783:
{
returnValue = F("Riccabonastr.");
break;
}
case 264784:
{
returnValue = F("Richard-Adam-Str.");
break;
}
case 264785:
{
returnValue = F("Richard-Albert-Str.");
break;
}
case 264786:
{
returnValue = F("Richard-Allmendinger-Str.");
break;
}
case 264787:
{
returnValue = F("Richard-Altschul-Str.");
break;
}
case 264788:
{
returnValue = F("Richard-Altschul-Weg");
break;
}
case 264789:
{
returnValue = F("Richard-Arnold-Str.");
break;
}
case 264790:
{
returnValue = F("Richard-Arntz-Str.");
break;
}
case 264791:
{
returnValue = F("Richard-Aßmann-Str.");
break;
}
case 264792:
{
returnValue = F("Richard-Bahrdt-Str.");
break;
}
case 264793:
{
returnValue = F("Richard-Bampi-Str.");
break;
}
case 264794:
{
returnValue = F("Richard-Bartels-Str.");
break;
}
case 264795:
{
returnValue = F("Richard-Bartholdt-Str.");
break;
}
case 264796:
{
returnValue = F("Richard-Bauer-Str.");
break;
}
case 264797:
{
returnValue = F("Richard-Becker-Str.");
break;
}
case 264798:
{
returnValue = F("Richard-Bergner-Str.");
break;
}
case 264799:
{
returnValue = F("Richard-Bertram-Str.");
break;
}
case 264800:
{
returnValue = F("Richard-Beuss-Weg");
break;
}
case 264801:
{
returnValue = F("Richard-Biener-Str.");
break;
}
case 264802:
{
returnValue = F("Richard-Billinger-Str.");
break;
}
case 264803:
{
returnValue = F("Richard-Billinger-Weg");
break;
}
case 264804:
{
returnValue = F("Richard-Birckman-Weg");
break;
}
case 264805:
{
returnValue = F("Richard-Blume-Str.");
break;
}
case 264806:
{
returnValue = F("Richard-Blumenfeld-Str.");
break;
}
case 264807:
{
returnValue = F("Richard-Bock-Str.");
break;
}
case 264808:
{
returnValue = F("Richard-Bodendorf-Str.");
break;
}
case 264809:
{
returnValue = F("Richard-Bogue-Str.");
break;
}
case 264810:
{
returnValue = F("Richard-Brandt-Str.");
break;
}
case 264811:
{
returnValue = F("Richard-Brauer-Str.");
break;
}
case 264812:
{
returnValue = F("Richard-Breslau-Str.");
break;
}
case 264813:
{
returnValue = F("Richard-Burkhardt-Str.");
break;
}
case 264814:
{
returnValue = F("Richard-Burmeister-Str.");
break;
}
case 264815:
{
returnValue = F("Richard-Bäuchle-Str.");
break;
}
case 264816:
{
returnValue = F("Richard-Bäuerle-Str.");
break;
}
case 264817:
{
returnValue = F("Richard-Böhm-Str.");
break;
}
case 264818:
{
returnValue = F("Richard-Cappelle-Weg");
break;
}
case 264819:
{
returnValue = F("Richard-Courant-Weg");
break;
}
case 264820:
{
returnValue = F("Richard-Dehmel-Str.");
break;
}
case 264821:
{
returnValue = F("Richard-Dembny-Str.");
break;
}
case 264822:
{
returnValue = F("Richard-Denner-Str.");
break;
}
case 264823:
{
returnValue = F("Richard-Dilger-Str.");
break;
}
case 264824:
{
returnValue = F("Richard-Dippold-Str.");
break;
}
case 264825:
{
returnValue = F("Richard-Doerfel-Str.");
break;
}
case 264826:
{
returnValue = F("Richard-Dohmann-Str.");
break;
}
case 264827:
{
returnValue = F("Richard-Dopheide-Weg");
break;
}
case 264828:
{
returnValue = F("Richard-Dorer-Str.");
break;
}
case 264829:
{
returnValue = F("Richard-Drach-Str.");
break;
}
case 264830:
{
returnValue = F("Richard-Drews-Weg");
break;
}
case 264831:
{
returnValue = F("Richard-Duschek-Str.");
break;
}
case 264832:
{
returnValue = F("Richard-Döcker-Str.");
break;
}
case 264833:
{
returnValue = F("Richard-Eberle-Str.");
break;
}
case 264834:
{
returnValue = F("Richard-Eberlein-Str.");
break;
}
case 264835:
{
returnValue = F("Richard-Eiling-Str.");
break;
}
case 264836:
{
returnValue = F("Richard-Engelmann-Str.");
break;
}
case 264837:
{
returnValue = F("Richard-Frank-Str.");
break;
}
case 264838:
{
returnValue = F("Richard-Friedrich-Park");
break;
}
case 264839:
{
returnValue = F("Richard-Friedrich-Str.");
break;
}
case 264840:
{
returnValue = F("Richard-Fuchs-Str.");
break;
}
case 264841:
{
returnValue = F("Richard-Gerhardi-Str.");
break;
}
case 264842:
{
returnValue = F("Richard-Gerlach-Str.");
break;
}
case 264843:
{
returnValue = F("Richard-Gerlt-Str.");
break;
}
case 264844:
{
returnValue = F("Richard-Goedert-Str.");
break;
}
case 264845:
{
returnValue = F("Richard-Goldberg-Str.");
break;
}
case 264846:
{
returnValue = F("Richard-Graef-Weg");
break;
}
case 264847:
{
returnValue = F("Richard-Graßmann-Str.");
break;
}
case 264848:
{
returnValue = F("Richard-Großmann-Str.");
break;
}
case 264849:
{
returnValue = F("Richard-Haferung-Str.");
break;
}
case 264850:
{
returnValue = F("Richard-Haizmann-Weg");
break;
}
case 264851:
{
returnValue = F("Richard-Hamann-Weg");
break;
}
case 264852:
{
returnValue = F("Richard-Haniel-Str.");
break;
}
case 264853:
{
returnValue = F("Richard-Hartmann-Platz");
break;
}
case 264854:
{
returnValue = F("Richard-Haupt-Str.");
break;
}
case 264855:
{
returnValue = F("Richard-Haupt-Weg");
break;
}
case 264856:
{
returnValue = F("Richard-Hauser-Platz");
break;
}
case 264857:
{
returnValue = F("Richard-Hegelmann-Str.");
break;
}
case 264858:
{
returnValue = F("Richard-Heinrich-Platz");
break;
}
case 264859:
{
returnValue = F("Richard-Heinzerling-Weg");
break;
}
case 264860:
{
returnValue = F("Richard-Hemberger-Str.");
break;
}
case 264861:
{
returnValue = F("Richard-Hennig-Str.");
break;
}
case 264862:
{
returnValue = F("Richard-Herter-Str.");
break;
}
case 264863:
{
returnValue = F("Richard-Hessel-Str.");
break;
}
case 264864:
{
returnValue = F("Richard-Hettinger-Str.");
break;
}
case 264865:
{
returnValue = F("Richard-Hinneburg-Str.");
break;
}
case 264866:
{
returnValue = F("Richard-Hirschmann-Str.");
break;
}
case 264867:
{
returnValue = F("Richard-Hofmann-Str.");
break;
}
case 264868:
{
returnValue = F("Richard-Hofmann-Weg");
break;
}
case 264869:
{
returnValue = F("Richard-Hohly-Str.");
break;
}
case 264870:
{
returnValue = F("Richard-Holz-Str.");
break;
}
case 264871:
{
returnValue = F("Richard-Hoppe-Weg");
break;
}
case 264872:
{
returnValue = F("Richard-Huber-Str.");
break;
}
case 264873:
{
returnValue = F("Richard-Hölscher-Str.");
break;
}
case 264874:
{
returnValue = F("Richard-Hölscher-Weg");
break;
}
case 264875:
{
returnValue = F("Richard-Hülsmann-Allee");
break;
}
case 264876:
{
returnValue = F("Richard-Hüttig-Platz");
break;
}
case 264877:
{
returnValue = F("Richard-Israel-Str.");
break;
}
case 264878:
{
returnValue = F("Richard-J.-Ruff-Str.");
break;
}
case 264879:
{
returnValue = F("Richard-Jaeckel-Str.");
break;
}
case 264880:
{
returnValue = F("Richard-Jarros-Str.");
break;
}
case 264881:
{
returnValue = F("Richard-Jecht-Str.");
break;
}
case 264882:
{
returnValue = F("Richard-Joseph-Str.");
break;
}
case 264883:
{
returnValue = F("Richard-Jung-Weg");
break;
}
case 264884:
{
returnValue = F("Richard-Jäger-Str.");
break;
}
case 264885:
{
returnValue = F("Richard-Jänsch-Str.");
break;
}
case 264886:
{
returnValue = F("Richard-Kaiser-Str.");
break;
}
case 264887:
{
returnValue = F("Richard-Kalbfuß-Str.");
break;
}
case 264888:
{
returnValue = F("Richard-Kanzler-Str.");
break;
}
case 264889:
{
returnValue = F("Richard-Kirchner-Str.");
break;
}
case 264890:
{
returnValue = F("Richard-Kirn-Str.");
break;
}
case 264891:
{
returnValue = F("Richard-Klinger-Str.");
break;
}
case 264892:
{
returnValue = F("Richard-Knies-Str.");
break;
}
case 264893:
{
returnValue = F("Richard-Knoche-Str.");
break;
}
case 264894:
{
returnValue = F("Richard-Koch-Str.");
break;
}
case 264895:
{
returnValue = F("Richard-Koenigs-Str.");
break;
}
case 264896:
{
returnValue = F("Richard-Kohler-Weg");
break;
}
case 264897:
{
returnValue = F("Richard-Kretschmer-Str.");
break;
}
case 264898:
{
returnValue = F("Richard-Kriegelsteiner-Str.");
break;
}
case 264899:
{
returnValue = F("Richard-Kuckuck-Str.");
break;
}
case 264900:
{
returnValue = F("Richard-Kuenzer-Str.");
break;
}
case 264901:
{
returnValue = F("Richard-Kuhlmann-Str.");
break;
}
case 264902:
{
returnValue = F("Richard-Kuhn-Str.");
break;
}
case 264903:
{
returnValue = F("Richard-Kupsch-Str.");
break;
}
case 264904:
{
returnValue = F("Richard-Köcher-Str.");
break;
}
case 264905:
{
returnValue = F("Richard-Köhn-Str.");
break;
}
case 264906:
{
returnValue = F("Richard-Küch-Str.");
break;
}
case 264907:
{
returnValue = F("Richard-Küppers-Str.");
break;
}
case 264908:
{
returnValue = F("Richard-Labonte-Str.");
break;
}
case 264909:
{
returnValue = F("Richard-Langeheine-Str.");
break;
}
case 264910:
{
returnValue = F("Richard-Lebelt-Weg");
break;
}
case 264911:
{
returnValue = F("Richard-Lehmann-Str.");
break;
}
case 264912:
{
returnValue = F("Richard-Leitsch-Str.");
break;
}
case 264913:
{
returnValue = F("Richard-Leißling-Str.");
break;
}
case 264914:
{
returnValue = F("Richard-Lenel-Weg");
break;
}
case 264915:
{
returnValue = F("Richard-Lenk-Str.");
break;
}
case 264916:
{
returnValue = F("Richard-Lepsius-Siedlung");
break;
}
case 264917:
{
returnValue = F("Richard-Leyhausen-Weg");
break;
}
case 264918:
{
returnValue = F("Richard-Linde-Weg");
break;
}
case 264919:
{
returnValue = F("Richard-Lindenberg-Platz");
break;
}
case 264920:
{
returnValue = F("Richard-Litzel-Weg");
break;
}
case 264921:
{
returnValue = F("Richard-Lucas-Str.");
break;
}
case 264922:
{
returnValue = F("Richard-Lux-Str.");
break;
}
case 264923:
{
returnValue = F("Richard-Löchel-Str.");
break;
}
case 264924:
{
returnValue = F("Richard-Mahn-Str.");
break;
}
case 264925:
{
returnValue = F("Richard-Massinger-Weg");
break;
}
case 264926:
{
returnValue = F("Richard-Matthes-Str.");
break;
}
case 264927:
{
returnValue = F("Richard-Mayer-Str.");
break;
}
case 264928:
{
returnValue = F("Richard-Meinig-Str.");
break;
}
case 264929:
{
returnValue = F("Richard-Menges-Str.");
break;
}
case 264930:
{
returnValue = F("Richard-Miller-Str.");
break;
}
case 264931:
{
returnValue = F("Richard-Moes-Str.");
break;
}
case 264932:
{
returnValue = F("Richard-Musch-Str.");
break;
}
case 264933:
{
returnValue = F("Richard-Muth-Str.");
break;
}
case 264934:
{
returnValue = F("Richard-Möller-Str.");
break;
}
case 264935:
{
returnValue = F("Richard-Müller-Str.");
break;
}
case 264936:
{
returnValue = F("Richard-Neumann-Str.");
break;
}
case 264937:
{
returnValue = F("Richard-Neutra Str.");
break;
}
case 264938:
{
returnValue = F("Richard-Neutra-Weg");
break;
}
case 264939:
{
returnValue = F("Richard-Oberle-Weg");
break;
}
case 264940:
{
returnValue = F("Richard-Oelze-Ring");
break;
}
case 264941:
{
returnValue = F("Richard-Oertel-Str.");
break;
}
case 264942:
{
returnValue = F("Richard-Otto-Str.");
break;
}
case 264943:
{
returnValue = F("Richard-Pick-Str.");
break;
}
case 264944:
{
returnValue = F("Richard-Piel-Str.");
break;
}
case 264945:
{
returnValue = F("Richard-Platz-Str.");
break;
}
case 264946:
{
returnValue = F("Richard-Reitzner-Allee");
break;
}
case 264947:
{
returnValue = F("Richard-Rentsch-Str.");
break;
}
case 264948:
{
returnValue = F("Richard-Reuter-Str.");
break;
}
case 264949:
{
returnValue = F("Richard-Ringel-Str.");
break;
}
case 264950:
{
returnValue = F("Richard-Rohlf-Str.");
break;
}
case 264951:
{
returnValue = F("Richard-Roth-Str.");
break;
}
case 264952:
{
returnValue = F("Richard-Rother-Str.");
break;
}
case 264953:
{
returnValue = F("Richard-Ruthe-Str.");
break;
}
case 264954:
{
returnValue = F("Richard-Sachs-Str.");
break;
}
case 264955:
{
returnValue = F("Richard-Sahla-Str.");
break;
}
case 264956:
{
returnValue = F("Richard-Sauer-Str.");
break;
}
case 264957:
{
returnValue = F("Richard-Scharrer-Str.");
break;
}
case 264958:
{
returnValue = F("Richard-Scherer-Str.");
break;
}
case 264959:
{
returnValue = F("Richard-Schick-Str.");
break;
}
case 264960:
{
returnValue = F("Richard-Schirmann-Weg");
break;
}
case 264961:
{
returnValue = F("Richard-Schirrmann-Str.");
break;
}
case 264962:
{
returnValue = F("Richard-Schirrmann-Weg");
break;
}
case 264963:
{
returnValue = F("Richard-Schleimer-Str.");
break;
}
case 264964:
{
returnValue = F("Richard-Schmidt-Str.");
break;
}
case 264965:
{
returnValue = F("Richard-Schmieder-Weg");
break;
}
case 264966:
{
returnValue = F("Richard-Schneider-Str.");
break;
}
case 264967:
{
returnValue = F("Richard-Schreyer-Str.");
break;
}
case 264968:
{
returnValue = F("Richard-Schäfer-Ring");
break;
}
case 264969:
{
returnValue = F("Richard-Schäfer-Str.");
break;
}
case 264970:
{
returnValue = F("Richard-Schöne-Weg");
break;
}
case 264971:
{
returnValue = F("Richard-Schütze-Str.");
break;
}
case 264972:
{
returnValue = F("Richard-Seefried-Str.");
break;
}
case 264973:
{
returnValue = F("Richard-Seel-Weg");
break;
}
case 264974:
{
returnValue = F("Richard-Seiffert-Str.");
break;
}
case 264975:
{
returnValue = F("Richard-Silber-Str.");
break;
}
case 264976:
{
returnValue = F("Richard-Soland-Ring");
break;
}
case 264977:
{
returnValue = F("Richard-Sondermann-Str.");
break;
}
case 264978:
{
returnValue = F("Richard-Sonnenburg-Ring");
break;
}
case 264979:
{
returnValue = F("Richard-Sonnenburg-Str.");
break;
}
case 264980:
{
returnValue = F("Richard-Sorge-Str.");
break;
}
case 264981:
{
returnValue = F("Richard-Sprick-Weg");
break;
}
case 264982:
{
returnValue = F("Richard-Stabernack-Str.");
break;
}
case 264983:
{
returnValue = F("Richard-Stahn-Str.");
break;
}
case 264984:
{
returnValue = F("Richard-Steiff-Str.");
break;
}
case 264985:
{
returnValue = F("Richard-Stein-Str.");
break;
}
case 264986:
{
returnValue = F("Richard-Steinweg-Str.");
break;
}
case 264987:
{
returnValue = F("Richard-Stocker-Weg");
break;
}
case 264988:
{
returnValue = F("Richard-Strauss-Allee");
break;
}
case 264989:
{
returnValue = F("Richard-Strauss-Ring");
break;
}
case 264990:
{
returnValue = F("Richard-Strauss-Str.");
break;
}
case 264991:
{
returnValue = F("Richard-Strauss-Weg");
break;
}
case 264992:
{
returnValue = F("Richard-Strauß-Str.");
break;
}
case 264993:
{
returnValue = F("Richard-Strauß-Weg");
break;
}
case 264994:
{
returnValue = F("Richard-Strebel-Str.");
break;
}
case 264995:
{
returnValue = F("Richard-Streng-Str.");
break;
}
case 264996:
{
returnValue = F("Richard-Struhl-Str.");
break;
}
case 264997:
{
returnValue = F("Richard-Stumm-Str.");
break;
}
case 264998:
{
returnValue = F("Richard-Stücklen-Str.");
break;
}
case 264999:
{
returnValue = F("Richard-Suhr-Siedlung");
break;
}
case 265000:
{
returnValue = F("Richard-Tackx-Str.");
break;
}
case 265001:
{
returnValue = F("Richard-Tauber-Str.");
break;
}
case 265002:
{
returnValue = F("Richard-Thiemann-Str.");
break;
}
case 265003:
{
returnValue = F("Richard-Thieme-Str.");
break;
}
case 265004:
{
returnValue = F("Richard-Tiensch-Weg");
break;
}
case 265005:
{
returnValue = F("Richard-Trunk-Str.");
break;
}
case 265006:
{
returnValue = F("Richard-Vogel-Platz");
break;
}
case 265007:
{
returnValue = F("Richard-Vogt-Weg");
break;
}
case 265008:
{
returnValue = F("Richard-Vosgerau-Str.");
break;
}
case 265009:
{
returnValue = F("Richard-Voss-Str.");
break;
}
case 265010:
{
returnValue = F("Richard-Wagner Str.");
break;
}
case 265011:
{
returnValue = F("Richard-Wagner-Allee");
break;
}
case 265012:
{
returnValue = F("Richard-Wagner-Anlage");
break;
}
case 265013:
{
returnValue = F("Richard-Wagner-Chaussee");
break;
}
case 265014:
{
returnValue = F("Richard-Wagner-Gasse");
break;
}
case 265015:
{
returnValue = F("Richard-Wagner-Park");
break;
}
case 265016:
{
returnValue = F("Richard-Wagner-Platz");
break;
}
case 265017:
{
returnValue = F("Richard-Wagner-Ring");
break;
}
case 265018:
{
returnValue = F("Richard-Wagner-Str.");
break;
}
case 265019:
{
returnValue = F("Richard-Wagner-Weg");
break;
}
case 265020:
{
returnValue = F("Richard-Weber-Str.");
break;
}
case 265021:
{
returnValue = F("Richard-Wiebel-Gäßchen");
break;
}
case 265022:
{
returnValue = F("Richard-Wimmer-Str.");
break;
}
case 265023:
{
returnValue = F("Richard-Wittich-Str.");
break;
}
case 265024:
{
returnValue = F("Richard-Witzsch-Str.");
break;
}
case 265025:
{
returnValue = F("Richard-Wolf-Str.");
break;
}
case 265026:
{
returnValue = F("Richard-Wolff-Str.");
break;
}
case 265027:
{
returnValue = F("Richard-Wossidlo-Str.");
break;
}
case 265028:
{
returnValue = F("Richard-Wuth-Str.");
break;
}
case 265029:
{
returnValue = F("Richard-Wörner-Str.");
break;
}
case 265030:
{
returnValue = F("Richard-Zanders-Str.");
break;
}
case 265031:
{
returnValue = F("Richard-Ziegler-Weg");
break;
}
case 265032:
{
returnValue = F("Richard-Zimmermann-Str.");
break;
}
case 265033:
{
returnValue = F("Richard-Zimmermann-Weg");
break;
}
case 265034:
{
returnValue = F("Richard-Zsigmondy-Weg");
break;
}
case 265035:
{
returnValue = F("Richard-Zörner-Str.");
break;
}
case 265036:
{
returnValue = F("Richard-tom-Dieck-Str.");
break;
}
case 265037:
{
returnValue = F("Richard-van-de-Loo-Str.");
break;
}
case 265038:
{
returnValue = F("Richard-von-Hagen-Str.");
break;
}
case 265039:
{
returnValue = F("Richard-von-Hagn-Str.");
break;
}
case 265040:
{
returnValue = F("Richard-von-Passavant-Str.");
break;
}
case 265041:
{
returnValue = F("Richard-von-Poschinger-Weg");
break;
}
case 265042:
{
returnValue = F("Richard-von-Weizsäcker-Str.");
break;
}
case 265043:
{
returnValue = F("Richard-von-Weizsäcker-Weg");
break;
}
case 265044:
{
returnValue = F("Richard-von-Weizäcker-Str.");
break;
}
case 265045:
{
returnValue = F("Richardis-von-Stade-Str.");
break;
}
case 265046:
{
returnValue = F("Richardisstr.");
break;
}
case 265047:
{
returnValue = F("Richardisweg");
break;
}
case 265048:
{
returnValue = F("Richardsberg");
break;
}
case 265049:
{
returnValue = F("Richardsdorfer Str.");
break;
}
case 265050:
{
returnValue = F("Richardsfelder Weg");
break;
}
case 265051:
{
returnValue = F("Richardshof");
break;
}
case 265052:
{
returnValue = F("Richardshöhe");
break;
}
case 265053:
{
returnValue = F("Richardstr.");
break;
}
case 265054:
{
returnValue = F("Richardsweg");
break;
}
case 265055:
{
returnValue = F("Richardweg");
break;
}
case 265056:
{
returnValue = F("Richartzstr.");
break;
}
case 265057:
{
returnValue = F("Richbergstr.");
break;
}
case 265058:
{
returnValue = F("Richelbacher Str.");
break;
}
case 265059:
{
returnValue = F("Richelbergstr.");
break;
}
case 265060:
{
returnValue = F("Richelieu Allee");
break;
}
case 265061:
{
returnValue = F("Richelnkamp");
break;
}
case 265062:
{
returnValue = F("Richelpfad");
break;
}
case 265063:
{
returnValue = F("Richelsbachstr.");
break;
}
case 265064:
{
returnValue = F("Richelsberg");
break;
}
case 265065:
{
returnValue = F("Richelsdorfer Hohle");
break;
}
case 265066:
{
returnValue = F("Richelsdorfer Str.");
break;
}
case 265067:
{
returnValue = F("Richelskuhl");
break;
}
case 265068:
{
returnValue = F("Richelstr.");
break;
}
case 265069:
{
returnValue = F("Richelthun");
break;
}
case 265070:
{
returnValue = F("Richelweg");
break;
}
case 265071:
{
returnValue = F("Richenbachstr.");
break;
}
case 265072:
{
returnValue = F("Richenberger Weg");
break;
}
case 265073:
{
returnValue = F("Richener Str.");
break;
}
case 265074:
{
returnValue = F("Richenstr.");
break;
}
case 265075:
{
returnValue = F("Richentalstr.");
break;
}
case 265076:
{
returnValue = F("Richenzastr.");
break;
}
case 265077:
{
returnValue = F("Richer Str.");
break;
}
case 265078:
{
returnValue = F("Richer Weg");
break;
}
case 265079:
{
returnValue = F("Richeribogen");
break;
}
case 265080:
{
returnValue = F("Richertsweg");
break;
}
case 265081:
{
returnValue = F("Richerzhagen");
break;
}
case 265082:
{
returnValue = F("Richerzhagener Str.");
break;
}
case 265083:
{
returnValue = F("Richeyweg");
break;
}
case 265084:
{
returnValue = F("Richezastr.");
break;
}
case 265085:
{
returnValue = F("Richgartstr.");
break;
}
case 265086:
{
returnValue = F("Richildisstr.");
break;
}
case 265087:
{
returnValue = F("Richinesstr.");
break;
}
case 265088:
{
returnValue = F("Richlindestr.");
break;
}
case 265089:
{
returnValue = F("Richmondweg");
break;
}
case 265090:
{
returnValue = F("Richolfstr.");
break;
}
case 265091:
{
returnValue = F("Richolfusstr.");
break;
}
case 265092:
{
returnValue = F("Richostr.");
break;
}
case 265093:
{
returnValue = F("Richprechtstr.");
break;
}
case 265094:
{
returnValue = F("Richrather Str.");
break;
}
case 265095:
{
returnValue = F("Richrather Weg");
break;
}
case 265096:
{
returnValue = F("Richstattstr.");
break;
}
case 265097:
{
returnValue = F("Richsteiner Str.");
break;
}
case 265098:
{
returnValue = F("Richt-Geräumt");
break;
}
case 265099:
{
returnValue = F("Richtberg");
break;
}
case 265100:
{
returnValue = F("Richtbergstr.");
break;
}
case 265101:
{
returnValue = F("Richteberg");
break;
}
case 265102:
{
returnValue = F("Richtenberger Chaussee");
break;
}
case 265103:
{
returnValue = F("Richtenberger Str.");
break;
}
case 265104:
{
returnValue = F("Richtengraben");
break;
}
case 265105:
{
returnValue = F("Richtenweg");
break;
}
case 265106:
{
returnValue = F("Richter Weg");
break;
}
case 265107:
{
returnValue = F("Richter-Bueren-Str.");
break;
}
case 265108:
{
returnValue = F("Richter-Haardt-Brücke");
break;
}
case 265109:
{
returnValue = F("Richter-Ketter-Str.");
break;
}
case 265110:
{
returnValue = F("Richter-Ress-Weg");
break;
}
case 265111:
{
returnValue = F("Richterberg");
break;
}
case 265112:
{
returnValue = F("Richterbergweg");
break;
}
case 265113:
{
returnValue = F("Richtergartenstr.");
break;
}
case 265114:
{
returnValue = F("Richtergasse");
break;
}
case 265115:
{
returnValue = F("Richterhofweg");
break;
}
case 265116:
{
returnValue = F("Richterhäuser");
break;
}
case 265117:
{
returnValue = F("Richtericher Str.");
break;
}
case 265118:
{
returnValue = F("Richteringhove");
break;
}
case 265119:
{
returnValue = F("Richteringskamp");
break;
}
case 265120:
{
returnValue = F("Richterkamp");
break;
}
case 265121:
{
returnValue = F("Richterplatz");
break;
}
case 265122:
{
returnValue = F("Richters Diek");
break;
}
case 265123:
{
returnValue = F("Richters Esch");
break;
}
case 265124:
{
returnValue = F("Richters Gang");
break;
}
case 265125:
{
returnValue = F("Richters Grund");
break;
}
case 265126:
{
returnValue = F("Richters Kamp");
break;
}
case 265127:
{
returnValue = F("Richters Kolk");
break;
}
case 265128:
{
returnValue = F("Richters Köppken");
break;
}
case 265129:
{
returnValue = F("Richters Weg");
break;
}
case 265130:
{
returnValue = F("Richtersdorf");
break;
}
case 265131:
{
returnValue = F("Richtersfeld");
break;
}
case 265132:
{
returnValue = F("Richtersgasse");
break;
}
case 265133:
{
returnValue = F("Richtersgraben");
break;
}
case 265134:
{
returnValue = F("Richtershof");
break;
}
case 265135:
{
returnValue = F("Richtershöhe");
break;
}
case 265136:
{
returnValue = F("Richtershügel");
break;
}
case 265137:
{
returnValue = F("Richterskamp");
break;
}
case 265138:
{
returnValue = F("Richterskellerstr.");
break;
}
case 265139:
{
returnValue = F("Richterstein");
break;
}
case 265140:
{
returnValue = F("Richterstr.");
break;
}
case 265141:
{
returnValue = F("Richterswiler Str.");
break;
}
case 265142:
{
returnValue = F("Richterterrasse");
break;
}
case 265143:
{
returnValue = F("Richtervenn");
break;
}
case 265144:
{
returnValue = F("Richterweg");
break;
}
case 265145:
{
returnValue = F("Richteweg");
break;
}
case 265146:
{
returnValue = F("Richtgasse");
break;
}
case 265147:
{
returnValue = F("Richtgrabenweg");
break;
}
case 265148:
{
returnValue = F("Richthausener Str.");
break;
}
case 265149:
{
returnValue = F("Richtheimer Hauptstr.");
break;
}
case 265150:
{
returnValue = F("Richtheimer Weg");
break;
}
case 265151:
{
returnValue = F("Richthof");
break;
}
case 265152:
{
returnValue = F("Richthofen Circle");
break;
}
case 265153:
{
returnValue = F("Richthofenallee");
break;
}
case 265154:
{
returnValue = F("Richthofenhöhe");
break;
}
case 265155:
{
returnValue = F("Richthofenplatz");
break;
}
case 265156:
{
returnValue = F("Richthofenstr.");
break;
}
case 265157:
{
returnValue = F("Richthofenweg");
break;
}
case 265158:
{
returnValue = F("Richthofer Str.");
break;
}
case 265159:
{
returnValue = F("Richthofstr.");
break;
}
case 265160:
{
returnValue = F("Richthop");
break;
}
case 265161:
{
returnValue = F("Richthöll");
break;
}
case 265162:
{
returnValue = F("Richtkamp");
break;
}
case 265163:
{
returnValue = F("Richtmoorsweg");
break;
}
case 265164:
{
returnValue = F("Richtmoorweg");
break;
}
case 265165:
{
returnValue = F("Richtpad");
break;
}
case 265166:
{
returnValue = F("Richtpfad");
break;
}
case 265167:
{
returnValue = F("Richtplatz");
break;
}
case 265168:
{
returnValue = F("Richtscheitweg");
break;
}
case 265169:
{
returnValue = F("Richtsfeldstr.");
break;
}
case 265170:
{
returnValue = F("Richtstatt");
break;
}
case 265171:
{
returnValue = F("Richtstattweg");
break;
}
case 265172:
{
returnValue = F("Richtstellenweg");
break;
}
case 265173:
{
returnValue = F("Richtstieg");
break;
}
case 265174:
{
returnValue = F("Richtstr.");
break;
}
case 265175:
{
returnValue = F("Richtstrecke");
break;
}
case 265176:
{
returnValue = F("Richtstättenweg");
break;
}
case 265177:
{
returnValue = F("Richtstättstr.");
break;
}
case 265178:
{
returnValue = F("Richtsweg");
break;
}
case 265179:
{
returnValue = F("Richtung Eschenbach");
break;
}
case 265180:
{
returnValue = F("Richtwasen");
break;
}
case 265181:
{
returnValue = F("Richtweg");
break;
}
case 265182:
{
returnValue = F("Richtweg III");
break;
}
case 265183:
{
returnValue = F("Richtweg IV");
break;
}
case 265184:
{
returnValue = F("Richtwiese");
break;
}
case 265185:
{
returnValue = F("Richtäcker");
break;
}
case 265186:
{
returnValue = F("Richwinallee");
break;
}
case 265187:
{
returnValue = F("Rickbruch");
break;
}
case 265188:
{
returnValue = F("Rickchen-Arend-Weg");
break;
}
case 265189:
{
returnValue = F("Rickelerstr.");
break;
}
case 265190:
{
returnValue = F("Rickelmannstr.");
break;
}
case 265191:
{
returnValue = F("Rickelrather Str.");
break;
}
case 265192:
{
returnValue = F("Rickelsbüll");
break;
}
case 265193:
{
returnValue = F("Rickelscheid");
break;
}
case 265194:
{
returnValue = F("Rickelshausener Str.");
break;
}
case 265195:
{
returnValue = F("Rickelsweg");
break;
}
case 265196:
{
returnValue = F("Rickenbach");
break;
}
case 265197:
{
returnValue = F("Rickenbacher Str.");
break;
}
case 265198:
{
returnValue = F("Rickenbacher Weg");
break;
}
case 265199:
{
returnValue = F("Rickenkamp");
break;
}
case 265200:
{
returnValue = F("Rickenkämpe");
break;
}
case 265201:
{
returnValue = F("Rickensgasse");
break;
}
case 265202:
{
returnValue = F("Rickenstr.");
break;
}
case 265203:
{
returnValue = F("Rickenweg");
break;
}
case 265204:
{
returnValue = F("Rickenwiese");
break;
}
case 265205:
{
returnValue = F("Rickenwiesen");
break;
}
case 265206:
{
returnValue = F("Ricker Wiese");
break;
}
case 265207:
{
returnValue = F("Rickermannstr.");
break;
}
case 265208:
{
returnValue = F("Rickerstr.");
break;
}
case 265209:
{
returnValue = F("Rickersweg");
break;
}
case 265210:
{
returnValue = F("Rickerter Weg");
break;
}
case 265211:
{
returnValue = F("Rickerter Weg I");
break;
}
case 265212:
{
returnValue = F("Rickerter Weg II");
break;
}
case 265213:
{
returnValue = F("Rickertring");
break;
}
case 265214:
{
returnValue = F("Rickertsfeld");
break;
}
case 265215:
{
returnValue = F("Rickertsreute");
break;
}
case 265216:
{
returnValue = F("Rickertstr.");
break;
}
case 265217:
{
returnValue = F("Rickertsweiler");
break;
}
case 265218:
{
returnValue = F("Rickfeldsweg");
break;
}
case 265219:
{
returnValue = F("Rickgärten");
break;
}
case 265220:
{
returnValue = F("Rickhöfe");
break;
}
case 265221:
{
returnValue = F("Ricklefsche Trift");
break;
}
case 265222:
{
returnValue = F("Ricklefsstr.");
break;
}
case 265223:
{
returnValue = F("Ricklefsweg");
break;
}
case 265224:
{
returnValue = F("Ricklinger Stadtweg");
break;
}
case 265225:
{
returnValue = F("Ricklinger Str.");
break;
}
case 265226:
{
returnValue = F("Rickmannstr.");
break;
}
case 265227:
{
returnValue = F("Rickmerspark");
break;
}
case 265228:
{
returnValue = F("Rickmersstr.");
break;
}
case 265229:
{
returnValue = F("Rickschröders Kamp");
break;
}
case 265230:
{
returnValue = F("Rickshausen");
break;
}
case 265231:
{
returnValue = F("Ricksteinweg");
break;
}
case 265232:
{
returnValue = F("Rickstr.");
break;
}
case 265233:
{
returnValue = F("Rickstücken");
break;
}
case 265234:
{
returnValue = F("Ricktstr.");
break;
}
case 265235:
{
returnValue = F("Rickwerk");
break;
}
case 265236:
{
returnValue = F("Ridderade");
break;
}
case 265237:
{
returnValue = F("Ridderflaggen");
break;
}
case 265238:
{
returnValue = F("Ridders");
break;
}
case 265239:
{
returnValue = F("Ridderser Weg");
break;
}
case 265240:
{
returnValue = F("Riddershof");
break;
}
case 265241:
{
returnValue = F("Ridderskamp");
break;
}
case 265242:
{
returnValue = F("Ridderspaß");
break;
}
case 265243:
{
returnValue = F("Ridderstr.");
break;
}
case 265244:
{
returnValue = F("Riddeweg");
break;
}
case 265245:
{
returnValue = F("Riddingweg");
break;
}
case 265246:
{
returnValue = F("Riddorfer Ring");
break;
}
case 265247:
{
returnValue = F("Riddorfer Weg");
break;
}
case 265248:
{
returnValue = F("Rideplatz");
break;
}
case 265249:
{
returnValue = F("Ridinger Str.");
break;
}
case 265250:
{
returnValue = F("Ridingerstr.");
break;
}
case 265251:
{
returnValue = F("Ridlerstr.");
break;
}
case 265252:
{
returnValue = F("Ridlerweg");
break;
}
case 265253:
{
returnValue = F("Rie-und-Nie-Weg");
break;
}
case 265254:
{
returnValue = F("Rieb");
break;
}
case 265255:
{
returnValue = F("Riebauer Dorfstr.");
break;
}
case 265256:
{
returnValue = F("Riebauer Str.");
break;
}
case 265257:
{
returnValue = F("Riebebergsbreite");
break;
}
case 265258:
{
returnValue = F("Riebeckberg");
break;
}
case 265259:
{
returnValue = F("Riebel-Brand-Str.");
break;
}
case 265260:
{
returnValue = F("Riebel-Ring");
break;
}
case 265261:
{
returnValue = F("Riebelberg");
break;
}
case 265262:
{
returnValue = F("Riebelbergweg");
break;
}
case 265263:
{
returnValue = F("Riebelsdorfer Weg");
break;
}
case 265264:
{
returnValue = F("Riebener Damm");
break;
}
case 265265:
{
returnValue = F("Riebener Dorfstr.");
break;
}
case 265266:
{
returnValue = F("Riebener Str.");
break;
}
case 265267:
{
returnValue = F("Riebener Weg");
break;
}
case 265268:
{
returnValue = F("Riebenzinger Weg");
break;
}
case 265269:
{
returnValue = F("Riebergweg");
break;
}
case 265270:
{
returnValue = F("Riebgartenweg");
break;
}
case 265271:
{
returnValue = F("Riebling");
break;
}
case 265272:
{
returnValue = F("Rieblinger Str.");
break;
}
case 265273:
{
returnValue = F("Rieblingerstr.");
break;
}
case 265274:
{
returnValue = F("Rieblingstr.");
break;
}
case 265275:
{
returnValue = F("Riebrau");
break;
}
case 265276:
{
returnValue = F("Riebäckerstr.");
break;
}
case 265277:
{
returnValue = F("Riechberger Str.");
break;
}
case 265278:
{
returnValue = F("Riechenbach");
break;
}
case 265279:
{
returnValue = F("Riechenberg");
break;
}
case 265280:
{
returnValue = F("Riechenberger Weg");
break;
}
case 265281:
{
returnValue = F("Riechheimer Weg");
break;
}
case 265282:
{
returnValue = F("Rieckenbergstr.");
break;
}
case 265283:
{
returnValue = F("Rieckersweg-Ost");
break;
}
case 265284:
{
returnValue = F("Rieckersweg-West");
break;
}
case 265285:
{
returnValue = F("Rieckestr.");
break;
}
case 265286:
{
returnValue = F("Rieckherstr.");
break;
}
case 265287:
{
returnValue = F("Riecklinger Weg");
break;
}
case 265288:
{
returnValue = F("Rieckshof");
break;
}
case 265289:
{
returnValue = F("Rieckstr.");
break;
}
case 265290:
{
returnValue = F("Riecksweg");
break;
}
case 265291:
{
returnValue = F("Rieckswiesen");
break;
}
case 265292:
{
returnValue = F("Rieckweg");
break;
}
case 265293:
{
returnValue = F("Ried");
break;
}
case 265294:
{
returnValue = F("Ried bei Ottacker");
break;
}
case 265295:
{
returnValue = F("Riedacker");
break;
}
case 265296:
{
returnValue = F("Riedackerstr.");
break;
}
case 265297:
{
returnValue = F("Riedackerweg");
break;
}
case 265298:
{
returnValue = F("Riedaer Str.");
break;
}
case 265299:
{
returnValue = F("Riedaer Weg");
break;
}
case 265300:
{
returnValue = F("Riedanger");
break;
}
case 265301:
{
returnValue = F("Riedbach");
break;
}
case 265302:
{
returnValue = F("Riedbachbrücke");
break;
}
case 265303:
{
returnValue = F("Riedbacher Str.");
break;
}
case 265304:
{
returnValue = F("Riedbachstr.");
break;
}
case 265305:
{
returnValue = F("Riedbachweg");
break;
}
case 265306:
{
returnValue = F("Riedbahn");
break;
}
case 265307:
{
returnValue = F("Riedbahnstr.");
break;
}
case 265308:
{
returnValue = F("Riedberg");
break;
}
case 265309:
{
returnValue = F("Riedberger-Horn-Weg");
break;
}
case 265310:
{
returnValue = F("Riedberghof");
break;
}
case 265311:
{
returnValue = F("Riedbergstr.");
break;
}
case 265312:
{
returnValue = F("Riedbergweg");
break;
}
case 265313:
{
returnValue = F("Riedbeundweg");
break;
}
case 265314:
{
returnValue = F("Riedblick");
break;
}
case 265315:
{
returnValue = F("Riedblickweg");
break;
}
case 265316:
{
returnValue = F("Riedboden");
break;
}
case 265317:
{
returnValue = F("Riedboschweg");
break;
}
case 265318:
{
returnValue = F("Riedbronnenweg");
break;
}
case 265319:
{
returnValue = F("Riedbrunnenpark");
break;
}
case 265320:
{
returnValue = F("Riedbrunnenstr.");
break;
}
case 265321:
{
returnValue = F("Riedbrücke");
break;
}
case 265322:
{
returnValue = F("Riedbächle");
break;
}
case 265323:
{
returnValue = F("Riedbühlstr.");
break;
}
case 265324:
{
returnValue = F("Riedbühlweg");
break;
}
case 265325:
{
returnValue = F("Riede");
break;
}
case 265326:
{
returnValue = F("Riedebachweg");
break;
}
case 265327:
{
returnValue = F("Riedebeck");
break;
}
case 265328:
{
returnValue = F("Riedebeck Kolonie");
break;
}
case 265329:
{
returnValue = F("Riedegarten");
break;
}
case 265330:
{
returnValue = F("Riedegg");
break;
}
case 265331:
{
returnValue = F("Riedekamp");
break;
}
case 265332:
{
returnValue = F("Riedelberger Weg");
break;
}
case 265333:
{
returnValue = F("Riedelbergstr.");
break;
}
case 265334:
{
returnValue = F("Riedelfeldstr.");
break;
}
case 265335:
{
returnValue = F("Riedelfeldweg");
break;
}
case 265336:
{
returnValue = F("Riedelgasse");
break;
}
case 265337:
{
returnValue = F("Riedelgutweg");
break;
}
case 265338:
{
returnValue = F("Riedelhof");
break;
}
case 265339:
{
returnValue = F("Riedelsbach");
break;
}
case 265340:
{
returnValue = F("Riedelsberg");
break;
}
case 265341:
{
returnValue = F("Riedelsberger Weg");
break;
}
case 265342:
{
returnValue = F("Riedelsgut");
break;
}
case 265343:
{
returnValue = F("Riedelspfad");
break;
}
case 265344:
{
returnValue = F("Riedelsteig");
break;
}
case 265345:
{
returnValue = F("Riedelsteinstr.");
break;
}
case 265346:
{
returnValue = F("Riedelstr.");
break;
}
case 265347:
{
returnValue = F("Riedelstraat");
break;
}
case 265348:
{
returnValue = F("Riedelweg");
break;
}
case 265349:
{
returnValue = F("Riedemanns Park");
break;
}
case 265350:
{
returnValue = F("Riedemannstr.");
break;
}
case 265351:
{
returnValue = F("Rieden");
break;
}
case 265352:
{
returnValue = F("Riedenberg");
break;
}
case 265353:
{
returnValue = F("Riedenburg");
break;
}
case 265354:
{
returnValue = F("Riedenburger Str.");
break;
}
case 265355:
{
returnValue = F("Riedenburger Weg");
break;
}
case 265356:
{
returnValue = F("Riedener Kirchenweg");
break;
}
case 265357:
{
returnValue = F("Riedener Mühlen");
break;
}
case 265358:
{
returnValue = F("Riedener Str.");
break;
}
case 265359:
{
returnValue = F("Riedener Weg");
break;
}
case 265360:
{
returnValue = F("Riedengartenstr.");
break;
}
case 265361:
{
returnValue = F("Riedengraben");
break;
}
case 265362:
{
returnValue = F("Riedenheimer Str.");
break;
}
case 265363:
{
returnValue = F("Riedenkamp");
break;
}
case 265364:
{
returnValue = F("Riedenkampsweg");
break;
}
case 265365:
{
returnValue = F("Riedenloh");
break;
}
case 265366:
{
returnValue = F("Riedenstall");
break;
}
case 265367:
{
returnValue = F("Riedenstr.");
break;
}
case 265368:
{
returnValue = F("Riedensweg");
break;
}
case 265369:
{
returnValue = F("Riedental");
break;
}
case 265370:
{
returnValue = F("Riedenweg");
break;
}
case 265371:
{
returnValue = F("Riedenwies");
break;
}
case 265372:
{
returnValue = F("Riedenösch");
break;
}
case 265373:
{
returnValue = F("Rieder Aue");
break;
}
case 265374:
{
returnValue = F("Rieder End");
break;
}
case 265375:
{
returnValue = F("Rieder Hauptstr.");
break;
}
case 265376:
{
returnValue = F("Rieder Hühle");
break;
}
case 265377:
{
returnValue = F("Rieder Str.");
break;
}
case 265378:
{
returnValue = F("Rieder Tal");
break;
}
case 265379:
{
returnValue = F("Rieder Weg");
break;
}
case 265380:
{
returnValue = F("Rieder im Feld");
break;
}
case 265381:
{
returnValue = F("Riederbachstr.");
break;
}
case 265382:
{
returnValue = F("Riederbergstr.");
break;
}
case 265383:
{
returnValue = F("Riederbuch");
break;
}
case 265384:
{
returnValue = F("Riederer Str.");
break;
}
case 265385:
{
returnValue = F("Riedererbergstr.");
break;
}
case 265386:
{
returnValue = F("Riedererstr.");
break;
}
case 265387:
{
returnValue = F("Riederfelde");
break;
}
case 265388:
{
returnValue = F("Riedergarten");
break;
}
case 265389:
{
returnValue = F("Riederhaldenweg");
break;
}
case 265390:
{
returnValue = F("Riederhofweg");
break;
}
case 265391:
{
returnValue = F("Riederhäuleweg");
break;
}
case 265392:
{
returnValue = F("Riederhüttenweg");
break;
}
case 265393:
{
returnValue = F("Riedericher Str.");
break;
}
case 265394:
{
returnValue = F("Riedericher Weg");
break;
}
case 265395:
{
returnValue = F("Riederinger Str.");
break;
}
case 265396:
{
returnValue = F("Riederlohweg");
break;
}
case 265397:
{
returnValue = F("Riedermühler Str.");
break;
}
case 265398:
{
returnValue = F("Riedern");
break;
}
case 265399:
{
returnValue = F("Riedernbergweg");
break;
}
case 265400:
{
returnValue = F("Riederner Str.");
break;
}
case 265401:
{
returnValue = F("Riederner Weg");
break;
}
case 265402:
{
returnValue = F("Riederner Äcker");
break;
}
case 265403:
{
returnValue = F("Riedernstr.");
break;
}
case 265404:
{
returnValue = F("Riedernweg");
break;
}
case 265405:
{
returnValue = F("Riederplatz");
break;
}
case 265406:
{
returnValue = F("Riederrainweg");
break;
}
case 265407:
{
returnValue = F("Riedersche Drift");
break;
}
case 265408:
{
returnValue = F("Riedersche Trift");
break;
}
case 265409:
{
returnValue = F("Riederscher Weg");
break;
}
case 265410:
{
returnValue = F("Riedersheim");
break;
}
case 265411:
{
returnValue = F("Riedersteinstr.");
break;
}
case 265412:
{
returnValue = F("Riedersteinweg");
break;
}
case 265413:
{
returnValue = F("Riederstr.");
break;
}
case 265414:
{
returnValue = F("Riederszell");
break;
}
case 265415:
{
returnValue = F("Riedertbachweg");
break;
}
case 265416:
{
returnValue = F("Riederteil");
break;
}
case 265417:
{
returnValue = F("Riedertinger Str.");
break;
}
case 265418:
{
returnValue = F("Riederwaldsiedlung");
break;
}
case 265419:
{
returnValue = F("Riederwaldstr.");
break;
}
case 265420:
{
returnValue = F("Riederweg");
break;
}
case 265421:
{
returnValue = F("Riederwies");
break;
}
case 265422:
{
returnValue = F("Riederwäldle");
break;
}
case 265423:
{
returnValue = F("Riedeselschneise");
break;
}
case 265424:
{
returnValue = F("Riedeselstr.");
break;
}
case 265425:
{
returnValue = F("Riedeselweg");
break;
}
case 265426:
{
returnValue = F("Riedestr.");
break;
}
case 265427:
{
returnValue = F("Riedetal");
break;
}
case 265428:
{
returnValue = F("Riedeweg");
break;
}
case 265429:
{
returnValue = F("Riedfeld");
break;
}
case 265430:
{
returnValue = F("Riedfeldplatz");
break;
}
case 265431:
{
returnValue = F("Riedfeldstr.");
break;
}
case 265432:
{
returnValue = F("Riedfeldweg");
break;
}
case 265433:
{
returnValue = F("Riedflürlein");
break;
}
case 265434:
{
returnValue = F("Riedforststr.");
break;
}
case 265435:
{
returnValue = F("Riedgarten");
break;
}
case 265436:
{
returnValue = F("Riedgartenstr.");
break;
}
case 265437:
{
returnValue = F("Riedgartenweg");
break;
}
case 265438:
{
returnValue = F("Riedgasse");
break;
}
case 265439:
{
returnValue = F("Riedgassenäcker");
break;
}
case 265440:
{
returnValue = F("Riedgraben");
break;
}
case 265441:
{
returnValue = F("Riedgrabenweg");
break;
}
case 265442:
{
returnValue = F("Riedgrasweg");
break;
}
case 265443:
{
returnValue = F("Riedhalde");
break;
}
case 265444:
{
returnValue = F("Riedhaldenweg");
break;
}
case 265445:
{
returnValue = F("Riedhaldestr.");
break;
}
case 265446:
{
returnValue = F("Riedhamer Weg");
break;
}
case 265447:
{
returnValue = F("Riedhamring");
break;
}
case 265448:
{
returnValue = F("Riedhangstr.");
break;
}
case 265449:
{
returnValue = F("Riedhaug");
break;
}
case 265450:
{
returnValue = F("Riedhauser Str.");
break;
}
case 265451:
{
returnValue = F("Riedhauser Weg");
break;
}
case 265452:
{
returnValue = F("Riedhauserweg");
break;
}
case 265453:
{
returnValue = F("Riedheimer Str.");
break;
}
case 265454:
{
returnValue = F("Riedheimer Weg");
break;
}
case 265455:
{
returnValue = F("Riedheimstr.");
break;
}
case 265456:
{
returnValue = F("Riedherrngasse");
break;
}
case 265457:
{
returnValue = F("Riedhirsch");
break;
}
case 265458:
{
returnValue = F("Riedhof");
break;
}
case 265459:
{
returnValue = F("Riedhofstr.");
break;
}
case 265460:
{
returnValue = F("Riedhofweg");
break;
}
case 265461:
{
returnValue = F("Riedhohl");
break;
}
case 265462:
{
returnValue = F("Riedholweg");
break;
}
case 265463:
{
returnValue = F("Riedholz");
break;
}
case 265464:
{
returnValue = F("Riedholzstr.");
break;
}
case 265465:
{
returnValue = F("Riedhäuserhofstr.");
break;
}
case 265466:
{
returnValue = F("Riedhöfe");
break;
}
case 265467:
{
returnValue = F("Riedhügel");
break;
}
case 265468:
{
returnValue = F("Riedichen-Bürchbühl");
break;
}
case 265469:
{
returnValue = F("Riedichen-Gaisbühl");
break;
}
case 265470:
{
returnValue = F("Riedichen-Grüneck");
break;
}
case 265471:
{
returnValue = F("Riedichen-Mitteldorf");
break;
}
case 265472:
{
returnValue = F("Riedicher Str.");
break;
}
case 265473:
{
returnValue = F("Riedinger Str.");
break;
}
case 265474:
{
returnValue = F("Riedinger Weg");
break;
}
case 265475:
{
returnValue = F("Riedingerstr.");
break;
}
case 265476:
{
returnValue = F("Riedis");
break;
}
case 265477:
{
returnValue = F("Riedisser-Ring");
break;
}
case 265478:
{
returnValue = F("Riedkamp");
break;
}
case 265479:
{
returnValue = F("Riedkelterweg");
break;
}
case 265480:
{
returnValue = F("Riedklinge");
break;
}
case 265481:
{
returnValue = F("Riedkopfrundweg");
break;
}
case 265482:
{
returnValue = F("Riedkopfstr.");
break;
}
case 265483:
{
returnValue = F("Riedlangstr.");
break;
}
case 265484:
{
returnValue = F("Riedlbergweg");
break;
}
case 265485:
{
returnValue = F("Riedle");
break;
}
case 265486:
{
returnValue = F("Riedlegasse");
break;
}
case 265487:
{
returnValue = F("Riedlein");
break;
}
case 265488:
{
returnValue = F("Riedleinsweg");
break;
}
case 265489:
{
returnValue = F("Riedleinweg");
break;
}
case 265490:
{
returnValue = F("Riedleite");
break;
}
case 265491:
{
returnValue = F("Riedlenbeund");
break;
}
case 265492:
{
returnValue = F("Riedlepark");
break;
}
case 265493:
{
returnValue = F("Riedleparkstr.");
break;
}
case 265494:
{
returnValue = F("Riedleparktunnel");
break;
}
case 265495:
{
returnValue = F("Riedleparkunterführung");
break;
}
case 265496:
{
returnValue = F("Riedler Str.");
break;
}
case 265497:
{
returnValue = F("Riedlerbrücke");
break;
}
case 265498:
{
returnValue = F("Riedlerstr.");
break;
}
case 265499:
{
returnValue = F("Riedlerweg");
break;
}
case 265500:
{
returnValue = F("Riedlesmühle");
break;
}
case 265501:
{
returnValue = F("Riedlestr.");
break;
}
case 265502:
{
returnValue = F("Riedlesweg");
break;
}
case 265503:
{
returnValue = F("Riedleweg");
break;
}
case 265504:
{
returnValue = F("Riedleöschstr.");
break;
}
case 265505:
{
returnValue = F("Riedlhütter Schleif");
break;
}
case 265506:
{
returnValue = F("Riedlhütter Str.");
break;
}
case 265507:
{
returnValue = F("Riedling");
break;
}
case 265508:
{
returnValue = F("Riedlinger Str.");
break;
}
case 265509:
{
returnValue = F("Riedlinger Weg");
break;
}
case 265510:
{
returnValue = F("Riedlingerstr.");
break;
}
case 265511:
{
returnValue = F("Riedlings");
break;
}
case 265512:
{
returnValue = F("Riedlingser Str.");
break;
}
case 265513:
{
returnValue = F("Riedlingsteige");
break;
}
case 265514:
{
returnValue = F("Riedlingstr.");
break;
}
case 265515:
{
returnValue = F("Riedlistr.");
break;
}
case 265516:
{
returnValue = F("Riedlkam");
break;
}
case 265517:
{
returnValue = F("Riedlsteinstr.");
break;
}
case 265518:
{
returnValue = F("Riedlstr.");
break;
}
case 265519:
{
returnValue = F("Riedlweg");
break;
}
case 265520:
{
returnValue = F("Riedmaarsgäßchen");
break;
}
case 265521:
{
returnValue = F("Riedmatten");
break;
}
case 265522:
{
returnValue = F("Riedmattenstr.");
break;
}
case 265523:
{
returnValue = F("Riedmattenweg");
break;
}
case 265524:
{
returnValue = F("Riedmattweg");
break;
}
case 265525:
{
returnValue = F("Riedmauer");
break;
}
case 265526:
{
returnValue = F("Riedmecker Str.");
break;
}
case 265527:
{
returnValue = F("Riedmeckerlerweg");
break;
}
case 265528:
{
returnValue = F("Riedmeckerlesweg");
break;
}
case 265529:
{
returnValue = F("Riedmillerweg");
break;
}
case 265530:
{
returnValue = F("Riedmühle");
break;
}
case 265531:
{
returnValue = F("Riedmühlenkanalweg");
break;
}
case 265532:
{
returnValue = F("Riedmühlenstr.");
break;
}
case 265533:
{
returnValue = F("Riedmühlenweg");
break;
}
case 265534:
{
returnValue = F("Riedmühlestr.");
break;
}
case 265535:
{
returnValue = F("Riedmühlstr.");
break;
}
case 265536:
{
returnValue = F("Riedmühlweg");
break;
}
case 265537:
{
returnValue = F("Riedmüllerstr.");
break;
}
case 265538:
{
returnValue = F("Riedmüllerweg");
break;
}
case 265539:
{
returnValue = F("Riednelkenweg");
break;
}
case 265540:
{
returnValue = F("Riedpark");
break;
}
case 265541:
{
returnValue = F("Riedpfad");
break;
}
case 265542:
{
returnValue = F("Riedring");
break;
}
case 265543:
{
returnValue = F("Riedroder Str.");
break;
}
case 265544:
{
returnValue = F("Riedroder Weg");
break;
}
case 265545:
{
returnValue = F("Riedsaumpark");
break;
}
case 265546:
{
returnValue = F("Riedsaumstr.");
break;
}
case 265547:
{
returnValue = F("Riedschmiedestr.");
break;
}
case 265548:
{
returnValue = F("Riedseestr.");
break;
}
case 265549:
{
returnValue = F("Riedseeweg");
break;
}
case 265550:
{
returnValue = F("Riedsender Str.");
break;
}
case 265551:
{
returnValue = F("Riedsgasse");
break;
}
case 265552:
{
returnValue = F("Riedsiedlung");
break;
}
case 265553:
{
returnValue = F("Riedstegge");
break;
}
case 265554:
{
returnValue = F("Riedsteig");
break;
}
case 265555:
{
returnValue = F("Riedsteige");
break;
}
case 265556:
{
returnValue = F("Riedsteigstr.");
break;
}
case 265557:
{
returnValue = F("Riedstr.");
break;
}
case 265558:
{
returnValue = F("Riedstruth");
break;
}
case 265559:
{
returnValue = F("Riedtal");
break;
}
case 265560:
{
returnValue = F("Riedteichstr.");
break;
}
case 265561:
{
returnValue = F("Riedtfurtstr.");
break;
}
case 265562:
{
returnValue = F("Riedtorstr.");
break;
}
case 265563:
{
returnValue = F("Riedwaldweg");
break;
}
case 265564:
{
returnValue = F("Riedwasen");
break;
}
case 265565:
{
returnValue = F("Riedweg");
break;
}
case 265566:
{
returnValue = F("Riedweidenstr.");
break;
}
case 265567:
{
returnValue = F("Riedweiher");
break;
}
case 265568:
{
returnValue = F("Riedwiese");
break;
}
case 265569:
{
returnValue = F("Riedwiesen");
break;
}
case 265570:
{
returnValue = F("Riedwiesenbachweg");
break;
}
case 265571:
{
returnValue = F("Riedwiesengasse");
break;
}
case 265572:
{
returnValue = F("Riedwiesenhof");
break;
}
case 265573:
{
returnValue = F("Riedwiesenstr.");
break;
}
case 265574:
{
returnValue = F("Riedwiesenweg");
break;
}
case 265575:
{
returnValue = F("Riedwinkel");
break;
}
case 265576:
{
returnValue = F("Riedwirtsstr.");
break;
}
case 265577:
{
returnValue = F("Riedäcker");
break;
}
case 265578:
{
returnValue = F("Riedäckerring");
break;
}
case 265579:
{
returnValue = F("Riedäckerstr.");
break;
}
case 265580:
{
returnValue = F("Riedäckerweg");
break;
}
case 265581:
{
returnValue = F("Riedöschle");
break;
}
case 265582:
{
returnValue = F("Riefenbachweg");
break;
}
case 265583:
{
returnValue = F("Riefensteig");
break;
}
case 265584:
{
returnValue = F("Rieffstr.");
break;
}
case 265585:
{
returnValue = F("Rieflerweg");
break;
}
case 265586:
{
returnValue = F("Rieflinghauser Weg");
break;
}
case 265587:
{
returnValue = F("Riefnacken");
break;
}
case 265588:
{
returnValue = F("Rieforths Hof");
break;
}
case 265589:
{
returnValue = F("Riefstahlstr.");
break;
}
case 265590:
{
returnValue = F("Riefweg");
break;
}
case 265591:
{
returnValue = F("Riege");
break;
}
case 265592:
{
returnValue = F("Riege-Wolfstange");
break;
}
case 265593:
{
returnValue = F("Riegel 1");
break;
}
case 265594:
{
returnValue = F("Riegel 2");
break;
}
case 265595:
{
returnValue = F("Riegelacker");
break;
}
case 265596:
{
returnValue = F("Riegelackerweg");
break;
}
case 265597:
{
returnValue = F("Riegelbach");
break;
}
case 265598:
{
returnValue = F("Riegelbachstr.");
break;
}
case 265599:
{
returnValue = F("Riegelbrunnerhof");
break;
}
case 265600:
{
returnValue = F("Riegelbuchweg");
break;
}
case 265601:
{
returnValue = F("Riegeler Str.");
break;
}
case 265602:
{
returnValue = F("Riegelfeldstr.");
break;
}
case 265603:
{
returnValue = F("Riegelfeldweg");
break;
}
case 265604:
{
returnValue = F("Riegelgartenstr.");
break;
}
case 265605:
{
returnValue = F("Riegelgasse");
break;
}
case 265606:
{
returnValue = F("Riegelgrube");
break;
}
case 265607:
{
returnValue = F("Riegelhalde");
break;
}
case 265608:
{
returnValue = F("Riegelhaldenweg");
break;
}
case 265609:
{
returnValue = F("Riegelhof");
break;
}
case 265610:
{
returnValue = F("Riegelhofweg");
break;
}
case 265611:
{
returnValue = F("Riegelishalde");
break;
}
case 265612:
{
returnValue = F("Riegelkamp");
break;
}
case 265613:
{
returnValue = F("Riegelmattweg");
break;
}
case 265614:
{
returnValue = F("Riegelpfad");
break;
}
case 265615:
{
returnValue = F("Riegelplatz");
break;
}
case 265616:
{
returnValue = F("Riegelsberg - Horbenweg");
break;
}
case 265617:
{
returnValue = F("Riegelsberger Str.");
break;
}
case 265618:
{
returnValue = F("Riegelsbergweg");
break;
}
case 265619:
{
returnValue = F("Riegelsgasse");
break;
}
case 265620:
{
returnValue = F("Riegelshaldenweg");
break;
}
case 265621:
{
returnValue = F("Riegelsief");
break;
}
case 265622:
{
returnValue = F("Riegelsteinerstr.");
break;
}
case 265623:
{
returnValue = F("Riegelsteinstr.");
break;
}
case 265624:
{
returnValue = F("Riegelstr.");
break;
}
case 265625:
{
returnValue = F("Riegelsweg");
break;
}
case 265626:
{
returnValue = F("Riegelweg");
break;
}
case 265627:
{
returnValue = F("Riegelwiese");
break;
}
case 265628:
{
returnValue = F("Riegelwiesen");
break;
}
case 265629:
{
returnValue = F("Riegeläcker");
break;
}
case 265630:
{
returnValue = F("Riegeläckerstr.");
break;
}
case 265631:
{
returnValue = F("Riegen");
break;
}
case 265632:
{
returnValue = F("Riegenhof");
break;
}
case 265633:
{
returnValue = F("Riegenhofweg");
break;
}
case 265634:
{
returnValue = F("Riegenrother Str.");
break;
}
case 265635:
{
returnValue = F("Riegens Hof");
break;
}
case 265636:
{
returnValue = F("Riegenstr.");
break;
}
case 265637:
{
returnValue = F("Riegenstücke");
break;
}
case 265638:
{
returnValue = F("Riegenweg");
break;
}
case 265639:
{
returnValue = F("Rieger Heide");
break;
}
case 265640:
{
returnValue = F("Riegerauer Weg");
break;
}
case 265641:
{
returnValue = F("Riegerbenden");
break;
}
case 265642:
{
returnValue = F("Riegergasse");
break;
}
case 265643:
{
returnValue = F("Riegerhausweg");
break;
}
case 265644:
{
returnValue = F("Riegerpark");
break;
}
case 265645:
{
returnValue = F("Riegerplatz");
break;
}
case 265646:
{
returnValue = F("Riegersheimer Halde");
break;
}
case 265647:
{
returnValue = F("Riegersheimer Weg");
break;
}
case 265648:
{
returnValue = F("Riegerstr.");
break;
}
case 265649:
{
returnValue = F("Riegertsbühlstr.");
break;
}
case 265650:
{
returnValue = F("Riegerweg");
break;
}
case 265651:
{
returnValue = F("Riegerödweg");
break;
}
case 265652:
{
returnValue = F("Rieges Hoff");
break;
}
case 265653:
{
returnValue = F("Riegesbreen");
break;
}
case 265654:
{
returnValue = F("Riegestr.");
break;
}
case 265655:
{
returnValue = F("Riegeweg");
break;
}
case 265656:
{
returnValue = F("Rieggasse");
break;
}
case 265657:
{
returnValue = F("Rieggerweg");
break;
}
case 265658:
{
returnValue = F("Rieggis");
break;
}
case 265659:
{
returnValue = F("Rieglersreuth");
break;
}
case 265660:
{
returnValue = F("Rieglerstr.");
break;
}
case 265661:
{
returnValue = F("Rieglinger Höhe");
break;
}
case 265662:
{
returnValue = F("Riegrafstr.");
break;
}
case 265663:
{
returnValue = F("Riegseestr.");
break;
}
case 265664:
{
returnValue = F("Riehanger");
break;
}
case 265665:
{
returnValue = F("Riehe");
break;
}
case 265666:
{
returnValue = F("Riehe Höfe");
break;
}
case 265667:
{
returnValue = F("Riehegrund");
break;
}
case 265668:
{
returnValue = F("Riehehorst");
break;
}
case 265669:
{
returnValue = F("Riehekamp");
break;
}
case 265670:
{
returnValue = F("Riehelskuhl");
break;
}
case 265671:
{
returnValue = F("Riehen");
break;
}
case 265672:
{
returnValue = F("Riehendamm");
break;
}
case 265673:
{
returnValue = F("Riehener Str.");
break;
}
case 265674:
{
returnValue = F("Riehener Weg");
break;
}
case 265675:
{
returnValue = F("Riehenmoorweg");
break;
}
case 265676:
{
returnValue = F("Riehenstr.");
break;
}
case 265677:
{
returnValue = F("Riehenweg");
break;
}
case 265678:
{
returnValue = F("Rieher Str.");
break;
}
case 265679:
{
returnValue = F("Riehestr.");
break;
}
case 265680:
{
returnValue = F("Rieheweg");
break;
}
case 265681:
{
returnValue = F("Riehler Weg");
break;
}
case 265682:
{
returnValue = F("Riehlstr.");
break;
}
case 265683:
{
returnValue = F("Riehlweg");
break;
}
case 265684:
{
returnValue = F("Riehweg");
break;
}
case 265685:
{
returnValue = F("Riekchenweg");
break;
}
case 265686:
{
returnValue = F("Riekdahl");
break;
}
case 265687:
{
returnValue = F("Rieke");
break;
}
case 265688:
{
returnValue = F("Rieke Reech");
break;
}
case 265689:
{
returnValue = F("Riekehof");
break;
}
case 265690:
{
returnValue = F("Riekelsgasse");
break;
}
case 265691:
{
returnValue = F("Riekemacherstr.");
break;
}
case 265692:
{
returnValue = F("Riekenbank");
break;
}
case 265693:
{
returnValue = F("Riekenkamp");
break;
}
case 265694:
{
returnValue = F("Riekenrode");
break;
}
case 265695:
{
returnValue = F("Riekenwiesenweg");
break;
}
case 265696:
{
returnValue = F("Riekerhofstr.");
break;
}
case 265697:
{
returnValue = F("Riekersweg");
break;
}
case 265698:
{
returnValue = F("Riekertstr.");
break;
}
case 265699:
{
returnValue = F("Riekerweg");
break;
}
case 265700:
{
returnValue = F("Riekesthal");
break;
}
case 265701:
{
returnValue = F("Riekestr.");
break;
}
case 265702:
{
returnValue = F("Riekeweg");
break;
}
case 265703:
{
returnValue = F("Riekstr.");
break;
}
case 265704:
{
returnValue = F("Rielasinger Str.");
break;
}
case 265705:
{
returnValue = F("Rielenkamp");
break;
}
case 265706:
{
returnValue = F("Rieler Feld");
break;
}
case 265707:
{
returnValue = F("Rielingshäuser Str.");
break;
}
case 265708:
{
returnValue = F("Rielker Weg");
break;
}
case 265709:
{
returnValue = F("Rieloh");
break;
}
case 265710:
{
returnValue = F("Rielstr.");
break;
}
case 265711:
{
returnValue = F("Riemannstr.");
break;
}
case 265712:
{
returnValue = F("Riemannweg");
break;
}
case 265713:
{
returnValue = F("Riembergstr.");
break;
}
case 265714:
{
returnValue = F("Riemekestr.");
break;
}
case 265715:
{
returnValue = F("Riemelsbeck");
break;
}
case 265716:
{
returnValue = F("Riemelsweg");
break;
}
case 265717:
{
returnValue = F("Riemenfeldstr.");
break;
}
case 265718:
{
returnValue = F("Riemengasse");
break;
}
case 265719:
{
returnValue = F("Riemenluckweg");
break;
}
case 265720:
{
returnValue = F("Riemenschneiderbrücke");
break;
}
case 265721:
{
returnValue = F("Riemenschneidergasse");
break;
}
case 265722:
{
returnValue = F("Riemenschneiderstr.");
break;
}
case 265723:
{
returnValue = F("Riemenschneiderweg");
break;
}
case 265724:
{
returnValue = F("Riemenstr.");
break;
}
case 265725:
{
returnValue = F("Riemenstädter Weg");
break;
}
case 265726:
{
returnValue = F("Riemenweg");
break;
}
case 265727:
{
returnValue = F("Riemenwiesenweg");
break;
}
case 265728:
{
returnValue = F("Riemenäckerstr.");
break;
}
case 265729:
{
returnValue = F("Riemer Gangsteig");
break;
}
case 265730:
{
returnValue = F("Riemer Hof");
break;
}
case 265731:
{
returnValue = F("Riemerfeldweg");
break;
}
case 265732:
{
returnValue = F("Riemergasse");
break;
}
case 265733:
{
returnValue = F("Riemergässli");
break;
}
case 265734:
{
returnValue = F("Riemerlinger Str.");
break;
}
case 265735:
{
returnValue = F("Riemerschmidstr.");
break;
}
case 265736:
{
returnValue = F("Riemerschmidweg");
break;
}
case 265737:
{
returnValue = F("Riemerstr.");
break;
}
case 265738:
{
returnValue = F("Riemerweg");
break;
}
case 265739:
{
returnValue = F("Riemesborngasse");
break;
}
case 265740:
{
returnValue = F("Riemgrabenallee");
break;
}
case 265741:
{
returnValue = F("Riemhoferstr.");
break;
}
case 265742:
{
returnValue = F("Riemker Str.");
break;
}
case 265743:
{
returnValue = F("Riemker Weg");
break;
}
case 265744:
{
returnValue = F("Riempengasse");
break;
}
case 265745:
{
returnValue = F("Riemser Weg");
break;
}
case 265746:
{
returnValue = F("Riemsloher Str.");
break;
}
case 265747:
{
returnValue = F("Riemstr.");
break;
}
case 265748:
{
returnValue = F("Riemtappenweg");
break;
}
case 265749:
{
returnValue = F("Riemweg");
break;
}
case 265750:
{
returnValue = F("Riemwiesenweg");
break;
}
case 265751:
{
returnValue = F("Rienau");
break;
}
case 265752:
{
returnValue = F("Rienauer Weg");
break;
}
case 265753:
{
returnValue = F("Rienbeckweg");
break;
}
case 265754:
{
returnValue = F("Rienecker Str.");
break;
}
case 265755:
{
returnValue = F("Rienecker Tal");
break;
}
case 265756:
{
returnValue = F("Rienecker Waldlehrpfad");
break;
}
case 265757:
{
returnValue = F("Rieneckertal");
break;
}
case 265758:
{
returnValue = F("Rieneckstr.");
break;
}
case 265759:
{
returnValue = F("Rienegrabenbrücke");
break;
}
case 265760:
{
returnValue = F("Rieneldstr.");
break;
}
case 265761:
{
returnValue = F("Rienhardtstr.");
break;
}
case 265762:
{
returnValue = F("Rienharzer Str.");
break;
}
case 265763:
{
returnValue = F("Riensberg");
break;
}
case 265764:
{
returnValue = F("Rienstr.");
break;
}
case 265765:
{
returnValue = F("Rienzbühl");
break;
}
case 265766:
{
returnValue = F("Rienzhofenstr.");
break;
}
case 265767:
{
returnValue = F("Rienzistr.");
break;
}
case 265768:
{
returnValue = F("Riepacher Str.");
break;
}
case 265769:
{
returnValue = F("Riepackerstr.");
break;
}
case 265770:
{
returnValue = F("Riepelbusch");
break;
}
case 265771:
{
returnValue = F("Riepelsiepen");
break;
}
case 265772:
{
returnValue = F("Riepenblick");
break;
}
case 265773:
{
returnValue = F("Riepenbrink");
break;
}
case 265774:
{
returnValue = F("Riepener Kirchweg");
break;
}
case 265775:
{
returnValue = F("Riepener Str.");
break;
}
case 265776:
{
returnValue = F("Riepener Weg");
break;
}
case 265777:
{
returnValue = F("Riepenhagen");
break;
}
case 265778:
{
returnValue = F("Riepenholz");
break;
}
case 265779:
{
returnValue = F("Riepenkamp");
break;
}
case 265780:
{
returnValue = F("Riepenstr.");
break;
}
case 265781:
{
returnValue = F("Riepenweg");
break;
}
case 265782:
{
returnValue = F("Rieper Str.");
break;
}
case 265783:
{
returnValue = F("Rieper Weg");
break;
}
case 265784:
{
returnValue = F("Rieperbergstr.");
break;
}
case 265785:
{
returnValue = F("Riepersheck");
break;
}
case 265786:
{
returnValue = F("Riepertshamer Berg");
break;
}
case 265787:
{
returnValue = F("Rieperweg");
break;
}
case 265788:
{
returnValue = F("Riepholm");
break;
}
case 265789:
{
returnValue = F("Riepkenberg");
break;
}
case 265790:
{
returnValue = F("Riepker Str.");
break;
}
case 265791:
{
returnValue = F("Rieppstr.");
break;
}
case 265792:
{
returnValue = F("Riepser Str.");
break;
}
case 265793:
{
returnValue = F("Riepshof");
break;
}
case 265794:
{
returnValue = F("Riepshofer Weg");
break;
}
case 265795:
{
returnValue = F("Riepster Weg");
break;
}
case 265796:
{
returnValue = F("Rierfeldweg");
break;
}
case 265797:
{
returnValue = F("Riersbach");
break;
}
case 265798:
{
returnValue = F("Ries");
break;
}
case 265799:
{
returnValue = F("Riesackweg");
break;
}
case 265800:
{
returnValue = F("Riesaer Landstr.");
break;
}
case 265801:
{
returnValue = F("Riesaer Str.");
break;
}
case 265802:
{
returnValue = F("Riesaer Strasse");
break;
}
case 265803:
{
returnValue = F("Riesaer Weg");
break;
}
case 265804:
{
returnValue = F("Riesauer Markenweg");
break;
}
case 265805:
{
returnValue = F("Riesbarger Ring");
break;
}
case 265806:
{
returnValue = F("Riesberg");
break;
}
case 265807:
{
returnValue = F("Riesbergrundweg");
break;
}
case 265808:
{
returnValue = F("Riesbergstr.");
break;
}
case 265809:
{
returnValue = F("Riesblick");
break;
}
case 265810:
{
returnValue = F("Riesblickstr.");
break;
}
case 265811:
{
returnValue = F("Riesbrieker Str.");
break;
}
case 265812:
{
returnValue = F("Riesböer");
break;
}
case 265813:
{
returnValue = F("Riesbülldeich");
break;
}
case 265814:
{
returnValue = F("Rieschbogen");
break;
}
case 265815:
{
returnValue = F("Rieschenhof");
break;
}
case 265816:
{
returnValue = F("Rieschenhöfe");
break;
}
case 265817:
{
returnValue = F("Rieschstr.");
break;
}
case 265818:
{
returnValue = F("Riesdahl");
break;
}
case 265819:
{
returnValue = F("Riesdorfer Str.");
break;
}
case 265820:
{
returnValue = F("Riese");
break;
}
case 265821:
{
returnValue = F("Riesebeneweg");
break;
}
case 265822:
{
returnValue = F("Riesebergblick");
break;
}
case 265823:
{
returnValue = F("Rieseberger Weg");
break;
}
case 265824:
{
returnValue = F("Riesebergstr.");
break;
}
case 265825:
{
returnValue = F("Riesebusch");
break;
}
case 265826:
{
returnValue = F("Riesebyer Str.");
break;
}
case 265827:
{
returnValue = F("Riesebyer Weg");
break;
}
case 265828:
{
returnValue = F("Rieseler Feld");
break;
}
case 265829:
{
returnValue = F("Rieseler Str.");
break;
}
case 265830:
{
returnValue = F("Rieselewaldweg");
break;
}
case 265831:
{
returnValue = F("Rieselfeldallee");
break;
}
case 265832:
{
returnValue = F("Rieselgrund");
break;
}
case 265833:
{
returnValue = F("Rieselgrundweg");
break;
}
case 265834:
{
returnValue = F("Rieselhängstr.");
break;
}
case 265835:
{
returnValue = F("Rieselhöhe");
break;
}
case 265836:
{
returnValue = F("Rieselmanndamm");
break;
}
case 265837:
{
returnValue = F("Rieselstr.");
break;
}
case 265838:
{
returnValue = F("Rieselung");
break;
}
case 265839:
{
returnValue = F("Rieselweg");
break;
}
case 265840:
{
returnValue = F("Riesen");
break;
}
case 265841:
{
returnValue = F("Riesen-Klos-Str.");
break;
}
case 265842:
{
returnValue = F("Riesenbach");
break;
}
case 265843:
{
returnValue = F("Riesenbecker Postweg");
break;
}
case 265844:
{
returnValue = F("Riesenbecker Str.");
break;
}
case 265845:
{
returnValue = F("Riesenbeeksweg");
break;
}
case 265846:
{
returnValue = F("Riesenberg");
break;
}
case 265847:
{
returnValue = F("Riesenberger Str.");
break;
}
case 265848:
{
returnValue = F("Riesenbergerweg");
break;
}
case 265849:
{
returnValue = F("Riesenberghangweg");
break;
}
case 265850:
{
returnValue = F("Riesenbergsackweg");
break;
}
case 265851:
{
returnValue = F("Riesenbergsiedlung");
break;
}
case 265852:
{
returnValue = F("Riesenbergsteig");
break;
}
case 265853:
{
returnValue = F("Riesenbergstr.");
break;
}
case 265854:
{
returnValue = F("Riesenbergweg");
break;
}
case 265855:
{
returnValue = F("Riesenbergwerg");
break;
}
case 265856:
{
returnValue = F("Riesenbichl");
break;
}
case 265857:
{
returnValue = F("Riesenbrück");
break;
}
case 265858:
{
returnValue = F("Riesenbühlrundweg");
break;
}
case 265859:
{
returnValue = F("Riesenbühlweg");
break;
}
case 265860:
{
returnValue = F("Riesendamm");
break;
}
case 265861:
{
returnValue = F("Riesener Str.");
break;
}
case 265862:
{
returnValue = F("Riesener Weg");
break;
}
case 265863:
{
returnValue = F("Riesenerstr.");
break;
}
case 265864:
{
returnValue = F("Riesenfeld");
break;
}
case 265865:
{
returnValue = F("Riesenfeldstr.");
break;
}
case 265866:
{
returnValue = F("Riesenfeldweg");
break;
}
case 265867:
{
returnValue = F("Riesengasse");
break;
}
case 265868:
{
returnValue = F("Riesengebirgestr.");
break;
}
case 265869:
{
returnValue = F("Riesengebirgeweg");
break;
}
case 265870:
{
returnValue = F("Riesengebirgsstr.");
break;
}
case 265871:
{
returnValue = F("Riesengebirgstr.");
break;
}
case 265872:
{
returnValue = F("Riesengebirgsweg");
break;
}
case 265873:
{
returnValue = F("Riesengraben");
break;
}
case 265874:
{
returnValue = F("Riesengrabenweg");
break;
}
case 265875:
{
returnValue = F("Riesengrundleitenweg");
break;
}
case 265876:
{
returnValue = F("Riesengäßle");
break;
}
case 265877:
{
returnValue = F("Riesenhahnweg");
break;
}
case 265878:
{
returnValue = F("Riesenklingenweg");
break;
}
case 265879:
{
returnValue = F("Riesenkopfstr.");
break;
}
case 265880:
{
returnValue = F("Riesenkopfweg");
break;
}
case 265881:
{
returnValue = F("Riesenmühlgasse");
break;
}
case 265882:
{
returnValue = F("Riesenrain");
break;
}
case 265883:
{
returnValue = F("Riesensteige");
break;
}
case 265884:
{
returnValue = F("Riesensteinstr.");
break;
}
case 265885:
{
returnValue = F("Riesensteinweg");
break;
}
case 265886:
{
returnValue = F("Riesenstr.");
break;
}
case 265887:
{
returnValue = F("Riesensträßle");
break;
}
case 265888:
{
returnValue = F("Riesentannenweg");
break;
}
case 265889:
{
returnValue = F("Riesentrapp");
break;
}
case 265890:
{
returnValue = F("Riesenwaldstr.");
break;
}
case 265891:
{
returnValue = F("Riesenwaldweg");
break;
}
case 265892:
{
returnValue = F("Riesenweg");
break;
}
case 265893:
{
returnValue = F("Riesenweg II");
break;
}
case 265894:
{
returnValue = F("Rieser Str.");
break;
}
case 265895:
{
returnValue = F("Rieserhof");
break;
}
case 265896:
{
returnValue = F("Rieserstr.");
break;
}
case 265897:
{
returnValue = F("Rieserweg");
break;
}
case 265898:
{
returnValue = F("Rieseräcker");
break;
}
case 265899:
{
returnValue = F("Riesestr.");
break;
}
case 265900:
{
returnValue = F("Rieseweg");
break;
}
case 265901:
{
returnValue = F("Riesgasse");
break;
}
case 265902:
{
returnValue = F("Riesgraben");
break;
}
case 265903:
{
returnValue = F("Riesheimerstr.");
break;
}
case 265904:
{
returnValue = F("Rieshof");
break;
}
case 265905:
{
returnValue = F("Rieshofener Str.");
break;
}
case 265906:
{
returnValue = F("Rieshorner Weg");
break;
}
case 265907:
{
returnValue = F("Riesigker Str.");
break;
}
case 265908:
{
returnValue = F("Rieskuhlstr.");
break;
}
case 265909:
{
returnValue = F("Riesleber Str.");
break;
}
case 265910:
{
returnValue = F("Rieslehofweg");
break;
}
case 265911:
{
returnValue = F("Riesling-Weinstr.");
break;
}
case 265912:
{
returnValue = F("Rieslinggasse");
break;
}
case 265913:
{
returnValue = F("Rieslingring");
break;
}
case 265914:
{
returnValue = F("Rieslingstr.");
break;
}
case 265915:
{
returnValue = F("Rieslingweg");
break;
}
case 265916:
{
returnValue = F("Rieslstr.");
break;
}
case 265917:
{
returnValue = F("Riesmeerweg");
break;
}
case 265918:
{
returnValue = F("Riesmoosweg");
break;
}
case 265919:
{
returnValue = F("Riesschlag");
break;
}
case 265920:
{
returnValue = F("Riesserseeweg");
break;
}
case 265921:
{
returnValue = F("Riesstr.");
break;
}
case 265922:
{
returnValue = F("Riestedter Bahnhofstr.");
break;
}
case 265923:
{
returnValue = F("Riestedter Ring");
break;
}
case 265924:
{
returnValue = F("Riestedter Str.");
break;
}
case 265925:
{
returnValue = F("Riestedter Weg");
break;
}
case 265926:
{
returnValue = F("Riester Allee");
break;
}
case 265927:
{
returnValue = F("Riester Damm");
break;
}
case 265928:
{
returnValue = F("Riester Str.");
break;
}
case 265929:
{
returnValue = F("Riester Weg");
break;
}
case 265930:
{
returnValue = F("Riesterkopfweg");
break;
}
case 265931:
{
returnValue = F("Riestersrain");
break;
}
case 265932:
{
returnValue = F("Riestestr.");
break;
}
case 265933:
{
returnValue = F("Rieswartenweg");
break;
}
case 265934:
{
returnValue = F("Riesweg");
break;
}
case 265935:
{
returnValue = F("Riesweiler Hohl");
break;
}
case 265936:
{
returnValue = F("Riesweiler Weg");
break;
}
case 265937:
{
returnValue = F("Riesweilerstr.");
break;
}
case 265938:
{
returnValue = F("Riesweilerweg");
break;
}
case 265939:
{
returnValue = F("Rieswerder Stich");
break;
}
case 265940:
{
returnValue = F("Riet-Chaussee");
break;
}
case 265941:
{
returnValue = F("Riet-Ut-Str.");
break;
}
case 265942:
{
returnValue = F("Rietberg");
break;
}
case 265943:
{
returnValue = F("Rietberger Str.");
break;
}
case 265944:
{
returnValue = F("Rietberger Weg");
break;
}
case 265945:
{
returnValue = F("Rietbergweg");
break;
}
case 265946:
{
returnValue = F("Rietbrockstr.");
break;
}
case 265947:
{
returnValue = F("Rietburgblick");
break;
}
case 265948:
{
returnValue = F("Rietburgstr.");
break;
}
case 265949:
{
returnValue = F("Rietbüsche");
break;
}
case 265950:
{
returnValue = F("Rietdorf");
break;
}
case 265951:
{
returnValue = F("Rietdorfer Weg");
break;
}
case 265952:
{
returnValue = F("Riete");
break;
}
case 265953:
{
returnValue = F("Rietenauer Str.");
break;
}
case 265954:
{
returnValue = F("Rietenauer Weg");
break;
}
case 265955:
{
returnValue = F("Rietenbruch");
break;
}
case 265956:
{
returnValue = F("Rietenlaustr.");
break;
}
case 265957:
{
returnValue = F("Rietenstr.");
break;
}
case 265958:
{
returnValue = F("Rieter Steige");
break;
}
case 265959:
{
returnValue = F("Rieter Str.");
break;
}
case 265960:
{
returnValue = F("Rieterheg");
break;
}
case 265961:
{
returnValue = F("Rieterstr.");
break;
}
case 265962:
{
returnValue = F("Rieterweg");
break;
}
case 265963:
{
returnValue = F("Rietfeldsweg");
break;
}
case 265964:
{
returnValue = F("Rietgang");
break;
}
case 265965:
{
returnValue = F("Rietgarten");
break;
}
case 265966:
{
returnValue = F("Rietgasse");
break;
}
case 265967:
{
returnValue = F("Rieth");
break;
}
case 265968:
{
returnValue = F("Riethchaussee");
break;
}
case 265969:
{
returnValue = F("Riethe");
break;
}
case 265970:
{
returnValue = F("Rietheimer Steige");
break;
}
case 265971:
{
returnValue = F("Rietheimer Str.");
break;
}
case 265972:
{
returnValue = F("Riether Feld");
break;
}
case 265973:
{
returnValue = F("Riether Hauptstr.");
break;
}
case 265974:
{
returnValue = F("Riether Str.");
break;
}
case 265975:
{
returnValue = F("Rietherbach");
break;
}
case 265976:
{
returnValue = F("Rietheweg");
break;
}
case 265977:
{
returnValue = F("Riethfeld");
break;
}
case 265978:
{
returnValue = F("Riethgarten");
break;
}
case 265979:
{
returnValue = F("Riethgartenstr.");
break;
}
case 265980:
{
returnValue = F("Riethgasse");
break;
}
case 265981:
{
returnValue = F("Riethhag");
break;
}
case 265982:
{
returnValue = F("Riethkamp");
break;
}
case 265983:
{
returnValue = F("Riethkampweg");
break;
}
case 265984:
{
returnValue = F("Riethmühle");
break;
}
case 265985:
{
returnValue = F("Riethnordhäuser Str.");
break;
}
case 265986:
{
returnValue = F("Riethnordhäuser Weg");
break;
}
case 265987:
{
returnValue = F("Riethof");
break;
}
case 265988:
{
returnValue = F("Riethornweg");
break;
}
case 265989:
{
returnValue = F("Riethstieg");
break;
}
case 265990:
{
returnValue = F("Riethstorplatz");
break;
}
case 265991:
{
returnValue = F("Riethstorstr.");
break;
}
case 265992:
{
returnValue = F("Riethstr.");
break;
}
case 265993:
{
returnValue = F("Riethtal");
break;
}
case 265994:
{
returnValue = F("Riethtalgasse");
break;
}
case 265995:
{
returnValue = F("Riethweg");
break;
}
case 265996:
{
returnValue = F("Riethwörth");
break;
}
case 265997:
{
returnValue = F("Rietkamp");
break;
}
case 265998:
{
returnValue = F("Rietkampstr.");
break;
}
case 265999:
{
returnValue = F("Rietmacherweg");
break;
}
case 266000:
{
returnValue = F("Rietmannweg");
break;
}
case 266001:
{
returnValue = F("Rietmolenweg");
break;
}
case 266002:
{
returnValue = F("Rietpaß");
break;
}
case 266003:
{
returnValue = F("Rietpietschgang");
break;
}
case 266004:
{
returnValue = F("Rietschelstr.");
break;
}
case 266005:
{
returnValue = F("Rietschener Str.");
break;
}
case 266006:
{
returnValue = F("Rietshaldeweg");
break;
}
case 266007:
{
returnValue = F("Rietstr.");
break;
}
case 266008:
{
returnValue = F("Rietstückenweg");
break;
}
case 266009:
{
returnValue = F("Rietsweg");
break;
}
case 266010:
{
returnValue = F("Rietweg");
break;
}
case 266011:
{
returnValue = F("Rietz-Bucht Nr.");
break;
}
case 266012:
{
returnValue = F("Rietzdamm");
break;
}
case 266013:
{
returnValue = F("Rietzedammbrücke");
break;
}
case 266014:
{
returnValue = F("Rietzeler Weg");
break;
}
case 266015:
{
returnValue = F("Rietzer Busch");
break;
}
case 266016:
{
returnValue = F("Rietzer Dorfstr.");
break;
}
case 266017:
{
returnValue = F("Rietzer Weg");
break;
}
case 266018:
{
returnValue = F("Rietzmecker Str.");
break;
}
case 266019:
{
returnValue = F("Rietzschgrundstr.");
break;
}
case 266020:
{
returnValue = F("Rietzschkegrund");
break;
}
case 266021:
{
returnValue = F("Rietzschkengasse");
break;
}
case 266022:
{
returnValue = F("Rietzschkenweg");
break;
}
case 266023:
{
returnValue = F("Rievenstr.");
break;
}
case 266024:
{
returnValue = F("Rieves Kamp");
break;
}
case 266025:
{
returnValue = F("Riewender Str.");
break;
}
case 266026:
{
returnValue = F("Riexing");
break;
}
case 266027:
{
returnValue = F("Riexingerstr.");
break;
}
case 266028:
{
returnValue = F("Riezlerstr.");
break;
}
case 266029:
{
returnValue = F("Rießackerstr.");
break;
}
case 266030:
{
returnValue = F("Rießberg");
break;
}
case 266031:
{
returnValue = F("Rießelkamp");
break;
}
case 266032:
{
returnValue = F("Rießelmann Damm");
break;
}
case 266033:
{
returnValue = F("Rießelweg");
break;
}
case 266034:
{
returnValue = F("Rießen");
break;
}
case 266035:
{
returnValue = F("Rießener Stadtweg");
break;
}
case 266036:
{
returnValue = F("Rießener Str.");
break;
}
case 266037:
{
returnValue = F("Rießener Weg");
break;
}
case 266038:
{
returnValue = F("Rießerkopfstr.");
break;
}
case 266039:
{
returnValue = F("Rießerkopfweg");
break;
}
case 266040:
{
returnValue = F("Rießersee Fußweg");
break;
}
case 266041:
{
returnValue = F("Rießerseefußweg");
break;
}
case 266042:
{
returnValue = F("Rießerseestr.");
break;
}
case 266043:
{
returnValue = F("Rießkamp");
break;
}
case 266044:
{
returnValue = F("Rießleithen");
break;
}
case 266045:
{
returnValue = F("Rießnerstr.");
break;
}
case 266046:
{
returnValue = F("Rießstr.");
break;
}
case 266047:
{
returnValue = F("Riffelstr.");
break;
}
case 266048:
{
returnValue = F("Riffelweg");
break;
}
case 266049:
{
returnValue = F("Riffenzell");
break;
}
case 266050:
{
returnValue = F("Riffhaldenweg");
break;
}
case 266051:
{
returnValue = F("Riffhausenweg");
break;
}
case 266052:
{
returnValue = F("Riffinger Str.");
break;
}
case 266053:
{
returnValue = F("Rifflen");
break;
}
case 266054:
{
returnValue = F("Rifflengässle");
break;
}
case 266055:
{
returnValue = F("Rifflengäßle");
break;
}
case 266056:
{
returnValue = F("Rifflerweg");
break;
}
case 266057:
{
returnValue = F("Riffstr.");
break;
}
case 266058:
{
returnValue = F("Riffweg");
break;
}
case 266059:
{
returnValue = F("Riga-Ring");
break;
}
case 266060:
{
returnValue = F("Rigaer Str.");
break;
}
case 266061:
{
returnValue = F("Rigaer Weg");
break;
}
case 266062:
{
returnValue = F("Rigastr.");
break;
}
case 266063:
{
returnValue = F("Rigauds Busch");
break;
}
case 266064:
{
returnValue = F("Rigaweg");
break;
}
case 266065:
{
returnValue = F("Rigeikenstr.");
break;
}
case 266066:
{
returnValue = F("Rigelhof");
break;
}
case 266067:
{
returnValue = F("Rigenzastr.");
break;
}
case 266068:
{
returnValue = F("Riggau");
break;
}
case 266069:
{
returnValue = F("Riggenbacher Landstr.");
break;
}
case 266070:
{
returnValue = F("Riggenbacher Weg");
break;
}
case 266071:
{
returnValue = F("Riggenstr.");
break;
}
case 266072:
{
returnValue = F("Riggers Feld");
break;
}
case 266073:
{
returnValue = F("Riggersweilerweg");
break;
}
case 266074:
{
returnValue = F("Rigistr.");
break;
}
case 266075:
{
returnValue = F("Rigiweg");
break;
}
case 266076:
{
returnValue = F("Riglashof");
break;
}
case 266077:
{
returnValue = F("Riglasreuth");
break;
}
case 266078:
{
returnValue = F("Rigoberta-Menchu-Str.");
break;
}
case 266079:
{
returnValue = F("Rigolettoweg");
break;
}
case 266080:
{
returnValue = F("Rigteweg");
break;
}
case 266081:
{
returnValue = F("Rihhostr.");
break;
}
case 266082:
{
returnValue = F("Rihnskamp");
break;
}
case 266083:
{
returnValue = F("Riihimäkistr.");
break;
}
case 266084:
{
returnValue = F("Rijnsburger Str.");
break;
}
case 266085:
{
returnValue = F("Rijssener Str.");
break;
}
case 266086:
{
returnValue = F("Rijswijker Str.");
break;
}
case 266087:
{
returnValue = F("Rika-Müller-Str.");
break;
}
case 266088:
{
returnValue = F("Rikbertshof");
break;
}
case 266089:
{
returnValue = F("Rikstia-Fegter-Str.");
break;
}
case 266090:
{
returnValue = F("Rikusstr.");
break;
}
case 266091:
{
returnValue = F("Rilchinger Str.");
break;
}
case 266092:
{
returnValue = F("Rilke-Westhoff Weg");
break;
}
case 266093:
{
returnValue = F("Rilkeallee");
break;
}
case 266094:
{
returnValue = F("Rilkehof");
break;
}
case 266095:
{
returnValue = F("Rilkekamp");
break;
}
case 266096:
{
returnValue = F("Rilkestr.");
break;
}
case 266097:
{
returnValue = F("Rilkeweg");
break;
}
case 266098:
{
returnValue = F("Riller Bruch");
break;
}
case 266099:
{
returnValue = F("Riller Siedlung");
break;
}
case 266100:
{
returnValue = F("Riller Weg");
break;
}
case 266101:
{
returnValue = F("Rillscheid-Ring");
break;
}
case 266102:
{
returnValue = F("Rillweg");
break;
}
case 266103:
{
returnValue = F("Rimbach");
break;
}
case 266104:
{
returnValue = F("Rimbacher Str.");
break;
}
case 266105:
{
returnValue = F("Rimbacher Weg");
break;
}
case 266106:
{
returnValue = F("Rimbachgasse");
break;
}
case 266107:
{
returnValue = F("Rimbachhügel");
break;
}
case 266108:
{
returnValue = F("Rimbachstr.");
break;
}
case 266109:
{
returnValue = F("Rimbachtal");
break;
}
case 266110:
{
returnValue = F("Rimbachweg");
break;
}
case 266111:
{
returnValue = F("Rimbecker Str.");
break;
}
case 266112:
{
returnValue = F("Rimbecker Weg");
break;
}
case 266113:
{
returnValue = F("Rimberger Str.");
break;
}
case 266114:
{
returnValue = F("Rimbergstr.");
break;
}
case 266115:
{
returnValue = F("Rimbergswald");
break;
}
case 266116:
{
returnValue = F("Rimbergweg");
break;
}
case 266117:
{
returnValue = F("Rimbertstr.");
break;
}
case 266118:
{
returnValue = F("Rimbertweg");
break;
}
case 266119:
{
returnValue = F("Rimbsberger Weg");
break;
}
case 266120:
{
returnValue = F("Rimburger Allee");
break;
}
case 266121:
{
returnValue = F("Rimburger Str.");
break;
}
case 266122:
{
returnValue = F("Rimdidimstr.");
break;
}
case 266123:
{
returnValue = F("Rimelsweg");
break;
}
case 266124:
{
returnValue = F("Rimhorner Graben");
break;
}
case 266125:
{
returnValue = F("Rimlasgrund");
break;
}
case 266126:
{
returnValue = F("Rimlinger Str.");
break;
}
case 266127:
{
returnValue = F("Rimloser Str.");
break;
}
case 266128:
{
returnValue = F("Rimmelser Str.");
break;
}
case 266129:
{
returnValue = F("Rimmersberg");
break;
}
case 266130:
{
returnValue = F("Rimmlingstr.");
break;
}
case 266131:
{
returnValue = F("Rimmstr.");
break;
}
case 266132:
{
returnValue = F("Rimpach");
break;
}
case 266133:
{
returnValue = F("Rimpacher Str.");
break;
}
case 266134:
{
returnValue = F("Rimparer Steig");
break;
}
case 266135:
{
returnValue = F("Rimparer Str.");
break;
}
case 266136:
{
returnValue = F("Rimparer Weg");
break;
}
case 266137:
{
returnValue = F("Rimpaustr.");
break;
}
case 266138:
{
returnValue = F("Rimschweilerstr.");
break;
}
case 266139:
{
returnValue = F("Rimsenweg");
break;
}
case 266140:
{
returnValue = F("Rimsinger Str.");
break;
}
case 266141:
{
returnValue = F("Rimsinger Weg");
break;
}
case 266142:
{
returnValue = F("Rimski-Korsakow-Str.");
break;
}
case 266143:
{
returnValue = F("Rimsting");
break;
}
case 266144:
{
returnValue = F("Rimstinger Str.");
break;
}
case 266145:
{
returnValue = F("Rinaldoweg");
break;
}
case 266146:
{
returnValue = F("Rinchnacher Str.");
break;
}
case 266147:
{
returnValue = F("Rinchnacher Weg");
break;
}
case 266148:
{
returnValue = F("Rinchnachmündt");
break;
}
case 266149:
{
returnValue = F("Rinchweg");
break;
}
case 266150:
{
returnValue = F("Rincklakestr.");
break;
}
case 266151:
{
returnValue = F("Rinckstr.");
break;
}
case 266152:
{
returnValue = F("Rindalphornstr.");
break;
}
case 266153:
{
returnValue = F("Rindalphornweg");
break;
}
case 266154:
{
returnValue = F("Rindberg");
break;
}
case 266155:
{
returnValue = F("Rindberger Str.");
break;
}
case 266156:
{
returnValue = F("Rindegger Weg");
break;
}
case 266157:
{
returnValue = F("Rindelbacher Str.");
break;
}
case 266158:
{
returnValue = F("Rindelmeerstr.");
break;
}
case 266159:
{
returnValue = F("Rindelmeersweg");
break;
}
case 266160:
{
returnValue = F("Rindelsteig");
break;
}
case 266161:
{
returnValue = F("Rindelsteinweg");
break;
}
case 266162:
{
returnValue = F("Rindenberg");
break;
}
case 266163:
{
returnValue = F("Rindenmooser Str.");
break;
}
case 266164:
{
returnValue = F("Rindenmühlenweg");
break;
}
case 266165:
{
returnValue = F("Rindenweg");
break;
}
case 266166:
{
returnValue = F("Rinderbacher Gasse");
break;
}
case 266167:
{
returnValue = F("Rinderbacher Gäßle");
break;
}
case 266168:
{
returnValue = F("Rinderbachstr.");
break;
}
case 266169:
{
returnValue = F("Rinderbachweg");
break;
}
case 266170:
{
returnValue = F("Rinderbügener Str.");
break;
}
case 266171:
{
returnValue = F("Rinderbüger Hauptstr.");
break;
}
case 266172:
{
returnValue = F("Rinderfeld");
break;
}
case 266173:
{
returnValue = F("Rinderfelder Str.");
break;
}
case 266174:
{
returnValue = F("Rindergasse");
break;
}
case 266175:
{
returnValue = F("Rinderhagenstr.");
break;
}
case 266176:
{
returnValue = F("Rinderle-Str.");
break;
}
case 266177:
{
returnValue = F("Rinderlenweg");
break;
}
case 266178:
{
returnValue = F("Rindermarkt");
break;
}
case 266179:
{
returnValue = F("Rinderner Str.");
break;
}
case 266180:
{
returnValue = F("Rindernscher Deich");
break;
}
case 266181:
{
returnValue = F("Rinderplatz");
break;
}
case 266182:
{
returnValue = F("Rinderstall");
break;
}
case 266183:
{
returnValue = F("Rinderstallweg");
break;
}
case 266184:
{
returnValue = F("Rinderstr.");
break;
}
case 266185:
{
returnValue = F("Rindertanzstr.");
break;
}
case 266186:
{
returnValue = F("Rinderweg");
break;
}
case 266187:
{
returnValue = F("Rinderätzsträßchen");
break;
}
case 266188:
{
returnValue = F("Rindeschwenderstr.");
break;
}
case 266189:
{
returnValue = F("Rindhaldenweg");
break;
}
case 266190:
{
returnValue = F("Rindhausener Str.");
break;
}
case 266191:
{
returnValue = F("Rindhof");
break;
}
case 266192:
{
returnValue = F("Rindhofgarten");
break;
}
case 266193:
{
returnValue = F("Rindsbergweg");
break;
}
case 266194:
{
returnValue = F("Rindtstr.");
break;
}
case 266195:
{
returnValue = F("Rindweg");
break;
}
case 266196:
{
returnValue = F("Rind´sche-Stift-Str.");
break;
}
case 266197:
{
returnValue = F("Rineckerstr.");
break;
}
case 266198:
{
returnValue = F("Ring");
break;
}
case 266199:
{
returnValue = F("Ring 1");
break;
}
case 266200:
{
returnValue = F("Ring 2");
break;
}
case 266201:
{
returnValue = F("Ring am Feld");
break;
}
case 266202:
{
returnValue = F("Ring am Gottwill");
break;
}
case 266203:
{
returnValue = F("Ring am Renner");
break;
}
case 266204:
{
returnValue = F("Ring der Bauarbeiter");
break;
}
case 266205:
{
returnValue = F("Ring der Chemiearbeiter");
break;
}
case 266206:
{
returnValue = F("Ring der Einheit");
break;
}
case 266207:
{
returnValue = F("Ring der Freundschaft");
break;
}
case 266208:
{
returnValue = F("Ring-Verbindungsstollen");
break;
}
case 266209:
{
returnValue = F("Ringallee");
break;
}
case 266210:
{
returnValue = F("Ringanlage an der Stadtmauer");
break;
}
case 266211:
{
returnValue = F("Ringasse");
break;
}
case 266212:
{
returnValue = F("Ringau");
break;
}
case 266213:
{
returnValue = F("Ringbachstr.");
break;
}
case 266214:
{
returnValue = F("Ringbahn");
break;
}
case 266215:
{
returnValue = F("Ringbahnstr.");
break;
}
case 266216:
{
returnValue = F("Ringbergstr.");
break;
}
case 266217:
{
returnValue = F("Ringbergweg");
break;
}
case 266218:
{
returnValue = F("Ringboke");
break;
}
case 266219:
{
returnValue = F("Ringbühl");
break;
}
case 266220:
{
returnValue = F("Ringdobl");
break;
}
case 266221:
{
returnValue = F("Ringeisenstr.");
break;
}
case 266222:
{
returnValue = F("Ringeisenweg");
break;
}
case 266223:
{
returnValue = F("Ringelahweg");
break;
}
case 266224:
{
returnValue = F("Ringelaier-Str.");
break;
}
case 266225:
{
returnValue = F("Ringelbach");
break;
}
case 266226:
{
returnValue = F("Ringelbacher Str.");
break;
}
case 266227:
{
returnValue = F("Ringelbachstr.");
break;
}
case 266228:
{
returnValue = F("Ringelbachstr. Park");
break;
}
case 266229:
{
returnValue = F("Ringelbergtreppe");
break;
}
case 266230:
{
returnValue = F("Ringelblumenstr.");
break;
}
case 266231:
{
returnValue = F("Ringelblumenweg");
break;
}
case 266232:
{
returnValue = F("Ringelbreite");
break;
}
case 266233:
{
returnValue = F("Ringeldorfer Str.");
break;
}
case 266234:
{
returnValue = F("Ringeler Str.");
break;
}
case 266235:
{
returnValue = F("Ringelfahrt");
break;
}
case 266236:
{
returnValue = F("Ringelfeldweg");
break;
}
case 266237:
{
returnValue = F("Ringelgansweg");
break;
}
case 266238:
{
returnValue = F("Ringelgasse");
break;
}
case 266239:
{
returnValue = F("Ringelhauser Allee");
break;
}
case 266240:
{
returnValue = F("Ringelhauser Park");
break;
}
case 266241:
{
returnValue = F("Ringelheimer Str.");
break;
}
case 266242:
{
returnValue = F("Ringelholzweg");
break;
}
case 266243:
{
returnValue = F("Ringelhorst");
break;
}
case 266244:
{
returnValue = F("Ringelmannsdamm");
break;
}
case 266245:
{
returnValue = F("Ringelmühle");
break;
}
case 266246:
{
returnValue = F("Ringelnatzstr.");
break;
}
case 266247:
{
returnValue = F("Ringelnatzweg");
break;
}
case 266248:
{
returnValue = F("Ringelpfad");
break;
}
case 266249:
{
returnValue = F("Ringelplattenweg");
break;
}
case 266250:
{
returnValue = F("Ringelrankenweg");
break;
}
case 266251:
{
returnValue = F("Ringelrodtweg");
break;
}
case 266252:
{
returnValue = F("Ringelsberg");
break;
}
case 266253:
{
returnValue = F("Ringelsbergstr.");
break;
}
case 266254:
{
returnValue = F("Ringelsbruch");
break;
}
case 266255:
{
returnValue = F("Ringelsche Weg");
break;
}
case 266256:
{
returnValue = F("Ringelsgasse");
break;
}
case 266257:
{
returnValue = F("Ringelshecke");
break;
}
case 266258:
{
returnValue = F("Ringelshäuschen");
break;
}
case 266259:
{
returnValue = F("Ringelshäuser Weg");
break;
}
case 266260:
{
returnValue = F("Ringelshörn");
break;
}
case 266261:
{
returnValue = F("Ringelsmühle");
break;
}
case 266262:
{
returnValue = F("Ringelsteiner Str.");
break;
}
case 266263:
{
returnValue = F("Ringelsteinhalde");
break;
}
case 266264:
{
returnValue = F("Ringelsteinweg");
break;
}
case 266265:
{
returnValue = F("Ringelstr.");
break;
}
case 266266:
{
returnValue = F("Ringelswies");
break;
}
case 266267:
{
returnValue = F("Ringelweg");
break;
}
case 266268:
{
returnValue = F("Ringelwiesenweg");
break;
}
case 266269:
{
returnValue = F("Ringen");
break;
}
case 266270:
{
returnValue = F("Ringenberg");
break;
}
case 266271:
{
returnValue = F("Ringenberger Str.");
break;
}
case 266272:
{
returnValue = F("Ringenbergstr.");
break;
}
case 266273:
{
returnValue = F("Ringendahl");
break;
}
case 266274:
{
returnValue = F("Ringener Str.");
break;
}
case 266275:
{
returnValue = F("Ringenhainer Weg");
break;
}
case 266276:
{
returnValue = F("Ringenhauser Str.");
break;
}
case 266277:
{
returnValue = F("Ringenkamp");
break;
}
case 266278:
{
returnValue = F("Ringenkuhl");
break;
}
case 266279:
{
returnValue = F("Ringenkuhler Str.");
break;
}
case 266280:
{
returnValue = F("Ringenleistr.");
break;
}
case 266281:
{
returnValue = F("Ringenrade");
break;
}
case 266282:
{
returnValue = F("Ringenstellen");
break;
}
case 266283:
{
returnValue = F("Ringental");
break;
}
case 266284:
{
returnValue = F("Ringenwalder Dorfstr.");
break;
}
case 266285:
{
returnValue = F("Ringenwalder Str.");
break;
}
case 266286:
{
returnValue = F("Ringer Graben");
break;
}
case 266287:
{
returnValue = F("Ringer Str.");
break;
}
case 266288:
{
returnValue = F("Ringerhalde");
break;
}
case 266289:
{
returnValue = F("Ringermeerweg");
break;
}
case 266290:
{
returnValue = F("Ringerottstr.");
break;
}
case 266291:
{
returnValue = F("Ringertseichelweg");
break;
}
case 266292:
{
returnValue = F("Ringerweg");
break;
}
case 266293:
{
returnValue = F("Ringesfeldchen");
break;
}
case 266294:
{
returnValue = F("Ringethaler Weg");
break;
}
case 266295:
{
returnValue = F("Ringfahrbahn Süd");
break;
}
case 266296:
{
returnValue = F("Ringflügelweg");
break;
}
case 266297:
{
returnValue = F("Ringfurter Weg");
break;
}
case 266298:
{
returnValue = F("Ringfurther Schulstr.");
break;
}
case 266299:
{
returnValue = F("Ringfurther Weg");
break;
}
case 266300:
{
returnValue = F("Ringgang");
break;
}
case 266301:
{
returnValue = F("Ringgartenstr.");
break;
}
case 266302:
{
returnValue = F("Ringgasse");
break;
}
case 266303:
{
returnValue = F("Ringgaustr.");
break;
}
case 266304:
{
returnValue = F("Ringgenburgstr.");
break;
}
case 266305:
{
returnValue = F("Ringgraben");
break;
}
case 266306:
{
returnValue = F("Ringgrabenstr.");
break;
}
case 266307:
{
returnValue = F("Ringgrube");
break;
}
case 266308:
{
returnValue = F("Ringheimer Mühlstr.");
break;
}
case 266309:
{
returnValue = F("Ringheimer Weg");
break;
}
case 266310:
{
returnValue = F("Ringhoferstr.");
break;
}
case 266311:
{
returnValue = F("Ringhofferstr.");
break;
}
case 266312:
{
returnValue = F("Ringinger Str.");
break;
}
case 266313:
{
returnValue = F("Ringinger Tal");
break;
}
case 266314:
{
returnValue = F("Ringingerstr.");
break;
}
case 266315:
{
returnValue = F("Ringkofen");
break;
}
case 266316:
{
returnValue = F("Ringkopfstr.");
break;
}
case 266317:
{
returnValue = F("Ringkuhle");
break;
}
case 266318:
{
returnValue = F("Ringlebener Str.");
break;
}
case 266319:
{
returnValue = F("Ringlebener Weg");
break;
}
case 266320:
{
returnValue = F("Ringlebstr.");
break;
}
case 266321:
{
returnValue = F("Ringleinsbrunnen");
break;
}
case 266322:
{
returnValue = F("Ringlerstr.");
break;
}
case 266323:
{
returnValue = F("Ringlesweg");
break;
}
case 266324:
{
returnValue = F("Ringlohne");
break;
}
case 266325:
{
returnValue = F("Ringmauer");
break;
}
case 266326:
{
returnValue = F("Ringmauerstr.");
break;
}
case 266327:
{
returnValue = F("Ringmauerweg");
break;
}
case 266328:
{
returnValue = F("Ringmühle");
break;
}
case 266329:
{
returnValue = F("Ringofen");
break;
}
case 266330:
{
returnValue = F("Ringofenstr.");
break;
}
case 266331:
{
returnValue = F("Ringofenweg");
break;
}
case 266332:
{
returnValue = F("Ringpark Berliner Platz");
break;
}
case 266333:
{
returnValue = F("Ringpark Haugerglacis");
break;
}
case 266334:
{
returnValue = F("Ringpark Husarenwäldchen");
break;
}
case 266335:
{
returnValue = F("Ringpark Klein-Nizza");
break;
}
case 266336:
{
returnValue = F("Ringpark Rennweger Glacis");
break;
}
case 266337:
{
returnValue = F("Ringpark Sanderglacis");
break;
}
case 266338:
{
returnValue = F("Ringpromenade");
break;
}
case 266339:
{
returnValue = F("Ringreiterplatz");
break;
}
case 266340:
{
returnValue = F("Ringreiterweg");
break;
}
case 266341:
{
returnValue = F("Ringriederwech");
break;
}
case 266342:
{
returnValue = F("Ringriederweg");
break;
}
case 266343:
{
returnValue = F("Ringsbühlweg");
break;
}
case 266344:
{
returnValue = F("Ringschnaiter Str.");
break;
}
case 266345:
{
returnValue = F("Ringsee");
break;
}
case 266346:
{
returnValue = F("Ringseestr.");
break;
}
case 266347:
{
returnValue = F("Ringseeweg");
break;
}
case 266348:
{
returnValue = F("Ringseisstr.");
break;
}
case 266349:
{
returnValue = F("Ringseisweg");
break;
}
case 266350:
{
returnValue = F("Ringsheimer Allee");
break;
}
case 266351:
{
returnValue = F("Ringsheimer Str.");
break;
}
case 266352:
{
returnValue = F("Ringsheimer Weg");
break;
}
case 266353:
{
returnValue = F("Ringsiedlung");
break;
}
case 266354:
{
returnValue = F("Ringstedtenweg");
break;
}
case 266355:
{
returnValue = F("Ringstedter Heck");
break;
}
case 266356:
{
returnValue = F("Ringstedter Weg");
break;
}
case 266357:
{
returnValue = F("Ringster Birkenweg");
break;
}
case 266358:
{
returnValue = F("Ringster Eichenweg");
break;
}
case 266359:
{
returnValue = F("Ringster Friedhofstr.");
break;
}
case 266360:
{
returnValue = F("Ringster Hüllenweg");
break;
}
case 266361:
{
returnValue = F("Ringster Waldweg");
break;
}
case 266362:
{
returnValue = F("Ringsthofstr.");
break;
}
case 266363:
{
returnValue = F("Ringstiege");
break;
}
case 266364:
{
returnValue = F("Ringstollen");
break;
}
case 266365:
{
returnValue = F("Ringstr.");
break;
}
case 266366:
{
returnValue = F("Ringstr. / Sankt-Florian-Str.");
break;
}
case 266367:
{
returnValue = F("Ringstr. Nord");
break;
}
case 266368:
{
returnValue = F("Ringstr. Ost");
break;
}
case 266369:
{
returnValue = F("Ringstr. Süd");
break;
}
case 266370:
{
returnValue = F("Ringstr. West");
break;
}
case 266371:
{
returnValue = F("Ringstraßl");
break;
}
case 266372:
{
returnValue = F("Ringsweg");
break;
}
case 266373:
{
returnValue = F("Ringteile");
break;
}
case 266374:
{
returnValue = F("Ringtunnel");
break;
}
case 266375:
{
returnValue = F("Ringwaldstr.");
break;
}
case 266376:
{
returnValue = F("Ringwall");
break;
}
case 266377:
{
returnValue = F("Ringwall-Rundwanderweg");
break;
}
case 266378:
{
returnValue = F("Ringwallstr.");
break;
}
case 266379:
{
returnValue = F("Ringwallweg");
break;
}
case 266380:
{
returnValue = F("Ringweg");
break;
}
case 266381:
{
returnValue = F("Ringweg Nord");
break;
}
case 266382:
{
returnValue = F("Ringweg Ost");
break;
}
case 266383:
{
returnValue = F("Ringweg Süd");
break;
}
case 266384:
{
returnValue = F("Ringweg West");
break;
}
case 266385:
{
returnValue = F("Ringweg zum Hoanöst");
break;
}
case 266386:
{
returnValue = F("Ringweg-Südring");
break;
}
case 266387:
{
returnValue = F("Ringweidenstr.");
break;
}
case 266388:
{
returnValue = F("Ringwiesenstr.");
break;
}
case 266389:
{
returnValue = F("Ringäcker");
break;
}
case 266390:
{
returnValue = F("Ringöfen");
break;
}
case 266391:
{
returnValue = F("Rinkenbach");
break;
}
case 266392:
{
returnValue = F("Rinkenberg");
break;
}
case 266393:
{
returnValue = F("Rinkenberger Weg");
break;
}
case 266394:
{
returnValue = F("Rinkenbergerweg");
break;
}
case 266395:
{
returnValue = F("Rinkenbergweg");
break;
}
case 266396:
{
returnValue = F("Rinkenburgerstr.");
break;
}
case 266397:
{
returnValue = F("Rinkeniser Str.");
break;
}
case 266398:
{
returnValue = F("Rinkenisstr.");
break;
}
case 266399:
{
returnValue = F("Rinkenpfuhl");
break;
}
case 266400:
{
returnValue = F("Rinkensplatz");
break;
}
case 266401:
{
returnValue = F("Rinkenteich");
break;
}
case 266402:
{
returnValue = F("Rinkeroder Weg");
break;
}
case 266403:
{
returnValue = F("Rinkerstr.");
break;
}
case 266404:
{
returnValue = F("Rinketswinkelweg");
break;
}
case 266405:
{
returnValue = F("Rinkheitenweg");
break;
}
case 266406:
{
returnValue = F("Rinkhöven");
break;
}
case 266407:
{
returnValue = F("Rinkscheid");
break;
}
case 266408:
{
returnValue = F("Rinkscheider Schützenweg");
break;
}
case 266409:
{
returnValue = F("Rinkstr.");
break;
}
case 266410:
{
returnValue = F("Rinkwasen");
break;
}
case 266411:
{
returnValue = F("Rinnbachstr.");
break;
}
case 266412:
{
returnValue = F("Rinnbachtalweg");
break;
}
case 266413:
{
returnValue = F("Rinnbaumecke");
break;
}
case 266414:
{
returnValue = F("Rinnbergweg");
break;
}
case 266415:
{
returnValue = F("Rinnchenweg");
break;
}
case 266416:
{
returnValue = F("Rinne");
break;
}
case 266417:
{
returnValue = F("Rinnebach");
break;
}
case 266418:
{
returnValue = F("Rinnebachstr.");
break;
}
case 266419:
{
returnValue = F("Rinnegasse");
break;
}
case 266420:
{
returnValue = F("Rinnelberg");
break;
}
case 266421:
{
returnValue = F("Rinnelbergweg");
break;
}
case 266422:
{
returnValue = F("Rinnelbrunnenweg");
break;
}
case 266423:
{
returnValue = F("Rinnenbachstr.");
break;
}
case 266424:
{
returnValue = F("Rinnenberg");
break;
}
case 266425:
{
returnValue = F("Rinnener Sträßle");
break;
}
case 266426:
{
returnValue = F("Rinnengasse");
break;
}
case 266427:
{
returnValue = F("Rinnengärten");
break;
}
case 266428:
{
returnValue = F("Rinnengässel");
break;
}
case 266429:
{
returnValue = F("Rinnenstr.");
break;
}
case 266430:
{
returnValue = F("Rinnenthaler Weg");
break;
}
case 266431:
{
returnValue = F("Rinnenweg");
break;
}
case 266432:
{
returnValue = F("Rinnenwiesen");
break;
}
case 266433:
{
returnValue = F("Rinnenäckerstr.");
break;
}
case 266434:
{
returnValue = F("Rinnepassage");
break;
}
case 266435:
{
returnValue = F("Rinner Str.");
break;
}
case 266436:
{
returnValue = F("Rinnerfeldstr.");
break;
}
case 266437:
{
returnValue = F("Rinnerforth");
break;
}
case 266438:
{
returnValue = F("Rinnersteig");
break;
}
case 266439:
{
returnValue = F("Rinnestr.");
break;
}
case 266440:
{
returnValue = F("Rinnetalradweg");
break;
}
case 266441:
{
returnValue = F("Rinnetalstr.");
break;
}
case 266442:
{
returnValue = F("Rinneweg");
break;
}
case 266443:
{
returnValue = F("Rinngasse");
break;
}
case 266444:
{
returnValue = F("Rinnig");
break;
}
case 266445:
{
returnValue = F("Rinnigstr.");
break;
}
case 266446:
{
returnValue = F("Rinnigweg");
break;
}
case 266447:
{
returnValue = F("Rinninger Weg");
break;
}
case 266448:
{
returnValue = F("Rinnmühlenstr.");
break;
}
case 266449:
{
returnValue = F("Rinnrain");
break;
}
case 266450:
{
returnValue = F("Rinnstr.");
break;
}
case 266451:
{
returnValue = F("Rinntalstr.");
break;
}
case 266452:
{
returnValue = F("Rinnweg");
break;
}
case 266453:
{
returnValue = F("Rinnwiesen");
break;
}
case 266454:
{
returnValue = F("Rinnwiesenweg");
break;
}
case 266455:
{
returnValue = F("Rinostr.");
break;
}
case 266456:
{
returnValue = F("Rinschbachstr.");
break;
}
case 266457:
{
returnValue = F("Rinscheidstr.");
break;
}
case 266458:
{
returnValue = F("Rinschenbrücke");
break;
}
case 266459:
{
returnValue = F("Rinscherberg");
break;
}
case 266460:
{
returnValue = F("Rinschheimer Str.");
break;
}
case 266461:
{
returnValue = F("Rinschheimer Weg");
break;
}
case 266462:
{
returnValue = F("Rinschlade");
break;
}
case 266463:
{
returnValue = F("Rinsdorfer Str.");
break;
}
case 266464:
{
returnValue = F("Rinsecker Str.");
break;
}
case 266465:
{
returnValue = F("Rinsenbergstr.");
break;
}
case 266466:
{
returnValue = F("Rinsenstr.");
break;
}
case 266467:
{
returnValue = F("Rinser-See-Str.");
break;
}
case 266468:
{
returnValue = F("Rintelenstr.");
break;
}
case 266469:
{
returnValue = F("Rintelner Str.");
break;
}
case 266470:
{
returnValue = F("Rintelner Weg");
break;
}
case 266471:
{
returnValue = F("Rintelnsche Trift");
break;
}
case 266472:
{
returnValue = F("Rintelweg");
break;
}
case 266473:
{
returnValue = F("Rintgerstr.");
break;
}
case 266474:
{
returnValue = F("Rintheimer Weg");
break;
}
case 266475:
{
returnValue = F("Rinthelgaß");
break;
}
case 266476:
{
returnValue = F("Rinther Str.");
break;
}
case 266477:
{
returnValue = F("Rintstr.");
break;
}
case 266478:
{
returnValue = F("Rinus-Van-Galen-Str.");
break;
}
case 266479:
{
returnValue = F("Rinzeldorf");
break;
}
case 266480:
{
returnValue = F("Rinzeldorfer Str.");
break;
}
case 266481:
{
returnValue = F("Rinzenberger Str.");
break;
}
case 266482:
{
returnValue = F("Rinzenbergstr.");
break;
}
case 266483:
{
returnValue = F("Rio Grande Drive");
break;
}
case 266484:
{
returnValue = F("Rio-Reiser-Str.");
break;
}
case 266485:
{
returnValue = F("Rioler Weg");
break;
}
case 266486:
{
returnValue = F("Riolerweg");
break;
}
case 266487:
{
returnValue = F("Riomer Str.");
break;
}
case 266488:
{
returnValue = F("Riottestr.");
break;
}
case 266489:
{
returnValue = F("Ripdorf");
break;
}
case 266490:
{
returnValue = F("Ripdorfer Str.");
break;
}
case 266491:
{
returnValue = F("Ripener Str.");
break;
}
case 266492:
{
returnValue = F("Ripener Weg");
break;
}
case 266493:
{
returnValue = F("Ripenstr.");
break;
}
case 266494:
{
returnValue = F("Riperstieg");
break;
}
case 266495:
{
returnValue = F("Ripeweg");
break;
}
case 266496:
{
returnValue = F("Riphausstr.");
break;
}
case 266497:
{
returnValue = F("Ripkenweg");
break;
}
case 266498:
{
returnValue = F("Rippachweg");
break;
}
case 266499:
{
returnValue = F("Rippbachstr.");
break;
}
case 266500:
{
returnValue = F("Rippbachtrail");
break;
}
case 266501:
{
returnValue = F("Rippberger Str.");
break;
}
case 266502:
{
returnValue = F("Rippchenweg");
break;
}
case 266503:
{
returnValue = F("Rippelbeckstr.");
break;
}
case 266504:
{
returnValue = F("Rippenwall");
break;
}
case 266505:
{
returnValue = F("Rippenweg");
break;
}
case 266506:
{
returnValue = F("Ripperdastr.");
break;
}
case 266507:
{
returnValue = F("Rippergstr.");
break;
}
case 266508:
{
returnValue = F("Rippershäuser Str.");
break;
}
case 266509:
{
returnValue = F("Rippersroda");
break;
}
case 266510:
{
returnValue = F("Rippersweg");
break;
}
case 266511:
{
returnValue = F("Ripperter Str.");
break;
}
case 266512:
{
returnValue = F("Ripperterstr.");
break;
}
case 266513:
{
returnValue = F("Rippertswiese");
break;
}
case 266514:
{
returnValue = F("Ripphahn");
break;
}
case 266515:
{
returnValue = F("Ripphaldensteig");
break;
}
case 266516:
{
returnValue = F("Ripphaldenweg");
break;
}
case 266517:
{
returnValue = F("Rippichaer Dorfstr.");
break;
}
case 266518:
{
returnValue = F("Rippiener Str.");
break;
}
case 266519:
{
returnValue = F("Ripplerstr.");
break;
}
case 266520:
{
returnValue = F("Rippmannstr.");
break;
}
case 266521:
{
returnValue = F("Rippoldsauer Str.");
break;
}
case 266522:
{
returnValue = F("Rippolinger Str.");
break;
}
case 266523:
{
returnValue = F("Ripsbusch");
break;
}
case 266524:
{
returnValue = F("Ripsdörnestr.");
break;
}
case 266525:
{
returnValue = F("Ripshorster Str.");
break;
}
case 266526:
{
returnValue = F("Ripuarierstr.");
break;
}
case 266527:
{
returnValue = F("Riquetstr.");
break;
}
case 266528:
{
returnValue = F("Riquewihrstr.");
break;
}
case 266529:
{
returnValue = F("Risamwai");
break;
}
case 266530:
{
returnValue = F("Risberg");
break;
}
case 266531:
{
returnValue = F("Rischbachstr.");
break;
}
case 266532:
{
returnValue = F("Rischberg");
break;
}
case 266533:
{
returnValue = F("Rischbergstr.");
break;
}
case 266534:
{
returnValue = F("Rische");
break;
}
case 266535:
{
returnValue = F("Rischenangerweg");
break;
}
case 266536:
{
returnValue = F("Rischensiek");
break;
}
case 266537:
{
returnValue = F("Rischenweg");
break;
}
case 266538:
{
returnValue = F("Rischerstr.");
break;
}
case 266539:
{
returnValue = F("Rischfeldweg");
break;
}
case 266540:
{
returnValue = F("Rischgasse");
break;
}
case 266541:
{
returnValue = F("Rischgraben");
break;
}
case 266542:
{
returnValue = F("Rischkamp");
break;
}
case 266543:
{
returnValue = F("Rischkampweg");
break;
}
case 266544:
{
returnValue = F("Rischkopfweg");
break;
}
case 266545:
{
returnValue = F("Rischlakeweg");
break;
}
case 266546:
{
returnValue = F("Rischmoorweg");
break;
}
case 266547:
{
returnValue = F("Rischmühle");
break;
}
case 266548:
{
returnValue = F("Rischmühlenriede");
break;
}
case 266549:
{
returnValue = F("Rischmühlenschleuse");
break;
}
case 266550:
{
returnValue = F("Rischmühlenstr.");
break;
}
case 266551:
{
returnValue = F("Rischmüllerufer");
break;
}
case 266552:
{
returnValue = F("Rischstr.");
break;
}
case 266553:
{
returnValue = F("Rischweg");
break;
}
case 266554:
{
returnValue = F("Rischwiese");
break;
}
case 266555:
{
returnValue = F("Rischwiesen");
break;
}
case 266556:
{
returnValue = F("Risebergweg");
break;
}
case 266557:
{
returnValue = F("Risgap");
break;
}
case 266558:
{
returnValue = F("Risgeskirchweg");
break;
}
case 266559:
{
returnValue = F("Risiberg");
break;
}
case 266560:
{
returnValue = F("Risibergstr.");
break;
}
case 266561:
{
returnValue = F("Risiusstr.");
break;
}
case 266562:
{
returnValue = F("Riskenweg");
break;
}
case 266563:
{
returnValue = F("Risker Weg");
break;
}
case 266564:
{
returnValue = F("Rislerdyk");
break;
}
case 266565:
{
returnValue = F("Risnei Weg");
break;
}
case 266566:
{
returnValue = F("Rispel");
break;
}
case 266567:
{
returnValue = F("Rispelerhelmt");
break;
}
case 266568:
{
returnValue = F("Rispeljaden");
break;
}
case 266569:
{
returnValue = F("Rispenweg");
break;
}
case 266570:
{
returnValue = F("Riss");
break;
}
case 266571:
{
returnValue = F("Rissbühlstr.");
break;
}
case 266572:
{
returnValue = F("Risselbronnen");
break;
}
case 266573:
{
returnValue = F("Risselenweg");
break;
}
case 266574:
{
returnValue = F("Risselstr.");
break;
}
case 266575:
{
returnValue = F("Rissener Stieg");
break;
}
case 266576:
{
returnValue = F("Rissener Str.");
break;
}
case 266577:
{
returnValue = F("Rissener Weg");
break;
}
case 266578:
{
returnValue = F("Rissental");
break;
}
case 266579:
{
returnValue = F("Rissenthaler Str.");
break;
}
case 266580:
{
returnValue = F("Rissenweg");
break;
}
case 266581:
{
returnValue = F("Risser Str.");
break;
}
case 266582:
{
returnValue = F("Risserkogelstr.");
break;
}
case 266583:
{
returnValue = F("Rissinger Str.");
break;
}
case 266584:
{
returnValue = F("Risslerinstr.");
break;
}
case 266585:
{
returnValue = F("Rissneital");
break;
}
case 266586:
{
returnValue = F("Rissweg");
break;
}
case 266587:
{
returnValue = F("Ristedter Dorfstr.");
break;
}
case 266588:
{
returnValue = F("Ristedter Hauptstr.");
break;
}
case 266589:
{
returnValue = F("Ristedter Str.");
break;
}
case 266590:
{
returnValue = F("Ristedter Weg");
break;
}
case 266591:
{
returnValue = F("Risterweg");
break;
}
case 266592:
{
returnValue = F("Ristfeucht");
break;
}
case 266593:
{
returnValue = F("Riststr.");
break;
}
case 266594:
{
returnValue = F("Risumer Weg");
break;
}
case 266595:
{
returnValue = F("Riswicker Str.");
break;
}
case 266596:
{
returnValue = F("Rita-Maiburg-Str.");
break;
}
case 266597:
{
returnValue = F("Rita-Mayr-Str.");
break;
}
case 266598:
{
returnValue = F("Rita-Schüßler-Weg");
break;
}
case 266599:
{
returnValue = F("Ritastr.");
break;
}
case 266600:
{
returnValue = F("Ritaweg");
break;
}
case 266601:
{
returnValue = F("Ritsche");
break;
}
case 266602:
{
returnValue = F("Ritscheider Weg");
break;
}
case 266603:
{
returnValue = F("Ritschenhäuser Str.");
break;
}
case 266604:
{
returnValue = F("Ritschenweg");
break;
}
case 266605:
{
returnValue = F("Ritscher Deichstr.");
break;
}
case 266606:
{
returnValue = F("Ritscher Hafenstr.");
break;
}
case 266607:
{
returnValue = F("Ritscher Str.");
break;
}
case 266608:
{
returnValue = F("Ritscher Weg");
break;
}
case 266609:
{
returnValue = F("Ritschermoor");
break;
}
case 266610:
{
returnValue = F("Ritschermoor Str.");
break;
}
case 266611:
{
returnValue = F("Ritscherstr.");
break;
}
case 266612:
{
returnValue = F("Ritschert");
break;
}
case 266613:
{
returnValue = F("Ritschlei");
break;
}
case 266614:
{
returnValue = F("Ritschlstr.");
break;
}
case 266615:
{
returnValue = F("Ritschlweg");
break;
}
case 266616:
{
returnValue = F("Ritschstr.");
break;
}
case 266617:
{
returnValue = F("Ritt Utt");
break;
}
case 266618:
{
returnValue = F("Rittackerweg");
break;
}
case 266619:
{
returnValue = F("Rittberg");
break;
}
case 266620:
{
returnValue = F("Rittbergstr.");
break;
}
case 266621:
{
returnValue = F("Rittbergweg");
break;
}
case 266622:
{
returnValue = F("Rittbörden");
break;
}
case 266623:
{
returnValue = F("Rittelberg");
break;
}
case 266624:
{
returnValue = F("Rittelmeierweg");
break;
}
case 266625:
{
returnValue = F("Rittelmeyerweg");
break;
}
case 266626:
{
returnValue = F("Ritteln");
break;
}
case 266627:
{
returnValue = F("Rittelsweg");
break;
}
case 266628:
{
returnValue = F("Rittenhofer Str.");
break;
}
case 266629:
{
returnValue = F("Rittenweierer Weg");
break;
}
case 266630:
{
returnValue = F("Rittenäcker");
break;
}
case 266631:
{
returnValue = F("Ritter Str.");
break;
}
case 266632:
{
returnValue = F("Ritter von Scheuring Str.");
break;
}
case 266633:
{
returnValue = F("Ritter-Alwin-Str.");
break;
}
case 266634:
{
returnValue = F("Ritter-Arnold-Str.");
break;
}
case 266635:
{
returnValue = F("Ritter-Babo-Weg");
break;
}
case 266636:
{
returnValue = F("Ritter-Burkhard-Str.");
break;
}
case 266637:
{
returnValue = F("Ritter-Christoph-Weg");
break;
}
case 266638:
{
returnValue = F("Ritter-Conrad-Weg");
break;
}
case 266639:
{
returnValue = F("Ritter-Conz-Str.");
break;
}
case 266640:
{
returnValue = F("Ritter-Degenhart-Str.");
break;
}
case 266641:
{
returnValue = F("Ritter-Eccart-Str.");
break;
}
case 266642:
{
returnValue = F("Ritter-Elbert-Str.");
break;
}
case 266643:
{
returnValue = F("Ritter-Freseken-Str.");
break;
}
case 266644:
{
returnValue = F("Ritter-Gebhard-Str.");
break;
}
case 266645:
{
returnValue = F("Ritter-Georg-Weg");
break;
}
case 266646:
{
returnValue = F("Ritter-Gerin-Weg");
break;
}
case 266647:
{
returnValue = F("Ritter-Götz-Str.");
break;
}
case 266648:
{
returnValue = F("Ritter-Hans-Ebron-Str.");
break;
}
case 266649:
{
returnValue = F("Ritter-Haug-Str.");
break;
}
case 266650:
{
returnValue = F("Ritter-Hausten-Str.");
break;
}
case 266651:
{
returnValue = F("Ritter-Heinrich-Str.");
break;
}
case 266652:
{
returnValue = F("Ritter-Hilprand-Str.");
break;
}
case 266653:
{
returnValue = F("Ritter-Honius-Str.");
break;
}
case 266654:
{
returnValue = F("Ritter-Huhn-Str.");
break;
}
case 266655:
{
returnValue = F("Ritter-Hundt-Str.");
break;
}
case 266656:
{
returnValue = F("Ritter-Jörg-Str.");
break;
}
case 266657:
{
returnValue = F("Ritter-Konrad-Str.");
break;
}
case 266658:
{
returnValue = F("Ritter-Konrad-Weg");
break;
}
case 266659:
{
returnValue = F("Ritter-Kuno-Str.");
break;
}
case 266660:
{
returnValue = F("Ritter-Kunz-Str.");
break;
}
case 266661:
{
returnValue = F("Ritter-Merz-Str.");
break;
}
case 266662:
{
returnValue = F("Ritter-Ortolf-Str.");
break;
}
case 266663:
{
returnValue = F("Ritter-Rehm-Str.");
break;
}
case 266664:
{
returnValue = F("Ritter-Reich-Str.");
break;
}
case 266665:
{
returnValue = F("Ritter-Rotbert-Str.");
break;
}
case 266666:
{
returnValue = F("Ritter-Schwalbach-Str.");
break;
}
case 266667:
{
returnValue = F("Ritter-Schwicheldt-Allee");
break;
}
case 266668:
{
returnValue = F("Ritter-Simon-Weg");
break;
}
case 266669:
{
returnValue = F("Ritter-Stephan-von-Mörlheim-Str.");
break;
}
case 266670:
{
returnValue = F("Ritter-Tillmann-Str.");
break;
}
case 266671:
{
returnValue = F("Ritter-Tilmann-Str.");
break;
}
case 266672:
{
returnValue = F("Ritter-Tuschl-Str.");
break;
}
case 266673:
{
returnValue = F("Ritter-Ulrich-Str.");
break;
}
case 266674:
{
returnValue = F("Ritter-Ulrich-Weg");
break;
}
case 266675:
{
returnValue = F("Ritter-Waltmann-Weg");
break;
}
case 266676:
{
returnValue = F("Ritter-Wirnt-Str.");
break;
}
case 266677:
{
returnValue = F("Ritter-Wolf-Str.");
break;
}
case 266678:
{
returnValue = F("Ritter-Wolf-Weg");
break;
}
case 266679:
{
returnValue = F("Ritter-von-Aldebert-Str.");
break;
}
case 266680:
{
returnValue = F("Ritter-von-Bach-Str.");
break;
}
case 266681:
{
returnValue = F("Ritter-von-Buß-Str.");
break;
}
case 266682:
{
returnValue = F("Ritter-von-Eppo-Str.");
break;
}
case 266683:
{
returnValue = F("Ritter-von-Essendorf-Str.");
break;
}
case 266684:
{
returnValue = F("Ritter-von-Eyb-Str.");
break;
}
case 266685:
{
returnValue = F("Ritter-von-Flörsheim-Str.");
break;
}
case 266686:
{
returnValue = F("Ritter-von-Geißler-Str.");
break;
}
case 266687:
{
returnValue = F("Ritter-von-Gluck-Str.");
break;
}
case 266688:
{
returnValue = F("Ritter-von-Gluck-Weg");
break;
}
case 266689:
{
returnValue = F("Ritter-von-Hagen-Str.");
break;
}
case 266690:
{
returnValue = F("Ritter-von-Halt-Str.");
break;
}
case 266691:
{
returnValue = F("Ritter-von-Heid-Str.");
break;
}
case 266692:
{
returnValue = F("Ritter-von-Heigl-Str.");
break;
}
case 266693:
{
returnValue = F("Ritter-von-Hellberg-Str.");
break;
}
case 266694:
{
returnValue = F("Ritter-von-Herkomer-Str.");
break;
}
case 266695:
{
returnValue = F("Ritter-von-Hofer-Steg");
break;
}
case 266696:
{
returnValue = F("Ritter-von-Hofer-Weg");
break;
}
case 266697:
{
returnValue = F("Ritter-von-Hofmann-Str.");
break;
}
case 266698:
{
returnValue = F("Ritter-von-Hund-Str.");
break;
}
case 266699:
{
returnValue = F("Ritter-von-Kastner-Str.");
break;
}
case 266700:
{
returnValue = F("Ritter-von-Lang Str.");
break;
}
case 266701:
{
returnValue = F("Ritter-von-Lang-Allee");
break;
}
case 266702:
{
returnValue = F("Ritter-von-Lang-Str.");
break;
}
case 266703:
{
returnValue = F("Ritter-von-Lex-Weg");
break;
}
case 266704:
{
returnValue = F("Ritter-von-Marx-Brücke");
break;
}
case 266705:
{
returnValue = F("Ritter-von-Müller-Str.");
break;
}
case 266706:
{
returnValue = F("Ritter-von-Ochsenstein-Str.");
break;
}
case 266707:
{
returnValue = F("Ritter-von-Pflug-Str.");
break;
}
case 266708:
{
returnValue = F("Ritter-von-Raffler-Str.");
break;
}
case 266709:
{
returnValue = F("Ritter-von-Reichel-Str.");
break;
}
case 266710:
{
returnValue = F("Ritter-von-Rot-Platz");
break;
}
case 266711:
{
returnValue = F("Ritter-von-Schmauß-Str.");
break;
}
case 266712:
{
returnValue = F("Ritter-von-Schmitt-Str.");
break;
}
case 266713:
{
returnValue = F("Ritter-von-Schoch-Str.");
break;
}
case 266714:
{
returnValue = F("Ritter-von-Schramm-Str.");
break;
}
case 266715:
{
returnValue = F("Ritter-von-Spix-Str.");
break;
}
case 266716:
{
returnValue = F("Ritter-von-Stain Str.");
break;
}
case 266717:
{
returnValue = F("Ritter-von-Türk-Str.");
break;
}
case 266718:
{
returnValue = F("Ritter-von-Wagner-Str.");
break;
}
case 266719:
{
returnValue = F("Ritter-von-Walter-Str.");
break;
}
case 266720:
{
returnValue = F("Ritter-von-Weingarten-Str.");
break;
}
case 266721:
{
returnValue = F("Ritterallee");
break;
}
case 266722:
{
returnValue = F("Ritteralm");
break;
}
case 266723:
{
returnValue = F("Ritteralmweg");
break;
}
case 266724:
{
returnValue = F("Ritterangerweg");
break;
}
case 266725:
{
returnValue = F("Ritterbachstr.");
break;
}
case 266726:
{
returnValue = F("Ritterbachweg");
break;
}
case 266727:
{
returnValue = F("Ritterberg");
break;
}
case 266728:
{
returnValue = F("Ritterbergweg");
break;
}
case 266729:
{
returnValue = F("Ritterbruch");
break;
}
case 266730:
{
returnValue = F("Ritterbusch");
break;
}
case 266731:
{
returnValue = F("Ritterbüschel");
break;
}
case 266732:
{
returnValue = F("Ritterfalterweg");
break;
}
case 266733:
{
returnValue = F("Ritterflur");
break;
}
case 266734:
{
returnValue = F("Rittergarten");
break;
}
case 266735:
{
returnValue = F("Rittergartenstr.");
break;
}
case 266736:
{
returnValue = F("Rittergasse");
break;
}
case 266737:
{
returnValue = F("Rittergut");
break;
}
case 266738:
{
returnValue = F("Rittergut Altenrode");
break;
}
case 266739:
{
returnValue = F("Rittergut Birkhof");
break;
}
case 266740:
{
returnValue = F("Rittergut Brokeloh");
break;
}
case 266741:
{
returnValue = F("Rittergut Osthoff");
break;
}
case 266742:
{
returnValue = F("Rittergut Reez");
break;
}
case 266743:
{
returnValue = F("Rittergut Schlüsselburg");
break;
}
case 266744:
{
returnValue = F("Rittergutsberg");
break;
}
case 266745:
{
returnValue = F("Rittergutsfeldweg");
break;
}
case 266746:
{
returnValue = F("Rittergutsgasse");
break;
}
case 266747:
{
returnValue = F("Rittergutshof");
break;
}
case 266748:
{
returnValue = F("Rittergutspark");
break;
}
case 266749:
{
returnValue = F("Rittergutspark Klingenberg");
break;
}
case 266750:
{
returnValue = F("Rittergutspark Zwethau");
break;
}
case 266751:
{
returnValue = F("Rittergutsring");
break;
}
case 266752:
{
returnValue = F("Rittergutsstr.");
break;
}
case 266753:
{
returnValue = F("Rittergutstr.");
break;
}
case 266754:
{
returnValue = F("Rittergutsweg");
break;
}
case 266755:
{
returnValue = F("Ritterhagen");
break;
}
case 266756:
{
returnValue = F("Ritterhaldenweg");
break;
}
case 266757:
{
returnValue = F("Ritterhof");
break;
}
case 266758:
{
returnValue = F("Ritterhofweg");
break;
}
case 266759:
{
returnValue = F("Ritterholz");
break;
}
case 266760:
{
returnValue = F("Ritterhuder Str.");
break;
}
case 266761:
{
returnValue = F("Ritterkamp");
break;
}
case 266762:
{
returnValue = F("Ritterkampstr.");
break;
}
case 266763:
{
returnValue = F("Ritterkaut");
break;
}
case 266764:
{
returnValue = F("Ritterkreuzstr.");
break;
}
case 266765:
{
returnValue = F("Ritterland");
break;
}
case 266766:
{
returnValue = F("Ritterlingstr.");
break;
}
case 266767:
{
returnValue = F("Ritterlöh");
break;
}
case 266768:
{
returnValue = F("Ritterlöhstr.");
break;
}
case 266769:
{
returnValue = F("Rittermannshagen");
break;
}
case 266770:
{
returnValue = F("Rittermannshagen Hof");
break;
}
case 266771:
{
returnValue = F("Rittern");
break;
}
case 266772:
{
returnValue = F("Ritterne Randweg");
break;
}
case 266773:
{
returnValue = F("Ritterort");
break;
}
case 266774:
{
returnValue = F("Ritterpassage");
break;
}
case 266775:
{
returnValue = F("Ritterpfad");
break;
}
case 266776:
{
returnValue = F("Ritterplan");
break;
}
case 266777:
{
returnValue = F("Ritterplatz");
break;
}
case 266778:
{
returnValue = F("Ritterrain");
break;
}
case 266779:
{
returnValue = F("Ritterring");
break;
}
case 266780:
{
returnValue = F("Rittersbach");
break;
}
case 266781:
{
returnValue = F("Rittersbacher Str.");
break;
}
case 266782:
{
returnValue = F("Rittersbacher Weg");
break;
}
case 266783:
{
returnValue = F("Rittersbachstr.");
break;
}
case 266784:
{
returnValue = F("Rittersbachweg");
break;
}
case 266785:
{
returnValue = F("Rittersberg");
break;
}
case 266786:
{
returnValue = F("Rittersberger Siedlung");
break;
}
case 266787:
{
returnValue = F("Rittersberger Str.");
break;
}
case 266788:
{
returnValue = F("Rittersbergstr.");
break;
}
case 266789:
{
returnValue = F("Rittersborner Weg");
break;
}
case 266790:
{
returnValue = F("Rittersbrunnenstr.");
break;
}
case 266791:
{
returnValue = F("Rittersbächle");
break;
}
case 266792:
{
returnValue = F("Ritterschaftsstr.");
break;
}
case 266793:
{
returnValue = F("Ritterscher Weg");
break;
}
case 266794:
{
returnValue = F("Rittersdorfer Str.");
break;
}
case 266795:
{
returnValue = F("Rittersdorfer Weg");
break;
}
case 266796:
{
returnValue = F("Rittersdorferstr.");
break;
}
case 266797:
{
returnValue = F("Ritterseestr.");
break;
}
case 266798:
{
returnValue = F("Ritterseifen");
break;
}
case 266799:
{
returnValue = F("Ritterseifener Weg");
break;
}
case 266800:
{
returnValue = F("Rittersfeld");
break;
}
case 266801:
{
returnValue = F("Rittersgrund");
break;
}
case 266802:
{
returnValue = F("Rittersgrüner Flößbahn");
break;
}
case 266803:
{
returnValue = F("Rittersgrüner Str.");
break;
}
case 266804:
{
returnValue = F("Rittershausstr.");
break;
}
case 266805:
{
returnValue = F("Rittershofer Str.");
break;
}
case 266806:
{
returnValue = F("Rittershofstr.");
break;
}
case 266807:
{
returnValue = F("Rittershäuser Str.");
break;
}
case 266808:
{
returnValue = F("Rittersitz");
break;
}
case 266809:
{
returnValue = F("Ritterskamp");
break;
}
case 266810:
{
returnValue = F("Rittersmühle");
break;
}
case 266811:
{
returnValue = F("Ritterspfadweg");
break;
}
case 266812:
{
returnValue = F("Ritterspornanger");
break;
}
case 266813:
{
returnValue = F("Ritterspornstr.");
break;
}
case 266814:
{
returnValue = F("Ritterspornweg");
break;
}
case 266815:
{
returnValue = F("Rittersteig");
break;
}
case 266816:
{
returnValue = F("Ritterstieg");
break;
}
case 266817:
{
returnValue = F("Ritterstiftstr.");
break;
}
case 266818:
{
returnValue = F("Ritterstr.");
break;
}
case 266819:
{
returnValue = F("Rittersturzstr.");
break;
}
case 266820:
{
returnValue = F("Rittersweg");
break;
}
case 266821:
{
returnValue = F("Ritterswörther Allee");
break;
}
case 266822:
{
returnValue = F("Ritterteichstr.");
break;
}
case 266823:
{
returnValue = F("Rittertorsträssle");
break;
}
case 266824:
{
returnValue = F("Ritterweg");
break;
}
case 266825:
{
returnValue = F("Ritteröder Str.");
break;
}
case 266826:
{
returnValue = F("Rittgartener Str.");
break;
}
case 266827:
{
returnValue = F("Rittgasse");
break;
}
case 266828:
{
returnValue = F("Rittgrabenstr.");
break;
}
case 266829:
{
returnValue = F("Rittieroder Str.");
break;
}
case 266830:
{
returnValue = F("Rittieröder Dorfstr.");
break;
}
case 266831:
{
returnValue = F("Rittieröder Gatze");
break;
}
case 266832:
{
returnValue = F("Rittieröder Helleweg");
break;
}
case 266833:
{
returnValue = F("Rittieröder Kirchweg");
break;
}
case 266834:
{
returnValue = F("Rittieröder Klappe");
break;
}
case 266835:
{
returnValue = F("Rittieröder Krugwinkel");
break;
}
case 266836:
{
returnValue = F("Rittieröder Mühlberg");
break;
}
case 266837:
{
returnValue = F("Rittieröder Pfingstanger");
break;
}
case 266838:
{
returnValue = F("Rittinger Allee");
break;
}
case 266839:
{
returnValue = F("Rittistr.");
break;
}
case 266840:
{
returnValue = F("Rittiwaldweg");
break;
}
case 266841:
{
returnValue = F("Rittiweg");
break;
}
case 266842:
{
returnValue = F("Rittlehnstr.");
break;
}
case 266843:
{
returnValue = F("Rittlen");
break;
}
case 266844:
{
returnValue = F("Rittlenstr.");
break;
}
case 266845:
{
returnValue = F("Rittlerweg");
break;
}
case 266846:
{
returnValue = F("Rittmannshäuser Str.");
break;
}
case 266847:
{
returnValue = F("Rittmeiers Hof");
break;
}
case 266848:
{
returnValue = F("Rittmeistersland");
break;
}
case 266849:
{
returnValue = F("Rittmitzer Str.");
break;
}
case 266850:
{
returnValue = F("Rittnertstr.");
break;
}
case 266851:
{
returnValue = F("Rittrumer Esch");
break;
}
case 266852:
{
returnValue = F("Rittrumer Kirchweg");
break;
}
case 266853:
{
returnValue = F("Rittrumer Str.");
break;
}
case 266854:
{
returnValue = F("Rittstege");
break;
}
case 266855:
{
returnValue = F("Rittsteig");
break;
}
case 266856:
{
returnValue = F("Rittsteiger Str.");
break;
}
case 266857:
{
returnValue = F("Rittweg");
break;
}
case 266858:
{
returnValue = F("Rittweg (Röttweg)");
break;
}
case 266859:
{
returnValue = F("Rittwiese");
break;
}
case 266860:
{
returnValue = F("Ritut");
break;
}
case 266861:
{
returnValue = F("Ritzbach");
break;
}
case 266862:
{
returnValue = F("Ritzbruch");
break;
}
case 266863:
{
returnValue = F("Ritzbrucher Weg");
break;
}
case 266864:
{
returnValue = F("Ritzebeker Weg");
break;
}
case 266865:
{
returnValue = F("Ritzebühl");
break;
}
case 266866:
{
returnValue = F("Ritzebütteler Weg");
break;
}
case 266867:
{
returnValue = F("Ritzebüttler Weg");
break;
}
case 266868:
{
returnValue = F("Ritzenberg");
break;
}
case 266869:
{
returnValue = F("Ritzenberger Dorfstr.");
break;
}
case 266870:
{
returnValue = F("Ritzenberger Weg");
break;
}
case 266871:
{
returnValue = F("Ritzenburg");
break;
}
case 266872:
{
returnValue = F("Ritzenbütteler Str.");
break;
}
case 266873:
{
returnValue = F("Ritzengarten");
break;
}
case 266874:
{
returnValue = F("Ritzentalstr.");
break;
}
case 266875:
{
returnValue = F("Ritzer Dorfstr.");
break;
}
case 266876:
{
returnValue = F("Ritzer Stegel");
break;
}
case 266877:
{
returnValue = F("Ritzer Str.");
break;
}
case 266878:
{
returnValue = F("Ritzerbergstr.");
break;
}
case 266879:
{
returnValue = F("Ritzereiweg");
break;
}
case 266880:
{
returnValue = F("Ritzerfelder Str.");
break;
}
case 266881:
{
returnValue = F("Ritzerfeldstr.");
break;
}
case 266882:
{
returnValue = F("Ritzerstr.");
break;
}
case 266883:
{
returnValue = F("Ritzerweg");
break;
}
case 266884:
{
returnValue = F("Ritzging");
break;
}
case 266885:
{
returnValue = F("Ritzhaubstr.");
break;
}
case 266886:
{
returnValue = F("Ritzhauptstr.");
break;
}
case 266887:
{
returnValue = F("Ritzhörner Weg");
break;
}
case 266888:
{
returnValue = F("Ritzhütte");
break;
}
case 266889:
{
returnValue = F("Ritzibuckweg");
break;
}
case 266890:
{
returnValue = F("Ritzingerstr.");
break;
}
case 266891:
{
returnValue = F("Ritzlebener Str.");
break;
}
case 266892:
{
returnValue = F("Ritzlersreuth");
break;
}
case 266893:
{
returnValue = F("Ritzlerstr.");
break;
}
case 266894:
{
returnValue = F("Ritzmais");
break;
}
case 266895:
{
returnValue = F("Ritzmaiser Str.");
break;
}
case 266896:
{
returnValue = F("Ritzmannshofer Str.");
break;
}
case 266897:
{
returnValue = F("Ritzmannshofer Weg");
break;
}
case 266898:
{
returnValue = F("Ritzmühlenweg");
break;
}
case 266899:
{
returnValue = F("Ritzpfad");
break;
}
case 266900:
{
returnValue = F("Ritzstr.");
break;
}
case 266901:
{
returnValue = F("Ritzweg");
break;
}
case 266902:
{
returnValue = F("Ritzwiesenstr.");
break;
}
case 266903:
{
returnValue = F("Ritzwiestr.");
break;
}
case 266904:
{
returnValue = F("Riva-del-Garda-Platz");
break;
}
case 266905:
{
returnValue = F("Rivanerhof");
break;
}
case 266906:
{
returnValue = F("Rivanerstr.");
break;
}
case 266907:
{
returnValue = F("Rivanerweg");
break;
}
case 266908:
{
returnValue = F("Rivekampstr.");
break;
}
case 266909:
{
returnValue = F("River Road");
break;
}
case 266910:
{
returnValue = F("River-Road-Tunnel");
break;
}
case 266911:
{
returnValue = F("Riverastr.");
break;
}
case 266912:
{
returnValue = F("Riverisstr.");
break;
}
case 266913:
{
returnValue = F("Riversideplatz");
break;
}
case 266914:
{
returnValue = F("Riversplatz");
break;
}
case 266915:
{
returnValue = F("Rivesellstr.");
break;
}
case 266916:
{
returnValue = F("Riviera");
break;
}
case 266917:
{
returnValue = F("Riviera-Weg");
break;
}
case 266918:
{
returnValue = F("Rivierasteg");
break;
}
case 266919:
{
returnValue = F("Riviusstr.");
break;
}
case 266920:
{
returnValue = F("Riwelscheid");
break;
}
case 266921:
{
returnValue = F("Rixbecker Str.");
break;
}
case 266922:
{
returnValue = F("Rixdorfer Redder");
break;
}
case 266923:
{
returnValue = F("Rixdorfer Str.");
break;
}
case 266924:
{
returnValue = F("Rixdorfstr.");
break;
}
case 266925:
{
returnValue = F("Rixelstr.");
break;
}
case 266926:
{
returnValue = F("Rixenburgweg");
break;
}
case 266927:
{
returnValue = F("Rixener Dorfstr.");
break;
}
case 266928:
{
returnValue = F("Rixener Str.");
break;
}
case 266929:
{
returnValue = F("Rixensart-Str.");
break;
}
case 266930:
{
returnValue = F("Rixenweg");
break;
}
case 266931:
{
returnValue = F("Rixfelder Str.");
break;
}
case 266932:
{
returnValue = F("Rixfelder Weg");
break;
}
case 266933:
{
returnValue = F("Rixförde");
break;
}
case 266934:
{
returnValue = F("Rixförder Str.");
break;
}
case 266935:
{
returnValue = F("Rixhöfter Weg");
break;
}
case 266936:
{
returnValue = F("Rixstr.");
break;
}
case 266937:
{
returnValue = F("Rixwarf");
break;
}
case 266938:
{
returnValue = F("Riznerweg");
break;
}
case 266939:
{
returnValue = F("Rizzastr.");
break;
}
case 266940:
{
returnValue = F("Rißbacher Str.");
break;
}
case 266941:
{
returnValue = F("Rißbachgasse");
break;
}
case 266942:
{
returnValue = F("Rißbergweg");
break;
}
case 266943:
{
returnValue = F("Rißbrücker Weg");
break;
}
case 266944:
{
returnValue = F("Rißbuckelweg");
break;
}
case 266945:
{
returnValue = F("Rißbühn");
break;
}
case 266946:
{
returnValue = F("Rißdorfer Weg");
break;
}
case 266947:
{
returnValue = F("Rißeckstr.");
break;
}
case 266948:
{
returnValue = F("Rißegg Steige");
break;
}
case 266949:
{
returnValue = F("Rißegger Steige");
break;
}
case 266950:
{
returnValue = F("Rißegger Str.");
break;
}
case 266951:
{
returnValue = F("Rißfeldstr.");
break;
}
case 266952:
{
returnValue = F("Rißgasse");
break;
}
case 266953:
{
returnValue = F("Rißhaldenweg");
break;
}
case 266954:
{
returnValue = F("Rißhaldeweg");
break;
}
case 266955:
{
returnValue = F("Rißhöfer Weg");
break;
}
case 266956:
{
returnValue = F("Rißkopfstr.");
break;
}
case 266957:
{
returnValue = F("Rißlinger Str.");
break;
}
case 266958:
{
returnValue = F("Rißlochweg");
break;
}
case 266959:
{
returnValue = F("Rißmahd");
break;
}
case 266960:
{
returnValue = F("Rißmannsdorf");
break;
}
case 266961:
{
returnValue = F("Rißmecke");
break;
}
case 266962:
{
returnValue = F("Rißmiesweg");
break;
}
case 266963:
{
returnValue = F("Rißmüllerplatz");
break;
}
case 266964:
{
returnValue = F("Rißstr.");
break;
}
case 266965:
{
returnValue = F("Rißtal");
break;
}
case 266966:
{
returnValue = F("Rißtisser Str.");
break;
}
case 266967:
{
returnValue = F("Rißweg");
break;
}
case 266968:
{
returnValue = F("Roadiek");
break;
}
case 266969:
{
returnValue = F("Roald-Amundsen-Str.");
break;
}
case 266970:
{
returnValue = F("Roanner Str.");
break;
}
case 266971:
{
returnValue = F("Roaschmiedstr.");
break;
}
case 266972:
{
returnValue = F("Robain");
break;
}
case 266973:
{
returnValue = F("Robbe");
break;
}
case 266974:
{
returnValue = F("Robbelshan");
break;
}
case 266975:
{
returnValue = F("Robbenbank");
break;
}
case 266976:
{
returnValue = F("Robbengasse");
break;
}
case 266977:
{
returnValue = F("Robbenplate");
break;
}
case 266978:
{
returnValue = F("Robbenschlägerweg");
break;
}
case 266979:
{
returnValue = F("Robbenstr.");
break;
}
case 266980:
{
returnValue = F("Robbenweg");
break;
}
case 266981:
{
returnValue = F("Robberskamp");
break;
}
case 266982:
{
returnValue = F("Robchestr.");
break;
}
case 266983:
{
returnValue = F("Robelsberg");
break;
}
case 266984:
{
returnValue = F("Roben");
break;
}
case 266985:
{
returnValue = F("Robend");
break;
}
case 266986:
{
returnValue = F("Robender Feld");
break;
}
case 266987:
{
returnValue = F("Robener Grund");
break;
}
case 266988:
{
returnValue = F("Robener Str.");
break;
}
case 266989:
{
returnValue = F("Robenkamp");
break;
}
case 266990:
{
returnValue = F("Robensstr.");
break;
}
case 266991:
{
returnValue = F("Rober-Koch-Str.");
break;
}
case 266992:
{
returnValue = F("Robergstr.");
break;
}
case 266993:
{
returnValue = F("Roberner Str.");
break;
}
case 266994:
{
returnValue = F("Robert Bosch Str.");
break;
}
case 266995:
{
returnValue = F("Robert Oettel");
break;
}
case 266996:
{
returnValue = F("Robert Schreiner Weg 185l");
break;
}
case 266997:
{
returnValue = F("Robert-Adam-Weg");
break;
}
case 266998:
{
returnValue = F("Robert-Antelme-Weg");
break;
}
case 266999:
{
returnValue = F("Robert-Baberske-Str.");
break;
}
case 267000:
{
returnValue = F("Robert-Bauer-Str.");
break;
}
case 267001:
{
returnValue = F("Robert-Beike-Str.");
break;
}
case 267002:
{
returnValue = F("Robert-Beltz-Str.");
break;
}
case 267003:
{
returnValue = F("Robert-Beltz-Weg");
break;
}
case 267004:
{
returnValue = F("Robert-Berndt-Str.");
break;
}
case 267005:
{
returnValue = F("Robert-Birkner-Str.");
break;
}
case 267006:
{
returnValue = F("Robert-Birkner-Weg");
break;
}
case 267007:
{
returnValue = F("Robert-Bloch-Str.");
break;
}
case 267008:
{
returnValue = F("Robert-Blohm-Weg");
break;
}
case 267009:
{
returnValue = F("Robert-Blum-Platz");
break;
}
case 267010:
{
returnValue = F("Robert-Blum-Str.");
break;
}
case 267011:
{
returnValue = F("Robert-Blum-Weg");
break;
}
case 267012:
{
returnValue = F("Robert-Boehringer-Str.");
break;
}
case 267013:
{
returnValue = F("Robert-Bopp-Str.");
break;
}
case 267014:
{
returnValue = F("Robert-Bosch-Allee");
break;
}
case 267015:
{
returnValue = F("Robert-Bosch-Breite");
break;
}
case 267016:
{
returnValue = F("Robert-Bosch-Ring");
break;
}
case 267017:
{
returnValue = F("Robert-Bosch-Str.");
break;
}
case 267018:
{
returnValue = F("Robert-Bosch-Weg");
break;
}
case 267019:
{
returnValue = F("Robert-Bosle-Str.");
break;
}
case 267020:
{
returnValue = F("Robert-Bothe-Str.");
break;
}
case 267021:
{
returnValue = F("Robert-Braum-Str.");
break;
}
case 267022:
{
returnValue = F("Robert-Brauner-Platz");
break;
}
case 267023:
{
returnValue = F("Robert-Brendel-Str.");
break;
}
case 267024:
{
returnValue = F("Robert-Brenner-Str.");
break;
}
case 267025:
{
returnValue = F("Robert-Britsch-Str.");
break;
}
case 267026:
{
returnValue = F("Robert-Bunsen-Str.");
break;
}
case 267027:
{
returnValue = F("Robert-Bunsen-Weg");
break;
}
case 267028:
{
returnValue = F("Robert-Busse-Str.");
break;
}
case 267029:
{
returnValue = F("Robert-Büchner-Str.");
break;
}
case 267030:
{
returnValue = F("Robert-Bürkle-Str.");
break;
}
case 267031:
{
returnValue = F("Robert-Cauer-Str.");
break;
}
case 267032:
{
returnValue = F("Robert-Daiser-Str.");
break;
}
case 267033:
{
returnValue = F("Robert-Dannemann-Str.");
break;
}
case 267034:
{
returnValue = F("Robert-Dannemann-Weg");
break;
}
case 267035:
{
returnValue = F("Robert-Danz-Str.");
break;
}
case 267036:
{
returnValue = F("Robert-Dittmann-Str.");
break;
}
case 267037:
{
returnValue = F("Robert-Dißmann-Str.");
break;
}
case 267038:
{
returnValue = F("Robert-Dohrmann-Platz");
break;
}
case 267039:
{
returnValue = F("Robert-Dörflinger-Str.");
break;
}
case 267040:
{
returnValue = F("Robert-Dürbeck-Weg");
break;
}
case 267041:
{
returnValue = F("Robert-Ebert-Gasse");
break;
}
case 267042:
{
returnValue = F("Robert-Edler-Weg");
break;
}
case 267043:
{
returnValue = F("Robert-Eichenauer-Weg");
break;
}
case 267044:
{
returnValue = F("Robert-Eitner-Platz");
break;
}
case 267045:
{
returnValue = F("Robert-Epple-Weg");
break;
}
case 267046:
{
returnValue = F("Robert-Erbe-Str.");
break;
}
case 267047:
{
returnValue = F("Robert-Everlien-Platz");
break;
}
case 267048:
{
returnValue = F("Robert-Fischbach-Str.");
break;
}
case 267049:
{
returnValue = F("Robert-Fischer-Str.");
break;
}
case 267050:
{
returnValue = F("Robert-Florin-Str.");
break;
}
case 267051:
{
returnValue = F("Robert-Franck-Allee");
break;
}
case 267052:
{
returnValue = F("Robert-Franck-Str.");
break;
}
case 267053:
{
returnValue = F("Robert-Franke-Str.");
break;
}
case 267054:
{
returnValue = F("Robert-Frese-Str.");
break;
}
case 267055:
{
returnValue = F("Robert-Friese-Str.");
break;
}
case 267056:
{
returnValue = F("Robert-Füller-Weg");
break;
}
case 267057:
{
returnValue = F("Robert-Fürbringer-Str.");
break;
}
case 267058:
{
returnValue = F("Robert-Gaiser-Str.");
break;
}
case 267059:
{
returnValue = F("Robert-Galler-Str.");
break;
}
case 267060:
{
returnValue = F("Robert-Garbe-Weg");
break;
}
case 267061:
{
returnValue = F("Robert-Georgi-Weg");
break;
}
case 267062:
{
returnValue = F("Robert-Geritzmann-Höfe");
break;
}
case 267063:
{
returnValue = F("Robert-Gernhardt-Platz");
break;
}
case 267064:
{
returnValue = F("Robert-Gerwig-Str.");
break;
}
case 267065:
{
returnValue = F("Robert-Gies-Str.");
break;
}
case 267066:
{
returnValue = F("Robert-Gleichauf-Platz");
break;
}
case 267067:
{
returnValue = F("Robert-Grabski-Str.");
break;
}
case 267068:
{
returnValue = F("Robert-Gradmann-Str.");
break;
}
case 267069:
{
returnValue = F("Robert-Gradmann-Weg");
break;
}
case 267070:
{
returnValue = F("Robert-Grießbach-Str.");
break;
}
case 267071:
{
returnValue = F("Robert-Grootens-Platz");
break;
}
case 267072:
{
returnValue = F("Robert-Grötzsch-Str.");
break;
}
case 267073:
{
returnValue = F("Robert-Grünewald-Weg");
break;
}
case 267074:
{
returnValue = F("Robert-Guezou-Str.");
break;
}
case 267075:
{
returnValue = F("Robert-Gärtner-Str.");
break;
}
case 267076:
{
returnValue = F("Robert-Götz-Str.");
break;
}
case 267077:
{
returnValue = F("Robert-Haller-Ring");
break;
}
case 267078:
{
returnValue = F("Robert-Hanning-Str.");
break;
}
case 267079:
{
returnValue = F("Robert-Hardt-Str.");
break;
}
case 267080:
{
returnValue = F("Robert-Hartl-Str.");
break;
}
case 267081:
{
returnValue = F("Robert-Hartwig-Str.");
break;
}
case 267082:
{
returnValue = F("Robert-Havemann-Str.");
break;
}
case 267083:
{
returnValue = F("Robert-Heck-Str.");
break;
}
case 267084:
{
returnValue = F("Robert-Heger-Weg");
break;
}
case 267085:
{
returnValue = F("Robert-Heil-Str.");
break;
}
case 267086:
{
returnValue = F("Robert-Hesse-Str.");
break;
}
case 267087:
{
returnValue = F("Robert-Hiller-Str.");
break;
}
case 267088:
{
returnValue = F("Robert-Hoffmann-Str.");
break;
}
case 267089:
{
returnValue = F("Robert-Hofmann-Str.");
break;
}
case 267090:
{
returnValue = F("Robert-Holzer-Str.");
break;
}
case 267091:
{
returnValue = F("Robert-Hose-Str.");
break;
}
case 267092:
{
returnValue = F("Robert-Huelsemann-Str.");
break;
}
case 267093:
{
returnValue = F("Robert-Hülsemann-Str.");
break;
}
case 267094:
{
returnValue = F("Robert-Hülsemann-Weg");
break;
}
case 267095:
{
returnValue = F("Robert-Jacobi-Str.");
break;
}
case 267096:
{
returnValue = F("Robert-Jansen-Str.");
break;
}
case 267097:
{
returnValue = F("Robert-Jeanrond-Bürgerpark");
break;
}
case 267098:
{
returnValue = F("Robert-Jungk-Str.");
break;
}
case 267099:
{
returnValue = F("Robert-Jänicke-Str.");
break;
}
case 267100:
{
returnValue = F("Robert-Kaess-Str.");
break;
}
case 267101:
{
returnValue = F("Robert-Kahn-Weg");
break;
}
case 267102:
{
returnValue = F("Robert-Kahrmann-Str.");
break;
}
case 267103:
{
returnValue = F("Robert-Katzer-Weg");
break;
}
case 267104:
{
returnValue = F("Robert-Kempel-Str.");
break;
}
case 267105:
{
returnValue = F("Robert-Kircher-Str.");
break;
}
case 267106:
{
returnValue = F("Robert-Kirchhoff-Str.");
break;
}
case 267107:
{
returnValue = F("Robert-Klaas-Str.");
break;
}
case 267108:
{
returnValue = F("Robert-Kleinert-Str.");
break;
}
case 267109:
{
returnValue = F("Robert-Klett-Ring");
break;
}
case 267110:
{
returnValue = F("Robert-Kling-Str.");
break;
}
case 267111:
{
returnValue = F("Robert-Knapp-Str.");
break;
}
case 267112:
{
returnValue = F("Robert-Knecht-Weg");
break;
}
case 267113:
{
returnValue = F("Robert-Koch Str.");
break;
}
case 267114:
{
returnValue = F("Robert-Koch-Allee");
break;
}
case 267115:
{
returnValue = F("Robert-Koch-Park");
break;
}
case 267116:
{
returnValue = F("Robert-Koch-Platz");
break;
}
case 267117:
{
returnValue = F("Robert-Koch-Ring");
break;
}
case 267118:
{
returnValue = F("Robert-Koch-Siedlung");
break;
}
case 267119:
{
returnValue = F("Robert-Koch-Str.");
break;
}
case 267120:
{
returnValue = F("Robert-Koch-Weg");
break;
}
case 267121:
{
returnValue = F("Robert-Kochstr.");
break;
}
case 267122:
{
returnValue = F("Robert-Kolb-Weg");
break;
}
case 267123:
{
returnValue = F("Robert-Koldewey-Str.");
break;
}
case 267124:
{
returnValue = F("Robert-Kothe-Str.");
break;
}
case 267125:
{
returnValue = F("Robert-Kracht-Str.");
break;
}
case 267126:
{
returnValue = F("Robert-Kratt-Str.");
break;
}
case 267127:
{
returnValue = F("Robert-Kronfeld-Str.");
break;
}
case 267128:
{
returnValue = F("Robert-Krups-Str.");
break;
}
case 267129:
{
returnValue = F("Robert-Kuhlmann-Weg");
break;
}
case 267130:
{
returnValue = F("Robert-Kämmerer-Str.");
break;
}
case 267131:
{
returnValue = F("Robert-König-Str.");
break;
}
case 267132:
{
returnValue = F("Robert-Kühn-Weg");
break;
}
case 267133:
{
returnValue = F("Robert-Lauterborn-Str.");
break;
}
case 267134:
{
returnValue = F("Robert-Lauth-Str.");
break;
}
case 267135:
{
returnValue = F("Robert-Lehmann-Ring");
break;
}
case 267136:
{
returnValue = F("Robert-Lehmann-Str.");
break;
}
case 267137:
{
returnValue = F("Robert-Leube-Weg");
break;
}
case 267138:
{
returnValue = F("Robert-Limpert-Str.");
break;
}
case 267139:
{
returnValue = F("Robert-Lindig-Platz");
break;
}
case 267140:
{
returnValue = F("Robert-Link-Str.");
break;
}
case 267141:
{
returnValue = F("Robert-Linnarz-Str.");
break;
}
case 267142:
{
returnValue = F("Robert-Linnemann-Str.");
break;
}
case 267143:
{
returnValue = F("Robert-Mahne-Str.");
break;
}
case 267144:
{
returnValue = F("Robert-Maier-Str.");
break;
}
case 267145:
{
returnValue = F("Robert-Markovac-Str.");
break;
}
case 267146:
{
returnValue = F("Robert-Mayer-Str.");
break;
}
case 267147:
{
returnValue = F("Robert-Mayer-Weg");
break;
}
case 267148:
{
returnValue = F("Robert-Medenwald-Str.");
break;
}
case 267149:
{
returnValue = F("Robert-Meister-Str.");
break;
}
case 267150:
{
returnValue = F("Robert-Meyer-Platz");
break;
}
case 267151:
{
returnValue = F("Robert-Michel-Str.");
break;
}
case 267152:
{
returnValue = F("Robert-Moser-Str.");
break;
}
case 267153:
{
returnValue = F("Robert-Müller-Platz");
break;
}
case 267154:
{
returnValue = F("Robert-Müller-Str.");
break;
}
case 267155:
{
returnValue = F("Robert-Nelz-Weg");
break;
}
case 267156:
{
returnValue = F("Robert-Nestler-Str.");
break;
}
case 267157:
{
returnValue = F("Robert-Oelmann-Weg");
break;
}
case 267158:
{
returnValue = F("Robert-Owen-Str.");
break;
}
case 267159:
{
returnValue = F("Robert-Perlen-Str.");
break;
}
case 267160:
{
returnValue = F("Robert-Petzsch-Weg");
break;
}
case 267161:
{
returnValue = F("Robert-Pirker-Str.");
break;
}
case 267162:
{
returnValue = F("Robert-Preuß-Weg");
break;
}
case 267163:
{
returnValue = F("Robert-Raudner-Str.");
break;
}
case 267164:
{
returnValue = F("Robert-Reichling-Str.");
break;
}
case 267165:
{
returnValue = F("Robert-Reiner-Str.");
break;
}
case 267166:
{
returnValue = F("Robert-Roloff-Str.");
break;
}
case 267167:
{
returnValue = F("Robert-Sahrbacher-Weg");
break;
}
case 267168:
{
returnValue = F("Robert-Schade-Str.");
break;
}
case 267169:
{
returnValue = F("Robert-Schade-Weg");
break;
}
case 267170:
{
returnValue = F("Robert-Schenker-Str.");
break;
}
case 267171:
{
returnValue = F("Robert-Schiffmann-Str.");
break;
}
case 267172:
{
returnValue = F("Robert-Schirrmacher-Str.");
break;
}
case 267173:
{
returnValue = F("Robert-Schmid-Str.");
break;
}
case 267174:
{
returnValue = F("Robert-Schmidt-Str.");
break;
}
case 267175:
{
returnValue = F("Robert-Schnabel-Str.");
break;
}
case 267176:
{
returnValue = F("Robert-Schneider-Str.");
break;
}
case 267177:
{
returnValue = F("Robert-Schossig-Str.");
break;
}
case 267178:
{
returnValue = F("Robert-Schramm-Str.");
break;
}
case 267179:
{
returnValue = F("Robert-Schulz-Ring");
break;
}
case 267180:
{
returnValue = F("Robert-Schulz-Str.");
break;
}
case 267181:
{
returnValue = F("Robert-Schulze-Str.");
break;
}
case 267182:
{
returnValue = F("Robert-Schumacher-Str.");
break;
}
case 267183:
{
returnValue = F("Robert-Schuman-Allee");
break;
}
case 267184:
{
returnValue = F("Robert-Schuman-Ring");
break;
}
case 267185:
{
returnValue = F("Robert-Schuman-Str.");
break;
}
case 267186:
{
returnValue = F("Robert-Schuman-Weg");
break;
}
case 267187:
{
returnValue = F("Robert-Schumann-Platz");
break;
}
case 267188:
{
returnValue = F("Robert-Schumann-Ring");
break;
}
case 267189:
{
returnValue = F("Robert-Schumann-Str.");
break;
}
case 267190:
{
returnValue = F("Robert-Schumann-Weg");
break;
}
case 267191:
{
returnValue = F("Robert-Schumannstr.");
break;
}
case 267192:
{
returnValue = F("Robert-Schutte-Weg");
break;
}
case 267193:
{
returnValue = F("Robert-Scott-Str.");
break;
}
case 267194:
{
returnValue = F("Robert-Scott-Weg");
break;
}
case 267195:
{
returnValue = F("Robert-Seidel-Str.");
break;
}
case 267196:
{
returnValue = F("Robert-Seidel-Weg");
break;
}
case 267197:
{
returnValue = F("Robert-Seifert-Str.");
break;
}
case 267198:
{
returnValue = F("Robert-Seither-Str.");
break;
}
case 267199:
{
returnValue = F("Robert-Seitz-Str.");
break;
}
case 267200:
{
returnValue = F("Robert-Sieber-Str.");
break;
}
case 267201:
{
returnValue = F("Robert-Siewert-Str.");
break;
}
case 267202:
{
returnValue = F("Robert-Sommer-Str.");
break;
}
case 267203:
{
returnValue = F("Robert-Stehli-Str.");
break;
}
case 267204:
{
returnValue = F("Robert-Steiger-Str.");
break;
}
case 267205:
{
returnValue = F("Robert-Steinlin-Weg");
break;
}
case 267206:
{
returnValue = F("Robert-Sterl-Str.");
break;
}
case 267207:
{
returnValue = F("Robert-Sterl-Weg");
break;
}
case 267208:
{
returnValue = F("Robert-Stirling-Ring");
break;
}
case 267209:
{
returnValue = F("Robert-Stock-Str.");
break;
}
case 267210:
{
returnValue = F("Robert-Stolz-Str.");
break;
}
case 267211:
{
returnValue = F("Robert-Stolz-Weg");
break;
}
case 267212:
{
returnValue = F("Robert-Stratmann-Weg");
break;
}
case 267213:
{
returnValue = F("Robert-Supper-Weg");
break;
}
case 267214:
{
returnValue = F("Robert-Tillmanns-Str.");
break;
}
case 267215:
{
returnValue = F("Robert-Tischler-Str.");
break;
}
case 267216:
{
returnValue = F("Robert-Touzet-Str.");
break;
}
case 267217:
{
returnValue = F("Robert-Tümmler-Steg");
break;
}
case 267218:
{
returnValue = F("Robert-Uhrig-Ring");
break;
}
case 267219:
{
returnValue = F("Robert-Unger-Weg");
break;
}
case 267220:
{
returnValue = F("Robert-Volkmann-Allee");
break;
}
case 267221:
{
returnValue = F("Robert-Vollmöller-Str.");
break;
}
case 267222:
{
returnValue = F("Robert-Wahl-Str.");
break;
}
case 267223:
{
returnValue = F("Robert-Walter-Str.");
break;
}
case 267224:
{
returnValue = F("Robert-Wehner-Str.");
break;
}
case 267225:
{
returnValue = F("Robert-Weinstein-Platz");
break;
}
case 267226:
{
returnValue = F("Robert-Weise-Str.");
break;
}
case 267227:
{
returnValue = F("Robert-Werner-Platz");
break;
}
case 267228:
{
returnValue = F("Robert-Wetekam-Str.");
break;
}
case 267229:
{
returnValue = F("Robert-Wiebalck-Str.");
break;
}
case 267230:
{
returnValue = F("Robert-Wilke-Str.");
break;
}
case 267231:
{
returnValue = F("Robert-Winter-Str.");
break;
}
case 267232:
{
returnValue = F("Robert-Wirichs-Str.");
break;
}
case 267233:
{
returnValue = F("Robert-Wörner-Str.");
break;
}
case 267234:
{
returnValue = F("Robert-Zahn-Weg");
break;
}
case 267235:
{
returnValue = F("Robert-Zapp-Str.");
break;
}
case 267236:
{
returnValue = F("Robert-Zürcher-Str.");
break;
}
case 267237:
{
returnValue = F("Robert-von-Haug-Str.");
break;
}
case 267238:
{
returnValue = F("Robert-von-Mohl-Str.");
break;
}
case 267239:
{
returnValue = F("Robert-von-Ostertag-Str.");
break;
}
case 267240:
{
returnValue = F("Robert-von-Welz-Str.");
break;
}
case 267241:
{
returnValue = F("Robertgäßchen");
break;
}
case 267242:
{
returnValue = F("Roberts Kapellenweg");
break;
}
case 267243:
{
returnValue = F("Robertsauer Str.");
break;
}
case 267244:
{
returnValue = F("Robertsdorf");
break;
}
case 267245:
{
returnValue = F("Robertsdorfer Str.");
break;
}
case 267246:
{
returnValue = F("Robertshöhe");
break;
}
case 267247:
{
returnValue = F("Robertskamp");
break;
}
case 267248:
{
returnValue = F("Robertson Drive");
break;
}
case 267249:
{
returnValue = F("Robertsstr.");
break;
}
case 267250:
{
returnValue = F("Robertstr.");
break;
}
case 267251:
{
returnValue = F("Robertsweg");
break;
}
case 267252:
{
returnValue = F("Robertweg");
break;
}
case 267253:
{
returnValue = F("Robestr.");
break;
}
case 267254:
{
returnValue = F("Robinienallee");
break;
}
case 267255:
{
returnValue = F("Robinieneck");
break;
}
case 267256:
{
returnValue = F("Robinienhof");
break;
}
case 267257:
{
returnValue = F("Robinienring");
break;
}
case 267258:
{
returnValue = F("Robinienstieg");
break;
}
case 267259:
{
returnValue = F("Robinienstr.");
break;
}
case 267260:
{
returnValue = F("Robinienweg");
break;
}
case 267261:
{
returnValue = F("Robinsbalje");
break;
}
case 267262:
{
returnValue = F("Robinson Road");
break;
}
case 267263:
{
returnValue = F("Robinson-Crusoe Str.");
break;
}
case 267264:
{
returnValue = F("Robinsonplatz");
break;
}
case 267265:
{
returnValue = F("Robinsonstr.");
break;
}
case 267266:
{
returnValue = F("Robinsonwäldchen");
break;
}
case 267267:
{
returnValue = F("Robinstr.");
break;
}
case 267268:
{
returnValue = F("Robodesweg");
break;
}
case 267269:
{
returnValue = F("Robrexer Bergweg");
break;
}
case 267270:
{
returnValue = F("Robrexer Str.");
break;
}
case 267271:
{
returnValue = F("Robringhauser Str.");
break;
}
case 267272:
{
returnValue = F("Robsbergweg");
break;
}
case 267273:
{
returnValue = F("Roburitstr.");
break;
}
case 267274:
{
returnValue = F("Robü");
break;
}
case 267275:
{
returnValue = F("Rochauer Str.");
break;
}
case 267276:
{
returnValue = F("Rochelsteert");
break;
}
case 267277:
{
returnValue = F("Rochenweg");
break;
}
case 267278:
{
returnValue = F("Rochepad");
break;
}
case 267279:
{
returnValue = F("Rocher");
break;
}
case 267280:
{
returnValue = F("Rocherweg");
break;
}
case 267281:
{
returnValue = F("Rochesterstr.");
break;
}
case 267282:
{
returnValue = F("Rochfordstr.");
break;
}
case 267283:
{
returnValue = F("Rochlitz, Bahnhofstr");
break;
}
case 267284:
{
returnValue = F("Rochlitzer Str.");
break;
}
case 267285:
{
returnValue = F("Rochlitzer Weg");
break;
}
case 267286:
{
returnValue = F("Rochlitzweg");
break;
}
case 267287:
{
returnValue = F("Rochollstr.");
break;
}
case 267288:
{
returnValue = F("Rochollweg");
break;
}
case 267289:
{
returnValue = F("Rocholzallee");
break;
}
case 267290:
{
returnValue = F("Rochow 1");
break;
}
case 267291:
{
returnValue = F("Rochower Str.");
break;
}
case 267292:
{
returnValue = F("Rochowstr.");
break;
}
case 267293:
{
returnValue = F("Rochsburger Str.");
break;
}
case 267294:
{
returnValue = F("Rochus-Dedler-Str.");
break;
}
case 267295:
{
returnValue = F("Rochus-Degen-Weg");
break;
}
case 267296:
{
returnValue = F("Rochus-Merz-Str.");
break;
}
case 267297:
{
returnValue = F("Rochus-Schuster-Str.");
break;
}
case 267298:
{
returnValue = F("Rochusallee");
break;
}
case 267299:
{
returnValue = F("Rochusberg");
break;
}
case 267300:
{
returnValue = F("Rochusfeld");
break;
}
case 267301:
{
returnValue = F("Rochusgasse");
break;
}
case 267302:
{
returnValue = F("Rochusplatz");
break;
}
case 267303:
{
returnValue = F("Rochusstr.");
break;
}
case 267304:
{
returnValue = F("Rochusweg");
break;
}
case 267305:
{
returnValue = F("Rockau");
break;
}
case 267306:
{
returnValue = F("Rockelfing");
break;
}
case 267307:
{
returnValue = F("Rockelmannstr.");
break;
}
case 267308:
{
returnValue = F("Rockelsgasse");
break;
}
case 267309:
{
returnValue = F("Rockelstr.");
break;
}
case 267310:
{
returnValue = F("Rockenauer Str.");
break;
}
case 267311:
{
returnValue = F("Rockenauerpfad");
break;
}
case 267312:
{
returnValue = F("Rockenbach");
break;
}
case 267313:
{
returnValue = F("Rockenberger Str.");
break;
}
case 267314:
{
returnValue = F("Rockenberger Weg");
break;
}
case 267315:
{
returnValue = F("Rockenbrunn");
break;
}
case 267316:
{
returnValue = F("Rockenbrunner Str.");
break;
}
case 267317:
{
returnValue = F("Rockendorfer Str.");
break;
}
case 267318:
{
returnValue = F("Rockenfeld");
break;
}
case 267319:
{
returnValue = F("Rockenfelder Str.");
break;
}
case 267320:
{
returnValue = F("Rockenhauser Str.");
break;
}
case 267321:
{
returnValue = F("Rockenhof");
break;
}
case 267322:
{
returnValue = F("Rockenmühler Str.");
break;
}
case 267323:
{
returnValue = F("Rockenrothsweg");
break;
}
case 267324:
{
returnValue = F("Rockensteinweg");
break;
}
case 267325:
{
returnValue = F("Rockenstr.");
break;
}
case 267326:
{
returnValue = F("Rockenstuhlstr.");
break;
}
case 267327:
{
returnValue = F("Rockensußraer Weg");
break;
}
case 267328:
{
returnValue = F("Rockentalerstr.");
break;
}
case 267329:
{
returnValue = F("Rockentalstr.");
break;
}
case 267330:
{
returnValue = F("Rockenthin");
break;
}
case 267331:
{
returnValue = F("Rockershauser Str.");
break;
}
case 267332:
{
returnValue = F("Rockerstrift");
break;
}
case 267333:
{
returnValue = F("Rockertfelsenweg");
break;
}
case 267334:
{
returnValue = F("Rockertstr.");
break;
}
case 267335:
{
returnValue = F("Rockhäuser Str.");
break;
}
case 267336:
{
returnValue = F("Rockoldinger Weg");
break;
}
case 267337:
{
returnValue = F("Rockower Chaussee");
break;
}
case 267338:
{
returnValue = F("Rockower Str.");
break;
}
case 267339:
{
returnValue = F("Rocksdorfer Str.");
break;
}
case 267340:
{
returnValue = F("Rocksengrund");
break;
}
case 267341:
{
returnValue = F("Rockshäuser Str.");
break;
}
case 267342:
{
returnValue = F("Rockstedter Str.");
break;
}
case 267343:
{
returnValue = F("Rockstedter Weg");
break;
}
case 267344:
{
returnValue = F("Rockvillestr.");
break;
}
case 267345:
{
returnValue = F("Rockwellstr.");
break;
}
case 267346:
{
returnValue = F("Rockwool Str.");
break;
}
case 267347:
{
returnValue = F("Rocky Mountain Rallye");
break;
}
case 267348:
{
returnValue = F("Rocky Mountain Way");
break;
}
case 267349:
{
returnValue = F("Rod am Berger Str.");
break;
}
case 267350:
{
returnValue = F("Roda");
break;
}
case 267351:
{
returnValue = F("Rodablick");
break;
}
case 267352:
{
returnValue = F("Rodacher Str.");
break;
}
case 267353:
{
returnValue = F("Rodacher Weg");
break;
}
case 267354:
{
returnValue = F("Rodachshof");
break;
}
case 267355:
{
returnValue = F("Rodachshofer Str.");
break;
}
case 267356:
{
returnValue = F("Rodachstr.");
break;
}
case 267357:
{
returnValue = F("Rodachweg");
break;
}
case 267358:
{
returnValue = F("Rodaer Dorfplatz");
break;
}
case 267359:
{
returnValue = F("Rodaer Dorfstr.");
break;
}
case 267360:
{
returnValue = F("Rodaer Eiche");
break;
}
case 267361:
{
returnValue = F("Rodaer Grund");
break;
}
case 267362:
{
returnValue = F("Rodaer Hauptstr.");
break;
}
case 267363:
{
returnValue = F("Rodaer Kirchenweg");
break;
}
case 267364:
{
returnValue = F("Rodaer Landstr.");
break;
}
case 267365:
{
returnValue = F("Rodaer Querstr.");
break;
}
case 267366:
{
returnValue = F("Rodaer Ringstr.");
break;
}
case 267367:
{
returnValue = F("Rodaer Str.");
break;
}
case 267368:
{
returnValue = F("Rodaer Weg");
break;
}
case 267369:
{
returnValue = F("Rodaer Winkel");
break;
}
case 267370:
{
returnValue = F("Rodalber Str.");
break;
}
case 267371:
{
returnValue = F("Rodalberhof");
break;
}
case 267372:
{
returnValue = F("Rodameuschel");
break;
}
case 267373:
{
returnValue = F("Rodanger");
break;
}
case 267374:
{
returnValue = F("Rodastr.");
break;
}
case 267375:
{
returnValue = F("Rodatalstr.");
break;
}
case 267376:
{
returnValue = F("Rodaubachschneise");
break;
}
case 267377:
{
returnValue = F("Rodauer Str.");
break;
}
case 267378:
{
returnValue = F("Rodauer Weg");
break;
}
case 267379:
{
returnValue = F("Rodaupark");
break;
}
case 267380:
{
returnValue = F("Rodaustr.");
break;
}
case 267381:
{
returnValue = F("Rodauweg");
break;
}
case 267382:
{
returnValue = F("Rodaweg");
break;
}
case 267383:
{
returnValue = F("Rodbacher Rain");
break;
}
case 267384:
{
returnValue = F("Rodbachstr.");
break;
}
case 267385:
{
returnValue = F("Rodberdingstr.");
break;
}
case 267386:
{
returnValue = F("Rodberger Str.");
break;
}
case 267387:
{
returnValue = F("Rodberggäßchen");
break;
}
case 267388:
{
returnValue = F("Rodbergstr.");
break;
}
case 267389:
{
returnValue = F("Rodbruch");
break;
}
case 267390:
{
returnValue = F("Roddaner Dorfstr.");
break;
}
case 267391:
{
returnValue = F("Roddaner Weg");
break;
}
case 267392:
{
returnValue = F("Roddauweg");
break;
}
case 267393:
{
returnValue = F("Rodde");
break;
}
case 267394:
{
returnValue = F("Rodden");
break;
}
case 267395:
{
returnValue = F("Roddener Str.");
break;
}
case 267396:
{
returnValue = F("Roddenmoorweg");
break;
}
case 267397:
{
returnValue = F("Roddens");
break;
}
case 267398:
{
returnValue = F("Roddenser Str.");
break;
}
case 267399:
{
returnValue = F("Rodder Damm");
break;
}
case 267400:
{
returnValue = F("Rodder Kirchweg");
break;
}
case 267401:
{
returnValue = F("Rodder Str.");
break;
}
case 267402:
{
returnValue = F("Rodderbach");
break;
}
case 267403:
{
returnValue = F("Rodderbergstr.");
break;
}
case 267404:
{
returnValue = F("Rodderer Str.");
break;
}
case 267405:
{
returnValue = F("Rodderfeld");
break;
}
case 267406:
{
returnValue = F("Roddergasse");
break;
}
case 267407:
{
returnValue = F("Rodderheide");
break;
}
case 267408:
{
returnValue = F("Rodderstr.");
break;
}
case 267409:
{
returnValue = F("Rodderweg");
break;
}
case 267410:
{
returnValue = F("Rode");
break;
}
case 267411:
{
returnValue = F("Rode Möhl");
break;
}
case 267412:
{
returnValue = F("Rode Wand");
break;
}
case 267413:
{
returnValue = F("Rodebach");
break;
}
case 267414:
{
returnValue = F("Rodebachaue");
break;
}
case 267415:
{
returnValue = F("Rodebachmühle");
break;
}
case 267416:
{
returnValue = F("Rodebachstr.");
break;
}
case 267417:
{
returnValue = F("Rodebachweg");
break;
}
case 267418:
{
returnValue = F("Rodeberg");
break;
}
case 267419:
{
returnValue = F("Rodebergsweg");
break;
}
case 267420:
{
returnValue = F("Rodebörn");
break;
}
case 267421:
{
returnValue = F("Rodeck");
break;
}
case 267422:
{
returnValue = F("Rodecker Str.");
break;
}
case 267423:
{
returnValue = F("Rodegasse");
break;
}
case 267424:
{
returnValue = F("Rodehorster Allee");
break;
}
case 267425:
{
returnValue = F("Rodehorster Weg");
break;
}
case 267426:
{
returnValue = F("Rodekamp");
break;
}
case 267427:
{
returnValue = F("Rodekampsweg");
break;
}
case 267428:
{
returnValue = F("Rodeland");
break;
}
case 267429:
{
returnValue = F("Rodelandring");
break;
}
case 267430:
{
returnValue = F("Rodelandstr.");
break;
}
case 267431:
{
returnValue = F("Rodelandweg");
break;
}
case 267432:
{
returnValue = F("Rodelbahn");
break;
}
case 267433:
{
returnValue = F("Rodelbahn \"Hüttschengrund");
break;
}
case 267434:
{
returnValue = F("Rodelbahn Hochschwarzeck");
break;
}
case 267435:
{
returnValue = F("Rodelbahn St. Märgen");
break;
}
case 267436:
{
returnValue = F("Rodelbahn, Naturerlebnispfad Sophienhöhe");
break;
}
case 267437:
{
returnValue = F("Rodelbahnstr.");
break;
}
case 267438:
{
returnValue = F("Rodelbahnweg");
break;
}
case 267439:
{
returnValue = F("Rodelbarg");
break;
}
case 267440:
{
returnValue = F("Rodelberg");
break;
}
case 267441:
{
returnValue = F("Rodelberg Vordorf");
break;
}
case 267442:
{
returnValue = F("Rodelberg-Park");
break;
}
case 267443:
{
returnValue = F("Rodelhang");
break;
}
case 267444:
{
returnValue = F("Rodelsteige");
break;
}
case 267445:
{
returnValue = F("Rodelstr.");
break;
}
case 267446:
{
returnValue = F("Rodelstrecke");
break;
}
case 267447:
{
returnValue = F("Rodelstrecke Hochschwarzeck");
break;
}
case 267448:
{
returnValue = F("Rodelstrecke am Adler");
break;
}
case 267449:
{
returnValue = F("Rodelweg");
break;
}
case 267450:
{
returnValue = F("Rodelwiese");
break;
}
case 267451:
{
returnValue = F("Rodelwiesenstr.");
break;
}
case 267452:
{
returnValue = F("Rodemannstr.");
break;
}
case 267453:
{
returnValue = F("Rodemich");
break;
}
case 267454:
{
returnValue = F("Rodemsweg");
break;
}
case 267455:
{
returnValue = F("Rodemänner Str.");
break;
}
case 267456:
{
returnValue = F("Rodemühlener Str.");
break;
}
case 267457:
{
returnValue = F("Rodemühler Weg");
break;
}
case 267458:
{
returnValue = F("Rodenacker");
break;
}
case 267459:
{
returnValue = F("Rodenackerstr.");
break;
}
case 267460:
{
returnValue = F("Rodenbach");
break;
}
case 267461:
{
returnValue = F("Rodenbacher Chaussee");
break;
}
case 267462:
{
returnValue = F("Rodenbacher Str.");
break;
}
case 267463:
{
returnValue = F("Rodenbacher Weg");
break;
}
case 267464:
{
returnValue = F("Rodenbachstr.");
break;
}
case 267465:
{
returnValue = F("Rodenbachweg");
break;
}
case 267466:
{
returnValue = F("Rodenbecker Str.");
break;
}
case 267467:
{
returnValue = F("Rodenbecker Weg");
break;
}
case 267468:
{
returnValue = F("Rodenbek");
break;
}
case 267469:
{
returnValue = F("Rodenbeker Weg");
break;
}
case 267470:
{
returnValue = F("Rodenberg");
break;
}
case 267471:
{
returnValue = F("Rodenberger Allee");
break;
}
case 267472:
{
returnValue = F("Rodenberger Str.");
break;
}
case 267473:
{
returnValue = F("Rodenbergsbusch");
break;
}
case 267474:
{
returnValue = F("Rodenbergstr.");
break;
}
case 267475:
{
returnValue = F("Rodenbergweg");
break;
}
case 267476:
{
returnValue = F("Rodenbosteler Str.");
break;
}
case 267477:
{
returnValue = F("Rodenbrockstr.");
break;
}
case 267478:
{
returnValue = F("Rodenbruch");
break;
}
case 267479:
{
returnValue = F("Rodenbusch");
break;
}
case 267480:
{
returnValue = F("Rodendamm");
break;
}
case 267481:
{
returnValue = F("Rodendorfer Weg");
break;
}
case 267482:
{
returnValue = F("Rodendornweg");
break;
}
case 267483:
{
returnValue = F("Rodeneck-Platz");
break;
}
case 267484:
{
returnValue = F("Rodener Platz");
break;
}
case 267485:
{
returnValue = F("Rodener Schanze");
break;
}
case 267486:
{
returnValue = F("Rodener Str.");
break;
}
case 267487:
{
returnValue = F("Rodener Wiese");
break;
}
case 267488:
{
returnValue = F("Rodenfeld");
break;
}
case 267489:
{
returnValue = F("Rodengraben");
break;
}
case 267490:
{
returnValue = F("Rodenheimweg");
break;
}
case 267491:
{
returnValue = F("Rodenhoferdell");
break;
}
case 267492:
{
returnValue = F("Rodenhäuser Str.");
break;
}
case 267493:
{
returnValue = F("Rodenhäuser Weg");
break;
}
case 267494:
{
returnValue = F("Rodenhübel");
break;
}
case 267495:
{
returnValue = F("Rodenkamp");
break;
}
case 267496:
{
returnValue = F("Rodenkirchener Str.");
break;
}
case 267497:
{
returnValue = F("Rodenkircherwurp");
break;
}
case 267498:
{
returnValue = F("Rodenlandsweg");
break;
}
case 267499:
{
returnValue = F("Rodenroths Trift");
break;
}
case 267500:
{
returnValue = F("Rodenseestr.");
break;
}
case 267501:
{
returnValue = F("Rodensiepen");
break;
}
case 267502:
{
returnValue = F("Rodenslebener Str.");
break;
}
case 267503:
{
returnValue = F("Rodensleber Str.");
break;
}
case 267504:
{
returnValue = F("Rodensleber Weg");
break;
}
case 267505:
{
returnValue = F("Rodensteiner Str.");
break;
}
case 267506:
{
returnValue = F("Rodensteiner Weg");
break;
}
case 267507:
{
returnValue = F("Rodensteinerstr.");
break;
}
case 267508:
{
returnValue = F("Rodensteinstr.");
break;
}
case 267509:
{
returnValue = F("Rodensteinsweg");
break;
}
case 267510:
{
returnValue = F("Rodensteinweg");
break;
}
case 267511:
{
returnValue = F("Rodenstocksiedlung");
break;
}
case 267512:
{
returnValue = F("Rodenstr.");
break;
}
case 267513:
{
returnValue = F("Rodentau");
break;
}
case 267514:
{
returnValue = F("Rodentelgenstr.");
break;
}
case 267515:
{
returnValue = F("Rodenwald");
break;
}
case 267516:
{
returnValue = F("Rodenweg");
break;
}
case 267517:
{
returnValue = F("Rodenzenreuth");
break;
}
case 267518:
{
returnValue = F("Rodenzenreuther Str.");
break;
}
case 267519:
{
returnValue = F("Rodeo Drive");
break;
}
case 267520:
{
returnValue = F("Roder");
break;
}
case 267521:
{
returnValue = F("Roder Weg");
break;
}
case 267522:
{
returnValue = F("Roderather Str.");
break;
}
case 267523:
{
returnValue = F("Rodergasse");
break;
}
case 267524:
{
returnValue = F("Roderichstr.");
break;
}
case 267525:
{
returnValue = F("Rodersberg");
break;
}
case 267526:
{
returnValue = F("Rodersdorfer Weg");
break;
}
case 267527:
{
returnValue = F("Roderstr.");
break;
}
case 267528:
{
returnValue = F("Roderter Kirchweg");
break;
}
case 267529:
{
returnValue = F("Roderweg");
break;
}
case 267530:
{
returnValue = F("Roderwiese");
break;
}
case 267531:
{
returnValue = F("Rodeskothen");
break;
}
case 267532:
{
returnValue = F("Rodestr.");
break;
}
case 267533:
{
returnValue = F("Rodetal");
break;
}
case 267534:
{
returnValue = F("Rodewalder Str.");
break;
}
case 267535:
{
returnValue = F("Rodeweg");
break;
}
case 267536:
{
returnValue = F("Rodewiekstr.");
break;
}
case 267537:
{
returnValue = F("Rodewiese");
break;
}
case 267538:
{
returnValue = F("Rodewiesen");
break;
}
case 267539:
{
returnValue = F("Rodewinkel");
break;
}
case 267540:
{
returnValue = F("Rodewischer Str.");
break;
}
case 267541:
{
returnValue = F("Rodewitzer Str.");
break;
}
case 267542:
{
returnValue = F("Rodfeld-Schneise");
break;
}
case 267543:
{
returnValue = F("Rodfeldblick");
break;
}
case 267544:
{
returnValue = F("Rodgarten");
break;
}
case 267545:
{
returnValue = F("Rodgasse");
break;
}
case 267546:
{
returnValue = F("Rodgau-Ringstr.");
break;
}
case 267547:
{
returnValue = F("Rodgaupark");
break;
}
case 267548:
{
returnValue = F("Rodgaustr.");
break;
}
case 267549:
{
returnValue = F("Rodgeser Str.");
break;
}
case 267550:
{
returnValue = F("Rodhaldestr.");
break;
}
case 267551:
{
returnValue = F("Rodheimer Str.");
break;
}
case 267552:
{
returnValue = F("Rodheimer Weg");
break;
}
case 267553:
{
returnValue = F("Rodheimerstr.");
break;
}
case 267554:
{
returnValue = F("Rodholz");
break;
}
case 267555:
{
returnValue = F("Rodholzweg");
break;
}
case 267556:
{
returnValue = F("Rodias");
break;
}
case 267557:
{
returnValue = F("Rodigaster Str.");
break;
}
case 267558:
{
returnValue = F("Rodigkauer Str.");
break;
}
case 267559:
{
returnValue = F("Rodigstr.");
break;
}
case 267560:
{
returnValue = F("Rodillen");
break;
}
case 267561:
{
returnValue = F("Roding am Bahnhof");
break;
}
case 267562:
{
returnValue = F("Rodinger Str.");
break;
}
case 267563:
{
returnValue = F("Rodinger Weg");
break;
}
case 267564:
{
returnValue = F("Rodingerweg");
break;
}
case 267565:
{
returnValue = F("Rodinghweg");
break;
}
case 267566:
{
returnValue = F("Rodinstr.");
break;
}
case 267567:
{
returnValue = F("Rodishainer Weg");
break;
}
case 267568:
{
returnValue = F("Rodlachenweg");
break;
}
case 267569:
{
returnValue = F("Rodland");
break;
}
case 267570:
{
returnValue = F("Rodlandstr.");
break;
}
case 267571:
{
returnValue = F("Rodlandweg");
break;
}
case 267572:
{
returnValue = F("Rodlbühl");
break;
}
case 267573:
{
returnValue = F("Rodlebener Str.");
break;
}
case 267574:
{
returnValue = F("Rodmühlweg");
break;
}
case 267575:
{
returnValue = F("Rodompweg");
break;
}
case 267576:
{
returnValue = F("Rodomsheidenschneise");
break;
}
case 267577:
{
returnValue = F("Rodomstorstr.");
break;
}
case 267578:
{
returnValue = F("Rodscheid");
break;
}
case 267579:
{
returnValue = F("Rodsteinsträßle");
break;
}
case 267580:
{
returnValue = F("Rodsträßle");
break;
}
case 267581:
{
returnValue = F("Rodsweg");
break;
}
case 267582:
{
returnValue = F("Rodt");
break;
}
case 267583:
{
returnValue = F("Rodtbergstr.");
break;
}
case 267584:
{
returnValue = F("Rodter Str.");
break;
}
case 267585:
{
returnValue = F("Rodtgärten");
break;
}
case 267586:
{
returnValue = F("Rodthohl");
break;
}
case 267587:
{
returnValue = F("Rodtstr.");
break;
}
case 267588:
{
returnValue = F("Rodtwiese");
break;
}
case 267589:
{
returnValue = F("Rodung");
break;
}
case 267590:
{
returnValue = F("Rodungsweg");
break;
}
case 267591:
{
returnValue = F("Rodweg");
break;
}
case 267592:
{
returnValue = F("Rodwiesenweg");
break;
}
case 267593:
{
returnValue = F("Rodäckerweg");
break;
}
case 267594:
{
returnValue = F("Roeblingstr.");
break;
}
case 267595:
{
returnValue = F("Roeckstr.");
break;
}
case 267596:
{
returnValue = F("Roeddersfeld");
break;
}
case 267597:
{
returnValue = F("Roedegraben");
break;
}
case 267598:
{
returnValue = F("Roedehohl");
break;
}
case 267599:
{
returnValue = F("Roedenbeckstr.");
break;
}
case 267600:
{
returnValue = F("Roedererstr.");
break;
}
case 267601:
{
returnValue = F("Roedernstr.");
break;
}
case 267602:
{
returnValue = F("Roedersteinstr.");
break;
}
case 267603:
{
returnValue = F("Roederstr.");
break;
}
case 267604:
{
returnValue = F("Roehenstr.");
break;
}
case 267605:
{
returnValue = F("Roeinghstr.");
break;
}
case 267606:
{
returnValue = F("Roelof-Gerritz-Meyer-Str.");
break;
}
case 267607:
{
returnValue = F("Roelpad");
break;
}
case 267608:
{
returnValue = F("Roemheldstr.");
break;
}
case 267609:
{
returnValue = F("Roensiek");
break;
}
case 267610:
{
returnValue = F("Roentgenstr.");
break;
}
case 267611:
{
returnValue = F("Roermonder Bahn");
break;
}
case 267612:
{
returnValue = F("Roermonder Str.");
break;
}
case 267613:
{
returnValue = F("Roermonder Weg");
break;
}
case 267614:
{
returnValue = F("Roeschstr.");
break;
}
case 267615:
{
returnValue = F("Roeseplatz");
break;
}
case 267616:
{
returnValue = F("Roeser Str.");
break;
}
case 267617:
{
returnValue = F("Roeserberg");
break;
}
case 267618:
{
returnValue = F("Roeserstr.");
break;
}
case 267619:
{
returnValue = F("Roesestr.");
break;
}
case 267620:
{
returnValue = F("Roesgenstr.");
break;
}
case 267621:
{
returnValue = F("Roesgerstr.");
break;
}
case 267622:
{
returnValue = F("Roesickestr.");
break;
}
case 267623:
{
returnValue = F("Roesingerstr.");
break;
}
case 267624:
{
returnValue = F("Roesoll");
break;
}
case 267625:
{
returnValue = F("Roetenweg");
break;
}
case 267626:
{
returnValue = F("Roetgenbachstr.");
break;
}
case 267627:
{
returnValue = F("Roetgener Str.");
break;
}
case 267628:
{
returnValue = F("Roethestr.");
break;
}
case 267629:
{
returnValue = F("Roethjeweg");
break;
}
case 267630:
{
returnValue = F("Roetspiek");
break;
}
case 267631:
{
returnValue = F("Roezer Weg");
break;
}
case 267632:
{
returnValue = F("Rofanweg");
break;
}
case 267633:
{
returnValue = F("Rofen");
break;
}
case 267634:
{
returnValue = F("Rofenweg");
break;
}
case 267635:
{
returnValue = F("Roffhausener Landstr.");
break;
}
case 267636:
{
returnValue = F("Roffhauser Landstr.");
break;
}
case 267637:
{
returnValue = F("Roffloh");
break;
}
case 267638:
{
returnValue = F("Rofladderweg");
break;
}
case 267639:
{
returnValue = F("Rofuhr");
break;
}
case 267640:
{
returnValue = F("Rogaer Weg");
break;
}
case 267641:
{
returnValue = F("Rogahner Str.");
break;
}
case 267642:
{
returnValue = F("Rogahner Weg");
break;
}
case 267643:
{
returnValue = F("Rogallaweg");
break;
}
case 267644:
{
returnValue = F("Rogatusstr.");
break;
}
case 267645:
{
returnValue = F("Rogendorf");
break;
}
case 267646:
{
returnValue = F("Roger Weg");
break;
}
case 267647:
{
returnValue = F("Roger-Drapie-Str.");
break;
}
case 267648:
{
returnValue = F("Roger-Menu-Str.");
break;
}
case 267649:
{
returnValue = F("Rogeriusstr.");
break;
}
case 267650:
{
returnValue = F("Rogerusstr.");
break;
}
case 267651:
{
returnValue = F("Roggbergstr.");
break;
}
case 267652:
{
returnValue = F("Roggbrücke");
break;
}
case 267653:
{
returnValue = F("Roggdener Weg");
break;
}
case 267654:
{
returnValue = F("Roggekamp");
break;
}
case 267655:
{
returnValue = F("Roggemannkamp");
break;
}
case 267656:
{
returnValue = F("Roggemannstr.");
break;
}
case 267657:
{
returnValue = F("Roggenacker");
break;
}
case 267658:
{
returnValue = F("Roggenackerweg");
break;
}
case 267659:
{
returnValue = F("Roggenbacher Str.");
break;
}
case 267660:
{
returnValue = F("Roggenbachstr.");
break;
}
case 267661:
{
returnValue = F("Roggenbachweg");
break;
}
case 267662:
{
returnValue = F("Roggenbargsweg");
break;
}
case 267663:
{
returnValue = F("Roggenberg");
break;
}
case 267664:
{
returnValue = F("Roggenbergstr.");
break;
}
case 267665:
{
returnValue = F("Roggenbeurer Str.");
break;
}
case 267666:
{
returnValue = F("Roggenbogen");
break;
}
case 267667:
{
returnValue = F("Roggenbreite");
break;
}
case 267668:
{
returnValue = F("Roggenburger Str.");
break;
}
case 267669:
{
returnValue = F("Roggendorfer Chaussee");
break;
}
case 267670:
{
returnValue = F("Roggendorfer Str.");
break;
}
case 267671:
{
returnValue = F("Roggendorfer Weg");
break;
}
case 267672:
{
returnValue = F("Roggener Kamp");
break;
}
case 267673:
{
returnValue = F("Roggener Str.");
break;
}
case 267674:
{
returnValue = F("Roggenfeld");
break;
}
case 267675:
{
returnValue = F("Roggenfelder Deich");
break;
}
case 267676:
{
returnValue = F("Roggenfelder Str.");
break;
}
case 267677:
{
returnValue = F("Roggengarten");
break;
}
case 267678:
{
returnValue = F("Roggengasse");
break;
}
case 267679:
{
returnValue = F("Roggengrund");
break;
}
case 267680:
{
returnValue = F("Roggenhof");
break;
}
case 267681:
{
returnValue = F("Roggenhoferweg");
break;
}
case 267682:
{
returnValue = F("Roggenhofweg");
break;
}
case 267683:
{
returnValue = F("Roggenkamp");
break;
}
case 267684:
{
returnValue = F("Roggenkampstr.");
break;
}
case 267685:
{
returnValue = F("Roggenkampsweg");
break;
}
case 267686:
{
returnValue = F("Roggenkoppel");
break;
}
case 267687:
{
returnValue = F("Roggenkämpe");
break;
}
case 267688:
{
returnValue = F("Roggenlands Weg");
break;
}
case 267689:
{
returnValue = F("Roggenmarkt");
break;
}
case 267690:
{
returnValue = F("Roggenmoorsweg");
break;
}
case 267691:
{
returnValue = F("Roggenmoorweg");
break;
}
case 267692:
{
returnValue = F("Roggenmühle");
break;
}
case 267693:
{
returnValue = F("Roggenmühlstr.");
break;
}
case 267694:
{
returnValue = F("Roggenpatt");
break;
}
case 267695:
{
returnValue = F("Roggenrader Weg");
break;
}
case 267696:
{
returnValue = F("Roggenring");
break;
}
case 267697:
{
returnValue = F("Roggenrücken-Schneise");
break;
}
case 267698:
{
returnValue = F("Roggenschlag");
break;
}
case 267699:
{
returnValue = F("Roggenseeweg");
break;
}
case 267700:
{
returnValue = F("Roggensteder Weg");
break;
}
case 267701:
{
returnValue = F("Roggenstedter Weg");
break;
}
case 267702:
{
returnValue = F("Roggensteige");
break;
}
case 267703:
{
returnValue = F("Roggensteiner Allee");
break;
}
case 267704:
{
returnValue = F("Roggensteiner Str.");
break;
}
case 267705:
{
returnValue = F("Roggenstieg");
break;
}
case 267706:
{
returnValue = F("Roggenstr.");
break;
}
case 267707:
{
returnValue = F("Roggenstudweg");
break;
}
case 267708:
{
returnValue = F("Roggentalstr.");
break;
}
case 267709:
{
returnValue = F("Roggentin");
break;
}
case 267710:
{
returnValue = F("Roggentiner Weg");
break;
}
case 267711:
{
returnValue = F("Roggenweg");
break;
}
case 267712:
{
returnValue = F("Roggenwinkel");
break;
}
case 267713:
{
returnValue = F("Roggenzell");
break;
}
case 267714:
{
returnValue = F("Roggenäcker");
break;
}
case 267715:
{
returnValue = F("Roggenäckerstr.");
break;
}
case 267716:
{
returnValue = F("Roggenäckerweg");
break;
}
case 267717:
{
returnValue = F("Roggersdorfer Str.");
break;
}
case 267718:
{
returnValue = F("Roggersing");
break;
}
case 267719:
{
returnValue = F("Roggestr.");
break;
}
case 267720:
{
returnValue = F("Roggosener Hauptstr.");
break;
}
case 267721:
{
returnValue = F("Roggosener Str.");
break;
}
case 267722:
{
returnValue = F("Roggosener Weg");
break;
}
case 267723:
{
returnValue = F("Roggow");
break;
}
case 267724:
{
returnValue = F("Roggower Ausbau");
break;
}
case 267725:
{
returnValue = F("Roggower Birkenweg");
break;
}
case 267726:
{
returnValue = F("Roggower Haffstr.");
break;
}
case 267727:
{
returnValue = F("Roggower Weg");
break;
}
case 267728:
{
returnValue = F("Roghmannstr.");
break;
}
case 267729:
{
returnValue = F("Rogisterstr.");
break;
}
case 267730:
{
returnValue = F("Roglkreuth");
break;
}
case 267731:
{
returnValue = F("Rognacallee");
break;
}
case 267732:
{
returnValue = F("Rogäsener Dorfstr.");
break;
}
case 267733:
{
returnValue = F("Rogätzer Str.");
break;
}
case 267734:
{
returnValue = F("Roh");
break;
}
case 267735:
{
returnValue = F("Rohackerstr.");
break;
}
case 267736:
{
returnValue = F("Rohanhof");
break;
}
case 267737:
{
returnValue = F("Rohanstr.");
break;
}
case 267738:
{
returnValue = F("Rohbachstr.");
break;
}
case 267739:
{
returnValue = F("Rohbergstr.");
break;
}
case 267740:
{
returnValue = F("Rohbergsweg");
break;
}
case 267741:
{
returnValue = F("Rohbognerweg");
break;
}
case 267742:
{
returnValue = F("Rohbrannthof");
break;
}
case 267743:
{
returnValue = F("Rohbruch");
break;
}
case 267744:
{
returnValue = F("Rohbühl");
break;
}
case 267745:
{
returnValue = F("Rohdauweg");
break;
}
case 267746:
{
returnValue = F("Rohde-und-Schwarz-Str.");
break;
}
case 267747:
{
returnValue = F("Rohdehof");
break;
}
case 267748:
{
returnValue = F("Rohden");
break;
}
case 267749:
{
returnValue = F("Rohdenbergstr.");
break;
}
case 267750:
{
returnValue = F("Rohdenburgstr.");
break;
}
case 267751:
{
returnValue = F("Rohdener Heide");
break;
}
case 267752:
{
returnValue = F("Rohdener Weg");
break;
}
case 267753:
{
returnValue = F("Rohdenhauser Busch");
break;
}
case 267754:
{
returnValue = F("Rohdenhauser Str.");
break;
}
case 267755:
{
returnValue = F("Rohdental");
break;
}
case 267756:
{
returnValue = F("Rohdeplatz");
break;
}
case 267757:
{
returnValue = F("Rohdes Gasse");
break;
}
case 267758:
{
returnValue = F("Rohdestr.");
break;
}
case 267759:
{
returnValue = F("Rohdewaldstr.");
break;
}
case 267760:
{
returnValue = F("Rohdscher Weg");
break;
}
case 267761:
{
returnValue = F("Rohe Land");
break;
}
case 267762:
{
returnValue = F("Rohen Feld");
break;
}
case 267763:
{
returnValue = F("Rohensaas");
break;
}
case 267764:
{
returnValue = F("Rohestr.");
break;
}
case 267765:
{
returnValue = F("Rohfeld");
break;
}
case 267766:
{
returnValue = F("Rohgasse");
break;
}
case 267767:
{
returnValue = F("Rohgraben");
break;
}
case 267768:
{
returnValue = F("Rohhaldenweg");
break;
}
case 267769:
{
returnValue = F("Rohhillen");
break;
}
case 267770:
{
returnValue = F("Rohingstr.");
break;
}
case 267771:
{
returnValue = F("Rohland");
break;
}
case 267772:
{
returnValue = F("Rohlanddamm");
break;
}
case 267773:
{
returnValue = F("Rohlandtstr.");
break;
}
case 267774:
{
returnValue = F("Rohlandweg");
break;
}
case 267775:
{
returnValue = F("Rohlbachstr.");
break;
}
case 267776:
{
returnValue = F("Rohlederstr.");
break;
}
case 267777:
{
returnValue = F("Rohleerstr.");
break;
}
case 267778:
{
returnValue = F("Rohler Str.");
break;
}
case 267779:
{
returnValue = F("Rohlerstr.");
break;
}
case 267780:
{
returnValue = F("Rohleuk");
break;
}
case 267781:
{
returnValue = F("Rohlfs Brückenweg");
break;
}
case 267782:
{
returnValue = F("Rohlfshagener Weg");
break;
}
case 267783:
{
returnValue = F("Rohlfsstr.");
break;
}
case 267784:
{
returnValue = F("Rohlfsweg");
break;
}
case 267785:
{
returnValue = F("Rohlinghof");
break;
}
case 267786:
{
returnValue = F("Rohlingstr.");
break;
}
case 267787:
{
returnValue = F("Rohlmanns Weide");
break;
}
case 267788:
{
returnValue = F("Rohlmannsweg");
break;
}
case 267789:
{
returnValue = F("Rohlofs Hof");
break;
}
case 267790:
{
returnValue = F("Rohlsdorf");
break;
}
case 267791:
{
returnValue = F("Rohlsdorfer Weg");
break;
}
case 267792:
{
returnValue = F("Rohlstorfer Weg");
break;
}
case 267793:
{
returnValue = F("Rohmanns Anlagen");
break;
}
case 267794:
{
returnValue = F("Rohmanns Echo");
break;
}
case 267795:
{
returnValue = F("Rohmannstr.");
break;
}
case 267796:
{
returnValue = F("Rohmatt");
break;
}
case 267797:
{
returnValue = F("Rohmbachstr.");
break;
}
case 267798:
{
returnValue = F("Rohmbergweg");
break;
}
case 267799:
{
returnValue = F("Rohmederweg");
break;
}
case 267800:
{
returnValue = F("Rohmedräjerstr.");
break;
}
case 267801:
{
returnValue = F("Rohmen");
break;
}
case 267802:
{
returnValue = F("Rohmissweg");
break;
}
case 267803:
{
returnValue = F("Rohmweg");
break;
}
case 267804:
{
returnValue = F("Rohna");
break;
}
case 267805:
{
returnValue = F("Rohnaer Str.");
break;
}
case 267806:
{
returnValue = F("Rohnaer Weg");
break;
}
case 267807:
{
returnValue = F("Rohnbachstr.");
break;
}
case 267808:
{
returnValue = F("Rohnbachtalweg");
break;
}
case 267809:
{
returnValue = F("Rohner Weg");
break;
}
case 267810:
{
returnValue = F("Rohnerweg");
break;
}
case 267811:
{
returnValue = F("Rohnetalweg");
break;
}
case 267812:
{
returnValue = F("Rohneweg");
break;
}
case 267813:
{
returnValue = F("Rohnholzstr.");
break;
}
case 267814:
{
returnValue = F("Rohnstedter Berg");
break;
}
case 267815:
{
returnValue = F("Rohnstedter Str.");
break;
}
case 267816:
{
returnValue = F("Rohnsterrassen");
break;
}
case 267817:
{
returnValue = F("Rohnstorf");
break;
}
case 267818:
{
returnValue = F("Rohnstr.");
break;
}
case 267819:
{
returnValue = F("Rohnstädter Weg");
break;
}
case 267820:
{
returnValue = F("Rohnsweg");
break;
}
case 267821:
{
returnValue = F("Rohofer Str.");
break;
}
case 267822:
{
returnValue = F("Rohr");
break;
}
case 267823:
{
returnValue = F("Rohr-Pfuhl-Weg");
break;
}
case 267824:
{
returnValue = F("Rohrach");
break;
}
case 267825:
{
returnValue = F("Rohrachstr.");
break;
}
case 267826:
{
returnValue = F("Rohrachweg");
break;
}
case 267827:
{
returnValue = F("Rohracker");
break;
}
case 267828:
{
returnValue = F("Rohrackerstr.");
break;
}
case 267829:
{
returnValue = F("Rohrackerweg");
break;
}
case 267830:
{
returnValue = F("Rohrammerdyk");
break;
}
case 267831:
{
returnValue = F("Rohrammerweg");
break;
}
case 267832:
{
returnValue = F("Rohrauer Str.");
break;
}
case 267833:
{
returnValue = F("Rohrbach");
break;
}
case 267834:
{
returnValue = F("Rohrbach Markt");
break;
}
case 267835:
{
returnValue = F("Rohrbacher Grenzweg");
break;
}
case 267836:
{
returnValue = F("Rohrbacher Steige");
break;
}
case 267837:
{
returnValue = F("Rohrbacher Str.");
break;
}
case 267838:
{
returnValue = F("Rohrbacher Weg");
break;
}
case 267839:
{
returnValue = F("Rohrbachholz");
break;
}
case 267840:
{
returnValue = F("Rohrbachring");
break;
}
case 267841:
{
returnValue = F("Rohrbachstr.");
break;
}
case 267842:
{
returnValue = F("Rohrbachweg");
break;
}
case 267843:
{
returnValue = F("Rohrbeck");
break;
}
case 267844:
{
returnValue = F("Rohrbecker Damm");
break;
}
case 267845:
{
returnValue = F("Rohrbecker Weg");
break;
}
case 267846:
{
returnValue = F("Rohrbeckweg");
break;
}
case 267847:
{
returnValue = F("Rohrberg");
break;
}
case 267848:
{
returnValue = F("Rohrberger Str.");
break;
}
case 267849:
{
returnValue = F("Rohrberghangweg");
break;
}
case 267850:
{
returnValue = F("Rohrbergstr.");
break;
}
case 267851:
{
returnValue = F("Rohrbergweg");
break;
}
case 267852:
{
returnValue = F("Rohrborner Chaussee");
break;
}
case 267853:
{
returnValue = F("Rohrborner Dorfstr.");
break;
}
case 267854:
{
returnValue = F("Rohrborner Weg");
break;
}
case 267855:
{
returnValue = F("Rohrbornstr.");
break;
}
case 267856:
{
returnValue = F("Rohrbornweg");
break;
}
case 267857:
{
returnValue = F("Rohrbrauk");
break;
}
case 267858:
{
returnValue = F("Rohrbreitenweg");
break;
}
case 267859:
{
returnValue = F("Rohrbronner Str.");
break;
}
case 267860:
{
returnValue = F("Rohrbronner Sträßle");
break;
}
case 267861:
{
returnValue = F("Rohrbruch");
break;
}
case 267862:
{
returnValue = F("Rohrbruchweg");
break;
}
case 267863:
{
returnValue = F("Rohrbrunn");
break;
}
case 267864:
{
returnValue = F("Rohrbrunnengässle");
break;
}
case 267865:
{
returnValue = F("Rohrbrunnenhaldenweg");
break;
}
case 267866:
{
returnValue = F("Rohrbrunnenstr.");
break;
}
case 267867:
{
returnValue = F("Rohrbrunnenweg");
break;
}
case 267868:
{
returnValue = F("Rohrbrunner Str.");
break;
}
case 267869:
{
returnValue = F("Rohrburger Weg");
break;
}
case 267870:
{
returnValue = F("Rohrbusch");
break;
}
case 267871:
{
returnValue = F("Rohrbuschweg");
break;
}
case 267872:
{
returnValue = F("Rohrdiek");
break;
}
case 267873:
{
returnValue = F("Rohrdommel");
break;
}
case 267874:
{
returnValue = F("Rohrdommelweg");
break;
}
case 267875:
{
returnValue = F("Rohrdorfer Brücke");
break;
}
case 267876:
{
returnValue = F("Rohrdorfer Steige");
break;
}
case 267877:
{
returnValue = F("Rohrdorfer Str.");
break;
}
case 267878:
{
returnValue = F("Rohrdorfer Täle");
break;
}
case 267879:
{
returnValue = F("Rohrdorfer Weg");
break;
}
case 267880:
{
returnValue = F("Rohrenbach");
break;
}
case 267881:
{
returnValue = F("Rohrend");
break;
}
case 267882:
{
returnValue = F("Rohrendorfer Platz");
break;
}
case 267883:
{
returnValue = F("Rohrenfelder Str.");
break;
}
case 267884:
{
returnValue = F("Rohrengrabenweg");
break;
}
case 267885:
{
returnValue = F("Rohrenkopfweg");
break;
}
case 267886:
{
returnValue = F("Rohrenmoosweg");
break;
}
case 267887:
{
returnValue = F("Rohrenstädter Str.");
break;
}
case 267888:
{
returnValue = F("Rohrenstädter Weg");
break;
}
case 267889:
{
returnValue = F("Rohrentalstr.");
break;
}
case 267890:
{
returnValue = F("Rohrer Berg");
break;
}
case 267891:
{
returnValue = F("Rohrer Gartenäcker");
break;
}
case 267892:
{
returnValue = F("Rohrer Mühle");
break;
}
case 267893:
{
returnValue = F("Rohrer Pfad");
break;
}
case 267894:
{
returnValue = F("Rohrer Stirn");
break;
}
case 267895:
{
returnValue = F("Rohrer Str.");
break;
}
case 267896:
{
returnValue = F("Rohrer Weg");
break;
}
case 267897:
{
returnValue = F("Rohrerhof");
break;
}
case 267898:
{
returnValue = F("Rohrerpfad");
break;
}
case 267899:
{
returnValue = F("Rohrerpfadsträßle");
break;
}
case 267900:
{
returnValue = F("Rohrersmühlstr.");
break;
}
case 267901:
{
returnValue = F("Rohrersteg");
break;
}
case 267902:
{
returnValue = F("Rohrerstr.");
break;
}
case 267903:
{
returnValue = F("Rohrertalstr.");
break;
}
case 267904:
{
returnValue = F("Rohrerweg");
break;
}
case 267905:
{
returnValue = F("Rohretweg");
break;
}
case 267906:
{
returnValue = F("Rohrfeld");
break;
}
case 267907:
{
returnValue = F("Rohrfelder");
break;
}
case 267908:
{
returnValue = F("Rohrfeldstr.");
break;
}
case 267909:
{
returnValue = F("Rohrfeldweg");
break;
}
case 267910:
{
returnValue = F("Rohrgasse");
break;
}
case 267911:
{
returnValue = F("Rohrgrundstr.");
break;
}
case 267912:
{
returnValue = F("Rohrgrundweg");
break;
}
case 267913:
{
returnValue = F("Rohrhalde Sträßle");
break;
}
case 267914:
{
returnValue = F("Rohrhaldenstr.");
break;
}
case 267915:
{
returnValue = F("Rohrhaldeweg");
break;
}
case 267916:
{
returnValue = F("Rohrhammerweg");
break;
}
case 267917:
{
returnValue = F("Rohrhardsbergweg");
break;
}
case 267918:
{
returnValue = F("Rohrhausgarten");
break;
}
case 267919:
{
returnValue = F("Rohrheckweg");
break;
}
case 267920:
{
returnValue = F("Rohrheimer Str.");
break;
}
case 267921:
{
returnValue = F("Rohrheimer Weg");
break;
}
case 267922:
{
returnValue = F("Rohrhofer Allee");
break;
}
case 267923:
{
returnValue = F("Rohrhofer Str.");
break;
}
case 267924:
{
returnValue = F("Rohrhofstr.");
break;
}
case 267925:
{
returnValue = F("Rohrhops Deich");
break;
}
case 267926:
{
returnValue = F("Rohrigham");
break;
}
case 267927:
{
returnValue = F("Rohrkamp");
break;
}
case 267928:
{
returnValue = F("Rohrkampsweg");
break;
}
case 267929:
{
returnValue = F("Rohrklinge");
break;
}
case 267930:
{
returnValue = F("Rohrkolbenring");
break;
}
case 267931:
{
returnValue = F("Rohrkolbenstr.");
break;
}
case 267932:
{
returnValue = F("Rohrkolbenweg");
break;
}
case 267933:
{
returnValue = F("Rohrkopfweg");
break;
}
case 267934:
{
returnValue = F("Rohrlachenweg");
break;
}
case 267935:
{
returnValue = F("Rohrlachschneise");
break;
}
case 267936:
{
returnValue = F("Rohrlachstr.");
break;
}
case 267937:
{
returnValue = F("Rohrlacker Weg");
break;
}
case 267938:
{
returnValue = F("Rohrlaken-Privatweg");
break;
}
case 267939:
{
returnValue = F("Rohrlaken-Steg");
break;
}
case 267940:
{
returnValue = F("Rohrlakengestell");
break;
}
case 267941:
{
returnValue = F("Rohrlandstr.");
break;
}
case 267942:
{
returnValue = F("Rohrlandweg");
break;
}
case 267943:
{
returnValue = F("Rohrleite");
break;
}
case 267944:
{
returnValue = F("Rohrlochstr.");
break;
}
case 267945:
{
returnValue = F("Rohrmoos-Untertal-Str.");
break;
}
case 267946:
{
returnValue = F("Rohrmooser Str.");
break;
}
case 267947:
{
returnValue = F("Rohrmühle");
break;
}
case 267948:
{
returnValue = F("Rohrmühlenweg");
break;
}
case 267949:
{
returnValue = F("Rohrmühlstr.");
break;
}
case 267950:
{
returnValue = F("Rohrmühlweg");
break;
}
case 267951:
{
returnValue = F("Rohrmünz");
break;
}
case 267952:
{
returnValue = F("Rohrpfad");
break;
}
case 267953:
{
returnValue = F("Rohrplage");
break;
}
case 267954:
{
returnValue = F("Rohrplattenweg");
break;
}
case 267955:
{
returnValue = F("Rohrplatz");
break;
}
case 267956:
{
returnValue = F("Rohrrain");
break;
}
case 267957:
{
returnValue = F("Rohrsbach");
break;
}
case 267958:
{
returnValue = F("Rohrsborn");
break;
}
case 267959:
{
returnValue = F("Rohrschneiders Gang");
break;
}
case 267960:
{
returnValue = F("Rohrschneise");
break;
}
case 267961:
{
returnValue = F("Rohrsener Str.");
break;
}
case 267962:
{
returnValue = F("Rohrser Breite");
break;
}
case 267963:
{
returnValue = F("Rohrser Kapelle");
break;
}
case 267964:
{
returnValue = F("Rohrser Warte");
break;
}
case 267965:
{
returnValue = F("Rohrsilo-Anlage");
break;
}
case 267966:
{
returnValue = F("Rohrskamp");
break;
}
case 267967:
{
returnValue = F("Rohrsoll");
break;
}
case 267968:
{
returnValue = F("Rohrstaude");
break;
}
case 267969:
{
returnValue = F("Rohrstieg");
break;
}
case 267970:
{
returnValue = F("Rohrstofer Weg");
break;
}
case 267971:
{
returnValue = F("Rohrstorf");
break;
}
case 267972:
{
returnValue = F("Rohrstr.");
break;
}
case 267973:
{
returnValue = F("Rohrstücke");
break;
}
case 267974:
{
returnValue = F("Rohrsängerweg");
break;
}
case 267975:
{
returnValue = F("Rohrtalsweg");
break;
}
case 267976:
{
returnValue = F("Rohrtannschneise");
break;
}
case 267977:
{
returnValue = F("Rohrturm");
break;
}
case 267978:
{
returnValue = F("Rohrtälesweg");
break;
}
case 267979:
{
returnValue = F("Rohrwaldweg");
break;
}
case 267980:
{
returnValue = F("Rohrwangstr.");
break;
}
case 267981:
{
returnValue = F("Rohrwebereck");
break;
}
case 267982:
{
returnValue = F("Rohrweg");
break;
}
case 267983:
{
returnValue = F("Rohrweihenweg");
break;
}
case 267984:
{
returnValue = F("Rohrweiherweg");
break;
}
case 267985:
{
returnValue = F("Rohrwies");
break;
}
case 267986:
{
returnValue = F("Rohrwiese");
break;
}
case 267987:
{
returnValue = F("Rohrwiesen");
break;
}
case 267988:
{
returnValue = F("Rohrwiesengässle");
break;
}
case 267989:
{
returnValue = F("Rohrwiesenpfad");
break;
}
case 267990:
{
returnValue = F("Rohrwiesenstr.");
break;
}
case 267991:
{
returnValue = F("Rohrwiesenweg");
break;
}
case 267992:
{
returnValue = F("Rohrzieherstr.");
break;
}
case 267993:
{
returnValue = F("Rohräcker");
break;
}
case 267994:
{
returnValue = F("Rohräckerring");
break;
}
case 267995:
{
returnValue = F("Rohräckerstr.");
break;
}
case 267996:
{
returnValue = F("Rohräckerweg");
break;
}
case 267997:
{
returnValue = F("Rohrüh");
break;
}
case 267998:
{
returnValue = F("Rohschlopenweg");
break;
}
case 267999:
{
returnValue = F("Rohsiepenweg");
break;
}
case 268000:
{
returnValue = F("Rohstorf");
break;
}
case 268001:
{
returnValue = F("Rohstr.");
break;
}
case 268002:
{
returnValue = F("Rohtabakweg");
break;
}
case 268003:
{
returnValue = F("Rohwaldweg");
break;
}
case 268004:
{
returnValue = F("Rohwedderweg");
break;
}
case 268005:
{
returnValue = F("Rohweg");
break;
}
case 268006:
{
returnValue = F("Rohweilerweg");
break;
}
case 268007:
{
returnValue = F("Rohwiese");
break;
}
case 268008:
{
returnValue = F("Rohöfe");
break;
}
case 268009:
{
returnValue = F("Roibartstr.");
break;
}
case 268010:
{
returnValue = F("Roider-Jackl-Str.");
break;
}
case 268011:
{
returnValue = F("Roider-Jackl-Weg");
break;
}
case 268012:
{
returnValue = F("Roiderstr.");
break;
}
case 268013:
{
returnValue = F("Roidestr.");
break;
}
case 268014:
{
returnValue = F("Roidin");
break;
}
case 268015:
{
returnValue = F("Roidkinstr.");
break;
}
case 268016:
{
returnValue = F("Roidlweg");
break;
}
case 268017:
{
returnValue = F("Roienkamp");
break;
}
case 268018:
{
returnValue = F("Roigengasse");
break;
}
case 268019:
{
returnValue = F("Roigergasse");
break;
}
case 268020:
{
returnValue = F("Roigerstr.");
break;
}
case 268021:
{
returnValue = F("Roigheimer Str.");
break;
}
case 268022:
{
returnValue = F("Roihstr.");
break;
}
case 268023:
{
returnValue = F("Roikier");
break;
}
case 268024:
{
returnValue = F("Roisdorfer Hufebahn");
break;
}
case 268025:
{
returnValue = F("Roisdorfer Str.");
break;
}
case 268026:
{
returnValue = F("Roisdorfer Weg");
break;
}
case 268027:
{
returnValue = F("Roissy-En-Brie-Platz");
break;
}
case 268028:
{
returnValue = F("Roitgaßäcker");
break;
}
case 268029:
{
returnValue = F("Roith");
break;
}
case 268030:
{
returnValue = F("Roitham");
break;
}
case 268031:
{
returnValue = F("Roither Str.");
break;
}
case 268032:
{
returnValue = F("Roither Weg");
break;
}
case 268033:
{
returnValue = F("Roitteweg");
break;
}
case 268034:
{
returnValue = F("Roitwalchen");
break;
}
case 268035:
{
returnValue = F("Roitzer Str.");
break;
}
case 268036:
{
returnValue = F("Roitzheimer Str.");
break;
}
case 268037:
{
returnValue = F("Roitzsch");
break;
}
case 268038:
{
returnValue = F("Roitzscher Hauptstr.");
break;
}
case 268039:
{
returnValue = F("Roitzscher Str.");
break;
}
case 268040:
{
returnValue = F("Roitzscher Weg");
break;
}
case 268041:
{
returnValue = F("Roitzschwiese");
break;
}
case 268042:
{
returnValue = F("Roiäckerstr.");
break;
}
case 268043:
{
returnValue = F("Roja");
break;
}
case 268044:
{
returnValue = F("Rojastr.");
break;
}
case 268045:
{
returnValue = F("Rojensweg");
break;
}
case 268046:
{
returnValue = F("Rokamp");
break;
}
case 268047:
{
returnValue = F("Roklumer Str.");
break;
}
case 268048:
{
returnValue = F("Rokokobrücke");
break;
}
case 268049:
{
returnValue = F("Rokokopark, Lustgarten");
break;
}
case 268050:
{
returnValue = F("Rokshorst");
break;
}
case 268051:
{
returnValue = F("Rokusweg");
break;
}
case 268052:
{
returnValue = F("Rokycanyplatz");
break;
}
case 268053:
{
returnValue = F("Roland");
break;
}
case 268054:
{
returnValue = F("Roland-Berst-Str.");
break;
}
case 268055:
{
returnValue = F("Roland-Betsch-Str.");
break;
}
case 268056:
{
returnValue = F("Roland-Brandin-Str.");
break;
}
case 268057:
{
returnValue = F("Roland-Daniels-Weg");
break;
}
case 268058:
{
returnValue = F("Roland-Dorschner-Str.");
break;
}
case 268059:
{
returnValue = F("Roland-Frank-Str.");
break;
}
case 268060:
{
returnValue = F("Roland-Henz-Platz");
break;
}
case 268061:
{
returnValue = F("Roland-Häuser-Str.");
break;
}
case 268062:
{
returnValue = F("Roland-Krug-Str.");
break;
}
case 268063:
{
returnValue = F("Roland-König-Anlage");
break;
}
case 268064:
{
returnValue = F("Roland-Mack-Ring");
break;
}
case 268065:
{
returnValue = F("Roland-Mirsch-Str.");
break;
}
case 268066:
{
returnValue = F("Roland-Nann-Weg");
break;
}
case 268067:
{
returnValue = F("Rolanddamm");
break;
}
case 268068:
{
returnValue = F("Rolande-Thaumiaux-Str.");
break;
}
case 268069:
{
returnValue = F("Rolandgarten");
break;
}
case 268070:
{
returnValue = F("Rolandgasse");
break;
}
case 268071:
{
returnValue = F("Rolandhalde");
break;
}
case 268072:
{
returnValue = F("Rolandhof");
break;
}
case 268073:
{
returnValue = F("Rolando-Weg");
break;
}
case 268074:
{
returnValue = F("Rolandpark");
break;
}
case 268075:
{
returnValue = F("Rolandplatz");
break;
}
case 268076:
{
returnValue = F("Rolandring");
break;
}
case 268077:
{
returnValue = F("Rolandsberg");
break;
}
case 268078:
{
returnValue = F("Rolandsborn");
break;
}
case 268079:
{
returnValue = F("Rolandseck");
break;
}
case 268080:
{
returnValue = F("Rolandsecker Weg");
break;
}
case 268081:
{
returnValue = F("Rolandsfeld");
break;
}
case 268082:
{
returnValue = F("Rolandsgärten");
break;
}
case 268083:
{
returnValue = F("Rolandshöhstr.");
break;
}
case 268084:
{
returnValue = F("Rolandskoppel");
break;
}
case 268085:
{
returnValue = F("Rolandsmauer");
break;
}
case 268086:
{
returnValue = F("Rolandsplatz");
break;
}
case 268087:
{
returnValue = F("Rolandstr.");
break;
}
case 268088:
{
returnValue = F("Rolandsweg");
break;
}
case 268089:
{
returnValue = F("Rolandweg");
break;
}
case 268090:
{
returnValue = F("Rolducer Str.");
break;
}
case 268091:
{
returnValue = F("Rolevinckstr.");
break;
}
case 268092:
{
returnValue = F("Rolf-Balsam-Str.");
break;
}
case 268093:
{
returnValue = F("Rolf-Blessing-Weg");
break;
}
case 268094:
{
returnValue = F("Rolf-Dieter-Brinkmann-Str.");
break;
}
case 268095:
{
returnValue = F("Rolf-Dietrich-Ratzmann-Str.");
break;
}
case 268096:
{
returnValue = F("Rolf-Dircksen-Weg");
break;
}
case 268097:
{
returnValue = F("Rolf-Fischer-Platz");
break;
}
case 268098:
{
returnValue = F("Rolf-Gustav-Haebler-Weg");
break;
}
case 268099:
{
returnValue = F("Rolf-Hackenbroich-Str.");
break;
}
case 268100:
{
returnValue = F("Rolf-Hornig-Str.");
break;
}
case 268101:
{
returnValue = F("Rolf-Hövelmann-Str.");
break;
}
case 268102:
{
returnValue = F("Rolf-Junghanns-Platz");
break;
}
case 268103:
{
returnValue = F("Rolf-Keller-Platz");
break;
}
case 268104:
{
returnValue = F("Rolf-Kornetka-Str.");
break;
}
case 268105:
{
returnValue = F("Rolf-Küch-Str.");
break;
}
case 268106:
{
returnValue = F("Rolf-Meyer-Weg");
break;
}
case 268107:
{
returnValue = F("Rolf-Moll-Str.");
break;
}
case 268108:
{
returnValue = F("Rolf-Müller-Str.");
break;
}
case 268109:
{
returnValue = F("Rolf-Nesch-Weg");
break;
}
case 268110:
{
returnValue = F("Rolf-Nolting-Str.");
break;
}
case 268111:
{
returnValue = F("Rolf-Robischon-Platz");
break;
}
case 268112:
{
returnValue = F("Rolf-Ronecker-Str.");
break;
}
case 268113:
{
returnValue = F("Rolf-Scheuermann-Str.");
break;
}
case 268114:
{
returnValue = F("Rolf-Schulten-Str.");
break;
}
case 268115:
{
returnValue = F("Rolf-Uhrmacher-Allee");
break;
}
case 268116:
{
returnValue = F("Rolf-Weber-Platz");
break;
}
case 268117:
{
returnValue = F("Rolf-Zakel-Str.");
break;
}
case 268118:
{
returnValue = F("Rolfesstr.");
break;
}
case 268119:
{
returnValue = F("Rolfesweg");
break;
}
case 268120:
{
returnValue = F("Rolfinckstr.");
break;
}
case 268121:
{
returnValue = F("Rolfsbütteler Str.");
break;
}
case 268122:
{
returnValue = F("Rolfsener Schulweg");
break;
}
case 268123:
{
returnValue = F("Rolfshagener Str.");
break;
}
case 268124:
{
returnValue = F("Rolfshagener Weg");
break;
}
case 268125:
{
returnValue = F("Rolfshof");
break;
}
case 268126:
{
returnValue = F("Rolfshörner Holz");
break;
}
case 268127:
{
returnValue = F("Rolfshörner Weg");
break;
}
case 268128:
{
returnValue = F("Rolfskamp");
break;
}
case 268129:
{
returnValue = F("Rolfsstr.");
break;
}
case 268130:
{
returnValue = F("Rolfsweg");
break;
}
case 268131:
{
returnValue = F("Rolfzener Str.");
break;
}
case 268132:
{
returnValue = F("Rolgenmoos");
break;
}
case 268133:
{
returnValue = F("Rolika");
break;
}
case 268134:
{
returnValue = F("Rolinckstr.");
break;
}
case 268135:
{
returnValue = F("Rolinerstr.");
break;
}
case 268136:
{
returnValue = F("Rolingweg");
break;
}
case 268137:
{
returnValue = F("Rolinkskamp");
break;
}
case 268138:
{
returnValue = F("Rolkerskamp");
break;
}
case 268139:
{
returnValue = F("Rollbach");
break;
}
case 268140:
{
returnValue = F("Rollbachweg");
break;
}
case 268141:
{
returnValue = F("Rollbahn");
break;
}
case 268142:
{
returnValue = F("Rollbahnweg");
break;
}
case 268143:
{
returnValue = F("Rollbaumsberg");
break;
}
case 268144:
{
returnValue = F("Rollbeksredder");
break;
}
case 268145:
{
returnValue = F("Rollberg");
break;
}
case 268146:
{
returnValue = F("Rollborn");
break;
}
case 268147:
{
returnValue = F("Rollbreede");
break;
}
case 268148:
{
returnValue = F("Rollbruch");
break;
}
case 268149:
{
returnValue = F("Rollbrücke");
break;
}
case 268150:
{
returnValue = F("Rollefbachweg");
break;
}
case 268151:
{
returnValue = F("Rollefstr.");
break;
}
case 268152:
{
returnValue = F("Rolleike");
break;
}
case 268153:
{
returnValue = F("Rollenberg");
break;
}
case 268154:
{
returnValue = F("Rollenbergring");
break;
}
case 268155:
{
returnValue = F("Rollenbergstr.");
break;
}
case 268156:
{
returnValue = F("Rollenbrücker Allee");
break;
}
case 268157:
{
returnValue = F("Rollenbuckel");
break;
}
case 268158:
{
returnValue = F("Rollenbühlweg");
break;
}
case 268159:
{
returnValue = F("Rollengasse");
break;
}
case 268160:
{
returnValue = F("Rollenhagen");
break;
}
case 268161:
{
returnValue = F("Rollenmühle");
break;
}
case 268162:
{
returnValue = F("Rollenstr.");
break;
}
case 268163:
{
returnValue = F("Rollenweg");
break;
}
case 268164:
{
returnValue = F("Roller");
break;
}
case 268165:
{
returnValue = F("Roller- und Skatingbahn");
break;
}
case 268166:
{
returnValue = F("Rollerbahn");
break;
}
case 268167:
{
returnValue = F("Rollerbargs-Weg");
break;
}
case 268168:
{
returnValue = F("Rollergasse");
break;
}
case 268169:
{
returnValue = F("Rollerpfad");
break;
}
case 268170:
{
returnValue = F("Rollerstr.");
break;
}
case 268171:
{
returnValue = F("Rollerstrecke");
break;
}
case 268172:
{
returnValue = F("Rolles Gäßchen");
break;
}
case 268173:
{
returnValue = F("Rollesbroicher Str.");
break;
}
case 268174:
{
returnValue = F("Rollesstr.");
break;
}
case 268175:
{
returnValue = F("Rollestr.");
break;
}
case 268176:
{
returnValue = F("Rolleweg");
break;
}
case 268177:
{
returnValue = F("Rollgasse");
break;
}
case 268178:
{
returnValue = F("Rollgenlinie");
break;
}
case 268179:
{
returnValue = F("Rollhafenweg (soll nicht mehr benutzt werden)");
break;
}
case 268180:
{
returnValue = F("Rollhof");
break;
}
case 268181:
{
returnValue = F("Rollhofener Weg");
break;
}
case 268182:
{
returnValue = F("Rollhofer Weg");
break;
}
case 268183:
{
returnValue = F("Rollhofsteige");
break;
}
case 268184:
{
returnValue = F("Rollhofweg");
break;
}
case 268185:
{
returnValue = F("Rollingenstr.");
break;
}
case 268186:
{
returnValue = F("Rollinsruher Weg");
break;
}
case 268187:
{
returnValue = F("Rollinstr.");
break;
}
case 268188:
{
returnValue = F("Rolliweg");
break;
}
case 268189:
{
returnValue = F("Rollmannstr.");
break;
}
case 268190:
{
returnValue = F("Rollmattweg");
break;
}
case 268191:
{
returnValue = F("Rollnerstr.");
break;
}
case 268192:
{
returnValue = F("Rollossweg");
break;
}
case 268193:
{
returnValue = F("Rollplatz");
break;
}
case 268194:
{
returnValue = F("Rolls");
break;
}
case 268195:
{
returnValue = F("Rollsberg");
break;
}
case 268196:
{
returnValue = F("Rollschuhplatz");
break;
}
case 268197:
{
returnValue = F("Rollshäuser Weg");
break;
}
case 268198:
{
returnValue = F("Rollsiepen");
break;
}
case 268199:
{
returnValue = F("Rollstr.");
break;
}
case 268200:
{
returnValue = F("Rollstuhl Aufgang");
break;
}
case 268201:
{
returnValue = F("Rollstuhlauffahrt");
break;
}
case 268202:
{
returnValue = F("Rollstuhlweg zum Hagenstein");
break;
}
case 268203:
{
returnValue = F("Rollwagstr.");
break;
}
case 268204:
{
returnValue = F("Rollwasenweg");
break;
}
case 268205:
{
returnValue = F("Rollwasserweg");
break;
}
case 268206:
{
returnValue = F("Rollweg");
break;
}
case 268207:
{
returnValue = F("Rollwiesenweg");
break;
}
case 268208:
{
returnValue = F("Rollwägeli");
break;
}
case 268209:
{
returnValue = F("Roloff-Möller-Weg");
break;
}
case 268210:
{
returnValue = F("Roloffplatz");
break;
}
case 268211:
{
returnValue = F("Roloffstr.");
break;
}
case 268212:
{
returnValue = F("Roloffstälchen");
break;
}
case 268213:
{
returnValue = F("Rolofshagen");
break;
}
case 268214:
{
returnValue = F("Rolofstalweg");
break;
}
case 268215:
{
returnValue = F("Rolofswieke I");
break;
}
case 268216:
{
returnValue = F("Rolofswieke II");
break;
}
case 268217:
{
returnValue = F("Rolofswieke Ost");
break;
}
case 268218:
{
returnValue = F("Rolofswieke West");
break;
}
case 268219:
{
returnValue = F("Rolover Kirchweg");
break;
}
case 268220:
{
returnValue = F("Rolsbachstr.");
break;
}
case 268221:
{
returnValue = F("Rolsberg");
break;
}
case 268222:
{
returnValue = F("Rolsberger Str.");
break;
}
case 268223:
{
returnValue = F("Rolshagen");
break;
}
case 268224:
{
returnValue = F("Rolshausener Str.");
break;
}
case 268225:
{
returnValue = F("Rolshausenstr.");
break;
}
case 268226:
{
returnValue = F("Rom");
break;
}
case 268227:
{
returnValue = F("Romadourweg");
break;
}
case 268228:
{
returnValue = F("Roman-Abt-Str.");
break;
}
case 268229:
{
returnValue = F("Roman-Boos-Str.");
break;
}
case 268230:
{
returnValue = F("Roman-Heiligenthal-Weg");
break;
}
case 268231:
{
returnValue = F("Roman-Herzog-Str.");
break;
}
case 268232:
{
returnValue = F("Roman-Raith-Str.");
break;
}
case 268233:
{
returnValue = F("Roman-Stelzer-Str.");
break;
}
case 268234:
{
returnValue = F("Romaneistr.");
break;
}
case 268235:
{
returnValue = F("Romaney");
break;
}
case 268236:
{
returnValue = F("Romaneyer Str.");
break;
}
case 268237:
{
returnValue = F("Romangäßle");
break;
}
case 268238:
{
returnValue = F("Romanischer Garten im Kloster Neuwerk");
break;
}
case 268239:
{
returnValue = F("Romano-Guardini-Platz");
break;
}
case 268240:
{
returnValue = F("Romano-Guardini-Weg");
break;
}
case 268241:
{
returnValue = F("Romansfelsenstr.");
break;
}
case 268242:
{
returnValue = F("Romanshorner Platz");
break;
}
case 268243:
{
returnValue = F("Romanshöhweg");
break;
}
case 268244:
{
returnValue = F("Romansstr.");
break;
}
case 268245:
{
returnValue = F("Romansthal");
break;
}
case 268246:
{
returnValue = F("Romansthaler Str.");
break;
}
case 268247:
{
returnValue = F("Romanstr.");
break;
}
case 268248:
{
returnValue = F("Romantikpfad");
break;
}
case 268249:
{
returnValue = F("Romantische Str.");
break;
}
case 268250:
{
returnValue = F("Romanus-Schad-Str.");
break;
}
case 268251:
{
returnValue = F("Romanusplatz");
break;
}
case 268252:
{
returnValue = F("Romanusstr.");
break;
}
case 268253:
{
returnValue = F("Romanusweg");
break;
}
case 268254:
{
returnValue = F("Romanweg");
break;
}
case 268255:
{
returnValue = F("Romaricusweg");
break;
}
case 268256:
{
returnValue = F("Romatsried");
break;
}
case 268257:
{
returnValue = F("Rombacher Hütte");
break;
}
case 268258:
{
returnValue = F("Rombacher Str.");
break;
}
case 268259:
{
returnValue = F("Rombachstr.");
break;
}
case 268260:
{
returnValue = F("Rombachtunnel");
break;
}
case 268261:
{
returnValue = F("Rombachweg");
break;
}
case 268262:
{
returnValue = F("Rombasstr.");
break;
}
case 268263:
{
returnValue = F("Romberg");
break;
}
case 268264:
{
returnValue = F("Romberg Kreuzweg");
break;
}
case 268265:
{
returnValue = F("Romberger Str.");
break;
}
case 268266:
{
returnValue = F("Rombergscher Weg");
break;
}
case 268267:
{
returnValue = F("Rombergskamp");
break;
}
case 268268:
{
returnValue = F("Rombergstr.");
break;
}
case 268269:
{
returnValue = F("Rombergweg");
break;
}
case 268270:
{
returnValue = F("Rombrichweg");
break;
}
case 268271:
{
returnValue = F("Rombrock");
break;
}
case 268272:
{
returnValue = F("Rombusch");
break;
}
case 268273:
{
returnValue = F("Romdöppen");
break;
}
case 268274:
{
returnValue = F("Romeckeweg");
break;
}
case 268275:
{
returnValue = F("Romeisstr.");
break;
}
case 268276:
{
returnValue = F("Romelstr.");
break;
}
case 268277:
{
returnValue = F("Romental");
break;
}
case 268278:
{
returnValue = F("Romenthal");
break;
}
case 268279:
{
returnValue = F("Romeostr.");
break;
}
case 268280:
{
returnValue = F("Romeoweg");
break;
}
case 268281:
{
returnValue = F("Romerich");
break;
}
case 268282:
{
returnValue = F("Romersbergstr.");
break;
}
case 268283:
{
returnValue = F("Romersgartenweg");
break;
}
case 268284:
{
returnValue = F("Romerstr.");
break;
}
case 268285:
{
returnValue = F("Romesstr.");
break;
}
case 268286:
{
returnValue = F("Romgasse");
break;
}
case 268287:
{
returnValue = F("Romhalden");
break;
}
case 268288:
{
returnValue = F("Romhofsgasse");
break;
}
case 268289:
{
returnValue = F("Romikastr.");
break;
}
case 268290:
{
returnValue = F("Romillystr.");
break;
}
case 268291:
{
returnValue = F("Romintener Weg");
break;
}
case 268292:
{
returnValue = F("Romintenweg");
break;
}
case 268293:
{
returnValue = F("Rominter Heide");
break;
}
case 268294:
{
returnValue = F("Rominter Str.");
break;
}
case 268295:
{
returnValue = F("Rominter Weg");
break;
}
case 268296:
{
returnValue = F("Rominterstr.");
break;
}
case 268297:
{
returnValue = F("Rominterweg");
break;
}
case 268298:
{
returnValue = F("Romishorn");
break;
}
case 268299:
{
returnValue = F("Romkestr.");
break;
}
case 268300:
{
returnValue = F("Romleweierweg");
break;
}
case 268301:
{
returnValue = F("Rommeldeller Bahn");
break;
}
case 268302:
{
returnValue = F("Rommeler Weg");
break;
}
case 268303:
{
returnValue = F("Rommelfangen");
break;
}
case 268304:
{
returnValue = F("Rommelgasse");
break;
}
case 268305:
{
returnValue = F("Rommelhäuser Str.");
break;
}
case 268306:
{
returnValue = F("Rommeljansweg");
break;
}
case 268307:
{
returnValue = F("Rommelsau");
break;
}
case 268308:
{
returnValue = F("Rommelsbach");
break;
}
case 268309:
{
returnValue = F("Rommelsbacher Str.");
break;
}
case 268310:
{
returnValue = F("Rommelsbachstr.");
break;
}
case 268311:
{
returnValue = F("Rommelsberg");
break;
}
case 268312:
{
returnValue = F("Rommelsdorfer Str.");
break;
}
case 268313:
{
returnValue = F("Rommelshalde");
break;
}
case 268314:
{
returnValue = F("Rommelshauser Str.");
break;
}
case 268315:
{
returnValue = F("Rommelsheimer Str.");
break;
}
case 268316:
{
returnValue = F("Rommelshohle");
break;
}
case 268317:
{
returnValue = F("Rommelshäuser Str.");
break;
}
case 268318:
{
returnValue = F("Rommelsmaar");
break;
}
case 268319:
{
returnValue = F("Rommelsrieder Str.");
break;
}
case 268320:
{
returnValue = F("Rommelssiepen");
break;
}
case 268321:
{
returnValue = F("Rommelstalstr.");
break;
}
case 268322:
{
returnValue = F("Rommelstr.");
break;
}
case 268323:
{
returnValue = F("Rommelsweg");
break;
}
case 268324:
{
returnValue = F("Rommelsworth");
break;
}
case 268325:
{
returnValue = F("Rommelweg");
break;
}
case 268326:
{
returnValue = F("Rommener Str.");
break;
}
case 268327:
{
returnValue = F("Rommenhöller Str.");
break;
}
case 268328:
{
returnValue = F("Rommenhöllerstr.");
break;
}
case 268329:
{
returnValue = F("Rommentaler Str.");
break;
}
case 268330:
{
returnValue = F("Rommentalweg");
break;
}
case 268331:
{
returnValue = F("Rommerichweg");
break;
}
case 268332:
{
returnValue = F("Rommeroder Str.");
break;
}
case 268333:
{
returnValue = F("Rommerodweg");
break;
}
case 268334:
{
returnValue = F("Rommers");
break;
}
case 268335:
{
returnValue = F("Rommersberg");
break;
}
case 268336:
{
returnValue = F("Rommersberger Weg");
break;
}
case 268337:
{
returnValue = F("Rommersbrunner Str.");
break;
}
case 268338:
{
returnValue = F("Rommerscheid");
break;
}
case 268339:
{
returnValue = F("Rommerscheider Höhe");
break;
}
case 268340:
{
returnValue = F("Rommerscheider Str.");
break;
}
case 268341:
{
returnValue = F("Rommersdorfer Str.");
break;
}
case 268342:
{
returnValue = F("Rommerser Str.");
break;
}
case 268343:
{
returnValue = F("Rommersheimer Str.");
break;
}
case 268344:
{
returnValue = F("Rommersheimer Weg");
break;
}
case 268345:
{
returnValue = F("Rommershäuser Hohle");
break;
}
case 268346:
{
returnValue = F("Rommerskirchener Str.");
break;
}
case 268347:
{
returnValue = F("Rommersrainer Mühle");
break;
}
case 268348:
{
returnValue = F("Rommerzer Str.");
break;
}
case 268349:
{
returnValue = F("Rommeröder Str.");
break;
}
case 268350:
{
returnValue = F("Romminggasse");
break;
}
case 268351:
{
returnValue = F("Rompertsbourweg");
break;
}
case 268352:
{
returnValue = F("Rompertsweg");
break;
}
case 268353:
{
returnValue = F("Romröder Str.");
break;
}
case 268354:
{
returnValue = F("Romschlösslegarten");
break;
}
case 268355:
{
returnValue = F("Romsdorfer Siedlung");
break;
}
case 268356:
{
returnValue = F("Romsdorfer Weg");
break;
}
case 268357:
{
returnValue = F("Romsgang");
break;
}
case 268358:
{
returnValue = F("Romsthaler Str.");
break;
}
case 268359:
{
returnValue = F("Romstr.");
break;
}
case 268360:
{
returnValue = F("Romuald-Domaschke-Str.");
break;
}
case 268361:
{
returnValue = F("Romualdstr.");
break;
}
case 268362:
{
returnValue = F("Romulusstr.");
break;
}
case 268363:
{
returnValue = F("Romy-Schneider-Str.");
break;
}
case 268364:
{
returnValue = F("Romäusring");
break;
}
case 268365:
{
returnValue = F("Ronberger Str.");
break;
}
case 268366:
{
returnValue = F("Ronbergerweg");
break;
}
case 268367:
{
returnValue = F("Roncalliplatz");
break;
}
case 268368:
{
returnValue = F("Roncallistr.");
break;
}
case 268369:
{
returnValue = F("Roncalliweg");
break;
}
case 268370:
{
returnValue = F("Rondebusch");
break;
}
case 268371:
{
returnValue = F("Rondeel");
break;
}
case 268372:
{
returnValue = F("Rondehäuser Mühle");
break;
}
case 268373:
{
returnValue = F("Rondel");
break;
}
case 268374:
{
returnValue = F("Rondelblick");
break;
}
case 268375:
{
returnValue = F("Rondelbrücke");
break;
}
case 268376:
{
returnValue = F("Rondeler Str.");
break;
}
case 268377:
{
returnValue = F("Rondeler Weg");
break;
}
case 268378:
{
returnValue = F("Rondell");
break;
}
case 268379:
{
returnValue = F("Rondell 1");
break;
}
case 268380:
{
returnValue = F("Rondell 2");
break;
}
case 268381:
{
returnValue = F("Rondell 3");
break;
}
case 268382:
{
returnValue = F("Rondell 4");
break;
}
case 268383:
{
returnValue = F("Rondell Città della Pieve");
break;
}
case 268384:
{
returnValue = F("Rondell Dardilly");
break;
}
case 268385:
{
returnValue = F("Rondell North Hykeham");
break;
}
case 268386:
{
returnValue = F("Rondell St. Cyr");
break;
}
case 268387:
{
returnValue = F("Rondell am See");
break;
}
case 268388:
{
returnValue = F("Rondell auf dem Bürgerplatz");
break;
}
case 268389:
{
returnValue = F("Rondell-Trail");
break;
}
case 268390:
{
returnValue = F("Rondellstr.");
break;
}
case 268391:
{
returnValue = F("Rondellweg");
break;
}
case 268392:
{
returnValue = F("Rondellweg Nord");
break;
}
case 268393:
{
returnValue = F("Rondellweg Süd");
break;
}
case 268394:
{
returnValue = F("Rondelschneise");
break;
}
case 268395:
{
returnValue = F("Rondelstr.");
break;
}
case 268396:
{
returnValue = F("Rondeltalweg");
break;
}
case 268397:
{
returnValue = F("Ronden-Buschen-Weg");
break;
}
case 268398:
{
returnValue = F("Rondeshagener Str.");
break;
}
case 268399:
{
returnValue = F("Rondorfer Str.");
break;
}
case 268400:
{
returnValue = F("Ronduit");
break;
}
case 268401:
{
returnValue = F("Ronetsbachstr.");
break;
}
case 268402:
{
returnValue = F("Rongeweg");
break;
}
case 268403:
{
returnValue = F("Rongk öm et Jipfelkröx");
break;
}
case 268404:
{
returnValue = F("Ronheider Berg");
break;
}
case 268405:
{
returnValue = F("Ronheim");
break;
}
case 268406:
{
returnValue = F("Ronheimer Weg");
break;
}
case 268407:
{
returnValue = F("Ronhofer Hauptstr.");
break;
}
case 268408:
{
returnValue = F("Ronhofer Weg");
break;
}
case 268409:
{
returnValue = F("Ronhäuser Str.");
break;
}
case 268410:
{
returnValue = F("Ronickeweg");
break;
}
case 268411:
{
returnValue = F("Roniger Weg");
break;
}
case 268412:
{
returnValue = F("Roninghauser Weg");
break;
}
case 268413:
{
returnValue = F("Ronkarzgarten");
break;
}
case 268414:
{
returnValue = F("Ronneberg");
break;
}
case 268415:
{
returnValue = F("Ronnebergstr.");
break;
}
case 268416:
{
returnValue = F("Ronneburgblick");
break;
}
case 268417:
{
returnValue = F("Ronneburger Hof");
break;
}
case 268418:
{
returnValue = F("Ronneburger Str.");
break;
}
case 268419:
{
returnValue = F("Ronneburger Weg");
break;
}
case 268420:
{
returnValue = F("Ronneburgstr.");
break;
}
case 268421:
{
returnValue = F("Ronnenberger Str.");
break;
}
case 268422:
{
returnValue = F("Ronnenberger Weg");
break;
}
case 268423:
{
returnValue = F("Ronnenbergweg");
break;
}
case 268424:
{
returnValue = F("Ronnentalweg");
break;
}
case 268425:
{
returnValue = F("Ronnenwiese");
break;
}
case 268426:
{
returnValue = F("Ronnertweg");
break;
}
case 268427:
{
returnValue = F("Ronnewiesen");
break;
}
case 268428:
{
returnValue = F("Ronnewinkel");
break;
}
case 268429:
{
returnValue = F("Ronney");
break;
}
case 268430:
{
returnValue = F("Ronnstr.");
break;
}
case 268431:
{
returnValue = F("Ronrieder Str.");
break;
}
case 268432:
{
returnValue = F("Ronsbachstr.");
break;
}
case 268433:
{
returnValue = F("Ronsbachweg");
break;
}
case 268434:
{
returnValue = F("Ronsberger Str.");
break;
}
case 268435:
{
returnValue = F("Ronsdorfer Str.");
break;
}
case 268436:
{
returnValue = F("Ronser Str.");
break;
}
case 268437:
{
returnValue = F("Ronshauser Str.");
break;
}
case 268438:
{
returnValue = F("Ronshäuser Weg");
break;
}
case 268439:
{
returnValue = F("Ronsperger Str.");
break;
}
case 268440:
{
returnValue = F("Ronwaldstr.");
break;
}
case 268441:
{
returnValue = F("Roofensee");
break;
}
case 268442:
{
returnValue = F("Roofenstr.");
break;
}
case 268443:
{
returnValue = F("Roofwinkel");
break;
}
case 268444:
{
returnValue = F("Rookhorst");
break;
}
case 268445:
{
returnValue = F("Roomersheide");
break;
}
case 268446:
{
returnValue = F("Roompott");
break;
}
case 268447:
{
returnValue = F("Roonallee");
break;
}
case 268448:
{
returnValue = F("Roonsiedlung");
break;
}
case 268449:
{
returnValue = F("Roonstr.");
break;
}
case 268450:
{
returnValue = F("Roopstr.");
break;
}
case 268451:
{
returnValue = F("Rooschüzstr.");
break;
}
case 268452:
{
returnValue = F("Rooschüzweg");
break;
}
case 268453:
{
returnValue = F("Roosenstr.");
break;
}
case 268454:
{
returnValue = F("Roosenwegg");
break;
}
case 268455:
{
returnValue = F("Roosevelt Avenue");
break;
}
case 268456:
{
returnValue = F("Rooseveltstr.");
break;
}
case 268457:
{
returnValue = F("Roosgartenstr.");
break;
}
case 268458:
{
returnValue = F("Rooskens Kamp");
break;
}
case 268459:
{
returnValue = F("Roosmannstr.");
break;
}
case 268460:
{
returnValue = F("Roostengasse");
break;
}
case 268461:
{
returnValue = F("Roostengraben");
break;
}
case 268462:
{
returnValue = F("Roostenhof");
break;
}
case 268463:
{
returnValue = F("Rooswiesle");
break;
}
case 268464:
{
returnValue = F("Roosäcker");
break;
}
case 268465:
{
returnValue = F("Roosäckerstr.");
break;
}
case 268466:
{
returnValue = F("Rootbostweg");
break;
}
case 268467:
{
returnValue = F("Rootsbase");
break;
}
case 268468:
{
returnValue = F("Roozendaalstr.");
break;
}
case 268469:
{
returnValue = F("Rooßweg");
break;
}
case 268470:
{
returnValue = F("Ropachweg");
break;
}
case 268471:
{
returnValue = F("Ropbachweg");
break;
}
case 268472:
{
returnValue = F("Ropenstall");
break;
}
case 268473:
{
returnValue = F("Ropenstaller Weg");
break;
}
case 268474:
{
returnValue = F("Roppelsgasse");
break;
}
case 268475:
{
returnValue = F("Roppendorf");
break;
}
case 268476:
{
returnValue = F("Ropperhäuser Str.");
break;
}
case 268477:
{
returnValue = F("Ropperhäuser Weg");
break;
}
case 268478:
{
returnValue = F("Ropperoder Str.");
break;
}
case 268479:
{
returnValue = F("Roppershainer Feldweg");
break;
}
case 268480:
{
returnValue = F("Roppershainer Str.");
break;
}
case 268481:
{
returnValue = F("Roppershainer Weg");
break;
}
case 268482:
{
returnValue = F("Roppersthal");
break;
}
case 268483:
{
returnValue = F("Roquetteweg");
break;
}
case 268484:
{
returnValue = F("Rorbachstr.");
break;
}
case 268485:
{
returnValue = F("Rorerstr.");
break;
}
case 268486:
{
returnValue = F("Rorerweg");
break;
}
case 268487:
{
returnValue = F("Rorgensteig");
break;
}
case 268488:
{
returnValue = F("Rorgenwieser Str.");
break;
}
case 268489:
{
returnValue = F("Rorichmoorer Str.");
break;
}
case 268490:
{
returnValue = F("Rorichumer Str.");
break;
}
case 268491:
{
returnValue = F("Roringer Stieg");
break;
}
case 268492:
{
returnValue = F("Roringer Winkel");
break;
}
case 268493:
{
returnValue = F("Roritzerstr.");
break;
}
case 268494:
{
returnValue = F("Rormannstr.");
break;
}
case 268495:
{
returnValue = F("Roruper Str.");
break;
}
case 268496:
{
returnValue = F("Rorups Wiese");
break;
}
case 268497:
{
returnValue = F("Rosa-Abraham-Platz");
break;
}
case 268498:
{
returnValue = F("Rosa-Achenbach-Str.");
break;
}
case 268499:
{
returnValue = F("Rosa-Aschenbrenner-Anlage");
break;
}
case 268500:
{
returnValue = F("Rosa-Bauer-Str.");
break;
}
case 268501:
{
returnValue = F("Rosa-Broghammer-Str.");
break;
}
case 268502:
{
returnValue = F("Rosa-Böhmer-Platz");
break;
}
case 268503:
{
returnValue = F("Rosa-Hahn-Str.");
break;
}
case 268504:
{
returnValue = F("Rosa-Heinz-Weg");
break;
}
case 268505:
{
returnValue = F("Rosa-Heinzelmann-Str.");
break;
}
case 268506:
{
returnValue = F("Rosa-Helfers-Str.");
break;
}
case 268507:
{
returnValue = F("Rosa-Hürner-Str.");
break;
}
case 268508:
{
returnValue = F("Rosa-Ilberg-Str.");
break;
}
case 268509:
{
returnValue = F("Rosa-Kempf-Str.");
break;
}
case 268510:
{
returnValue = F("Rosa-Leibfried-Str.");
break;
}
case 268511:
{
returnValue = F("Rosa-Luxemburg-Allee");
break;
}
case 268512:
{
returnValue = F("Rosa-Luxemburg-Damm");
break;
}
case 268513:
{
returnValue = F("Rosa-Luxemburg-Platz");
break;
}
case 268514:
{
returnValue = F("Rosa-Luxemburg-Ring");
break;
}
case 268515:
{
returnValue = F("Rosa-Luxemburg-Steig");
break;
}
case 268516:
{
returnValue = F("Rosa-Luxemburg-Str.");
break;
}
case 268517:
{
returnValue = F("Rosa-Luxemburg-Weg");
break;
}
case 268518:
{
returnValue = F("Rosa-Mihalka-Platz");
break;
}
case 268519:
{
returnValue = F("Rosa-Neumayr-Str.");
break;
}
case 268520:
{
returnValue = F("Rosa-Parks-Str.");
break;
}
case 268521:
{
returnValue = F("Rosa-Pfeil-Str.");
break;
}
case 268522:
{
returnValue = F("Rosa-Schubert-Str.");
break;
}
case 268523:
{
returnValue = F("Rosa-Schöpf-Str.");
break;
}
case 268524:
{
returnValue = F("Rosa-Stern-Weg");
break;
}
case 268525:
{
returnValue = F("Rosa-Sucher-Str.");
break;
}
case 268526:
{
returnValue = F("Rosa-Verlage-Str.");
break;
}
case 268527:
{
returnValue = F("Rosaer Weg");
break;
}
case 268528:
{
returnValue = F("Rosagrund");
break;
}
case 268529:
{
returnValue = F("Rosahler Weg");
break;
}
case 268530:
{
returnValue = F("Rosalie-Hauser-Str.");
break;
}
case 268531:
{
returnValue = F("Rosalie-Silberberg-Ring");
break;
}
case 268532:
{
returnValue = F("Rosalienstr.");
break;
}
case 268533:
{
returnValue = F("Rosalskyweg");
break;
}
case 268534:
{
returnValue = F("Rosannaweg");
break;
}
case 268535:
{
returnValue = F("Rosarioplatz");
break;
}
case 268536:
{
returnValue = F("Rosarium");
break;
}
case 268537:
{
returnValue = F("Rosarium Hopfau");
break;
}
case 268538:
{
returnValue = F("Rosarium Laufer Mühle");
break;
}
case 268539:
{
returnValue = F("Rosariusse Jääsje");
break;
}
case 268540:
{
returnValue = F("Rosastr.");
break;
}
case 268541:
{
returnValue = F("Rosatalstr.");
break;
}
case 268542:
{
returnValue = F("Rosau");
break;
}
case 268543:
{
returnValue = F("Rosaueler Weg");
break;
}
case 268544:
{
returnValue = F("Rosaweg");
break;
}
case 268545:
{
returnValue = F("Rosbachallee");
break;
}
case 268546:
{
returnValue = F("Rosbacher Str.");
break;
}
case 268547:
{
returnValue = F("Rosbacher Weg");
break;
}
case 268548:
{
returnValue = F("Rosbarger Weg");
break;
}
case 268549:
{
returnValue = F("Rosbecke");
break;
}
case 268550:
{
returnValue = F("Rosberg");
break;
}
case 268551:
{
returnValue = F("Roschauer Str.");
break;
}
case 268552:
{
returnValue = F("Roschbacher Str.");
break;
}
case 268553:
{
returnValue = F("Roschbachstr.");
break;
}
case 268554:
{
returnValue = F("Roschbachweg");
break;
}
case 268555:
{
returnValue = F("Roschberger Str.");
break;
}
case 268556:
{
returnValue = F("Roschbergstr.");
break;
}
case 268557:
{
returnValue = F("Roschbergverbindungsweg");
break;
}
case 268558:
{
returnValue = F("Roschdohler Eck");
break;
}
case 268559:
{
returnValue = F("Roschdohler Weg");
break;
}
case 268560:
{
returnValue = F("Roscheider Str.");
break;
}
case 268561:
{
returnValue = F("Roscheiderhof");
break;
}
case 268562:
{
returnValue = F("Roscheklinge");
break;
}
case 268563:
{
returnValue = F("Roscher Str.");
break;
}
case 268564:
{
returnValue = F("Roscher Weg");
break;
}
case 268565:
{
returnValue = F("Roschersteig");
break;
}
case 268566:
{
returnValue = F("Roscherstr.");
break;
}
case 268567:
{
returnValue = F("Roscherweg");
break;
}
case 268568:
{
returnValue = F("Roschitzerstr.");
break;
}
case 268569:
{
returnValue = F("Roschlaub");
break;
}
case 268570:
{
returnValue = F("Roschstr.");
break;
}
case 268571:
{
returnValue = F("Rosdorfer Kreisel");
break;
}
case 268572:
{
returnValue = F("Rosdorfer Weg");
break;
}
case 268573:
{
returnValue = F("Rose");
break;
}
case 268574:
{
returnValue = F("Rose-Ausländer-Str.");
break;
}
case 268575:
{
returnValue = F("Rose-Luxemburg-Str.");
break;
}
case 268576:
{
returnValue = F("Rosebachstr.");
break;
}
case 268577:
{
returnValue = F("Rosebruch");
break;
}
case 268578:
{
returnValue = F("Roseburger Str.");
break;
}
case 268579:
{
returnValue = F("Roseckstr.");
break;
}
case 268580:
{
returnValue = F("Rosee Schneise");
break;
}
case 268581:
{
returnValue = F("Rosefeld");
break;
}
case 268582:
{
returnValue = F("Rosefelder Str.");
break;
}
case 268583:
{
returnValue = F("Rosefelder Weg");
break;
}
case 268584:
{
returnValue = F("Rosegatt");
break;
}
case 268585:
{
returnValue = F("Rosegger Str.");
break;
}
case 268586:
{
returnValue = F("Rosegger Weg");
break;
}
case 268587:
{
returnValue = F("Roseggerstr.");
break;
}
case 268588:
{
returnValue = F("Roseggerweg");
break;
}
case 268589:
{
returnValue = F("Rosekamp");
break;
}
case 268590:
{
returnValue = F("Rosellastr.");
break;
}
case 268591:
{
returnValue = F("Rosellener Kirchstr.");
break;
}
case 268592:
{
returnValue = F("Rosellener Schulstr.");
break;
}
case 268593:
{
returnValue = F("Rosellenplatz");
break;
}
case 268594:
{
returnValue = F("Roseller Str.");
break;
}
case 268595:
{
returnValue = F("Rosellstr.");
break;
}
case 268596:
{
returnValue = F("Rosemannstr.");
break;
}
case 268597:
{
returnValue = F("Rosemarsow");
break;
}
case 268598:
{
returnValue = F("Rosemeiers Brink");
break;
}
case 268599:
{
returnValue = F("Rosemeyerstr.");
break;
}
case 268600:
{
returnValue = F("Rosen Schmidts Weg");
break;
}
case 268601:
{
returnValue = F("Rosen Weg");
break;
}
case 268602:
{
returnValue = F("Rosen- und Skulpturengarten");
break;
}
case 268603:
{
returnValue = F("Rosen-Duft-Garten");
break;
}
case 268604:
{
returnValue = F("Rosenacker");
break;
}
case 268605:
{
returnValue = F("Rosenackerweg");
break;
}
case 268606:
{
returnValue = F("Rosenallee");
break;
}
case 268607:
{
returnValue = F("Rosenamselplatz");
break;
}
case 268608:
{
returnValue = F("Rosenanger");
break;
}
case 268609:
{
returnValue = F("Rosenanlage");
break;
}
case 268610:
{
returnValue = F("Rosenapfelstr.");
break;
}
case 268611:
{
returnValue = F("Rosenapfelweg");
break;
}
case 268612:
{
returnValue = F("Rosenau");
break;
}
case 268613:
{
returnValue = F("Rosenau Str.");
break;
}
case 268614:
{
returnValue = F("Rosenaue");
break;
}
case 268615:
{
returnValue = F("Rosenauer Str.");
break;
}
case 268616:
{
returnValue = F("Rosenauer Weg");
break;
}
case 268617:
{
returnValue = F("Rosenauplatz");
break;
}
case 268618:
{
returnValue = F("Rosenausteig");
break;
}
case 268619:
{
returnValue = F("Rosenaustieg");
break;
}
case 268620:
{
returnValue = F("Rosenaustr.");
break;
}
case 268621:
{
returnValue = F("Rosenauweg");
break;
}
case 268622:
{
returnValue = F("Rosenbach");
break;
}
case 268623:
{
returnValue = F("Rosenbacher Str.");
break;
}
case 268624:
{
returnValue = F("Rosenbacher Weg");
break;
}
case 268625:
{
returnValue = F("Rosenbachpark");
break;
}
case 268626:
{
returnValue = F("Rosenbachstr.");
break;
}
case 268627:
{
returnValue = F("Rosenbadbrücke");
break;
}
case 268628:
{
returnValue = F("Rosenbadstr.");
break;
}
case 268629:
{
returnValue = F("Rosenbaums Hof");
break;
}
case 268630:
{
returnValue = F("Rosenbaumweg");
break;
}
case 268631:
{
returnValue = F("Rosenbeck");
break;
}
case 268632:
{
returnValue = F("Rosenbecker Schleuse");
break;
}
case 268633:
{
returnValue = F("Rosenbecker Str.");
break;
}
case 268634:
{
returnValue = F("Rosenbecker Weg");
break;
}
case 268635:
{
returnValue = F("Rosenbenden");
break;
}
case 268636:
{
returnValue = F("Rosenberg");
break;
}
case 268637:
{
returnValue = F("Rosenberg-Siedlung");
break;
}
case 268638:
{
returnValue = F("Rosenberger Str.");
break;
}
case 268639:
{
returnValue = F("Rosenberger Trimm-dich-Pfad");
break;
}
case 268640:
{
returnValue = F("Rosenberger Weg");
break;
}
case 268641:
{
returnValue = F("RosenbergerStr.");
break;
}
case 268642:
{
returnValue = F("Rosenbergerstr.");
break;
}
case 268643:
{
returnValue = F("Rosenbergerweg");
break;
}
case 268644:
{
returnValue = F("Rosenberghof");
break;
}
case 268645:
{
returnValue = F("Rosenbergplatz");
break;
}
case 268646:
{
returnValue = F("Rosenbergshohl");
break;
}
case 268647:
{
returnValue = F("Rosenbergstr.");
break;
}
case 268648:
{
returnValue = F("Rosenbergsweg");
break;
}
case 268649:
{
returnValue = F("Rosenbergweg");
break;
}
case 268650:
{
returnValue = F("Rosenbichlweg");
break;
}
case 268651:
{
returnValue = F("Rosenbitze");
break;
}
case 268652:
{
returnValue = F("Rosenblathstr.");
break;
}
case 268653:
{
returnValue = F("Rosenblöcken");
break;
}
case 268654:
{
returnValue = F("Rosenbogen");
break;
}
case 268655:
{
returnValue = F("Rosenbohmsweg");
break;
}
case 268656:
{
returnValue = F("Rosenborn");
break;
}
case 268657:
{
returnValue = F("Rosenbornstr.");
break;
}
case 268658:
{
returnValue = F("Rosenbornweg");
break;
}
case 268659:
{
returnValue = F("Rosenbrink");
break;
}
case 268660:
{
returnValue = F("Rosenbrockstr.");
break;
}
case 268661:
{
returnValue = F("Rosenbroecksweg");
break;
}
case 268662:
{
returnValue = F("Rosenbrunnen");
break;
}
case 268663:
{
returnValue = F("Rosenbrunnenstr.");
break;
}
case 268664:
{
returnValue = F("Rosenbrücke");
break;
}
case 268665:
{
returnValue = F("Rosenburg");
break;
}
case 268666:
{
returnValue = F("Rosenburger Str.");
break;
}
case 268667:
{
returnValue = F("Rosenburger Weg");
break;
}
case 268668:
{
returnValue = F("Rosenbusch");
break;
}
case 268669:
{
returnValue = F("Rosenbuschstr.");
break;
}
case 268670:
{
returnValue = F("Rosenbuschweg");
break;
}
case 268671:
{
returnValue = F("Rosenbühl");
break;
}
case 268672:
{
returnValue = F("Rosenbühlstr.");
break;
}
case 268673:
{
returnValue = F("Rosenbühlweg");
break;
}
case 268674:
{
returnValue = F("Rosendahler Str.");
break;
}
case 268675:
{
returnValue = F("Rosendahler Weg");
break;
}
case 268676:
{
returnValue = F("Rosendaler Weg");
break;
}
case 268677:
{
returnValue = F("Rosendalstr.");
break;
}
case 268678:
{
returnValue = F("Rosendalweg");
break;
}
case 268679:
{
returnValue = F("Rosendamm");
break;
}
case 268680:
{
returnValue = F("Rosendeller Str.");
break;
}
case 268681:
{
returnValue = F("Rosendornweg");
break;
}
case 268682:
{
returnValue = F("Roseneck");
break;
}
case 268683:
{
returnValue = F("Rosenecke");
break;
}
case 268684:
{
returnValue = F("Rosenecker Str.");
break;
}
case 268685:
{
returnValue = F("Rosenecker Weg");
break;
}
case 268686:
{
returnValue = F("Rosenecker-Weg");
break;
}
case 268687:
{
returnValue = F("Rosenecksteige");
break;
}
case 268688:
{
returnValue = F("Roseneckweg");
break;
}
case 268689:
{
returnValue = F("Roseneggbergweg");
break;
}
case 268690:
{
returnValue = F("Roseneggstr.");
break;
}
case 268691:
{
returnValue = F("Roseneggweg");
break;
}
case 268692:
{
returnValue = F("Rosenellerweg");
break;
}
case 268693:
{
returnValue = F("Rosenfeld");
break;
}
case 268694:
{
returnValue = F("Rosenfelder Str.");
break;
}
case 268695:
{
returnValue = F("Rosenfelder Weg");
break;
}
case 268696:
{
returnValue = F("Rosenfeldstr.");
break;
}
case 268697:
{
returnValue = F("Rosenfeldweg");
break;
}
case 268698:
{
returnValue = F("Rosenfelspark");
break;
}
case 268699:
{
returnValue = F("Rosenfelsweg");
break;
}
case 268700:
{
returnValue = F("Rosengang");
break;
}
case 268701:
{
returnValue = F("Rosengarten");
break;
}
case 268702:
{
returnValue = F("Rosengarten Geyerswörth");
break;
}
case 268703:
{
returnValue = F("Rosengarten am Klinikum");
break;
}
case 268704:
{
returnValue = F("Rosengarten am Schloss");
break;
}
case 268705:
{
returnValue = F("Rosengarten am Schloßberg");
break;
}
case 268706:
{
returnValue = F("Rosengartenmittelweg");
break;
}
case 268707:
{
returnValue = F("Rosengartenstr.");
break;
}
case 268708:
{
returnValue = F("Rosengartenweg");
break;
}
case 268709:
{
returnValue = F("Rosengasse");
break;
}
case 268710:
{
returnValue = F("Rosengassenweg");
break;
}
case 268711:
{
returnValue = F("Rosengraben");
break;
}
case 268712:
{
returnValue = F("Rosengrabenstr.");
break;
}
case 268713:
{
returnValue = F("Rosengrund");
break;
}
case 268714:
{
returnValue = F("Rosengrundweg");
break;
}
case 268715:
{
returnValue = F("Rosengärtchen");
break;
}
case 268716:
{
returnValue = F("Rosengärten");
break;
}
case 268717:
{
returnValue = F("Rosengässchen");
break;
}
case 268718:
{
returnValue = F("Rosengässel");
break;
}
case 268719:
{
returnValue = F("Rosengässle");
break;
}
case 268720:
{
returnValue = F("Rosengäßchen");
break;
}
case 268721:
{
returnValue = F("Rosengäßle");
break;
}
case 268722:
{
returnValue = F("Rosenhag");
break;
}
case 268723:
{
returnValue = F("Rosenhagen");
break;
}
case 268724:
{
returnValue = F("Rosenhagen Ausbau");
break;
}
case 268725:
{
returnValue = F("Rosenhagener Str.");
break;
}
case 268726:
{
returnValue = F("Rosenhagener Weg");
break;
}
case 268727:
{
returnValue = F("Rosenhain");
break;
}
case 268728:
{
returnValue = F("Rosenhainer Str.");
break;
}
case 268729:
{
returnValue = F("Rosenhalde");
break;
}
case 268730:
{
returnValue = F("Rosenhaldenweg");
break;
}
case 268731:
{
returnValue = F("Rosenhammer");
break;
}
case 268732:
{
returnValue = F("Rosenhang");
break;
}
case 268733:
{
returnValue = F("Rosenhardtstr.");
break;
}
case 268734:
{
returnValue = F("Rosenhardtweg");
break;
}
case 268735:
{
returnValue = F("Rosenharth");
break;
}
case 268736:
{
returnValue = F("Rosenheck");
break;
}
case 268737:
{
returnValue = F("Rosenhecke");
break;
}
case 268738:
{
returnValue = F("Rosenheckenstr.");
break;
}
case 268739:
{
returnValue = F("Rosenheimer Allee");
break;
}
case 268740:
{
returnValue = F("Rosenheimer Landstr.");
break;
}
case 268741:
{
returnValue = F("Rosenheimer Str.");
break;
}
case 268742:
{
returnValue = F("Rosenheimshof");
break;
}
case 268743:
{
returnValue = F("Rosenhof");
break;
}
case 268744:
{
returnValue = F("Rosenhofer Str.");
break;
}
case 268745:
{
returnValue = F("Rosenhofsiedlung");
break;
}
case 268746:
{
returnValue = F("Rosenhofstr.");
break;
}
case 268747:
{
returnValue = F("Rosenhoftrift");
break;
}
case 268748:
{
returnValue = F("Rosenhofweg");
break;
}
case 268749:
{
returnValue = F("Rosenhohle");
break;
}
case 268750:
{
returnValue = F("Rosenholzweg");
break;
}
case 268751:
{
returnValue = F("Rosenhäger Brink");
break;
}
case 268752:
{
returnValue = F("Rosenhäger Bruch");
break;
}
case 268753:
{
returnValue = F("Rosenhäger Damm");
break;
}
case 268754:
{
returnValue = F("Rosenhäger Dorfstr.");
break;
}
case 268755:
{
returnValue = F("Rosenhäger Ecke");
break;
}
case 268756:
{
returnValue = F("Rosenhäger Grund");
break;
}
case 268757:
{
returnValue = F("Rosenhäger Hauve");
break;
}
case 268758:
{
returnValue = F("Rosenhäger Riede");
break;
}
case 268759:
{
returnValue = F("Rosenhäger Str.");
break;
}
case 268760:
{
returnValue = F("Rosenhöfe");
break;
}
case 268761:
{
returnValue = F("Rosenhöhe");
break;
}
case 268762:
{
returnValue = F("Rosenhöhweg");
break;
}
case 268763:
{
returnValue = F("Rosenhügel");
break;
}
case 268764:
{
returnValue = F("Rosenhügeler Str.");
break;
}
case 268765:
{
returnValue = F("Roseninsel");
break;
}
case 268766:
{
returnValue = F("Rosenkaimerstr.");
break;
}
case 268767:
{
returnValue = F("Rosenkamp");
break;
}
case 268768:
{
returnValue = F("Rosenkamper Str.");
break;
}
case 268769:
{
returnValue = F("Rosenkamper Weg");
break;
}
case 268770:
{
returnValue = F("Rosenkauler Weg");
break;
}
case 268771:
{
returnValue = F("Rosenkehre");
break;
}
case 268772:
{
returnValue = F("Rosenkopfer Str.");
break;
}
case 268773:
{
returnValue = F("Rosenkopfstr.");
break;
}
case 268774:
{
returnValue = F("Rosenkoppel");
break;
}
case 268775:
{
returnValue = F("Rosenkrantzstr.");
break;
}
case 268776:
{
returnValue = F("Rosenkranz");
break;
}
case 268777:
{
returnValue = F("Rosenkranzer Str.");
break;
}
case 268778:
{
returnValue = F("Rosenkranzer Weg");
break;
}
case 268779:
{
returnValue = F("Rosenkranzgarten");
break;
}
case 268780:
{
returnValue = F("Rosenkranzgasse");
break;
}
case 268781:
{
returnValue = F("Rosenkranzgäßchen");
break;
}
case 268782:
{
returnValue = F("Rosenkranzheckenbrücke");
break;
}
case 268783:
{
returnValue = F("Rosenkranzheckenweg");
break;
}
case 268784:
{
returnValue = F("Rosenkranzpfädchen");
break;
}
case 268785:
{
returnValue = F("Rosenkranzweg");
break;
}
case 268786:
{
returnValue = F("Rosenkreuzstr.");
break;
}
case 268787:
{
returnValue = F("Rosenkränzchen 2");
break;
}
case 268788:
{
returnValue = F("Rosenkränzchen I");
break;
}
case 268789:
{
returnValue = F("Rosenleite");
break;
}
case 268790:
{
returnValue = F("Rosenlächerweg");
break;
}
case 268791:
{
returnValue = F("Rosenmarienstr.");
break;
}
case 268792:
{
returnValue = F("Rosenmauer");
break;
}
case 268793:
{
returnValue = F("Rosenmoorweg");
break;
}
case 268794:
{
returnValue = F("Rosenmühle");
break;
}
case 268795:
{
returnValue = F("Rosenmühlenstr.");
break;
}
case 268796:
{
returnValue = F("Rosenmühlenweg");
break;
}
case 268797:
{
returnValue = F("Rosenmühler Weg");
break;
}
case 268798:
{
returnValue = F("Rosenmühlweg");
break;
}
case 268799:
{
returnValue = F("Rosenmüllerstr.");
break;
}
case 268800:
{
returnValue = F("Rosenneuheitengarten Beutig");
break;
}
case 268801:
{
returnValue = F("Rosennobelgärten");
break;
}
case 268802:
{
returnValue = F("Rosenobelstr.");
break;
}
case 268803:
{
returnValue = F("Rosenortschneise");
break;
}
case 268804:
{
returnValue = F("Rosenow");
break;
}
case 268805:
{
returnValue = F("Rosenow-Weg");
break;
}
case 268806:
{
returnValue = F("Rosenower Damm");
break;
}
case 268807:
{
returnValue = F("Rosenower Str.");
break;
}
case 268808:
{
returnValue = F("Rosenower Weg");
break;
}
case 268809:
{
returnValue = F("Rosenowweg");
break;
}
case 268810:
{
returnValue = F("Rosenpark");
break;
}
case 268811:
{
returnValue = F("Rosenpark Engel Universelles Leben");
break;
}
case 268812:
{
returnValue = F("Rosenpark Reinhausen");
break;
}
case 268813:
{
returnValue = F("Rosenparksiedlung");
break;
}
case 268814:
{
returnValue = F("Rosenpassage");
break;
}
case 268815:
{
returnValue = F("Rosenpfad");
break;
}
case 268816:
{
returnValue = F("Rosenplan");
break;
}
case 268817:
{
returnValue = F("Rosenplansiedlung");
break;
}
case 268818:
{
returnValue = F("Rosenplatz");
break;
}
case 268819:
{
returnValue = F("Rosenplätze");
break;
}
case 268820:
{
returnValue = F("Rosenquarzweg");
break;
}
case 268821:
{
returnValue = F("Rosenrain");
break;
}
case 268822:
{
returnValue = F("Rosenredder");
break;
}
case 268823:
{
returnValue = F("Rosenring");
break;
}
case 268824:
{
returnValue = F("Rosenrotstr.");
break;
}
case 268825:
{
returnValue = F("Rosenrotweg");
break;
}
case 268826:
{
returnValue = F("Rosenschule");
break;
}
case 268827:
{
returnValue = F("Rosensdorfer Str.");
break;
}
case 268828:
{
returnValue = F("Rosensiedlung");
break;
}
case 268829:
{
returnValue = F("Rosensiek");
break;
}
case 268830:
{
returnValue = F("Rosenstaffel");
break;
}
case 268831:
{
returnValue = F("Rosensteg");
break;
}
case 268832:
{
returnValue = F("Rosensteig");
break;
}
case 268833:
{
returnValue = F("Rosensteige");
break;
}
case 268834:
{
returnValue = F("Rosensteinblick");
break;
}
case 268835:
{
returnValue = F("Rosensteinrundweg");
break;
}
case 268836:
{
returnValue = F("Rosensteinsteg");
break;
}
case 268837:
{
returnValue = F("Rosensteinstr.");
break;
}
case 268838:
{
returnValue = F("Rosensteinweg");
break;
}
case 268839:
{
returnValue = F("Rosenstelleweg");
break;
}
case 268840:
{
returnValue = F("Rosenstengelstr.");
break;
}
case 268841:
{
returnValue = F("Rosenstieg");
break;
}
case 268842:
{
returnValue = F("Rosenstiege");
break;
}
case 268843:
{
returnValue = F("Rosenstock");
break;
}
case 268844:
{
returnValue = F("Rosenstockweg");
break;
}
case 268845:
{
returnValue = F("Rosenstr.");
break;
}
case 268846:
{
returnValue = F("Rosenstraat");
break;
}
case 268847:
{
returnValue = F("Rosenstückerweg");
break;
}
case 268848:
{
returnValue = F("Rosental");
break;
}
case 268849:
{
returnValue = F("Rosentalblick");
break;
}
case 268850:
{
returnValue = F("Rosentaler Weg");
break;
}
case 268851:
{
returnValue = F("Rosentalgäßchen");
break;
}
case 268852:
{
returnValue = F("Rosentalstr.");
break;
}
case 268853:
{
returnValue = F("Rosentalsweg");
break;
}
case 268854:
{
returnValue = F("Rosentalweg");
break;
}
case 268855:
{
returnValue = F("Rosenthal");
break;
}
case 268856:
{
returnValue = F("Rosenthalanger");
break;
}
case 268857:
{
returnValue = F("Rosenthaler Kirchweg");
break;
}
case 268858:
{
returnValue = F("Rosenthaler Landstr.");
break;
}
case 268859:
{
returnValue = F("Rosenthaler Steig");
break;
}
case 268860:
{
returnValue = F("Rosenthaler Str.");
break;
}
case 268861:
{
returnValue = F("Rosenthaler Weg");
break;
}
case 268862:
{
returnValue = F("Rosenthalerhof");
break;
}
case 268863:
{
returnValue = F("Rosenthalgasse");
break;
}
case 268864:
{
returnValue = F("Rosenthallohne");
break;
}
case 268865:
{
returnValue = F("Rosenthalseifen");
break;
}
case 268866:
{
returnValue = F("Rosenthalstr.");
break;
}
case 268867:
{
returnValue = F("Rosenthalsweg");
break;
}
case 268868:
{
returnValue = F("Rosenthalweg");
break;
}
case 268869:
{
returnValue = F("Rosentitzer Str.");
break;
}
case 268870:
{
returnValue = F("Rosentor");
break;
}
case 268871:
{
returnValue = F("Rosentorstr.");
break;
}
case 268872:
{
returnValue = F("Rosentraße");
break;
}
case 268873:
{
returnValue = F("Rosentrittstr.");
break;
}
case 268874:
{
returnValue = F("Rosentwete");
break;
}
case 268875:
{
returnValue = F("Rosentwiete");
break;
}
case 268876:
{
returnValue = F("Rosenwaldstr.");
break;
}
case 268877:
{
returnValue = F("Rosenwall");
break;
}
case 268878:
{
returnValue = F("Rosenweg");
break;
}
case 268879:
{
returnValue = F("Rosenweide");
break;
}
case 268880:
{
returnValue = F("Rosenweiher");
break;
}
case 268881:
{
returnValue = F("Rosenweiherstr.");
break;
}
case 268882:
{
returnValue = F("Rosenweiherweg");
break;
}
case 268883:
{
returnValue = F("Rosenwiese");
break;
}
case 268884:
{
returnValue = F("Rosenwiesen");
break;
}
case 268885:
{
returnValue = F("Rosenwiesenweg");
break;
}
case 268886:
{
returnValue = F("Rosenwinkel");
break;
}
case 268887:
{
returnValue = F("Rosenwinkler Dorfstr.");
break;
}
case 268888:
{
returnValue = F("Rosenwinkler Str.");
break;
}
case 268889:
{
returnValue = F("Rosenwirtgasse");
break;
}
case 268890:
{
returnValue = F("Rosenwirtsstichweg");
break;
}
case 268891:
{
returnValue = F("Rosenwirtstr.");
break;
}
case 268892:
{
returnValue = F("Rosenwäldchen");
break;
}
case 268893:
{
returnValue = F("Rosenzweigstr.");
break;
}
case 268894:
{
returnValue = F("Rosenäcker");
break;
}
case 268895:
{
returnValue = F("Rosenäckerstr.");
break;
}
case 268896:
{
returnValue = F("Rosenäckerweg");
break;
}
case 268897:
{
returnValue = F("Roseplatz");
break;
}
case 268898:
{
returnValue = F("Rosestr.");
break;
}
case 268899:
{
returnValue = F("Rosetta-Vogt-Str.");
break;
}
case 268900:
{
returnValue = F("Rosettistr.");
break;
}
case 268901:
{
returnValue = F("Roseweg");
break;
}
case 268902:
{
returnValue = F("Rosgaard");
break;
}
case 268903:
{
returnValue = F("Rosgarten");
break;
}
case 268904:
{
returnValue = F("Rosheckweg");
break;
}
case 268905:
{
returnValue = F("Rosheimer Ring");
break;
}
case 268906:
{
returnValue = F("Rosheimer Str.");
break;
}
case 268907:
{
returnValue = F("Rosi-Obermüller-Str.");
break;
}
case 268908:
{
returnValue = F("Rosianer Weg");
break;
}
case 268909:
{
returnValue = F("Rosina-Schnorr-Weg");
break;
}
case 268910:
{
returnValue = F("Rosina-Spitzlin-Str.");
break;
}
case 268911:
{
returnValue = F("Rosina-Tafelmaier-Str.");
break;
}
case 268912:
{
returnValue = F("Rosine-Starz-Str.");
break;
}
case 268913:
{
returnValue = F("Rosinenberg");
break;
}
case 268914:
{
returnValue = F("Rosinengrund");
break;
}
case 268915:
{
returnValue = F("Rosinenweg");
break;
}
case 268916:
{
returnValue = F("Rosiner Str.");
break;
}
case 268917:
{
returnValue = F("Rosinger Str.");
break;
}
case 268918:
{
returnValue = F("Rosingkamp");
break;
}
case 268919:
{
returnValue = F("Rosinstr.");
break;
}
case 268920:
{
returnValue = F("Rosinthal");
break;
}
case 268921:
{
returnValue = F("Rosinusweg");
break;
}
case 268922:
{
returnValue = F("Rositzer Str.");
break;
}
case 268923:
{
returnValue = F("Roskaul");
break;
}
case 268924:
{
returnValue = F("Roskerbachtal");
break;
}
case 268925:
{
returnValue = F("Roskerbrücke");
break;
}
case 268926:
{
returnValue = F("Rosl-Brandmayer-Weg");
break;
}
case 268927:
{
returnValue = F("Roslaes Höhe");
break;
}
case 268928:
{
returnValue = F("Rosmannstr.");
break;
}
case 268929:
{
returnValue = F("Rosmarienbergstr.");
break;
}
case 268930:
{
returnValue = F("Rosmariengasse");
break;
}
case 268931:
{
returnValue = F("Rosmarienstr.");
break;
}
case 268932:
{
returnValue = F("Rosmarienweg");
break;
}
case 268933:
{
returnValue = F("Rosmaringasse");
break;
}
case 268934:
{
returnValue = F("Rosmaringäßchen");
break;
}
case 268935:
{
returnValue = F("Rosmarinheide");
break;
}
case 268936:
{
returnValue = F("Rosmarinheideweg");
break;
}
case 268937:
{
returnValue = F("Rosmarinplatz");
break;
}
case 268938:
{
returnValue = F("Rosmarinring");
break;
}
case 268939:
{
returnValue = F("Rosmarinstiege");
break;
}
case 268940:
{
returnValue = F("Rosmarinstr.");
break;
}
case 268941:
{
returnValue = F("Rosmarinweg");
break;
}
case 268942:
{
returnValue = F("Rosmarpark");
break;
}
case 268943:
{
returnValue = F("Rosmarstr.");
break;
}
case 268944:
{
returnValue = F("Rosmart");
break;
}
case 268945:
{
returnValue = F("Rosmarter Allee");
break;
}
case 268946:
{
returnValue = F("Rosmarweg");
break;
}
case 268947:
{
returnValue = F("Rosmerthastr.");
break;
}
case 268948:
{
returnValue = F("Rosnaer Str.");
break;
}
case 268949:
{
returnValue = F("Rosnaer Weg");
break;
}
case 268950:
{
returnValue = F("Rosneggerstr.");
break;
}
case 268951:
{
returnValue = F("Rosnestr.");
break;
}
case 268952:
{
returnValue = F("Rosower Weg");
break;
}
case 268953:
{
returnValue = F("Rospattstr.");
break;
}
case 268954:
{
returnValue = F("Rospestr.");
break;
}
case 268955:
{
returnValue = F("Rospetalstr.");
break;
}
case 268956:
{
returnValue = F("Ross-Str.");
break;
}
case 268957:
{
returnValue = F("Rossacher Str.");
break;
}
case 268958:
{
returnValue = F("Rossacher Weg");
break;
}
case 268959:
{
returnValue = F("Rossackerweg");
break;
}
case 268960:
{
returnValue = F("Rossahlredder");
break;
}
case 268961:
{
returnValue = F("Rossatzer Str.");
break;
}
case 268962:
{
returnValue = F("Rossauer Str.");
break;
}
case 268963:
{
returnValue = F("Rossbach");
break;
}
case 268964:
{
returnValue = F("Rossbacher Schneise");
break;
}
case 268965:
{
returnValue = F("Rossbachstr.");
break;
}
case 268966:
{
returnValue = F("Rossbachweg");
break;
}
case 268967:
{
returnValue = F("Rossberg");
break;
}
case 268968:
{
returnValue = F("Rossbergerstr.");
break;
}
case 268969:
{
returnValue = F("Rossbergstr.");
break;
}
case 268970:
{
returnValue = F("Rossbergweg");
break;
}
case 268971:
{
returnValue = F("Rossbierke");
break;
}
case 268972:
{
returnValue = F("Rossbollenweg");
break;
}
case 268973:
{
returnValue = F("Rossbrunnenweg");
break;
}
case 268974:
{
returnValue = F("Rossbrunnweg");
break;
}
case 268975:
{
returnValue = F("Rossbrünnle");
break;
}
case 268976:
{
returnValue = F("Rossbühlsweg");
break;
}
case 268977:
{
returnValue = F("Rossbühlweg");
break;
}
case 268978:
{
returnValue = F("Rossbürger Str.");
break;
}
case 268979:
{
returnValue = F("Rossdahl");
break;
}
case 268980:
{
returnValue = F("Rossdeller Str.");
break;
}
case 268981:
{
returnValue = F("Rossecklestr.");
break;
}
case 268982:
{
returnValue = F("Rossee");
break;
}
case 268983:
{
returnValue = F("Rosseer Weg");
break;
}
case 268984:
{
returnValue = F("Rosseeweg");
break;
}
case 268985:
{
returnValue = F("Rossegarden");
break;
}
case 268986:
{
returnValue = F("Rossel Schneise");
break;
}
case 268987:
{
returnValue = F("Rosselbach");
break;
}
case 268988:
{
returnValue = F("Rosselberg");
break;
}
case 268989:
{
returnValue = F("Rosselenweg");
break;
}
case 268990:
{
returnValue = F("Rosseler Str.");
break;
}
case 268991:
{
returnValue = F("Rosselstr.");
break;
}
case 268992:
{
returnValue = F("Rosselwanderweg");
break;
}
case 268993:
{
returnValue = F("Rosselweg");
break;
}
case 268994:
{
returnValue = F("Rossenbach");
break;
}
case 268995:
{
returnValue = F("Rossenbacher Str.");
break;
}
case 268996:
{
returnValue = F("Rossendorfer Weg");
break;
}
case 268997:
{
returnValue = F("Rossentalstr.");
break;
}
case 268998:
{
returnValue = F("Rossertblick");
break;
}
case 268999:
{
returnValue = F("Rossertebeneweg");
break;
}
case 269000:
{
returnValue = F("Rosserthangweg");
break;
}
case 269001:
{
returnValue = F("Rossertstr.");
break;
}
case 269002:
{
returnValue = F("Rossertweg");
break;
}
case 269003:
{
returnValue = F("Rossewitz");
break;
}
case 269004:
{
returnValue = F("Rossfeld Weg");
break;
}
case 269005:
{
returnValue = F("Rossgasse");
break;
}
case 269006:
{
returnValue = F("Rossgemarkweg");
break;
}
case 269007:
{
returnValue = F("Rossgraben");
break;
}
case 269008:
{
returnValue = F("Rossgrundweg");
break;
}
case 269009:
{
returnValue = F("Rosshaarstr.");
break;
}
case 269010:
{
returnValue = F("Rosshalde");
break;
}
case 269011:
{
returnValue = F("Rosshauweg");
break;
}
case 269012:
{
returnValue = F("Rosshecke");
break;
}
case 269013:
{
returnValue = F("Rosshimmelweg");
break;
}
case 269014:
{
returnValue = F("Rosshof");
break;
}
case 269015:
{
returnValue = F("Rosshämmesweg");
break;
}
case 269016:
{
returnValue = F("Rosshüttenweg");
break;
}
case 269017:
{
returnValue = F("Rossiner Weg");
break;
}
case 269018:
{
returnValue = F("Rossinistr.");
break;
}
case 269019:
{
returnValue = F("Rossiniweg");
break;
}
case 269020:
{
returnValue = F("Rossittener Str.");
break;
}
case 269021:
{
returnValue = F("Rossittener Weg");
break;
}
case 269022:
{
returnValue = F("Rossittenstr.");
break;
}
case 269023:
{
returnValue = F("Rossittenweg");
break;
}
case 269024:
{
returnValue = F("Rossiweg");
break;
}
case 269025:
{
returnValue = F("Rosskamp");
break;
}
case 269026:
{
returnValue = F("Rossklingenweg");
break;
}
case 269027:
{
returnValue = F("Rosskopfstr.");
break;
}
case 269028:
{
returnValue = F("Rosskopfweg");
break;
}
case 269029:
{
returnValue = F("Rossland");
break;
}
case 269030:
{
returnValue = F("Rosslandweg");
break;
}
case 269031:
{
returnValue = F("Rosslaubweg");
break;
}
case 269032:
{
returnValue = F("Rossmarkt");
break;
}
case 269033:
{
returnValue = F("Rossmättleweg");
break;
}
case 269034:
{
returnValue = F("Rossmühlen");
break;
}
case 269035:
{
returnValue = F("Rossmühlgasse");
break;
}
case 269036:
{
returnValue = F("Rossnagelstr.");
break;
}
case 269037:
{
returnValue = F("Rossower Dorfstr.");
break;
}
case 269038:
{
returnValue = F("Rossower Str.");
break;
}
case 269039:
{
returnValue = F("Rossower Weg");
break;
}
case 269040:
{
returnValue = F("Rossplatz");
break;
}
case 269041:
{
returnValue = F("Rossruckenweg");
break;
}
case 269042:
{
returnValue = F("Rossrücken");
break;
}
case 269043:
{
returnValue = F("Rossteichweg");
break;
}
case 269044:
{
returnValue = F("Rosswaldweg");
break;
}
case 269045:
{
returnValue = F("Rosswangweg");
break;
}
case 269046:
{
returnValue = F("Rosswasenweg");
break;
}
case 269047:
{
returnValue = F("Rossweg");
break;
}
case 269048:
{
returnValue = F("Rossweide");
break;
}
case 269049:
{
returnValue = F("Rossweidweg");
break;
}
case 269050:
{
returnValue = F("Rosswetteweg");
break;
}
case 269051:
{
returnValue = F("Rosswiesenstr.");
break;
}
case 269052:
{
returnValue = F("Rosswiesenweg");
break;
}
case 269053:
{
returnValue = F("Rossäckerstr.");
break;
}
case 269054:
{
returnValue = F("Rostall");
break;
}
case 269055:
{
returnValue = F("Rostelhof");
break;
}
case 269056:
{
returnValue = F("Rosterbenden");
break;
}
case 269057:
{
returnValue = F("Rosterge Mühle");
break;
}
case 269058:
{
returnValue = F("Rosterhaan");
break;
}
case 269059:
{
returnValue = F("Rosterstr.");
break;
}
case 269060:
{
returnValue = F("Rosterwiese");
break;
}
case 269061:
{
returnValue = F("Rostesiepen");
break;
}
case 269062:
{
returnValue = F("Rosthopweg");
break;
}
case 269063:
{
returnValue = F("Rostiger Weg");
break;
}
case 269064:
{
returnValue = F("Rostocker Chaussee");
break;
}
case 269065:
{
returnValue = F("Rostocker Heide");
break;
}
case 269066:
{
returnValue = F("Rostocker Landstr.");
break;
}
case 269067:
{
returnValue = F("Rostocker Landweg");
break;
}
case 269068:
{
returnValue = F("Rostocker Platz");
break;
}
case 269069:
{
returnValue = F("Rostocker Ring");
break;
}
case 269070:
{
returnValue = F("Rostocker Str.");
break;
}
case 269071:
{
returnValue = F("Rostocker Str. - Ausbau");
break;
}
case 269072:
{
returnValue = F("Rostocker Tor");
break;
}
case 269073:
{
returnValue = F("Rostocker Weg");
break;
}
case 269074:
{
returnValue = F("Rostockring");
break;
}
case 269075:
{
returnValue = F("Rostockweg");
break;
}
case 269076:
{
returnValue = F("Rostruper Str.");
break;
}
case 269077:
{
returnValue = F("Roststr.");
break;
}
case 269078:
{
returnValue = F("Rostwaldstr.");
break;
}
case 269079:
{
returnValue = F("Rostweg");
break;
}
case 269080:
{
returnValue = F("Rostädter Str.");
break;
}
case 269081:
{
returnValue = F("Rosweg");
break;
}
case 269082:
{
returnValue = F("Rosweidweg");
break;
}
case 269083:
{
returnValue = F("Roswindisstr.");
break;
}
case 269084:
{
returnValue = F("Roswitha-von-Gandersheim-Weg");
break;
}
case 269085:
{
returnValue = F("Roswithastr.");
break;
}
case 269086:
{
returnValue = F("Rosäckergasse");
break;
}
case 269087:
{
returnValue = F("Rosäckerstr.");
break;
}
case 269088:
{
returnValue = F("Rot");
break;
}
case 269089:
{
returnValue = F("Rot-Kreuz-Gasse");
break;
}
case 269090:
{
returnValue = F("Rot-Kreuz-Platz");
break;
}
case 269091:
{
returnValue = F("Rot-Kreuz-Str.");
break;
}
case 269092:
{
returnValue = F("Rot-Kreuz-Weg");
break;
}
case 269093:
{
returnValue = F("Rotachstr.");
break;
}
case 269094:
{
returnValue = F("Rotachweg");
break;
}
case 269095:
{
returnValue = F("Rotacker");
break;
}
case 269096:
{
returnValue = F("Rotackerhof");
break;
}
case 269097:
{
returnValue = F("Rotackerstr.");
break;
}
case 269098:
{
returnValue = F("Rotackerweg");
break;
}
case 269099:
{
returnValue = F("Rotahornallee");
break;
}
case 269100:
{
returnValue = F("Rotahornweg");
break;
}
case 269101:
{
returnValue = F("Rotall");
break;
}
case 269102:
{
returnValue = F("Rotanger");
break;
}
case 269103:
{
returnValue = F("Rotangerweg");
break;
}
case 269104:
{
returnValue = F("Rotarystr.");
break;
}
case 269105:
{
returnValue = F("Rotasch");
break;
}
case 269106:
{
returnValue = F("Rotasym-Kreisverkehr");
break;
}
case 269107:
{
returnValue = F("Rotaubrücke");
break;
}
case 269108:
{
returnValue = F("Rotaugenstr.");
break;
}
case 269109:
{
returnValue = F("Rotbach");
break;
}
case 269110:
{
returnValue = F("Rotbachau");
break;
}
case 269111:
{
returnValue = F("Rotbachstr.");
break;
}
case 269112:
{
returnValue = F("Rotbachsägmühle");
break;
}
case 269113:
{
returnValue = F("Rotbachtal");
break;
}
case 269114:
{
returnValue = F("Rotbachweg");
break;
}
case 269115:
{
returnValue = F("Rotbeerweg");
break;
}
case 269116:
{
returnValue = F("Rotberger Dorfstr.");
break;
}
case 269117:
{
returnValue = F("Rotberger Str.");
break;
}
case 269118:
{
returnValue = F("Rotbergerstr.");
break;
}
case 269119:
{
returnValue = F("Rotbergstr.");
break;
}
case 269120:
{
returnValue = F("Rotbergweg");
break;
}
case 269121:
{
returnValue = F("Rotbrunnenstr.");
break;
}
case 269122:
{
returnValue = F("Rotbrunnenweg");
break;
}
case 269123:
{
returnValue = F("Rotbrunnstr.");
break;
}
case 269124:
{
returnValue = F("Rotbrunnweg");
break;
}
case 269125:
{
returnValue = F("Rotbrücke");
break;
}
case 269126:
{
returnValue = F("Rotbuchenallee");
break;
}
case 269127:
{
returnValue = F("Rotbuchenkamp");
break;
}
case 269128:
{
returnValue = F("Rotbuchenring");
break;
}
case 269129:
{
returnValue = F("Rotbuchenstr.");
break;
}
case 269130:
{
returnValue = F("Rotbuchenweg");
break;
}
case 269131:
{
returnValue = F("Rotbusch");
break;
}
case 269132:
{
returnValue = F("Rotbuschstr.");
break;
}
case 269133:
{
returnValue = F("Rotbuschweg");
break;
}
case 269134:
{
returnValue = F("Rotbäkaue");
break;
}
case 269135:
{
returnValue = F("Rotbäumlestr.");
break;
}
case 269136:
{
returnValue = F("Rotbühlring");
break;
}
case 269137:
{
returnValue = F("Rotbühlstr.");
break;
}
case 269138:
{
returnValue = F("Rotbüschstr.");
break;
}
case 269139:
{
returnValue = F("Rotdorn");
break;
}
case 269140:
{
returnValue = F("Rotdornallee");
break;
}
case 269141:
{
returnValue = F("Rotdornbogen");
break;
}
case 269142:
{
returnValue = F("Rotdornbusch");
break;
}
case 269143:
{
returnValue = F("Rotdorngasse");
break;
}
case 269144:
{
returnValue = F("Rotdornhof");
break;
}
case 269145:
{
returnValue = F("Rotdornkamp");
break;
}
case 269146:
{
returnValue = F("Rotdornplatz");
break;
}
case 269147:
{
returnValue = F("Rotdornring");
break;
}
case 269148:
{
returnValue = F("Rotdornsteig");
break;
}
case 269149:
{
returnValue = F("Rotdornstieg");
break;
}
case 269150:
{
returnValue = F("Rotdornstr.");
break;
}
case 269151:
{
returnValue = F("Rotdorntwiete");
break;
}
case 269152:
{
returnValue = F("Rotdornweg");
break;
}
case 269153:
{
returnValue = F("Rote Au");
break;
}
case 269154:
{
returnValue = F("Rote Bergstr.");
break;
}
case 269155:
{
returnValue = F("Rote Bette");
break;
}
case 269156:
{
returnValue = F("Rote Bild Weg");
break;
}
case 269157:
{
returnValue = F("Rote Breite Str.");
break;
}
case 269158:
{
returnValue = F("Rote Brücke");
break;
}
case 269159:
{
returnValue = F("Rote Bünte");
break;
}
case 269160:
{
returnValue = F("Rote Chaussee");
break;
}
case 269161:
{
returnValue = F("Rote Ellern");
break;
}
case 269162:
{
returnValue = F("Rote Erde");
break;
}
case 269163:
{
returnValue = F("Rote Erde Weg");
break;
}
case 269164:
{
returnValue = F("Rote Feld");
break;
}
case 269165:
{
returnValue = F("Rote Flurstr.");
break;
}
case 269166:
{
returnValue = F("Rote Flöte");
break;
}
case 269167:
{
returnValue = F("Rote Föhr");
break;
}
case 269168:
{
returnValue = F("Rote Gasse");
break;
}
case 269169:
{
returnValue = F("Rote Halde");
break;
}
case 269170:
{
returnValue = F("Rote Haldeweg");
break;
}
case 269171:
{
returnValue = F("Rote Hohl");
break;
}
case 269172:
{
returnValue = F("Rote Hohle");
break;
}
case 269173:
{
returnValue = F("Rote Höhe");
break;
}
case 269174:
{
returnValue = F("Rote Jahne");
break;
}
case 269175:
{
returnValue = F("Rote Kate");
break;
}
case 269176:
{
returnValue = F("Rote Kaulen");
break;
}
case 269177:
{
returnValue = F("Rote Klippe");
break;
}
case 269178:
{
returnValue = F("Rote Kuhle");
break;
}
case 269179:
{
returnValue = F("Rote Lachenweg");
break;
}
case 269180:
{
returnValue = F("Rote Landstr.");
break;
}
case 269181:
{
returnValue = F("Rote Leite");
break;
}
case 269182:
{
returnValue = F("Rote Länder");
break;
}
case 269183:
{
returnValue = F("Rote Lücke");
break;
}
case 269184:
{
returnValue = F("Rote Marter");
break;
}
case 269185:
{
returnValue = F("Rote Moorstr.");
break;
}
case 269186:
{
returnValue = F("Rote Morgen");
break;
}
case 269187:
{
returnValue = F("Rote Mühle");
break;
}
case 269188:
{
returnValue = F("Rote Mühlenzwinger");
break;
}
case 269189:
{
returnValue = F("Rote Mütze");
break;
}
case 269190:
{
returnValue = F("Rote Pforte");
break;
}
case 269191:
{
returnValue = F("Rote Reihe");
break;
}
case 269192:
{
returnValue = F("Rote Schleuse");
break;
}
case 269193:
{
returnValue = F("Rote Schmiede");
break;
}
case 269194:
{
returnValue = F("Rote Schneise");
break;
}
case 269195:
{
returnValue = F("Rote Steige");
break;
}
case 269196:
{
returnValue = F("Rote Str.");
break;
}
case 269197:
{
returnValue = F("Rote Stricke");
break;
}
case 269198:
{
returnValue = F("Rote Turmstr.");
break;
}
case 269199:
{
returnValue = F("Rote Ufer");
break;
}
case 269200:
{
returnValue = F("Rote Wand");
break;
}
case 269201:
{
returnValue = F("Rote Wasser Weg");
break;
}
case 269202:
{
returnValue = F("Rote Weg");
break;
}
case 269203:
{
returnValue = F("Rote Werst");
break;
}
case 269204:
{
returnValue = F("Rote Ziegelei");
break;
}
case 269205:
{
returnValue = F("Rote Äcker");
break;
}
case 269206:
{
returnValue = F("Rote-Berg-Str.");
break;
}
case 269207:
{
returnValue = F("Rote-Brunnen-Weg");
break;
}
case 269208:
{
returnValue = F("Rote-Burg-Graben");
break;
}
case 269209:
{
returnValue = F("Rote-Erde-Weg");
break;
}
case 269210:
{
returnValue = F("Rote-Funken-Platz");
break;
}
case 269211:
{
returnValue = F("Rote-Hahnen-Gasse");
break;
}
case 269212:
{
returnValue = F("Rote-Haus-Str.");
break;
}
case 269213:
{
returnValue = F("Rote-Kauls-Weg");
break;
}
case 269214:
{
returnValue = F("Rote-Knie-Weg");
break;
}
case 269215:
{
returnValue = F("Rote-Kreuz-Str.");
break;
}
case 269216:
{
returnValue = F("Rote-Land-Str.");
break;
}
case 269217:
{
returnValue = F("Rote-Löwen-Str.");
break;
}
case 269218:
{
returnValue = F("Rote-Mühle-Weg");
break;
}
case 269219:
{
returnValue = F("Rote-Steige-Weg");
break;
}
case 269220:
{
returnValue = F("Rote-Stern-Gasse");
break;
}
case 269221:
{
returnValue = F("Rote-Suhl-Weg");
break;
}
case 269222:
{
returnValue = F("Rote-Tor-Str.");
break;
}
case 269223:
{
returnValue = F("Rote-Warte-Str.");
break;
}
case 269224:
{
returnValue = F("Rote-Weide-Weg");
break;
}
case 269225:
{
returnValue = F("Rote-Weiher-Str.");
break;
}
case 269226:
{
returnValue = F("Rote-Äcker-Weg");
break;
}
case 269227:
{
returnValue = F("Rotebachstr.");
break;
}
case 269228:
{
returnValue = F("Roteberg");
break;
}
case 269229:
{
returnValue = F("Rotebergstr.");
break;
}
case 269230:
{
returnValue = F("Rotebergsweg");
break;
}
case 269231:
{
returnValue = F("Rotebergweg");
break;
}
case 269232:
{
returnValue = F("Rotebuckweg");
break;
}
case 269233:
{
returnValue = F("Rotebühlstr.");
break;
}
case 269234:
{
returnValue = F("Roteck");
break;
}
case 269235:
{
returnValue = F("Roteckerweg");
break;
}
case 269236:
{
returnValue = F("Roteckweg");
break;
}
case 269237:
{
returnValue = F("Rotefeldweg");
break;
}
case 269238:
{
returnValue = F("Rotefurtbrücke");
break;
}
case 269239:
{
returnValue = F("Rotegartenstr.");
break;
}
case 269240:
{
returnValue = F("Rotehahnstr.");
break;
}
case 269241:
{
returnValue = F("Rotehausstr.");
break;
}
case 269242:
{
returnValue = F("Rotehof");
break;
}
case 269243:
{
returnValue = F("Rotehüttenweg");
break;
}
case 269244:
{
returnValue = F("Roteichenallee");
break;
}
case 269245:
{
returnValue = F("Roteichenstr.");
break;
}
case 269246:
{
returnValue = F("Roteichenweg");
break;
}
case 269247:
{
returnValue = F("Roteiser Hof");
break;
}
case 269248:
{
returnValue = F("Roteland");
break;
}
case 269249:
{
returnValue = F("Rotelohstr.");
break;
}
case 269250:
{
returnValue = F("Rotelsberg");
break;
}
case 269251:
{
returnValue = F("Rotemühlenweg");
break;
}
case 269252:
{
returnValue = F("Roten Rain");
break;
}
case 269253:
{
returnValue = F("Rotenackerstr.");
break;
}
case 269254:
{
returnValue = F("Rotenackerweg");
break;
}
case 269255:
{
returnValue = F("Rotenbach");
break;
}
case 269256:
{
returnValue = F("Rotenbacher Weg");
break;
}
case 269257:
{
returnValue = F("Rotenbachstr.");
break;
}
case 269258:
{
returnValue = F("Rotenbachtalstr.");
break;
}
case 269259:
{
returnValue = F("Rotenbachweg");
break;
}
case 269260:
{
returnValue = F("Rotenbeek");
break;
}
case 269261:
{
returnValue = F("Rotenbekredder");
break;
}
case 269262:
{
returnValue = F("Rotenberg");
break;
}
case 269263:
{
returnValue = F("Rotenberger Str.");
break;
}
case 269264:
{
returnValue = F("Rotenberger Weg");
break;
}
case 269265:
{
returnValue = F("Rotenbergerhof");
break;
}
case 269266:
{
returnValue = F("Rotenbergerstr.");
break;
}
case 269267:
{
returnValue = F("Rotenberghangweg");
break;
}
case 269268:
{
returnValue = F("Rotenbergplatz");
break;
}
case 269269:
{
returnValue = F("Rotenbergring");
break;
}
case 269270:
{
returnValue = F("Rotenbergstr.");
break;
}
case 269271:
{
returnValue = F("Rotenbergsweg");
break;
}
case 269272:
{
returnValue = F("Rotenbergweg");
break;
}
case 269273:
{
returnValue = F("Rotenbleicher Weg");
break;
}
case 269274:
{
returnValue = F("Rotenbrücke");
break;
}
case 269275:
{
returnValue = F("Rotenbuckweg");
break;
}
case 269276:
{
returnValue = F("Rotenburg");
break;
}
case 269277:
{
returnValue = F("Rotenburger Str.");
break;
}
case 269278:
{
returnValue = F("Rotenburger Weg");
break;
}
case 269279:
{
returnValue = F("Rotenbühl");
break;
}
case 269280:
{
returnValue = F("Rotenbühlstr.");
break;
}
case 269281:
{
returnValue = F("Rotenbühlweg");
break;
}
case 269282:
{
returnValue = F("Rotenbüschstr.");
break;
}
case 269283:
{
returnValue = F("Rotenfelsblick");
break;
}
case 269284:
{
returnValue = F("Rotenfelser Str.");
break;
}
case 269285:
{
returnValue = F("Rotenfelser Weg");
break;
}
case 269286:
{
returnValue = F("Rotengarten");
break;
}
case 269287:
{
returnValue = F("Rotengasse");
break;
}
case 269288:
{
returnValue = F("Rotenhagener Str.");
break;
}
case 269289:
{
returnValue = F("Rotenhahn");
break;
}
case 269290:
{
returnValue = F("Rotenhahner Str.");
break;
}
case 269291:
{
returnValue = F("Rotenhahner Weg");
break;
}
case 269292:
{
returnValue = F("Rotenhahnstr.");
break;
}
case 269293:
{
returnValue = F("Rotenhain");
break;
}
case 269294:
{
returnValue = F("Rotenhainer Str.");
break;
}
case 269295:
{
returnValue = F("Rotenhanstr.");
break;
}
case 269296:
{
returnValue = F("Rotenhanweg");
break;
}
case 269297:
{
returnValue = F("Rotenhausweg");
break;
}
case 269298:
{
returnValue = F("Rotenhof");
break;
}
case 269299:
{
returnValue = F("Rotenhofer Weg");
break;
}
case 269300:
{
returnValue = F("Rotenhofstr.");
break;
}
case 269301:
{
returnValue = F("Rotenhofweg");
break;
}
case 269302:
{
returnValue = F("Rotenhohl");
break;
}
case 269303:
{
returnValue = F("Rotenhäuser Weg");
break;
}
case 269304:
{
returnValue = F("Rotenhöfer Weg");
break;
}
case 269305:
{
returnValue = F("Rotenkamper Weg");
break;
}
case 269306:
{
returnValue = F("Rotenkircher Str.");
break;
}
case 269307:
{
returnValue = F("Rotenmad");
break;
}
case 269308:
{
returnValue = F("Rotenmeer");
break;
}
case 269309:
{
returnValue = F("Rotenmoos");
break;
}
case 269310:
{
returnValue = F("Rotenmorgenstr.");
break;
}
case 269311:
{
returnValue = F("Rotenmühleweg");
break;
}
case 269312:
{
returnValue = F("Rotenschlade");
break;
}
case 269313:
{
returnValue = F("Rotenseer Weg");
break;
}
case 269314:
{
returnValue = F("Rotenseestr.");
break;
}
case 269315:
{
returnValue = F("Rotensohler Weg");
break;
}
case 269316:
{
returnValue = F("Rotensohlweg");
break;
}
case 269317:
{
returnValue = F("Rotensoler Kirchenweg");
break;
}
case 269318:
{
returnValue = F("Rotensoler Kirchweg");
break;
}
case 269319:
{
returnValue = F("Rotensoler Str.");
break;
}
case 269320:
{
returnValue = F("Rotensteinbruch");
break;
}
case 269321:
{
returnValue = F("Rotensteiner Str.");
break;
}
case 269322:
{
returnValue = F("Rotensteiner Weg");
break;
}
case 269323:
{
returnValue = F("Rotensteinerwaldweg");
break;
}
case 269324:
{
returnValue = F("Rotensteinerweg");
break;
}
case 269325:
{
returnValue = F("Rotensteinstr.");
break;
}
case 269326:
{
returnValue = F("Rotenstr.");
break;
}
case 269327:
{
returnValue = F("Rotental");
break;
}
case 269328:
{
returnValue = F("Rotentaler Str.");
break;
}
case 269329:
{
returnValue = F("Rotentalstr.");
break;
}
case 269330:
{
returnValue = F("Rotenturmweg");
break;
}
case 269331:
{
returnValue = F("Rotenweg");
break;
}
case 269332:
{
returnValue = F("Rotenwiesenweg");
break;
}
case 269333:
{
returnValue = F("Rotenzimmerner Str.");
break;
}
case 269334:
{
returnValue = F("Rotenäckerstr.");
break;
}
case 269335:
{
returnValue = F("Rotenäckerweg");
break;
}
case 269336:
{
returnValue = F("Rotenörtenschneise");
break;
}
case 269337:
{
returnValue = F("Roter Acker");
break;
}
case 269338:
{
returnValue = F("Roter Balken");
break;
}
case 269339:
{
returnValue = F("Roter Baumweg");
break;
}
case 269340:
{
returnValue = F("Roter Berg");
break;
}
case 269341:
{
returnValue = F("Roter Berg Weg");
break;
}
case 269342:
{
returnValue = F("Roter Bergweg");
break;
}
case 269343:
{
returnValue = F("Roter Born");
break;
}
case 269344:
{
returnValue = F("Roter Brunnen Weg");
break;
}
case 269345:
{
returnValue = F("Roter Brunnenweg");
break;
}
case 269346:
{
returnValue = F("Roter Buck");
break;
}
case 269347:
{
returnValue = F("Roter Buckel");
break;
}
case 269348:
{
returnValue = F("Roter Busch");
break;
}
case 269349:
{
returnValue = F("Roter Bußweg");
break;
}
case 269350:
{
returnValue = F("Roter Bär");
break;
}
case 269351:
{
returnValue = F("Roter Bügel");
break;
}
case 269352:
{
returnValue = F("Roter Bühl");
break;
}
case 269353:
{
returnValue = F("Roter Crux");
break;
}
case 269354:
{
returnValue = F("Roter Dill");
break;
}
case 269355:
{
returnValue = F("Roter Feldweg");
break;
}
case 269356:
{
returnValue = F("Roter Fels");
break;
}
case 269357:
{
returnValue = F("Roter Flügel");
break;
}
case 269358:
{
returnValue = F("Roter Gang");
break;
}
case 269359:
{
returnValue = F("Roter Graben");
break;
}
case 269360:
{
returnValue = F("Roter Graben-Wanderweg");
break;
}
case 269361:
{
returnValue = F("Roter Grabenweg");
break;
}
case 269362:
{
returnValue = F("Roter Grubenweg");
break;
}
case 269363:
{
returnValue = F("Roter Grund");
break;
}
case 269364:
{
returnValue = F("Roter Hahn");
break;
}
case 269365:
{
returnValue = F("Roter Hahnweg");
break;
}
case 269366:
{
returnValue = F("Roter Handschuh");
break;
}
case 269367:
{
returnValue = F("Roter Hausbusch");
break;
}
case 269368:
{
returnValue = F("Roter Hirschweg");
break;
}
case 269369:
{
returnValue = F("Roter Hof");
break;
}
case 269370:
{
returnValue = F("Roter Hohleweg");
break;
}
case 269371:
{
returnValue = F("Roter Hügel");
break;
}
case 269372:
{
returnValue = F("Roter Kamp");
break;
}
case 269373:
{
returnValue = F("Roter Karr Weg");
break;
}
case 269374:
{
returnValue = F("Roter Kiesweg");
break;
}
case 269375:
{
returnValue = F("Roter Krug");
break;
}
case 269376:
{
returnValue = F("Roter Landweg");
break;
}
case 269377:
{
returnValue = F("Roter Lohweg");
break;
}
case 269378:
{
returnValue = F("Roter Löwe");
break;
}
case 269379:
{
returnValue = F("Roter Markt");
break;
}
case 269380:
{
returnValue = F("Roter Muldenweg");
break;
}
case 269381:
{
returnValue = F("Roter Mühlenweg");
break;
}
case 269382:
{
returnValue = F("Roter Ort");
break;
}
case 269383:
{
returnValue = F("Roter Pfad");
break;
}
case 269384:
{
returnValue = F("Roter Pfützenweg");
break;
}
case 269385:
{
returnValue = F("Roter Platz");
break;
}
case 269386:
{
returnValue = F("Roter Rain");
break;
}
case 269387:
{
returnValue = F("Roter Rainweg");
break;
}
case 269388:
{
returnValue = F("Roter Sand");
break;
}
case 269389:
{
returnValue = F("Roter Sandberg");
break;
}
case 269390:
{
returnValue = F("Roter Sandweg");
break;
}
case 269391:
{
returnValue = F("Roter Schneider");
break;
}
case 269392:
{
returnValue = F("Roter Schneiderweg");
break;
}
case 269393:
{
returnValue = F("Roter Siefenweg");
break;
}
case 269394:
{
returnValue = F("Roter Steg");
break;
}
case 269395:
{
returnValue = F("Roter Steiger");
break;
}
case 269396:
{
returnValue = F("Roter Stein");
break;
}
case 269397:
{
returnValue = F("Roter Stein Weg");
break;
}
case 269398:
{
returnValue = F("Roter Steinweg");
break;
}
case 269399:
{
returnValue = F("Roter Stich");
break;
}
case 269400:
{
returnValue = F("Roter Stock");
break;
}
case 269401:
{
returnValue = F("Roter Str.");
break;
}
case 269402:
{
returnValue = F("Roter Strumpf");
break;
}
case 269403:
{
returnValue = F("Roter Torweg");
break;
}
case 269404:
{
returnValue = F("Roter Tunnel");
break;
}
case 269405:
{
returnValue = F("Roter Weg");
break;
}
case 269406:
{
returnValue = F("Roter Weideweg");
break;
}
case 269407:
{
returnValue = F("Roter Weiher");
break;
}
case 269408:
{
returnValue = F("Roter Weißeritzweg");
break;
}
case 269409:
{
returnValue = F("Roter Wiesen");
break;
}
case 269410:
{
returnValue = F("Roter Winkel");
break;
}
case 269411:
{
returnValue = F("Roter-Berg-Höhenweg");
break;
}
case 269412:
{
returnValue = F("Roter-Berg-Ring");
break;
}
case 269413:
{
returnValue = F("Roter-Berg-Weg");
break;
}
case 269414:
{
returnValue = F("Roter-Bildweg");
break;
}
case 269415:
{
returnValue = F("Roter-Brach-Weg");
break;
}
case 269416:
{
returnValue = F("Roter-Brunnen-Weg");
break;
}
case 269417:
{
returnValue = F("Roter-Buckel-Weg");
break;
}
case 269418:
{
returnValue = F("Roter-Graben-Weg");
break;
}
case 269419:
{
returnValue = F("Roter-Lilien-Winkel");
break;
}
case 269420:
{
returnValue = F("Roter-Morgen-Weg");
break;
}
case 269421:
{
returnValue = F("Roter-Punkt-Pfad");
break;
}
case 269422:
{
returnValue = F("Roter-Sand-Weg");
break;
}
case 269423:
{
returnValue = F("Roter-Stein-Weg");
break;
}
case 269424:
{
returnValue = F("Roter-Turm-Weg");
break;
}
case 269425:
{
returnValue = F("RoterBusch");
break;
}
case 269426:
{
returnValue = F("Roterainsmühle");
break;
}
case 269427:
{
returnValue = F("Roterbergweg");
break;
}
case 269428:
{
returnValue = F("Roterfelsenweg");
break;
}
case 269429:
{
returnValue = F("Rotergasse");
break;
}
case 269430:
{
returnValue = F("Rotergießensträßchen");
break;
}
case 269431:
{
returnValue = F("Roterlensträßchen");
break;
}
case 269432:
{
returnValue = F("Roterlenweg");
break;
}
case 269433:
{
returnValue = F("Roterloh");
break;
}
case 269434:
{
returnValue = F("Rotermannsweg");
break;
}
case 269435:
{
returnValue = F("Roterrainweg");
break;
}
case 269436:
{
returnValue = F("Roterrangweg");
break;
}
case 269437:
{
returnValue = F("Roterweg");
break;
}
case 269438:
{
returnValue = F("Rotes Bergele");
break;
}
case 269439:
{
returnValue = F("Rotes Bild");
break;
}
case 269440:
{
returnValue = F("Rotes Erdgewann");
break;
}
case 269441:
{
returnValue = F("Rotes Feld");
break;
}
case 269442:
{
returnValue = F("Rotes Gässle");
break;
}
case 269443:
{
returnValue = F("Rotes Haus");
break;
}
case 269444:
{
returnValue = F("Rotes Häuschen");
break;
}
case 269445:
{
returnValue = F("Rotes Knie");
break;
}
case 269446:
{
returnValue = F("Rotes Kreuz");
break;
}
case 269447:
{
returnValue = F("Rotes Land");
break;
}
case 269448:
{
returnValue = F("Rotes Meer");
break;
}
case 269449:
{
returnValue = F("Rotes Moor");
break;
}
case 269450:
{
returnValue = F("Rotes Tal");
break;
}
case 269451:
{
returnValue = F("Rotes Tor");
break;
}
case 269452:
{
returnValue = F("Rotes Venn");
break;
}
case 269453:
{
returnValue = F("Rotes Wasser");
break;
}
case 269454:
{
returnValue = F("Roteschstr.");
break;
}
case 269455:
{
returnValue = F("Rotesteinweg");
break;
}
case 269456:
{
returnValue = F("Rotestr.");
break;
}
case 269457:
{
returnValue = F("Rotewartestr.");
break;
}
case 269458:
{
returnValue = F("Roteweg");
break;
}
case 269459:
{
returnValue = F("Rotewieseweg");
break;
}
case 269460:
{
returnValue = F("Rotezäunstr.");
break;
}
case 269461:
{
returnValue = F("Rotfedernstieg");
break;
}
case 269462:
{
returnValue = F("Rotfedernweg");
break;
}
case 269463:
{
returnValue = F("Rotfederweg");
break;
}
case 269464:
{
returnValue = F("Rotfelder Str.");
break;
}
case 269465:
{
returnValue = F("Rotfelder Weg");
break;
}
case 269466:
{
returnValue = F("Rotfeldstr.");
break;
}
case 269467:
{
returnValue = F("Rotfeldweg");
break;
}
case 269468:
{
returnValue = F("Rotfelsengasse");
break;
}
case 269469:
{
returnValue = F("Rotfluhstr.");
break;
}
case 269470:
{
returnValue = F("Rotfußenweg");
break;
}
case 269471:
{
returnValue = F("Rotgartenstr.");
break;
}
case 269472:
{
returnValue = F("Rotgartenweg");
break;
}
case 269473:
{
returnValue = F("Rotgerberstr.");
break;
}
case 269474:
{
returnValue = F("Rotgerberweg");
break;
}
case 269475:
{
returnValue = F("Rotgrubener Str.");
break;
}
case 269476:
{
returnValue = F("Rotgrubenweg");
break;
}
case 269477:
{
returnValue = F("Rotgrübleweg");
break;
}
case 269478:
{
returnValue = F("Rotgärten");
break;
}
case 269479:
{
returnValue = F("Rotgässle");
break;
}
case 269480:
{
returnValue = F("Rotgäßle");
break;
}
case 269481:
{
returnValue = F("Roth");
break;
}
case 269482:
{
returnValue = F("Roth's Gasse");
break;
}
case 269483:
{
returnValue = F("Roth-Schneise");
break;
}
case 269484:
{
returnValue = F("Rothaar");
break;
}
case 269485:
{
returnValue = F("Rothaarsteig");
break;
}
case 269486:
{
returnValue = F("Rothaarsteigzuweg \"Hesselbach");
break;
}
case 269487:
{
returnValue = F("Rothaarstr.");
break;
}
case 269488:
{
returnValue = F("Rothaarweg");
break;
}
case 269489:
{
returnValue = F("Rothachstr.");
break;
}
case 269490:
{
returnValue = F("Rothacker");
break;
}
case 269491:
{
returnValue = F("Rothacker Weg");
break;
}
case 269492:
{
returnValue = F("Rothackerstr.");
break;
}
case 269493:
{
returnValue = F("Rothaer Bergstr.");
break;
}
case 269494:
{
returnValue = F("Rothaer Dorfstr.");
break;
}
case 269495:
{
returnValue = F("Rothaer Oberdorf");
break;
}
case 269496:
{
returnValue = F("Rothaer Unterdorf");
break;
}
case 269497:
{
returnValue = F("Rothaer Weg");
break;
}
case 269498:
{
returnValue = F("Rothalde");
break;
}
case 269499:
{
returnValue = F("Rothalden");
break;
}
case 269500:
{
returnValue = F("Rothaldenweg");
break;
}
case 269501:
{
returnValue = F("Rothaldestr.");
break;
}
case 269502:
{
returnValue = F("Rothaldeweg");
break;
}
case 269503:
{
returnValue = F("Rothamer Str.");
break;
}
case 269504:
{
returnValue = F("Rothammerstr.");
break;
}
case 269505:
{
returnValue = F("Rothanger");
break;
}
case 269506:
{
returnValue = F("Rothansenweg");
break;
}
case 269507:
{
returnValue = F("Rothaue Park");
break;
}
case 269508:
{
returnValue = F("Rothauer Str.");
break;
}
case 269509:
{
returnValue = F("Rothaus");
break;
}
case 269510:
{
returnValue = F("Rothauser Str.");
break;
}
case 269511:
{
returnValue = F("Rothauspark");
break;
}
case 269512:
{
returnValue = F("Rothausstr.");
break;
}
case 269513:
{
returnValue = F("Rothaustr.");
break;
}
case 269514:
{
returnValue = F("Rothausweg");
break;
}
case 269515:
{
returnValue = F("Rothauweg");
break;
}
case 269516:
{
returnValue = F("Rothbachstr.");
break;
}
case 269517:
{
returnValue = F("Rothbad");
break;
}
case 269518:
{
returnValue = F("Rothbeck");
break;
}
case 269519:
{
returnValue = F("Rothberg");
break;
}
case 269520:
{
returnValue = F("Rothbergstr.");
break;
}
case 269521:
{
returnValue = F("Rothbergweg");
break;
}
case 269522:
{
returnValue = F("Rothbornstr.");
break;
}
case 269523:
{
returnValue = F("Rothbroicher Str.");
break;
}
case 269524:
{
returnValue = F("Rothbruckholzweg");
break;
}
case 269525:
{
returnValue = F("Rothbruckweg");
break;
}
case 269526:
{
returnValue = F("Rothbucher Weg");
break;
}
case 269527:
{
returnValue = F("Rothe Brücke");
break;
}
case 269528:
{
returnValue = F("Rothe Hustert");
break;
}
case 269529:
{
returnValue = F("Rothe Kreuz");
break;
}
case 269530:
{
returnValue = F("Rothe Lache");
break;
}
case 269531:
{
returnValue = F("Rothe Lohe");
break;
}
case 269532:
{
returnValue = F("Rothe Marter");
break;
}
case 269533:
{
returnValue = F("Rothe Meer");
break;
}
case 269534:
{
returnValue = F("Rothe Str.");
break;
}
case 269535:
{
returnValue = F("Rothe-Kreuz");
break;
}
case 269536:
{
returnValue = F("Rothebacher Weg");
break;
}
case 269537:
{
returnValue = F("Rothebaumstr.");
break;
}
case 269538:
{
returnValue = F("Rotheberg");
break;
}
case 269539:
{
returnValue = F("Rothebergstr.");
break;
}
case 269540:
{
returnValue = F("Rothebreite");
break;
}
case 269541:
{
returnValue = F("Rothebusch");
break;
}
case 269542:
{
returnValue = F("Rotheck");
break;
}
case 269543:
{
returnValue = F("Rothecke");
break;
}
case 269544:
{
returnValue = F("Rothecker Str.");
break;
}
case 269545:
{
returnValue = F("Rotheckstr.");
break;
}
case 269546:
{
returnValue = F("Rothefeldstr.");
break;
}
case 269547:
{
returnValue = F("Rothegartenstr.");
break;
}
case 269548:
{
returnValue = F("Rothehaus");
break;
}
case 269549:
{
returnValue = F("Rothehausweg");
break;
}
case 269550:
{
returnValue = F("Rothehof");
break;
}
case 269551:
{
returnValue = F("Rothehofstal");
break;
}
case 269552:
{
returnValue = F("Rothehofweg");
break;
}
case 269553:
{
returnValue = F("Rothehäuser Weg");
break;
}
case 269554:
{
returnValue = F("Rothehöhe");
break;
}
case 269555:
{
returnValue = F("Rotheidlen");
break;
}
case 269556:
{
returnValue = F("Rothelebuch");
break;
}
case 269557:
{
returnValue = F("Rothemanner Str.");
break;
}
case 269558:
{
returnValue = F("Rothemannstr.");
break;
}
case 269559:
{
returnValue = F("Rothemark");
break;
}
case 269560:
{
returnValue = F("Rothemarkstr.");
break;
}
case 269561:
{
returnValue = F("Rothemaßen");
break;
}
case 269562:
{
returnValue = F("Rothemühler Chaussee");
break;
}
case 269563:
{
returnValue = F("Rothemühler Landstr.");
break;
}
case 269564:
{
returnValue = F("Rothemühler Str.");
break;
}
case 269565:
{
returnValue = F("Rothen");
break;
}
case 269566:
{
returnValue = F("Rothen-Adler-Str.");
break;
}
case 269567:
{
returnValue = F("Rothenackerweg");
break;
}
case 269568:
{
returnValue = F("Rothenaicherstr.");
break;
}
case 269569:
{
returnValue = F("Rothenbach");
break;
}
case 269570:
{
returnValue = F("Rothenbacher Kirchsteig");
break;
}
case 269571:
{
returnValue = F("Rothenbacher Marktsteig");
break;
}
case 269572:
{
returnValue = F("Rothenbacher Str.");
break;
}
case 269573:
{
returnValue = F("Rothenbacher Weg");
break;
}
case 269574:
{
returnValue = F("Rothenbachstr.");
break;
}
case 269575:
{
returnValue = F("Rothenbachweg");
break;
}
case 269576:
{
returnValue = F("Rothenbeker Weg");
break;
}
case 269577:
{
returnValue = F("Rothenberg");
break;
}
case 269578:
{
returnValue = F("Rothenberge");
break;
}
case 269579:
{
returnValue = F("Rothenberger Gärten");
break;
}
case 269580:
{
returnValue = F("Rothenberger Hof");
break;
}
case 269581:
{
returnValue = F("Rothenberger Str.");
break;
}
case 269582:
{
returnValue = F("Rothenberger Weg");
break;
}
case 269583:
{
returnValue = F("Rothenbergerstr.");
break;
}
case 269584:
{
returnValue = F("Rothenbergfeld");
break;
}
case 269585:
{
returnValue = F("Rothenbergpark");
break;
}
case 269586:
{
returnValue = F("Rothenbergsfeld");
break;
}
case 269587:
{
returnValue = F("Rothenbergstr.");
break;
}
case 269588:
{
returnValue = F("Rothenbergweg");
break;
}
case 269589:
{
returnValue = F("Rothenbruch");
break;
}
case 269590:
{
returnValue = F("Rothenbruck");
break;
}
case 269591:
{
returnValue = F("Rothenbrunn");
break;
}
case 269592:
{
returnValue = F("Rothenbrunnenweg");
break;
}
case 269593:
{
returnValue = F("Rothenbucher Weg");
break;
}
case 269594:
{
returnValue = F("Rothenburg");
break;
}
case 269595:
{
returnValue = F("Rothenburger Landhege");
break;
}
case 269596:
{
returnValue = F("Rothenburger Landstr.");
break;
}
case 269597:
{
returnValue = F("Rothenburger Steige");
break;
}
case 269598:
{
returnValue = F("Rothenburger Str.");
break;
}
case 269599:
{
returnValue = F("Rothenburger Weg");
break;
}
case 269600:
{
returnValue = F("Rothenburgsgrund");
break;
}
case 269601:
{
returnValue = F("Rothenburgsorter Weg");
break;
}
case 269602:
{
returnValue = F("Rothenburgstr.");
break;
}
case 269603:
{
returnValue = F("Rothenbücher Weg");
break;
}
case 269604:
{
returnValue = F("Rothenbühl");
break;
}
case 269605:
{
returnValue = F("Rothenbühler Str.");
break;
}
case 269606:
{
returnValue = F("Rothenbühlstr.");
break;
}
case 269607:
{
returnValue = F("Rothenbühlweg");
break;
}
case 269608:
{
returnValue = F("Rothenbürger Weg");
break;
}
case 269609:
{
returnValue = F("Rothenbüsch");
break;
}
case 269610:
{
returnValue = F("Rothendasch");
break;
}
case 269611:
{
returnValue = F("Rothenditmolder Str.");
break;
}
case 269612:
{
returnValue = F("Rothener Str.");
break;
}
case 269613:
{
returnValue = F("Rothenfeld");
break;
}
case 269614:
{
returnValue = F("Rothenfelder Str.");
break;
}
case 269615:
{
returnValue = F("Rothenfelser Str.");
break;
}
case 269616:
{
returnValue = F("Rothenfelserstr.");
break;
}
case 269617:
{
returnValue = F("Rothenfelsstr.");
break;
}
case 269618:
{
returnValue = F("Rothenfelsweg");
break;
}
case 269619:
{
returnValue = F("Rothenfurter Str.");
break;
}
case 269620:
{
returnValue = F("Rothenfurter Wand");
break;
}
case 269621:
{
returnValue = F("Rothenfurth");
break;
}
case 269622:
{
returnValue = F("Rothenförde");
break;
}
case 269623:
{
returnValue = F("Rothenförder Str.");
break;
}
case 269624:
{
returnValue = F("Rothengasse");
break;
}
case 269625:
{
returnValue = F("Rothengrund");
break;
}
case 269626:
{
returnValue = F("Rothenhammerweg");
break;
}
case 269627:
{
returnValue = F("Rothenharter Geräumt");
break;
}
case 269628:
{
returnValue = F("Rothenhaus");
break;
}
case 269629:
{
returnValue = F("Rothenhof");
break;
}
case 269630:
{
returnValue = F("Rothenhofer Str.");
break;
}
case 269631:
{
returnValue = F("Rothenhofer Weg");
break;
}
case 269632:
{
returnValue = F("Rothenhofstr.");
break;
}
case 269633:
{
returnValue = F("Rothenhuse");
break;
}
case 269634:
{
returnValue = F("Rothenhusen");
break;
}
case 269635:
{
returnValue = F("Rothenhusener Weg");
break;
}
case 269636:
{
returnValue = F("Rothenhörn");
break;
}
case 269637:
{
returnValue = F("Rothenkamp");
break;
}
case 269638:
{
returnValue = F("Rothenkampweg");
break;
}
case 269639:
{
returnValue = F("Rothenkirchen");
break;
}
case 269640:
{
returnValue = F("Rothenkirchener Str.");
break;
}
case 269641:
{
returnValue = F("Rothenkircher Weg");
break;
}
case 269642:
{
returnValue = F("Rothenklempenower Str.");
break;
}
case 269643:
{
returnValue = F("Rothenklempenower Weg");
break;
}
case 269644:
{
returnValue = F("Rothenklingenweg");
break;
}
case 269645:
{
returnValue = F("Rothenkreuz");
break;
}
case 269646:
{
returnValue = F("Rothenmethen");
break;
}
case 269647:
{
returnValue = F("Rothenmoor");
break;
}
case 269648:
{
returnValue = F("Rothenmühlen");
break;
}
case 269649:
{
returnValue = F("Rothenmühlweg");
break;
}
case 269650:
{
returnValue = F("Rothennahrung");
break;
}
case 269651:
{
returnValue = F("Rothenpfuhlstr.");
break;
}
case 269652:
{
returnValue = F("Rothenpointstr.");
break;
}
case 269653:
{
returnValue = F("Rothenrainer Str.");
break;
}
case 269654:
{
returnValue = F("Rothensander Hauptstr.");
break;
}
case 269655:
{
returnValue = F("Rothensander Weg");
break;
}
case 269656:
{
returnValue = F("Rothensanderweg");
break;
}
case 269657:
{
returnValue = F("Rothenschirmbacher Str.");
break;
}
case 269658:
{
returnValue = F("Rothenschlatt");
break;
}
case 269659:
{
returnValue = F("Rothensee");
break;
}
case 269660:
{
returnValue = F("Rothenseer Str.");
break;
}
case 269661:
{
returnValue = F("Rothensieker Weg");
break;
}
case 269662:
{
returnValue = F("Rothenstein");
break;
}
case 269663:
{
returnValue = F("Rothensteiner Str.");
break;
}
case 269664:
{
returnValue = F("Rothensteinstr.");
break;
}
case 269665:
{
returnValue = F("Rothensteinweg");
break;
}
case 269666:
{
returnValue = F("Rothenstr.");
break;
}
case 269667:
{
returnValue = F("Rothenstädter Str.");
break;
}
case 269668:
{
returnValue = F("Rothentaler Weg");
break;
}
case 269669:
{
returnValue = F("Rothenthaler Berggasse");
break;
}
case 269670:
{
returnValue = F("Rothenthaler Str.");
break;
}
case 269671:
{
returnValue = F("Rothentor");
break;
}
case 269672:
{
returnValue = F("Rothenturmer Str.");
break;
}
case 269673:
{
returnValue = F("Rothenuffelner Str.");
break;
}
case 269674:
{
returnValue = F("Rothenweg");
break;
}
case 269675:
{
returnValue = F("Rothenäckerstr.");
break;
}
case 269676:
{
returnValue = F("Rotheplatz");
break;
}
case 269677:
{
returnValue = F("Rother Bach");
break;
}
case 269678:
{
returnValue = F("Rother Berg");
break;
}
case 269679:
{
returnValue = F("Rother Hügel");
break;
}
case 269680:
{
returnValue = F("Rother Pfad");
break;
}
case 269681:
{
returnValue = F("Rother Schill");
break;
}
case 269682:
{
returnValue = F("Rother Steig");
break;
}
case 269683:
{
returnValue = F("Rother Stein");
break;
}
case 269684:
{
returnValue = F("Rother Str.");
break;
}
case 269685:
{
returnValue = F("Rother Weg");
break;
}
case 269686:
{
returnValue = F("Rother Weingartenweg");
break;
}
case 269687:
{
returnValue = F("Rother Winkel");
break;
}
case 269688:
{
returnValue = F("Rother-Rain-Weg");
break;
}
case 269689:
{
returnValue = F("Rotherbachstr.");
break;
}
case 269690:
{
returnValue = F("Rotherd");
break;
}
case 269691:
{
returnValue = F("Rotherde");
break;
}
case 269692:
{
returnValue = F("Rotherdsteg");
break;
}
case 269693:
{
returnValue = F("Rotherdtellerweg");
break;
}
case 269694:
{
returnValue = F("Rotherfeld");
break;
}
case 269695:
{
returnValue = F("Rotherhofstr.");
break;
}
case 269696:
{
returnValue = F("Rotherma-Kreisel");
break;
}
case 269697:
{
returnValue = F("Rothermabrücke");
break;
}
case 269698:
{
returnValue = F("Rothermaquerspange");
break;
}
case 269699:
{
returnValue = F("Rothermelstr.");
break;
}
case 269700:
{
returnValue = F("Rotherrainweg");
break;
}
case 269701:
{
returnValue = F("Rotherstr.");
break;
}
case 269702:
{
returnValue = F("Rothertshausener Str.");
break;
}
case 269703:
{
returnValue = F("Rothertstr.");
break;
}
case 269704:
{
returnValue = F("Rothertweg");
break;
}
case 269705:
{
returnValue = F("Rothes Buschhaus");
break;
}
case 269706:
{
returnValue = F("Rothes Meer");
break;
}
case 269707:
{
returnValue = F("Rothesteinstr.");
break;
}
case 269708:
{
returnValue = F("Rothestr.");
break;
}
case 269709:
{
returnValue = F("Rothesütter Fußweg");
break;
}
case 269710:
{
returnValue = F("Rotheuler Str.");
break;
}
case 269711:
{
returnValue = F("Rotheweg");
break;
}
case 269712:
{
returnValue = F("Rotheäcker");
break;
}
case 269713:
{
returnValue = F("Rothfeld");
break;
}
case 269714:
{
returnValue = F("Rothfeldring");
break;
}
case 269715:
{
returnValue = F("Rothfeldstr.");
break;
}
case 269716:
{
returnValue = F("Rothfelskamp");
break;
}
case 269717:
{
returnValue = F("Rothgasse");
break;
}
case 269718:
{
returnValue = F("Rothgraben");
break;
}
case 269719:
{
returnValue = F("Rothgässchen");
break;
}
case 269720:
{
returnValue = F("Rothhelmshof");
break;
}
case 269721:
{
returnValue = F("Rothhildchenweg");
break;
}
case 269722:
{
returnValue = F("Rothhof");
break;
}
case 269723:
{
returnValue = F("Rothhäuser Str.");
break;
}
case 269724:
{
returnValue = F("Rothigweg");
break;
}
case 269725:
{
returnValue = F("Rothildisstr.");
break;
}
case 269726:
{
returnValue = F("Rothinestr.");
break;
}
case 269727:
{
returnValue = F("Rothirschweg");
break;
}
case 269728:
{
returnValue = F("Rothkamp");
break;
}
case 269729:
{
returnValue = F("Rothkreuz");
break;
}
case 269730:
{
returnValue = F("Rothkreuzplatz");
break;
}
case 269731:
{
returnValue = F("Rothlaker Str.");
break;
}
case 269732:
{
returnValue = F("Rothlindenstr.");
break;
}
case 269733:
{
returnValue = F("Rothländer Weg");
break;
}
case 269734:
{
returnValue = F("Rothmaar");
break;
}
case 269735:
{
returnValue = F("Rothmad");
break;
}
case 269736:
{
returnValue = F("Rothmahd");
break;
}
case 269737:
{
returnValue = F("Rothmaiseltal");
break;
}
case 269738:
{
returnValue = F("Rothmannmühlweg");
break;
}
case 269739:
{
returnValue = F("Rothmarstr.");
break;
}
case 269740:
{
returnValue = F("Rothmayrstr.");
break;
}
case 269741:
{
returnValue = F("Rothmühle");
break;
}
case 269742:
{
returnValue = F("Rothmühlenweg");
break;
}
case 269743:
{
returnValue = F("Rothmühler Weg");
break;
}
case 269744:
{
returnValue = F("Rothmühlstr.");
break;
}
case 269745:
{
returnValue = F("Rothmüllersberg");
break;
}
case 269746:
{
returnValue = F("Rothnaußlitzer Weg");
break;
}
case 269747:
{
returnValue = F("Rothneichnerstr.");
break;
}
case 269748:
{
returnValue = F("Rothof");
break;
}
case 269749:
{
returnValue = F("Rothofer Str.");
break;
}
case 269750:
{
returnValue = F("Rothofstr.");
break;
}
case 269751:
{
returnValue = F("Rothofweg");
break;
}
case 269752:
{
returnValue = F("Rotholzweg");
break;
}
case 269753:
{
returnValue = F("Rothrockstr.");
break;
}
case 269754:
{
returnValue = F("Rothsalstr.");
break;
}
case 269755:
{
returnValue = F("Rothsand");
break;
}
case 269756:
{
returnValue = F("Rothsberg");
break;
}
case 269757:
{
returnValue = F("Rothsberg Weg");
break;
}
case 269758:
{
returnValue = F("Rothschildpark");
break;
}
case 269759:
{
returnValue = F("Rothschildstr.");
break;
}
case 269760:
{
returnValue = F("Rothschlag");
break;
}
case 269761:
{
returnValue = F("Rothschneise");
break;
}
case 269762:
{
returnValue = F("Rothschwaig");
break;
}
case 269763:
{
returnValue = F("Rothschwaiger Feldweg");
break;
}
case 269764:
{
returnValue = F("Rothseeblick");
break;
}
case 269765:
{
returnValue = F("Rothseestr.");
break;
}
case 269766:
{
returnValue = F("Rothsgarten");
break;
}
case 269767:
{
returnValue = F("Rothsgasse");
break;
}
case 269768:
{
returnValue = F("Rothsnasenweg");
break;
}
case 269769:
{
returnValue = F("Rothspalk");
break;
}
case 269770:
{
returnValue = F("Rothsteinslache");
break;
}
case 269771:
{
returnValue = F("Rothstr.");
break;
}
case 269772:
{
returnValue = F("Rothstück");
break;
}
case 269773:
{
returnValue = F("Rothsweg");
break;
}
case 269774:
{
returnValue = F("Rothsäulerl-Geräumt");
break;
}
case 269775:
{
returnValue = F("Rothtalblick");
break;
}
case 269776:
{
returnValue = F("Rothtalring");
break;
}
case 269777:
{
returnValue = F("Rothtalstr.");
break;
}
case 269778:
{
returnValue = F("Rothusener Weg");
break;
}
case 269779:
{
returnValue = F("Rothvorwerk");
break;
}
case 269780:
{
returnValue = F("Rothwaldstr.");
break;
}
case 269781:
{
returnValue = F("Rothwaldweg");
break;
}
case 269782:
{
returnValue = F("Rothweg");
break;
}
case 269783:
{
returnValue = F("Rothweiler Str.");
break;
}
case 269784:
{
returnValue = F("Rothweilerin");
break;
}
case 269785:
{
returnValue = F("Rothweilstr.");
break;
}
case 269786:
{
returnValue = F("Rothwestener Str.");
break;
}
case 269787:
{
returnValue = F("Rothwester Str.");
break;
}
case 269788:
{
returnValue = F("Rothwiese");
break;
}
case 269789:
{
returnValue = F("Rothwiesenhof");
break;
}
case 269790:
{
returnValue = F("Rothwiesenring");
break;
}
case 269791:
{
returnValue = F("Rothwiesenschneise");
break;
}
case 269792:
{
returnValue = F("Rothwiesenweg");
break;
}
case 269793:
{
returnValue = F("Rothwiesstr.");
break;
}
case 269794:
{
returnValue = F("Rothäckern");
break;
}
case 269795:
{
returnValue = F("Rothäuleweg");
break;
}
case 269796:
{
returnValue = F("Rothäuser Str.");
break;
}
case 269797:
{
returnValue = F("Rothäuserbergweg");
break;
}
case 269798:
{
returnValue = F("Rothäusl");
break;
}
case 269799:
{
returnValue = F("Rothäuslesweg");
break;
}
case 269800:
{
returnValue = F("Rothöfe");
break;
}
case 269801:
{
returnValue = F("Rothöll");
break;
}
case 269802:
{
returnValue = F("Rothöllstr.");
break;
}
case 269803:
{
returnValue = F("Rothölzlesweg");
break;
}
case 269804:
{
returnValue = F("Rothüllweg");
break;
}
case 269805:
{
returnValue = F("Rotisweg");
break;
}
case 269806:
{
returnValue = F("Rotkamp");
break;
}
case 269807:
{
returnValue = F("Rotkampeln");
break;
}
case 269808:
{
returnValue = F("Rotkappenweg");
break;
}
case 269809:
{
returnValue = F("Rotkehlcheneck");
break;
}
case 269810:
{
returnValue = F("Rotkehlchenpfad");
break;
}
case 269811:
{
returnValue = F("Rotkehlchenschlucht");
break;
}
case 269812:
{
returnValue = F("Rotkehlchensteig");
break;
}
case 269813:
{
returnValue = F("Rotkehlchenstr.");
break;
}
case 269814:
{
returnValue = F("Rotkehlchenweg");
break;
}
case 269815:
{
returnValue = F("Rotkleedamm");
break;
}
case 269816:
{
returnValue = F("Rotkleeweg");
break;
}
case 269817:
{
returnValue = F("Rotkopf-Görg-Str.");
break;
}
case 269818:
{
returnValue = F("Rotkotstr.");
break;
}
case 269819:
{
returnValue = F("Rotkreuzgasse");
break;
}
case 269820:
{
returnValue = F("Rotkreuzplatz");
break;
}
case 269821:
{
returnValue = F("Rotkreuzstr.");
break;
}
case 269822:
{
returnValue = F("Rotkreuzweg");
break;
}
case 269823:
{
returnValue = F("Rotkuhlring");
break;
}
case 269824:
{
returnValue = F("Rotkuhlweg");
break;
}
case 269825:
{
returnValue = F("Rotkäppchen Weg");
break;
}
case 269826:
{
returnValue = F("Rotkäppchenplatz");
break;
}
case 269827:
{
returnValue = F("Rotkäppchenstr.");
break;
}
case 269828:
{
returnValue = F("Rotkäppchenweg");
break;
}
case 269829:
{
returnValue = F("Rotlach");
break;
}
case 269830:
{
returnValue = F("Rotlachenweg");
break;
}
case 269831:
{
returnValue = F("Rotlandstr.");
break;
}
case 269832:
{
returnValue = F("Rotlaubstr.");
break;
}
case 269833:
{
returnValue = F("Rotlaubweg");
break;
}
case 269834:
{
returnValue = F("Rotlaufstr.");
break;
}
case 269835:
{
returnValue = F("Rotlaufweg");
break;
}
case 269836:
{
returnValue = F("Rotlay-Mühle");
break;
}
case 269837:
{
returnValue = F("Rotlaystr.");
break;
}
case 269838:
{
returnValue = F("Rotlehenweg");
break;
}
case 269839:
{
returnValue = F("Rotlehm");
break;
}
case 269840:
{
returnValue = F("Rotleite");
break;
}
case 269841:
{
returnValue = F("Rotleitenstr.");
break;
}
case 269842:
{
returnValue = F("Rotleitenweg");
break;
}
case 269843:
{
returnValue = F("Rotlensgasse");
break;
}
case 269844:
{
returnValue = F("Rotlinggasse");
break;
}
case 269845:
{
returnValue = F("Rotlippstr.");
break;
}
case 269846:
{
returnValue = F("Rotloch-Planie");
break;
}
case 269847:
{
returnValue = F("Rotlochweg");
break;
}
case 269848:
{
returnValue = F("Rotländer");
break;
}
case 269849:
{
returnValue = F("Rotländerstr.");
break;
}
case 269850:
{
returnValue = F("Rotländerweg");
break;
}
case 269851:
{
returnValue = F("Rotmainstr.");
break;
}
case 269852:
{
returnValue = F("Rotmainweg");
break;
}
case 269853:
{
returnValue = F("Rotmannstr.");
break;
}
case 269854:
{
returnValue = F("Rotmaurergasse");
break;
}
case 269855:
{
returnValue = F("Rotmeerweg");
break;
}
case 269856:
{
returnValue = F("Rotmilanstr.");
break;
}
case 269857:
{
returnValue = F("Rotmilanweg");
break;
}
case 269858:
{
returnValue = F("Rotmoosstr.");
break;
}
case 269859:
{
returnValue = F("Rotmoosweg");
break;
}
case 269860:
{
returnValue = F("Rotmundweg");
break;
}
case 269861:
{
returnValue = F("Rotmurg-Winterseitesträßchen");
break;
}
case 269862:
{
returnValue = F("Rotmurgstr.");
break;
}
case 269863:
{
returnValue = F("Rotmurgtalweg");
break;
}
case 269864:
{
returnValue = F("Rotmühlstr.");
break;
}
case 269865:
{
returnValue = F("Rotmühlweg");
break;
}
case 269866:
{
returnValue = F("Rotnpeckstr.");
break;
}
case 269867:
{
returnValue = F("Rotofenstr.");
break;
}
case 269868:
{
returnValue = F("Rotrainsackweg");
break;
}
case 269869:
{
returnValue = F("Rotraudstr.");
break;
}
case 269870:
{
returnValue = F("Rotreiserstr.");
break;
}
case 269871:
{
returnValue = F("Rotreiß");
break;
}
case 269872:
{
returnValue = F("Rotrütteweg");
break;
}
case 269873:
{
returnValue = F("Rotsal");
break;
}
case 269874:
{
returnValue = F("Rotsalhangweg");
break;
}
case 269875:
{
returnValue = F("Rotsandweg");
break;
}
case 269876:
{
returnValue = F("Rotschauer Str.");
break;
}
case 269877:
{
returnValue = F("Rotschauer Weg");
break;
}
case 269878:
{
returnValue = F("Rotschenkelweg");
break;
}
case 269879:
{
returnValue = F("Rotscher Weg");
break;
}
case 269880:
{
returnValue = F("Rotscheroth");
break;
}
case 269881:
{
returnValue = F("Rotschieferweg");
break;
}
case 269882:
{
returnValue = F("Rotschlagweg");
break;
}
case 269883:
{
returnValue = F("Rotschnabel");
break;
}
case 269884:
{
returnValue = F("Rotschneckenweg");
break;
}
case 269885:
{
returnValue = F("Rotschwänzchenweg");
break;
}
case 269886:
{
returnValue = F("Rotseifenberg");
break;
}
case 269887:
{
returnValue = F("Rotsgärtenstr.");
break;
}
case 269888:
{
returnValue = F("Rotspitzweg");
break;
}
case 269889:
{
returnValue = F("Rotsruheweg");
break;
}
case 269890:
{
returnValue = F("Rotstauden");
break;
}
case 269891:
{
returnValue = F("Rotstaudenweg");
break;
}
case 269892:
{
returnValue = F("Rotstaystr.");
break;
}
case 269893:
{
returnValue = F("Rotsteg");
break;
}
case 269894:
{
returnValue = F("Rotsteige");
break;
}
case 269895:
{
returnValue = F("Rotsteigelesweg");
break;
}
case 269896:
{
returnValue = F("Rotsteiger Weg");
break;
}
case 269897:
{
returnValue = F("Rotsteiglesweg");
break;
}
case 269898:
{
returnValue = F("Rotsteigstr.");
break;
}
case 269899:
{
returnValue = F("Rotsteinblick");
break;
}
case 269900:
{
returnValue = F("Rotsteinbruchweg");
break;
}
case 269901:
{
returnValue = F("Rotsteiner Str.");
break;
}
case 269902:
{
returnValue = F("Rotsteinstr.");
break;
}
case 269903:
{
returnValue = F("Rotsteinweg");
break;
}
case 269904:
{
returnValue = F("Rotstichweg");
break;
}
case 269905:
{
returnValue = F("Rotstr.");
break;
}
case 269906:
{
returnValue = F("Rotstückweg");
break;
}
case 269907:
{
returnValue = F("Rotsudelbachweg");
break;
}
case 269908:
{
returnValue = F("Rotswiesenweg");
break;
}
case 269909:
{
returnValue = F("Rotswindstr.");
break;
}
case 269910:
{
returnValue = F("Rotsäulenweg");
break;
}
case 269911:
{
returnValue = F("Rott");
break;
}
case 269912:
{
returnValue = F("Rott am Wald");
break;
}
case 269913:
{
returnValue = F("Rottachbergstr.");
break;
}
case 269914:
{
returnValue = F("Rottachbergweg");
break;
}
case 269915:
{
returnValue = F("Rottachsee-Rundweg");
break;
}
case 269916:
{
returnValue = F("Rottachstr.");
break;
}
case 269917:
{
returnValue = F("Rottachweg");
break;
}
case 269918:
{
returnValue = F("Rottaer Weg");
break;
}
case 269919:
{
returnValue = F("Rottal Terme, Kurpark");
break;
}
case 269920:
{
returnValue = F("Rottalblick");
break;
}
case 269921:
{
returnValue = F("Rottalheimweg");
break;
}
case 269922:
{
returnValue = F("Rottalstr.");
break;
}
case 269923:
{
returnValue = F("Rottalsträßchen");
break;
}
case 269924:
{
returnValue = F("Rottalsträßle");
break;
}
case 269925:
{
returnValue = F("Rottalweg");
break;
}
case 269926:
{
returnValue = F("Rottanger");
break;
}
case 269927:
{
returnValue = F("Rottannenstr.");
break;
}
case 269928:
{
returnValue = F("Rottannenweg");
break;
}
case 269929:
{
returnValue = F("Rottau");
break;
}
case 269930:
{
returnValue = F("Rottauenweg");
break;
}
case 269931:
{
returnValue = F("Rottauer Str.");
break;
}
case 269932:
{
returnValue = F("Rottberg");
break;
}
case 269933:
{
returnValue = F("Rottberger Str.");
break;
}
case 269934:
{
returnValue = F("Rottbitzer Str.");
break;
}
case 269935:
{
returnValue = F("Rottbitzer Weg");
break;
}
case 269936:
{
returnValue = F("Rottbrede");
break;
}
case 269937:
{
returnValue = F("Rottbreite");
break;
}
case 269938:
{
returnValue = F("Rottbrink");
break;
}
case 269939:
{
returnValue = F("Rottbrinkweg");
break;
}
case 269940:
{
returnValue = F("Rottbruchstr.");
break;
}
case 269941:
{
returnValue = F("Rottbusch");
break;
}
case 269942:
{
returnValue = F("Rottdamm");
break;
}
case 269943:
{
returnValue = F("Rottdick");
break;
}
case 269944:
{
returnValue = F("Rotte");
break;
}
case 269945:
{
returnValue = F("Rottebachweg");
break;
}
case 269946:
{
returnValue = F("Rotteckring");
break;
}
case 269947:
{
returnValue = F("Rottefeld");
break;
}
case 269948:
{
returnValue = F("Rotteichweg");
break;
}
case 269949:
{
returnValue = F("Rotteil");
break;
}
case 269950:
{
returnValue = F("Rottekuhlen");
break;
}
case 269951:
{
returnValue = F("Rottele Jaaß");
break;
}
case 269952:
{
returnValue = F("Rottelsweg");
break;
}
case 269953:
{
returnValue = F("Rottelweg");
break;
}
case 269954:
{
returnValue = F("Rottenacker Str.");
break;
}
case 269955:
{
returnValue = F("Rottenackerstr.");
break;
}
case 269956:
{
returnValue = F("Rottenbach");
break;
}
case 269957:
{
returnValue = F("Rottenbacher Str.");
break;
}
case 269958:
{
returnValue = F("Rottenbacher Weg");
break;
}
case 269959:
{
returnValue = F("Rottenbachstr.");
break;
}
case 269960:
{
returnValue = F("Rottenbaurer Weg");
break;
}
case 269961:
{
returnValue = F("Rottenberg");
break;
}
case 269962:
{
returnValue = F("Rottenberger Str.");
break;
}
case 269963:
{
returnValue = F("Rottenblick");
break;
}
case 269964:
{
returnValue = F("Rottenbreite");
break;
}
case 269965:
{
returnValue = F("Rottenbuch");
break;
}
case 269966:
{
returnValue = F("Rottenbucher Str.");
break;
}
case 269967:
{
returnValue = F("Rottenbucher Weg");
break;
}
case 269968:
{
returnValue = F("Rottenbucherstr.r Str.");
break;
}
case 269969:
{
returnValue = F("Rottenburger Kreuz");
break;
}
case 269970:
{
returnValue = F("Rottenburger Str.");
break;
}
case 269971:
{
returnValue = F("Rottenburger Weg");
break;
}
case 269972:
{
returnValue = F("Rottenburgstr.");
break;
}
case 269973:
{
returnValue = F("Rottendorf");
break;
}
case 269974:
{
returnValue = F("Rottendorfer Str.");
break;
}
case 269975:
{
returnValue = F("Rottendorfer Weg");
break;
}
case 269976:
{
returnValue = F("Rottendorfstr.");
break;
}
case 269977:
{
returnValue = F("Rotteneckstr.");
break;
}
case 269978:
{
returnValue = F("Rottenegger Str.");
break;
}
case 269979:
{
returnValue = F("Rottenfeldstr.");
break;
}
case 269980:
{
returnValue = F("Rottenfußerweg");
break;
}
case 269981:
{
returnValue = F("Rottengasse");
break;
}
case 269982:
{
returnValue = F("Rottenkamp");
break;
}
case 269983:
{
returnValue = F("Rottenkolber Str.");
break;
}
case 269984:
{
returnValue = F("Rottenmann");
break;
}
case 269985:
{
returnValue = F("Rottenmanner Str.");
break;
}
case 269986:
{
returnValue = F("Rottenmünsterweg");
break;
}
case 269987:
{
returnValue = F("Rottensdorfer Str.");
break;
}
case 269988:
{
returnValue = F("Rottensteinerweg");
break;
}
case 269989:
{
returnValue = F("Rottenstr.");
break;
}
case 269990:
{
returnValue = F("Rottensweg");
break;
}
case 269991:
{
returnValue = F("Rottenweg");
break;
}
case 269992:
{
returnValue = F("Rotteplatz");
break;
}
case 269993:
{
returnValue = F("Rotter Dorfstr.");
break;
}
case 269994:
{
returnValue = F("Rotter Gasse");
break;
}
case 269995:
{
returnValue = F("Rotter Str.");
break;
}
case 269996:
{
returnValue = F("Rotter Tie");
break;
}
case 269997:
{
returnValue = F("Rotter Viehtrift");
break;
}
case 269998:
{
returnValue = F("Rotter Weg");
break;
}
case 269999:
{
returnValue = F("Rotterdamer Str.");
break;
}
case 270000:
{
returnValue = F("Rotterdell");
break;
}
case 270001:
{
returnValue = F("Rotterfeld");
break;
}
case 270002:
{
returnValue = F("Rottergatterweg");
break;
}
case 270003:
{
returnValue = F("Rotternweg");
break;
}
case 270004:
{
returnValue = F("Rotteroder Hauptstr.");
break;
}
case 270005:
{
returnValue = F("Rotteroder Str.");
break;
}
case 270006:
{
returnValue = F("Rotterpfad");
break;
}
case 270007:
{
returnValue = F("Rottersbergweg");
break;
}
case 270008:
{
returnValue = F("Rottersdorfer Str.");
break;
}
case 270009:
{
returnValue = F("Rottersham");
break;
}
case 270010:
{
returnValue = F("Rottershäuser Str.");
break;
}
case 270011:
{
returnValue = F("Rotterstetten");
break;
}
case 270012:
{
returnValue = F("Rottes");
break;
}
case 270013:
{
returnValue = F("Rottestr.");
break;
}
case 270014:
{
returnValue = F("Rottevallsweg");
break;
}
case 270015:
{
returnValue = F("Rotteweg");
break;
}
case 270016:
{
returnValue = F("Rottewitzer Str.");
break;
}
case 270017:
{
returnValue = F("Rottfallsweg");
break;
}
case 270018:
{
returnValue = F("Rottfeld");
break;
}
case 270019:
{
returnValue = F("Rottfeldstr.");
break;
}
case 270020:
{
returnValue = F("Rotthagen");
break;
}
case 270021:
{
returnValue = F("Rotthang");
break;
}
case 270022:
{
returnValue = F("Rotthardt");
break;
}
case 270023:
{
returnValue = F("Rotthausen");
break;
}
case 270024:
{
returnValue = F("Rotthausener Weg");
break;
}
case 270025:
{
returnValue = F("Rotthauser Markt");
break;
}
case 270026:
{
returnValue = F("Rotthauser Str.");
break;
}
}
return returnValue;
}
