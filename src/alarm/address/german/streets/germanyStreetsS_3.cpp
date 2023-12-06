#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameS3(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 290029:
    {
        returnValue = F("Sendener Str.");
        break;
    }
    case 290030:
    {
        returnValue = F("Sendenhorster Str.");
        break;
    }
    case 290031:
    {
        returnValue = F("Sender Str.");
        break;
    }
    case 290032:
    {
        returnValue = F("Senderblick");
        break;
    }
    case 290033:
    {
        returnValue = F("Senderstr.");
        break;
    }
    case 290034:
    {
        returnValue = F("Senderweg");
        break;
    }
    case 290035:
    {
        returnValue = F("Sendesch");
        break;
    }
    case 290036:
    {
        returnValue = F("Sendesweg");
        break;
    }
    case 290037:
    {
        returnValue = F("Sendeweg");
        break;
    }
    case 290038:
    {
        returnValue = F("Sendleinstr.");
        break;
    }
    case 290039:
    {
        returnValue = F("Sendlinger Str.");
        break;
    }
    case 290040:
    {
        returnValue = F("Sendlingerstr.");
        break;
    }
    case 290041:
    {
        returnValue = F("Sendlmeier");
        break;
    }
    case 290042:
    {
        returnValue = F("Sendplatz");
        break;
    }
    case 290043:
    {
        returnValue = F("Sendschotter Weg");
        break;
    }
    case 290044:
    {
        returnValue = F("Sendstr.");
        break;
    }
    case 290045:
    {
        returnValue = F("Sendtnerstr.");
        break;
    }
    case 290046:
    {
        returnValue = F("Sendwag");
        break;
    }
    case 290047:
    {
        returnValue = F("Senecaweg");
        break;
    }
    case 290048:
    {
        returnValue = F("Seneckelchen (Häbel)");
        break;
    }
    case 290049:
    {
        returnValue = F("Senefelder Str.");
        break;
    }
    case 290050:
    {
        returnValue = F("Senefelder-Ring");
        break;
    }
    case 290051:
    {
        returnValue = F("Senefelderallee");
        break;
    }
    case 290052:
    {
        returnValue = F("Senefelderstr.");
        break;
    }
    case 290053:
    {
        returnValue = F("Senefelderweg");
        break;
    }
    case 290054:
    {
        returnValue = F("Senestreyplatz");
        break;
    }
    case 290055:
    {
        returnValue = F("Senetsberg");
        break;
    }
    case 290056:
    {
        returnValue = F("Senfbodenweg");
        break;
    }
    case 290057:
    {
        returnValue = F("Senfgasse");
        break;
    }
    case 290058:
    {
        returnValue = F("Senfmühlenweg");
        break;
    }
    case 290059:
    {
        returnValue = F("Senfstr.");
        break;
    }
    case 290060:
    {
        returnValue = F("Senft-Mayer-Str.");
        break;
    }
    case 290061:
    {
        returnValue = F("Senfte");
        break;
    }
    case 290062:
    {
        returnValue = F("Senftenau");
        break;
    }
    case 290063:
    {
        returnValue = F("Senftenberger Str.");
        break;
    }
    case 290064:
    {
        returnValue = F("Senftenberger-Str.");
        break;
    }
    case 290065:
    {
        returnValue = F("Senftenhütter Str.");
        break;
    }
    case 290066:
    {
        returnValue = F("Senftenhütter Weg");
        break;
    }
    case 290067:
    {
        returnValue = F("Senftental");
        break;
    }
    case 290068:
    {
        returnValue = F("Senftlberg");
        break;
    }
    case 290069:
    {
        returnValue = F("Senfweg");
        break;
    }
    case 290070:
    {
        returnValue = F("Sengachweg");
        break;
    }
    case 290071:
    {
        returnValue = F("Sengbergstr.");
        break;
    }
    case 290072:
    {
        returnValue = F("Senge-Platten-Str.");
        break;
    }
    case 290073:
    {
        returnValue = F("Sengegasse");
        break;
    }
    case 290074:
    {
        returnValue = F("Sengel");
        break;
    }
    case 290075:
    {
        returnValue = F("Sengelbachweg");
        break;
    }
    case 290076:
    {
        returnValue = F("Sengelbuscher Str.");
        break;
    }
    case 290077:
    {
        returnValue = F("Sengelenweg");
        break;
    }
    case 290078:
    {
        returnValue = F("Sengelsberg");
        break;
    }
    case 290079:
    {
        returnValue = F("Sengelsberger Weg");
        break;
    }
    case 290080:
    {
        returnValue = F("Sengelsbergstr.");
        break;
    }
    case 290081:
    {
        returnValue = F("Sengelsbergweg");
        break;
    }
    case 290082:
    {
        returnValue = F("Sengelsteert");
        break;
    }
    case 290083:
    {
        returnValue = F("Sengenauer Weg");
        break;
    }
    case 290084:
    {
        returnValue = F("Sengenbachstr.");
        break;
    }
    case 290085:
    {
        returnValue = F("Sengenbrühlhangweg");
        break;
    }
    case 290086:
    {
        returnValue = F("Sengenbrühltraufweg");
        break;
    }
    case 290087:
    {
        returnValue = F("Sengenbühl");
        break;
    }
    case 290088:
    {
        returnValue = F("Sengenholzer Weg");
        break;
    }
    case 290089:
    {
        returnValue = F("Sengental");
        break;
    }
    case 290090:
    {
        returnValue = F("Sengersberg");
        break;
    }
    case 290091:
    {
        returnValue = F("Sengersbergblick");
        break;
    }
    case 290092:
    {
        returnValue = F("Sengershausen");
        break;
    }
    case 290093:
    {
        returnValue = F("Sengersiedlung");
        break;
    }
    case 290094:
    {
        returnValue = F("Sengersweg");
        break;
    }
    case 290095:
    {
        returnValue = F("Sengerwöhr");
        break;
    }
    case 290096:
    {
        returnValue = F("Senghorst");
        break;
    }
    case 290097:
    {
        returnValue = F("Senglingen");
        break;
    }
    case 290098:
    {
        returnValue = F("Sengnesselweg");
        break;
    }
    case 290099:
    {
        returnValue = F("Sengscheider Weg");
        break;
    }
    case 290100:
    {
        returnValue = F("Sengseestr.");
        break;
    }
    case 290101:
    {
        returnValue = F("Sengsterstr.");
        break;
    }
    case 290102:
    {
        returnValue = F("Sengstr.");
        break;
    }
    case 290103:
    {
        returnValue = F("Sengwarder Anteil");
        break;
    }
    case 290104:
    {
        returnValue = F("Sengwarder Weg");
        break;
    }
    case 290105:
    {
        returnValue = F("Senheimer Str.");
        break;
    }
    case 290106:
    {
        returnValue = F("Seniastr.");
        break;
    }
    case 290107:
    {
        returnValue = F("Senigalliaplatz");
        break;
    }
    case 290108:
    {
        returnValue = F("Senior-Starcke-Weg");
        break;
    }
    case 290109:
    {
        returnValue = F("Senior-Ubbelohde-Weg");
        break;
    }
    case 290110:
    {
        returnValue = F("Seniorendorf");
        break;
    }
    case 290111:
    {
        returnValue = F("Seniorenpark");
        break;
    }
    case 290112:
    {
        returnValue = F("Seniorenpark Haus Hermesgarten");
        break;
    }
    case 290113:
    {
        returnValue = F("Seniorenresidenz \"Haus Sonne am Schlosspark");
        break;
    }
    case 290114:
    {
        returnValue = F("Seniorenweg");
        break;
    }
    case 290115:
    {
        returnValue = F("Senitzstr.");
        break;
    }
    case 290116:
    {
        returnValue = F("Seniweg");
        break;
    }
    case 290117:
    {
        returnValue = F("Seniwortstr.");
        break;
    }
    case 290118:
    {
        returnValue = F("Senjor Park");
        break;
    }
    case 290119:
    {
        returnValue = F("Senkeleweg");
        break;
    }
    case 290120:
    {
        returnValue = F("Senkelgasse");
        break;
    }
    case 290121:
    {
        returnValue = F("Senkenweg");
        break;
    }
    case 290122:
    {
        returnValue = F("Senkfeldweg");
        break;
    }
    case 290123:
    {
        returnValue = F("Senkfurche");
        break;
    }
    case 290124:
    {
        returnValue = F("Senkgarten");
        break;
    }
    case 290125:
    {
        returnValue = F("Senkingstr.");
        break;
    }
    case 290126:
    {
        returnValue = F("Senkmatt");
        break;
    }
    case 290127:
    {
        returnValue = F("Senliser Str.");
        break;
    }
    case 290128:
    {
        returnValue = F("Senne");
        break;
    }
    case 290129:
    {
        returnValue = F("Sennebachstr.");
        break;
    }
    case 290130:
    {
        returnValue = F("Sennegarten");
        break;
    }
    case 290131:
    {
        returnValue = F("Sennelsbachweg");
        break;
    }
    case 290132:
    {
        returnValue = F("Sennenbachstr.");
        break;
    }
    case 290133:
    {
        returnValue = F("Sennenfelder Str.");
        break;
    }
    case 290134:
    {
        returnValue = F("Sennenweg");
        break;
    }
    case 290135:
    {
        returnValue = F("Senner Hellweg");
        break;
    }
    case 290136:
    {
        returnValue = F("Senner Str.");
        break;
    }
    case 290137:
    {
        returnValue = F("Sennerandweg");
        break;
    }
    case 290138:
    {
        returnValue = F("Sennerborn");
        break;
    }
    case 290139:
    {
        returnValue = F("Sennereigasse");
        break;
    }
    case 290140:
    {
        returnValue = F("Sennereistr.");
        break;
    }
    case 290141:
    {
        returnValue = F("Sennereiweg");
        break;
    }
    case 290142:
    {
        returnValue = F("Sennerstr.");
        break;
    }
    case 290143:
    {
        returnValue = F("Sennerweg");
        break;
    }
    case 290144:
    {
        returnValue = F("Sennestr.");
        break;
    }
    case 290145:
    {
        returnValue = F("Sennesweg");
        break;
    }
    case 290146:
    {
        returnValue = F("Sennetrift");
        break;
    }
    case 290147:
    {
        returnValue = F("Senneweg");
        break;
    }
    case 290148:
    {
        returnValue = F("Sennewiese");
        break;
    }
    case 290149:
    {
        returnValue = F("Sennewitzer Dorfplatz");
        break;
    }
    case 290150:
    {
        returnValue = F("Sennewitzer Landstr.");
        break;
    }
    case 290151:
    {
        returnValue = F("Sennewitzer Siedlung");
        break;
    }
    case 290152:
    {
        returnValue = F("Sennewitzer Str.");
        break;
    }
    case 290153:
    {
        returnValue = F("Sennfelder Bahnhof");
        break;
    }
    case 290154:
    {
        returnValue = F("Sennfelder Freibadeanlage");
        break;
    }
    case 290155:
    {
        returnValue = F("Sennfelder Gasse");
        break;
    }
    case 290156:
    {
        returnValue = F("Sennfelder Str.");
        break;
    }
    case 290157:
    {
        returnValue = F("Sennfelder Weg");
        break;
    }
    case 290158:
    {
        returnValue = F("Sennfelderweg");
        break;
    }
    case 290159:
    {
        returnValue = F("Senngutweg");
        break;
    }
    case 290160:
    {
        returnValue = F("Sennhof");
        break;
    }
    case 290161:
    {
        returnValue = F("Sennhofgasse");
        break;
    }
    case 290162:
    {
        returnValue = F("Sennhofstr.");
        break;
    }
    case 290163:
    {
        returnValue = F("Sennhofweg");
        break;
    }
    case 290164:
    {
        returnValue = F("Sennhütte");
        break;
    }
    case 290165:
    {
        returnValue = F("Sennieweg");
        break;
    }
    case 290166:
    {
        returnValue = F("Sennighohl");
        break;
    }
    case 290167:
    {
        returnValue = F("Sennigstr.");
        break;
    }
    case 290168:
    {
        returnValue = F("Sennigweg");
        break;
    }
    case 290169:
    {
        returnValue = F("Senningsweg");
        break;
    }
    case 290170:
    {
        returnValue = F("Sennlicher Esch");
        break;
    }
    case 290171:
    {
        returnValue = F("Sennstr.");
        break;
    }
    case 290172:
    {
        returnValue = F("Sensachsträßchen");
        break;
    }
    case 290173:
    {
        returnValue = F("Sensauer Str.");
        break;
    }
    case 290174:
    {
        returnValue = F("Sensbacher Str.");
        break;
    }
    case 290175:
    {
        returnValue = F("Sensbergstr.");
        break;
    }
    case 290176:
    {
        returnValue = F("Sensburger Ring");
        break;
    }
    case 290177:
    {
        returnValue = F("Sensburger Str.");
        break;
    }
    case 290178:
    {
        returnValue = F("Sensby");
        break;
    }
    case 290179:
    {
        returnValue = F("Senschenhöhe");
        break;
    }
    case 290180:
    {
        returnValue = F("Senselsweg");
        break;
    }
    case 290181:
    {
        returnValue = F("Sensenbacher Str.");
        break;
    }
    case 290182:
    {
        returnValue = F("Sensengasse");
        break;
    }
    case 290183:
    {
        returnValue = F("Sensengraben");
        break;
    }
    case 290184:
    {
        returnValue = F("Sensenkopfstr.");
        break;
    }
    case 290185:
    {
        returnValue = F("Sensenschmiedweg");
        break;
    }
    case 290186:
    {
        returnValue = F("Sensensteiner Mühle");
        break;
    }
    case 290187:
    {
        returnValue = F("Sensensteiner Str.");
        break;
    }
    case 290188:
    {
        returnValue = F("Sensensteiner Weg");
        break;
    }
    case 290189:
    {
        returnValue = F("Sensensteinstr.");
        break;
    }
    case 290190:
    {
        returnValue = F("Sensensteinweg");
        break;
    }
    case 290191:
    {
        returnValue = F("Sensenstr.");
        break;
    }
    case 290192:
    {
        returnValue = F("Sensental");
        break;
    }
    case 290193:
    {
        returnValue = F("Sensenweg");
        break;
    }
    case 290194:
    {
        returnValue = F("Senser Platz");
        break;
    }
    case 290195:
    {
        returnValue = F("Senserbergstr.");
        break;
    }
    case 290196:
    {
        returnValue = F("Senserstr.");
        break;
    }
    case 290197:
    {
        returnValue = F("Senserweg");
        break;
    }
    case 290198:
    {
        returnValue = F("Sensmannswiesen");
        break;
    }
    case 290199:
    {
        returnValue = F("Senster Dorfstr.");
        break;
    }
    case 290200:
    {
        returnValue = F("Senster Stadtweg");
        break;
    }
    case 290201:
    {
        returnValue = F("Senster Weg");
        break;
    }
    case 290202:
    {
        returnValue = F("Sensweg");
        break;
    }
    case 290203:
    {
        returnValue = F("Sent-Jan-Str.");
        break;
    }
    case 290204:
    {
        returnValue = F("Sentastr.");
        break;
    }
    case 290205:
    {
        returnValue = F("Sentaweg");
        break;
    }
    case 290206:
    {
        returnValue = F("Sentenharter Str.");
        break;
    }
    case 290207:
    {
        returnValue = F("Sentesweg");
        break;
    }
    case 290208:
    {
        returnValue = F("Sentistr.");
        break;
    }
    case 290209:
    {
        returnValue = F("Sentruper Weg");
        break;
    }
    case 290210:
    {
        returnValue = F("Sentrupskamp");
        break;
    }
    case 290211:
    {
        returnValue = F("Senwai");
        break;
    }
    case 290212:
    {
        returnValue = F("Senziger Str.");
        break;
    }
    case 290213:
    {
        returnValue = F("Senziger Weg");
        break;
    }
    case 290214:
    {
        returnValue = F("Senzigstr.");
        break;
    }
    case 290215:
    {
        returnValue = F("Separationsweg");
        break;
    }
    case 290216:
    {
        returnValue = F("Sepeler Weg");
        break;
    }
    case 290217:
    {
        returnValue = F("Sepkamp");
        break;
    }
    case 290218:
    {
        returnValue = F("Sepkerweg");
        break;
    }
    case 290219:
    {
        returnValue = F("Sepp-Biehler-Str.");
        break;
    }
    case 290220:
    {
        returnValue = F("Sepp-Dötsch-Str.");
        break;
    }
    case 290221:
    {
        returnValue = F("Sepp-Frieder-Str.");
        break;
    }
    case 290222:
    {
        returnValue = F("Sepp-Heindl-Str.");
        break;
    }
    case 290223:
    {
        returnValue = F("Sepp-Herberger-Platz");
        break;
    }
    case 290224:
    {
        returnValue = F("Sepp-Herberger-Str.");
        break;
    }
    case 290225:
    {
        returnValue = F("Sepp-Herberger-Weg");
        break;
    }
    case 290226:
    {
        returnValue = F("Sepp-Hilz-Str.");
        break;
    }
    case 290227:
    {
        returnValue = F("Sepp-Kiene-Str.");
        break;
    }
    case 290228:
    {
        returnValue = F("Sepp-Kiermaier-Str.");
        break;
    }
    case 290229:
    {
        returnValue = F("Sepp-Lederer-Ring");
        break;
    }
    case 290230:
    {
        returnValue = F("Sepp-Leirer-Weg");
        break;
    }
    case 290231:
    {
        returnValue = F("Sepp-Manger-Str.");
        break;
    }
    case 290232:
    {
        returnValue = F("Sepp-Müller-Weg");
        break;
    }
    case 290233:
    {
        returnValue = F("Sepp-Obermeier-Str.");
        break;
    }
    case 290234:
    {
        returnValue = F("Sepp-Schmid-Weg");
        break;
    }
    case 290235:
    {
        returnValue = F("Sepp-Sebald-Siedlung");
        break;
    }
    case 290236:
    {
        returnValue = F("Sepp-Sontheim-Str.");
        break;
    }
    case 290237:
    {
        returnValue = F("Sepp-Steinberger-Park");
        break;
    }
    case 290238:
    {
        returnValue = F("Sepp-Straßberger-Str.");
        break;
    }
    case 290239:
    {
        returnValue = F("Sepp-Troll-Weg");
        break;
    }
    case 290240:
    {
        returnValue = F("Sepp-Verscht-Str.");
        break;
    }
    case 290241:
    {
        returnValue = F("Sepp-Weidinger-Str.");
        break;
    }
    case 290242:
    {
        returnValue = F("Sepp-Weidinger-Weg");
        break;
    }
    case 290243:
    {
        returnValue = F("Sepp-Zehentner-Str.");
        break;
    }
    case 290244:
    {
        returnValue = F("Seppel-Leis-Str.");
        break;
    }
    case 290245:
    {
        returnValue = F("Seppeler Brücke");
        break;
    }
    case 290246:
    {
        returnValue = F("Seppelerstr.");
        break;
    }
    case 290247:
    {
        returnValue = F("Seppengraben");
        break;
    }
    case 290248:
    {
        returnValue = F("Seppenhofer Str.");
        break;
    }
    case 290249:
    {
        returnValue = F("Seppenrader Str.");
        break;
    }
    case 290250:
    {
        returnValue = F("Seppenser Mühlenweg");
        break;
    }
    case 290251:
    {
        returnValue = F("Seppenser Weg");
        break;
    }
    case 290252:
    {
        returnValue = F("Seppensteig");
        break;
    }
    case 290253:
    {
        returnValue = F("Sepperlmühle");
        break;
    }
    case 290254:
    {
        returnValue = F("Seppersburg");
        break;
    }
    case 290255:
    {
        returnValue = F("Sepphuberweg");
        break;
    }
    case 290256:
    {
        returnValue = F("Seppl im Holz");
        break;
    }
    case 290257:
    {
        returnValue = F("Seppl-Herberger-Ring");
        break;
    }
    case 290258:
    {
        returnValue = F("Seppl-Herberger-Weg");
        break;
    }
    case 290259:
    {
        returnValue = F("Sepps Holzweg");
        break;
    }
    case 290260:
    {
        returnValue = F("Sepps Weg");
        break;
    }
    case 290261:
    {
        returnValue = F("Seppstr.");
        break;
    }
    case 290262:
    {
        returnValue = F("Sequoienweg");
        break;
    }
    case 290263:
    {
        returnValue = F("Seracher Str.");
        break;
    }
    case 290264:
    {
        returnValue = F("Serafin-Stötter-Str.");
        break;
    }
    case 290265:
    {
        returnValue = F("Serams");
        break;
    }
    case 290266:
    {
        returnValue = F("Seraph-Baumer-Weg");
        break;
    }
    case 290267:
    {
        returnValue = F("Seraphin-Kirn-Str.");
        break;
    }
    case 290268:
    {
        returnValue = F("Serbastian-Andre-Weg");
        break;
    }
    case 290269:
    {
        returnValue = F("Serbitz");
        break;
    }
    case 290270:
    {
        returnValue = F("Serbitzer Ring");
        break;
    }
    case 290271:
    {
        returnValue = F("Serbitzer Str.");
        break;
    }
    case 290272:
    {
        returnValue = F("Sereetzer Feld");
        break;
    }
    case 290273:
    {
        returnValue = F("Sereetzer Str.");
        break;
    }
    case 290274:
    {
        returnValue = F("Sereetzer Tannen");
        break;
    }
    case 290275:
    {
        returnValue = F("Sereetzer Weg");
        break;
    }
    case 290276:
    {
        returnValue = F("Serenadenhof");
        break;
    }
    case 290277:
    {
        returnValue = F("Serenwaldstr.");
        break;
    }
    case 290278:
    {
        returnValue = F("Serfeldsweg");
        break;
    }
    case 290279:
    {
        returnValue = F("Sergeantenweg");
        break;
    }
    case 290280:
    {
        returnValue = F("Serggraben");
        break;
    }
    case 290281:
    {
        returnValue = F("Seriemer Mühle");
        break;
    }
    case 290282:
    {
        returnValue = F("Seriemer Weg");
        break;
    }
    case 290283:
    {
        returnValue = F("Serienskämpe");
        break;
    }
    case 290284:
    {
        returnValue = F("Seringhauser Str.");
        break;
    }
    case 290285:
    {
        returnValue = F("Seringhauser Weg");
        break;
    }
    case 290286:
    {
        returnValue = F("Serkaer Str.");
        break;
    }
    case 290287:
    {
        returnValue = F("Serkaer Weg");
        break;
    }
    case 290288:
    {
        returnValue = F("Serkendorfer Str.");
        break;
    }
    case 290289:
    {
        returnValue = F("Serkenroder Str.");
        break;
    }
    case 290290:
    {
        returnValue = F("Serkowitzer Str.");
        break;
    }
    case 290291:
    {
        returnValue = F("Serks Gang");
        break;
    }
    case 290292:
    {
        returnValue = F("Serkwai");
        break;
    }
    case 290293:
    {
        returnValue = F("Serlbach");
        break;
    }
    case 290294:
    {
        returnValue = F("Serlbacher Str.");
        break;
    }
    case 290295:
    {
        returnValue = F("Serlostr.");
        break;
    }
    case 290296:
    {
        returnValue = F("Sermlinger Str.");
        break;
    }
    case 290297:
    {
        returnValue = F("Sermsweg");
        break;
    }
    case 290298:
    {
        returnValue = F("Sermuther Dorfstr.");
        break;
    }
    case 290299:
    {
        returnValue = F("Sermuther Str.");
        break;
    }
    case 290300:
    {
        returnValue = F("Sermuther Weg");
        break;
    }
    case 290301:
    {
        returnValue = F("Sernatingenstr.");
        break;
    }
    case 290302:
    {
        returnValue = F("Sernet Weg");
        break;
    }
    case 290303:
    {
        returnValue = F("Sernoer Dorfstr.");
        break;
    }
    case 290304:
    {
        returnValue = F("Sernoer Winkel");
        break;
    }
    case 290305:
    {
        returnValue = F("Sernowstr.");
        break;
    }
    case 290306:
    {
        returnValue = F("Serntstr.");
        break;
    }
    case 290307:
    {
        returnValue = F("Serpentine");
        break;
    }
    case 290308:
    {
        returnValue = F("Serpentinenweg");
        break;
    }
    case 290309:
    {
        returnValue = F("Serpentinsteinstr.");
        break;
    }
    case 290310:
    {
        returnValue = F("Serpentinstr.");
        break;
    }
    case 290311:
    {
        returnValue = F("Serrahner Str.");
        break;
    }
    case 290312:
    {
        returnValue = F("Serrerkapfweg");
        break;
    }
    case 290313:
    {
        returnValue = F("Serreser Hangweg");
        break;
    }
    case 290314:
    {
        returnValue = F("Serrester Kirchweg");
        break;
    }
    case 290315:
    {
        returnValue = F("Serrester Str.");
        break;
    }
    case 290316:
    {
        returnValue = F("Serrester Weg");
        break;
    }
    case 290317:
    {
        returnValue = F("Serrig-Weg");
        break;
    }
    case 290318:
    {
        returnValue = F("Serriger Str.");
        break;
    }
    case 290319:
    {
        returnValue = F("Serrnussweg");
        break;
    }
    case 290320:
    {
        returnValue = F("Serrostr.");
        break;
    }
    case 290321:
    {
        returnValue = F("Serrstr.");
        break;
    }
    case 290322:
    {
        returnValue = F("Serrwiesenstr.");
        break;
    }
    case 290323:
    {
        returnValue = F("Sersbachstr.");
        break;
    }
    case 290324:
    {
        returnValue = F("Sersheimer Str.");
        break;
    }
    case 290325:
    {
        returnValue = F("Sersheimer Weg");
        break;
    }
    case 290326:
    {
        returnValue = F("Sershofer Weg");
        break;
    }
    case 290327:
    {
        returnValue = F("Sertal");
        break;
    }
    case 290328:
    {
        returnValue = F("Sertürnerstr.");
        break;
    }
    case 290329:
    {
        returnValue = F("Sertürnerweg");
        break;
    }
    case 290330:
    {
        returnValue = F("Servaisstr.");
        break;
    }
    case 290331:
    {
        returnValue = F("Servatiusgasse");
        break;
    }
    case 290332:
    {
        returnValue = F("Servatiusstr.");
        break;
    }
    case 290333:
    {
        returnValue = F("Servatiusweg");
        break;
    }
    case 290334:
    {
        returnValue = F("Servelweg");
        break;
    }
    case 290335:
    {
        returnValue = F("Servianstr.");
        break;
    }
    case 290336:
    {
        returnValue = F("Serviceweg Wasserbecken");
        break;
    }
    case 290337:
    {
        returnValue = F("Servietenstege");
        break;
    }
    case 290338:
    {
        returnValue = F("Servinswaldweg");
        break;
    }
    case 290339:
    {
        returnValue = F("Servitenweg");
        break;
    }
    case 290340:
    {
        returnValue = F("Servitutweg");
        break;
    }
    case 290341:
    {
        returnValue = F("Serwester Dorfstr.");
        break;
    }
    case 290342:
    {
        returnValue = F("Sesamstr.");
        break;
    }
    case 290343:
    {
        returnValue = F("Sesbeke");
        break;
    }
    case 290344:
    {
        returnValue = F("Sesekedamm");
        break;
    }
    case 290345:
    {
        returnValue = F("Sesekepark");
        break;
    }
    case 290346:
    {
        returnValue = F("Sesekestr.");
        break;
    }
    case 290347:
    {
        returnValue = F("Sesklint");
        break;
    }
    case 290348:
    {
        returnValue = F("Sespenrother Weg");
        break;
    }
    case 290349:
    {
        returnValue = F("Sesselalpe Zufahrt");
        break;
    }
    case 290350:
    {
        returnValue = F("Sesselbachstr.");
        break;
    }
    case 290351:
    {
        returnValue = F("Sesselbahn Ein-/Ausstieg");
        break;
    }
    case 290352:
    {
        returnValue = F("Sesselbergstr.");
        break;
    }
    case 290353:
    {
        returnValue = F("Sesselmannstr.");
        break;
    }
    case 290354:
    {
        returnValue = F("Sesselweg");
        break;
    }
    case 290355:
    {
        returnValue = F("Sessenbacher Str.");
        break;
    }
    case 290356:
    {
        returnValue = F("Sessenhausen");
        break;
    }
    case 290357:
    {
        returnValue = F("Sessenreuth");
        break;
    }
    case 290358:
    {
        returnValue = F("Sessenreuther Str.");
        break;
    }
    case 290359:
    {
        returnValue = F("Sessichstr.");
        break;
    }
    case 290360:
    {
        returnValue = F("Sessinghausen");
        break;
    }
    case 290361:
    {
        returnValue = F("Sessiweg");
        break;
    }
    case 290362:
    {
        returnValue = F("Sesslacher Str.");
        break;
    }
    case 290363:
    {
        returnValue = F("Sesslweg");
        break;
    }
    case 290364:
    {
        returnValue = F("Sesterbachstr.");
        break;
    }
    case 290365:
    {
        returnValue = F("Sethengasse");
        break;
    }
    case 290366:
    {
        returnValue = F("Sether Mühle");
        break;
    }
    case 290367:
    {
        returnValue = F("Sether Str.");
        break;
    }
    case 290368:
    {
        returnValue = F("Sether Weg");
        break;
    }
    case 290369:
    {
        returnValue = F("Setheweg");
        break;
    }
    case 290370:
    {
        returnValue = F("Sethlerhemmer Str.");
        break;
    }
    case 290371:
    {
        returnValue = F("Sethmanns Sietwende");
        break;
    }
    case 290372:
    {
        returnValue = F("Setjeweg");
        break;
    }
    case 290373:
    {
        returnValue = F("Setlager Str.");
        break;
    }
    case 290374:
    {
        returnValue = F("Settelestr.");
        break;
    }
    case 290375:
    {
        returnValue = F("Settelinweg");
        break;
    }
    case 290376:
    {
        returnValue = F("Settelsloh");
        break;
    }
    case 290377:
    {
        returnValue = F("Settenbecker Str.");
        break;
    }
    case 290378:
    {
        returnValue = F("Settericher Weg");
        break;
    }
    case 290379:
    {
        returnValue = F("Settiner Str.");
        break;
    }
    case 290380:
    {
        returnValue = F("Settiner Weg");
        break;
    }
    case 290381:
    {
        returnValue = F("Settmecker Weg");
        break;
    }
    case 290382:
    {
        returnValue = F("Settrup");
        break;
    }
    case 290383:
    {
        returnValue = F("Settruper Str.");
        break;
    }
    case 290384:
    {
        returnValue = F("Settstücke");
        break;
    }
    case 290385:
    {
        returnValue = F("Settweg");
        break;
    }
    case 290386:
    {
        returnValue = F("Setzallmandweg");
        break;
    }
    case 290387:
    {
        returnValue = F("Setzbergstr.");
        break;
    }
    case 290388:
    {
        returnValue = F("Setzbergweg");
        break;
    }
    case 290389:
    {
        returnValue = F("Setzbornstr.");
        break;
    }
    case 290390:
    {
        returnValue = F("Setze");
        break;
    }
    case 290391:
    {
        returnValue = F("Setze-Weg");
        break;
    }
    case 290392:
    {
        returnValue = F("Setzebachgrund");
        break;
    }
    case 290393:
    {
        returnValue = F("Setzelbacher Str.");
        break;
    }
    case 290394:
    {
        returnValue = F("Setzelsdorf");
        break;
    }
    case 290395:
    {
        returnValue = F("Setzenhorst");
        break;
    }
    case 290396:
    {
        returnValue = F("Setzensack");
        break;
    }
    case 290397:
    {
        returnValue = F("Setzensackstr.");
        break;
    }
    case 290398:
    {
        returnValue = F("Setzer Str.");
        break;
    }
    case 290399:
    {
        returnValue = F("Setzer Weg");
        break;
    }
    case 290400:
    {
        returnValue = F("Setzerweg");
        break;
    }
    case 290401:
    {
        returnValue = F("Setzeweg");
        break;
    }
    case 290402:
    {
        returnValue = F("Setzgasse");
        break;
    }
    case 290403:
    {
        returnValue = F("Setzgraben");
        break;
    }
    case 290404:
    {
        returnValue = F("Setzhof");
        break;
    }
    case 290405:
    {
        returnValue = F("Setzhörn");
        break;
    }
    case 290406:
    {
        returnValue = F("Setziner Str.");
        break;
    }
    case 290407:
    {
        returnValue = F("Setziner Weg");
        break;
    }
    case 290408:
    {
        returnValue = F("Setzinger Weg");
        break;
    }
    case 290409:
    {
        returnValue = F("Setzplatz");
        break;
    }
    case 290410:
    {
        returnValue = F("Setzsteig");
        break;
    }
    case 290411:
    {
        returnValue = F("Setzstr.");
        break;
    }
    case 290412:
    {
        returnValue = F("Setzweg");
        break;
    }
    case 290413:
    {
        returnValue = F("Setzäckerweg");
        break;
    }
    case 290414:
    {
        returnValue = F("Seubertbuck");
        break;
    }
    case 290415:
    {
        returnValue = F("Seubertgasse");
        break;
    }
    case 290416:
    {
        returnValue = F("Seubertsrasen");
        break;
    }
    case 290417:
    {
        returnValue = F("Seubertstr.");
        break;
    }
    case 290418:
    {
        returnValue = F("Seubertweg");
        break;
    }
    case 290419:
    {
        returnValue = F("Seubtendorf");
        break;
    }
    case 290420:
    {
        returnValue = F("Seuchenlinder Weg");
        break;
    }
    case 290421:
    {
        returnValue = F("Seufferheldstr.");
        break;
    }
    case 290422:
    {
        returnValue = F("Seuffertstr.");
        break;
    }
    case 290423:
    {
        returnValue = F("Seufzer Allee");
        break;
    }
    case 290424:
    {
        returnValue = F("Seufzerallee");
        break;
    }
    case 290425:
    {
        returnValue = F("Seufzerberg");
        break;
    }
    case 290426:
    {
        returnValue = F("Seufzerbrücke");
        break;
    }
    case 290427:
    {
        returnValue = F("Seufzerpfad");
        break;
    }
    case 290428:
    {
        returnValue = F("Seufzertal");
        break;
    }
    case 290429:
    {
        returnValue = F("Seufzerweg");
        break;
    }
    case 290430:
    {
        returnValue = F("Seugast");
        break;
    }
    case 290431:
    {
        returnValue = F("Seugaster Weg");
        break;
    }
    case 290432:
    {
        returnValue = F("Seugenbergweg");
        break;
    }
    case 290433:
    {
        returnValue = F("Seugenhofer Str.");
        break;
    }
    case 290434:
    {
        returnValue = F("Seugenstr.");
        break;
    }
    case 290435:
    {
        returnValue = F("Seukendorfer Str.");
        break;
    }
    case 290436:
    {
        returnValue = F("Seukendorfer Weg");
        break;
    }
    case 290437:
    {
        returnValue = F("Seulberg-Obernhainer Grenzschneise");
        break;
    }
    case 290438:
    {
        returnValue = F("Seulberger Grenzschneise");
        break;
    }
    case 290439:
    {
        returnValue = F("Seulberger Grenzweg");
        break;
    }
    case 290440:
    {
        returnValue = F("Seulbitz");
        break;
    }
    case 290441:
    {
        returnValue = F("Seulbitzer Str.");
        break;
    }
    case 290442:
    {
        returnValue = F("Seulbitzer Weg");
        break;
    }
    case 290443:
    {
        returnValue = F("Seulenstr.");
        break;
    }
    case 290444:
    {
        returnValue = F("Seulinger Ring");
        break;
    }
    case 290445:
    {
        returnValue = F("Seulinger Str.");
        break;
    }
    case 290446:
    {
        returnValue = F("Seulinger Weg");
        break;
    }
    case 290447:
    {
        returnValue = F("Seulohe");
        break;
    }
    case 290448:
    {
        returnValue = F("Seumeparkweg");
        break;
    }
    case 290449:
    {
        returnValue = F("Seumestr.");
        break;
    }
    case 290450:
    {
        returnValue = F("Seumeweg");
        break;
    }
    case 290451:
    {
        returnValue = F("Seupahner Str.");
        break;
    }
    case 290452:
    {
        returnValue = F("Seurreallee");
        break;
    }
    case 290453:
    {
        returnValue = F("Seusstr.");
        break;
    }
    case 290454:
    {
        returnValue = F("Seuteborn-Weg");
        break;
    }
    case 290455:
    {
        returnValue = F("Seutenborn");
        break;
    }
    case 290456:
    {
        returnValue = F("Seutenstr.");
        break;
    }
    case 290457:
    {
        returnValue = F("Seuthestr.");
        break;
    }
    case 290458:
    {
        returnValue = F("Seutterweg");
        break;
    }
    case 290459:
    {
        returnValue = F("Seußener Str.");
        break;
    }
    case 290460:
    {
        returnValue = F("Seußlitzer Str.");
        break;
    }
    case 290461:
    {
        returnValue = F("Sevelener Str.");
        break;
    }
    case 290462:
    {
        returnValue = F("Sevelter Str.");
        break;
    }
    case 290463:
    {
        returnValue = F("Sevenich");
        break;
    }
    case 290464:
    {
        returnValue = F("Sevenicher Weg");
        break;
    }
    case 290465:
    {
        returnValue = F("Sevenoaks-Kreisel");
        break;
    }
    case 290466:
    {
        returnValue = F("Severin-Böhr-Str.");
        break;
    }
    case 290467:
    {
        returnValue = F("Severin-Schäfer-Str.");
        break;
    }
    case 290468:
    {
        returnValue = F("Severiner Str.");
        break;
    }
    case 290469:
    {
        returnValue = F("Severiner Weg");
        break;
    }
    case 290470:
    {
        returnValue = F("Severinghauser Str.");
        break;
    }
    case 290471:
    {
        returnValue = F("Severingstr.");
        break;
    }
    case 290472:
    {
        returnValue = F("Severinshof");
        break;
    }
    case 290473:
    {
        returnValue = F("Severinstr.");
        break;
    }
    case 290474:
    {
        returnValue = F("Severinsweg");
        break;
    }
    case 290475:
    {
        returnValue = F("Severinusstr.");
        break;
    }
    case 290476:
    {
        returnValue = F("Severinusweg");
        break;
    }
    case 290477:
    {
        returnValue = F("Severinweg");
        break;
    }
    case 290478:
    {
        returnValue = F("Severitstr.");
        break;
    }
    case 290479:
    {
        returnValue = F("Severnkamp");
        break;
    }
    case 290480:
    {
        returnValue = F("Severshuser Weg");
        break;
    }
    case 290481:
    {
        returnValue = F("Severusstr.");
        break;
    }
    case 290482:
    {
        returnValue = F("Sevinghausen");
        break;
    }
    case 290483:
    {
        returnValue = F("Sewekower Dorfstr.");
        break;
    }
    case 290484:
    {
        returnValue = F("Seweningstr.");
        break;
    }
    case 290485:
    {
        returnValue = F("Sexauer Weg");
        break;
    }
    case 290486:
    {
        returnValue = F("Sexauersträßle");
        break;
    }
    case 290487:
    {
        returnValue = F("Sexmähen");
        break;
    }
    case 290488:
    {
        returnValue = F("Sexter Weg");
        break;
    }
    case 290489:
    {
        returnValue = F("Seybererweg");
        break;
    }
    case 290490:
    {
        returnValue = F("Seybold Geräumt");
        break;
    }
    case 290491:
    {
        returnValue = F("Seyboldgasse");
        break;
    }
    case 290492:
    {
        returnValue = F("Seyboldsdorfer Str.");
        break;
    }
    case 290493:
    {
        returnValue = F("Seyboldstr.");
        break;
    }
    case 290494:
    {
        returnValue = F("Seyboltsdorfferstr.");
        break;
    }
    case 290495:
    {
        returnValue = F("Seybothgasse");
        break;
    }
    case 290496:
    {
        returnValue = F("Seybothweg");
        break;
    }
    case 290497:
    {
        returnValue = F("Seybruch");
        break;
    }
    case 290498:
    {
        returnValue = F("Seydaer Str.");
        break;
    }
    case 290499:
    {
        returnValue = F("Seydaer Weg");
        break;
    }
    case 290500:
    {
        returnValue = F("Seydelhofgasse");
        break;
    }
    case 290501:
    {
        returnValue = F("Seydlitzstr.");
        break;
    }
    case 290502:
    {
        returnValue = F("Seydlitzviertel");
        break;
    }
    case 290503:
    {
        returnValue = F("Seydlitzweg");
        break;
    }
    case 290504:
    {
        returnValue = F("Seydner Weg");
        break;
    }
    case 290505:
    {
        returnValue = F("Seyenberg");
        break;
    }
    case 290506:
    {
        returnValue = F("Seyenrechstr.");
        break;
    }
    case 290507:
    {
        returnValue = F("Seyenstr.");
        break;
    }
    case 290508:
    {
        returnValue = F("Seyerberg");
        break;
    }
    case 290509:
    {
        returnValue = F("Seyersweg");
        break;
    }
    case 290510:
    {
        returnValue = F("Seyferthstr.");
        break;
    }
    case 290511:
    {
        returnValue = F("Seyfriedstr.");
        break;
    }
    case 290512:
    {
        returnValue = F("Seylerstr.");
        break;
    }
    case 290513:
    {
        returnValue = F("Seyllergäßchen");
        break;
    }
    case 290514:
    {
        returnValue = F("Seyn");
        break;
    }
    case 290515:
    {
        returnValue = F("Seyren");
        break;
    }
    case 290516:
    {
        returnValue = F("Seyrerkehre");
        break;
    }
    case 290517:
    {
        returnValue = F("Seyserhof");
        break;
    }
    case 290518:
    {
        returnValue = F("Seyweilerstr.");
        break;
    }
    case 290519:
    {
        returnValue = F("Seywerdweg");
        break;
    }
    case 290520:
    {
        returnValue = F("Seßbergstr.");
        break;
    }
    case 290521:
    {
        returnValue = F("Seßgasse");
        break;
    }
    case 290522:
    {
        returnValue = F("Seßlacher Str.");
        break;
    }
    case 290523:
    {
        returnValue = F("Seßlesstr.");
        break;
    }
    case 290524:
    {
        returnValue = F("Seßmarstr.");
        break;
    }
    case 290525:
    {
        returnValue = F("Sfaxer Str.");
        break;
    }
    case 290526:
    {
        returnValue = F("Shakespeareplatz");
        break;
    }
    case 290527:
    {
        returnValue = F("Shamrockstr.");
        break;
    }
    case 290528:
    {
        returnValue = F("Shared Space Bohmte");
        break;
    }
    case 290529:
    {
        returnValue = F("Shellyweg");
        break;
    }
    case 290530:
    {
        returnValue = F("Shelterschleife");
        break;
    }
    case 290531:
    {
        returnValue = F("Sheppard Road");
        break;
    }
    case 290532:
    {
        returnValue = F("Sheringhamplatz");
        break;
    }
    case 290533:
    {
        returnValue = F("Short Uphill");
        break;
    }
    case 290534:
    {
        returnValue = F("Siabbenmoor");
        break;
    }
    case 290535:
    {
        returnValue = F("Sibachweg");
        break;
    }
    case 290536:
    {
        returnValue = F("Sibbentrup");
        break;
    }
    case 290537:
    {
        returnValue = F("Sibbentruper Str.");
        break;
    }
    case 290538:
    {
        returnValue = F("Sibbersdorfer Weg");
        break;
    }
    case 290539:
    {
        returnValue = F("Sibbinghook");
        break;
    }
    case 290540:
    {
        returnValue = F("Sibculo-Str.");
        break;
    }
    case 290541:
    {
        returnValue = F("Sibeliusstr.");
        break;
    }
    case 290542:
    {
        returnValue = F("Sibeliusweg");
        break;
    }
    case 290543:
    {
        returnValue = F("Sibertstr.");
        break;
    }
    case 290544:
    {
        returnValue = F("Sibichhauser Str.");
        break;
    }
    case 290545:
    {
        returnValue = F("Sibillenhofstr.");
        break;
    }
    case 290546:
    {
        returnValue = F("Sibillenweg");
        break;
    }
    case 290547:
    {
        returnValue = F("Sibirien");
        break;
    }
    case 290548:
    {
        returnValue = F("Sibirienweg");
        break;
    }
    case 290549:
    {
        returnValue = F("Sibrandstr.");
        break;
    }
    case 290550:
    {
        returnValue = F("Sibstiner Weg");
        break;
    }
    case 290551:
    {
        returnValue = F("Sibylla-Merian-Str.");
        break;
    }
    case 290552:
    {
        returnValue = F("Sibylla-Merian-Weg");
        break;
    }
    case 290553:
    {
        returnValue = F("Sibylla-Schwarz-Str.");
        break;
    }
    case 290554:
    {
        returnValue = F("Sibylla-Weiß-Weg");
        break;
    }
    case 290555:
    {
        returnValue = F("Sibyllastr.");
        break;
    }
    case 290556:
    {
        returnValue = F("Sibylle-Schuler-Str.");
        break;
    }
    case 290557:
    {
        returnValue = F("Sibyllengäßchen");
        break;
    }
    case 290558:
    {
        returnValue = F("Sibyllenstr.");
        break;
    }
    case 290559:
    {
        returnValue = F("Sibyllenweg");
        break;
    }
    case 290560:
    {
        returnValue = F("Sichau");
        break;
    }
    case 290561:
    {
        returnValue = F("Sichelackerweg");
        break;
    }
    case 290562:
    {
        returnValue = F("Sichelbach");
        break;
    }
    case 290563:
    {
        returnValue = F("Sichelbeinweg");
        break;
    }
    case 290564:
    {
        returnValue = F("Sichelbergstr.");
        break;
    }
    case 290565:
    {
        returnValue = F("Sichelbockstr.");
        break;
    }
    case 290566:
    {
        returnValue = F("Sichelgasse");
        break;
    }
    case 290567:
    {
        returnValue = F("Sichelhütte");
        break;
    }
    case 290568:
    {
        returnValue = F("Sichelkrumm");
        break;
    }
    case 290569:
    {
        returnValue = F("Sichelnsteiner Str.");
        break;
    }
    case 290570:
    {
        returnValue = F("Sichelnsteiner Trift");
        break;
    }
    case 290571:
    {
        returnValue = F("Sichelnsteiner Weg");
        break;
    }
    case 290572:
    {
        returnValue = F("Sichelreuther Höhe");
        break;
    }
    case 290573:
    {
        returnValue = F("Sichelreuther Str.");
        break;
    }
    case 290574:
    {
        returnValue = F("Sichelschmiedweg");
        break;
    }
    case 290575:
    {
        returnValue = F("Sichelsgasse");
        break;
    }
    case 290576:
    {
        returnValue = F("Sichelstr.");
        break;
    }
    case 290577:
    {
        returnValue = F("Sichelweg");
        break;
    }
    case 290578:
    {
        returnValue = F("Sichenhäuser Str.");
        break;
    }
    case 290579:
    {
        returnValue = F("Sichenpoint");
        break;
    }
    case 290580:
    {
        returnValue = F("Sichenrein");
        break;
    }
    case 290581:
    {
        returnValue = F("Sichenweg");
        break;
    }
    case 290582:
    {
        returnValue = F("Sichenöd");
        break;
    }
    case 290583:
    {
        returnValue = F("Sichersdorfer Str.");
        break;
    }
    case 290584:
    {
        returnValue = F("Sichersreuth");
        break;
    }
    case 290585:
    {
        returnValue = F("Sicherstr.");
        break;
    }
    case 290586:
    {
        returnValue = F("Sichert");
        break;
    }
    case 290587:
    {
        returnValue = F("Sichertshausen");
        break;
    }
    case 290588:
    {
        returnValue = F("Sichetweg");
        break;
    }
    case 290589:
    {
        returnValue = F("Sichlingerstr.");
        break;
    }
    case 290590:
    {
        returnValue = F("Sichlingweg");
        break;
    }
    case 290591:
    {
        returnValue = F("Sichtenden");
        break;
    }
    case 290592:
    {
        returnValue = F("Sichter");
        break;
    }
    case 290593:
    {
        returnValue = F("Sichter Weg");
        break;
    }
    case 290594:
    {
        returnValue = F("Sichterheidestr.");
        break;
    }
    case 290595:
    {
        returnValue = F("Sichterstr.");
        break;
    }
    case 290596:
    {
        returnValue = F("Sichtertal Weg");
        break;
    }
    case 290597:
    {
        returnValue = F("Sichterweg");
        break;
    }
    case 290598:
    {
        returnValue = F("Sichterwiese");
        break;
    }
    case 290599:
    {
        returnValue = F("Siciliastr.");
        break;
    }
    case 290600:
    {
        returnValue = F("Sick");
        break;
    }
    case 290601:
    {
        returnValue = F("Sickelgrund");
        break;
    }
    case 290602:
    {
        returnValue = F("Sickelmannskamp");
        break;
    }
    case 290603:
    {
        returnValue = F("Sickenbachstr.");
        break;
    }
    case 290604:
    {
        returnValue = F("Sickenberg");
        break;
    }
    case 290605:
    {
        returnValue = F("Sickenberger Str.");
        break;
    }
    case 290606:
    {
        returnValue = F("Sickenburg");
        break;
    }
    case 290607:
    {
        returnValue = F("Sickenbühlsteige");
        break;
    }
    case 290608:
    {
        returnValue = F("Sickenbühlweg");
        break;
    }
    case 290609:
    {
        returnValue = F("Sickendorfer Str.");
        break;
    }
    case 290610:
    {
        returnValue = F("Sickenhäuser Str.");
        break;
    }
    case 290611:
    {
        returnValue = F("Sickenhöfer Str.");
        break;
    }
    case 290612:
    {
        returnValue = F("Sickenhöfer Weg");
        break;
    }
    case 290613:
    {
        returnValue = F("Sickenhöfer-Babenhäuser Grenzschneise");
        break;
    }
    case 290614:
    {
        returnValue = F("Sickenhöfer-Nieder-Röder Weg");
        break;
    }
    case 290615:
    {
        returnValue = F("Sickenstr.");
        break;
    }
    case 290616:
    {
        returnValue = F("Sickentalweg");
        break;
    }
    case 290617:
    {
        returnValue = F("Sickenthalstr.");
        break;
    }
    case 290618:
    {
        returnValue = F("Sickenvich");
        break;
    }
    case 290619:
    {
        returnValue = F("Sickenwaldstr.");
        break;
    }
    case 290620:
    {
        returnValue = F("Sickenwiesweg");
        break;
    }
    case 290621:
    {
        returnValue = F("Sickerhook");
        break;
    }
    case 290622:
    {
        returnValue = F("Sickeroder Dorfstr.");
        break;
    }
    case 290623:
    {
        returnValue = F("Sickershäuser Str.");
        break;
    }
    case 290624:
    {
        returnValue = F("Sickershäuser Weg");
        break;
    }
    case 290625:
    {
        returnValue = F("Sickfeld");
        break;
    }
    case 290626:
    {
        returnValue = F("Sickingenstr.");
        break;
    }
    case 290627:
    {
        returnValue = F("Sickingenweg");
        break;
    }
    case 290628:
    {
        returnValue = F("Sickinger Rainweg");
        break;
    }
    case 290629:
    {
        returnValue = F("Sickinger Str.");
        break;
    }
    case 290630:
    {
        returnValue = F("Sickingergasse");
        break;
    }
    case 290631:
    {
        returnValue = F("Sickingerhöhstr.");
        break;
    }
    case 290632:
    {
        returnValue = F("Sickingerstr.");
        break;
    }
    case 290633:
    {
        returnValue = F("Sickingerweg");
        break;
    }
    case 290634:
    {
        returnValue = F("Sickinghook");
        break;
    }
    case 290635:
    {
        returnValue = F("Sickingmühler Brücke");
        break;
    }
    case 290636:
    {
        returnValue = F("Sickingmühler Str.");
        break;
    }
    case 290637:
    {
        returnValue = F("Sickingstr.");
        break;
    }
    case 290638:
    {
        returnValue = F("Sickkamp");
        break;
    }
    case 290639:
    {
        returnValue = F("Sickkampredder");
        break;
    }
    case 290640:
    {
        returnValue = F("Sicklerstr.");
        break;
    }
    case 290641:
    {
        returnValue = F("Sicklinger Str.");
        break;
    }
    case 290642:
    {
        returnValue = F("Sicklinger Weg");
        break;
    }
    case 290643:
    {
        returnValue = F("Sickstr.");
        break;
    }
    case 290644:
    {
        returnValue = F("Sickter Str.");
        break;
    }
    case 290645:
    {
        returnValue = F("Sickter Weg");
        break;
    }
    case 290646:
    {
        returnValue = F("Siddeldeich");
        break;
    }
    case 290647:
    {
        returnValue = F("Siddesser Str.");
        break;
    }
    case 290648:
    {
        returnValue = F("Siddinghauser Weg");
        break;
    }
    case 290649:
    {
        returnValue = F("Sidenbüdel");
        break;
    }
    case 290650:
    {
        returnValue = F("Sidney-Hinds-Park");
        break;
    }
    case 290651:
    {
        returnValue = F("Sidoniastr.");
        break;
    }
    case 290652:
    {
        returnValue = F("Sidonienstr.");
        break;
    }
    case 290653:
    {
        returnValue = F("Sieb Eichengrund");
        break;
    }
    case 290654:
    {
        returnValue = F("Siebe-Ostendorp-Str.");
        break;
    }
    case 290655:
    {
        returnValue = F("Siebeckeweg");
        break;
    }
    case 290656:
    {
        returnValue = F("Siebelnhofer Str.");
        break;
    }
    case 290657:
    {
        returnValue = F("Siebelsaat");
        break;
    }
    case 290658:
    {
        returnValue = F("Siebelsburger Weg");
        break;
    }
    case 290659:
    {
        returnValue = F("Siebelshörner Str.");
        break;
    }
    case 290660:
    {
        returnValue = F("Siebelstr.");
        break;
    }
    case 290661:
    {
        returnValue = F("Siebelswies");
        break;
    }
    case 290662:
    {
        returnValue = F("Siebeltskamp");
        break;
    }
    case 290663:
    {
        returnValue = F("Sieben");
        break;
    }
    case 290664:
    {
        returnValue = F("Sieben Berge");
        break;
    }
    case 290665:
    {
        returnValue = F("Sieben Breiten");
        break;
    }
    case 290666:
    {
        returnValue = F("Sieben Brüder");
        break;
    }
    case 290667:
    {
        returnValue = F("Sieben Buchen Weg");
        break;
    }
    case 290668:
    {
        returnValue = F("Sieben Eichen");
        break;
    }
    case 290669:
    {
        returnValue = F("Sieben Gasthöfe");
        break;
    }
    case 290670:
    {
        returnValue = F("Sieben Gleichen");
        break;
    }
    case 290671:
    {
        returnValue = F("Sieben Jucherten");
        break;
    }
    case 290672:
    {
        returnValue = F("Sieben Linden");
        break;
    }
    case 290673:
    {
        returnValue = F("Sieben Morgen");
        break;
    }
    case 290674:
    {
        returnValue = F("Sieben Provinzen");
        break;
    }
    case 290675:
    {
        returnValue = F("Sieben Quellen");
        break;
    }
    case 290676:
    {
        returnValue = F("Sieben Ruten");
        break;
    }
    case 290677:
    {
        returnValue = F("Sieben Stücke");
        break;
    }
    case 290678:
    {
        returnValue = F("Sieben-Bösen-Weg");
        break;
    }
    case 290679:
    {
        returnValue = F("Sieben-Eichen-Str.");
        break;
    }
    case 290680:
    {
        returnValue = F("Sieben-Eichen-Weg");
        break;
    }
    case 290681:
    {
        returnValue = F("Sieben-Fällen-Hof");
        break;
    }
    case 290682:
    {
        returnValue = F("Sieben-Höfe-Weg");
        break;
    }
    case 290683:
    {
        returnValue = F("Sieben-Hügel-Weg");
        break;
    }
    case 290684:
    {
        returnValue = F("Sieben-Kreuzle-Weg");
        break;
    }
    case 290685:
    {
        returnValue = F("Sieben-Ohren-Weg");
        break;
    }
    case 290686:
    {
        returnValue = F("Sieben-Steinhäuser-Weg");
        break;
    }
    case 290687:
    {
        returnValue = F("Sieben-Tannen-Weg");
        break;
    }
    case 290688:
    {
        returnValue = F("Sieben-Trappen-Str.");
        break;
    }
    case 290689:
    {
        returnValue = F("Siebenackern");
        break;
    }
    case 290690:
    {
        returnValue = F("Siebenackerweg");
        break;
    }
    case 290691:
    {
        returnValue = F("Siebenbacher Mühle");
        break;
    }
    case 290692:
    {
        returnValue = F("Siebenbachstr.");
        break;
    }
    case 290693:
    {
        returnValue = F("Siebenbannsteinstr.");
        break;
    }
    case 290694:
    {
        returnValue = F("Siebenbannsteinweg");
        break;
    }
    case 290695:
    {
        returnValue = F("Siebenbauernhof");
        break;
    }
    case 290696:
    {
        returnValue = F("Siebenbaumsweg");
        break;
    }
    case 290697:
    {
        returnValue = F("Siebenberg");
        break;
    }
    case 290698:
    {
        returnValue = F("Siebenberge");
        break;
    }
    case 290699:
    {
        returnValue = F("Siebenbergen");
        break;
    }
    case 290700:
    {
        returnValue = F("Siebenbergensweg");
        break;
    }
    case 290701:
    {
        returnValue = F("Siebenberger Str.");
        break;
    }
    case 290702:
    {
        returnValue = F("Siebenbergestr.");
        break;
    }
    case 290703:
    {
        returnValue = F("Siebenbergeweg");
        break;
    }
    case 290704:
    {
        returnValue = F("Siebenbergsheide");
        break;
    }
    case 290705:
    {
        returnValue = F("Siebenbergstr.");
        break;
    }
    case 290706:
    {
        returnValue = F("Siebenbergsweg");
        break;
    }
    case 290707:
    {
        returnValue = F("Siebenborn");
        break;
    }
    case 290708:
    {
        returnValue = F("Siebenborner Höhe");
        break;
    }
    case 290709:
    {
        returnValue = F("Siebenborner Str.");
        break;
    }
    case 290710:
    {
        returnValue = F("Siebenbornstr.");
        break;
    }
    case 290711:
    {
        returnValue = F("Siebenbrunnen");
        break;
    }
    case 290712:
    {
        returnValue = F("Siebenbrunnen-Weg");
        break;
    }
    case 290713:
    {
        returnValue = F("Siebenbrunnenstr.");
        break;
    }
    case 290714:
    {
        returnValue = F("Siebenbrunner Str.");
        break;
    }
    case 290715:
    {
        returnValue = F("Siebenbrunnstr.");
        break;
    }
    case 290716:
    {
        returnValue = F("Siebenbrückengasse");
        break;
    }
    case 290717:
    {
        returnValue = F("Siebenbrückenweg");
        break;
    }
    case 290718:
    {
        returnValue = F("Siebenbrückleinsgasse");
        break;
    }
    case 290719:
    {
        returnValue = F("Siebenbrüder Str.");
        break;
    }
    case 290720:
    {
        returnValue = F("Siebenbrüdergasse");
        break;
    }
    case 290721:
    {
        returnValue = F("Siebenbrüderweg");
        break;
    }
    case 290722:
    {
        returnValue = F("Siebenbuchenwasensträßchen");
        break;
    }
    case 290723:
    {
        returnValue = F("Siebenbörner");
        break;
    }
    case 290724:
    {
        returnValue = F("Siebenbürgen");
        break;
    }
    case 290725:
    {
        returnValue = F("Siebenbürgener Str.");
        break;
    }
    case 290726:
    {
        returnValue = F("Siebenbürgener Weg");
        break;
    }
    case 290727:
    {
        returnValue = F("Siebenbürgenstr.");
        break;
    }
    case 290728:
    {
        returnValue = F("Siebenbürgenweg");
        break;
    }
    case 290729:
    {
        returnValue = F("Siebenbürger Platz");
        break;
    }
    case 290730:
    {
        returnValue = F("Siebenbürger Ring");
        break;
    }
    case 290731:
    {
        returnValue = F("Siebenbürger Str.");
        break;
    }
    case 290732:
    {
        returnValue = F("Siebenbürger Weg");
        break;
    }
    case 290733:
    {
        returnValue = F("Siebenbürgergasse");
        break;
    }
    case 290734:
    {
        returnValue = F("Siebenbürgerhof");
        break;
    }
    case 290735:
    {
        returnValue = F("Siebenbürgerstr.");
        break;
    }
    case 290736:
    {
        returnValue = F("Siebenbürgerweg");
        break;
    }
    case 290737:
    {
        returnValue = F("Siebendeller Ring");
        break;
    }
    case 290738:
    {
        returnValue = F("Siebendstr.");
        break;
    }
    case 290739:
    {
        returnValue = F("Siebeneich");
        break;
    }
    case 290740:
    {
        returnValue = F("Siebeneichen");
        break;
    }
    case 290741:
    {
        returnValue = F("Siebeneichener Schloßberg");
        break;
    }
    case 290742:
    {
        returnValue = F("Siebeneichener Str.");
        break;
    }
    case 290743:
    {
        returnValue = F("Siebeneichenstr.");
        break;
    }
    case 290744:
    {
        returnValue = F("Siebeneichenweg");
        break;
    }
    case 290745:
    {
        returnValue = F("Siebeneicher Str.");
        break;
    }
    case 290746:
    {
        returnValue = F("Siebeneicherweg");
        break;
    }
    case 290747:
    {
        returnValue = F("Siebeneichhöfe");
        break;
    }
    case 290748:
    {
        returnValue = F("Siebeneicker Str.");
        break;
    }
    case 290749:
    {
        returnValue = F("Siebener Platz");
        break;
    }
    case 290750:
    {
        returnValue = F("Siebener Str.");
        break;
    }
    case 290751:
    {
        returnValue = F("Siebenerstr.");
        break;
    }
    case 290752:
    {
        returnValue = F("Siebenerweg");
        break;
    }
    case 290753:
    {
        returnValue = F("Siebengebirge");
        break;
    }
    case 290754:
    {
        returnValue = F("Siebengebirgsallee");
        break;
    }
    case 290755:
    {
        returnValue = F("Siebengebirgsblick");
        break;
    }
    case 290756:
    {
        returnValue = F("Siebengebirgsring");
        break;
    }
    case 290757:
    {
        returnValue = F("Siebengebirgsstr.");
        break;
    }
    case 290758:
    {
        returnValue = F("Siebengebirgsweg");
        break;
    }
    case 290759:
    {
        returnValue = F("Siebengründeweg");
        break;
    }
    case 290760:
    {
        returnValue = F("Siebengärten");
        break;
    }
    case 290761:
    {
        returnValue = F("Siebengüter");
        break;
    }
    case 290762:
    {
        returnValue = F("Siebengüterweg");
        break;
    }
    case 290763:
    {
        returnValue = F("Siebenhasen");
        break;
    }
    case 290764:
    {
        returnValue = F("Siebenhausen");
        break;
    }
    case 290765:
    {
        returnValue = F("Siebenhausener Str.");
        break;
    }
    case 290766:
    {
        returnValue = F("Siebenhitze");
        break;
    }
    case 290767:
    {
        returnValue = F("Siebenhitzer Str.");
        break;
    }
    case 290768:
    {
        returnValue = F("Siebenhitzer Weg");
        break;
    }
    case 290769:
    {
        returnValue = F("Siebenhufen");
        break;
    }
    case 290770:
    {
        returnValue = F("Siebenhäuser");
        break;
    }
    case 290771:
    {
        returnValue = F("Siebenhäuser Str.");
        break;
    }
    case 290772:
    {
        returnValue = F("Siebenhäuser Weg");
        break;
    }
    case 290773:
    {
        returnValue = F("Siebenhäusergasse");
        break;
    }
    case 290774:
    {
        returnValue = F("Siebenhöfen");
        break;
    }
    case 290775:
    {
        returnValue = F("Siebenhöfener Feld");
        break;
    }
    case 290776:
    {
        returnValue = F("Siebenhügelweg");
        break;
    }
    case 290777:
    {
        returnValue = F("Siebenjungfrauenblick");
        break;
    }
    case 290778:
    {
        returnValue = F("Siebenkamp");
        break;
    }
    case 290779:
    {
        returnValue = F("Siebenkippelstr.");
        break;
    }
    case 290780:
    {
        returnValue = F("Siebenklingenstr.");
        break;
    }
    case 290781:
    {
        returnValue = F("Siebenkluster");
        break;
    }
    case 290782:
    {
        returnValue = F("Siebenknie");
        break;
    }
    case 290783:
    {
        returnValue = F("Siebenkniestr.");
        break;
    }
    case 290784:
    {
        returnValue = F("Siebenkofen");
        break;
    }
    case 290785:
    {
        returnValue = F("Siebenkreuzerweg");
        break;
    }
    case 290786:
    {
        returnValue = F("Siebenkrümmenweg");
        break;
    }
    case 290787:
    {
        returnValue = F("Siebenlehner Gasse");
        break;
    }
    case 290788:
    {
        returnValue = F("Siebenlehner Weg");
        break;
    }
    case 290789:
    {
        returnValue = F("Siebenlind");
        break;
    }
    case 290790:
    {
        returnValue = F("Siebenlinden");
        break;
    }
    case 290791:
    {
        returnValue = F("Siebenlindenstr.");
        break;
    }
    case 290792:
    {
        returnValue = F("Siebenlindenweg");
        break;
    }
    case 290793:
    {
        returnValue = F("Siebenloher Weg");
        break;
    }
    case 290794:
    {
        returnValue = F("Siebenmarschweg");
        break;
    }
    case 290795:
    {
        returnValue = F("Siebenmorgen");
        break;
    }
    case 290796:
    {
        returnValue = F("Siebenmorgener Str.");
        break;
    }
    case 290797:
    {
        returnValue = F("Siebenmorgenstr.");
        break;
    }
    case 290798:
    {
        returnValue = F("Siebenmorgenweg");
        break;
    }
    case 290799:
    {
        returnValue = F("Siebenmühlenstr.");
        break;
    }
    case 290800:
    {
        returnValue = F("Siebenmühlentalstr.");
        break;
    }
    case 290801:
    {
        returnValue = F("Siebenpfeiffer-Allee");
        break;
    }
    case 290802:
    {
        returnValue = F("Siebenpfeifferstr.");
        break;
    }
    case 290803:
    {
        returnValue = F("Siebenpfeifferweg");
        break;
    }
    case 290804:
    {
        returnValue = F("Siebenquellenweg");
        break;
    }
    case 290805:
    {
        returnValue = F("Siebenscheidweg");
        break;
    }
    case 290806:
    {
        returnValue = F("Siebenschläferweg");
        break;
    }
    case 290807:
    {
        returnValue = F("Siebenschmerzenweg");
        break;
    }
    case 290808:
    {
        returnValue = F("Siebenschuss");
        break;
    }
    case 290809:
    {
        returnValue = F("Siebenschußweg");
        break;
    }
    case 290810:
    {
        returnValue = F("Siebenschächtsweg");
        break;
    }
    case 290811:
    {
        returnValue = F("Siebensee");
        break;
    }
    case 290812:
    {
        returnValue = F("Siebenspringe");
        break;
    }
    case 290813:
    {
        returnValue = F("Siebensprüngen");
        break;
    }
    case 290814:
    {
        returnValue = F("Siebenstein");
        break;
    }
    case 290815:
    {
        returnValue = F("Siebensteinhäuser Weg");
        break;
    }
    case 290816:
    {
        returnValue = F("Siebenstern");
        break;
    }
    case 290817:
    {
        returnValue = F("Siebensterner Str.");
        break;
    }
    case 290818:
    {
        returnValue = F("Siebensternstr.");
        break;
    }
    case 290819:
    {
        returnValue = F("Siebensternweg");
        break;
    }
    case 290820:
    {
        returnValue = F("Siebenstöcker");
        break;
    }
    case 290821:
    {
        returnValue = F("Siebenstücke");
        break;
    }
    case 290822:
    {
        returnValue = F("Siebenstücken");
        break;
    }
    case 290823:
    {
        returnValue = F("Siebensäurestr.");
        break;
    }
    case 290824:
    {
        returnValue = F("Siebental");
        break;
    }
    case 290825:
    {
        returnValue = F("Siebentalweg");
        break;
    }
    case 290826:
    {
        returnValue = F("Siebente Stein Schneise");
        break;
    }
    case 290827:
    {
        returnValue = F("Siebente-Stein-Schneise");
        break;
    }
    case 290828:
    {
        returnValue = F("Siebenteiche");
        break;
    }
    case 290829:
    {
        returnValue = F("Siebenteilbrücke");
        break;
    }
    case 290830:
    {
        returnValue = F("Siebentunnelweg");
        break;
    }
    case 290831:
    {
        returnValue = F("Siebenturmstr.");
        break;
    }
    case 290832:
    {
        returnValue = F("Siebentälerweg");
        break;
    }
    case 290833:
    {
        returnValue = F("Siebenviertelweg");
        break;
    }
    case 290834:
    {
        returnValue = F("Siebenwasserweg");
        break;
    }
    case 290835:
    {
        returnValue = F("Siebenweg");
        break;
    }
    case 290836:
    {
        returnValue = F("Siebenwende");
        break;
    }
    case 290837:
    {
        returnValue = F("Siebenwindenweg");
        break;
    }
    case 290838:
    {
        returnValue = F("Siebenwinkel");
        break;
    }
    case 290839:
    {
        returnValue = F("Siebenäcker");
        break;
    }
    case 290840:
    {
        returnValue = F("Siebenäckerstr.");
        break;
    }
    case 290841:
    {
        returnValue = F("Sieberallee");
        break;
    }
    case 290842:
    {
        returnValue = F("Sieberath");
        break;
    }
    case 290843:
    {
        returnValue = F("Sieberbergweg");
        break;
    }
    case 290844:
    {
        returnValue = F("Sieberdamm");
        break;
    }
    case 290845:
    {
        returnValue = F("Siebergasse");
        break;
    }
    case 290846:
    {
        returnValue = F("Siebersteinstal");
        break;
    }
    case 290847:
    {
        returnValue = F("Sieberstr.");
        break;
    }
    case 290848:
    {
        returnValue = F("Siebertsgasse");
        break;
    }
    case 290849:
    {
        returnValue = F("Siebertshof");
        break;
    }
    case 290850:
    {
        returnValue = F("Siebertshäuser Str.");
        break;
    }
    case 290851:
    {
        returnValue = F("Siebertstr.");
        break;
    }
    case 290852:
    {
        returnValue = F("Siebertweg");
        break;
    }
    case 290853:
    {
        returnValue = F("Siebertzfeld");
        break;
    }
    case 290854:
    {
        returnValue = F("Sieberweg");
        break;
    }
    case 290855:
    {
        returnValue = F("Sieberzer Str.");
        break;
    }
    case 290856:
    {
        returnValue = F("Siebestocker Str.");
        break;
    }
    case 290857:
    {
        returnValue = F("Siebestocker Weg");
        break;
    }
    case 290858:
    {
        returnValue = F("Siebestr.");
        break;
    }
    case 290859:
    {
        returnValue = F("Siebet-Attena-Str.");
        break;
    }
    case 290860:
    {
        returnValue = F("Siebetshausen");
        break;
    }
    case 290861:
    {
        returnValue = F("Siebetshauser Weg");
        break;
    }
    case 290862:
    {
        returnValue = F("Siebgrabenweg");
        break;
    }
    case 290863:
    {
        returnValue = F("Siebigeröder Str.");
        break;
    }
    case 290864:
    {
        returnValue = F("Siebigteroth");
        break;
    }
    case 290865:
    {
        returnValue = F("Siebigweg");
        break;
    }
    case 290866:
    {
        returnValue = F("Siebischwaldweg");
        break;
    }
    case 290867:
    {
        returnValue = F("Siebkenstr.");
        break;
    }
    case 290868:
    {
        returnValue = F("Siebkenweg");
        break;
    }
    case 290869:
    {
        returnValue = F("Siebleber Rasenweg");
        break;
    }
    case 290870:
    {
        returnValue = F("Siebleber Str.");
        break;
    }
    case 290871:
    {
        returnValue = F("Siebleber Wall");
        break;
    }
    case 290872:
    {
        returnValue = F("Siebleber Weg");
        break;
    }
    case 290873:
    {
        returnValue = F("Sieblerstr.");
        break;
    }
    case 290874:
    {
        returnValue = F("Sieblestr.");
        break;
    }
    case 290875:
    {
        returnValue = F("Siebmannshorster Str.");
        break;
    }
    case 290876:
    {
        returnValue = F("Siebmannstr.");
        break;
    }
    case 290877:
    {
        returnValue = F("Siebnacher Str.");
        break;
    }
    case 290878:
    {
        returnValue = F("Siebnacher Weg");
        break;
    }
    case 290879:
    {
        returnValue = F("Siebnlindenweg");
        break;
    }
    case 290880:
    {
        returnValue = F("Sieboldshäuser Kreisel");
        break;
    }
    case 290881:
    {
        returnValue = F("Sieboldshäuser Str.");
        break;
    }
    case 290882:
    {
        returnValue = F("Sieboldstr.");
        break;
    }
    case 290883:
    {
        returnValue = F("Siebrandstr.");
        break;
    }
    case 290884:
    {
        returnValue = F("Siebrechtsweg");
        break;
    }
    case 290885:
    {
        returnValue = F("Siebringsgrund");
        break;
    }
    case 290886:
    {
        returnValue = F("Sieburgstr.");
        break;
    }
    case 290887:
    {
        returnValue = F("Siebweg");
        break;
    }
    case 290888:
    {
        returnValue = F("Siebzehnerallee");
        break;
    }
    case 290889:
    {
        returnValue = F("Siebzehnerberg");
        break;
    }
    case 290890:
    {
        returnValue = F("Siechberg");
        break;
    }
    case 290891:
    {
        returnValue = F("Siechbrünnle");
        break;
    }
    case 290892:
    {
        returnValue = F("Siechen");
        break;
    }
    case 290893:
    {
        returnValue = F("Siechenackerweg");
        break;
    }
    case 290894:
    {
        returnValue = F("Siechenangerstr.");
        break;
    }
    case 290895:
    {
        returnValue = F("Siechenbachstr.");
        break;
    }
    case 290896:
    {
        returnValue = F("Siechenberg");
        break;
    }
    case 290897:
    {
        returnValue = F("Siechenbergweg");
        break;
    }
    case 290898:
    {
        returnValue = F("Siechenfeldstr.");
        break;
    }
    case 290899:
    {
        returnValue = F("Siechengang");
        break;
    }
    case 290900:
    {
        returnValue = F("Siechengasse");
        break;
    }
    case 290901:
    {
        returnValue = F("Siechengraben");
        break;
    }
    case 290902:
    {
        returnValue = F("Siechenhausweg");
        break;
    }
    case 290903:
    {
        returnValue = F("Siechenhofsweg");
        break;
    }
    case 290904:
    {
        returnValue = F("Siechenkamp");
        break;
    }
    case 290905:
    {
        returnValue = F("Siechenlach");
        break;
    }
    case 290906:
    {
        returnValue = F("Siechenrasen");
        break;
    }
    case 290907:
    {
        returnValue = F("Siechenrecke");
        break;
    }
    case 290908:
    {
        returnValue = F("Siechensteigle");
        break;
    }
    case 290909:
    {
        returnValue = F("Siechenstr.");
        break;
    }
    case 290910:
    {
        returnValue = F("Siechenwaldweg");
        break;
    }
    case 290911:
    {
        returnValue = F("Siechenweg");
        break;
    }
    case 290912:
    {
        returnValue = F("Siechenöschle");
        break;
    }
    case 290913:
    {
        returnValue = F("Siecherstr.");
        break;
    }
    case 290914:
    {
        returnValue = F("Siechfeldstr.");
        break;
    }
    case 290915:
    {
        returnValue = F("Siechgasse");
        break;
    }
    case 290916:
    {
        returnValue = F("Siechhauser Weg");
        break;
    }
    case 290917:
    {
        returnValue = F("Siechhof");
        break;
    }
    case 290918:
    {
        returnValue = F("Siechhofstr.");
        break;
    }
    case 290919:
    {
        returnValue = F("Siechstalstr.");
        break;
    }
    case 290920:
    {
        returnValue = F("Siechsteige");
        break;
    }
    case 290921:
    {
        returnValue = F("Siechweg");
        break;
    }
    case 290922:
    {
        returnValue = F("Siecke");
        break;
    }
    case 290923:
    {
        returnValue = F("Siecum");
        break;
    }
    case 290924:
    {
        returnValue = F("Siede Hattstedt");
        break;
    }
    case 290925:
    {
        returnValue = F("Siedebruch");
        break;
    }
    case 290926:
    {
        returnValue = F("Siedegarten");
        break;
    }
    case 290927:
    {
        returnValue = F("Siedelbach");
        break;
    }
    case 290928:
    {
        returnValue = F("Siedelbacher Str.");
        break;
    }
    case 290929:
    {
        returnValue = F("Siedelbachweg");
        break;
    }
    case 290930:
    {
        returnValue = F("Siedeldeich");
        break;
    }
    case 290931:
    {
        returnValue = F("Siedelhof");
        break;
    }
    case 290932:
    {
        returnValue = F("Siedelhofstr.");
        break;
    }
    case 290933:
    {
        returnValue = F("Siedelsbrunner Weg");
        break;
    }
    case 290934:
    {
        returnValue = F("Sieden");
        break;
    }
    case 290935:
    {
        returnValue = F("Siedenberg");
        break;
    }
    case 290936:
    {
        returnValue = F("Siedenberger Str.");
        break;
    }
    case 290937:
    {
        returnValue = F("Siedenbrünzower Ausbau");
        break;
    }
    case 290938:
    {
        returnValue = F("Siedenburger Str.");
        break;
    }
    case 290939:
    {
        returnValue = F("Siedenbögen");
        break;
    }
    case 290940:
    {
        returnValue = F("Siedenbüssow");
        break;
    }
    case 290941:
    {
        returnValue = F("Siedendolsleben");
        break;
    }
    case 290942:
    {
        returnValue = F("Siedendörp");
        break;
    }
    case 290943:
    {
        returnValue = F("Siedenfeld");
        break;
    }
    case 290944:
    {
        returnValue = F("Siedengasse");
        break;
    }
    case 290945:
    {
        returnValue = F("Siedengrieben");
        break;
    }
    case 290946:
    {
        returnValue = F("Siedenholzbahn");
        break;
    }
    case 290947:
    {
        returnValue = F("Siedenkamp");
        break;
    }
    case 290948:
    {
        returnValue = F("Siedenkampsweg");
        break;
    }
    case 290949:
    {
        returnValue = F("Siedenkrog");
        break;
    }
    case 290950:
    {
        returnValue = F("Siedenlangenbeck");
        break;
    }
    case 290951:
    {
        returnValue = F("Siedenmoorsdamm");
        break;
    }
    case 290952:
    {
        returnValue = F("Siedenmoorweg");
        break;
    }
    case 290953:
    {
        returnValue = F("Siedenstein");
        break;
    }
    case 290954:
    {
        returnValue = F("Siedenweg");
        break;
    }
    case 290955:
    {
        returnValue = F("Siedergasse");
        break;
    }
    case 290956:
    {
        returnValue = F("Siedersdamm");
        break;
    }
    case 290957:
    {
        returnValue = F("Siedersdorfer Platz");
        break;
    }
    case 290958:
    {
        returnValue = F("Siedersdorfer Weg");
        break;
    }
    case 290959:
    {
        returnValue = F("Siederstr.");
        break;
    }
    case 290960:
    {
        returnValue = F("Siedestr.");
        break;
    }
    case 290961:
    {
        returnValue = F("Siedewitzstr.");
        break;
    }
    case 290962:
    {
        returnValue = F("Siedichgrund");
        break;
    }
    case 290963:
    {
        returnValue = F("Siedigkopfweg");
        break;
    }
    case 290964:
    {
        returnValue = F("Siedinghausener Str.");
        break;
    }
    case 290965:
    {
        returnValue = F("Siedlenweg");
        break;
    }
    case 290966:
    {
        returnValue = F("Siedler-Ennenga-Str.");
        break;
    }
    case 290967:
    {
        returnValue = F("Siedlerallee");
        break;
    }
    case 290968:
    {
        returnValue = F("Siedlerberg");
        break;
    }
    case 290969:
    {
        returnValue = F("Siedlerbrücke");
        break;
    }
    case 290970:
    {
        returnValue = F("Siedlereck");
        break;
    }
    case 290971:
    {
        returnValue = F("Siedlergarten");
        break;
    }
    case 290972:
    {
        returnValue = F("Siedlergasse");
        break;
    }
    case 290973:
    {
        returnValue = F("Siedlergrund");
        break;
    }
    case 290974:
    {
        returnValue = F("Siedlerhang");
        break;
    }
    case 290975:
    {
        returnValue = F("Siedlerhof");
        break;
    }
    case 290976:
    {
        returnValue = F("Siedlerhof Deibel");
        break;
    }
    case 290977:
    {
        returnValue = F("Siedlerhof Erbstal");
        break;
    }
    case 290978:
    {
        returnValue = F("Siedlerhof Koch");
        break;
    }
    case 290979:
    {
        returnValue = F("Siedlerhöhe");
        break;
    }
    case 290980:
    {
        returnValue = F("Siedlerkamp");
        break;
    }
    case 290981:
    {
        returnValue = F("Siedlerpark");
        break;
    }
    case 290982:
    {
        returnValue = F("Siedlerpfad");
        break;
    }
    case 290983:
    {
        returnValue = F("Siedlerplatz");
        break;
    }
    case 290984:
    {
        returnValue = F("Siedlerrain");
        break;
    }
    case 290985:
    {
        returnValue = F("Siedlerring");
        break;
    }
    case 290986:
    {
        returnValue = F("Siedlersfreud");
        break;
    }
    case 290987:
    {
        returnValue = F("Siedlersteg");
        break;
    }
    case 290988:
    {
        returnValue = F("Siedlerstiege");
        break;
    }
    case 290989:
    {
        returnValue = F("Siedlerstr.");
        break;
    }
    case 290990:
    {
        returnValue = F("Siedlertrift");
        break;
    }
    case 290991:
    {
        returnValue = F("Siedlerweg");
        break;
    }
    case 290992:
    {
        returnValue = F("Siedlerwinkel");
        break;
    }
    case 290993:
    {
        returnValue = F("Siedlung");
        break;
    }
    case 290994:
    {
        returnValue = F("Siedlung (Mehlen)");
        break;
    }
    case 290995:
    {
        returnValue = F("Siedlung 1");
        break;
    }
    case 290996:
    {
        returnValue = F("Siedlung 2");
        break;
    }
    case 290997:
    {
        returnValue = F("Siedlung 3");
        break;
    }
    case 290998:
    {
        returnValue = F("Siedlung 4");
        break;
    }
    case 290999:
    {
        returnValue = F("Siedlung A");
        break;
    }
    case 291000:
    {
        returnValue = F("Siedlung Alte Schmiedegasse");
        break;
    }
    case 291001:
    {
        returnValue = F("Siedlung Alter Krug");
        break;
    }
    case 291002:
    {
        returnValue = F("Siedlung Am Devener Holz");
        break;
    }
    case 291003:
    {
        returnValue = F("Siedlung B");
        break;
    }
    case 291004:
    {
        returnValue = F("Siedlung Baum");
        break;
    }
    case 291005:
    {
        returnValue = F("Siedlung Bergstücken");
        break;
    }
    case 291006:
    {
        returnValue = F("Siedlung Bleiche");
        break;
    }
    case 291007:
    {
        returnValue = F("Siedlung Bruch");
        break;
    }
    case 291008:
    {
        returnValue = F("Siedlung Böhm");
        break;
    }
    case 291009:
    {
        returnValue = F("Siedlung Conrad");
        break;
    }
    case 291010:
    {
        returnValue = F("Siedlung Desching");
        break;
    }
    case 291011:
    {
        returnValue = F("Siedlung Dolgen");
        break;
    }
    case 291012:
    {
        returnValue = F("Siedlung Dörenberg");
        break;
    }
    case 291013:
    {
        returnValue = F("Siedlung Egelsberg");
        break;
    }
    case 291014:
    {
        returnValue = F("Siedlung Eilern");
        break;
    }
    case 291015:
    {
        returnValue = F("Siedlung Engelshoven");
        break;
    }
    case 291016:
    {
        returnValue = F("Siedlung Freiheit");
        break;
    }
    case 291017:
    {
        returnValue = F("Siedlung Gerlachsruh");
        break;
    }
    case 291018:
    {
        returnValue = F("Siedlung Glave");
        break;
    }
    case 291019:
    {
        returnValue = F("Siedlung Gödderz");
        break;
    }
    case 291020:
    {
        returnValue = F("Siedlung Göschwitz");
        break;
    }
    case 291021:
    {
        returnValue = F("Siedlung Hammrich");
        break;
    }
    case 291022:
    {
        returnValue = F("Siedlung Heide");
        break;
    }
    case 291023:
    {
        returnValue = F("Siedlung Heimat");
        break;
    }
    case 291024:
    {
        returnValue = F("Siedlung Heimatland");
        break;
    }
    case 291025:
    {
        returnValue = F("Siedlung Heimental");
        break;
    }
    case 291026:
    {
        returnValue = F("Siedlung Herrnburg");
        break;
    }
    case 291027:
    {
        returnValue = F("Siedlung Hochwald");
        break;
    }
    case 291028:
    {
        returnValue = F("Siedlung Holzhof");
        break;
    }
    case 291029:
    {
        returnValue = F("Siedlung Höhenluft");
        break;
    }
    case 291030:
    {
        returnValue = F("Siedlung Hünenfeld");
        break;
    }
    case 291031:
    {
        returnValue = F("Siedlung I");
        break;
    }
    case 291032:
    {
        returnValue = F("Siedlung II");
        break;
    }
    case 291033:
    {
        returnValue = F("Siedlung Kanada");
        break;
    }
    case 291034:
    {
        returnValue = F("Siedlung Kesselshain");
        break;
    }
    case 291035:
    {
        returnValue = F("Siedlung Klein Bäbelin");
        break;
    }
    case 291036:
    {
        returnValue = F("Siedlung Knippelsdorfer Weg");
        break;
    }
    case 291037:
    {
        returnValue = F("Siedlung Königshufen");
        break;
    }
    case 291038:
    {
        returnValue = F("Siedlung Lebensfreude");
        break;
    }
    case 291039:
    {
        returnValue = F("Siedlung Leinetal");
        break;
    }
    case 291040:
    {
        returnValue = F("Siedlung Lindenblatt");
        break;
    }
    case 291041:
    {
        returnValue = F("Siedlung Lindenhof");
        break;
    }
    case 291042:
    {
        returnValue = F("Siedlung Lippik");
        break;
    }
    case 291043:
    {
        returnValue = F("Siedlung Loewen");
        break;
    }
    case 291044:
    {
        returnValue = F("Siedlung Lützelhöhe");
        break;
    }
    case 291045:
    {
        returnValue = F("Siedlung Mannesmann");
        break;
    }
    case 291046:
    {
        returnValue = F("Siedlung Margarete");
        break;
    }
    case 291047:
    {
        returnValue = F("Siedlung Mitte");
        break;
    }
    case 291048:
    {
        returnValue = F("Siedlung Mittelstr.");
        break;
    }
    case 291049:
    {
        returnValue = F("Siedlung Mühlenbach");
        break;
    }
    case 291050:
    {
        returnValue = F("Siedlung Naundorf");
        break;
    }
    case 291051:
    {
        returnValue = F("Siedlung Neebarg");
        break;
    }
    case 291052:
    {
        returnValue = F("Siedlung Neraditz");
        break;
    }
    case 291053:
    {
        returnValue = F("Siedlung Neudörfel");
        break;
    }
    case 291054:
    {
        returnValue = F("Siedlung Neue Heimat");
        break;
    }
    case 291055:
    {
        returnValue = F("Siedlung Neue Zeit");
        break;
    }
    case 291056:
    {
        returnValue = F("Siedlung Neues Leben");
        break;
    }
    case 291057:
    {
        returnValue = F("Siedlung Neumühl");
        break;
    }
    case 291058:
    {
        returnValue = F("Siedlung Niederdorf");
        break;
    }
    case 291059:
    {
        returnValue = F("Siedlung Nord");
        break;
    }
    case 291060:
    {
        returnValue = F("Siedlung Oberlosa");
        break;
    }
    case 291061:
    {
        returnValue = F("Siedlung Offenhausen");
        break;
    }
    case 291062:
    {
        returnValue = F("Siedlung Ost");
        break;
    }
    case 291063:
    {
        returnValue = F("Siedlung Ostend");
        break;
    }
    case 291064:
    {
        returnValue = F("Siedlung Peukendorf");
        break;
    }
    case 291065:
    {
        returnValue = F("Siedlung Pirsting");
        break;
    }
    case 291066:
    {
        returnValue = F("Siedlung Platten");
        break;
    }
    case 291067:
    {
        returnValue = F("Siedlung Plotzschgrund");
        break;
    }
    case 291068:
    {
        returnValue = F("Siedlung Postberg");
        break;
    }
    case 291069:
    {
        returnValue = F("Siedlung Rackenbach");
        break;
    }
    case 291070:
    {
        returnValue = F("Siedlung Rascheid");
        break;
    }
    case 291071:
    {
        returnValue = F("Siedlung Rote Erde");
        break;
    }
    case 291072:
    {
        returnValue = F("Siedlung Rotes Luch");
        break;
    }
    case 291073:
    {
        returnValue = F("Siedlung Roßweiner Str.");
        break;
    }
    case 291074:
    {
        returnValue = F("Siedlung Röttgen");
        break;
    }
    case 291075:
    {
        returnValue = F("Siedlung Sankt Josef");
        break;
    }
    case 291076:
    {
        returnValue = F("Siedlung Schermützelsee");
        break;
    }
    case 291077:
    {
        returnValue = F("Siedlung Schladebach");
        break;
    }
    case 291078:
    {
        returnValue = F("Siedlung Schulz");
        break;
    }
    case 291079:
    {
        returnValue = F("Siedlung Schwaig");
        break;
    }
    case 291080:
    {
        returnValue = F("Siedlung Schwarzer Buschweg");
        break;
    }
    case 291081:
    {
        returnValue = F("Siedlung Schwegermoor");
        break;
    }
    case 291082:
    {
        returnValue = F("Siedlung Schönbrunn");
        break;
    }
    case 291083:
    {
        returnValue = F("Siedlung Sonnenblick");
        break;
    }
    case 291084:
    {
        returnValue = F("Siedlung Soonblick");
        break;
    }
    case 291085:
    {
        returnValue = F("Siedlung Sophienfelde");
        break;
    }
    case 291086:
    {
        returnValue = F("Siedlung Steenrade");
        break;
    }
    case 291087:
    {
        returnValue = F("Siedlung Süd");
        break;
    }
    case 291088:
    {
        returnValue = F("Siedlung Süd I");
        break;
    }
    case 291089:
    {
        returnValue = F("Siedlung Süd II");
        break;
    }
    case 291090:
    {
        returnValue = F("Siedlung Thomas Müntzer");
        break;
    }
    case 291091:
    {
        returnValue = F("Siedlung Untere Hauptstr.");
        break;
    }
    case 291092:
    {
        returnValue = F("Siedlung Vier Morgen");
        break;
    }
    case 291093:
    {
        returnValue = F("Siedlung Vogelsang");
        break;
    }
    case 291094:
    {
        returnValue = F("Siedlung Wahrsow");
        break;
    }
    case 291095:
    {
        returnValue = F("Siedlung Waldfrieden");
        break;
    }
    case 291096:
    {
        returnValue = F("Siedlung Weißenkirchen");
        break;
    }
    case 291097:
    {
        returnValue = F("Siedlung West");
        break;
    }
    case 291098:
    {
        returnValue = F("Siedlung Wollup");
        break;
    }
    case 291099:
    {
        returnValue = F("Siedlung a.d. Landauer Str.");
        break;
    }
    case 291100:
    {
        returnValue = F("Siedlung am Bahnhof");
        break;
    }
    case 291101:
    {
        returnValue = F("Siedlung am Berg");
        break;
    }
    case 291102:
    {
        returnValue = F("Siedlung am Friedhof");
        break;
    }
    case 291103:
    {
        returnValue = F("Siedlung am Friedrichsberg");
        break;
    }
    case 291104:
    {
        returnValue = F("Siedlung am Grund");
        break;
    }
    case 291105:
    {
        returnValue = F("Siedlung am Heeseberg");
        break;
    }
    case 291106:
    {
        returnValue = F("Siedlung am Holz");
        break;
    }
    case 291107:
    {
        returnValue = F("Siedlung am Moor");
        break;
    }
    case 291108:
    {
        returnValue = F("Siedlung am Oberbach");
        break;
    }
    case 291109:
    {
        returnValue = F("Siedlung am Schafteich");
        break;
    }
    case 291110:
    {
        returnValue = F("Siedlung am Sportplatz");
        break;
    }
    case 291111:
    {
        returnValue = F("Siedlung am Stein");
        break;
    }
    case 291112:
    {
        returnValue = F("Siedlung am Stern");
        break;
    }
    case 291113:
    {
        returnValue = F("Siedlung am Streitwald");
        break;
    }
    case 291114:
    {
        returnValue = F("Siedlung am Viehweg");
        break;
    }
    case 291115:
    {
        returnValue = F("Siedlung am Wald");
        break;
    }
    case 291116:
    {
        returnValue = F("Siedlung am Waldweg");
        break;
    }
    case 291117:
    {
        returnValue = F("Siedlung am Wanderweg");
        break;
    }
    case 291118:
    {
        returnValue = F("Siedlung am Wasserturm");
        break;
    }
    case 291119:
    {
        returnValue = F("Siedlung an der B 86");
        break;
    }
    case 291120:
    {
        returnValue = F("Siedlung an der Bahn");
        break;
    }
    case 291121:
    {
        returnValue = F("Siedlung an der Beke");
        break;
    }
    case 291122:
    {
        returnValue = F("Siedlung der Einheit");
        break;
    }
    case 291123:
    {
        returnValue = F("Siedlung der Freundschaft");
        break;
    }
    case 291124:
    {
        returnValue = F("Siedlung der Jugend");
        break;
    }
    case 291125:
    {
        returnValue = F("Siedlung des 15. Oktober");
        break;
    }
    case 291126:
    {
        returnValue = F("Siedlung des Aufbaus");
        break;
    }
    case 291127:
    {
        returnValue = F("Siedlung des Friedens");
        break;
    }
    case 291128:
    {
        returnValue = F("Siedlung im Grund");
        break;
    }
    case 291129:
    {
        returnValue = F("Siedlung links");
        break;
    }
    case 291130:
    {
        returnValue = F("Siedlung nach Oberroßla");
        break;
    }
    case 291131:
    {
        returnValue = F("Siedlung rechts");
        break;
    }
    case 291132:
    {
        returnValue = F("Siedlung unter der Lay");
        break;
    }
    case 291133:
    {
        returnValue = F("Siedlung-Anbau");
        break;
    }
    case 291134:
    {
        returnValue = F("Siedlung-Depot");
        break;
    }
    case 291135:
    {
        returnValue = F("Siedlung-Gartenstr.");
        break;
    }
    case 291136:
    {
        returnValue = F("Siedlung-Haselweg");
        break;
    }
    case 291137:
    {
        returnValue = F("Siedlung-Hauptweg");
        break;
    }
    case 291138:
    {
        returnValue = F("Siedlung-Hirschweg");
        break;
    }
    case 291139:
    {
        returnValue = F("Siedlung-Kiefernweg");
        break;
    }
    case 291140:
    {
        returnValue = F("Siedlung-Kreuzweg");
        break;
    }
    case 291141:
    {
        returnValue = F("Siedlung-Ost");
        break;
    }
    case 291142:
    {
        returnValue = F("Siedlung-West");
        break;
    }
    case 291143:
    {
        returnValue = F("Siedlungsallee");
        break;
    }
    case 291144:
    {
        returnValue = F("Siedlungsdamm");
        break;
    }
    case 291145:
    {
        returnValue = F("Siedlungsgasse");
        break;
    }
    case 291146:
    {
        returnValue = F("Siedlungsgut");
        break;
    }
    case 291147:
    {
        returnValue = F("Siedlungshof");
        break;
    }
    case 291148:
    {
        returnValue = F("Siedlungspark");
        break;
    }
    case 291149:
    {
        returnValue = F("Siedlungsplatz");
        break;
    }
    case 291150:
    {
        returnValue = F("Siedlungsring");
        break;
    }
    case 291151:
    {
        returnValue = F("Siedlungsstr.");
        break;
    }
    case 291152:
    {
        returnValue = F("Siedlungsstr. Neue Heimat");
        break;
    }
    case 291153:
    {
        returnValue = F("Siedlungstr.");
        break;
    }
    case 291154:
    {
        returnValue = F("Siedlungsweg");
        break;
    }
    case 291155:
    {
        returnValue = F("Siedmoorweg");
        break;
    }
    case 291156:
    {
        returnValue = F("Siedscheljer Heide");
        break;
    }
    case 291157:
    {
        returnValue = F("Siedweg");
        break;
    }
    case 291158:
    {
        returnValue = F("Siefen");
        break;
    }
    case 291159:
    {
        returnValue = F("Siefener Str.");
        break;
    }
    case 291160:
    {
        returnValue = F("Siefenfeldchen");
        break;
    }
    case 291161:
    {
        returnValue = F("Siefenhardt");
        break;
    }
    case 291162:
    {
        returnValue = F("Siefenhovener Str.");
        break;
    }
    case 291163:
    {
        returnValue = F("Siefenwang");
        break;
    }
    case 291164:
    {
        returnValue = F("Siefenwanger Str.");
        break;
    }
    case 291165:
    {
        returnValue = F("Siefenweg");
        break;
    }
    case 291166:
    {
        returnValue = F("Sieferfeld");
        break;
    }
    case 291167:
    {
        returnValue = F("Sieferhof");
        break;
    }
    case 291168:
    {
        returnValue = F("Sieferhofer Str.");
        break;
    }
    case 291169:
    {
        returnValue = F("Sieferkamp");
        break;
    }
    case 291170:
    {
        returnValue = F("Siefersheimer Str.");
        break;
    }
    case 291171:
    {
        returnValue = F("Siefersheimer Weg");
        break;
    }
    case 291172:
    {
        returnValue = F("Siefertsgrund");
        break;
    }
    case 291173:
    {
        returnValue = F("Siefertshof");
        break;
    }
    case 291174:
    {
        returnValue = F("Siefertsweg");
        break;
    }
    case 291175:
    {
        returnValue = F("Sieferweg");
        break;
    }
    case 291176:
    {
        returnValue = F("Siefhofener Str.");
        break;
    }
    case 291177:
    {
        returnValue = F("Siefke-Kunstreich-Str.");
        break;
    }
    case 291178:
    {
        returnValue = F("Siefstr.");
        break;
    }
    case 291179:
    {
        returnValue = F("Sieg-Lahn-Str.");
        break;
    }
    case 291180:
    {
        returnValue = F("Siegbachstr.");
        break;
    }
    case 291181:
    {
        returnValue = F("Siegberg");
        break;
    }
    case 291182:
    {
        returnValue = F("Siegbert-Zimmer-Platz");
        break;
    }
    case 291183:
    {
        returnValue = F("Siegbertstr.");
        break;
    }
    case 291184:
    {
        returnValue = F("Siegblick");
        break;
    }
    case 291185:
    {
        returnValue = F("Siegburger Str.");
        break;
    }
    case 291186:
    {
        returnValue = F("Siegburger Weg");
        break;
    }
    case 291187:
    {
        returnValue = F("Siegdamm");
        break;
    }
    case 291188:
    {
        returnValue = F("Siege Weiste");
        break;
    }
    case 291189:
    {
        returnValue = F("Siegebrede");
        break;
    }
    case 291190:
    {
        returnValue = F("Siegelauer Str.");
        break;
    }
    case 291191:
    {
        returnValue = F("Siegelbach");
        break;
    }
    case 291192:
    {
        returnValue = F("Siegelbacher Str.");
        break;
    }
    case 291193:
    {
        returnValue = F("Siegelbachstr.");
        break;
    }
    case 291194:
    {
        returnValue = F("Siegelberg");
        break;
    }
    case 291195:
    {
        returnValue = F("Siegelgasse");
        break;
    }
    case 291196:
    {
        returnValue = F("Siegelgrund");
        break;
    }
    case 291197:
    {
        returnValue = F("Siegelgrundstr.");
        break;
    }
    case 291198:
    {
        returnValue = F("Siegelhausen");
        break;
    }
    case 291199:
    {
        returnValue = F("Siegelhof");
        break;
    }
    case 291200:
    {
        returnValue = F("Siegelhofer Str.");
        break;
    }
    case 291201:
    {
        returnValue = F("Siegelhofstr.");
        break;
    }
    case 291202:
    {
        returnValue = F("Siegelhäuser Str.");
        break;
    }
    case 291203:
    {
        returnValue = F("Siegelnbusch");
        break;
    }
    case 291204:
    {
        returnValue = F("Siegelohplatz");
        break;
    }
    case 291205:
    {
        returnValue = F("Siegelsbach");
        break;
    }
    case 291206:
    {
        returnValue = F("Siegelsbacher Str.");
        break;
    }
    case 291207:
    {
        returnValue = F("Siegelsberg");
        break;
    }
    case 291208:
    {
        returnValue = F("Siegelsberger Str.");
        break;
    }
    case 291209:
    {
        returnValue = F("Siegelsdorf");
        break;
    }
    case 291210:
    {
        returnValue = F("Siegelsdorfer Str.");
        break;
    }
    case 291211:
    {
        returnValue = F("Siegelsgraben");
        break;
    }
    case 291212:
    {
        returnValue = F("Siegelsteiner Str.");
        break;
    }
    case 291213:
    {
        returnValue = F("Siegelstr.");
        break;
    }
    case 291214:
    {
        returnValue = F("Siegelweg");
        break;
    }
    case 291215:
    {
        returnValue = F("Siegenbachhaldeweg");
        break;
    }
    case 291216:
    {
        returnValue = F("Siegenbachstr.");
        break;
    }
    case 291217:
    {
        returnValue = F("Siegenbachweg");
        break;
    }
    case 291218:
    {
        returnValue = F("Siegenberg");
        break;
    }
    case 291219:
    {
        returnValue = F("Siegenbergplatz");
        break;
    }
    case 291220:
    {
        returnValue = F("Siegenbergstr.");
        break;
    }
    case 291221:
    {
        returnValue = F("Siegenborn");
        break;
    }
    case 291222:
    {
        returnValue = F("Siegenbornstr.");
        break;
    }
    case 291223:
    {
        returnValue = F("Siegenburger Ritttweg");
        break;
    }
    case 291224:
    {
        returnValue = F("Siegenburger Str.");
        break;
    }
    case 291225:
    {
        returnValue = F("Siegener Str.");
        break;
    }
    case 291226:
    {
        returnValue = F("Siegener Weg");
        break;
    }
    case 291227:
    {
        returnValue = F("Siegenhardt");
        break;
    }
    case 291228:
    {
        returnValue = F("Siegenhof");
        break;
    }
    case 291229:
    {
        returnValue = F("Siegenhofner Ring");
        break;
    }
    case 291230:
    {
        returnValue = F("Siegenkamp");
        break;
    }
    case 291231:
    {
        returnValue = F("Siegentalhöfe");
        break;
    }
    case 291232:
    {
        returnValue = F("Siegentäleweg");
        break;
    }
    case 291233:
    {
        returnValue = F("Siegenweg");
        break;
    }
    case 291234:
    {
        returnValue = F("Sieger-Köder-Weg");
        break;
    }
    case 291235:
    {
        returnValue = F("Siegerdohlweg");
        break;
    }
    case 291236:
    {
        returnValue = F("Siegerehrungsring");
        break;
    }
    case 291237:
    {
        returnValue = F("Siegerlandstr.");
        break;
    }
    case 291238:
    {
        returnValue = F("Siegermännelbrücke");
        break;
    }
    case 291239:
    {
        returnValue = F("Siegersdorf");
        break;
    }
    case 291240:
    {
        returnValue = F("Siegersdorfer Str.");
        break;
    }
    case 291241:
    {
        returnValue = F("Siegershäuser Str.");
        break;
    }
    case 291242:
    {
        returnValue = F("Siegerslebener Hauptstr.");
        break;
    }
    case 291243:
    {
        returnValue = F("Siegerslebener Lindenstr.");
        break;
    }
    case 291244:
    {
        returnValue = F("Siegerslebener Str.");
        break;
    }
    case 291245:
    {
        returnValue = F("Siegerstetten");
        break;
    }
    case 291246:
    {
        returnValue = F("Siegerstr.");
        break;
    }
    case 291247:
    {
        returnValue = F("Siegertplatz");
        break;
    }
    case 291248:
    {
        returnValue = F("Siegertsbrunner Geräumt");
        break;
    }
    case 291249:
    {
        returnValue = F("Siegertsbrunner Str.");
        break;
    }
    case 291250:
    {
        returnValue = F("Siegertsbrunner Weg");
        break;
    }
    case 291251:
    {
        returnValue = F("Siegertsbühl");
        break;
    }
    case 291252:
    {
        returnValue = F("Siegertshofen");
        break;
    }
    case 291253:
    {
        returnValue = F("Siegertshofener Str.");
        break;
    }
    case 291254:
    {
        returnValue = F("Siegertshofer Str.");
        break;
    }
    case 291255:
    {
        returnValue = F("Siegertstr.");
        break;
    }
    case 291256:
    {
        returnValue = F("Siegesbergstr.");
        break;
    }
    case 291257:
    {
        returnValue = F("Siegesstr.");
        break;
    }
    case 291258:
    {
        returnValue = F("Siegeweg");
        break;
    }
    case 291259:
    {
        returnValue = F("Siegfeldstr.");
        break;
    }
    case 291260:
    {
        returnValue = F("Siegfrid-Lenz-Weg");
        break;
    }
    case 291261:
    {
        returnValue = F("Siegfried");
        break;
    }
    case 291262:
    {
        returnValue = F("Siegfried Holzwarth Stadion");
        break;
    }
    case 291263:
    {
        returnValue = F("Siegfried-Baumann-Weg");
        break;
    }
    case 291264:
    {
        returnValue = F("Siegfried-Berger-Str.");
        break;
    }
    case 291265:
    {
        returnValue = F("Siegfried-Berger-Weg");
        break;
    }
    case 291266:
    {
        returnValue = F("Siegfried-Brücke");
        break;
    }
    case 291267:
    {
        returnValue = F("Siegfried-Czapski-Str.");
        break;
    }
    case 291268:
    {
        returnValue = F("Siegfried-Eulen-Str.");
        break;
    }
    case 291269:
    {
        returnValue = F("Siegfried-Flack-Str.");
        break;
    }
    case 291270:
    {
        returnValue = F("Siegfried-Guggenheim-Weg");
        break;
    }
    case 291271:
    {
        returnValue = F("Siegfried-Hedusch-Str.");
        break;
    }
    case 291272:
    {
        returnValue = F("Siegfried-Herz-Lohne");
        break;
    }
    case 291273:
    {
        returnValue = F("Siegfried-Hirschmann-Str.");
        break;
    }
    case 291274:
    {
        returnValue = F("Siegfried-Hofius-Str.");
        break;
    }
    case 291275:
    {
        returnValue = F("Siegfried-Huber-Str.");
        break;
    }
    case 291276:
    {
        returnValue = F("Siegfried-Jantzer-Str.");
        break;
    }
    case 291277:
    {
        returnValue = F("Siegfried-Kampf-Str.");
        break;
    }
    case 291278:
    {
        returnValue = F("Siegfried-Kleinert-Weg");
        break;
    }
    case 291279:
    {
        returnValue = F("Siegfried-Korth-Str.");
        break;
    }
    case 291280:
    {
        returnValue = F("Siegfried-Lehmann-Str.");
        break;
    }
    case 291281:
    {
        returnValue = F("Siegfried-Lenz-Ring");
        break;
    }
    case 291282:
    {
        returnValue = F("Siegfried-Lenz-Str.");
        break;
    }
    case 291283:
    {
        returnValue = F("Siegfried-Lenz-Weg");
        break;
    }
    case 291284:
    {
        returnValue = F("Siegfried-Levi-Str.");
        break;
    }
    case 291285:
    {
        returnValue = F("Siegfried-Lichtenberger-Wanderweg");
        break;
    }
    case 291286:
    {
        returnValue = F("Siegfried-Marcus-Str.");
        break;
    }
    case 291287:
    {
        returnValue = F("Siegfried-Moll-Weg");
        break;
    }
    case 291288:
    {
        returnValue = F("Siegfried-Ott-Str.");
        break;
    }
    case 291289:
    {
        returnValue = F("Siegfried-Prokop-Brücke");
        break;
    }
    case 291290:
    {
        returnValue = F("Siegfried-Rischar-Str.");
        break;
    }
    case 291291:
    {
        returnValue = F("Siegfried-Rädel-Str.");
        break;
    }
    case 291292:
    {
        returnValue = F("Siegfried-Schaal-Str.");
        break;
    }
    case 291293:
    {
        returnValue = F("Siegfried-Schell-Str.");
        break;
    }
    case 291294:
    {
        returnValue = F("Siegfried-Siems-Str.");
        break;
    }
    case 291295:
    {
        returnValue = F("Siegfried-Wagner-Allee");
        break;
    }
    case 291296:
    {
        returnValue = F("Siegfried-von-Richen-Str.");
        break;
    }
    case 291297:
    {
        returnValue = F("Siegfried-von-Vegesack-Str.");
        break;
    }
    case 291298:
    {
        returnValue = F("Siegfried-von-Westerburg Str.");
        break;
    }
    case 291299:
    {
        returnValue = F("Siegfriederöder Weg");
        break;
    }
    case 291300:
    {
        returnValue = F("Siegfriedring");
        break;
    }
    case 291301:
    {
        returnValue = F("Siegfriedsschuss");
        break;
    }
    case 291302:
    {
        returnValue = F("Siegfriedsstr.");
        break;
    }
    case 291303:
    {
        returnValue = F("Siegfriedstr.");
        break;
    }
    case 291304:
    {
        returnValue = F("Siegfriedweg");
        break;
    }
    case 291305:
    {
        returnValue = F("Sieggartenstr.");
        break;
    }
    case 291306:
    {
        returnValue = F("Sieghardtstr.");
        break;
    }
    case 291307:
    {
        returnValue = F("Sieghart-Brenner-Weg");
        break;
    }
    case 291308:
    {
        returnValue = F("Siegharting");
        break;
    }
    case 291309:
    {
        returnValue = F("Sieghartstr.");
        break;
    }
    case 291310:
    {
        returnValue = F("Sieghausstr.");
        break;
    }
    case 291311:
    {
        returnValue = F("Siegkobelstr.");
        break;
    }
    case 291312:
    {
        returnValue = F("Sieglarer Str.");
        break;
    }
    case 291313:
    {
        returnValue = F("Sieglberg");
        break;
    }
    case 291314:
    {
        returnValue = F("Sieglbrunn");
        break;
    }
    case 291315:
    {
        returnValue = F("Sieglestr.");
        break;
    }
    case 291316:
    {
        returnValue = F("Siegleweg");
        break;
    }
    case 291317:
    {
        returnValue = F("Sieglgut");
        break;
    }
    case 291318:
    {
        returnValue = F("Sieglindenstr.");
        break;
    }
    case 291319:
    {
        returnValue = F("Sieglindestr.");
        break;
    }
    case 291320:
    {
        returnValue = F("Sieglindeweg");
        break;
    }
    case 291321:
    {
        returnValue = F("Sieglindstr.");
        break;
    }
    case 291322:
    {
        returnValue = F("Sieglindweg");
        break;
    }
    case 291323:
    {
        returnValue = F("Sieglitz");
        break;
    }
    case 291324:
    {
        returnValue = F("Sieglitzer Grund");
        break;
    }
    case 291325:
    {
        returnValue = F("Sieglitzer Str.");
        break;
    }
    case 291326:
    {
        returnValue = F("Sieglitzweg");
        break;
    }
    case 291327:
    {
        returnValue = F("Sieglmühlweg");
        break;
    }
    case 291328:
    {
        returnValue = F("Sieglweg");
        break;
    }
    case 291329:
    {
        returnValue = F("Siegmannsbreite");
        break;
    }
    case 291330:
    {
        returnValue = F("Siegmannsbrunn");
        break;
    }
    case 291331:
    {
        returnValue = F("Siegmeer");
        break;
    }
    case 291332:
    {
        returnValue = F("Siegmeiers Weg");
        break;
    }
    case 291333:
    {
        returnValue = F("Siegmund-Adam-Str.");
        break;
    }
    case 291334:
    {
        returnValue = F("Siegmund-Blanckertz-Str.");
        break;
    }
    case 291335:
    {
        returnValue = F("Siegmund-Breitbart-Str.");
        break;
    }
    case 291336:
    {
        returnValue = F("Siegmund-Heichelheim-Str.");
        break;
    }
    case 291337:
    {
        returnValue = F("Siegmund-Hiepe-Str.");
        break;
    }
    case 291338:
    {
        returnValue = F("Siegmund-Loewe-Str.");
        break;
    }
    case 291339:
    {
        returnValue = F("Siegmund-Schultze-Weg");
        break;
    }
    case 291340:
    {
        returnValue = F("Siegmund-Spiegel-Platz");
        break;
    }
    case 291341:
    {
        returnValue = F("Siegmundstr.");
        break;
    }
    case 291342:
    {
        returnValue = F("Siegmundweg");
        break;
    }
    case 291343:
    {
        returnValue = F("Siegritz");
        break;
    }
    case 291344:
    {
        returnValue = F("Siegritzer Dorfstr.");
        break;
    }
    case 291345:
    {
        returnValue = F("Siegsdorf");
        break;
    }
    case 291346:
    {
        returnValue = F("Siegsdorfer Str.");
        break;
    }
    case 291347:
    {
        returnValue = F("Siegstatt");
        break;
    }
    case 291348:
    {
        returnValue = F("Siegstr.");
        break;
    }
    case 291349:
    {
        returnValue = F("Siegstätter Weg");
        break;
    }
    case 291350:
    {
        returnValue = F("Siegtalblick");
        break;
    }
    case 291351:
    {
        returnValue = F("Siegtalstr.");
        break;
    }
    case 291352:
    {
        returnValue = F("Siegufer");
        break;
    }
    case 291353:
    {
        returnValue = F("Siegulf-Guggenmos-Str.");
        break;
    }
    case 291354:
    {
        returnValue = F("Siegwaldstr.");
        break;
    }
    case 291355:
    {
        returnValue = F("Siegweg");
        break;
    }
    case 291356:
    {
        returnValue = F("Siegwiese");
        break;
    }
    case 291357:
    {
        returnValue = F("Siegwinden");
        break;
    }
    case 291358:
    {
        returnValue = F("Siegwohrstr.");
        break;
    }
    case 291359:
    {
        returnValue = F("Sieh-Dich-Für");
        break;
    }
    case 291360:
    {
        returnValue = F("Siehdichfür");
        break;
    }
    case 291361:
    {
        returnValue = F("Siehdichfürer Str.");
        break;
    }
    case 291362:
    {
        returnValue = F("Siehdichum");
        break;
    }
    case 291363:
    {
        returnValue = F("Siehen Weg");
        break;
    }
    case 291364:
    {
        returnValue = F("Siehenweg");
        break;
    }
    case 291365:
    {
        returnValue = F("Siehkamp");
        break;
    }
    case 291366:
    {
        returnValue = F("Siehrweg");
        break;
    }
    case 291367:
    {
        returnValue = F("Siek");
        break;
    }
    case 291368:
    {
        returnValue = F("Siekanger");
        break;
    }
    case 291369:
    {
        returnValue = F("Siekauenring");
        break;
    }
    case 291370:
    {
        returnValue = F("Siekbachweg");
        break;
    }
    case 291371:
    {
        returnValue = F("Siekbrede");
        break;
    }
    case 291372:
    {
        returnValue = F("Siekbusch");
        break;
    }
    case 291373:
    {
        returnValue = F("Siekenberg");
        break;
    }
    case 291374:
    {
        returnValue = F("Siekenhofstr.");
        break;
    }
    case 291375:
    {
        returnValue = F("Siekenkamp");
        break;
    }
    case 291376:
    {
        returnValue = F("Siekenkampstr.");
        break;
    }
    case 291377:
    {
        returnValue = F("Siekenweg");
        break;
    }
    case 291378:
    {
        returnValue = F("Sieker Berg");
        break;
    }
    case 291379:
    {
        returnValue = F("Sieker Landstr.");
        break;
    }
    case 291380:
    {
        returnValue = F("Sieker Lohweg");
        break;
    }
    case 291381:
    {
        returnValue = F("Sieker Str.");
        break;
    }
    case 291382:
    {
        returnValue = F("Siekertal");
        break;
    }
    case 291383:
    {
        returnValue = F("Siekestrift");
        break;
    }
    case 291384:
    {
        returnValue = F("Siekesweg");
        break;
    }
    case 291385:
    {
        returnValue = F("Siekfeld");
        break;
    }
    case 291386:
    {
        returnValue = F("Siekfeldstr.");
        break;
    }
    case 291387:
    {
        returnValue = F("Siekgasse");
        break;
    }
    case 291388:
    {
        returnValue = F("Siekhammer");
        break;
    }
    case 291389:
    {
        returnValue = F("Siekhof");
        break;
    }
    case 291390:
    {
        returnValue = F("Siekholzer Str.");
        break;
    }
    case 291391:
    {
        returnValue = F("Siekhorn");
        break;
    }
    case 291392:
    {
        returnValue = F("Siekhöhenallee");
        break;
    }
    case 291393:
    {
        returnValue = F("Sieklandstr.");
        break;
    }
    case 291394:
    {
        returnValue = F("Siekmannstr.");
        break;
    }
    case 291395:
    {
        returnValue = F("Siekmansweg");
        break;
    }
    case 291396:
    {
        returnValue = F("Siekskamp");
        break;
    }
    case 291397:
    {
        returnValue = F("Siekstr.");
        break;
    }
    case 291398:
    {
        returnValue = F("Sieksweg");
        break;
    }
    case 291399:
    {
        returnValue = F("Siekswiese");
        break;
    }
    case 291400:
    {
        returnValue = F("Siekweg");
        break;
    }
    case 291401:
    {
        returnValue = F("Siekwiese");
        break;
    }
    case 291402:
    {
        returnValue = F("Sielacker");
        break;
    }
    case 291403:
    {
        returnValue = F("Sielallee");
        break;
    }
    case 291404:
    {
        returnValue = F("Sielbeck");
        break;
    }
    case 291405:
    {
        returnValue = F("Sielbecker Landstr.");
        break;
    }
    case 291406:
    {
        returnValue = F("Sielbecker Moor");
        break;
    }
    case 291407:
    {
        returnValue = F("Sielberg");
        break;
    }
    case 291408:
    {
        returnValue = F("Sielbergweg");
        break;
    }
    case 291409:
    {
        returnValue = F("Sielbrack");
        break;
    }
    case 291410:
    {
        returnValue = F("Sielbrunnenweg");
        break;
    }
    case 291411:
    {
        returnValue = F("Sieldensweg");
        break;
    }
    case 291412:
    {
        returnValue = F("Sieleinsweg");
        break;
    }
    case 291413:
    {
        returnValue = F("Sielenbacher Str.");
        break;
    }
    case 291414:
    {
        returnValue = F("Sielener Str.");
        break;
    }
    case 291415:
    {
        returnValue = F("Sielenwangstr.");
        break;
    }
    case 291416:
    {
        returnValue = F("Sielenweg");
        break;
    }
    case 291417:
    {
        returnValue = F("Sieler Feld");
        break;
    }
    case 291418:
    {
        returnValue = F("Sieler Str.");
        break;
    }
    case 291419:
    {
        returnValue = F("Sieler Weg");
        break;
    }
    case 291420:
    {
        returnValue = F("Sielerstr.");
        break;
    }
    case 291421:
    {
        returnValue = F("Sielfeldstr.");
        break;
    }
    case 291422:
    {
        returnValue = F("Sielfennenweg");
        break;
    }
    case 291423:
    {
        returnValue = F("Sielgang");
        break;
    }
    case 291424:
    {
        returnValue = F("Sielhamm");
        break;
    }
    case 291425:
    {
        returnValue = F("Sielhammerweg");
        break;
    }
    case 291426:
    {
        returnValue = F("Sielheide");
        break;
    }
    case 291427:
    {
        returnValue = F("Sielheimer Weg");
        break;
    }
    case 291428:
    {
        returnValue = F("Sielhorster Moorweg");
        break;
    }
    case 291429:
    {
        returnValue = F("Sielhorster Str.");
        break;
    }
    case 291430:
    {
        returnValue = F("Sielhorstweg");
        break;
    }
    case 291431:
    {
        returnValue = F("Sielingsgasse");
        break;
    }
    case 291432:
    {
        returnValue = F("Sielkamp");
        break;
    }
    case 291433:
    {
        returnValue = F("Sielkate");
        break;
    }
    case 291434:
    {
        returnValue = F("Sielmann Höhenweg");
        break;
    }
    case 291435:
    {
        returnValue = F("Sielmann Höhenweg (Hin- und Rückweg)");
        break;
    }
    case 291436:
    {
        returnValue = F("Sielmann Höhenweg (Hinweg)");
        break;
    }
    case 291437:
    {
        returnValue = F("Sielmann Höhenweg (Rückweg)");
        break;
    }
    case 291438:
    {
        returnValue = F("Sielmann-Weg");
        break;
    }
    case 291439:
    {
        returnValue = F("Sielmeisterstr.");
        break;
    }
    case 291440:
    {
        returnValue = F("Sielminger Hauptstr.");
        break;
    }
    case 291441:
    {
        returnValue = F("Sielminger Str.");
        break;
    }
    case 291442:
    {
        returnValue = F("Sielmönker Kreisstr.");
        break;
    }
    case 291443:
    {
        returnValue = F("Sielmönker Weg");
        break;
    }
    case 291444:
    {
        returnValue = F("Sielsdorfer Mühle");
        break;
    }
    case 291445:
    {
        returnValue = F("Sielstr.");
        break;
    }
    case 291446:
    {
        returnValue = F("Sielsweg");
        break;
    }
    case 291447:
    {
        returnValue = F("Sieltief");
        break;
    }
    case 291448:
    {
        returnValue = F("Sieltiefskämpenweg");
        break;
    }
    case 291449:
    {
        returnValue = F("Sieltiefstr.");
        break;
    }
    case 291450:
    {
        returnValue = F("Sieltiefsweg");
        break;
    }
    case 291451:
    {
        returnValue = F("Sieltrift");
        break;
    }
    case 291452:
    {
        returnValue = F("Sielweg");
        break;
    }
    case 291453:
    {
        returnValue = F("Siem'sche Weide");
        break;
    }
    case 291454:
    {
        returnValue = F("Siemenacker");
        break;
    }
    case 291455:
    {
        returnValue = F("Siemener Str.");
        break;
    }
    case 291456:
    {
        returnValue = F("Siemenkamp");
        break;
    }
    case 291457:
    {
        returnValue = F("Siemens-Martin-Str.");
        break;
    }
    case 291458:
    {
        returnValue = F("Siemens-Ring");
        break;
    }
    case 291459:
    {
        returnValue = F("Siemensallee");
        break;
    }
    case 291460:
    {
        returnValue = F("Siemensplatz");
        break;
    }
    case 291461:
    {
        returnValue = F("Siemensring");
        break;
    }
    case 291462:
    {
        returnValue = F("Siemensstr.");
        break;
    }
    case 291463:
    {
        returnValue = F("Siemenstr.");
        break;
    }
    case 291464:
    {
        returnValue = F("Siemensweg");
        break;
    }
    case 291465:
    {
        returnValue = F("Siemenweg");
        break;
    }
    case 291466:
    {
        returnValue = F("Siemer Dorfstr.");
        break;
    }
    case 291467:
    {
        returnValue = F("Siemerkusen");
        break;
    }
    case 291468:
    {
        returnValue = F("Siemermansweg");
        break;
    }
    case 291469:
    {
        returnValue = F("Siemershausen");
        break;
    }
    case 291470:
    {
        returnValue = F("Siemersweg");
        break;
    }
    case 291471:
    {
        returnValue = F("Siemeröder Weg");
        break;
    }
    case 291472:
    {
        returnValue = F("Siemes Tannen");
        break;
    }
    case 291473:
    {
        returnValue = F("Siemesweg");
        break;
    }
    case 291474:
    {
        returnValue = F("Siemitz");
        break;
    }
    case 291475:
    {
        returnValue = F("Siemitzer Weg");
        break;
    }
    case 291476:
    {
        returnValue = F("Siemkenmühle");
        break;
    }
    case 291477:
    {
        returnValue = F("Siemon-Breu-Str.");
        break;
    }
    case 291478:
    {
        returnValue = F("Siemonstr.");
        break;
    }
    case 291479:
    {
        returnValue = F("Siemoor");
        break;
    }
    case 291480:
    {
        returnValue = F("Siems");
        break;
    }
    case 291481:
    {
        returnValue = F("Siems Twieten");
        break;
    }
    case 291482:
    {
        returnValue = F("Siemsbarg");
        break;
    }
    case 291483:
    {
        returnValue = F("Siemser Str.");
        break;
    }
    case 291484:
    {
        returnValue = F("Siemsstr.");
        break;
    }
    case 291485:
    {
        returnValue = F("Siena-Promenade");
        break;
    }
    case 291486:
    {
        returnValue = F("Sienaer Str.");
        break;
    }
    case 291487:
    {
        returnValue = F("Sienauer Str.");
        break;
    }
    case 291488:
    {
        returnValue = F("Sienbeekstr.");
        break;
    }
    case 291489:
    {
        returnValue = F("Siendorfer Weg");
        break;
    }
    case 291490:
    {
        returnValue = F("Sienebrink");
        break;
    }
    case 291491:
    {
        returnValue = F("Siener Str.");
        break;
    }
    case 291492:
    {
        returnValue = F("Sienhardtstr.");
        break;
    }
    case 291493:
    {
        returnValue = F("Sieningser Weg");
        break;
    }
    case 291494:
    {
        returnValue = F("Sienlandweg");
        break;
    }
    case 291495:
    {
        returnValue = F("Siensbacher Kandelstr.");
        break;
    }
    case 291496:
    {
        returnValue = F("Siensbacher Str.");
        break;
    }
    case 291497:
    {
        returnValue = F("Siensbacher Weg");
        break;
    }
    case 291498:
    {
        returnValue = F("Sienstr.");
        break;
    }
    case 291499:
    {
        returnValue = F("Siep");
        break;
    }
    case 291500:
    {
        returnValue = F("Siepe");
        break;
    }
    case 291501:
    {
        returnValue = F("Siepelborg");
        break;
    }
    case 291502:
    {
        returnValue = F("Siepelkamp");
        break;
    }
    case 291503:
    {
        returnValue = F("Siepen");
        break;
    }
    case 291504:
    {
        returnValue = F("Siepenbuschstr.");
        break;
    }
    case 291505:
    {
        returnValue = F("Siepener Weg");
        break;
    }
    case 291506:
    {
        returnValue = F("Siepenheide");
        break;
    }
    case 291507:
    {
        returnValue = F("Siepenhohl");
        break;
    }
    case 291508:
    {
        returnValue = F("Siepenpad");
        break;
    }
    case 291509:
    {
        returnValue = F("Siepenpfad");
        break;
    }
    case 291510:
    {
        returnValue = F("Siepenschlade");
        break;
    }
    case 291511:
    {
        returnValue = F("Siepenstr.");
        break;
    }
    case 291512:
    {
        returnValue = F("Siepenweg");
        break;
    }
    case 291513:
    {
        returnValue = F("Sieper Kirchsteig");
        break;
    }
    case 291514:
    {
        returnValue = F("Sieper Park");
        break;
    }
    case 291515:
    {
        returnValue = F("Sieper Str.");
        break;
    }
    case 291516:
    {
        returnValue = F("Sieperberg");
        break;
    }
    case 291517:
    {
        returnValue = F("Siepersbever");
        break;
    }
    case 291518:
    {
        returnValue = F("Sieperstr.");
        break;
    }
    case 291519:
    {
        returnValue = F("Sieplerstr.");
        break;
    }
    case 291520:
    {
        returnValue = F("Siepmannsnummer");
        break;
    }
    case 291521:
    {
        returnValue = F("Siercker Str.");
        break;
    }
    case 291522:
    {
        returnValue = F("Siercker Weg");
        break;
    }
    case 291523:
    {
        returnValue = F("Sierhagener Weg");
        break;
    }
    case 291524:
    {
        returnValue = F("Sieringhoeker Weg");
        break;
    }
    case 291525:
    {
        returnValue = F("Sierksdorfer Str.");
        break;
    }
    case 291526:
    {
        returnValue = F("Sierksdorfer Weg");
        break;
    }
    case 291527:
    {
        returnValue = F("Sierra Nevada Court");
        break;
    }
    case 291528:
    {
        returnValue = F("Siersburger Str.");
        break;
    }
    case 291529:
    {
        returnValue = F("Siersdorfer Str.");
        break;
    }
    case 291530:
    {
        returnValue = F("Sierslebener Str.");
        break;
    }
    case 291531:
    {
        returnValue = F("Sierslebener Weg");
        break;
    }
    case 291532:
    {
        returnValue = F("Sierstorfkamp");
        break;
    }
    case 291533:
    {
        returnValue = F("Sierstorpffstr.");
        break;
    }
    case 291534:
    {
        returnValue = F("Sierßer Str.");
        break;
    }
    case 291535:
    {
        returnValue = F("Sierßer Weg");
        break;
    }
    case 291536:
    {
        returnValue = F("Siesbachstr.");
        break;
    }
    case 291537:
    {
        returnValue = F("Sieseberg");
        break;
    }
    case 291538:
    {
        returnValue = F("Siesel");
        break;
    }
    case 291539:
    {
        returnValue = F("Sieskindstr.");
        break;
    }
    case 291540:
    {
        returnValue = F("Siesmayerstr.");
        break;
    }
    case 291541:
    {
        returnValue = F("Siessener Steige");
        break;
    }
    case 291542:
    {
        returnValue = F("Siestedde");
        break;
    }
    case 291543:
    {
        returnValue = F("Siesterstr.");
        break;
    }
    case 291544:
    {
        returnValue = F("Siethener Dorfstr.");
        break;
    }
    case 291545:
    {
        returnValue = F("Siethener Str.");
        break;
    }
    case 291546:
    {
        returnValue = F("Siethener Weg");
        break;
    }
    case 291547:
    {
        returnValue = F("Siethwende");
        break;
    }
    case 291548:
    {
        returnValue = F("Siethwender Chaussee");
        break;
    }
    case 291549:
    {
        returnValue = F("Sietower Weg");
        break;
    }
    case 291550:
    {
        returnValue = F("Sietwende");
        break;
    }
    case 291551:
    {
        returnValue = F("Sietwender Fleth");
        break;
    }
    case 291552:
    {
        returnValue = F("Sietwender Str.");
        break;
    }
    case 291553:
    {
        returnValue = F("Sietwendung");
        break;
    }
    case 291554:
    {
        returnValue = F("Sietzinger Dorfstr.");
        break;
    }
    case 291555:
    {
        returnValue = F("Sietzstr.");
        break;
    }
    case 291556:
    {
        returnValue = F("Sievekestr.");
        break;
    }
    case 291557:
    {
        returnValue = F("Sievekingstr.");
        break;
    }
    case 291558:
    {
        returnValue = F("Sievekingweg");
        break;
    }
    case 291559:
    {
        returnValue = F("Sievenicherhof");
        break;
    }
    case 291560:
    {
        returnValue = F("Siever Feld");
        break;
    }
    case 291561:
    {
        returnValue = F("Siever Weg");
        break;
    }
    case 291562:
    {
        returnValue = F("Sieverdinger Kirchweg");
        break;
    }
    case 291563:
    {
        returnValue = F("Sieverdingweg");
        break;
    }
    case 291564:
    {
        returnValue = F("Sieveringer Kirchweg");
        break;
    }
    case 291565:
    {
        returnValue = F("Sieveringsweg");
        break;
    }
    case 291566:
    {
        returnValue = F("Sieverner See");
        break;
    }
    case 291567:
    {
        returnValue = F("Sieverner Specken");
        break;
    }
    case 291568:
    {
        returnValue = F("Sieverner Str.");
        break;
    }
    case 291569:
    {
        returnValue = F("Sieverner Weg");
        break;
    }
    case 291570:
    {
        returnValue = F("Sievernicher Str.");
        break;
    }
    case 291571:
    {
        returnValue = F("Sieversbek");
        break;
    }
    case 291572:
    {
        returnValue = F("Sieversberg");
        break;
    }
    case 291573:
    {
        returnValue = F("Sieversdamm");
        break;
    }
    case 291574:
    {
        returnValue = F("Sieversdorfer Redder");
        break;
    }
    case 291575:
    {
        returnValue = F("Sieversdorfer Str.");
        break;
    }
    case 291576:
    {
        returnValue = F("Sieverser Weg");
        break;
    }
    case 291577:
    {
        returnValue = F("Sieversflether Str.");
        break;
    }
    case 291578:
    {
        returnValue = F("Sieversgrund");
        break;
    }
    case 291579:
    {
        returnValue = F("Sievershagen");
        break;
    }
    case 291580:
    {
        returnValue = F("Sievershausener Str.");
        break;
    }
    case 291581:
    {
        returnValue = F("Sievershauser Str.");
        break;
    }
    case 291582:
    {
        returnValue = F("Sievershäger Weg");
        break;
    }
    case 291583:
    {
        returnValue = F("Sievershäuser Glockenturm");
        break;
    }
    case 291584:
    {
        returnValue = F("Sievershäuser Oberdorf");
        break;
    }
    case 291585:
    {
        returnValue = F("Sievershäuser Ring");
        break;
    }
    case 291586:
    {
        returnValue = F("Sievershäuser Steimel");
        break;
    }
    case 291587:
    {
        returnValue = F("Sievershäuser Str.");
        break;
    }
    case 291588:
    {
        returnValue = F("Sievershäuser Unterdorf");
        break;
    }
    case 291589:
    {
        returnValue = F("Sievershäuser Winkel");
        break;
    }
    case 291590:
    {
        returnValue = F("Sievershüttener Str.");
        break;
    }
    case 291591:
    {
        returnValue = F("Sieversstr.");
        break;
    }
    case 291592:
    {
        returnValue = F("Sieverstedter Str.");
        break;
    }
    case 291593:
    {
        returnValue = F("Sieversweg");
        break;
    }
    case 291594:
    {
        returnValue = F("Sieverts Kamp");
        break;
    }
    case 291595:
    {
        returnValue = F("Sievertshagen");
        break;
    }
    case 291596:
    {
        returnValue = F("Sievertsstr.");
        break;
    }
    case 291597:
    {
        returnValue = F("Sievertstr.");
        break;
    }
    case 291598:
    {
        returnValue = F("Sieweckestr.");
        break;
    }
    case 291599:
    {
        returnValue = F("Sieweg");
        break;
    }
    case 291600:
    {
        returnValue = F("Siewekeweg");
        break;
    }
    case 291601:
    {
        returnValue = F("Siewert-Agsens-Wäi");
        break;
    }
    case 291602:
    {
        returnValue = F("Siezenheimer Weg");
        break;
    }
    case 291603:
    {
        returnValue = F("Sießener Fußweg");
        break;
    }
    case 291604:
    {
        returnValue = F("Sießener Str.");
        break;
    }
    case 291605:
    {
        returnValue = F("Sießer Weg");
        break;
    }
    case 291606:
    {
        returnValue = F("Sießmayrstr.");
        break;
    }
    case 291607:
    {
        returnValue = F("Sießweg");
        break;
    }
    case 291608:
    {
        returnValue = F("Siferling");
        break;
    }
    case 291609:
    {
        returnValue = F("Siffelhofener Str.");
        break;
    }
    case 291610:
    {
        returnValue = F("Siffkofen");
        break;
    }
    case 291611:
    {
        returnValue = F("Siffkofener Str.");
        break;
    }
    case 291612:
    {
        returnValue = F("Sifridiusstr.");
        break;
    }
    case 291613:
    {
        returnValue = F("Sigambrerstr.");
        break;
    }
    case 291614:
    {
        returnValue = F("Sigambrerweg");
        break;
    }
    case 291615:
    {
        returnValue = F("Sigebaldstr.");
        break;
    }
    case 291616:
    {
        returnValue = F("Sigebandstr.");
        break;
    }
    case 291617:
    {
        returnValue = F("Sigebrandstr.");
        break;
    }
    case 291618:
    {
        returnValue = F("Sigehardstr.");
        break;
    }
    case 291619:
    {
        returnValue = F("Sigelindstr.");
        break;
    }
    case 291620:
    {
        returnValue = F("Sigelstr.");
        break;
    }
    case 291621:
    {
        returnValue = F("Sigemariweg");
        break;
    }
    case 291622:
    {
        returnValue = F("Sigenaweg");
        break;
    }
    case 291623:
    {
        returnValue = F("Sigerathweg");
        break;
    }
    case 291624:
    {
        returnValue = F("Sigertstr.");
        break;
    }
    case 291625:
    {
        returnValue = F("Sigfridstr.");
        break;
    }
    case 291626:
    {
        returnValue = F("Sigge");
        break;
    }
    case 291627:
    {
        returnValue = F("Siggelkower Str.");
        break;
    }
    case 291628:
    {
        returnValue = F("Siggelkower Weg");
        break;
    }
    case 291629:
    {
        returnValue = F("Siggener Str.");
        break;
    }
    case 291630:
    {
        returnValue = F("Siggenweg");
        break;
    }
    case 291631:
    {
        returnValue = F("Siggenweiler Str.");
        break;
    }
    case 291632:
    {
        returnValue = F("Siggenweilerstr.");
        break;
    }
    case 291633:
    {
        returnValue = F("Siggermow");
        break;
    }
    case 291634:
    {
        returnValue = F("Sighartstr.");
        break;
    }
    case 291635:
    {
        returnValue = F("Sigi Steinberger Weg");
        break;
    }
    case 291636:
    {
        returnValue = F("Sigi-Lorenzer-Weg");
        break;
    }
    case 291637:
    {
        returnValue = F("Sigi-Segl-Weg");
        break;
    }
    case 291638:
    {
        returnValue = F("Sigi-Sommer-Weg");
        break;
    }
    case 291639:
    {
        returnValue = F("Sigildisstr.");
        break;
    }
    case 291640:
    {
        returnValue = F("Sigillatastr.");
        break;
    }
    case 291641:
    {
        returnValue = F("Sigillataweg");
        break;
    }
    case 291642:
    {
        returnValue = F("Sigiltrastr.");
        break;
    }
    case 291643:
    {
        returnValue = F("Sigimaresweg");
        break;
    }
    case 291644:
    {
        returnValue = F("Sigishofen");
        break;
    }
    case 291645:
    {
        returnValue = F("Sigismund-Heinrich-Str.");
        break;
    }
    case 291646:
    {
        returnValue = F("Sigismund-Lahner-Str.");
        break;
    }
    case 291647:
    {
        returnValue = F("Sigismund-von-Radecki-Weg");
        break;
    }
    case 291648:
    {
        returnValue = F("Sigismundstr.");
        break;
    }
    case 291649:
    {
        returnValue = F("Sigismundweg");
        break;
    }
    case 291650:
    {
        returnValue = F("Sigisweiler Str.");
        break;
    }
    case 291651:
    {
        returnValue = F("Sigisweiler Weg");
        break;
    }
    case 291652:
    {
        returnValue = F("Sigl");
        break;
    }
    case 291653:
    {
        returnValue = F("Siglbrunn");
        break;
    }
    case 291654:
    {
        returnValue = F("Siglershofer Str.");
        break;
    }
    case 291655:
    {
        returnValue = F("Siglfinger Str.");
        break;
    }
    case 291656:
    {
        returnValue = F("Siglhof");
        break;
    }
    case 291657:
    {
        returnValue = F("Siglinger Str.");
        break;
    }
    case 291658:
    {
        returnValue = F("Sigllechnerstr.");
        break;
    }
    case 291659:
    {
        returnValue = F("Siglweg");
        break;
    }
    case 291660:
    {
        returnValue = F("Sigmannser Weg");
        break;
    }
    case 291661:
    {
        returnValue = F("Sigmaringendorfer Str.");
        break;
    }
    case 291662:
    {
        returnValue = F("Sigmaringer Str.");
        break;
    }
    case 291663:
    {
        returnValue = F("Sigmarstr.");
        break;
    }
    case 291664:
    {
        returnValue = F("Sigmarswanger Str.");
        break;
    }
    case 291665:
    {
        returnValue = F("Sigmund-Baumgärtner-Str.");
        break;
    }
    case 291666:
    {
        returnValue = F("Sigmund-Bergmann-Str.");
        break;
    }
    case 291667:
    {
        returnValue = F("Sigmund-Ehrnthaller-Str.");
        break;
    }
    case 291668:
    {
        returnValue = F("Sigmund-Faber-Str.");
        break;
    }
    case 291669:
    {
        returnValue = F("Sigmund-Fischer-Str.");
        break;
    }
    case 291670:
    {
        returnValue = F("Sigmund-Freud-Hang");
        break;
    }
    case 291671:
    {
        returnValue = F("Sigmund-Freud-Platz");
        break;
    }
    case 291672:
    {
        returnValue = F("Sigmund-Freud-Str.");
        break;
    }
    case 291673:
    {
        returnValue = F("Sigmund-Freud-Weg");
        break;
    }
    case 291674:
    {
        returnValue = F("Sigmund-Hirsch-Platz");
        break;
    }
    case 291675:
    {
        returnValue = F("Sigmund-Jähn-Str.");
        break;
    }
    case 291676:
    {
        returnValue = F("Sigmund-Schuckert-Str.");
        break;
    }
    case 291677:
    {
        returnValue = F("Sigmund-Schwarz-Str.");
        break;
    }
    case 291678:
    {
        returnValue = F("Sigmund-Stammler-Str.");
        break;
    }
    case 291679:
    {
        returnValue = F("Sigmund-Wann-Str.");
        break;
    }
    case 291680:
    {
        returnValue = F("Sigmund-von-Puchberg-Platz");
        break;
    }
    case 291681:
    {
        returnValue = F("Sigmundplatz");
        break;
    }
    case 291682:
    {
        returnValue = F("Sigmundsgasse");
        break;
    }
    case 291683:
    {
        returnValue = F("Sigmundshaller Str.");
        break;
    }
    case 291684:
    {
        returnValue = F("Sigmundstr.");
        break;
    }
    case 291685:
    {
        returnValue = F("Sigmundt-Münch-Str.");
        break;
    }
    case 291686:
    {
        returnValue = F("Signalberg");
        break;
    }
    case 291687:
    {
        returnValue = F("Signalstr.");
        break;
    }
    case 291688:
    {
        returnValue = F("Signalweg");
        break;
    }
    case 291689:
    {
        returnValue = F("Signauer Str.");
        break;
    }
    case 291690:
    {
        returnValue = F("Sigohostr.");
        break;
    }
    case 291691:
    {
        returnValue = F("Sigolsheimer Str.");
        break;
    }
    case 291692:
    {
        returnValue = F("Sigraser Str.");
        break;
    }
    case 291693:
    {
        returnValue = F("Sigratsbold");
        break;
    }
    case 291694:
    {
        returnValue = F("Sigrid-Undset-Str.");
        break;
    }
    case 291695:
    {
        returnValue = F("Sigridstr.");
        break;
    }
    case 291696:
    {
        returnValue = F("Sigritzau");
        break;
    }
    case 291697:
    {
        returnValue = F("Sigrön");
        break;
    }
    case 291698:
    {
        returnValue = F("Siguldaer Platz");
        break;
    }
    case 291699:
    {
        returnValue = F("Sigunastr.");
        break;
    }
    case 291700:
    {
        returnValue = F("Sigurd Allee");
        break;
    }
    case 291701:
    {
        returnValue = F("Sigurd-Lange-Weg");
        break;
    }
    case 291702:
    {
        returnValue = F("Sigurd-Syversen-Weg");
        break;
    }
    case 291703:
    {
        returnValue = F("Sigurdstr.");
        break;
    }
    case 291704:
    {
        returnValue = F("Sigwartstr.");
        break;
    }
    case 291705:
    {
        returnValue = F("Sigwinweg");
        break;
    }
    case 291706:
    {
        returnValue = F("Sihistr.");
        break;
    }
    case 291707:
    {
        returnValue = F("Sihlerweg");
        break;
    }
    case 291708:
    {
        returnValue = F("Siisken Hörn");
        break;
    }
    case 291709:
    {
        returnValue = F("Sijan Way");
        break;
    }
    case 291710:
    {
        returnValue = F("Sikke");
        break;
    }
    case 291711:
    {
        returnValue = F("Sikkeackerweg");
        break;
    }
    case 291712:
    {
        returnValue = F("Sikkedal");
        break;
    }
    case 291713:
    {
        returnValue = F("Sikkeweg");
        break;
    }
    case 291714:
    {
        returnValue = F("Silachweg");
        break;
    }
    case 291715:
    {
        returnValue = F("Silahopp");
        break;
    }
    case 291716:
    {
        returnValue = F("Silbach");
        break;
    }
    case 291717:
    {
        returnValue = F("Silbachsweg");
        break;
    }
    case 291718:
    {
        returnValue = F("Silbachweg");
        break;
    }
    case 291719:
    {
        returnValue = F("Silbecker Str.");
        break;
    }
    case 291720:
    {
        returnValue = F("Silberacker");
        break;
    }
    case 291721:
    {
        returnValue = F("Silberackerstr.");
        break;
    }
    case 291722:
    {
        returnValue = F("Silberallee");
        break;
    }
    case 291723:
    {
        returnValue = F("Silberaustr.");
        break;
    }
    case 291724:
    {
        returnValue = F("Silberbach");
        break;
    }
    case 291725:
    {
        returnValue = F("Silberbacher Dorfstr.");
        break;
    }
    case 291726:
    {
        returnValue = F("Silberbacher Str.");
        break;
    }
    case 291727:
    {
        returnValue = F("Silberbachstr.");
        break;
    }
    case 291728:
    {
        returnValue = F("Silberbachtal");
        break;
    }
    case 291729:
    {
        returnValue = F("Silberbachweg");
        break;
    }
    case 291730:
    {
        returnValue = F("Silberberg");
        break;
    }
    case 291731:
    {
        returnValue = F("Silberbergbahn");
        break;
    }
    case 291732:
    {
        returnValue = F("Silberbergen");
        break;
    }
    case 291733:
    {
        returnValue = F("Silberberger Chaussee");
        break;
    }
    case 291734:
    {
        returnValue = F("Silberberger Str.");
        break;
    }
    case 291735:
    {
        returnValue = F("Silberberger Weg");
        break;
    }
    case 291736:
    {
        returnValue = F("Silberberghof");
        break;
    }
    case 291737:
    {
        returnValue = F("Silberbergstr.");
        break;
    }
    case 291738:
    {
        returnValue = F("Silberbergweg");
        break;
    }
    case 291739:
    {
        returnValue = F("Silberblick");
        break;
    }
    case 291740:
    {
        returnValue = F("Silberbornsgrund");
        break;
    }
    case 291741:
    {
        returnValue = F("Silberbornstr.");
        break;
    }
    case 291742:
    {
        returnValue = F("Silberbornweg");
        break;
    }
    case 291743:
    {
        returnValue = F("Silberbrede");
        break;
    }
    case 291744:
    {
        returnValue = F("Silberbreite");
        break;
    }
    case 291745:
    {
        returnValue = F("Silberbrunnen");
        break;
    }
    case 291746:
    {
        returnValue = F("Silberbrunnenstr.");
        break;
    }
    case 291747:
    {
        returnValue = F("Silberbrunnenweg");
        break;
    }
    case 291748:
    {
        returnValue = F("Silberbrünnchenweg");
        break;
    }
    case 291749:
    {
        returnValue = F("Silberbrünneleweg");
        break;
    }
    case 291750:
    {
        returnValue = F("Silberbrünnle");
        break;
    }
    case 291751:
    {
        returnValue = F("Silberbuck");
        break;
    }
    case 291752:
    {
        returnValue = F("Silberburgstr.");
        break;
    }
    case 291753:
    {
        returnValue = F("Silberburgweg");
        break;
    }
    case 291754:
    {
        returnValue = F("Silberbühl");
        break;
    }
    case 291755:
    {
        returnValue = F("Silberdistel");
        break;
    }
    case 291756:
    {
        returnValue = F("Silberdistel Naturlehrpfad");
        break;
    }
    case 291757:
    {
        returnValue = F("Silberdistelstr.");
        break;
    }
    case 291758:
    {
        returnValue = F("Silberdistelweg");
        break;
    }
    case 291759:
    {
        returnValue = F("Silbereckweg");
        break;
    }
    case 291760:
    {
        returnValue = F("Silbereichenweg");
        break;
    }
    case 291761:
    {
        returnValue = F("Silberfeld");
        break;
    }
    case 291762:
    {
        returnValue = F("Silberfelder Hauptstr.");
        break;
    }
    case 291763:
    {
        returnValue = F("Silberfelder Nordstr.");
        break;
    }
    case 291764:
    {
        returnValue = F("Silberfelder Waldstr.");
        break;
    }
    case 291765:
    {
        returnValue = F("Silberfeldweg");
        break;
    }
    case 291766:
    {
        returnValue = F("Silberfelsenweg");
        break;
    }
    case 291767:
    {
        returnValue = F("Silberfinderstr.");
        break;
    }
    case 291768:
    {
        returnValue = F("Silberfundstr.");
        break;
    }
    case 291769:
    {
        returnValue = F("Silberg");
        break;
    }
    case 291770:
    {
        returnValue = F("Silbergasse");
        break;
    }
    case 291771:
    {
        returnValue = F("Silberger Str.");
        break;
    }
    case 291772:
    {
        returnValue = F("Silberger Weg");
        break;
    }
    case 291773:
    {
        returnValue = F("Silbergrabenweg");
        break;
    }
    case 291774:
    {
        returnValue = F("Silbergrasweg");
        break;
    }
    case 291775:
    {
        returnValue = F("Silbergrube");
        break;
    }
    case 291776:
    {
        returnValue = F("Silbergrubenstr.");
        break;
    }
    case 291777:
    {
        returnValue = F("Silbergrubenweg");
        break;
    }
    case 291778:
    {
        returnValue = F("Silbergrund");
        break;
    }
    case 291779:
    {
        returnValue = F("Silbergrundweg");
        break;
    }
    case 291780:
    {
        returnValue = F("Silbergründle");
        break;
    }
    case 291781:
    {
        returnValue = F("Silbergstr.");
        break;
    }
    case 291782:
    {
        returnValue = F("Silbergwend");
        break;
    }
    case 291783:
    {
        returnValue = F("Silbergässchen");
        break;
    }
    case 291784:
    {
        returnValue = F("Silbergäßchen");
        break;
    }
    case 291785:
    {
        returnValue = F("Silberhalde");
        break;
    }
    case 291786:
    {
        returnValue = F("Silberhardtstr.");
        break;
    }
    case 291787:
    {
        returnValue = F("Silberhauckstr.");
        break;
    }
    case 291788:
    {
        returnValue = F("Silberhausstr.");
        break;
    }
    case 291789:
    {
        returnValue = F("Silberhof");
        break;
    }
    case 291790:
    {
        returnValue = F("Silberhofstr.");
        break;
    }
    case 291791:
    {
        returnValue = F("Silberhofweg");
        break;
    }
    case 291792:
    {
        returnValue = F("Silberhorner Weg");
        break;
    }
    case 291793:
    {
        returnValue = F("Silberhute");
        break;
    }
    case 291794:
    {
        returnValue = F("Silberhälden");
        break;
    }
    case 291795:
    {
        returnValue = F("Silberhärte");
        break;
    }
    case 291796:
    {
        returnValue = F("Silberhäuser Str.");
        break;
    }
    case 291797:
    {
        returnValue = F("Silberhölle");
        break;
    }
    case 291798:
    {
        returnValue = F("Silberhörnlestr.");
        break;
    }
    case 291799:
    {
        returnValue = F("Silberhütte");
        break;
    }
    case 291800:
    {
        returnValue = F("Silberhüttenstr.");
        break;
    }
    case 291801:
    {
        returnValue = F("Silberhüttenweg");
        break;
    }
    case 291802:
    {
        returnValue = F("Silberhütter Fußweg");
        break;
    }
    case 291803:
    {
        returnValue = F("Silberkammer");
        break;
    }
    case 291804:
    {
        returnValue = F("Silberkamp");
        break;
    }
    case 291805:
    {
        returnValue = F("Silberkaute");
        break;
    }
    case 291806:
    {
        returnValue = F("Silberkauter Hof");
        break;
    }
    case 291807:
    {
        returnValue = F("Silberkistenweg");
        break;
    }
    case 291808:
    {
        returnValue = F("Silberkopf");
        break;
    }
    case 291809:
    {
        returnValue = F("Silberkopfstr.");
        break;
    }
    case 291810:
    {
        returnValue = F("Silberkuhle");
        break;
    }
    case 291811:
    {
        returnValue = F("Silberkuhlenstr.");
        break;
    }
    case 291812:
    {
        returnValue = F("Silberkuhlenweg");
        break;
    }
    case 291813:
    {
        returnValue = F("Silberlay");
        break;
    }
    case 291814:
    {
        returnValue = F("Silberleite");
        break;
    }
    case 291815:
    {
        returnValue = F("Silberloch");
        break;
    }
    case 291816:
    {
        returnValue = F("Silberlochweg");
        break;
    }
    case 291817:
    {
        returnValue = F("Silberlöchle");
        break;
    }
    case 291818:
    {
        returnValue = F("Silbermann-Anlage");
        break;
    }
    case 291819:
    {
        returnValue = F("Silbermannstr.");
        break;
    }
    case 291820:
    {
        returnValue = F("Silbermannweg");
        break;
    }
    case 291821:
    {
        returnValue = F("Silbermoor");
        break;
    }
    case 291822:
    {
        returnValue = F("Silbermöwenweg");
        break;
    }
    case 291823:
    {
        returnValue = F("Silbermühle");
        break;
    }
    case 291824:
    {
        returnValue = F("Silbernaal");
        break;
    }
    case 291825:
    {
        returnValue = F("Silberne Bergstr.");
        break;
    }
    case 291826:
    {
        returnValue = F("Silberpappelstr.");
        break;
    }
    case 291827:
    {
        returnValue = F("Silberpappelweg");
        break;
    }
    case 291828:
    {
        returnValue = F("Silberpfad");
        break;
    }
    case 291829:
    {
        returnValue = F("Silberrankstr.");
        break;
    }
    case 291830:
    {
        returnValue = F("Silberrasen");
        break;
    }
    case 291831:
    {
        returnValue = F("Silberrose");
        break;
    }
    case 291832:
    {
        returnValue = F("Silbersand");
        break;
    }
    case 291833:
    {
        returnValue = F("Silbersandweg");
        break;
    }
    case 291834:
    {
        returnValue = F("Silbersau");
        break;
    }
    case 291835:
    {
        returnValue = F("Silbersbacher Str.");
        break;
    }
    case 291836:
    {
        returnValue = F("Silbersberg");
        break;
    }
    case 291837:
    {
        returnValue = F("Silberschmiedweg");
        break;
    }
    case 291838:
    {
        returnValue = F("Silberschwandweg");
        break;
    }
    case 291839:
    {
        returnValue = F("Silbersee");
        break;
    }
    case 291840:
    {
        returnValue = F("Silbersee Rundweg");
        break;
    }
    case 291841:
    {
        returnValue = F("Silberseestr.");
        break;
    }
    case 291842:
    {
        returnValue = F("Silbersgutweg");
        break;
    }
    case 291843:
    {
        returnValue = F("Silbershohl");
        break;
    }
    case 291844:
    {
        returnValue = F("Silbersiefen");
        break;
    }
    case 291845:
    {
        returnValue = F("Silbersteig");
        break;
    }
    case 291846:
    {
        returnValue = F("Silbersteige");
        break;
    }
    case 291847:
    {
        returnValue = F("Silbersteinweg");
        break;
    }
    case 291848:
    {
        returnValue = F("Silberstr.");
        break;
    }
    case 291849:
    {
        returnValue = F("Silberstreifen");
        break;
    }
    case 291850:
    {
        returnValue = F("Silbertal");
        break;
    }
    case 291851:
    {
        returnValue = F("Silbertalstr.");
        break;
    }
    case 291852:
    {
        returnValue = F("Silbertalweg");
        break;
    }
    case 291853:
    {
        returnValue = F("Silberteich");
        break;
    }
    case 291854:
    {
        returnValue = F("Silberteichweg");
        break;
    }
    case 291855:
    {
        returnValue = F("Silberthalstr.");
        break;
    }
    case 291856:
    {
        returnValue = F("Silbertorallee");
        break;
    }
    case 291857:
    {
        returnValue = F("Silberturm");
        break;
    }
    case 291858:
    {
        returnValue = F("Silberturmer Weg");
        break;
    }
    case 291859:
    {
        returnValue = F("Silberwaldstr.");
        break;
    }
    case 291860:
    {
        returnValue = F("Silberwaldsweg");
        break;
    }
    case 291861:
    {
        returnValue = F("Silberweg");
        break;
    }
    case 291862:
    {
        returnValue = F("Silberweidenweg");
        break;
    }
    case 291863:
    {
        returnValue = F("Silberweidestr.");
        break;
    }
    case 291864:
    {
        returnValue = F("Silberwiese");
        break;
    }
    case 291865:
    {
        returnValue = F("Silberwiesenstr.");
        break;
    }
    case 291866:
    {
        returnValue = F("Silberwiesenweg");
        break;
    }
    case 291867:
    {
        returnValue = F("Silberwäldchen");
        break;
    }
    case 291868:
    {
        returnValue = F("Silbitzer Weg");
        break;
    }
    case 291869:
    {
        returnValue = F("Silbkestr.");
        break;
    }
    case 291870:
    {
        returnValue = F("Silcher Str.");
        break;
    }
    case 291871:
    {
        returnValue = F("Silcherallee");
        break;
    }
    case 291872:
    {
        returnValue = F("Silchergasse");
        break;
    }
    case 291873:
    {
        returnValue = F("Silcherhof");
        break;
    }
    case 291874:
    {
        returnValue = F("Silcherplatz");
        break;
    }
    case 291875:
    {
        returnValue = F("Silcherring");
        break;
    }
    case 291876:
    {
        returnValue = F("Silcherstaffel");
        break;
    }
    case 291877:
    {
        returnValue = F("Silcherstr.");
        break;
    }
    case 291878:
    {
        returnValue = F("Silcherweg");
        break;
    }
    case 291879:
    {
        returnValue = F("Silcherweg I");
        break;
    }
    case 291880:
    {
        returnValue = F("Silder Moor");
        break;
    }
    case 291881:
    {
        returnValue = F("Silenz");
        break;
    }
    case 291882:
    {
        returnValue = F("Silesiusweg");
        break;
    }
    case 291883:
    {
        returnValue = F("Silge");
        break;
    }
    case 291884:
    {
        returnValue = F("Silgen Bargen");
        break;
    }
    case 291885:
    {
        returnValue = F("Silgendahl");
        break;
    }
    case 291886:
    {
        returnValue = F("Silger Weg");
        break;
    }
    case 291887:
    {
        returnValue = F("Silgeser Str.");
        break;
    }
    case 291888:
    {
        returnValue = F("Silheimer Str.");
        break;
    }
    case 291889:
    {
        returnValue = F("Silheimer Weg");
        break;
    }
    case 291890:
    {
        returnValue = F("Silhöfer Aue");
        break;
    }
    case 291891:
    {
        returnValue = F("Silhöfer Str.");
        break;
    }
    case 291892:
    {
        returnValue = F("Silhöfertorstr.");
        break;
    }
    case 291893:
    {
        returnValue = F("Siligmüllerstr.");
        break;
    }
    case 291894:
    {
        returnValue = F("Silikastr.");
        break;
    }
    case 291895:
    {
        returnValue = F("Siliusstr.");
        break;
    }
    case 291896:
    {
        returnValue = F("Silixer Hagen");
        break;
    }
    case 291897:
    {
        returnValue = F("Silixer Str.");
        break;
    }
    case 291898:
    {
        returnValue = F("Siliziumstr.");
        break;
    }
    case 291899:
    {
        returnValue = F("Silker Busch");
        break;
    }
    case 291900:
    {
        returnValue = F("Silker Weg");
        break;
    }
    case 291901:
    {
        returnValue = F("Silker Weiche");
        break;
    }
    case 291902:
    {
        returnValue = F("Silkeroder Str.");
        break;
    }
    case 291903:
    {
        returnValue = F("Sillachinger Weg");
        break;
    }
    case 291904:
    {
        returnValue = F("Sillandweg");
        break;
    }
    case 291905:
    {
        returnValue = F("Sillenbucher Str.");
        break;
    }
    case 291906:
    {
        returnValue = F("Sillenbäke");
        break;
    }
    case 291907:
    {
        returnValue = F("Sillenser Palz");
        break;
    }
    case 291908:
    {
        returnValue = F("Sillensteder Str.");
        break;
    }
    case 291909:
    {
        returnValue = F("Siller Moorweg");
        break;
    }
    case 291910:
    {
        returnValue = F("Sillerfeld");
        break;
    }
    case 291911:
    {
        returnValue = F("Sillersdorfer Str.");
        break;
    }
    case 291912:
    {
        returnValue = F("Silleruper Str.");
        break;
    }
    case 291913:
    {
        returnValue = F("Sillerweg");
        break;
    }
    case 291914:
    {
        returnValue = F("Sillerystr.");
        break;
    }
    case 291915:
    {
        returnValue = F("Sillgass");
        break;
    }
    case 291916:
    {
        returnValue = F("Silmenitz");
        break;
    }
    case 291917:
    {
        returnValue = F("Silmersdorfer Weg");
        break;
    }
    case 291918:
    {
        returnValue = F("Silnerstr.");
        break;
    }
    case 291919:
    {
        returnValue = F("Siloblick");
        break;
    }
    case 291920:
    {
        returnValue = F("Silonia-Str.");
        break;
    }
    case 291921:
    {
        returnValue = F("Silostr.");
        break;
    }
    case 291922:
    {
        returnValue = F("Siloweg");
        break;
    }
    case 291923:
    {
        returnValue = F("Silscheder Kohlenbahn");
        break;
    }
    case 291924:
    {
        returnValue = F("Silscheder Str.");
        break;
    }
    case 291925:
    {
        returnValue = F("Silstedter Str.");
        break;
    }
    case 291926:
    {
        returnValue = F("Silstedter Weg");
        break;
    }
    case 291927:
    {
        returnValue = F("Silutestr.");
        break;
    }
    case 291928:
    {
        returnValue = F("Silvaner Weg");
        break;
    }
    case 291929:
    {
        returnValue = F("Silvaner-Str.");
        break;
    }
    case 291930:
    {
        returnValue = F("Silvanergasse");
        break;
    }
    case 291931:
    {
        returnValue = F("Silvanerring");
        break;
    }
    case 291932:
    {
        returnValue = F("Silvanerstr.");
        break;
    }
    case 291933:
    {
        returnValue = F("Silvanerweg");
        break;
    }
    case 291934:
    {
        returnValue = F("Silvanusweg");
        break;
    }
    case 291935:
    {
        returnValue = F("Silvastr.");
        break;
    }
    case 291936:
    {
        returnValue = F("Silverbergstr.");
        break;
    }
    case 291937:
    {
        returnValue = F("Silverioring");
        break;
    }
    case 291938:
    {
        returnValue = F("Silvestersteig");
        break;
    }
    case 291939:
    {
        returnValue = F("Silvesterstr.");
        break;
    }
    case 291940:
    {
        returnValue = F("Silvesterweg");
        break;
    }
    case 291941:
    {
        returnValue = F("Silvestrystr.");
        break;
    }
    case 291942:
    {
        returnValue = F("Silviastr.");
        break;
    }
    case 291943:
    {
        returnValue = F("Silvitz");
        break;
    }
    case 291944:
    {
        returnValue = F("Silvrettablick");
        break;
    }
    case 291945:
    {
        returnValue = F("Silwai");
        break;
    }
    case 291946:
    {
        returnValue = F("Silwinger Str.");
        break;
    }
    case 291947:
    {
        returnValue = F("Silzener Str.");
        break;
    }
    case 291948:
    {
        returnValue = F("Silzener Weg");
        break;
    }
    case 291949:
    {
        returnValue = F("Silzengärten");
        break;
    }
    case 291950:
    {
        returnValue = F("Silzerstr.");
        break;
    }
    case 291951:
    {
        returnValue = F("Silzweg");
        break;
    }
    case 291952:
    {
        returnValue = F("Simandlweg");
        break;
    }
    case 291953:
    {
        returnValue = F("Simanowizweg");
        break;
    }
    case 291954:
    {
        returnValue = F("Simbacher Feld");
        break;
    }
    case 291955:
    {
        returnValue = F("Simbacher Str.");
        break;
    }
    case 291956:
    {
        returnValue = F("Simbachstr.");
        break;
    }
    case 291957:
    {
        returnValue = F("Simbeckstr.");
        break;
    }
    case 291958:
    {
        returnValue = F("Simböckstr.");
        break;
    }
    case 291959:
    {
        returnValue = F("Simeonstiftplatz");
        break;
    }
    case 291960:
    {
        returnValue = F("Simeonstr.");
        break;
    }
    case 291961:
    {
        returnValue = F("Simerbauernweg");
        break;
    }
    case 291962:
    {
        returnValue = F("Simeris");
        break;
    }
    case 291963:
    {
        returnValue = F("Simetsbergstr.");
        break;
    }
    case 291964:
    {
        returnValue = F("Simkesweg");
        break;
    }
    case 291965:
    {
        returnValue = F("Simlerweg");
        break;
    }
    case 291966:
    {
        returnValue = F("Simmelberger Weg");
        break;
    }
    case 291967:
    {
        returnValue = F("Simmelbergstr.");
        break;
    }
    case 291968:
    {
        returnValue = F("Simmelsbach");
        break;
    }
    case 291969:
    {
        returnValue = F("Simmelsbergstr.");
        break;
    }
    case 291970:
    {
        returnValue = F("Simmelsdorfer Str.");
        break;
    }
    case 291971:
    {
        returnValue = F("Simmelsgartenstr.");
        break;
    }
    case 291972:
    {
        returnValue = F("Simmelsrück");
        break;
    }
    case 291973:
    {
        returnValue = F("Simmelweg");
        break;
    }
    case 291974:
    {
        returnValue = F("Simmenauer Weg");
        break;
    }
    case 291975:
    {
        returnValue = F("Simmenet");
        break;
    }
    case 291976:
    {
        returnValue = F("Simmenflur");
        break;
    }
    case 291977:
    {
        returnValue = F("Simmenhäuser Weg");
        break;
    }
    case 291978:
    {
        returnValue = F("Simmerbauerweg");
        break;
    }
    case 291979:
    {
        returnValue = F("Simmerberger Str.");
        break;
    }
    case 291980:
    {
        returnValue = F("Simmererstr.");
        break;
    }
    case 291981:
    {
        returnValue = F("Simmergasse");
        break;
    }
    case 291982:
    {
        returnValue = F("Simmerhauser Str.");
        break;
    }
    case 291983:
    {
        returnValue = F("Simmerhauser Weg");
        break;
    }
    case 291984:
    {
        returnValue = F("Simmeris");
        break;
    }
    case 291985:
    {
        returnValue = F("Simmeriss");
        break;
    }
    case 291986:
    {
        returnValue = F("Simmerlberg");
        break;
    }
    case 291987:
    {
        returnValue = F("Simmerlingweg");
        break;
    }
    case 291988:
    {
        returnValue = F("Simmerlwiese");
        break;
    }
    case 291989:
    {
        returnValue = F("Simmerner Str.");
        break;
    }
    case 291990:
    {
        returnValue = F("Simmersbach");
        break;
    }
    case 291991:
    {
        returnValue = F("Simmersbacher Str.");
        break;
    }
    case 291992:
    {
        returnValue = F("Simmersbergstr.");
        break;
    }
    case 291993:
    {
        returnValue = F("Simmersbergweg");
        break;
    }
    case 291994:
    {
        returnValue = F("Simmersdorfer Str.");
        break;
    }
    case 291995:
    {
        returnValue = F("Simmersfelder Steige");
        break;
    }
    case 291996:
    {
        returnValue = F("Simmersfelder Str.");
        break;
    }
    case 291997:
    {
        returnValue = F("Simmersgasse");
        break;
    }
    case 291998:
    {
        returnValue = F("Simmershäuser Str.");
        break;
    }
    case 291999:
    {
        returnValue = F("Simmertalstr.");
        break;
    }
    case 292000:
    {
        returnValue = F("Simmerweg");
        break;
    }
    case 292001:
    {
        returnValue = F("Simmesackerstr.");
        break;
    }
    case 292002:
    {
        returnValue = F("Simmesstr.");
        break;
    }
    case 292003:
    {
        returnValue = F("Simmestr.");
        break;
    }
    case 292004:
    {
        returnValue = F("Simmesweg");
        break;
    }
    case 292005:
    {
        returnValue = F("Simmettal");
        break;
    }
    case 292006:
    {
        returnValue = F("Simmiger Höhe");
        break;
    }
    case 292007:
    {
        returnValue = F("Simmigstr.");
        break;
    }
    case 292008:
    {
        returnValue = F("Simmigweg");
        break;
    }
    case 292009:
    {
        returnValue = F("Simmisgasse");
        break;
    }
    case 292010:
    {
        returnValue = F("Simmling");
        break;
    }
    case 292011:
    {
        returnValue = F("Simmlinger Weg");
        break;
    }
    case 292012:
    {
        returnValue = F("Simmozheimer Berg");
        break;
    }
    case 292013:
    {
        returnValue = F("Simmozheimer Rainweg");
        break;
    }
    case 292014:
    {
        returnValue = F("Simmozheimer Str.");
        break;
    }
    case 292015:
    {
        returnValue = F("Simmozheimer Weg");
        break;
    }
    case 292016:
    {
        returnValue = F("Simmringen");
        break;
    }
    case 292017:
    {
        returnValue = F("Simmringer Str.");
        break;
    }
    case 292018:
    {
        returnValue = F("Simon Aicher Platz");
        break;
    }
    case 292019:
    {
        returnValue = F("Simon-Aron-Gang");
        break;
    }
    case 292020:
    {
        returnValue = F("Simon-Arzt-Str.");
        break;
    }
    case 292021:
    {
        returnValue = F("Simon-August-Str.");
        break;
    }
    case 292022:
    {
        returnValue = F("Simon-Baumann-Str.");
        break;
    }
    case 292023:
    {
        returnValue = F("Simon-Bernheimer-Weg");
        break;
    }
    case 292024:
    {
        returnValue = F("Simon-Breu-Str.");
        break;
    }
    case 292025:
    {
        returnValue = F("Simon-Bruder-Str.");
        break;
    }
    case 292026:
    {
        returnValue = F("Simon-Böck-Str.");
        break;
    }
    case 292027:
    {
        returnValue = F("Simon-Böckh-Str.");
        break;
    }
    case 292028:
    {
        returnValue = F("Simon-Cellarius-Str.");
        break;
    }
    case 292029:
    {
        returnValue = F("Simon-Dach-Platz");
        break;
    }
    case 292030:
    {
        returnValue = F("Simon-Dach-Str.");
        break;
    }
    case 292031:
    {
        returnValue = F("Simon-Diepold-Str.");
        break;
    }
    case 292032:
    {
        returnValue = F("Simon-Elsässer-Str.");
        break;
    }
    case 292033:
    {
        returnValue = F("Simon-Feilner-Weg");
        break;
    }
    case 292034:
    {
        returnValue = F("Simon-Feylner-Str.");
        break;
    }
    case 292035:
    {
        returnValue = F("Simon-Fink-Str.");
        break;
    }
    case 292036:
    {
        returnValue = F("Simon-Frühwald-Str.");
        break;
    }
    case 292037:
    {
        returnValue = F("Simon-Göring-Str.");
        break;
    }
    case 292038:
    {
        returnValue = F("Simon-Göser-Str.");
        break;
    }
    case 292039:
    {
        returnValue = F("Simon-Haune-Str.");
        break;
    }
    case 292040:
    {
        returnValue = F("Simon-Hegele-Str.");
        break;
    }
    case 292041:
    {
        returnValue = F("Simon-Heiß-Weg");
        break;
    }
    case 292042:
    {
        returnValue = F("Simon-Hirschvogel-Str.");
        break;
    }
    case 292043:
    {
        returnValue = F("Simon-Höller-Str.");
        break;
    }
    case 292044:
    {
        returnValue = F("Simon-Hörmann-Str.");
        break;
    }
    case 292045:
    {
        returnValue = F("Simon-Irschl-Str.");
        break;
    }
    case 292046:
    {
        returnValue = F("Simon-Knoch-Str.");
        break;
    }
    case 292047:
    {
        returnValue = F("Simon-Kraft-Str.");
        break;
    }
    case 292048:
    {
        returnValue = F("Simon-Levy-Str.");
        break;
    }
    case 292049:
    {
        returnValue = F("Simon-Marius-Str.");
        break;
    }
    case 292050:
    {
        returnValue = F("Simon-Mayr-Platz");
        break;
    }
    case 292051:
    {
        returnValue = F("Simon-Mayr-Str.");
        break;
    }
    case 292052:
    {
        returnValue = F("Simon-Möhringer-Str.");
        break;
    }
    case 292053:
    {
        returnValue = F("Simon-Münich-Str.");
        break;
    }
    case 292054:
    {
        returnValue = F("Simon-Ohler-Str.");
        break;
    }
    case 292055:
    {
        returnValue = F("Simon-Ohm-Str.");
        break;
    }
    case 292056:
    {
        returnValue = F("Simon-Pittner-Ring");
        break;
    }
    case 292057:
    {
        returnValue = F("Simon-Premser-Weg");
        break;
    }
    case 292058:
    {
        returnValue = F("Simon-Rabl-Str.");
        break;
    }
    case 292059:
    {
        returnValue = F("Simon-Reichlmair-Str.");
        break;
    }
    case 292060:
    {
        returnValue = F("Simon-Reichwein-Str.");
        break;
    }
    case 292061:
    {
        returnValue = F("Simon-Ring-Str.");
        break;
    }
    case 292062:
    {
        returnValue = F("Simon-Schmid-Str.");
        break;
    }
    case 292063:
    {
        returnValue = F("Simon-Schocken-Platz");
        break;
    }
    case 292064:
    {
        returnValue = F("Simon-Schwaiger-Str.");
        break;
    }
    case 292065:
    {
        returnValue = F("Simon-Schweitzer-Str.");
        break;
    }
    case 292066:
    {
        returnValue = F("Simon-Spannbrucker-Str.");
        break;
    }
    case 292067:
    {
        returnValue = F("Simon-Strasser-Weg");
        break;
    }
    case 292068:
    {
        returnValue = F("Simon-Veit-Gasse");
        break;
    }
    case 292069:
    {
        returnValue = F("Simon-Warnberger-Weg");
        break;
    }
    case 292070:
    {
        returnValue = F("Simon-Weinzürn-Str.");
        break;
    }
    case 292071:
    {
        returnValue = F("Simon-Windmeier-Weg");
        break;
    }
    case 292072:
    {
        returnValue = F("Simon-von-Utrecht-Str.");
        break;
    }
    case 292073:
    {
        returnValue = F("Simone-Ferber-Str.");
        break;
    }
    case 292074:
    {
        returnValue = F("Simone-Veil-Str.");
        break;
    }
    case 292075:
    {
        returnValue = F("Simone-de-Beauvoir-Str.");
        break;
    }
    case 292076:
    {
        returnValue = F("Simonenweg");
        break;
    }
    case 292077:
    {
        returnValue = F("Simonesweg");
        break;
    }
    case 292078:
    {
        returnValue = F("Simongasse");
        break;
    }
    case 292079:
    {
        returnValue = F("Simonisstr.");
        break;
    }
    case 292080:
    {
        returnValue = F("Simoniusstr.");
        break;
    }
    case 292081:
    {
        returnValue = F("Simons Wiese");
        break;
    }
    case 292082:
    {
        returnValue = F("Simonsberg");
        break;
    }
    case 292083:
    {
        returnValue = F("Simonsberger Str.");
        break;
    }
    case 292084:
    {
        returnValue = F("Simonsberger Weg");
        break;
    }
    case 292085:
    {
        returnValue = F("Simonsbergweg");
        break;
    }
    case 292086:
    {
        returnValue = F("Simonsbrander Weg");
        break;
    }
    case 292087:
    {
        returnValue = F("Simonsbühnd");
        break;
    }
    case 292088:
    {
        returnValue = F("Simonsgasse");
        break;
    }
    case 292089:
    {
        returnValue = F("Simonshof");
        break;
    }
    case 292090:
    {
        returnValue = F("Simonshofer Str.");
        break;
    }
    case 292091:
    {
        returnValue = F("Simonshofweg");
        break;
    }
    case 292092:
    {
        returnValue = F("Simonshöhe");
        break;
    }
    case 292093:
    {
        returnValue = F("Simonsjorgenhofweg");
        break;
    }
    case 292094:
    {
        returnValue = F("Simonskall");
        break;
    }
    case 292095:
    {
        returnValue = F("Simonskaller Str.");
        break;
    }
    case 292096:
    {
        returnValue = F("Simonslochweg");
        break;
    }
    case 292097:
    {
        returnValue = F("Simonspad");
        break;
    }
    case 292098:
    {
        returnValue = F("Simonspike");
        break;
    }
    case 292099:
    {
        returnValue = F("Simonsplatz");
        break;
    }
    case 292100:
    {
        returnValue = F("Simonsströtken");
        break;
    }
    case 292101:
    {
        returnValue = F("Simonstalweg");
        break;
    }
    case 292102:
    {
        returnValue = F("Simonstr.");
        break;
    }
    case 292103:
    {
        returnValue = F("Simonsweg");
        break;
    }
    case 292104:
    {
        returnValue = F("Simonswiese");
        break;
    }
    case 292105:
    {
        returnValue = F("Simonswinkel");
        break;
    }
    case 292106:
    {
        returnValue = F("Simonswolder Weg");
        break;
    }
    case 292107:
    {
        returnValue = F("Simonswälder Str.");
        break;
    }
    case 292108:
    {
        returnValue = F("Simonsöder Allee");
        break;
    }
    case 292109:
    {
        returnValue = F("Simonsöder Anger");
        break;
    }
    case 292110:
    {
        returnValue = F("Simontalgasse");
        break;
    }
    case 292111:
    {
        returnValue = F("Simonweg");
        break;
    }
    case 292112:
    {
        returnValue = F("Simpelvelder Str.");
        break;
    }
    case 292113:
    {
        returnValue = F("Simperetsweg");
        break;
    }
    case 292114:
    {
        returnValue = F("Simpert-Kraemer-Str.");
        break;
    }
    case 292115:
    {
        returnValue = F("Simpert-Kramer-Str.");
        break;
    }
    case 292116:
    {
        returnValue = F("Simpertstr.");
        break;
    }
    case 292117:
    {
        returnValue = F("Simpertweg");
        break;
    }
    case 292118:
    {
        returnValue = F("Simplicissimusstr.");
        break;
    }
    case 292119:
    {
        returnValue = F("Simprecht-Lenk-Gasse");
        break;
    }
    case 292120:
    {
        returnValue = F("Simprechtshäuser Str.");
        break;
    }
    case 292121:
    {
        returnValue = F("Simriweg");
        break;
    }
    case 292122:
    {
        returnValue = F("Simrockstr.");
        break;
    }
    case 292123:
    {
        returnValue = F("Simrockweg");
        break;
    }
    case 292124:
    {
        returnValue = F("Simrodstr.");
        break;
    }
    case 292125:
    {
        returnValue = F("Simsa-Str.");
        break;
    }
    case 292126:
    {
        returnValue = F("Simseestr.");
        break;
    }
    case 292127:
    {
        returnValue = F("Simselwitzer Str.");
        break;
    }
    case 292128:
    {
        returnValue = F("Simsenriedweg");
        break;
    }
    case 292129:
    {
        returnValue = F("Simser Weg");
        break;
    }
    case 292130:
    {
        returnValue = F("Simseweg");
        break;
    }
    case 292131:
    {
        returnValue = F("Simsgasse");
        break;
    }
    case 292132:
    {
        returnValue = F("Simsheimer Weg");
        break;
    }
    case 292133:
    {
        returnValue = F("Simsongasse");
        break;
    }
    case 292134:
    {
        returnValue = F("Simsonsweg");
        break;
    }
    case 292135:
    {
        returnValue = F("Simsseestr.");
        break;
    }
    case 292136:
    {
        returnValue = F("Simsseeweg");
        break;
    }
    case 292137:
    {
        returnValue = F("Simter Str.");
        break;
    }
    case 292138:
    {
        returnValue = F("Simtshäuser Str.");
        break;
    }
    case 292139:
    {
        returnValue = F("Sina-Kinkelin-Platz");
        break;
    }
    case 292140:
    {
        returnValue = F("Sinabronner Str.");
        break;
    }
    case 292141:
    {
        returnValue = F("Sinabronner Weg");
        break;
    }
    case 292142:
    {
        returnValue = F("Sinai");
        break;
    }
    case 292143:
    {
        returnValue = F("Sinatengrün");
        break;
    }
    case 292144:
    {
        returnValue = F("Sinaweg");
        break;
    }
    case 292145:
    {
        returnValue = F("Sindelbachstr.");
        break;
    }
    case 292146:
    {
        returnValue = F("Sindeldorfer Str.");
        break;
    }
    case 292147:
    {
        returnValue = F("Sindelfinger Spitzweg");
        break;
    }
    case 292148:
    {
        returnValue = F("Sindelfinger Str.");
        break;
    }
    case 292149:
    {
        returnValue = F("Sindelfinger Weg");
        break;
    }
    case 292150:
    {
        returnValue = F("Sindelfingerallee");
        break;
    }
    case 292151:
    {
        returnValue = F("Sindelsdorfer Str.");
        break;
    }
    case 292152:
    {
        returnValue = F("Sindeltalstr.");
        break;
    }
    case 292153:
    {
        returnValue = F("Sindelwiese");
        break;
    }
    case 292154:
    {
        returnValue = F("Sinderhauf");
        break;
    }
    case 292155:
    {
        returnValue = F("Sinderlach");
        break;
    }
    case 292156:
    {
        returnValue = F("Sindersfelder Str.");
        break;
    }
    case 292157:
    {
        returnValue = F("Sindlbacher Hauptstr.");
        break;
    }
    case 292158:
    {
        returnValue = F("Sindlbacher Str.");
        break;
    }
    case 292159:
    {
        returnValue = F("Sindlinger Steig");
        break;
    }
    case 292160:
    {
        returnValue = F("Sindlinger Str.");
        break;
    }
    case 292161:
    {
        returnValue = F("Sindlinger Weg");
        break;
    }
    case 292162:
    {
        returnValue = F("Sindolsheimer Str.");
        break;
    }
    case 292163:
    {
        returnValue = F("Sindolsheimer Weg");
        break;
    }
    case 292164:
    {
        returnValue = F("Sindorfer Mühle");
        break;
    }
    case 292165:
    {
        returnValue = F("Sindorfer Str.");
        break;
    }
    case 292166:
    {
        returnValue = F("Sindringer Str.");
        break;
    }
    case 292167:
    {
        returnValue = F("Sindringer Weg");
        break;
    }
    case 292168:
    {
        returnValue = F("Singberg-Park");
        break;
    }
    case 292169:
    {
        returnValue = F("Singel");
        break;
    }
    case 292170:
    {
        returnValue = F("Singelborner Str.");
        break;
    }
    case 292171:
    {
        returnValue = F("Singelkamp");
        break;
    }
    case 292172:
    {
        returnValue = F("Singeltrail");
        break;
    }
    case 292173:
    {
        returnValue = F("Singenberg");
        break;
    }
    case 292174:
    {
        returnValue = F("Singendonkskamp");
        break;
    }
    case 292175:
    {
        returnValue = F("Singener Str.");
        break;
    }
    case 292176:
    {
        returnValue = F("Singener Weg");
        break;
    }
    case 292177:
    {
        returnValue = F("Singer Bergblick");
        break;
    }
    case 292178:
    {
        returnValue = F("Singer Str.");
        break;
    }
    case 292179:
    {
        returnValue = F("Singer-Meisel-Str.");
        break;
    }
    case 292180:
    {
        returnValue = F("Singeranger");
        break;
    }
    case 292181:
    {
        returnValue = F("Singerbachallee");
        break;
    }
    case 292182:
    {
        returnValue = F("Singerberger Hammer");
        break;
    }
    case 292183:
    {
        returnValue = F("Singerbrink");
        break;
    }
    case 292184:
    {
        returnValue = F("Singerbrinkstr.");
        break;
    }
    case 292185:
    {
        returnValue = F("Singergartenweg");
        break;
    }
    case 292186:
    {
        returnValue = F("Singernstr.");
        break;
    }
    case 292187:
    {
        returnValue = F("Singernweg");
        break;
    }
    case 292188:
    {
        returnValue = F("Singershölzlein");
        break;
    }
    case 292189:
    {
        returnValue = F("Singerstr.");
        break;
    }
    case 292190:
    {
        returnValue = F("Singerthalweg");
        break;
    }
    case 292191:
    {
        returnValue = F("Singerweg");
        break;
    }
    case 292192:
    {
        returnValue = F("Singgasse");
        break;
    }
    case 292193:
    {
        returnValue = F("Singgäßchen");
        break;
    }
    case 292194:
    {
        returnValue = F("Single Rider");
        break;
    }
    case 292195:
    {
        returnValue = F("Single Trail");
        break;
    }
    case 292196:
    {
        returnValue = F("Single-Trail");
        break;
    }
    case 292197:
    {
        returnValue = F("Singlestr.");
        break;
    }
    case 292198:
    {
        returnValue = F("Singletrack");
        break;
    }
    case 292199:
    {
        returnValue = F("Singletrail");
        break;
    }
    case 292200:
    {
        returnValue = F("Singletrail Crossduathlon");
        break;
    }
    case 292201:
    {
        returnValue = F("Singliser Str.");
        break;
    }
    case 292202:
    {
        returnValue = F("Singoldanger");
        break;
    }
    case 292203:
    {
        returnValue = F("Singoldpark");
        break;
    }
    case 292204:
    {
        returnValue = F("Singoldpark Mitte");
        break;
    }
    case 292205:
    {
        returnValue = F("Singoldpark Nord");
        break;
    }
    case 292206:
    {
        returnValue = F("Singoldpromenade");
        break;
    }
    case 292207:
    {
        returnValue = F("Singoldstr.");
        break;
    }
    case 292208:
    {
        returnValue = F("Singoldweg");
        break;
    }
    case 292209:
    {
        returnValue = F("Singrund");
        break;
    }
    case 292210:
    {
        returnValue = F("Sinjen Weg");
        break;
    }
    case 292211:
    {
        returnValue = F("Sinkelmahdstr.");
        break;
    }
    case 292212:
    {
        returnValue = F("Sinkelstr.");
        break;
    }
    case 292213:
    {
        returnValue = F("Sinkelweg");
        break;
    }
    case 292214:
    {
        returnValue = F("Sinkenbreite");
        break;
    }
    case 292215:
    {
        returnValue = F("Sinkenbrink");
        break;
    }
    case 292216:
    {
        returnValue = F("Sinkershäuser Str.");
        break;
    }
    case 292217:
    {
        returnValue = F("Sinkershäuser Weg");
        break;
    }
    case 292218:
    {
        returnValue = F("Sinkesbruch");
        break;
    }
    case 292219:
    {
        returnValue = F("Sinkinger Str.");
        break;
    }
    case 292220:
    {
        returnValue = F("Sinkinger Weg");
        break;
    }
    case 292221:
    {
        returnValue = F("Sinkweg");
        break;
    }
    case 292222:
    {
        returnValue = F("Sinnaustr.");
        break;
    }
    case 292223:
    {
        returnValue = F("Sinnberg");
        break;
    }
    case 292224:
    {
        returnValue = F("Sinnbergpromenade");
        break;
    }
    case 292225:
    {
        returnValue = F("Sinnbergstr.");
        break;
    }
    case 292226:
    {
        returnValue = F("Sinne Pfad");
        break;
    }
    case 292227:
    {
        returnValue = F("Sinneck");
        break;
    }
    case 292228:
    {
        returnValue = F("Sinnenweg");
        break;
    }
    case 292229:
    {
        returnValue = F("Sinner");
        break;
    }
    case 292230:
    {
        returnValue = F("Sinner Landstr.");
        break;
    }
    case 292231:
    {
        returnValue = F("Sinner Str.");
        break;
    }
    case 292232:
    {
        returnValue = F("Sinner Weg");
        break;
    }
    case 292233:
    {
        returnValue = F("Sinnerberg");
        break;
    }
    case 292234:
    {
        returnValue = F("Sinnerpfad");
        break;
    }
    case 292235:
    {
        returnValue = F("Sinnersdorfer Feld");
        break;
    }
    case 292236:
    {
        returnValue = F("Sinnersdorfer Str.");
        break;
    }
    case 292237:
    {
        returnValue = F("Sinnersdorfer Weg");
        break;
    }
    case 292238:
    {
        returnValue = F("Sinnershäuser Str.");
        break;
    }
    case 292239:
    {
        returnValue = F("Sinnerstr.");
        break;
    }
    case 292240:
    {
        returnValue = F("Sinnerthalstr.");
        break;
    }
    case 292241:
    {
        returnValue = F("Sinnesgarten");
        break;
    }
    case 292242:
    {
        returnValue = F("Sinnesgarten Freistatt");
        break;
    }
    case 292243:
    {
        returnValue = F("Sinnesgarten Kloster-Garten-Route");
        break;
    }
    case 292244:
    {
        returnValue = F("Sinnesgarten der Jahreszeiten");
        break;
    }
    case 292245:
    {
        returnValue = F("Sinnespark");
        break;
    }
    case 292246:
    {
        returnValue = F("Sinnespfad");
        break;
    }
    case 292247:
    {
        returnValue = F("Sinnespfad Herzogsägmühle");
        break;
    }
    case 292248:
    {
        returnValue = F("Sinnesrundweg");
        break;
    }
    case 292249:
    {
        returnValue = F("Sinneswandel");
        break;
    }
    case 292250:
    {
        returnValue = F("Sinnesweg");
        break;
    }
    case 292251:
    {
        returnValue = F("Sinngrün");
        break;
    }
    case 292252:
    {
        returnValue = F("Sinnigerweg");
        break;
    }
    case 292253:
    {
        returnValue = F("Sinning");
        break;
    }
    case 292254:
    {
        returnValue = F("Sinningen");
        break;
    }
    case 292255:
    {
        returnValue = F("Sinninger Str.");
        break;
    }
    case 292256:
    {
        returnValue = F("Sinnstr.");
        break;
    }
    case 292257:
    {
        returnValue = F("Sinntalstr.");
        break;
    }
    case 292258:
    {
        returnValue = F("Sinntor");
        break;
    }
    case 292259:
    {
        returnValue = F("Sinnweg");
        break;
    }
    case 292260:
    {
        returnValue = F("Sinramstr.");
        break;
    }
    case 292261:
    {
        returnValue = F("Sinsbergstr.");
        break;
    }
    case 292262:
    {
        returnValue = F("Sinselbachstr.");
        break;
    }
    case 292263:
    {
        returnValue = F("Sinseleinweg");
        break;
    }
    case 292264:
    {
        returnValue = F("Sinselhiege");
        break;
    }
    case 292265:
    {
        returnValue = F("Sinsener Str.");
        break;
    }
    case 292266:
    {
        returnValue = F("Sinsenteichweg");
        break;
    }
    case 292267:
    {
        returnValue = F("Sinsheimer Str.");
        break;
    }
    case 292268:
    {
        returnValue = F("Sinsheimer Weg");
        break;
    }
    case 292269:
    {
        returnValue = F("Sinspelter Str.");
        break;
    }
    case 292270:
    {
        returnValue = F("Sinstedener Weg");
        break;
    }
    case 292271:
    {
        returnValue = F("Sinstedenstr.");
        break;
    }
    case 292272:
    {
        returnValue = F("Sinsumer Weg");
        break;
    }
    case 292273:
    {
        returnValue = F("Sint-Niklaas-Str.");
        break;
    }
    case 292274:
    {
        returnValue = F("Sint-Oedenroder-Str.");
        break;
    }
    case 292275:
    {
        returnValue = F("Sintenisweg");
        break;
    }
    case 292276:
    {
        returnValue = F("Sintersbacher Str.");
        break;
    }
    case 292277:
    {
        returnValue = F("Sinterstr.");
        break;
    }
    case 292278:
    {
        returnValue = F("Sintfeld");
        break;
    }
    case 292279:
    {
        returnValue = F("Sintfeldhöhenstr.");
        break;
    }
    case 292280:
    {
        returnValue = F("Sintfeldstr.");
        break;
    }
    case 292281:
    {
        returnValue = F("Sintfeldweg");
        break;
    }
    case 292282:
    {
        returnValue = F("Sintherner Holzweg");
        break;
    }
    case 292283:
    {
        returnValue = F("Sintherner Str.");
        break;
    }
    case 292284:
    {
        returnValue = F("Sintherner Weg");
        break;
    }
    case 292285:
    {
        returnValue = F("Sintmanner Str.");
        break;
    }
    case 292286:
    {
        returnValue = F("Sintstr.");
        break;
    }
    case 292287:
    {
        returnValue = F("Sintwolfstr.");
        break;
    }
    case 292288:
    {
        returnValue = F("Sinwagstr.");
        break;
    }
    case 292289:
    {
        returnValue = F("Sinzenburg");
        break;
    }
    case 292290:
    {
        returnValue = F("Sinzenhoferstr.");
        break;
    }
    case 292291:
    {
        returnValue = F("Sinzenicher Str.");
        break;
    }
    case 292292:
    {
        returnValue = F("Sinzenicher Weg");
        break;
    }
    case 292293:
    {
        returnValue = F("Sinzer Str.");
        break;
    }
    case 292294:
    {
        returnValue = F("Sinzheimer Weg");
        break;
    }
    case 292295:
    {
        returnValue = F("Sinziger Str.");
        break;
    }
    case 292296:
    {
        returnValue = F("Sinzing");
        break;
    }
    case 292297:
    {
        returnValue = F("Sinzingerstr.");
        break;
    }
    case 292298:
    {
        returnValue = F("Sinzstr.");
        break;
    }
    case 292299:
    {
        returnValue = F("Sioner Str.");
        break;
    }
    case 292300:
    {
        returnValue = F("Sionerhofstr.");
        break;
    }
    case 292301:
    {
        returnValue = F("Siplingerstr.");
        break;
    }
    case 292302:
    {
        returnValue = F("Sipnitz");
        break;
    }
    case 292303:
    {
        returnValue = F("Sippachsweg");
        break;
    }
    case 292304:
    {
        returnValue = F("Sippenburgstr.");
        break;
    }
    case 292305:
    {
        returnValue = F("Sipper Street");
        break;
    }
    case 292306:
    {
        returnValue = F("Sipperhäuser Str.");
        break;
    }
    case 292307:
    {
        returnValue = F("Sippersfelder Str.");
        break;
    }
    case 292308:
    {
        returnValue = F("Sippholzerweg");
        break;
    }
    case 292309:
    {
        returnValue = F("Sipsenäcker");
        break;
    }
    case 292310:
    {
        returnValue = F("Siptenfelder Str.");
        break;
    }
    case 292311:
    {
        returnValue = F("Sirachskotten");
        break;
    }
    case 292312:
    {
        returnValue = F("Sirbis");
        break;
    }
    case 292313:
    {
        returnValue = F("Sirchinger Steige");
        break;
    }
    case 292314:
    {
        returnValue = F("Sirchinger Str.");
        break;
    }
    case 292315:
    {
        returnValue = F("Sirchinger Weg");
        break;
    }
    case 292316:
    {
        returnValue = F("Sirckstr.");
        break;
    }
    case 292317:
    {
        returnValue = F("Sirenenplatz");
        break;
    }
    case 292318:
    {
        returnValue = F("Sirenenweg");
        break;
    }
    case 292319:
    {
        returnValue = F("Sirgensteinstr.");
        break;
    }
    case 292320:
    {
        returnValue = F("Sirgfeldring");
        break;
    }
    case 292321:
    {
        returnValue = F("Siriusbogen");
        break;
    }
    case 292322:
    {
        returnValue = F("Siriushof");
        break;
    }
    case 292323:
    {
        returnValue = F("Siriusstr.");
        break;
    }
    case 292324:
    {
        returnValue = F("Siriusweg");
        break;
    }
    case 292325:
    {
        returnValue = F("Sirksfeld");
        break;
    }
    case 292326:
    {
        returnValue = F("Sirnauer Brücke");
        break;
    }
    case 292327:
    {
        returnValue = F("Sirnauer Str.");
        break;
    }
    case 292328:
    {
        returnValue = F("Sirnitz");
        break;
    }
    case 292329:
    {
        returnValue = F("Sirnitz Grundweg");
        break;
    }
    case 292330:
    {
        returnValue = F("Sirnitzstr.");
        break;
    }
    case 292331:
    {
        returnValue = F("Sironastr.");
        break;
    }
    case 292332:
    {
        returnValue = F("Sirrenbergstr.");
        break;
    }
    case 292333:
    {
        returnValue = F("Sirrin");
        break;
    }
    case 292334:
    {
        returnValue = F("Sirriner Weg");
        break;
    }
    case 292335:
    {
        returnValue = F("Sirupsgäßchen");
        break;
    }
    case 292336:
    {
        returnValue = F("Sirupstr.");
        break;
    }
    case 292337:
    {
        returnValue = F("Sirupweg");
        break;
    }
    case 292338:
    {
        returnValue = F("Sisalweg");
        break;
    }
    case 292339:
    {
        returnValue = F("Sisbenden");
        break;
    }
    case 292340:
    {
        returnValue = F("Sisikonweg");
        break;
    }
    case 292341:
    {
        returnValue = F("Siska-Kunz-Weg");
        break;
    }
    case 292342:
    {
        returnValue = F("Siskesbach");
        break;
    }
    case 292343:
    {
        returnValue = F("Sissibergweg");
        break;
    }
    case 292344:
    {
        returnValue = F("Sissiweg");
        break;
    }
    case 292345:
    {
        returnValue = F("Sistaler Str.");
        break;
    }
    case 292346:
    {
        returnValue = F("Sistenichstr.");
        break;
    }
    case 292347:
    {
        returnValue = F("Sisteroner Weg");
        break;
    }
    case 292348:
    {
        returnValue = F("Sitecpark");
        break;
    }
    case 292349:
    {
        returnValue = F("Sitkaweg");
        break;
    }
    case 292350:
    {
        returnValue = F("Sittabogen");
        break;
    }
    case 292351:
    {
        returnValue = F("Sittard");
        break;
    }
    case 292352:
    {
        returnValue = F("Sittarder Hecke");
        break;
    }
    case 292353:
    {
        returnValue = F("Sittarder Str.");
        break;
    }
    case 292354:
    {
        returnValue = F("Sittardweg");
        break;
    }
    case 292355:
    {
        returnValue = F("Sittelbergweg");
        break;
    }
    case 292356:
    {
        returnValue = F("Sitteler Str.");
        break;
    }
    case 292357:
    {
        returnValue = F("Sittelshegenstr.");
        break;
    }
    case 292358:
    {
        returnValue = F("Sittelskanal");
        break;
    }
    case 292359:
    {
        returnValue = F("Sitten");
        break;
    }
    case 292360:
    {
        returnValue = F("Sittenbach Str.");
        break;
    }
    case 292361:
    {
        returnValue = F("Sittenbacher Str.");
        break;
    }
    case 292362:
    {
        returnValue = F("Sittenberg");
        break;
    }
    case 292363:
    {
        returnValue = F("Sittendorfer Weg");
        break;
    }
    case 292364:
    {
        returnValue = F("Sittenser Str.");
        break;
    }
    case 292365:
    {
        returnValue = F("Sittenweg");
        break;
    }
    case 292366:
    {
        returnValue = F("Sitter");
        break;
    }
    case 292367:
    {
        returnValue = F("Sitter Weg");
        break;
    }
    case 292368:
    {
        returnValue = F("Sitterbachstr.");
        break;
    }
    case 292369:
    {
        returnValue = F("Sitterdelle");
        break;
    }
    case 292370:
    {
        returnValue = F("Sittergraben");
        break;
    }
    case 292371:
    {
        returnValue = F("Sittermannstr.");
        break;
    }
    case 292372:
    {
        returnValue = F("Sittermansweg");
        break;
    }
    case 292373:
    {
        returnValue = F("Sitters Höge");
        break;
    }
    case 292374:
    {
        returnValue = F("Sitterseck");
        break;
    }
    case 292375:
    {
        returnValue = F("Sitterstiege");
        break;
    }
    case 292376:
    {
        returnValue = F("Sitterswalder Str.");
        break;
    }
    case 292377:
    {
        returnValue = F("Sittiche");
        break;
    }
    case 292378:
    {
        returnValue = F("Sittichenbacher Chausee");
        break;
    }
    case 292379:
    {
        returnValue = F("Sittichenbacher Chaussee");
        break;
    }
    case 292380:
    {
        returnValue = F("Sittichenbacher Str.");
        break;
    }
    case 292381:
    {
        returnValue = F("Sittichstr.");
        break;
    }
    case 292382:
    {
        returnValue = F("Sittichweg");
        break;
    }
    case 292383:
    {
        returnValue = F("Sittigstr.");
        break;
    }
    case 292384:
    {
        returnValue = F("Sittigweg");
        break;
    }
    case 292385:
    {
        returnValue = F("Sittischstr.");
        break;
    }
    case 292386:
    {
        returnValue = F("Sittlinger Str.");
        break;
    }
    case 292387:
    {
        returnValue = F("Sitzambucher Str.");
        break;
    }
    case 292388:
    {
        returnValue = F("Sitzbankweg");
        break;
    }
    case 292389:
    {
        returnValue = F("Sitzenbachweg");
        break;
    }
    case 292390:
    {
        returnValue = F("Sitzenbergerstr.");
        break;
    }
    case 292391:
    {
        returnValue = F("Sitzenhofer Str.");
        break;
    }
    case 292392:
    {
        returnValue = F("Sitzenkircher Str.");
        break;
    }
    case 292393:
    {
        returnValue = F("Sitzenkircher-Weg");
        break;
    }
    case 292394:
    {
        returnValue = F("Sitzenrodaer Str.");
        break;
    }
    case 292395:
    {
        returnValue = F("Sitzenrodaer Weg");
        break;
    }
    case 292396:
    {
        returnValue = F("Sitzenstr.");
        break;
    }
    case 292397:
    {
        returnValue = F("Sitzerather Str.");
        break;
    }
    case 292398:
    {
        returnValue = F("Sitzplatz am Denkmal");
        break;
    }
    case 292399:
    {
        returnValue = F("Sitzplatz mit Brunnen");
        break;
    }
    case 292400:
    {
        returnValue = F("Sitzstadt");
        break;
    }
    case 292401:
    {
        returnValue = F("Siverdesstr.");
        break;
    }
    case 292402:
    {
        returnValue = F("Sixdorf");
        break;
    }
    case 292403:
    {
        returnValue = F("Sixenbogen");
        break;
    }
    case 292404:
    {
        returnValue = F("Sixengasse");
        break;
    }
    case 292405:
    {
        returnValue = F("Sixengäßchen");
        break;
    }
    case 292406:
    {
        returnValue = F("Sixenhof");
        break;
    }
    case 292407:
    {
        returnValue = F("Sixenhofer Weg");
        break;
    }
    case 292408:
    {
        returnValue = F("Sixenweg");
        break;
    }
    case 292409:
    {
        returnValue = F("Sixt-von-Armin-Str.");
        break;
    }
    case 292410:
    {
        returnValue = F("Sixtenberg");
        break;
    }
    case 292411:
    {
        returnValue = F("Sixtenbergele");
        break;
    }
    case 292412:
    {
        returnValue = F("Sixtengraben");
        break;
    }
    case 292413:
    {
        returnValue = F("Sixtistr.");
        break;
    }
    case 292414:
    {
        returnValue = F("Sixtstr.");
        break;
    }
    case 292415:
    {
        returnValue = F("Sixtus Kirchhof");
        break;
    }
    case 292416:
    {
        returnValue = F("Sixtus-Bachmann-Str.");
        break;
    }
    case 292417:
    {
        returnValue = F("Sixtus-Braun-Str.");
        break;
    }
    case 292418:
    {
        returnValue = F("Sixtus-Park");
        break;
    }
    case 292419:
    {
        returnValue = F("Sixtusstr.");
        break;
    }
    case 292420:
    {
        returnValue = F("Sixtusweg");
        break;
    }
    case 292421:
    {
        returnValue = F("Sixtweg");
        break;
    }
    case 292422:
    {
        returnValue = F("Sièn Weg");
        break;
    }
    case 292423:
    {
        returnValue = F("Sjip-Wai");
        break;
    }
    case 292424:
    {
        returnValue = F("Sjipkamp");
        break;
    }
    case 292425:
    {
        returnValue = F("Sjipwai");
        break;
    }
    case 292426:
    {
        returnValue = F("Sjüürenwai");
        break;
    }
    case 292427:
    {
        returnValue = F("Skaar Wai");
        break;
    }
    case 292428:
    {
        returnValue = F("Skaby");
        break;
    }
    case 292429:
    {
        returnValue = F("Skabyer Str.");
        break;
    }
    case 292430:
    {
        returnValue = F("Skagerak");
        break;
    }
    case 292431:
    {
        returnValue = F("Skagerrakstr.");
        break;
    }
    case 292432:
    {
        returnValue = F("Skalablick");
        break;
    }
    case 292433:
    {
        returnValue = F("Skalaweg");
        break;
    }
    case 292434:
    {
        returnValue = F("Skalstr.");
        break;
    }
    case 292435:
    {
        returnValue = F("Skandinavien-Bogen");
        break;
    }
    case 292436:
    {
        returnValue = F("Skandinavien-Damm");
        break;
    }
    case 292437:
    {
        returnValue = F("Skandinavien-Tor");
        break;
    }
    case 292438:
    {
        returnValue = F("Skandinavienallee");
        break;
    }
    case 292439:
    {
        returnValue = F("Skandinavienstr.");
        break;
    }
    case 292440:
    {
        returnValue = F("Skartheweg");
        break;
    }
    case 292441:
    {
        returnValue = F("Skassaer Str.");
        break;
    }
    case 292442:
    {
        returnValue = F("Skassaer Weg");
        break;
    }
    case 292443:
    {
        returnValue = F("Skate- und Rollstrecke");
        break;
    }
    case 292444:
    {
        returnValue = F("Skate-Arena");
        break;
    }
    case 292445:
    {
        returnValue = F("Skatepark");
        break;
    }
    case 292446:
    {
        returnValue = F("Skatepark Neudrossenfeld");
        break;
    }
    case 292447:
    {
        returnValue = F("Skaterbahn");
        break;
    }
    case 292448:
    {
        returnValue = F("Skatingloipe");
        break;
    }
    case 292449:
    {
        returnValue = F("Skatingstrecke");
        break;
    }
    case 292450:
    {
        returnValue = F("Skawinastr.");
        break;
    }
    case 292451:
    {
        returnValue = F("Skellinghörn");
        break;
    }
    case 292452:
    {
        returnValue = F("Skerbersdorfer Str.");
        break;
    }
    case 292453:
    {
        returnValue = F("Ski-Ranch-Weg");
        break;
    }
    case 292454:
    {
        returnValue = F("Skifeldweg");
        break;
    }
    case 292455:
    {
        returnValue = F("Skihangweg");
        break;
    }
    case 292456:
    {
        returnValue = F("Skiheimstr.");
        break;
    }
    case 292457:
    {
        returnValue = F("Skihüttenweg");
        break;
    }
    case 292458:
    {
        returnValue = F("Skilanglaufzentrum Silberhütte Start-Ziel");
        break;
    }
    case 292459:
    {
        returnValue = F("Skiliftweg");
        break;
    }
    case 292460:
    {
        returnValue = F("Skipper-Ring");
        break;
    }
    case 292461:
    {
        returnValue = F("Skipperpadd");
        break;
    }
    case 292462:
    {
        returnValue = F("Skipperstr.");
        break;
    }
    case 292463:
    {
        returnValue = F("Skirenstr.");
        break;
    }
    case 292464:
    {
        returnValue = F("Skirollerbahn");
        break;
    }
    case 292465:
    {
        returnValue = F("Skirollerstrecke");
        break;
    }
    case 292466:
    {
        returnValue = F("Skistr.");
        break;
    }
    case 292467:
    {
        returnValue = F("Skiweg");
        break;
    }
    case 292468:
    {
        returnValue = F("Skiweg zu den Parkplätzen");
        break;
    }
    case 292469:
    {
        returnValue = F("Skjerner Str.");
        break;
    }
    case 292470:
    {
        returnValue = F("Skodborger Str.");
        break;
    }
    case 292471:
    {
        returnValue = F("Skofja-Loka-Str.");
        break;
    }
    case 292472:
    {
        returnValue = F("Skopis Elbgarten");
        break;
    }
    case 292473:
    {
        returnValue = F("Skoplauer Anger");
        break;
    }
    case 292474:
    {
        returnValue = F("Skopwaschweg");
        break;
    }
    case 292475:
    {
        returnValue = F("Skorpiongasse");
        break;
    }
    case 292476:
    {
        returnValue = F("Skorpionstr.");
        break;
    }
    case 292477:
    {
        returnValue = F("Skorpionweg");
        break;
    }
    case 292478:
    {
        returnValue = F("Skt.-Rochus-Str.");
        break;
    }
    case 292479:
    {
        returnValue = F("Skuldweg");
        break;
    }
    case 292480:
    {
        returnValue = F("Skulpturen-Allee");
        break;
    }
    case 292481:
    {
        returnValue = F("Skulpturenallee");
        break;
    }
    case 292482:
    {
        returnValue = F("Skulpturengarten");
        break;
    }
    case 292483:
    {
        returnValue = F("Skulpturengarten Bisby&Saludas");
        break;
    }
    case 292484:
    {
        returnValue = F("Skulpturengarten Lutz Ackermann");
        break;
    }
    case 292485:
    {
        returnValue = F("Skulpturengarten des Museum der Stadt Lüdenscheid");
        break;
    }
    case 292486:
    {
        returnValue = F("Skulpturenpark");
        break;
    }
    case 292487:
    {
        returnValue = F("Skulpturenpark \"Wurzeln und Freiheit");
        break;
    }
    case 292488:
    {
        returnValue = F("Skulpturenpark - Stadtpark");
        break;
    }
    case 292489:
    {
        returnValue = F("Skulpturenpark Bamberg");
        break;
    }
    case 292490:
    {
        returnValue = F("Skulpturenpark Durbach");
        break;
    }
    case 292491:
    {
        returnValue = F("Skulpturenpark Flottmann");
        break;
    }
    case 292492:
    {
        returnValue = F("Skulpturenpark Katzow");
        break;
    }
    case 292493:
    {
        returnValue = F("Skulpturenpark Kramelheide");
        break;
    }
    case 292494:
    {
        returnValue = F("Skulpturenpark Kötitz");
        break;
    }
    case 292495:
    {
        returnValue = F("Skulpturenpark Lapidarium");
        break;
    }
    case 292496:
    {
        returnValue = F("Skulpturenpark Niederhöchstadt");
        break;
    }
    case 292497:
    {
        returnValue = F("Skulpturenpark Niederrhein");
        break;
    }
    case 292498:
    {
        returnValue = F("Skulpturenpark Olbersdorf");
        break;
    }
    case 292499:
    {
        returnValue = F("Skulpturenpark Seckach");
        break;
    }
    case 292500:
    {
        returnValue = F("Skulpturenpark Wesenberg");
        break;
    }
    case 292501:
    {
        returnValue = F("Skulpturenpfad");
        break;
    }
    case 292502:
    {
        returnValue = F("Skulpturenweg");
        break;
    }
    case 292503:
    {
        returnValue = F("Skulpturenweg Maulbronn");
        break;
    }
    case 292504:
    {
        returnValue = F("Skulpturenweg-Erasmus Grasser");
        break;
    }
    case 292505:
    {
        returnValue = F("Skulpturenwege - Verbindungsweg");
        break;
    }
    case 292506:
    {
        returnValue = F("Skulturenpark");
        break;
    }
    case 292507:
    {
        returnValue = F("Skuplpturenweg");
        break;
    }
    case 292508:
    {
        returnValue = F("Skuuljaat");
        break;
    }
    case 292509:
    {
        returnValue = F("Skyline-Park-Str.");
        break;
    }
    case 292510:
    {
        returnValue = F("Skywalk");
        break;
    }
    case 292511:
    {
        returnValue = F("Skywalk Willingen");
        break;
    }
    case 292512:
    {
        returnValue = F("Skywalk-Arnbruck");
        break;
    }
    case 292513:
    {
        returnValue = F("Skyway");
        break;
    }
    case 292514:
    {
        returnValue = F("Skäßchener Str.");
        break;
    }
    case 292515:
    {
        returnValue = F("Skærbækvej");
        break;
    }
    case 292516:
    {
        returnValue = F("Slaa");
        break;
    }
    case 292517:
    {
        returnValue = F("Slaaweg");
        break;
    }
    case 292518:
    {
        returnValue = F("Slabystr.");
        break;
    }
    case 292519:
    {
        returnValue = F("Sladenweg");
        break;
    }
    case 292520:
    {
        returnValue = F("Slamener Höhe");
        break;
    }
    case 292521:
    {
        returnValue = F("Slamener Wanderweg");
        break;
    }
    case 292522:
    {
        returnValue = F("Slater Fährsteig");
        break;
    }
    case 292523:
    {
        returnValue = F("Slater Weg");
        break;
    }
    case 292524:
    {
        returnValue = F("Slavertor");
        break;
    }
    case 292525:
    {
        returnValue = F("Slavertorwall");
        break;
    }
    case 292526:
    {
        returnValue = F("Slavertrift");
        break;
    }
    case 292527:
    {
        returnValue = F("Slawaer Weg");
        break;
    }
    case 292528:
    {
        returnValue = F("Slawengrund");
        break;
    }
    case 292529:
    {
        returnValue = F("Slawenstr.");
        break;
    }
    case 292530:
    {
        returnValue = F("Slawenweg");
        break;
    }
    case 292531:
    {
        returnValue = F("Slawnoer Str.");
        break;
    }
    case 292532:
    {
        returnValue = F("Sledenbarg");
        break;
    }
    case 292533:
    {
        returnValue = F("Sledesenstr.");
        break;
    }
    case 292534:
    {
        returnValue = F("Sleedrieverstr.");
        break;
    }
    case 292535:
    {
        returnValue = F("Sleener Str.");
        break;
    }
    case 292536:
    {
        returnValue = F("Sleidanusstr.");
        break;
    }
    case 292537:
    {
        returnValue = F("Slevogtstr.");
        break;
    }
    case 292538:
    {
        returnValue = F("Slevogtweg");
        break;
    }
    case 292539:
    {
        returnValue = F("Slezakweg");
        break;
    }
    case 292540:
    {
        returnValue = F("Sliepershörn");
        break;
    }
    case 292541:
    {
        returnValue = F("Sligtmerskamp");
        break;
    }
    case 292542:
    {
        returnValue = F("Slijpestr.");
        break;
    }
    case 292543:
    {
        returnValue = F("Slingkampstr.");
        break;
    }
    case 292544:
    {
        returnValue = F("Slippen");
        break;
    }
    case 292545:
    {
        returnValue = F("Slippnweg");
        break;
    }
    case 292546:
    {
        returnValue = F("Sloop");
        break;
    }
    case 292547:
    {
        returnValue = F("Slousendyck");
        break;
    }
    case 292548:
    {
        returnValue = F("Slousenweg");
        break;
    }
    case 292549:
    {
        returnValue = F("Slubicer Str.");
        break;
    }
    case 292550:
    {
        returnValue = F("Sluiterspadd");
        break;
    }
    case 292551:
    {
        returnValue = F("Slukefterbogen");
        break;
    }
    case 292552:
    {
        returnValue = F("Slukefterweg");
        break;
    }
    case 292553:
    {
        returnValue = F("Slurpad");
        break;
    }
    case 292554:
    {
        returnValue = F("Sluutweg");
        break;
    }
    case 292555:
    {
        returnValue = F("Sluyterstr.");
        break;
    }
    case 292556:
    {
        returnValue = F("Slümerstr.");
        break;
    }
    case 292557:
    {
        returnValue = F("Slüter Weg");
        break;
    }
    case 292558:
    {
        returnValue = F("Slüterplatz");
        break;
    }
    case 292559:
    {
        returnValue = F("Smaasewäi");
        break;
    }
    case 292560:
    {
        returnValue = F("Smal Joed");
        break;
    }
    case 292561:
    {
        returnValue = F("Smal Lohn");
        break;
    }
    case 292562:
    {
        returnValue = F("Smale Beeke");
        break;
    }
    case 292563:
    {
        returnValue = F("Smaragdeidechsenpfad");
        break;
    }
    case 292564:
    {
        returnValue = F("Smaragdeideschsenpfad");
        break;
    }
    case 292565:
    {
        returnValue = F("Smaragdenweg");
        break;
    }
    case 292566:
    {
        returnValue = F("Smaragdstr.");
        break;
    }
    case 292567:
    {
        returnValue = F("Smaragdweg");
        break;
    }
    case 292568:
    {
        returnValue = F("Smarlingen");
        break;
    }
    case 292569:
    {
        returnValue = F("Smeedbarg");
        break;
    }
    case 292570:
    {
        returnValue = F("Smeelwai");
        break;
    }
    case 292571:
    {
        returnValue = F("Smeer Ort");
        break;
    }
    case 292572:
    {
        returnValue = F("Smeesgatze");
        break;
    }
    case 292573:
    {
        returnValue = F("Smendweg");
        break;
    }
    case 292574:
    {
        returnValue = F("Smerighörner Weg");
        break;
    }
    case 292575:
    {
        returnValue = F("Smeswai");
        break;
    }
    case 292576:
    {
        returnValue = F("Smetanastr.");
        break;
    }
    case 292577:
    {
        returnValue = F("Smetanaweg");
        break;
    }
    case 292578:
    {
        returnValue = F("Smetsend");
        break;
    }
    case 292579:
    {
        returnValue = F("Smidostr.");
        break;
    }
    case 292580:
    {
        returnValue = F("Smiedestidde");
        break;
    }
    case 292581:
    {
        returnValue = F("Smillenzweg");
        break;
    }
    case 292582:
    {
        returnValue = F("Smitderks Diek");
        break;
    }
    case 292583:
    {
        returnValue = F("Smiterlowstr.");
        break;
    }
    case 292584:
    {
        returnValue = F("Smith Avenue");
        break;
    }
    case 292585:
    {
        returnValue = F("Smiths Aue");
        break;
    }
    case 292586:
    {
        returnValue = F("Smitmansdyck");
        break;
    }
    case 292587:
    {
        returnValue = F("Smittshörn");
        break;
    }
    case 292588:
    {
        returnValue = F("Smoky Mountain Way");
        break;
    }
    case 292589:
    {
        returnValue = F("Smuggelstieg");
        break;
    }
    case 292590:
    {
        returnValue = F("Smutjes Pad");
        break;
    }
    case 292591:
    {
        returnValue = F("Smädstieg");
        break;
    }
    case 292592:
    {
        returnValue = F("Smäswai");
        break;
    }
    case 292593:
    {
        returnValue = F("Smääljaat");
        break;
    }
    case 292594:
    {
        returnValue = F("Snatweg");
        break;
    }
    case 292595:
    {
        returnValue = F("Snedwinkelstr.");
        break;
    }
    case 292596:
    {
        returnValue = F("Sneeker Str.");
        break;
    }
    case 292597:
    {
        returnValue = F("Snep Goat");
        break;
    }
    case 292598:
    {
        returnValue = F("Snethhorstweg");
        break;
    }
    case 292599:
    {
        returnValue = F("Snewelinstr.");
        break;
    }
    case 292600:
    {
        returnValue = F("Snidelauchstr.");
        break;
    }
    case 292601:
    {
        returnValue = F("Sniederbarg");
        break;
    }
    case 292602:
    {
        returnValue = F("Sniederfehnweg");
        break;
    }
    case 292603:
    {
        returnValue = F("Sniedergang");
        break;
    }
    case 292604:
    {
        returnValue = F("Sniederredder");
        break;
    }
    case 292605:
    {
        returnValue = F("Sniedersloop");
        break;
    }
    case 292606:
    {
        returnValue = F("Sniedersweg");
        break;
    }
    case 292607:
    {
        returnValue = F("Sniers Achterhoff");
        break;
    }
    case 292608:
    {
        returnValue = F("Snirgelskamp");
        break;
    }
    case 292609:
    {
        returnValue = F("Snorrum");
        break;
    }
    case 292610:
    {
        returnValue = F("Soar");
        break;
    }
    case 292611:
    {
        returnValue = F("Soatspad");
        break;
    }
    case 292612:
    {
        returnValue = F("Sobach");
        break;
    }
    case 292613:
    {
        returnValue = F("Sobachweg");
        break;
    }
    case 292614:
    {
        returnValue = F("Sobernheimer Str.");
        break;
    }
    case 292615:
    {
        returnValue = F("Sobrigauer Weg");
        break;
    }
    case 292616:
    {
        returnValue = F("Soda Brücke");
        break;
    }
    case 292617:
    {
        returnValue = F("Soda-Brücke");
        break;
    }
    case 292618:
    {
        returnValue = F("Sodacker");
        break;
    }
    case 292619:
    {
        returnValue = F("Sodalenruh");
        break;
    }
    case 292620:
    {
        returnValue = F("Sodastr.");
        break;
    }
    case 292621:
    {
        returnValue = F("Sodbarg");
        break;
    }
    case 292622:
    {
        returnValue = F("Sodbruch");
        break;
    }
    case 292623:
    {
        returnValue = F("Soddernstr.");
        break;
    }
    case 292624:
    {
        returnValue = F("Sodenackerstr.");
        break;
    }
    case 292625:
    {
        returnValue = F("Sodenbergstr.");
        break;
    }
    case 292626:
    {
        returnValue = F("Sodener Str.");
        break;
    }
    case 292627:
    {
        returnValue = F("Sodener Weg");
        break;
    }
    case 292628:
    {
        returnValue = F("Sodenkopf");
        break;
    }
    case 292629:
    {
        returnValue = F("Sodenstich");
        break;
    }
    case 292630:
    {
        returnValue = F("Sodenstock");
        break;
    }
    case 292631:
    {
        returnValue = F("Sodenstr.");
        break;
    }
    case 292632:
    {
        returnValue = F("Sodenweg");
        break;
    }
    case 292633:
    {
        returnValue = F("Soderstorfer Str.");
        break;
    }
    case 292634:
    {
        returnValue = F("Soderstücker Weg");
        break;
    }
    case 292635:
    {
        returnValue = F("Soderweg");
        break;
    }
    case 292636:
    {
        returnValue = F("Sodgasse");
        break;
    }
    case 292637:
    {
        returnValue = F("Sodinger Str.");
        break;
    }
    case 292638:
    {
        returnValue = F("Sodlochweg");
        break;
    }
    case 292639:
    {
        returnValue = F("Sodner Au");
        break;
    }
    case 292640:
    {
        returnValue = F("Sodweg");
        break;
    }
    case 292641:
    {
        returnValue = F("Sodwiese");
        break;
    }
    case 292642:
    {
        returnValue = F("Soedeweg");
        break;
    }
    case 292643:
    {
        returnValue = F("Soeker Weg");
        break;
    }
    case 292644:
    {
        returnValue = F("Soeleckengarten");
        break;
    }
    case 292645:
    {
        returnValue = F("Soelsiefener Berg");
        break;
    }
    case 292646:
    {
        returnValue = F("Soelsiefener Str.");
        break;
    }
    case 292647:
    {
        returnValue = F("Soen");
        break;
    }
    case 292648:
    {
        returnValue = F("Soerheide");
        break;
    }
    case 292649:
    {
        returnValue = F("Soermusstr.");
        break;
    }
    case 292650:
    {
        returnValue = F("Soerstr.");
        break;
    }
    case 292651:
    {
        returnValue = F("Soesmenhusen");
        break;
    }
    case 292652:
    {
        returnValue = F("Soestdorn");
        break;
    }
    case 292653:
    {
        returnValue = F("Soestensteig");
        break;
    }
    case 292654:
    {
        returnValue = F("Soestenstr.");
        break;
    }
    case 292655:
    {
        returnValue = F("Soestenweg");
        break;
    }
    case 292656:
    {
        returnValue = F("Soester Str.");
        break;
    }
    case 292657:
    {
        returnValue = F("Soester Weg");
        break;
    }
    case 292658:
    {
        returnValue = F("Soestersweg");
        break;
    }
    case 292659:
    {
        returnValue = F("Soestertal");
        break;
    }
    case 292660:
    {
        returnValue = F("Soestestr.");
        break;
    }
    case 292661:
    {
        returnValue = F("Soestfeld");
        break;
    }
    case 292662:
    {
        returnValue = F("Soeststr.");
        break;
    }
    case 292663:
    {
        returnValue = F("Soesttor");
        break;
    }
    case 292664:
    {
        returnValue = F("Soestweg");
        break;
    }
    case 292665:
    {
        returnValue = F("Soetebeerweg");
        break;
    }
    case 292666:
    {
        returnValue = F("Sofaweg");
        break;
    }
    case 292667:
    {
        returnValue = F("Sofeld");
        break;
    }
    case 292668:
    {
        returnValue = F("Sofia'Fia'Hintzen Weg");
        break;
    }
    case 292669:
    {
        returnValue = F("Sofie-Bühler-Str.");
        break;
    }
    case 292670:
    {
        returnValue = F("Sofie-Menter-Str.");
        break;
    }
    case 292671:
    {
        returnValue = F("Sofie-Seliger-Weg");
        break;
    }
    case 292672:
    {
        returnValue = F("Sofienplatz");
        break;
    }
    case 292673:
    {
        returnValue = F("Sofienring");
        break;
    }
    case 292674:
    {
        returnValue = F("Sofienstr.");
        break;
    }
    case 292675:
    {
        returnValue = F("Sofienweg");
        break;
    }
    case 292676:
    {
        returnValue = F("Sogeimsring");
        break;
    }
    case 292677:
    {
        returnValue = F("Sogeimsweg");
        break;
    }
    case 292678:
    {
        returnValue = F("Sohl");
        break;
    }
    case 292679:
    {
        returnValue = F("Sohland-Str.");
        break;
    }
    case 292680:
    {
        returnValue = F("Sohlander Str.");
        break;
    }
    case 292681:
    {
        returnValue = F("Sohlander Weg");
        break;
    }
    case 292682:
    {
        returnValue = F("Sohlbacher Str.");
        break;
    }
    case 292683:
    {
        returnValue = F("Sohlbergstr.");
        break;
    }
    case 292684:
    {
        returnValue = F("Sohldfeld");
        break;
    }
    case 292685:
    {
        returnValue = F("Sohlener Str.");
        break;
    }
    case 292686:
    {
        returnValue = F("Sohlener Weg");
        break;
    }
    case 292687:
    {
        returnValue = F("Sohlenmaierweg");
        break;
    }
    case 292688:
    {
        returnValue = F("Sohlenstr.");
        break;
    }
    case 292689:
    {
        returnValue = F("Sohler Str.");
        break;
    }
    case 292690:
    {
        returnValue = F("Sohler Weg");
        break;
    }
    case 292691:
    {
        returnValue = F("Sohlersgasse");
        break;
    }
    case 292692:
    {
        returnValue = F("Sohlerweg");
        break;
    }
    case 292693:
    {
        returnValue = F("Sohleweg");
        break;
    }
    case 292694:
    {
        returnValue = F("Sohlgasse");
        break;
    }
    case 292695:
    {
        returnValue = F("Sohlhöhe");
        break;
    }
    case 292696:
    {
        returnValue = F("Sohlinger Landstr.");
        break;
    }
    case 292697:
    {
        returnValue = F("Sohlinger Stadtweg");
        break;
    }
    case 292698:
    {
        returnValue = F("Sohlkamp");
        break;
    }
    case 292699:
    {
        returnValue = F("Sohlkampstr.");
        break;
    }
    case 292700:
    {
        returnValue = F("Sohlsiedlung");
        break;
    }
    case 292701:
    {
        returnValue = F("Sohlsiepen");
        break;
    }
    case 292702:
    {
        returnValue = F("Sohlstr.");
        break;
    }
    case 292703:
    {
        returnValue = F("Sohlstätte");
        break;
    }
    case 292704:
    {
        returnValue = F("Sohlstättenstr.");
        break;
    }
    case 292705:
    {
        returnValue = F("Sohltweg");
        break;
    }
    case 292706:
    {
        returnValue = F("Sohlwaldweg");
        break;
    }
    case 292707:
    {
        returnValue = F("Sohlweg");
        break;
    }
    case 292708:
    {
        returnValue = F("Sohlwiese");
        break;
    }
    case 292709:
    {
        returnValue = F("Sohländer Str.");
        break;
    }
    case 292710:
    {
        returnValue = F("Sohmegasse");
        break;
    }
    case 292711:
    {
        returnValue = F("Sohnhaldenstr.");
        break;
    }
    case 292712:
    {
        returnValue = F("Sohnhansenweg");
        break;
    }
    case 292713:
    {
        returnValue = F("Sohnreystr.");
        break;
    }
    case 292714:
    {
        returnValue = F("Sohnreyweg");
        break;
    }
    case 292715:
    {
        returnValue = F("Sohnsmühle");
        break;
    }
    case 292716:
    {
        returnValue = F("Soholmbrück");
        break;
    }
    case 292717:
    {
        returnValue = F("Sohrener Str.");
        break;
    }
    case 292718:
    {
        returnValue = F("Sohrener Weg");
        break;
    }
    case 292719:
    {
        returnValue = F("Sohrenholz");
        break;
    }
    case 292720:
    {
        returnValue = F("Sohrenkamp");
        break;
    }
    case 292721:
    {
        returnValue = F("Sohrenweg");
        break;
    }
    case 292722:
    {
        returnValue = F("Sohrfeld");
        break;
    }
    case 292723:
    {
        returnValue = F("Sohrheide");
        break;
    }
    case 292724:
    {
        returnValue = F("Sohrstr.");
        break;
    }
    case 292725:
    {
        returnValue = F("Sohrtweg");
        break;
    }
    case 292726:
    {
        returnValue = F("Soiermühlweg");
        break;
    }
    case 292727:
    {
        returnValue = F("Soiernstr.");
        break;
    }
    case 292728:
    {
        returnValue = F("Soiernweg");
        break;
    }
    case 292729:
    {
        returnValue = F("Soierspitzstr.");
        break;
    }
    case 292730:
    {
        returnValue = F("Soiherweg");
        break;
    }
    case 292731:
    {
        returnValue = F("Soilagasse");
        break;
    }
    case 292732:
    {
        returnValue = F("Soinstr.");
        break;
    }
    case 292733:
    {
        returnValue = F("Soinweg");
        break;
    }
    case 292734:
    {
        returnValue = F("Soisbergstr.");
        break;
    }
    case 292735:
    {
        returnValue = F("Soisdorfer Str.");
        break;
    }
    case 292736:
    {
        returnValue = F("Soislieden");
        break;
    }
    case 292737:
    {
        returnValue = F("Solalindenstr.");
        break;
    }
    case 292738:
    {
        returnValue = F("Solar A");
        break;
    }
    case 292739:
    {
        returnValue = F("Solar B");
        break;
    }
    case 292740:
    {
        returnValue = F("Solar C");
        break;
    }
    case 292741:
    {
        returnValue = F("Solar D");
        break;
    }
    case 292742:
    {
        returnValue = F("Solar E");
        break;
    }
    case 292743:
    {
        returnValue = F("Solar F");
        break;
    }
    case 292744:
    {
        returnValue = F("Solar G");
        break;
    }
    case 292745:
    {
        returnValue = F("Solarparkstr.");
        break;
    }
    case 292746:
    {
        returnValue = F("Solarring");
        break;
    }
    case 292747:
    {
        returnValue = F("Solarstr.");
        break;
    }
    case 292748:
    {
        returnValue = F("Solarweg");
        break;
    }
    case 292749:
    {
        returnValue = F("Solastr.");
        break;
    }
    case 292750:
    {
        returnValue = F("Solbacher Str.");
        break;
    }
    case 292751:
    {
        returnValue = F("Solbachweg");
        break;
    }
    case 292752:
    {
        returnValue = F("Solbadstr.");
        break;
    }
    case 292753:
    {
        returnValue = F("Solberg");
        break;
    }
    case 292754:
    {
        returnValue = F("Solbergallee");
        break;
    }
    case 292755:
    {
        returnValue = F("Solblick");
        break;
    }
    case 292756:
    {
        returnValue = F("Solbrunnenweg");
        break;
    }
    case 292757:
    {
        returnValue = F("Solchstorfer Str.");
        break;
    }
    case 292758:
    {
        returnValue = F("Soldanellenstr.");
        break;
    }
    case 292759:
    {
        returnValue = F("Soldanellenweg");
        break;
    }
    case 292760:
    {
        returnValue = F("Soldanstr.");
        break;
    }
    case 292761:
    {
        returnValue = F("Soldatenbrunnenweg");
        break;
    }
    case 292762:
    {
        returnValue = F("Soldatenbrunnweg");
        break;
    }
    case 292763:
    {
        returnValue = F("Soldatendenkmal Neuenmarkt");
        break;
    }
    case 292764:
    {
        returnValue = F("Soldatengrabweg");
        break;
    }
    case 292765:
    {
        returnValue = F("Soldatengrund");
        break;
    }
    case 292766:
    {
        returnValue = F("Soldatengäßchen");
        break;
    }
    case 292767:
    {
        returnValue = F("Soldatenkamp");
        break;
    }
    case 292768:
    {
        returnValue = F("Soldatenredder");
        break;
    }
    case 292769:
    {
        returnValue = F("Soldatensträßchen");
        break;
    }
    case 292770:
    {
        returnValue = F("Soldatenweg");
        break;
    }
    case 292771:
    {
        returnValue = F("Soldenbachstr.");
        break;
    }
    case 292772:
    {
        returnValue = F("Solder");
        break;
    }
    case 292773:
    {
        returnValue = F("Solderstr.");
        break;
    }
    case 292774:
    {
        returnValue = F("Soldgasse");
        break;
    }
    case 292775:
    {
        returnValue = F("Soldier Road");
        break;
    }
    case 292776:
    {
        returnValue = F("Soldiner Str.");
        break;
    }
    case 292777:
    {
        returnValue = F("Soldiner Weg");
        break;
    }
    case 292778:
    {
        returnValue = F("Soldmannstr.");
        break;
    }
    case 292779:
    {
        returnValue = F("Soldnerstr.");
        break;
    }
    case 292780:
    {
        returnValue = F("Soldorfer Str.");
        break;
    }
    case 292781:
    {
        returnValue = F("Soldpuhlweg");
        break;
    }
    case 292782:
    {
        returnValue = F("Soldweg");
        break;
    }
    case 292783:
    {
        returnValue = F("Sole-Allee");
        break;
    }
    case 292784:
    {
        returnValue = F("Sole-Kurpark");
        break;
    }
    case 292785:
    {
        returnValue = F("Solebadstr.");
        break;
    }
    case 292786:
    {
        returnValue = F("Soleleitungsweg");
        break;
    }
    case 292787:
    {
        returnValue = F("Soleleitungsweg Aufschlagwasserweg");
        break;
    }
    case 292788:
    {
        returnValue = F("Solesmeser Str.");
        break;
    }
    case 292789:
    {
        returnValue = F("Solewasser-Vitalpark Bad Frankenhausen");
        break;
    }
    case 292790:
    {
        returnValue = F("Soleweg");
        break;
    }
    case 292791:
    {
        returnValue = F("Solferinostr.");
        break;
    }
    case 292792:
    {
        returnValue = F("Solgasse");
        break;
    }
    case 292793:
    {
        returnValue = F("Solgenweg");
        break;
    }
    case 292794:
    {
        returnValue = F("Solhofweg");
        break;
    }
    case 292795:
    {
        returnValue = F("Solhoopsweg");
        break;
    }
    case 292796:
    {
        returnValue = F("Solidaritätsstr.");
        break;
    }
    case 292797:
    {
        returnValue = F("Solikanter Dorfstr.");
        break;
    }
    case 292798:
    {
        returnValue = F("Solinger Str.");
        break;
    }
    case 292799:
    {
        returnValue = F("Solinger Weg");
        break;
    }
    case 292800:
    {
        returnValue = F("Solitude-Allee");
        break;
    }
    case 292801:
    {
        returnValue = F("Solitudeallee");
        break;
    }
    case 292802:
    {
        returnValue = F("Solitudestr.");
        break;
    }
    case 292803:
    {
        returnValue = F("Solitärweg");
        break;
    }
    case 292804:
    {
        returnValue = F("Solitüde");
        break;
    }
    case 292805:
    {
        returnValue = F("Solitüder Bogen");
        break;
    }
    case 292806:
    {
        returnValue = F("Solitüder Str.");
        break;
    }
    case 292807:
    {
        returnValue = F("Solitüder Waldhöhe");
        break;
    }
    case 292808:
    {
        returnValue = F("Solkendorfer Str.");
        break;
    }
    case 292809:
    {
        returnValue = F("Solkentrift");
        break;
    }
    case 292810:
    {
        returnValue = F("Solkoppel");
        break;
    }
    case 292811:
    {
        returnValue = F("Solkowskyweg");
        break;
    }
    case 292812:
    {
        returnValue = F("Solkweg");
        break;
    }
    case 292813:
    {
        returnValue = F("Soll");
        break;
    }
    case 292814:
    {
        returnValue = F("Solla");
        break;
    }
    case 292815:
    {
        returnValue = F("Sollach");
        break;
    }
    case 292816:
    {
        returnValue = F("Sollacher Str.");
        break;
    }
    case 292817:
    {
        returnValue = F("Sollachestr.");
        break;
    }
    case 292818:
    {
        returnValue = F("Sollachstr.");
        break;
    }
    case 292819:
    {
        returnValue = F("Sollachweg");
        break;
    }
    case 292820:
    {
        returnValue = F("Sollacker");
        break;
    }
    case 292821:
    {
        returnValue = F("Sollackerweg");
        break;
    }
    case 292822:
    {
        returnValue = F("Sollbacher Str.");
        break;
    }
    case 292823:
    {
        returnValue = F("Sollbachstr.");
        break;
    }
    case 292824:
    {
        returnValue = F("Sollenberg");
        break;
    }
    case 292825:
    {
        returnValue = F("Sollenberger Str.");
        break;
    }
    case 292826:
    {
        returnValue = F("Sollerberg");
        break;
    }
    case 292827:
    {
        returnValue = F("Sollerin");
        break;
    }
    case 292828:
    {
        returnValue = F("Sollern");
        break;
    }
    case 292829:
    {
        returnValue = F("Sollerweg");
        break;
    }
    case 292830:
    {
        returnValue = F("Sollestr.");
        break;
    }
    case 292831:
    {
        returnValue = F("Solleweg");
        break;
    }
    case 292832:
    {
        returnValue = F("Sollhaben I");
        break;
    }
    case 292833:
    {
        returnValue = F("Sollhaben II");
        break;
    }
    case 292834:
    {
        returnValue = F("Sollhängweg");
        break;
    }
    case 292835:
    {
        returnValue = F("Solligerbach");
        break;
    }
    case 292836:
    {
        returnValue = F("Solligerhof");
        break;
    }
    case 292837:
    {
        returnValue = F("Solligsweg");
        break;
    }
    case 292838:
    {
        returnValue = F("Solling Fun Park");
        break;
    }
    case 292839:
    {
        returnValue = F("Sollingblick");
        break;
    }
    case 292840:
    {
        returnValue = F("Sollingbreite");
        break;
    }
    case 292841:
    {
        returnValue = F("Sollingeck");
        break;
    }
    case 292842:
    {
        returnValue = F("Sollinger Landstr.");
        break;
    }
    case 292843:
    {
        returnValue = F("Sollinger Oberhütte");
        break;
    }
    case 292844:
    {
        returnValue = F("Sollinger Str.");
        break;
    }
    case 292845:
    {
        returnValue = F("Sollingstr.");
        break;
    }
    case 292846:
    {
        returnValue = F("Sollingtor");
        break;
    }
    case 292847:
    {
        returnValue = F("Sollingtor Kreisel");
        break;
    }
    case 292848:
    {
        returnValue = F("Sollingtrift");
        break;
    }
    case 292849:
    {
        returnValue = F("Sollingweg");
        break;
    }
    case 292850:
    {
        returnValue = F("Sollnau");
        break;
    }
    case 292851:
    {
        returnValue = F("Sollnes");
        break;
    }
    case 292852:
    {
        returnValue = F("Sollngriesbacher Str.");
        break;
    }
    case 292853:
    {
        returnValue = F("Sollnitzer Str.");
        break;
    }
    case 292854:
    {
        returnValue = F("Sollredder");
        break;
    }
    case 292855:
    {
        returnValue = F("Sollschwitz");
        break;
    }
    case 292856:
    {
        returnValue = F("Sollschwitzer Str.");
        break;
    }
    case 292857:
    {
        returnValue = F("Sollstedter Str.");
        break;
    }
    case 292858:
    {
        returnValue = F("Sollstedter Weg");
        break;
    }
    case 292859:
    {
        returnValue = F("Sollweg");
        break;
    }
    case 292860:
    {
        returnValue = F("Sollwitt-Osterfeld");
        break;
    }
    case 292861:
    {
        returnValue = F("Sollwitt-Süderfeld");
        break;
    }
    case 292862:
    {
        returnValue = F("Sollwitter Chaussee");
        break;
    }
    case 292863:
    {
        returnValue = F("Solmbecker Weg");
        break;
    }
    case 292864:
    {
        returnValue = F("Solmecke");
        break;
    }
    case 292865:
    {
        returnValue = F("Solmische-Weiher-Str.");
        break;
    }
    case 292866:
    {
        returnValue = F("Solmsbachstr.");
        break;
    }
    case 292867:
    {
        returnValue = F("Solmser Gewerbepark");
        break;
    }
    case 292868:
    {
        returnValue = F("Solmser Str.");
        break;
    }
    case 292869:
    {
        returnValue = F("Solmser Weg");
        break;
    }
    case 292870:
    {
        returnValue = F("Solmserstr.");
        break;
    }
    case 292871:
    {
        returnValue = F("Solmserweg");
        break;
    }
    case 292872:
    {
        returnValue = F("Solmsstr.");
        break;
    }
    case 292873:
    {
        returnValue = F("Solner Breite");
        break;
    }
    case 292874:
    {
        returnValue = F("Solnhofer Str.");
        break;
    }
    case 292875:
    {
        returnValue = F("Sologenweg");
        break;
    }
    case 292876:
    {
        returnValue = F("Solomann");
        break;
    }
    case 292877:
    {
        returnValue = F("Solothurner Str.");
        break;
    }
    case 292878:
    {
        returnValue = F("Solothurnstr.");
        break;
    }
    case 292879:
    {
        returnValue = F("Solpker Str.");
        break;
    }
    case 292880:
    {
        returnValue = F("Solpker Weg");
        break;
    }
    case 292881:
    {
        returnValue = F("Solquelle");
        break;
    }
    case 292882:
    {
        returnValue = F("Solschener Str.");
        break;
    }
    case 292883:
    {
        returnValue = F("Solsdorf");
        break;
    }
    case 292884:
    {
        returnValue = F("Solsdorfer Weg");
        break;
    }
    case 292885:
    {
        returnValue = F("Solstr.");
        break;
    }
    case 292886:
    {
        returnValue = F("Soltacker");
        break;
    }
    case 292887:
    {
        returnValue = F("Soltannenschneise");
        break;
    }
    case 292888:
    {
        returnValue = F("Soltauer Allee");
        break;
    }
    case 292889:
    {
        returnValue = F("Soltauer Chaussee");
        break;
    }
    case 292890:
    {
        returnValue = F("Soltauer Str.");
        break;
    }
    case 292891:
    {
        returnValue = F("Soltauer Str./B209");
        break;
    }
    case 292892:
    {
        returnValue = F("Soltaus Berg");
        break;
    }
    case 292893:
    {
        returnValue = F("Soltaus Koppel");
        break;
    }
    case 292894:
    {
        returnValue = F("Soltausredder");
        break;
    }
    case 292895:
    {
        returnValue = F("Soltaustr.");
        break;
    }
    case 292896:
    {
        returnValue = F("Soltbargen");
        break;
    }
    case 292897:
    {
        returnValue = F("Soltborg");
        break;
    }
    case 292898:
    {
        returnValue = F("Solteich");
        break;
    }
    case 292899:
    {
        returnValue = F("Soltenbek");
        break;
    }
    case 292900:
    {
        returnValue = F("Solterbeerenhof");
        break;
    }
    case 292901:
    {
        returnValue = F("Solterbergstr.");
        break;
    }
    case 292902:
    {
        returnValue = F("Soltershof");
        break;
    }
    case 292903:
    {
        returnValue = F("Soltfeld");
        break;
    }
    case 292904:
    {
        returnValue = F("Soltgrund");
        break;
    }
    case 292905:
    {
        returnValue = F("Solthörner Str.");
        break;
    }
    case 292906:
    {
        returnValue = F("Soltkamp");
        break;
    }
    case 292907:
    {
        returnValue = F("Soltmannstr.");
        break;
    }
    case 292908:
    {
        returnValue = F("Soltwarf");
        break;
    }
    case 292909:
    {
        returnValue = F("Soltweg");
        break;
    }
    case 292910:
    {
        returnValue = F("Soltwisch");
        break;
    }
    case 292911:
    {
        returnValue = F("Soltwischredder");
        break;
    }
    case 292912:
    {
        returnValue = F("Soltystr.");
        break;
    }
    case 292913:
    {
        returnValue = F("Solvay-Str.");
        break;
    }
    case 292914:
    {
        returnValue = F("Solvayplatz");
        break;
    }
    case 292915:
    {
        returnValue = F("Solvaystr.");
        break;
    }
    case 292916:
    {
        returnValue = F("Solwaldeinfahrt");
        break;
    }
    case 292917:
    {
        returnValue = F("Solwaldweg");
        break;
    }
    case 292918:
    {
        returnValue = F("Solweg");
        break;
    }
    case 292919:
    {
        returnValue = F("Solwiesenweg");
        break;
    }
    case 292920:
    {
        returnValue = F("Solzbachstr.");
        break;
    }
    case 292921:
    {
        returnValue = F("Solzer Dorfstr.");
        break;
    }
    case 292922:
    {
        returnValue = F("Solzer Str.");
        break;
    }
    case 292923:
    {
        returnValue = F("Solzgrund");
        break;
    }
    case 292924:
    {
        returnValue = F("Solzower Weg");
        break;
    }
    case 292925:
    {
        returnValue = F("Solzstr.");
        break;
    }
    case 292926:
    {
        returnValue = F("Solztalstr.");
        break;
    }
    case 292927:
    {
        returnValue = F("Sombernonstr.");
        break;
    }
    case 292928:
    {
        returnValue = F("Sombers");
        break;
    }
    case 292929:
    {
        returnValue = F("Somborer Str.");
        break;
    }
    case 292930:
    {
        returnValue = F("Somborer Weg");
        break;
    }
    case 292931:
    {
        returnValue = F("Somborner Str.");
        break;
    }
    case 292932:
    {
        returnValue = F("Sommenhardter Str.");
        break;
    }
    case 292933:
    {
        returnValue = F("Sommenhardter Weg");
        break;
    }
    case 292934:
    {
        returnValue = F("Sommer-Martins-Brink");
        break;
    }
    case 292935:
    {
        returnValue = F("Sommeracher Str.");
        break;
    }
    case 292936:
    {
        returnValue = F("Sommeracher Weg");
        break;
    }
    case 292937:
    {
        returnValue = F("Sommeracker");
        break;
    }
    case 292938:
    {
        returnValue = F("Sommerackerweg");
        break;
    }
    case 292939:
    {
        returnValue = F("Sommerangerweg");
        break;
    }
    case 292940:
    {
        returnValue = F("Sommerau");
        break;
    }
    case 292941:
    {
        returnValue = F("Sommerauer Str.");
        break;
    }
    case 292942:
    {
        returnValue = F("Sommeraustr.");
        break;
    }
    case 292943:
    {
        returnValue = F("Sommerauweg");
        break;
    }
    case 292944:
    {
        returnValue = F("Sommerbachstr.");
        break;
    }
    case 292945:
    {
        returnValue = F("Sommerbachweg");
        break;
    }
    case 292946:
    {
        returnValue = F("Sommerbad");
        break;
    }
    case 292947:
    {
        returnValue = F("Sommerbadstr.");
        break;
    }
    case 292948:
    {
        returnValue = F("Sommerbecker Weg");
        break;
    }
    case 292949:
    {
        returnValue = F("Sommerbenden");
        break;
    }
    case 292950:
    {
        returnValue = F("Sommerberg");
        break;
    }
    case 292951:
    {
        returnValue = F("Sommerbergblick");
        break;
    }
    case 292952:
    {
        returnValue = F("Sommerberger Heide");
        break;
    }
    case 292953:
    {
        returnValue = F("Sommerbergring");
        break;
    }
    case 292954:
    {
        returnValue = F("Sommerbergstaffel");
        break;
    }
    case 292955:
    {
        returnValue = F("Sommerbergstr.");
        break;
    }
    case 292956:
    {
        returnValue = F("Sommerbergsweg");
        break;
    }
    case 292957:
    {
        returnValue = F("Sommerbergtunnel");
        break;
    }
    case 292958:
    {
        returnValue = F("Sommerbergweg");
        break;
    }
    case 292959:
    {
        returnValue = F("Sommerblütenweg");
        break;
    }
    case 292960:
    {
        returnValue = F("Sommerbosteler Str.");
        break;
    }
    case 292961:
    {
        returnValue = F("Sommerbreite");
        break;
    }
    case 292962:
    {
        returnValue = F("Sommerbuckelweg");
        break;
    }
    case 292963:
    {
        returnValue = F("Sommerbuckweg");
        break;
    }
    case 292964:
    {
        returnValue = F("Sommerbuschweg");
        break;
    }
    case 292965:
    {
        returnValue = F("Sommerda");
        break;
    }
    case 292966:
    {
        returnValue = F("Sommerdamm");
        break;
    }
    case 292967:
    {
        returnValue = F("Sommerdeich");
        break;
    }
    case 292968:
    {
        returnValue = F("Sommerdeichstr.");
        break;
    }
    case 292969:
    {
        returnValue = F("Sommerdyck");
        break;
    }
    case 292970:
    {
        returnValue = F("Sommerfeld");
        break;
    }
    case 292971:
    {
        returnValue = F("Sommerfelder Chaussee");
        break;
    }
    case 292972:
    {
        returnValue = F("Sommerfelder Siedlung");
        break;
    }
    case 292973:
    {
        returnValue = F("Sommerfelder Str.");
        break;
    }
    case 292974:
    {
        returnValue = F("Sommerfelder Weg");
        break;
    }
    case 292975:
    {
        returnValue = F("Sommerfeldstr.");
        break;
    }
    case 292976:
    {
        returnValue = F("Sommerfeldweg");
        break;
    }
    case 292977:
    {
        returnValue = F("Sommerfelsenweg");
        break;
    }
    case 292978:
    {
        returnValue = F("Sommerfliederweg");
        break;
    }
    case 292979:
    {
        returnValue = F("Sommergarten");
        break;
    }
    case 292980:
    {
        returnValue = F("Sommergasse");
        break;
    }
    case 292981:
    {
        returnValue = F("Sommergrabenweg");
        break;
    }
    case 292982:
    {
        returnValue = F("Sommergrund");
        break;
    }
    case 292983:
    {
        returnValue = F("Sommergärten");
        break;
    }
    case 292984:
    {
        returnValue = F("Sommerhagen");
        break;
    }
    case 292985:
    {
        returnValue = F("Sommerhainweg");
        break;
    }
    case 292986:
    {
        returnValue = F("Sommerhalbe");
        break;
    }
    case 292987:
    {
        returnValue = F("Sommerhalde");
        break;
    }
    case 292988:
    {
        returnValue = F("Sommerhaldenstr.");
        break;
    }
    case 292989:
    {
        returnValue = F("Sommerhaldenweg");
        break;
    }
    case 292990:
    {
        returnValue = F("Sommerhaldeweg");
        break;
    }
    case 292991:
    {
        returnValue = F("Sommerhaltweg");
        break;
    }
    case 292992:
    {
        returnValue = F("Sommerhan");
        break;
    }
    case 292993:
    {
        returnValue = F("Sommerhangweg");
        break;
    }
    case 292994:
    {
        returnValue = F("Sommerhansnweg");
        break;
    }
    case 292995:
    {
        returnValue = F("Sommerhaus");
        break;
    }
    case 292996:
    {
        returnValue = F("Sommerhausberg");
        break;
    }
    case 292997:
    {
        returnValue = F("Sommerhausen");
        break;
    }
    case 292998:
    {
        returnValue = F("Sommerhausener Weg");
        break;
    }
    case 292999:
    {
        returnValue = F("Sommerhausstr.");
        break;
    }
    case 293000:
    {
        returnValue = F("Sommerhausweg");
        break;
    }
    case 293001:
    {
        returnValue = F("Sommerhauweg");
        break;
    }
    case 293002:
    {
        returnValue = F("Sommerheck");
        break;
    }
    case 293003:
    {
        returnValue = F("Sommerheldenweg");
        break;
    }
    case 293004:
    {
        returnValue = F("Sommerhelle");
        break;
    }
    case 293005:
    {
        returnValue = F("Sommerhellenweg");
        break;
    }
    case 293006:
    {
        returnValue = F("Sommerhof");
        break;
    }
    case 293007:
    {
        returnValue = F("Sommerhofenstr.");
        break;
    }
    case 293008:
    {
        returnValue = F("Sommerhofensträßle");
        break;
    }
    case 293009:
    {
        returnValue = F("Sommerhoferweg");
        break;
    }
    case 293010:
    {
        returnValue = F("Sommerhofweg");
        break;
    }
    case 293011:
    {
        returnValue = F("Sommerhälde");
        break;
    }
    case 293012:
    {
        returnValue = F("Sommerhäuschenweg");
        break;
    }
    case 293013:
    {
        returnValue = F("Sommerhäuser Str.");
        break;
    }
    case 293014:
    {
        returnValue = F("Sommerhübelweg");
        break;
    }
    case 293015:
    {
        returnValue = F("Sommerichstr.");
        break;
    }
    case 293016:
    {
        returnValue = F("Sommerichweg");
        break;
    }
    case 293017:
    {
        returnValue = F("Sommeritzer Str.");
        break;
    }
    case 293018:
    {
        returnValue = F("Sommerkahler Weg");
        break;
    }
    case 293019:
    {
        returnValue = F("Sommerkamp");
        break;
    }
    case 293020:
    {
        returnValue = F("Sommerkamp Feld");
        break;
    }
    case 293021:
    {
        returnValue = F("Sommerkampsweg");
        break;
    }
    case 293022:
    {
        returnValue = F("Sommerkaule");
        break;
    }
    case 293023:
    {
        returnValue = F("Sommerkeller");
        break;
    }
    case 293024:
    {
        returnValue = F("Sommerkellerstr.");
        break;
    }
    case 293025:
    {
        returnValue = F("Sommerkellerweg");
        break;
    }
    case 293026:
    {
        returnValue = F("Sommerkornrothweg");
        break;
    }
    case 293027:
    {
        returnValue = F("Sommerland");
        break;
    }
    case 293028:
    {
        returnValue = F("Sommerlandstieg");
        break;
    }
    case 293029:
    {
        returnValue = F("Sommerlandstr.");
        break;
    }
    case 293030:
    {
        returnValue = F("Sommerleite");
        break;
    }
    case 293031:
    {
        returnValue = F("Sommerleitenweg");
        break;
    }
    case 293032:
    {
        returnValue = F("Sommerleithe");
        break;
    }
    case 293033:
    {
        returnValue = F("Sommerleithe-Kuxberg");
        break;
    }
    case 293034:
    {
        returnValue = F("Sommerleithen");
        break;
    }
    case 293035:
    {
        returnValue = F("Sommerliede");
        break;
    }
    case 293036:
    {
        returnValue = F("Sommerliete");
        break;
    }
    case 293037:
    {
        returnValue = F("Sommerlocher Str.");
        break;
    }
    case 293038:
    {
        returnValue = F("Sommerlohneweg");
        break;
    }
    case 293039:
    {
        returnValue = F("Sommerländer Riep");
        break;
    }
    case 293040:
    {
        returnValue = F("Sommermattenweg");
        break;
    }
    case 293041:
    {
        returnValue = F("Sommermorgen");
        break;
    }
    case 293042:
    {
        returnValue = F("Sommerpadd");
        break;
    }
    case 293043:
    {
        returnValue = F("Sommerpark");
        break;
    }
    case 293044:
    {
        returnValue = F("Sommerpatt");
        break;
    }
    case 293045:
    {
        returnValue = F("Sommerpointweg");
        break;
    }
    case 293046:
    {
        returnValue = F("Sommerpostweg");
        break;
    }
    case 293047:
    {
        returnValue = F("Sommerrain");
        break;
    }
    case 293048:
    {
        returnValue = F("Sommerrainstr.");
        break;
    }
    case 293049:
    {
        returnValue = F("Sommerrainweg");
        break;
    }
    case 293050:
    {
        returnValue = F("Sommerrangen");
        break;
    }
    case 293051:
    {
        returnValue = F("Sommerreithweg");
        break;
    }
    case 293052:
    {
        returnValue = F("Sommerring");
        break;
    }
    case 293053:
    {
        returnValue = F("Sommerrodelbahn");
        break;
    }
    case 293054:
    {
        returnValue = F("Sommerrodelbahn Saalburg");
        break;
    }
    case 293055:
    {
        returnValue = F("Sommerrodelbahn-Märchenwald");
        break;
    }
    case 293056:
    {
        returnValue = F("Sommers Barg");
        break;
    }
    case 293057:
    {
        returnValue = F("Sommers Berg");
        break;
    }
    case 293058:
    {
        returnValue = F("Sommers Bleiche");
        break;
    }
    case 293059:
    {
        returnValue = F("Sommers Weg");
        break;
    }
    case 293060:
    {
        returnValue = F("Sommersbachweg");
        break;
    }
    case 293061:
    {
        returnValue = F("Sommersberg");
        break;
    }
    case 293062:
    {
        returnValue = F("Sommerschenburger Str.");
        break;
    }
    case 293063:
    {
        returnValue = F("Sommerschenburger Weg");
        break;
    }
    case 293064:
    {
        returnValue = F("Sommerschlade");
        break;
    }
    case 293065:
    {
        returnValue = F("Sommerschuhstr.");
        break;
    }
    case 293066:
    {
        returnValue = F("Sommersdorf");
        break;
    }
    case 293067:
    {
        returnValue = F("Sommersdorfer Chaussee");
        break;
    }
    case 293068:
    {
        returnValue = F("Sommersdorfer Damm");
        break;
    }
    case 293069:
    {
        returnValue = F("Sommersdorfer Str.");
        break;
    }
    case 293070:
    {
        returnValue = F("Sommerseite");
        break;
    }
    case 293071:
    {
        returnValue = F("Sommerseitebergsträßchen");
        break;
    }
    case 293072:
    {
        returnValue = F("Sommerseitenerweg");
        break;
    }
    case 293073:
    {
        returnValue = F("Sommerseitenstr.");
        break;
    }
    case 293074:
    {
        returnValue = F("Sommerseitenweg");
        break;
    }
    case 293075:
    {
        returnValue = F("Sommerseitestr.");
        break;
    }
    case 293076:
    {
        returnValue = F("Sommerseitetalsträßchen");
        break;
    }
    case 293077:
    {
        returnValue = F("Sommersell");
        break;
    }
    case 293078:
    {
        returnValue = F("Sommerseller Str.");
        break;
    }
    case 293079:
    {
        returnValue = F("Sommersgarten");
        break;
    }
    case 293080:
    {
        returnValue = F("Sommersgasse");
        break;
    }
    case 293081:
    {
        returnValue = F("Sommershausener Str.");
        break;
    }
    case 293082:
    {
        returnValue = F("Sommershauser Str.");
        break;
    }
    case 293083:
    {
        returnValue = F("Sommersheck");
        break;
    }
    case 293084:
    {
        returnValue = F("Sommerskamp");
        break;
    }
    case 293085:
    {
        returnValue = F("Sommerskathweg");
        break;
    }
    case 293086:
    {
        returnValue = F("Sommersrand");
        break;
    }
    case 293087:
    {
        returnValue = F("Sommerstaigle");
        break;
    }
    case 293088:
    {
        returnValue = F("Sommerstallweg");
        break;
    }
    case 293089:
    {
        returnValue = F("Sommerstedter Str.");
        break;
    }
    case 293090:
    {
        returnValue = F("Sommersteg");
        break;
    }
    case 293091:
    {
        returnValue = F("Sommersteig");
        break;
    }
    case 293092:
    {
        returnValue = F("Sommersteige");
        break;
    }
    case 293093:
    {
        returnValue = F("Sommersteigweg");
        break;
    }
    case 293094:
    {
        returnValue = F("Sommersteinweg");
        break;
    }
    case 293095:
    {
        returnValue = F("Sommerstichweg");
        break;
    }
    case 293096:
    {
        returnValue = F("Sommerstiege");
        break;
    }
    case 293097:
    {
        returnValue = F("Sommerstr.");
        break;
    }
    case 293098:
    {
        returnValue = F("Sommerswalde");
        break;
    }
    case 293099:
    {
        returnValue = F("Sommerswalder Chaussee");
        break;
    }
    case 293100:
    {
        returnValue = F("Sommersweg");
        break;
    }
    case 293101:
    {
        returnValue = F("Sommertal");
        break;
    }
    case 293102:
    {
        returnValue = F("Sommertalstr.");
        break;
    }
    case 293103:
    {
        returnValue = F("Sommerterrasse");
        break;
    }
    case 293104:
    {
        returnValue = F("Sommertshof");
        break;
    }
    case 293105:
    {
        returnValue = F("Sommertäleweg");
        break;
    }
    case 293106:
    {
        returnValue = F("Sommerwald");
        break;
    }
    case 293107:
    {
        returnValue = F("Sommerwaldstr.");
        break;
    }
    case 293108:
    {
        returnValue = F("Sommerwaldweg");
        break;
    }
    case 293109:
    {
        returnValue = F("Sommerwandstr.");
        break;
    }
    case 293110:
    {
        returnValue = F("Sommerwandweg");
        break;
    }
    case 293111:
    {
        returnValue = F("Sommerweg");
        break;
    }
    case 293112:
    {
        returnValue = F("Sommerweide");
        break;
    }
    case 293113:
    {
        returnValue = F("Sommerweidstr.");
        break;
    }
    case 293114:
    {
        returnValue = F("Sommerwiese");
        break;
    }
    case 293115:
    {
        returnValue = F("Sommerwiesen");
        break;
    }
    case 293116:
    {
        returnValue = F("Sommerwiesenweg");
        break;
    }
    case 293117:
    {
        returnValue = F("Sommeräckerstr.");
        break;
    }
    case 293118:
    {
        returnValue = F("Sommestr.");
        break;
    }
    case 293119:
    {
        returnValue = F("Sommeter Weg");
        break;
    }
    case 293120:
    {
        returnValue = F("Sommeweg");
        break;
    }
    case 293121:
    {
        returnValue = F("Sommmerseitetalsträßchen");
        break;
    }
    case 293122:
    {
        returnValue = F("Somplarer Str.");
        break;
    }
    case 293123:
    {
        returnValue = F("Somplarer-Str.");
        break;
    }
    case 293124:
    {
        returnValue = F("Sompweg");
        break;
    }
    case 293125:
    {
        returnValue = F("Somsdorfer Str.");
        break;
    }
    case 293126:
    {
        returnValue = F("Sondenweg");
        break;
    }
    case 293127:
    {
        returnValue = F("Sonder Weg");
        break;
    }
    case 293128:
    {
        returnValue = F("Sonder-Badeplatz");
        break;
    }
    case 293129:
    {
        returnValue = F("Sonderbachstr.");
        break;
    }
    case 293130:
    {
        returnValue = F("Sonderbreite");
        break;
    }
    case 293131:
    {
        returnValue = F("Sonderbucher Steig");
        break;
    }
    case 293132:
    {
        returnValue = F("Sonderbucher Steige");
        break;
    }
    case 293133:
    {
        returnValue = F("Sonderbucher Str.");
        break;
    }
    case 293134:
    {
        returnValue = F("Sonderbucher Weg");
        break;
    }
    case 293135:
    {
        returnValue = F("Sonderburg");
        break;
    }
    case 293136:
    {
        returnValue = F("Sonderburger Allee");
        break;
    }
    case 293137:
    {
        returnValue = F("Sonderburger Str.");
        break;
    }
    case 293138:
    {
        returnValue = F("Sonderdorf");
        break;
    }
    case 293139:
    {
        returnValue = F("Sonderfelder Weg");
        break;
    }
    case 293140:
    {
        returnValue = F("Sondergai");
        break;
    }
    case 293141:
    {
        returnValue = F("Sondergeldweg");
        break;
    }
    case 293142:
    {
        returnValue = F("Sonderham");
        break;
    }
    case 293143:
    {
        returnValue = F("Sonderhamer Weg");
        break;
    }
    case 293144:
    {
        returnValue = F("Sonderhartweg");
        break;
    }
    case 293145:
    {
        returnValue = F("Sonderhofer Str.");
        break;
    }
    case 293146:
    {
        returnValue = F("Sonderhofer Weg");
        break;
    }
    case 293147:
    {
        returnValue = F("Sonderhues Esch");
        break;
    }
    case 293148:
    {
        returnValue = F("Sonderhöfer Str.");
        break;
    }
    case 293149:
    {
        returnValue = F("Sonderkamp");
        break;
    }
    case 293150:
    {
        returnValue = F("Sonderlandeplatz für Luftsportgeräte Zweidorf");
        break;
    }
    case 293151:
    {
        returnValue = F("Sondermannstr.");
        break;
    }
    case 293152:
    {
        returnValue = F("Sondermoninger Str.");
        break;
    }
    case 293153:
    {
        returnValue = F("Sondermöhlen Pfad");
        break;
    }
    case 293154:
    {
        returnValue = F("Sondermühlener Str.");
        break;
    }
    case 293155:
    {
        returnValue = F("Sondern");
        break;
    }
    case 293156:
    {
        returnValue = F("Sondernach");
        break;
    }
    case 293157:
    {
        returnValue = F("Sondernacher Weg");
        break;
    }
    case 293158:
    {
        returnValue = F("Sondernachtweg");
        break;
    }
    case 293159:
    {
        returnValue = F("Sondernauer Str.");
        break;
    }
    case 293160:
    {
        returnValue = F("Sonderner Str.");
        break;
    }
    case 293161:
    {
        returnValue = F("Sondernheimer Str.");
        break;
    }
    case 293162:
    {
        returnValue = F("Sondernoher Str.");
        break;
    }
    case 293163:
    {
        returnValue = F("Sondersbach");
        break;
    }
    case 293164:
    {
        returnValue = F("Sondersfelder Str.");
        break;
    }
    case 293165:
    {
        returnValue = F("Sondershausener Str.");
        break;
    }
    case 293166:
    {
        returnValue = F("Sondershäuser Landstr.");
        break;
    }
    case 293167:
    {
        returnValue = F("Sondershäuser Str.");
        break;
    }
    case 293168:
    {
        returnValue = F("Sondershäuser Weg");
        break;
    }
    case 293169:
    {
        returnValue = F("Sonderstr.");
        break;
    }
    case 293170:
    {
        returnValue = F("Sondersweg");
        break;
    }
    case 293171:
    {
        returnValue = F("Sonderweg");
        break;
    }
    case 293172:
    {
        returnValue = F("Sonderwiesen");
        break;
    }
    case 293173:
    {
        returnValue = F("Sonderwykstr.");
        break;
    }
    case 293174:
    {
        returnValue = F("Sondheimer Str.");
        break;
    }
    case 293175:
    {
        returnValue = F("Sondheimer-Au-Str.");
        break;
    }
    case 293176:
    {
        returnValue = F("Sondraer Str.");
        break;
    }
    case 293177:
    {
        returnValue = F("Sondrioplatz");
        break;
    }
    case 293178:
    {
        returnValue = F("Sonnabendweg");
        break;
    }
    case 293179:
    {
        returnValue = F("Sonnau");
        break;
    }
    case 293180:
    {
        returnValue = F("Sonnbach");
        break;
    }
    case 293181:
    {
        returnValue = F("Sonnbergstr.");
        break;
    }
    case 293182:
    {
        returnValue = F("Sonnbergsweg");
        break;
    }
    case 293183:
    {
        returnValue = F("Sonnbichl");
        break;
    }
    case 293184:
    {
        returnValue = F("Sonnblick");
        break;
    }
    case 293185:
    {
        returnValue = F("Sonnblickweg");
        break;
    }
    case 293186:
    {
        returnValue = F("Sonndorfer Siedlung");
        break;
    }
    case 293187:
    {
        returnValue = F("Sonndorfer Weg");
        break;
    }
    case 293188:
    {
        returnValue = F("Sonne");
        break;
    }
    case 293189:
    {
        returnValue = F("Sonneberger Str.");
        break;
    }
    case 293190:
    {
        returnValue = F("Sonnebergstr.");
        break;
    }
    case 293191:
    {
        returnValue = F("Sonnebergweg");
        break;
    }
    case 293192:
    {
        returnValue = F("Sonneborner Str.");
        break;
    }
    case 293193:
    {
        returnValue = F("Sonneborner Weg");
        break;
    }
    case 293194:
    {
        returnValue = F("Sonneck");
        break;
    }
    case 293195:
    {
        returnValue = F("Sonneckstr.");
        break;
    }
    case 293196:
    {
        returnValue = F("Sonneckweg");
        break;
    }
    case 293197:
    {
        returnValue = F("Sonnefelder Str.");
        break;
    }
    case 293198:
    {
        returnValue = F("Sonnekamp");
        break;
    }
    case 293199:
    {
        returnValue = F("Sonnemannstr.");
        break;
    }
    case 293200:
    {
        returnValue = F("Sonnen");
        break;
    }
    case 293201:
    {
        returnValue = F("Sonnen Weg");
        break;
    }
    case 293202:
    {
        returnValue = F("Sonnen-Weg");
        break;
    }
    case 293203:
    {
        returnValue = F("Sonnenalle");
        break;
    }
    case 293204:
    {
        returnValue = F("Sonnenallee");
        break;
    }
    case 293205:
    {
        returnValue = F("Sonnenalp");
        break;
    }
    case 293206:
    {
        returnValue = F("Sonnenanger");
        break;
    }
    case 293207:
    {
        returnValue = F("Sonnenau");
        break;
    }
    case 293208:
    {
        returnValue = F("Sonnenbach");
        break;
    }
    case 293209:
    {
        returnValue = F("Sonnenbadweg");
        break;
    }
    case 293210:
    {
        returnValue = F("Sonnenbaum");
        break;
    }
    case 293211:
    {
        returnValue = F("Sonnenberg");
        break;
    }
    case 293212:
    {
        returnValue = F("Sonnenberg-Weg");
        break;
    }
    case 293213:
    {
        returnValue = F("Sonnenbergblick");
        break;
    }
    case 293214:
    {
        returnValue = F("Sonnenberger Ring");
        break;
    }
    case 293215:
    {
        returnValue = F("Sonnenberger Str.");
        break;
    }
    case 293216:
    {
        returnValue = F("Sonnenberger Weg");
        break;
    }
    case 293217:
    {
        returnValue = F("Sonnenberghöfe");
        break;
    }
    case 293218:
    {
        returnValue = F("Sonnenbergplatz");
        break;
    }
    case 293219:
    {
        returnValue = F("Sonnenbergs Richtstatt");
        break;
    }
    case 293220:
    {
        returnValue = F("Sonnenbergsredder");
        break;
    }
    case 293221:
    {
        returnValue = F("Sonnenbergstr.");
        break;
    }
    case 293222:
    {
        returnValue = F("Sonnenbergsweg");
        break;
    }
    case 293223:
    {
        returnValue = F("Sonnenbergweg");
        break;
    }
    case 293224:
    {
        returnValue = F("Sonnenbichel");
        break;
    }
    case 293225:
    {
        returnValue = F("Sonnenbichelweg");
        break;
    }
    case 293226:
    {
        returnValue = F("Sonnenbichl");
        break;
    }
    case 293227:
    {
        returnValue = F("Sonnenbichlstr.");
        break;
    }
    case 293228:
    {
        returnValue = F("Sonnenblick");
        break;
    }
    case 293229:
    {
        returnValue = F("Sonnenblickallee");
        break;
    }
    case 293230:
    {
        returnValue = F("Sonnenblumenhöhe");
        break;
    }
    case 293231:
    {
        returnValue = F("Sonnenblumenrain");
        break;
    }
    case 293232:
    {
        returnValue = F("Sonnenblumenring");
        break;
    }
    case 293233:
    {
        returnValue = F("Sonnenblumenstr.");
        break;
    }
    case 293234:
    {
        returnValue = F("Sonnenblumenweg");
        break;
    }
    case 293235:
    {
        returnValue = F("Sonnenborn");
        break;
    }
    case 293236:
    {
        returnValue = F("Sonnenborner Str.");
        break;
    }
    case 293237:
    {
        returnValue = F("Sonnenbornstr.");
        break;
    }
    case 293238:
    {
        returnValue = F("Sonnenborsteler Kirchweg");
        break;
    }
    case 293239:
    {
        returnValue = F("Sonnenborsteler Weg");
        break;
    }
    case 293240:
    {
        returnValue = F("Sonnenbrede");
        break;
    }
    case 293241:
    {
        returnValue = F("Sonnenbree");
        break;
    }
    case 293242:
    {
        returnValue = F("Sonnenbreite");
        break;
    }
    case 293243:
    {
        returnValue = F("Sonnenbrink");
        break;
    }
    case 293244:
    {
        returnValue = F("Sonnenbrinkstr.");
        break;
    }
    case 293245:
    {
        returnValue = F("Sonnenbrücke");
        break;
    }
    case 293246:
    {
        returnValue = F("Sonnenbuck");
        break;
    }
    case 293247:
    {
        returnValue = F("Sonnenburger Bahn");
        break;
    }
    case 293248:
    {
        returnValue = F("Sonnenburger Str.");
        break;
    }
    case 293249:
    {
        returnValue = F("Sonnenburger Weg");
        break;
    }
    case 293250:
    {
        returnValue = F("Sonnenbüchelweg");
        break;
    }
    case 293251:
    {
        returnValue = F("Sonnenbüchl");
        break;
    }
    case 293252:
    {
        returnValue = F("Sonnenbühl");
        break;
    }
    case 293253:
    {
        returnValue = F("Sonnenbühlstr.");
        break;
    }
    case 293254:
    {
        returnValue = F("Sonnenbühlweg");
        break;
    }
    case 293255:
    {
        returnValue = F("Sonnendachl");
        break;
    }
    case 293256:
    {
        returnValue = F("Sonnendeck");
        break;
    }
    case 293257:
    {
        returnValue = F("Sonnendorf");
        break;
    }
    case 293258:
    {
        returnValue = F("Sonnendyker Weg");
        break;
    }
    case 293259:
    {
        returnValue = F("Sonneneck");
        break;
    }
    case 293260:
    {
        returnValue = F("Sonnenfang");
        break;
    }
    case 293261:
    {
        returnValue = F("Sonnenfeld");
        break;
    }
    case 293262:
    {
        returnValue = F("Sonnenfeldstr.");
        break;
    }
    case 293263:
    {
        returnValue = F("Sonnenfeldweg");
        break;
    }
    case 293264:
    {
        returnValue = F("Sonnenfels");
        break;
    }
    case 293265:
    {
        returnValue = F("Sonnengarten");
        break;
    }
    case 293266:
    {
        returnValue = F("Sonnengasse");
        break;
    }
    case 293267:
    {
        returnValue = F("Sonnengoldstr.");
        break;
    }
    case 293268:
    {
        returnValue = F("Sonnengraben");
        break;
    }
    case 293269:
    {
        returnValue = F("Sonnengrund");
        break;
    }
    case 293270:
    {
        returnValue = F("Sonnengässchen");
        break;
    }
    case 293271:
    {
        returnValue = F("Sonnengässle");
        break;
    }
    case 293272:
    {
        returnValue = F("Sonnengäßchen");
        break;
    }
    case 293273:
    {
        returnValue = F("Sonnenhag");
        break;
    }
    case 293274:
    {
        returnValue = F("Sonnenhain");
        break;
    }
    case 293275:
    {
        returnValue = F("Sonnenhaken");
        break;
    }
    case 293276:
    {
        returnValue = F("Sonnenhalde");
        break;
    }
    case 293277:
    {
        returnValue = F("Sonnenhalden");
        break;
    }
    case 293278:
    {
        returnValue = F("Sonnenhaldenhof");
        break;
    }
    case 293279:
    {
        returnValue = F("Sonnenhaldenweg");
        break;
    }
    case 293280:
    {
        returnValue = F("Sonnenhaldeplatz");
        break;
    }
    case 293281:
    {
        returnValue = F("Sonnenhaldestr.");
        break;
    }
    case 293282:
    {
        returnValue = F("Sonnenhall");
        break;
    }
    case 293283:
    {
        returnValue = F("Sonnenhamer Str.");
        break;
    }
    case 293284:
    {
        returnValue = F("Sonnenhamerstr.");
        break;
    }
    case 293285:
    {
        returnValue = F("Sonnenhang");
        break;
    }
    case 293286:
    {
        returnValue = F("Sonnenhangstr.");
        break;
    }
    case 293287:
    {
        returnValue = F("Sonnenhangweg");
        break;
    }
    case 293288:
    {
        returnValue = F("Sonnenhardt");
        break;
    }
    case 293289:
    {
        returnValue = F("Sonnenhaus");
        break;
    }
    case 293290:
    {
        returnValue = F("Sonnenhelle");
        break;
    }
    case 293291:
    {
        returnValue = F("Sonnenhof");
        break;
    }
    case 293292:
    {
        returnValue = F("Sonnenhof / Herdweg");
        break;
    }
    case 293293:
    {
        returnValue = F("Sonnenhof am Viehtrittsweg");
        break;
    }
    case 293294:
    {
        returnValue = F("Sonnenhofstr.");
        break;
    }
    case 293295:
    {
        returnValue = F("Sonnenhofweg");
        break;
    }
    case 293296:
    {
        returnValue = F("Sonnenholzstr.");
        break;
    }
    case 293297:
    {
        returnValue = F("Sonnenholzweg");
        break;
    }
    case 293298:
    {
        returnValue = F("Sonnenhufe");
        break;
    }
    case 293299:
    {
        returnValue = F("Sonnenhutweg");
        break;
    }
    case 293300:
    {
        returnValue = F("Sonnenhöhe");
        break;
    }
    case 293301:
    {
        returnValue = F("Sonnenhügel");
        break;
    }
    case 293302:
    {
        returnValue = F("Sonnenhügeldamm");
        break;
    }
    case 293303:
    {
        returnValue = F("Sonnenkamp");
        break;
    }
    case 293304:
    {
        returnValue = F("Sonnenkampsweg");
        break;
    }
    case 293305:
    {
        returnValue = F("Sonnenklee");
        break;
    }
    case 293306:
    {
        returnValue = F("Sonnenklink");
        break;
    }
    case 293307:
    {
        returnValue = F("Sonnenknapp");
        break;
    }
    case 293308:
    {
        returnValue = F("Sonnenkopfstr.");
        break;
    }
    case 293309:
    {
        returnValue = F("Sonnenkopfweg");
        break;
    }
    case 293310:
    {
        returnValue = F("Sonnenkoppel");
        break;
    }
    case 293311:
    {
        returnValue = F("Sonnenkreisel");
        break;
    }
    case 293312:
    {
        returnValue = F("Sonnenkämpe");
        break;
    }
    case 293313:
    {
        returnValue = F("Sonnenland");
        break;
    }
    case 293314:
    {
        returnValue = F("Sonnenlandstr.");
        break;
    }
    case 293315:
    {
        returnValue = F("Sonnenlandweg");
        break;
    }
    case 293316:
    {
        returnValue = F("Sonnenlayweg");
        break;
    }
    case 293317:
    {
        returnValue = F("Sonnenlehne");
        break;
    }
    case 293318:
    {
        returnValue = F("Sonnenleite");
        break;
    }
    case 293319:
    {
        returnValue = F("Sonnenleiter");
        break;
    }
    case 293320:
    {
        returnValue = F("Sonnenleithe");
        break;
    }
    case 293321:
    {
        returnValue = F("Sonnenleithener Weg");
        break;
    }
    case 293322:
    {
        returnValue = F("Sonnenley");
        break;
    }
    case 293323:
    {
        returnValue = F("Sonnenloipe");
        break;
    }
    case 293324:
    {
        returnValue = F("Sonnenluger");
        break;
    }
    case 293325:
    {
        returnValue = F("Sonnenläng");
        break;
    }
    case 293326:
    {
        returnValue = F("Sonnenlängstr.");
        break;
    }
    case 293327:
    {
        returnValue = F("Sonnenmatt");
        break;
    }
    case 293328:
    {
        returnValue = F("Sonnenmatte");
        break;
    }
    case 293329:
    {
        returnValue = F("Sonnenmeiler");
        break;
    }
    case 293330:
    {
        returnValue = F("Sonnenmoosstr.");
        break;
    }
    case 293331:
    {
        returnValue = F("Sonnenmulde");
        break;
    }
    case 293332:
    {
        returnValue = F("Sonnenpark");
        break;
    }
    case 293333:
    {
        returnValue = F("Sonnenpfad");
        break;
    }
    case 293334:
    {
        returnValue = F("Sonnenplanie");
        break;
    }
    case 293335:
    {
        returnValue = F("Sonnenplatz");
        break;
    }
    case 293336:
    {
        returnValue = F("Sonnenpromenade");
        break;
    }
    case 293337:
    {
        returnValue = F("Sonnenrain");
        break;
    }
    case 293338:
    {
        returnValue = F("Sonnenrainstr.");
        break;
    }
    case 293339:
    {
        returnValue = F("Sonnenrainweg");
        break;
    }
    case 293340:
    {
        returnValue = F("Sonnenrandweg");
        break;
    }
    case 293341:
    {
        returnValue = F("Sonnenredder");
        break;
    }
    case 293342:
    {
        returnValue = F("Sonnenreul");
        break;
    }
    case 293343:
    {
        returnValue = F("Sonnenreute");
        break;
    }
    case 293344:
    {
        returnValue = F("Sonnenring");
        break;
    }
    case 293345:
    {
        returnValue = F("Sonnenringstr.");
        break;
    }
    case 293346:
    {
        returnValue = F("Sonnenschein");
        break;
    }
    case 293347:
    {
        returnValue = F("Sonnenschein – Kneteisen");
        break;
    }
    case 293348:
    {
        returnValue = F("Sonnenscheinsbenden");
        break;
    }
    case 293349:
    {
        returnValue = F("Sonnenscheinstr.");
        break;
    }
    case 293350:
    {
        returnValue = F("Sonnenscheinweg");
        break;
    }
    case 293351:
    {
        returnValue = F("Sonnenschulweg");
        break;
    }
    case 293352:
    {
        returnValue = F("Sonnenseestr.");
        break;
    }
    case 293353:
    {
        returnValue = F("Sonnenseite");
        break;
    }
    case 293354:
    {
        returnValue = F("Sonnensiedlung");
        break;
    }
    case 293355:
    {
        returnValue = F("Sonnenspitzstr.");
        break;
    }
    case 293356:
    {
        returnValue = F("Sonnensteg");
        break;
    }
    case 293357:
    {
        returnValue = F("Sonnensteig");
        break;
    }
    case 293358:
    {
        returnValue = F("Sonnensteige");
        break;
    }
    case 293359:
    {
        returnValue = F("Sonnenstein");
        break;
    }
    case 293360:
    {
        returnValue = F("Sonnensteinstr.");
        break;
    }
    case 293361:
    {
        returnValue = F("Sonnensteinweg");
        break;
    }
    case 293362:
    {
        returnValue = F("Sonnenstiege");
        break;
    }
    case 293363:
    {
        returnValue = F("Sonnenstr.");
        break;
    }
    case 293364:
    {
        returnValue = F("Sonnental");
        break;
    }
    case 293365:
    {
        returnValue = F("Sonnentalstr.");
        break;
    }
    case 293366:
    {
        returnValue = F("Sonnentau");
        break;
    }
    case 293367:
    {
        returnValue = F("Sonnentau-Steg");
        break;
    }
    case 293368:
    {
        returnValue = F("Sonnentauplatz");
        break;
    }
    case 293369:
    {
        returnValue = F("Sonnentaustr.");
        break;
    }
    case 293370:
    {
        returnValue = F("Sonnentauweg");
        break;
    }
    case 293371:
    {
        returnValue = F("Sonnenteich");
        break;
    }
    case 293372:
    {
        returnValue = F("Sonnenteller");
        break;
    }
    case 293373:
    {
        returnValue = F("Sonnenterrasse");
        break;
    }
    case 293374:
    {
        returnValue = F("Sonnentreppe");
        break;
    }
    case 293375:
    {
        returnValue = F("Sonnenufer");
        break;
    }
    case 293376:
    {
        returnValue = F("Sonnenuhr-Park");
        break;
    }
    case 293377:
    {
        returnValue = F("Sonnenuhrpark");
        break;
    }
    case 293378:
    {
        returnValue = F("Sonnenwaagstr.");
        break;
    }
    case 293379:
    {
        returnValue = F("Sonnenwaldstr.");
        break;
    }
    case 293380:
    {
        returnValue = F("Sonnenwaldweg");
        break;
    }
    case 293381:
    {
        returnValue = F("Sonnenweg");
        break;
    }
    case 293382:
    {
        returnValue = F("Sonnenwegle");
        break;
    }
    case 293383:
    {
        returnValue = F("Sonnenwende");
        break;
    }
    case 293384:
    {
        returnValue = F("Sonnenwendstr.");
        break;
    }
    case 293385:
    {
        returnValue = F("Sonnenwiechser Str.");
        break;
    }
    case 293386:
    {
        returnValue = F("Sonnenwiese");
        break;
    }
    case 293387:
    {
        returnValue = F("Sonnenwiesenpromenade");
        break;
    }
    case 293388:
    {
        returnValue = F("Sonnenwiesenweg");
        break;
    }
    case 293389:
    {
        returnValue = F("Sonnenwinkel");
        break;
    }
    case 293390:
    {
        returnValue = F("Sonnenwinkelweg");
        break;
    }
    case 293391:
    {
        returnValue = F("Sonnenwirbel");
        break;
    }
    case 293392:
    {
        returnValue = F("Sonnenwirbelhalde");
        break;
    }
    case 293393:
    {
        returnValue = F("Sonnenwirtleweg");
        break;
    }
    case 293394:
    {
        returnValue = F("Sonnenwirtsgäßchen");
        break;
    }
    case 293395:
    {
        returnValue = F("Sonnenzeile");
        break;
    }
    case 293396:
    {
        returnValue = F("Sonnering");
        break;
    }
    case 293397:
    {
        returnValue = F("Sonnesiedlung");
        break;
    }
    case 293398:
    {
        returnValue = F("Sonnestr.");
        break;
    }
    case 293399:
    {
        returnValue = F("Sonnetstr.");
        break;
    }
    case 293400:
    {
        returnValue = F("Sonnewalder Str.");
        break;
    }
    case 293401:
    {
        returnValue = F("Sonngasse");
        break;
    }
    case 293402:
    {
        returnValue = F("Sonnhalde");
        break;
    }
    case 293403:
    {
        returnValue = F("Sonnhaldenstr.");
        break;
    }
    case 293404:
    {
        returnValue = F("Sonnhaldenweg");
        break;
    }
    case 293405:
    {
        returnValue = F("Sonnhaldestr.");
        break;
    }
    case 293406:
    {
        returnValue = F("Sonnhaldeweg");
        break;
    }
    case 293407:
    {
        returnValue = F("Sonnhang");
        break;
    }
    case 293408:
    {
        returnValue = F("Sonnhart");
        break;
    }
    case 293409:
    {
        returnValue = F("Sonnhofweg");
        break;
    }
    case 293410:
    {
        returnValue = F("Sonnholenweg");
        break;
    }
    case 293411:
    {
        returnValue = F("Sonnholeweg");
        break;
    }
    case 293412:
    {
        returnValue = F("Sonnholm");
        break;
    }
    case 293413:
    {
        returnValue = F("Sonnhöfer Weg");
        break;
    }
    case 293414:
    {
        returnValue = F("Sonnhöglstr.");
        break;
    }
    case 293415:
    {
        returnValue = F("Sonnige Lehne");
        break;
    }
    case 293416:
    {
        returnValue = F("Sonninstr.");
        break;
    }
    case 293417:
    {
        returnValue = F("Sonnjochweg");
        break;
    }
    case 293418:
    {
        returnValue = F("Sonnleite");
        break;
    }
    case 293419:
    {
        returnValue = F("Sonnleiten");
        break;
    }
    case 293420:
    {
        returnValue = F("Sonnleitenring");
        break;
    }
    case 293421:
    {
        returnValue = F("Sonnleitenstr.");
        break;
    }
    case 293422:
    {
        returnValue = F("Sonnleitenweg");
        break;
    }
    case 293423:
    {
        returnValue = F("Sonnleithen");
        break;
    }
    case 293424:
    {
        returnValue = F("Sonnleitn");
        break;
    }
    case 293425:
    {
        returnValue = F("Sonnleitnerstr.");
        break;
    }
    case 293426:
    {
        returnValue = F("Sonnleitstr.");
        break;
    }
    case 293427:
    {
        returnValue = F("Sonnmatt");
        break;
    }
    case 293428:
    {
        returnValue = F("Sonnrain");
        break;
    }
    case 293429:
    {
        returnValue = F("Sonnreuther Str.");
        break;
    }
    case 293430:
    {
        returnValue = F("Sonnscheidstr.");
        break;
    }
    case 293431:
    {
        returnValue = F("Sonntags Ley");
        break;
    }
    case 293432:
    {
        returnValue = F("Sonntagshornstr.");
        break;
    }
    case 293433:
    {
        returnValue = F("Sonntagsmoor");
        break;
    }
    case 293434:
    {
        returnValue = F("Sonntagsstr.");
        break;
    }
    case 293435:
    {
        returnValue = F("Sonntagstr.");
        break;
    }
    case 293436:
    {
        returnValue = F("Sonntratenweg");
        break;
    }
    case 293437:
    {
        returnValue = F("Sonntratnsteig");
        break;
    }
    case 293438:
    {
        returnValue = F("Sonnwendberg");
        break;
    }
    case 293439:
    {
        returnValue = F("Sonnwendstr.");
        break;
    }
    case 293440:
    {
        returnValue = F("Sonnwiesenstr.");
        break;
    }
    case 293441:
    {
        returnValue = F("Sonnwiesstr.");
        break;
    }
    case 293442:
    {
        returnValue = F("Sonoytaplatz");
        break;
    }
    case 293443:
    {
        returnValue = F("Sonsbecker Str.");
        break;
    }
    case 293444:
    {
        returnValue = F("Sonsbecker Weg");
        break;
    }
    case 293445:
    {
        returnValue = F("Sonsfeld");
        break;
    }
    case 293446:
    {
        returnValue = F("Sonstkoppel");
        break;
    }
    case 293447:
    {
        returnValue = F("Sontheimer Feld");
        break;
    }
    case 293448:
    {
        returnValue = F("Sontheimer Str.");
        break;
    }
    case 293449:
    {
        returnValue = F("Sontheimerweg");
        break;
    }
    case 293450:
    {
        returnValue = F("Sonthofener Str.");
        break;
    }
    case 293451:
    {
        returnValue = F("Sonthofener Weg");
        break;
    }
    case 293452:
    {
        returnValue = F("Sonthofer Str.");
        break;
    }
    case 293453:
    {
        returnValue = F("Sontraer Str.");
        break;
    }
    case 293454:
    {
        returnValue = F("Sontumer Str.");
        break;
    }
    case 293455:
    {
        returnValue = F("Soodener Str.");
        break;
    }
    case 293456:
    {
        returnValue = F("Soodeweg");
        break;
    }
    case 293457:
    {
        returnValue = F("Soolschenweg");
        break;
    }
    case 293458:
    {
        returnValue = F("Soolweg");
        break;
    }
    case 293459:
    {
        returnValue = F("Soolücke");
        break;
    }
    case 293460:
    {
        returnValue = F("Soomskamp");
        break;
    }
    case 293461:
    {
        returnValue = F("Soonblick");
        break;
    }
    case 293462:
    {
        returnValue = F("Soonecker Str.");
        break;
    }
    case 293463:
    {
        returnValue = F("Sooneckstr.");
        break;
    }
    case 293464:
    {
        returnValue = F("Soonstr.");
        break;
    }
    case 293465:
    {
        returnValue = F("Soonwaldblick");
        break;
    }
    case 293466:
    {
        returnValue = F("Soonwalder Str.");
        break;
    }
    case 293467:
    {
        returnValue = F("Soonwaldstr.");
        break;
    }
    case 293468:
    {
        returnValue = F("Soonwaldweg");
        break;
    }
    case 293469:
    {
        returnValue = F("Soorenhuuch");
        break;
    }
    case 293470:
    {
        returnValue = F("Soorenkamp");
        break;
    }
    case 293471:
    {
        returnValue = F("Soorenweg");
        break;
    }
    case 293472:
    {
        returnValue = F("Soormatttalweg");
        break;
    }
    case 293473:
    {
        returnValue = F("Soot");
        break;
    }
    case 293474:
    {
        returnValue = F("Soothweg");
        break;
    }
    case 293475:
    {
        returnValue = F("Sootkoppel");
        break;
    }
    case 293476:
    {
        returnValue = F("Sootstr.");
        break;
    }
    case 293477:
    {
        returnValue = F("Sopericher Str.");
        break;
    }
    case 293478:
    {
        returnValue = F("Sophi Park");
        break;
    }
    case 293479:
    {
        returnValue = F("Sophia-Jacoba-Str.");
        break;
    }
    case 293480:
    {
        returnValue = F("Sophia-Weg");
        break;
    }
    case 293481:
    {
        returnValue = F("Sophia-Westenholz-Weg");
        break;
    }
    case 293482:
    {
        returnValue = F("Sophia-von-Bodendike-Platz");
        break;
    }
    case 293483:
    {
        returnValue = F("Sophia-von-Henneberg-Str.");
        break;
    }
    case 293484:
    {
        returnValue = F("Sophiastr.");
        break;
    }
    case 293485:
    {
        returnValue = F("Sophie Sondhelm Weg");
        break;
    }
    case 293486:
    {
        returnValue = F("Sophie-Adam-Str.");
        break;
    }
    case 293487:
    {
        returnValue = F("Sophie-Bötjer-Weg");
        break;
    }
    case 293488:
    {
        returnValue = F("Sophie-Deicke-Weg");
        break;
    }
    case 293489:
    {
        returnValue = F("Sophie-Dürr-Str.");
        break;
    }
    case 293490:
    {
        returnValue = F("Sophie-Hedwig-Str.");
        break;
    }
    case 293491:
    {
        returnValue = F("Sophie-Helene-Str.");
        break;
    }
    case 293492:
    {
        returnValue = F("Sophie-Henschel-Str.");
        break;
    }
    case 293493:
    {
        returnValue = F("Sophie-Henschel-Weg");
        break;
    }
    case 293494:
    {
        returnValue = F("Sophie-Hoechstetter-Weg");
        break;
    }
    case 293495:
    {
        returnValue = F("Sophie-Jacobsen-Str.");
        break;
    }
    case 293496:
    {
        returnValue = F("Sophie-Junghans-Str.");
        break;
    }
    case 293497:
    {
        returnValue = F("Sophie-Kehl-Weg");
        break;
    }
    case 293498:
    {
        returnValue = F("Sophie-Knoth-Str.");
        break;
    }
    case 293499:
    {
        returnValue = F("Sophie-Krämer-Str.");
        break;
    }
    case 293500:
    {
        returnValue = F("Sophie-La-Roche-Str.");
        break;
    }
    case 293501:
    {
        returnValue = F("Sophie-La-Roche-Weg");
        break;
    }
    case 293502:
    {
        returnValue = F("Sophie-Mereau-Weg");
        break;
    }
    case 293503:
    {
        returnValue = F("Sophie-Opel-Str.");
        break;
    }
    case 293504:
    {
        returnValue = F("Sophie-Prag-Str.");
        break;
    }
    case 293505:
    {
        returnValue = F("Sophie-Reinheimer-Str.");
        break;
    }
    case 293506:
    {
        returnValue = F("Sophie-Schmid-Str.");
        break;
    }
    case 293507:
    {
        returnValue = F("Sophie-Scholl-Hof");
        break;
    }
    case 293508:
    {
        returnValue = F("Sophie-Scholl-Kreisel");
        break;
    }
    case 293509:
    {
        returnValue = F("Sophie-Scholl-Park");
        break;
    }
    case 293510:
    {
        returnValue = F("Sophie-Scholl-Platz");
        break;
    }
    case 293511:
    {
        returnValue = F("Sophie-Scholl-Ring");
        break;
    }
    case 293512:
    {
        returnValue = F("Sophie-Scholl-Str.");
        break;
    }
    case 293513:
    {
        returnValue = F("Sophie-Scholl-Weg");
        break;
    }
    case 293514:
    {
        returnValue = F("Sophie-Spiegelberger-Weg");
        break;
    }
    case 293515:
    {
        returnValue = F("Sophie-de-la-Roche-Str.");
        break;
    }
    case 293516:
    {
        returnValue = F("Sophie-und-Hans-Scholl-Str.");
        break;
    }
    case 293517:
    {
        returnValue = F("Sophie-von-Boetticher-Str.");
        break;
    }
    case 293518:
    {
        returnValue = F("Sophie-von-Brabant-Str.");
        break;
    }
    case 293519:
    {
        returnValue = F("Sophie-von-Brabant-Weg");
        break;
    }
    case 293520:
    {
        returnValue = F("Sophie-von-La-Roche-Platz");
        break;
    }
    case 293521:
    {
        returnValue = F("Sophie-von-La-Roche-Weg");
        break;
    }
    case 293522:
    {
        returnValue = F("Sophie-von-LaRoche-Str.");
        break;
    }
    case 293523:
    {
        returnValue = F("Sophien-Henschel Strasse");
        break;
    }
    case 293524:
    {
        returnValue = F("Sophien-Magdalenen-Koog");
        break;
    }
    case 293525:
    {
        returnValue = F("Sophienauer Str.");
        break;
    }
    case 293526:
    {
        returnValue = F("Sophienberg");
        break;
    }
    case 293527:
    {
        returnValue = F("Sophienbergstr.");
        break;
    }
    case 293528:
    {
        returnValue = F("Sophienbergweg");
        break;
    }
    case 293529:
    {
        returnValue = F("Sophiendorfer Str.");
        break;
    }
    case 293530:
    {
        returnValue = F("Sophiengasse");
        break;
    }
    case 293531:
    {
        returnValue = F("Sophienglück");
        break;
    }
    case 293532:
    {
        returnValue = F("Sophiengroden");
        break;
    }
    case 293533:
    {
        returnValue = F("Sophiengrund");
        break;
    }
    case 293534:
    {
        returnValue = F("Sophienhof");
        break;
    }
    case 293535:
    {
        returnValue = F("Sophienhofer Stieg");
        break;
    }
    case 293536:
    {
        returnValue = F("Sophienhofer Str.");
        break;
    }
    case 293537:
    {
        returnValue = F("Sophienhöh");
        break;
    }
    case 293538:
    {
        returnValue = F("Sophienhöhe");
        break;
    }
    case 293539:
    {
        returnValue = F("Sophienkamp");
        break;
    }
    case 293540:
    {
        returnValue = F("Sophienlust");
        break;
    }
    case 293541:
    {
        returnValue = F("Sophienpark");
        break;
    }
    case 293542:
    {
        returnValue = F("Sophienpassage");
        break;
    }
    case 293543:
    {
        returnValue = F("Sophienplatz");
        break;
    }
    case 293544:
    {
        returnValue = F("Sophienquellweg");
        break;
    }
    case 293545:
    {
        returnValue = F("Sophienreuther Str.");
        break;
    }
    case 293546:
    {
        returnValue = F("Sophienring");
        break;
    }
    case 293547:
    {
        returnValue = F("Sophienruhe");
        break;
    }
    case 293548:
    {
        returnValue = F("Sophiensiel");
        break;
    }
    case 293549:
    {
        returnValue = F("Sophiensteig");
        break;
    }
    case 293550:
    {
        returnValue = F("Sophienstiftsplatz");
        break;
    }
    case 293551:
    {
        returnValue = F("Sophienstr.");
        break;
    }
    case 293552:
    {
        returnValue = F("Sophienstr.-Siedlung");
        break;
    }
    case 293553:
    {
        returnValue = F("Sophienstädter Str.");
        break;
    }
    case 293554:
    {
        returnValue = F("Sophienstädter Weg");
        break;
    }
    case 293555:
    {
        returnValue = F("Sophientaler Str.");
        break;
    }
    case 293556:
    {
        returnValue = F("Sophientalring");
        break;
    }
    case 293557:
    {
        returnValue = F("Sophienthal");
        break;
    }
    case 293558:
    {
        returnValue = F("Sophienthaler Str.");
        break;
    }
    case 293559:
    {
        returnValue = F("Sophienweg");
        break;
    }
    case 293560:
    {
        returnValue = F("Sophiestr.");
        break;
    }
    case 293561:
    {
        returnValue = F("Sophorenallee");
        break;
    }
    case 293562:
    {
        returnValue = F("Sopoter Str.");
        break;
    }
    case 293563:
    {
        returnValue = F("Sopotweg");
        break;
    }
    case 293564:
    {
        returnValue = F("Soppen");
        break;
    }
    case 293565:
    {
        returnValue = F("Soppsgasse");
        break;
    }
    case 293566:
    {
        returnValue = F("Soproner Str.");
        break;
    }
    case 293567:
    {
        returnValue = F("Sopronstr.");
        break;
    }
    case 293568:
    {
        returnValue = F("Sora");
        break;
    }
    case 293569:
    {
        returnValue = F("Soraer Str.");
        break;
    }
    case 293570:
    {
        returnValue = F("Soranger");
        break;
    }
    case 293571:
    {
        returnValue = F("Sorauer Str.");
        break;
    }
    case 293572:
    {
        returnValue = F("Sorausweg");
        break;
    }
    case 293573:
    {
        returnValue = F("Sorauweg");
        break;
    }
    case 293574:
    {
        returnValue = F("Sorbenaue");
        break;
    }
    case 293575:
    {
        returnValue = F("Sorbenstr.");
        break;
    }
    case 293576:
    {
        returnValue = F("Sorbenweg");
        break;
    }
    case 293577:
    {
        returnValue = F("Sorbitztal");
        break;
    }
    case 293578:
    {
        returnValue = F("Sorfell");
        break;
    }
    case 293579:
    {
        returnValue = F("Sorga");
        break;
    }
    case 293580:
    {
        returnValue = F("Sorgaer Str.");
        break;
    }
    case 293581:
    {
        returnValue = F("Sorgaer Weg");
        break;
    }
    case 293582:
    {
        returnValue = F("Sorgauer Dorfstr.");
        break;
    }
    case 293583:
    {
        returnValue = F("Sorgauer Str.");
        break;
    }
    case 293584:
    {
        returnValue = F("Sorgauer Weg");
        break;
    }
    case 293585:
    {
        returnValue = F("Sorgbrück");
        break;
    }
    case 293586:
    {
        returnValue = F("Sorge");
        break;
    }
    case 293587:
    {
        returnValue = F("Sorge-Settendorf");
        break;
    }
    case 293588:
    {
        returnValue = F("Sorgenfrei");
        break;
    }
    case 293589:
    {
        returnValue = F("Sorgengärten");
        break;
    }
    case 293590:
    {
        returnValue = F("Sorgenloser Weg");
        break;
    }
    case 293591:
    {
        returnValue = F("Sorgenser Grundweg");
        break;
    }
    case 293592:
    {
        returnValue = F("Sorgenser Str.");
        break;
    }
    case 293593:
    {
        returnValue = F("Sorgenweg");
        break;
    }
    case 293594:
    {
        returnValue = F("Sorger Brücke");
        break;
    }
    case 293595:
    {
        returnValue = F("Sorger Panorama Weg");
        break;
    }
    case 293596:
    {
        returnValue = F("Sorger Str.");
        break;
    }
    case 293597:
    {
        returnValue = F("Sorger Weg");
        break;
    }
    case 293598:
    {
        returnValue = F("Sorgersweg");
        break;
    }
    case 293599:
    {
        returnValue = F("Sorgestr.");
        break;
    }
    case 293600:
    {
        returnValue = F("Sorgeweg");
        break;
    }
    case 293601:
    {
        returnValue = F("Sorgfelder Weg");
        break;
    }
    case 293602:
    {
        returnValue = F("Sorggasse");
        break;
    }
    case 293603:
    {
        returnValue = F("Sorghof");
        break;
    }
    case 293604:
    {
        returnValue = F("Sorghofstr.");
        break;
    }
    case 293605:
    {
        returnValue = F("Sorgschrofenstr.");
        break;
    }
    case 293606:
    {
        returnValue = F("Sorgschrofenweg");
        break;
    }
    case 293607:
    {
        returnValue = F("Sorgstr.");
        break;
    }
    case 293608:
    {
        returnValue = F("Sorgsweg");
        break;
    }
    case 293609:
    {
        returnValue = F("Sorguesplatz");
        break;
    }
    case 293610:
    {
        returnValue = F("Sorgweg");
        break;
    }
    case 293611:
    {
        returnValue = F("Sorgwiesen");
        break;
    }
    case 293612:
    {
        returnValue = F("Sorgwohld");
        break;
    }
    case 293613:
    {
        returnValue = F("Sornitz");
        break;
    }
    case 293614:
    {
        returnValue = F("Sornoer Grabenstr.");
        break;
    }
    case 293615:
    {
        returnValue = F("Sornoer Hauptstr.");
        break;
    }
    case 293616:
    {
        returnValue = F("Sornoer Str.");
        break;
    }
    case 293617:
    {
        returnValue = F("Sornziger Str.");
        break;
    }
    case 293618:
    {
        returnValue = F("Sornziger Weg");
        break;
    }
    case 293619:
    {
        returnValue = F("Sornßiger Weg");
        break;
    }
    case 293620:
    {
        returnValue = F("Sorpestr.");
        break;
    }
    case 293621:
    {
        returnValue = F("Sorsumer Str.");
        break;
    }
    case 293622:
    {
        returnValue = F("Sorthum");
        break;
    }
    case 293623:
    {
        returnValue = F("Sortinoplatz");
        break;
    }
    case 293624:
    {
        returnValue = F("Sosaer Steig");
        break;
    }
    case 293625:
    {
        returnValue = F("Sosaer Str.");
        break;
    }
    case 293626:
    {
        returnValue = F("Sosaer Weg");
        break;
    }
    case 293627:
    {
        returnValue = F("Sossau");
        break;
    }
    case 293628:
    {
        returnValue = F("Sossauer Platz");
        break;
    }
    case 293629:
    {
        returnValue = F("Sossauer Str.");
        break;
    }
    case 293630:
    {
        returnValue = F("Sossaustr.");
        break;
    }
    case 293631:
    {
        returnValue = F("Sossenheimer Str.");
        break;
    }
    case 293632:
    {
        returnValue = F("Sossenheimer Weg");
        break;
    }
    case 293633:
    {
        returnValue = F("Sotberg");
        break;
    }
    case 293634:
    {
        returnValue = F("Soterstr.");
        break;
    }
    case 293635:
    {
        returnValue = F("Sotheler Mühlenweg");
        break;
    }
    case 293636:
    {
        returnValue = F("Sotheler Str.");
        break;
    }
    case 293637:
    {
        returnValue = F("Sothenberg Höhenweg");
        break;
    }
    case 293638:
    {
        returnValue = F("Sothenberg Südhang");
        break;
    }
    case 293639:
    {
        returnValue = F("Sothenbergstr.");
        break;
    }
    case 293640:
    {
        returnValue = F("Sotierstr.");
        break;
    }
    case 293641:
    {
        returnValue = F("Sotkamostr.");
        break;
    }
    case 293642:
    {
        returnValue = F("Sottenbacher Str.");
        break;
    }
    case 293643:
    {
        returnValue = F("Sottengarten");
        break;
    }
    case 293644:
    {
        returnValue = F("Sottenweg");
        break;
    }
    case 293645:
    {
        returnValue = F("Sotterbacher Str.");
        break;
    }
    case 293646:
    {
        returnValue = F("Sotterhäuser Str.");
        break;
    }
    case 293647:
    {
        returnValue = F("Sotterhäuser Weg");
        break;
    }
    case 293648:
    {
        returnValue = F("Sottersbachstr.");
        break;
    }
    case 293649:
    {
        returnValue = F("Sottorfer Dorfstr.");
        break;
    }
    case 293650:
    {
        returnValue = F("Sottorfer Kirchweg");
        break;
    }
    case 293651:
    {
        returnValue = F("Sottorfer Str.");
        break;
    }
    case 293652:
    {
        returnValue = F("Sottrumer Kirchweg");
        break;
    }
    case 293653:
    {
        returnValue = F("Sottrumer Str.");
        break;
    }
    case 293654:
    {
        returnValue = F("Sotzbacher Kirchstr.");
        break;
    }
    case 293655:
    {
        returnValue = F("Sotzbacher Str.");
        break;
    }
    case 293656:
    {
        returnValue = F("Sotzbacher Weg");
        break;
    }
    case 293657:
    {
        returnValue = F("Sotzenhauser Str.");
        break;
    }
    case 293658:
    {
        returnValue = F("Sotzweilerstr.");
        break;
    }
    case 293659:
    {
        returnValue = F("Sotzweilerweg");
        break;
    }
    case 293660:
    {
        returnValue = F("Soudronstr.");
        break;
    }
    case 293661:
    {
        returnValue = F("Soufflenheimer Str.");
        break;
    }
    case 293662:
    {
        returnValue = F("Soufflenheimer Weg");
        break;
    }
    case 293663:
    {
        returnValue = F("Soulac Str.");
        break;
    }
    case 293664:
    {
        returnValue = F("Soultzmatter Str.");
        break;
    }
    case 293665:
    {
        returnValue = F("Sours-Allee");
        break;
    }
    case 293666:
    {
        returnValue = F("Sousenborg");
        break;
    }
    case 293667:
    {
        returnValue = F("South Carolina Avenue");
        break;
    }
    case 293668:
    {
        returnValue = F("South End Circle");
        break;
    }
    case 293669:
    {
        returnValue = F("South-Kirkby-Str.");
        break;
    }
    case 293670:
    {
        returnValue = F("Southwallstr.");
        break;
    }
    case 293671:
    {
        returnValue = F("Soutyhofstr.");
        break;
    }
    case 293672:
    {
        returnValue = F("Souvennschneise");
        break;
    }
    case 293673:
    {
        returnValue = F("Souvennweg");
        break;
    }
    case 293674:
    {
        returnValue = F("Sovranostr.");
        break;
    }
    case 293675:
    {
        returnValue = F("Sowjetisches Ehrenmal Erkner");
        break;
    }
    case 293676:
    {
        returnValue = F("Soßkenberg");
        break;
    }
    case 293677:
    {
        returnValue = F("Soßmarer Str.");
        break;
    }
    case 293678:
    {
        returnValue = F("Soßmarer Tor");
        break;
    }
    case 293679:
    {
        returnValue = F("Spaatzer Hauptstr.");
        break;
    }
    case 293680:
    {
        returnValue = F("Spabrücker Weg");
        break;
    }
    case 293681:
    {
        returnValue = F("Spachbrücker Holzweg");
        break;
    }
    case 293682:
    {
        returnValue = F("Spachbrücker Str.");
        break;
    }
    case 293683:
    {
        returnValue = F("Spadener Weg");
        break;
    }
    case 293684:
    {
        returnValue = F("Spadentorstr.");
        break;
    }
    case 293685:
    {
        returnValue = F("Spaenjesweg");
        break;
    }
    case 293686:
    {
        returnValue = F("Spaettstr.");
        break;
    }
    case 293687:
    {
        returnValue = F("Spagen");
        break;
    }
    case 293688:
    {
        returnValue = F("Spagenhofweg");
        break;
    }
    case 293689:
    {
        returnValue = F("Spagenstr.");
        break;
    }
    case 293690:
    {
        returnValue = F("Spagenweg");
        break;
    }
    case 293691:
    {
        returnValue = F("Spahler Str.");
        break;
    }
    case 293692:
    {
        returnValue = F("Spahler Weg");
        break;
    }
    case 293693:
    {
        returnValue = F("Spahner Str.");
        break;
    }
    case 293694:
    {
        returnValue = F("Spahnharrenstätter Str.");
        break;
    }
    case 293695:
    {
        returnValue = F("Spahnsdorfer Weg");
        break;
    }
    case 293696:
    {
        returnValue = F("Spaichinger Str.");
        break;
    }
    case 293697:
    {
        returnValue = F("Spaichinger Weg");
        break;
    }
    case 293698:
    {
        returnValue = F("Spainweg");
        break;
    }
    case 293699:
    {
        returnValue = F("Spajeweg");
        break;
    }
    case 293700:
    {
        returnValue = F("Spakebrücke");
        break;
    }
    case 293701:
    {
        returnValue = F("Spakenbaum");
        break;
    }
    case 293702:
    {
        returnValue = F("Spalatinpromenade");
        break;
    }
    case 293703:
    {
        returnValue = F("Spalatinstr.");
        break;
    }
    case 293704:
    {
        returnValue = F("Spaldinger Str.");
        break;
    }
    case 293705:
    {
        returnValue = F("Spaldingsplatz");
        break;
    }
    case 293706:
    {
        returnValue = F("Spaldingsstr.");
        break;
    }
    case 293707:
    {
        returnValue = F("Spaldingstr.");
        break;
    }
    case 293708:
    {
        returnValue = F("Spalgrubenweg");
        break;
    }
    case 293709:
    {
        returnValue = F("Spaltbrunnengasse");
        break;
    }
    case 293710:
    {
        returnValue = F("Spaltenhof");
        break;
    }
    case 293711:
    {
        returnValue = F("Spaltensteiner Str.");
        break;
    }
    case 293712:
    {
        returnValue = F("Spalter Str.");
        break;
    }
    case 293713:
    {
        returnValue = F("Spalterhalsweg");
        break;
    }
    case 293714:
    {
        returnValue = F("Spalterstr.");
        break;
    }
    case 293715:
    {
        returnValue = F("Spaltsberg");
        break;
    }
    case 293716:
    {
        returnValue = F("Spalönj");
        break;
    }
    case 293717:
    {
        returnValue = F("Spanbecker Weg");
        break;
    }
    case 293718:
    {
        returnValue = F("Spandauer Allee");
        break;
    }
    case 293719:
    {
        returnValue = F("Spandauer Feld");
        break;
    }
    case 293720:
    {
        returnValue = F("Spandauer Landstr.");
        break;
    }
    case 293721:
    {
        returnValue = F("Spandauer Sandweg");
        break;
    }
    case 293722:
    {
        returnValue = F("Spandauer Str.");
        break;
    }
    case 293723:
    {
        returnValue = F("Spandauer Weg");
        break;
    }
    case 293724:
    {
        returnValue = F("Spandauerweg");
        break;
    }
    case 293725:
    {
        returnValue = F("Spandowerhagener Weg");
        break;
    }
    case 293726:
    {
        returnValue = F("Spanedel");
        break;
    }
    case 293727:
    {
        returnValue = F("Spaneng");
        break;
    }
    case 293728:
    {
        returnValue = F("Spanenkamp");
        break;
    }
    case 293729:
    {
        returnValue = F("Spang");
        break;
    }
    case 293730:
    {
        returnValue = F("Spangdahlemer Str.");
        break;
    }
    case 293731:
    {
        returnValue = F("Spange");
        break;
    }
    case 293732:
    {
        returnValue = F("Spangeländer");
        break;
    }
    case 293733:
    {
        returnValue = F("Spangenberger Pfad");
        break;
    }
    case 293734:
    {
        returnValue = F("Spangenberger Str.");
        break;
    }
    case 293735:
    {
        returnValue = F("Spangenbergerwiesenweg");
        break;
    }
    case 293736:
    {
        returnValue = F("Spangenbergstr.");
        break;
    }
    case 293737:
    {
        returnValue = F("Spangenbergweg");
        break;
    }
    case 293738:
    {
        returnValue = F("Spangenbreite");
        break;
    }
    case 293739:
    {
        returnValue = F("Spanger Damm");
        break;
    }
    case 293740:
    {
        returnValue = F("Spanger Str.");
        break;
    }
    case 293741:
    {
        returnValue = F("Spangerweg");
        break;
    }
    case 293742:
    {
        returnValue = F("Spangraben");
        break;
    }
    case 293743:
    {
        returnValue = F("Spangweg");
        break;
    }
    case 293744:
    {
        returnValue = F("Spanhalde");
        break;
    }
    case 293745:
    {
        returnValue = F("Spanhaufenstr.");
        break;
    }
    case 293746:
    {
        returnValue = F("Spaniers Hand");
        break;
    }
    case 293747:
    {
        returnValue = F("Spanierstr.");
        break;
    }
    case 293748:
    {
        returnValue = F("Spanigasse");
        break;
    }
    case 293749:
    {
        returnValue = F("Spanische Ecke");
        break;
    }
    case 293750:
    {
        returnValue = F("Spanische Kall");
        break;
    }
    case 293751:
    {
        returnValue = F("Spanische Schanzen");
        break;
    }
    case 293752:
    {
        returnValue = F("Spanische Str.");
        break;
    }
    case 293753:
    {
        returnValue = F("Spanischer Platz");
        break;
    }
    case 293754:
    {
        returnValue = F("Spanischer Weg");
        break;
    }
    case 293755:
    {
        returnValue = F("Spankorbstr.");
        break;
    }
    case 293756:
    {
        returnValue = F("Spann");
        break;
    }
    case 293757:
    {
        returnValue = F("Spannagelstr.");
        break;
    }
    case 293758:
    {
        returnValue = F("Spannagelweg");
        break;
    }
    case 293759:
    {
        returnValue = F("Spannaglstr.");
        break;
    }
    case 293760:
    {
        returnValue = F("Spannan");
        break;
    }
    case 293761:
    {
        returnValue = F("Spannbrück");
        break;
    }
    case 293762:
    {
        returnValue = F("Spannerberg");
        break;
    }
    case 293763:
    {
        returnValue = F("Spannerhausweg");
        break;
    }
    case 293764:
    {
        returnValue = F("Spannerstr.");
        break;
    }
    case 293765:
    {
        returnValue = F("Spanngassenweg");
        break;
    }
    case 293766:
    {
        returnValue = F("Spanngrund");
        break;
    }
    case 293767:
    {
        returnValue = F("Spanngäßchen");
        break;
    }
    case 293768:
    {
        returnValue = F("Spannhecker Str.");
        break;
    }
    case 293769:
    {
        returnValue = F("Spannhornbeek");
        break;
    }
    case 293770:
    {
        returnValue = F("Spanniger");
        break;
    }
    case 293771:
    {
        returnValue = F("Spanningerstr.");
        break;
    }
    case 293772:
    {
        returnValue = F("Spannkamp");
        break;
    }
    case 293773:
    {
        returnValue = F("Spannleitenberg");
        break;
    }
    case 293774:
    {
        returnValue = F("Spannstattstr.");
        break;
    }
    case 293775:
    {
        returnValue = F("Spannstr.");
        break;
    }
    case 293776:
    {
        returnValue = F("Spanntalstr.");
        break;
    }
    case 293777:
    {
        returnValue = F("Spanntigstr.");
        break;
    }
    case 293778:
    {
        returnValue = F("Spannweg");
        break;
    }
    case 293779:
    {
        returnValue = F("Spanplatzweg");
        break;
    }
    case 293780:
    {
        returnValue = F("Spanröse");
        break;
    }
    case 293781:
    {
        returnValue = F("Spansberg");
        break;
    }
    case 293782:
    {
        returnValue = F("Spansberger Str.");
        break;
    }
    case 293783:
    {
        returnValue = F("Spansberger Weg");
        break;
    }
    case 293784:
    {
        returnValue = F("Spansfeld");
        break;
    }
    case 293785:
    {
        returnValue = F("Spansteig");
        break;
    }
    case 293786:
    {
        returnValue = F("Spanstr.");
        break;
    }
    case 293787:
    {
        returnValue = F("Spantekower Landstr.");
        break;
    }
    case 293788:
    {
        returnValue = F("Spanweg");
        break;
    }
    case 293789:
    {
        returnValue = F("Spanäcker");
        break;
    }
    case 293790:
    {
        returnValue = F("Spar die Müh");
        break;
    }
    case 293791:
    {
        returnValue = F("Sparbachstr.");
        break;
    }
    case 293792:
    {
        returnValue = F("Sparbenhecke");
        break;
    }
    case 293793:
    {
        returnValue = F("Sparbruck");
        break;
    }
    case 293794:
    {
        returnValue = F("Spardorfer Str.");
        break;
    }
    case 293795:
    {
        returnValue = F("Spardorfer Weg");
        break;
    }
    case 293796:
    {
        returnValue = F("Sparenbergstr.");
        break;
    }
    case 293797:
    {
        returnValue = F("Sparenbergweg");
        break;
    }
    case 293798:
    {
        returnValue = F("Sparengasse");
        break;
    }
    case 293799:
    {
        returnValue = F("Spargasse");
        break;
    }
    case 293800:
    {
        returnValue = F("Spargelfeld");
        break;
    }
    case 293801:
    {
        returnValue = F("Spargelkoppel");
        break;
    }
    case 293802:
    {
        returnValue = F("Spargelstr.");
        break;
    }
    case 293803:
    {
        returnValue = F("Spargelweg");
        break;
    }
    case 293804:
    {
        returnValue = F("Spargreet");
        break;
    }
    case 293805:
    {
        returnValue = F("Sparhof");
        break;
    }
    case 293806:
    {
        returnValue = F("Sparhofer Weg");
        break;
    }
    case 293807:
    {
        returnValue = F("Sparkassen Bike Arena Plettenberg");
        break;
    }
    case 293808:
    {
        returnValue = F("Sparkassen Promenade");
        break;
    }
    case 293809:
    {
        returnValue = F("Sparkassen-Kreisel");
        break;
    }
    case 293810:
    {
        returnValue = F("Sparkassen-Passage");
        break;
    }
    case 293811:
    {
        returnValue = F("Sparkassen-Schul-Str.");
        break;
    }
    case 293812:
    {
        returnValue = F("Sparkassenallee");
        break;
    }
    case 293813:
    {
        returnValue = F("Sparkassenpark");
        break;
    }
    case 293814:
    {
        returnValue = F("Sparkassenpassage");
        break;
    }
    case 293815:
    {
        returnValue = F("Sparkassenplatz");
        break;
    }
    case 293816:
    {
        returnValue = F("Sparkassensteg");
        break;
    }
    case 293817:
    {
        returnValue = F("Sparkassenstr.");
        break;
    }
    case 293818:
    {
        returnValue = F("Sparkassenweg");
        break;
    }
    case 293819:
    {
        returnValue = F("Sparkebüller Str.");
        break;
    }
    case 293820:
    {
        returnValue = F("Sparnaglesweg");
        break;
    }
    case 293821:
    {
        returnValue = F("Sparnberg");
        break;
    }
    case 293822:
    {
        returnValue = F("Sparnecker Str.");
        break;
    }
    case 293823:
    {
        returnValue = F("Sparnsbergstr.");
        break;
    }
    case 293824:
    {
        returnValue = F("Sparow");
        break;
    }
    case 293825:
    {
        returnValue = F("Sparower Weg");
        break;
    }
    case 293826:
    {
        returnValue = F("Sparrenberg");
        break;
    }
    case 293827:
    {
        returnValue = F("Sparrenburg");
        break;
    }
    case 293828:
    {
        returnValue = F("Sparrenburgweg");
        break;
    }
    case 293829:
    {
        returnValue = F("Sparrengasse");
        break;
    }
    case 293830:
    {
        returnValue = F("Sparrenloh");
        break;
    }
    case 293831:
    {
        returnValue = F("Sparrenweg");
        break;
    }
    case 293832:
    {
        returnValue = F("Sparrhofgasse");
        break;
    }
    case 293833:
    {
        returnValue = F("Sparrhöh");
        break;
    }
    case 293834:
    {
        returnValue = F("Spartakistenweg");
        break;
    }
    case 293835:
    {
        returnValue = F("Spartakussiedlung");
        break;
    }
    case 293836:
    {
        returnValue = F("Spartakusstr.");
        break;
    }
    case 293837:
    {
        returnValue = F("Spartakusweg");
        break;
    }
    case 293838:
    {
        returnValue = F("Spartastr.");
        break;
    }
    case 293839:
    {
        returnValue = F("Spartaweg");
        break;
    }
    case 293840:
    {
        returnValue = F("Sparte Freundschaft");
        break;
    }
    case 293841:
    {
        returnValue = F("Sparte am Wiesengrund");
        break;
    }
    case 293842:
    {
        returnValue = F("Spartelsberg");
        break;
    }
    case 293843:
    {
        returnValue = F("Spartenweg");
        break;
    }
    case 293844:
    {
        returnValue = F("Sparwasser");
        break;
    }
    case 293845:
    {
        returnValue = F("Sparweg");
        break;
    }
    case 293846:
    {
        returnValue = F("Sparwieser Fußweg");
        break;
    }
    case 293847:
    {
        returnValue = F("Sparwieser Str.");
        break;
    }
    case 293848:
    {
        returnValue = F("Sparzer Weg");
        break;
    }
    case 293849:
    {
        returnValue = F("Spasche");
        break;
    }
    case 293850:
    {
        returnValue = F("Spascher Feldweg");
        break;
    }
    case 293851:
    {
        returnValue = F("Spascher Grund");
        break;
    }
    case 293852:
    {
        returnValue = F("Spatecke");
        break;
    }
    case 293853:
    {
        returnValue = F("Spatelweg");
        break;
    }
    case 293854:
    {
        returnValue = F("Spatenschneise");
        break;
    }
    case 293855:
    {
        returnValue = F("Spatenstr.");
        break;
    }
    case 293856:
    {
        returnValue = F("Spatenweg");
        break;
    }
    case 293857:
    {
        returnValue = F("Spatgrube");
        break;
    }
    case 293858:
    {
        returnValue = F("Spathaweg");
        break;
    }
    case 293859:
    {
        returnValue = F("Spathenweg");
        break;
    }
    case 293860:
    {
        returnValue = F("Spatweg");
        break;
    }
    case 293861:
    {
        returnValue = F("Spatzenberg");
        break;
    }
    case 293862:
    {
        returnValue = F("Spatzenbergweg");
        break;
    }
    case 293863:
    {
        returnValue = F("Spatzeneck");
        break;
    }
    case 293864:
    {
        returnValue = F("Spatzenfang");
        break;
    }
    case 293865:
    {
        returnValue = F("Spatzenfeld");
        break;
    }
    case 293866:
    {
        returnValue = F("Spatzengasse");
        break;
    }
    case 293867:
    {
        returnValue = F("Spatzengrund");
        break;
    }
    case 293868:
    {
        returnValue = F("Spatzengäßle");
        break;
    }
    case 293869:
    {
        returnValue = F("Spatzenhalde");
        break;
    }
    case 293870:
    {
        returnValue = F("Spatzenhausener Str.");
        break;
    }
    case 293871:
    {
        returnValue = F("Spatzenhof");
        break;
    }
    case 293872:
    {
        returnValue = F("Spatzenhofstr.");
        break;
    }
    case 293873:
    {
        returnValue = F("Spatzenhofweg");
        break;
    }
    case 293874:
    {
        returnValue = F("Spatzenhübel");
        break;
    }
    case 293875:
    {
        returnValue = F("Spatzenloh");
        break;
    }
    case 293876:
    {
        returnValue = F("Spatzenlohweg");
        break;
    }
    case 293877:
    {
        returnValue = F("Spatzenmühle");
        break;
    }
    case 293878:
    {
        returnValue = F("Spatzennest");
        break;
    }
    case 293879:
    {
        returnValue = F("Spatzenpfad");
        break;
    }
    case 293880:
    {
        returnValue = F("Spatzenpointweg");
        break;
    }
    case 293881:
    {
        returnValue = F("Spatzenring");
        break;
    }
    case 293882:
    {
        returnValue = F("Spatzensattler Stäge");
        break;
    }
    case 293883:
    {
        returnValue = F("Spatzensteg");
        break;
    }
    case 293884:
    {
        returnValue = F("Spatzenstieg");
        break;
    }
    case 293885:
    {
        returnValue = F("Spatzenweg");
        break;
    }
    case 293886:
    {
        returnValue = F("Spatzenwiesenweg");
        break;
    }
    case 293887:
    {
        returnValue = F("Spatzenwinkel");
        break;
    }
    case 293888:
    {
        returnValue = F("Spatzenäckerweg");
        break;
    }
    case 293889:
    {
        returnValue = F("Spatzreiter Str.");
        break;
    }
    case 293890:
    {
        returnValue = F("Spazierweg");
        break;
    }
    case 293891:
    {
        returnValue = F("Spazzostr.");
        break;
    }
    case 293892:
    {
        returnValue = F("Spechaastr.");
        break;
    }
    case 293893:
    {
        returnValue = F("Spechbacher Str.");
        break;
    }
    case 293894:
    {
        returnValue = F("Spechbacher Weg");
        break;
    }
    case 293895:
    {
        returnValue = F("Spechklingenweg");
        break;
    }
    case 293896:
    {
        returnValue = F("Spechsart");
        break;
    }
    case 293897:
    {
        returnValue = F("Spechserholz");
        break;
    }
    case 293898:
    {
        returnValue = F("Spechtbach");
        break;
    }
    case 293899:
    {
        returnValue = F("Spechtbogen");
        break;
    }
    case 293900:
    {
        returnValue = F("Spechtbrücke");
        break;
    }
    case 293901:
    {
        returnValue = F("Spechterberg");
        break;
    }
    case 293902:
    {
        returnValue = F("Spechtgasse");
        break;
    }
    case 293903:
    {
        returnValue = F("Spechtgrund");
        break;
    }
    case 293904:
    {
        returnValue = F("Spechthausen");
        break;
    }
    case 293905:
    {
        returnValue = F("Spechthausener Str.");
        break;
    }
    case 293906:
    {
        returnValue = F("Spechtpfad");
        break;
    }
    case 293907:
    {
        returnValue = F("Spechtritzer Kirchweg");
        break;
    }
    case 293908:
    {
        returnValue = F("Spechtritzer Str.");
        break;
    }
    case 293909:
    {
        returnValue = F("Spechtritzer-Str.");
        break;
    }
    case 293910:
    {
        returnValue = F("Spechtsbachsträßle nb");
        break;
    }
    case 293911:
    {
        returnValue = F("Spechtsberg");
        break;
    }
    case 293912:
    {
        returnValue = F("Spechtschmiede");
        break;
    }
    case 293913:
    {
        returnValue = F("Spechtschneise");
        break;
    }
    case 293914:
    {
        returnValue = F("Spechtsgraben");
        break;
    }
    case 293915:
    {
        returnValue = F("Spechtshausener Str.");
        break;
    }
    case 293916:
    {
        returnValue = F("Spechtshof");
        break;
    }
    case 293917:
    {
        returnValue = F("Spechtshorner Str.");
        break;
    }
    case 293918:
    {
        returnValue = F("Spechtshöhe");
        break;
    }
    case 293919:
    {
        returnValue = F("Spechtstr.");
        break;
    }
    case 293920:
    {
        returnValue = F("Spechtsweg");
        break;
    }
    case 293921:
    {
        returnValue = F("Spechttalgasse");
        break;
    }
    case 293922:
    {
        returnValue = F("Spechtweg");
        break;
    }
    case 293923:
    {
        returnValue = F("Spechtwinkel");
        break;
    }
    case 293924:
    {
        returnValue = F("Speck");
        break;
    }
    case 293925:
    {
        returnValue = F("Speckacker");
        break;
    }
    case 293926:
    {
        returnValue = F("Speckackerweg");
        break;
    }
    case 293927:
    {
        returnValue = F("Speckangerweg");
        break;
    }
    case 293928:
    {
        returnValue = F("Speckbach");
        break;
    }
    case 293929:
    {
        returnValue = F("Speckbacher Leiten");
        break;
    }
    case 293930:
    {
        returnValue = F("Speckbachweg");
        break;
    }
    case 293931:
    {
        returnValue = F("Speckbaum");
        break;
    }
    case 293932:
    {
        returnValue = F("Speckberg");
        break;
    }
    case 293933:
    {
        returnValue = F("Speckbichl");
        break;
    }
    case 293934:
    {
        returnValue = F("Specke");
        break;
    }
    case 293935:
    {
        returnValue = F("Speckeln");
        break;
    }
    case 293936:
    {
        returnValue = F("Speckelnstr.");
        break;
    }
    case 293937:
    {
        returnValue = F("Speckelstein");
        break;
    }
    case 293938:
    {
        returnValue = F("Speckelsteiner Allee");
        break;
    }
    case 293939:
    {
        returnValue = F("Speckelsteinstr.");
        break;
    }
    case 293940:
    {
        returnValue = F("Speckelsteinweg");
        break;
    }
    case 293941:
    {
        returnValue = F("Specken");
        break;
    }
    case 293942:
    {
        returnValue = F("Speckenbach");
        break;
    }
    case 293943:
    {
        returnValue = F("Speckendamm");
        break;
    }
    case 293944:
    {
        returnValue = F("Speckener Str.");
        break;
    }
    case 293945:
    {
        returnValue = F("Speckener Weg");
        break;
    }
    case 293946:
    {
        returnValue = F("Speckenfeld");
        break;
    }
    case 293947:
    {
        returnValue = F("Speckenkamp");
        break;
    }
    case 293948:
    {
        returnValue = F("Speckenmoor");
        break;
    }
    case 293949:
    {
        returnValue = F("Speckenstieg");
        break;
    }
    case 293950:
    {
        returnValue = F("Speckenstr.");
        break;
    }
    case 293951:
    {
        returnValue = F("Speckentorstr.");
        break;
    }
    case 293952:
    {
        returnValue = F("Speckenwall");
        break;
    }
    case 293953:
    {
        returnValue = F("Speckenweg");
        break;
    }
    case 293954:
    {
        returnValue = F("Specker Kamp");
        break;
    }
    case 293955:
    {
        returnValue = F("Specker Str.");
        break;
    }
    case 293956:
    {
        returnValue = F("Specker Weg");
        break;
    }
    case 293957:
    {
        returnValue = F("Speckerbrücke");
        break;
    }
    case 293958:
    {
        returnValue = F("Speckerhohlweg");
        break;
    }
    case 293959:
    {
        returnValue = F("Speckertsweg");
        break;
    }
    case 293960:
    {
        returnValue = F("Speckerweg");
        break;
    }
    case 293961:
    {
        returnValue = F("Speckespan");
        break;
    }
    case 293962:
    {
        returnValue = F("Speckestegweg");
        break;
    }
    case 293963:
    {
        returnValue = F("Speckestr.");
        break;
    }
    case 293964:
    {
        returnValue = F("Speckeweg");
        break;
    }
    case 293965:
    {
        returnValue = F("Speckfeld");
        break;
    }
    case 293966:
    {
        returnValue = F("Speckfeldring");
        break;
    }
    case 293967:
    {
        returnValue = F("Speckfeldweg");
        break;
    }
    case 293968:
    {
        returnValue = F("Speckgasse");
        break;
    }
    case 293969:
    {
        returnValue = F("Speckgraben");
        break;
    }
    case 293970:
    {
        returnValue = F("Speckgärten");
        break;
    }
    case 293971:
    {
        returnValue = F("Speckhaldenweg");
        break;
    }
    case 293972:
    {
        returnValue = F("Speckheimer Str.");
        break;
    }
    case 293973:
    {
        returnValue = F("Speckheimer Weg");
        break;
    }
    case 293974:
    {
        returnValue = F("Speckicht");
        break;
    }
    case 293975:
    {
        returnValue = F("Speckinger Weg");
        break;
    }
    case 293976:
    {
        returnValue = F("Speckingsweg");
        break;
    }
    case 293977:
    {
        returnValue = F("Speckjer Str.");
        break;
    }
    case 293978:
    {
        returnValue = F("Speckkamp");
        break;
    }
    case 293979:
    {
        returnValue = F("Speckkuchengasse");
        break;
    }
    case 293980:
    {
        returnValue = F("Specklach");
        break;
    }
    case 293981:
    {
        returnValue = F("Speckmannsgasse");
        break;
    }
    case 293982:
    {
        returnValue = F("Speckmannskamp");
        break;
    }
    case 293983:
    {
        returnValue = F("Speckmannstr.");
        break;
    }
    case 293984:
    {
        returnValue = F("Speckmannsweg");
        break;
    }
    case 293985:
    {
        returnValue = F("Speckmannweg");
        break;
    }
    case 293986:
    {
        returnValue = F("Speckmittelweg");
        break;
    }
    case 293987:
    {
        returnValue = F("Speckmühle");
        break;
    }
    case 293988:
    {
        returnValue = F("Speckmühlweg");
        break;
    }
    case 293989:
    {
        returnValue = F("Specksauschneise");
        break;
    }
    case 293990:
    {
        returnValue = F("Speckschlade");
        break;
    }
    case 293991:
    {
        returnValue = F("Speckshof");
        break;
    }
    case 293992:
    {
        returnValue = F("Speckshofer Str.");
        break;
    }
    case 293993:
    {
        returnValue = F("Specksniederstrate");
        break;
    }
    case 293994:
    {
        returnValue = F("Speckspitze");
        break;
    }
    case 293995:
    {
        returnValue = F("Specksrothstr.");
        break;
    }
    case 293996:
    {
        returnValue = F("Speckstr.");
        break;
    }
    case 293997:
    {
        returnValue = F("Speckswinkel");
        break;
    }
    case 293998:
    {
        returnValue = F("Speckswinkeler Str.");
        break;
    }
    case 293999:
    {
        returnValue = F("Speckturm");
        break;
    }
    case 294000:
    {
        returnValue = F("Speckweg");
        break;
    }
    case 294001:
    {
        returnValue = F("Speckwiese");
        break;
    }
    case 294002:
    {
        returnValue = F("Speckwinkel");
        break;
    }
    case 294003:
    {
        returnValue = F("Speckäcker");
        break;
    }
    case 294004:
    {
        returnValue = F("Speedway (ehem. Fernbandtrasse)");
        break;
    }
    case 294005:
    {
        returnValue = F("Speefeld");
        break;
    }
    case 294006:
    {
        returnValue = F("Speekenweg");
        break;
    }
    case 294007:
    {
        returnValue = F("Speekhoop");
        break;
    }
    case 294008:
    {
        returnValue = F("Speelberger Grenzweg");
        break;
    }
    case 294009:
    {
        returnValue = F("Speelberger Str.");
        break;
    }
    case 294010:
    {
        returnValue = F("Speeler Str.");
        break;
    }
    case 294011:
    {
        returnValue = F("Speeler Weg");
        break;
    }
    case 294012:
    {
        returnValue = F("Speelkamp");
        break;
    }
    case 294013:
    {
        returnValue = F("Speelwark Padd");
        break;
    }
    case 294014:
    {
        returnValue = F("Speerbaumweg");
        break;
    }
    case 294015:
    {
        returnValue = F("Speerberblick");
        break;
    }
    case 294016:
    {
        returnValue = F("Speerhaus");
        break;
    }
    case 294017:
    {
        returnValue = F("Speersort");
        break;
    }
    case 294018:
    {
        returnValue = F("Speerstr.");
        break;
    }
    case 294019:
    {
        returnValue = F("Speestr.");
        break;
    }
    case 294020:
    {
        returnValue = F("Spegel");
        break;
    }
    case 294021:
    {
        returnValue = F("Spehstr.");
        break;
    }
    case 294022:
    {
        returnValue = F("Speichackerstr.");
        break;
    }
    case 294023:
    {
        returnValue = F("Speicher");
        break;
    }
    case 294024:
    {
        returnValue = F("Speicher-Acker-Str.");
        break;
    }
    case 294025:
    {
        returnValue = F("Speicherbeckenring");
        break;
    }
    case 294026:
    {
        returnValue = F("Speicherer Str.");
        break;
    }
    case 294027:
    {
        returnValue = F("Speichergasse");
        break;
    }
    case 294028:
    {
        returnValue = F("Speichermatt");
        break;
    }
    case 294029:
    {
        returnValue = F("Speichermatte");
        break;
    }
    case 294030:
    {
        returnValue = F("Speicherreihe");
        break;
    }
    case 294031:
    {
        returnValue = F("Speicherseering");
        break;
    }
    case 294032:
    {
        returnValue = F("Speicherseestr.");
        break;
    }
    case 294033:
    {
        returnValue = F("Speicherstr.");
        break;
    }
    case 294034:
    {
        returnValue = F("Speicherwaldweg");
        break;
    }
    case 294035:
    {
        returnValue = F("Speicherweg");
        break;
    }
    case 294036:
    {
        returnValue = F("Speicherwinkel");
        break;
    }
    case 294037:
    {
        returnValue = F("Speidelsberg");
        break;
    }
    case 294038:
    {
        returnValue = F("Speidelstr.");
        break;
    }
    case 294039:
    {
        returnValue = F("Speidenerstr.");
        break;
    }
    case 294040:
    {
        returnValue = F("Speierhügelschneise");
        break;
    }
    case 294041:
    {
        returnValue = F("Speierlinghof");
        break;
    }
    case 294042:
    {
        returnValue = F("Speierlingsallee");
        break;
    }
    case 294043:
    {
        returnValue = F("Speierlingstr.");
        break;
    }
    case 294044:
    {
        returnValue = F("Speierlingsweg");
        break;
    }
    case 294045:
    {
        returnValue = F("Speierlingweg");
        break;
    }
    case 294046:
    {
        returnValue = F("Speiermühle");
        break;
    }
    case 294047:
    {
        returnValue = F("Speiersbaumer Weg");
        break;
    }
    case 294048:
    {
        returnValue = F("Speiersberg");
        break;
    }
    case 294049:
    {
        returnValue = F("Speigelweg");
        break;
    }
    case 294050:
    {
        returnValue = F("Speiglerstr.");
        break;
    }
    case 294051:
    {
        returnValue = F("Speihäckerstr.");
        break;
    }
    case 294052:
    {
        returnValue = F("Speikerner Str.");
        break;
    }
    case 294053:
    {
        returnValue = F("Speinsharter Str.");
        break;
    }
    case 294054:
    {
        returnValue = F("Speisemarkt");
        break;
    }
    case 294055:
    {
        returnValue = F("Speiserstr.");
        break;
    }
    case 294056:
    {
        returnValue = F("Speldroper Str.");
        break;
    }
    case 294057:
    {
        returnValue = F("Spelgenweg");
        break;
    }
    case 294058:
    {
        returnValue = F("Spellbrink");
        break;
    }
    case 294059:
    {
        returnValue = F("Spellener Str.");
        break;
    }
    case 294060:
    {
        returnValue = F("Speller Str.");
        break;
    }
    case 294061:
    {
        returnValue = F("Speller Weg");
        break;
    }
    case 294062:
    {
        returnValue = F("Spellerstr.");
        break;
    }
    case 294063:
    {
        returnValue = F("Spellerteich");
        break;
    }
    case 294064:
    {
        returnValue = F("Spellerweg");
        break;
    }
    case 294065:
    {
        returnValue = F("Spellgasse");
        break;
    }
    case 294066:
    {
        returnValue = F("Spellmannsbrink");
        break;
    }
    case 294067:
    {
        returnValue = F("Spelsberg");
        break;
    }
    case 294068:
    {
        returnValue = F("Spelsbergweg");
        break;
    }
    case 294069:
    {
        returnValue = F("Speltachblick");
        break;
    }
    case 294070:
    {
        returnValue = F("Speltbachweg");
        break;
    }
    case 294071:
    {
        returnValue = F("Speltenbach-Steinaecker");
        break;
    }
    case 294072:
    {
        returnValue = F("Speltenbacher Weg");
        break;
    }
    case 294073:
    {
        returnValue = F("Spelterstr.");
        break;
    }
    case 294074:
    {
        returnValue = F("Speltweg");
        break;
    }
    case 294075:
    {
        returnValue = F("Spelzbachstr.");
        break;
    }
    case 294076:
    {
        returnValue = F("Spelzberg");
        break;
    }
    case 294077:
    {
        returnValue = F("Spelzenacker");
        break;
    }
    case 294078:
    {
        returnValue = F("Spelzenackerstr.");
        break;
    }
    case 294079:
    {
        returnValue = F("Spelzengasse");
        break;
    }
    case 294080:
    {
        returnValue = F("Spelzenhofstr.");
        break;
    }
    case 294081:
    {
        returnValue = F("Spendeltal");
        break;
    }
    case 294082:
    {
        returnValue = F("Spendweg");
        break;
    }
    case 294083:
    {
        returnValue = F("Spendäcker Str.");
        break;
    }
    case 294084:
    {
        returnValue = F("Spenerweg");
        break;
    }
    case 294085:
    {
        returnValue = F("Spengelgasse");
        break;
    }
    case 294086:
    {
        returnValue = F("Spengelinweg");
        break;
    }
    case 294087:
    {
        returnValue = F("Spengelstr.");
        break;
    }
    case 294088:
    {
        returnValue = F("Spenger Heide");
        break;
    }
    case 294089:
    {
        returnValue = F("Spenger Str.");
        break;
    }
    case 294090:
    {
        returnValue = F("Spengersagweg");
        break;
    }
    case 294091:
    {
        returnValue = F("Spengerweg");
        break;
    }
    case 294092:
    {
        returnValue = F("Spenglergasse");
        break;
    }
    case 294093:
    {
        returnValue = F("Spenglersruh");
        break;
    }
    case 294094:
    {
        returnValue = F("Spenglerstr.");
        break;
    }
    case 294095:
    {
        returnValue = F("Spenglerweg");
        break;
    }
    case 294096:
    {
        returnValue = F("Spennelberg");
        break;
    }
    case 294097:
    {
        returnValue = F("Spenting");
        break;
    }
    case 294098:
    {
        returnValue = F("Spenzestr.");
        break;
    }
    case 294099:
    {
        returnValue = F("Sperbelbaumweg");
        break;
    }
    case 294100:
    {
        returnValue = F("Sperbelgartenstr.");
        break;
    }
    case 294101:
    {
        returnValue = F("Sperbelhecke");
        break;
    }
    case 294102:
    {
        returnValue = F("Sperberallee");
        break;
    }
    case 294103:
    {
        returnValue = F("Sperberbaumweg");
        break;
    }
    case 294104:
    {
        returnValue = F("Sperberblick");
        break;
    }
    case 294105:
    {
        returnValue = F("Sperberfeld");
        break;
    }
    case 294106:
    {
        returnValue = F("Sperbergasse");
        break;
    }
    case 294107:
    {
        returnValue = F("Sperberggasse");
        break;
    }
    case 294108:
    {
        returnValue = F("Sperberhau-Richtstatt");
        break;
    }
    case 294109:
    {
        returnValue = F("Sperberhaustr.");
        break;
    }
    case 294110:
    {
        returnValue = F("Sperberhof");
        break;
    }
    case 294111:
    {
        returnValue = F("Sperberhorst");
        break;
    }
    case 294112:
    {
        returnValue = F("Sperberhöhe");
        break;
    }
    case 294113:
    {
        returnValue = F("Sperberkamp");
        break;
    }
    case 294114:
    {
        returnValue = F("Sperberplatz");
        break;
    }
    case 294115:
    {
        returnValue = F("Sperberring");
        break;
    }
    case 294116:
    {
        returnValue = F("Sperbersbach-Brücke");
        break;
    }
    case 294117:
    {
        returnValue = F("Sperberschneise");
        break;
    }
    case 294118:
    {
        returnValue = F("Sperberseck");
        break;
    }
    case 294119:
    {
        returnValue = F("Sperberseckstr.");
        break;
    }
    case 294120:
    {
        returnValue = F("Sperbersgrund");
        break;
    }
    case 294121:
    {
        returnValue = F("Sperberslaubweg");
        break;
    }
    case 294122:
    {
        returnValue = F("Sperbersloher Str.");
        break;
    }
    case 294123:
    {
        returnValue = F("Sperbersteich-Sträßle");
        break;
    }
    case 294124:
    {
        returnValue = F("Sperberstieg");
        break;
    }
    case 294125:
    {
        returnValue = F("Sperberstr.");
        break;
    }
    case 294126:
    {
        returnValue = F("Sperbersträßle");
        break;
    }
    case 294127:
    {
        returnValue = F("Sperberwall");
        break;
    }
    case 294128:
    {
        returnValue = F("Sperberwarte");
        break;
    }
    case 294129:
    {
        returnValue = F("Sperberweg");
        break;
    }
    case 294130:
    {
        returnValue = F("Sperberwegpfad");
        break;
    }
    case 294131:
    {
        returnValue = F("Sperberwinkel");
        break;
    }
    case 294132:
    {
        returnValue = F("Sperberzug");
        break;
    }
    case 294133:
    {
        returnValue = F("Sperberäckerweg");
        break;
    }
    case 294134:
    {
        returnValue = F("Sperenberger Str.");
        break;
    }
    case 294135:
    {
        returnValue = F("Sperforkenweg");
        break;
    }
    case 294136:
    {
        returnValue = F("Spergauer Str.");
        break;
    }
    case 294137:
    {
        returnValue = F("Spergauer Weg");
        break;
    }
    case 294138:
    {
        returnValue = F("Spergweg");
        break;
    }
    case 294139:
    {
        returnValue = F("Sperkengasse");
        break;
    }
    case 294140:
    {
        returnValue = F("Sperkenweg");
        break;
    }
    case 294141:
    {
        returnValue = F("Sperl-Ring");
        break;
    }
    case 294142:
    {
        returnValue = F("Sperlallee");
        break;
    }
    case 294143:
    {
        returnValue = F("Sperlgasse");
        break;
    }
    case 294144:
    {
        returnValue = F("Sperlhammer");
        break;
    }
    case 294145:
    {
        returnValue = F("Sperlhammerstr.");
        break;
    }
    case 294146:
    {
        returnValue = F("Sperlichstr.");
        break;
    }
    case 294147:
    {
        returnValue = F("Sperlinggang");
        break;
    }
    case 294148:
    {
        returnValue = F("Sperlinggasse");
        break;
    }
    case 294149:
    {
        returnValue = F("Sperlings Eck");
        break;
    }
    case 294150:
    {
        returnValue = F("Sperlingsau");
        break;
    }
    case 294151:
    {
        returnValue = F("Sperlingsberg");
        break;
    }
    case 294152:
    {
        returnValue = F("Sperlingsbogen");
        break;
    }
    case 294153:
    {
        returnValue = F("Sperlingsfeld");
        break;
    }
    case 294154:
    {
        returnValue = F("Sperlingsgang");
        break;
    }
    case 294155:
    {
        returnValue = F("Sperlingsgasse");
        break;
    }
    case 294156:
    {
        returnValue = F("Sperlingsgraben");
        break;
    }
    case 294157:
    {
        returnValue = F("Sperlingsgrund");
        break;
    }
    case 294158:
    {
        returnValue = F("Sperlingsherberge");
        break;
    }
    case 294159:
    {
        returnValue = F("Sperlingsherberger Weg");
        break;
    }
    case 294160:
    {
        returnValue = F("Sperlingshof");
        break;
    }
    case 294161:
    {
        returnValue = F("Sperlingshöh");
        break;
    }
    case 294162:
    {
        returnValue = F("Sperlingshöhe");
        break;
    }
    case 294163:
    {
        returnValue = F("Sperlingslust");
        break;
    }
    case 294164:
    {
        returnValue = F("Sperlingsplatz");
        break;
    }
    case 294165:
    {
        returnValue = F("Sperlingsrain");
        break;
    }
    case 294166:
    {
        returnValue = F("Sperlingsruh");
        break;
    }
    case 294167:
    {
        returnValue = F("Sperlingssteig");
        break;
    }
    case 294168:
    {
        returnValue = F("Sperlingsstr.");
        break;
    }
    case 294169:
    {
        returnValue = F("Sperlingstieg");
        break;
    }
    case 294170:
    {
        returnValue = F("Sperlingstr.");
        break;
    }
    case 294171:
    {
        returnValue = F("Sperlingsweg");
        break;
    }
    case 294172:
    {
        returnValue = F("Sperlingswinkel");
        break;
    }
    case 294173:
    {
        returnValue = F("Sperlingweg");
        break;
    }
    case 294174:
    {
        returnValue = F("Sperlstr.");
        break;
    }
    case 294175:
    {
        returnValue = F("Spermelerhohle");
        break;
    }
    case 294176:
    {
        returnValue = F("Sperrbauch");
        break;
    }
    case 294177:
    {
        returnValue = F("Sperrbergstr.");
        break;
    }
    case 294178:
    {
        returnValue = F("Sperre");
        break;
    }
    case 294179:
    {
        returnValue = F("Sperrengrundweg");
        break;
    }
    case 294180:
    {
        returnValue = F("Sperrental");
        break;
    }
    case 294181:
    {
        returnValue = F("Sperrentaler Weg");
        break;
    }
    case 294182:
    {
        returnValue = F("Sperrgarten");
        break;
    }
    case 294183:
    {
        returnValue = F("Sperrgasse");
        break;
    }
    case 294184:
    {
        returnValue = F("Sperrhaldenweg");
        break;
    }
    case 294185:
    {
        returnValue = F("Sperrhofstr.");
        break;
    }
    case 294186:
    {
        returnValue = F("Sperriesgrund");
        break;
    }
    case 294187:
    {
        returnValue = F("Sperrisweg");
        break;
    }
    case 294188:
    {
        returnValue = F("Sperrlohestr.");
        break;
    }
    case 294189:
    {
        returnValue = F("Sperrlutterweg");
        break;
    }
    case 294190:
    {
        returnValue = F("Sperrmauer");
        break;
    }
    case 294191:
    {
        returnValue = F("Sperrmauer-Nordufer");
        break;
    }
    case 294192:
    {
        returnValue = F("Sperrweg");
        break;
    }
    case 294193:
    {
        returnValue = F("Sperräcker");
        break;
    }
    case 294194:
    {
        returnValue = F("Spersdick");
        break;
    }
    case 294195:
    {
        returnValue = F("Spertelsweg");
        break;
    }
    case 294196:
    {
        returnValue = F("Spervogelstr.");
        break;
    }
    case 294197:
    {
        returnValue = F("Spesbacher Str.");
        break;
    }
    case 294198:
    {
        returnValue = F("Spesenrother Str.");
        break;
    }
    case 294199:
    {
        returnValue = F("Spesenrother Weg");
        break;
    }
    case 294200:
    {
        returnValue = F("Spessart-Höhenstr.");
        break;
    }
    case 294201:
    {
        returnValue = F("Spessartblick");
        break;
    }
    case 294202:
    {
        returnValue = F("Spessartblickweg");
        break;
    }
    case 294203:
    {
        returnValue = F("Spessartplatz");
        break;
    }
    case 294204:
    {
        returnValue = F("Spessartring");
        break;
    }
    case 294205:
    {
        returnValue = F("Spessartsiedlung");
        break;
    }
    case 294206:
    {
        returnValue = F("Spessartstr.");
        break;
    }
    case 294207:
    {
        returnValue = F("Spessartweg");
        break;
    }
    case 294208:
    {
        returnValue = F("Spesshardtermauerweg");
        break;
    }
    case 294209:
    {
        returnValue = F("Spetenhof");
        break;
    }
    case 294210:
    {
        returnValue = F("Spethmannstr.");
        break;
    }
    case 294211:
    {
        returnValue = F("Spethstr.");
        break;
    }
    case 294212:
    {
        returnValue = F("Spetschenweg");
        break;
    }
    case 294213:
    {
        returnValue = F("Spettinger Str.");
        break;
    }
    case 294214:
    {
        returnValue = F("Spetz");
        break;
    }
    case 294215:
    {
        returnValue = F("Spetzengasse");
        break;
    }
    case 294216:
    {
        returnValue = F("Spetzer Str.");
        break;
    }
    case 294217:
    {
        returnValue = F("Spetzgarter Tobel");
        break;
    }
    case 294218:
    {
        returnValue = F("Speuss");
        break;
    }
    case 294219:
    {
        returnValue = F("Spexarder Bahnhof");
        break;
    }
    case 294220:
    {
        returnValue = F("Speyerbachstr.");
        break;
    }
    case 294221:
    {
        returnValue = F("Speyerbachweg");
        break;
    }
    case 294222:
    {
        returnValue = F("Speyerbaumweg");
        break;
    }
    case 294223:
    {
        returnValue = F("Speyerdorfer Str.");
        break;
    }
    case 294224:
    {
        returnValue = F("Speyerer Hummelgarten");
        break;
    }
    case 294225:
    {
        returnValue = F("Speyerer Str.");
        break;
    }
    case 294226:
    {
        returnValue = F("Speyerer Weg");
        break;
    }
    case 294227:
    {
        returnValue = F("Speyerer Wingert");
        break;
    }
    case 294228:
    {
        returnValue = F("Speyerer-Tor-Str.");
        break;
    }
    case 294229:
    {
        returnValue = F("Speyerpfad");
        break;
    }
    case 294230:
    {
        returnValue = F("Speyersgasse");
        break;
    }
    case 294231:
    {
        returnValue = F("Speyerstr.");
        break;
    }
    case 294232:
    {
        returnValue = F("Speyerweg");
        break;
    }
    case 294233:
    {
        returnValue = F("Speßberg");
        break;
    }
    case 294234:
    {
        returnValue = F("Speßgertweg");
        break;
    }
    case 294235:
    {
        returnValue = F("Speßhardter Str.");
        break;
    }
    case 294236:
    {
        returnValue = F("Speßhardter Weg");
        break;
    }
    case 294237:
    {
        returnValue = F("Speßweg");
        break;
    }
    case 294238:
    {
        returnValue = F("Spich");
        break;
    }
    case 294239:
    {
        returnValue = F("Spichbuschstr.");
        break;
    }
    case 294240:
    {
        returnValue = F("Spicher Platz");
        break;
    }
    case 294241:
    {
        returnValue = F("Spicher Str.");
        break;
    }
    case 294242:
    {
        returnValue = F("Spichernstr.");
        break;
    }
    case 294243:
    {
        returnValue = F("Spichernweg");
        break;
    }
    case 294244:
    {
        returnValue = F("Spichgrünweg");
        break;
    }
    case 294245:
    {
        returnValue = F("Spichraer Str.");
        break;
    }
    case 294246:
    {
        returnValue = F("Spichstr.");
        break;
    }
    case 294247:
    {
        returnValue = F("Spichtweg");
        break;
    }
    case 294248:
    {
        returnValue = F("Spickebrücke");
        break;
    }
    case 294249:
    {
        returnValue = F("Spickendorfer Weg");
        break;
    }
    case 294250:
    {
        returnValue = F("Spickenstr.");
        break;
    }
    case 294251:
    {
        returnValue = F("Spickenweg");
        break;
    }
    case 294252:
    {
        returnValue = F("Spicker");
        break;
    }
    case 294253:
    {
        returnValue = F("Spickerbruchweg");
        break;
    }
    case 294254:
    {
        returnValue = F("Spickermannweg");
        break;
    }
    case 294255:
    {
        returnValue = F("Spickerweg");
        break;
    }
    case 294256:
    {
        returnValue = F("Spickschenweg");
        break;
    }
    case 294257:
    {
        returnValue = F("Spickweg");
        break;
    }
    case 294258:
    {
        returnValue = F("Spidellstr.");
        break;
    }
    case 294259:
    {
        returnValue = F("Spiechergässle");
        break;
    }
    case 294260:
    {
        returnValue = F("Spieck");
        break;
    }
    case 294261:
    {
        returnValue = F("Spiegel");
        break;
    }
    case 294262:
    {
        returnValue = F("Spiegel-Passage");
        break;
    }
    case 294263:
    {
        returnValue = F("Spiegelacker");
        break;
    }
    case 294264:
    {
        returnValue = F("Spiegelauer Str.");
        break;
    }
    case 294265:
    {
        returnValue = F("Spiegelauer Sträßchen");
        break;
    }
    case 294266:
    {
        returnValue = F("Spiegelbachpark");
        break;
    }
    case 294267:
    {
        returnValue = F("Spiegelberg");
        break;
    }
    case 294268:
    {
        returnValue = F("Spiegelbergallee");
        break;
    }
    case 294269:
    {
        returnValue = F("Spiegelbergstr.");
        break;
    }
    case 294270:
    {
        returnValue = F("Spiegelbreite");
        break;
    }
    case 294271:
    {
        returnValue = F("Spiegelbrunn");
        break;
    }
    case 294272:
    {
        returnValue = F("Spiegelbrücke");
        break;
    }
    case 294273:
    {
        returnValue = F("Spiegelburgring");
        break;
    }
    case 294274:
    {
        returnValue = F("Spiegelburgstr.");
        break;
    }
    case 294275:
    {
        returnValue = F("Spiegelbusch");
        break;
    }
    case 294276:
    {
        returnValue = F("Spiegeleierweg");
        break;
    }
    case 294277:
    {
        returnValue = F("Spiegelgang");
        break;
    }
    case 294278:
    {
        returnValue = F("Spiegelgarten");
        break;
    }
    case 294279:
    {
        returnValue = F("Spiegelgartenstr.");
        break;
    }
    case 294280:
    {
        returnValue = F("Spiegelgasse");
        break;
    }
    case 294281:
    {
        returnValue = F("Spiegelgraben");
        break;
    }
    case 294282:
    {
        returnValue = F("Spiegelgässchen");
        break;
    }
    case 294283:
    {
        returnValue = F("Spiegelhalde");
        break;
    }
    case 294284:
    {
        returnValue = F("Spiegelhalterstr.");
        break;
    }
    case 294285:
    {
        returnValue = F("Spiegelhof");
        break;
    }
    case 294286:
    {
        returnValue = F("Spiegelhüttenstr.");
        break;
    }
    case 294287:
    {
        returnValue = F("Spiegelkampsweg");
        break;
    }
    case 294288:
    {
        returnValue = F("Spiegelmühle");
        break;
    }
    case 294289:
    {
        returnValue = F("Spiegelpfad");
        break;
    }
    case 294290:
    {
        returnValue = F("Spiegelplatte");
        break;
    }
    case 294291:
    {
        returnValue = F("Spiegelsbergenweg");
        break;
    }
    case 294292:
    {
        returnValue = F("Spiegelsdorfer Damm");
        break;
    }
    case 294293:
    {
        returnValue = F("Spiegelsdorfer Wende");
        break;
    }
    case 294294:
    {
        returnValue = F("Spiegelslustweg");
        break;
    }
    case 294295:
    {
        returnValue = F("Spiegelstr.");
        break;
    }
    case 294296:
    {
        returnValue = F("Spiegelthaler Str.");
        break;
    }
    case 294297:
    {
        returnValue = F("Spiegelwaldstr.");
        break;
    }
    case 294298:
    {
        returnValue = F("Spiegelweg");
        break;
    }
    case 294299:
    {
        returnValue = F("Spieglerstr.");
        break;
    }
    case 294300:
    {
        returnValue = F("Spieglerweg");
        break;
    }
    case 294301:
    {
        returnValue = F("Spiek");
        break;
    }
    case 294302:
    {
        returnValue = F("Spieka-Booth");
        break;
    }
    case 294303:
    {
        returnValue = F("Spieka-Neufelder Str.");
        break;
    }
    case 294304:
    {
        returnValue = F("Spiekaer Kirchweg");
        break;
    }
    case 294305:
    {
        returnValue = F("Spiekaer Str.");
        break;
    }
    case 294306:
    {
        returnValue = F("Spieker Weg");
        break;
    }
    case 294307:
    {
        returnValue = F("Spiekerberg");
        break;
    }
    case 294308:
    {
        returnValue = F("Spiekerbohrweg");
        break;
    }
    case 294309:
    {
        returnValue = F("Spiekerburger Weg");
        break;
    }
    case 294310:
    {
        returnValue = F("Spiekerecke");
        break;
    }
    case 294311:
    {
        returnValue = F("Spiekergang");
        break;
    }
    case 294312:
    {
        returnValue = F("Spiekerhof");
        break;
    }
    case 294313:
    {
        returnValue = F("Spiekerhus");
        break;
    }
    case 294314:
    {
        returnValue = F("Spiekerkamp");
        break;
    }
    case 294315:
    {
        returnValue = F("Spiekerooger Str.");
        break;
    }
    case 294316:
    {
        returnValue = F("Spiekerooger Weg");
        break;
    }
    case 294317:
    {
        returnValue = F("Spiekeroogstr.");
        break;
    }
    case 294318:
    {
        returnValue = F("Spiekeroogweg");
        break;
    }
    case 294319:
    {
        returnValue = F("Spiekershäuser Str.");
        break;
    }
    case 294320:
    {
        returnValue = F("Spiekersstr.");
        break;
    }
    case 294321:
    {
        returnValue = F("Spiekerstr.");
        break;
    }
    case 294322:
    {
        returnValue = F("Spiekerwarderweg");
        break;
    }
    case 294323:
    {
        returnValue = F("Spiekerweg");
        break;
    }
    case 294324:
    {
        returnValue = F("Spiekeweg");
        break;
    }
    case 294325:
    {
        returnValue = F("Spiekkamp");
        break;
    }
    case 294326:
    {
        returnValue = F("Spiekorth");
        break;
    }
    case 294327:
    {
        returnValue = F("Spiekstr.");
        break;
    }
    case 294328:
    {
        returnValue = F("Spiekweg");
        break;
    }
    case 294329:
    {
        returnValue = F("Spiel und FreizeitPark Heimersheim");
        break;
    }
    case 294330:
    {
        returnValue = F("Spiel, Sport- und Freizeitfläche Miel");
        break;
    }
    case 294331:
    {
        returnValue = F("Spiel- und Bolzplatz");
        break;
    }
    case 294332:
    {
        returnValue = F("Spiel- und Liegewiesen");
        break;
    }
    case 294333:
    {
        returnValue = F("Spielanger");
        break;
    }
    case 294334:
    {
        returnValue = F("Spielangerstr.");
        break;
    }
    case 294335:
    {
        returnValue = F("Spielbachtal");
        break;
    }
    case 294336:
    {
        returnValue = F("Spielbachweg");
        break;
    }
    case 294337:
    {
        returnValue = F("Spielberg");
        break;
    }
    case 294338:
    {
        returnValue = F("Spielberger Rankweg");
        break;
    }
    case 294339:
    {
        returnValue = F("Spielberger Richtstatt");
        break;
    }
    case 294340:
    {
        returnValue = F("Spielberger Str.");
        break;
    }
    case 294341:
    {
        returnValue = F("Spielberger Weg");
        break;
    }
    case 294342:
    {
        returnValue = F("Spielbergerweg");
        break;
    }
    case 294343:
    {
        returnValue = F("Spielberggasse");
        break;
    }
    case 294344:
    {
        returnValue = F("Spielbergstr.");
        break;
    }
    case 294345:
    {
        returnValue = F("Spielbergsweg");
        break;
    }
    case 294346:
    {
        returnValue = F("Spielbergweg");
        break;
    }
    case 294347:
    {
        returnValue = F("Spielbornbrücke");
        break;
    }
    case 294348:
    {
        returnValue = F("Spielbornstr.");
        break;
    }
    case 294349:
    {
        returnValue = F("Spielbruck");
        break;
    }
    case 294350:
    {
        returnValue = F("Spielburg");
        break;
    }
    case 294351:
    {
        returnValue = F("Spielbuscherstr.");
        break;
    }
    case 294352:
    {
        returnValue = F("Spielenbusch");
        break;
    }
    case 294353:
    {
        returnValue = F("Spieler Weg");
        break;
    }
    case 294354:
    {
        returnValue = F("Spielergasse");
        break;
    }
    case 294355:
    {
        returnValue = F("Spielermoos");
        break;
    }
    case 294356:
    {
        returnValue = F("Spielesgasse");
        break;
    }
    case 294357:
    {
        returnValue = F("Spielesplatz");
        break;
    }
    case 294358:
    {
        returnValue = F("Spielesstr.");
        break;
    }
    case 294359:
    {
        returnValue = F("Spielfinkenweg");
        break;
    }
    case 294360:
    {
        returnValue = F("Spielfläche");
        break;
    }
    case 294361:
    {
        returnValue = F("Spielgarten");
        break;
    }
    case 294362:
    {
        returnValue = F("Spielgartenstr.");
        break;
    }
    case 294363:
    {
        returnValue = F("Spielgasse");
        break;
    }
    case 294364:
    {
        returnValue = F("Spielhagenstr.");
        break;
    }
    case 294365:
    {
        returnValue = F("Spielhahnstr.");
        break;
    }
    case 294366:
    {
        returnValue = F("Spielhahnweg");
        break;
    }
    case 294367:
    {
        returnValue = F("Spielhausgasse");
        break;
    }
    case 294368:
    {
        returnValue = F("Spielheide");
        break;
    }
    case 294369:
    {
        returnValue = F("Spielhof");
        break;
    }
    case 294370:
    {
        returnValue = F("Spielhofstr.");
        break;
    }
    case 294371:
    {
        returnValue = F("Spielhügel");
        break;
    }
    case 294372:
    {
        returnValue = F("Spielkoppel");
        break;
    }
    case 294373:
    {
        returnValue = F("Spielleite");
        break;
    }
    case 294374:
    {
        returnValue = F("Spielleitenweg");
        break;
    }
    case 294375:
    {
        returnValue = F("Spielmannsgasse");
        break;
    }
    case 294376:
    {
        returnValue = F("Spielmannsholz");
        break;
    }
    case 294377:
    {
        returnValue = F("Spielmannstr.");
        break;
    }
    case 294378:
    {
        returnValue = F("Spielmannsweg");
        break;
    }
    case 294379:
    {
        returnValue = F("Spielmannweg");
        break;
    }
    case 294380:
    {
        returnValue = F("Spielnstr.");
        break;
    }
    case 294381:
    {
        returnValue = F("Spielnück");
        break;
    }
    case 294382:
    {
        returnValue = F("Spielobjekte für Kinder, mit Teich und Modelleisenbahn.");
        break;
    }
    case 294383:
    {
        returnValue = F("Spielpark");
        break;
    }
    case 294384:
    {
        returnValue = F("Spielpark Eisweiher");
        break;
    }
    case 294385:
    {
        returnValue = F("Spielpark Königshofen");
        break;
    }
    case 294386:
    {
        returnValue = F("Spielpark Zeppelinstr.");
        break;
    }
    case 294387:
    {
        returnValue = F("Spielpatz Blumenau");
        break;
    }
    case 294388:
    {
        returnValue = F("Spielplatz");
        break;
    }
    case 294389:
    {
        returnValue = F("Spielplatz \"Grüne Mitte");
        break;
    }
    case 294390:
    {
        returnValue = F("Spielplatz Alte Gasse");
        break;
    }
    case 294391:
    {
        returnValue = F("Spielplatz Am Mühlbach");
        break;
    }
    case 294392:
    {
        returnValue = F("Spielplatz Burgstr.");
        break;
    }
    case 294393:
    {
        returnValue = F("Spielplatz Dilteystr.");
        break;
    }
    case 294394:
    {
        returnValue = F("Spielplatz Goldscheuer");
        break;
    }
    case 294395:
    {
        returnValue = F("Spielplatz Großgarnstadt");
        break;
    }
    case 294396:
    {
        returnValue = F("Spielplatz Helmighausen");
        break;
    }
    case 294397:
    {
        returnValue = F("Spielplatz Höhenstr.");
        break;
    }
    case 294398:
    {
        returnValue = F("Spielplatz Im Herrengarten");
        break;
    }
    case 294399:
    {
        returnValue = F("Spielplatz Karolinenstr.");
        break;
    }
    case 294400:
    {
        returnValue = F("Spielplatz Likedeelerstr.");
        break;
    }
    case 294401:
    {
        returnValue = F("Spielplatz Lohberg - Auf dem Stein");
        break;
    }
    case 294402:
    {
        returnValue = F("Spielplatz Luxem");
        break;
    }
    case 294403:
    {
        returnValue = F("Spielplatz Mondorf Unterdorf");
        break;
    }
    case 294404:
    {
        returnValue = F("Spielplatz Mozartstr.");
        break;
    }
    case 294405:
    {
        returnValue = F("Spielplatz Mühltorviertel");
        break;
    }
    case 294406:
    {
        returnValue = F("Spielplatz Müsingen");
        break;
    }
    case 294407:
    {
        returnValue = F("Spielplatz Nachterstedt");
        break;
    }
    case 294408:
    {
        returnValue = F("Spielplatz Osterhügel");
        break;
    }
    case 294409:
    {
        returnValue = F("Spielplatz Park In der Lanwehr");
        break;
    }
    case 294410:
    {
        returnValue = F("Spielplatz Rhönweg");
        break;
    }
    case 294411:
    {
        returnValue = F("Spielplatz Rosenheimerstr.");
        break;
    }
    case 294412:
    {
        returnValue = F("Spielplatz Saltendorf");
        break;
    }
    case 294413:
    {
        returnValue = F("Spielplatz Sauweide");
        break;
    }
    case 294414:
    {
        returnValue = F("Spielplatz Waldkirch");
        break;
    }
    case 294415:
    {
        returnValue = F("Spielplatz Wiesenrain");
        break;
    }
    case 294416:
    {
        returnValue = F("Spielplatz am Röhrenberg");
        break;
    }
    case 294417:
    {
        returnValue = F("Spielplatz an der Saale");
        break;
    }
    case 294418:
    {
        returnValue = F("Spielplatz mit Wäldchen");
        break;
    }
    case 294419:
    {
        returnValue = F("Spielplatz-Ebene");
        break;
    }
    case 294420:
    {
        returnValue = F("Spielplatzring");
        break;
    }
    case 294421:
    {
        returnValue = F("Spielplatzstr.");
        break;
    }
    case 294422:
    {
        returnValue = F("Spielplatzweg");
        break;
    }
    case 294423:
    {
        returnValue = F("Spielsdorf");
        break;
    }
    case 294424:
    {
        returnValue = F("Spielsee");
        break;
    }
    case 294425:
    {
        returnValue = F("Spielsgasse");
        break;
    }
    case 294426:
    {
        returnValue = F("Spielstr.");
        break;
    }
    case 294427:
    {
        returnValue = F("Spieltorstr.");
        break;
    }
    case 294428:
    {
        returnValue = F("Spielwang");
        break;
    }
    case 294429:
    {
        returnValue = F("Spielwanger Str.");
        break;
    }
    case 294430:
    {
        returnValue = F("Spielweg");
        break;
    }
    case 294431:
    {
        returnValue = F("Spielweg im Haßlocher Wald");
        break;
    }
    case 294432:
    {
        returnValue = F("Spielwiese Alteburgpark");
        break;
    }
    case 294433:
    {
        returnValue = F("Spielwiesenweg");
        break;
    }
    case 294434:
    {
        returnValue = F("Spielwigge");
        break;
    }
    case 294435:
    {
        returnValue = F("Spieläcker");
        break;
    }
    case 294436:
    {
        returnValue = F("Spielötz");
        break;
    }
    case 294437:
    {
        returnValue = F("Spierental");
        break;
    }
    case 294438:
    {
        returnValue = F("Spierentalweg");
        break;
    }
    case 294439:
    {
        returnValue = F("Spierheide");
        break;
    }
    case 294440:
    {
        returnValue = F("Spierling");
        break;
    }
    case 294441:
    {
        returnValue = F("Spiesberg");
        break;
    }
    case 294442:
    {
        returnValue = F("Spiesberg Beund");
        break;
    }
    case 294443:
    {
        returnValue = F("Spiesberger Breite");
        break;
    }
    case 294444:
    {
        returnValue = F("Spiesberger Str.");
        break;
    }
    case 294445:
    {
        returnValue = F("Spieser Flurstr.");
        break;
    }
    case 294446:
    {
        returnValue = F("Spieser Landstr.");
        break;
    }
    case 294447:
    {
        returnValue = F("Spieser Str.");
        break;
    }
    case 294448:
    {
        returnValue = F("Spiesermühle");
        break;
    }
    case 294449:
    {
        returnValue = F("Spiesgesbendenweg");
        break;
    }
    case 294450:
    {
        returnValue = F("Spiesheimer Hohl");
        break;
    }
    case 294451:
    {
        returnValue = F("Spiesheimer Pfad");
        break;
    }
    case 294452:
    {
        returnValue = F("Spiesheimer Str.");
        break;
    }
    case 294453:
    {
        returnValue = F("Spiesheimer Weg");
        break;
    }
    case 294454:
    {
        returnValue = F("Spieskappeler Str.");
        break;
    }
    case 294455:
    {
        returnValue = F("Spiesmühle");
        break;
    }
    case 294456:
    {
        returnValue = F("Spiesshauweg");
        break;
    }
    case 294457:
    {
        returnValue = F("Spiessheimer Weg");
        break;
    }
    case 294458:
    {
        returnValue = F("Spiesstränkschneise");
        break;
    }
    case 294459:
    {
        returnValue = F("Spiessweg");
        break;
    }
    case 294460:
    {
        returnValue = F("Spiesweg");
        break;
    }
    case 294461:
    {
        returnValue = F("Spießenbergstr.");
        break;
    }
    case 294462:
    {
        returnValue = F("Spießenleite");
        break;
    }
    case 294463:
    {
        returnValue = F("Spießfeld");
        break;
    }
    case 294464:
    {
        returnValue = F("Spießfelder");
        break;
    }
    case 294465:
    {
        returnValue = F("Spießfeldstr.");
        break;
    }
    case 294466:
    {
        returnValue = F("Spießflügel");
        break;
    }
    case 294467:
    {
        returnValue = F("Spießgarten");
        break;
    }
    case 294468:
    {
        returnValue = F("Spießgasse");
        break;
    }
    case 294469:
    {
        returnValue = F("Spießhalden");
        break;
    }
    case 294470:
    {
        returnValue = F("Spießhäldeweg");
        break;
    }
    case 294471:
    {
        returnValue = F("Spießlachallee");
        break;
    }
    case 294472:
    {
        returnValue = F("Spießlestr.");
        break;
    }
    case 294473:
    {
        returnValue = F("Spießstr.");
        break;
    }
    case 294474:
    {
        returnValue = F("Spießtränkenschneise");
        break;
    }
    case 294475:
    {
        returnValue = F("Spießweg");
        break;
    }
    case 294476:
    {
        returnValue = F("Spijkenisser Str.");
        break;
    }
    case 294477:
    {
        returnValue = F("Spikergarten");
        break;
    }
    case 294478:
    {
        returnValue = F("Spikerndamm");
        break;
    }
    case 294479:
    {
        returnValue = F("Spilbrinkstr.");
        break;
    }
    case 294480:
    {
        returnValue = F("Spilkerstr.");
        break;
    }
    case 294481:
    {
        returnValue = F("Spillbrunnenweg");
        break;
    }
    case 294482:
    {
        returnValue = F("Spillbähnstr.");
        break;
    }
    case 294483:
    {
        returnValue = F("Spillendreher");
        break;
    }
    case 294484:
    {
        returnValue = F("Spillenweg");
        break;
    }
    case 294485:
    {
        returnValue = F("Spillesstr.");
        break;
    }
    case 294486:
    {
        returnValue = F("Spillestr.");
        break;
    }
    case 294487:
    {
        returnValue = F("Spilleworth");
        break;
    }
    case 294488:
    {
        returnValue = F("Spillingscher Weg");
        break;
    }
    case 294489:
    {
        returnValue = F("Spillkamp");
        break;
    }
    case 294490:
    {
        returnValue = F("Spillmannsweg");
        break;
    }
    case 294491:
    {
        returnValue = F("Spindecksfeld");
        break;
    }
    case 294492:
    {
        returnValue = F("Spindelbachstr.");
        break;
    }
    case 294493:
    {
        returnValue = F("Spindelberg");
        break;
    }
    case 294494:
    {
        returnValue = F("Spindelbrunnenweg");
        break;
    }
    case 294495:
    {
        returnValue = F("Spindelgasse");
        break;
    }
    case 294496:
    {
        returnValue = F("Spindelkamp");
        break;
    }
    case 294497:
    {
        returnValue = F("Spindelpfad");
        break;
    }
    case 294498:
    {
        returnValue = F("Spindelstr.");
        break;
    }
    case 294499:
    {
        returnValue = F("Spindeltal");
        break;
    }
    case 294500:
    {
        returnValue = F("Spindeltalgasse");
        break;
    }
    case 294501:
    {
        returnValue = F("Spindeltalstr.");
        break;
    }
    case 294502:
    {
        returnValue = F("Spindelwager Str.");
        break;
    }
    case 294503:
    {
        returnValue = F("Spindelweg");
        break;
    }
    case 294504:
    {
        returnValue = F("Spindlerplatz");
        break;
    }
    case 294505:
    {
        returnValue = F("Spindlershofstr.");
        break;
    }
    case 294506:
    {
        returnValue = F("Spindlerweg");
        break;
    }
    case 294507:
    {
        returnValue = F("Spindlhofstr.");
        break;
    }
    case 294508:
    {
        returnValue = F("Spindlholzweg");
        break;
    }
    case 294509:
    {
        returnValue = F("Spindäckerstr.");
        break;
    }
    case 294510:
    {
        returnValue = F("Spineckweg");
        break;
    }
    case 294511:
    {
        returnValue = F("Spingel");
        break;
    }
    case 294512:
    {
        returnValue = F("Spinglerstr.");
        break;
    }
    case 294513:
    {
        returnValue = F("Spinkwang");
        break;
    }
    case 294514:
    {
        returnValue = F("Spinnakerweg");
        break;
    }
    case 294515:
    {
        returnValue = F("Spinnbahn");
        break;
    }
    case 294516:
    {
        returnValue = F("Spinnbahnweg");
        break;
    }
    case 294517:
    {
        returnValue = F("Spinne");
        break;
    }
    case 294518:
    {
        returnValue = F("Spinnenbergstr.");
        break;
    }
    case 294519:
    {
        returnValue = F("Spinnengässchen");
        break;
    }
    case 294520:
    {
        returnValue = F("Spinnerei");
        break;
    }
    case 294521:
    {
        returnValue = F("Spinnereigarten");
        break;
    }
    case 294522:
    {
        returnValue = F("Spinnereiinsel");
        break;
    }
    case 294523:
    {
        returnValue = F("Spinnereisiedlung");
        break;
    }
    case 294524:
    {
        returnValue = F("Spinnereistr.");
        break;
    }
    case 294525:
    {
        returnValue = F("Spinnereiweg");
        break;
    }
    case 294526:
    {
        returnValue = F("Spinnerhöfe");
        break;
    }
    case 294527:
    {
        returnValue = F("Spinnerin-Kreuz-Weg");
        break;
    }
    case 294528:
    {
        returnValue = F("Spinneristr.");
        break;
    }
    case 294529:
    {
        returnValue = F("Spinnersberg");
        break;
    }
    case 294530:
    {
        returnValue = F("Spinnerstr.");
        break;
    }
    case 294531:
    {
        returnValue = F("Spinnerweg");
        break;
    }
    case 294532:
    {
        returnValue = F("Spinngasse");
        break;
    }
    case 294533:
    {
        returnValue = F("Spinnhäuserstr.");
        break;
    }
    case 294534:
    {
        returnValue = F("Spinnstr.");
        break;
    }
    case 294535:
    {
        returnValue = F("Spinnvasen");
        break;
    }
    case 294536:
    {
        returnValue = F("Spinnwirtelweg");
        break;
    }
    case 294537:
    {
        returnValue = F("Spinozastr.");
        break;
    }
    case 294538:
    {
        returnValue = F("Spinozaweg");
        break;
    }
    case 294539:
    {
        returnValue = F("Spintenkamper Str.");
        break;
    }
    case 294540:
    {
        returnValue = F("Spirgelbachstr.");
        break;
    }
    case 294541:
    {
        returnValue = F("Spiridonweg");
        break;
    }
    case 294542:
    {
        returnValue = F("Spirkastr.");
        break;
    }
    case 294543:
    {
        returnValue = F("Spirkavilsweg");
        break;
    }
    case 294544:
    {
        returnValue = F("Spirkengasse");
        break;
    }
    case 294545:
    {
        returnValue = F("Spirketweg");
        break;
    }
    case 294546:
    {
        returnValue = F("Spirkhof");
        break;
    }
    case 294547:
    {
        returnValue = F("Spirkner Str.");
        break;
    }
    case 294548:
    {
        returnValue = F("Spirknerallee");
        break;
    }
    case 294549:
    {
        returnValue = F("Spirknerstr.");
        break;
    }
    case 294550:
    {
        returnValue = F("Spirlingweg");
        break;
    }
    case 294551:
    {
        returnValue = F("Spirzenhaldenweg");
        break;
    }
    case 294552:
    {
        returnValue = F("Spirzenstr.");
        break;
    }
    case 294553:
    {
        returnValue = F("Spissen");
        break;
    }
    case 294554:
    {
        returnValue = F("Spissenstr.");
        break;
    }
    case 294555:
    {
        returnValue = F("Spital");
        break;
    }
    case 294556:
    {
        returnValue = F("Spitalackerstr.");
        break;
    }
    case 294557:
    {
        returnValue = F("Spitalbachstr.");
        break;
    }
    case 294558:
    {
        returnValue = F("Spitalbastei");
        break;
    }
    case 294559:
    {
        returnValue = F("Spitalberg");
        break;
    }
    case 294560:
    {
        returnValue = F("Spitalbrücke");
        break;
    }
    case 294561:
    {
        returnValue = F("Spitaler Str.");
        break;
    }
    case 294562:
    {
        returnValue = F("Spitalfeld");
        break;
    }
    case 294563:
    {
        returnValue = F("Spitalfeldstr.");
        break;
    }
    case 294564:
    {
        returnValue = F("Spitalgarten");
        break;
    }
    case 294565:
    {
        returnValue = F("Spitalgartenstr.");
        break;
    }
    case 294566:
    {
        returnValue = F("Spitalgartenweg");
        break;
    }
    case 294567:
    {
        returnValue = F("Spitalgasse");
        break;
    }
    case 294568:
    {
        returnValue = F("Spitalgraben");
        break;
    }
    case 294569:
    {
        returnValue = F("Spitalgrund");
        break;
    }
    case 294570:
    {
        returnValue = F("Spitalgäßchen");
        break;
    }
    case 294571:
    {
        returnValue = F("Spitalhalde");
        break;
    }
    case 294572:
    {
        returnValue = F("Spitalhalden");
        break;
    }
    case 294573:
    {
        returnValue = F("Spitalhof");
        break;
    }
    case 294574:
    {
        returnValue = F("Spitalhofgasse");
        break;
    }
    case 294575:
    {
        returnValue = F("Spitalhofweg");
        break;
    }
    case 294576:
    {
        returnValue = F("Spitalholz");
        break;
    }
    case 294577:
    {
        returnValue = F("Spitalholzweg");
        break;
    }
    case 294578:
    {
        returnValue = F("Spitalmühle");
        break;
    }
    case 294579:
    {
        returnValue = F("Spitalmühlenstr.");
        break;
    }
    case 294580:
    {
        returnValue = F("Spitalmühlweg");
        break;
    }
    case 294581:
    {
        returnValue = F("Spitalpark");
        break;
    }
    case 294582:
    {
        returnValue = F("Spitalplatz");
        break;
    }
    case 294583:
    {
        returnValue = F("Spitalriedstr.");
        break;
    }
    case 294584:
    {
        returnValue = F("Spitalseck");
        break;
    }
    case 294585:
    {
        returnValue = F("Spitalseeplatz");
        break;
    }
    case 294586:
    {
        returnValue = F("Spitalseestr.");
        break;
    }
    case 294587:
    {
        returnValue = F("Spitalsgasse");
        break;
    }
    case 294588:
    {
        returnValue = F("Spitalstr.");
        break;
    }
    case 294589:
    {
        returnValue = F("Spitaltor");
        break;
    }
    case 294590:
    {
        returnValue = F("Spitaltorstr.");
        break;
    }
    case 294591:
    {
        returnValue = F("Spitalwaldstr.");
        break;
    }
    case 294592:
    {
        returnValue = F("Spitalwaldweg");
        break;
    }
    case 294593:
    {
        returnValue = F("Spitalwall");
        break;
    }
    case 294594:
    {
        returnValue = F("Spitalweg");
        break;
    }
    case 294595:
    {
        returnValue = F("Spitalwiese");
        break;
    }
    case 294596:
    {
        returnValue = F("Spitalwiesenstr.");
        break;
    }
    case 294597:
    {
        returnValue = F("Spitalwinkel");
        break;
    }
    case 294598:
    {
        returnValue = F("Spitaläcker");
        break;
    }
    case 294599:
    {
        returnValue = F("Spitaläckerweg");
        break;
    }
    case 294600:
    {
        returnValue = F("Spithöverstr.");
        break;
    }
    case 294601:
    {
        returnValue = F("Spitlweg");
        break;
    }
    case 294602:
    {
        returnValue = F("Spitsweg");
        break;
    }
    case 294603:
    {
        returnValue = F("Spittakamp");
        break;
    }
    case 294604:
    {
        returnValue = F("Spittaler Str.");
        break;
    }
    case 294605:
    {
        returnValue = F("Spittaler Weg");
        break;
    }
    case 294606:
    {
        returnValue = F("Spittaplatz");
        break;
    }
    case 294607:
    {
        returnValue = F("Spittastr.");
        break;
    }
    case 294608:
    {
        returnValue = F("Spittaweg");
        break;
    }
    case 294609:
    {
        returnValue = F("Spittdieksweg");
        break;
    }
    case 294610:
    {
        returnValue = F("Spittel");
        break;
    }
    case 294611:
    {
        returnValue = F("Spittel-Allee");
        break;
    }
    case 294612:
    {
        returnValue = F("Spittelaustr.");
        break;
    }
    case 294613:
    {
        returnValue = F("Spittelberg");
        break;
    }
    case 294614:
    {
        returnValue = F("Spittelbergstr.");
        break;
    }
    case 294615:
    {
        returnValue = F("Spitteldamm");
        break;
    }
    case 294616:
    {
        returnValue = F("Spitteler Str.");
        break;
    }
    case 294617:
    {
        returnValue = F("Spitteler Weg");
        break;
    }
    case 294618:
    {
        returnValue = F("Spittelgartenweg");
        break;
    }
    case 294619:
    {
        returnValue = F("Spittelgasse");
        break;
    }
    case 294620:
    {
        returnValue = F("Spittelhau");
        break;
    }
    case 294621:
    {
        returnValue = F("Spittelhof");
        break;
    }
    case 294622:
    {
        returnValue = F("Spittelhofstr.");
        break;
    }
    case 294623:
    {
        returnValue = F("Spittelhöfe");
        break;
    }
    case 294624:
    {
        returnValue = F("Spittelmattweg");
        break;
    }
    case 294625:
    {
        returnValue = F("Spittelmähderweg");
        break;
    }
    case 294626:
    {
        returnValue = F("Spittelrain");
        break;
    }
    case 294627:
    {
        returnValue = F("Spittelsberg");
        break;
    }
    case 294628:
    {
        returnValue = F("Spittelweg");
        break;
    }
    case 294629:
    {
        returnValue = F("Spittelwiesenweg");
        break;
    }
    case 294630:
    {
        returnValue = F("Spitterstr.");
        break;
    }
    case 294631:
    {
        returnValue = F("Spittewitz");
        break;
    }
    case 294632:
    {
        returnValue = F("Spittewitzer Weg");
        break;
    }
    case 294633:
    {
        returnValue = F("Spittlerstr.");
        break;
    }
    case 294634:
    {
        returnValue = F("Spittweg");
        break;
    }
    case 294635:
    {
        returnValue = F("Spittäckerweg");
        break;
    }
    case 294636:
    {
        returnValue = F("Spitz");
        break;
    }
    case 294637:
    {
        returnValue = F("Spitzachtmorgen");
        break;
    }
    case 294638:
    {
        returnValue = F("Spitzacker");
        break;
    }
    case 294639:
    {
        returnValue = F("Spitzackerstr.");
        break;
    }
    case 294640:
    {
        returnValue = F("Spitzackerweg");
        break;
    }
    case 294641:
    {
        returnValue = F("Spitzagathenweg");
        break;
    }
    case 294642:
    {
        returnValue = F("Spitzahornweg");
        break;
    }
    case 294643:
    {
        returnValue = F("Spitzallee");
        break;
    }
    case 294644:
    {
        returnValue = F("Spitzauer Str.");
        break;
    }
    case 294645:
    {
        returnValue = F("Spitzauer Wiese");
        break;
    }
    case 294646:
    {
        returnValue = F("Spitzbek");
        break;
    }
    case 294647:
    {
        returnValue = F("Spitzberg");
        break;
    }
    case 294648:
    {
        returnValue = F("Spitzbergen");
        break;
    }
    case 294649:
    {
        returnValue = F("Spitzbergenweg");
        break;
    }
    case 294650:
    {
        returnValue = F("Spitzbergstr.");
        break;
    }
    case 294651:
    {
        returnValue = F("Spitzbergweg");
        break;
    }
    case 294652:
    {
        returnValue = F("Spitzbierlacker");
        break;
    }
    case 294653:
    {
        returnValue = F("Spitzbrook");
        break;
    }
    case 294654:
    {
        returnValue = F("Spitzbubenredder");
        break;
    }
    case 294655:
    {
        returnValue = F("Spitzbubenstieg");
        break;
    }
    case 294656:
    {
        returnValue = F("Spitzbubenweg");
        break;
    }
    case 294657:
    {
        returnValue = F("Spitzburg");
        break;
    }
    case 294658:
    {
        returnValue = F("Spitzbünd");
        break;
    }
    case 294659:
    {
        returnValue = F("Spitzdobelweg");
        break;
    }
    case 294660:
    {
        returnValue = F("Spitzdorfweiher");
        break;
    }
    case 294661:
    {
        returnValue = F("Spitze");
        break;
    }
    case 294662:
    {
        returnValue = F("Spitze Breite");
        break;
    }
    case 294663:
    {
        returnValue = F("Spitze Ohr");
        break;
    }
    case 294664:
    {
        returnValue = F("Spitze Steinrauch-Schneise");
        break;
    }
    case 294665:
    {
        returnValue = F("Spitze Warte");
        break;
    }
    case 294666:
    {
        returnValue = F("Spitzeck");
        break;
    }
    case 294667:
    {
        returnValue = F("Spitzegarten");
        break;
    }
    case 294668:
    {
        returnValue = F("Spitzehagenstr.");
        break;
    }
    case 294669:
    {
        returnValue = F("Spitzelbergweg");
        break;
    }
    case 294670:
    {
        returnValue = F("Spitzen");
        break;
    }
    case 294671:
    {
        returnValue = F("Spitzenacker");
        break;
    }
    case 294672:
    {
        returnValue = F("Spitzenbacher Str.");
        break;
    }
    case 294673:
    {
        returnValue = F("Spitzenbaum");
        break;
    }
    case 294674:
    {
        returnValue = F("Spitzenberg");
        break;
    }
    case 294675:
    {
        returnValue = F("Spitzenberger Str.");
        break;
    }
    case 294676:
    {
        returnValue = F("Spitzenbergstr.");
        break;
    }
    case 294677:
    {
        returnValue = F("Spitzenbergweg");
        break;
    }
    case 294678:
    {
        returnValue = F("Spitzenburg");
        break;
    }
    case 294679:
    {
        returnValue = F("Spitzenbühl");
        break;
    }
    case 294680:
    {
        returnValue = F("Spitzengarten");
        break;
    }
    case 294681:
    {
        returnValue = F("Spitzengasse");
        break;
    }
    case 294682:
    {
        returnValue = F("Spitzengärten");
        break;
    }
    case 294683:
    {
        returnValue = F("Spitzenhof");
        break;
    }
    case 294684:
    {
        returnValue = F("Spitzenhörnweg");
        break;
    }
    case 294685:
    {
        returnValue = F("Spitzenkamp");
        break;
    }
    case 294686:
    {
        returnValue = F("Spitzenkiel");
        break;
    }
    case 294687:
    {
        returnValue = F("Spitzenklinge");
        break;
    }
    case 294688:
    {
        returnValue = F("Spitzenmeer");
        break;
    }
    case 294689:
    {
        returnValue = F("Spitzenpfeilstr.");
        break;
    }
    case 294690:
    {
        returnValue = F("Spitzenrade");
        break;
    }
    case 294691:
    {
        returnValue = F("Spitzenrainweg");
        break;
    }
    case 294692:
    {
        returnValue = F("Spitzensteinweg");
        break;
    }
    case 294693:
    {
        returnValue = F("Spitzentränkbogen");
        break;
    }
    case 294694:
    {
        returnValue = F("Spitzenwaldweg");
        break;
    }
    case 294695:
    {
        returnValue = F("Spitzenweg");
        break;
    }
    case 294696:
    {
        returnValue = F("Spitzenäcker");
        break;
    }
    case 294697:
    {
        returnValue = F("Spitzer Aue");
        break;
    }
    case 294698:
    {
        returnValue = F("Spitzer Berg");
        break;
    }
    case 294699:
    {
        returnValue = F("Spitzer Brink");
        break;
    }
    case 294700:
    {
        returnValue = F("Spitzer Kiel");
        break;
    }
    case 294701:
    {
        returnValue = F("Spitzer Ort");
        break;
    }
    case 294702:
    {
        returnValue = F("Spitzer Weg");
        break;
    }
    case 294703:
    {
        returnValue = F("Spitzer Winkel");
        break;
    }
    case 294704:
    {
        returnValue = F("Spitzer-Stein-Weg");
        break;
    }
    case 294705:
    {
        returnValue = F("Spitzerfurth");
        break;
    }
    case 294706:
    {
        returnValue = F("Spitzermühlweg");
        break;
    }
    case 294707:
    {
        returnValue = F("Spitzerweg");
        break;
    }
    case 294708:
    {
        returnValue = F("Spitzfeld");
        break;
    }
    case 294709:
    {
        returnValue = F("Spitzfelsenweg");
        break;
    }
    case 294710:
    {
        returnValue = F("Spitzgarten");
        break;
    }
    case 294711:
    {
        returnValue = F("Spitzgartenweg");
        break;
    }
    case 294712:
    {
        returnValue = F("Spitzgasse");
        break;
    }
    case 294713:
    {
        returnValue = F("Spitzgrundstr.");
        break;
    }
    case 294714:
    {
        returnValue = F("Spitzgrundweg");
        break;
    }
    case 294715:
    {
        returnValue = F("Spitzgärten");
        break;
    }
    case 294716:
    {
        returnValue = F("Spitzgässchen");
        break;
    }
    case 294717:
    {
        returnValue = F("Spitzhalde");
        break;
    }
    case 294718:
    {
        returnValue = F("Spitzhauptweg");
        break;
    }
    case 294719:
    {
        returnValue = F("Spitzhausstr.");
        break;
    }
    case 294720:
    {
        returnValue = F("Spitzhaustreppe");
        break;
    }
    case 294721:
    {
        returnValue = F("Spitzhauweg");
        break;
    }
    case 294722:
    {
        returnValue = F("Spitzhecke");
        break;
    }
    case 294723:
    {
        returnValue = F("Spitzhiebelweg");
        break;
    }
    case 294724:
    {
        returnValue = F("Spitzholzstr.");
        break;
    }
    case 294725:
    {
        returnValue = F("Spitzholzweg");
        break;
    }
    case 294726:
    {
        returnValue = F("Spitzhörnweg");
        break;
    }
    case 294727:
    {
        returnValue = F("Spitzhüttenweg");
        break;
    }
    case 294728:
    {
        returnValue = F("Spitzigersteinweg");
        break;
    }
    case 294729:
    {
        returnValue = F("Spitzigkäpfleweg");
        break;
    }
    case 294730:
    {
        returnValue = F("Spitzigweg");
        break;
    }
    case 294731:
    {
        returnValue = F("Spitzingseestr.");
        break;
    }
    case 294732:
    {
        returnValue = F("Spitzingstr.");
        break;
    }
    case 294733:
    {
        returnValue = F("Spitzingweg");
        break;
    }
    case 294734:
    {
        returnValue = F("Spitzklingenweg");
        break;
    }
    case 294735:
    {
        returnValue = F("Spitzkopfweg");
        break;
    }
    case 294736:
    {
        returnValue = F("Spitzkunnersdorfer Str.");
        break;
    }
    case 294737:
    {
        returnValue = F("Spitzkunnersdorfer Weg");
        break;
    }
    case 294738:
    {
        returnValue = F("Spitzlbergerstr.");
        break;
    }
    case 294739:
    {
        returnValue = F("Spitzleithenweg");
        break;
    }
    case 294740:
    {
        returnValue = F("Spitzlerweg");
        break;
    }
    case 294741:
    {
        returnValue = F("Spitzlingsgraben");
        break;
    }
    case 294742:
    {
        returnValue = F("Spitzmoos");
        break;
    }
    case 294743:
    {
        returnValue = F("Spitzmättleweg");
        break;
    }
    case 294744:
    {
        returnValue = F("Spitzmühlenweg");
        break;
    }
    case 294745:
    {
        returnValue = F("Spitzmühler Str.");
        break;
    }
    case 294746:
    {
        returnValue = F("Spitzmüllerweg");
        break;
    }
    case 294747:
    {
        returnValue = F("Spitzsangweg");
        break;
    }
    case 294748:
    {
        returnValue = F("Spitzsteig");
        break;
    }
    case 294749:
    {
        returnValue = F("Spitzsteinstr.");
        break;
    }
    case 294750:
    {
        returnValue = F("Spitzsteinweg");
        break;
    }
    case 294751:
    {
        returnValue = F("Spitzstr.");
        break;
    }
    case 294752:
    {
        returnValue = F("Spitzwaldstr.");
        break;
    }
    case 294753:
    {
        returnValue = F("Spitzweg");
        break;
    }
    case 294754:
    {
        returnValue = F("Spitzweganger");
        break;
    }
    case 294755:
    {
        returnValue = F("Spitzweggasse");
        break;
    }
    case 294756:
    {
        returnValue = F("Spitzweggäßchen");
        break;
    }
    case 294757:
    {
        returnValue = F("Spitzwegring");
        break;
    }
    case 294758:
    {
        returnValue = F("Spitzwegsteig");
        break;
    }
    case 294759:
    {
        returnValue = F("Spitzwegsteigerl");
        break;
    }
    case 294760:
    {
        returnValue = F("Spitzwegstiege");
        break;
    }
    case 294761:
    {
        returnValue = F("Spitzwegstr.");
        break;
    }
    case 294762:
    {
        returnValue = F("Spitzwegwinkel");
        break;
    }
    case 294763:
    {
        returnValue = F("Spitzwiese");
        break;
    }
    case 294764:
    {
        returnValue = F("Spitzwiesen");
        break;
    }
    case 294765:
    {
        returnValue = F("Spitzwiesenstr.");
        break;
    }
    case 294766:
    {
        returnValue = F("Spitzwiesenweg");
        break;
    }
    case 294767:
    {
        returnValue = F("Spitzwinkelweg");
        break;
    }
    case 294768:
    {
        returnValue = F("Spitzwäldleweg");
        break;
    }
    case 294769:
    {
        returnValue = F("Spitzäcker");
        break;
    }
    case 294770:
    {
        returnValue = F("Spitzäckerstr.");
        break;
    }
    case 294771:
    {
        returnValue = F("Spitzäckerweg");
        break;
    }
    case 294772:
    {
        returnValue = F("Spitälerholz");
        break;
    }
    case 294773:
    {
        returnValue = F("Spizers Brunnenweg");
        break;
    }
    case 294774:
    {
        returnValue = F("Splau");
        break;
    }
    case 294775:
    {
        returnValue = F("Spleetenkamp");
        break;
    }
    case 294776:
    {
        returnValue = F("Splethendamm");
        break;
    }
    case 294777:
    {
        returnValue = F("Splethweg");
        break;
    }
    case 294778:
    {
        returnValue = F("Splettkampsweg");
        break;
    }
    case 294779:
    {
        returnValue = F("Splettstößerstr.");
        break;
    }
    case 294780:
    {
        returnValue = F("Spliesteich");
        break;
    }
    case 294781:
    {
        returnValue = F("Splieterstr.");
        break;
    }
    case 294782:
    {
        returnValue = F("Splitt");
        break;
    }
    case 294783:
    {
        returnValue = F("Splittergasse");
        break;
    }
    case 294784:
    {
        returnValue = F("Splitting links");
        break;
    }
    case 294785:
    {
        returnValue = F("Splitting rechts");
        break;
    }
    case 294786:
    {
        returnValue = F("Splittweg");
        break;
    }
    case 294787:
    {
        returnValue = F("Spoerhasestr.");
        break;
    }
    case 294788:
    {
        returnValue = F("Spohler Str.");
        break;
    }
    case 294789:
    {
        returnValue = F("Spohler Weg");
        break;
    }
    case 294790:
    {
        returnValue = F("Spohlermehden");
        break;
    }
    case 294791:
    {
        returnValue = F("Spohnberg");
        break;
    }
    case 294792:
    {
        returnValue = F("Spohnbleek");
        break;
    }
    case 294793:
    {
        returnValue = F("Spohnstr.");
        break;
    }
    case 294794:
    {
        returnValue = F("Spohnweg");
        break;
    }
    case 294795:
    {
        returnValue = F("Spohnwiesenweg");
        break;
    }
    case 294796:
    {
        returnValue = F("Spohrstr.");
        break;
    }
    case 294797:
    {
        returnValue = F("Spohrweg");
        break;
    }
    case 294798:
    {
        returnValue = F("Spoitgendorf");
        break;
    }
    case 294799:
    {
        returnValue = F("Spoldershäger Weg");
        break;
    }
    case 294800:
    {
        returnValue = F("Spolerstr.");
        break;
    }
    case 294801:
    {
        returnValue = F("Spoleto-Str.");
        break;
    }
    case 294802:
    {
        returnValue = F("Spolsen");
        break;
    }
    case 294803:
    {
        returnValue = F("Spolsener Moorstr.");
        break;
    }
    case 294804:
    {
        returnValue = F("Spolser Str.");
        break;
    }
    case 294805:
    {
        returnValue = F("Spolser Weg");
        break;
    }
    case 294806:
    {
        returnValue = F("Sponackerweg");
        break;
    }
    case 294807:
    {
        returnValue = F("Sponeckstr.");
        break;
    }
    case 294808:
    {
        returnValue = F("Sponellenbergweg");
        break;
    }
    case 294809:
    {
        returnValue = F("Sponellenweg");
        break;
    }
    case 294810:
    {
        returnValue = F("Sponheidenschneise");
        break;
    }
    case 294811:
    {
        returnValue = F("Sponheimer Ring");
        break;
    }
    case 294812:
    {
        returnValue = F("Sponheimer Str.");
        break;
    }
    case 294813:
    {
        returnValue = F("Sponheimerweg");
        break;
    }
    case 294814:
    {
        returnValue = F("Sponheimweg");
        break;
    }
    case 294815:
    {
        returnValue = F("Sponholzer Str.");
        break;
    }
    case 294816:
    {
        returnValue = F("Sponselgasse");
        break;
    }
    case 294817:
    {
        returnValue = F("Sponshaldenstr.");
        break;
    }
    case 294818:
    {
        returnValue = F("Spoorweg");
        break;
    }
    case 294819:
    {
        returnValue = F("Sporaer Hauptstr.");
        break;
    }
    case 294820:
    {
        returnValue = F("Sporaer Schulstr.");
        break;
    }
    case 294821:
    {
        returnValue = F("Sporaer Str.");
        break;
    }
    case 294822:
    {
        returnValue = F("Sporarer Hauptstr.");
        break;
    }
    case 294823:
    {
        returnValue = F("Sporbitzer Str.");
        break;
    }
    case 294824:
    {
        returnValue = F("Sporckstr.");
        break;
    }
    case 294825:
    {
        returnValue = F("Sporenbergweg");
        break;
    }
    case 294826:
    {
        returnValue = F("Sporergasse");
        break;
    }
    case 294827:
    {
        returnValue = F("Sporerweg");
        break;
    }
    case 294828:
    {
        returnValue = F("Sporgasse");
        break;
    }
    case 294829:
    {
        returnValue = F("Sporgraben");
        break;
    }
    case 294830:
    {
        returnValue = F("Sporgraben-Siedlung");
        break;
    }
    case 294831:
    {
        returnValue = F("Sporingweg");
        break;
    }
    case 294832:
    {
        returnValue = F("Sporkenheimer Str.");
        break;
    }
    case 294833:
    {
        returnValue = F("Sporkenheimer Weg");
        break;
    }
    case 294834:
    {
        returnValue = F("Sporkenschneise");
        break;
    }
    case 294835:
    {
        returnValue = F("Sporker Berg");
        break;
    }
    case 294836:
    {
        returnValue = F("Sporker Ringstr.");
        break;
    }
    case 294837:
    {
        returnValue = F("Sporker Str.");
        break;
    }
    case 294838:
    {
        returnValue = F("Sporkhagen");
        break;
    }
    case 294839:
    {
        returnValue = F("Sporksfeld");
        break;
    }
    case 294840:
    {
        returnValue = F("Spormakerstr.");
        break;
    }
    case 294841:
    {
        returnValue = F("Spormecke");
        break;
    }
    case 294842:
    {
        returnValue = F("Spormeckerplatz");
        break;
    }
    case 294843:
    {
        returnValue = F("Spormäckerriege");
        break;
    }
    case 294844:
    {
        returnValue = F("Spormühlenweg");
        break;
    }
    case 294845:
    {
        returnValue = F("Spornhofweg");
        break;
    }
    case 294846:
    {
        returnValue = F("Spornhüttlinger Str.");
        break;
    }
    case 294847:
    {
        returnValue = F("Spornitzer Brücke");
        break;
    }
    case 294848:
    {
        returnValue = F("Spornitzer Weg");
        break;
    }
    case 294849:
    {
        returnValue = F("Sporrenberger Mühle");
        break;
    }
    case 294850:
    {
        returnValue = F("Sporrergasse");
        break;
    }
    case 294851:
    {
        returnValue = F("Sporrerwiese");
        break;
    }
    case 294852:
    {
        returnValue = F("Sporstr.");
        break;
    }
    case 294853:
    {
        returnValue = F("Sport und Entspannungspark");
        break;
    }
    case 294854:
    {
        returnValue = F("Sport und Freizeit Anlage");
        break;
    }
    case 294855:
    {
        returnValue = F("Sport und Freizeitpark Schaafheim");
        break;
    }
    case 294856:
    {
        returnValue = F("Sport- & Freizeitgelände");
        break;
    }
    case 294857:
    {
        returnValue = F("Sport- und Freizeitanlage \"Am Setzborn");
        break;
    }
    case 294858:
    {
        returnValue = F("Sport- und Freizeitanlage Badylon");
        break;
    }
    case 294859:
    {
        returnValue = F("Sport- und Freizeitpark");
        break;
    }
    case 294860:
    {
        returnValue = F("Sport- und Spielplatz");
        break;
    }
    case 294861:
    {
        returnValue = F("Sport-Pfad");
        break;
    }
    case 294862:
    {
        returnValue = F("Sportallee");
        break;
    }
    case 294863:
    {
        returnValue = F("Sportanger");
        break;
    }
    case 294864:
    {
        returnValue = F("Sportanlage");
        break;
    }
    case 294865:
    {
        returnValue = F("Sportanlagen");
        break;
    }
    case 294866:
    {
        returnValue = F("Sportfeld");
        break;
    }
    case 294867:
    {
        returnValue = F("Sportfeldring");
        break;
    }
    case 294868:
    {
        returnValue = F("Sportfeldstr.");
        break;
    }
    case 294869:
    {
        returnValue = F("Sportfeldweg");
        break;
    }
    case 294870:
    {
        returnValue = F("Sportgelände");
        break;
    }
    case 294871:
    {
        returnValue = F("Sportgelände Breibach");
        break;
    }
    case 294872:
    {
        returnValue = F("Sportgemeinschaftspark");
        break;
    }
    case 294873:
    {
        returnValue = F("Sporthalle");
        break;
    }
    case 294874:
    {
        returnValue = F("Sporthallenstr.");
        break;
    }
    case 294875:
    {
        returnValue = F("Sporthallenweg");
        break;
    }
    case 294876:
    {
        returnValue = F("Sporthaus");
        break;
    }
    case 294877:
    {
        returnValue = F("Sportheim");
        break;
    }
    case 294878:
    {
        returnValue = F("Sportheimstr.");
        break;
    }
    case 294879:
    {
        returnValue = F("Sportheimweg");
        break;
    }
    case 294880:
    {
        returnValue = F("Sportlerheim");
        break;
    }
    case 294881:
    {
        returnValue = F("Sportlerstr.");
        break;
    }
    case 294882:
    {
        returnValue = F("Sportlertreff");
        break;
    }
    case 294883:
    {
        returnValue = F("Sportlerweg");
        break;
    }
    case 294884:
    {
        returnValue = F("Sportpark");
        break;
    }
    case 294885:
    {
        returnValue = F("Sportpark Brühl");
        break;
    }
    case 294886:
    {
        returnValue = F("Sportpark Mitte");
        break;
    }
    case 294887:
    {
        returnValue = F("Sportpark Neufinsing");
        break;
    }
    case 294888:
    {
        returnValue = F("Sportpark Obenende");
        break;
    }
    case 294889:
    {
        returnValue = F("Sportpark Pönitz");
        break;
    }
    case 294890:
    {
        returnValue = F("Sportpark Savoyer Au");
        break;
    }
    case 294891:
    {
        returnValue = F("Sportpark Wiley");
        break;
    }
    case 294892:
    {
        returnValue = F("Sportpark am Kocherwald");
        break;
    }
    case 294893:
    {
        returnValue = F("Sportparkstr.");
        break;
    }
    case 294894:
    {
        returnValue = F("Sportplatz");
        break;
    }
    case 294895:
    {
        returnValue = F("Sportplatz Bergzow");
        break;
    }
    case 294896:
    {
        returnValue = F("Sportplatz Sünching");
        break;
    }
    case 294897:
    {
        returnValue = F("Sportplatz Weg");
        break;
    }
    case 294898:
    {
        returnValue = F("Sportplatz-Steige");
        break;
    }
    case 294899:
    {
        returnValue = F("Sportplatz/ Bolzplatz");
        break;
    }
    case 294900:
    {
        returnValue = F("Sportplatzbuckel");
        break;
    }
    case 294901:
    {
        returnValue = F("Sportplatzgasse");
        break;
    }
    case 294902:
    {
        returnValue = F("Sportplatzring");
        break;
    }
    case 294903:
    {
        returnValue = F("Sportplatzsiedlung");
        break;
    }
    case 294904:
    {
        returnValue = F("Sportplatzstaße");
        break;
    }
    case 294905:
    {
        returnValue = F("Sportplatzsteige");
        break;
    }
    case 294906:
    {
        returnValue = F("Sportplatzstr.");
        break;
    }
    case 294907:
    {
        returnValue = F("Sportplatzweg");
        break;
    }
    case 294908:
    {
        returnValue = F("Sportstr.");
        break;
    }
    case 294909:
    {
        returnValue = F("Sportstättenstr.");
        break;
    }
    case 294910:
    {
        returnValue = F("Sportweg");
        break;
    }
    case 294911:
    {
        returnValue = F("Sportzentrum");
        break;
    }
    case 294912:
    {
        returnValue = F("Sportzentrum Helker Berg");
        break;
    }
    case 294913:
    {
        returnValue = F("Sportzentrum Parkstetten");
        break;
    }
    case 294914:
    {
        returnValue = F("Sportzentrumsstr.");
        break;
    }
    case 294915:
    {
        returnValue = F("Sporwaldstr.");
        break;
    }
    case 294916:
    {
        returnValue = F("Spotendorfer Str.");
        break;
    }
    case 294917:
    {
        returnValue = F("Spoyufer");
        break;
    }
    case 294918:
    {
        returnValue = F("Sprados Kamp");
        break;
    }
    case 294919:
    {
        returnValue = F("Spradower Weg");
        break;
    }
    case 294920:
    {
        returnValue = F("Spraitbacher Str.");
        break;
    }
    case 294921:
    {
        returnValue = F("Spraitbacherstr.");
        break;
    }
    case 294922:
    {
        returnValue = F("Sprakebüller Str.");
        break;
    }
    case 294923:
    {
        returnValue = F("Sprakeler Str.");
        break;
    }
    case 294924:
    {
        returnValue = F("Sprakelsbach");
        break;
    }
    case 294925:
    {
        returnValue = F("Sprakelstr.");
        break;
    }
    case 294926:
    {
        returnValue = F("Sprakener Str.");
        break;
    }
    case 294927:
    {
        returnValue = F("Sprakensehler Str.");
        break;
    }
    case 294928:
    {
        returnValue = F("Sprakkeldiek");
        break;
    }
    case 294929:
    {
        returnValue = F("Sprangerstr.");
        break;
    }
    case 294930:
    {
        returnValue = F("Sprangerweg");
        break;
    }
    case 294931:
    {
        returnValue = F("Sprankenweg");
        break;
    }
    case 294932:
    {
        returnValue = F("Sprantaler Str.");
        break;
    }
    case 294933:
    {
        returnValue = F("Spranzer Birkenweg");
        break;
    }
    case 294934:
    {
        returnValue = F("Spratzberg");
        break;
    }
    case 294935:
    {
        returnValue = F("Spraulache");
        break;
    }
    case 294936:
    {
        returnValue = F("Spreckeler Dorfstr.");
        break;
    }
    case 294937:
    {
        returnValue = F("Spreckelweg");
        break;
    }
    case 294938:
    {
        returnValue = F("Spreckenser Landstr.");
        break;
    }
    case 294939:
    {
        returnValue = F("Spreckenweg");
        break;
    }
    case 294940:
    {
        returnValue = F("Spredaer Str.");
        break;
    }
    case 294941:
    {
        returnValue = F("Spreeau");
        break;
    }
    case 294942:
    {
        returnValue = F("Spreeauenweg");
        break;
    }
    case 294943:
    {
        returnValue = F("Spreebordstr.");
        break;
    }
    case 294944:
    {
        returnValue = F("Spreebrücke");
        break;
    }
    case 294945:
    {
        returnValue = F("Spreedorfer Str.");
        break;
    }
    case 294946:
    {
        returnValue = F("Spreegasse");
        break;
    }
    case 294947:
    {
        returnValue = F("Spreehammer");
        break;
    }
    case 294948:
    {
        returnValue = F("Spreehorst");
        break;
    }
    case 294949:
    {
        returnValue = F("Spreeinsel");
        break;
    }
    case 294950:
    {
        returnValue = F("Spreelandstr.");
        break;
    }
    case 294951:
    {
        returnValue = F("Spreeler Weg");
        break;
    }
    case 294952:
    {
        returnValue = F("Spreenhagener Chaussee");
        break;
    }
    case 294953:
    {
        returnValue = F("Spreenhagener Str.");
        break;
    }
    case 294954:
    {
        returnValue = F("Spreenkamp");
        break;
    }
    case 294955:
    {
        returnValue = F("Spreenshöhe");
        break;
    }
    case 294956:
    {
        returnValue = F("Spreenstieg");
        break;
    }
    case 294957:
    {
        returnValue = F("Spreenstr.");
        break;
    }
    case 294958:
    {
        returnValue = F("Spreenweg");
        break;
    }
    case 294959:
    {
        returnValue = F("Spreepark");
        break;
    }
    case 294960:
    {
        returnValue = F("Spreepromenade");
        break;
    }
    case 294961:
    {
        returnValue = F("Spreequellstr.");
        break;
    }
    case 294962:
    {
        returnValue = F("Spreequellweg");
        break;
    }
    case 294963:
    {
        returnValue = F("Spreer Str.");
        break;
    }
    case 294964:
    {
        returnValue = F("Spreestr.");
        break;
    }
    case 294965:
    {
        returnValue = F("Spreetal");
        break;
    }
    case 294966:
    {
        returnValue = F("Spreetalstr.");
        break;
    }
    case 294967:
    {
        returnValue = F("Spreeufer");
        break;
    }
    case 294968:
    {
        returnValue = F("Spreeuferpark");
        break;
    }
    case 294969:
    {
        returnValue = F("Spreewaldallee");
        break;
    }
    case 294970:
    {
        returnValue = F("Spreewaldstr.");
        break;
    }
    case 294971:
    {
        returnValue = F("Spreewaldweg");
        break;
    }
    case 294972:
    {
        returnValue = F("Spreeweg");
        break;
    }
    case 294973:
    {
        returnValue = F("Spreewälder Str.");
        break;
    }
    case 294974:
    {
        returnValue = F("Sprehenbusch");
        break;
    }
    case 294975:
    {
        returnValue = F("Spreinswinkel");
        break;
    }
    case 294976:
    {
        returnValue = F("Spreisselgasse");
        break;
    }
    case 294977:
    {
        returnValue = F("Spreiterhof");
        break;
    }
    case 294978:
    {
        returnValue = F("Spreiterweg");
        break;
    }
    case 294979:
    {
        returnValue = F("Spreitgen");
        break;
    }
    case 294980:
    {
        returnValue = F("Spreitger Weg");
        break;
    }
    case 294981:
    {
        returnValue = F("Sprekelsholzkamp");
        break;
    }
    case 294982:
    {
        returnValue = F("Sprekelshorst");
        break;
    }
    case 294983:
    {
        returnValue = F("Sprekelsweg");
        break;
    }
    case 294984:
    {
        returnValue = F("Spremberger Str.");
        break;
    }
    case 294985:
    {
        returnValue = F("Spremberger Weg");
        break;
    }
    case 294986:
    {
        returnValue = F("Sprendlinger Landstr.");
        break;
    }
    case 294987:
    {
        returnValue = F("Sprendlinger Str.");
        break;
    }
    case 294988:
    {
        returnValue = F("Sprendlinger Weg");
        break;
    }
    case 294989:
    {
        returnValue = F("Sprenge");
        break;
    }
    case 294990:
    {
        returnValue = F("Sprengelbachstr.");
        break;
    }
    case 294991:
    {
        returnValue = F("Sprengelberg");
        break;
    }
    case 294992:
    {
        returnValue = F("Sprengeler Dorfstr.");
        break;
    }
    case 294993:
    {
        returnValue = F("Sprengelstr.");
        break;
    }
    case 294994:
    {
        returnValue = F("Sprengelweg");
        break;
    }
    case 294995:
    {
        returnValue = F("Sprengenöder Str.");
        break;
    }
    case 294996:
    {
        returnValue = F("Sprengepielplatz");
        break;
    }
    case 294997:
    {
        returnValue = F("Sprengepielstr.");
        break;
    }
    case 294998:
    {
        returnValue = F("Sprenger Str.");
        break;
    }
    case 294999:
    {
        returnValue = F("Sprenger Weg");
        break;
    }
    case 295000:
    {
        returnValue = F("Sprengergäßle");
        break;
    }
    case 295001:
    {
        returnValue = F("Sprengerhof");
        break;
    }
    case 295002:
    {
        returnValue = F("Sprengerinstr.");
        break;
    }
    case 295003:
    {
        returnValue = F("Sprengersfelde");
        break;
    }
    case 295004:
    {
        returnValue = F("Sprengersgasse");
        break;
    }
    case 295005:
    {
        returnValue = F("Sprengersknapp");
        break;
    }
    case 295006:
    {
        returnValue = F("Sprengerstr.");
        break;
    }
    case 295007:
    {
        returnValue = F("Sprengerteich");
        break;
    }
    case 295008:
    {
        returnValue = F("Sprengerweg");
        break;
    }
    case 295009:
    {
        returnValue = F("Sprengwaldweg");
        break;
    }
    case 295010:
    {
        returnValue = F("Sprenkampsweg");
        break;
    }
    case 295011:
    {
        returnValue = F("Sprenkelder Str.");
        break;
    }
    case 295012:
    {
        returnValue = F("Sprenkelnder Str.");
        break;
    }
    case 295013:
    {
        returnValue = F("Sprenzer Chaussee");
        break;
    }
    case 295014:
    {
        returnValue = F("Sprenzer Str.");
        break;
    }
    case 295015:
    {
        returnValue = F("Spreterstr.");
        break;
    }
    case 295016:
    {
        returnValue = F("Spreuerbergstr.");
        break;
    }
    case 295017:
    {
        returnValue = F("Sprickbergweg");
        break;
    }
    case 295018:
    {
        returnValue = F("Sprickmann-Kerkerinck-Str.");
        break;
    }
    case 295019:
    {
        returnValue = F("Spriddel");
        break;
    }
    case 295020:
    {
        returnValue = F("Spridererweg");
        break;
    }
    case 295021:
    {
        returnValue = F("Spriegelsbach");
        break;
    }
    case 295022:
    {
        returnValue = F("Spriekenborger Str.");
        break;
    }
    case 295023:
    {
        returnValue = F("Spriin Goat");
        break;
    }
    case 295024:
    {
        returnValue = F("Sprillbek");
        break;
    }
    case 295025:
    {
        returnValue = F("Spring");
        break;
    }
    case 295026:
    {
        returnValue = F("Springacker");
        break;
    }
    case 295027:
    {
        returnValue = F("Springanger");
        break;
    }
    case 295028:
    {
        returnValue = F("Springbarg");
        break;
    }
    case 295029:
    {
        returnValue = F("Springberg");
        break;
    }
    case 295030:
    {
        returnValue = F("Springbergstr.");
        break;
    }
    case 295031:
    {
        returnValue = F("Springbergsweg");
        break;
    }
    case 295032:
    {
        returnValue = F("Springbiel");
        break;
    }
    case 295033:
    {
        returnValue = F("Springbreite");
        break;
    }
    case 295034:
    {
        returnValue = F("Springbrunnen");
        break;
    }
    case 295035:
    {
        returnValue = F("Springbrunnenallee");
        break;
    }
    case 295036:
    {
        returnValue = F("Springbrunnengrund");
        break;
    }
    case 295037:
    {
        returnValue = F("Springbrunnenweg");
        break;
    }
    case 295038:
    {
        returnValue = F("Springbuschstr.");
        break;
    }
    case 295039:
    {
        returnValue = F("Springe");
        break;
    }
    case 295040:
    {
        returnValue = F("Springeberg");
        break;
    }
    case 295041:
    {
        returnValue = F("Springelbacher Weg");
        break;
    }
    case 295042:
    {
        returnValue = F("Springelberg");
        break;
    }
    case 295043:
    {
        returnValue = F("Springelhof");
        break;
    }
    case 295044:
    {
        returnValue = F("Springelhofweg");
        break;
    }
    case 295045:
    {
        returnValue = F("Springen");
        break;
    }
    case 295046:
    {
        returnValue = F("Springendahlstr.");
        break;
    }
    case 295047:
    {
        returnValue = F("Springende");
        break;
    }
    case 295048:
    {
        returnValue = F("Springener Str.");
        break;
    }
    case 295049:
    {
        returnValue = F("Springensbühl");
        break;
    }
    case 295050:
    {
        returnValue = F("Springensteige");
        break;
    }
    case 295051:
    {
        returnValue = F("Springenstr.");
        break;
    }
    case 295052:
    {
        returnValue = F("Springenweg");
        break;
    }
    case 295053:
    {
        returnValue = F("Springer Str.");
        break;
    }
    case 295054:
    {
        returnValue = F("Springer Weg");
        break;
    }
    case 295055:
    {
        returnValue = F("Springer-Allee");
        break;
    }
    case 295056:
    {
        returnValue = F("Springerfeld");
        break;
    }
    case 295057:
    {
        returnValue = F("Springergasse");
        break;
    }
    case 295058:
    {
        returnValue = F("Springerlei");
        break;
    }
    case 295059:
    {
        returnValue = F("Springerquellenweg");
        break;
    }
    case 295060:
    {
        returnValue = F("Springerstr.");
        break;
    }
    case 295061:
    {
        returnValue = F("Springerweg");
        break;
    }
    case 295062:
    {
        returnValue = F("Springestr.");
        break;
    }
    case 295063:
    {
        returnValue = F("Springfeldallee");
        break;
    }
    case 295064:
    {
        returnValue = F("Springfielder Str.");
        break;
    }
    case 295065:
    {
        returnValue = F("Springgarren");
        break;
    }
    case 295066:
    {
        returnValue = F("Springgasse");
        break;
    }
    case 295067:
    {
        returnValue = F("Springgrund");
        break;
    }
    case 295068:
    {
        returnValue = F("Springhoe");
        break;
    }
    case 295069:
    {
        returnValue = F("Springhof");
        break;
    }
    case 295070:
    {
        returnValue = F("Springhofweg");
        break;
    }
    case 295071:
    {
        returnValue = F("Springhornweg");
        break;
    }
    case 295072:
    {
        returnValue = F("Springierbacherstr.");
        break;
    }
    case 295073:
    {
        returnValue = F("Springiersbacher Str.");
        break;
    }
    case 295074:
    {
        returnValue = F("Springiersbacherstr.");
        break;
    }
    case 295075:
    {
        returnValue = F("Springkamp");
        break;
    }
    case 295076:
    {
        returnValue = F("Springorumstr.");
        break;
    }
    case 295077:
    {
        returnValue = F("Springpark");
        break;
    }
    case 295078:
    {
        returnValue = F("Springpatt");
        break;
    }
    case 295079:
    {
        returnValue = F("Springsteinstr.");
        break;
    }
    case 295080:
    {
        returnValue = F("Springstiller Str.");
        break;
    }
    case 295081:
    {
        returnValue = F("Springstr.");
        break;
    }
    case 295082:
    {
        returnValue = F("Springsweg");
        break;
    }
    case 295083:
    {
        returnValue = F("Springteich");
        break;
    }
    case 295084:
    {
        returnValue = F("Springweg");
        break;
    }
    case 295085:
    {
        returnValue = F("Springwiese");
        break;
    }
    case 295086:
    {
        returnValue = F("Sprink Rundweg");
        break;
    }
    case 295087:
    {
        returnValue = F("Sprinkelhofer Weg");
        break;
    }
    case 295088:
    {
        returnValue = F("Sprinkelwiesen");
        break;
    }
    case 295089:
    {
        returnValue = F("Sprintbahn");
        break;
    }
    case 295090:
    {
        returnValue = F("Sprittelsberg");
        break;
    }
    case 295091:
    {
        returnValue = F("Sprittelsberger Str.");
        break;
    }
    case 295092:
    {
        returnValue = F("Spritzenberg");
        break;
    }
    case 295093:
    {
        returnValue = F("Spritzengang");
        break;
    }
    case 295094:
    {
        returnValue = F("Spritzengasse");
        break;
    }
    case 295095:
    {
        returnValue = F("Spritzenhausplatz");
        break;
    }
    case 295096:
    {
        returnValue = F("Spritzenhausstr.");
        break;
    }
    case 295097:
    {
        returnValue = F("Spritzenhausweg");
        break;
    }
    case 295098:
    {
        returnValue = F("Spritzenplatz");
        break;
    }
    case 295099:
    {
        returnValue = F("Spritzenredder");
        break;
    }
    case 295100:
    {
        returnValue = F("Spritzenstr.");
        break;
    }
    case 295101:
    {
        returnValue = F("Spritzenteich");
        break;
    }
    case 295102:
    {
        returnValue = F("Spritzenturm");
        break;
    }
    case 295103:
    {
        returnValue = F("Spritzenweg");
        break;
    }
    case 295104:
    {
        returnValue = F("Sprißlerstr.");
        break;
    }
    case 295105:
    {
        returnValue = F("Sprockhofer Str.");
        break;
    }
    case 295106:
    {
        returnValue = F("Sprockhöveler Str.");
        break;
    }
    case 295107:
    {
        returnValue = F("Sproitzer Str.");
        break;
    }
    case 295108:
    {
        returnValue = F("Sprollenwasenweg");
        break;
    }
    case 295109:
    {
        returnValue = F("Sprollstr.");
        break;
    }
    case 295110:
    {
        returnValue = F("Sprollweg");
        break;
    }
    case 295111:
    {
        returnValue = F("Sprossener Dorfstr.");
        break;
    }
    case 295112:
    {
        returnValue = F("Sprossener Str.");
        break;
    }
    case 295113:
    {
        returnValue = F("Sprosserweg");
        break;
    }
    case 295114:
    {
        returnValue = F("Sprottaer Bucht");
        break;
    }
    case 295115:
    {
        returnValue = F("Sprottaer Landstr.");
        break;
    }
    case 295116:
    {
        returnValue = F("Sprottaer Str.");
        break;
    }
    case 295117:
    {
        returnValue = F("Sprottauer Str.");
        break;
    }
    case 295118:
    {
        returnValue = F("Sprottenanger");
        break;
    }
    case 295119:
    {
        returnValue = F("Sprottenweg");
        break;
    }
    case 295120:
    {
        returnValue = F("Sprottetal");
        break;
    }
    case 295121:
    {
        returnValue = F("Spruce Court");
        break;
    }
    case 295122:
    {
        returnValue = F("Sprucker Str.");
        break;
    }
    case 295123:
    {
        returnValue = F("Sprudelallee");
        break;
    }
    case 295124:
    {
        returnValue = F("Sprudelstr.");
        break;
    }
    case 295125:
    {
        returnValue = F("Sprudelweg");
        break;
    }
    case 295126:
    {
        returnValue = F("Sprung über die Bahn");
        break;
    }
    case 295127:
    {
        returnValue = F("Sprungleitenweg");
        break;
    }
    case 295128:
    {
        returnValue = F("Sprunglweg");
        break;
    }
    case 295129:
    {
        returnValue = F("Sprungschanze");
        break;
    }
    case 295130:
    {
        returnValue = F("Sprungschanzenstr.");
        break;
    }
    case 295131:
    {
        returnValue = F("Sprungschanzenweg");
        break;
    }
    case 295132:
    {
        returnValue = F("Sprungweg");
        break;
    }
    case 295133:
    {
        returnValue = F("Sprähenberg");
        break;
    }
    case 295134:
    {
        returnValue = F("Sprödaer Weg");
        break;
    }
    case 295135:
    {
        returnValue = F("Spröselberg");
        break;
    }
    case 295136:
    {
        returnValue = F("Sprösselmühlweg");
        break;
    }
    case 295137:
    {
        returnValue = F("Spröttenweg");
        break;
    }
    case 295138:
    {
        returnValue = F("Sprötzenbruch");
        break;
    }
    case 295139:
    {
        returnValue = F("Sprötzer Bachweg");
        break;
    }
    case 295140:
    {
        returnValue = F("Sprötzer Bahnhofstr.");
        break;
    }
    case 295141:
    {
        returnValue = F("Sprötzer Poststr.");
        break;
    }
    case 295142:
    {
        returnValue = F("Sprötzer Weg");
        break;
    }
    case 295143:
    {
        returnValue = F("Sprüsselbach");
        break;
    }
    case 295144:
    {
        returnValue = F("Sprüttenhuus");
        break;
    }
    case 295145:
    {
        returnValue = F("Spukbrücke");
        break;
    }
    case 295146:
    {
        returnValue = F("Spulereistr.");
        break;
    }
    case 295147:
    {
        returnValue = F("Spulergasse");
        break;
    }
    case 295148:
    {
        returnValue = F("Spulerstr.");
        break;
    }
    case 295149:
    {
        returnValue = F("Spulerweg");
        break;
    }
    case 295150:
    {
        returnValue = F("Spulkater");
        break;
    }
    case 295151:
    {
        returnValue = F("Spundlachschneise");
        break;
    }
    case 295152:
    {
        returnValue = F("Spuntkissen");
        break;
    }
    case 295153:
    {
        returnValue = F("Spurbahn");
        break;
    }
    case 295154:
    {
        returnValue = F("Spurbahnweg");
        break;
    }
    case 295155:
    {
        returnValue = F("Spuren-Weg");
        break;
    }
    case 295156:
    {
        returnValue = F("Spurenlehrpfad");
        break;
    }
    case 295157:
    {
        returnValue = F("Spurgasse");
        break;
    }
    case 295158:
    {
        returnValue = F("Spurkenbacher Str.");
        break;
    }
    case 295159:
    {
        returnValue = F("Spurker Gässchen");
        break;
    }
    case 295160:
    {
        returnValue = F("Spurplattenweg");
        break;
    }
    case 295161:
    {
        returnValue = F("Spurplattenweg Rantzau-Sasel");
        break;
    }
    case 295162:
    {
        returnValue = F("Spurwaldweg");
        break;
    }
    case 295163:
    {
        returnValue = F("Spurweg");
        break;
    }
    case 295164:
    {
        returnValue = F("Spurzemer Weg");
        break;
    }
    case 295165:
    {
        returnValue = F("Sputendorfer Landstr.");
        break;
    }
    case 295166:
    {
        returnValue = F("Sputendorfer Str.");
        break;
    }
    case 295167:
    {
        returnValue = F("Sputendorfer Weg");
        break;
    }
    case 295168:
    {
        returnValue = F("Sputnikweg");
        break;
    }
    case 295169:
    {
        returnValue = F("Sputtenwinkelstr.");
        break;
    }
    case 295170:
    {
        returnValue = F("Spyckstr.");
        break;
    }
    case 295171:
    {
        returnValue = F("Spyker Weg");
        break;
    }
    case 295172:
    {
        returnValue = F("Spystruper Str.");
        break;
    }
    case 295173:
    {
        returnValue = F("Spädelenweg");
        break;
    }
    case 295174:
    {
        returnValue = F("Spädinghausen");
        break;
    }
    case 295175:
    {
        returnValue = F("Spähnplatz");
        break;
    }
    case 295176:
    {
        returnValue = F("Spähnplatzweg");
        break;
    }
    case 295177:
    {
        returnValue = F("Spähnäcker");
        break;
    }
    case 295178:
    {
        returnValue = F("Spähäcker");
        break;
    }
    case 295179:
    {
        returnValue = F("Spälterwaldstr.");
        break;
    }
    case 295180:
    {
        returnValue = F("Späneplatzweg");
        break;
    }
    case 295181:
    {
        returnValue = F("Spännigweg");
        break;
    }
    case 295182:
    {
        returnValue = F("Spätburgunder-Str.");
        break;
    }
    case 295183:
    {
        returnValue = F("Spätburgunderhof");
        break;
    }
    case 295184:
    {
        returnValue = F("Spätburgunderstr.");
        break;
    }
    case 295185:
    {
        returnValue = F("Spätburgunderweg");
        break;
    }
    case 295186:
    {
        returnValue = F("Spätengarten");
        break;
    }
    case 295187:
    {
        returnValue = F("Spätenweg");
        break;
    }
    case 295188:
    {
        returnValue = F("Späthenweg");
        break;
    }
    case 295189:
    {
        returnValue = F("Späthstr.");
        break;
    }
    case 295190:
    {
        returnValue = F("Späting Weg");
        break;
    }
    case 295191:
    {
        returnValue = F("Spätstr.");
        break;
    }
    case 295192:
    {
        returnValue = F("Spöckbrücke");
        break;
    }
    case 295193:
    {
        returnValue = F("Spöcker Str.");
        break;
    }
    case 295194:
    {
        returnValue = F("Spöcker Weg");
        break;
    }
    case 295195:
    {
        returnValue = F("Spöckteile");
        break;
    }
    case 295196:
    {
        returnValue = F("Spöckweg");
        break;
    }
    case 295197:
    {
        returnValue = F("Spök");
        break;
    }
    case 295198:
    {
        returnValue = F("Spökenkuhlen");
        break;
    }
    case 295199:
    {
        returnValue = F("Spökerdamm");
        break;
    }
    case 295200:
    {
        returnValue = F("Spöktal");
        break;
    }
    case 295201:
    {
        returnValue = F("Spöllbergstr.");
        break;
    }
    case 295202:
    {
        returnValue = F("Spönerweg");
        break;
    }
    case 295203:
    {
        returnValue = F("Spönwiese");
        break;
    }
    case 295204:
    {
        returnValue = F("Spörener Ring");
        break;
    }
    case 295205:
    {
        returnValue = F("Spörener Str.");
        break;
    }
    case 295206:
    {
        returnValue = F("Spörersgasse");
        break;
    }
    case 295207:
    {
        returnValue = F("Spörkelnbruch");
        break;
    }
    case 295208:
    {
        returnValue = F("Spörkenstr.");
        break;
    }
    case 295209:
    {
        returnValue = F("Spörlesweg");
        break;
    }
    case 295210:
    {
        returnValue = F("Spörrberg");
        break;
    }
    case 295211:
    {
        returnValue = F("Spöttinger Str.");
        break;
    }
    case 295212:
    {
        returnValue = F("Spöttl");
        break;
    }
    case 295213:
    {
        returnValue = F("Spötzen");
        break;
    }
    case 295214:
    {
        returnValue = F("Spötzingstr.");
        break;
    }
    case 295215:
    {
        returnValue = F("Spülgasse");
        break;
    }
    case 295216:
    {
        returnValue = F("Spülinsel");
        break;
    }
    case 295217:
    {
        returnValue = F("Spülkoogsweg");
        break;
    }
    case 295218:
    {
        returnValue = F("Spülseestr.");
        break;
    }
    case 295219:
    {
        returnValue = F("Spülsteg");
        break;
    }
    case 295220:
    {
        returnValue = F("Spülstr.");
        break;
    }
    case 295221:
    {
        returnValue = F("Spülweg");
        break;
    }
    case 295222:
    {
        returnValue = F("Spürckstr.");
        break;
    }
    case 295223:
    {
        returnValue = F("Spürkerau");
        break;
    }
    case 295224:
    {
        returnValue = F("Squindostr.");
        break;
    }
    case 295225:
    {
        returnValue = F("Sr-Elkana-Weg");
        break;
    }
    case 295226:
    {
        returnValue = F("Sr.-Hildegard-Str.");
        break;
    }
    case 295227:
    {
        returnValue = F("Sr.-Ludgeriana-Str.");
        break;
    }
    case 295228:
    {
        returnValue = F("Sr.-Mildgitha-Bachleitner-Weg");
        break;
    }
    case 295229:
    {
        returnValue = F("Srönfeldweg");
        break;
    }
    case 295230:
    {
        returnValue = F("St 2092");
        break;
    }
    case 295231:
    {
        returnValue = F("St 2108");
        break;
    }
    case 295232:
    {
        returnValue = F("St 2140");
        break;
    }
    case 295233:
    {
        returnValue = F("St 2221");
        break;
    }
    case 295234:
    {
        returnValue = F("St 2299");
        break;
    }
    case 295235:
    {
        returnValue = F("St 2300");
        break;
    }
    case 295236:
    {
        returnValue = F("St 2310");
        break;
    }
    case 295237:
    {
        returnValue = F("St 2318");
        break;
    }
    case 295238:
    {
        returnValue = F("St 2323");
        break;
    }
    case 295239:
    {
        returnValue = F("St 2437");
        break;
    }
    case 295240:
    {
        returnValue = F("St Georgs Str.");
        break;
    }
    case 295241:
    {
        returnValue = F("St Martinus");
        break;
    }
    case 295242:
    {
        returnValue = F("St-Anna-Str.");
        break;
    }
    case 295243:
    {
        returnValue = F("St-Jakob's-Bergerl");
        break;
    }
    case 295244:
    {
        returnValue = F("St-Jakob-Str.");
        break;
    }
    case 295245:
    {
        returnValue = F("St-Kilian-Str.");
        break;
    }
    case 295246:
    {
        returnValue = F("St-Marien-Str.");
        break;
    }
    case 295247:
    {
        returnValue = F("St-Martin-Str.");
        break;
    }
    case 295248:
    {
        returnValue = F("St-Michel-Weg");
        break;
    }
    case 295249:
    {
        returnValue = F("St-Notker-Str.");
        break;
    }
    case 295250:
    {
        returnValue = F("St-Veit-Str.");
        break;
    }
    case 295251:
    {
        returnValue = F("St. Adelheid");
        break;
    }
    case 295252:
    {
        returnValue = F("St. Adriansplatz");
        break;
    }
    case 295253:
    {
        returnValue = F("St. Afra-Ring");
        break;
    }
    case 295254:
    {
        returnValue = F("St. Agatha Park");
        break;
    }
    case 295255:
    {
        returnValue = F("St. Agatha-Str.");
        break;
    }
    case 295256:
    {
        returnValue = F("St. Agnes-Str.");
        break;
    }
    case 295257:
    {
        returnValue = F("St. Alban");
        break;
    }
    case 295258:
    {
        returnValue = F("St. Alban-Str.");
        break;
    }
    case 295259:
    {
        returnValue = F("St. Albaner Str.");
        break;
    }
    case 295260:
    {
        returnValue = F("St. Albinus-Str.");
        break;
    }
    case 295261:
    {
        returnValue = F("St. Andreas");
        break;
    }
    case 295262:
    {
        returnValue = F("St. Andreas Str.");
        break;
    }
    case 295263:
    {
        returnValue = F("St. Andräer Str.");
        break;
    }
    case 295264:
    {
        returnValue = F("St. Anna");
        break;
    }
    case 295265:
    {
        returnValue = F("St. Anna Brücke");
        break;
    }
    case 295266:
    {
        returnValue = F("St. Anna-Str.");
        break;
    }
    case 295267:
    {
        returnValue = F("St. Annaweg");
        break;
    }
    case 295268:
    {
        returnValue = F("St. Annen");
        break;
    }
    case 295269:
    {
        returnValue = F("St. Annenstr.");
        break;
    }
    case 295270:
    {
        returnValue = F("St. Annenweg");
        break;
    }
    case 295271:
    {
        returnValue = F("St. Antonius Str.");
        break;
    }
    case 295272:
    {
        returnValue = F("St. Antonius-Str.");
        break;
    }
    case 295273:
    {
        returnValue = F("St. Antoniweg");
        break;
    }
    case 295274:
    {
        returnValue = F("St. Arbogast-Str.");
        break;
    }
    case 295275:
    {
        returnValue = F("St. Arnoldweg");
        break;
    }
    case 295276:
    {
        returnValue = F("St. Barbara Str.");
        break;
    }
    case 295277:
    {
        returnValue = F("St. Barbara Tunnel");
        break;
    }
    case 295278:
    {
        returnValue = F("St. Barbara-Str.");
        break;
    }
    case 295279:
    {
        returnValue = F("St. Barbara-Weg");
        break;
    }
    case 295280:
    {
        returnValue = F("St. Barbaraschacht");
        break;
    }
    case 295281:
    {
        returnValue = F("St. Barbarastr.");
        break;
    }
    case 295282:
    {
        returnValue = F("St. Bartholomäusstr.");
        break;
    }
    case 295283:
    {
        returnValue = F("St. Bernhard Str.");
        break;
    }
    case 295284:
    {
        returnValue = F("St. Bernhardsweg");
        break;
    }
    case 295285:
    {
        returnValue = F("St. Blasiushof");
        break;
    }
    case 295286:
    {
        returnValue = F("St. Briktius-Weg");
        break;
    }
    case 295287:
    {
        returnValue = F("St. Castor Str.");
        break;
    }
    case 295288:
    {
        returnValue = F("St. Christina");
        break;
    }
    case 295289:
    {
        returnValue = F("St. Christoph");
        break;
    }
    case 295290:
    {
        returnValue = F("St. Christophorus Str.");
        break;
    }
    case 295291:
    {
        returnValue = F("St. Cuno");
        break;
    }
    case 295292:
    {
        returnValue = F("St. Cyriakusstr.");
        break;
    }
    case 295293:
    {
        returnValue = F("St. Cyriakusweg");
        break;
    }
    case 295294:
    {
        returnValue = F("St. Egidiener Str.");
        break;
    }
    case 295295:
    {
        returnValue = F("St. Elisabeth");
        break;
    }
    case 295296:
    {
        returnValue = F("St. Elisabeth-Str.");
        break;
    }
    case 295297:
    {
        returnValue = F("St. Erasmusstr.");
        break;
    }
    case 295298:
    {
        returnValue = F("St. Fargeau Park");
        break;
    }
    case 295299:
    {
        returnValue = F("St. Fidelisweg");
        break;
    }
    case 295300:
    {
        returnValue = F("St. Florentiner Str.");
        break;
    }
    case 295301:
    {
        returnValue = F("St. Florian");
        break;
    }
    case 295302:
    {
        returnValue = F("St. Florian-Str.");
        break;
    }
    case 295303:
    {
        returnValue = F("St. Florianstr.");
        break;
    }
    case 295304:
    {
        returnValue = F("St. Floriansweg");
        break;
    }
    case 295305:
    {
        returnValue = F("St. Florinustr.");
        break;
    }
    case 295306:
    {
        returnValue = F("St. Gabrielweg");
        break;
    }
    case 295307:
    {
        returnValue = F("St. Galler Weg");
        break;
    }
    case 295308:
    {
        returnValue = F("St. Gangloffer Str.");
        break;
    }
    case 295309:
    {
        returnValue = F("St. Gangolfstr.");
        break;
    }
    case 295310:
    {
        returnValue = F("St. Gaultier-Platz");
        break;
    }
    case 295311:
    {
        returnValue = F("St. Genovefastr.");
        break;
    }
    case 295312:
    {
        returnValue = F("St. Georg");
        break;
    }
    case 295313:
    {
        returnValue = F("St. Georg Park");
        break;
    }
    case 295314:
    {
        returnValue = F("St. Georg Str.");
        break;
    }
    case 295315:
    {
        returnValue = F("St. Georg Weg");
        break;
    }
    case 295316:
    {
        returnValue = F("St. Georg-Ring");
        break;
    }
    case 295317:
    {
        returnValue = F("St. Georg-Str.");
        break;
    }
    case 295318:
    {
        returnValue = F("St. Georgen Str.");
        break;
    }
    case 295319:
    {
        returnValue = F("St. Georgenhof");
        break;
    }
    case 295320:
    {
        returnValue = F("St. Georgenstr.");
        break;
    }
    case 295321:
    {
        returnValue = F("St. Georger Berg");
        break;
    }
    case 295322:
    {
        returnValue = F("St. Georges Allee");
        break;
    }
    case 295323:
    {
        returnValue = F("St. Georgs-Weg");
        break;
    }
    case 295324:
    {
        returnValue = F("St. Georgsgasse");
        break;
    }
    case 295325:
    {
        returnValue = F("St. Georgstr.");
        break;
    }
    case 295326:
    {
        returnValue = F("St. Georgsweg");
        break;
    }
    case 295327:
    {
        returnValue = F("St. Gertrudis-Str.");
        break;
    }
    case 295328:
    {
        returnValue = F("St. Gilgen");
        break;
    }
    case 295329:
    {
        returnValue = F("St. Gilgenstr.");
        break;
    }
    case 295330:
    {
        returnValue = F("St. Goarer Str.");
        break;
    }
    case 295331:
    {
        returnValue = F("St. Heinricher Str.");
        break;
    }
    case 295332:
    {
        returnValue = F("St. Helenastr.");
        break;
    }
    case 295333:
    {
        returnValue = F("St. Helenenmoor");
        break;
    }
    case 295334:
    {
        returnValue = F("St. Hermann's Weg");
        break;
    }
    case 295335:
    {
        returnValue = F("St. Hidulfstr.");
        break;
    }
    case 295336:
    {
        returnValue = F("St. Hubertus Weg");
        break;
    }
    case 295337:
    {
        returnValue = F("St. Hubertusstr.");
        break;
    }
    case 295338:
    {
        returnValue = F("St. Hubertusweg");
        break;
    }
    case 295339:
    {
        returnValue = F("St. Ilgener Str.");
        break;
    }
    case 295340:
    {
        returnValue = F("St. Ilgener Viehtrieb");
        break;
    }
    case 295341:
    {
        returnValue = F("St. Ingberter Str.");
        break;
    }
    case 295342:
    {
        returnValue = F("St. Jacober Hauptstr.");
        break;
    }
    case 295343:
    {
        returnValue = F("St. Jacober Nebenstr.");
        break;
    }
    case 295344:
    {
        returnValue = F("St. Jakob");
        break;
    }
    case 295345:
    {
        returnValue = F("St. Jakobstr.");
        break;
    }
    case 295346:
    {
        returnValue = F("St. Jakobsweg");
        break;
    }
    case 295347:
    {
        returnValue = F("St. Jakobsweg / Salomonweg");
        break;
    }
    case 295348:
    {
        returnValue = F("St. Johanner Str.");
        break;
    }
    case 295349:
    {
        returnValue = F("St. Johanner Weg");
        break;
    }
    case 295350:
    {
        returnValue = F("St. Johannes Str.");
        break;
    }
    case 295351:
    {
        returnValue = F("St. Johannes Weg");
        break;
    }
    case 295352:
    {
        returnValue = F("St. Johanneshaldenweg");
        break;
    }
    case 295353:
    {
        returnValue = F("St. Johannisberg");
        break;
    }
    case 295354:
    {
        returnValue = F("St. Johannisstieg");
        break;
    }
    case 295355:
    {
        returnValue = F("St. Joost");
        break;
    }
    case 295356:
    {
        returnValue = F("St. Jooster Altendeich");
        break;
    }
    case 295357:
    {
        returnValue = F("St. Josef Park");
        break;
    }
    case 295358:
    {
        returnValue = F("St. Josefs Platz");
        break;
    }
    case 295359:
    {
        returnValue = F("St. Josefsstift");
        break;
    }
    case 295360:
    {
        returnValue = F("St. Josefstr.");
        break;
    }
    case 295361:
    {
        returnValue = F("St. Josephs Park");
        break;
    }
    case 295362:
    {
        returnValue = F("St. Jürgen");
        break;
    }
    case 295363:
    {
        returnValue = F("St. Jürgen Weg");
        break;
    }
    case 295364:
    {
        returnValue = F("St. Kathariner Weg");
        break;
    }
    case 295365:
    {
        returnValue = F("St. Kunibert-Platz");
        break;
    }
    case 295366:
    {
        returnValue = F("St. Lambertusstr.");
        break;
    }
    case 295367:
    {
        returnValue = F("St. Laurentius Str.");
        break;
    }
    case 295368:
    {
        returnValue = F("St. Laurentius Weg");
        break;
    }
    case 295369:
    {
        returnValue = F("St. Laurentius-Str.");
        break;
    }
    case 295370:
    {
        returnValue = F("St. Laurentiusstr.");
        break;
    }
    case 295371:
    {
        returnValue = F("St. Laurentiusweg");
        break;
    }
    case 295372:
    {
        returnValue = F("St. Lawrence Court");
        break;
    }
    case 295373:
    {
        returnValue = F("St. Leoner Str.");
        break;
    }
    case 295374:
    {
        returnValue = F("St. Leonhard");
        break;
    }
    case 295375:
    {
        returnValue = F("St. Leonhard Str.");
        break;
    }
    case 295376:
    {
        returnValue = F("St. Leonhard am Buchat");
        break;
    }
    case 295377:
    {
        returnValue = F("St. Leonhard-Str.");
        break;
    }
    case 295378:
    {
        returnValue = F("St. Lorenz Gegentrum");
        break;
    }
    case 295379:
    {
        returnValue = F("St. Louiser Str.");
        break;
    }
    case 295380:
    {
        returnValue = F("St. Marcellusstr.");
        break;
    }
    case 295381:
    {
        returnValue = F("St. Margarethen Weg");
        break;
    }
    case 295382:
    {
        returnValue = F("St. Margarethenhöhe");
        break;
    }
    case 295383:
    {
        returnValue = F("St. Margarethenstr.");
        break;
    }
    case 295384:
    {
        returnValue = F("St. Margarethenweg");
        break;
    }
    case 295385:
    {
        returnValue = F("St. Marien-Str.");
        break;
    }
    case 295386:
    {
        returnValue = F("St. Martin");
        break;
    }
    case 295387:
    {
        returnValue = F("St. Martin Belle Roche Platz");
        break;
    }
    case 295388:
    {
        returnValue = F("St. Martin-Le-Vinoux");
        break;
    }
    case 295389:
    {
        returnValue = F("St. Martin-Platz");
        break;
    }
    case 295390:
    {
        returnValue = F("St. Martin-Str.");
        break;
    }
    case 295391:
    {
        returnValue = F("St. Martins Park");
        break;
    }
    case 295392:
    {
        returnValue = F("St. Martinstr.");
        break;
    }
    case 295393:
    {
        returnValue = F("St. Martinsweg");
        break;
    }
    case 295394:
    {
        returnValue = F("St. Martinusgasse");
        break;
    }
    case 295395:
    {
        returnValue = F("St. Martinushof");
        break;
    }
    case 295396:
    {
        returnValue = F("St. Martinusstr.");
        break;
    }
    case 295397:
    {
        returnValue = F("St. Maternusstr.");
        break;
    }
    case 295398:
    {
        returnValue = F("St. Matthias Platz");
        break;
    }
    case 295399:
    {
        returnValue = F("St. Matthäus");
        break;
    }
    case 295400:
    {
        returnValue = F("St. Maximin");
        break;
    }
    case 295401:
    {
        returnValue = F("St. Michael");
        break;
    }
    case 295402:
    {
        returnValue = F("St. Michael Str.");
        break;
    }
    case 295403:
    {
        returnValue = F("St. Michael-Str.");
        break;
    }
    case 295404:
    {
        returnValue = F("St. Michaeliser Str.");
        break;
    }
    case 295405:
    {
        returnValue = F("St. Michaelstr.");
        break;
    }
    case 295406:
    {
        returnValue = F("St. Michaelsweg");
        break;
    }
    case 295407:
    {
        returnValue = F("St. Michelner Hauptstr.");
        break;
    }
    case 295408:
    {
        returnValue = F("St. Michelner Nebenstr.");
        break;
    }
    case 295409:
    {
        returnValue = F("St. Moritz-Kirchstr.");
        break;
    }
    case 295410:
    {
        returnValue = F("St. Nazarius Weg");
        break;
    }
    case 295411:
    {
        returnValue = F("St. Niclaser Hauptstr.");
        break;
    }
    case 295412:
    {
        returnValue = F("St. Nicolaikirche");
        break;
    }
    case 295413:
    {
        returnValue = F("St. Nikolai");
        break;
    }
    case 295414:
    {
        returnValue = F("St. Nikolai Kirchplatz");
        break;
    }
    case 295415:
    {
        returnValue = F("St. Nikolaihof");
        break;
    }
    case 295416:
    {
        returnValue = F("St. Nikolausgasse");
        break;
    }
    case 295417:
    {
        returnValue = F("St. Nikolausstr.");
        break;
    }
    case 295418:
    {
        returnValue = F("St. Nikolausweg");
        break;
    }
    case 295419:
    {
        returnValue = F("St. Odilienberger Str.");
        break;
    }
    case 295420:
    {
        returnValue = F("St. Oranna Str.");
        break;
    }
    case 295421:
    {
        returnValue = F("St. Oswald");
        break;
    }
    case 295422:
    {
        returnValue = F("St. Ottilien-Str.");
        break;
    }
    case 295423:
    {
        returnValue = F("St. Pankrazer Weg");
        break;
    }
    case 295424:
    {
        returnValue = F("St. Pantaleonstr.");
        break;
    }
    case 295425:
    {
        returnValue = F("St. Patriz");
        break;
    }
    case 295426:
    {
        returnValue = F("St. Pauli");
        break;
    }
    case 295427:
    {
        returnValue = F("St. Peter");
        break;
    }
    case 295428:
    {
        returnValue = F("St. Peter Str.");
        break;
    }
    case 295429:
    {
        returnValue = F("St. Petersburger Str.");
        break;
    }
    case 295430:
    {
        returnValue = F("St. Petershof");
        break;
    }
    case 295431:
    {
        returnValue = F("St. Petersweg");
        break;
    }
    case 295432:
    {
        returnValue = F("St. Peterweg");
        break;
    }
    case 295433:
    {
        returnValue = F("St. Petri");
        break;
    }
    case 295434:
    {
        returnValue = F("St. Petri-Platz");
        break;
    }
    case 295435:
    {
        returnValue = F("St. Poler-Str.");
        break;
    }
    case 295436:
    {
        returnValue = F("St. Quintin-Str.");
        break;
    }
    case 295437:
    {
        returnValue = F("St. Raphael");
        break;
    }
    case 295438:
    {
        returnValue = F("St. Remig-Platz");
        break;
    }
    case 295439:
    {
        returnValue = F("St. Remigius-Str.");
        break;
    }
    case 295440:
    {
        returnValue = F("St. Ritter");
        break;
    }
    case 295441:
    {
        returnValue = F("St. Rochus-Weg");
        break;
    }
    case 295442:
    {
        returnValue = F("St. Rochusplatz");
        break;
    }
    case 295443:
    {
        returnValue = F("St. Roman");
        break;
    }
    case 295444:
    {
        returnValue = F("St. Sebastian");
        break;
    }
    case 295445:
    {
        returnValue = F("St. Sebastian-Str.");
        break;
    }
    case 295446:
    {
        returnValue = F("St. Sebastianstr.");
        break;
    }
    case 295447:
    {
        returnValue = F("St. Sebastianus Platz");
        break;
    }
    case 295448:
    {
        returnValue = F("St. Sebastianusstr.");
        break;
    }
    case 295449:
    {
        returnValue = F("St. Stefansweg");
        break;
    }
    case 295450:
    {
        returnValue = F("St. Stephanspark");
        break;
    }
    case 295451:
    {
        returnValue = F("St. Stephanus Str.");
        break;
    }
    case 295452:
    {
        returnValue = F("St. Stephanus Weg");
        break;
    }
    case 295453:
    {
        returnValue = F("St. Ulrich");
        break;
    }
    case 295454:
    {
        returnValue = F("St. Ulrichsweg");
        break;
    }
    case 295455:
    {
        returnValue = F("St. Urban-Platz");
        break;
    }
    case 295456:
    {
        returnValue = F("St. Urbanstr.");
        break;
    }
    case 295457:
    {
        returnValue = F("St. Valentin");
        break;
    }
    case 295458:
    {
        returnValue = F("St. Valentin-Str.");
        break;
    }
    case 295459:
    {
        returnValue = F("St. Valentinusstr.");
        break;
    }
    case 295460:
    {
        returnValue = F("St. Veit");
        break;
    }
    case 295461:
    {
        returnValue = F("St. Veit Park");
        break;
    }
    case 295462:
    {
        returnValue = F("St. Veith");
        break;
    }
    case 295463:
    {
        returnValue = F("St. Viktorstr.");
        break;
    }
    case 295464:
    {
        returnValue = F("St. Vinzenz-Weg");
        break;
    }
    case 295465:
    {
        returnValue = F("St. Vinzenzweg");
        break;
    }
    case 295466:
    {
        returnValue = F("St. Vitus");
        break;
    }
    case 295467:
    {
        returnValue = F("St. Vitus-Str.");
        break;
    }
    case 295468:
    {
        returnValue = F("St. Wendeler Str.");
        break;
    }
    case 295469:
    {
        returnValue = F("St. Wendelgasse");
        break;
    }
    case 295470:
    {
        returnValue = F("St. Wendelin Brücke");
        break;
    }
    case 295471:
    {
        returnValue = F("St. Wendelin-Str.");
        break;
    }
    case 295472:
    {
        returnValue = F("St. Wendelinbrücke");
        break;
    }
    case 295473:
    {
        returnValue = F("St. Wendelinweg");
        break;
    }
    case 295474:
    {
        returnValue = F("St. Wigberti-Str.");
        break;
    }
    case 295475:
    {
        returnValue = F("St. Willibald");
        break;
    }
    case 295476:
    {
        returnValue = F("St. Wolfgang-Str.");
        break;
    }
    case 295477:
    {
        returnValue = F("St. Wolfgangweg");
        break;
    }
    case 295478:
    {
        returnValue = F("St. Ägidius-Str.");
        break;
    }
    case 295479:
    {
        returnValue = F("St.- Emmeram-Str.");
        break;
    }
    case 295480:
    {
        returnValue = F("St.- Johann- Str.");
        break;
    }
    case 295481:
    {
        returnValue = F("St.- Martin- Str.");
        break;
    }
    case 295482:
    {
        returnValue = F("St.-Adelheid-Weg");
        break;
    }
    case 295483:
    {
        returnValue = F("St.-Afra-Steg");
        break;
    }
    case 295484:
    {
        returnValue = F("St.-Afra-Str.");
        break;
    }
    case 295485:
    {
        returnValue = F("St.-Afra-Weg");
        break;
    }
    case 295486:
    {
        returnValue = F("St.-Agatha-Platz");
        break;
    }
    case 295487:
    {
        returnValue = F("St.-Agatha-Str.");
        break;
    }
    case 295488:
    {
        returnValue = F("St.-Agatha-Weg");
        break;
    }
    case 295489:
    {
        returnValue = F("St.-Agnes-Str.");
        break;
    }
    case 295490:
    {
        returnValue = F("St.-Alban-Str.");
        break;
    }
    case 295491:
    {
        returnValue = F("St.-Alban-Weg");
        break;
    }
    case 295492:
    {
        returnValue = F("St.-Albaner-Str.");
        break;
    }
    case 295493:
    {
        returnValue = F("St.-Albanus-Str.");
        break;
    }
    case 295494:
    {
        returnValue = F("St.-Albanus-Weg");
        break;
    }
    case 295495:
    {
        returnValue = F("St.-Albert-Str.");
        break;
    }
    case 295496:
    {
        returnValue = F("St.-Aldegundis-Str.");
        break;
    }
    case 295497:
    {
        returnValue = F("St.-Aldegundis-Weg");
        break;
    }
    case 295498:
    {
        returnValue = F("St.-Amand-Str.");
        break;
    }
    case 295499:
    {
        returnValue = F("St.-Amandus-Str.");
        break;
    }
    case 295500:
    {
        returnValue = F("St.-Andreas-Str.");
        break;
    }
    case 295501:
    {
        returnValue = F("St.-Andreas-Weg");
        break;
    }
    case 295502:
    {
        returnValue = F("St.-Andrä-Wördern-Str.");
        break;
    }
    case 295503:
    {
        returnValue = F("St.-Anna-Kapellen-Str.");
        break;
    }
    case 295504:
    {
        returnValue = F("St.-Anna-See-Weg");
        break;
    }
    case 295505:
    {
        returnValue = F("St.-Anna-Siedlung");
        break;
    }
    case 295506:
    {
        returnValue = F("St.-Anna-Str.");
        break;
    }
    case 295507:
    {
        returnValue = F("St.-Anna-Weg");
        break;
    }
    case 295508:
    {
        returnValue = F("St.-Annabergstr.");
        break;
    }
    case 295509:
    {
        returnValue = F("St.-Annen-Park");
        break;
    }
    case 295510:
    {
        returnValue = F("St.-Annen-Str.");
        break;
    }
    case 295511:
    {
        returnValue = F("St.-Annen-Weg");
        break;
    }
    case 295512:
    {
        returnValue = F("St.-Anno-Höhe");
        break;
    }
    case 295513:
    {
        returnValue = F("St.-Anno-Str.");
        break;
    }
    case 295514:
    {
        returnValue = F("St.-Ansgar-Str.");
        break;
    }
    case 295515:
    {
        returnValue = F("St.-Anton-Str.");
        break;
    }
    case 295516:
    {
        returnValue = F("St.-Antoni-Str.");
        break;
    }
    case 295517:
    {
        returnValue = F("St.-Antonius-Gasse");
        break;
    }
    case 295518:
    {
        returnValue = F("St.-Antonius-Str.");
        break;
    }
    case 295519:
    {
        returnValue = F("St.-Antonius-Weg");
        break;
    }
    case 295520:
    {
        returnValue = F("St.-Arno-Weg");
        break;
    }
    case 295521:
    {
        returnValue = F("St.-Arsatius-Str.");
        break;
    }
    case 295522:
    {
        returnValue = F("St.-Augin-Str.");
        break;
    }
    case 295523:
    {
        returnValue = F("St.-Barbara");
        break;
    }
    case 295524:
    {
        returnValue = F("St.-Barbara-Kreisel");
        break;
    }
    case 295525:
    {
        returnValue = F("St.-Barbara-Platz");
        break;
    }
    case 295526:
    {
        returnValue = F("St.-Barbara-Ring");
        break;
    }
    case 295527:
    {
        returnValue = F("St.-Barbara-Str.");
        break;
    }
    case 295528:
    {
        returnValue = F("St.-Barbara-Weg");
        break;
    }
    case 295529:
    {
        returnValue = F("St.-Benedikt-Str.");
        break;
    }
    case 295530:
    {
        returnValue = F("St.-Bernardin-Str.");
        break;
    }
    case 295531:
    {
        returnValue = F("St.-Bernardus-Str.");
        break;
    }
    case 295532:
    {
        returnValue = F("St.-Bernhard-Str.");
        break;
    }
    case 295533:
    {
        returnValue = F("St.-Blasier-Weg");
        break;
    }
    case 295534:
    {
        returnValue = F("St.-Blasius-Str.");
        break;
    }
    case 295535:
    {
        returnValue = F("St.-Blasius-Weg");
        break;
    }
    case 295536:
    {
        returnValue = F("St.-Bonifatius-Str.");
        break;
    }
    case 295537:
    {
        returnValue = F("St.-Brevin-Ring");
        break;
    }
    case 295538:
    {
        returnValue = F("St.-Bruno-Str.");
        break;
    }
    case 295539:
    {
        returnValue = F("St.-Burkard-Str.");
        break;
    }
    case 295540:
    {
        returnValue = F("St.-Burkardus-Str.");
        break;
    }
    case 295541:
    {
        returnValue = F("St.-Burkhard-Str.");
        break;
    }
    case 295542:
    {
        returnValue = F("St.-Carolus-Weg");
        break;
    }
    case 295543:
    {
        returnValue = F("St.-Castor-Str.");
        break;
    }
    case 295544:
    {
        returnValue = F("St.-Christopherus-Platz");
        break;
    }
    case 295545:
    {
        returnValue = F("St.-Christophorus-Str.");
        break;
    }
    case 295546:
    {
        returnValue = F("St.-Clara-Str.");
        break;
    }
    case 295547:
    {
        returnValue = F("St.-Coloman-Str.");
        break;
    }
    case 295548:
    {
        returnValue = F("St.-Colomann-Str.");
        break;
    }
    case 295549:
    {
        returnValue = F("St.-Corneliusweg");
        break;
    }
    case 295550:
    {
        returnValue = F("St.-Cosmas-Str.");
        break;
    }
    case 295551:
    {
        returnValue = F("St.-Cyr-Allee");
        break;
    }
    case 295552:
    {
        returnValue = F("St.-Cyriak-Weg");
        break;
    }
    case 295553:
    {
        returnValue = F("St.-Cäcilia-Str.");
        break;
    }
    case 295554:
    {
        returnValue = F("St.-Damian-Str.");
        break;
    }
    case 295555:
    {
        returnValue = F("St.-Denis-d'Anjou-Str.");
        break;
    }
    case 295556:
    {
        returnValue = F("St.-Dionysius-Weg");
        break;
    }
    case 295557:
    {
        returnValue = F("St.-Dominikus-Str.");
        break;
    }
    case 295558:
    {
        returnValue = F("St.-Dominikus-Weg");
        break;
    }
    case 295559:
    {
        returnValue = F("St.-Donat-Str.");
        break;
    }
    case 295560:
    {
        returnValue = F("St.-Donatus-Str.");
        break;
    }
    case 295561:
    {
        returnValue = F("St.-Egidi-Str.");
        break;
    }
    case 295562:
    {
        returnValue = F("St.-Egilhard-Str.");
        break;
    }
    case 295563:
    {
        returnValue = F("St.-Egrève-Str.");
        break;
    }
    case 295564:
    {
        returnValue = F("St.-Eligiusstr.");
        break;
    }
    case 295565:
    {
        returnValue = F("St.-Elisabeth");
        break;
    }
    case 295566:
    {
        returnValue = F("St.-Elisabeth-Str.");
        break;
    }
    case 295567:
    {
        returnValue = F("St.-Elisabeth-Weg");
        break;
    }
    case 295568:
    {
        returnValue = F("St.-Elisabethen-Str.");
        break;
    }
    case 295569:
    {
        returnValue = F("St.-Elisabethen-Weg");
        break;
    }
    case 295570:
    {
        returnValue = F("St.-Elisabethenstr.");
        break;
    }
    case 295571:
    {
        returnValue = F("St.-Emmeram-Str.");
        break;
    }
    case 295572:
    {
        returnValue = F("St.-Emmeram-Weg");
        break;
    }
    case 295573:
    {
        returnValue = F("St.-Emmerams-Ring");
        break;
    }
    case 295574:
    {
        returnValue = F("St.-Emmeran-Str.");
        break;
    }
    case 295575:
    {
        returnValue = F("St.-Engelbert-Str.");
        break;
    }
    case 295576:
    {
        returnValue = F("St.-Erhard-Str.");
        break;
    }
    case 295577:
    {
        returnValue = F("St.-Fidelis-Str.");
        break;
    }
    case 295578:
    {
        returnValue = F("St.-Florian-Ring");
        break;
    }
    case 295579:
    {
        returnValue = F("St.-Florian-Str.");
        break;
    }
    case 295580:
    {
        returnValue = F("St.-Florian-Weg");
        break;
    }
    case 295581:
    {
        returnValue = F("St.-Florians-Weg");
        break;
    }
    case 295582:
    {
        returnValue = F("St.-Floriansweg");
        break;
    }
    case 295583:
    {
        returnValue = F("St.-Florinstr.");
        break;
    }
    case 295584:
    {
        returnValue = F("St.-Flour-Str.");
        break;
    }
    case 295585:
    {
        returnValue = F("St.-Franziskus-Str.");
        break;
    }
    case 295586:
    {
        returnValue = F("St.-Gabriel-Str.");
        break;
    }
    case 295587:
    {
        returnValue = F("St.-Gabriel-Weg");
        break;
    }
    case 295588:
    {
        returnValue = F("St.-Gallen-Weg");
        break;
    }
    case 295589:
    {
        returnValue = F("St.-Gallener-Ring");
        break;
    }
    case 295590:
    {
        returnValue = F("St.-Gallener-Weg");
        break;
    }
    case 295591:
    {
        returnValue = F("St.-Galler-Str.");
        break;
    }
    case 295592:
    {
        returnValue = F("St.-Gallus-Ring");
        break;
    }
    case 295593:
    {
        returnValue = F("St.-Gallus-Str.");
        break;
    }
    case 295594:
    {
        returnValue = F("St.-Gallus-Weg");
        break;
    }
    case 295595:
    {
        returnValue = F("St.-Gallusweg");
        break;
    }
    case 295596:
    {
        returnValue = F("St.-Gangolf-Str.");
        break;
    }
    case 295597:
    {
        returnValue = F("St.-Gebhard-Str.");
        break;
    }
    case 295598:
    {
        returnValue = F("St.-Gebhard-Weg");
        break;
    }
    case 295599:
    {
        returnValue = F("St.-Georg-Kirchplatz");
        break;
    }
    case 295600:
    {
        returnValue = F("St.-Georg-Platz");
        break;
    }
    case 295601:
    {
        returnValue = F("St.-Georg-Ring");
        break;
    }
    case 295602:
    {
        returnValue = F("St.-Georg-Str.");
        break;
    }
    case 295603:
    {
        returnValue = F("St.-Georg-Weg");
        break;
    }
    case 295604:
    {
        returnValue = F("St.-Georgen-Gasse");
        break;
    }
    case 295605:
    {
        returnValue = F("St.-Georgen-Kirchhof");
        break;
    }
    case 295606:
    {
        returnValue = F("St.-Georgen-Platz");
        break;
    }
    case 295607:
    {
        returnValue = F("St.-Georgen-Str.");
        break;
    }
    case 295608:
    {
        returnValue = F("St.-Georgen-Weg");
        break;
    }
    case 295609:
    {
        returnValue = F("St.-Georgs-Platz");
        break;
    }
    case 295610:
    {
        returnValue = F("St.-Georgs-Siedlung");
        break;
    }
    case 295611:
    {
        returnValue = F("St.-Georgs-Str.");
        break;
    }
    case 295612:
    {
        returnValue = F("St.-Georgs-Weg");
        break;
    }
    case 295613:
    {
        returnValue = F("St.-Georgstr.");
        break;
    }
    case 295614:
    {
        returnValue = F("St.-Georgsweg");
        break;
    }
    case 295615:
    {
        returnValue = F("St.-Gereon-Str.");
        break;
    }
    case 295616:
    {
        returnValue = F("St.-German-Str.");
        break;
    }
    case 295617:
    {
        returnValue = F("St.-Gertraud-Str.");
        break;
    }
    case 295618:
    {
        returnValue = F("St.-Gertrud-Str.");
        break;
    }
    case 295619:
    {
        returnValue = F("St.-Gilgener-Str.");
        break;
    }
    case 295620:
    {
        returnValue = F("St.-Godehard-Str.");
        break;
    }
    case 295621:
    {
        returnValue = F("St.-Godehard-Weg");
        break;
    }
    case 295622:
    {
        returnValue = F("St.-Gordianus-Str.");
        break;
    }
    case 295623:
    {
        returnValue = F("St.-Gottfried-Str.");
        break;
    }
    case 295624:
    {
        returnValue = F("St.-Gregor-Str.");
        break;
    }
    case 295625:
    {
        returnValue = F("St.-Guido-Stifts-Platz");
        break;
    }
    case 295626:
    {
        returnValue = F("St.-Guido-Str.");
        break;
    }
    case 295627:
    {
        returnValue = F("St.-Gundekar-Str.");
        break;
    }
    case 295628:
    {
        returnValue = F("St.-Gunterweg");
        break;
    }
    case 295629:
    {
        returnValue = F("St.-Gunther-Str.");
        break;
    }
    case 295630:
    {
        returnValue = F("St.-Gunther-Weg");
        break;
    }
    case 295631:
    {
        returnValue = F("St.-Hedwig-Str.");
        break;
    }
    case 295632:
    {
        returnValue = F("St.-Hedwigs-Eck");
        break;
    }
    case 295633:
    {
        returnValue = F("St.-Heinrich-Str.");
        break;
    }
    case 295634:
    {
        returnValue = F("St.-Herblainer Str.");
        break;
    }
    case 295635:
    {
        returnValue = F("St.-Hildegard-Str.");
        break;
    }
    case 295636:
    {
        returnValue = F("St.-Hildegard-Weg");
        break;
    }
    case 295637:
    {
        returnValue = F("St.-Hubert-Str.");
        break;
    }
    case 295638:
    {
        returnValue = F("St.-Hubertus-Str.");
        break;
    }
    case 295639:
    {
        returnValue = F("St.-Hubertus-Weg");
        break;
    }
    case 295640:
    {
        returnValue = F("St.-Ida-Str.");
        break;
    }
    case 295641:
    {
        returnValue = F("St.-Ingbert-Str.");
        break;
    }
    case 295642:
    {
        returnValue = F("St.-Ingberter-Weg");
        break;
    }
    case 295643:
    {
        returnValue = F("St.-Irminen-Str.");
        break;
    }
    case 295644:
    {
        returnValue = F("St.-Isidor-Ring");
        break;
    }
    case 295645:
    {
        returnValue = F("St.-Jacobi-Weg");
        break;
    }
    case 295646:
    {
        returnValue = F("St.-Jakob-Str.");
        break;
    }
    case 295647:
    {
        returnValue = F("St.-Jakob-Weg");
        break;
    }
    case 295648:
    {
        returnValue = F("St.-Jakobus-Str.");
        break;
    }
    case 295649:
    {
        returnValue = F("St.-Jakobus-Weg");
        break;
    }
    case 295650:
    {
        returnValue = F("St.-James-Str.");
        break;
    }
    case 295651:
    {
        returnValue = F("St.-Jean-Str.");
        break;
    }
    case 295652:
    {
        returnValue = F("St.-Joachim-Weg");
        break;
    }
    case 295653:
    {
        returnValue = F("St.-Jobst-Str.");
        break;
    }
    case 295654:
    {
        returnValue = F("St.-Jodok-Str.");
        break;
    }
    case 295655:
    {
        returnValue = F("St.-Jodokus-Weg");
        break;
    }
    case 295656:
    {
        returnValue = F("St.-Johann-Str.");
        break;
    }
    case 295657:
    {
        returnValue = F("St.-Johann-Weg");
        break;
    }
    case 295658:
    {
        returnValue = F("St.-Johanner-Weg");
        break;
    }
    case 295659:
    {
        returnValue = F("St.-Johannes-Platz");
        break;
    }
    case 295660:
    {
        returnValue = F("St.-Johannes-Str.");
        break;
    }
    case 295661:
    {
        returnValue = F("St.-Johannes-Weg");
        break;
    }
    case 295662:
    {
        returnValue = F("St.-Johannesgasse");
        break;
    }
    case 295663:
    {
        returnValue = F("St.-Johannis-Gasse");
        break;
    }
    case 295664:
    {
        returnValue = F("St.-Johannis-Str.");
        break;
    }
    case 295665:
    {
        returnValue = F("St.-Johannis-Weg");
        break;
    }
    case 295666:
    {
        returnValue = F("St.-Johanniskoog-Ring");
        break;
    }
    case 295667:
    {
        returnValue = F("St.-Johannser-Str.");
        break;
    }
    case 295668:
    {
        returnValue = F("St.-Josef-Platz");
        break;
    }
    case 295669:
    {
        returnValue = F("St.-Josef-Siedlung");
        break;
    }
    case 295670:
    {
        returnValue = F("St.-Josef-Str.");
        break;
    }
    case 295671:
    {
        returnValue = F("St.-Josef-Weg");
        break;
    }
    case 295672:
    {
        returnValue = F("St.-Josefs-Str.");
        break;
    }
    case 295673:
    {
        returnValue = F("St.-Josefsweiler");
        break;
    }
    case 295674:
    {
        returnValue = F("St.-Joseph-Str.");
        break;
    }
    case 295675:
    {
        returnValue = F("St.-Josephs-Weg");
        break;
    }
    case 295676:
    {
        returnValue = F("St.-Just-la-Pendue-Platz");
        break;
    }
    case 295677:
    {
        returnValue = F("St.-Justina-Weg");
        break;
    }
    case 295678:
    {
        returnValue = F("St.-Jörgen-Gäßle");
        break;
    }
    case 295679:
    {
        returnValue = F("St.-Jürgen-Ring");
        break;
    }
    case 295680:
    {
        returnValue = F("St.-Jürgen-Str.");
        break;
    }
    case 295681:
    {
        returnValue = F("St.-Jürgen-Weg");
        break;
    }
    case 295682:
    {
        returnValue = F("St.-Kastulus-Str.");
        break;
    }
    case 295683:
    {
        returnValue = F("St.-Katharina-Gasse");
        break;
    }
    case 295684:
    {
        returnValue = F("St.-Katharina-Platz");
        break;
    }
    case 295685:
    {
        returnValue = F("St.-Katharina-Str.");
        break;
    }
    case 295686:
    {
        returnValue = F("St.-Katharina-Weg");
        break;
    }
    case 295687:
    {
        returnValue = F("St.-Katharinen-Weg");
        break;
    }
    case 295688:
    {
        returnValue = F("St.-Kilian-Str.");
        break;
    }
    case 295689:
    {
        returnValue = F("St.-Kilians-Platz");
        break;
    }
    case 295690:
    {
        returnValue = F("St.-Kilians-Weg");
        break;
    }
    case 295691:
    {
        returnValue = F("St.-Klara-Str.");
        break;
    }
    case 295692:
    {
        returnValue = F("St.-Klara-Weg");
        break;
    }
    case 295693:
    {
        returnValue = F("St.-Koloman-Str.");
        break;
    }
    case 295694:
    {
        returnValue = F("St.-Koloman-Weg");
        break;
    }
    case 295695:
    {
        returnValue = F("St.-Kolumban-Str.");
        break;
    }
    case 295696:
    {
        returnValue = F("St.-Konrad-Allee");
        break;
    }
    case 295697:
    {
        returnValue = F("St.-Konrad-Str.");
        break;
    }
    case 295698:
    {
        returnValue = F("St.-Konrad-Weg");
        break;
    }
    case 295699:
    {
        returnValue = F("St.-Korbinian-Str.");
        break;
    }
    case 295700:
    {
        returnValue = F("St.-Korbinian-Weg");
        break;
    }
    case 295701:
    {
        returnValue = F("St.-Kunigunden-Str.");
        break;
    }
    case 295702:
    {
        returnValue = F("St.-Lambertus-Kirchplatz");
        break;
    }
    case 295703:
    {
        returnValue = F("St.-Lambertus-Str.");
        break;
    }
    case 295704:
    {
        returnValue = F("St.-Lantpert-Str.");
        break;
    }
    case 295705:
    {
        returnValue = F("St.-Laurentius-Str.");
        break;
    }
    case 295706:
    {
        returnValue = F("St.-Laurentius-Weg");
        break;
    }
    case 295707:
    {
        returnValue = F("St.-Leoner Str.");
        break;
    }
    case 295708:
    {
        returnValue = F("St.-Leonhard-Gasse");
        break;
    }
    case 295709:
    {
        returnValue = F("St.-Leonhard-Str.");
        break;
    }
    case 295710:
    {
        returnValue = F("St.-Leonhard-Weg");
        break;
    }
    case 295711:
    {
        returnValue = F("St.-Leonhardi-Str.");
        break;
    }
    case 295712:
    {
        returnValue = F("St.-Leonhards-Platz");
        break;
    }
    case 295713:
    {
        returnValue = F("St.-Liborius-Str.");
        break;
    }
    case 295714:
    {
        returnValue = F("St.-Lioba-Platz");
        break;
    }
    case 295715:
    {
        returnValue = F("St.-Lioba-Str.");
        break;
    }
    case 295716:
    {
        returnValue = F("St.-Lorenz-Str.");
        break;
    }
    case 295717:
    {
        returnValue = F("St.-Lorenzer-Str.");
        break;
    }
    case 295718:
    {
        returnValue = F("St.-Loup-Str.");
        break;
    }
    case 295719:
    {
        returnValue = F("St.-Lucia-Str.");
        break;
    }
    case 295720:
    {
        returnValue = F("St.-Lucia-Weg");
        break;
    }
    case 295721:
    {
        returnValue = F("St.-Ludger-Str.");
        break;
    }
    case 295722:
    {
        returnValue = F("St.-Ludgerus-Weg");
        break;
    }
    case 295723:
    {
        returnValue = F("St.-Ludwig-Str.");
        break;
    }
    case 295724:
    {
        returnValue = F("St.-Lukas-Weg");
        break;
    }
    case 295725:
    {
        returnValue = F("St.-Luzia-Weg");
        break;
    }
    case 295726:
    {
        returnValue = F("St.-Magarethen-Str.");
        break;
    }
    case 295727:
    {
        returnValue = F("St.-Magdalena-Str.");
        break;
    }
    case 295728:
    {
        returnValue = F("St.-Magdalena-Weg");
        break;
    }
    case 295729:
    {
        returnValue = F("St.-Magdalenen-Str.");
        break;
    }
    case 295730:
    {
        returnValue = F("St.-Magnus-Str.");
        break;
    }
    case 295731:
    {
        returnValue = F("St.-Mang-Str.");
        break;
    }
    case 295732:
    {
        returnValue = F("St.-Mang-Weg");
        break;
    }
    case 295733:
    {
        returnValue = F("St.-Margaret-Str.");
        break;
    }
    case 295734:
    {
        returnValue = F("St.-Margareta-Gasse");
        break;
    }
    case 295735:
    {
        returnValue = F("St.-Margareta-Str.");
        break;
    }
    case 295736:
    {
        returnValue = F("St.-Margaretaweg");
        break;
    }
    case 295737:
    {
        returnValue = F("St.-Margareten-Weg");
        break;
    }
    case 295738:
    {
        returnValue = F("St.-Margareth-Str.");
        break;
    }
    case 295739:
    {
        returnValue = F("St.-Margaretha-Str.");
        break;
    }
    case 295740:
    {
        returnValue = F("St.-Margaretha-Weg");
        break;
    }
    case 295741:
    {
        returnValue = F("St.-Margarethen-Str.");
        break;
    }
    case 295742:
    {
        returnValue = F("St.-Margarethen-Weg");
        break;
    }
    case 295743:
    {
        returnValue = F("St.-Marianne-Weg");
        break;
    }
    case 295744:
    {
        returnValue = F("St.-Marien-Kirchhof");
        break;
    }
    case 295745:
    {
        returnValue = F("St.-Marien-Kirchplatz");
        break;
    }
    case 295746:
    {
        returnValue = F("St.-Marien-Weg");
        break;
    }
    case 295747:
    {
        returnValue = F("St.-Mariä-Schnee-Weg");
        break;
    }
    case 295748:
    {
        returnValue = F("St.-Markus-Str.");
        break;
    }
    case 295749:
    {
        returnValue = F("St.-Martin-Allee");
        break;
    }
    case 295750:
    {
        returnValue = F("St.-Martin-Platz");
        break;
    }
    case 295751:
    {
        returnValue = F("St.-Martin-Ring");
        break;
    }
    case 295752:
    {
        returnValue = F("St.-Martin-Siedlung");
        break;
    }
    case 295753:
    {
        returnValue = F("St.-Martin-Steg");
        break;
    }
    case 295754:
    {
        returnValue = F("St.-Martin-Str.");
        break;
    }
    case 295755:
    {
        returnValue = F("St.-Martin-Weg");
        break;
    }
    case 295756:
    {
        returnValue = F("St.-Martin-de-Crau-Platz");
        break;
    }
    case 295757:
    {
        returnValue = F("St.-Martiner-Str.");
        break;
    }
    case 295758:
    {
        returnValue = F("St.-Martins-Platz");
        break;
    }
    case 295759:
    {
        returnValue = F("St.-Martins-Str.");
        break;
    }
    case 295760:
    {
        returnValue = F("St.-Martins-Weg");
        break;
    }
    case 295761:
    {
        returnValue = F("St.-Martinsweg");
        break;
    }
    case 295762:
    {
        returnValue = F("St.-Martinus-Str.");
        break;
    }
    case 295763:
    {
        returnValue = F("St.-Maternus-Eck");
        break;
    }
    case 295764:
    {
        returnValue = F("St.-Maternus-Str.");
        break;
    }
    case 295765:
    {
        returnValue = F("St.-Matthias-Str.");
        break;
    }
    case 295766:
    {
        returnValue = F("St.-Maurice-Platz");
        break;
    }
    case 295767:
    {
        returnValue = F("St.-Mauritius-Str.");
        break;
    }
    case 295768:
    {
        returnValue = F("St.-Mauritius-Weg");
        break;
    }
    case 295769:
    {
        returnValue = F("St.-Mechtildis-Str.");
        break;
    }
    case 295770:
    {
        returnValue = F("St.-Meinrad-Str.");
        break;
    }
    case 295771:
    {
        returnValue = F("St.-Michael-Ring");
        break;
    }
    case 295772:
    {
        returnValue = F("St.-Michael-Siedlung");
        break;
    }
    case 295773:
    {
        returnValue = F("St.-Michael-Str.");
        break;
    }
    case 295774:
    {
        returnValue = F("St.-Michael-Weg");
        break;
    }
    case 295775:
    {
        returnValue = F("St.-Michaelis-Weg");
        break;
    }
    case 295776:
    {
        returnValue = F("St.-Michaels-Hof");
        break;
    }
    case 295777:
    {
        returnValue = F("St.-Michaels-Platz");
        break;
    }
    case 295778:
    {
        returnValue = F("St.-Michaels-Str.");
        break;
    }
    case 295779:
    {
        returnValue = F("St.-Michaels-Weg");
        break;
    }
    case 295780:
    {
        returnValue = F("St.-Michaelstr.");
        break;
    }
    case 295781:
    {
        returnValue = F("St.-Moritz-Str.");
        break;
    }
    case 295782:
    {
        returnValue = F("St.-Muffert-Weg");
        break;
    }
    case 295783:
    {
        returnValue = F("St.-Nazarius-Str.");
        break;
    }
    case 295784:
    {
        returnValue = F("St.-Nepomuk-Str.");
        break;
    }
    case 295785:
    {
        returnValue = F("St.-Nepomuk-Weg");
        break;
    }
    case 295786:
    {
        returnValue = F("St.-Nicola-Str.");
        break;
    }
    case 295787:
    {
        returnValue = F("St.-Nikola-Str.");
        break;
    }
    case 295788:
    {
        returnValue = F("St.-Nikolai-Kirchhof");
        break;
    }
    case 295789:
    {
        returnValue = F("St.-Nikolai-Str.");
        break;
    }
    case 295790:
    {
        returnValue = F("St.-Nikolai-Weg");
        break;
    }
    case 295791:
    {
        returnValue = F("St.-Nikolaus-Gasse");
        break;
    }
    case 295792:
    {
        returnValue = F("St.-Nikolaus-Platz");
        break;
    }
    case 295793:
    {
        returnValue = F("St.-Nikolaus-Ring");
        break;
    }
    case 295794:
    {
        returnValue = F("St.-Nikolaus-Str.");
        break;
    }
    case 295795:
    {
        returnValue = F("St.-Nikolaus-Weg");
        break;
    }
    case 295796:
    {
        returnValue = F("St.-Norbert-Str.");
        break;
    }
    case 295797:
    {
        returnValue = F("St.-Norbertus-Str.");
        break;
    }
    case 295798:
    {
        returnValue = F("St.-Notker-Str.");
        break;
    }
    case 295799:
    {
        returnValue = F("St.-Oswald-Str.");
        break;
    }
    case 295800:
    {
        returnValue = F("St.-Othmar-Str.");
        break;
    }
    case 295801:
    {
        returnValue = F("St.-Otmar-Str.");
        break;
    }
    case 295802:
    {
        returnValue = F("St.-Ottilien-Platz");
        break;
    }
    case 295803:
    {
        returnValue = F("St.-Ottilien-Str.");
        break;
    }
    case 295804:
    {
        returnValue = F("St.-Ottilier-Str.");
        break;
    }
    case 295805:
    {
        returnValue = F("St.-Ottmar-Str.");
        break;
    }
    case 295806:
    {
        returnValue = F("St.-Otto-Str.");
        break;
    }
    case 295807:
    {
        returnValue = F("St.-Pankratius-Kirchplatz");
        break;
    }
    case 295808:
    {
        returnValue = F("St.-Pankratius-Weg");
        break;
    }
    case 295809:
    {
        returnValue = F("St.-Pankraz-Str.");
        break;
    }
    case 295810:
    {
        returnValue = F("St.-Paul-Str.");
        break;
    }
    case 295811:
    {
        returnValue = F("St.-Pauler-Str.");
        break;
    }
    case 295812:
    {
        returnValue = F("St.-Paulus-Str.");
        break;
    }
    case 295813:
    {
        returnValue = F("St.-Peray-Str.");
        break;
    }
    case 295814:
    {
        returnValue = F("St.-Peter-Ording-Str.");
        break;
    }
    case 295815:
    {
        returnValue = F("St.-Peter-Str.");
        break;
    }
    case 295816:
    {
        returnValue = F("St.-Peter-Weg");
        break;
    }
    case 295817:
    {
        returnValue = F("St.-Petri-Str.");
        break;
    }
    case 295818:
    {
        returnValue = F("St.-Pierre-Platz");
        break;
    }
    case 295819:
    {
        returnValue = F("St.-Pius-Brücke");
        break;
    }
    case 295820:
    {
        returnValue = F("St.-Pius-Str.");
        break;
    }
    case 295821:
    {
        returnValue = F("St.-Prosper-Str.");
        break;
    }
    case 295822:
    {
        returnValue = F("St.-Quentin-Fallavier-Platz");
        break;
    }
    case 295823:
    {
        returnValue = F("St.-Quentin-Fallavier-Str.");
        break;
    }
    case 295824:
    {
        returnValue = F("St.-Quirin-Str.");
        break;
    }
    case 295825:
    {
        returnValue = F("St.-Quirinstr.");
        break;
    }
    case 295826:
    {
        returnValue = F("St.-Quirinus-Str.");
        break;
    }
    case 295827:
    {
        returnValue = F("St.-Radegundis-Str.");
        break;
    }
    case 295828:
    {
        returnValue = F("St.-Raphael-Str.");
        break;
    }
    case 295829:
    {
        returnValue = F("St.-Raphaels-Weg");
        break;
    }
    case 295830:
    {
        returnValue = F("St.-Raphaelsweg");
        break;
    }
    case 295831:
    {
        returnValue = F("St.-Rasso-Weg");
        break;
    }
    case 295832:
    {
        returnValue = F("St.-Remigius-Str.");
        break;
    }
    case 295833:
    {
        returnValue = F("St.-Rochus-Siedlung");
        break;
    }
    case 295834:
    {
        returnValue = F("St.-Rochus-Str.");
        break;
    }
    case 295835:
    {
        returnValue = F("St.-Rochus-Weg");
        break;
    }
    case 295836:
    {
        returnValue = F("St.-Rochusweiler");
        break;
    }
    case 295837:
    {
        returnValue = F("St.-Rupert-Str.");
        break;
    }
    case 295838:
    {
        returnValue = F("St.-Rupertus-Str.");
        break;
    }
    case 295839:
    {
        returnValue = F("St.-Rupperti-Str.");
        break;
    }
    case 295840:
    {
        returnValue = F("St.-Rémy-Brücke");
        break;
    }
    case 295841:
    {
        returnValue = F("St.-Rémy-Platz");
        break;
    }
    case 295842:
    {
        returnValue = F("St.-Sebastian-Str.");
        break;
    }
    case 295843:
    {
        returnValue = F("St.-Sebastian-Weg");
        break;
    }
    case 295844:
    {
        returnValue = F("St.-Sebastians-Str.");
        break;
    }
    case 295845:
    {
        returnValue = F("St.-Sebastianus-Str.");
        break;
    }
    case 295846:
    {
        returnValue = F("St.-Simpert-Str.");
        break;
    }
    case 295847:
    {
        returnValue = F("St.-Sixtus-Str.");
        break;
    }
    case 295848:
    {
        returnValue = F("St.-Stefan-Str.");
        break;
    }
    case 295849:
    {
        returnValue = F("St.-Stefani-Str.");
        break;
    }
    case 295850:
    {
        returnValue = F("St.-Stephan-Platz");
        break;
    }
    case 295851:
    {
        returnValue = F("St.-Stephan-Str.");
        break;
    }
    case 295852:
    {
        returnValue = F("St.-Stephan-Weg");
        break;
    }
    case 295853:
    {
        returnValue = F("St.-Stephans-Platz");
        break;
    }
    case 295854:
    {
        returnValue = F("St.-Stephans-Weg");
        break;
    }
    case 295855:
    {
        returnValue = F("St.-Stephanus-Str.");
        break;
    }
    case 295856:
    {
        returnValue = F("St.-Stephanus-Weg");
        break;
    }
    case 295857:
    {
        returnValue = F("St.-Stevens-Woluwe-Platz");
        break;
    }
    case 295858:
    {
        returnValue = F("St.-Sylvester-Str.");
        break;
    }
    case 295859:
    {
        returnValue = F("St.-Thekla-Weg");
        break;
    }
    case 295860:
    {
        returnValue = F("St.-Theobald-Str.");
        break;
    }
    case 295861:
    {
        returnValue = F("St.-Thomas-Str.");
        break;
    }
    case 295862:
    {
        returnValue = F("St.-Thomas-Weg");
        break;
    }
    case 295863:
    {
        returnValue = F("St.-Thomaser-Hohl");
        break;
    }
    case 295864:
    {
        returnValue = F("St.-Trudpert-Str.");
        break;
    }
    case 295865:
    {
        returnValue = F("St.-Töniser-Str.");
        break;
    }
    case 295866:
    {
        returnValue = F("St.-Ulrich-Ring");
        break;
    }
    case 295867:
    {
        returnValue = F("St.-Ulrich-Str.");
        break;
    }
    case 295868:
    {
        returnValue = F("St.-Ulrich-Weg");
        break;
    }
    case 295869:
    {
        returnValue = F("St.-Ulrichs-Ring");
        break;
    }
    case 295870:
    {
        returnValue = F("St.-Ulrichs-Weg");
        break;
    }
    case 295871:
    {
        returnValue = F("St.-Ulrichsberg");
        break;
    }
    case 295872:
    {
        returnValue = F("St.-Ulrichweg");
        break;
    }
    case 295873:
    {
        returnValue = F("St.-Urban-Str.");
        break;
    }
    case 295874:
    {
        returnValue = F("St.-Urban-Weg");
        break;
    }
    case 295875:
    {
        returnValue = F("St.-Urbans-Weg");
        break;
    }
    case 295876:
    {
        returnValue = F("St.-Ursula-Str.");
        break;
    }
    case 295877:
    {
        returnValue = F("St.-Ursula-Weg");
        break;
    }
    case 295878:
    {
        returnValue = F("St.-Valentin-Str.");
        break;
    }
    case 295879:
    {
        returnValue = F("St.-Valentins-Weg");
        break;
    }
    case 295880:
    {
        returnValue = F("St.-Veit-Gasse");
        break;
    }
    case 295881:
    {
        returnValue = F("St.-Veit-Steig");
        break;
    }
    case 295882:
    {
        returnValue = F("St.-Veit-Str.");
        break;
    }
    case 295883:
    {
        returnValue = F("St.-Veith-Str.");
        break;
    }
    case 295884:
    {
        returnValue = F("St.-Veits-Gasse");
        break;
    }
    case 295885:
    {
        returnValue = F("St.-Vincent-Ring");
        break;
    }
    case 295886:
    {
        returnValue = F("St.-Vincenz-Str.");
        break;
    }
    case 295887:
    {
        returnValue = F("St.-Vinzenz-Pallotti-Weg");
        break;
    }
    case 295888:
    {
        returnValue = F("St.-Vinzenz-Platz");
        break;
    }
    case 295889:
    {
        returnValue = F("St.-Vinzenz-Str.");
        break;
    }
    case 295890:
    {
        returnValue = F("St.-Viter-Str.");
        break;
    }
    case 295891:
    {
        returnValue = F("St.-Vither-Str.");
        break;
    }
    case 295892:
    {
        returnValue = F("St.-Vitus-Platz");
        break;
    }
    case 295893:
    {
        returnValue = F("St.-Vitus-Str.");
        break;
    }
    case 295894:
    {
        returnValue = F("St.-Vitus-Weg");
        break;
    }
    case 295895:
    {
        returnValue = F("St.-Walburg-Str.");
        break;
    }
    case 295896:
    {
        returnValue = F("St.-Wendel-Str.");
        break;
    }
    case 295897:
    {
        returnValue = F("St.-Wendelin-Str.");
        break;
    }
    case 295898:
    {
        returnValue = F("St.-Wendelinus-Str.");
        break;
    }
    case 295899:
    {
        returnValue = F("St.-Wenzeslaus-Weg");
        break;
    }
    case 295900:
    {
        returnValue = F("St.-Wigbert-Str.");
        break;
    }
    case 295901:
    {
        returnValue = F("St.-Willibald-Str.");
        break;
    }
    case 295902:
    {
        returnValue = F("St.-Willibalds-Weg");
        break;
    }
    case 295903:
    {
        returnValue = F("St.-Wolfgang-Blick");
        break;
    }
    case 295904:
    {
        returnValue = F("St.-Wolfgang-Str.");
        break;
    }
    case 295905:
    {
        returnValue = F("St.-Wolfgang-Weg");
        break;
    }
    case 295906:
    {
        returnValue = F("St.-Wolfgangs-Gasse");
        break;
    }
    case 295907:
    {
        returnValue = F("St.-Wolfgangs-Weg");
        break;
    }
    case 295908:
    {
        returnValue = F("St.-Wolfhelm-Str.");
        break;
    }
    case 295909:
    {
        returnValue = F("St.-Ägidius-Platz");
        break;
    }
    case 295910:
    {
        returnValue = F("St.-Ägidius-Str.");
        break;
    }
    case 295911:
    {
        returnValue = F("St.-Ägidius-Weg");
        break;
    }
    case 295912:
    {
        returnValue = F("St.Aignan-Str.");
        break;
    }
    case 295913:
    {
        returnValue = F("St.Alban");
        break;
    }
    case 295914:
    {
        returnValue = F("St.Andreas-Str.");
        break;
    }
    case 295915:
    {
        returnValue = F("St.Annastr.");
        break;
    }
    case 295916:
    {
        returnValue = F("St.Antoniusstr.");
        break;
    }
    case 295917:
    {
        returnValue = F("St.Avolder Str.");
        break;
    }
    case 295918:
    {
        returnValue = F("St.Barbara-Str.");
        break;
    }
    case 295919:
    {
        returnValue = F("St.Barbarastr.");
        break;
    }
    case 295920:
    {
        returnValue = F("St.Blasier Str.");
        break;
    }
    case 295921:
    {
        returnValue = F("St.Castor Str.");
        break;
    }
    case 295922:
    {
        returnValue = F("St.Floriansweg");
        break;
    }
    case 295923:
    {
        returnValue = F("St.Gallenstr.");
        break;
    }
    case 295924:
    {
        returnValue = F("St.Georg-Str.");
        break;
    }
    case 295925:
    {
        returnValue = F("St.Georgenhausen");
        break;
    }
    case 295926:
    {
        returnValue = F("St.Huberter Str.");
        break;
    }
    case 295927:
    {
        returnValue = F("St.Ingberter Flurstr.");
        break;
    }
    case 295928:
    {
        returnValue = F("St.Ingberter Str.");
        break;
    }
    case 295929:
    {
        returnValue = F("St.Johannisbreite");
        break;
    }
    case 295930:
    {
        returnValue = F("St.Jordanusstr.");
        break;
    }
    case 295931:
    {
        returnValue = F("St.Kathariner Weg");
        break;
    }
    case 295932:
    {
        returnValue = F("St.Kilian-Str.");
        break;
    }
    case 295933:
    {
        returnValue = F("St.Klara-Platz");
        break;
    }
    case 295934:
    {
        returnValue = F("St.Laurentiusstr.");
        break;
    }
    case 295935:
    {
        returnValue = F("St.Lucia-Str.");
        break;
    }
    case 295936:
    {
        returnValue = F("St.Margaretenstr.");
        break;
    }
    case 295937:
    {
        returnValue = F("St.Martin-Str.");
        break;
    }
    case 295938:
    {
        returnValue = F("St.Martins-Platz");
        break;
    }
    case 295939:
    {
        returnValue = F("St.Michael-Str.");
        break;
    }
    case 295940:
    {
        returnValue = F("St.Michaelsstr.");
        break;
    }
    case 295941:
    {
        returnValue = F("St.Nazairer Allee");
        break;
    }
    case 295942:
    {
        returnValue = F("St.Nikolauser Str.");
        break;
    }
    case 295943:
    {
        returnValue = F("St.Peter Allee");
        break;
    }
    case 295944:
    {
        returnValue = F("St.Peterskirchstr.");
        break;
    }
    case 295945:
    {
        returnValue = F("St.Petri Platz");
        break;
    }
    case 295946:
    {
        returnValue = F("St.Sebastianstr.");
        break;
    }
    case 295947:
    {
        returnValue = F("St.Stephan-Str.");
        break;
    }
    case 295948:
    {
        returnValue = F("St.Töniser Str.");
        break;
    }
    case 295949:
    {
        returnValue = F("St.Ulrich");
        break;
    }
    case 295950:
    {
        returnValue = F("St.Ulrich- und Konradsplatz");
        break;
    }
    case 295951:
    {
        returnValue = F("St.Vallier Str.");
        break;
    }
    case 295952:
    {
        returnValue = F("St.Wendeler Str.");
        break;
    }
    case 295953:
    {
        returnValue = F("St.Wolfgang Weg");
        break;
    }
    case 295954:
    {
        returnValue = F("St2049");
        break;
    }
    case 295955:
    {
        returnValue = F("St2132");
        break;
    }
    case 295956:
    {
        returnValue = F("St2305");
        break;
    }
    case 295957:
    {
        returnValue = F("St2381");
        break;
    }
    case 295958:
    {
        returnValue = F("St2436");
        break;
    }
    case 295959:
    {
        returnValue = F("StOÜPl Pfullendorf");
        break;
    }
    case 295960:
    {
        returnValue = F("StOÜbPl Pfullendorf");
        break;
    }
    case 295961:
    {
        returnValue = F("Staab Schneise");
        break;
    }
    case 295962:
    {
        returnValue = F("Staadorfer Weg");
        break;
    }
    case 295963:
    {
        returnValue = F("Staadt");
        break;
    }
    case 295964:
    {
        returnValue = F("Staadter Weg");
        break;
    }
    case 295965:
    {
        returnValue = F("Staadterweg");
        break;
    }
    case 295966:
    {
        returnValue = F("Staadäckerweg");
        break;
    }
    case 295967:
    {
        returnValue = F("Staagweg");
        break;
    }
    case 295968:
    {
        returnValue = F("Staakener Heuweg");
        break;
    }
    case 295969:
    {
        returnValue = F("Staakener Str.");
        break;
    }
    case 295970:
    {
        returnValue = F("Staakener Weg");
        break;
    }
    case 295971:
    {
        returnValue = F("Staakensweg");
        break;
    }
    case 295972:
    {
        returnValue = F("Staakenweg");
        break;
    }
    case 295973:
    {
        returnValue = F("Staakower Str.");
        break;
    }
    case 295974:
    {
        returnValue = F("Staarenbergstr.");
        break;
    }
    case 295975:
    {
        returnValue = F("Staarenhöhe");
        break;
    }
    case 295976:
    {
        returnValue = F("Staatliche Grundschule \"Ludwig Bechstein");
        break;
    }
    case 295977:
    {
        returnValue = F("Staatliche Lehr- und Versuchsanstalt für Wein- und Obstbau Weinsberg");
        break;
    }
    case 295978:
    {
        returnValue = F("Staatsbahnhofstr.");
        break;
    }
    case 295979:
    {
        returnValue = F("Staatser Dorfstr.");
        break;
    }
    case 295980:
    {
        returnValue = F("Staatser Siedlung");
        break;
    }
    case 295981:
    {
        returnValue = F("Staatshaldenweg");
        break;
    }
    case 295982:
    {
        returnValue = F("Staatshausen");
        break;
    }
    case 295983:
    {
        returnValue = F("Staatshäuser Str.");
        break;
    }
    case 295984:
    {
        returnValue = F("Staatshäuser Weg");
        break;
    }
    case 295985:
    {
        returnValue = F("Staatskopfweg");
        break;
    }
    case 295986:
    {
        returnValue = F("Staatspark Fürstenlager");
        break;
    }
    case 295987:
    {
        returnValue = F("Staatsrat-Lorenz-Str.");
        break;
    }
    case 295988:
    {
        returnValue = F("Staatsrat-Schwamb-Str.");
        break;
    }
    case 295989:
    {
        returnValue = F("Staatsstr.");
        break;
    }
    case 295990:
    {
        returnValue = F("Staatswaldweg");
        break;
    }
    case 295991:
    {
        returnValue = F("Staatsweg");
        break;
    }
    case 295992:
    {
        returnValue = F("Stabacheck");
        break;
    }
    case 295993:
    {
        returnValue = F("Stabelsteiner Weg");
        break;
    }
    case 295994:
    {
        returnValue = F("Stabelstr.");
        break;
    }
    case 295995:
    {
        returnValue = F("Stabeltwiete");
        break;
    }
    case 295996:
    {
        returnValue = F("Staben");
        break;
    }
    case 295997:
    {
        returnValue = F("Stabenbergstr.");
        break;
    }
    case 295998:
    {
        returnValue = F("Stabensteg");
        break;
    }
    case 295999:
    {
        returnValue = F("Stabenstr.");
        break;
    }
    case 296000:
    {
        returnValue = F("Stabenweg");
        break;
    }
    case 296001:
    {
        returnValue = F("Stabergasse");
        break;
    }
    case 296002:
    {
        returnValue = F("Staberger Str.");
        break;
    }
    case 296003:
    {
        returnValue = F("Staberohweg");
        break;
    }
    case 296004:
    {
        returnValue = F("Stabeshorst");
        break;
    }
    case 296005:
    {
        returnValue = F("Stabeshöhe");
        break;
    }
    case 296006:
    {
        returnValue = F("Stabhalter-Flury-Str.");
        break;
    }
    case 296007:
    {
        returnValue = F("Stabhaltergässle");
        break;
    }
    case 296008:
    {
        returnValue = F("Stabhalterstr.");
        break;
    }
    case 296009:
    {
        returnValue = F("Stabhalterweg");
        break;
    }
    case 296010:
    {
        returnValue = F("Stabhammerweg");
        break;
    }
    case 296011:
    {
        returnValue = F("Stabhof");
        break;
    }
    case 296012:
    {
        returnValue = F("Stablostr.");
        break;
    }
    case 296013:
    {
        returnValue = F("Stabrook");
        break;
    }
    case 296014:
    {
        returnValue = F("Stabrooker Weg");
        break;
    }
    case 296015:
    {
        returnValue = F("Stabys Hof");
        break;
    }
    case 296016:
    {
        returnValue = F("Stachasweg");
        break;
    }
    case 296017:
    {
        returnValue = F("Stachelbeerweg");
        break;
    }
    case 296018:
    {
        returnValue = F("Stachelhauser Str.");
        break;
    }
    case 296019:
    {
        returnValue = F("Stachelschwein");
        break;
    }
    case 296020:
    {
        returnValue = F("Stachelschweine");
        break;
    }
    case 296021:
    {
        returnValue = F("Stachenhäuser Str.");
        break;
    }
    case 296022:
    {
        returnValue = F("Stacherweg");
        break;
    }
    case 296023:
    {
        returnValue = F("Stachesrieder Str.");
        break;
    }
    case 296024:
    {
        returnValue = F("Stachete");
        break;
    }
    case 296025:
    {
        returnValue = F("Stachgrund");
        break;
    }
    case 296026:
    {
        returnValue = F("Stachstückstr.");
        break;
    }
    case 296027:
    {
        returnValue = F("Stachus");
        break;
    }
    case 296028:
    {
        returnValue = F("Stachöd");
        break;
    }
    case 296029:
    {
        returnValue = F("Stachöderweg");
        break;
    }
    case 296030:
    {
        returnValue = F("Stackacker");
        break;
    }
    case 296031:
    {
        returnValue = F("Stackelitzer Dorfstr.");
        break;
    }
    case 296032:
    {
        returnValue = F("Stackelitzer Weg");
        break;
    }
    case 296033:
    {
        returnValue = F("Stackendorf");
        break;
    }
    case 296034:
    {
        returnValue = F("Stackendorfer Hauptstr.");
        break;
    }
    case 296035:
    {
        returnValue = F("Stackmannstr.");
        break;
    }
    case 296036:
    {
        returnValue = F("Stad");
        break;
    }
    case 296037:
    {
        returnValue = F("Stadastr.");
        break;
    }
    case 296038:
    {
        returnValue = F("Stadecker Weg");
        break;
    }
    case 296039:
    {
        returnValue = F("Stadel");
        break;
    }
    case 296040:
    {
        returnValue = F("Stadelbachstr.");
        break;
    }
    case 296041:
    {
        returnValue = F("Stadelbachweg");
        break;
    }
    case 296042:
    {
        returnValue = F("Stadelbergerstr.");
        break;
    }
    case 296043:
    {
        returnValue = F("Stadelbergweg");
        break;
    }
    case 296044:
    {
        returnValue = F("Stadelbogen");
        break;
    }
    case 296045:
    {
        returnValue = F("Stadelbreiten");
        break;
    }
    case 296046:
    {
        returnValue = F("Stadelfeld");
        break;
    }
    case 296047:
    {
        returnValue = F("Stadelfeldstr.");
        break;
    }
    case 296048:
    {
        returnValue = F("Stadelgasse");
        break;
    }
    case 296049:
    {
        returnValue = F("Stadelhof-Nord");
        break;
    }
    case 296050:
    {
        returnValue = F("Stadelhofen");
        break;
    }
    case 296051:
    {
        returnValue = F("Stadelhofener Str.");
        break;
    }
    case 296052:
    {
        returnValue = F("Stadelhofer Str.");
        break;
    }
    case 296053:
    {
        returnValue = F("Stadelhofstr.");
        break;
    }
    case 296054:
    {
        returnValue = F("Stadelhofweg");
        break;
    }
    case 296055:
    {
        returnValue = F("Stadelhöfer Weg");
        break;
    }
    case 296056:
    {
        returnValue = F("Stadellohe");
        break;
    }
    case 296057:
    {
        returnValue = F("Stadelmannsacker");
        break;
    }
    case 296058:
    {
        returnValue = F("Stadelmannweg");
        break;
    }
    case 296059:
    {
        returnValue = F("Stadelmüllerweg");
        break;
    }
    case 296060:
    {
        returnValue = F("Stadeln");
        break;
    }
    case 296061:
    {
        returnValue = F("Stadels");
        break;
    }
    case 296062:
    {
        returnValue = F("Stadelweg");
        break;
    }
    case 296063:
    {
        returnValue = F("Stadelwiesen");
        break;
    }
    case 296064:
    {
        returnValue = F("Stadeläcker");
        break;
    }
    case 296065:
    {
        returnValue = F("Stadelösch");
        break;
    }
    case 296066:
    {
        returnValue = F("Staden");
        break;
    }
    case 296067:
    {
        returnValue = F("Stadener Str.");
        break;
    }
    case 296068:
    {
        returnValue = F("Stadenhauser Str.");
        break;
    }
    case 296069:
    {
        returnValue = F("Stadenmühle");
        break;
    }
    case 296070:
    {
        returnValue = F("Stadenser Str.");
        break;
    }
    case 296071:
    {
        returnValue = F("Stadenser Weg");
        break;
    }
    case 296072:
    {
        returnValue = F("Stadenstr.");
        break;
    }
    case 296073:
    {
        returnValue = F("Stader Berg");
        break;
    }
    case 296074:
    {
        returnValue = F("Stader Landstr.");
        break;
    }
    case 296075:
    {
        returnValue = F("Stader Postweg");
        break;
    }
    case 296076:
    {
        returnValue = F("Stader Str.");
        break;
    }
    case 296077:
    {
        returnValue = F("Stader Weg");
        break;
    }
    case 296078:
    {
        returnValue = F("Stadesch");
        break;
    }
    case 296079:
    {
        returnValue = F("Stadeweg");
        break;
    }
    case 296080:
    {
        returnValue = F("Stadion");
        break;
    }
    case 296081:
    {
        returnValue = F("Stadion Fürstenberg");
        break;
    }
    case 296082:
    {
        returnValue = F("Stadion der Möbelwerker");
        break;
    }
    case 296083:
    {
        returnValue = F("Stadionallee");
        break;
    }
    case 296084:
    {
        returnValue = F("Stadionbrücke");
        break;
    }
    case 296085:
    {
        returnValue = F("Stadioner Str.");
        break;
    }
    case 296086:
    {
        returnValue = F("Stadionring");
        break;
    }
    case 296087:
    {
        returnValue = F("Stadionstr.");
        break;
    }
    case 296088:
    {
        returnValue = F("Stadionweg");
        break;
    }
    case 296089:
    {
        returnValue = F("Stadl");
        break;
    }
    case 296090:
    {
        returnValue = F("Stadlacker");
        break;
    }
    case 296091:
    {
        returnValue = F("Stadlander Platz");
        break;
    }
    case 296092:
    {
        returnValue = F("Stadlander Str.");
        break;
    }
    case 296093:
    {
        returnValue = F("Stadlander Weg");
        break;
    }
    case 296094:
    {
        returnValue = F("Stadlandstr.");
        break;
    }
    case 296095:
    {
        returnValue = F("Stadlandweg");
        break;
    }
    case 296096:
    {
        returnValue = F("Stadlbauerstr.");
        break;
    }
    case 296097:
    {
        returnValue = F("Stadlbauerweg");
        break;
    }
    case 296098:
    {
        returnValue = F("Stadlbergstr.");
        break;
    }
    case 296099:
    {
        returnValue = F("Stadlecker Weg");
        break;
    }
    case 296100:
    {
        returnValue = F("Stadler Str.");
        break;
    }
    case 296101:
    {
        returnValue = F("Stadlergasse");
        break;
    }
    case 296102:
    {
        returnValue = F("Stadlerhalde");
        break;
    }
    case 296103:
    {
        returnValue = F("Stadlern");
        break;
    }
    case 296104:
    {
        returnValue = F("Stadlerner Str.");
        break;
    }
    case 296105:
    {
        returnValue = F("Stadlerstr.");
        break;
    }
    case 296106:
    {
        returnValue = F("Stadlerwaldweg");
        break;
    }
    case 296107:
    {
        returnValue = F("Stadlerweg");
        break;
    }
    case 296108:
    {
        returnValue = F("Stadlgasse");
        break;
    }
    case 296109:
    {
        returnValue = F("Stadlhof");
        break;
    }
    case 296110:
    {
        returnValue = F("Stadlmanngasse");
        break;
    }
    case 296111:
    {
        returnValue = F("Stadlweg");
        break;
    }
    case 296112:
    {
        returnValue = F("Stadlwiesen");
        break;
    }
    case 296113:
    {
        returnValue = F("Stadländer Str.");
        break;
    }
    case 296114:
    {
        returnValue = F("Stadorf");
        break;
    }
    case 296115:
    {
        returnValue = F("Stadorfer Weg");
        break;
    }
    case 296116:
    {
        returnValue = F("Stadpark Teublitz");
        break;
    }
    case 296117:
    {
        returnValue = F("Stadskanaal");
        break;
    }
    case 296118:
    {
        returnValue = F("Stadt");
        break;
    }
    case 296119:
    {
        returnValue = F("Stadt Center");
        break;
    }
    case 296120:
    {
        returnValue = F("Stadt Park");
        break;
    }
    case 296121:
    {
        returnValue = F("Stadt Wäldchen");
        break;
    }
    case 296122:
    {
        returnValue = F("Stadt am Wasser");
        break;
    }
    case 296123:
    {
        returnValue = F("Stadt-Au");
        break;
    }
    case 296124:
    {
        returnValue = F("Stadt-Schkür-Pad");
        break;
    }
    case 296125:
    {
        returnValue = F("Stadt-Weg");
        break;
    }
    case 296126:
    {
        returnValue = F("StadtLandschaft");
        break;
    }
    case 296127:
    {
        returnValue = F("Stadtacker");
        break;
    }
    case 296128:
    {
        returnValue = F("Stadtbachring");
        break;
    }
    case 296129:
    {
        returnValue = F("Stadtbachweg");
        break;
    }
    case 296130:
    {
        returnValue = F("Stadtbadstr.");
        break;
    }
    case 296131:
    {
        returnValue = F("Stadtbahnhof");
        break;
    }
    case 296132:
    {
        returnValue = F("Stadtbahnplatz");
        break;
    }
    case 296133:
    {
        returnValue = F("Stadtbauamt");
        break;
    }
    case 296134:
    {
        returnValue = F("Stadtbek");
        break;
    }
    case 296135:
    {
        returnValue = F("Stadtbeker Str.");
        break;
    }
    case 296136:
    {
        returnValue = F("Stadtberg");
        break;
    }
    case 296137:
    {
        returnValue = F("Stadtbergener Str.");
        break;
    }
    case 296138:
    {
        returnValue = F("Stadtberger Steig");
        break;
    }
    case 296139:
    {
        returnValue = F("Stadtberger Str.");
        break;
    }
    case 296140:
    {
        returnValue = F("Stadtberger Weg");
        break;
    }
    case 296141:
    {
        returnValue = F("Stadtbergstr.");
        break;
    }
    case 296142:
    {
        returnValue = F("Stadtbleiche");
        break;
    }
    case 296143:
    {
        returnValue = F("Stadtblick");
        break;
    }
    case 296144:
    {
        returnValue = F("Stadtborngasse");
        break;
    }
    case 296145:
    {
        returnValue = F("Stadtbrunnenplatz");
        break;
    }
    case 296146:
    {
        returnValue = F("Stadtbrunnenweg");
        break;
    }
    case 296147:
    {
        returnValue = F("Stadtbrücke");
        break;
    }
    case 296148:
    {
        returnValue = F("Stadtbus-Wendeschleife");
        break;
    }
    case 296149:
    {
        returnValue = F("Stadtbusch");
        break;
    }
    case 296150:
    {
        returnValue = F("Stadtbörne");
        break;
    }
    case 296151:
    {
        returnValue = F("Stadtdeich");
        break;
    }
    case 296152:
    {
        returnValue = F("Stadtdirektor-Neemann-Platz");
        break;
    }
    case 296153:
    {
        returnValue = F("Stadtdobelweg");
        break;
    }
    case 296154:
    {
        returnValue = F("Stadtecke");
        break;
    }
    case 296155:
    {
        returnValue = F("Stadter Mahd");
        break;
    }
    case 296156:
    {
        returnValue = F("Stadterweg");
        break;
    }
    case 296157:
    {
        returnValue = F("Stadtesch");
        break;
    }
    case 296158:
    {
        returnValue = F("Stadtfeld");
        break;
    }
    case 296159:
    {
        returnValue = F("Stadtfeldstr.");
        break;
    }
    case 296160:
    {
        returnValue = F("Stadtförsterei");
        break;
    }
    case 296161:
    {
        returnValue = F("Stadtgarten");
        break;
    }
    case 296162:
    {
        returnValue = F("Stadtgarten Augasse");
        break;
    }
    case 296163:
    {
        returnValue = F("Stadtgarten Bad Honnef");
        break;
    }
    case 296164:
    {
        returnValue = F("Stadtgarten Liblar");
        break;
    }
    case 296165:
    {
        returnValue = F("Stadtgarten in Niederfreistett");
        break;
    }
    case 296166:
    {
        returnValue = F("Stadtgartenstr.");
        break;
    }
    case 296167:
    {
        returnValue = F("Stadtgartenweg");
        break;
    }
    case 296168:
    {
        returnValue = F("Stadtgartl");
        break;
    }
    case 296169:
    {
        returnValue = F("Stadtgasse");
        break;
    }
    case 296170:
    {
        returnValue = F("Stadtgraben");
        break;
    }
    case 296171:
    {
        returnValue = F("Stadtgraben Nord");
        break;
    }
    case 296172:
    {
        returnValue = F("Stadtgraben Ost");
        break;
    }
    case 296173:
    {
        returnValue = F("Stadtgraben West");
        break;
    }
    case 296174:
    {
        returnValue = F("Stadtgrabengasse");
        break;
    }
    case 296175:
    {
        returnValue = F("Stadtgrabenpark");
        break;
    }
    case 296176:
    {
        returnValue = F("Stadtgrabensiedlung");
        break;
    }
    case 296177:
    {
        returnValue = F("Stadtgrabenstr.");
        break;
    }
    case 296178:
    {
        returnValue = F("Stadtgrabenweg");
        break;
    }
    case 296179:
    {
        returnValue = F("Stadtgrenze");
        break;
    }
    case 296180:
    {
        returnValue = F("Stadtgrundweg");
        break;
    }
    case 296181:
    {
        returnValue = F("Stadtgrün");
        break;
    }
    case 296182:
    {
        returnValue = F("Stadtgut Greußnig");
        break;
    }
    case 296183:
    {
        returnValue = F("Stadtgutstr.");
        break;
    }
    case 296184:
    {
        returnValue = F("Stadtgutweg");
        break;
    }
    case 296185:
    {
        returnValue = F("Stadtgärtchen");
        break;
    }
    case 296186:
    {
        returnValue = F("Stadtgärten");
        break;
    }
    case 296187:
    {
        returnValue = F("Stadthafenweg");
        break;
    }
    case 296188:
    {
        returnValue = F("Stadthagen");
        break;
    }
    case 296189:
    {
        returnValue = F("Stadthagener Str.");
        break;
    }
    case 296190:
    {
        returnValue = F("Stadthalde Borna");
        break;
    }
    case 296191:
    {
        returnValue = F("Stadthallenpark");
        break;
    }
    case 296192:
    {
        returnValue = F("Stadthallenplatz");
        break;
    }
    case 296193:
    {
        returnValue = F("Stadthallenweg");
        break;
    }
    case 296194:
    {
        returnValue = F("Stadthausplatz");
        break;
    }
    case 296195:
    {
        returnValue = F("Stadthausstr.");
        break;
    }
    case 296196:
    {
        returnValue = F("Stadtheide");
        break;
    }
    case 296197:
    {
        returnValue = F("Stadtheidestr.");
        break;
    }
    case 296198:
    {
        returnValue = F("Stadthof");
        break;
    }
    case 296199:
    {
        returnValue = F("Stadthofstr.");
        break;
    }
    case 296200:
    {
        returnValue = F("Stadthofweg");
        break;
    }
    case 296201:
    {
        returnValue = F("Stadtholz");
        break;
    }
    case 296202:
    {
        returnValue = F("Stadthufen");
        break;
    }
    case 296203:
    {
        returnValue = F("Stadthäger Str.");
        break;
    }
    case 296204:
    {
        returnValue = F("Stadthöfe");
        break;
    }
    case 296205:
    {
        returnValue = F("Stadtilmer Str.");
        break;
    }
    case 296206:
    {
        returnValue = F("Stadtilmweg");
        break;
    }
    case 296207:
    {
        returnValue = F("Stadtkamp");
        break;
    }
    case 296208:
    {
        returnValue = F("Stadtkirchhof");
        break;
    }
    case 296209:
    {
        returnValue = F("Stadtkirchstr.");
        break;
    }
    case 296210:
    {
        returnValue = F("Stadtknechtsgasse");
        break;
    }
    case 296211:
    {
        returnValue = F("Stadtknechtstr.");
        break;
    }
    case 296212:
    {
        returnValue = F("Stadtkopfweg");
        break;
    }
    case 296213:
    {
        returnValue = F("Stadtkoppel");
        break;
    }
    case 296214:
    {
        returnValue = F("Stadtkyller Str.");
        break;
    }
    case 296215:
    {
        returnValue = F("Stadtlauringer Str.");
        break;
    }
    case 296216:
    {
        returnValue = F("Stadtlengsfelder Str.");
        break;
    }
    case 296217:
    {
        returnValue = F("Stadtlohner Str.");
        break;
    }
    case 296218:
    {
        returnValue = F("Stadtmark");
        break;
    }
    case 296219:
    {
        returnValue = F("Stadtmattstr.");
        break;
    }
    case 296220:
    {
        returnValue = F("Stadtmauer");
        break;
    }
    case 296221:
    {
        returnValue = F("Stadtmauer Spielplatz");
        break;
    }
    case 296222:
    {
        returnValue = F("Stadtmauergasse");
        break;
    }
    case 296223:
    {
        returnValue = F("Stadtmauergässchen");
        break;
    }
    case 296224:
    {
        returnValue = F("Stadtmauergäßchen");
        break;
    }
    case 296225:
    {
        returnValue = F("Stadtmauerngasse");
        break;
    }
    case 296226:
    {
        returnValue = F("Stadtmauerstr.");
        break;
    }
    case 296227:
    {
        returnValue = F("Stadtmauerweg");
        break;
    }
    case 296228:
    {
        returnValue = F("Stadtmoor");
        break;
    }
    case 296229:
    {
        returnValue = F("Stadtmuseum Herrenmühle");
        break;
    }
    case 296230:
    {
        returnValue = F("Stadtmühle");
        break;
    }
    case 296231:
    {
        returnValue = F("Stadtmühlenfeld");
        break;
    }
    case 296232:
    {
        returnValue = F("Stadtmühlenweg");
        break;
    }
    case 296233:
    {
        returnValue = F("Stadtmühlgasse");
        break;
    }
    case 296234:
    {
        returnValue = F("Stadtmühlweg");
        break;
    }
    case 296235:
    {
        returnValue = F("Stadtmüller-Weg");
        break;
    }
    case 296236:
    {
        returnValue = F("Stadtmüllergarten");
        break;
    }
    case 296237:
    {
        returnValue = F("Stadtoldendorfer Str.");
        break;
    }
    case 296238:
    {
        returnValue = F("Stadtor Durchgang");
        break;
    }
    case 296239:
    {
        returnValue = F("Stadtpark");
        break;
    }
    case 296240:
    {
        returnValue = F("Stadtpark \"Alter Friedhof");
        break;
    }
    case 296241:
    {
        returnValue = F("Stadtpark \"Arthur Richter");
        break;
    }
    case 296242:
    {
        returnValue = F("Stadtpark \"Auf dem Wall");
        break;
    }
    case 296243:
    {
        returnValue = F("Stadtpark (LNS-Gelände)");
        break;
    }
    case 296244:
    {
        returnValue = F("Stadtpark (am Friedhof)");
        break;
    }
    case 296245:
    {
        returnValue = F("Stadtpark Ackeranlagen");
        break;
    }
    case 296246:
    {
        returnValue = F("Stadtpark Alter Friedhof");
        break;
    }
    case 296247:
    {
        returnValue = F("Stadtpark Auerbach");
        break;
    }
    case 296248:
    {
        returnValue = F("Stadtpark Baunatal");
        break;
    }
    case 296249:
    {
        returnValue = F("Stadtpark Cloppenburg");
        break;
    }
    case 296250:
    {
        returnValue = F("Stadtpark Dinslaken");
        break;
    }
    case 296251:
    {
        returnValue = F("Stadtpark Emsdetten");
        break;
    }
    case 296252:
    {
        returnValue = F("Stadtpark Eppelheim");
        break;
    }
    case 296253:
    {
        returnValue = F("Stadtpark Erbendorf");
        break;
    }
    case 296254:
    {
        returnValue = F("Stadtpark Friesoythe");
        break;
    }
    case 296255:
    {
        returnValue = F("Stadtpark Fürstenfeldbruck");
        break;
    }
    case 296256:
    {
        returnValue = F("Stadtpark Garbsen");
        break;
    }
    case 296257:
    {
        returnValue = F("Stadtpark Gefell");
        break;
    }
    case 296258:
    {
        returnValue = F("Stadtpark Geiersberg");
        break;
    }
    case 296259:
    {
        returnValue = F("Stadtpark Geislingen");
        break;
    }
    case 296260:
    {
        returnValue = F("Stadtpark Gersthofen");
        break;
    }
    case 296261:
    {
        returnValue = F("Stadtpark Großenhain");
        break;
    }
    case 296262:
    {
        returnValue = F("Stadtpark Haidhof");
        break;
    }
    case 296263:
    {
        returnValue = F("Stadtpark Hainichen");
        break;
    }
    case 296264:
    {
        returnValue = F("Stadtpark Hilden");
        break;
    }
    case 296265:
    {
        returnValue = F("Stadtpark Kaarst");
        break;
    }
    case 296266:
    {
        returnValue = F("Stadtpark Kellinghusen");
        break;
    }
    case 296267:
    {
        returnValue = F("Stadtpark Konradsberg");
        break;
    }
    case 296268:
    {
        returnValue = F("Stadtpark Königswiesen");
        break;
    }
    case 296269:
    {
        returnValue = F("Stadtpark Lehesten");
        break;
    }
    case 296270:
    {
        returnValue = F("Stadtpark Lichtenstein");
        break;
    }
    case 296271:
    {
        returnValue = F("Stadtpark Lieth");
        break;
    }
    case 296272:
    {
        returnValue = F("Stadtpark Limbach Oberfrona");
        break;
    }
    case 296273:
    {
        returnValue = F("Stadtpark Lohmühle");
        break;
    }
    case 296274:
    {
        returnValue = F("Stadtpark Lugau");
        break;
    }
    case 296275:
    {
        returnValue = F("Stadtpark Lüdenscheid");
        break;
    }
    case 296276:
    {
        returnValue = F("Stadtpark Lünen");
        break;
    }
    case 296277:
    {
        returnValue = F("Stadtpark Melcherstiege");
        break;
    }
    case 296278:
    {
        returnValue = F("Stadtpark Norderstedt");
        break;
    }
    case 296279:
    {
        returnValue = F("Stadtpark Oberlungwitz");
        break;
    }
    case 296280:
    {
        returnValue = F("Stadtpark Oberndorf am Neckar");
        break;
    }
    case 296281:
    {
        returnValue = F("Stadtpark Ochsenfurt");
        break;
    }
    case 296282:
    {
        returnValue = F("Stadtpark Ramsdorf");
        break;
    }
    case 296283:
    {
        returnValue = F("Stadtpark Remagen");
        break;
    }
    case 296284:
    {
        returnValue = F("Stadtpark Rochlitz");
        break;
    }
    case 296285:
    {
        returnValue = F("Stadtpark Rodewisch");
        break;
    }
    case 296286:
    {
        returnValue = F("Stadtpark Schillerhöhe");
        break;
    }
    case 296287:
    {
        returnValue = F("Stadtpark Schmalkalden");
        break;
    }
    case 296288:
    {
        returnValue = F("Stadtpark Taucha");
        break;
    }
    case 296289:
    {
        returnValue = F("Stadtpark Teichwiesen");
        break;
    }
    case 296290:
    {
        returnValue = F("Stadtpark Thalenweide");
        break;
    }
    case 296291:
    {
        returnValue = F("Stadtpark Thum");
        break;
    }
    case 296292:
    {
        returnValue = F("Stadtpark Vacha");
        break;
    }
    case 296293:
    {
        returnValue = F("Stadtpark Weikersheim");
        break;
    }
    case 296294:
    {
        returnValue = F("Stadtpark West");
        break;
    }
    case 296295:
    {
        returnValue = F("Stadtpark Wiendlwiese");
        break;
    }
    case 296296:
    {
        returnValue = F("Stadtpark Wieseckaue");
        break;
    }
    case 296297:
    {
        returnValue = F("Stadtpark Wittlich");
        break;
    }
    case 296298:
    {
        returnValue = F("Stadtpark Wolkenstein");
        break;
    }
    case 296299:
    {
        returnValue = F("Stadtpark Zella-Mehlis");
        break;
    }
    case 296300:
    {
        returnValue = F("Stadtpark Zeven");
        break;
    }
    case 296301:
    {
        returnValue = F("Stadtpark am Bur");
        break;
    }
    case 296302:
    {
        returnValue = F("Stadtpark am Josefsstift \"Obstbaumwiese");
        break;
    }
    case 296303:
    {
        returnValue = F("Stadtpark am Wuhrloch");
        break;
    }
    case 296304:
    {
        returnValue = F("Stadtparkallee");
        break;
    }
    case 296305:
    {
        returnValue = F("Stadtparkhöhe");
        break;
    }
    case 296306:
    {
        returnValue = F("Stadtparkinsel");
        break;
    }
    case 296307:
    {
        returnValue = F("Stadtparkstr.");
        break;
    }
    case 296308:
    {
        returnValue = F("Stadtparktreppe");
        break;
    }
    case 296309:
    {
        returnValue = F("Stadtparkwende");
        break;
    }
    case 296310:
    {
        returnValue = F("Stadtpfad");
        break;
    }
    case 296311:
    {
        returnValue = F("Stadtpfarrer-Fuchs-Str.");
        break;
    }
    case 296312:
    {
        returnValue = F("Stadtpfeiferweg");
        break;
    }
    case 296313:
    {
        returnValue = F("Stadtplatz");
        break;
    }
    case 296314:
    {
        returnValue = F("Stadtplatz an der Böhme");
        break;
    }
    case 296315:
    {
        returnValue = F("Stadtpromenade");
        break;
    }
    case 296316:
    {
        returnValue = F("Stadtrainsee II (früheres Schwimmbad)");
        break;
    }
    case 296317:
    {
        returnValue = F("Stadtrandsiedlung");
        break;
    }
    case 296318:
    {
        returnValue = F("Stadtrandweg");
        break;
    }
    case 296319:
    {
        returnValue = F("Stadtrichter-Werner-Str.");
        break;
    }
    case 296320:
    {
        returnValue = F("Stadtring");
        break;
    }
    case 296321:
    {
        returnValue = F("Stadtrodaer Landstr.");
        break;
    }
    case 296322:
    {
        returnValue = F("Stadtrodaer Str.");
        break;
    }
    case 296323:
    {
        returnValue = F("Stadträr");
        break;
    }
    case 296324:
    {
        returnValue = F("Stadtscheide");
        break;
    }
    case 296325:
    {
        returnValue = F("Stadtschreiberei");
        break;
    }
    case 296326:
    {
        returnValue = F("Stadtschreibereigasse");
        break;
    }
    case 296327:
    {
        returnValue = F("Stadtschreibereistr.");
        break;
    }
    case 296328:
    {
        returnValue = F("Stadtschreiberweg");
        break;
    }
    case 296329:
    {
        returnValue = F("Stadtschwarzacher-Str.");
        break;
    }
    case 296330:
    {
        returnValue = F("Stadtseeallee");
        break;
    }
    case 296331:
    {
        returnValue = F("Stadtseestr.");
        break;
    }
    case 296332:
    {
        returnValue = F("Stadtseeweg");
        break;
    }
    case 296333:
    {
        returnValue = F("Stadtskamp");
        break;
    }
    case 296334:
    {
        returnValue = F("Stadtsteig");
        break;
    }
    case 296335:
    {
        returnValue = F("Stadtsteinacher Str.");
        break;
    }
    case 296336:
    {
        returnValue = F("Stadtsteinacher Weg");
        break;
    }
    case 296337:
    {
        returnValue = F("Stadtstelle");
        break;
    }
    case 296338:
    {
        returnValue = F("Stadtstiege");
        break;
    }
    case 296339:
    {
        returnValue = F("Stadtstr.");
        break;
    }
    case 296340:
    {
        returnValue = F("Stadtstr. Nord");
        break;
    }
    case 296341:
    {
        returnValue = F("Stadtteich Rundweg");
        break;
    }
    case 296342:
    {
        returnValue = F("Stadtteichweg");
        break;
    }
    case 296343:
    {
        returnValue = F("Stadtteilpark Friedrich-Wilhelms-Hütte");
        break;
    }
    case 296344:
    {
        returnValue = F("Stadtteilpark Hinter der Stockmühle");
        break;
    }
    case 296345:
    {
        returnValue = F("Stadtterrasse");
        break;
    }
    case 296346:
    {
        returnValue = F("Stadtterrassen");
        break;
    }
    case 296347:
    {
        returnValue = F("Stadttor");
        break;
    }
    case 296348:
    {
        returnValue = F("Stadttorstr.");
        break;
    }
    case 296349:
    {
        returnValue = F("Stadttrotte");
        break;
    }
    case 296350:
    {
        returnValue = F("Stadttunnel Fellbach");
        break;
    }
    case 296351:
    {
        returnValue = F("Stadtveen");
        break;
    }
    case 296352:
    {
        returnValue = F("Stadtvogteigasse");
        break;
    }
    case 296353:
    {
        returnValue = F("Stadtwald");
        break;
    }
    case 296354:
    {
        returnValue = F("Stadtwaldallee");
        break;
    }
    case 296355:
    {
        returnValue = F("Stadtwalder Weg");
        break;
    }
    case 296356:
    {
        returnValue = F("Stadtwaldstr.");
        break;
    }
    case 296357:
    {
        returnValue = F("Stadtwaldweg");
        break;
    }
    case 296358:
    {
        returnValue = F("Stadtwall");
        break;
    }
    case 296359:
    {
        returnValue = F("Stadtwand");
        break;
    }
    case 296360:
    {
        returnValue = F("Stadtwappen");
        break;
    }
    case 296361:
    {
        returnValue = F("Stadtweg");
        break;
    }
    case 296362:
    {
        returnValue = F("Stadtweg-Nord");
        break;
    }
    case 296363:
    {
        returnValue = F("Stadtweg-Ost");
        break;
    }
    case 296364:
    {
        returnValue = F("Stadtweg-Süd");
        break;
    }
    case 296365:
    {
        returnValue = F("Stadtweg-West");
        break;
    }
    case 296366:
    {
        returnValue = F("Stadtwegle");
        break;
    }
    case 296367:
    {
        returnValue = F("Stadtwegsiedlung");
        break;
    }
    case 296368:
    {
        returnValue = F("Stadtwehrstr.");
        break;
    }
    case 296369:
    {
        returnValue = F("Stadtweiherweg");
        break;
    }
    case 296370:
    {
        returnValue = F("Stadtweiherwiesen");
        break;
    }
    case 296371:
    {
        returnValue = F("Stadtwengertweg");
        break;
    }
    case 296372:
    {
        returnValue = F("Stadtwiese");
        break;
    }
    case 296373:
    {
        returnValue = F("Stadtwiesen");
        break;
    }
    case 296374:
    {
        returnValue = F("Stadtwiesenweg");
        break;
    }
    case 296375:
    {
        returnValue = F("Stadtwinkel");
        break;
    }
    case 296376:
    {
        returnValue = F("Stadtwirtweg");
        break;
    }
    case 296377:
    {
        returnValue = F("Stadtziegelei");
        break;
    }
    case 296378:
    {
        returnValue = F("Stadtäcker");
        break;
    }
    case 296379:
    {
        returnValue = F("Stadtäckerweg");
        break;
    }
    case 296380:
    {
        returnValue = F("Stadumer Str.");
        break;
    }
    case 296381:
    {
        returnValue = F("Stadumstr.");
        break;
    }
    case 296382:
    {
        returnValue = F("Stadweg");
        break;
    }
    case 296383:
    {
        returnValue = F("Staedtlersiedlung");
        break;
    }
    case 296384:
    {
        returnValue = F("Staedtlerstr.");
        break;
    }
    case 296385:
    {
        returnValue = F("Staelsmühler Str.");
        break;
    }
    case 296386:
    {
        returnValue = F("Staelweg");
        break;
    }
    case 296387:
    {
        returnValue = F("Staerkstr.");
        break;
    }
    case 296388:
    {
        returnValue = F("Staerweg");
        break;
    }
    case 296389:
    {
        returnValue = F("Staetseweg");
        break;
    }
    case 296390:
    {
        returnValue = F("Staff Landschaftspark");
        break;
    }
    case 296391:
    {
        returnValue = F("Staffbuschweg");
        break;
    }
    case 296392:
    {
        returnValue = F("Staffel");
        break;
    }
    case 296393:
    {
        returnValue = F("Staffelbach");
        break;
    }
    case 296394:
    {
        returnValue = F("Staffelbachstr.");
        break;
    }
    case 296395:
    {
        returnValue = F("Staffelbachweg");
        break;
    }
    case 296396:
    {
        returnValue = F("Staffelberg");
        break;
    }
    case 296397:
    {
        returnValue = F("Staffelbergblick");
        break;
    }
    case 296398:
    {
        returnValue = F("Staffelberger Weg");
        break;
    }
    case 296399:
    {
        returnValue = F("Staffelbergstr.");
        break;
    }
    case 296400:
    {
        returnValue = F("Staffelbergweg");
        break;
    }
    case 296401:
    {
        returnValue = F("Staffelbildweg");
        break;
    }
    case 296402:
    {
        returnValue = F("Staffelböllstr.");
        break;
    }
    case 296403:
    {
        returnValue = F("Staffelder Dorfstr.");
        break;
    }
    case 296404:
    {
        returnValue = F("Staffelder Hauptstr.");
        break;
    }
    case 296405:
    {
        returnValue = F("Staffelder Lindenweg");
        break;
    }
    case 296406:
    {
        returnValue = F("Staffelder Str.");
        break;
    }
    case 296407:
    {
        returnValue = F("Staffelder Triftweg");
        break;
    }
    case 296408:
    {
        returnValue = F("Staffelder Waldweg");
        break;
    }
    case 296409:
    {
        returnValue = F("Staffelder Weg");
        break;
    }
    case 296410:
    {
        returnValue = F("Staffeler Str.");
        break;
    }
    case 296411:
    {
        returnValue = F("Staffeler Weg");
        break;
    }
    case 296412:
    {
        returnValue = F("Staffelgasse");
        break;
    }
    case 296413:
    {
        returnValue = F("Staffelgrabenweg");
        break;
    }
    case 296414:
    {
        returnValue = F("Staffelhalde");
        break;
    }
    case 296415:
    {
        returnValue = F("Staffelhof");
        break;
    }
    case 296416:
    {
        returnValue = F("Staffelhofer Weg");
        break;
    }
    case 296417:
    {
        returnValue = F("Staffelmahdstr.");
        break;
    }
    case 296418:
    {
        returnValue = F("Staffelprankelweg");
        break;
    }
    case 296419:
    {
        returnValue = F("Staffelrundweg");
        break;
    }
    case 296420:
    {
        returnValue = F("Staffelseestr.");
        break;
    }
    case 296421:
    {
        returnValue = F("Staffelseeweg");
        break;
    }
    case 296422:
    {
        returnValue = F("Staffelsgasse");
        break;
    }
    case 296423:
    {
        returnValue = F("Staffelsteiner Str.");
        break;
    }
    case 296424:
    {
        returnValue = F("Staffelsteinstr.");
        break;
    }
    case 296425:
    {
        returnValue = F("Staffelsteinweg");
        break;
    }
    case 296426:
    {
        returnValue = F("Staffelstr.");
        break;
    }
    case 296427:
    {
        returnValue = F("Staffelsweg");
        break;
    }
    case 296428:
    {
        returnValue = F("Staffelweg");
        break;
    }
    case 296429:
    {
        returnValue = F("Staffelweinberg");
        break;
    }
    case 296430:
    {
        returnValue = F("Staffeläckerstr.");
        break;
    }
    case 296431:
    {
        returnValue = F("Staffenstr.");
        break;
    }
    case 296432:
    {
        returnValue = F("Staffenöd");
        break;
    }
    case 296433:
    {
        returnValue = F("Staffhorster Str.");
        break;
    }
    case 296434:
    {
        returnValue = F("Staffoller");
        break;
    }
    case 296435:
    {
        returnValue = F("Staffordstr.");
        break;
    }
    case 296436:
    {
        returnValue = F("Stafforter Weg");
        break;
    }
    case 296437:
    {
        returnValue = F("Stafstedter Weg");
        break;
    }
    case 296438:
    {
        returnValue = F("Staglegaß");
        break;
    }
    case 296439:
    {
        returnValue = F("Stagurastr.");
        break;
    }
    case 296440:
    {
        returnValue = F("Stahe");
        break;
    }
    case 296441:
    {
        returnValue = F("Stahfast");
        break;
    }
    case 296442:
    {
        returnValue = F("Stahl-Siedlung");
        break;
    }
    case 296443:
    {
        returnValue = F("Stahlackerweg");
        break;
    }
    case 296444:
    {
        returnValue = F("Stahlbachstr.");
        break;
    }
    case 296445:
    {
        returnValue = F("Stahlbadstr.");
        break;
    }
    case 296446:
    {
        returnValue = F("Stahlbaustr.");
        break;
    }
    case 296447:
    {
        returnValue = F("Stahlberger Weg");
        break;
    }
    case 296448:
    {
        returnValue = F("Stahlbergring");
        break;
    }
    case 296449:
    {
        returnValue = F("Stahlbergstr.");
        break;
    }
    case 296450:
    {
        returnValue = F("Stahlbergsweg");
        break;
    }
    case 296451:
    {
        returnValue = F("Stahlbergweg");
        break;
    }
    case 296452:
    {
        returnValue = F("Stahlbogengang");
        break;
    }
    case 296453:
    {
        returnValue = F("Stahlbroder Str.");
        break;
    }
    case 296454:
    {
        returnValue = F("Stahlbrunnenweg");
        break;
    }
    case 296455:
    {
        returnValue = F("Stahlbrunnstr.");
        break;
    }
    case 296456:
    {
        returnValue = F("Stahlbühlring");
        break;
    }
    case 296457:
    {
        returnValue = F("Stahlbühlstr.");
        break;
    }
    case 296458:
    {
        returnValue = F("Stahleckstr.");
        break;
    }
    case 296459:
    {
        returnValue = F("Stahlengärtle");
        break;
    }
    case 296460:
    {
        returnValue = F("Stahlenhauser Str.");
        break;
    }
    case 296461:
    {
        returnValue = F("Stahlenhofgasse");
        break;
    }
    case 296462:
    {
        returnValue = F("Stahlenstr.");
        break;
    }
    case 296463:
    {
        returnValue = F("Stahler Hügel");
        break;
    }
    case 296464:
    {
        returnValue = F("Stahler Ufer");
        break;
    }
    case 296465:
    {
        returnValue = F("Stahler Weg");
        break;
    }
    case 296466:
    {
        returnValue = F("Stahlerstr.");
        break;
    }
    case 296467:
    {
        returnValue = F("Stahlert");
        break;
    }
    case 296468:
    {
        returnValue = F("Stahlgruber-Wohnpark");
        break;
    }
    case 296469:
    {
        returnValue = F("Stahlgäßchen");
        break;
    }
    case 296470:
    {
        returnValue = F("Stahlhammer");
        break;
    }
    case 296471:
    {
        returnValue = F("Stahlhofener Str.");
        break;
    }
    case 296472:
    {
        returnValue = F("Stahlhofstr.");
        break;
    }
    case 296473:
    {
        returnValue = F("Stahlhütte");
        break;
    }
    case 296474:
    {
        returnValue = F("Stahlmanns Weg");
        break;
    }
    case 296475:
    {
        returnValue = F("Stahlrückweg");
        break;
    }
    case 296476:
    {
        returnValue = F("Stahlschmidtsbrücke");
        break;
    }
    case 296477:
    {
        returnValue = F("Stahlstr.");
        break;
    }
    case 296478:
    {
        returnValue = F("Stahlsweg");
        break;
    }
    case 296479:
    {
        returnValue = F("Stahlwerk Becker");
        break;
    }
    case 296480:
    {
        returnValue = F("Stahlwerkbrücke");
        break;
    }
    case 296481:
    {
        returnValue = F("Stahlwerkstr.");
        break;
    }
    case 296482:
    {
        returnValue = F("Stahläcker");
        break;
    }
    case 296483:
    {
        returnValue = F("Stahmannskamp");
        break;
    }
    case 296484:
    {
        returnValue = F("Stahmstr.");
        break;
    }
    case 296485:
    {
        returnValue = F("Stahna");
        break;
    }
    case 296486:
    {
        returnValue = F("Stahnsdorfer Chaussee");
        break;
    }
    case 296487:
    {
        returnValue = F("Stahnsdorfer Damm");
        break;
    }
    case 296488:
    {
        returnValue = F("Stahnsdorfer Str.");
        break;
    }
    case 296489:
    {
        returnValue = F("Stahnsdorfer Weg");
        break;
    }
    case 296490:
    {
        returnValue = F("Stahrembergstr.");
        break;
    }
    case 296491:
    {
        returnValue = F("Stahringer Str.");
        break;
    }
    case 296492:
    {
        returnValue = F("Stahuber Weg");
        break;
    }
    case 296493:
    {
        returnValue = F("Staibengasse");
        break;
    }
    case 296494:
    {
        returnValue = F("Staibstr.");
        break;
    }
    case 296495:
    {
        returnValue = F("Staig");
        break;
    }
    case 296496:
    {
        returnValue = F("Staigackerweg");
        break;
    }
    case 296497:
    {
        returnValue = F("Staige");
        break;
    }
    case 296498:
    {
        returnValue = F("Staigenwiesen");
        break;
    }
    case 296499:
    {
        returnValue = F("Staiger Ried");
        break;
    }
    case 296500:
    {
        returnValue = F("Staiger Str.");
        break;
    }
    case 296501:
    {
        returnValue = F("Staigerbacher Str.");
        break;
    }
    case 296502:
    {
        returnValue = F("Staigersbachstr.");
        break;
    }
    case 296503:
    {
        returnValue = F("Staiggasse");
        break;
    }
    case 296504:
    {
        returnValue = F("Staigle");
        break;
    }
    case 296505:
    {
        returnValue = F("Staigstr.");
        break;
    }
    case 296506:
    {
        returnValue = F("Staigweg");
        break;
    }
    case 296507:
    {
        returnValue = F("Stainergasse");
        break;
    }
    case 296508:
    {
        returnValue = F("Staitzer Dorfstr.");
        break;
    }
    case 296509:
    {
        returnValue = F("Staitzer Lindenstr.");
        break;
    }
    case 296510:
    {
        returnValue = F("Staitzer Südstr.");
        break;
    }
    case 296511:
    {
        returnValue = F("Staken Weg");
        break;
    }
    case 296512:
    {
        returnValue = F("Stakenberg");
        break;
    }
    case 296513:
    {
        returnValue = F("Stakenbergweg");
        break;
    }
    case 296514:
    {
        returnValue = F("Stakenbusch");
        break;
    }
    case 296515:
    {
        returnValue = F("Stakendorfer Mühle");
        break;
    }
    case 296516:
    {
        returnValue = F("Stakendorfer Str.");
        break;
    }
    case 296517:
    {
        returnValue = F("Stakendorfer Tor");
        break;
    }
    case 296518:
    {
        returnValue = F("Stakendorfer Weg");
        break;
    }
    case 296519:
    {
        returnValue = F("Stakener Str.");
        break;
    }
    case 296520:
    {
        returnValue = F("Stakenkamp");
        break;
    }
    case 296521:
    {
        returnValue = F("Stakenteich");
        break;
    }
    case 296522:
    {
        returnValue = F("Stakenweg");
        break;
    }
    case 296523:
    {
        returnValue = F("Stakerseite");
        break;
    }
    case 296524:
    {
        returnValue = F("Staklenberg");
        break;
    }
    case 296525:
    {
        returnValue = F("Stakloh");
        break;
    }
    case 296526:
    {
        returnValue = F("Stakmühlenweg");
        break;
    }
    case 296527:
    {
        returnValue = F("Stalag-Gedenkplatz");
        break;
    }
    case 296528:
    {
        returnValue = F("Stalag-Gedenkstätte Oberreit");
        break;
    }
    case 296529:
    {
        returnValue = F("Stalberstr.");
        break;
    }
    case 296530:
    {
        returnValue = F("Stalbühlweg");
        break;
    }
    case 296531:
    {
        returnValue = F("Staldenstr.");
        break;
    }
    case 296532:
    {
        returnValue = F("Staldtenweg");
        break;
    }
    case 296533:
    {
        returnValue = F("Stalfördener Feld");
        break;
    }
    case 296534:
    {
        returnValue = F("Stalkerweg");
        break;
    }
    case 296535:
    {
        returnValue = F("Stall");
        break;
    }
    case 296536:
    {
        returnValue = F("Stallackerweg");
        break;
    }
    case 296537:
    {
        returnValue = F("Stallauer Bergweg");
        break;
    }
    case 296538:
    {
        returnValue = F("Stallbaumer Str.");
        break;
    }
    case 296539:
    {
        returnValue = F("Stallberg");
        break;
    }
    case 296540:
    {
        returnValue = F("Stallbergstr.");
        break;
    }
    case 296541:
    {
        returnValue = F("Stallbergweg");
        break;
    }
    case 296542:
    {
        returnValue = F("Stallbusch");
        break;
    }
    case 296543:
    {
        returnValue = F("Stalldorfer Str.");
        break;
    }
    case 296544:
    {
        returnValue = F("Stallegg");
        break;
    }
    case 296545:
    {
        returnValue = F("Stallegg, Rettungssektor D");
        break;
    }
    case 296546:
    {
        returnValue = F("Stallegger Brücke");
        break;
    }
    case 296547:
    {
        returnValue = F("Stalleicherweg");
        break;
    }
    case 296548:
    {
        returnValue = F("Stallenkandel");
        break;
    }
    case 296549:
    {
        returnValue = F("Stallergarten");
        break;
    }
    case 296550:
    {
        returnValue = F("Stallerweg");
        break;
    }
    case 296551:
    {
        returnValue = F("Stallgasse");
        break;
    }
    case 296552:
    {
        returnValue = F("Stallhaus");
        break;
    }
    case 296553:
    {
        returnValue = F("Stallhermstr.");
        break;
    }
    case 296554:
    {
        returnValue = F("Stallhof");
        break;
    }
    case 296555:
    {
        returnValue = F("Stalloh");
        break;
    }
    case 296556:
    {
        returnValue = F("Stallplatzweg");
        break;
    }
    case 296557:
    {
        returnValue = F("Stallstr.");
        break;
    }
    case 296558:
    {
        returnValue = F("Stallwanger Str.");
        break;
    }
    case 296559:
    {
        returnValue = F("Stallweg");
        break;
    }
    case 296560:
    {
        returnValue = F("Stalmannstr.");
        break;
    }
    case 296561:
    {
        returnValue = F("Stalper Brunnenweg");
        break;
    }
    case 296562:
    {
        returnValue = F("Staltacher Str.");
        break;
    }
    case 296563:
    {
        returnValue = F("Staltengasse");
        break;
    }
    case 296564:
    {
        returnValue = F("Staltenstr.");
        break;
    }
    case 296565:
    {
        returnValue = F("Staltenweg");
        break;
    }
    case 296566:
    {
        returnValue = F("Stalterhofweg");
        break;
    }
    case 296567:
    {
        returnValue = F("Stalterstr.");
        break;
    }
    case 296568:
    {
        returnValue = F("Staltmayrweg");
        break;
    }
    case 296569:
    {
        returnValue = F("Stalzenbergweg");
        break;
    }
    case 296570:
    {
        returnValue = F("Stambacher Weg");
        break;
    }
    case 296571:
    {
        returnValue = F("Stamitzstr.");
        break;
    }
    case 296572:
    {
        returnValue = F("Stamitzweg");
        break;
    }
    case 296573:
    {
        returnValue = F("Stammbach");
        break;
    }
    case 296574:
    {
        returnValue = F("Stammbacher Str.");
        break;
    }
    case 296575:
    {
        returnValue = F("Stammbacher Weg");
        break;
    }
    case 296576:
    {
        returnValue = F("Stammbachweg");
        break;
    }
    case 296577:
    {
        returnValue = F("Stammbergblick");
        break;
    }
    case 296578:
    {
        returnValue = F("Stammbergstr.");
        break;
    }
    case 296579:
    {
        returnValue = F("Stammbergweg");
        break;
    }
    case 296580:
    {
        returnValue = F("Stammeinte");
        break;
    }
    case 296581:
    {
        returnValue = F("Stammelestr.");
        break;
    }
    case 296582:
    {
        returnValue = F("Stammelner Str.");
        break;
    }
    case 296583:
    {
        returnValue = F("Stammerstr.");
        break;
    }
    case 296584:
    {
        returnValue = F("Stammesgrund");
        break;
    }
    case 296585:
    {
        returnValue = F("Stammfeldstr.");
        break;
    }
    case 296586:
    {
        returnValue = F("Stammgastpromenade");
        break;
    }
    case 296587:
    {
        returnValue = F("Stammhamer Str.");
        break;
    }
    case 296588:
    {
        returnValue = F("Stammhamer Weg");
        break;
    }
    case 296589:
    {
        returnValue = F("Stammhammer Weg");
        break;
    }
    case 296590:
    {
        returnValue = F("Stammheimer Str.");
        break;
    }
    case 296591:
    {
        returnValue = F("Stammheimer Weg");
        break;
    }
    case 296592:
    {
        returnValue = F("Stammheimer Wiesen");
        break;
    }
    case 296593:
    {
        returnValue = F("Stammheimer Wiesenweg");
        break;
    }
    case 296594:
    {
        returnValue = F("Stammhofstr.");
        break;
    }
    case 296595:
    {
        returnValue = F("Stammleite");
        break;
    }
    case 296596:
    {
        returnValue = F("Stammsbitz");
        break;
    }
    case 296597:
    {
        returnValue = F("Stammsgarten");
        break;
    }
    case 296598:
    {
        returnValue = F("Stammstr.");
        break;
    }
    case 296599:
    {
        returnValue = F("Stammwaldweg");
        break;
    }
    case 296600:
    {
        returnValue = F("Stammweg");
        break;
    }
    case 296601:
    {
        returnValue = F("Stammwiesenweg");
        break;
    }
    case 296602:
    {
        returnValue = F("Stampenwall");
        break;
    }
    case 296603:
    {
        returnValue = F("Stampfe");
        break;
    }
    case 296604:
    {
        returnValue = F("Stampfenwiesenweg");
        break;
    }
    case 296605:
    {
        returnValue = F("Stampferweg");
        break;
    }
    case 296606:
    {
        returnValue = F("Stampfestr.");
        break;
    }
    case 296607:
    {
        returnValue = F("Stampfeweg");
        break;
    }
    case 296608:
    {
        returnValue = F("Stampfgasse");
        break;
    }
    case 296609:
    {
        returnValue = F("Stampfmühle");
        break;
    }
    case 296610:
    {
        returnValue = F("Stampfweg");
        break;
    }
    case 296611:
    {
        returnValue = F("Stampfwiesen");
        break;
    }
    case 296612:
    {
        returnValue = F("Stampkensweg");
        break;
    }
    case 296613:
    {
        returnValue = F("Stampmöhlenkamp");
        break;
    }
    case 296614:
    {
        returnValue = F("Stamps Diek");
        break;
    }
    case 296615:
    {
        returnValue = F("Stamser Str.");
        break;
    }
    case 296616:
    {
        returnValue = F("Stamsrieder Str.");
        break;
    }
    case 296617:
    {
        returnValue = F("Stamsrieder Weg");
        break;
    }
    case 296618:
    {
        returnValue = F("Stamsweg");
        break;
    }
    case 296619:
    {
        returnValue = F("Stande Waaren");
        break;
    }
    case 296620:
    {
        returnValue = F("Standehler");
        break;
    }
    case 296621:
    {
        returnValue = F("Standenbühler Str.");
        break;
    }
    case 296622:
    {
        returnValue = F("Standorf");
        break;
    }
    case 296623:
    {
        returnValue = F("Standort des ehemaligen DDR-Konsums");
        break;
    }
    case 296624:
    {
        returnValue = F("Standort ehem. Stephanskirche, abgetragen 1871");
        break;
    }
    case 296625:
    {
        returnValue = F("Standweg");
        break;
    }
    case 296626:
    {
        returnValue = F("Stanessenweg");
        break;
    }
    case 296627:
    {
        returnValue = F("Stangelweg");
        break;
    }
    case 296628:
    {
        returnValue = F("Stangen-Schneise");
        break;
    }
    case 296629:
    {
        returnValue = F("Stangenallee");
        break;
    }
    case 296630:
    {
        returnValue = F("Stangenbach-Steg");
        break;
    }
    case 296631:
    {
        returnValue = F("Stangenbacher Str.");
        break;
    }
    case 296632:
    {
        returnValue = F("Stangenberg");
        break;
    }
    case 296633:
    {
        returnValue = F("Stangenbergstr.");
        break;
    }
    case 296634:
    {
        returnValue = F("Stangenbergweg");
        break;
    }
    case 296635:
    {
        returnValue = F("Stangenbohr");
        break;
    }
    case 296636:
    {
        returnValue = F("Stangenbrunnen");
        break;
    }
    case 296637:
    {
        returnValue = F("Stangenbrunnengasse");
        break;
    }
    case 296638:
    {
        returnValue = F("Stangenbrunnenweg");
        break;
    }
    case 296639:
    {
        returnValue = F("Stangendorfer Hauptstr.");
        break;
    }
    case 296640:
    {
        returnValue = F("Stangendorfer Str.");
        break;
    }
    case 296641:
    {
        returnValue = F("Stangengasse");
        break;
    }
    case 296642:
    {
        returnValue = F("Stangengrund");
        break;
    }
    case 296643:
    {
        returnValue = F("Stangengrüner Str.");
        break;
    }
    case 296644:
    {
        returnValue = F("Stangengrüner Weg");
        break;
    }
    case 296645:
    {
        returnValue = F("Stangengärtenstr.");
        break;
    }
    case 296646:
    {
        returnValue = F("Stangenhagener Str.");
        break;
    }
    case 296647:
    {
        returnValue = F("Stangenhaustr.");
        break;
    }
    case 296648:
    {
        returnValue = F("Stangenheuleweg");
        break;
    }
    case 296649:
    {
        returnValue = F("Stangenholzweg");
        break;
    }
    case 296650:
    {
        returnValue = F("Stangenkamp");
        break;
    }
    case 296651:
    {
        returnValue = F("Stangenlohe");
        break;
    }
    case 296652:
    {
        returnValue = F("Stangenmeer");
        break;
    }
    case 296653:
    {
        returnValue = F("Stangenmoor");
        break;
    }
    case 296654:
    {
        returnValue = F("Stangenmühle");
        break;
    }
    case 296655:
    {
        returnValue = F("Stangenreiterstr.");
        break;
    }
    case 296656:
    {
        returnValue = F("Stangenröder Str.");
        break;
    }
    case 296657:
    {
        returnValue = F("Stangenröder Weg");
        break;
    }
    case 296658:
    {
        returnValue = F("Stangensteig");
        break;
    }
    case 296659:
    {
        returnValue = F("Stangenstr.");
        break;
    }
    case 296660:
    {
        returnValue = F("Stangenwalder Weg");
        break;
    }
    case 296661:
    {
        returnValue = F("Stangenwaldstr.");
        break;
    }
    case 296662:
    {
        returnValue = F("Stangenweg");
        break;
    }
    case 296663:
    {
        returnValue = F("Stangenwiese");
        break;
    }
    case 296664:
    {
        returnValue = F("Stangenäcker");
        break;
    }
    case 296665:
    {
        returnValue = F("Stangenäckerstr.");
        break;
    }
    case 296666:
    {
        returnValue = F("Stangeracker");
        break;
    }
    case 296667:
    {
        returnValue = F("Stangergasse");
        break;
    }
    case 296668:
    {
        returnValue = F("Stangerriegl");
        break;
    }
    case 296669:
    {
        returnValue = F("Stangerweg");
        break;
    }
    case 296670:
    {
        returnValue = F("Stangerötz");
        break;
    }
    case 296671:
    {
        returnValue = F("Stangestr.");
        break;
    }
    case 296672:
    {
        returnValue = F("Stanglberg");
        break;
    }
    case 296673:
    {
        returnValue = F("Stanglholzstr.");
        break;
    }
    case 296674:
    {
        returnValue = F("Stanglmühle");
        break;
    }
    case 296675:
    {
        returnValue = F("Stangsgasse");
        break;
    }
    case 296676:
    {
        returnValue = F("Stangsstr.");
        break;
    }
    case 296677:
    {
        returnValue = F("Stanhagen");
        break;
    }
    case 296678:
    {
        returnValue = F("Stanisla-Kist-Str.");
        break;
    }
    case 296679:
    {
        returnValue = F("Stanislaus-Göppert-Str.");
        break;
    }
    case 296680:
    {
        returnValue = F("Stankt Wendelinus-Str.");
        break;
    }
    case 296681:
    {
        returnValue = F("Stanley Gasse");
        break;
    }
    case 296682:
    {
        returnValue = F("Stanmmweg");
        break;
    }
    case 296683:
    {
        returnValue = F("Stann");
        break;
    }
    case 296684:
    {
        returnValue = F("Stannewischer Str.");
        break;
    }
    case 296685:
    {
        returnValue = F("Stannewischer Weg");
        break;
    }
    case 296686:
    {
        returnValue = F("Stannmauer");
        break;
    }
    case 296687:
    {
        returnValue = F("Stanzenbachstr.");
        break;
    }
    case 296688:
    {
        returnValue = F("Stanzlberg");
        break;
    }
    case 296689:
    {
        returnValue = F("Stapel");
        break;
    }
    case 296690:
    {
        returnValue = F("Stapelager Weg");
        break;
    }
    case 296691:
    {
        returnValue = F("Stapelberg");
        break;
    }
    case 296692:
    {
        returnValue = F("Stapelberger Weg");
        break;
    }
    case 296693:
    {
        returnValue = F("Stapelburger Str.");
        break;
    }
    case 296694:
    {
        returnValue = F("Stapele");
        break;
    }
    case 296695:
    {
        returnValue = F("Stapeler Dorfstr.");
        break;
    }
    case 296696:
    {
        returnValue = F("Stapeler Str.");
        break;
    }
    case 296697:
    {
        returnValue = F("Stapeler Weg");
        break;
    }
    case 296698:
    {
        returnValue = F("Stapelermoorer Str.");
        break;
    }
    case 296699:
    {
        returnValue = F("Stapelfelder Kirchstr.");
        break;
    }
    case 296700:
    {
        returnValue = F("Stapelhof");
        break;
    }
    case 296701:
    {
        returnValue = F("Stapelholmer Platz");
        break;
    }
    case 296702:
    {
        returnValue = F("Stapelholmer Ring");
        break;
    }
    case 296703:
    {
        returnValue = F("Stapelholmer Weg");
        break;
    }
    case 296704:
    {
        returnValue = F("Stapelhooger Wai");
        break;
    }
    case 296705:
    {
        returnValue = F("Stapelkamp");
        break;
    }
    case 296706:
    {
        returnValue = F("Stapelmoorer Str.");
        break;
    }
    case 296707:
    {
        returnValue = F("Stapelmoorer Weg");
        break;
    }
    case 296708:
    {
        returnValue = F("Stapelriede");
        break;
    }
    case 296709:
    {
        returnValue = F("Stapels Kamp");
        break;
    }
    case 296710:
    {
        returnValue = F("Stapelsberg");
        break;
    }
    case 296711:
    {
        returnValue = F("Stapelsgrund");
        break;
    }
    case 296712:
    {
        returnValue = F("Stapelskamp");
        break;
    }
    case 296713:
    {
        returnValue = F("Stapelstr.");
        break;
    }
    case 296714:
    {
        returnValue = F("Stapelsweg");
        break;
    }
    case 296715:
    {
        returnValue = F("Stapelteiche");
        break;
    }
    case 296716:
    {
        returnValue = F("Stapelweg");
        break;
    }
    case 296717:
    {
        returnValue = F("Stapfen");
        break;
    }
    case 296718:
    {
        returnValue = F("Stapfenteilweg");
        break;
    }
    case 296719:
    {
        returnValue = F("Stapferstr.");
        break;
    }
    case 296720:
    {
        returnValue = F("Stapferweg");
        break;
    }
    case 296721:
    {
        returnValue = F("Staphel");
        break;
    }
    case 296722:
    {
        returnValue = F("Stapp");
        break;
    }
    case 296723:
    {
        returnValue = F("Stappenbecker Weg");
        break;
    }
    case 296724:
    {
        returnValue = F("Stappenbeckweg");
        break;
    }
    case 296725:
    {
        returnValue = F("Stappengasse");
        break;
    }
    case 296726:
    {
        returnValue = F("Stapper Str.");
        break;
    }
    case 296727:
    {
        returnValue = F("Stapperweg");
        break;
    }
    case 296728:
    {
        returnValue = F("Stappgasse");
        break;
    }
    case 296729:
    {
        returnValue = F("Stappstr.");
        break;
    }
    case 296730:
    {
        returnValue = F("Stappweg");
        break;
    }
    case 296731:
    {
        returnValue = F("Starbacher Bahnhofstr.");
        break;
    }
    case 296732:
    {
        returnValue = F("Starbacher Str.");
        break;
    }
    case 296733:
    {
        returnValue = F("Starcholtstr.");
        break;
    }
    case 296734:
    {
        returnValue = F("Starck'scher Park");
        break;
    }
    case 296735:
    {
        returnValue = F("Staren-Weg");
        break;
    }
    case 296736:
    {
        returnValue = F("Starenberg-Str.");
        break;
    }
    case 296737:
    {
        returnValue = F("Starenbogen");
        break;
    }
    case 296738:
    {
        returnValue = F("Stareneck");
        break;
    }
    case 296739:
    {
        returnValue = F("Starengasse");
        break;
    }
    case 296740:
    {
        returnValue = F("Starengässle");
        break;
    }
    case 296741:
    {
        returnValue = F("Starenkamp");
        break;
    }
    case 296742:
    {
        returnValue = F("Starenplatz");
        break;
    }
    case 296743:
    {
        returnValue = F("Starenring");
        break;
    }
    case 296744:
    {
        returnValue = F("Starenschleife");
        break;
    }
    case 296745:
    {
        returnValue = F("Starenstieg");
        break;
    }
    case 296746:
    {
        returnValue = F("Starenstr.");
        break;
    }
    case 296747:
    {
        returnValue = F("Starenweg");
        break;
    }
    case 296748:
    {
        returnValue = F("Starenwinkel");
        break;
    }
    case 296749:
    {
        returnValue = F("Starenäcker");
        break;
    }
    case 296750:
    {
        returnValue = F("Stargarder Ring");
        break;
    }
    case 296751:
    {
        returnValue = F("Stargarder Str.");
        break;
    }
    case 296752:
    {
        returnValue = F("Stargarder Weg");
        break;
    }
    case 296753:
    {
        returnValue = F("Stargasse");
        break;
    }
    case 296754:
    {
        returnValue = F("Starhorstweg");
        break;
    }
    case 296755:
    {
        returnValue = F("Starkampstr.");
        break;
    }
    case 296756:
    {
        returnValue = F("Starke Str.");
        break;
    }
    case 296757:
    {
        returnValue = F("Starke-Gärten-Weg");
        break;
    }
    case 296758:
    {
        returnValue = F("Starkeland");
        break;
    }
    case 296759:
    {
        returnValue = F("Starkenackerweg");
        break;
    }
    case 296760:
    {
        returnValue = F("Starkenburger Str.");
        break;
    }
    case 296761:
    {
        returnValue = F("Starkenburgring");
        break;
    }
    case 296762:
    {
        returnValue = F("Starkenburgstr.");
        break;
    }
    case 296763:
    {
        returnValue = F("Starkenfeldstr.");
        break;
    }
    case 296764:
    {
        returnValue = F("Starkenmüllers Weg");
        break;
    }
    case 296765:
    {
        returnValue = F("Starkenäckerstr.");
        break;
    }
    case 296766:
    {
        returnValue = F("Starkerbrunnenweg");
        break;
    }
    case 296767:
    {
        returnValue = F("Starkern");
        break;
    }
    case 296768:
    {
        returnValue = F("Starkertshofener Str.");
        break;
    }
    case 296769:
    {
        returnValue = F("Starkholzbach");
        break;
    }
    case 296770:
    {
        returnValue = F("Starkholzbacher Str.");
        break;
    }
    case 296771:
    {
        returnValue = F("Starklef");
        break;
    }
    case 296772:
    {
        returnValue = F("Starkow");
        break;
    }
    case 296773:
    {
        returnValue = F("Starkshof");
        break;
    }
    case 296774:
    {
        returnValue = F("Starkstr.");
        break;
    }
    case 296775:
    {
        returnValue = F("Starksäckerweg");
        break;
    }
    case 296776:
    {
        returnValue = F("Starkäckerstr.");
        break;
    }
    case 296777:
    {
        returnValue = F("Starleiten");
        break;
    }
    case 296778:
    {
        returnValue = F("Starlohsstr.");
        break;
    }
    case 296779:
    {
        returnValue = F("Starmanns Weg");
        break;
    }
    case 296780:
    {
        returnValue = F("Starn");
        break;
    }
    case 296781:
    {
        returnValue = F("Starnberger Feldweg");
        break;
    }
    case 296782:
    {
        returnValue = F("Starnberger Str.");
        break;
    }
    case 296783:
    {
        returnValue = F("Starnberger Weg");
        break;
    }
    case 296784:
    {
        returnValue = F("Starnberger Wiese");
        break;
    }
    case 296785:
    {
        returnValue = F("Starnbräu-Passage");
        break;
    }
    case 296786:
    {
        returnValue = F("Starogarder Str.");
        break;
    }
    case 296787:
    {
        returnValue = F("Starrengasse");
        break;
    }
    case 296788:
    {
        returnValue = F("Starrvitz");
        break;
    }
    case 296789:
    {
        returnValue = F("Starsiedeler Str.");
        break;
    }
    case 296790:
    {
        returnValue = F("Starsiedeler Weg");
        break;
    }
    case 296791:
    {
        returnValue = F("Starsow");
        break;
    }
    case 296792:
    {
        returnValue = F("Starsower Str.");
        break;
    }
    case 296793:
    {
        returnValue = F("Starstr.");
        break;
    }
    case 296794:
    {
        returnValue = F("Start");
        break;
    }
    case 296795:
    {
        returnValue = F("Start Altmühl Radweg");
        break;
    }
    case 296796:
    {
        returnValue = F("Start- und Landebahn");
        break;
    }
    case 296797:
    {
        returnValue = F("Startrampe");
        break;
    }
    case 296798:
    {
        returnValue = F("Starweg");
        break;
    }
    case 296799:
    {
        returnValue = F("Starwinkel");
        break;
    }
    case 296800:
    {
        returnValue = F("Starzbergweg");
        break;
    }
    case 296801:
    {
        returnValue = F("Starzelstr.");
        break;
    }
    case 296802:
    {
        returnValue = F("Starzenbachstr.");
        break;
    }
    case 296803:
    {
        returnValue = F("Starzenbachweg");
        break;
    }
    case 296804:
    {
        returnValue = F("Starzend");
        break;
    }
    case 296805:
    {
        returnValue = F("Starzhausener Str.");
        break;
    }
    case 296806:
    {
        returnValue = F("Starzhauserstr.");
        break;
    }
    case 296807:
    {
        returnValue = F("Starzlachklamm Wanderweg");
        break;
    }
    case 296808:
    {
        returnValue = F("Starzlachweg");
        break;
    }
    case 296809:
    {
        returnValue = F("Starzweg");
        break;
    }
    case 296810:
    {
        returnValue = F("Staschwitzer Hauptstr.");
        break;
    }
    case 296811:
    {
        returnValue = F("Station 1, Geländestrecke mit Steilhang, Sumpfstrecke, Graben");
        break;
    }
    case 296812:
    {
        returnValue = F("Station 6, Knüppeldamm");
        break;
    }
    case 296813:
    {
        returnValue = F("Station 7, Geröllstrecke");
        break;
    }
    case 296814:
    {
        returnValue = F("Station 9, Begrenzte Durchfahrt");
        break;
    }
    case 296815:
    {
        returnValue = F("Stationenweg");
        break;
    }
    case 296816:
    {
        returnValue = F("Stationsberg");
        break;
    }
    case 296817:
    {
        returnValue = F("Stationsbergstr.");
        break;
    }
    case 296818:
    {
        returnValue = F("Stationsbergweg");
        break;
    }
    case 296819:
    {
        returnValue = F("Stationsstr.");
        break;
    }
    case 296820:
    {
        returnValue = F("Stationsweg");
        break;
    }
    case 296821:
    {
        returnValue = F("Stationsweg Küllstedt");
        break;
    }
    case 296822:
    {
        returnValue = F("Stato");
        break;
    }
    case 296823:
    {
        returnValue = F("Stattdamm");
        break;
    }
    case 296824:
    {
        returnValue = F("Statter Weg");
        break;
    }
    case 296825:
    {
        returnValue = F("Statthalterstr.");
        break;
    }
    case 296826:
    {
        returnValue = F("Stattlerstr.");
        break;
    }
    case 296827:
    {
        returnValue = F("Stattmannstr.");
        break;
    }
    case 296828:
    {
        returnValue = F("Stattmillerweg");
        break;
    }
    case 296829:
    {
        returnValue = F("Stattstr.");
        break;
    }
    case 296830:
    {
        returnValue = F("Stattäcker");
        break;
    }
    case 296831:
    {
        returnValue = F("Statzenbachstr.");
        break;
    }
    case 296832:
    {
        returnValue = F("Staubachweg");
        break;
    }
    case 296833:
    {
        returnValue = F("Stauberberg");
        break;
    }
    case 296834:
    {
        returnValue = F("Stauberstr.");
        break;
    }
    case 296835:
    {
        returnValue = F("Staubesandweg");
        break;
    }
    case 296836:
    {
        returnValue = F("Staubgasse");
        break;
    }
    case 296837:
    {
        returnValue = F("Staubinger Str.");
        break;
    }
    case 296838:
    {
        returnValue = F("Staubstr.");
        break;
    }
    case 296839:
    {
        returnValue = F("Staubuschweg");
        break;
    }
    case 296840:
    {
        returnValue = F("Stauchaer Str.");
        break;
    }
    case 296841:
    {
        returnValue = F("Staucharting Geräumt");
        break;
    }
    case 296842:
    {
        returnValue = F("Stauchartinger Weg");
        break;
    }
    case 296843:
    {
        returnValue = F("Stauchberg");
        break;
    }
    case 296844:
    {
        returnValue = F("Stauchbrunnen");
        break;
    }
    case 296845:
    {
        returnValue = F("Stauchbrunnenweg");
        break;
    }
    case 296846:
    {
        returnValue = F("Staucherfeldweg");
        break;
    }
    case 296847:
    {
        returnValue = F("Stauchestr.");
        break;
    }
    case 296848:
    {
        returnValue = F("Stauchgasse");
        break;
    }
    case 296849:
    {
        returnValue = F("Stauchitzer Str.");
        break;
    }
    case 296850:
    {
        returnValue = F("Stauchitzer Weg");
        break;
    }
    case 296851:
    {
        returnValue = F("Stauchstr.");
        break;
    }
    case 296852:
    {
        returnValue = F("Stauchäcker");
        break;
    }
    case 296853:
    {
        returnValue = F("Stauchäckerweg");
        break;
    }
    case 296854:
    {
        returnValue = F("Stauckefeldstr.");
        break;
    }
    case 296855:
    {
        returnValue = F("Staudach");
        break;
    }
    case 296856:
    {
        returnValue = F("Staudacher Str.");
        break;
    }
    case 296857:
    {
        returnValue = F("Staudacherstr.");
        break;
    }
    case 296858:
    {
        returnValue = F("Staudacherweg");
        break;
    }
    case 296859:
    {
        returnValue = F("Staudachstr.");
        break;
    }
    case 296860:
    {
        returnValue = F("Staudachweg");
        break;
    }
    case 296861:
    {
        returnValue = F("Staudamm");
        break;
    }
    case 296862:
    {
        returnValue = F("Staudammstr.");
        break;
    }
    case 296863:
    {
        returnValue = F("Staudammweg");
        break;
    }
    case 296864:
    {
        returnValue = F("Staude");
        break;
    }
    case 296865:
    {
        returnValue = F("Stauden");
        break;
    }
    case 296866:
    {
        returnValue = F("Staudenallee");
        break;
    }
    case 296867:
    {
        returnValue = F("Staudenberg");
        break;
    }
    case 296868:
    {
        returnValue = F("Staudenbergstr.");
        break;
    }
    case 296869:
    {
        returnValue = F("Staudenbergweg");
        break;
    }
    case 296870:
    {
        returnValue = F("Staudenbuckelallee");
        break;
    }
    case 296871:
    {
        returnValue = F("Staudenesch");
        break;
    }
    case 296872:
    {
        returnValue = F("Staudenfeld");
        break;
    }
    case 296873:
    {
        returnValue = F("Staudenfeldweg");
        break;
    }
    case 296874:
    {
        returnValue = F("Staudengarten");
        break;
    }
    case 296875:
    {
        returnValue = F("Staudengraben");
        break;
    }
    case 296876:
    {
        returnValue = F("Staudenhöfe");
        break;
    }
    case 296877:
    {
        returnValue = F("Staudenmoosstr.");
        break;
    }
    case 296878:
    {
        returnValue = F("Staudenring");
        break;
    }
    case 296879:
    {
        returnValue = F("Staudenschedl");
        break;
    }
    case 296880:
    {
        returnValue = F("Staudenstr.");
        break;
    }
    case 296881:
    {
        returnValue = F("Staudentellenweg");
        break;
    }
    case 296882:
    {
        returnValue = F("Staudenweg");
        break;
    }
    case 296883:
    {
        returnValue = F("Staudenwiese");
        break;
    }
    case 296884:
    {
        returnValue = F("Staudenwinkel");
        break;
    }
    case 296885:
    {
        returnValue = F("Staudenäcker");
        break;
    }
    case 296886:
    {
        returnValue = F("Staudernheimer Str.");
        break;
    }
    case 296887:
    {
        returnValue = F("Stauderweg");
        break;
    }
    case 296888:
    {
        returnValue = F("Staudesgäßle");
        break;
    }
    case 296889:
    {
        returnValue = F("Staudhamer Str.");
        break;
    }
    case 296890:
    {
        returnValue = F("Staudhausener Str.");
        break;
    }
    case 296891:
    {
        returnValue = F("Staudig");
        break;
    }
    case 296892:
    {
        returnValue = F("Staudigl Geräumt");
        break;
    }
    case 296893:
    {
        returnValue = F("Staudigweg");
        break;
    }
    case 296894:
    {
        returnValue = F("Staudingerstr.");
        break;
    }
    case 296895:
    {
        returnValue = F("Staudingstr.");
        break;
    }
    case 296896:
    {
        returnValue = F("Staudnitzstr.");
        break;
    }
    case 296897:
    {
        returnValue = F("Staudter Str.");
        break;
    }
    case 296898:
    {
        returnValue = F("Staudtgasse");
        break;
    }
    case 296899:
    {
        returnValue = F("Staudtstr.");
        break;
    }
    case 296900:
    {
        returnValue = F("Stauern");
        break;
    }
    case 296901:
    {
        returnValue = F("Stauerscher Weg");
        break;
    }
    case 296902:
    {
        returnValue = F("Stauertwedt");
        break;
    }
    case 296903:
    {
        returnValue = F("Stauf");
        break;
    }
    case 296904:
    {
        returnValue = F("Staufelbergweg");
        break;
    }
    case 296905:
    {
        returnValue = F("Staufenberg");
        break;
    }
    case 296906:
    {
        returnValue = F("Staufenberger Str.");
        break;
    }
    case 296907:
    {
        returnValue = F("Staufenberger Weg");
        break;
    }
    case 296908:
    {
        returnValue = F("Staufenbergstr.");
        break;
    }
    case 296909:
    {
        returnValue = F("Staufenblick");
        break;
    }
    case 296910:
    {
        returnValue = F("Staufenblickweg");
        break;
    }
    case 296911:
    {
        returnValue = F("Staufenburg");
        break;
    }
    case 296912:
    {
        returnValue = F("Staufenburgstr.");
        break;
    }
    case 296913:
    {
        returnValue = F("Staufenecker Str.");
        break;
    }
    case 296914:
    {
        returnValue = F("Staufeneckerstr.");
        break;
    }
    case 296915:
    {
        returnValue = F("Staufeneckstr.");
        break;
    }
    case 296916:
    {
        returnValue = F("Staufener Grundweg");
        break;
    }
    case 296917:
    {
        returnValue = F("Staufener Str.");
        break;
    }
    case 296918:
    {
        returnValue = F("Staufenkopfweg");
        break;
    }
    case 296919:
    {
        returnValue = F("Staufenpark");
        break;
    }
    case 296920:
    {
        returnValue = F("Staufenstr.");
        break;
    }
    case 296921:
    {
        returnValue = F("Staufenweg");
        break;
    }
    case 296922:
    {
        returnValue = F("Staufer Ring");
        break;
    }
    case 296923:
    {
        returnValue = F("Staufer Str.");
        break;
    }
    case 296924:
    {
        returnValue = F("Staufer Weg");
        break;
    }
    case 296925:
    {
        returnValue = F("Staufer-Ring");
        break;
    }
    case 296926:
    {
        returnValue = F("Staufergasse");
        break;
    }
    case 296927:
    {
        returnValue = F("Stauferlandstr.");
        break;
    }
    case 296928:
    {
        returnValue = F("Stauferreil");
        break;
    }
    case 296929:
    {
        returnValue = F("Stauferring");
        break;
    }
    case 296930:
    {
        returnValue = F("Stauferstr.");
        break;
    }
    case 296931:
    {
        returnValue = F("Stauferweg");
        break;
    }
    case 296932:
    {
        returnValue = F("Stauffenbergallee");
        break;
    }
    case 296933:
    {
        returnValue = F("Stauffenbergplatz");
        break;
    }
    case 296934:
    {
        returnValue = F("Stauffenbergring");
        break;
    }
    case 296935:
    {
        returnValue = F("Stauffenbergstr.");
        break;
    }
    case 296936:
    {
        returnValue = F("Stauffenbergweg");
        break;
    }
    case 296937:
    {
        returnValue = F("Stauffenburg");
        break;
    }
    case 296938:
    {
        returnValue = F("Stauffendorfer Str.");
        break;
    }
    case 296939:
    {
        returnValue = F("Stauffenstr.");
        break;
    }
    case 296940:
    {
        returnValue = F("Stauffenweg");
        break;
    }
    case 296941:
    {
        returnValue = F("Stauffersbergstr.");
        break;
    }
    case 296942:
    {
        returnValue = F("Staufferstr.");
        break;
    }
    case 296943:
    {
        returnValue = F("Staufferweg");
        break;
    }
    case 296944:
    {
        returnValue = F("Staufner Str.");
        break;
    }
    case 296945:
    {
        returnValue = F("Staugarten");
        break;
    }
    case 296946:
    {
        returnValue = F("Staugasse");
        break;
    }
    case 296947:
    {
        returnValue = F("Staugärtenstr.");
        break;
    }
    case 296948:
    {
        returnValue = F("Staumauer");
        break;
    }
    case 296949:
    {
        returnValue = F("Staumauer Muldenberg");
        break;
    }
    case 296950:
    {
        returnValue = F("Staumauer Rappbode-Vorsperre");
        break;
    }
    case 296951:
    {
        returnValue = F("Staumühler Str.");
        break;
    }
    case 296952:
    {
        returnValue = F("Stauner Weg");
        break;
    }
    case 296953:
    {
        returnValue = F("Staunsfeld");
        break;
    }
    case 296954:
    {
        returnValue = F("Staupitzer Str.");
        break;
    }
    case 296955:
    {
        returnValue = F("Staupitzstr.");
        break;
    }
    case 296956:
    {
        returnValue = F("Staureweg");
        break;
    }
    case 296957:
    {
        returnValue = F("Stausee");
        break;
    }
    case 296958:
    {
        returnValue = F("Stauseeblick");
        break;
    }
    case 296959:
    {
        returnValue = F("Stauseestr.");
        break;
    }
    case 296960:
    {
        returnValue = F("Stauseeweg");
        break;
    }
    case 296961:
    {
        returnValue = F("Stausmark");
        break;
    }
    case 296962:
    {
        returnValue = F("Staustr.");
        break;
    }
    case 296963:
    {
        returnValue = F("Staustufe");
        break;
    }
    case 296964:
    {
        returnValue = F("Stautderweg");
        break;
    }
    case 296965:
    {
        returnValue = F("Stauteichstr.");
        break;
    }
    case 296966:
    {
        returnValue = F("Stauteichweg");
        break;
    }
    case 296967:
    {
        returnValue = F("Stautenberg");
        break;
    }
    case 296968:
    {
        returnValue = F("Stautzertstr.");
        break;
    }
    case 296969:
    {
        returnValue = F("Stauvermannweg");
        break;
    }
    case 296970:
    {
        returnValue = F("Stauverweg");
        break;
    }
    case 296971:
    {
        returnValue = F("Stauweg");
        break;
    }
    case 296972:
    {
        returnValue = F("Stauwehr");
        break;
    }
    case 296973:
    {
        returnValue = F("Stauweiherweg");
        break;
    }
    case 296974:
    {
        returnValue = F("Stauwiesenweg");
        break;
    }
    case 296975:
    {
        returnValue = F("Staveern");
        break;
    }
    case 296976:
    {
        returnValue = F("Stavenbrook");
        break;
    }
    case 296977:
    {
        returnValue = F("Stavener Str.");
        break;
    }
    case 296978:
    {
        returnValue = F("Stavenhagener Chaussee");
        break;
    }
    case 296979:
    {
        returnValue = F("Stavenhagener Str.");
        break;
    }
    case 296980:
    {
        returnValue = F("Stavenhagenstr.");
        break;
    }
    case 296981:
    {
        returnValue = F("Stavenhof");
        break;
    }
    case 296982:
    {
        returnValue = F("Stavenort");
        break;
    }
    case 296983:
    {
        returnValue = F("Stavenort-Brücke");
        break;
    }
    case 296984:
    {
        returnValue = F("Stavenow");
        break;
    }
    case 296985:
    {
        returnValue = F("Stavenower Str.");
        break;
    }
    case 296986:
    {
        returnValue = F("Stavenowstr.");
        break;
    }
    case 296987:
    {
        returnValue = F("Stavenstr.");
        break;
    }
    case 296988:
    {
        returnValue = F("Staverner Str.");
        break;
    }
    case 296989:
    {
        returnValue = F("Stavorenweg");
        break;
    }
    case 296990:
    {
        returnValue = F("Stawedder");
        break;
    }
    case 296991:
    {
        returnValue = F("Staxstr.");
        break;
    }
    case 296992:
    {
        returnValue = F("Staystr.");
        break;
    }
    case 296993:
    {
        returnValue = F("Staywaldgrenzweg");
        break;
    }
    case 296994:
    {
        returnValue = F("Staßfurter Höhe");
        break;
    }
    case 296995:
    {
        returnValue = F("Staßfurter Str.");
        break;
    }
    case 296996:
    {
        returnValue = F("Staßfurter Weg");
        break;
    }
    case 296997:
    {
        returnValue = F("Ste. Suzanner Str.");
        break;
    }
    case 296998:
    {
        returnValue = F("Ste.-Marie-du-Mont-Str.");
        break;
    }
    case 296999:
    {
        returnValue = F("Stebach");
        break;
    }
    case 297000:
    {
        returnValue = F("Stebacher Str.");
        break;
    }
    case 297001:
    {
        returnValue = F("Stebbacher Str.");
        break;
    }
    case 297002:
    {
        returnValue = F("Stebener Str.");
        break;
    }
    case 297003:
    {
        returnValue = F("Stebener Weg");
        break;
    }
    case 297004:
    {
        returnValue = F("Stebenhaberstr.");
        break;
    }
    case 297005:
    {
        returnValue = F("Stebenstr.");
        break;
    }
    case 297006:
    {
        returnValue = F("Stechauer Str.");
        break;
    }
    case 297007:
    {
        returnValue = F("Stechbahn");
        break;
    }
    case 297008:
    {
        returnValue = F("Stechelsweg");
        break;
    }
    case 297009:
    {
        returnValue = F("Stechenberg");
        break;
    }
    case 297010:
    {
        returnValue = F("Stechendorf");
        break;
    }
    case 297011:
    {
        returnValue = F("Stecheraweg");
        break;
    }
    case 297012:
    {
        returnValue = F("Stechergasse");
        break;
    }
    case 297013:
    {
        returnValue = F("Stechers Graben");
        break;
    }
    case 297014:
    {
        returnValue = F("Stecherschleuser Weg");
        break;
    }
    case 297015:
    {
        returnValue = F("Stechershütteweg");
        break;
    }
    case 297016:
    {
        returnValue = F("Stecherweg");
        break;
    }
    case 297017:
    {
        returnValue = F("Stechinellistr.");
        break;
    }
    case 297018:
    {
        returnValue = F("Stechlaubweg");
        break;
    }
    case 297019:
    {
        returnValue = F("Stechliner Weg");
        break;
    }
    case 297020:
    {
        returnValue = F("Stechlinseestr.");
        break;
    }
    case 297021:
    {
        returnValue = F("Stechlring");
        break;
    }
    case 297022:
    {
        returnValue = F("Stechow");
        break;
    }
    case 297023:
    {
        returnValue = F("Stechower Landstr.");
        break;
    }
    case 297024:
    {
        returnValue = F("Stechower Str.");
        break;
    }
    case 297025:
    {
        returnValue = F("Stechpalmenweg");
        break;
    }
    case 297026:
    {
        returnValue = F("Steckackerweg");
        break;
    }
    case 297027:
    {
        returnValue = F("Steckbrunnenstr.");
        break;
    }
    case 297028:
    {
        returnValue = F("Steckbyer Str.");
        break;
    }
    case 297029:
    {
        returnValue = F("Steckebahn");
        break;
    }
    case 297030:
    {
        returnValue = F("Steckelberg");
        break;
    }
    case 297031:
    {
        returnValue = F("Steckelberghauptweg");
        break;
    }
    case 297032:
    {
        returnValue = F("Steckelbergstr.");
        break;
    }
    case 297033:
    {
        returnValue = F("Steckeler Str.");
        break;
    }
    case 297034:
    {
        returnValue = F("Steckelmacherstr.");
        break;
    }
    case 297035:
    {
        returnValue = F("Steckelnbergweg");
        break;
    }
    case 297036:
    {
        returnValue = F("Steckelower");
        break;
    }
    case 297037:
    {
        returnValue = F("Steckelsdorfer Bergstr.");
        break;
    }
    case 297038:
    {
        returnValue = F("Steckelsdorfer Gartenstr.");
        break;
    }
    case 297039:
    {
        returnValue = F("Steckelsdorfer Havelweg");
        break;
    }
    case 297040:
    {
        returnValue = F("Steckelsdorfer Str.");
        break;
    }
    case 297041:
    {
        returnValue = F("Steckelsdorfer Weg");
        break;
    }
    case 297042:
    {
        returnValue = F("Steckenberg");
        break;
    }
    case 297043:
    {
        returnValue = F("Steckenbergweg");
        break;
    }
    case 297044:
    {
        returnValue = F("Steckenborner Str.");
        break;
    }
    case 297045:
    {
        returnValue = F("Steckenbühlweg");
        break;
    }
    case 297046:
    {
        returnValue = F("Steckendorf");
        break;
    }
    case 297047:
    {
        returnValue = F("Steckengasse");
        break;
    }
    case 297048:
    {
        returnValue = F("Steckenhaltweg");
        break;
    }
    case 297049:
    {
        returnValue = F("Steckenhofweg");
        break;
    }
    case 297050:
    {
        returnValue = F("Steckenmesser");
        break;
    }
    case 297051:
    {
        returnValue = F("Steckenried");
        break;
    }
    case 297052:
    {
        returnValue = F("Steckenrother Weg");
        break;
    }
    case 297053:
    {
        returnValue = F("Steckensteiner Str.");
        break;
    }
    case 297054:
    {
        returnValue = F("Steckensteiner Wald");
        break;
    }
    case 297055:
    {
        returnValue = F("Steckenstr.");
        break;
    }
    case 297056:
    {
        returnValue = F("Steckensweg");
        break;
    }
    case 297057:
    {
        returnValue = F("Steckentalstr.");
        break;
    }
    case 297058:
    {
        returnValue = F("Steckentalsträssle");
        break;
    }
    case 297059:
    {
        returnValue = F("Steckerweg");
        break;
    }
    case 297060:
    {
        returnValue = F("Stecketweg");
        break;
    }
    case 297061:
    {
        returnValue = F("Steckfeldweg");
        break;
    }
    case 297062:
    {
        returnValue = F("Steckfortkamp");
        break;
    }
    case 297063:
    {
        returnValue = F("Steckhaldeweg");
        break;
    }
    case 297064:
    {
        returnValue = F("Steckkuhl");
        break;
    }
    case 297065:
    {
        returnValue = F("Stecklenberger Allee");
        break;
    }
    case 297066:
    {
        returnValue = F("Stecklenberger Bienenkopf");
        break;
    }
    case 297067:
    {
        returnValue = F("Stecklenberger Chausee");
        break;
    }
    case 297068:
    {
        returnValue = F("Stecklenberger Emthöfen");
        break;
    }
    case 297069:
    {
        returnValue = F("Stecklenberger Hauptstr.");
        break;
    }
    case 297070:
    {
        returnValue = F("Stecklenberger Küchenberg");
        break;
    }
    case 297071:
    {
        returnValue = F("Stecklenberger Schulgasse");
        break;
    }
    case 297072:
    {
        returnValue = F("Stecklenberger Str.");
        break;
    }
    case 297073:
    {
        returnValue = F("Stecklersbeeke");
        break;
    }
    case 297074:
    {
        returnValue = F("Stecklingsweg");
        break;
    }
    case 297075:
    {
        returnValue = F("Stecknadelallee");
        break;
    }
    case 297076:
    {
        returnValue = F("Stecknitztal");
        break;
    }
    case 297077:
    {
        returnValue = F("Stecknitzweg");
        break;
    }
    case 297078:
    {
        returnValue = F("Steckschlagweg");
        break;
    }
    case 297079:
    {
        returnValue = F("Steckswiese");
        break;
    }
    case 297080:
    {
        returnValue = F("Steckwaldweg");
        break;
    }
    case 297081:
    {
        returnValue = F("Steckwiese");
        break;
    }
    case 297082:
    {
        returnValue = F("Stedarer Weg");
        break;
    }
    case 297083:
    {
        returnValue = F("Steddorfer Str.");
        break;
    }
    case 297084:
    {
        returnValue = F("Stedebach");
        break;
    }
    case 297085:
    {
        returnValue = F("Stedeberger Weg");
        break;
    }
    case 297086:
    {
        returnValue = F("Stedener Str.");
        break;
    }
    case 297087:
    {
        returnValue = F("Stedenhofstr.");
        break;
    }
    case 297088:
    {
        returnValue = F("Stederaustr.");
        break;
    }
    case 297089:
    {
        returnValue = F("Stederdorfer Str.");
        break;
    }
    case 297090:
    {
        returnValue = F("Stederdorfer Weg");
        break;
    }
    case 297091:
    {
        returnValue = F("Stederweg");
        break;
    }
    case 297092:
    {
        returnValue = F("Stedigasse");
        break;
    }
    case 297093:
    {
        returnValue = F("Stedigsrain");
        break;
    }
    case 297094:
    {
        returnValue = F("Stedinger Str.");
        break;
    }
    case 297095:
    {
        returnValue = F("Stedinger Weg");
        break;
    }
    case 297096:
    {
        returnValue = F("Stedingsmühler Str.");
        break;
    }
    case 297097:
    {
        returnValue = F("Stedingweg");
        break;
    }
    case 297098:
    {
        returnValue = F("Stedorfer Bahnhofstr.");
        break;
    }
    case 297099:
    {
        returnValue = F("Stedten");
        break;
    }
    case 297100:
    {
        returnValue = F("Stedtenborn");
        break;
    }
    case 297101:
    {
        returnValue = F("Stedtener Bahnhofstr.");
        break;
    }
    case 297102:
    {
        returnValue = F("Stedtener Str.");
        break;
    }
    case 297103:
    {
        returnValue = F("Stedtenstr.");
        break;
    }
    case 297104:
    {
        returnValue = F("Stedtenweg");
        break;
    }
    case 297105:
    {
        returnValue = F("Stedtfelder Str.");
        break;
    }
    case 297106:
    {
        returnValue = F("Stedtlinger Str.");
        break;
    }
    case 297107:
    {
        returnValue = F("Stedtlinger Weg");
        break;
    }
    case 297108:
    {
        returnValue = F("Stedumer Weg");
        break;
    }
    case 297109:
    {
        returnValue = F("Steebrack");
        break;
    }
    case 297110:
    {
        returnValue = F("Steebstr.");
        break;
    }
    case 297111:
    {
        returnValue = F("Steedener Anlagen");
        break;
    }
    case 297112:
    {
        returnValue = F("Steedener Hauptstr.");
        break;
    }
    case 297113:
    {
        returnValue = F("Steedener Str.");
        break;
    }
    case 297114:
    {
        returnValue = F("Steedener Weg");
        break;
    }
    case 297115:
    {
        returnValue = F("Steeg");
        break;
    }
    case 297116:
    {
        returnValue = F("Steege");
        break;
    }
    case 297117:
    {
        returnValue = F("Steegenbreede");
        break;
    }
    case 297118:
    {
        returnValue = F("Steegener Chaussee");
        break;
    }
    case 297119:
    {
        returnValue = F("Steegener Str.");
        break;
    }
    case 297120:
    {
        returnValue = F("Steegenwaldstr.");
        break;
    }
    case 297121:
    {
        returnValue = F("Steegenweg");
        break;
    }
    case 297122:
    {
        returnValue = F("Steeger Berg");
        break;
    }
    case 297123:
    {
        returnValue = F("Steeger Siedlung");
        break;
    }
    case 297124:
    {
        returnValue = F("Steeger Str.");
        break;
    }
    case 297125:
    {
        returnValue = F("Steeger Winkel");
        break;
    }
    case 297126:
    {
        returnValue = F("Steegerhöhe");
        break;
    }
    case 297127:
    {
        returnValue = F("Steegerstr.");
        break;
    }
    case 297128:
    {
        returnValue = F("Steeggasse");
        break;
    }
    case 297129:
    {
        returnValue = F("Steeghütter Weg");
        break;
    }
    case 297130:
    {
        returnValue = F("Steegmannstr.");
        break;
    }
    case 297131:
    {
        returnValue = F("Steegmattstr.");
        break;
    }
    case 297132:
    {
        returnValue = F("Steegskamp");
        break;
    }
    case 297133:
    {
        returnValue = F("Steegstr.");
        break;
    }
    case 297134:
    {
        returnValue = F("Steekenfeld");
        break;
    }
    case 297135:
    {
        returnValue = F("Steen Enn");
        break;
    }
    case 297136:
    {
        returnValue = F("Steenacker");
        break;
    }
    case 297137:
    {
        returnValue = F("Steenackersweg");
        break;
    }
    case 297138:
    {
        returnValue = F("Steenbarg");
        break;
    }
    case 297139:
    {
        returnValue = F("Steenbecksweg");
        break;
    }
    case 297140:
    {
        returnValue = F("Steenbeek");
        break;
    }
    case 297141:
    {
        returnValue = F("Steenbeksmoor");
        break;
    }
    case 297142:
    {
        returnValue = F("Steenbettweg");
        break;
    }
    case 297143:
    {
        returnValue = F("Steenbrede");
        break;
    }
    case 297144:
    {
        returnValue = F("Steenbrey");
        break;
    }
    case 297145:
    {
        returnValue = F("Steenbrook");
        break;
    }
    case 297146:
    {
        returnValue = F("Steene Dyk");
        break;
    }
    case 297147:
    {
        returnValue = F("Steenebarg");
        break;
    }
    case 297148:
    {
        returnValue = F("Steenekamp");
        break;
    }
    case 297149:
    {
        returnValue = F("Steener Weg");
        break;
    }
    case 297150:
    {
        returnValue = F("Steenerbuschstr.");
        break;
    }
    case 297151:
    {
        returnValue = F("Steenerich");
        break;
    }
    case 297152:
    {
        returnValue = F("Steeneschwinkel");
        break;
    }
    case 297153:
    {
        returnValue = F("Steenewark");
        break;
    }
    case 297154:
    {
        returnValue = F("Steenfadtberg");
        break;
    }
    case 297155:
    {
        returnValue = F("Steenfeldskamp");
        break;
    }
    case 297156:
    {
        returnValue = F("Steenflage");
        break;
    }
    case 297157:
    {
        returnValue = F("Steenforths Moor");
        break;
    }
    case 297158:
    {
        returnValue = F("Steenfurtsweg");
        break;
    }
    case 297159:
    {
        returnValue = F("Steenhafer Berg");
        break;
    }
    case 297160:
    {
        returnValue = F("Steenhalensweg");
        break;
    }
    case 297161:
    {
        returnValue = F("Steenhof");
        break;
    }
    case 297162:
    {
        returnValue = F("Steenhorn");
        break;
    }
    case 297163:
    {
        returnValue = F("Steenig Redder");
        break;
    }
    case 297164:
    {
        returnValue = F("Steenkamp");
        break;
    }
    case 297165:
    {
        returnValue = F("Steenkampenweg");
        break;
    }
    case 297166:
    {
        returnValue = F("Steenkampsdamm");
        break;
    }
    case 297167:
    {
        returnValue = F("Steenkampweg");
        break;
    }
    case 297168:
    {
        returnValue = F("Steenkelandstr.");
        break;
    }
    case 297169:
    {
        returnValue = F("Steenkenkamp");
        break;
    }
    case 297170:
    {
        returnValue = F("Steenkensweg");
        break;
    }
    case 297171:
    {
        returnValue = F("Steenker Weg");
        break;
    }
    case 297172:
    {
        returnValue = F("Steenklippen");
        break;
    }
    case 297173:
    {
        returnValue = F("Steenknüll");
        break;
    }
    case 297174:
    {
        returnValue = F("Steenkoppel");
        break;
    }
    case 297175:
    {
        returnValue = F("Steenkrug");
        break;
    }
    case 297176:
    {
        returnValue = F("Steenkrütz");
        break;
    }
    case 297177:
    {
        returnValue = F("Steenland");
        break;
    }
    case 297178:
    {
        returnValue = F("Steenlegensweg");
        break;
    }
    case 297179:
    {
        returnValue = F("Steenloskamp");
        break;
    }
    case 297180:
    {
        returnValue = F("Steenovense Weg");
        break;
    }
    case 297181:
    {
        returnValue = F("Steenpadd");
        break;
    }
    case 297182:
    {
        returnValue = F("Steenpättken");
        break;
    }
    case 297183:
    {
        returnValue = F("Steenrader Weg");
        break;
    }
    case 297184:
    {
        returnValue = F("Steenredder");
        break;
    }
    case 297185:
    {
        returnValue = F("Steenrehm");
        break;
    }
    case 297186:
    {
        returnValue = F("Steenrott");
        break;
    }
    case 297187:
    {
        returnValue = F("Steens");
        break;
    }
    case 297188:
    {
        returnValue = F("Steens Höchte");
        break;
    }
    case 297189:
    {
        returnValue = F("Steensberg");
        break;
    }
    case 297190:
    {
        returnValue = F("Steensbrook");
        break;
    }
    case 297191:
    {
        returnValue = F("Steensbüll");
        break;
    }
    case 297192:
    {
        returnValue = F("Steenschift");
        break;
    }
    case 297193:
    {
        returnValue = F("Steenschlatweg");
        break;
    }
    case 297194:
    {
        returnValue = F("Steenser Str.");
        break;
    }
    case 297195:
    {
        returnValue = F("Steensrade");
        break;
    }
    case 297196:
    {
        returnValue = F("Steenstraat");
        break;
    }
    case 297197:
    {
        returnValue = F("Steensweg");
        break;
    }
    case 297198:
    {
        returnValue = F("Steentillenweg");
        break;
    }
    case 297199:
    {
        returnValue = F("Steenweg");
        break;
    }
    case 297200:
    {
        returnValue = F("Steenwijker Ring");
        break;
    }
    case 297201:
    {
        returnValue = F("Steenwykstr.");
        break;
    }
    case 297202:
    {
        returnValue = F("Steepenweg");
        break;
    }
    case 297203:
    {
        returnValue = F("Steeriede");
        break;
    }
    case 297204:
    {
        returnValue = F("Steerner Grenzweg");
        break;
    }
    case 297205:
    {
        returnValue = F("Steertmoor");
        break;
    }
    case 297206:
    {
        returnValue = F("Steertmoorstr.");
        break;
    }
    case 297207:
    {
        returnValue = F("Steertmoorweg");
        break;
    }
    case 297208:
    {
        returnValue = F("Steertpoggweg");
        break;
    }
    case 297209:
    {
        returnValue = F("Steetweg");
        break;
    }
    case 297210:
    {
        returnValue = F("Steetwiesen");
        break;
    }
    case 297211:
    {
        returnValue = F("Stefan-Andres-Str.");
        break;
    }
    case 297212:
    {
        returnValue = F("Stefan-Andres-Tal-Str.");
        break;
    }
    case 297213:
    {
        returnValue = F("Stefan-Brand-Str.");
        break;
    }
    case 297214:
    {
        returnValue = F("Stefan-Dietrich-Str.");
        break;
    }
    case 297215:
    {
        returnValue = F("Stefan-Dohm-Str.");
        break;
    }
    case 297216:
    {
        returnValue = F("Stefan-Fröhlich-Weg");
        break;
    }
    case 297217:
    {
        returnValue = F("Stefan-George-Str.");
        break;
    }
    case 297218:
    {
        returnValue = F("Stefan-George-Weg");
        break;
    }
    case 297219:
    {
        returnValue = F("Stefan-Glonner-Str.");
        break;
    }
    case 297220:
    {
        returnValue = F("Stefan-Günthner-Weg");
        break;
    }
    case 297221:
    {
        returnValue = F("Stefan-Heym-Str.");
        break;
    }
    case 297222:
    {
        returnValue = F("Stefan-Hoog-Str.");
        break;
    }
    case 297223:
    {
        returnValue = F("Stefan-Kern-Winkel");
        break;
    }
    case 297224:
    {
        returnValue = F("Stefan-Krämer-Str.");
        break;
    }
    case 297225:
    {
        returnValue = F("Stefan-Kuhn-Str.");
        break;
    }
    case 297226:
    {
        returnValue = F("Stefan-Lochner-Str.");
        break;
    }
    case 297227:
    {
        returnValue = F("Stefan-Lochner-Weg");
        break;
    }
    case 297228:
    {
        returnValue = F("Stefan-Ludwig-Roth-Weg");
        break;
    }
    case 297229:
    {
        returnValue = F("Stefan-Nau-Str.");
        break;
    }
    case 297230:
    {
        returnValue = F("Stefan-Paeßens-Str.");
        break;
    }
    case 297231:
    {
        returnValue = F("Stefan-Rahl-Str.");
        break;
    }
    case 297232:
    {
        returnValue = F("Stefan-Schatz-Str.");
        break;
    }
    case 297233:
    {
        returnValue = F("Stefan-Schröder-Str.");
        break;
    }
    case 297234:
    {
        returnValue = F("Stefan-Schuster-Str.");
        break;
    }
    case 297235:
    {
        returnValue = F("Stefan-Simon-Str.");
        break;
    }
    case 297236:
    {
        returnValue = F("Stefan-Söhlmann-Str.");
        break;
    }
    case 297237:
    {
        returnValue = F("Stefan-Zweig-Str.");
        break;
    }
    case 297238:
    {
        returnValue = F("Stefan-Zweig-Weg");
        break;
    }
    case 297239:
    {
        returnValue = F("Stefan-von-Hertefeld-Str.");
        break;
    }
    case 297240:
    {
        returnValue = F("Stefanie-von-Strechine-Str.");
        break;
    }
    case 297241:
    {
        returnValue = F("Stefanienstr.");
        break;
    }
    case 297242:
    {
        returnValue = F("Stefaniestr.");
        break;
    }
    case 297243:
    {
        returnValue = F("Stefanistr.");
        break;
    }
    case 297244:
    {
        returnValue = F("Stefaniweg");
        break;
    }
    case 297245:
    {
        returnValue = F("Stefansangerweg");
        break;
    }
    case 297246:
    {
        returnValue = F("Stefansbecke");
        break;
    }
    case 297247:
    {
        returnValue = F("Stefansberg");
        break;
    }
    case 297248:
    {
        returnValue = F("Stefansbergstr.");
        break;
    }
    case 297249:
    {
        returnValue = F("Stefansfelder Str.");
        break;
    }
    case 297250:
    {
        returnValue = F("Stefansgasse");
        break;
    }
    case 297251:
    {
        returnValue = F("Stefansgraben");
        break;
    }
    case 297252:
    {
        returnValue = F("Stefanstal");
        break;
    }
    case 297253:
    {
        returnValue = F("Stefanstr.");
        break;
    }
    case 297254:
    {
        returnValue = F("Stefanus Str.");
        break;
    }
    case 297255:
    {
        returnValue = F("Stefanusstr.");
        break;
    }
    case 297256:
    {
        returnValue = F("Stefanusweg");
        break;
    }
    case 297257:
    {
        returnValue = F("Stefanweg");
        break;
    }
    case 297258:
    {
        returnValue = F("Stefchensweg");
        break;
    }
    case 297259:
    {
        returnValue = F("Stefenshovener Str.");
        break;
    }
    case 297260:
    {
        returnValue = F("Steff-Rausch-Str.");
        break;
    }
    case 297261:
    {
        returnValue = F("Steffanstr.");
        break;
    }
    case 297262:
    {
        returnValue = F("Steffelesweg");
        break;
    }
    case 297263:
    {
        returnValue = F("Steffelgasse");
        break;
    }
    case 297264:
    {
        returnValue = F("Steffelmühle");
        break;
    }
    case 297265:
    {
        returnValue = F("Steffeln Eifelvereinsweg 1");
        break;
    }
    case 297266:
    {
        returnValue = F("Steffelsbachhöhenweg");
        break;
    }
    case 297267:
    {
        returnValue = F("Steffelshalde");
        break;
    }
    case 297268:
    {
        returnValue = F("Steffenborn");
        break;
    }
    case 297269:
    {
        returnValue = F("Steffens Busch");
        break;
    }
    case 297270:
    {
        returnValue = F("Steffens Hof");
        break;
    }
    case 297271:
    {
        returnValue = F("Steffens-Str.");
        break;
    }
    case 297272:
    {
        returnValue = F("Steffensbreite");
        break;
    }
    case 297273:
    {
        returnValue = F("Steffensbrook");
        break;
    }
    case 297274:
    {
        returnValue = F("Steffensbungert");
        break;
    }
    case 297275:
    {
        returnValue = F("Steffensgasse");
        break;
    }
    case 297276:
    {
        returnValue = F("Steffenshäger Str.");
        break;
    }
    case 297277:
    {
        returnValue = F("Steffenskamp");
        break;
    }
    case 297278:
    {
        returnValue = F("Steffenstr.");
        break;
    }
    case 297279:
    {
        returnValue = F("Steffensweg");
        break;
    }
    case 297280:
    {
        returnValue = F("Steffenweg");
        break;
    }
    case 297281:
    {
        returnValue = F("Steffersberg");
        break;
    }
    case 297282:
    {
        returnValue = F("Steffesheck");
        break;
    }
    case 297283:
    {
        returnValue = F("Steffgenstr.");
        break;
    }
    case 297284:
    {
        returnValue = F("Steffi-Graf-Park");
        break;
    }
    case 297285:
    {
        returnValue = F("Steffiner Weg");
        break;
    }
    case 297286:
    {
        returnValue = F("Stefflweg");
        break;
    }
    case 297287:
    {
        returnValue = F("Stefling");
        break;
    }
    case 297288:
    {
        returnValue = F("Steflinger Weg");
        break;
    }
    case 297289:
    {
        returnValue = F("Stefzengrund");
        break;
    }
    case 297290:
    {
        returnValue = F("Steg");
        break;
    }
    case 297291:
    {
        returnValue = F("Steg 1");
        break;
    }
    case 297292:
    {
        returnValue = F("Steg 10");
        break;
    }
    case 297293:
    {
        returnValue = F("Steg 2");
        break;
    }
    case 297294:
    {
        returnValue = F("Steg 3");
        break;
    }
    case 297295:
    {
        returnValue = F("Steg 4");
        break;
    }
    case 297296:
    {
        returnValue = F("Steg 5");
        break;
    }
    case 297297:
    {
        returnValue = F("Steg 6");
        break;
    }
    case 297298:
    {
        returnValue = F("Steg 7");
        break;
    }
    case 297299:
    {
        returnValue = F("Steg 8");
        break;
    }
    case 297300:
    {
        returnValue = F("Steg 9");
        break;
    }
    case 297301:
    {
        returnValue = F("Steg Mitte");
        break;
    }
    case 297302:
    {
        returnValue = F("Steg Ost");
        break;
    }
    case 297303:
    {
        returnValue = F("Steg West");
        break;
    }
    case 297304:
    {
        returnValue = F("Steg am Ostufer");
        break;
    }
    case 297305:
    {
        returnValue = F("Steg zum Aussichtsturm");
        break;
    }
    case 297306:
    {
        returnValue = F("Stegacker");
        break;
    }
    case 297307:
    {
        returnValue = F("Stegangerstr.");
        break;
    }
    case 297308:
    {
        returnValue = F("Stegauracher Str.");
        break;
    }
    case 297309:
    {
        returnValue = F("Stegbachstr.");
        break;
    }
    case 297310:
    {
        returnValue = F("Stegbenden");
        break;
    }
    case 297311:
    {
        returnValue = F("Stegbrede");
        break;
    }
    case 297312:
    {
        returnValue = F("Stegbrücke");
        break;
    }
    case 297313:
    {
        returnValue = F("Stegchen nach Kleindorfhain");
        break;
    }
    case 297314:
    {
        returnValue = F("Stege");
        break;
    }
    case 297315:
    {
        returnValue = F("Stege (Ot Stöffin)");
        break;
    }
    case 297316:
    {
        returnValue = F("Stegebinne");
        break;
    }
    case 297317:
    {
        returnValue = F("Stegebruch");
        break;
    }
    case 297318:
    {
        returnValue = F("Stegefeldbusch");
        break;
    }
    case 297319:
    {
        returnValue = F("Stegekamp");
        break;
    }
    case 297320:
    {
        returnValue = F("Stegekampring");
        break;
    }
    case 297321:
    {
        returnValue = F("Stegel");
        break;
    }
    case 297322:
    {
        returnValue = F("Stegelitzer Dorfstr.");
        break;
    }
    case 297323:
    {
        returnValue = F("Stegelitzer Feld");
        break;
    }
    case 297324:
    {
        returnValue = F("Stegelitzer Str.");
        break;
    }
    case 297325:
    {
        returnValue = F("Stegelitzer Weg");
        break;
    }
    case 297326:
    {
        returnValue = F("Stegelk");
        break;
    }
    case 297327:
    {
        returnValue = F("Stegelkaten");
        break;
    }
    case 297328:
    {
        returnValue = F("Stegelmannstr.");
        break;
    }
    case 297329:
    {
        returnValue = F("Stegelstr.");
        break;
    }
    case 297330:
    {
        returnValue = F("Stegeltor");
        break;
    }
    case 297331:
    {
        returnValue = F("Stegemann-Röbkenweg");
        break;
    }
    case 297332:
    {
        returnValue = F("Stegemannshof");
        break;
    }
    case 297333:
    {
        returnValue = F("Stegemannstr.");
        break;
    }
    case 297334:
    {
        returnValue = F("Stegen");
        break;
    }
    case 297335:
    {
        returnValue = F("Stegenbachstr.");
        break;
    }
    case 297336:
    {
        returnValue = F("Stegenberg");
        break;
    }
    case 297337:
    {
        returnValue = F("Stegener Str.");
        break;
    }
    case 297338:
    {
        returnValue = F("Stegener Weg");
        break;
    }
    case 297339:
    {
        returnValue = F("Stegenfeldstr.");
        break;
    }
    case 297340:
    {
        returnValue = F("Stegenhofer Weg");
        break;
    }
    case 297341:
    {
        returnValue = F("Stegenhäuser");
        break;
    }
    case 297342:
    {
        returnValue = F("Stegenmoor");
        break;
    }
    case 297343:
    {
        returnValue = F("Stegenmühleweg");
        break;
    }
    case 297344:
    {
        returnValue = F("Stegenort");
        break;
    }
    case 297345:
    {
        returnValue = F("Stegenthumbacher Str.");
        break;
    }
    case 297346:
    {
        returnValue = F("Stegenwaldhaus");
        break;
    }
    case 297347:
    {
        returnValue = F("Stegenwaldhauser Str.");
        break;
    }
    case 297348:
    {
        returnValue = F("Stegenweg");
        break;
    }
    case 297349:
    {
        returnValue = F("Stegenwiesenweg");
        break;
    }
    case 297350:
    {
        returnValue = F("Steger Holz");
        break;
    }
    case 297351:
    {
        returnValue = F("Steger Weg");
        break;
    }
    case 297352:
    {
        returnValue = F("Stegerfeld");
        break;
    }
    case 297353:
    {
        returnValue = F("Stegergasse");
        break;
    }
    case 297354:
    {
        returnValue = F("Stegerhüttestr.");
        break;
    }
    case 297355:
    {
        returnValue = F("Stegerlesweg");
        break;
    }
    case 297356:
    {
        returnValue = F("Stegersgasse");
        break;
    }
    case 297357:
    {
        returnValue = F("Stegerstr.");
        break;
    }
    case 297358:
    {
        returnValue = F("Stegersweg");
        break;
    }
    case 297359:
    {
        returnValue = F("Stegerwaldstr.");
        break;
    }
    case 297360:
    {
        returnValue = F("Stegerwaldweg");
        break;
    }
    case 297361:
    {
        returnValue = F("Stegeweg");
        break;
    }
    case 297362:
    {
        returnValue = F("Stegfeld");
        break;
    }
    case 297363:
    {
        returnValue = F("Stegfeldstr.");
        break;
    }
    case 297364:
    {
        returnValue = F("Stegfilzstr.");
        break;
    }
    case 297365:
    {
        returnValue = F("Steggartenweg");
        break;
    }
    case 297366:
    {
        returnValue = F("Steggasse");
        break;
    }
    case 297367:
    {
        returnValue = F("Stegge");
        break;
    }
    case 297368:
    {
        returnValue = F("Steggelenbuck");
        break;
    }
    case 297369:
    {
        returnValue = F("Steggelenweg");
        break;
    }
    case 297370:
    {
        returnValue = F("Stegh");
        break;
    }
    case 297371:
    {
        returnValue = F("Steghiaslweg");
        break;
    }
    case 297372:
    {
        returnValue = F("Stegholz");
        break;
    }
    case 297373:
    {
        returnValue = F("Steghäuser");
        break;
    }
    case 297374:
    {
        returnValue = F("Stegkamp");
        break;
    }
    case 297375:
    {
        returnValue = F("Stegken");
        break;
    }
    case 297376:
    {
        returnValue = F("Steglein");
        break;
    }
    case 297377:
    {
        returnValue = F("Steglesweg");
        break;
    }
    case 297378:
    {
        returnValue = F("Stegleswiesen");
        break;
    }
    case 297379:
    {
        returnValue = F("Stegliethe");
        break;
    }
    case 297380:
    {
        returnValue = F("Steglitzer Platz");
        break;
    }
    case 297381:
    {
        returnValue = F("Steglitzer Str.");
        break;
    }
    case 297382:
    {
        returnValue = F("Steglitzer Weg");
        break;
    }
    case 297383:
    {
        returnValue = F("Stegmahd");
        break;
    }
    case 297384:
    {
        returnValue = F("Stegmairstr.");
        break;
    }
    case 297385:
    {
        returnValue = F("Stegmannstr.");
        break;
    }
    case 297386:
    {
        returnValue = F("Stegmatten");
        break;
    }
    case 297387:
    {
        returnValue = F("Stegmattenweg");
        break;
    }
    case 297388:
    {
        returnValue = F("Stegmühl");
        break;
    }
    case 297389:
    {
        returnValue = F("Stegmühle");
        break;
    }
    case 297390:
    {
        returnValue = F("Stegmühlenweg");
        break;
    }
    case 297391:
    {
        returnValue = F("Stegmühler Weg");
        break;
    }
    case 297392:
    {
        returnValue = F("Stegmühlweg");
        break;
    }
    case 297393:
    {
        returnValue = F("Stegmüllerweg");
        break;
    }
    case 297394:
    {
        returnValue = F("Stegnersgasse");
        break;
    }
    case 297395:
    {
        returnValue = F("Stegpforte");
        break;
    }
    case 297396:
    {
        returnValue = F("Stegrain");
        break;
    }
    case 297397:
    {
        returnValue = F("Stegschneise");
        break;
    }
    case 297398:
    {
        returnValue = F("Stegsgasse");
        break;
    }
    case 297399:
    {
        returnValue = F("Stegstr.");
        break;
    }
    case 297400:
    {
        returnValue = F("Stegwasenweg");
        break;
    }
    case 297401:
    {
        returnValue = F("Stegweg");
        break;
    }
    case 297402:
    {
        returnValue = F("Stegweide");
        break;
    }
    case 297403:
    {
        returnValue = F("Stegwiese");
        break;
    }
    case 297404:
    {
        returnValue = F("Stegwiesen");
        break;
    }
    case 297405:
    {
        returnValue = F("Stegwiesenstr.");
        break;
    }
    case 297406:
    {
        returnValue = F("Stegwiesenweg");
        break;
    }
    case 297407:
    {
        returnValue = F("Stegwieserweg");
        break;
    }
    case 297408:
    {
        returnValue = F("Stegwooger Weg");
        break;
    }
    case 297409:
    {
        returnValue = F("Stegäcker");
        break;
    }
    case 297410:
    {
        returnValue = F("Stegäckerstr.");
        break;
    }
    case 297411:
    {
        returnValue = F("Stehackerweg");
        break;
    }
    case 297412:
    {
        returnValue = F("Stehbach");
        break;
    }
    case 297413:
    {
        returnValue = F("Stehbachweg");
        break;
    }
    case 297414:
    {
        returnValue = F("Stehbergsweg");
        break;
    }
    case 297415:
    {
        returnValue = F("Stehbründlweg");
        break;
    }
    case 297416:
    {
        returnValue = F("Steherberg");
        break;
    }
    case 297417:
    {
        returnValue = F("Stehestr.");
        break;
    }
    case 297418:
    {
        returnValue = F("Stehfelder Weg");
        break;
    }
    case 297419:
    {
        returnValue = F("Stehfenstr.");
        break;
    }
    case 297420:
    {
        returnValue = F("Stehlaer Winkel");
        break;
    }
    case 297421:
    {
        returnValue = F("Stehlen");
        break;
    }
    case 297422:
    {
        returnValue = F("Stehlesberg");
        break;
    }
    case 297423:
    {
        returnValue = F("Stehlesmühle");
        break;
    }
    case 297424:
    {
        returnValue = F("Stehleweg");
        break;
    }
    case 297425:
    {
        returnValue = F("Stehlings");
        break;
    }
    case 297426:
    {
        returnValue = F("Stehlinstr.");
        break;
    }
    case 297427:
    {
        returnValue = F("Stehrstr.");
        break;
    }
    case 297428:
    {
        returnValue = F("Steibensteg");
        break;
    }
    case 297429:
    {
        returnValue = F("Steibewies");
        break;
    }
    case 297430:
    {
        returnValue = F("Steibisberger Weg");
        break;
    }
    case 297431:
    {
        returnValue = F("Steicheleallee");
        break;
    }
    case 297432:
    {
        returnValue = F("Steichelestr.");
        break;
    }
    case 297433:
    {
        returnValue = F("Steicherl");
        break;
    }
    case 297434:
    {
        returnValue = F("Steidachstr.");
        break;
    }
    case 297435:
    {
        returnValue = F("Steidelswinkelstaffel");
        break;
    }
    case 297436:
    {
        returnValue = F("Steider Str.");
        break;
    }
    case 297437:
    {
        returnValue = F("Steidigstr.");
        break;
    }
    case 297438:
    {
        returnValue = F("Steidler-Ring");
        break;
    }
    case 297439:
    {
        returnValue = F("Steidlestr.");
        break;
    }
    case 297440:
    {
        returnValue = F("Steiermarkstr.");
        break;
    }
    case 297441:
    {
        returnValue = F("Steiermarkweg");
        break;
    }
    case 297442:
    {
        returnValue = F("Steiermärker Str.");
        break;
    }
    case 297443:
    {
        returnValue = F("Steiertenschlagweg");
        break;
    }
    case 297444:
    {
        returnValue = F("Steife Brise");
        break;
    }
    case 297445:
    {
        returnValue = F("Steifensandstr.");
        break;
    }
    case 297446:
    {
        returnValue = F("Steiferhofstr.");
        break;
    }
    case 297447:
    {
        returnValue = F("Steiferlingen");
        break;
    }
    case 297448:
    {
        returnValue = F("Steifling");
        break;
    }
    case 297449:
    {
        returnValue = F("Steig");
        break;
    }
    case 297450:
    {
        returnValue = F("Steig bei der Warte");
        break;
    }
    case 297451:
    {
        returnValue = F("Steig zum Alten Kirmesplatz");
        break;
    }
    case 297452:
    {
        returnValue = F("Steigacker");
        break;
    }
    case 297453:
    {
        returnValue = F("Steigackerlweg");
        break;
    }
    case 297454:
    {
        returnValue = F("Steigackerstr.");
        break;
    }
    case 297455:
    {
        returnValue = F("Steigackerweg");
        break;
    }
    case 297456:
    {
        returnValue = F("Steigangerweg");
        break;
    }
    case 297457:
    {
        returnValue = F("Steigass");
        break;
    }
    case 297458:
    {
        returnValue = F("Steigbachtalweg");
        break;
    }
    case 297459:
    {
        returnValue = F("Steigbaumstr.");
        break;
    }
    case 297460:
    {
        returnValue = F("Steigbergweg");
        break;
    }
    case 297461:
    {
        returnValue = F("Steigbreitenweg");
        break;
    }
    case 297462:
    {
        returnValue = F("Steigbrönnle");
        break;
    }
    case 297463:
    {
        returnValue = F("Steige");
        break;
    }
    case 297464:
    {
        returnValue = F("Steigegärten");
        break;
    }
    case 297465:
    {
        returnValue = F("Steigel");
        break;
    }
    case 297466:
    {
        returnValue = F("Steigelchen");
        break;
    }
    case 297467:
    {
        returnValue = F("Steigenberger Str.");
        break;
    }
    case 297468:
    {
        returnValue = F("Steigenen");
        break;
    }
    case 297469:
    {
        returnValue = F("Steigengasse");
        break;
    }
    case 297470:
    {
        returnValue = F("Steigentalhangweg");
        break;
    }
    case 297471:
    {
        returnValue = F("Steigentalweg");
        break;
    }
    case 297472:
    {
        returnValue = F("Steigenweg");
        break;
    }
    case 297473:
    {
        returnValue = F("Steigenäcker");
        break;
    }
    case 297474:
    {
        returnValue = F("Steigenäckerweg");
        break;
    }
    case 297475:
    {
        returnValue = F("Steiger");
        break;
    }
    case 297476:
    {
        returnValue = F("Steiger Str.");
        break;
    }
    case 297477:
    {
        returnValue = F("Steiger Weg");
        break;
    }
    case 297478:
    {
        returnValue = F("Steigerbreite");
        break;
    }
    case 297479:
    {
        returnValue = F("Steigerbrink");
        break;
    }
    case 297480:
    {
        returnValue = F("Steigereck");
        break;
    }
    case 297481:
    {
        returnValue = F("Steigerei");
        break;
    }
    case 297482:
    {
        returnValue = F("Steigerer Weg");
        break;
    }
    case 297483:
    {
        returnValue = F("Steigergasse");
        break;
    }
    case 297484:
    {
        returnValue = F("Steigerhausplatz");
        break;
    }
    case 297485:
    {
        returnValue = F("Steigerhof");
        break;
    }
    case 297486:
    {
        returnValue = F("Steigerhohle");
        break;
    }
    case 297487:
    {
        returnValue = F("Steigerlberg");
        break;
    }
    case 297488:
    {
        returnValue = F("Steigerplatz");
        break;
    }
    case 297489:
    {
        returnValue = F("Steigerring");
        break;
    }
    case 297490:
    {
        returnValue = F("Steigers Garten");
        break;
    }
    case 297491:
    {
        returnValue = F("Steigersbrünnle");
        break;
    }
    case 297492:
    {
        returnValue = F("Steigerstr.");
        break;
    }
    case 297493:
    {
        returnValue = F("Steigerstrasse");
        break;
    }
    case 297494:
    {
        returnValue = F("Steigersweg");
        break;
    }
    case 297495:
    {
        returnValue = F("Steigerter Hof");
        break;
    }
    case 297496:
    {
        returnValue = F("Steigerthaler Weg");
        break;
    }
    case 297497:
    {
        returnValue = F("Steigerthäler Str.");
        break;
    }
    case 297498:
    {
        returnValue = F("Steigertstr.");
        break;
    }
    case 297499:
    {
        returnValue = F("Steigertsweg");
        break;
    }
    case 297500:
    {
        returnValue = F("Steigertweg");
        break;
    }
    case 297501:
    {
        returnValue = F("Steigerwald");
        break;
    }
    case 297502:
    {
        returnValue = F("Steigerwaldblick");
        break;
    }
    case 297503:
    {
        returnValue = F("Steigerwaldstr.");
        break;
    }
    case 297504:
    {
        returnValue = F("Steigerwaldweg");
        break;
    }
    case 297505:
    {
        returnValue = F("Steigerweg");
        break;
    }
    case 297506:
    {
        returnValue = F("Steigeschweg");
        break;
    }
    case 297507:
    {
        returnValue = F("Steigestr.");
        break;
    }
    case 297508:
    {
        returnValue = F("Steigeweg");
        break;
    }
    case 297509:
    {
        returnValue = F("Steigfeld");
        break;
    }
    case 297510:
    {
        returnValue = F("Steigfeldstr.");
        break;
    }
    case 297511:
    {
        returnValue = F("Steigfeldweg");
        break;
    }
    case 297512:
    {
        returnValue = F("Steigflur");
        break;
    }
    case 297513:
    {
        returnValue = F("Steiggasse");
        break;
    }
    case 297514:
    {
        returnValue = F("Steiggewand");
        break;
    }
    case 297515:
    {
        returnValue = F("Steiggraben");
        break;
    }
    case 297516:
    {
        returnValue = F("Steiggärten");
        break;
    }
    case 297517:
    {
        returnValue = F("Steiggärtenstr.");
        break;
    }
    case 297518:
    {
        returnValue = F("Steiggässle");
        break;
    }
    case 297519:
    {
        returnValue = F("Steighalde");
        break;
    }
    case 297520:
    {
        returnValue = F("Steighaldeweg");
        break;
    }
    case 297521:
    {
        returnValue = F("Steighaus");
        break;
    }
    case 297522:
    {
        returnValue = F("Steighausstr.");
        break;
    }
    case 297523:
    {
        returnValue = F("Steighauweg");
        break;
    }
    case 297524:
    {
        returnValue = F("Steighof");
        break;
    }
    case 297525:
    {
        returnValue = F("Steighäusle");
        break;
    }
    case 297526:
    {
        returnValue = F("Steigig");
        break;
    }
    case 297527:
    {
        returnValue = F("Steigkelter");
        break;
    }
    case 297528:
    {
        returnValue = F("Steigkoppel");
        break;
    }
    case 297529:
    {
        returnValue = F("Steigle");
        break;
    }
    case 297530:
    {
        returnValue = F("Steiglechner Brücke");
        break;
    }
    case 297531:
    {
        returnValue = F("Steigleshausträßle");
        break;
    }
    case 297532:
    {
        returnValue = F("Steigleshauweg");
        break;
    }
    case 297533:
    {
        returnValue = F("Steiglesstr.");
        break;
    }
    case 297534:
    {
        returnValue = F("Steiglestr.");
        break;
    }
    case 297535:
    {
        returnValue = F("Steiglesweg");
        break;
    }
    case 297536:
    {
        returnValue = F("Steiglesäcker");
        break;
    }
    case 297537:
    {
        returnValue = F("Steigleweg");
        break;
    }
    case 297538:
    {
        returnValue = F("Steigmattstr.");
        break;
    }
    case 297539:
    {
        returnValue = F("Steigmühlenweg");
        break;
    }
    case 297540:
    {
        returnValue = F("Steigmühlstr.");
        break;
    }
    case 297541:
    {
        returnValue = F("Steigpfad");
        break;
    }
    case 297542:
    {
        returnValue = F("Steigraer Str.");
        break;
    }
    case 297543:
    {
        returnValue = F("Steigrain");
        break;
    }
    case 297544:
    {
        returnValue = F("Steigrainer Str.");
        break;
    }
    case 297545:
    {
        returnValue = F("Steigschneise");
        break;
    }
    case 297546:
    {
        returnValue = F("Steigstr.");
        break;
    }
    case 297547:
    {
        returnValue = F("Steigstrasse");
        break;
    }
    case 297548:
    {
        returnValue = F("Steigsträßle");
        break;
    }
    case 297549:
    {
        returnValue = F("Steigwaldstr.");
        break;
    }
    case 297550:
    {
        returnValue = F("Steigwasen");
        break;
    }
    case 297551:
    {
        returnValue = F("Steigweg");
        break;
    }
    case 297552:
    {
        returnValue = F("Steigweghalden");
        break;
    }
    case 297553:
    {
        returnValue = F("Steigwegle");
        break;
    }
    case 297554:
    {
        returnValue = F("Steigwiesen");
        break;
    }
    case 297555:
    {
        returnValue = F("Steigwiesenweg");
        break;
    }
    case 297556:
    {
        returnValue = F("Steigziegelhütte");
        break;
    }
    case 297557:
    {
        returnValue = F("Steigäcker");
        break;
    }
    case 297558:
    {
        returnValue = F("Steigäckerring");
        break;
    }
    case 297559:
    {
        returnValue = F("Steigäckerstr.");
        break;
    }
    case 297560:
    {
        returnValue = F("Steigäckerweg");
        break;
    }
    case 297561:
    {
        returnValue = F("Steihenwaldstr.");
        break;
    }
    case 297562:
    {
        returnValue = F("Steil");
        break;
    }
    case 297563:
    {
        returnValue = F("Steilackerweg");
        break;
    }
    case 297564:
    {
        returnValue = F("Steilbachstr.");
        break;
    }
    case 297565:
    {
        returnValue = F("Steile");
        break;
    }
    case 297566:
    {
        returnValue = F("Steile Gasse");
        break;
    }
    case 297567:
    {
        returnValue = F("Steile Gewann");
        break;
    }
    case 297568:
    {
        returnValue = F("Steile Gosse");
        break;
    }
    case 297569:
    {
        returnValue = F("Steile Hohle");
        break;
    }
    case 297570:
    {
        returnValue = F("Steile Mahnte");
        break;
    }
    case 297571:
    {
        returnValue = F("Steile Pfädchen");
        break;
    }
    case 297572:
    {
        returnValue = F("Steile Schneise");
        break;
    }
    case 297573:
    {
        returnValue = F("Steile Str.");
        break;
    }
    case 297574:
    {
        returnValue = F("Steile Stücken");
        break;
    }
    case 297575:
    {
        returnValue = F("Steile Wand");
        break;
    }
    case 297576:
    {
        returnValue = F("Steiler Ackerweg");
        break;
    }
    case 297577:
    {
        returnValue = F("Steiler Berg");
        break;
    }
    case 297578:
    {
        returnValue = F("Steiler Buckel");
        break;
    }
    case 297579:
    {
        returnValue = F("Steiler Hang");
        break;
    }
    case 297580:
    {
        returnValue = F("Steiler Hangweg");
        break;
    }
    case 297581:
    {
        returnValue = F("Steiler Pfad");
        break;
    }
    case 297582:
    {
        returnValue = F("Steiler Taschenberg");
        break;
    }
    case 297583:
    {
        returnValue = F("Steiler Weg");
        break;
    }
    case 297584:
    {
        returnValue = F("Steilersgasse");
        break;
    }
    case 297585:
    {
        returnValue = F("Steilerweg");
        break;
    }
    case 297586:
    {
        returnValue = F("Steilgasse");
        break;
    }
    case 297587:
    {
        returnValue = F("Steilhang");
        break;
    }
    case 297588:
    {
        returnValue = F("Steilhofweg");
        break;
    }
    case 297589:
    {
        returnValue = F("Steillweg");
        break;
    }
    case 297590:
    {
        returnValue = F("Steilnerjochstr.");
        break;
    }
    case 297591:
    {
        returnValue = F("Steilpfad");
        break;
    }
    case 297592:
    {
        returnValue = F("Steilstr.");
        break;
    }
    case 297593:
    {
        returnValue = F("Steiluferallee");
        break;
    }
    case 297594:
    {
        returnValue = F("Steiluferring");
        break;
    }
    case 297595:
    {
        returnValue = F("Steilwall");
        break;
    }
    case 297596:
    {
        returnValue = F("Steilweg");
        break;
    }
    case 297597:
    {
        returnValue = F("Steimanns Hof");
        break;
    }
    case 297598:
    {
        returnValue = F("Steimbker Str.");
        break;
    }
    case 297599:
    {
        returnValue = F("Steimeckeweg");
        break;
    }
    case 297600:
    {
        returnValue = F("Steimel");
        break;
    }
    case 297601:
    {
        returnValue = F("Steimelager Weg");
        break;
    }
    case 297602:
    {
        returnValue = F("Steimelberg");
        break;
    }
    case 297603:
    {
        returnValue = F("Steimeler Str.");
        break;
    }
    case 297604:
    {
        returnValue = F("Steimeler Weg");
        break;
    }
    case 297605:
    {
        returnValue = F("Steimelsgarten");
        break;
    }
    case 297606:
    {
        returnValue = F("Steimelsring");
        break;
    }
    case 297607:
    {
        returnValue = F("Steimelstr.");
        break;
    }
    case 297608:
    {
        returnValue = F("Steimelsweg");
        break;
    }
    case 297609:
    {
        returnValue = F("Steimelswiese");
        break;
    }
    case 297610:
    {
        returnValue = F("Steimelweg");
        break;
    }
    case 297611:
    {
        returnValue = F("Steimerberg");
        break;
    }
    case 297612:
    {
        returnValue = F("Steimerstr.");
        break;
    }
    case 297613:
    {
        returnValue = F("Steimertal");
        break;
    }
    case 297614:
    {
        returnValue = F("Steimke");
        break;
    }
    case 297615:
    {
        returnValue = F("Steimker Chaussee");
        break;
    }
    case 297616:
    {
        returnValue = F("Steimker Hauptstr.");
        break;
    }
    case 297617:
    {
        returnValue = F("Steimker Höhe");
        break;
    }
    case 297618:
    {
        returnValue = F("Steimker Kirchweg");
        break;
    }
    case 297619:
    {
        returnValue = F("Steimker Str.");
        break;
    }
    case 297620:
    {
        returnValue = F("Steimker Weg");
        break;
    }
    case 297621:
    {
        returnValue = F("Steimkes Feld");
        break;
    }
    case 297622:
    {
        returnValue = F("Steimkes Hof");
        break;
    }
    case 297623:
    {
        returnValue = F("Steimkestr.");
        break;
    }
    case 297624:
    {
        returnValue = F("Stein");
        break;
    }
    case 297625:
    {
        returnValue = F("Stein-Bockenheimer Str.");
        break;
    }
    case 297626:
    {
        returnValue = F("Stein-Gallenberg-B19");
        break;
    }
    case 297627:
    {
        returnValue = F("Stein-Hardenberg-Str.");
        break;
    }
    case 297628:
    {
        returnValue = F("Stein-Kallenfels-Str.");
        break;
    }
    case 297629:
    {
        returnValue = F("Steinabad");
        break;
    }
    case 297630:
    {
        returnValue = F("Steinabühl 20,22,24,26");
        break;
    }
    case 297631:
    {
        returnValue = F("Steinach");
        break;
    }
    case 297632:
    {
        returnValue = F("Steinach-Radweg");
        break;
    }
    case 297633:
    {
        returnValue = F("Steinacher Str.");
        break;
    }
    case 297634:
    {
        returnValue = F("Steinacher Weg");
        break;
    }
    case 297635:
    {
        returnValue = F("Steinachgrund");
        break;
    }
    case 297636:
    {
        returnValue = F("Steinachring");
        break;
    }
    case 297637:
    {
        returnValue = F("Steinachstr.");
        break;
    }
    case 297638:
    {
        returnValue = F("Steinachsweg");
        break;
    }
    case 297639:
    {
        returnValue = F("Steinachtalbahn");
        break;
    }
    case 297640:
    {
        returnValue = F("Steinachtalstr.");
        break;
    }
    case 297641:
    {
        returnValue = F("Steinachweg");
        break;
    }
    case 297642:
    {
        returnValue = F("Steinacker");
        break;
    }
    case 297643:
    {
        returnValue = F("Steinacker I");
        break;
    }
    case 297644:
    {
        returnValue = F("Steinacker II");
        break;
    }
    case 297645:
    {
        returnValue = F("Steinackerring");
        break;
    }
    case 297646:
    {
        returnValue = F("Steinackerstr.");
        break;
    }
    case 297647:
    {
        returnValue = F("Steinackersweg");
        break;
    }
    case 297648:
    {
        returnValue = F("Steinackerweg");
        break;
    }
    case 297649:
    {
        returnValue = F("Steinadlerweg");
        break;
    }
    case 297650:
    {
        returnValue = F("Steinaer Pfad");
        break;
    }
    case 297651:
    {
        returnValue = F("Steinaer Str.");
        break;
    }
    case 297652:
    {
        returnValue = F("Steinaggertal");
        break;
    }
    case 297653:
    {
        returnValue = F("Steinaggerufer");
        break;
    }
    case 297654:
    {
        returnValue = F("Steinahaldenweg");
        break;
    }
    case 297655:
    {
        returnValue = F("Steinahölzleweg");
        break;
    }
    case 297656:
    {
        returnValue = F("Steinalbstr.");
        break;
    }
    case 297657:
    {
        returnValue = F("Steinallee");
        break;
    }
    case 297658:
    {
        returnValue = F("Steinanger");
        break;
    }
    case 297659:
    {
        returnValue = F("Steinastr.");
        break;
    }
    case 297660:
    {
        returnValue = F("Steinatal");
        break;
    }
    case 297661:
    {
        returnValue = F("Steinatalstr.");
        break;
    }
    case 297662:
    {
        returnValue = F("Steinatalweg");
        break;
    }
    case 297663:
    {
        returnValue = F("Steinau");
        break;
    }
    case 297664:
    {
        returnValue = F("Steinaublick");
        break;
    }
    case 297665:
    {
        returnValue = F("Steinaue");
        break;
    }
    case 297666:
    {
        returnValue = F("Steinauer Berg");
        break;
    }
    case 297667:
    {
        returnValue = F("Steinauer Str.");
        break;
    }
    case 297668:
    {
        returnValue = F("Steinauer Weg");
        break;
    }
    case 297669:
    {
        returnValue = F("Steinauerweg");
        break;
    }
    case 297670:
    {
        returnValue = F("Steinautal");
        break;
    }
    case 297671:
    {
        returnValue = F("Steinbach");
        break;
    }
    case 297672:
    {
        returnValue = F("Steinbach an der Haide");
        break;
    }
    case 297673:
    {
        returnValue = F("Steinbach-Geräumt");
        break;
    }
    case 297674:
    {
        returnValue = F("Steinbachau");
        break;
    }
    case 297675:
    {
        returnValue = F("Steinbachbrücke");
        break;
    }
    case 297676:
    {
        returnValue = F("Steinbacher Gasse");
        break;
    }
    case 297677:
    {
        returnValue = F("Steinbacher Gebirg");
        break;
    }
    case 297678:
    {
        returnValue = F("Steinbacher Gärten");
        break;
    }
    case 297679:
    {
        returnValue = F("Steinbacher Hauptstr.");
        break;
    }
    case 297680:
    {
        returnValue = F("Steinbacher Höhe");
        break;
    }
    case 297681:
    {
        returnValue = F("Steinbacher Kirchenweg");
        break;
    }
    case 297682:
    {
        returnValue = F("Steinbacher Landstr.");
        break;
    }
    case 297683:
    {
        returnValue = F("Steinbacher Matten");
        break;
    }
    case 297684:
    {
        returnValue = F("Steinbacher Pfad");
        break;
    }
    case 297685:
    {
        returnValue = F("Steinbacher Str.");
        break;
    }
    case 297686:
    {
        returnValue = F("Steinbacher Waldweg");
        break;
    }
    case 297687:
    {
        returnValue = F("Steinbacher Weg");
        break;
    }
    case 297688:
    {
        returnValue = F("Steinbacher Äcker");
        break;
    }
    case 297689:
    {
        returnValue = F("Steinbacher-Tal-Str.");
        break;
    }
    case 297690:
    {
        returnValue = F("Steinbacherstr.");
        break;
    }
    case 297691:
    {
        returnValue = F("Steinbacherweg");
        break;
    }
    case 297692:
    {
        returnValue = F("Steinbachgasse");
        break;
    }
    case 297693:
    {
        returnValue = F("Steinbachhang");
        break;
    }
    case 297694:
    {
        returnValue = F("Steinbachhofstr.");
        break;
    }
    case 297695:
    {
        returnValue = F("Steinbachhofweg");
        break;
    }
    case 297696:
    {
        returnValue = F("Steinbachleite");
        break;
    }
    case 297697:
    {
        returnValue = F("Steinbachplatz");
        break;
    }
    case 297698:
    {
        returnValue = F("Steinbachsberg");
        break;
    }
    case 297699:
    {
        returnValue = F("Steinbachsfeld");
        break;
    }
    case 297700:
    {
        returnValue = F("Steinbachsiedlung");
        break;
    }
    case 297701:
    {
        returnValue = F("Steinbachsteig");
        break;
    }
    case 297702:
    {
        returnValue = F("Steinbachstr.");
        break;
    }
    case 297703:
    {
        returnValue = F("Steinbachsweg");
        break;
    }
    case 297704:
    {
        returnValue = F("Steinbachtal");
        break;
    }
    case 297705:
    {
        returnValue = F("Steinbachtalbrücke");
        break;
    }
    case 297706:
    {
        returnValue = F("Steinbachtalstr.");
        break;
    }
    case 297707:
    {
        returnValue = F("Steinbachweg");
        break;
    }
    case 297708:
    {
        returnValue = F("Steinbahn");
        break;
    }
    case 297709:
    {
        returnValue = F("Steinbaracke");
        break;
    }
    case 297710:
    {
        returnValue = F("Steinbarg");
        break;
    }
    case 297711:
    {
        returnValue = F("Steinbassweg");
        break;
    }
    case 297712:
    {
        returnValue = F("Steinbecher");
        break;
    }
    case 297713:
    {
        returnValue = F("Steinbeck");
        break;
    }
    case 297714:
    {
        returnValue = F("Steinbecker Dorfstr.");
        break;
    }
    case 297715:
    {
        returnValue = F("Steinbecker Eck");
        break;
    }
    case 297716:
    {
        returnValue = F("Steinbecker Mühlenweg");
        break;
    }
    case 297717:
    {
        returnValue = F("Steinbecker Str.");
        break;
    }
    case 297718:
    {
        returnValue = F("Steinbecker Weg");
        break;
    }
    case 297719:
    {
        returnValue = F("Steinbeckerstr.");
        break;
    }
    case 297720:
    {
        returnValue = F("Steinbeek");
        break;
    }
    case 297721:
    {
        returnValue = F("Steinbeeke");
        break;
    }
    case 297722:
    {
        returnValue = F("Steinbeise");
        break;
    }
    case 297723:
    {
        returnValue = F("Steinbeissstr.");
        break;
    }
    case 297724:
    {
        returnValue = F("Steinbeisstr.");
        break;
    }
    case 297725:
    {
        returnValue = F("Steinbeisweg");
        break;
    }
    case 297726:
    {
        returnValue = F("Steinbeißstr.");
        break;
    }
    case 297727:
    {
        returnValue = F("Steinbeißweg");
        break;
    }
    case 297728:
    {
        returnValue = F("Steinbeke");
        break;
    }
    case 297729:
    {
        returnValue = F("Steinbeker Dorfstr.");
        break;
    }
    case 297730:
    {
        returnValue = F("Steinbeker Weg");
        break;
    }
    case 297731:
    {
        returnValue = F("Steinbeker Ziegelei");
        break;
    }
    case 297732:
    {
        returnValue = F("Steinbekestr.");
        break;
    }
    case 297733:
    {
        returnValue = F("Steinbelle");
        break;
    }
    case 297734:
    {
        returnValue = F("Steinberg");
        break;
    }
    case 297735:
    {
        returnValue = F("Steinberg-Felsensteig");
        break;
    }
    case 297736:
    {
        returnValue = F("Steinbergblick");
        break;
    }
    case 297737:
    {
        returnValue = F("Steinberge");
        break;
    }
    case 297738:
    {
        returnValue = F("Steinbergen");
        break;
    }
    case 297739:
    {
        returnValue = F("Steinberger Berg");
        break;
    }
    case 297740:
    {
        returnValue = F("Steinberger Hauptstr.");
        break;
    }
    case 297741:
    {
        returnValue = F("Steinberger Kirchweg");
        break;
    }
    case 297742:
    {
        returnValue = F("Steinberger Landstr.");
        break;
    }
    case 297743:
    {
        returnValue = F("Steinberger Str.");
        break;
    }
    case 297744:
    {
        returnValue = F("Steinberger Weg");
        break;
    }
    case 297745:
    {
        returnValue = F("Steinbergerstr.");
        break;
    }
    case 297746:
    {
        returnValue = F("Steinbergfeld");
        break;
    }
    case 297747:
    {
        returnValue = F("Steinberggaard");
        break;
    }
    case 297748:
    {
        returnValue = F("Steinberghaff");
        break;
    }
    case 297749:
    {
        returnValue = F("Steinbergholz");
        break;
    }
    case 297750:
    {
        returnValue = F("Steinbergkoppel");
        break;
    }
    case 297751:
    {
        returnValue = F("Steinbergle");
        break;
    }
    case 297752:
    {
        returnValue = F("Steinberglein");
        break;
    }
    case 297753:
    {
        returnValue = F("Steinbergleweg");
        break;
    }
    case 297754:
    {
        returnValue = F("Steinbergpark");
        break;
    }
    case 297755:
    {
        returnValue = F("Steinbergschneise");
        break;
    }
    case 297756:
    {
        returnValue = F("Steinbergsgrund");
        break;
    }
    case 297757:
    {
        returnValue = F("Steinbergshörner Str.");
        break;
    }
    case 297758:
    {
        returnValue = F("Steinbergskamp");
        break;
    }
    case 297759:
    {
        returnValue = F("Steinbergsmühle");
        break;
    }
    case 297760:
    {
        returnValue = F("Steinbergstieg");
        break;
    }
    case 297761:
    {
        returnValue = F("Steinbergstr.");
        break;
    }
    case 297762:
    {
        returnValue = F("Steinbergsweg");
        break;
    }
    case 297763:
    {
        returnValue = F("Steinbergweg");
        break;
    }
    case 297764:
    {
        returnValue = F("Steinbettenbreite");
        break;
    }
    case 297765:
    {
        returnValue = F("Steinbeuler Weg");
        break;
    }
    case 297766:
    {
        returnValue = F("Steinbichl");
        break;
    }
    case 297767:
    {
        returnValue = F("Steinbichlerweg");
        break;
    }
    case 297768:
    {
        returnValue = F("Steinbichlweg");
        break;
    }
    case 297769:
    {
        returnValue = F("Steinbickerstr.");
        break;
    }
    case 297770:
    {
        returnValue = F("Steinbilder Str.");
        break;
    }
    case 297771:
    {
        returnValue = F("Steinbildstr.");
        break;
    }
    case 297772:
    {
        returnValue = F("Steinbinge");
        break;
    }
    case 297773:
    {
        returnValue = F("Steinbis");
        break;
    }
    case 297774:
    {
        returnValue = F("Steinbiss");
        break;
    }
    case 297775:
    {
        returnValue = F("Steinbitz");
        break;
    }
    case 297776:
    {
        returnValue = F("Steinbiß Tunnel");
        break;
    }
    case 297777:
    {
        returnValue = F("Steinbißstr.");
        break;
    }
    case 297778:
    {
        returnValue = F("Steinblinkweg");
        break;
    }
    case 297779:
    {
        returnValue = F("Steinbock");
        break;
    }
    case 297780:
    {
        returnValue = F("Steinbockgässele");
        break;
    }
    case 297781:
    {
        returnValue = F("Steinbockstr.");
        break;
    }
    case 297782:
    {
        returnValue = F("Steinbockweg");
        break;
    }
    case 297783:
    {
        returnValue = F("Steinbogenbrücke");
        break;
    }
    case 297784:
    {
        returnValue = F("Steinbogenbrücke am Eisenhammer");
        break;
    }
    case 297785:
    {
        returnValue = F("Steinbohlenstr.");
        break;
    }
    case 297786:
    {
        returnValue = F("Steinborn");
        break;
    }
    case 297787:
    {
        returnValue = F("Steinborner Gärten");
        break;
    }
    case 297788:
    {
        returnValue = F("Steinborner Str.");
        break;
    }
    case 297789:
    {
        returnValue = F("Steinborngasse");
        break;
    }
    case 297790:
    {
        returnValue = F("Steinbornshohl");
        break;
    }
    case 297791:
    {
        returnValue = F("Steinbornstr.");
        break;
    }
    case 297792:
    {
        returnValue = F("Steinbornweg");
        break;
    }
    case 297793:
    {
        returnValue = F("Steinbosstr.");
        break;
    }
    case 297794:
    {
        returnValue = F("Steinboß");
        break;
    }
    case 297795:
    {
        returnValue = F("Steinboßweg");
        break;
    }
    case 297796:
    {
        returnValue = F("Steinbraike");
        break;
    }
    case 297797:
    {
        returnValue = F("Steinbrandweg");
        break;
    }
    case 297798:
    {
        returnValue = F("Steinbreche");
        break;
    }
    case 297799:
    {
        returnValue = F("Steinbrechers Hof");
        break;
    }
    case 297800:
    {
        returnValue = F("Steinbrechers Weg");
        break;
    }
    case 297801:
    {
        returnValue = F("Steinbrechers Winkel");
        break;
    }
    case 297802:
    {
        returnValue = F("Steinbrecherstr.");
        break;
    }
    case 297803:
    {
        returnValue = F("Steinbrecherweg");
        break;
    }
    case 297804:
    {
        returnValue = F("Steinbrechstr.");
        break;
    }
    case 297805:
    {
        returnValue = F("Steinbrechweg");
        break;
    }
    case 297806:
    {
        returnValue = F("Steinbrede");
        break;
    }
    case 297807:
    {
        returnValue = F("Steinbree");
        break;
    }
    case 297808:
    {
        returnValue = F("Steinbreede");
        break;
    }
    case 297809:
    {
        returnValue = F("Steinbrei");
        break;
    }
    case 297810:
    {
        returnValue = F("Steinbreite");
        break;
    }
    case 297811:
    {
        returnValue = F("Steinbreiten");
        break;
    }
    case 297812:
    {
        returnValue = F("Steinbreitenweg");
        break;
    }
    case 297813:
    {
        returnValue = F("Steinbrennerstr.");
        break;
    }
    case 297814:
    {
        returnValue = F("Steinbrink");
        break;
    }
    case 297815:
    {
        returnValue = F("Steinbrinker Str.");
        break;
    }
    case 297816:
    {
        returnValue = F("Steinbrinker Weg");
        break;
    }
    case 297817:
    {
        returnValue = F("Steinbrinkheide");
        break;
    }
    case 297818:
    {
        returnValue = F("Steinbrinksfeld");
        break;
    }
    case 297819:
    {
        returnValue = F("Steinbrinkstr.");
        break;
    }
    case 297820:
    {
        returnValue = F("Steinbrinksweg");
        break;
    }
    case 297821:
    {
        returnValue = F("Steinbrinkweg");
        break;
    }
    case 297822:
    {
        returnValue = F("Steinbronnenstr.");
        break;
    }
    case 297823:
    {
        returnValue = F("Steinbronner Feld");
        break;
    }
    case 297824:
    {
        returnValue = F("Steinbronner Kirchweg");
        break;
    }
    case 297825:
    {
        returnValue = F("Steinbruch");
        break;
    }
    case 297826:
    {
        returnValue = F("Steinbruch Mengelsbach");
        break;
    }
    case 297827:
    {
        returnValue = F("Steinbruch-Traufweg");
        break;
    }
    case 297828:
    {
        returnValue = F("Steinbruch-Weg");
        break;
    }
    case 297829:
    {
        returnValue = F("Steinbrucheingang");
        break;
    }
    case 297830:
    {
        returnValue = F("Steinbruchgasse");
        break;
    }
    case 297831:
    {
        returnValue = F("Steinbruchmättleweg");
        break;
    }
    case 297832:
    {
        returnValue = F("Steinbruchplattenweg");
        break;
    }
    case 297833:
    {
        returnValue = F("Steinbruchring");
        break;
    }
    case 297834:
    {
        returnValue = F("Steinbruchschneise");
        break;
    }
    case 297835:
    {
        returnValue = F("Steinbruchstr.");
        break;
    }
    case 297836:
    {
        returnValue = F("Steinbruchsweg");
        break;
    }
    case 297837:
    {
        returnValue = F("Steinbruchweg");
        break;
    }
    case 297838:
    {
        returnValue = F("Steinbruchweg - Erddeponie");
        break;
    }
    case 297839:
    {
        returnValue = F("Steinbruchwege");
        break;
    }
    case 297840:
    {
        returnValue = F("Steinbruchäcker");
        break;
    }
    case 297841:
    {
        returnValue = F("Steinbruck");
        break;
    }
    case 297842:
    {
        returnValue = F("Steinbrucker Str.");
        break;
    }
    case 297843:
    {
        returnValue = F("Steinbruckerweg");
        break;
    }
    case 297844:
    {
        returnValue = F("Steinbruckstr.");
        break;
    }
    case 297845:
    {
        returnValue = F("Steinbruckweg");
        break;
    }
    case 297846:
    {
        returnValue = F("Steinbrunnen");
        break;
    }
    case 297847:
    {
        returnValue = F("Steinbrunnengasse");
        break;
    }
    case 297848:
    {
        returnValue = F("Steinbrunnengärten");
        break;
    }
    case 297849:
    {
        returnValue = F("Steinbrunnenmatten");
        break;
    }
    case 297850:
    {
        returnValue = F("Steinbrunnenmühle");
        break;
    }
    case 297851:
    {
        returnValue = F("Steinbrunnenstr.");
        break;
    }
    case 297852:
    {
        returnValue = F("Steinbrunnenweg");
        break;
    }
    case 297853:
    {
        returnValue = F("Steinbrunngasse");
        break;
    }
    case 297854:
    {
        returnValue = F("Steinbrunnstr.");
        break;
    }
    case 297855:
    {
        returnValue = F("Steinbrüche");
        break;
    }
    case 297856:
    {
        returnValue = F("Steinbrüchen");
        break;
    }
    case 297857:
    {
        returnValue = F("Steinbrüchenener Weg");
        break;
    }
    case 297858:
    {
        returnValue = F("Steinbrüchleweg");
        break;
    }
    case 297859:
    {
        returnValue = F("Steinbrücke");
        break;
    }
    case 297860:
    {
        returnValue = F("Steinbrücken");
        break;
    }
    case 297861:
    {
        returnValue = F("Steinbrückener Weg");
        break;
    }
    case 297862:
    {
        returnValue = F("Steinbrückenpark");
        break;
    }
    case 297863:
    {
        returnValue = F("Steinbrückenweg");
        break;
    }
    case 297864:
    {
        returnValue = F("Steinbrücker Ring");
        break;
    }
    case 297865:
    {
        returnValue = F("Steinbrücker Weg");
        break;
    }
    case 297866:
    {
        returnValue = F("Steinbrücker Wiese");
        break;
    }
    case 297867:
    {
        returnValue = F("Steinbrückstr.");
        break;
    }
    case 297868:
    {
        returnValue = F("Steinbrückweg");
        break;
    }
    case 297869:
    {
        returnValue = F("Steinbrüggen");
        break;
    }
    case 297870:
    {
        returnValue = F("Steinbuchser Str.");
        break;
    }
    case 297871:
    {
        returnValue = F("Steinbuchstr.");
        break;
    }
    case 297872:
    {
        returnValue = F("Steinbuck");
        break;
    }
    case 297873:
    {
        returnValue = F("Steinbuckel");
        break;
    }
    case 297874:
    {
        returnValue = F("Steinbuckelweg");
        break;
    }
    case 297875:
    {
        returnValue = F("Steinbuckl");
        break;
    }
    case 297876:
    {
        returnValue = F("Steinbuckstr.");
        break;
    }
    case 297877:
    {
        returnValue = F("Steinbuckweg");
        break;
    }
    case 297878:
    {
        returnValue = F("Steinbugl");
        break;
    }
    case 297879:
    {
        returnValue = F("Steinbult");
        break;
    }
    case 297880:
    {
        returnValue = F("Steinburg");
        break;
    }
    case 297881:
    {
        returnValue = F("Steinburger Str.");
        break;
    }
    case 297882:
    {
        returnValue = F("Steinburgsgang");
        break;
    }
    case 297883:
    {
        returnValue = F("Steinburgstr.");
        break;
    }
    case 297884:
    {
        returnValue = F("Steinburgsweg");
        break;
    }
    case 297885:
    {
        returnValue = F("Steinbusch");
        break;
    }
    case 297886:
    {
        returnValue = F("Steinbusch Anlagen");
        break;
    }
    case 297887:
    {
        returnValue = F("Steinbuschstr.");
        break;
    }
    case 297888:
    {
        returnValue = F("Steinbuschweg");
        break;
    }
    case 297889:
    {
        returnValue = F("Steinbächer Weg");
        break;
    }
    case 297890:
    {
        returnValue = F("Steinbächler Str.");
        break;
    }
    case 297891:
    {
        returnValue = F("Steinbächler Weg");
        break;
    }
    case 297892:
    {
        returnValue = F("Steinböcke");
        break;
    }
    case 297893:
    {
        returnValue = F("Steinbörnchenweg");
        break;
    }
    case 297894:
    {
        returnValue = F("Steinböschel");
        break;
    }
    case 297895:
    {
        returnValue = F("Steinbößer");
        break;
    }
    case 297896:
    {
        returnValue = F("Steinbößweg");
        break;
    }
    case 297897:
    {
        returnValue = F("Steinbübel");
        break;
    }
    case 297898:
    {
        returnValue = F("Steinbüchel");
        break;
    }
    case 297899:
    {
        returnValue = F("Steinbüchelstr.");
        break;
    }
    case 297900:
    {
        returnValue = F("Steinbüchlweg");
        break;
    }
    case 297901:
    {
        returnValue = F("Steinbückelstr.");
        break;
    }
    case 297902:
    {
        returnValue = F("Steinbückleweg");
        break;
    }
    case 297903:
    {
        returnValue = F("Steinbügel");
        break;
    }
    case 297904:
    {
        returnValue = F("Steinbühl");
        break;
    }
    case 297905:
    {
        returnValue = F("Steinbühler Weg");
        break;
    }
    case 297906:
    {
        returnValue = F("Steinbühlleite");
        break;
    }
    case 297907:
    {
        returnValue = F("Steinbühlstr.");
        break;
    }
    case 297908:
    {
        returnValue = F("Steinbühlweg");
        break;
    }
    case 297909:
    {
        returnValue = F("Steinbült");
        break;
    }
    case 297910:
    {
        returnValue = F("Steinbünne");
        break;
    }
    case 297911:
    {
        returnValue = F("Steinbüschel");
        break;
    }
    case 297912:
    {
        returnValue = F("Steinbüschelstr.");
        break;
    }
    case 297913:
    {
        returnValue = F("Steinbüschelweg");
        break;
    }
    case 297914:
    {
        returnValue = F("Steinchenstr.");
        break;
    }
    case 297915:
    {
        returnValue = F("Steinchenweg");
        break;
    }
    case 297916:
    {
        returnValue = F("Steinches Schneise");
        break;
    }
    case 297917:
    {
        returnValue = F("Steinches Weg");
        break;
    }
    case 297918:
    {
        returnValue = F("Steinchesweg");
        break;
    }
    case 297919:
    {
        returnValue = F("Steindamm");
        break;
    }
    case 297920:
    {
        returnValue = F("Steindammer Weg");
        break;
    }
    case 297921:
    {
        returnValue = F("Steindammwiesen");
        break;
    }
    case 297922:
    {
        returnValue = F("Steindarenweg");
        break;
    }
    case 297923:
    {
        returnValue = F("Steindeckerstr.");
        break;
    }
    case 297924:
    {
        returnValue = F("Steindeich");
        break;
    }
    case 297925:
    {
        returnValue = F("Steindl");
        break;
    }
    case 297926:
    {
        returnValue = F("Steindlbachstr.");
        break;
    }
    case 297927:
    {
        returnValue = F("Steindlgasse");
        break;
    }
    case 297928:
    {
        returnValue = F("Steindlgrabenweg");
        break;
    }
    case 297929:
    {
        returnValue = F("Steindlweg");
        break;
    }
    case 297930:
    {
        returnValue = F("Steindobelweg");
        break;
    }
    case 297931:
    {
        returnValue = F("Steindorf");
        break;
    }
    case 297932:
    {
        returnValue = F("Steindorfer Str.");
        break;
    }
    case 297933:
    {
        returnValue = F("Steindorfer Weg");
        break;
    }
    case 297934:
    {
        returnValue = F("Steindrich");
        break;
    }
    case 297935:
    {
        returnValue = F("Steindrift");
        break;
    }
    case 297936:
    {
        returnValue = F("Steindrüfft");
        break;
    }
    case 297937:
    {
        returnValue = F("Steindöbraweg");
        break;
    }
    case 297938:
    {
        returnValue = F("Steinebach");
        break;
    }
    case 297939:
    {
        returnValue = F("Steinebach, Bahnhof");
        break;
    }
    case 297940:
    {
        returnValue = F("Steinebacher Feld");
        break;
    }
    case 297941:
    {
        returnValue = F("Steinebacher Str.");
        break;
    }
    case 297942:
    {
        returnValue = F("Steinebacher Weg");
        break;
    }
    case 297943:
    {
        returnValue = F("Steinebachweg");
        break;
    }
    case 297944:
    {
        returnValue = F("Steinebahnweg");
        break;
    }
    case 297945:
    {
        returnValue = F("Steineberg");
        break;
    }
    case 297946:
    {
        returnValue = F("Steinebergring");
        break;
    }
    case 297947:
    {
        returnValue = F("Steinebergstr.");
        break;
    }
    case 297948:
    {
        returnValue = F("Steinebodenweg");
        break;
    }
    case 297949:
    {
        returnValue = F("Steinebrück");
        break;
    }
    case 297950:
    {
        returnValue = F("Steinebuchenweg");
        break;
    }
    case 297951:
    {
        returnValue = F("Steinebühlstr.");
        break;
    }
    case 297952:
    {
        returnValue = F("Steineck");
        break;
    }
    case 297953:
    {
        returnValue = F("Steineck Weg");
        break;
    }
    case 297954:
    {
        returnValue = F("Steinecke");
        break;
    }
    case 297955:
    {
        returnValue = F("Steineckerweg");
        break;
    }
    case 297956:
    {
        returnValue = F("Steineckleweg");
        break;
    }
    case 297957:
    {
        returnValue = F("Steineckstr.");
        break;
    }
    case 297958:
    {
        returnValue = F("Steinecktalweg");
        break;
    }
    case 297959:
    {
        returnValue = F("Steineckweg");
        break;
    }
    case 297960:
    {
        returnValue = F("Steinedeckstr.");
        break;
    }
    case 297961:
    {
        returnValue = F("Steinedeckweg");
        break;
    }
    case 297962:
    {
        returnValue = F("Steinefeld");
        break;
    }
    case 297963:
    {
        returnValue = F("Steinefrenzer Str.");
        break;
    }
    case 297964:
    {
        returnValue = F("Steinegerten");
        break;
    }
    case 297965:
    {
        returnValue = F("Steinegge");
        break;
    }
    case 297966:
    {
        returnValue = F("Steinegger Str.");
        break;
    }
    case 297967:
    {
        returnValue = F("Steinegger Weg");
        break;
    }
    case 297968:
    {
        returnValue = F("Steineggershauweg");
        break;
    }
    case 297969:
    {
        returnValue = F("Steineggweg");
        break;
    }
    case 297970:
    {
        returnValue = F("Steinehauweg");
        break;
    }
    case 297971:
    {
        returnValue = F("Steinehofweg");
        break;
    }
    case 297972:
    {
        returnValue = F("Steineiche");
        break;
    }
    case 297973:
    {
        returnValue = F("Steineichenstr.");
        break;
    }
    case 297974:
    {
        returnValue = F("Steineichenweg");
        break;
    }
    case 297975:
    {
        returnValue = F("Steineleh");
        break;
    }
    case 297976:
    {
        returnValue = F("Steinellerweg");
        break;
    }
    case 297977:
    {
        returnValue = F("Steinelsteichweg");
        break;
    }
    case 297978:
    {
        returnValue = F("Steinemer Alsbachweg");
        break;
    }
    case 297979:
    {
        returnValue = F("Steinen");
        break;
    }
    case 297980:
    {
        returnValue = F("Steinenbach");
        break;
    }
    case 297981:
    {
        returnValue = F("Steinenbacher Weg");
        break;
    }
    case 297982:
    {
        returnValue = F("Steinenbachweg");
        break;
    }
    case 297983:
    {
        returnValue = F("Steinenberger Str.");
        break;
    }
    case 297984:
    {
        returnValue = F("Steinenbergstr.");
        break;
    }
    case 297985:
    {
        returnValue = F("Steinenbergweg");
        break;
    }
    case 297986:
    {
        returnValue = F("Steinenbolstr.");
        break;
    }
    case 297987:
    {
        returnValue = F("Steinenbronner Str.");
        break;
    }
    case 297988:
    {
        returnValue = F("Steinenbrunnweg");
        break;
    }
    case 297989:
    {
        returnValue = F("Steinenbrück");
        break;
    }
    case 297990:
    {
        returnValue = F("Steinenbrücke");
        break;
    }
    case 297991:
    {
        returnValue = F("Steinenbrückle");
        break;
    }
    case 297992:
    {
        returnValue = F("Steinenbrückstr.");
        break;
    }
    case 297993:
    {
        returnValue = F("Steinenbühlweg");
        break;
    }
    case 297994:
    {
        returnValue = F("Steinende");
        break;
    }
    case 297995:
    {
        returnValue = F("Steinener Steig");
        break;
    }
    case 297996:
    {
        returnValue = F("Steinenfeld");
        break;
    }
    case 297997:
    {
        returnValue = F("Steinenfelder Weg");
        break;
    }
    case 297998:
    {
        returnValue = F("Steinenfeldsträßle");
        break;
    }
    case 297999:
    {
        returnValue = F("Steinenfeldweg");
        break;
    }
    case 298000:
    {
        returnValue = F("Steinenfurtweg");
        break;
    }
    case 298001:
    {
        returnValue = F("Steinengasse");
        break;
    }
    case 298002:
    {
        returnValue = F("Steinengrabenweg");
        break;
    }
    case 298003:
    {
        returnValue = F("Steinengässle");
        break;
    }
    case 298004:
    {
        returnValue = F("Steinenhauweg");
        break;
    }
    case 298005:
    {
        returnValue = F("Steinenstr.");
        break;
    }
    case 298006:
    {
        returnValue = F("Steinenweg");
        break;
    }
    case 298007:
    {
        returnValue = F("Steinenwiese");
        break;
    }
    case 298008:
    {
        returnValue = F("Steinenwiesen");
        break;
    }
    case 298009:
    {
        returnValue = F("Steinenäcker");
        break;
    }
    case 298010:
    {
        returnValue = F("Steiner Berg");
        break;
    }
    case 298011:
    {
        returnValue = F("Steiner Ring");
        break;
    }
    case 298012:
    {
        returnValue = F("Steiner Str.");
        break;
    }
    case 298013:
    {
        returnValue = F("Steiner Sträßle");
        break;
    }
    case 298014:
    {
        returnValue = F("Steiner Weg");
        break;
    }
    case 298015:
    {
        returnValue = F("Steinera");
        break;
    }
    case 298016:
    {
        returnValue = F("Steinerbaum");
        break;
    }
    case 298017:
    {
        returnValue = F("Steinerberg");
        break;
    }
    case 298018:
    {
        returnValue = F("Steinerbergstr.");
        break;
    }
    case 298019:
    {
        returnValue = F("Steinerbrückler Weg");
        break;
    }
    case 298020:
    {
        returnValue = F("Steinerbächle");
        break;
    }
    case 298021:
    {
        returnValue = F("Steinerei");
        break;
    }
    case 298022:
    {
        returnValue = F("Steinerer Weg");
        break;
    }
    case 298023:
    {
        returnValue = F("Steinerfeldstr.");
        break;
    }
    case 298024:
    {
        returnValue = F("Steinergarten");
        break;
    }
    case 298025:
    {
        returnValue = F("Steinergasse");
        break;
    }
    case 298026:
    {
        returnValue = F("Steinerhof");
        break;
    }
    case 298027:
    {
        returnValue = F("Steinerholz");
        break;
    }
    case 298028:
    {
        returnValue = F("Steinerholzer Weg");
        break;
    }
    case 298029:
    {
        returnValue = F("Steinerkampweg");
        break;
    }
    case 298030:
    {
        returnValue = F("Steinerleinbacher Str.");
        break;
    }
    case 298031:
    {
        returnValue = F("Steinermühle");
        break;
    }
    case 298032:
    {
        returnValue = F("Steinern");
        break;
    }
    case 298033:
    {
        returnValue = F("Steinern Brücke");
        break;
    }
    case 298034:
    {
        returnValue = F("Steinerne Bank");
        break;
    }
    case 298035:
    {
        returnValue = F("Steinerne Brücke");
        break;
    }
    case 298036:
    {
        returnValue = F("Steinerne Furth");
        break;
    }
    case 298037:
    {
        returnValue = F("Steinerne Gasse");
        break;
    }
    case 298038:
    {
        returnValue = F("Steinerne Gewanne");
        break;
    }
    case 298039:
    {
        returnValue = F("Steinerne Heide");
        break;
    }
    case 298040:
    {
        returnValue = F("Steinerne Pforte");
        break;
    }
    case 298041:
    {
        returnValue = F("Steinerne Ruhe");
        break;
    }
    case 298042:
    {
        returnValue = F("Steinerne Steige");
        break;
    }
    case 298043:
    {
        returnValue = F("Steinerne Str.");
        break;
    }
    case 298044:
    {
        returnValue = F("Steinerne Straßschneise");
        break;
    }
    case 298045:
    {
        returnValue = F("Steinerne Wiese");
        break;
    }
    case 298046:
    {
        returnValue = F("Steinernebrückschneise");
        break;
    }
    case 298047:
    {
        returnValue = F("Steinernekreuzweg");
        break;
    }
    case 298048:
    {
        returnValue = F("Steinerner Bankweg");
        break;
    }
    case 298049:
    {
        returnValue = F("Steinerner Weg");
        break;
    }
    case 298050:
    {
        returnValue = F("Steinerner-Tisch-Weg");
        break;
    }
    case 298051:
    {
        returnValue = F("Steinernes Gaßl");
        break;
    }
    case 298052:
    {
        returnValue = F("Steinernes Gässle");
        break;
    }
    case 298053:
    {
        returnValue = F("Steinernes Gästebuch");
        break;
    }
    case 298054:
    {
        returnValue = F("Steinernes Gäßchen");
        break;
    }
    case 298055:
    {
        returnValue = F("Steinernes Kreuz");
        break;
    }
    case 298056:
    {
        returnValue = F("Steinernes Stück");
        break;
    }
    case 298057:
    {
        returnValue = F("Steinernes Tal");
        break;
    }
    case 298058:
    {
        returnValue = F("Steinernhaus");
        break;
    }
    case 298059:
    {
        returnValue = F("Steinerother Str.");
        break;
    }
    case 298060:
    {
        returnValue = F("Steinersgasse");
        break;
    }
    case 298061:
    {
        returnValue = F("Steinerskirchener Str.");
        break;
    }
    case 298062:
    {
        returnValue = F("Steinerstegweg");
        break;
    }
    case 298063:
    {
        returnValue = F("Steinerstock");
        break;
    }
    case 298064:
    {
        returnValue = F("Steinerstr.");
        break;
    }
    case 298065:
    {
        returnValue = F("Steinert");
        break;
    }
    case 298066:
    {
        returnValue = F("Steinertal");
        break;
    }
    case 298067:
    {
        returnValue = F("Steinertalweg");
        break;
    }
    case 298068:
    {
        returnValue = F("Steinertplatz");
        break;
    }
    case 298069:
    {
        returnValue = F("Steinertsaustr.");
        break;
    }
    case 298070:
    {
        returnValue = F("Steinertsbach");
        break;
    }
    case 298071:
    {
        returnValue = F("Steinertsplan");
        break;
    }
    case 298072:
    {
        returnValue = F("Steinertstr.");
        break;
    }
    case 298073:
    {
        returnValue = F("Steinertsweg");
        break;
    }
    case 298074:
    {
        returnValue = F("Steinertswiese");
        break;
    }
    case 298075:
    {
        returnValue = F("Steinertweg");
        break;
    }
    case 298076:
    {
        returnValue = F("Steinerwaldstr.");
        break;
    }
    case 298077:
    {
        returnValue = F("Steinerweg");
        break;
    }
    case 298078:
    {
        returnValue = F("Steinesch");
        break;
    }
    case 298079:
    {
        returnValue = F("Steinesche");
        break;
    }
    case 298080:
    {
        returnValue = F("Steinesmühle");
        break;
    }
    case 298081:
    {
        returnValue = F("Steinesstr.");
        break;
    }
    case 298082:
    {
        returnValue = F("Steinesweg");
        break;
    }
    case 298083:
    {
        returnValue = F("Steinet");
        break;
    }
    case 298084:
    {
        returnValue = F("Steineweg");
        break;
    }
    case 298085:
    {
        returnValue = F("Steineweiher");
        break;
    }
    case 298086:
    {
        returnValue = F("Steinfeld");
        break;
    }
    case 298087:
    {
        returnValue = F("Steinfeldeleweg");
        break;
    }
    case 298088:
    {
        returnValue = F("Steinfelder Damm");
        break;
    }
    case 298089:
    {
        returnValue = F("Steinfelder Gasse");
        break;
    }
    case 298090:
    {
        returnValue = F("Steinfelder Heckkaten");
        break;
    }
    case 298091:
    {
        returnValue = F("Steinfelder Mittelweg");
        break;
    }
    case 298092:
    {
        returnValue = F("Steinfelder Mühle");
        break;
    }
    case 298093:
    {
        returnValue = F("Steinfelder Str.");
        break;
    }
    case 298094:
    {
        returnValue = F("Steinfelder Weg");
        break;
    }
    case 298095:
    {
        returnValue = F("Steinfelder Zolln");
        break;
    }
    case 298096:
    {
        returnValue = F("Steinfelderhof");
        break;
    }
    case 298097:
    {
        returnValue = F("Steinfelderhude");
        break;
    }
    case 298098:
    {
        returnValue = F("Steinfelderwohld");
        break;
    }
    case 298099:
    {
        returnValue = F("Steinfeldgasse");
        break;
    }
    case 298100:
    {
        returnValue = F("Steinfeldstr.");
        break;
    }
    case 298101:
    {
        returnValue = F("Steinfeldsweg");
        break;
    }
    case 298102:
    {
        returnValue = F("Steinfeldweg");
        break;
    }
    case 298103:
    {
        returnValue = F("Steinfels");
        break;
    }
    case 298104:
    {
        returnValue = F("Steinfelser Str.");
        break;
    }
    case 298105:
    {
        returnValue = F("Steinfelser Weg");
        break;
    }
    case 298106:
    {
        returnValue = F("Steinfelsstr.");
        break;
    }
    case 298107:
    {
        returnValue = F("Steinfichten");
        break;
    }
    case 298108:
    {
        returnValue = F("Steinfirster Weg");
        break;
    }
    case 298109:
    {
        returnValue = F("Steinfirstweg");
        break;
    }
    case 298110:
    {
        returnValue = F("Steinfischbacher Weg");
        break;
    }
    case 298111:
    {
        returnValue = F("Steinfleckweg");
        break;
    }
    case 298112:
    {
        returnValue = F("Steinflurstr.");
        break;
    }
    case 298113:
    {
        returnValue = F("Steinflurweg");
        break;
    }
    case 298114:
    {
        returnValue = F("Steinforelle");
        break;
    }
    case 298115:
    {
        returnValue = F("Steinforter Str.");
        break;
    }
    case 298116:
    {
        returnValue = F("Steinforth");
        break;
    }
    case 298117:
    {
        returnValue = F("Steinfrankenreuth");
        break;
    }
    case 298118:
    {
        returnValue = F("Steinfulgen");
        break;
    }
    case 298119:
    {
        returnValue = F("Steinfunder Str.");
        break;
    }
    case 298120:
    {
        returnValue = F("Steinfunder Weg");
        break;
    }
    case 298121:
    {
        returnValue = F("Steinfurt");
        break;
    }
    case 298122:
    {
        returnValue = F("Steinfurter Allee");
        break;
    }
    case 298123:
    {
        returnValue = F("Steinfurter Ring");
        break;
    }
    case 298124:
    {
        returnValue = F("Steinfurter Str.");
        break;
    }
    case 298125:
    {
        returnValue = F("Steinfurth");
        break;
    }
    case 298126:
    {
        returnValue = F("Steinfurther Hauptstr.");
        break;
    }
    case 298127:
    {
        returnValue = F("Steinfurther Str.");
        break;
    }
    case 298128:
    {
        returnValue = F("Steinfurther Weg");
        break;
    }
    case 298129:
    {
        returnValue = F("Steinfurthgässle");
        break;
    }
    case 298130:
    {
        returnValue = F("Steinfurthstr.");
        break;
    }
    case 298131:
    {
        returnValue = F("Steinfurtriede");
        break;
    }
    case 298132:
    {
        returnValue = F("Steinfurtsmühle");
        break;
    }
    case 298133:
    {
        returnValue = F("Steinfurtstr.");
        break;
    }
    case 298134:
    {
        returnValue = F("Steinförder Str.");
        break;
    }
    case 298135:
    {
        returnValue = F("Steinförder Weg");
        break;
    }
    case 298136:
    {
        returnValue = F("Steinförstweg");
        break;
    }
    case 298137:
    {
        returnValue = F("Steingadener Str.");
        break;
    }
    case 298138:
    {
        returnValue = F("Steingadener Weg");
        break;
    }
    case 298139:
    {
        returnValue = F("Steingaesserstr.");
        break;
    }
    case 298140:
    {
        returnValue = F("Steingalle");
        break;
    }
    case 298141:
    {
        returnValue = F("Steingardener Str.");
        break;
    }
    case 298142:
    {
        returnValue = F("Steingarten");
        break;
    }
    case 298143:
    {
        returnValue = F("Steingartenstr.");
        break;
    }
    case 298144:
    {
        returnValue = F("Steingartenweg");
        break;
    }
    case 298145:
    {
        returnValue = F("Steingass");
        break;
    }
    case 298146:
    {
        returnValue = F("Steingasse");
        break;
    }
    case 298147:
    {
        returnValue = F("Steingau");
        break;
    }
    case 298148:
    {
        returnValue = F("Steingauer Str.");
        break;
    }
    case 298149:
    {
        returnValue = F("Steingaustr.");
        break;
    }
    case 298150:
    {
        returnValue = F("Steinge");
        break;
    }
    case 298151:
    {
        returnValue = F("Steingebissweg");
        break;
    }
    case 298152:
    {
        returnValue = F("Steingehrenweg");
        break;
    }
    case 298153:
    {
        returnValue = F("Steingen");
        break;
    }
    case 298154:
    {
        returnValue = F("Steingensstr.");
        break;
    }
    case 298155:
    {
        returnValue = F("Steingensweg");
        break;
    }
    case 298156:
    {
        returnValue = F("Steingertweg");
        break;
    }
    case 298157:
    {
        returnValue = F("Steingerücksweg");
        break;
    }
    case 298158:
    {
        returnValue = F("Steingesweg");
        break;
    }
    case 298159:
    {
        returnValue = F("Steingeweg");
        break;
    }
    case 298160:
    {
        returnValue = F("Steingleiche");
        break;
    }
    case 298161:
    {
        returnValue = F("Steingleis");
        break;
    }
    case 298162:
    {
        returnValue = F("Steingraben");
        break;
    }
    case 298163:
    {
        returnValue = F("Steingrabenrain");
        break;
    }
    case 298164:
    {
        returnValue = F("Steingrabenstr.");
        break;
    }
    case 298165:
    {
        returnValue = F("Steingrabenweg");
        break;
    }
    case 298166:
    {
        returnValue = F("Steingriffer Str.");
        break;
    }
    case 298167:
    {
        returnValue = F("Steingrimmaer Weg");
        break;
    }
    case 298168:
    {
        returnValue = F("Steingrub");
        break;
    }
    case 298169:
    {
        returnValue = F("Steingrube");
        break;
    }
    case 298170:
    {
        returnValue = F("Steingrubenhofweg");
        break;
    }
    case 298171:
    {
        returnValue = F("Steingrubenstr.");
        break;
    }
    case 298172:
    {
        returnValue = F("Steingrubenweg");
        break;
    }
    case 298173:
    {
        returnValue = F("Steingruber Ring");
        break;
    }
    case 298174:
    {
        returnValue = F("Steingruber Str.");
        break;
    }
    case 298175:
    {
        returnValue = F("Steingruberstr.");
        break;
    }
    case 298176:
    {
        returnValue = F("Steingruberweg");
        break;
    }
    case 298177:
    {
        returnValue = F("Steingrubestr.");
        break;
    }
    case 298178:
    {
        returnValue = F("Steingrubstr.");
        break;
    }
    case 298179:
    {
        returnValue = F("Steingrubweg");
        break;
    }
    case 298180:
    {
        returnValue = F("Steingrund");
        break;
    }
    case 298181:
    {
        returnValue = F("Steingrundschneise");
        break;
    }
    case 298182:
    {
        returnValue = F("Steingrundstr.");
        break;
    }
    case 298183:
    {
        returnValue = F("Steingrundweg");
        break;
    }
    case 298184:
    {
        returnValue = F("Steingräber");
        break;
    }
    case 298185:
    {
        returnValue = F("Steingräbersweg");
        break;
    }
    case 298186:
    {
        returnValue = F("Steingräberweg");
        break;
    }
    case 298187:
    {
        returnValue = F("Steingräblein");
        break;
    }
    case 298188:
    {
        returnValue = F("Steingrübenstr.");
        break;
    }
    case 298189:
    {
        returnValue = F("Steingrüblesweg");
        break;
    }
    case 298190:
    {
        returnValue = F("Steingrübleweg");
        break;
    }
    case 298191:
    {
        returnValue = F("Steingrün");
        break;
    }
    case 298192:
    {
        returnValue = F("Steingutstr.");
        break;
    }
    case 298193:
    {
        returnValue = F("Steingädele");
        break;
    }
    case 298194:
    {
        returnValue = F("Steingärten");
        break;
    }
    case 298195:
    {
        returnValue = F("Steingässchen");
        break;
    }
    case 298196:
    {
        returnValue = F("Steingässle");
        break;
    }
    case 298197:
    {
        returnValue = F("Steingäßchen");
        break;
    }
    case 298198:
    {
        returnValue = F("Steingötter-Greiff-Str.");
        break;
    }
    case 298199:
    {
        returnValue = F("Steinhaag");
        break;
    }
    case 298200:
    {
        returnValue = F("Steinhaagweg");
        break;
    }
    case 298201:
    {
        returnValue = F("Steinhaar");
        break;
    }
    case 298202:
    {
        returnValue = F("Steinhackstr.");
        break;
    }
    case 298203:
    {
        returnValue = F("Steinhagen");
        break;
    }
    case 298204:
    {
        returnValue = F("Steinhagener Dorfstr.");
        break;
    }
    case 298205:
    {
        returnValue = F("Steinhagensweg");
        break;
    }
    case 298206:
    {
        returnValue = F("Steinhalde");
        break;
    }
    case 298207:
    {
        returnValue = F("Steinhalden");
        break;
    }
    case 298208:
    {
        returnValue = F("Steinhaldenstr.");
        break;
    }
    case 298209:
    {
        returnValue = F("Steinhaldenweg");
        break;
    }
    case 298210:
    {
        returnValue = F("Steinhalderstr.");
        break;
    }
    case 298211:
    {
        returnValue = F("Steinhaldeweg");
        break;
    }
    case 298212:
    {
        returnValue = F("Steinhamm");
        break;
    }
    case 298213:
    {
        returnValue = F("Steinhang");
        break;
    }
    case 298214:
    {
        returnValue = F("Steinhardter Str.");
        break;
    }
    case 298215:
    {
        returnValue = F("Steinhardtstr.");
        break;
    }
    case 298216:
    {
        returnValue = F("Steinhardtsweg");
        break;
    }
    case 298217:
    {
        returnValue = F("Steinhardtweg");
        break;
    }
    case 298218:
    {
        returnValue = F("Steinharter Weg");
        break;
    }
    case 298219:
    {
        returnValue = F("Steinhauck");
        break;
    }
    case 298220:
    {
        returnValue = F("Steinhauckstr.");
        break;
    }
    case 298221:
    {
        returnValue = F("Steinhauckweg");
        break;
    }
    case 298222:
    {
        returnValue = F("Steinhauer Weg");
        break;
    }
    case 298223:
    {
        returnValue = F("Steinhauergasse");
        break;
    }
    case 298224:
    {
        returnValue = F("Steinhauerhäuschen");
        break;
    }
    case 298225:
    {
        returnValue = F("Steinhauerplatz");
        break;
    }
    case 298226:
    {
        returnValue = F("Steinhauerstr.");
        break;
    }
    case 298227:
    {
        returnValue = F("Steinhauersweg");
        break;
    }
    case 298228:
    {
        returnValue = F("Steinhauerweg");
        break;
    }
    case 298229:
    {
        returnValue = F("Steinhaufenweg");
        break;
    }
    case 298230:
    {
        returnValue = F("Steinhauffstr.");
        break;
    }
    case 298231:
    {
        returnValue = F("Steinhaus");
        break;
    }
    case 298232:
    {
        returnValue = F("Steinhausen");
        break;
    }
    case 298233:
    {
        returnValue = F("Steinhausener Weg");
        break;
    }
    case 298234:
    {
        returnValue = F("Steinhauser Auel");
        break;
    }
    case 298235:
    {
        returnValue = F("Steinhauser Bergstr.");
        break;
    }
    case 298236:
    {
        returnValue = F("Steinhauser Feldweg");
        break;
    }
    case 298237:
    {
        returnValue = F("Steinhauser Str.");
        break;
    }
    case 298238:
    {
        returnValue = F("Steinhauser Weg");
        break;
    }
    case 298239:
    {
        returnValue = F("Steinhauserstr.");
        break;
    }
    case 298240:
    {
        returnValue = F("Steinhausgasse");
        break;
    }
    case 298241:
    {
        returnValue = F("Steinhausstr.");
        break;
    }
    case 298242:
    {
        returnValue = F("Steinhausweg");
        break;
    }
    case 298243:
    {
        returnValue = F("Steinhauweg");
        break;
    }
    case 298244:
    {
        returnValue = F("Steinhavelstr.");
        break;
    }
    case 298245:
    {
        returnValue = F("Steinheck");
        break;
    }
    case 298246:
    {
        returnValue = F("Steinhecke");
        break;
    }
    case 298247:
    {
        returnValue = F("Steinhecken");
        break;
    }
    case 298248:
    {
        returnValue = F("Steinheckenstr.");
        break;
    }
    case 298249:
    {
        returnValue = F("Steinheckstr.");
        break;
    }
    case 298250:
    {
        returnValue = F("Steinheide");
        break;
    }
    case 298251:
    {
        returnValue = F("Steinheidel");
        break;
    }
    case 298252:
    {
        returnValue = F("Steinheider Str.");
        break;
    }
    case 298253:
    {
        returnValue = F("Steinheider Weg");
        break;
    }
    case 298254:
    {
        returnValue = F("Steinheidler Weg");
        break;
    }
    case 298255:
    {
        returnValue = F("Steinheilstr.");
        break;
    }
    case 298256:
    {
        returnValue = F("Steinheimer Sachsenhardtsträßle");
        break;
    }
    case 298257:
    {
        returnValue = F("Steinheimer Str.");
        break;
    }
    case 298258:
    {
        returnValue = F("Steinheimer Weg");
        break;
    }
    case 298259:
    {
        returnValue = F("Steinheimergarten");
        break;
    }
    case 298260:
    {
        returnValue = F("Steinheimerstr.");
        break;
    }
    case 298261:
    {
        returnValue = F("Steinherrstr.");
        break;
    }
    case 298262:
    {
        returnValue = F("Steinheuteröder Weg");
        break;
    }
    case 298263:
    {
        returnValue = F("Steinhilber Str.");
        break;
    }
    case 298264:
    {
        returnValue = F("Steinhirtstr.");
        break;
    }
    case 298265:
    {
        returnValue = F("Steinhof");
        break;
    }
    case 298266:
    {
        returnValue = F("Steinhofener Str.");
        break;
    }
    case 298267:
    {
        returnValue = F("Steinhoffstr.");
        break;
    }
    case 298268:
    {
        returnValue = F("Steinhoffweg");
        break;
    }
    case 298269:
    {
        returnValue = F("Steinhofgasse");
        break;
    }
    case 298270:
    {
        returnValue = F("Steinhofstr.");
        break;
    }
    case 298271:
    {
        returnValue = F("Steinhohl");
        break;
    }
    case 298272:
    {
        returnValue = F("Steinhohle");
        break;
    }
    case 298273:
    {
        returnValue = F("Steinholzer Weg");
        break;
    }
    case 298274:
    {
        returnValue = F("Steinholzstr.");
        break;
    }
    case 298275:
    {
        returnValue = F("Steinholztriftweg");
        break;
    }
    case 298276:
    {
        returnValue = F("Steinhornskamp");
        break;
    }
    case 298277:
    {
        returnValue = F("Steinhorst");
        break;
    }
    case 298278:
    {
        returnValue = F("Steinhorster Str.");
        break;
    }
    case 298279:
    {
        returnValue = F("Steinhorster Weg");
        break;
    }
    case 298280:
    {
        returnValue = F("Steinhubelweg");
        break;
    }
    case 298281:
    {
        returnValue = F("Steinhude");
        break;
    }
    case 298282:
    {
        returnValue = F("Steinhuder Str.");
        break;
    }
    case 298283:
    {
        returnValue = F("Steinhuder Weg");
        break;
    }
    case 298284:
    {
        returnValue = F("Steinhuder-Meer-Str.");
        break;
    }
    case 298285:
    {
        returnValue = F("Steinhurststr.");
        break;
    }
    case 298286:
    {
        returnValue = F("Steinhägener Weg");
        break;
    }
    case 298287:
    {
        returnValue = F("Steinhäger Str.");
        break;
    }
    case 298288:
    {
        returnValue = F("Steinhäger Weg");
        break;
    }
    case 298289:
    {
        returnValue = F("Steinhälde");
        break;
    }
    case 298290:
    {
        returnValue = F("Steinhäulesweg");
        break;
    }
    case 298291:
    {
        returnValue = F("Steinhäuleweg");
        break;
    }
    case 298292:
    {
        returnValue = F("Steinhäuselweg");
        break;
    }
    case 298293:
    {
        returnValue = F("Steinhäuser");
        break;
    }
    case 298294:
    {
        returnValue = F("Steinhäuser Str.");
        break;
    }
    case 298295:
    {
        returnValue = F("Steinhäuser Weg");
        break;
    }
    case 298296:
    {
        returnValue = F("Steinhäusle");
        break;
    }
    case 298297:
    {
        returnValue = F("Steinhäuslebühl");
        break;
    }
    case 298298:
    {
        returnValue = F("Steinhäusleweg");
        break;
    }
    case 298299:
    {
        returnValue = F("Steinhäußlerstr.");
        break;
    }
    case 298300:
    {
        returnValue = F("Steinhöfe");
        break;
    }
    case 298301:
    {
        returnValue = F("Steinhöfeler Chaussee");
        break;
    }
    case 298302:
    {
        returnValue = F("Steinhöfeler Str.");
        break;
    }
    case 298303:
    {
        returnValue = F("Steinhöfeler Weg");
        break;
    }
    case 298304:
    {
        returnValue = F("Steinhöfen");
        break;
    }
    case 298305:
    {
        returnValue = F("Steinhöfer Weg");
        break;
    }
    case 298306:
    {
        returnValue = F("Steinhöfler Str.");
        break;
    }
    case 298307:
    {
        returnValue = F("Steinhöfler Weg");
        break;
    }
    case 298308:
    {
        returnValue = F("Steinhögger Weg");
        break;
    }
    case 298309:
    {
        returnValue = F("Steinhöhe");
        break;
    }
    case 298310:
    {
        returnValue = F("Steinhöhle");
        break;
    }
    case 298311:
    {
        returnValue = F("Steinhöllweg");
        break;
    }
    case 298312:
    {
        returnValue = F("Steinhölzle");
        break;
    }
    case 298313:
    {
        returnValue = F("Steinhöringer Str.");
        break;
    }
    case 298314:
    {
        returnValue = F("Steinhöwelstr.");
        break;
    }
    case 298315:
    {
        returnValue = F("Steinhübel");
        break;
    }
    case 298316:
    {
        returnValue = F("Steinhübeler Str.");
        break;
    }
    case 298317:
    {
        returnValue = F("Steinhübelhäuser");
        break;
    }
    case 298318:
    {
        returnValue = F("Steinhübelstr.");
        break;
    }
    case 298319:
    {
        returnValue = F("Steinhübelweg");
        break;
    }
    case 298320:
    {
        returnValue = F("Steinhügel");
        break;
    }
    case 298321:
    {
        returnValue = F("Steinhügelstr.");
        break;
    }
    case 298322:
    {
        returnValue = F("Steinhügelweg");
        break;
    }
    case 298323:
    {
        returnValue = F("Steinhütelstraßl");
        break;
    }
    case 298324:
    {
        returnValue = F("Steinhütte");
        break;
    }
    case 298325:
    {
        returnValue = F("Steinhütten");
        break;
    }
    case 298326:
    {
        returnValue = F("Steinhüttenstr.");
        break;
    }
    case 298327:
    {
        returnValue = F("Steinhüttenweg");
        break;
    }
    case 298328:
    {
        returnValue = F("Steinichsgrabenweg");
        break;
    }
    case 298329:
    {
        returnValue = F("Steinichsweg");
        break;
    }
    case 298330:
    {
        returnValue = F("Steinichweg");
        break;
    }
    case 298331:
    {
        returnValue = F("Steinig");
        break;
    }
    case 298332:
    {
        returnValue = F("Steinige");
        break;
    }
    case 298333:
    {
        returnValue = F("Steinige Dalle");
        break;
    }
    case 298334:
    {
        returnValue = F("Steinige Gasse");
        break;
    }
    case 298335:
    {
        returnValue = F("Steinige Planie");
        break;
    }
    case 298336:
    {
        returnValue = F("Steinige Str.");
        break;
    }
    case 298337:
    {
        returnValue = F("Steinige Äcker");
        break;
    }
    case 298338:
    {
        returnValue = F("Steinigen");
        break;
    }
    case 298339:
    {
        returnValue = F("Steinigenweg");
        break;
    }
    case 298340:
    {
        returnValue = F("Steiniger Berg");
        break;
    }
    case 298341:
    {
        returnValue = F("Steiniger Bühl");
        break;
    }
    case 298342:
    {
        returnValue = F("Steiniger Hügel");
        break;
    }
    case 298343:
    {
        returnValue = F("Steiniger Weg");
        break;
    }
    case 298344:
    {
        returnValue = F("Steiniggass");
        break;
    }
    case 298345:
    {
        returnValue = F("Steiniggäßle");
        break;
    }
    case 298346:
    {
        returnValue = F("Steinigkreuzweg");
        break;
    }
    case 298347:
    {
        returnValue = F("Steinigleite");
        break;
    }
    case 298348:
    {
        returnValue = F("Steinigsgrund");
        break;
    }
    case 298349:
    {
        returnValue = F("Steinigshohl");
        break;
    }
    case 298350:
    {
        returnValue = F("Steinigstr.");
        break;
    }
    case 298351:
    {
        returnValue = F("Steinigsweg");
        break;
    }
    case 298352:
    {
        returnValue = F("Steinigt");
        break;
    }
    case 298353:
    {
        returnValue = F("Steinigte Äcker");
        break;
    }
    case 298354:
    {
        returnValue = F("Steinigter Bergweg");
        break;
    }
    case 298355:
    {
        returnValue = F("Steinigter Weg");
        break;
    }
    case 298356:
    {
        returnValue = F("Steinigtweg");
        break;
    }
    case 298357:
    {
        returnValue = F("Steinigweg");
        break;
    }
    case 298358:
    {
        returnValue = F("Steininger Badeplatz");
        break;
    }
    case 298359:
    {
        returnValue = F("Steininger Krümme");
        break;
    }
    case 298360:
    {
        returnValue = F("Steininger Str.");
        break;
    }
    case 298361:
    {
        returnValue = F("Steininger Weg");
        break;
    }
    case 298362:
    {
        returnValue = F("Steiningsbachtal");
        break;
    }
    case 298363:
    {
        returnValue = F("Steiningstr.");
        break;
    }
    case 298364:
    {
        returnValue = F("Steinitz");
        break;
    }
    case 298365:
    {
        returnValue = F("Steinitzer Str.");
        break;
    }
    case 298366:
    {
        returnValue = F("Steinitzer Weg");
        break;
    }
    case 298367:
    {
        returnValue = F("Steinitzweg");
        break;
    }
    case 298368:
    {
        returnValue = F("Steinjord");
        break;
    }
    case 298369:
    {
        returnValue = F("Steinkammer");
        break;
    }
    case 298370:
    {
        returnValue = F("Steinkammerblick");
        break;
    }
    case 298371:
    {
        returnValue = F("Steinkamp");
        break;
    }
    case 298372:
    {
        returnValue = F("Steinkampberg");
        break;
    }
    case 298373:
    {
        returnValue = F("Steinkampbreede");
        break;
    }
    case 298374:
    {
        returnValue = F("Steinkampring");
        break;
    }
    case 298375:
    {
        returnValue = F("Steinkampsfeld");
        break;
    }
    case 298376:
    {
        returnValue = F("Steinkampsgraben");
        break;
    }
    case 298377:
    {
        returnValue = F("Steinkampstr.");
        break;
    }
    case 298378:
    {
        returnValue = F("Steinkampstwiete");
        break;
    }
    case 298379:
    {
        returnValue = F("Steinkampsweg");
        break;
    }
    case 298380:
    {
        returnValue = F("Steinkampweg");
        break;
    }
    case 298381:
    {
        returnValue = F("Steinkart");
        break;
    }
    case 298382:
    {
        returnValue = F("Steinkartstr.");
        break;
    }
    case 298383:
    {
        returnValue = F("Steinkatz");
        break;
    }
    case 298384:
    {
        returnValue = F("Steinkaul");
        break;
    }
    case 298385:
    {
        returnValue = F("Steinkaule");
        break;
    }
    case 298386:
    {
        returnValue = F("Steinkauler Str.");
        break;
    }
    case 298387:
    {
        returnValue = F("Steinkauler Weg");
        break;
    }
    case 298388:
    {
        returnValue = F("Steinkaulstr.");
        break;
    }
    case 298389:
    {
        returnValue = F("Steinkaut");
        break;
    }
    case 298390:
    {
        returnValue = F("Steinkaut Schneise");
        break;
    }
    case 298391:
    {
        returnValue = F("Steinkaute");
        break;
    }
    case 298392:
    {
        returnValue = F("Steinkautenweg");
        break;
    }
    case 298393:
    {
        returnValue = F("Steinkauter Richtweg");
        break;
    }
    case 298394:
    {
        returnValue = F("Steinkauter Weg");
        break;
    }
    case 298395:
    {
        returnValue = F("Steinkauterweg");
        break;
    }
    case 298396:
    {
        returnValue = F("Steinkautsweg");
        break;
    }
    case 298397:
    {
        returnValue = F("Steinkauzweg");
        break;
    }
    case 298398:
    {
        returnValue = F("Steinke");
        break;
    }
    case 298399:
    {
        returnValue = F("Steinkehof");
        break;
    }
    case 298400:
    {
        returnValue = F("Steinkenhöfen");
        break;
    }
    case 298401:
    {
        returnValue = F("Steinkenrath");
        break;
    }
    case 298402:
    {
        returnValue = F("Steinkenrather Weg");
        break;
    }
    case 298403:
    {
        returnValue = F("Steinkenweg");
        break;
    }
    case 298404:
    {
        returnValue = F("Steinkerfeld");
        break;
    }
    case 298405:
    {
        returnValue = F("Steinkertzbachstr.");
        break;
    }
    case 298406:
    {
        returnValue = F("Steinkirchen");
        break;
    }
    case 298407:
    {
        returnValue = F("Steinkirchener Str.");
        break;
    }
    case 298408:
    {
        returnValue = F("Steinkirchner Str.");
        break;
    }
    case 298409:
    {
        returnValue = F("Steinklamm");
        break;
    }
    case 298410:
    {
        returnValue = F("Steinklammstr.");
        break;
    }
    case 298411:
    {
        returnValue = F("Steinklauseweg");
        break;
    }
    case 298412:
    {
        returnValue = F("Steinkleehang");
        break;
    }
    case 298413:
    {
        returnValue = F("Steinklepper Weg");
        break;
    }
    case 298414:
    {
        returnValue = F("Steinklinge");
        break;
    }
    case 298415:
    {
        returnValue = F("Steinklingenweg");
        break;
    }
    case 298416:
    {
        returnValue = F("Steinklippe");
        break;
    }
    case 298417:
    {
        returnValue = F("Steinklippen");
        break;
    }
    case 298418:
    {
        returnValue = F("Steinklippenstr.");
        break;
    }
    case 298419:
    {
        returnValue = F("Steinknapp");
        break;
    }
    case 298420:
    {
        returnValue = F("Steinknippen");
        break;
    }
    case 298421:
    {
        returnValue = F("Steinknock");
        break;
    }
    case 298422:
    {
        returnValue = F("Steinkohlenfeld");
        break;
    }
    case 298423:
    {
        returnValue = F("Steinkompassweg");
        break;
    }
    case 298424:
    {
        returnValue = F("Steinkopfstr.");
        break;
    }
    case 298425:
    {
        returnValue = F("Steinkopfweg");
        break;
    }
    case 298426:
    {
        returnValue = F("Steinkoppel");
        break;
    }
    case 298427:
    {
        returnValue = F("Steinkoul");
        break;
    }
    case 298428:
    {
        returnValue = F("Steinkreuz");
        break;
    }
    case 298429:
    {
        returnValue = F("Steinkreuzer Weg");
        break;
    }
    case 298430:
    {
        returnValue = F("Steinkreuzerstr.");
        break;
    }
    case 298431:
    {
        returnValue = F("Steinkreuzerweg");
        break;
    }
    case 298432:
    {
        returnValue = F("Steinkreuzredder");
        break;
    }
    case 298433:
    {
        returnValue = F("Steinkreuzring");
        break;
    }
    case 298434:
    {
        returnValue = F("Steinkreuzstr.");
        break;
    }
    case 298435:
    {
        returnValue = F("Steinkreuzweg");
        break;
    }
    case 298436:
    {
        returnValue = F("Steinkrug");
        break;
    }
    case 298437:
    {
        returnValue = F("Steinkuhle");
        break;
    }
    case 298438:
    {
        returnValue = F("Steinkuhlenstr.");
        break;
    }
    case 298439:
    {
        returnValue = F("Steinkuhlenweg");
        break;
    }
    case 298440:
    {
        returnValue = F("Steinkuhler Weg");
        break;
    }
    case 298441:
    {
        returnValue = F("Steinkuhlerweg");
        break;
    }
    case 298442:
    {
        returnValue = F("Steinkulle");
        break;
    }
    case 298443:
    {
        returnValue = F("Steinkämpe");
        break;
    }
    case 298444:
    {
        returnValue = F("Steinkäulchen");
        break;
    }
    case 298445:
    {
        returnValue = F("Steinköhlerspfad");
        break;
    }
    case 298446:
    {
        returnValue = F("Steinköpfchenweg");
        break;
    }
    case 298447:
    {
        returnValue = F("Steinköpfe");
        break;
    }
    case 298448:
    {
        returnValue = F("Steinköpflesweg");
        break;
    }
    case 298449:
    {
        returnValue = F("Steinkühlerstr.");
        break;
    }
    case 298450:
    {
        returnValue = F("Steinkühlerweg");
        break;
    }
    case 298451:
    {
        returnValue = F("Steinlabyrinth");
        break;
    }
    case 298452:
    {
        returnValue = F("Steinlach");
        break;
    }
    case 298453:
    {
        returnValue = F("Steinlachburg");
        break;
    }
    case 298454:
    {
        returnValue = F("Steinlache");
        break;
    }
    case 298455:
    {
        returnValue = F("Steinlachenstr.");
        break;
    }
    case 298456:
    {
        returnValue = F("Steinlacher Weg");
        break;
    }
    case 298457:
    {
        returnValue = F("Steinlachmühle");
        break;
    }
    case 298458:
    {
        returnValue = F("Steinlachstr.");
        break;
    }
    case 298459:
    {
        returnValue = F("Steinlachweg");
        break;
    }
    case 298460:
    {
        returnValue = F("Steinlacker Weg");
        break;
    }
    case 298461:
    {
        returnValue = F("Steinland");
        break;
    }
    case 298462:
    {
        returnValue = F("Steinlandenweg");
        break;
    }
    case 298463:
    {
        returnValue = F("Steinlandweg");
        break;
    }
    case 298464:
    {
        returnValue = F("Steinlehlesweg");
        break;
    }
    case 298465:
    {
        returnValue = F("Steinleite");
        break;
    }
    case 298466:
    {
        returnValue = F("Steinleiten");
        break;
    }
    case 298467:
    {
        returnValue = F("Steinleitenweg");
        break;
    }
    case 298468:
    {
        returnValue = F("Steinleithe");
        break;
    }
    case 298469:
    {
        returnValue = F("Steinles Berg");
        break;
    }
    case 298470:
    {
        returnValue = F("Steinlesgrundweg");
        break;
    }
    case 298471:
    {
        returnValue = F("Steinlesweg");
        break;
    }
    case 298472:
    {
        returnValue = F("Steinleswiesen");
        break;
    }
    case 298473:
    {
        returnValue = F("Steinleweg");
        break;
    }
    case 298474:
    {
        returnValue = F("Steinliedenweg");
        break;
    }
    case 298475:
    {
        returnValue = F("Steinling");
        break;
    }
    case 298476:
    {
        returnValue = F("Steinlingen");
        break;
    }
    case 298477:
    {
        returnValue = F("Steinlinger Weg");
        break;
    }
    case 298478:
    {
        returnValue = F("Steinlingerstr.");
        break;
    }
    case 298479:
    {
        returnValue = F("Steinlingstr.");
        break;
    }
    case 298480:
    {
        returnValue = F("Steinlingsweg");
        break;
    }
    case 298481:
    {
        returnValue = F("Steinlingweg");
        break;
    }
    case 298482:
    {
        returnValue = F("Steinloh");
        break;
    }
    case 298483:
    {
        returnValue = F("Steinloher Damm");
        break;
    }
    case 298484:
    {
        returnValue = F("Steinlohstr.");
        break;
    }
    case 298485:
    {
        returnValue = F("Steinlohweg");
        break;
    }
    case 298486:
    {
        returnValue = F("Steinluckweg");
        break;
    }
    case 298487:
    {
        returnValue = F("Steinlückenweg");
        break;
    }
    case 298488:
    {
        returnValue = F("Steinlücksgasse");
        break;
    }
    case 298489:
    {
        returnValue = F("Steinmahd");
        break;
    }
    case 298490:
    {
        returnValue = F("Steinmal");
        break;
    }
    case 298491:
    {
        returnValue = F("Steinmanns Kamp");
        break;
    }
    case 298492:
    {
        returnValue = F("Steinmannsrech");
        break;
    }
    case 298493:
    {
        returnValue = F("Steinmannstr.");
        break;
    }
    case 298494:
    {
        returnValue = F("Steinmarckstr.");
        break;
    }
    case 298495:
    {
        returnValue = F("Steinmarderweg");
        break;
    }
    case 298496:
    {
        returnValue = F("Steinmarker Str.");
        break;
    }
    case 298497:
    {
        returnValue = F("Steinmarkt");
        break;
    }
    case 298498:
    {
        returnValue = F("Steinmarstr.");
        break;
    }
    case 298499:
    {
        returnValue = F("Steinmatte");
        break;
    }
    case 298500:
    {
        returnValue = F("Steinmatten");
        break;
    }
    case 298501:
    {
        returnValue = F("Steinmattenhof");
        break;
    }
    case 298502:
    {
        returnValue = F("Steinmattenstr.");
        break;
    }
    case 298503:
    {
        returnValue = F("Steinmauer");
        break;
    }
    case 298504:
    {
        returnValue = F("Steinmauer-Weg");
        break;
    }
    case 298505:
    {
        returnValue = F("Steinmauerner Str.");
        break;
    }
    case 298506:
    {
        returnValue = F("Steinmauerstr.");
        break;
    }
    case 298507:
    {
        returnValue = F("Steinmauerweg");
        break;
    }
    case 298508:
    {
        returnValue = F("Steinmehlener Str.");
        break;
    }
    case 298509:
    {
        returnValue = F("Steinmeiers Feld");
        break;
    }
    case 298510:
    {
        returnValue = F("Steinmeiers Hof");
        break;
    }
    case 298511:
    {
        returnValue = F("Steinmeisterpark");
        break;
    }
    case 298512:
    {
        returnValue = F("Steinmeisterstr.");
        break;
    }
    case 298513:
    {
        returnValue = F("Steinmetzergasse");
        break;
    }
    case 298514:
    {
        returnValue = F("Steinmetzgaßl");
        break;
    }
    case 298515:
    {
        returnValue = F("Steinmetzplatz");
        break;
    }
    case 298516:
    {
        returnValue = F("Steinmetzring");
        break;
    }
    case 298517:
    {
        returnValue = F("Steinmetzstr.");
        break;
    }
    case 298518:
    {
        returnValue = F("Steinmetzweg");
        break;
    }
    case 298519:
    {
        returnValue = F("Steinmickerweg");
        break;
    }
    case 298520:
    {
        returnValue = F("Steinmitze");
        break;
    }
    case 298521:
    {
        returnValue = F("Steinmocker");
        break;
    }
    case 298522:
    {
        returnValue = F("Steinmoorweg");
        break;
    }
    case 298523:
    {
        returnValue = F("Steinmoosweg");
        break;
    }
    case 298524:
    {
        returnValue = F("Steinmännchenweg");
        break;
    }
    case 298525:
    {
        returnValue = F("Steinmäuerleinsweg");
        break;
    }
    case 298526:
    {
        returnValue = F("Steinmühl");
        break;
    }
    case 298527:
    {
        returnValue = F("Steinmühle");
        break;
    }
    case 298528:
    {
        returnValue = F("Steinmühlen");
        break;
    }
    case 298529:
    {
        returnValue = F("Steinmühlenallee");
        break;
    }
    case 298530:
    {
        returnValue = F("Steinmühlenhäuser");
        break;
    }
    case 298531:
    {
        returnValue = F("Steinmühlenstr.");
        break;
    }
    case 298532:
    {
        returnValue = F("Steinmühlenweg");
        break;
    }
    case 298533:
    {
        returnValue = F("Steinmühler Str.");
        break;
    }
    case 298534:
    {
        returnValue = F("Steinmühleweg");
        break;
    }
    case 298535:
    {
        returnValue = F("Steinmühlgäßchen");
        break;
    }
    case 298536:
    {
        returnValue = F("Steinmühlstr.");
        break;
    }
    case 298537:
    {
        returnValue = F("Steinmühlweg");
        break;
    }
    case 298538:
    {
        returnValue = F("Steinmüllerallee");
        break;
    }
    case 298539:
    {
        returnValue = F("Steinmüllerberg");
        break;
    }
    case 298540:
    {
        returnValue = F("Steinmüllergelände Park");
        break;
    }
    case 298541:
    {
        returnValue = F("Steinmüllerstr.");
        break;
    }
    case 298542:
    {
        returnValue = F("Steinmüllerweg");
        break;
    }
    case 298543:
    {
        returnValue = F("Steinnelkenweg");
        break;
    }
    case 298544:
    {
        returnValue = F("Steinnockenstr.");
        break;
    }
    case 298545:
    {
        returnValue = F("Steinofenweg");
        break;
    }
    case 298546:
    {
        returnValue = F("Steinort");
        break;
    }
    case 298547:
    {
        returnValue = F("Steinortstr.");
        break;
    }
    case 298548:
    {
        returnValue = F("Steinpatt");
        break;
    }
    case 298549:
    {
        returnValue = F("Steinpaul");
        break;
    }
    case 298550:
    {
        returnValue = F("Steinperfer Weg");
        break;
    }
    case 298551:
    {
        returnValue = F("Steinpetersgartenweg");
        break;
    }
    case 298552:
    {
        returnValue = F("Steinpfad");
        break;
    }
    case 298553:
    {
        returnValue = F("Steinpfahl");
        break;
    }
    case 298554:
    {
        returnValue = F("Steinpfalz");
        break;
    }
    case 298555:
    {
        returnValue = F("Steinpfuhlstr.");
        break;
    }
    case 298556:
    {
        returnValue = F("Steinpilzweg");
        break;
    }
    case 298557:
    {
        returnValue = F("Steinplattenweg");
        break;
    }
    case 298558:
    {
        returnValue = F("Steinplatz");
        break;
    }
    case 298559:
    {
        returnValue = F("Steinpleiser Str.");
        break;
    }
    case 298560:
    {
        returnValue = F("Steinpleiser Weg");
        break;
    }
    case 298561:
    {
        returnValue = F("Steinplessen");
        break;
    }
    case 298562:
    {
        returnValue = F("Steinpointstr.");
        break;
    }
    case 298563:
    {
        returnValue = F("Steinpättken");
        break;
    }
    case 298564:
    {
        returnValue = F("Steinpöhlstr.");
        break;
    }
    case 298565:
    {
        returnValue = F("Steinpützweg");
        break;
    }
    case 298566:
    {
        returnValue = F("Steinrab");
        break;
    }
    case 298567:
    {
        returnValue = F("Steinrade");
        break;
    }
    case 298568:
    {
        returnValue = F("Steinradweg");
        break;
    }
    case 298569:
    {
        returnValue = F("Steinrain");
        break;
    }
    case 298570:
    {
        returnValue = F("Steinrainer Str.");
        break;
    }
    case 298571:
    {
        returnValue = F("Steinrangen");
        break;
    }
    case 298572:
    {
        returnValue = F("Steinrapener Weg");
        break;
    }
    case 298573:
    {
        returnValue = F("Steinrausch");
        break;
    }
    case 298574:
    {
        returnValue = F("Steinraussenweg");
        break;
    }
    case 298575:
    {
        returnValue = F("Steinrechtweg");
        break;
    }
    case 298576:
    {
        returnValue = F("Steinredder");
        break;
    }
    case 298577:
    {
        returnValue = F("Steinreeke");
        break;
    }
    case 298578:
    {
        returnValue = F("Steinrehweg");
        break;
    }
    case 298579:
    {
        returnValue = F("Steinreich");
        break;
    }
    case 298580:
    {
        returnValue = F("Steinreihe");
        break;
    }
    case 298581:
    {
        returnValue = F("Steinreinacher Weg");
        break;
    }
    case 298582:
    {
        returnValue = F("Steinreisachweg");
        break;
    }
    case 298583:
    {
        returnValue = F("Steinreisen");
        break;
    }
    case 298584:
    {
        returnValue = F("Steinreisenweg");
        break;
    }
    case 298585:
    {
        returnValue = F("Steinreiß");
        break;
    }
    case 298586:
    {
        returnValue = F("Steinreißer Weg");
        break;
    }
    case 298587:
    {
        returnValue = F("Steinrennen");
        break;
    }
    case 298588:
    {
        returnValue = F("Steinrennenstr.");
        break;
    }
    case 298589:
    {
        returnValue = F("Steinreuchstr.");
        break;
    }
    case 298590:
    {
        returnValue = F("Steinreusche");
        break;
    }
    case 298591:
    {
        returnValue = F("Steinreuschweg");
        break;
    }
    case 298592:
    {
        returnValue = F("Steinreuteweg");
        break;
    }
    case 298593:
    {
        returnValue = F("Steinreuth");
        break;
    }
    case 298594:
    {
        returnValue = F("Steinreuther Str.");
        break;
    }
    case 298595:
    {
        returnValue = F("Steinrichsweg");
        break;
    }
    case 298596:
    {
        returnValue = F("Steinrichtstatt");
        break;
    }
    case 298597:
    {
        returnValue = F("Steinriede");
        break;
    }
    case 298598:
    {
        returnValue = F("Steinriegel");
        break;
    }
    case 298599:
    {
        returnValue = F("Steinriegelstr.");
        break;
    }
    case 298600:
    {
        returnValue = F("Steinriegelweg");
        break;
    }
    case 298601:
    {
        returnValue = F("Steinriegl");
        break;
    }
    case 298602:
    {
        returnValue = F("Steinrieke");
        break;
    }
    case 298603:
    {
        returnValue = F("Steinriesel");
        break;
    }
    case 298604:
    {
        returnValue = F("Steinrieselweg");
        break;
    }
    case 298605:
    {
        returnValue = F("Steinrieslweg");
        break;
    }
    case 298606:
    {
        returnValue = F("Steinriesstr.");
        break;
    }
    case 298607:
    {
        returnValue = F("Steinringer Str.");
        break;
    }
    case 298608:
    {
        returnValue = F("Steinringweg");
        break;
    }
    case 298609:
    {
        returnValue = F("Steinrinne");
        break;
    }
    case 298610:
    {
        returnValue = F("Steinrinnenweg");
        break;
    }
    case 298611:
    {
        returnValue = F("Steinritsch");
        break;
    }
    case 298612:
    {
        returnValue = F("Steinritsche");
        break;
    }
    case 298613:
    {
        returnValue = F("Steinritzweg");
        break;
    }
    case 298614:
    {
        returnValue = F("Steinrißl");
        break;
    }
    case 298615:
    {
        returnValue = F("Steinrißweg");
        break;
    }
    case 298616:
    {
        returnValue = F("Steinrode");
        break;
    }
    case 298617:
    {
        returnValue = F("Steinroder Str.");
        break;
    }
    case 298618:
    {
        returnValue = F("Steinrother Weg");
        break;
    }
    case 298619:
    {
        returnValue = F("Steinrottstr.");
        break;
    }
    case 298620:
    {
        returnValue = F("Steinrumpelweg");
        break;
    }
    case 298621:
    {
        returnValue = F("Steinrutsche");
        break;
    }
    case 298622:
    {
        returnValue = F("Steinrutschenweg");
        break;
    }
    case 298623:
    {
        returnValue = F("Steinröhre");
        break;
    }
    case 298624:
    {
        returnValue = F("Steinröschenstr.");
        break;
    }
    case 298625:
    {
        returnValue = F("Steinröschenweg");
        break;
    }
    case 298626:
    {
        returnValue = F("Steinröselweg");
        break;
    }
    case 298627:
    {
        returnValue = F("Steinröslstr.");
        break;
    }
    case 298628:
    {
        returnValue = F("Steinröther Weg");
        break;
    }
    case 298629:
    {
        returnValue = F("Steinrötsch");
        break;
    }
    case 298630:
    {
        returnValue = F("Steinrötschstr.");
        break;
    }
    case 298631:
    {
        returnValue = F("Steinrücken");
        break;
    }
    case 298632:
    {
        returnValue = F("Steinrückenweg");
        break;
    }
    case 298633:
    {
        returnValue = F("Steinrückstr.");
        break;
    }
    case 298634:
    {
        returnValue = F("Steinrücksweg");
        break;
    }
    case 298635:
    {
        returnValue = F("Steinrückweg");
        break;
    }
    case 298636:
    {
        returnValue = F("Steinrütsche");
        break;
    }
    case 298637:
    {
        returnValue = F("Steinrütscher Weg");
        break;
    }
    case 298638:
    {
        returnValue = F("Steinrütteweg");
        break;
    }
    case 298639:
    {
        returnValue = F("Steinrütze");
        break;
    }
    case 298640:
    {
        returnValue = F("Steins");
        break;
    }
    case 298641:
    {
        returnValue = F("Steins Weg");
        break;
    }
    case 298642:
    {
        returnValue = F("Steinsatzweg");
        break;
    }
    case 298643:
    {
        returnValue = F("Steinsbachweg");
        break;
    }
    case 298644:
    {
        returnValue = F("Steinsberg");
        break;
    }
    case 298645:
    {
        returnValue = F("Steinsbergstr.");
        break;
    }
    case 298646:
    {
        returnValue = F("Steinsburgstr.");
        break;
    }
    case 298647:
    {
        returnValue = F("Steinsbühlallee");
        break;
    }
    case 298648:
    {
        returnValue = F("Steinschab");
        break;
    }
    case 298649:
    {
        returnValue = F("Steinschachtenstr.");
        break;
    }
    case 298650:
    {
        returnValue = F("Steinschleifenweg");
        break;
    }
    case 298651:
    {
        returnValue = F("Steinschmalz");
        break;
    }
    case 298652:
    {
        returnValue = F("Steinschneiderstr.");
        break;
    }
    case 298653:
    {
        returnValue = F("Steinschneise");
        break;
    }
    case 298654:
    {
        returnValue = F("Steinschorrenweg");
        break;
    }
    case 298655:
    {
        returnValue = F("Steinschraube");
        break;
    }
    case 298656:
    {
        returnValue = F("Steinschönauer Str.");
        break;
    }
    case 298657:
    {
        returnValue = F("Steinsdorf");
        break;
    }
    case 298658:
    {
        returnValue = F("Steinsdorfer Hauptstr.");
        break;
    }
    case 298659:
    {
        returnValue = F("Steinsdorfer Platz");
        break;
    }
    case 298660:
    {
        returnValue = F("Steinsdorfer Str.");
        break;
    }
    case 298661:
    {
        returnValue = F("Steinsdorfer Weg");
        break;
    }
    case 298662:
    {
        returnValue = F("Steinseestr.");
        break;
    }
    case 298663:
    {
        returnValue = F("Steinseifen");
        break;
    }
    case 298664:
    {
        returnValue = F("Steinseifersdorfer Str.");
        break;
    }
    case 298665:
    {
        returnValue = F("Steinseite");
        break;
    }
    case 298666:
    {
        returnValue = F("Steinseiter Weg");
        break;
    }
    case 298667:
    {
        returnValue = F("Steinseitersstr.");
        break;
    }
    case 298668:
    {
        returnValue = F("Steinser Str.");
        break;
    }
    case 298669:
    {
        returnValue = F("Steinsetzerweg");
        break;
    }
    case 298670:
    {
        returnValue = F("Steinsfelder Str.");
        break;
    }
    case 298671:
    {
        returnValue = F("Steinsfelder Weg");
        break;
    }
    case 298672:
    {
        returnValue = F("Steinsfeldle");
        break;
    }
    case 298673:
    {
        returnValue = F("Steinsfeldstr.");
        break;
    }
    case 298674:
    {
        returnValue = F("Steinsgasse");
        break;
    }
    case 298675:
    {
        returnValue = F("Steinsgraben");
        break;
    }
    case 298676:
    {
        returnValue = F("Steinsgüntenbecke");
        break;
    }
    case 298677:
    {
        returnValue = F("Steinshalde");
        break;
    }
    case 298678:
    {
        returnValue = F("Steinshecke");
        break;
    }
    case 298679:
    {
        returnValue = F("Steinsiek");
        break;
    }
    case 298680:
    {
        returnValue = F("Steinsieken");
        break;
    }
    case 298681:
    {
        returnValue = F("Steinsiekener Weg");
        break;
    }
    case 298682:
    {
        returnValue = F("Steinsieker Weg");
        break;
    }
    case 298683:
    {
        returnValue = F("Steinsköppel");
        break;
    }
    case 298684:
    {
        returnValue = F("Steinsleite");
        break;
    }
    case 298685:
    {
        returnValue = F("Steinslieth");
        break;
    }
    case 298686:
    {
        returnValue = F("Steinsmühle");
        break;
    }
    case 298687:
    {
        returnValue = F("Steinspecken");
        break;
    }
    case 298688:
    {
        returnValue = F("Steinsporerbrücke");
        break;
    }
    case 298689:
    {
        returnValue = F("Steinspringweg");
        break;
    }
    case 298690:
    {
        returnValue = F("Steinsrott");
        break;
    }
    case 298691:
    {
        returnValue = F("Steinsteige");
        break;
    }
    case 298692:
    {
        returnValue = F("Steinstetter Str.");
        break;
    }
    case 298693:
    {
        returnValue = F("Steinstiel");
        break;
    }
    case 298694:
    {
        returnValue = F("Steinstock");
        break;
    }
    case 298695:
    {
        returnValue = F("Steinstockgasse");
        break;
    }
    case 298696:
    {
        returnValue = F("Steinstoß");
        break;
    }
    case 298697:
    {
        returnValue = F("Steinstr.");
        break;
    }
    case 298698:
    {
        returnValue = F("Steinstr.r Allee");
        break;
    }
    case 298699:
    {
        returnValue = F("Steinstr.r Wall");
        break;
    }
    case 298700:
    {
        returnValue = F("Steinsträßchen");
        break;
    }
    case 298701:
    {
        returnValue = F("Steinstücke");
        break;
    }
    case 298702:
    {
        returnValue = F("Steinstücken");
        break;
    }
    case 298703:
    {
        returnValue = F("Steinstückenweg");
        break;
    }
    case 298704:
    {
        returnValue = F("Steinstücker Weg");
        break;
    }
    case 298705:
    {
        returnValue = F("Steinstückhof");
        break;
    }
    case 298706:
    {
        returnValue = F("Steinsumpf");
        break;
    }
    case 298707:
    {
        returnValue = F("Steinsweg");
        break;
    }
    case 298708:
    {
        returnValue = F("Steinswiesenweg");
        break;
    }
    case 298709:
    {
        returnValue = F("Steinsäckerstr.");
        break;
    }
    case 298710:
    {
        returnValue = F("Steintal");
        break;
    }
    case 298711:
    {
        returnValue = F("Steintalstr.");
        break;
    }
    case 298712:
    {
        returnValue = F("Steintalweg");
        break;
    }
    case 298713:
    {
        returnValue = F("Steintange");
        break;
    }
    case 298714:
    {
        returnValue = F("Steinteichweg");
        break;
    }
    case 298715:
    {
        returnValue = F("Steinthalebener Str.");
        break;
    }
    case 298716:
    {
        returnValue = F("Steintisch");
        break;
    }
    case 298717:
    {
        returnValue = F("Steintobelweg");
        break;
    }
    case 298718:
    {
        returnValue = F("Steintor");
        break;
    }
    case 298719:
    {
        returnValue = F("Steintor-Mauer-Str.");
        break;
    }
    case 298720:
    {
        returnValue = F("Steintorfeld");
        break;
    }
    case 298721:
    {
        returnValue = F("Steintorfeldmark");
        break;
    }
    case 298722:
    {
        returnValue = F("Steintorplatz");
        break;
    }
    case 298723:
    {
        returnValue = F("Steintorstr.");
        break;
    }
    case 298724:
    {
        returnValue = F("Steintorvorstadt");
        break;
    }
    case 298725:
    {
        returnValue = F("Steintrogweg");
        break;
    }
    case 298726:
    {
        returnValue = F("Steinufer");
        break;
    }
    case 298727:
    {
        returnValue = F("Steinumer Str.");
        break;
    }
    case 298728:
    {
        returnValue = F("Steinung");
        break;
    }
    case 298729:
    {
        returnValue = F("Steinwagstr.");
        break;
    }
    case 298730:
    {
        returnValue = F("Steinwald");
        break;
    }
    case 298731:
    {
        returnValue = F("Steinwald-Radweg");
        break;
    }
    case 298732:
    {
        returnValue = F("Steinwaldstr.");
        break;
    }
    case 298733:
    {
        returnValue = F("Steinwaldweg");
        break;
    }
    case 298734:
    {
        returnValue = F("Steinwall");
        break;
    }
    case 298735:
    {
        returnValue = F("Steinwand");
        break;
    }
    case 298736:
    {
        returnValue = F("Steinwandstr.");
        break;
    }
    case 298737:
    {
        returnValue = F("Steinwandweg");
        break;
    }
    case 298738:
    {
        returnValue = F("Steinwarder Promenade");
        break;
    }
    case 298739:
    {
        returnValue = F("Steinwarf");
        break;
    }
    case 298740:
    {
        returnValue = F("Steinwasen");
        break;
    }
    case 298741:
    {
        returnValue = F("Steinway- / Kurpark");
        break;
    }
    case 298742:
    {
        returnValue = F("Steinway-Allee");
        break;
    }
    case 298743:
    {
        returnValue = F("Steinwaystr.");
        break;
    }
    case 298744:
    {
        returnValue = F("Steinwedel");
        break;
    }
    case 298745:
    {
        returnValue = F("Steinwedeler Kirchweg");
        break;
    }
    case 298746:
    {
        returnValue = F("Steinwedeler Str.");
        break;
    }
    case 298747:
    {
        returnValue = F("Steinweg");
        break;
    }
    case 298748:
    {
        returnValue = F("Steinweger Str.");
        break;
    }
    case 298749:
    {
        returnValue = F("Steinweggasse");
        break;
    }
    case 298750:
    {
        returnValue = F("Steinwegle");
        break;
    }
    case 298751:
    {
        returnValue = F("Steinwegsiedlung");
        break;
    }
    case 298752:
    {
        returnValue = F("Steinwegstr.");
        break;
    }
    case 298753:
    {
        returnValue = F("Steinwegtrail");
        break;
    }
    case 298754:
    {
        returnValue = F("Steinwehrstr.");
        break;
    }
    case 298755:
    {
        returnValue = F("Steinweidenstr.");
        break;
    }
    case 298756:
    {
        returnValue = F("Steinweilerer Str.");
        break;
    }
    case 298757:
    {
        returnValue = F("Steinweilerweg");
        break;
    }
    case 298758:
    {
        returnValue = F("Steinwendener Str.");
        break;
    }
    case 298759:
    {
        returnValue = F("Steinwenderstr.");
        break;
    }
    case 298760:
    {
        returnValue = F("Steinwengerweg");
        break;
    }
    case 298761:
    {
        returnValue = F("Steinwerke");
        break;
    }
    case 298762:
    {
        returnValue = F("Steinwerkstr.");
        break;
    }
    case 298763:
    {
        returnValue = F("Steinwies");
        break;
    }
    case 298764:
    {
        returnValue = F("Steinwieschen");
        break;
    }
    case 298765:
    {
        returnValue = F("Steinwiese");
        break;
    }
    case 298766:
    {
        returnValue = F("Steinwiesen");
        break;
    }
    case 298767:
    {
        returnValue = F("Steinwiesenfeld");
        break;
    }
    case 298768:
    {
        returnValue = F("Steinwiesenpfad");
        break;
    }
    case 298769:
    {
        returnValue = F("Steinwiesenpfadschneise");
        break;
    }
    case 298770:
    {
        returnValue = F("Steinwiesenstr.");
        break;
    }
    case 298771:
    {
        returnValue = F("Steinwiesenweg");
        break;
    }
    case 298772:
    {
        returnValue = F("Steinwiesstr.");
        break;
    }
    case 298773:
    {
        returnValue = F("Steinwinkel");
        break;
    }
    case 298774:
    {
        returnValue = F("Steinwinkelstr.");
        break;
    }
    case 298775:
    {
        returnValue = F("Steinwinkelweg");
        break;
    }
    case 298776:
    {
        returnValue = F("Steinwitz");
        break;
    }
    case 298777:
    {
        returnValue = F("Steinwitzer Str.");
        break;
    }
    case 298778:
    {
        returnValue = F("Steinwollweg");
        break;
    }
    case 298779:
    {
        returnValue = F("Steinwäldchen");
        break;
    }
    case 298780:
    {
        returnValue = F("Steinzeitweg");
        break;
    }
    case 298781:
    {
        returnValue = F("Steinzenweg");
        break;
    }
    case 298782:
    {
        returnValue = F("Steinzeugstr.");
        break;
    }
    case 298783:
    {
        returnValue = F("Steinäcker");
        break;
    }
    case 298784:
    {
        returnValue = F("Steinäckernstr.");
        break;
    }
    case 298785:
    {
        returnValue = F("Steinäckersiedlung");
        break;
    }
    case 298786:
    {
        returnValue = F("Steinäckerstr.");
        break;
    }
    case 298787:
    {
        returnValue = F("Steinäckerweg");
        break;
    }
    case 298788:
    {
        returnValue = F("Steinäsenweg");
        break;
    }
    case 298789:
    {
        returnValue = F("Steinölsaer Str.");
        break;
    }
    case 298790:
    {
        returnValue = F("Steinörtchen");
        break;
    }
    case 298791:
    {
        returnValue = F("Steioffs Winkel");
        break;
    }
    case 298792:
    {
        returnValue = F("Steirerweg");
        break;
    }
    case 298793:
    {
        returnValue = F("Steisenberg");
        break;
    }
    case 298794:
    {
        returnValue = F("Steitachstr.");
        break;
    }
    case 298795:
    {
        returnValue = F("Steißlinger Str.");
        break;
    }
    case 298796:
    {
        returnValue = F("Stelberg");
        break;
    }
    case 298797:
    {
        returnValue = F("Stelborn");
        break;
    }
    case 298798:
    {
        returnValue = F("Stelenpark Abiturjahrgänge");
        break;
    }
    case 298799:
    {
        returnValue = F("Stelenweg");
        break;
    }
    case 298800:
    {
        returnValue = F("Stelinger Str.");
        break;
    }
    case 298801:
    {
        returnValue = F("Stell");
        break;
    }
    case 298802:
    {
        returnValue = F("Stella-Randolph-Str.");
        break;
    }
    case 298803:
    {
        returnValue = F("Stellackersiedlung");
        break;
    }
    case 298804:
    {
        returnValue = F("Stellahfeld");
        break;
    }
    case 298805:
    {
        returnValue = F("Stellastr.");
        break;
    }
    case 298806:
    {
        returnValue = F("Stellauer Hauptstr.");
        break;
    }
    case 298807:
    {
        returnValue = F("Stellauer Kirchenweg");
        break;
    }
    case 298808:
    {
        returnValue = F("Stellauer Str.");
        break;
    }
    case 298809:
    {
        returnValue = F("Stellauer Weg");
        break;
    }
    case 298810:
    {
        returnValue = F("Stellberg");
        break;
    }
    case 298811:
    {
        returnValue = F("Stellberger Str.");
        break;
    }
    case 298812:
    {
        returnValue = F("Stellberger Weg");
        break;
    }
    case 298813:
    {
        returnValue = F("Stellbergsgraben");
        break;
    }
    case 298814:
    {
        returnValue = F("Stellbergstr.");
        break;
    }
    case 298815:
    {
        returnValue = F("Stellbergsweg");
        break;
    }
    case 298816:
    {
        returnValue = F("Stellbergweg");
        break;
    }
    case 298817:
    {
        returnValue = F("Stellbrinkstr.");
        break;
    }
    case 298818:
    {
        returnValue = F("Stellbrooker Weg");
        break;
    }
    case 298819:
    {
        returnValue = F("Stellbrücke");
        break;
    }
    case 298820:
    {
        returnValue = F("Stellbökener Weg");
        break;
    }
    case 298821:
    {
        returnValue = F("Stelle");
        break;
    }
    case 298822:
    {
        returnValue = F("Stellebergstr.");
        break;
    }
    case 298823:
    {
        returnValue = F("Stellebrunnensträßle");
        break;
    }
    case 298824:
    {
        returnValue = F("Stellefeld");
        break;
    }
    case 298825:
    {
        returnValue = F("Stellegraben");
        break;
    }
    case 298826:
    {
        returnValue = F("Stellenbachstr.");
        break;
    }
    case 298827:
    {
        returnValue = F("Stellenbronnenweg");
        break;
    }
    case 298828:
    {
        returnValue = F("Stellenbuckelweg");
        break;
    }
    case 298829:
    {
        returnValue = F("Stellenfleckhauweg");
        break;
    }
    case 298830:
    {
        returnValue = F("Stellenfleth");
        break;
    }
    case 298831:
    {
        returnValue = F("Stellenrain");
        break;
    }
    case 298832:
    {
        returnValue = F("Stellenrainweg");
        break;
    }
    case 298833:
    {
        returnValue = F("Stellenweg");
        break;
    }
    case 298834:
    {
        returnValue = F("Stellenwiesen");
        break;
    }
    case 298835:
    {
        returnValue = F("Stellenwiesenweg");
        break;
    }
    case 298836:
    {
        returnValue = F("Stellenäckerstr.");
        break;
    }
    case 298837:
    {
        returnValue = F("Steller Chaussee");
        break;
    }
    case 298838:
    {
        returnValue = F("Steller Damm");
        break;
    }
    case 298839:
    {
        returnValue = F("Steller Dorfstr.");
        break;
    }
    case 298840:
    {
        returnValue = F("Steller Heide");
        break;
    }
    case 298841:
    {
        returnValue = F("Steller Str.");
        break;
    }
    case 298842:
    {
        returnValue = F("Steller Vieh");
        break;
    }
    case 298843:
    {
        returnValue = F("Steller Weg");
        break;
    }
    case 298844:
    {
        returnValue = F("Stellergasse");
        break;
    }
    case 298845:
    {
        returnValue = F("Stellerieger Str.");
        break;
    }
    case 298846:
    {
        returnValue = F("Stellerloh");
        break;
    }
    case 298847:
    {
        returnValue = F("Stellestr.");
        break;
    }
    case 298848:
    {
        returnValue = F("Stellesträßle");
        break;
    }
    case 298849:
    {
        returnValue = F("Stellesweg");
        break;
    }
    case 298850:
    {
        returnValue = F("Stellewaldweg");
        break;
    }
    case 298851:
    {
        returnValue = F("Stelleweg");
        break;
    }
    case 298852:
    {
        returnValue = F("Stellfelde");
        break;
    }
    case 298853:
    {
        returnValue = F("Stellflügel");
        break;
    }
    case 298854:
    {
        returnValue = F("Stellgasse");
        break;
    }
    case 298855:
    {
        returnValue = F("Stellge");
        break;
    }
    case 298856:
    {
        returnValue = F("Stellgrabenstr.");
        break;
    }
    case 298857:
    {
        returnValue = F("Stellhaustr.");
        break;
    }
    case 298858:
    {
        returnValue = F("Stellheide");
        break;
    }
    case 298859:
    {
        returnValue = F("Stellhorner Str.");
        break;
    }
    case 298860:
    {
        returnValue = F("Stellibuckweg");
        break;
    }
    case 298861:
    {
        returnValue = F("Stellichte");
        break;
    }
    case 298862:
    {
        returnValue = F("Stellichter Str.");
        break;
    }
    case 298863:
    {
        returnValue = F("Stellinger Stieg");
        break;
    }
    case 298864:
    {
        returnValue = F("Stellingweg");
        break;
    }
    case 298865:
    {
        returnValue = F("Stelliweg");
        break;
    }
    case 298866:
    {
        returnValue = F("Stelljesdamm");
        break;
    }
    case 298867:
    {
        returnValue = F("Stellmacherei");
        break;
    }
    case 298868:
    {
        returnValue = F("Stellmachergasse");
        break;
    }
    case 298869:
    {
        returnValue = F("Stellmacherring");
        break;
    }
    case 298870:
    {
        returnValue = F("Stellmachersgang");
        break;
    }
    case 298871:
    {
        returnValue = F("Stellmacherstr.");
        break;
    }
    case 298872:
    {
        returnValue = F("Stellmacherweg");
        break;
    }
    case 298873:
    {
        returnValue = F("Stellmakers Weg");
        break;
    }
    case 298874:
    {
        returnValue = F("Stellmecke");
        break;
    }
    case 298875:
    {
        returnValue = F("Stellmoorweg");
        break;
    }
    case 298876:
    {
        returnValue = F("Stellner Berg");
        break;
    }
    case 298877:
    {
        returnValue = F("Stellpfad");
        break;
    }
    case 298878:
    {
        returnValue = F("Stellrückenweg");
        break;
    }
    case 298879:
    {
        returnValue = F("Stellshagener Str.");
        break;
    }
    case 298880:
    {
        returnValue = F("Stellshgener Str.");
        break;
    }
    case 298881:
    {
        returnValue = F("Stellungsweg");
        break;
    }
    case 298882:
    {
        returnValue = F("Stellwaldstr.");
        break;
    }
    case 298883:
    {
        returnValue = F("Stellwanne");
        break;
    }
    case 298884:
    {
        returnValue = F("Stellweg");
        break;
    }
    case 298885:
    {
        returnValue = F("Stellweg / Zitztal");
        break;
    }
    case 298886:
    {
        returnValue = F("Stellweg 1");
        break;
    }
    case 298887:
    {
        returnValue = F("Stellweg 1/6");
        break;
    }
    case 298888:
    {
        returnValue = F("Stellweg 11/12");
        break;
    }
    case 298889:
    {
        returnValue = F("Stellweg 3/4");
        break;
    }
    case 298890:
    {
        returnValue = F("Stellwerkstr.");
        break;
    }
    case 298891:
    {
        returnValue = F("Stelläcker");
        break;
    }
    case 298892:
    {
        returnValue = F("Steltenbergstr.");
        break;
    }
    case 298893:
    {
        returnValue = F("Steltenbergweg");
        break;
    }
    case 298894:
    {
        returnValue = F("Steltenpohldamm");
        break;
    }
    case 298895:
    {
        returnValue = F("Stelzacker");
        break;
    }
    case 298896:
    {
        returnValue = F("Stelzen");
        break;
    }
    case 298897:
    {
        returnValue = F("Stelzenbach");
        break;
    }
    case 298898:
    {
        returnValue = F("Stelzenbachstr.");
        break;
    }
    case 298899:
    {
        returnValue = F("Stelzenberg");
        break;
    }
    case 298900:
    {
        returnValue = F("Stelzenbergweg");
        break;
    }
    case 298901:
    {
        returnValue = F("Stelzendorf");
        break;
    }
    case 298902:
    {
        returnValue = F("Stelzendorfer Weg");
        break;
    }
    case 298903:
    {
        returnValue = F("Stelzengasse");
        break;
    }
    case 298904:
    {
        returnValue = F("Stelzenrankweg");
        break;
    }
    case 298905:
    {
        returnValue = F("Stelzensteig");
        break;
    }
    case 298906:
    {
        returnValue = F("Stelzenweg");
        break;
    }
    case 298907:
    {
        returnValue = F("Stelzenwieke I");
        break;
    }
    case 298908:
    {
        returnValue = F("Stelzenwieke II");
        break;
    }
    case 298909:
    {
        returnValue = F("Stelzenäcker");
        break;
    }
    case 298910:
    {
        returnValue = F("Stelzergasse");
        break;
    }
    case 298911:
    {
        returnValue = F("Stelzerhofstr.");
        break;
    }
    case 298912:
    {
        returnValue = F("Stelzerreut");
        break;
    }
    case 298913:
    {
        returnValue = F("Stelzerstal");
        break;
    }
    case 298914:
    {
        returnValue = F("Stelzerstr.");
        break;
    }
    case 298915:
    {
        returnValue = F("Stelzhamerstr.");
        break;
    }
    case 298916:
    {
        returnValue = F("Stelzner Str.");
        break;
    }
    case 298917:
    {
        returnValue = F("Stemberg");
        break;
    }
    case 298918:
    {
        returnValue = F("Stembergstr.");
        break;
    }
    case 298919:
    {
        returnValue = F("Stemecke");
        break;
    }
    case 298920:
    {
        returnValue = F("Stemelpfad");
        break;
    }
    case 298921:
    {
        returnValue = F("Stemkesweg");
        break;
    }
    case 298922:
    {
        returnValue = F("Stemmanns Weg");
        break;
    }
    case 298923:
    {
        returnValue = F("Stemmas");
        break;
    }
    case 298924:
    {
        returnValue = F("Stemmaser Str.");
        break;
    }
    case 298925:
    {
        returnValue = F("Stemmasgrün");
        break;
    }
    case 298926:
    {
        returnValue = F("Stemmbarg");
        break;
    }
    case 298927:
    {
        returnValue = F("Stemmbargsweg");
        break;
    }
    case 298928:
    {
        returnValue = F("Stemmelstr.");
        break;
    }
    case 298929:
    {
        returnValue = F("Stemmener Dorfstr.");
        break;
    }
    case 298930:
    {
        returnValue = F("Stemmener Str.");
        break;
    }
    case 298931:
    {
        returnValue = F("Stemmenkamp");
        break;
    }
    case 298932:
    {
        returnValue = F("Stemmenreuther Str.");
        break;
    }
    case 298933:
    {
        returnValue = F("Stemmer Allee");
        break;
    }
    case 298934:
    {
        returnValue = F("Stemmer Str.");
        break;
    }
    case 298935:
    {
        returnValue = F("Stemmerberg");
        break;
    }
    case 298936:
    {
        returnValue = F("Stemmerfeld");
        break;
    }
    case 298937:
    {
        returnValue = F("Stemmerk");
        break;
    }
    case 298938:
    {
        returnValue = F("Stemmern");
        break;
    }
    case 298939:
    {
        returnValue = F("Stemmerscher Weg");
        break;
    }
    case 298940:
    {
        returnValue = F("Stemmerstr.");
        break;
    }
    case 298941:
    {
        returnValue = F("Stemmessiepener Weg");
        break;
    }
    case 298942:
    {
        returnValue = F("Stemmeweg");
        break;
    }
    case 298943:
    {
        returnValue = F("Stemmicker Weg");
        break;
    }
    case 298944:
    {
        returnValue = F("Stemmlerstr.");
        break;
    }
    case 298945:
    {
        returnValue = F("Stemmlerweg");
        break;
    }
    case 298946:
    {
        returnValue = F("Stemmwiesen");
        break;
    }
    case 298947:
    {
        returnValue = F("Stempedaer Weg");
        break;
    }
    case 298948:
    {
        returnValue = F("Stempel");
        break;
    }
    case 298949:
    {
        returnValue = F("Stempeldiek");
        break;
    }
    case 298950:
    {
        returnValue = F("Stempelsberg");
        break;
    }
    case 298951:
    {
        returnValue = F("Stempelsternweg");
        break;
    }
    case 298952:
    {
        returnValue = F("Stempelweg");
        break;
    }
    case 298953:
    {
        returnValue = F("Stempenstr.");
        break;
    }
    case 298954:
    {
        returnValue = F("Stempersweg");
        break;
    }
    case 298955:
    {
        returnValue = F("Stempnitz");
        break;
    }
    case 298956:
    {
        returnValue = F("Stemshorner Weg");
        break;
    }
    case 298957:
    {
        returnValue = F("Stemwarder Landstr.");
        break;
    }
    case 298958:
    {
        returnValue = F("Stemwarder Str.");
        break;
    }
    case 298959:
    {
        returnValue = F("Stemwederberg-Str.");
        break;
    }
    case 298960:
    {
        returnValue = F("Stenayer Platz");
        break;
    }
    case 298961:
    {
        returnValue = F("Stenbusch");
        break;
    }
    case 298962:
    {
        returnValue = F("Stendahl");
        break;
    }
    case 298963:
    {
        returnValue = F("Stendaler Chaussee");
        break;
    }
    case 298964:
    {
        returnValue = F("Stendaler Str.");
        break;
    }
    case 298965:
    {
        returnValue = F("Stendaler Weg");
        break;
    }
    case 298966:
    {
        returnValue = F("Stendeklee");
        break;
    }
    case 298967:
    {
        returnValue = F("Stendellstr.");
        break;
    }
    case 298968:
    {
        returnValue = F("Stendenbacher Weg");
        break;
    }
    case 298969:
    {
        returnValue = F("Stendener Str.");
        break;
    }
    case 298970:
    {
        returnValue = F("Stendenitzer Str.");
        break;
    }
    case 298971:
    {
        returnValue = F("Stender Kirchweg");
        break;
    }
    case 298972:
    {
        returnValue = F("Stendergrund");
        break;
    }
    case 298973:
    {
        returnValue = F("Stenderhof");
        break;
    }
    case 298974:
    {
        returnValue = F("Stendern");
        break;
    }
    case 298975:
    {
        returnValue = F("Stenderup");
        break;
    }
    case 298976:
    {
        returnValue = F("Stenderupauer Str.");
        break;
    }
    case 298977:
    {
        returnValue = F("Stenderuper Str.");
        break;
    }
    case 298978:
    {
        returnValue = F("Stenderupfeld");
        break;
    }
    case 298979:
    {
        returnValue = F("Stenderweg");
        break;
    }
    case 298980:
    {
        returnValue = F("Stendlitzstr.");
        break;
    }
    case 298981:
    {
        returnValue = F("Stendorf");
        break;
    }
    case 298982:
    {
        returnValue = F("Stendorfer Str.");
        break;
    }
    case 298983:
    {
        returnValue = F("Stendorfer Weg");
        break;
    }
    case 298984:
    {
        returnValue = F("Stendreschs Jeasje");
        break;
    }
    case 298985:
    {
        returnValue = F("Stenebergstr.");
        break;
    }
    case 298986:
    {
        returnValue = F("Stenenkamp");
        break;
    }
    case 298987:
    {
        returnValue = F("Stengel");
        break;
    }
    case 298988:
    {
        returnValue = F("Stengel-Hof");
        break;
    }
    case 298989:
    {
        returnValue = F("Stengelstr.");
        break;
    }
    case 298990:
    {
        returnValue = F("Stengemicke");
        break;
    }
    case 298991:
    {
        returnValue = F("Stengershof");
        break;
    }
    case 298992:
    {
        returnValue = F("Stengerts");
        break;
    }
    case 298993:
    {
        returnValue = F("Stenkel");
        break;
    }
    case 298994:
    {
        returnValue = F("Stenner Str.");
        break;
    }
    case 298995:
    {
        returnValue = F("Stennerlandstr.");
        break;
    }
    case 298996:
    {
        returnValue = F("Stennernring");
        break;
    }
    case 298997:
    {
        returnValue = F("Stennernstr.");
        break;
    }
    case 298998:
    {
        returnValue = F("Stennert");
        break;
    }
    case 298999:
    {
        returnValue = F("Stennewitzer Str.");
        break;
    }
    case 299000:
    {
        returnValue = F("Stennweilerstr.");
        break;
    }
    case 299001:
    {
        returnValue = F("Stensheck");
        break;
    }
    case 299002:
    {
        returnValue = F("Stensheil");
        break;
    }
    case 299003:
    {
        returnValue = F("Stentenbergsiepen");
        break;
    }
    case 299004:
    {
        returnValue = F("Stentenbergstr.");
        break;
    }
    case 299005:
    {
        returnValue = F("Stenumer Str.");
        break;
    }
    case 299006:
    {
        returnValue = F("Stenzelbergstr.");
        break;
    }
    case 299007:
    {
        returnValue = F("Stenzer Weg");
        break;
    }
    case 299008:
    {
        returnValue = F("Stepbergweg");
        break;
    }
    case 299009:
    {
        returnValue = F("Stepenitzdeich");
        break;
    }
    case 299010:
    {
        returnValue = F("Stepenitzer Str.");
        break;
    }
    case 299011:
    {
        returnValue = F("Stepenitzer Weg");
        break;
    }
    case 299012:
    {
        returnValue = F("Stepf");
        break;
    }
    case 299013:
    {
        returnValue = F("Stepfershäuser Hauptstr.");
        break;
    }
    case 299014:
    {
        returnValue = F("Stepfershäuser Str.");
        break;
    }
    case 299015:
    {
        returnValue = F("Stephan-Ankenbrand-Str.");
        break;
    }
    case 299016:
    {
        returnValue = F("Stephan-Beissel-Str.");
        break;
    }
    case 299017:
    {
        returnValue = F("Stephan-Blattmann-Str.");
        break;
    }
    case 299018:
    {
        returnValue = F("Stephan-Dietrich-Str.");
        break;
    }
    case 299019:
    {
        returnValue = F("Stephan-Gerlach-Str.");
        break;
    }
    case 299020:
    {
        returnValue = F("Stephan-Kessler-Str.");
        break;
    }
    case 299021:
    {
        returnValue = F("Stephan-Lochner-Str.");
        break;
    }
    case 299022:
    {
        returnValue = F("Stephan-Ludwig-Roth-Str.");
        break;
    }
    case 299023:
    {
        returnValue = F("Stephan-Neuwirth-Str.");
        break;
    }
    case 299024:
    {
        returnValue = F("Stephan-Rotthaler-Str.");
        break;
    }
    case 299025:
    {
        returnValue = F("Stephan-Schäfer-Str.");
        break;
    }
    case 299026:
    {
        returnValue = F("Stephan-Weidenbach-Str.");
        break;
    }
    case 299027:
    {
        returnValue = F("Stephan-von-Schleich-Str.");
        break;
    }
    case 299028:
    {
        returnValue = F("Stephanienweg");
        break;
    }
    case 299029:
    {
        returnValue = F("Stephanigasse");
        break;
    }
    case 299030:
    {
        returnValue = F("Stephanikirchhof");
        break;
    }
    case 299031:
    {
        returnValue = F("Stephanistr.");
        break;
    }
    case 299032:
    {
        returnValue = F("Stephaniweg");
        break;
    }
    case 299033:
    {
        returnValue = F("Stephanopel");
        break;
    }
    case 299034:
    {
        returnValue = F("Stephanopeler Str.");
        break;
    }
    case 299035:
    {
        returnValue = F("Stephanring");
        break;
    }
    case 299036:
    {
        returnValue = F("Stephans-Ring");
        break;
    }
    case 299037:
    {
        returnValue = F("Stephansberger Weg");
        break;
    }
    case 299038:
    {
        returnValue = F("Stephansdamm");
        break;
    }
    case 299039:
    {
        returnValue = F("Stephansgasse");
        break;
    }
    case 299040:
    {
        returnValue = F("Stephanshof");
        break;
    }
    case 299041:
    {
        returnValue = F("Stephanshof Weg");
        break;
    }
    case 299042:
    {
        returnValue = F("Stephanshöhe");
        break;
    }
    case 299043:
    {
        returnValue = F("Stephanskamp");
        break;
    }
    case 299044:
    {
        returnValue = F("Stephanskapellenweg");
        break;
    }
    case 299045:
    {
        returnValue = F("Stephanskirchen");
        break;
    }
    case 299046:
    {
        returnValue = F("Stephansklostergasse");
        break;
    }
    case 299047:
    {
        returnValue = F("Stephanskreuzstr.");
        break;
    }
    case 299048:
    {
        returnValue = F("Stephansplatz");
        break;
    }
    case 299049:
    {
        returnValue = F("Stephansposchinger Str.");
        break;
    }
    case 299050:
    {
        returnValue = F("Stephansried");
        break;
    }
    case 299051:
    {
        returnValue = F("Stephansrieder Str.");
        break;
    }
    case 299052:
    {
        returnValue = F("Stephansring");
        break;
    }
    case 299053:
    {
        returnValue = F("Stephanstr.");
        break;
    }
    case 299054:
    {
        returnValue = F("Stephansweg");
        break;
    }
    case 299055:
    {
        returnValue = F("Stephanswäldle");
        break;
    }
    case 299056:
    {
        returnValue = F("Stephanusberg");
        break;
    }
    case 299057:
    {
        returnValue = F("Stephanusring");
        break;
    }
    case 299058:
    {
        returnValue = F("Stephanusstr.");
        break;
    }
    case 299059:
    {
        returnValue = F("Stephanusweg");
        break;
    }
    case 299060:
    {
        returnValue = F("Stephanweg");
        break;
    }
    case 299061:
    {
        returnValue = F("Stephensonstr.");
        break;
    }
    case 299062:
    {
        returnValue = F("Stepheweg");
        break;
    }
    case 299063:
    {
        returnValue = F("Stephinskystr.");
        break;
    }
    case 299064:
    {
        returnValue = F("Steppach");
        break;
    }
    case 299065:
    {
        returnValue = F("Steppacher Lehmgrube");
        break;
    }
    case 299066:
    {
        returnValue = F("Steppacher Str.");
        break;
    }
    case 299067:
    {
        returnValue = F("Steppacherhof");
        break;
    }
    case 299068:
    {
        returnValue = F("Steppachhalde");
        break;
    }
    case 299069:
    {
        returnValue = F("Steppachstr.");
        break;
    }
    case 299070:
    {
        returnValue = F("Steppachweg");
        break;
    }
    case 299071:
    {
        returnValue = F("Steppbachbruck");
        break;
    }
    case 299072:
    {
        returnValue = F("Steppenberger Str.");
        break;
    }
    case 299073:
    {
        returnValue = F("Steppersgasse");
        break;
    }
    case 299074:
    {
        returnValue = F("Stepperweg");
        break;
    }
    case 299075:
    {
        returnValue = F("Steppeswiesenstr.");
        break;
    }
    case 299076:
    {
        returnValue = F("Steprather Weg");
        break;
    }
    case 299077:
    {
        returnValue = F("Sterbachstr.");
        break;
    }
    case 299078:
    {
        returnValue = F("Sterbecke");
        break;
    }
    case 299079:
    {
        returnValue = F("Sterbecker Str.");
        break;
    }
    case 299080:
    {
        returnValue = F("Sterbfritzer Str.");
        break;
    }
    case 299081:
    {
        returnValue = F("Sterburer Weg");
        break;
    }
    case 299082:
    {
        returnValue = F("Sterchelestr.");
        break;
    }
    case 299083:
    {
        returnValue = F("Sterdebüller Alter Deich");
        break;
    }
    case 299084:
    {
        returnValue = F("Sterhof");
        break;
    }
    case 299085:
    {
        returnValue = F("Sterhofweg");
        break;
    }
    case 299086:
    {
        returnValue = F("Sterkelshäuser Str.");
        break;
    }
    case 299087:
    {
        returnValue = F("Sterkliser Weg");
        break;
    }
    case 299088:
    {
        returnValue = F("Sterkrader Str.");
        break;
    }
    case 299089:
    {
        returnValue = F("Sterleyer Heide");
        break;
    }
    case 299090:
    {
        returnValue = F("Sterleyer Str.");
        break;
    }
    case 299091:
    {
        returnValue = F("Sterlingsweg");
        break;
    }
    case 299092:
    {
        returnValue = F("Sterlsgasse");
        break;
    }
    case 299093:
    {
        returnValue = F("Sterlwaid");
        break;
    }
    case 299094:
    {
        returnValue = F("Stern");
        break;
    }
    case 299095:
    {
        returnValue = F("Sternackerstr.");
        break;
    }
    case 299096:
    {
        returnValue = F("Sternalle");
        break;
    }
    case 299097:
    {
        returnValue = F("Sternallee");
        break;
    }
    case 299098:
    {
        returnValue = F("Sternau");
        break;
    }
    case 299099:
    {
        returnValue = F("Sternbach Geräumt");
        break;
    }
    case 299100:
    {
        returnValue = F("Sternbacher Str.");
        break;
    }
    case 299101:
    {
        returnValue = F("Sternbacher Weg");
        break;
    }
    case 299102:
    {
        returnValue = F("Sternbachgasse");
        break;
    }
    case 299103:
    {
        returnValue = F("Sternbachweg");
        break;
    }
    case 299104:
    {
        returnValue = F("Sternberg");
        break;
    }
    case 299105:
    {
        returnValue = F("Sternberger Chaussee");
        break;
    }
    case 299106:
    {
        returnValue = F("Sternberger Str.");
        break;
    }
    case 299107:
    {
        returnValue = F("Sternberger Weg");
        break;
    }
    case 299108:
    {
        returnValue = F("Sternbergerstr.");
        break;
    }
    case 299109:
    {
        returnValue = F("Sternbergstr.");
        break;
    }
    case 299110:
    {
        returnValue = F("Sternbergweg");
        break;
    }
    case 299111:
    {
        returnValue = F("Sternbornstr.");
        break;
    }
    case 299112:
    {
        returnValue = F("Sternbusch");
        break;
    }
    case 299113:
    {
        returnValue = F("Sterndellweg");
        break;
    }
    case 299114:
    {
        returnValue = F("Sternebecker Dorfstr.");
        break;
    }
    case 299115:
    {
        returnValue = F("Sternebecker Str.");
        break;
    }
    case 299116:
    {
        returnValue = F("Sternebecker Weg");
        break;
    }
    case 299117:
    {
        returnValue = F("Sternebergische Fabrik");
        break;
    }
    case 299118:
    {
        returnValue = F("Sterneckbergstr.");
        break;
    }
    case 299119:
    {
        returnValue = F("Sterneckbergweg");
        break;
    }
    case 299120:
    {
        returnValue = F("Sternecker Weg");
        break;
    }
    case 299121:
    {
        returnValue = F("Sterneckerstr.");
        break;
    }
    case 299122:
    {
        returnValue = F("Sterneckerweg");
        break;
    }
    case 299123:
    {
        returnValue = F("Sterneggerstr.");
        break;
    }
    case 299124:
    {
        returnValue = F("Sternenallee");
        break;
    }
    case 299125:
    {
        returnValue = F("Sternenberg");
        break;
    }
    case 299126:
    {
        returnValue = F("Sternenbergstr.");
        break;
    }
    case 299127:
    {
        returnValue = F("Sternenburgstr.");
        break;
    }
    case 299128:
    {
        returnValue = F("Sternenbuschstr.");
        break;
    }
    case 299129:
    {
        returnValue = F("Sternenbühl");
        break;
    }
    case 299130:
    {
        returnValue = F("Sternenbühnd");
        break;
    }
    case 299131:
    {
        returnValue = F("Sternendachsbühl");
        break;
    }
    case 299132:
    {
        returnValue = F("Sternenfelser Str.");
        break;
    }
    case 299133:
    {
        returnValue = F("Sternengasse");
        break;
    }
    case 299134:
    {
        returnValue = F("Sternengäßle");
        break;
    }
    case 299135:
    {
        returnValue = F("Sternenhof");
        break;
    }
    case 299136:
    {
        returnValue = F("Sternenhofgasse");
        break;
    }
    case 299137:
    {
        returnValue = F("Sternenschanzstr.");
        break;
    }
    case 299138:
    {
        returnValue = F("Sternenschanzweg");
        break;
    }
    case 299139:
    {
        returnValue = F("Sternenstr.");
        break;
    }
    case 299140:
    {
        returnValue = F("Sternentalstr.");
        break;
    }
    case 299141:
    {
        returnValue = F("Sternenweg");
        break;
    }
    case 299142:
    {
        returnValue = F("Sternenwinkel");
        break;
    }
    case 299143:
    {
        returnValue = F("Sternerstr.");
        break;
    }
    case 299144:
    {
        returnValue = F("Sternfeld");
        break;
    }
    case 299145:
    {
        returnValue = F("Sternfelder Str.");
        break;
    }
    case 299146:
    {
        returnValue = F("Sternfelder Weg");
        break;
    }
    case 299147:
    {
        returnValue = F("Sternfeldstr.");
        break;
    }
    case 299148:
    {
        returnValue = F("Sternflügel");
        break;
    }
    case 299149:
    {
        returnValue = F("Sternflügelweg");
        break;
    }
    case 299150:
    {
        returnValue = F("Sterngarten");
        break;
    }
    case 299151:
    {
        returnValue = F("Sterngasse");
        break;
    }
    case 299152:
    {
        returnValue = F("Sterngäßchen");
        break;
    }
    case 299153:
    {
        returnValue = F("Sternhagener Str.");
        break;
    }
    case 299154:
    {
        returnValue = F("Sternhaus");
        break;
    }
    case 299155:
    {
        returnValue = F("Sternheckenweg");
        break;
    }
    case 299156:
    {
        returnValue = F("Sternheimerstr.");
        break;
    }
    case 299157:
    {
        returnValue = F("Sternheimstr.");
        break;
    }
    case 299158:
    {
        returnValue = F("Sternhof");
        break;
    }
    case 299159:
    {
        returnValue = F("Sternhöh");
        break;
    }
    case 299160:
    {
        returnValue = F("Sternkamp");
        break;
    }
    case 299161:
    {
        returnValue = F("Sternkampsweg");
        break;
    }
    case 299162:
    {
        returnValue = F("Sternkrug");
        break;
    }
    case 299163:
    {
        returnValue = F("Sternlinie");
        break;
    }
    case 299164:
    {
        returnValue = F("Sternplattenweg");
        break;
    }
    case 299165:
    {
        returnValue = F("Sternplatz");
        break;
    }
    case 299166:
    {
        returnValue = F("Sternpoint");
        break;
    }
    case 299167:
    {
        returnValue = F("Sternruher Weg");
        break;
    }
    case 299168:
    {
        returnValue = F("Sternschanze");
        break;
    }
    case 299169:
    {
        returnValue = F("Sternschanzenstr.");
        break;
    }
    case 299170:
    {
        returnValue = F("Sternsgarten");
        break;
    }
    case 299171:
    {
        returnValue = F("Sternshof");
        break;
    }
    case 299172:
    {
        returnValue = F("Sternsingerstr.");
        break;
    }
    case 299173:
    {
        returnValue = F("Sternsteinweg");
        break;
    }
    case 299174:
    {
        returnValue = F("Sternstr.");
        break;
    }
    case 299175:
    {
        returnValue = F("Sterntaler-Weg");
        break;
    }
    case 299176:
    {
        returnValue = F("Sterntalerstr.");
        break;
    }
    case 299177:
    {
        returnValue = F("Sterntalerweg");
        break;
    }
    case 299178:
    {
        returnValue = F("Sternthal");
        break;
    }
    case 299179:
    {
        returnValue = F("Sternwarte");
        break;
    }
    case 299180:
    {
        returnValue = F("Sternwartenweg");
        break;
    }
    case 299181:
    {
        returnValue = F("Sternwartestr.");
        break;
    }
    case 299182:
    {
        returnValue = F("Sternwartstr.");
        break;
    }
    case 299183:
    {
        returnValue = F("Sternwartsweg");
        break;
    }
    case 299184:
    {
        returnValue = F("Sternweg");
        break;
    }
    case 299185:
    {
        returnValue = F("Sternwiesen");
        break;
    }
    case 299186:
    {
        returnValue = F("Sternwiesenweg");
        break;
    }
    case 299187:
    {
        returnValue = F("Sternwirtsgasse");
        break;
    }
    case 299188:
    {
        returnValue = F("Sternwirtsweg");
        break;
    }
    case 299189:
    {
        returnValue = F("Sterpersdorf");
        break;
    }
    case 299190:
    {
        returnValue = F("Sterr");
        break;
    }
    case 299191:
    {
        returnValue = F("Sterrenbergstaße");
        break;
    }
    case 299192:
    {
        returnValue = F("Sterrenbergstr.");
        break;
    }
    case 299193:
    {
        returnValue = F("Sterresweg");
        break;
    }
    case 299194:
    {
        returnValue = F("Sterrichweg");
        break;
    }
    case 299195:
    {
        returnValue = F("Sterthauk");
        break;
    }
    case 299196:
    {
        returnValue = F("Stertjensweg");
        break;
    }
    case 299197:
    {
        returnValue = F("Sterup-Dingholz");
        break;
    }
    case 299198:
    {
        returnValue = F("Sterupbek");
        break;
    }
    case 299199:
    {
        returnValue = F("Steruper Chaussee");
        break;
    }
    case 299200:
    {
        returnValue = F("Sterupgaard");
        break;
    }
    case 299201:
    {
        returnValue = F("Sterzbergstr.");
        break;
    }
    case 299202:
    {
        returnValue = F("Sterzbusch");
        break;
    }
    case 299203:
    {
        returnValue = F("Sterzelpfad");
        break;
    }
    case 299204:
    {
        returnValue = F("Sterzenbach");
        break;
    }
    case 299205:
    {
        returnValue = F("Sterzenbacher Str.");
        break;
    }
    case 299206:
    {
        returnValue = F("Sterzenbachgasse");
        break;
    }
    case 299207:
    {
        returnValue = F("Sterzenbachstr.");
        break;
    }
    case 299208:
    {
        returnValue = F("Sterzenreith");
        break;
    }
    case 299209:
    {
        returnValue = F("Sterzenweg");
        break;
    }
    case 299210:
    {
        returnValue = F("Sterzinger Str.");
        break;
    }
    case 299211:
    {
        returnValue = F("Sterzingstr.");
        break;
    }
    case 299212:
    {
        returnValue = F("Stesbenden");
        break;
    }
    case 299213:
    {
        returnValue = F("Stesse");
        break;
    }
    case 299214:
    {
        returnValue = F("Stessener Pfad");
        break;
    }
    case 299215:
    {
        returnValue = F("Stessener Weg");
        break;
    }
    case 299216:
    {
        returnValue = F("Stethaimerstr.");
        break;
    }
    case 299217:
    {
        returnValue = F("Stetsambach");
        break;
    }
    case 299218:
    {
        returnValue = F("Stettbach");
        break;
    }
    case 299219:
    {
        returnValue = F("Stettbacher Tal");
        break;
    }
    case 299220:
    {
        returnValue = F("Stettbachstr.");
        break;
    }
    case 299221:
    {
        returnValue = F("Stettberger Linie");
        break;
    }
    case 299222:
    {
        returnValue = F("Stettbergstr.");
        break;
    }
    case 299223:
    {
        returnValue = F("Stetteichenweg");
        break;
    }
    case 299224:
    {
        returnValue = F("Stettemer Berg");
        break;
    }
    case 299225:
    {
        returnValue = F("Stetten");
        break;
    }
    case 299226:
    {
        returnValue = F("Stettenberg");
        break;
    }
    case 299227:
    {
        returnValue = F("Stettenberger Weg");
        break;
    }
    case 299228:
    {
        returnValue = F("Stettenbergstr.");
        break;
    }
    case 299229:
    {
        returnValue = F("Stettener Bachweg");
        break;
    }
    case 299230:
    {
        returnValue = F("Stettener Halde");
        break;
    }
    case 299231:
    {
        returnValue = F("Stettener Hauptstr.");
        break;
    }
    case 299232:
    {
        returnValue = F("Stettener Str.");
        break;
    }
    case 299233:
    {
        returnValue = F("Stettener Weg");
        break;
    }
    case 299234:
    {
        returnValue = F("Stettenerberg");
        break;
    }
    case 299235:
    {
        returnValue = F("Stettenfelser Str.");
        break;
    }
    case 299236:
    {
        returnValue = F("Stettenhofer Str.");
        break;
    }
    case 299237:
    {
        returnValue = F("Stettenstr.");
        break;
    }
    case 299238:
    {
        returnValue = F("Stettenweg");
        break;
    }
    case 299239:
    {
        returnValue = F("Stetter Bohmen");
        break;
    }
    case 299240:
    {
        returnValue = F("Stetter Str.");
        break;
    }
    case 299241:
    {
        returnValue = F("Stetter Weg");
        break;
    }
    case 299242:
    {
        returnValue = F("Stetterfeldweg");
        break;
    }
    case 299243:
    {
        returnValue = F("Stettergässle");
        break;
    }
    case 299244:
    {
        returnValue = F("Stetteritzring");
        break;
    }
    case 299245:
    {
        returnValue = F("Stetternicher Weg");
        break;
    }
    case 299246:
    {
        returnValue = F("Stettertstr.");
        break;
    }
    case 299247:
    {
        returnValue = F("Stettertweg");
        break;
    }
    case 299248:
    {
        returnValue = F("Stetterwaldweg");
        break;
    }
    case 299249:
    {
        returnValue = F("Stetterweg");
        break;
    }
    case 299250:
    {
        returnValue = F("Stettfelder Str.");
        break;
    }
    case 299251:
    {
        returnValue = F("Stettfelder Weg");
        break;
    }
    case 299252:
    {
        returnValue = F("Stetthaimerplatz");
        break;
    }
    case 299253:
    {
        returnValue = F("Stetthaimerstr.");
        break;
    }
    case 299254:
    {
        returnValue = F("Stettholz");
        break;
    }
    case 299255:
    {
        returnValue = F("Stettigweg");
        break;
    }
    case 299256:
    {
        returnValue = F("Stettiner Chaussee");
        break;
    }
    case 299257:
    {
        returnValue = F("Stettiner Landstr.");
        break;
    }
    case 299258:
    {
        returnValue = F("Stettiner Platz");
        break;
    }
    case 299259:
    {
        returnValue = F("Stettiner Ring");
        break;
    }
    case 299260:
    {
        returnValue = F("Stettiner Str.");
        break;
    }
    case 299261:
    {
        returnValue = F("Stettiner Str. Nord");
        break;
    }
    case 299262:
    {
        returnValue = F("Stettiner Str. Süd");
        break;
    }
    case 299263:
    {
        returnValue = F("Stettiner Tor");
        break;
    }
    case 299264:
    {
        returnValue = F("Stettiner Weg");
        break;
    }
    case 299265:
    {
        returnValue = F("Stettinstr.");
        break;
    }
    case 299266:
    {
        returnValue = F("Stettinweg");
        break;
    }
    case 299267:
    {
        returnValue = F("Stettner Str.");
        break;
    }
    case 299268:
    {
        returnValue = F("Stettnerstr.");
        break;
    }
    case 299269:
    {
        returnValue = F("Stettwegäcker");
        break;
    }
    case 299270:
    {
        returnValue = F("Stettwies");
        break;
    }
    case 299271:
    {
        returnValue = F("Stettäckerstr.");
        break;
    }
    case 299272:
    {
        returnValue = F("Stetzelmannstr.");
        break;
    }
    case 299273:
    {
        returnValue = F("Steuben-Allee");
        break;
    }
    case 299274:
    {
        returnValue = F("Steubenstr.");
        break;
    }
    case 299275:
    {
        returnValue = F("Steubingstr.");
        break;
    }
    case 299276:
    {
        returnValue = F("Steubstr.");
        break;
    }
    case 299277:
    {
        returnValue = F("Steubweg");
        break;
    }
    case 299278:
    {
        returnValue = F("Steudacher Str.");
        break;
    }
    case 299279:
    {
        returnValue = F("Steudacher Weg");
        break;
    }
    case 299280:
    {
        returnValue = F("Steudener Str.");
        break;
    }
    case 299281:
    {
        returnValue = F("Steudigweg");
        break;
    }
    case 299282:
    {
        returnValue = F("Steudingerweg");
        break;
    }
    case 299283:
    {
        returnValue = F("Steuen");
        break;
    }
    case 299284:
    {
        returnValue = F("Steuerbord");
        break;
    }
    case 299285:
    {
        returnValue = F("Steuermanns Weg");
        break;
    }
    case 299286:
    {
        returnValue = F("Steuermannsweg");
        break;
    }
    case 299287:
    {
        returnValue = F("Steuernbergstr.");
        break;
    }
    case 299288:
    {
        returnValue = F("Steuerrad");
        break;
    }
    case 299289:
    {
        returnValue = F("Steuerstr.");
        break;
    }
    case 299290:
    {
        returnValue = F("Steuerwaldtweg");
        break;
    }
    case 299291:
    {
        returnValue = F("Steuerwandweg");
        break;
    }
    case 299292:
    {
        returnValue = F("Steuerweg");
        break;
    }
    case 299293:
    {
        returnValue = F("Steuobstwiese");
        break;
    }
    case 299294:
    {
        returnValue = F("Steuppergstr.");
        break;
    }
    case 299295:
    {
        returnValue = F("Steurentalstr.");
        break;
    }
    case 299296:
    {
        returnValue = F("Steuterweg");
        break;
    }
    case 299297:
    {
        returnValue = F("Steutzer Str.");
        break;
    }
    case 299298:
    {
        returnValue = F("Stevede");
        break;
    }
    case 299299:
    {
        returnValue = F("Steveder Weg");
        break;
    }
    case 299300:
    {
        returnValue = F("Stevelin");
        break;
    }
    case 299301:
    {
        returnValue = F("Steveliner Str.");
        break;
    }
    case 299302:
    {
        returnValue = F("Stevenagestr.");
        break;
    }
    case 299303:
    {
        returnValue = F("Stevens Kamp");
        break;
    }
    case 299304:
    {
        returnValue = F("Stevens Weg");
        break;
    }
    case 299305:
    {
        returnValue = F("Stevern");
        break;
    }
    case 299306:
    {
        returnValue = F("Steverpark");
        break;
    }
    case 299307:
    {
        returnValue = F("Steverstr.");
        break;
    }
    case 299308:
    {
        returnValue = F("Steverweg");
        break;
    }
    case 299309:
    {
        returnValue = F("Stevesiek");
        break;
    }
    case 299310:
    {
        returnValue = F("Stexwigfeld");
        break;
    }
    case 299311:
    {
        returnValue = F("Steyerberger Allee");
        break;
    }
    case 299312:
    {
        returnValue = F("Steyerberger Str.");
        break;
    }
    case 299313:
    {
        returnValue = F("Steyermühle");
        break;
    }
    case 299314:
    {
        returnValue = F("Steyler Hof");
        break;
    }
    case 299315:
    {
        returnValue = F("Steyler Park");
        break;
    }
    case 299316:
    {
        returnValue = F("Steyler Str.");
        break;
    }
    case 299317:
    {
        returnValue = F("Steyrer Weg");
        break;
    }
    case 299318:
    {
        returnValue = F("Stianbrag");
        break;
    }
    case 299319:
    {
        returnValue = F("Stianoodswai");
        break;
    }
    case 299320:
    {
        returnValue = F("Stibergasse");
        break;
    }
    case 299321:
    {
        returnValue = F("Stiberstr.");
        break;
    }
    case 299322:
    {
        returnValue = F("Stiblerweg");
        break;
    }
    case 299323:
    {
        returnValue = F("Stich");
        break;
    }
    case 299324:
    {
        returnValue = F("Stich 1 Ausbau");
        break;
    }
    case 299325:
    {
        returnValue = F("Stich'l");
        break;
    }
    case 299326:
    {
        returnValue = F("Stichanerstr.");
        break;
    }
    case 299327:
    {
        returnValue = F("Stichbruch");
        break;
    }
    case 299328:
    {
        returnValue = F("Stiche");
        break;
    }
    case 299329:
    {
        returnValue = F("Stichelgasse");
        break;
    }
    case 299330:
    {
        returnValue = F("Stichelmeede");
        break;
    }
    case 299331:
    {
        returnValue = F("Stichelshecke");
        break;
    }
    case 299332:
    {
        returnValue = F("Stichelstr.");
        break;
    }
    case 299333:
    {
        returnValue = F("Stichelsweg");
        break;
    }
    case 299334:
    {
        returnValue = F("Stichelwang");
        break;
    }
    case 299335:
    {
        returnValue = F("Stichelweg");
        break;
    }
    case 299336:
    {
        returnValue = F("Stichelwiese");
        break;
    }
    case 299337:
    {
        returnValue = F("Stichentalweg");
        break;
    }
    case 299338:
    {
        returnValue = F("Stichgartlweg");
        break;
    }
    case 299339:
    {
        returnValue = F("Stichkamp");
        break;
    }
    case 299340:
    {
        returnValue = F("Stichleweg");
        break;
    }
    case 299341:
    {
        returnValue = F("Stichling");
        break;
    }
    case 299342:
    {
        returnValue = F("Stichlinge");
        break;
    }
    case 299343:
    {
        returnValue = F("Stichlingsgasse");
        break;
    }
    case 299344:
    {
        returnValue = F("Stichlingsweg");
        break;
    }
    case 299345:
    {
        returnValue = F("Stichlingweg");
        break;
    }
    case 299346:
    {
        returnValue = F("Stichstr.");
        break;
    }
    case 299347:
    {
        returnValue = F("Stichsweg");
        break;
    }
    case 299348:
    {
        returnValue = F("Sticht");
        break;
    }
    case 299349:
    {
        returnValue = F("Stichterstr.");
        break;
    }
    case 299350:
    {
        returnValue = F("Stichtlstr.");
        break;
    }
    case 299351:
    {
        returnValue = F("Stichtmannstr.");
        break;
    }
    case 299352:
    {
        returnValue = F("Stichtstr.");
        break;
    }
    case 299353:
    {
        returnValue = F("Stichtweg");
        break;
    }
    case 299354:
    {
        returnValue = F("Stichwai");
        break;
    }
    case 299355:
    {
        returnValue = F("Stichweg");
        break;
    }
    case 299356:
    {
        returnValue = F("Stichweg Hildegundisstr.");
        break;
    }
    case 299357:
    {
        returnValue = F("Stichweg Scheidweg");
        break;
    }
    case 299358:
    {
        returnValue = F("Stichweg südl. Alte Liene");
        break;
    }
    case 299359:
    {
        returnValue = F("Stick");
        break;
    }
    case 299360:
    {
        returnValue = F("Stickdeichdamm");
        break;
    }
    case 299361:
    {
        returnValue = F("Stickelesweg");
        break;
    }
    case 299362:
    {
        returnValue = F("Stickelhammsweg");
        break;
    }
    case 299363:
    {
        returnValue = F("Stickelkopfweg");
        break;
    }
    case 299364:
    {
        returnValue = F("Stickelpfad");
        break;
    }
    case 299365:
    {
        returnValue = F("Stickelsgrabenstr.");
        break;
    }
    case 299366:
    {
        returnValue = F("Stickelsklingenweg");
        break;
    }
    case 299367:
    {
        returnValue = F("Stickelsweg");
        break;
    }
    case 299368:
    {
        returnValue = F("Stickenweg");
        break;
    }
    case 299369:
    {
        returnValue = F("Stickereiweg");
        break;
    }
    case 299370:
    {
        returnValue = F("Stickergäßchen");
        break;
    }
    case 299371:
    {
        returnValue = F("Stickernwendeweg");
        break;
    }
    case 299372:
    {
        returnValue = F("Stickerstr.");
        break;
    }
    case 299373:
    {
        returnValue = F("Stickerweg");
        break;
    }
    case 299374:
    {
        returnValue = F("Stickesgasse");
        break;
    }
    case 299375:
    {
        returnValue = F("Stickteich");
        break;
    }
    case 299376:
    {
        returnValue = F("Stickteich-Siedlung");
        break;
    }
    case 299377:
    {
        returnValue = F("Stickteichstr.");
        break;
    }
    case 299378:
    {
        returnValue = F("Stiebarlimbach");
        break;
    }
    case 299379:
    {
        returnValue = F("Stiebarweg");
        break;
    }
    case 299380:
    {
        returnValue = F("Stieberg");
        break;
    }
    case 299381:
    {
        returnValue = F("Stieberger Str.");
        break;
    }
    case 299382:
    {
        returnValue = F("Stieberstr.");
        break;
    }
    case 299383:
    {
        returnValue = F("Stieberweg");
        break;
    }
    case 299384:
    {
        returnValue = F("Stiebgasse");
        break;
    }
    case 299385:
    {
        returnValue = F("Stiebitzweg");
        break;
    }
    case 299386:
    {
        returnValue = F("Stiebogen");
        break;
    }
    case 299387:
    {
        returnValue = F("Stiebritz");
        break;
    }
    case 299388:
    {
        returnValue = F("Stiebsdorfer Weg");
        break;
    }
    case 299389:
    {
        returnValue = F("Stiebtalweg");
        break;
    }
    case 299390:
    {
        returnValue = F("Stiede");
        break;
    }
    case 299391:
    {
        returnValue = F("Stiedenweg");
        break;
    }
    case 299392:
    {
        returnValue = F("Stiedlengäßle");
        break;
    }
    case 299393:
    {
        returnValue = F("Stiefelfeld Fußweg");
        break;
    }
    case 299394:
    {
        returnValue = F("Stiefelgang");
        break;
    }
    case 299395:
    {
        returnValue = F("Stiefelgasse");
        break;
    }
    case 299396:
    {
        returnValue = F("Stiefelhagener Str.");
        break;
    }
    case 299397:
    {
        returnValue = F("Stiefelhagenstr.");
        break;
    }
    case 299398:
    {
        returnValue = F("Stiefelknecht");
        break;
    }
    case 299399:
    {
        returnValue = F("Stiefelknechtstr.");
        break;
    }
    case 299400:
    {
        returnValue = F("Stiefelsfeld");
        break;
    }
    case 299401:
    {
        returnValue = F("Stiefelsgraben");
        break;
    }
    case 299402:
    {
        returnValue = F("Stiefelstr.");
        break;
    }
    case 299403:
    {
        returnValue = F("Stiefelweg");
        break;
    }
    case 299404:
    {
        returnValue = F("Stiefenhoferplatz");
        break;
    }
    case 299405:
    {
        returnValue = F("Stiefenhoferweg");
        break;
    }
    case 299406:
    {
        returnValue = F("Stiefmütterchenweg");
        break;
    }
    case 299407:
    {
        returnValue = F("Stieg");
        break;
    }
    case 299408:
    {
        returnValue = F("Stieg Str.");
        break;
    }
    case 299409:
    {
        returnValue = F("Stiegacker");
        break;
    }
    case 299410:
    {
        returnValue = F("Stiegackerweg");
        break;
    }
    case 299411:
    {
        returnValue = F("Stiege");
        break;
    }
    case 299412:
    {
        returnValue = F("Stiegel");
        break;
    }
    case 299413:
    {
        returnValue = F("Stiegelackerstr.");
        break;
    }
    case 299414:
    {
        returnValue = F("Stiegelbreede");
        break;
    }
    case 299415:
    {
        returnValue = F("Stiegelbräuweg");
        break;
    }
    case 299416:
    {
        returnValue = F("Stiegele");
        break;
    }
    case 299417:
    {
        returnValue = F("Stiegelegasse");
        break;
    }
    case 299418:
    {
        returnValue = F("Stiegelein");
        break;
    }
    case 299419:
    {
        returnValue = F("Stiegelengasse");
        break;
    }
    case 299420:
    {
        returnValue = F("Stiegelenweg");
        break;
    }
    case 299421:
    {
        returnValue = F("Stiegelesgasse");
        break;
    }
    case 299422:
    {
        returnValue = F("Stiegeleweg");
        break;
    }
    case 299423:
    {
        returnValue = F("Stiegelgasse");
        break;
    }
    case 299424:
    {
        returnValue = F("Stiegelmattstr.");
        break;
    }
    case 299425:
    {
        returnValue = F("Stiegelmühler Str.");
        break;
    }
    case 299426:
    {
        returnValue = F("Stiegelpfad");
        break;
    }
    case 299427:
    {
        returnValue = F("Stiegelpfortenweg");
        break;
    }
    case 299428:
    {
        returnValue = F("Stiegelpotte");
        break;
    }
    case 299429:
    {
        returnValue = F("Stiegelsberg");
        break;
    }
    case 299430:
    {
        returnValue = F("Stiegelsgasse");
        break;
    }
    case 299431:
    {
        returnValue = F("Stiegelsgärten");
        break;
    }
    case 299432:
    {
        returnValue = F("Stiegelstr.");
        break;
    }
    case 299433:
    {
        returnValue = F("Stiegelsweg");
        break;
    }
    case 299434:
    {
        returnValue = F("Stiegelweg");
        break;
    }
    case 299435:
    {
        returnValue = F("Stiegelwiese");
        break;
    }
    case 299436:
    {
        returnValue = F("Stiegelwiesenstr.");
        break;
    }
    case 299437:
    {
        returnValue = F("Stiegeläckerstr.");
        break;
    }
    case 299438:
    {
        returnValue = F("Stiegenbrünnliweg");
        break;
    }
    case 299439:
    {
        returnValue = F("Stiegengrund");
        break;
    }
    case 299440:
    {
        returnValue = F("Stiegenweg");
        break;
    }
    case 299441:
    {
        returnValue = F("Stieger Str.");
        break;
    }
    case 299442:
    {
        returnValue = F("Stieger Weg");
        break;
    }
    case 299443:
    {
        returnValue = F("Stiegerheide");
        break;
    }
    case 299444:
    {
        returnValue = F("Stiegerstr.");
        break;
    }
    case 299445:
    {
        returnValue = F("Stiegertsweg");
        break;
    }
    case 299446:
    {
        returnValue = F("Stiegerweg");
        break;
    }
    case 299447:
    {
        returnValue = F("Stiegestr.");
        break;
    }
    case 299448:
    {
        returnValue = F("Stiegeweg");
        break;
    }
    case 299449:
    {
        returnValue = F("Stiegfeld");
        break;
    }
    case 299450:
    {
        returnValue = F("Stiegfeldweg");
        break;
    }
    case 299451:
    {
        returnValue = F("Stieggasse");
        break;
    }
    case 299452:
    {
        returnValue = F("Stiegkamp");
        break;
    }
    case 299453:
    {
        returnValue = F("Stiegkoppel");
        break;
    }
    case 299454:
    {
        returnValue = F("Stiegl");
        break;
    }
    case 299455:
    {
        returnValue = F("Stiegl Geräumt");
        break;
    }
    case 299456:
    {
        returnValue = F("Stieglberg");
        break;
    }
    case 299457:
    {
        returnValue = F("Stieglbräugasse");
        break;
    }
    case 299458:
    {
        returnValue = F("Stieglerstr.");
        break;
    }
    case 299459:
    {
        returnValue = F("Stieglesfeld");
        break;
    }
    case 299460:
    {
        returnValue = F("Stieglfeldstr.");
        break;
    }
    case 299461:
    {
        returnValue = F("Stieglgasse");
        break;
    }
    case 299462:
    {
        returnValue = F("Stieglitzeck");
        break;
    }
    case 299463:
    {
        returnValue = F("Stieglitzecke");
        break;
    }
    case 299464:
    {
        returnValue = F("Stieglitzenhöhe");
        break;
    }
    case 299465:
    {
        returnValue = F("Stieglitzenstr.");
        break;
    }
    case 299466:
    {
        returnValue = F("Stieglitzenweg");
        break;
    }
    case 299467:
    {
        returnValue = F("Stieglitzgasse");
        break;
    }
    case 299468:
    {
        returnValue = F("Stieglitzhof");
        break;
    }
    case 299469:
    {
        returnValue = F("Stieglitzhöhe");
        break;
    }
    case 299470:
    {
        returnValue = F("Stieglitzplatz");
        break;
    }
    case 299471:
    {
        returnValue = F("Stieglitzsteig");
        break;
    }
    case 299472:
    {
        returnValue = F("Stieglitzstr.");
        break;
    }
    case 299473:
    {
        returnValue = F("Stieglitzweg");
        break;
    }
    case 299474:
    {
        returnValue = F("Stieglstr.");
        break;
    }
    case 299475:
    {
        returnValue = F("Stieglunder Weg");
        break;
    }
    case 299476:
    {
        returnValue = F("Stieglunderweg");
        break;
    }
    case 299477:
    {
        returnValue = F("Stieglundsanderweg");
        break;
    }
    case 299478:
    {
        returnValue = F("Stieglust");
        break;
    }
    case 299479:
    {
        returnValue = F("Stieglweg");
        break;
    }
    case 299480:
    {
        returnValue = F("Stiegstr.");
        break;
    }
    case 299481:
    {
        returnValue = F("Stiegstück");
        break;
    }
    case 299482:
    {
        returnValue = F("Stiegtannen Weg");
        break;
    }
    case 299483:
    {
        returnValue = F("Stiegtannenweg");
        break;
    }
    case 299484:
    {
        returnValue = F("Stiegte");
        break;
    }
    case 299485:
    {
        returnValue = F("Stiegteweg");
        break;
    }
    case 299486:
    {
        returnValue = F("Stiegthügel");
        break;
    }
    case 299487:
    {
        returnValue = F("Stiegweg");
        break;
    }
    case 299488:
    {
        returnValue = F("Stiehlerweg");
        break;
    }
    case 299489:
    {
        returnValue = F("Stiehl´s Weg");
        break;
    }
    case 299490:
    {
        returnValue = F("Stiekamp");
        break;
    }
    case 299491:
    {
        returnValue = F("Stiekelborger Weg");
        break;
    }
    case 299492:
    {
        returnValue = F("Stieken Twachte");
        break;
    }
    case 299493:
    {
        returnValue = F("Stiel");
        break;
    }
    case 299494:
    {
        returnValue = F("Stielbachstr.");
        break;
    }
    case 299495:
    {
        returnValue = F("Stielbauerngasse");
        break;
    }
    case 299496:
    {
        returnValue = F("Stielbergweg");
        break;
    }
    case 299497:
    {
        returnValue = F("Stieldorferhohn");
        break;
    }
    case 299498:
    {
        returnValue = F("Stieleichenstr.");
        break;
    }
    case 299499:
    {
        returnValue = F("Stieleichenweg");
        break;
    }
    case 299500:
    {
        returnValue = F("Stielerstr.");
        break;
    }
    case 299501:
    {
        returnValue = F("Stielgartenstr.");
        break;
    }
    case 299502:
    {
        returnValue = F("Stielgasse");
        break;
    }
    case 299503:
    {
        returnValue = F("Stielhoffstr.");
        break;
    }
    case 299504:
    {
        returnValue = F("Stielings");
        break;
    }
    case 299505:
    {
        returnValue = F("Stielpfad");
        break;
    }
    case 299506:
    {
        returnValue = F("Stielstr.");
        break;
    }
    case 299507:
    {
        returnValue = F("Stielweid");
        break;
    }
    case 299508:
    {
        returnValue = F("Stieläcker");
        break;
    }
    case 299509:
    {
        returnValue = F("Stienchenstr.");
        break;
    }
    case 299510:
    {
        returnValue = F("Stieneckers Esch");
        break;
    }
    case 299511:
    {
        returnValue = F("Stienedamm");
        break;
    }
    case 299512:
    {
        returnValue = F("Stieneichhofen");
        break;
    }
    case 299513:
    {
        returnValue = F("Stiener Str.");
        break;
    }
    case 299514:
    {
        returnValue = F("Stienitzallee");
        break;
    }
    case 299515:
    {
        returnValue = F("Stienitzstr.");
        break;
    }
    case 299516:
    {
        returnValue = F("Stiepelser Str.");
        break;
    }
    case 299517:
    {
        returnValue = F("Stiepenweg");
        break;
    }
    case 299518:
    {
        returnValue = F("Stierbaumer Weg");
        break;
    }
    case 299519:
    {
        returnValue = F("Stierengasse");
        break;
    }
    case 299520:
    {
        returnValue = F("Stierfeldweg");
        break;
    }
    case 299521:
    {
        returnValue = F("Stiergartenstr.");
        break;
    }
    case 299522:
    {
        returnValue = F("Stiergartenweg");
        break;
    }
    case 299523:
    {
        returnValue = F("Stiergasse");
        break;
    }
    case 299524:
    {
        returnValue = F("Stiergaß");
        break;
    }
    case 299525:
    {
        returnValue = F("Stiergraben");
        break;
    }
    case 299526:
    {
        returnValue = F("Stierhöfstettener Str.");
        break;
    }
    case 299527:
    {
        returnValue = F("Stierow");
        break;
    }
    case 299528:
    {
        returnValue = F("Stierower Weg");
        break;
    }
    case 299529:
    {
        returnValue = F("Stierpesch");
        break;
    }
    case 299530:
    {
        returnValue = F("Stiersbacherstr.");
        break;
    }
    case 299531:
    {
        returnValue = F("Stiershaldenweg");
        break;
    }
    case 299532:
    {
        returnValue = F("Stierstr.");
        break;
    }
    case 299533:
    {
        returnValue = F("Stierstädter Str.");
        break;
    }
    case 299534:
    {
        returnValue = F("Stierswiese");
        break;
    }
    case 299535:
    {
        returnValue = F("Stierweg");
        break;
    }
    case 299536:
    {
        returnValue = F("Stierötz Geräumt");
        break;
    }
    case 299537:
    {
        returnValue = F("Stierötz-Geräumt");
        break;
    }
    case 299538:
    {
        returnValue = F("Stiesbergstr.");
        break;
    }
    case 299539:
    {
        returnValue = F("Stieter Str.");
        break;
    }
    case 299540:
    {
        returnValue = F("Stietestr.");
        break;
    }
    case 299541:
    {
        returnValue = F("Stietzgrabenweg");
        break;
    }
    case 299542:
    {
        returnValue = F("Stietzstr.");
        break;
    }
    case 299543:
    {
        returnValue = F("Stietzweg");
        break;
    }
    case 299544:
    {
        returnValue = F("Stieweg");
        break;
    }
    case 299545:
    {
        returnValue = F("Stiewenweg");
        break;
    }
    case 299546:
    {
        returnValue = F("Stießberg");
        break;
    }
    case 299547:
    {
        returnValue = F("Stiffollerweg");
        break;
    }
    case 299548:
    {
        returnValue = F("Stift");
        break;
    }
    case 299549:
    {
        returnValue = F("Stift-Keppel-Weg");
        break;
    }
    case 299550:
    {
        returnValue = F("Stiftenhöfter Str.");
        break;
    }
    case 299551:
    {
        returnValue = F("Stifter Allee");
        break;
    }
    case 299552:
    {
        returnValue = F("Stifter Berg");
        break;
    }
    case 299553:
    {
        returnValue = F("Stifter-Weg");
        break;
    }
    case 299554:
    {
        returnValue = F("Stifterinnenweg");
        break;
    }
    case 299555:
    {
        returnValue = F("Stifterplatz");
        break;
    }
    case 299556:
    {
        returnValue = F("Stifterstr.");
        break;
    }
    case 299557:
    {
        returnValue = F("Stifterweg");
        break;
    }
    case 299558:
    {
        returnValue = F("Stifthofstr.");
        break;
    }
    case 299559:
    {
        returnValue = F("Stiftkamp");
        break;
    }
    case 299560:
    {
        returnValue = F("Stiftlandring");
        break;
    }
    case 299561:
    {
        returnValue = F("Stiftlandstr.");
        break;
    }
    case 299562:
    {
        returnValue = F("Stiftlring");
        break;
    }
    case 299563:
    {
        returnValue = F("Stiftplatz");
        break;
    }
    case 299564:
    {
        returnValue = F("Stiftsanger");
        break;
    }
    case 299565:
    {
        returnValue = F("Stiftsberg");
        break;
    }
    case 299566:
    {
        returnValue = F("Stiftsbleiche");
        break;
    }
    case 299567:
    {
        returnValue = F("Stiftsblick");
        break;
    }
    case 299568:
    {
        returnValue = F("Stiftsgartenstr.");
        break;
    }
    case 299569:
    {
        returnValue = F("Stiftsgasse");
        break;
    }
    case 299570:
    {
        returnValue = F("Stiftsgraben");
        break;
    }
    case 299571:
    {
        returnValue = F("Stiftsgrundhof");
        break;
    }
    case 299572:
    {
        returnValue = F("Stiftsgrüner Weg");
        break;
    }
    case 299573:
    {
        returnValue = F("Stiftsgut");
        break;
    }
    case 299574:
    {
        returnValue = F("Stiftsgut Hechendorf");
        break;
    }
    case 299575:
    {
        returnValue = F("Stiftsgäßchen");
        break;
    }
    case 299576:
    {
        returnValue = F("Stiftsherrengasse");
        break;
    }
    case 299577:
    {
        returnValue = F("Stiftsherrenstr.");
        break;
    }
    case 299578:
    {
        returnValue = F("Stiftshof");
        break;
    }
    case 299579:
    {
        returnValue = F("Stiftshofer Weg");
        break;
    }
    case 299580:
    {
        returnValue = F("Stiftshäuser");
        break;
    }
    case 299581:
    {
        returnValue = F("Stiftsmarkt");
        break;
    }
    case 299582:
    {
        returnValue = F("Stiftspark");
        break;
    }
    case 299583:
    {
        returnValue = F("Stiftsplatz");
        break;
    }
    case 299584:
    {
        returnValue = F("Stiftsring");
        break;
    }
    case 299585:
    {
        returnValue = F("Stiftsstr.");
        break;
    }
    case 299586:
    {
        returnValue = F("Stiftstor");
        break;
    }
    case 299587:
    {
        returnValue = F("Stiftstr.");
        break;
    }
    case 299588:
    {
        returnValue = F("Stiftswaldstr.");
        break;
    }
    case 299589:
    {
        returnValue = F("Stiftswaldsträßchen");
        break;
    }
    case 299590:
    {
        returnValue = F("Stiftsweg");
        break;
    }
    case 299591:
    {
        returnValue = F("Stiftung");
        break;
    }
    case 299592:
    {
        returnValue = F("Stiftungsgasse");
        break;
    }
    case 299593:
    {
        returnValue = F("Stiftungsgut");
        break;
    }
    case 299594:
    {
        returnValue = F("Stiftungsstr.");
        break;
    }
    case 299595:
    {
        returnValue = F("Stiftungsweg");
        break;
    }
    case 299596:
    {
        returnValue = F("Stiftweg");
        break;
    }
    case 299597:
    {
        returnValue = F("Stiftwiesenweg");
        break;
    }
    case 299598:
    {
        returnValue = F("Stigel");
        break;
    }
    case 299599:
    {
        returnValue = F("Stigelewiesen");
        break;
    }
    case 299600:
    {
        returnValue = F("Stigler Str.");
        break;
    }
    case 299601:
    {
        returnValue = F("Stiglerstr.");
        break;
    }
    case 299602:
    {
        returnValue = F("Stiglfeldweg");
        break;
    }
    case 299603:
    {
        returnValue = F("Stiglmayrstr.");
        break;
    }
    case 299604:
    {
        returnValue = F("Stiglrangen");
        break;
    }
    case 299605:
    {
        returnValue = F("Stiglweg");
        break;
    }
    case 299606:
    {
        returnValue = F("Stihl-Str.");
        break;
    }
    case 299607:
    {
        returnValue = F("Stiindeelke");
        break;
    }
    case 299608:
    {
        returnValue = F("Stikelkamper Str.");
        break;
    }
    case 299609:
    {
        returnValue = F("Stikkamp");
        break;
    }
    case 299610:
    {
        returnValue = F("Stikkenweg");
        break;
    }
    case 299611:
    {
        returnValue = F("Stilker");
        break;
    }
    case 299612:
    {
        returnValue = F("Stillachdammweg");
        break;
    }
    case 299613:
    {
        returnValue = F("Stillachstr.");
        break;
    }
    case 299614:
    {
        returnValue = F("Stillaplatz");
        break;
    }
    case 299615:
    {
        returnValue = F("Stillbergweg");
        break;
    }
    case 299616:
    {
        returnValue = F("Stillbornweg");
        break;
    }
    case 299617:
    {
        returnValue = F("Stillbuschweg");
        break;
    }
    case 299618:
    {
        returnValue = F("Stille");
        break;
    }
    case 299619:
    {
        returnValue = F("Stille Gasse");
        break;
    }
    case 299620:
    {
        returnValue = F("Stille Heide");
        break;
    }
    case 299621:
    {
        returnValue = F("Stille Liebe");
        break;
    }
    case 299622:
    {
        returnValue = F("Stille Str.");
        break;
    }
    case 299623:
    {
        returnValue = F("Stille Wasser");
        break;
    }
    case 299624:
    {
        returnValue = F("Stillebeul");
        break;
    }
    case 299625:
    {
        returnValue = F("Stillecken Str.");
        break;
    }
    case 299626:
    {
        returnValue = F("Stiller Berg");
        break;
    }
    case 299627:
    {
        returnValue = F("Stiller Bogen");
        break;
    }
    case 299628:
    {
        returnValue = F("Stiller Frieden");
        break;
    }
    case 299629:
    {
        returnValue = F("Stiller Garten");
        break;
    }
    case 299630:
    {
        returnValue = F("Stiller Gasse");
        break;
    }
    case 299631:
    {
        returnValue = F("Stiller Grund");
        break;
    }
    case 299632:
    {
        returnValue = F("Stiller Tor");
        break;
    }
    case 299633:
    {
        returnValue = F("Stiller Weg");
        break;
    }
    case 299634:
    {
        returnValue = F("Stiller Winkel");
        break;
    }
    case 299635:
    {
        returnValue = F("Stillerhofstr.");
        break;
    }
    case 299636:
    {
        returnValue = F("Stillernweg");
        break;
    }
    case 299637:
    {
        returnValue = F("Stillerrain");
        break;
    }
    case 299638:
    {
        returnValue = F("Stillerstr.");
        break;
    }
    case 299639:
    {
        returnValue = F("Stillerten");
        break;
    }
    case 299640:
    {
        returnValue = F("Stillerweg");
        break;
    }
    case 299641:
    {
        returnValue = F("Stillerz");
        break;
    }
    case 299642:
    {
        returnValue = F("Stilles Tal");
        break;
    }
    case 299643:
    {
        returnValue = F("Stillestr.");
        break;
    }
    case 299644:
    {
        returnValue = F("Stillhörn");
        break;
    }
    case 299645:
    {
        returnValue = F("Stillinghausen");
        break;
    }
    case 299646:
    {
        returnValue = F("Stillinghauser Weg");
        break;
    }
    case 299647:
    {
        returnValue = F("Stillnau");
        break;
    }
    case 299648:
    {
        returnValue = F("Stillnauerstr.");
        break;
    }
    case 299649:
    {
        returnValue = F("Stillohweg");
        break;
    }
    case 299650:
    {
        returnValue = F("Stillshöhe");
        break;
    }
    case 299651:
    {
        returnValue = F("Stillstr.");
        break;
    }
    case 299652:
    {
        returnValue = F("Stilower Wende");
        break;
    }
    case 299653:
    {
        returnValue = F("Stilperweg");
        break;
    }
    case 299654:
    {
        returnValue = F("Stilweg");
        break;
    }
    case 299655:
    {
        returnValue = F("Stilzelweg");
        break;
    }
    case 299656:
    {
        returnValue = F("Stilzenbrunnenweg");
        break;
    }
    case 299657:
    {
        returnValue = F("Stilzendorfer Str.");
        break;
    }
    case 299658:
    {
        returnValue = F("Stilzereich");
        break;
    }
    case 299659:
    {
        returnValue = F("Stimbergstr.");
        break;
    }
    case 299660:
    {
        returnValue = F("Stimmbecksheide");
        break;
    }
    case 299661:
    {
        returnValue = F("Stimmeckenweg");
        break;
    }
    case 299662:
    {
        returnValue = F("Stimmersdorfer Weg");
        break;
    }
    case 299663:
    {
        returnValue = F("Stimmhof");
        break;
    }
    case 299664:
    {
        returnValue = F("Stimpfacher Str.");
        break;
    }
    case 299665:
    {
        returnValue = F("Stimsenberg");
        break;
    }
    case 299666:
    {
        returnValue = F("Stindertalweg");
        break;
    }
    case 299667:
    {
        returnValue = F("Stindts Damm");
        break;
    }
    case 299668:
    {
        returnValue = F("Stindtsweg");
        break;
    }
    case 299669:
    {
        returnValue = F("Stine-Andresen-Weg");
        break;
    }
    case 299670:
    {
        returnValue = F("Stinenpatt");
        break;
    }
    case 299671:
    {
        returnValue = F("Stingelheimer Ring");
        break;
    }
    case 299672:
    {
        returnValue = F("Stingelheimerstr.");
        break;
    }
    case 299673:
    {
        returnValue = F("Stingenhof");
        break;
    }
    case 299674:
    {
        returnValue = F("Stinglhamerstr.");
        break;
    }
    case 299675:
    {
        returnValue = F("Stinglmühle");
        break;
    }
    case 299676:
    {
        returnValue = F("Stinkbüdelsbarg");
        break;
    }
    case 299677:
    {
        returnValue = F("Stinkbütelsgang");
        break;
    }
    case 299678:
    {
        returnValue = F("Stinkbüttelsgang");
        break;
    }
    case 299679:
    {
        returnValue = F("Stinkelbrunnstr.");
        break;
    }
    case 299680:
    {
        returnValue = F("Stinkenbornfeldweg");
        break;
    }
    case 299681:
    {
        returnValue = F("Stinkergraben Trail");
        break;
    }
    case 299682:
    {
        returnValue = F("Stinketunnel");
        break;
    }
    case 299683:
    {
        returnValue = F("Stinkgäßchen");
        break;
    }
    case 299684:
    {
        returnValue = F("Stinkpädsche");
        break;
    }
    case 299685:
    {
        returnValue = F("Stinnes-Park");
        break;
    }
    case 299686:
    {
        returnValue = F("Stinnhorn");
        break;
    }
    case 299687:
    {
        returnValue = F("Stinnweg");
        break;
    }
    case 299688:
    {
        returnValue = F("Stinteck");
        break;
    }
    case 299689:
    {
        returnValue = F("Stintenberger Str.");
        break;
    }
    case 299690:
    {
        returnValue = F("Stintenburger Str.");
        break;
    }
    case 299691:
    {
        returnValue = F("Stintenburger Weg");
        break;
    }
    case 299692:
    {
        returnValue = F("Stintricker Str.");
        break;
    }
    case 299693:
    {
        returnValue = F("Stintweg");
        break;
    }
    case 299694:
    {
        returnValue = F("Stinzendorfer Weg");
        break;
    }
    case 299695:
    {
        returnValue = F("Stipendie");
        break;
    }
    case 299696:
    {
        returnValue = F("Stipendiumsweg");
        break;
    }
    case 299697:
    {
        returnValue = F("Stippelhörn");
        break;
    }
    case 299698:
    {
        returnValue = F("Stippelstr.");
        break;
    }
    case 299699:
    {
        returnValue = F("Stippvisite im Zwergenreich");
        break;
    }
    case 299700:
    {
        returnValue = F("Stipsdorfer Str.");
        break;
    }
    case 299701:
    {
        returnValue = F("Stipsstr.");
        break;
    }
    case 299702:
    {
        returnValue = F("Stirnbachsweg");
        break;
    }
    case 299703:
    {
        returnValue = F("Stirnberg");
        break;
    }
    case 299704:
    {
        returnValue = F("Stirnbergstr.");
        break;
    }
    case 299705:
    {
        returnValue = F("Stirnenweg");
        break;
    }
    case 299706:
    {
        returnValue = F("Stirner Str.");
        break;
    }
    case 299707:
    {
        returnValue = F("Stirnerstr.");
        break;
    }
    case 299708:
    {
        returnValue = F("Stirnstr.");
        break;
    }
    case 299709:
    {
        returnValue = F("Stirnweg");
        break;
    }
    case 299710:
    {
        returnValue = F("Stirper Damm");
        break;
    }
    case 299711:
    {
        returnValue = F("Stirper Str.");
        break;
    }
    case 299712:
    {
        returnValue = F("Stirper Weg");
        break;
    }
    case 299713:
    {
        returnValue = F("Stiti");
        break;
    }
    case 299714:
    {
        returnValue = F("Stits");
        break;
    }
    case 299715:
    {
        returnValue = F("Stittel");
        break;
    }
    case 299716:
    {
        returnValue = F("Stixenfeld");
        break;
    }
    case 299717:
    {
        returnValue = F("Stixenweg");
        break;
    }
    case 299718:
    {
        returnValue = F("Stixwörthstr.");
        break;
    }
    case 299719:
    {
        returnValue = F("Stoaberglweg");
        break;
    }
    case 299720:
    {
        returnValue = F("Stoasagstr.");
        break;
    }
    case 299721:
    {
        returnValue = F("Stobbenbrook");
        break;
    }
    case 299722:
    {
        returnValue = F("Stobenanger");
        break;
    }
    case 299723:
    {
        returnValue = F("Stobenberg");
        break;
    }
    case 299724:
    {
        returnValue = F("Stobenbleek");
        break;
    }
    case 299725:
    {
        returnValue = F("Stobenbrink");
        break;
    }
    case 299726:
    {
        returnValue = F("Stobener Weg");
        break;
    }
    case 299727:
    {
        returnValue = F("Stobenpfuhl");
        break;
    }
    case 299728:
    {
        returnValue = F("Stobenplatz");
        break;
    }
    case 299729:
    {
        returnValue = F("Stobenstr.");
        break;
    }
    case 299730:
    {
        returnValue = F("Stobergweg");
        break;
    }
    case 299731:
    {
        returnValue = F("Stobersreuth");
        break;
    }
    case 299732:
    {
        returnValue = F("Stobkeweg");
        break;
    }
    case 299733:
    {
        returnValue = F("Stobraer Steinbruch");
        break;
    }
    case 299734:
    {
        returnValue = F("Stobraer Str.");
        break;
    }
    case 299735:
    {
        returnValue = F("Stobäusstr.");
        break;
    }
    case 299736:
    {
        returnValue = F("Stock");
        break;
    }
    case 299737:
    {
        returnValue = F("Stock-Car-Weg");
        break;
    }
    case 299738:
    {
        returnValue = F("Stock-Geräumt");
        break;
    }
    case 299739:
    {
        returnValue = F("Stock-Schneise");
        break;
    }
    case 299740:
    {
        returnValue = F("Stocka");
        break;
    }
    case 299741:
    {
        returnValue = F("Stockach");
        break;
    }
    case 299742:
    {
        returnValue = F("Stockacher Str.");
        break;
    }
    case 299743:
    {
        returnValue = F("Stockacher Weg");
        break;
    }
    case 299744:
    {
        returnValue = F("Stockacher-Weg");
        break;
    }
    case 299745:
    {
        returnValue = F("Stockachstr.");
        break;
    }
    case 299746:
    {
        returnValue = F("Stockachweg");
        break;
    }
    case 299747:
    {
        returnValue = F("Stockacker");
        break;
    }
    case 299748:
    {
        returnValue = F("Stockackersiedlung");
        break;
    }
    case 299749:
    {
        returnValue = F("Stockackerstr.");
        break;
    }
    case 299750:
    {
        returnValue = F("Stockackersträsschen");
        break;
    }
    case 299751:
    {
        returnValue = F("Stockackerweg");
        break;
    }
    case 299752:
    {
        returnValue = F("Stockamühle");
        break;
    }
    case 299753:
    {
        returnValue = F("Stockanger");
        break;
    }
    case 299754:
    {
        returnValue = F("Stockarn");
        break;
    }
    case 299755:
    {
        returnValue = F("Stockartsbühl");
        break;
    }
    case 299756:
    {
        returnValue = F("Stockau");
        break;
    }
    case 299757:
    {
        returnValue = F("Stockauer Weg");
        break;
    }
    case 299758:
    {
        returnValue = F("Stockauschneise");
        break;
    }
    case 299759:
    {
        returnValue = F("Stockaustr.");
        break;
    }
    case 299760:
    {
        returnValue = F("Stockauweg");
        break;
    }
    case 299761:
    {
        returnValue = F("Stockbachstr.");
        break;
    }
    case 299762:
    {
        returnValue = F("Stockbauersteig");
        break;
    }
    case 299763:
    {
        returnValue = F("Stockbaurer Weg");
        break;
    }
    case 299764:
    {
        returnValue = F("Stockberg");
        break;
    }
    case 299765:
    {
        returnValue = F("Stockbergergasse");
        break;
    }
    case 299766:
    {
        returnValue = F("Stockbergstr.");
        break;
    }
    case 299767:
    {
        returnValue = F("Stockbergweg");
        break;
    }
    case 299768:
    {
        returnValue = F("Stockborn");
        break;
    }
    case 299769:
    {
        returnValue = F("Stockborner Str.");
        break;
    }
    case 299770:
    {
        returnValue = F("Stockbornerhof");
        break;
    }
    case 299771:
    {
        returnValue = F("Stockbornstr.");
        break;
    }
    case 299772:
    {
        returnValue = F("Stockbornsweg");
        break;
    }
    case 299773:
    {
        returnValue = F("Stockbreede");
        break;
    }
    case 299774:
    {
        returnValue = F("Stockbreite");
        break;
    }
    case 299775:
    {
        returnValue = F("Stockbrunnenbodenweg");
        break;
    }
    case 299776:
    {
        returnValue = F("Stockbrunnengasse");
        break;
    }
    case 299777:
    {
        returnValue = F("Stockbrunnenstr.");
        break;
    }
    case 299778:
    {
        returnValue = F("Stockbrunnenweg");
        break;
    }
    case 299779:
    {
        returnValue = F("Stockbrückstr.");
        break;
    }
    case 299780:
    {
        returnValue = F("Stockdorfer Str.");
        break;
    }
    case 299781:
    {
        returnValue = F("Stockdorfer Weg");
        break;
    }
    case 299782:
    {
        returnValue = F("Stockebeneweg");
        break;
    }
    case 299783:
    {
        returnValue = F("Stockelmannstr.");
        break;
    }
    case 299784:
    {
        returnValue = F("Stockelsdorfer Weg");
        break;
    }
    case 299785:
    {
        returnValue = F("Stockelweg");
        break;
    }
    case 299786:
    {
        returnValue = F("Stockemer Str.");
        break;
    }
    case 299787:
    {
        returnValue = F("Stockemsgasse");
        break;
    }
    case 299788:
    {
        returnValue = F("Stockemsweg");
        break;
    }
    case 299789:
    {
        returnValue = F("Stockenberg");
        break;
    }
    case 299790:
    {
        returnValue = F("Stockenbergweg");
        break;
    }
    case 299791:
    {
        returnValue = F("Stockenbleekstr.");
        break;
    }
    case 299792:
    {
        returnValue = F("Stockenbreite");
        break;
    }
    case 299793:
    {
        returnValue = F("Stockenbühl");
        break;
    }
    case 299794:
    {
        returnValue = F("Stockenend");
        break;
    }
    case 299795:
    {
        returnValue = F("Stockener Weg");
        break;
    }
    case 299796:
    {
        returnValue = F("Stockengartenstr.");
        break;
    }
    case 299797:
    {
        returnValue = F("Stockenkamp");
        break;
    }
    case 299798:
    {
        returnValue = F("Stockenrainweg");
        break;
    }
    case 299799:
    {
        returnValue = F("Stockenroth");
        break;
    }
    case 299800:
    {
        returnValue = F("Stockenroth-Germersreuth");
        break;
    }
    case 299801:
    {
        returnValue = F("Stockenstieg");
        break;
    }
    case 299802:
    {
        returnValue = F("Stockenstr.");
        break;
    }
    case 299803:
    {
        returnValue = F("Stockentenweg");
        break;
    }
    case 299804:
    {
        returnValue = F("Stockenweg");
        break;
    }
    case 299805:
    {
        returnValue = F("Stockenweiler");
        break;
    }
    case 299806:
    {
        returnValue = F("Stockepohl");
        break;
    }
    case 299807:
    {
        returnValue = F("Stockeracker");
        break;
    }
    case 299808:
    {
        returnValue = F("Stockeraustr.");
        break;
    }
    case 299809:
    {
        returnValue = F("Stockerbachstr.");
        break;
    }
    case 299810:
    {
        returnValue = F("Stockerbachweg");
        break;
    }
    case 299811:
    {
        returnValue = F("Stockerbichl");
        break;
    }
    case 299812:
    {
        returnValue = F("Stockerfeld");
        break;
    }
    case 299813:
    {
        returnValue = F("Stockergarten");
        break;
    }
    case 299814:
    {
        returnValue = F("Stockernen");
        break;
    }
    case 299815:
    {
        returnValue = F("Stockerpointstr.");
        break;
    }
    case 299816:
    {
        returnValue = F("Stockers");
        break;
    }
    case 299817:
    {
        returnValue = F("Stockert");
        break;
    }
    case 299818:
    {
        returnValue = F("Stockertblick");
        break;
    }
    case 299819:
    {
        returnValue = F("Stockertstr.");
        break;
    }
    case 299820:
    {
        returnValue = F("Stockertweg");
        break;
    }
    case 299821:
    {
        returnValue = F("Stockerweg");
        break;
    }
    case 299822:
    {
        returnValue = F("Stocket");
        break;
    }
    case 299823:
    {
        returnValue = F("Stocketfeld");
        break;
    }
    case 299824:
    {
        returnValue = F("Stockethof");
        break;
    }
    case 299825:
    {
        returnValue = F("Stocketstr.");
        break;
    }
    case 299826:
    {
        returnValue = F("Stocketweg");
        break;
    }
    case 299827:
    {
        returnValue = F("Stockfeld");
        break;
    }
    case 299828:
    {
        returnValue = F("Stockfelder Str.");
        break;
    }
    case 299829:
    {
        returnValue = F("Stockfeldgasse");
        break;
    }
    case 299830:
    {
        returnValue = F("Stockfeldstr.");
        break;
    }
    case 299831:
    {
        returnValue = F("Stockflethstr.");
        break;
    }
    case 299832:
    {
        returnValue = F("Stockgarten");
        break;
    }
    case 299833:
    {
        returnValue = F("Stockgartenstr.");
        break;
    }
    case 299834:
    {
        returnValue = F("Stockgasse");
        break;
    }
    case 299835:
    {
        returnValue = F("Stockgewann");
        break;
    }
    case 299836:
    {
        returnValue = F("Stockgrabenweg");
        break;
    }
    case 299837:
    {
        returnValue = F("Stockhagen");
        break;
    }
    case 299838:
    {
        returnValue = F("Stockhaken");
        break;
    }
    case 299839:
    {
        returnValue = F("Stockhaldenstr.");
        break;
    }
    case 299840:
    {
        returnValue = F("Stockham");
        break;
    }
    case 299841:
    {
        returnValue = F("Stockhanstr.");
        break;
    }
    case 299842:
    {
        returnValue = F("Stockhardt");
        break;
    }
    case 299843:
    {
        returnValue = F("Stockhardtweg");
        break;
    }
    case 299844:
    {
        returnValue = F("Stockhau");
        break;
    }
    case 299845:
    {
        returnValue = F("Stockhaus");
        break;
    }
    case 299846:
    {
        returnValue = F("Stockhausen");
        break;
    }
    case 299847:
    {
        returnValue = F("Stockhausener Str.");
        break;
    }
    case 299848:
    {
        returnValue = F("Stockhausener Weg");
        break;
    }
    case 299849:
    {
        returnValue = F("Stockhausenstr.");
        break;
    }
    case 299850:
    {
        returnValue = F("Stockhauser Str.");
        break;
    }
    case 299851:
    {
        returnValue = F("Stockhausgasse");
        break;
    }
    case 299852:
    {
        returnValue = F("Stockhausstr.");
        break;
    }
    case 299853:
    {
        returnValue = F("Stockhausträßle");
        break;
    }
    case 299854:
    {
        returnValue = F("Stockhausweg");
        break;
    }
    case 299855:
    {
        returnValue = F("Stockhauweg");
        break;
    }
    case 299856:
    {
        returnValue = F("Stockheim");
        break;
    }
    case 299857:
    {
        returnValue = F("Stockheimer Bruch");
        break;
    }
    case 299858:
    {
        returnValue = F("Stockheimer Grenzweg");
        break;
    }
    case 299859:
    {
        returnValue = F("Stockheimer Hohl");
        break;
    }
    case 299860:
    {
        returnValue = F("Stockheimer Landstr.");
        break;
    }
    case 299861:
    {
        returnValue = F("Stockheimer Landwehr");
        break;
    }
    case 299862:
    {
        returnValue = F("Stockheimer Seite");
        break;
    }
    case 299863:
    {
        returnValue = F("Stockheimer Steige");
        break;
    }
    case 299864:
    {
        returnValue = F("Stockheimer Str.");
        break;
    }
    case 299865:
    {
        returnValue = F("Stockheimer Weg");
        break;
    }
    case 299866:
    {
        returnValue = F("Stockheimstr.");
        break;
    }
    case 299867:
    {
        returnValue = F("Stockhof");
        break;
    }
    case 299868:
    {
        returnValue = F("Stockhofer Str.");
        break;
    }
    case 299869:
    {
        returnValue = F("Stockhofweg");
        break;
    }
    case 299870:
    {
        returnValue = F("Stockholmer Allee");
        break;
    }
    case 299871:
    {
        returnValue = F("Stockholmer Str.");
        break;
    }
    case 299872:
    {
        returnValue = F("Stockholmer Weg");
        break;
    }
    case 299873:
    {
        returnValue = F("Stockholmstr.");
        break;
    }
    case 299874:
    {
        returnValue = F("Stockholmweg");
        break;
    }
    case 299875:
    {
        returnValue = F("Stockhover Weg");
        break;
    }
    case 299876:
    {
        returnValue = F("Stockhude");
        break;
    }
    case 299877:
    {
        returnValue = F("Stockhäuleweg");
        break;
    }
    case 299878:
    {
        returnValue = F("Stockhäuser Hof");
        break;
    }
    case 299879:
    {
        returnValue = F("Stockhäuser Str.");
        break;
    }
    case 299880:
    {
        returnValue = F("Stockhäuser Weg");
        break;
    }
    case 299881:
    {
        returnValue = F("Stockigweg");
        break;
    }
    case 299882:
    {
        returnValue = F("Stocking");
        break;
    }
    case 299883:
    {
        returnValue = F("Stockingerstr.");
        break;
    }
    case 299884:
    {
        returnValue = F("Stockkamp");
        break;
    }
    case 299885:
    {
        returnValue = F("Stockkämper Str.");
        break;
    }
    case 299886:
    {
        returnValue = F("Stocklache Schneise");
        break;
    }
    case 299887:
    {
        returnValue = F("Stockland");
        break;
    }
    case 299888:
    {
        returnValue = F("Stocklarner Str.");
        break;
    }
    case 299889:
    {
        returnValue = F("Stocklegger");
        break;
    }
    case 299890:
    {
        returnValue = F("Stockloher Str.");
        break;
    }
    case 299891:
    {
        returnValue = F("Stockläger");
        break;
    }
    case 299892:
    {
        returnValue = F("Stockmahdweg");
        break;
    }
    case 299893:
    {
        returnValue = F("Stockmann");
        break;
    }
    case 299894:
    {
        returnValue = F("Stockmanns Kamp");
        break;
    }
    case 299895:
    {
        returnValue = F("Stockmannsweg");
        break;
    }
    case 299896:
    {
        returnValue = F("Stockmatt");
        break;
    }
    case 299897:
    {
        returnValue = F("Stockmattenweg");
        break;
    }
    case 299898:
    {
        returnValue = F("Stockmatter Landstr.");
        break;
    }
    case 299899:
    {
        returnValue = F("Stockmatterkopfweg");
        break;
    }
    case 299900:
    {
        returnValue = F("Stockmatterschlagweg");
        break;
    }
    case 299901:
    {
        returnValue = F("Stockmattleweg");
        break;
    }
    case 299902:
    {
        returnValue = F("Stockmattweg");
        break;
    }
    case 299903:
    {
        returnValue = F("Stockmeierweg");
        break;
    }
    case 299904:
    {
        returnValue = F("Stockmoor");
        break;
    }
    case 299905:
    {
        returnValue = F("Stockmühle");
        break;
    }
    case 299906:
    {
        returnValue = F("Stocknöllstr.");
        break;
    }
    case 299907:
    {
        returnValue = F("Stockplatzweg");
        break;
    }
    case 299908:
    {
        returnValue = F("Stockrauhweg");
        break;
    }
    case 299909:
    {
        returnValue = F("Stockrehm");
        break;
    }
    case 299910:
    {
        returnValue = F("Stockreute");
        break;
    }
    case 299911:
    {
        returnValue = F("Stockreuteweg");
        break;
    }
    case 299912:
    {
        returnValue = F("Stockrosenweg");
        break;
    }
    case 299913:
    {
        returnValue = F("Stockruhstr.");
        break;
    }
    case 299914:
    {
        returnValue = F("Stockrütteköpfle");
        break;
    }
    case 299915:
    {
        returnValue = F("Stockrütteweg");
        break;
    }
    case 299916:
    {
        returnValue = F("Stocksberger Str.");
        break;
    }
    case 299917:
    {
        returnValue = F("Stocksberger Weg");
        break;
    }
    case 299918:
    {
        returnValue = F("Stocksbusch");
        break;
    }
    case 299919:
    {
        returnValue = F("Stockschließergang");
        break;
    }
    case 299920:
    {
        returnValue = F("Stockschneise");
        break;
    }
    case 299921:
    {
        returnValue = F("Stocksdorf");
        break;
    }
    case 299922:
    {
        returnValue = F("Stockseer Str.");
        break;
    }
    case 299923:
    {
        returnValue = F("Stockseestr.");
        break;
    }
    case 299924:
    {
        returnValue = F("Stockseeweg");
        break;
    }
    case 299925:
    {
        returnValue = F("Stocksgasse");
        break;
    }
    case 299926:
    {
        returnValue = F("Stockshausstr.");
        break;
    }
    case 299927:
    {
        returnValue = F("Stockshof");
        break;
    }
    case 299928:
    {
        returnValue = F("Stockshöher Weg");
        break;
    }
    case 299929:
    {
        returnValue = F("Stocksrieder Weg");
        break;
    }
    case 299930:
    {
        returnValue = F("Stockstadter Str.");
        break;
    }
    case 299931:
    {
        returnValue = F("Stockstieg");
        break;
    }
    case 299932:
    {
        returnValue = F("Stockstr.");
        break;
    }
    case 299933:
    {
        returnValue = F("Stockstädter Eckschneise");
        break;
    }
    case 299934:
    {
        returnValue = F("Stockstädter Str.");
        break;
    }
    case 299935:
    {
        returnValue = F("Stockstädter Weg");
        break;
    }
    case 299936:
    {
        returnValue = F("Stocksweg");
        break;
    }
    case 299937:
    {
        returnValue = F("Stockswiesen");
        break;
    }
    case 299938:
    {
        returnValue = F("Stocksäckerstr.");
        break;
    }
    case 299939:
    {
        returnValue = F("Stockteil-Wickenholz");
        break;
    }
    case 299940:
    {
        returnValue = F("Stockum");
        break;
    }
    case 299941:
    {
        returnValue = F("Stockumer Damm");
        break;
    }
    case 299942:
    {
        returnValue = F("Stockumer Dorfstr.");
        break;
    }
    case 299943:
    {
        returnValue = F("Stockumer Eichen");
        break;
    }
    case 299944:
    {
        returnValue = F("Stockumer Hellweg");
        break;
    }
    case 299945:
    {
        returnValue = F("Stockumer Weg");
        break;
    }
    case 299946:
    {
        returnValue = F("Stockumer Wiese");
        break;
    }
    case 299947:
    {
        returnValue = F("Stockumweg");
        break;
    }
    case 299948:
    {
        returnValue = F("Stockwaldstr.");
        break;
    }
    case 299949:
    {
        returnValue = F("Stockwaldtalweg");
        break;
    }
    case 299950:
    {
        returnValue = F("Stockwasen");
        break;
    }
    case 299951:
    {
        returnValue = F("Stockweg");
        break;
    }
    case 299952:
    {
        returnValue = F("Stockweg-Schneise");
        break;
    }
    case 299953:
    {
        returnValue = F("Stockweger Weg");
        break;
    }
    case 299954:
    {
        returnValue = F("Stockweiherweg");
        break;
    }
    case 299955:
    {
        returnValue = F("Stockwiese");
        break;
    }
    case 299956:
    {
        returnValue = F("Stockwiesen");
        break;
    }
    case 299957:
    {
        returnValue = F("Stockwiesenstr.");
        break;
    }
    case 299958:
    {
        returnValue = F("Stockwiesenweg");
        break;
    }
    case 299959:
    {
        returnValue = F("Stockwieser Damm");
        break;
    }
    case 299960:
    {
        returnValue = F("Stockwieser Kamp");
        break;
    }
    case 299961:
    {
        returnValue = F("Stockwiesstr.");
        break;
    }
    case 299962:
    {
        returnValue = F("Stockworth");
        break;
    }
    case 299963:
    {
        returnValue = F("Stockwäldchen");
        break;
    }
    case 299964:
    {
        returnValue = F("Stockäcker");
        break;
    }
    case 299965:
    {
        returnValue = F("Stockäcker Str.");
        break;
    }
    case 299966:
    {
        returnValue = F("Stockäcker Weg");
        break;
    }
    case 299967:
    {
        returnValue = F("Stockäckerstr.");
        break;
    }
    case 299968:
    {
        returnValue = F("Stockäckerweg");
        break;
    }
    case 299969:
    {
        returnValue = F("Stockänger");
        break;
    }
    case 299970:
    {
        returnValue = F("Stodiekring");
        break;
    }
    case 299971:
    {
        returnValue = F("Stoertebekerstr.");
        break;
    }
    case 299972:
    {
        returnValue = F("Stoetzer Str.");
        break;
    }
    case 299973:
    {
        returnValue = F("Stoevernstr.");
        break;
    }
    case 299974:
    {
        returnValue = F("Stoevesandtstr.");
        break;
    }
    case 299975:
    {
        returnValue = F("Stoewerstr.");
        break;
    }
    case 299976:
    {
        returnValue = F("Stoffdruckerweg");
        break;
    }
    case 299977:
    {
        returnValue = F("Stoffelbergweg");
        break;
    }
    case 299978:
    {
        returnValue = F("Stoffelhofweg");
        break;
    }
    case 299979:
    {
        returnValue = F("Stoffels Wiese");
        break;
    }
    case 299980:
    {
        returnValue = F("Stoffelsgäßchen");
        break;
    }
    case 299981:
    {
        returnValue = F("Stoffelskohlsträßle");
        break;
    }
    case 299982:
    {
        returnValue = F("Stoffelsweg");
        break;
    }
    case 299983:
    {
        returnValue = F("Stoffelswiesenweg");
        break;
    }
    case 299984:
    {
        returnValue = F("Stoffener Str.");
        break;
    }
    case 299985:
    {
        returnValue = F("Stoffenrieder Str.");
        break;
    }
    case 299986:
    {
        returnValue = F("Stoffers Moor");
        break;
    }
    case 299987:
    {
        returnValue = F("Stofferskamp");
        break;
    }
    case 299988:
    {
        returnValue = F("Stofflerweg");
        break;
    }
    case 299989:
    {
        returnValue = F("Stoffsee");
        break;
    }
    case 299990:
    {
        returnValue = F("Stohler Damm");
        break;
    }
    case 299991:
    {
        returnValue = F("Stohler Landstr.");
        break;
    }
    case 299992:
    {
        returnValue = F("Stohlmanns Heide");
        break;
    }
    case 299993:
    {
        returnValue = F("Stohr");
        break;
    }
    case 299994:
    {
        returnValue = F("Stohrenhof");
        break;
    }
    case 299995:
    {
        returnValue = F("Stohrenweg");
        break;
    }
    case 299996:
    {
        returnValue = F("Stohrerstr.");
        break;
    }
    case 299997:
    {
        returnValue = F("Stoißbergstr.");
        break;
    }
    case 299998:
    {
        returnValue = F("Stoken");
        break;
    }
    case 299999:
    {
        returnValue = F("Stokingerweg");
        break;
    }
    case 300000:
    {
        returnValue = F("Stokmanstr.");
        break;
    }
    case 300001:
    {
        returnValue = F("Stolberg");
        break;
    }
    case 300002:
    {
        returnValue = F("Stolberg Thyratal");
        break;
    }
    case 300003:
    {
        returnValue = F("Stolberger Höhe");
        break;
    }
    case 300004:
    {
        returnValue = F("Stolberger Stieg");
        break;
    }
    case 300005:
    {
        returnValue = F("Stolberger Str.");
        break;
    }
    case 300006:
    {
        returnValue = F("Stolberger Weg");
        break;
    }
    case 300007:
    {
        returnValue = F("Stolbergring");
        break;
    }
    case 300008:
    {
        returnValue = F("Stolbergstr.");
        break;
    }
    case 300009:
    {
        returnValue = F("Stoliner Str.");
        break;
    }
    case 300010:
    {
        returnValue = F("Stolker Str.");
        break;
    }
    case 300011:
    {
        returnValue = F("Stolkerfelder Str.");
        break;
    }
    case 300012:
    {
        returnValue = F("Stolkerhecker Weg");
        break;
    }
    case 300013:
    {
        returnValue = F("Stollberg");
        break;
    }
    case 300014:
    {
        returnValue = F("Stollberger Str.");
        break;
    }
    case 300015:
    {
        returnValue = F("Stollbrockring");
        break;
    }
    case 300016:
    {
        returnValue = F("Stollebergstr.");
        break;
    }
    case 300017:
    {
        returnValue = F("Stollegasse");
        break;
    }
    case 300018:
    {
        returnValue = F("Stollen");
        break;
    }
    case 300019:
    {
        returnValue = F("Stollen-Weg");
        break;
    }
    case 300020:
    {
        returnValue = F("Stollenbachweg");
        break;
    }
    case 300021:
    {
        returnValue = F("Stollenberg");
        break;
    }
    case 300022:
    {
        returnValue = F("Stollenbergweg");
        break;
    }
    case 300023:
    {
        returnValue = F("Stollenbreite");
        break;
    }
    case 300024:
    {
        returnValue = F("Stollenbuck");
        break;
    }
    case 300025:
    {
        returnValue = F("Stollenbühlweg");
        break;
    }
    case 300026:
    {
        returnValue = F("Stollengasse");
        break;
    }
    case 300027:
    {
        returnValue = F("Stollengrund");
        break;
    }
    case 300028:
    {
        returnValue = F("Stollengrundweg");
        break;
    }
    case 300029:
    {
        returnValue = F("Stollengäßle");
        break;
    }
    }
    return returnValue;
}
