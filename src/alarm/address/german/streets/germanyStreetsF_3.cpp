#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameF3(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 110011:
    {
        returnValue = F("Fährenstr.");
        break;
    }
    case 110012:
    {
        returnValue = F("Fährenweg");
        break;
    }
    case 110013:
    {
        returnValue = F("Fährer Flur");
        break;
    }
    case 110014:
    {
        returnValue = F("Fährer Kämpe");
        break;
    }
    case 110015:
    {
        returnValue = F("Fährer Mittelstr.");
        break;
    }
    case 110016:
    {
        returnValue = F("Fährer Str.");
        break;
    }
    case 110017:
    {
        returnValue = F("Fährergasse");
        break;
    }
    case 110018:
    {
        returnValue = F("Fährerweg");
        break;
    }
    case 110019:
    {
        returnValue = F("Fährestr.");
        break;
    }
    case 110020:
    {
        returnValue = F("Fähreweg");
        break;
    }
    case 110021:
    {
        returnValue = F("Fährgasse");
        break;
    }
    case 110022:
    {
        returnValue = F("Fährgergasse");
        break;
    }
    case 110023:
    {
        returnValue = F("Fährgrund");
        break;
    }
    case 110024:
    {
        returnValue = F("Fährgäßchen");
        break;
    }
    case 110025:
    {
        returnValue = F("Fährhafenstr.");
        break;
    }
    case 110026:
    {
        returnValue = F("Fährhaus");
        break;
    }
    case 110027:
    {
        returnValue = F("Fährhausweg");
        break;
    }
    case 110028:
    {
        returnValue = F("Fährheit");
        break;
    }
    case 110029:
    {
        returnValue = F("Fährhof");
        break;
    }
    case 110030:
    {
        returnValue = F("Fährhufe");
        break;
    }
    case 110031:
    {
        returnValue = F("Fährhusweg");
        break;
    }
    case 110032:
    {
        returnValue = F("Fährhäuser");
        break;
    }
    case 110033:
    {
        returnValue = F("Fährkamp");
        break;
    }
    case 110034:
    {
        returnValue = F("Fährkate");
        break;
    }
    case 110035:
    {
        returnValue = F("Fährkrug");
        break;
    }
    case 110036:
    {
        returnValue = F("Fährmann-Clemens-Str.");
        break;
    }
    case 110037:
    {
        returnValue = F("Fährmannsspoor");
        break;
    }
    case 110038:
    {
        returnValue = F("Fährmannstr.");
        break;
    }
    case 110039:
    {
        returnValue = F("Fährmannsweg");
        break;
    }
    case 110040:
    {
        returnValue = F("Fährmannweg");
        break;
    }
    case 110041:
    {
        returnValue = F("Fährpad");
        break;
    }
    case 110042:
    {
        returnValue = F("Fährpatt");
        break;
    }
    case 110043:
    {
        returnValue = F("Fährplate");
        break;
    }
    case 110044:
    {
        returnValue = F("Fährplatz");
        break;
    }
    case 110045:
    {
        returnValue = F("Fährsteg");
        break;
    }
    case 110046:
    {
        returnValue = F("Fährsteig");
        break;
    }
    case 110047:
    {
        returnValue = F("Fährstieg");
        break;
    }
    case 110048:
    {
        returnValue = F("Fährstr.");
        break;
    }
    case 110049:
    {
        returnValue = F("Fährtreppe");
        break;
    }
    case 110050:
    {
        returnValue = F("Fährtwegl");
        break;
    }
    case 110051:
    {
        returnValue = F("Fährtwiesenstr.");
        break;
    }
    case 110052:
    {
        returnValue = F("Fährwall");
        break;
    }
    case 110053:
    {
        returnValue = F("Fährweg");
        break;
    }
    case 110054:
    {
        returnValue = F("Fährwiesenstr.");
        break;
    }
    case 110055:
    {
        returnValue = F("Fährwinkel");
        break;
    }
    case 110056:
    {
        returnValue = F("Fährwisch");
        break;
    }
    case 110057:
    {
        returnValue = F("Fährzufahrt");
        break;
    }
    case 110058:
    {
        returnValue = F("Fällbacher Str.");
        break;
    }
    case 110059:
    {
        returnValue = F("Fällbachweg");
        break;
    }
    case 110060:
    {
        returnValue = F("Fällerbachstr.");
        break;
    }
    case 110061:
    {
        returnValue = F("Fällerwasser");
        break;
    }
    case 110062:
    {
        returnValue = F("Fällesweg");
        break;
    }
    case 110063:
    {
        returnValue = F("Fällhofstr.");
        break;
    }
    case 110064:
    {
        returnValue = F("Fällriegelweg");
        break;
    }
    case 110065:
    {
        returnValue = F("Fällstr.");
        break;
    }
    case 110066:
    {
        returnValue = F("Fängenbuschweg");
        break;
    }
    case 110067:
    {
        returnValue = F("Fängershofstr.");
        break;
    }
    case 110068:
    {
        returnValue = F("Fängerskamp");
        break;
    }
    case 110069:
    {
        returnValue = F("Fängerweg");
        break;
    }
    case 110070:
    {
        returnValue = F("Fänkenstr.");
        break;
    }
    case 110071:
    {
        returnValue = F("Fännes Sklede");
        break;
    }
    case 110072:
    {
        returnValue = F("Fännkering");
        break;
    }
    case 110073:
    {
        returnValue = F("Färber");
        break;
    }
    case 110074:
    {
        returnValue = F("Färber-Str.");
        break;
    }
    case 110075:
    {
        returnValue = F("Färberanger");
        break;
    }
    case 110076:
    {
        returnValue = F("Färberbachstr.");
        break;
    }
    case 110077:
    {
        returnValue = F("Färberbachweg");
        break;
    }
    case 110078:
    {
        returnValue = F("Färberberg");
        break;
    }
    case 110079:
    {
        returnValue = F("Färberbrücke");
        break;
    }
    case 110080:
    {
        returnValue = F("Färberbrühl");
        break;
    }
    case 110081:
    {
        returnValue = F("Färberbäckergasse");
        break;
    }
    case 110082:
    {
        returnValue = F("Färberei");
        break;
    }
    case 110083:
    {
        returnValue = F("Färbereistr.");
        break;
    }
    case 110084:
    {
        returnValue = F("Färbergang");
        break;
    }
    case 110085:
    {
        returnValue = F("Färbergangl");
        break;
    }
    case 110086:
    {
        returnValue = F("Färbergasse");
        break;
    }
    case 110087:
    {
        returnValue = F("Färbergaßl");
        break;
    }
    case 110088:
    {
        returnValue = F("Färbergraben");
        break;
    }
    case 110089:
    {
        returnValue = F("Färbergrabenweg");
        break;
    }
    case 110090:
    {
        returnValue = F("Färbergässel");
        break;
    }
    case 110091:
    {
        returnValue = F("Färbergässle");
        break;
    }
    case 110092:
    {
        returnValue = F("Färbergäßchen");
        break;
    }
    case 110093:
    {
        returnValue = F("Färbergäßle");
        break;
    }
    case 110094:
    {
        returnValue = F("Färberplatz");
        break;
    }
    case 110095:
    {
        returnValue = F("Färberring");
        break;
    }
    case 110096:
    {
        returnValue = F("Färbers Damm");
        break;
    }
    case 110097:
    {
        returnValue = F("Färbersecke");
        break;
    }
    case 110098:
    {
        returnValue = F("Färbersgässla");
        break;
    }
    case 110099:
    {
        returnValue = F("Färberskamp");
        break;
    }
    case 110100:
    {
        returnValue = F("Färbersteige");
        break;
    }
    case 110101:
    {
        returnValue = F("Färberstr.");
        break;
    }
    case 110102:
    {
        returnValue = F("Färbertor");
        break;
    }
    case 110103:
    {
        returnValue = F("Färbertorstr.");
        break;
    }
    case 110104:
    {
        returnValue = F("Färbertörlesweg");
        break;
    }
    case 110105:
    {
        returnValue = F("Färberwaidweg");
        break;
    }
    case 110106:
    {
        returnValue = F("Färberweg");
        break;
    }
    case 110107:
    {
        returnValue = F("Färberwinkl");
        break;
    }
    case 110108:
    {
        returnValue = F("Färberzwinger");
        break;
    }
    case 110109:
    {
        returnValue = F("Färbeweg");
        break;
    }
    case 110110:
    {
        returnValue = F("Färbgasse");
        break;
    }
    case 110111:
    {
        returnValue = F("Färbig");
        break;
    }
    case 110112:
    {
        returnValue = F("Färchergäßchen");
        break;
    }
    case 110113:
    {
        returnValue = F("Färenbruch");
        break;
    }
    case 110114:
    {
        returnValue = F("Färöerstr.");
        break;
    }
    case 110115:
    {
        returnValue = F("Fäsekow");
        break;
    }
    case 110116:
    {
        returnValue = F("Fässertalstr.");
        break;
    }
    case 110117:
    {
        returnValue = F("Fäulenweg");
        break;
    }
    case 110118:
    {
        returnValue = F("Fäulingstr.");
        break;
    }
    case 110119:
    {
        returnValue = F("Fäustelstr.");
        break;
    }
    case 110120:
    {
        returnValue = F("Fäustheck");
        break;
    }
    case 110121:
    {
        returnValue = F("Fäustlestr.");
        break;
    }
    case 110122:
    {
        returnValue = F("Fäutlingsgasse");
        break;
    }
    case 110123:
    {
        returnValue = F("Fääne");
        break;
    }
    case 110124:
    {
        returnValue = F("Fère-Champenoise-Str.");
        break;
    }
    case 110125:
    {
        returnValue = F("Féauxweg");
        break;
    }
    case 110126:
    {
        returnValue = F("Fécampring");
        break;
    }
    case 110127:
    {
        returnValue = F("Föchinger Str.");
        break;
    }
    case 110128:
    {
        returnValue = F("Föckerskamp");
        break;
    }
    case 110129:
    {
        returnValue = F("Föckinghausen");
        break;
    }
    case 110130:
    {
        returnValue = F("Föckinghauser Weg");
        break;
    }
    case 110131:
    {
        returnValue = F("Föggenbeuern");
        break;
    }
    case 110132:
    {
        returnValue = F("Föhbergstr.");
        break;
    }
    case 110133:
    {
        returnValue = F("Föhenring");
        break;
    }
    case 110134:
    {
        returnValue = F("Föhle");
        break;
    }
    case 110135:
    {
        returnValue = F("Föhlergasse");
        break;
    }
    case 110136:
    {
        returnValue = F("Föhlischstr.");
        break;
    }
    case 110137:
    {
        returnValue = F("Föhlritz");
        break;
    }
    case 110138:
    {
        returnValue = F("Föhlschmitten");
        break;
    }
    case 110139:
    {
        returnValue = F("Föhnstr.");
        break;
    }
    case 110140:
    {
        returnValue = F("Föhnweg");
        break;
    }
    case 110141:
    {
        returnValue = F("Föhrberg");
        break;
    }
    case 110142:
    {
        returnValue = F("Föhrbergstr.");
        break;
    }
    case 110143:
    {
        returnValue = F("Föhrbockstr.");
        break;
    }
    case 110144:
    {
        returnValue = F("Föhrbrunnenweg");
        break;
    }
    case 110145:
    {
        returnValue = F("Föhrdener Str.");
        break;
    }
    case 110146:
    {
        returnValue = F("Föhre");
        break;
    }
    case 110147:
    {
        returnValue = F("Föhren");
        break;
    }
    case 110148:
    {
        returnValue = F("Föhrenbacheck");
        break;
    }
    case 110149:
    {
        returnValue = F("Föhrenbacher Rain");
        break;
    }
    case 110150:
    {
        returnValue = F("Föhrenbachstr.");
        break;
    }
    case 110151:
    {
        returnValue = F("Föhrenbachstrasse");
        break;
    }
    case 110152:
    {
        returnValue = F("Föhrenberg");
        break;
    }
    case 110153:
    {
        returnValue = F("Föhrenberggasse");
        break;
    }
    case 110154:
    {
        returnValue = F("Föhrenbergstr.");
        break;
    }
    case 110155:
    {
        returnValue = F("Föhrenbergweg");
        break;
    }
    case 110156:
    {
        returnValue = F("Föhrenblick");
        break;
    }
    case 110157:
    {
        returnValue = F("Föhrenbrink");
        break;
    }
    case 110158:
    {
        returnValue = F("Föhrenbächle");
        break;
    }
    case 110159:
    {
        returnValue = F("Föhrenbühl");
        break;
    }
    case 110160:
    {
        returnValue = F("Föhrenbühlweg");
        break;
    }
    case 110161:
    {
        returnValue = F("Föhrendamm");
        break;
    }
    case 110162:
    {
        returnValue = F("Föhreneck");
        break;
    }
    case 110163:
    {
        returnValue = F("Föhrengrund");
        break;
    }
    case 110164:
    {
        returnValue = F("Föhrenhalde");
        break;
    }
    case 110165:
    {
        returnValue = F("Föhrenhang");
        break;
    }
    case 110166:
    {
        returnValue = F("Föhrenheide");
        break;
    }
    case 110167:
    {
        returnValue = F("Föhrenhof");
        break;
    }
    case 110168:
    {
        returnValue = F("Föhrenholt");
        break;
    }
    case 110169:
    {
        returnValue = F("Föhrenholz");
        break;
    }
    case 110170:
    {
        returnValue = F("Föhrenhorst");
        break;
    }
    case 110171:
    {
        returnValue = F("Föhrenhöfchen");
        break;
    }
    case 110172:
    {
        returnValue = F("Föhrenhölzle");
        break;
    }
    case 110173:
    {
        returnValue = F("Föhrenkamp");
        break;
    }
    case 110174:
    {
        returnValue = F("Föhrenkegel");
        break;
    }
    case 110175:
    {
        returnValue = F("Föhrenkoppel");
        break;
    }
    case 110176:
    {
        returnValue = F("Föhrenplatz");
        break;
    }
    case 110177:
    {
        returnValue = F("Föhrenreuth");
        break;
    }
    case 110178:
    {
        returnValue = F("Föhrenring");
        break;
    }
    case 110179:
    {
        returnValue = F("Föhrenschachenweg");
        break;
    }
    case 110180:
    {
        returnValue = F("Föhrenschlucht");
        break;
    }
    case 110181:
    {
        returnValue = F("Föhrenskamp");
        break;
    }
    case 110182:
    {
        returnValue = F("Föhrenstieg");
        break;
    }
    case 110183:
    {
        returnValue = F("Föhrenstr.");
        break;
    }
    case 110184:
    {
        returnValue = F("Föhrentalerweg");
        break;
    }
    case 110185:
    {
        returnValue = F("Föhrentalstr.");
        break;
    }
    case 110186:
    {
        returnValue = F("Föhrenteich");
        break;
    }
    case 110187:
    {
        returnValue = F("Föhrenwald");
        break;
    }
    case 110188:
    {
        returnValue = F("Föhrenwaldstr.");
        break;
    }
    case 110189:
    {
        returnValue = F("Föhrenweg");
        break;
    }
    case 110190:
    {
        returnValue = F("Föhrenwinkel");
        break;
    }
    case 110191:
    {
        returnValue = F("Föhrer Str.");
        break;
    }
    case 110192:
    {
        returnValue = F("Föhrer Weg");
        break;
    }
    case 110193:
    {
        returnValue = F("Föhrerl");
        break;
    }
    case 110194:
    {
        returnValue = F("Föhribuckweg");
        break;
    }
    case 110195:
    {
        returnValue = F("Föhrig");
        break;
    }
    case 110196:
    {
        returnValue = F("Föhrigstr.");
        break;
    }
    case 110197:
    {
        returnValue = F("Föhringer Allee");
        break;
    }
    case 110198:
    {
        returnValue = F("Föhrkamp");
        break;
    }
    case 110199:
    {
        returnValue = F("Föhrle");
        break;
    }
    case 110200:
    {
        returnValue = F("Föhrlestr.");
        break;
    }
    case 110201:
    {
        returnValue = F("Föhrlesweg");
        break;
    }
    case 110202:
    {
        returnValue = F("Föhrleweg");
        break;
    }
    case 110203:
    {
        returnValue = F("Föhrster Str.");
        break;
    }
    case 110204:
    {
        returnValue = F("Föhrstr.");
        break;
    }
    case 110205:
    {
        returnValue = F("Föhrthofweg");
        break;
    }
    case 110206:
    {
        returnValue = F("Föhrtweg");
        break;
    }
    case 110207:
    {
        returnValue = F("Föhrwaldweg");
        break;
    }
    case 110208:
    {
        returnValue = F("Föhrweg");
        break;
    }
    case 110209:
    {
        returnValue = F("Fölchelstr.");
        break;
    }
    case 110210:
    {
        returnValue = F("Fölkenbacher Str.");
        break;
    }
    case 110211:
    {
        returnValue = F("Föllerweg");
        break;
    }
    case 110212:
    {
        returnValue = F("Föllmarer Weg");
        break;
    }
    case 110213:
    {
        returnValue = F("Föllmarstr.");
        break;
    }
    case 110214:
    {
        returnValue = F("Föllstr.");
        break;
    }
    case 110215:
    {
        returnValue = F("Fölltorstr.");
        break;
    }
    case 110216:
    {
        returnValue = F("Fölschnitz");
        break;
    }
    case 110217:
    {
        returnValue = F("Fölsener Str.");
        break;
    }
    case 110218:
    {
        returnValue = F("Fölsener Weg");
        break;
    }
    case 110219:
    {
        returnValue = F("Fölterstr.");
        break;
    }
    case 110220:
    {
        returnValue = F("Fölzerstr.");
        break;
    }
    case 110221:
    {
        returnValue = F("Förbauer Siedlung");
        break;
    }
    case 110222:
    {
        returnValue = F("Förbeltstr.");
        break;
    }
    case 110223:
    {
        returnValue = F("Förberichstr.");
        break;
    }
    case 110224:
    {
        returnValue = F("Förchenbachweg");
        break;
    }
    case 110225:
    {
        returnValue = F("Förchenholzstr.");
        break;
    }
    case 110226:
    {
        returnValue = F("Förchenwaldstr.");
        break;
    }
    case 110227:
    {
        returnValue = F("Förcher Str.");
        break;
    }
    case 110228:
    {
        returnValue = F("Fördeblick");
        break;
    }
    case 110229:
    {
        returnValue = F("Fördebogen");
        break;
    }
    case 110230:
    {
        returnValue = F("Fördegang");
        break;
    }
    case 110231:
    {
        returnValue = F("Förden");
        break;
    }
    case 110232:
    {
        returnValue = F("Fördepromenade");
        break;
    }
    case 110233:
    {
        returnValue = F("Förder Platz");
        break;
    }
    case 110234:
    {
        returnValue = F("Förder Weg");
        break;
    }
    case 110235:
    {
        returnValue = F("Fördererstr.");
        break;
    }
    case 110236:
    {
        returnValue = F("Förderreutherstr.");
        break;
    }
    case 110237:
    {
        returnValue = F("Förderstedter Str.");
        break;
    }
    case 110238:
    {
        returnValue = F("Förderstedter Weg");
        break;
    }
    case 110239:
    {
        returnValue = F("Förderstr.");
        break;
    }
    case 110240:
    {
        returnValue = F("Förderverein Ballspiel-Anlage Stumpfe Eiche e.V.");
        break;
    }
    case 110241:
    {
        returnValue = F("Förderweg");
        break;
    }
    case 110242:
    {
        returnValue = F("Fördestr.");
        break;
    }
    case 110243:
    {
        returnValue = F("Fördewanderweg");
        break;
    }
    case 110244:
    {
        returnValue = F("Förenkamp");
        break;
    }
    case 110245:
    {
        returnValue = F("Förenweg");
        break;
    }
    case 110246:
    {
        returnValue = F("Förgengasse");
        break;
    }
    case 110247:
    {
        returnValue = F("Förgenthalstr.");
        break;
    }
    case 110248:
    {
        returnValue = F("Förgenweg");
        break;
    }
    case 110249:
    {
        returnValue = F("Förgstr.");
        break;
    }
    case 110250:
    {
        returnValue = F("Förichstr.");
        break;
    }
    case 110251:
    {
        returnValue = F("Föritzer Str.");
        break;
    }
    case 110252:
    {
        returnValue = F("Förkelstr.");
        break;
    }
    case 110253:
    {
        returnValue = F("Förlenbergstr.");
        break;
    }
    case 110254:
    {
        returnValue = F("Förlinger Bruchstr.");
        break;
    }
    case 110255:
    {
        returnValue = F("Förmitz");
        break;
    }
    case 110256:
    {
        returnValue = F("Förn Sandweg");
        break;
    }
    case 110257:
    {
        returnValue = F("Förnbachstr.");
        break;
    }
    case 110258:
    {
        returnValue = F("Förrenbacher Str.");
        break;
    }
    case 110259:
    {
        returnValue = F("Förresbühlstr.");
        break;
    }
    case 110260:
    {
        returnValue = F("Förretweg");
        break;
    }
    case 110261:
    {
        returnValue = F("Förriener Loog");
        break;
    }
    case 110262:
    {
        returnValue = F("Försgrund");
        break;
    }
    case 110263:
    {
        returnValue = F("Förstelblick");
        break;
    }
    case 110264:
    {
        returnValue = F("Försteleckweg");
        break;
    }
    case 110265:
    {
        returnValue = F("Förstelweg");
        break;
    }
    case 110266:
    {
        returnValue = F("Förstemann Park");
        break;
    }
    case 110267:
    {
        returnValue = F("Förstemannstr.");
        break;
    }
    case 110268:
    {
        returnValue = F("Förstemannweg");
        break;
    }
    case 110269:
    {
        returnValue = F("Förstenreuth");
        break;
    }
    case 110270:
    {
        returnValue = F("Förster Köllner Schneise");
        break;
    }
    case 110271:
    {
        returnValue = F("Förster Str.");
        break;
    }
    case 110272:
    {
        returnValue = F("Förster Wagner-Weg");
        break;
    }
    case 110273:
    {
        returnValue = F("Förster Weber-Weg");
        break;
    }
    case 110274:
    {
        returnValue = F("Förster Weg");
        break;
    }
    case 110275:
    {
        returnValue = F("Förster Winkel");
        break;
    }
    case 110276:
    {
        returnValue = F("Förster-Bauer-Weg");
        break;
    }
    case 110277:
    {
        returnValue = F("Förster-Blanke-Str.");
        break;
    }
    case 110278:
    {
        returnValue = F("Förster-Bronn-Weg");
        break;
    }
    case 110279:
    {
        returnValue = F("Förster-Busch-Str.");
        break;
    }
    case 110280:
    {
        returnValue = F("Förster-Clauer-Weg");
        break;
    }
    case 110281:
    {
        returnValue = F("Förster-Frimel-Str.");
        break;
    }
    case 110282:
    {
        returnValue = F("Förster-Funke-Allee");
        break;
    }
    case 110283:
    {
        returnValue = F("Förster-Genzel-Str.");
        break;
    }
    case 110284:
    {
        returnValue = F("Förster-Hans-Streun-Weg");
        break;
    }
    case 110285:
    {
        returnValue = F("Förster-Kramer-Str.");
        break;
    }
    case 110286:
    {
        returnValue = F("Förster-Langheld-Str.");
        break;
    }
    case 110287:
    {
        returnValue = F("Förster-Lotz-Weg");
        break;
    }
    case 110288:
    {
        returnValue = F("Förster-Ludwig-Str.");
        break;
    }
    case 110289:
    {
        returnValue = F("Förster-Lutz-Weg");
        break;
    }
    case 110290:
    {
        returnValue = F("Förster-Otto-Weg");
        break;
    }
    case 110291:
    {
        returnValue = F("Förster-Schmid-Sträßle");
        break;
    }
    case 110292:
    {
        returnValue = F("Förster-Schrödter-Str.");
        break;
    }
    case 110293:
    {
        returnValue = F("Förster-Steffens-Weg");
        break;
    }
    case 110294:
    {
        returnValue = F("Förster-Weber-Weg");
        break;
    }
    case 110295:
    {
        returnValue = F("Förster-Wermers-Weg");
        break;
    }
    case 110296:
    {
        returnValue = F("Förster-Wöpke-Weg");
        break;
    }
    case 110297:
    {
        returnValue = F("Förster-Zeyen-Weg");
        break;
    }
    case 110298:
    {
        returnValue = F("Förster-von-Elten-Stieg");
        break;
    }
    case 110299:
    {
        returnValue = F("Försteracker");
        break;
    }
    case 110300:
    {
        returnValue = F("Försterallee");
        break;
    }
    case 110301:
    {
        returnValue = F("Försterangerlweg");
        break;
    }
    case 110302:
    {
        returnValue = F("Försterbahn");
        break;
    }
    case 110303:
    {
        returnValue = F("Försterbauerweg");
        break;
    }
    case 110304:
    {
        returnValue = F("Försterberg");
        break;
    }
    case 110305:
    {
        returnValue = F("Försterbergstr.");
        break;
    }
    case 110306:
    {
        returnValue = F("Försterbreite");
        break;
    }
    case 110307:
    {
        returnValue = F("Försterbrink");
        break;
    }
    case 110308:
    {
        returnValue = F("Försterbrinkweg");
        break;
    }
    case 110309:
    {
        returnValue = F("Försterbrücke");
        break;
    }
    case 110310:
    {
        returnValue = F("Försterbusch");
        break;
    }
    case 110311:
    {
        returnValue = F("Försterdamm");
        break;
    }
    case 110312:
    {
        returnValue = F("Försterei");
        break;
    }
    case 110313:
    {
        returnValue = F("Försterei Ausbau");
        break;
    }
    case 110314:
    {
        returnValue = F("Försterei Berkholz");
        break;
    }
    case 110315:
    {
        returnValue = F("Försterei Berkholzofen");
        break;
    }
    case 110316:
    {
        returnValue = F("Försterei Braak");
        break;
    }
    case 110317:
    {
        returnValue = F("Försterei Dickdamm");
        break;
    }
    case 110318:
    {
        returnValue = F("Försterei Freidorf");
        break;
    }
    case 110319:
    {
        returnValue = F("Försterei Jacobsee");
        break;
    }
    case 110320:
    {
        returnValue = F("Försterei Kahlenberg");
        break;
    }
    case 110321:
    {
        returnValue = F("Försterei Keune");
        break;
    }
    case 110322:
    {
        returnValue = F("Försterei Klein-Hammer");
        break;
    }
    case 110323:
    {
        returnValue = F("Försterei Neuland");
        break;
    }
    case 110324:
    {
        returnValue = F("Försterei Ragow");
        break;
    }
    case 110325:
    {
        returnValue = F("Försterei Rottstiel");
        break;
    }
    case 110326:
    {
        returnValue = F("Försterei Schierenberg");
        break;
    }
    case 110327:
    {
        returnValue = F("Försterei Schwarzheide");
        break;
    }
    case 110328:
    {
        returnValue = F("Försterei Stendenitz");
        break;
    }
    case 110329:
    {
        returnValue = F("Försterei Wirchensee");
        break;
    }
    case 110330:
    {
        returnValue = F("Förstereieck");
        break;
    }
    case 110331:
    {
        returnValue = F("Förstereisiedlung");
        break;
    }
    case 110332:
    {
        returnValue = F("Förstereistr.");
        break;
    }
    case 110333:
    {
        returnValue = F("Förstereiweg");
        break;
    }
    case 110334:
    {
        returnValue = F("Förstergang");
        break;
    }
    case 110335:
    {
        returnValue = F("Förstergarten");
        break;
    }
    case 110336:
    {
        returnValue = F("Förstergasse");
        break;
    }
    case 110337:
    {
        returnValue = F("Försterhaus");
        break;
    }
    case 110338:
    {
        returnValue = F("Försterhof");
        break;
    }
    case 110339:
    {
        returnValue = F("Försterhofstr.");
        break;
    }
    case 110340:
    {
        returnValue = F("Försterkamp");
        break;
    }
    case 110341:
    {
        returnValue = F("Försterkampweg");
        break;
    }
    case 110342:
    {
        returnValue = F("Försterkoppel");
        break;
    }
    case 110343:
    {
        returnValue = F("Försterlake");
        break;
    }
    case 110344:
    {
        returnValue = F("Försterpfad");
        break;
    }
    case 110345:
    {
        returnValue = F("Försterplatz");
        break;
    }
    case 110346:
    {
        returnValue = F("Försterschneise");
        break;
    }
    case 110347:
    {
        returnValue = F("Förstersgarten");
        break;
    }
    case 110348:
    {
        returnValue = F("Förstersgründchenweg");
        break;
    }
    case 110349:
    {
        returnValue = F("Förstersgäßchen");
        break;
    }
    case 110350:
    {
        returnValue = F("Förstersteg");
        break;
    }
    case 110351:
    {
        returnValue = F("Förstersteig");
        break;
    }
    case 110352:
    {
        returnValue = F("Försterstieg");
        break;
    }
    case 110353:
    {
        returnValue = F("Försterstr.");
        break;
    }
    case 110354:
    {
        returnValue = F("Försterteich");
        break;
    }
    case 110355:
    {
        returnValue = F("Förstertrift");
        break;
    }
    case 110356:
    {
        returnValue = F("Försterweg");
        break;
    }
    case 110357:
    {
        returnValue = F("Försterwiese");
        break;
    }
    case 110358:
    {
        returnValue = F("Försterwiesen");
        break;
    }
    case 110359:
    {
        returnValue = F("Försterwinkel");
        break;
    }
    case 110360:
    {
        returnValue = F("Förstgener Str.");
        break;
    }
    case 110361:
    {
        returnValue = F("Förstkamp");
        break;
    }
    case 110362:
    {
        returnValue = F("Förstles Park");
        break;
    }
    case 110363:
    {
        returnValue = F("Förstlestr.");
        break;
    }
    case 110364:
    {
        returnValue = F("Förthaer Str.");
        break;
    }
    case 110365:
    {
        returnValue = F("Förthaer Weg");
        break;
    }
    case 110366:
    {
        returnValue = F("Förthen");
        break;
    }
    case 110367:
    {
        returnValue = F("Förthfeld");
        break;
    }
    case 110368:
    {
        returnValue = F("Förthofstr.");
        break;
    }
    case 110369:
    {
        returnValue = F("Förtschendorfer Str.");
        break;
    }
    case 110370:
    {
        returnValue = F("Förtschstr.");
        break;
    }
    case 110371:
    {
        returnValue = F("Föscheberg");
        break;
    }
    case 110372:
    {
        returnValue = F("Fössestr.");
        break;
    }
    case 110373:
    {
        returnValue = F("Fösterstieg");
        break;
    }
    case 110374:
    {
        returnValue = F("Fösterweg");
        break;
    }
    case 110375:
    {
        returnValue = F("Fötjem");
        break;
    }
    case 110376:
    {
        returnValue = F("Füchselbrücke");
        break;
    }
    case 110377:
    {
        returnValue = F("Füchslanger");
        break;
    }
    case 110378:
    {
        returnValue = F("Füchsleweg");
        break;
    }
    case 110379:
    {
        returnValue = F("Füchtel");
        break;
    }
    case 110380:
    {
        returnValue = F("Füchteler Damm");
        break;
    }
    case 110381:
    {
        returnValue = F("Füchteler Esch");
        break;
    }
    case 110382:
    {
        returnValue = F("Füchteler Str.");
        break;
    }
    case 110383:
    {
        returnValue = F("Füchtemeierstr.");
        break;
    }
    case 110384:
    {
        returnValue = F("Füchtenbusch");
        break;
    }
    case 110385:
    {
        returnValue = F("Füchtendiek");
        break;
    }
    case 110386:
    {
        returnValue = F("Füchtener Str.");
        break;
    }
    case 110387:
    {
        returnValue = F("Füchtenfelder Str.");
        break;
    }
    case 110388:
    {
        returnValue = F("Füchtenkamp");
        break;
    }
    case 110389:
    {
        returnValue = F("Füchtenknäppe");
        break;
    }
    case 110390:
    {
        returnValue = F("Füchtenweg");
        break;
    }
    case 110391:
    {
        returnValue = F("Füchtorfer Str.");
        break;
    }
    case 110392:
    {
        returnValue = F("Füchtorfer Weg");
        break;
    }
    case 110393:
    {
        returnValue = F("Fückelstr.");
        break;
    }
    case 110394:
    {
        returnValue = F("Füeßlgasse");
        break;
    }
    case 110395:
    {
        returnValue = F("Füflage");
        break;
    }
    case 110396:
    {
        returnValue = F("Függershofweg");
        break;
    }
    case 110397:
    {
        returnValue = F("Fügleinstr.");
        break;
    }
    case 110398:
    {
        returnValue = F("Fühlingstr.");
        break;
    }
    case 110399:
    {
        returnValue = F("Fühlingsweg");
        break;
    }
    case 110400:
    {
        returnValue = F("Fühlpfad");
        break;
    }
    case 110401:
    {
        returnValue = F("Führbergweg");
        break;
    }
    case 110402:
    {
        returnValue = F("Führen");
        break;
    }
    case 110403:
    {
        returnValue = F("Führenmoor");
        break;
    }
    case 110404:
    {
        returnValue = F("Führhäupterweg");
        break;
    }
    case 110405:
    {
        returnValue = F("Führring");
        break;
    }
    case 110406:
    {
        returnValue = F("Führsamweg");
        break;
    }
    case 110407:
    {
        returnValue = F("Führser Mühlweg");
        break;
    }
    case 110408:
    {
        returnValue = F("Führtbruchstr.");
        break;
    }
    case 110409:
    {
        returnValue = F("Füllbornsgrundweg");
        break;
    }
    case 110410:
    {
        returnValue = F("Füllegraben");
        break;
    }
    case 110411:
    {
        returnValue = F("Füllekengrund");
        break;
    }
    case 110412:
    {
        returnValue = F("Füllekuhle");
        break;
    }
    case 110413:
    {
        returnValue = F("Füllenbachweg");
        break;
    }
    case 110414:
    {
        returnValue = F("Füllenbruchstr.");
        break;
    }
    case 110415:
    {
        returnValue = F("Füllenfeld");
        break;
    }
    case 110416:
    {
        returnValue = F("Füllenfeldstr.");
        break;
    }
    case 110417:
    {
        returnValue = F("Füllengarten");
        break;
    }
    case 110418:
    {
        returnValue = F("Füllengartenstr.");
        break;
    }
    case 110419:
    {
        returnValue = F("Füllenkamp");
        break;
    }
    case 110420:
    {
        returnValue = F("Füllensgasse");
        break;
    }
    case 110421:
    {
        returnValue = F("Füllental");
        break;
    }
    case 110422:
    {
        returnValue = F("Füllenteichweg");
        break;
    }
    case 110423:
    {
        returnValue = F("Füllenweg");
        break;
    }
    case 110424:
    {
        returnValue = F("Füllerbornsweg");
        break;
    }
    case 110425:
    {
        returnValue = F("Füllergasse");
        break;
    }
    case 110426:
    {
        returnValue = F("Füllers Heide");
        break;
    }
    case 110427:
    {
        returnValue = F("Füllersgasse");
        break;
    }
    case 110428:
    {
        returnValue = F("Füllerstr.");
        break;
    }
    case 110429:
    {
        returnValue = F("Füllerweg");
        break;
    }
    case 110430:
    {
        returnValue = F("Füllfäßle");
        break;
    }
    case 110431:
    {
        returnValue = F("Füllgesgärten");
        break;
    }
    case 110432:
    {
        returnValue = F("Füllgesweg");
        break;
    }
    case 110433:
    {
        returnValue = F("Füllgrube");
        break;
    }
    case 110434:
    {
        returnValue = F("Füllhornweg");
        break;
    }
    case 110435:
    {
        returnValue = F("Füllhut");
        break;
    }
    case 110436:
    {
        returnValue = F("Füllhölzelweg");
        break;
    }
    case 110437:
    {
        returnValue = F("Fülligasse");
        break;
    }
    case 110438:
    {
        returnValue = F("Füllkrußstr.");
        break;
    }
    case 110439:
    {
        returnValue = F("Füllmaurerstr.");
        break;
    }
    case 110440:
    {
        returnValue = F("Füllmenbacherhofweg");
        break;
    }
    case 110441:
    {
        returnValue = F("Füllortweg");
        break;
    }
    case 110442:
    {
        returnValue = F("Füllsackstr.");
        break;
    }
    case 110443:
    {
        returnValue = F("Füllsbergweg");
        break;
    }
    case 110444:
    {
        returnValue = F("Füllscheuer");
        break;
    }
    case 110445:
    {
        returnValue = F("Füllscheuerweg");
        break;
    }
    case 110446:
    {
        returnValue = F("Füllshoff Weg");
        break;
    }
    case 110447:
    {
        returnValue = F("Füllsichel");
        break;
    }
    case 110448:
    {
        returnValue = F("Füllung");
        break;
    }
    case 110449:
    {
        returnValue = F("Füllweinstr.");
        break;
    }
    case 110450:
    {
        returnValue = F("Füllwies");
        break;
    }
    case 110451:
    {
        returnValue = F("Fülmer Str.");
        break;
    }
    case 110452:
    {
        returnValue = F("Fülmsweg");
        break;
    }
    case 110453:
    {
        returnValue = F("Fülscherstr.");
        break;
    }
    case 110454:
    {
        returnValue = F("Fümmelser Str.");
        break;
    }
    case 110455:
    {
        returnValue = F("Fünderken");
        break;
    }
    case 110456:
    {
        returnValue = F("Fündling");
        break;
    }
    case 110457:
    {
        returnValue = F("Fünenstr.");
        break;
    }
    case 110458:
    {
        returnValue = F("Fünersfeld");
        break;
    }
    case 110459:
    {
        returnValue = F("Fünf");
        break;
    }
    case 110460:
    {
        returnValue = F("Fünf Brücken");
        break;
    }
    case 110461:
    {
        returnValue = F("Fünf Buchen");
        break;
    }
    case 110462:
    {
        returnValue = F("Fünf Linden");
        break;
    }
    case 110463:
    {
        returnValue = F("Fünf Stücken");
        break;
    }
    case 110464:
    {
        returnValue = F("Fünf-Eichen-Bühlweg");
        break;
    }
    case 110465:
    {
        returnValue = F("Fünf-Finger-Platz");
        break;
    }
    case 110466:
    {
        returnValue = F("Fünf-Föhren-Linie");
        break;
    }
    case 110467:
    {
        returnValue = F("Fünf-Minuten-Weg");
        break;
    }
    case 110468:
    {
        returnValue = F("Fünf-Seen-Allee");
        break;
    }
    case 110469:
    {
        returnValue = F("Fünf-Wunden-Weg (Wellmich-Prath)");
        break;
    }
    case 110470:
    {
        returnValue = F("Fünfackernweg");
        break;
    }
    case 110471:
    {
        returnValue = F("Fünfarmiger Weg");
        break;
    }
    case 110472:
    {
        returnValue = F("Fünfbronner Quellweg");
        break;
    }
    case 110473:
    {
        returnValue = F("Fünfbronner Str.");
        break;
    }
    case 110474:
    {
        returnValue = F("Fünfeckerweg");
        break;
    }
    case 110475:
    {
        returnValue = F("Fünfehrlen");
        break;
    }
    case 110476:
    {
        returnValue = F("Fünfeichen");
        break;
    }
    case 110477:
    {
        returnValue = F("Fünfeichen-Mühle");
        break;
    }
    case 110478:
    {
        returnValue = F("Fünfeichener Chaussee");
        break;
    }
    case 110479:
    {
        returnValue = F("Fünfeichener Weg");
        break;
    }
    case 110480:
    {
        returnValue = F("Fünfeichenweg");
        break;
    }
    case 110481:
    {
        returnValue = F("Fünfeichsweg");
        break;
    }
    case 110482:
    {
        returnValue = F("Fünfer Weg");
        break;
    }
    case 110483:
    {
        returnValue = F("Fünferweg");
        break;
    }
    case 110484:
    {
        returnValue = F("Fünffensterstr.");
        break;
    }
    case 110485:
    {
        returnValue = F("Fünfgeldpfad");
        break;
    }
    case 110486:
    {
        returnValue = F("Fünfguldenberg");
        break;
    }
    case 110487:
    {
        returnValue = F("Fünfhausen");
        break;
    }
    case 110488:
    {
        returnValue = F("Fünfhausendorf");
        break;
    }
    case 110489:
    {
        returnValue = F("Fünfhausendorfer Weg");
        break;
    }
    case 110490:
    {
        returnValue = F("Fünfhausener Str.");
        break;
    }
    case 110491:
    {
        returnValue = F("Fünfhausenstr.");
        break;
    }
    case 110492:
    {
        returnValue = F("Fünfhauser Str.");
        break;
    }
    case 110493:
    {
        returnValue = F("Fünfhauser Weg");
        break;
    }
    case 110494:
    {
        returnValue = F("Fünfhauser Wurpstr.");
        break;
    }
    case 110495:
    {
        returnValue = F("Fünfhundert-Taler-Weg");
        break;
    }
    case 110496:
    {
        returnValue = F("Fünfhäusergasse");
        break;
    }
    case 110497:
    {
        returnValue = F("Fünfhäuserweg");
        break;
    }
    case 110498:
    {
        returnValue = F("Fünfkirchener Str.");
        break;
    }
    case 110499:
    {
        returnValue = F("Fünfkirchener Weg");
        break;
    }
    case 110500:
    {
        returnValue = F("Fünfkirchner Str.");
        break;
    }
    case 110501:
    {
        returnValue = F("Fünfleitner Str.");
        break;
    }
    case 110502:
    {
        returnValue = F("Fünfmühlentalweg");
        break;
    }
    case 110503:
    {
        returnValue = F("Fünfpfennigsgraben");
        break;
    }
    case 110504:
    {
        returnValue = F("Fünfrutenweg");
        break;
    }
    case 110505:
    {
        returnValue = F("Fünfschwaden");
        break;
    }
    case 110506:
    {
        returnValue = F("Fünfseenblickstr.");
        break;
    }
    case 110507:
    {
        returnValue = F("Fünfstettener Str.");
        break;
    }
    case 110508:
    {
        returnValue = F("Fünftannenweg");
        break;
    }
    case 110509:
    {
        returnValue = F("Fünfte Str.");
        break;
    }
    case 110510:
    {
        returnValue = F("Fünftelweg");
        break;
    }
    case 110511:
    {
        returnValue = F("Fünftenweg");
        break;
    }
    case 110512:
    {
        returnValue = F("Fünfter Querweg");
        break;
    }
    case 110513:
    {
        returnValue = F("Fünftälerweg");
        break;
    }
    case 110514:
    {
        returnValue = F("Fünfviertelweg");
        break;
    }
    case 110515:
    {
        returnValue = F("Fünfwegescheidweg");
        break;
    }
    case 110516:
    {
        returnValue = F("Fünfwundenweg");
        break;
    }
    case 110517:
    {
        returnValue = F("Fünfzehn Morgen");
        break;
    }
    case 110518:
    {
        returnValue = F("Fünfzehnerstr.");
        break;
    }
    case 110519:
    {
        returnValue = F("Fünfzehntalweg");
        break;
    }
    case 110520:
    {
        returnValue = F("Fünfzigpfennigweg");
        break;
    }
    case 110521:
    {
        returnValue = F("Füramooser Str.");
        break;
    }
    case 110522:
    {
        returnValue = F("Fürberg");
        break;
    }
    case 110523:
    {
        returnValue = F("Fürberger Land");
        break;
    }
    case 110524:
    {
        returnValue = F("Fürberger Str.");
        break;
    }
    case 110525:
    {
        returnValue = F("Fürbergring");
        break;
    }
    case 110526:
    {
        returnValue = F("Fürbergsteig");
        break;
    }
    case 110527:
    {
        returnValue = F("Fürbergstr.");
        break;
    }
    case 110528:
    {
        returnValue = F("Fürbergweg");
        break;
    }
    case 110529:
    {
        returnValue = F("Fürbringers Gässla");
        break;
    }
    case 110530:
    {
        returnValue = F("Fürbringerstr.");
        break;
    }
    case 110531:
    {
        returnValue = F("Fürbuch");
        break;
    }
    case 110532:
    {
        returnValue = F("Fürbucher Fußweg");
        break;
    }
    case 110533:
    {
        returnValue = F("Fürchespfad");
        break;
    }
    case 110534:
    {
        returnValue = F("Fürchtegott-Gellert-Str.");
        break;
    }
    case 110535:
    {
        returnValue = F("Fürfelder Str.");
        break;
    }
    case 110536:
    {
        returnValue = F("Fürfelder Weg");
        break;
    }
    case 110537:
    {
        returnValue = F("Fürfelderstr.");
        break;
    }
    case 110538:
    {
        returnValue = F("Fürfurter Hof");
        break;
    }
    case 110539:
    {
        returnValue = F("Fürfurter Str.");
        break;
    }
    case 110540:
    {
        returnValue = F("Fürfällmühlweg");
        break;
    }
    case 110541:
    {
        returnValue = F("Fürgenweg");
        break;
    }
    case 110542:
    {
        returnValue = F("Fürhaupt");
        break;
    }
    case 110543:
    {
        returnValue = F("Fürhaupten");
        break;
    }
    case 110544:
    {
        returnValue = F("Fürholz");
        break;
    }
    case 110545:
    {
        returnValue = F("Fürholzen");
        break;
    }
    case 110546:
    {
        returnValue = F("Fürholzer Str.");
        break;
    }
    case 110547:
    {
        returnValue = F("Fürholzer Weg");
        break;
    }
    case 110548:
    {
        returnValue = F("Fürholzerstr.");
        break;
    }
    case 110549:
    {
        returnValue = F("Fürholzstr.");
        break;
    }
    case 110550:
    {
        returnValue = F("Fürholzweg");
        break;
    }
    case 110551:
    {
        returnValue = F("Fürkener Str.");
        break;
    }
    case 110552:
    {
        returnValue = F("Fürkiek");
        break;
    }
    case 110553:
    {
        returnValue = F("Fürmannsheck");
        break;
    }
    case 110554:
    {
        returnValue = F("Fürmannstr.");
        break;
    }
    case 110555:
    {
        returnValue = F("Fürmoosen");
        break;
    }
    case 110556:
    {
        returnValue = F("Fürnheimer Str.");
        break;
    }
    case 110557:
    {
        returnValue = F("Fürnrohrstr.");
        break;
    }
    case 110558:
    {
        returnValue = F("Fürnsaler Steig");
        break;
    }
    case 110559:
    {
        returnValue = F("Fürnsaler Str.");
        break;
    }
    case 110560:
    {
        returnValue = F("Fürrit Goat");
        break;
    }
    case 110561:
    {
        returnValue = F("Fürsaalstr.");
        break;
    }
    case 110562:
    {
        returnValue = F("Fürsaileweg");
        break;
    }
    case 110563:
    {
        returnValue = F("Fürsatz");
        break;
    }
    case 110564:
    {
        returnValue = F("Fürsaumstr.");
        break;
    }
    case 110565:
    {
        returnValue = F("Fürsaumweg");
        break;
    }
    case 110566:
    {
        returnValue = F("Fürschelestr.");
        break;
    }
    case 110567:
    {
        returnValue = F("Fürschelweg");
        break;
    }
    case 110568:
    {
        returnValue = F("Fürschlachtweg");
        break;
    }
    case 110569:
    {
        returnValue = F("Fürschlag");
        break;
    }
    case 110570:
    {
        returnValue = F("Fürschlagweg");
        break;
    }
    case 110571:
    {
        returnValue = F("Fürschwald");
        break;
    }
    case 110572:
    {
        returnValue = F("Fürschwelle");
        break;
    }
    case 110573:
    {
        returnValue = F("Fürsetzer Str.");
        break;
    }
    case 110574:
    {
        returnValue = F("Fürsitz");
        break;
    }
    case 110575:
    {
        returnValue = F("Fürsitzweg");
        break;
    }
    case 110576:
    {
        returnValue = F("Fürst Viktor");
        break;
    }
    case 110577:
    {
        returnValue = F("Fürst Wolrad Pyramiden Eichen Allee");
        break;
    }
    case 110578:
    {
        returnValue = F("Fürst-Adolf-Str.");
        break;
    }
    case 110579:
    {
        returnValue = F("Fürst-Adolf-Weg");
        break;
    }
    case 110580:
    {
        returnValue = F("Fürst-Albert-Allee");
        break;
    }
    case 110581:
    {
        returnValue = F("Fürst-Albert-Str.");
        break;
    }
    case 110582:
    {
        returnValue = F("Fürst-Alexander-Str.");
        break;
    }
    case 110583:
    {
        returnValue = F("Fürst-Alois-Str.");
        break;
    }
    case 110584:
    {
        returnValue = F("Fürst-Anselm-Allee");
        break;
    }
    case 110585:
    {
        returnValue = F("Fürst-Anselm-Park");
        break;
    }
    case 110586:
    {
        returnValue = F("Fürst-August-Str.");
        break;
    }
    case 110587:
    {
        returnValue = F("Fürst-Bentheim-Str.");
        break;
    }
    case 110588:
    {
        returnValue = F("Fürst-Bolko-Str.");
        break;
    }
    case 110589:
    {
        returnValue = F("Fürst-Carl-Friedrich-Str.");
        break;
    }
    case 110590:
    {
        returnValue = F("Fürst-Dominik-Str.");
        break;
    }
    case 110591:
    {
        returnValue = F("Fürst-Eberhard-Str.");
        break;
    }
    case 110592:
    {
        returnValue = F("Fürst-Erich-Str.");
        break;
    }
    case 110593:
    {
        returnValue = F("Fürst-Ernst-Platz");
        break;
    }
    case 110594:
    {
        returnValue = F("Fürst-Ernst-Str.");
        break;
    }
    case 110595:
    {
        returnValue = F("Fürst-Esterhazy-Str.");
        break;
    }
    case 110596:
    {
        returnValue = F("Fürst-Eugen-Str.");
        break;
    }
    case 110597:
    {
        returnValue = F("Fürst-Ferdinand-Str.");
        break;
    }
    case 110598:
    {
        returnValue = F("Fürst-Franz-Josef-Str.");
        break;
    }
    case 110599:
    {
        returnValue = F("Fürst-Franz-Joseph-Str.");
        break;
    }
    case 110600:
    {
        returnValue = F("Fürst-Franz-Str.");
        break;
    }
    case 110601:
    {
        returnValue = F("Fürst-Friedrich-Karl-Str.");
        break;
    }
    case 110602:
    {
        returnValue = F("Fürst-Friedrich-Str.");
        break;
    }
    case 110603:
    {
        returnValue = F("Fürst-Fugger-Str.");
        break;
    }
    case 110604:
    {
        returnValue = F("Fürst-Gottfried-Str.");
        break;
    }
    case 110605:
    {
        returnValue = F("Fürst-Hardenberg-Str.");
        break;
    }
    case 110606:
    {
        returnValue = F("Fürst-Hatzfeldt-Str.");
        break;
    }
    case 110607:
    {
        returnValue = F("Fürst-Hermann-Weg");
        break;
    }
    case 110608:
    {
        returnValue = F("Fürst-Herrmann-Str.");
        break;
    }
    case 110609:
    {
        returnValue = F("Fürst-Joachim-Weg");
        break;
    }
    case 110610:
    {
        returnValue = F("Fürst-Johann-August-Str.");
        break;
    }
    case 110611:
    {
        returnValue = F("Fürst-Johannes-Ring");
        break;
    }
    case 110612:
    {
        returnValue = F("Fürst-Josef-Str.");
        break;
    }
    case 110613:
    {
        returnValue = F("Fürst-Kaunitz-Str.");
        break;
    }
    case 110614:
    {
        returnValue = F("Fürst-Kraft-Ernst-Str.");
        break;
    }
    case 110615:
    {
        returnValue = F("Fürst-Leiningen-Str.");
        break;
    }
    case 110616:
    {
        returnValue = F("Fürst-Leopold-Allee");
        break;
    }
    case 110617:
    {
        returnValue = F("Fürst-Leopold-Platz");
        break;
    }
    case 110618:
    {
        returnValue = F("Fürst-Leopold-Str.");
        break;
    }
    case 110619:
    {
        returnValue = F("Fürst-Lynar-Str.");
        break;
    }
    case 110620:
    {
        returnValue = F("Fürst-Malte-Allee");
        break;
    }
    case 110621:
    {
        returnValue = F("Fürst-Max-Willibald-Str.");
        break;
    }
    case 110622:
    {
        returnValue = F("Fürst-Maximilian-Str.");
        break;
    }
    case 110623:
    {
        returnValue = F("Fürst-Metternich-Str.");
        break;
    }
    case 110624:
    {
        returnValue = F("Fürst-Moritz-Str.");
        break;
    }
    case 110625:
    {
        returnValue = F("Fürst-Otto-Str.");
        break;
    }
    case 110626:
    {
        returnValue = F("Fürst-Richard-Str.");
        break;
    }
    case 110627:
    {
        returnValue = F("Fürst-Salm-Str.");
        break;
    }
    case 110628:
    {
        returnValue = F("Fürst-Udo-Str.");
        break;
    }
    case 110629:
    {
        returnValue = F("Fürst-Von-Stromberg-Str.");
        break;
    }
    case 110630:
    {
        returnValue = F("Fürst-Walrad-Str.");
        break;
    }
    case 110631:
    {
        returnValue = F("Fürst-Wenzel-Platz");
        break;
    }
    case 110632:
    {
        returnValue = F("Fürst-Wildrich-Str.");
        break;
    }
    case 110633:
    {
        returnValue = F("Fürst-Wilhelm-Str.");
        break;
    }
    case 110634:
    {
        returnValue = F("Fürst-Wolrad-Str.");
        break;
    }
    case 110635:
    {
        returnValue = F("Fürst-von-Hohenlohe-Weg");
        break;
    }
    case 110636:
    {
        returnValue = F("Fürst-von-Nassau-Str.");
        break;
    }
    case 110637:
    {
        returnValue = F("Fürst-von-der-Leyen-Platz");
        break;
    }
    case 110638:
    {
        returnValue = F("Fürst-zu-Bentheim-Str.");
        break;
    }
    case 110639:
    {
        returnValue = F("Fürst-zu-Salm-Horstmar-Str.");
        break;
    }
    case 110640:
    {
        returnValue = F("Fürst-zu-Salm-Salm-Str.");
        break;
    }
    case 110641:
    {
        returnValue = F("Fürst-zu-Wied-Str.");
        break;
    }
    case 110642:
    {
        returnValue = F("Fürstabt-Gerbert-Str.");
        break;
    }
    case 110643:
    {
        returnValue = F("Fürstabt-Gerbert-Weg");
        break;
    }
    case 110644:
    {
        returnValue = F("Fürstabt-Gerold-Str.");
        break;
    }
    case 110645:
    {
        returnValue = F("Fürstberg");
        break;
    }
    case 110646:
    {
        returnValue = F("Fürstbergstr.");
        break;
    }
    case 110647:
    {
        returnValue = F("Fürstbischof-Galura-Str.");
        break;
    }
    case 110648:
    {
        returnValue = F("Fürstbischof-Rudolf-Str.");
        break;
    }
    case 110649:
    {
        returnValue = F("Fürstelstr.");
        break;
    }
    case 110650:
    {
        returnValue = F("Fürsten Allee");
        break;
    }
    case 110651:
    {
        returnValue = F("Fürstenallee");
        break;
    }
    case 110652:
    {
        returnValue = F("Fürstenau");
        break;
    }
    case 110653:
    {
        returnValue = F("Fürstenauer Damm");
        break;
    }
    case 110654:
    {
        returnValue = F("Fürstenauer Eck");
        break;
    }
    case 110655:
    {
        returnValue = F("Fürstenauer Str.");
        break;
    }
    case 110656:
    {
        returnValue = F("Fürstenauer Weg");
        break;
    }
    case 110657:
    {
        returnValue = F("Fürstenaustr.");
        break;
    }
    case 110658:
    {
        returnValue = F("Fürstenbadweg");
        break;
    }
    case 110659:
    {
        returnValue = F("Fürstenberg");
        break;
    }
    case 110660:
    {
        returnValue = F("Fürstenberg Weg");
        break;
    }
    case 110661:
    {
        returnValue = F("Fürstenbergallee");
        break;
    }
    case 110662:
    {
        returnValue = F("Fürstenberger Allee");
        break;
    }
    case 110663:
    {
        returnValue = F("Fürstenberger Str.");
        break;
    }
    case 110664:
    {
        returnValue = F("Fürstenberger Weg");
        break;
    }
    case 110665:
    {
        returnValue = F("Fürstenbergring");
        break;
    }
    case 110666:
    {
        returnValue = F("Fürstenbergstr.");
        break;
    }
    case 110667:
    {
        returnValue = F("Fürstenbergweg");
        break;
    }
    case 110668:
    {
        returnValue = F("Fürstenbild");
        break;
    }
    case 110669:
    {
        returnValue = F("Fürstenbrunner Str.");
        break;
    }
    case 110670:
    {
        returnValue = F("Fürstenbrücke");
        break;
    }
    case 110671:
    {
        returnValue = F("Fürstenbusch");
        break;
    }
    case 110672:
    {
        returnValue = F("Fürstendamm");
        break;
    }
    case 110673:
    {
        returnValue = F("Fürstendiek");
        break;
    }
    case 110674:
    {
        returnValue = F("Fürstenecker Str.");
        break;
    }
    case 110675:
    {
        returnValue = F("Fürstenecker Weg");
        break;
    }
    case 110676:
    {
        returnValue = F("Fürstenfeld");
        break;
    }
    case 110677:
    {
        returnValue = F("Fürstenfeldbruck Bahnhof");
        break;
    }
    case 110678:
    {
        returnValue = F("Fürstenfeldbrucker Str.");
        break;
    }
    case 110679:
    {
        returnValue = F("Fürstenfelder Str.");
        break;
    }
    case 110680:
    {
        returnValue = F("Fürstenfelder Weg");
        break;
    }
    case 110681:
    {
        returnValue = F("Fürstenfelderstr.");
        break;
    }
    case 110682:
    {
        returnValue = F("Fürstenfeldstr.");
        break;
    }
    case 110683:
    {
        returnValue = F("Fürstenforster Str.");
        break;
    }
    case 110684:
    {
        returnValue = F("Fürstenfreudeweg");
        break;
    }
    case 110685:
    {
        returnValue = F("Fürstenfuhr");
        break;
    }
    case 110686:
    {
        returnValue = F("Fürstengarten");
        break;
    }
    case 110687:
    {
        returnValue = F("Fürstengartenstr.");
        break;
    }
    case 110688:
    {
        returnValue = F("Fürstengasse");
        break;
    }
    case 110689:
    {
        returnValue = F("Fürstengraben");
        break;
    }
    case 110690:
    {
        returnValue = F("Fürstengrund");
        break;
    }
    case 110691:
    {
        returnValue = F("Fürstengrunder Str.");
        break;
    }
    case 110692:
    {
        returnValue = F("Fürstengutweg");
        break;
    }
    case 110693:
    {
        returnValue = F("Fürstengäßle");
        break;
    }
    case 110694:
    {
        returnValue = F("Fürstenhagener Str.");
        break;
    }
    case 110695:
    {
        returnValue = F("Fürstenhagener Weg");
        break;
    }
    case 110696:
    {
        returnValue = F("Fürstenhainer Str.");
        break;
    }
    case 110697:
    {
        returnValue = F("Fürstenhall");
        break;
    }
    case 110698:
    {
        returnValue = F("Fürstenhof");
        break;
    }
    case 110699:
    {
        returnValue = F("Fürstenhofenstr.");
        break;
    }
    case 110700:
    {
        returnValue = F("Fürstenhofer Str.");
        break;
    }
    case 110701:
    {
        returnValue = F("Fürstenhofstr.");
        break;
    }
    case 110702:
    {
        returnValue = F("Fürstenhofweg");
        break;
    }
    case 110703:
    {
        returnValue = F("Fürstenholzstr.");
        break;
    }
    case 110704:
    {
        returnValue = F("Fürstenhuter Str.");
        break;
    }
    case 110705:
    {
        returnValue = F("Fürstenhuterstr.");
        break;
    }
    case 110706:
    {
        returnValue = F("Fürstenhüttenweg");
        break;
    }
    case 110707:
    {
        returnValue = F("Fürstenkamp");
        break;
    }
    case 110708:
    {
        returnValue = F("Fürstenkaten");
        break;
    }
    case 110709:
    {
        returnValue = F("Fürstenkopfweg");
        break;
    }
    case 110710:
    {
        returnValue = F("Fürstenkämpe");
        break;
    }
    case 110711:
    {
        returnValue = F("Fürstenmühle");
        break;
    }
    case 110712:
    {
        returnValue = F("Fürstenmühlstr.");
        break;
    }
    case 110713:
    {
        returnValue = F("Fürstenplatz");
        break;
    }
    case 110714:
    {
        returnValue = F("Fürstenrieder Str.");
        break;
    }
    case 110715:
    {
        returnValue = F("Fürstenring");
        break;
    }
    case 110716:
    {
        returnValue = F("Fürstenrod");
        break;
    }
    case 110717:
    {
        returnValue = F("Fürstenschneise");
        break;
    }
    case 110718:
    {
        returnValue = F("Fürstenseer Landstr.");
        break;
    }
    case 110719:
    {
        returnValue = F("Fürstensteiner Str.");
        break;
    }
    case 110720:
    {
        returnValue = F("Fürstensteinstr.");
        break;
    }
    case 110721:
    {
        returnValue = F("Fürstensteinweg");
        break;
    }
    case 110722:
    {
        returnValue = F("Fürstenstiege");
        break;
    }
    case 110723:
    {
        returnValue = F("Fürstenstr.");
        break;
    }
    case 110724:
    {
        returnValue = F("Fürstenstrassl");
        break;
    }
    case 110725:
    {
        returnValue = F("Fürstentreppe");
        break;
    }
    case 110726:
    {
        returnValue = F("Fürstenwalder Chaussee");
        break;
    }
    case 110727:
    {
        returnValue = F("Fürstenwalder Str.");
        break;
    }
    case 110728:
    {
        returnValue = F("Fürstenwalder Weg");
        break;
    }
    case 110729:
    {
        returnValue = F("Fürstenwaldstr.");
        break;
    }
    case 110730:
    {
        returnValue = F("Fürstenweg");
        break;
    }
    case 110731:
    {
        returnValue = F("Fürstenweg / Robert-Schmidt-Weg");
        break;
    }
    case 110732:
    {
        returnValue = F("Fürstenwegle");
        break;
    }
    case 110733:
    {
        returnValue = F("Fürstenwerder Chaussee");
        break;
    }
    case 110734:
    {
        returnValue = F("Fürstenwerder Str.");
        break;
    }
    case 110735:
    {
        returnValue = F("Fürstenwerthstr.");
        break;
    }
    case 110736:
    {
        returnValue = F("Fürstenwerthweg");
        break;
    }
    case 110737:
    {
        returnValue = F("Fürstenwiese");
        break;
    }
    case 110738:
    {
        returnValue = F("Fürstenwinkel");
        break;
    }
    case 110739:
    {
        returnValue = F("Fürstenzeche");
        break;
    }
    case 110740:
    {
        returnValue = F("Fürstenzeller Str.");
        break;
    }
    case 110741:
    {
        returnValue = F("Fürstenzipfelweg");
        break;
    }
    case 110742:
    {
        returnValue = F("Fürster Str.");
        break;
    }
    case 110743:
    {
        returnValue = F("Fürstgasse");
        break;
    }
    case 110744:
    {
        returnValue = F("Fürsthaldenweg");
        break;
    }
    case 110745:
    {
        returnValue = F("Fürsthof");
        break;
    }
    case 110746:
    {
        returnValue = F("Fürstin-Amalie-Weg");
        break;
    }
    case 110747:
    {
        returnValue = F("Fürstin-Cecilie-Str.");
        break;
    }
    case 110748:
    {
        returnValue = F("Fürstin-Christine-Str.");
        break;
    }
    case 110749:
    {
        returnValue = F("Fürstin-Eugenie-Str.");
        break;
    }
    case 110750:
    {
        returnValue = F("Fürstin-Henriette-Dorothea-Weg");
        break;
    }
    case 110751:
    {
        returnValue = F("Fürstin-Irma-Weg");
        break;
    }
    case 110752:
    {
        returnValue = F("Fürstin-Katharina-Str.");
        break;
    }
    case 110753:
    {
        returnValue = F("Fürstin-Leonilla-Str.");
        break;
    }
    case 110754:
    {
        returnValue = F("Fürstin-Margarete-Str.");
        break;
    }
    case 110755:
    {
        returnValue = F("Fürstin-Margareten-Str.");
        break;
    }
    case 110756:
    {
        returnValue = F("Fürstin-Theresa-Weg");
        break;
    }
    case 110757:
    {
        returnValue = F("Fürstin-von-Quadt-Str.");
        break;
    }
    case 110758:
    {
        returnValue = F("Fürstkopfsträßle");
        break;
    }
    case 110759:
    {
        returnValue = F("Fürstlich Greizer Park");
        break;
    }
    case 110760:
    {
        returnValue = F("Fürstlicher Hofgarten");
        break;
    }
    case 110761:
    {
        returnValue = F("Fürstlicher Schlosspark Sayn");
        break;
    }
    case 110762:
    {
        returnValue = F("Fürstmickestr.");
        break;
    }
    case 110763:
    {
        returnValue = F("Fürstredder");
        break;
    }
    case 110764:
    {
        returnValue = F("Fürststr.");
        break;
    }
    case 110765:
    {
        returnValue = F("Fürststücke");
        break;
    }
    case 110766:
    {
        returnValue = F("Fürstweg");
        break;
    }
    case 110767:
    {
        returnValue = F("Fürstäbtissinnenstr.");
        break;
    }
    case 110768:
    {
        returnValue = F("Fürstäcker");
        break;
    }
    case 110769:
    {
        returnValue = F("Fürstäckerstr.");
        break;
    }
    case 110770:
    {
        returnValue = F("Fürstätter Str.");
        break;
    }
    case 110771:
    {
        returnValue = F("Fürsuchweg");
        break;
    }
    case 110772:
    {
        returnValue = F("Fürtgesweg");
        break;
    }
    case 110773:
    {
        returnValue = F("Fürthener Str.");
        break;
    }
    case 110774:
    {
        returnValue = F("Fürther Berg");
        break;
    }
    case 110775:
    {
        returnValue = F("Fürther Hecke");
        break;
    }
    case 110776:
    {
        returnValue = F("Fürther Str.");
        break;
    }
    case 110777:
    {
        returnValue = F("Fürther Weg");
        break;
    }
    case 110778:
    {
        returnValue = F("Fürthstr.");
        break;
    }
    case 110779:
    {
        returnValue = F("Fürthweg");
        break;
    }
    case 110780:
    {
        returnValue = F("Fürtlesweg");
        break;
    }
    case 110781:
    {
        returnValue = F("Fürweg");
        break;
    }
    case 110782:
    {
        returnValue = F("Füseholm");
        break;
    }
    case 110783:
    {
        returnValue = F("Füsinger Weg");
        break;
    }
    case 110784:
    {
        returnValue = F("Füssener Str.");
        break;
    }
    case 110785:
    {
        returnValue = F("Füssener Weg");
        break;
    }
    case 110786:
    {
        returnValue = F("Füssenicher Weg");
        break;
    }
    case 110787:
    {
        returnValue = F("Füssenichstr.");
        break;
    }
    case 110788:
    {
        returnValue = F("Füssinger Str.");
        break;
    }
    case 110789:
    {
        returnValue = F("Füsslgasse");
        break;
    }
    case 110790:
    {
        returnValue = F("Füstingweg");
        break;
    }
    case 110791:
    {
        returnValue = F("Fütiger Str.");
        break;
    }
    case 110792:
    {
        returnValue = F("Fütingsweg");
        break;
    }
    case 110793:
    {
        returnValue = F("Füttererstr.");
        break;
    }
    case 110794:
    {
        returnValue = F("Fütterseer Str.");
        break;
    }
    case 110795:
    {
        returnValue = F("Fütterungsweg");
        break;
    }
    case 110796:
    {
        returnValue = F("Füwenweg");
        break;
    }
    case 110797:
    {
        returnValue = F("Füßgängerüberführung");
        break;
    }
    case 110798:
    {
        returnValue = F("Füßlingsgasse");
        break;
    }
    }
    return returnValue;
}
