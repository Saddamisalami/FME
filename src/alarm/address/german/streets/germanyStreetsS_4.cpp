#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameS4(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 300030:
    {
        returnValue = F("Stollenhalde");
        break;
    }
    case 300031:
    {
        returnValue = F("Stollenhofstr.");
        break;
    }
    case 300032:
    {
        returnValue = F("Stollenholzweg");
        break;
    }
    case 300033:
    {
        returnValue = F("Stollenkamp");
        break;
    }
    case 300034:
    {
        returnValue = F("Stollenmattenweg");
        break;
    }
    case 300035:
    {
        returnValue = F("Stollensteig");
        break;
    }
    case 300036:
    {
        returnValue = F("Stollenstr.");
        break;
    }
    case 300037:
    {
        returnValue = F("Stollental");
        break;
    }
    case 300038:
    {
        returnValue = F("Stollentrift");
        break;
    }
    case 300039:
    {
        returnValue = F("Stollenwaldweg");
        break;
    }
    case 300040:
    {
        returnValue = F("Stollenweg");
        break;
    }
    case 300041:
    {
        returnValue = F("Stollenwiese");
        break;
    }
    case 300042:
    {
        returnValue = F("Stollenwiesenstr.");
        break;
    }
    case 300043:
    {
        returnValue = F("Stollenzugang");
        break;
    }
    case 300044:
    {
        returnValue = F("Stollenäckerweg");
        break;
    }
    case 300045:
    {
        returnValue = F("Stollergarten");
        break;
    }
    case 300046:
    {
        returnValue = F("Stollergasse");
        break;
    }
    case 300047:
    {
        returnValue = F("Stolles Weg");
        break;
    }
    case 300048:
    {
        returnValue = F("Stolleweg");
        break;
    }
    case 300049:
    {
        returnValue = F("Stollgasse");
        break;
    }
    case 300050:
    {
        returnValue = F("Stollhammer Deich");
        break;
    }
    case 300051:
    {
        returnValue = F("Stollhammer Kirchweg");
        break;
    }
    case 300052:
    {
        returnValue = F("Stollhammer Weg");
        break;
    }
    case 300053:
    {
        returnValue = F("Stollhofener Str.");
        break;
    }
    case 300054:
    {
        returnValue = F("Stollmühlweg");
        break;
    }
    case 300055:
    {
        returnValue = F("Stollngasse");
        break;
    }
    case 300056:
    {
        returnValue = F("Stollnhausgasse");
        break;
    }
    case 300057:
    {
        returnValue = F("Stollnhof");
        break;
    }
    case 300058:
    {
        returnValue = F("Stollrain");
        break;
    }
    case 300059:
    {
        returnValue = F("Stollreute");
        break;
    }
    case 300060:
    {
        returnValue = F("Stollscher Weg");
        break;
    }
    case 300061:
    {
        returnValue = F("Stollsdorfer Str.");
        break;
    }
    case 300062:
    {
        returnValue = F("Stollstr.");
        break;
    }
    case 300063:
    {
        returnValue = F("Stollweg");
        break;
    }
    case 300064:
    {
        returnValue = F("Stollwerckstr.");
        break;
    }
    case 300065:
    {
        returnValue = F("Stolpbrücke");
        break;
    }
    case 300066:
    {
        returnValue = F("Stolpe");
        break;
    }
    case 300067:
    {
        returnValue = F("Stolpe Mühle");
        break;
    }
    case 300068:
    {
        returnValue = F("Stolpener Landstr.");
        break;
    }
    case 300069:
    {
        returnValue = F("Stolpener Str.");
        break;
    }
    case 300070:
    {
        returnValue = F("Stolpener Weg");
        break;
    }
    case 300071:
    {
        returnValue = F("Stolper Berg");
        break;
    }
    case 300072:
    {
        returnValue = F("Stolper Postweg");
        break;
    }
    case 300073:
    {
        returnValue = F("Stolper Str.");
        break;
    }
    case 300074:
    {
        returnValue = F("Stolper Waldstr.");
        break;
    }
    case 300075:
    {
        returnValue = F("Stolper Weg");
        break;
    }
    case 300076:
    {
        returnValue = F("Stolpereck");
        break;
    }
    case 300077:
    {
        returnValue = F("Stolperstr.");
        break;
    }
    case 300078:
    {
        returnValue = F("Stolperweg");
        break;
    }
    case 300079:
    {
        returnValue = F("Stolpmünder Str.");
        break;
    }
    case 300080:
    {
        returnValue = F("Stolpner Str.");
        break;
    }
    case 300081:
    {
        returnValue = F("Stolpseestr.");
        break;
    }
    case 300082:
    {
        returnValue = F("Stolpsteig");
        break;
    }
    case 300083:
    {
        returnValue = F("Stolpstr.");
        break;
    }
    case 300084:
    {
        returnValue = F("Stolpweg");
        break;
    }
    case 300085:
    {
        returnValue = F("Stolsheide");
        break;
    }
    case 300086:
    {
        returnValue = F("Stoltebülldamm");
        break;
    }
    case 300087:
    {
        returnValue = F("Stoltebüllfeld");
        break;
    }
    case 300088:
    {
        returnValue = F("Stoltenberag");
        break;
    }
    case 300089:
    {
        returnValue = F("Stoltenberg");
        break;
    }
    case 300090:
    {
        returnValue = F("Stoltenhagener Dorfstr.");
        break;
    }
    case 300091:
    {
        returnValue = F("Stoltenhoffmühle");
        break;
    }
    case 300092:
    {
        returnValue = F("Stoltenhoffstr.");
        break;
    }
    case 300093:
    {
        returnValue = F("Stoltenkamp");
        break;
    }
    case 300094:
    {
        returnValue = F("Stoltenkampstr.");
        break;
    }
    case 300095:
    {
        returnValue = F("Stoltenrieden");
        break;
    }
    case 300096:
    {
        returnValue = F("Stoltenweg");
        break;
    }
    case 300097:
    {
        returnValue = F("Stoltes Weg");
        break;
    }
    case 300098:
    {
        returnValue = F("Stoltoft");
        break;
    }
    case 300099:
    {
        returnValue = F("Stoltzenbergstr.");
        break;
    }
    case 300100:
    {
        returnValue = F("Stoltzestr.");
        break;
    }
    case 300101:
    {
        returnValue = F("Stolz");
        break;
    }
    case 300102:
    {
        returnValue = F("Stolzberg");
        break;
    }
    case 300103:
    {
        returnValue = F("Stolzbergstr.");
        break;
    }
    case 300104:
    {
        returnValue = F("Stolzbrook");
        break;
    }
    case 300105:
    {
        returnValue = F("Stolze Leite");
        break;
    }
    case 300106:
    {
        returnValue = F("Stolze-Schrey-Str.");
        break;
    }
    case 300107:
    {
        returnValue = F("Stolzenacker");
        break;
    }
    case 300108:
    {
        returnValue = F("Stolzenauer Str.");
        break;
    }
    case 300109:
    {
        returnValue = F("Stolzenberg");
        break;
    }
    case 300110:
    {
        returnValue = F("Stolzenbergstr.");
        break;
    }
    case 300111:
    {
        returnValue = F("Stolzenburger Str.");
        break;
    }
    case 300112:
    {
        returnValue = F("Stolzenburger Weg");
        break;
    }
    case 300113:
    {
        returnValue = F("Stolzenburgstr.");
        break;
    }
    case 300114:
    {
        returnValue = F("Stolzenbünd");
        break;
    }
    case 300115:
    {
        returnValue = F("Stolzeneckstr.");
        break;
    }
    case 300116:
    {
        returnValue = F("Stolzenegge");
        break;
    }
    case 300117:
    {
        returnValue = F("Stolzenfelsstr.");
        break;
    }
    case 300118:
    {
        returnValue = F("Stolzengasse");
        break;
    }
    case 300119:
    {
        returnValue = F("Stolzenhagener Chaussee");
        break;
    }
    case 300120:
    {
        returnValue = F("Stolzenhagener Str.");
        break;
    }
    case 300121:
    {
        returnValue = F("Stolzenhahnbornweg");
        break;
    }
    case 300122:
    {
        returnValue = F("Stolzenhain");
        break;
    }
    case 300123:
    {
        returnValue = F("Stolzenhainer Str.");
        break;
    }
    case 300124:
    {
        returnValue = F("Stolzenhof");
        break;
    }
    case 300125:
    {
        returnValue = F("Stolzenrain");
        break;
    }
    case 300126:
    {
        returnValue = F("Stolzenseeweg");
        break;
    }
    case 300127:
    {
        returnValue = F("Stolzenthalstr.");
        break;
    }
    case 300128:
    {
        returnValue = F("Stolzenäcker");
        break;
    }
    case 300129:
    {
        returnValue = F("Stolzer Str.");
        break;
    }
    case 300130:
    {
        returnValue = F("Stolzesberg");
        break;
    }
    case 300131:
    {
        returnValue = F("Stolzestr.");
        break;
    }
    case 300132:
    {
        returnValue = F("Stolzfeldstr.");
        break;
    }
    case 300133:
    {
        returnValue = F("Stolzmoor");
        break;
    }
    case 300134:
    {
        returnValue = F("Stolzstr.");
        break;
    }
    case 300135:
    {
        returnValue = F("Stolzweg");
        break;
    }
    case 300136:
    {
        returnValue = F("Stolzwiese");
        break;
    }
    case 300137:
    {
        returnValue = F("Stomerberg");
        break;
    }
    case 300138:
    {
        returnValue = F("Stommeler Weg");
        break;
    }
    case 300139:
    {
        returnValue = F("Stommelner Str.");
        break;
    }
    case 300140:
    {
        returnValue = F("Stommelner Weg");
        break;
    }
    case 300141:
    {
        returnValue = F("Stompen");
        break;
    }
    case 300142:
    {
        returnValue = F("Stompenweg");
        break;
    }
    case 300143:
    {
        returnValue = F("Stonsdorfer Weg");
        break;
    }
    case 300144:
    {
        returnValue = F("Stoote");
        break;
    }
    case 300145:
    {
        returnValue = F("Stootenweg");
        break;
    }
    case 300146:
    {
        returnValue = F("Stooter Mühle");
        break;
    }
    case 300147:
    {
        returnValue = F("Stooter Str.");
        break;
    }
    case 300148:
    {
        returnValue = F("Stootweg");
        break;
    }
    case 300149:
    {
        returnValue = F("Stopfen");
        break;
    }
    case 300150:
    {
        returnValue = F("Stopfenheimer Str.");
        break;
    }
    case 300151:
    {
        returnValue = F("Stophel");
        break;
    }
    case 300152:
    {
        returnValue = F("Stopinckweg");
        break;
    }
    case 300153:
    {
        returnValue = F("Stopmannsweg");
        break;
    }
    case 300154:
    {
        returnValue = F("Stoppacker");
        break;
    }
    case 300155:
    {
        returnValue = F("Stoppelberger Str.");
        break;
    }
    case 300156:
    {
        returnValue = F("Stoppelbergstr.");
        break;
    }
    case 300157:
    {
        returnValue = F("Stoppelbrede");
        break;
    }
    case 300158:
    {
        returnValue = F("Stoppeler Str.");
        break;
    }
    case 300159:
    {
        returnValue = F("Stoppelfeldring");
        break;
    }
    case 300160:
    {
        returnValue = F("Stoppelgasse");
        break;
    }
    case 300161:
    {
        returnValue = F("Stoppelgewannenweg");
        break;
    }
    case 300162:
    {
        returnValue = F("Stoppelheide");
        break;
    }
    case 300163:
    {
        returnValue = F("Stoppelkamp");
        break;
    }
    case 300164:
    {
        returnValue = F("Stoppelmarkt");
        break;
    }
    case 300165:
    {
        returnValue = F("Stoppelmoor");
        break;
    }
    case 300166:
    {
        returnValue = F("Stoppelsbergstr.");
        break;
    }
    case 300167:
    {
        returnValue = F("Stoppelsteege");
        break;
    }
    case 300168:
    {
        returnValue = F("Stoppelweg");
        break;
    }
    case 300169:
    {
        returnValue = F("Stoppelweide");
        break;
    }
    case 300170:
    {
        returnValue = F("Stoppenbach");
        break;
    }
    case 300171:
    {
        returnValue = F("Stoppenbrook");
        break;
    }
    case 300172:
    {
        returnValue = F("Stoppenweg");
        break;
    }
    case 300173:
    {
        returnValue = F("Stoppgasse");
        break;
    }
    case 300174:
    {
        returnValue = F("Stoppkamp");
        break;
    }
    case 300175:
    {
        returnValue = F("Stoppstr.");
        break;
    }
    case 300176:
    {
        returnValue = F("Storbeckshof");
        break;
    }
    case 300177:
    {
        returnValue = F("Storborgweg");
        break;
    }
    case 300178:
    {
        returnValue = F("Storch");
        break;
    }
    case 300179:
    {
        returnValue = F("Storchbusch");
        break;
    }
    case 300180:
    {
        returnValue = F("Storchenallee");
        break;
    }
    case 300181:
    {
        returnValue = F("Storchenblick");
        break;
    }
    case 300182:
    {
        returnValue = F("Storcheneck");
        break;
    }
    case 300183:
    {
        returnValue = F("Storcheneckerstr.");
        break;
    }
    case 300184:
    {
        returnValue = F("Storchenfleth");
        break;
    }
    case 300185:
    {
        returnValue = F("Storchengang");
        break;
    }
    case 300186:
    {
        returnValue = F("Storchengasse");
        break;
    }
    case 300187:
    {
        returnValue = F("Storchengrund");
        break;
    }
    case 300188:
    {
        returnValue = F("Storchengässle");
        break;
    }
    case 300189:
    {
        returnValue = F("Storchengäßle");
        break;
    }
    case 300190:
    {
        returnValue = F("Storchenhang");
        break;
    }
    case 300191:
    {
        returnValue = F("Storchenhof");
        break;
    }
    case 300192:
    {
        returnValue = F("Storchenkreis");
        break;
    }
    case 300193:
    {
        returnValue = F("Storchenleithe");
        break;
    }
    case 300194:
    {
        returnValue = F("Storchenmoosstr.");
        break;
    }
    case 300195:
    {
        returnValue = F("Storchennest");
        break;
    }
    case 300196:
    {
        returnValue = F("Storchenneststr.");
        break;
    }
    case 300197:
    {
        returnValue = F("Storchenpark");
        break;
    }
    case 300198:
    {
        returnValue = F("Storchenpfad");
        break;
    }
    case 300199:
    {
        returnValue = F("Storchenring");
        break;
    }
    case 300200:
    {
        returnValue = F("Storchenstieg");
        break;
    }
    case 300201:
    {
        returnValue = F("Storchenstr.");
        break;
    }
    case 300202:
    {
        returnValue = F("Storchenweg");
        break;
    }
    case 300203:
    {
        returnValue = F("Storchenwiese");
        break;
    }
    case 300204:
    {
        returnValue = F("Storchenwinkel");
        break;
    }
    case 300205:
    {
        returnValue = F("Storchenwisch");
        break;
    }
    case 300206:
    {
        returnValue = F("Storchgasse");
        break;
    }
    case 300207:
    {
        returnValue = F("Storchgäßchen");
        break;
    }
    case 300208:
    {
        returnValue = F("Storchnest");
        break;
    }
    case 300209:
    {
        returnValue = F("Storchplatz");
        break;
    }
    case 300210:
    {
        returnValue = F("Storchsbaum");
        break;
    }
    case 300211:
    {
        returnValue = F("Storchsbaum Schneise");
        break;
    }
    case 300212:
    {
        returnValue = F("Storchschnabelweg");
        break;
    }
    case 300213:
    {
        returnValue = F("Storchschneise");
        break;
    }
    case 300214:
    {
        returnValue = F("Storchsdorf");
        break;
    }
    case 300215:
    {
        returnValue = F("Storchsdorfer Weg");
        break;
    }
    case 300216:
    {
        returnValue = F("Storchshalde");
        break;
    }
    case 300217:
    {
        returnValue = F("Storchslake");
        break;
    }
    case 300218:
    {
        returnValue = F("Storchspforte");
        break;
    }
    case 300219:
    {
        returnValue = F("Storchstr.");
        break;
    }
    case 300220:
    {
        returnValue = F("Storchweg");
        break;
    }
    case 300221:
    {
        returnValue = F("Storchwiese");
        break;
    }
    case 300222:
    {
        returnValue = F("Storchwiesen Schneise");
        break;
    }
    case 300223:
    {
        returnValue = F("Storchwiesenweg");
        break;
    }
    case 300224:
    {
        returnValue = F("Storcksmährstr.");
        break;
    }
    case 300225:
    {
        returnValue = F("Storckstr.");
        break;
    }
    case 300226:
    {
        returnValue = F("Storfling");
        break;
    }
    case 300227:
    {
        returnValue = F("Storistr.");
        break;
    }
    case 300228:
    {
        returnValue = F("Storkauer Dorfstr.");
        break;
    }
    case 300229:
    {
        returnValue = F("Storkauer Str.");
        break;
    }
    case 300230:
    {
        returnValue = F("Storkauer Weg");
        break;
    }
    case 300231:
    {
        returnValue = F("Storkenreute");
        break;
    }
    case 300232:
    {
        returnValue = F("Storkenreuteweg");
        break;
    }
    case 300233:
    {
        returnValue = F("Storker Str.");
        break;
    }
    case 300234:
    {
        returnValue = F("Storkmannstr.");
        break;
    }
    case 300235:
    {
        returnValue = F("Storkower Allee");
        break;
    }
    case 300236:
    {
        returnValue = F("Storkower Damm");
        break;
    }
    case 300237:
    {
        returnValue = F("Storkower Dorfstr.");
        break;
    }
    case 300238:
    {
        returnValue = F("Storkower Str.");
        break;
    }
    case 300239:
    {
        returnValue = F("Storkower Weg");
        break;
    }
    case 300240:
    {
        returnValue = F("Storksbrede");
        break;
    }
    case 300241:
    {
        returnValue = F("Storkskamp");
        break;
    }
    case 300242:
    {
        returnValue = F("Storksweg");
        break;
    }
    case 300243:
    {
        returnValue = F("Storkwitzer Weg");
        break;
    }
    case 300244:
    {
        returnValue = F("Storlwald");
        break;
    }
    case 300245:
    {
        returnValue = F("Stormanring");
        break;
    }
    case 300246:
    {
        returnValue = F("Stormarer Weg");
        break;
    }
    case 300247:
    {
        returnValue = F("Stormarner Str.");
        break;
    }
    case 300248:
    {
        returnValue = F("Stormarnkamp");
        break;
    }
    case 300249:
    {
        returnValue = F("Stormarnring");
        break;
    }
    case 300250:
    {
        returnValue = F("Stormarnstr.");
        break;
    }
    case 300251:
    {
        returnValue = F("Stormarnweg");
        break;
    }
    case 300252:
    {
        returnValue = F("Stormbergerstr.");
        break;
    }
    case 300253:
    {
        returnValue = F("Stormdeich");
        break;
    }
    case 300254:
    {
        returnValue = F("Stormsdorfer Str.");
        break;
    }
    case 300255:
    {
        returnValue = F("Stormstorf");
        break;
    }
    case 300256:
    {
        returnValue = F("Stormstorfer Str.");
        break;
    }
    case 300257:
    {
        returnValue = F("Stormstr.");
        break;
    }
    case 300258:
    {
        returnValue = F("Stormsweg");
        break;
    }
    case 300259:
    {
        returnValue = F("Stormweg");
        break;
    }
    case 300260:
    {
        returnValue = F("Storndorfer Str.");
        break;
    }
    case 300261:
    {
        returnValue = F("Stornfelser Str.");
        break;
    }
    case 300262:
    {
        returnValue = F("Storrenbuck");
        break;
    }
    case 300263:
    {
        returnValue = F("Storreneich");
        break;
    }
    case 300264:
    {
        returnValue = F("Storrenhalde");
        break;
    }
    case 300265:
    {
        returnValue = F("Storrentorstr.");
        break;
    }
    case 300266:
    {
        returnValue = F("Storrenweg");
        break;
    }
    case 300267:
    {
        returnValue = F("Storrstr.");
        break;
    }
    case 300268:
    {
        returnValue = F("Storrwoogbrücke");
        break;
    }
    case 300269:
    {
        returnValue = F("Stortzingen");
        break;
    }
    case 300270:
    {
        returnValue = F("Storzenbergstr.");
        break;
    }
    case 300271:
    {
        returnValue = F("Storzenhaldenweg");
        break;
    }
    case 300272:
    {
        returnValue = F("Storzinger Str.");
        break;
    }
    case 300273:
    {
        returnValue = F("Storzingerweg");
        break;
    }
    case 300274:
    {
        returnValue = F("Storzler Str.");
        break;
    }
    case 300275:
    {
        returnValue = F("Stosch-Sarrasani-Str.");
        break;
    }
    case 300276:
    {
        returnValue = F("Stoschstr.");
        break;
    }
    case 300277:
    {
        returnValue = F("Stoteler Bergstr.");
        break;
    }
    case 300278:
    {
        returnValue = F("Stoteler Feldhelmer");
        break;
    }
    case 300279:
    {
        returnValue = F("Stoteler Platz");
        break;
    }
    case 300280:
    {
        returnValue = F("Stoteler Str.");
        break;
    }
    case 300281:
    {
        returnValue = F("Stoteler Waldstr.");
        break;
    }
    case 300282:
    {
        returnValue = F("Stotkamp");
        break;
    }
    case 300283:
    {
        returnValue = F("Stottenhausener Str.");
        break;
    }
    case 300284:
    {
        returnValue = F("Stotternheimer Str.");
        break;
    }
    case 300285:
    {
        returnValue = F("Stottmert");
        break;
    }
    case 300286:
    {
        returnValue = F("Stotzarder Str.");
        break;
    }
    case 300287:
    {
        returnValue = F("Stotzheimer Str.");
        break;
    }
    case 300288:
    {
        returnValue = F("Stotzinger Str.");
        break;
    }
    case 300289:
    {
        returnValue = F("Stotzinger Weg");
        break;
    }
    case 300290:
    {
        returnValue = F("Stotzingerweg");
        break;
    }
    case 300291:
    {
        returnValue = F("Stotzstr.");
        break;
    }
    case 300292:
    {
        returnValue = F("Stover");
        break;
    }
    case 300293:
    {
        returnValue = F("Stover Elbdeich");
        break;
    }
    case 300294:
    {
        returnValue = F("Stover Str.");
        break;
    }
    case 300295:
    {
        returnValue = F("Stover Strand");
        break;
    }
    case 300296:
    {
        returnValue = F("Stoverkamp");
        break;
    }
    case 300297:
    {
        returnValue = F("Stovern");
        break;
    }
    case 300298:
    {
        returnValue = F("Stovernweg");
        break;
    }
    case 300299:
    {
        returnValue = F("Stoverseegen");
        break;
    }
    case 300300:
    {
        returnValue = F("Stoßberg");
        break;
    }
    case 300301:
    {
        returnValue = F("Stoßdorfer Weg");
        break;
    }
    case 300302:
    {
        returnValue = F("Stoßheck");
        break;
    }
    case 300303:
    {
        returnValue = F("Stoßweg");
        break;
    }
    case 300304:
    {
        returnValue = F("Str.");
        break;
    }
    case 300305:
    {
        returnValue = F("Str. 1");
        break;
    }
    case 300306:
    {
        returnValue = F("Str. 10");
        break;
    }
    case 300307:
    {
        returnValue = F("Str. 11");
        break;
    }
    case 300308:
    {
        returnValue = F("Str. 12");
        break;
    }
    case 300309:
    {
        returnValue = F("Str. 13");
        break;
    }
    case 300310:
    {
        returnValue = F("Str. 18");
        break;
    }
    case 300311:
    {
        returnValue = F("Str. 20");
        break;
    }
    case 300312:
    {
        returnValue = F("Str. 21");
        break;
    }
    case 300313:
    {
        returnValue = F("Str. 23");
        break;
    }
    case 300314:
    {
        returnValue = F("Str. 25");
        break;
    }
    case 300315:
    {
        returnValue = F("Str. 27");
        break;
    }
    case 300316:
    {
        returnValue = F("Str. 29");
        break;
    }
    case 300317:
    {
        returnValue = F("Str. 2a");
        break;
    }
    case 300318:
    {
        returnValue = F("Str. 32");
        break;
    }
    case 300319:
    {
        returnValue = F("Str. 4");
        break;
    }
    case 300320:
    {
        returnValue = F("Str. 5");
        break;
    }
    case 300321:
    {
        returnValue = F("Str. 6");
        break;
    }
    case 300322:
    {
        returnValue = F("Str. 7");
        break;
    }
    case 300323:
    {
        returnValue = F("Str. 9");
        break;
    }
    case 300324:
    {
        returnValue = F("Str. A");
        break;
    }
    case 300325:
    {
        returnValue = F("Str. Am Gutshof");
        break;
    }
    case 300326:
    {
        returnValue = F("Str. Am Sportplatz");
        break;
    }
    case 300327:
    {
        returnValue = F("Str. B");
        break;
    }
    case 300328:
    {
        returnValue = F("Str. C");
        break;
    }
    case 300329:
    {
        returnValue = F("Str. D");
        break;
    }
    case 300330:
    {
        returnValue = F("Str. Der Einheit");
        break;
    }
    case 300331:
    {
        returnValue = F("Str. Der Patengemeinde Oingt");
        break;
    }
    case 300332:
    {
        returnValue = F("Str. E");
        break;
    }
    case 300333:
    {
        returnValue = F("Str. F");
        break;
    }
    case 300334:
    {
        returnValue = F("Str. Glück Auf");
        break;
    }
    case 300335:
    {
        returnValue = F("Str. H");
        break;
    }
    case 300336:
    {
        returnValue = F("Str. Hinterdorf");
        break;
    }
    case 300337:
    {
        returnValue = F("Str. L");
        break;
    }
    case 300338:
    {
        returnValue = F("Str. Liepen Hallalit");
        break;
    }
    case 300339:
    {
        returnValue = F("Str. M");
        break;
    }
    case 300340:
    {
        returnValue = F("Str. Maria-Hilf");
        break;
    }
    case 300341:
    {
        returnValue = F("Str. Nr. 10");
        break;
    }
    case 300342:
    {
        returnValue = F("Str. Nr. 12");
        break;
    }
    case 300343:
    {
        returnValue = F("Str. Nr. 2");
        break;
    }
    case 300344:
    {
        returnValue = F("Str. Nr. 4");
        break;
    }
    case 300345:
    {
        returnValue = F("Str. Nr. 5");
        break;
    }
    case 300346:
    {
        returnValue = F("Str. Nr. 6");
        break;
    }
    case 300347:
    {
        returnValue = F("Str. Nr. 7");
        break;
    }
    case 300348:
    {
        returnValue = F("Str. Nr. 8");
        break;
    }
    case 300349:
    {
        returnValue = F("Str. Nr. 9");
        break;
    }
    case 300350:
    {
        returnValue = F("Str. Schattin");
        break;
    }
    case 300351:
    {
        returnValue = F("Str. am Anger");
        break;
    }
    case 300352:
    {
        returnValue = F("Str. am Autohandel");
        break;
    }
    case 300353:
    {
        returnValue = F("Str. am Bach");
        break;
    }
    case 300354:
    {
        returnValue = F("Str. am Bahnhof");
        break;
    }
    case 300355:
    {
        returnValue = F("Str. am Berg");
        break;
    }
    case 300356:
    {
        returnValue = F("Str. am Brauhaus");
        break;
    }
    case 300357:
    {
        returnValue = F("Str. am Dorfteich");
        break;
    }
    case 300358:
    {
        returnValue = F("Str. am Flugplatz");
        break;
    }
    case 300359:
    {
        returnValue = F("Str. am Friedenshain");
        break;
    }
    case 300360:
    {
        returnValue = F("Str. am Friedhof");
        break;
    }
    case 300361:
    {
        returnValue = F("Str. am Gildekamp");
        break;
    }
    case 300362:
    {
        returnValue = F("Str. am Haussee");
        break;
    }
    case 300363:
    {
        returnValue = F("Str. am Hirzberg");
        break;
    }
    case 300364:
    {
        returnValue = F("Str. am Hochwald");
        break;
    }
    case 300365:
    {
        returnValue = F("Str. am Höllengrund");
        break;
    }
    case 300366:
    {
        returnValue = F("Str. am Krankenhaus");
        break;
    }
    case 300367:
    {
        returnValue = F("Str. am Mühlberg");
        break;
    }
    case 300368:
    {
        returnValue = F("Str. am Neubau");
        break;
    }
    case 300369:
    {
        returnValue = F("Str. am Orte");
        break;
    }
    case 300370:
    {
        returnValue = F("Str. am Reit");
        break;
    }
    case 300371:
    {
        returnValue = F("Str. am Römerturm");
        break;
    }
    case 300372:
    {
        returnValue = F("Str. am Schulberg");
        break;
    }
    case 300373:
    {
        returnValue = F("Str. am See");
        break;
    }
    case 300374:
    {
        returnValue = F("Str. am Seeberg");
        break;
    }
    case 300375:
    {
        returnValue = F("Str. am Spielplatz");
        break;
    }
    case 300376:
    {
        returnValue = F("Str. am Sportplatz");
        break;
    }
    case 300377:
    {
        returnValue = F("Str. am Steinberg");
        break;
    }
    case 300378:
    {
        returnValue = F("Str. am Sund");
        break;
    }
    case 300379:
    {
        returnValue = F("Str. am Teich");
        break;
    }
    case 300380:
    {
        returnValue = F("Str. am Uckersee");
        break;
    }
    case 300381:
    {
        returnValue = F("Str. am Wald");
        break;
    }
    case 300382:
    {
        returnValue = F("Str. am Walde");
        break;
    }
    case 300383:
    {
        returnValue = F("Str. am Wasserturm");
        break;
    }
    case 300384:
    {
        returnValue = F("Str. am Wasserwerk");
        break;
    }
    case 300385:
    {
        returnValue = F("Str. am Wehr");
        break;
    }
    case 300386:
    {
        returnValue = F("Str. am Westpoint");
        break;
    }
    case 300387:
    {
        returnValue = F("Str. am ZOB");
        break;
    }
    case 300388:
    {
        returnValue = F("Str. an den Neubauten");
        break;
    }
    case 300389:
    {
        returnValue = F("Str. an der Aller");
        break;
    }
    case 300390:
    {
        returnValue = F("Str. an der B180");
        break;
    }
    case 300391:
    {
        returnValue = F("Str. an der Bahn");
        break;
    }
    case 300392:
    {
        returnValue = F("Str. an der Eisenbahn");
        break;
    }
    case 300393:
    {
        returnValue = F("Str. an der Erholung");
        break;
    }
    case 300394:
    {
        returnValue = F("Str. an der Kirche");
        break;
    }
    case 300395:
    {
        returnValue = F("Str. an der Pleiße");
        break;
    }
    case 300396:
    {
        returnValue = F("Str. an der Stadthalle");
        break;
    }
    case 300397:
    {
        returnValue = F("Str. der 13. Jäger");
        break;
    }
    case 300398:
    {
        returnValue = F("Str. der AWG");
        break;
    }
    case 300399:
    {
        returnValue = F("Str. der Arbeit");
        break;
    }
    case 300400:
    {
        returnValue = F("Str. der Artillerie");
        break;
    }
    case 300401:
    {
        returnValue = F("Str. der Bauarbeiter");
        break;
    }
    case 300402:
    {
        returnValue = F("Str. der Befreier");
        break;
    }
    case 300403:
    {
        returnValue = F("Str. der Befreiung");
        break;
    }
    case 300404:
    {
        returnValue = F("Str. der Begegnung");
        break;
    }
    case 300405:
    {
        returnValue = F("Str. der Bereitschaft");
        break;
    }
    case 300406:
    {
        returnValue = F("Str. der Bergarbeiter");
        break;
    }
    case 300407:
    {
        returnValue = F("Str. der Betonwerker");
        break;
    }
    case 300408:
    {
        returnValue = F("Str. der Bodenreform");
        break;
    }
    case 300409:
    {
        returnValue = F("Str. der Brüderschaft");
        break;
    }
    case 300410:
    {
        returnValue = F("Str. der Champagne");
        break;
    }
    case 300411:
    {
        returnValue = F("Str. der Chemiearbeiter");
        break;
    }
    case 300412:
    {
        returnValue = F("Str. der DSF");
        break;
    }
    case 300413:
    {
        returnValue = F("Str. der Demokratie");
        break;
    }
    case 300414:
    {
        returnValue = F("Str. der Deutsch-Polnischen Freundschaft");
        break;
    }
    case 300415:
    {
        returnValue = F("Str. der Deutschen Einheit");
        break;
    }
    case 300416:
    {
        returnValue = F("Str. der Dichtungstechnik");
        break;
    }
    case 300417:
    {
        returnValue = F("Str. der Einheit");
        break;
    }
    case 300418:
    {
        returnValue = F("Str. der Einigkeit");
        break;
    }
    case 300419:
    {
        returnValue = F("Str. der Elektronik");
        break;
    }
    case 300420:
    {
        returnValue = F("Str. der Feuerwehr");
        break;
    }
    case 300421:
    {
        returnValue = F("Str. der Freiheit");
        break;
    }
    case 300422:
    {
        returnValue = F("Str. der Freundschaft");
        break;
    }
    case 300423:
    {
        returnValue = F("Str. der Frohen Zukunft");
        break;
    }
    case 300424:
    {
        returnValue = F("Str. der Gemeinschaft");
        break;
    }
    case 300425:
    {
        returnValue = F("Str. der Genossenschaft");
        break;
    }
    case 300426:
    {
        returnValue = F("Str. der Genossenschaften");
        break;
    }
    case 300427:
    {
        returnValue = F("Str. der Genossenschaftsbauern");
        break;
    }
    case 300428:
    {
        returnValue = F("Str. der Glasmacher");
        break;
    }
    case 300429:
    {
        returnValue = F("Str. der Handwerker");
        break;
    }
    case 300430:
    {
        returnValue = F("Str. der Hoffnung");
        break;
    }
    case 300431:
    {
        returnValue = F("Str. der Humoristen");
        break;
    }
    case 300432:
    {
        returnValue = F("Str. der Häfen");
        break;
    }
    case 300433:
    {
        returnValue = F("Str. der Initiative");
        break;
    }
    case 300434:
    {
        returnValue = F("Str. der Jugend");
        break;
    }
    case 300435:
    {
        returnValue = F("Str. der Jungen Pioniere");
        break;
    }
    case 300436:
    {
        returnValue = F("Str. der Justiz");
        break;
    }
    case 300437:
    {
        returnValue = F("Str. der KZ.-Opfer");
        break;
    }
    case 300438:
    {
        returnValue = F("Str. der Kinder");
        break;
    }
    case 300439:
    {
        returnValue = F("Str. der Kolbenwerker");
        break;
    }
    case 300440:
    {
        returnValue = F("Str. der Kraftwerker");
        break;
    }
    case 300441:
    {
        returnValue = F("Str. der LPG");
        break;
    }
    case 300442:
    {
        returnValue = F("Str. der Lieder");
        break;
    }
    case 300443:
    {
        returnValue = F("Str. der Luftwaffe");
        break;
    }
    case 300444:
    {
        returnValue = F("Str. der MTS");
        break;
    }
    case 300445:
    {
        returnValue = F("Str. der Molkerei");
        break;
    }
    case 300446:
    {
        returnValue = F("Str. der Nationen");
        break;
    }
    case 300447:
    {
        returnValue = F("Str. der Neubauern");
        break;
    }
    case 300448:
    {
        returnValue = F("Str. der Neubauten");
        break;
    }
    case 300449:
    {
        returnValue = F("Str. der Neuen Siedlung");
        break;
    }
    case 300450:
    {
        returnValue = F("Str. der Neuen Zeit");
        break;
    }
    case 300451:
    {
        returnValue = F("Str. der OdF");
        break;
    }
    case 300452:
    {
        returnValue = F("Str. der Opfer");
        break;
    }
    case 300453:
    {
        returnValue = F("Str. der Opfer des Faschismus");
        break;
    }
    case 300454:
    {
        returnValue = F("Str. der Picardie");
        break;
    }
    case 300455:
    {
        returnValue = F("Str. der Pioniere");
        break;
    }
    case 300456:
    {
        returnValue = F("Str. der RTS");
        break;
    }
    case 300457:
    {
        returnValue = F("Str. der Republik");
        break;
    }
    case 300458:
    {
        returnValue = F("Str. der Residenzen");
        break;
    }
    case 300459:
    {
        returnValue = F("Str. der Sassen");
        break;
    }
    case 300460:
    {
        returnValue = F("Str. der Selbsthilfe");
        break;
    }
    case 300461:
    {
        returnValue = F("Str. der Solidarität");
        break;
    }
    case 300462:
    {
        returnValue = F("Str. der Sportler");
        break;
    }
    case 300463:
    {
        returnValue = F("Str. der Stahlwerker");
        break;
    }
    case 300464:
    {
        returnValue = F("Str. der Technick");
        break;
    }
    case 300465:
    {
        returnValue = F("Str. der Technik");
        break;
    }
    case 300466:
    {
        returnValue = F("Str. der Träume");
        break;
    }
    case 300467:
    {
        returnValue = F("Str. der Volkssolidarität");
        break;
    }
    case 300468:
    {
        returnValue = F("Str. der Völkerfreundschaft");
        break;
    }
    case 300469:
    {
        returnValue = F("Str. der Völkerverständigung");
        break;
    }
    case 300470:
    {
        returnValue = F("Str. der Weißen Rose");
        break;
    }
    case 300471:
    {
        returnValue = F("Str. der Wissenschaft");
        break;
    }
    case 300472:
    {
        returnValue = F("Str. der Zukunft");
        break;
    }
    case 300473:
    {
        returnValue = F("Str. der deutschen Einheit");
        break;
    }
    case 300474:
    {
        returnValue = F("Str. des 1. Juli");
        break;
    }
    case 300475:
    {
        returnValue = F("Str. des 1. Mai");
        break;
    }
    case 300476:
    {
        returnValue = F("Str. des 12. August");
        break;
    }
    case 300477:
    {
        returnValue = F("Str. des 13. Januar");
        break;
    }
    case 300478:
    {
        returnValue = F("Str. des 15. Oktober");
        break;
    }
    case 300479:
    {
        returnValue = F("Str. des 17. Juni");
        break;
    }
    case 300480:
    {
        returnValue = F("Str. des 18. März");
        break;
    }
    case 300481:
    {
        returnValue = F("Str. des 20. Juli");
        break;
    }
    case 300482:
    {
        returnValue = F("Str. des 25. Oktober");
        break;
    }
    case 300483:
    {
        returnValue = F("Str. des 28. April 1945");
        break;
    }
    case 300484:
    {
        returnValue = F("Str. des 3. Oktober");
        break;
    }
    case 300485:
    {
        returnValue = F("Str. des 7. Oktober");
        break;
    }
    case 300486:
    {
        returnValue = F("Str. des 8. Mai");
        break;
    }
    case 300487:
    {
        returnValue = F("Str. des 8. März");
        break;
    }
    case 300488:
    {
        returnValue = F("Str. des 9. November");
        break;
    }
    case 300489:
    {
        returnValue = F("Str. des Aufbaues");
        break;
    }
    case 300490:
    {
        returnValue = F("Str. des Aufbaus");
        break;
    }
    case 300491:
    {
        returnValue = F("Str. des Bergmanns");
        break;
    }
    case 300492:
    {
        returnValue = F("Str. des Fortschritts");
        break;
    }
    case 300493:
    {
        returnValue = F("Str. des Friedans");
        break;
    }
    case 300494:
    {
        returnValue = F("Str. des Friedens");
        break;
    }
    case 300495:
    {
        returnValue = F("Str. des Großen Freien");
        break;
    }
    case 300496:
    {
        returnValue = F("Str. des Handwerks");
        break;
    }
    case 300497:
    {
        returnValue = F("Str. des Jugendrotkreuzes");
        break;
    }
    case 300498:
    {
        returnValue = F("Str. des Kindes");
        break;
    }
    case 300499:
    {
        returnValue = F("Str. des NAW");
        break;
    }
    case 300500:
    {
        returnValue = F("Str. des Sportes");
        break;
    }
    case 300501:
    {
        returnValue = F("Str. des Sports");
        break;
    }
    case 300502:
    {
        returnValue = F("Str. für Landtechnik");
        break;
    }
    case 300503:
    {
        returnValue = F("Str. im Hinterdorf");
        break;
    }
    case 300504:
    {
        returnValue = F("Str. im Loh");
        break;
    }
    case 300505:
    {
        returnValue = F("Str. im Mitteldorf");
        break;
    }
    case 300506:
    {
        returnValue = F("Str. im Oberdorf");
        break;
    }
    case 300507:
    {
        returnValue = F("Str. im Unterdorf");
        break;
    }
    case 300508:
    {
        returnValue = F("Str. in Bau");
        break;
    }
    case 300509:
    {
        returnValue = F("Str. in der Neustadt");
        break;
    }
    case 300510:
    {
        returnValue = F("Str. nach Apollensdorf");
        break;
    }
    case 300511:
    {
        returnValue = F("Str. nach Bindow");
        break;
    }
    case 300512:
    {
        returnValue = F("Str. nach Borkwalde");
        break;
    }
    case 300513:
    {
        returnValue = F("Str. nach Buttstädt");
        break;
    }
    case 300514:
    {
        returnValue = F("Str. nach Bärenthoren");
        break;
    }
    case 300515:
    {
        returnValue = F("Str. nach Damshagen");
        break;
    }
    case 300516:
    {
        returnValue = F("Str. nach Drochhaus");
        break;
    }
    case 300517:
    {
        returnValue = F("Str. nach Eßleben");
        break;
    }
    case 300518:
    {
        returnValue = F("Str. nach Fichtenwalde");
        break;
    }
    case 300519:
    {
        returnValue = F("Str. nach Gedern");
        break;
    }
    case 300520:
    {
        returnValue = F("Str. nach Golmenglin");
        break;
    }
    case 300521:
    {
        returnValue = F("Str. nach Gottberg");
        break;
    }
    case 300522:
    {
        returnValue = F("Str. nach Groß Marzehns");
        break;
    }
    case 300523:
    {
        returnValue = F("Str. nach Großbeeren");
        break;
    }
    case 300524:
    {
        returnValue = F("Str. nach Großfahner");
        break;
    }
    case 300525:
    {
        returnValue = F("Str. nach Grüntal");
        break;
    }
    case 300526:
    {
        returnValue = F("Str. nach Herrengosserstedt");
        break;
    }
    case 300527:
    {
        returnValue = F("Str. nach Karlshof");
        break;
    }
    case 300528:
    {
        returnValue = F("Str. nach Kölleda");
        break;
    }
    case 300529:
    {
        returnValue = F("Str. nach Königs Wusterhausen");
        break;
    }
    case 300530:
    {
        returnValue = F("Str. nach Leubnitz");
        break;
    }
    case 300531:
    {
        returnValue = F("Str. nach Liepe");
        break;
    }
    case 300532:
    {
        returnValue = F("Str. nach Lindern");
        break;
    }
    case 300533:
    {
        returnValue = F("Str. nach Luckenwalde");
        break;
    }
    case 300534:
    {
        returnValue = F("Str. nach Mannstedt");
        break;
    }
    case 300535:
    {
        returnValue = F("Str. nach Neuendorf");
        break;
    }
    case 300536:
    {
        returnValue = F("Str. nach Neuruppin");
        break;
    }
    case 300537:
    {
        returnValue = F("Str. nach Pülzig");
        break;
    }
    case 300538:
    {
        returnValue = F("Str. nach Rägelin");
        break;
    }
    case 300539:
    {
        returnValue = F("Str. nach Serno");
        break;
    }
    case 300540:
    {
        returnValue = F("Str. nach Setzsteig");
        break;
    }
    case 300541:
    {
        returnValue = F("Str. nach Sperenberg");
        break;
    }
    case 300542:
    {
        returnValue = F("Str. nach Sülzfeld");
        break;
    }
    case 300543:
    {
        returnValue = F("Str. nach Trebnitz");
        break;
    }
    case 300544:
    {
        returnValue = F("Str. nach Walsleben");
        break;
    }
    case 300545:
    {
        returnValue = F("Str. nach Wulkow");
        break;
    }
    case 300546:
    {
        returnValue = F("Str. nach Wuthenow");
        break;
    }
    case 300547:
    {
        returnValue = F("Str. nach Wünsdorf");
        break;
    }
    case 300548:
    {
        returnValue = F("Str. nach der Krönung");
        break;
    }
    case 300549:
    {
        returnValue = F("Str. von Arrou");
        break;
    }
    case 300550:
    {
        returnValue = F("Str. von Avranches");
        break;
    }
    case 300551:
    {
        returnValue = F("Str. von Candé");
        break;
    }
    case 300552:
    {
        returnValue = F("Str. von Entrammes");
        break;
    }
    case 300553:
    {
        returnValue = F("Str. von Forcé");
        break;
    }
    case 300554:
    {
        returnValue = F("Str. von Parné");
        break;
    }
    case 300555:
    {
        returnValue = F("Str. zu den Neubauten");
        break;
    }
    case 300556:
    {
        returnValue = F("Str. zum Altersheim");
        break;
    }
    case 300557:
    {
        returnValue = F("Str. zum Ausbau");
        break;
    }
    case 300558:
    {
        returnValue = F("Str. zum Bad");
        break;
    }
    case 300559:
    {
        returnValue = F("Str. zum Bahnhof");
        break;
    }
    case 300560:
    {
        returnValue = F("Str. zum Bahnhof Röntgenthal");
        break;
    }
    case 300561:
    {
        returnValue = F("Str. zum Campingplatz");
        break;
    }
    case 300562:
    {
        returnValue = F("Str. zum Erbgericht");
        break;
    }
    case 300563:
    {
        returnValue = F("Str. zum Felsenkeller");
        break;
    }
    case 300564:
    {
        returnValue = F("Str. zum Ferienheim");
        break;
    }
    case 300565:
    {
        returnValue = F("Str. zum Forst");
        break;
    }
    case 300566:
    {
        returnValue = F("Str. zum Forsthaus");
        break;
    }
    case 300567:
    {
        returnValue = F("Str. zum Forsthaus Dubrow");
        break;
    }
    case 300568:
    {
        returnValue = F("Str. zum Freibad");
        break;
    }
    case 300569:
    {
        returnValue = F("Str. zum Gut");
        break;
    }
    case 300570:
    {
        returnValue = F("Str. zum Hakel");
        break;
    }
    case 300571:
    {
        returnValue = F("Str. zum Hinteren Dorf");
        break;
    }
    case 300572:
    {
        returnValue = F("Str. zum Hirsch");
        break;
    }
    case 300573:
    {
        returnValue = F("Str. zum Josephskreuz");
        break;
    }
    case 300574:
    {
        returnValue = F("Str. zum Kombinat");
        break;
    }
    case 300575:
    {
        returnValue = F("Str. zum Kraftwerk");
        break;
    }
    case 300576:
    {
        returnValue = F("Str. zum Kulturhaus");
        break;
    }
    case 300577:
    {
        returnValue = F("Str. zum Meer");
        break;
    }
    case 300578:
    {
        returnValue = F("Str. zum Mittelpunkt Deutschlands");
        break;
    }
    case 300579:
    {
        returnValue = F("Str. zum Möllernbruch");
        break;
    }
    case 300580:
    {
        returnValue = F("Str. zum Naturtheater");
        break;
    }
    case 300581:
    {
        returnValue = F("Str. zum Neubaugebiet");
        break;
    }
    case 300582:
    {
        returnValue = F("Str. zum Neuhof");
        break;
    }
    case 300583:
    {
        returnValue = F("Str. zum Oderbruch");
        break;
    }
    case 300584:
    {
        returnValue = F("Str. zum Reitplatz");
        break;
    }
    case 300585:
    {
        returnValue = F("Str. zum Rinderkombinat");
        break;
    }
    case 300586:
    {
        returnValue = F("Str. zum Roten Luch");
        break;
    }
    case 300587:
    {
        returnValue = F("Str. zum Roßbach");
        break;
    }
    case 300588:
    {
        returnValue = F("Str. zum See");
        break;
    }
    case 300589:
    {
        returnValue = F("Str. zum Sender");
        break;
    }
    case 300590:
    {
        returnValue = F("Str. zum Sportplatz");
        break;
    }
    case 300591:
    {
        returnValue = F("Str. zum Stausee");
        break;
    }
    case 300592:
    {
        returnValue = F("Str. zum Stützpunkt");
        break;
    }
    case 300593:
    {
        returnValue = F("Str. zum Sudheimer Kreuz");
        break;
    }
    case 300594:
    {
        returnValue = F("Str. zum Teich");
        break;
    }
    case 300595:
    {
        returnValue = F("Str. zum Unteren Dorf");
        break;
    }
    case 300596:
    {
        returnValue = F("Str. zum Wasserwerk");
        break;
    }
    case 300597:
    {
        returnValue = F("Str. zum Westbahnhof");
        break;
    }
    case 300598:
    {
        returnValue = F("Str. zum Westgate");
        break;
    }
    case 300599:
    {
        returnValue = F("Str. zum ehemaligen Funkgelände");
        break;
    }
    case 300600:
    {
        returnValue = F("Str. zur Badeanstalt");
        break;
    }
    case 300601:
    {
        returnValue = F("Str. zur Burg");
        break;
    }
    case 300602:
    {
        returnValue = F("Str. zur Ehrenbürg");
        break;
    }
    case 300603:
    {
        returnValue = F("Str. zur Eiche");
        break;
    }
    case 300604:
    {
        returnValue = F("Str. zur Einheit");
        break;
    }
    case 300605:
    {
        returnValue = F("Str. zur Felda");
        break;
    }
    case 300606:
    {
        returnValue = F("Str. zur Freiheit");
        break;
    }
    case 300607:
    {
        returnValue = F("Str. zur Friedenssiedlung");
        break;
    }
    case 300608:
    {
        returnValue = F("Str. zur Försterei");
        break;
    }
    case 300609:
    {
        returnValue = F("Str. zur Grünen Wiese");
        break;
    }
    case 300610:
    {
        returnValue = F("Str. zur Jugendherberge");
        break;
    }
    case 300611:
    {
        returnValue = F("Str. zur Koppel");
        break;
    }
    case 300612:
    {
        returnValue = F("Str. zur Kühlung");
        break;
    }
    case 300613:
    {
        returnValue = F("Str. zur Linde");
        break;
    }
    case 300614:
    {
        returnValue = F("Str. zur Lohe");
        break;
    }
    case 300615:
    {
        returnValue = F("Str. zur MIBRAG");
        break;
    }
    case 300616:
    {
        returnValue = F("Str. zur Neuen Welt");
        break;
    }
    case 300617:
    {
        returnValue = F("Str. zur Oberen Bergstr.");
        break;
    }
    case 300618:
    {
        returnValue = F("Str. zur Ostsee");
        break;
    }
    case 300619:
    {
        returnValue = F("Str. zur Rögnitz");
        break;
    }
    case 300620:
    {
        returnValue = F("Str. zur Schorfheide");
        break;
    }
    case 300621:
    {
        returnValue = F("Str. zur Schule");
        break;
    }
    case 300622:
    {
        returnValue = F("Str. zur Siedlung");
        break;
    }
    case 300623:
    {
        returnValue = F("Str. zur Sparkasse");
        break;
    }
    case 300624:
    {
        returnValue = F("Str. zur Technik");
        break;
    }
    case 300625:
    {
        returnValue = F("Str. zur Wäscherei");
        break;
    }
    case 300626:
    {
        returnValue = F("Str.nackerring");
        break;
    }
    case 300627:
    {
        returnValue = F("Str.nberg");
        break;
    }
    case 300628:
    {
        returnValue = F("Str.nbrücke Rankenheim");
        break;
    }
    case 300629:
    {
        returnValue = F("Str.nfeld");
        break;
    }
    case 300630:
    {
        returnValue = F("Str.nhaus");
        break;
    }
    case 300631:
    {
        returnValue = F("Str.nhaustich");
        break;
    }
    case 300632:
    {
        returnValue = F("Str.nheimer Str.");
        break;
    }
    case 300633:
    {
        returnValue = F("Str.nholz");
        break;
    }
    case 300634:
    {
        returnValue = F("Str.nname noch unbekannt");
        break;
    }
    case 300635:
    {
        returnValue = F("Str.nschlag");
        break;
    }
    case 300636:
    {
        returnValue = F("Str.nschlagweg");
        break;
    }
    case 300637:
    {
        returnValue = F("Str.ntor");
        break;
    }
    case 300638:
    {
        returnValue = F("Str.nverkehrsamt");
        break;
    }
    case 300639:
    {
        returnValue = F("Str.nweg");
        break;
    }
    case 300640:
    {
        returnValue = F("Str.näcker");
        break;
    }
    case 300641:
    {
        returnValue = F("Str.näckerweg");
        break;
    }
    case 300642:
    {
        returnValue = F("Str.r Weg");
        break;
    }
    case 300643:
    {
        returnValue = F("Str.rberg");
        break;
    }
    case 300644:
    {
        returnValue = F("Str.rhof");
        break;
    }
    case 300645:
    {
        returnValue = F("Str.rweg");
        break;
    }
    case 300646:
    {
        returnValue = F("Str.rödweg");
        break;
    }
    case 300647:
    {
        returnValue = F("Straasbach");
        break;
    }
    case 300648:
    {
        returnValue = F("Straatkoppel");
        break;
    }
    case 300649:
    {
        returnValue = F("Straatmannshof");
        break;
    }
    case 300650:
    {
        returnValue = F("Straatweg");
        break;
    }
    case 300651:
    {
        returnValue = F("Straberger Weg");
        break;
    }
    case 300652:
    {
        returnValue = F("Strachtitz");
        break;
    }
    case 300653:
    {
        returnValue = F("Strackenweg");
        break;
    }
    case 300654:
    {
        returnValue = F("Strackerweg");
        break;
    }
    case 300655:
    {
        returnValue = F("Strackestr.");
        break;
    }
    case 300656:
    {
        returnValue = F("Strackgasse");
        break;
    }
    case 300657:
    {
        returnValue = F("Stracksarmschneise");
        break;
    }
    case 300658:
    {
        returnValue = F("Strackschneise");
        break;
    }
    case 300659:
    {
        returnValue = F("Strackweg");
        break;
    }
    case 300660:
    {
        returnValue = F("Straelener Ring");
        break;
    }
    case 300661:
    {
        returnValue = F("Straelener Str.");
        break;
    }
    case 300662:
    {
        returnValue = F("Straelener Weg");
        break;
    }
    case 300663:
    {
        returnValue = F("Straetener Weg");
        break;
    }
    case 300664:
    {
        returnValue = F("Straetmansweg");
        break;
    }
    case 300665:
    {
        returnValue = F("Stragholzer Garten");
        break;
    }
    case 300666:
    {
        returnValue = F("Strahl-Goder-Str.");
        break;
    }
    case 300667:
    {
        returnValue = F("Strahlenbach");
        break;
    }
    case 300668:
    {
        returnValue = F("Strahlenberger Str.");
        break;
    }
    case 300669:
    {
        returnValue = F("Strahlenburgweg");
        break;
    }
    case 300670:
    {
        returnValue = F("Strahlendorfer Weg");
        break;
    }
    case 300671:
    {
        returnValue = F("Strahlenfels");
        break;
    }
    case 300672:
    {
        returnValue = F("Strahlenfelser Weg");
        break;
    }
    case 300673:
    {
        returnValue = F("Strahlenweg");
        break;
    }
    case 300674:
    {
        returnValue = F("Strahlfelder Str.");
        break;
    }
    case 300675:
    {
        returnValue = F("Strahlkampweg");
        break;
    }
    case 300676:
    {
        returnValue = F("Strahlshausen");
        break;
    }
    case 300677:
    {
        returnValue = F("Strahlunger Weg");
        break;
    }
    case 300678:
    {
        returnValue = F("Strahmweg");
        break;
    }
    case 300679:
    {
        returnValue = F("Strahwalder Str.");
        break;
    }
    case 300680:
    {
        returnValue = F("Straienweg");
        break;
    }
    case 300681:
    {
        returnValue = F("Strailachweg");
        break;
    }
    case 300682:
    {
        returnValue = F("Straizergasse");
        break;
    }
    case 300683:
    {
        returnValue = F("Strajenweg");
        break;
    }
    case 300684:
    {
        returnValue = F("Strak Schnaas");
        break;
    }
    case 300685:
    {
        returnValue = F("Straken");
        break;
    }
    case 300686:
    {
        returnValue = F("Strakenweg");
        break;
    }
    case 300687:
    {
        returnValue = F("Stralendorfer Str.");
        break;
    }
    case 300688:
    {
        returnValue = F("Stralsunder Allee");
        break;
    }
    case 300689:
    {
        returnValue = F("Stralsunder Chaussee");
        break;
    }
    case 300690:
    {
        returnValue = F("Stralsunder Hof");
        break;
    }
    case 300691:
    {
        returnValue = F("Stralsunder Kehre");
        break;
    }
    case 300692:
    {
        returnValue = F("Stralsunder Landstr.");
        break;
    }
    case 300693:
    {
        returnValue = F("Stralsunder Ring");
        break;
    }
    case 300694:
    {
        returnValue = F("Stralsunder Str.");
        break;
    }
    case 300695:
    {
        returnValue = F("Stralsunder Weg");
        break;
    }
    case 300696:
    {
        returnValue = F("Stralsundstr.");
        break;
    }
    case 300697:
    {
        returnValue = F("Strambergsweg");
        break;
    }
    case 300698:
    {
        returnValue = F("Stramehl");
        break;
    }
    case 300699:
    {
        returnValue = F("Straminke");
        break;
    }
    case 300700:
    {
        returnValue = F("Strampemtwiete");
        break;
    }
    case 300701:
    {
        returnValue = F("Strampfelbergweg");
        break;
    }
    case 300702:
    {
        returnValue = F("Strampfershof");
        break;
    }
    case 300703:
    {
        returnValue = F("Strandabgang 58");
        break;
    }
    case 300704:
    {
        returnValue = F("Strandallee");
        break;
    }
    case 300705:
    {
        returnValue = F("Strandasterweg");
        break;
    }
    case 300706:
    {
        returnValue = F("Strandaufgang 2 Born");
        break;
    }
    case 300707:
    {
        returnValue = F("Strandaufgang 21");
        break;
    }
    case 300708:
    {
        returnValue = F("Strandaufgang 3 Born");
        break;
    }
    case 300709:
    {
        returnValue = F("Strandbad");
        break;
    }
    case 300710:
    {
        returnValue = F("Strandbad Bad Waldsee");
        break;
    }
    case 300711:
    {
        returnValue = F("Strandbad Bosen");
        break;
    }
    case 300712:
    {
        returnValue = F("Strandbad Breitbrunn");
        break;
    }
    case 300713:
    {
        returnValue = F("Strandbad Chieming");
        break;
    }
    case 300714:
    {
        returnValue = F("Strandbad Chiemseepark Seebruck");
        break;
    }
    case 300715:
    {
        returnValue = F("Strandbad Feldwies");
        break;
    }
    case 300716:
    {
        returnValue = F("Strandbad Gstadt");
        break;
    }
    case 300717:
    {
        returnValue = F("Strandbad Hemmenhofen");
        break;
    }
    case 300718:
    {
        returnValue = F("Strandbad Horn");
        break;
    }
    case 300719:
    {
        returnValue = F("Strandbad Iznang");
        break;
    }
    case 300720:
    {
        returnValue = F("Strandbad Krauchenwies");
        break;
    }
    case 300721:
    {
        returnValue = F("Strandbad Mettnau");
        break;
    }
    case 300722:
    {
        returnValue = F("Strandbad Ost");
        break;
    }
    case 300723:
    {
        returnValue = F("Strandbad Rimsting");
        break;
    }
    case 300724:
    {
        returnValue = F("Strandbad Rinsersee");
        break;
    }
    case 300725:
    {
        returnValue = F("Strandbad Rodenbach");
        break;
    }
    case 300726:
    {
        returnValue = F("Strandbad Schliersee");
        break;
    }
    case 300727:
    {
        returnValue = F("Strandbad Truchtlaching");
        break;
    }
    case 300728:
    {
        returnValue = F("Strandbad Wangen");
        break;
    }
    case 300729:
    {
        returnValue = F("Strandbad West");
        break;
    }
    case 300730:
    {
        returnValue = F("Strandbad Wiesensee");
        break;
    }
    case 300731:
    {
        returnValue = F("Strandbad Wißmarer See");
        break;
    }
    case 300732:
    {
        returnValue = F("Strandbadstr.");
        break;
    }
    case 300733:
    {
        returnValue = F("Strandbadweg");
        break;
    }
    case 300734:
    {
        returnValue = F("Strandbereich");
        break;
    }
    case 300735:
    {
        returnValue = F("Strandberg");
        break;
    }
    case 300736:
    {
        returnValue = F("Strandblick");
        break;
    }
    case 300737:
    {
        returnValue = F("Stranddistelweg");
        break;
    }
    case 300738:
    {
        returnValue = F("Strander Str.");
        break;
    }
    case 300739:
    {
        returnValue = F("Strandhaferring");
        break;
    }
    case 300740:
    {
        returnValue = F("Strandhaferweg");
        break;
    }
    case 300741:
    {
        returnValue = F("Strandhof");
        break;
    }
    case 300742:
    {
        returnValue = F("Strandholm");
        break;
    }
    case 300743:
    {
        returnValue = F("Strandhusen");
        break;
    }
    case 300744:
    {
        returnValue = F("Strandhöhe");
        break;
    }
    case 300745:
    {
        returnValue = F("Strandjepad");
        break;
    }
    case 300746:
    {
        returnValue = F("Strandjer's Pad");
        break;
    }
    case 300747:
    {
        returnValue = F("Strandkoppel");
        break;
    }
    case 300748:
    {
        returnValue = F("Strandläuferweg");
        break;
    }
    case 300749:
    {
        returnValue = F("Strandmatte, u.a. für Rollstühle");
        break;
    }
    case 300750:
    {
        returnValue = F("Strandpark");
        break;
    }
    case 300751:
    {
        returnValue = F("Strandparkallee");
        break;
    }
    case 300752:
    {
        returnValue = F("Strandpassage");
        break;
    }
    case 300753:
    {
        returnValue = F("Strandpfad der Sinne");
        break;
    }
    case 300754:
    {
        returnValue = F("Strandpromedade");
        break;
    }
    case 300755:
    {
        returnValue = F("Strandpromenade");
        break;
    }
    case 300756:
    {
        returnValue = F("Strandschlag");
        break;
    }
    case 300757:
    {
        returnValue = F("Strandschloßweg");
        break;
    }
    case 300758:
    {
        returnValue = F("Strandsiedlung");
        break;
    }
    case 300759:
    {
        returnValue = F("Strandstr.");
        break;
    }
    case 300760:
    {
        returnValue = F("Strandvogtstr.");
        break;
    }
    case 300761:
    {
        returnValue = F("Strandwanderweg");
        break;
    }
    case 300762:
    {
        returnValue = F("Strandweg");
        break;
    }
    case 300763:
    {
        returnValue = F("Strandweg 37-39");
        break;
    }
    case 300764:
    {
        returnValue = F("Strandwiese");
        break;
    }
    case 300765:
    {
        returnValue = F("Strandwiesen");
        break;
    }
    case 300766:
    {
        returnValue = F("Strandzufahrt/Strandzugang 1");
        break;
    }
    case 300767:
    {
        returnValue = F("Strandzugang");
        break;
    }
    case 300768:
    {
        returnValue = F("Strandzugang 1");
        break;
    }
    case 300769:
    {
        returnValue = F("Strandzugang 1 blau");
        break;
    }
    case 300770:
    {
        returnValue = F("Strandzugang 10");
        break;
    }
    case 300771:
    {
        returnValue = F("Strandzugang 11");
        break;
    }
    case 300772:
    {
        returnValue = F("Strandzugang 13");
        break;
    }
    case 300773:
    {
        returnValue = F("Strandzugang 14");
        break;
    }
    case 300774:
    {
        returnValue = F("Strandzugang 15");
        break;
    }
    case 300775:
    {
        returnValue = F("Strandzugang 15/16");
        break;
    }
    case 300776:
    {
        returnValue = F("Strandzugang 17");
        break;
    }
    case 300777:
    {
        returnValue = F("Strandzugang 18");
        break;
    }
    case 300778:
    {
        returnValue = F("Strandzugang 18 - Spielstrand, Aktionsstrand");
        break;
    }
    case 300779:
    {
        returnValue = F("Strandzugang 19");
        break;
    }
    case 300780:
    {
        returnValue = F("Strandzugang 19 - Aktionsstrand");
        break;
    }
    case 300781:
    {
        returnValue = F("Strandzugang 2");
        break;
    }
    case 300782:
    {
        returnValue = F("Strandzugang 20");
        break;
    }
    case 300783:
    {
        returnValue = F("Strandzugang 21");
        break;
    }
    case 300784:
    {
        returnValue = F("Strandzugang 22");
        break;
    }
    case 300785:
    {
        returnValue = F("Strandzugang 22/23");
        break;
    }
    case 300786:
    {
        returnValue = F("Strandzugang 23");
        break;
    }
    case 300787:
    {
        returnValue = F("Strandzugang 24");
        break;
    }
    case 300788:
    {
        returnValue = F("Strandzugang 25");
        break;
    }
    case 300789:
    {
        returnValue = F("Strandzugang 27");
        break;
    }
    case 300790:
    {
        returnValue = F("Strandzugang 28");
        break;
    }
    case 300791:
    {
        returnValue = F("Strandzugang 29");
        break;
    }
    case 300792:
    {
        returnValue = F("Strandzugang 3");
        break;
    }
    case 300793:
    {
        returnValue = F("Strandzugang 30");
        break;
    }
    case 300794:
    {
        returnValue = F("Strandzugang 31");
        break;
    }
    case 300795:
    {
        returnValue = F("Strandzugang 33");
        break;
    }
    case 300796:
    {
        returnValue = F("Strandzugang 34");
        break;
    }
    case 300797:
    {
        returnValue = F("Strandzugang 35");
        break;
    }
    case 300798:
    {
        returnValue = F("Strandzugang 36");
        break;
    }
    case 300799:
    {
        returnValue = F("Strandzugang 39");
        break;
    }
    case 300800:
    {
        returnValue = F("Strandzugang 4");
        break;
    }
    case 300801:
    {
        returnValue = F("Strandzugang 40");
        break;
    }
    case 300802:
    {
        returnValue = F("Strandzugang 44");
        break;
    }
    case 300803:
    {
        returnValue = F("Strandzugang 48");
        break;
    }
    case 300804:
    {
        returnValue = F("Strandzugang 5");
        break;
    }
    case 300805:
    {
        returnValue = F("Strandzugang 50");
        break;
    }
    case 300806:
    {
        returnValue = F("Strandzugang 52");
        break;
    }
    case 300807:
    {
        returnValue = F("Strandzugang 53");
        break;
    }
    case 300808:
    {
        returnValue = F("Strandzugang 54");
        break;
    }
    case 300809:
    {
        returnValue = F("Strandzugang 56");
        break;
    }
    case 300810:
    {
        returnValue = F("Strandzugang 57");
        break;
    }
    case 300811:
    {
        returnValue = F("Strandzugang 6");
        break;
    }
    case 300812:
    {
        returnValue = F("Strandzugang 7");
        break;
    }
    case 300813:
    {
        returnValue = F("Strandzugang Dünenhaus");
        break;
    }
    case 300814:
    {
        returnValue = F("Strandzugang Kreptitz");
        break;
    }
    case 300815:
    {
        returnValue = F("Strandzugang Nr. 2");
        break;
    }
    case 300816:
    {
        returnValue = F("Strandzugang Nr. 3");
        break;
    }
    case 300817:
    {
        returnValue = F("Strandzugang Nr. 4");
        break;
    }
    case 300818:
    {
        returnValue = F("Strandzugang Nr. 5");
        break;
    }
    case 300819:
    {
        returnValue = F("Strandzugang Nr. 6");
        break;
    }
    case 300820:
    {
        returnValue = F("Strandzugang Nr. 7");
        break;
    }
    case 300821:
    {
        returnValue = F("Strandzugang Nr. 8");
        break;
    }
    case 300822:
    {
        returnValue = F("Strandübergang 1 Ahrenshoop");
        break;
    }
    case 300823:
    {
        returnValue = F("Strandübergang 10");
        break;
    }
    case 300824:
    {
        returnValue = F("Strandübergang 11");
        break;
    }
    case 300825:
    {
        returnValue = F("Strandübergang 12");
        break;
    }
    case 300826:
    {
        returnValue = F("Strandübergang 12 Ahrenshoop");
        break;
    }
    case 300827:
    {
        returnValue = F("Strandübergang 13");
        break;
    }
    case 300828:
    {
        returnValue = F("Strandübergang 13 Ahrenshoop");
        break;
    }
    case 300829:
    {
        returnValue = F("Strandübergang 14");
        break;
    }
    case 300830:
    {
        returnValue = F("Strandübergang 14 Ahrenshoop");
        break;
    }
    case 300831:
    {
        returnValue = F("Strandübergang 15");
        break;
    }
    case 300832:
    {
        returnValue = F("Strandübergang 16");
        break;
    }
    case 300833:
    {
        returnValue = F("Strandübergang 17");
        break;
    }
    case 300834:
    {
        returnValue = F("Strandübergang 18");
        break;
    }
    case 300835:
    {
        returnValue = F("Strandübergang 19");
        break;
    }
    case 300836:
    {
        returnValue = F("Strandübergang 2");
        break;
    }
    case 300837:
    {
        returnValue = F("Strandübergang 2 Ahrenshoop");
        break;
    }
    case 300838:
    {
        returnValue = F("Strandübergang 20");
        break;
    }
    case 300839:
    {
        returnValue = F("Strandübergang 21");
        break;
    }
    case 300840:
    {
        returnValue = F("Strandübergang 22");
        break;
    }
    case 300841:
    {
        returnValue = F("Strandübergang 3");
        break;
    }
    case 300842:
    {
        returnValue = F("Strandübergang 3 Ahrenshoop");
        break;
    }
    case 300843:
    {
        returnValue = F("Strandübergang 4");
        break;
    }
    case 300844:
    {
        returnValue = F("Strandübergang 46");
        break;
    }
    case 300845:
    {
        returnValue = F("Strandübergang 5 Ahrenshoop");
        break;
    }
    case 300846:
    {
        returnValue = F("Strandübergang 5 Born");
        break;
    }
    case 300847:
    {
        returnValue = F("Strandübergang 6");
        break;
    }
    case 300848:
    {
        returnValue = F("Strandübergang 7");
        break;
    }
    case 300849:
    {
        returnValue = F("Strandübergang 8");
        break;
    }
    case 300850:
    {
        returnValue = F("Strandübergang 9");
        break;
    }
    case 300851:
    {
        returnValue = F("Strang");
        break;
    }
    case 300852:
    {
        returnValue = F("Strange");
        break;
    }
    case 300853:
    {
        returnValue = F("Strangenackerweg");
        break;
    }
    case 300854:
    {
        returnValue = F("Strangenstr.");
        break;
    }
    case 300855:
    {
        returnValue = F("Strangenweg");
        break;
    }
    case 300856:
    {
        returnValue = F("Stranger Str.");
        break;
    }
    case 300857:
    {
        returnValue = F("Strangeweg");
        break;
    }
    case 300858:
    {
        returnValue = F("Stranggasse");
        break;
    }
    case 300859:
    {
        returnValue = F("Strangheidgesweg");
        break;
    }
    case 300860:
    {
        returnValue = F("Strangstr.");
        break;
    }
    case 300861:
    {
        returnValue = F("Strangweg");
        break;
    }
    case 300862:
    {
        returnValue = F("Strankdiek");
        break;
    }
    case 300863:
    {
        returnValue = F("Strankweg");
        break;
    }
    case 300864:
    {
        returnValue = F("Stranzenbach");
        break;
    }
    case 300865:
    {
        returnValue = F("Strasburger Chaussee");
        break;
    }
    case 300866:
    {
        returnValue = F("Strasburger Weg");
        break;
    }
    case 300867:
    {
        returnValue = F("Strasburgerstr.");
        break;
    }
    case 300868:
    {
        returnValue = F("Strasener Chaussee");
        break;
    }
    case 300869:
    {
        returnValue = F("Strasoldoweg");
        break;
    }
    case 300870:
    {
        returnValue = F("Strassacker");
        break;
    }
    case 300871:
    {
        returnValue = F("Strasse der Freundschaft");
        break;
    }
    case 300872:
    {
        returnValue = F("Strasselteichweg");
        break;
    }
    case 300873:
    {
        returnValue = F("Strasser Weg");
        break;
    }
    case 300874:
    {
        returnValue = F("Strassersbergstr.");
        break;
    }
    case 300875:
    {
        returnValue = F("Strassmühle");
        break;
    }
    case 300876:
    {
        returnValue = F("Strassweg");
        break;
    }
    case 300877:
    {
        returnValue = F("Strassäckerweg");
        break;
    }
    case 300878:
    {
        returnValue = F("Strategischer Bahndamm");
        break;
    }
    case 300879:
    {
        returnValue = F("Stratenbrook");
        break;
    }
    case 300880:
    {
        returnValue = F("Stratenkamp");
        break;
    }
    case 300881:
    {
        returnValue = F("Stratenkoppel");
        break;
    }
    case 300882:
    {
        returnValue = F("Straterhofweg");
        break;
    }
    case 300883:
    {
        returnValue = F("Strathstr.");
        break;
    }
    case 300884:
    {
        returnValue = F("Strathweg");
        break;
    }
    case 300885:
    {
        returnValue = F("Stratmanns Gärten");
        break;
    }
    case 300886:
    {
        returnValue = F("Stratmanns Weg");
        break;
    }
    case 300887:
    {
        returnValue = F("Stratmannstr.");
        break;
    }
    case 300888:
    {
        returnValue = F("Stratmannsweg");
        break;
    }
    case 300889:
    {
        returnValue = F("Stratthausweg");
        break;
    }
    case 300890:
    {
        returnValue = F("Stratumer Str.");
        break;
    }
    case 300891:
    {
        returnValue = F("Straubeleswaldweg");
        break;
    }
    case 300892:
    {
        returnValue = F("Straubelgasse");
        break;
    }
    case 300893:
    {
        returnValue = F("Straubelstr.");
        break;
    }
    case 300894:
    {
        returnValue = F("Strauben");
        break;
    }
    case 300895:
    {
        returnValue = F("Straubenbergstr.");
        break;
    }
    case 300896:
    {
        returnValue = F("Straubengasse");
        break;
    }
    case 300897:
    {
        returnValue = F("Straubenhalde");
        break;
    }
    case 300898:
    {
        returnValue = F("Straubenhardtstr.");
        break;
    }
    case 300899:
    {
        returnValue = F("Straubenhecke");
        break;
    }
    case 300900:
    {
        returnValue = F("Straubenmühle");
        break;
    }
    case 300901:
    {
        returnValue = F("Straubenrain");
        break;
    }
    case 300902:
    {
        returnValue = F("Straubenweg");
        break;
    }
    case 300903:
    {
        returnValue = F("Straubeweg");
        break;
    }
    case 300904:
    {
        returnValue = F("Straubinger Str.");
        break;
    }
    case 300905:
    {
        returnValue = F("Straubinger Weg");
        break;
    }
    case 300906:
    {
        returnValue = F("Straubweg");
        break;
    }
    case 300907:
    {
        returnValue = F("Strauch");
        break;
    }
    case 300908:
    {
        returnValue = F("Strauchbachweg");
        break;
    }
    case 300909:
    {
        returnValue = F("Strauchbergweg");
        break;
    }
    case 300910:
    {
        returnValue = F("Strauchbrunnen");
        break;
    }
    case 300911:
    {
        returnValue = F("Strauchbrunnenweg");
        break;
    }
    case 300912:
    {
        returnValue = F("Strauchelgasse");
        break;
    }
    case 300913:
    {
        returnValue = F("Strauchenbruchweg");
        break;
    }
    case 300914:
    {
        returnValue = F("Straucher Str.");
        break;
    }
    case 300915:
    {
        returnValue = F("Straucher Weg");
        break;
    }
    case 300916:
    {
        returnValue = F("Straucherweg");
        break;
    }
    case 300917:
    {
        returnValue = F("Strauchgarten");
        break;
    }
    case 300918:
    {
        returnValue = F("Strauchgasse");
        break;
    }
    case 300919:
    {
        returnValue = F("Strauchgraben");
        break;
    }
    case 300920:
    {
        returnValue = F("Strauchheide");
        break;
    }
    case 300921:
    {
        returnValue = F("Strauchhof");
        break;
    }
    case 300922:
    {
        returnValue = F("Strauchmühle");
        break;
    }
    case 300923:
    {
        returnValue = F("Strauchstieggasse");
        break;
    }
    case 300924:
    {
        returnValue = F("Strauchstr.");
        break;
    }
    case 300925:
    {
        returnValue = F("Strauchweg");
        break;
    }
    case 300926:
    {
        returnValue = F("Strauer Str.");
        break;
    }
    case 300927:
    {
        returnValue = F("Strauer Torweg");
        break;
    }
    case 300928:
    {
        returnValue = F("Straukenweg");
        break;
    }
    case 300929:
    {
        returnValue = F("Straupitzer Weg");
        break;
    }
    case 300930:
    {
        returnValue = F("Straupitzstr.");
        break;
    }
    case 300931:
    {
        returnValue = F("Strausberger Landstr.");
        break;
    }
    case 300932:
    {
        returnValue = F("Strausberger Str.");
        break;
    }
    case 300933:
    {
        returnValue = F("Strausberger Weg");
        break;
    }
    case 300934:
    {
        returnValue = F("Strausbergstr.");
        break;
    }
    case 300935:
    {
        returnValue = F("Strauss-Weg");
        break;
    }
    case 300936:
    {
        returnValue = F("Strausseepromenade");
        break;
    }
    case 300937:
    {
        returnValue = F("Straussenbühlweg");
        break;
    }
    case 300938:
    {
        returnValue = F("Straussenweg");
        break;
    }
    case 300939:
    {
        returnValue = F("Straussgasse");
        break;
    }
    case 300940:
    {
        returnValue = F("Straussstr.");
        break;
    }
    case 300941:
    {
        returnValue = F("Straussweg");
        break;
    }
    case 300942:
    {
        returnValue = F("Strausweg");
        break;
    }
    case 300943:
    {
        returnValue = F("Strauteweg");
        break;
    }
    case 300944:
    {
        returnValue = F("Strautfeld");
        break;
    }
    case 300945:
    {
        returnValue = F("Strautweg");
        break;
    }
    case 300946:
    {
        returnValue = F("Strauß");
        break;
    }
    case 300947:
    {
        returnValue = F("Straußberg");
        break;
    }
    case 300948:
    {
        returnValue = F("Straußberger Str.");
        break;
    }
    case 300949:
    {
        returnValue = F("Straußbergstr.");
        break;
    }
    case 300950:
    {
        returnValue = F("Straußbergweg");
        break;
    }
    case 300951:
    {
        returnValue = F("Straußenbühl");
        break;
    }
    case 300952:
    {
        returnValue = F("Straußende");
        break;
    }
    case 300953:
    {
        returnValue = F("Straußfurter Str.");
        break;
    }
    case 300954:
    {
        returnValue = F("Straußgasse");
        break;
    }
    case 300955:
    {
        returnValue = F("Straußhofer Siedlung");
        break;
    }
    case 300956:
    {
        returnValue = F("Straußstr.");
        break;
    }
    case 300957:
    {
        returnValue = F("Straußweg");
        break;
    }
    case 300958:
    {
        returnValue = F("Strawinskystr.");
        break;
    }
    case 300959:
    {
        returnValue = F("Straß");
        break;
    }
    case 300960:
    {
        returnValue = F("Straßacker");
        break;
    }
    case 300961:
    {
        returnValue = F("Straßackerweg");
        break;
    }
    case 300962:
    {
        returnValue = F("Straßberg");
        break;
    }
    case 300963:
    {
        returnValue = F("Straßberger Stadtweg");
        break;
    }
    case 300964:
    {
        returnValue = F("Straßberger Str.");
        break;
    }
    case 300965:
    {
        returnValue = F("Straßbergweg");
        break;
    }
    case 300966:
    {
        returnValue = F("Straßbuckel");
        break;
    }
    case 300967:
    {
        returnValue = F("Straßburg");
        break;
    }
    case 300968:
    {
        returnValue = F("Straßburger Allee");
        break;
    }
    case 300969:
    {
        returnValue = F("Straßburger Platz");
        break;
    }
    case 300970:
    {
        returnValue = F("Straßburger Ring");
        break;
    }
    case 300971:
    {
        returnValue = F("Straßburger Str.");
        break;
    }
    case 300972:
    {
        returnValue = F("Straßburger Weg");
        break;
    }
    case 300973:
    {
        returnValue = F("Straßburgerhof");
        break;
    }
    case 300974:
    {
        returnValue = F("Straßburgerhofstr.");
        break;
    }
    case 300975:
    {
        returnValue = F("Straßburgstr.");
        break;
    }
    case 300976:
    {
        returnValue = F("Straßbündten");
        break;
    }
    case 300977:
    {
        returnValue = F("Straßbüscher Weg");
        break;
    }
    case 300978:
    {
        returnValue = F("Straßdorf");
        break;
    }
    case 300979:
    {
        returnValue = F("Straßdorfen");
        break;
    }
    case 300980:
    {
        returnValue = F("Straßdorfer Str.");
        break;
    }
    case 300981:
    {
        returnValue = F("Straßfeld");
        break;
    }
    case 300982:
    {
        returnValue = F("Straßfelder Str.");
        break;
    }
    case 300983:
    {
        returnValue = F("Straßfeldring");
        break;
    }
    case 300984:
    {
        returnValue = F("Straßfeldstr.");
        break;
    }
    case 300985:
    {
        returnValue = F("Straßfeldweg");
        break;
    }
    case 300986:
    {
        returnValue = F("Straßfeldwweg");
        break;
    }
    case 300987:
    {
        returnValue = F("Straßgarten");
        break;
    }
    case 300988:
    {
        returnValue = F("Straßgrub");
        break;
    }
    case 300989:
    {
        returnValue = F("Straßgärten");
        break;
    }
    case 300990:
    {
        returnValue = F("Straßham");
        break;
    }
    case 300991:
    {
        returnValue = F("Straßhamer Str.");
        break;
    }
    case 300992:
    {
        returnValue = F("Straßhaus");
        break;
    }
    case 300993:
    {
        returnValue = F("Straßhausener Str.");
        break;
    }
    case 300994:
    {
        returnValue = F("Straßhauser Str.");
        break;
    }
    case 300995:
    {
        returnValue = F("Straßheimer Weg");
        break;
    }
    case 300996:
    {
        returnValue = F("Straßhof");
        break;
    }
    case 300997:
    {
        returnValue = F("Straßhofweg");
        break;
    }
    case 300998:
    {
        returnValue = F("Straßkirchener Weg");
        break;
    }
    case 300999:
    {
        returnValue = F("Straßkirchner Str.");
        break;
    }
    case 301000:
    {
        returnValue = F("Straßlandweg");
        break;
    }
    case 301001:
    {
        returnValue = F("Straßlichte");
        break;
    }
    case 301002:
    {
        returnValue = F("Straßlweg");
        break;
    }
    case 301003:
    {
        returnValue = F("Straßmaierweg");
        break;
    }
    case 301004:
    {
        returnValue = F("Straßmair Allee");
        break;
    }
    case 301005:
    {
        returnValue = F("Straßmühle");
        break;
    }
    case 301006:
    {
        returnValue = F("Straßoldoweg");
        break;
    }
    case 301007:
    {
        returnValue = F("Straßweg");
        break;
    }
    case 301008:
    {
        returnValue = F("Straßäcker");
        break;
    }
    case 301009:
    {
        returnValue = F("Straßäckerallee");
        break;
    }
    case 301010:
    {
        returnValue = F("Straßäckerstr.");
        break;
    }
    case 301011:
    {
        returnValue = F("Straßäckerweg");
        break;
    }
    case 301012:
    {
        returnValue = F("Straßöd");
        break;
    }
    case 301013:
    {
        returnValue = F("Straßösch");
        break;
    }
    case 301014:
    {
        returnValue = F("Strebendorfer Str.");
        break;
    }
    case 301015:
    {
        returnValue = F("Strebsgasse");
        break;
    }
    case 301016:
    {
        returnValue = F("Streckauer Str.");
        break;
    }
    case 301017:
    {
        returnValue = F("Streckenpfad");
        break;
    }
    case 301018:
    {
        returnValue = F("Streckenthiner Dorfstr.");
        break;
    }
    case 301019:
    {
        returnValue = F("Streckenverlauf 1932-1965");
        break;
    }
    case 301020:
    {
        returnValue = F("Streckenweg");
        break;
    }
    case 301021:
    {
        returnValue = F("Streckere");
        break;
    }
    case 301022:
    {
        returnValue = F("Streckerplatz");
        break;
    }
    case 301023:
    {
        returnValue = F("Streckerring");
        break;
    }
    case 301024:
    {
        returnValue = F("Streckers Gang");
        break;
    }
    case 301025:
    {
        returnValue = F("Streckerweg");
        break;
    }
    case 301026:
    {
        returnValue = F("Streckewalder Str.");
        break;
    }
    case 301027:
    {
        returnValue = F("Streckfussweg");
        break;
    }
    case 301028:
    {
        returnValue = F("Streckfuß");
        break;
    }
    case 301029:
    {
        returnValue = F("Strecktalpark");
        break;
    }
    case 301030:
    {
        returnValue = F("Streckweg");
        break;
    }
    case 301031:
    {
        returnValue = F("Streehorn");
        break;
    }
    case 301032:
    {
        returnValue = F("Streek");
        break;
    }
    case 301033:
    {
        returnValue = F("Streekdamm");
        break;
    }
    case 301034:
    {
        returnValue = F("Streekenweg");
        break;
    }
    case 301035:
    {
        returnValue = F("Streeker Str.");
        break;
    }
    case 301036:
    {
        returnValue = F("Streeker Weg");
        break;
    }
    case 301037:
    {
        returnValue = F("Streekmoorweg");
        break;
    }
    case 301038:
    {
        returnValue = F("Streekstr.");
        break;
    }
    case 301039:
    {
        returnValue = F("Streeksweg");
        break;
    }
    case 301040:
    {
        returnValue = F("Streekweg");
        break;
    }
    case 301041:
    {
        returnValue = F("Streelsweg");
        break;
    }
    case 301042:
    {
        returnValue = F("Streepshörn");
        break;
    }
    case 301043:
    {
        returnValue = F("Streesower Dorfstr.");
        break;
    }
    case 301044:
    {
        returnValue = F("Street of Waterjetting");
        break;
    }
    case 301045:
    {
        returnValue = F("Streetstr.");
        break;
    }
    case 301046:
    {
        returnValue = F("Streffenweg");
        break;
    }
    case 301047:
    {
        returnValue = F("Streganzer Dorfstr.");
        break;
    }
    case 301048:
    {
        returnValue = F("Streganzer Str.");
        break;
    }
    case 301049:
    {
        returnValue = F("Stregdaer Allee");
        break;
    }
    case 301050:
    {
        returnValue = F("Strehbergweg");
        break;
    }
    case 301051:
    {
        returnValue = F("Strehlaer Str.");
        break;
    }
    case 301052:
    {
        returnValue = F("Strehlaer Weg");
        break;
    }
    case 301053:
    {
        returnValue = F("Strehlauer Str.");
        break;
    }
    case 301054:
    {
        returnValue = F("Strehlenbergstr.");
        break;
    }
    case 301055:
    {
        returnValue = F("Strehlener Dorfstr.");
        break;
    }
    case 301056:
    {
        returnValue = F("Strehlener Str.");
        break;
    }
    case 301057:
    {
        returnValue = F("Strehlepromenade");
        break;
    }
    case 301058:
    {
        returnValue = F("Strehlhofer Weg");
        break;
    }
    case 301059:
    {
        returnValue = F("Strehlhofweg");
        break;
    }
    case 301060:
    {
        returnValue = F("Strehlow");
        break;
    }
    case 301061:
    {
        returnValue = F("Strehlower Weg");
        break;
    }
    case 301062:
    {
        returnValue = F("Strehlsweg");
        break;
    }
    case 301063:
    {
        returnValue = F("Streibeleinstr.");
        break;
    }
    case 301064:
    {
        returnValue = F("Streiblstr.");
        break;
    }
    case 301065:
    {
        returnValue = F("Streiblweg");
        break;
    }
    case 301066:
    {
        returnValue = F("Streichbett");
        break;
    }
    case 301067:
    {
        returnValue = F("Streichdamm");
        break;
    }
    case 301068:
    {
        returnValue = F("Streichelbergweg");
        break;
    }
    case 301069:
    {
        returnValue = F("Streichelzoo");
        break;
    }
    case 301070:
    {
        returnValue = F("Streichenbachstr.");
        break;
    }
    case 301071:
    {
        returnValue = F("Streichenberger Str.");
        break;
    }
    case 301072:
    {
        returnValue = F("Streichental");
        break;
    }
    case 301073:
    {
        returnValue = F("Streichentaler Str.");
        break;
    }
    case 301074:
    {
        returnValue = F("Streichenweg");
        break;
    }
    case 301075:
    {
        returnValue = F("Streicher Weg");
        break;
    }
    case 301076:
    {
        returnValue = F("Streichersweide");
        break;
    }
    case 301077:
    {
        returnValue = F("Streicherweg");
        break;
    }
    case 301078:
    {
        returnValue = F("Streichet");
        break;
    }
    case 301079:
    {
        returnValue = F("Streicheweg");
        break;
    }
    case 301080:
    {
        returnValue = F("Streichhaldenstr.");
        break;
    }
    case 301081:
    {
        returnValue = F("Streichholzbrücke");
        break;
    }
    case 301082:
    {
        returnValue = F("Streichmühler Str.");
        break;
    }
    case 301083:
    {
        returnValue = F("Streichweg");
        break;
    }
    case 301084:
    {
        returnValue = F("Streichwitzer Str.");
        break;
    }
    case 301085:
    {
        returnValue = F("Streichwitzer Weg");
        break;
    }
    case 301086:
    {
        returnValue = F("Streifelbachstr.");
        break;
    }
    case 301087:
    {
        returnValue = F("Streifershäusleweg");
        break;
    }
    case 301088:
    {
        returnValue = F("Streiffelder Hof");
        break;
    }
    case 301089:
    {
        returnValue = F("Streiffelder Str.");
        break;
    }
    case 301090:
    {
        returnValue = F("Streiflacher Str.");
        break;
    }
    case 301091:
    {
        returnValue = F("Streifleshaldeweg");
        break;
    }
    case 301092:
    {
        returnValue = F("Streifleskopfweg");
        break;
    }
    case 301093:
    {
        returnValue = F("Streifstr.");
        break;
    }
    case 301094:
    {
        returnValue = F("Streijerring");
        break;
    }
    case 301095:
    {
        returnValue = F("Streimerich");
        break;
    }
    case 301096:
    {
        returnValue = F("Streinen Esch");
        break;
    }
    case 301097:
    {
        returnValue = F("Streinweg");
        break;
    }
    case 301098:
    {
        returnValue = F("Streitanger");
        break;
    }
    case 301099:
    {
        returnValue = F("Streitauer Hauptstr.");
        break;
    }
    case 301100:
    {
        returnValue = F("Streitauer Str.");
        break;
    }
    case 301101:
    {
        returnValue = F("Streitbachweg");
        break;
    }
    case 301102:
    {
        returnValue = F("Streitbaumweg");
        break;
    }
    case 301103:
    {
        returnValue = F("Streitberg");
        break;
    }
    case 301104:
    {
        returnValue = F("Streitberger Berg");
        break;
    }
    case 301105:
    {
        returnValue = F("Streitberger Siedlung");
        break;
    }
    case 301106:
    {
        returnValue = F("Streitberger Str.");
        break;
    }
    case 301107:
    {
        returnValue = F("Streitberger Weg");
        break;
    }
    case 301108:
    {
        returnValue = F("Streitbergweg");
        break;
    }
    case 301109:
    {
        returnValue = F("Streitbichlweg");
        break;
    }
    case 301110:
    {
        returnValue = F("Streitborn");
        break;
    }
    case 301111:
    {
        returnValue = F("Streitbrunnenweg");
        break;
    }
    case 301112:
    {
        returnValue = F("Streitburg");
        break;
    }
    case 301113:
    {
        returnValue = F("Streitbuschweg");
        break;
    }
    case 301114:
    {
        returnValue = F("Streitbühl");
        break;
    }
    case 301115:
    {
        returnValue = F("Streitbühlweg");
        break;
    }
    case 301116:
    {
        returnValue = F("Streitenau");
        break;
    }
    case 301117:
    {
        returnValue = F("Streitenburg");
        break;
    }
    case 301118:
    {
        returnValue = F("Streiter Str.");
        break;
    }
    case 301119:
    {
        returnValue = F("Streitergasse");
        break;
    }
    case 301120:
    {
        returnValue = F("Streitfeld");
        break;
    }
    case 301121:
    {
        returnValue = F("Streitfelder Str.");
        break;
    }
    case 301122:
    {
        returnValue = F("Streitfelder Weg");
        break;
    }
    case 301123:
    {
        returnValue = F("Streitgasse");
        break;
    }
    case 301124:
    {
        returnValue = F("Streitgierenweg");
        break;
    }
    case 301125:
    {
        returnValue = F("Streithain");
        break;
    }
    case 301126:
    {
        returnValue = F("Streithainer Str.");
        break;
    }
    case 301127:
    {
        returnValue = F("Streitheide");
        break;
    }
    case 301128:
    {
        returnValue = F("Streitheimer Str.");
        break;
    }
    case 301129:
    {
        returnValue = F("Streithof");
        break;
    }
    case 301130:
    {
        returnValue = F("Streitholz");
        break;
    }
    case 301131:
    {
        returnValue = F("Streitholzweg");
        break;
    }
    case 301132:
    {
        returnValue = F("Streithorstweg");
        break;
    }
    case 301133:
    {
        returnValue = F("Streithöfe");
        break;
    }
    case 301134:
    {
        returnValue = F("Streithöferfeld");
        break;
    }
    case 301135:
    {
        returnValue = F("Streitkopfweg");
        break;
    }
    case 301136:
    {
        returnValue = F("Streitlandstr.");
        break;
    }
    case 301137:
    {
        returnValue = F("Streitmühle");
        break;
    }
    case 301138:
    {
        returnValue = F("Streitner");
        break;
    }
    case 301139:
    {
        returnValue = F("Streitsdöll");
        break;
    }
    case 301140:
    {
        returnValue = F("Streitsteikeweg");
        break;
    }
    case 301141:
    {
        returnValue = F("Streitstr.");
        break;
    }
    case 301142:
    {
        returnValue = F("Streitstück");
        break;
    }
    case 301143:
    {
        returnValue = F("Streittorstr.");
        break;
    }
    case 301144:
    {
        returnValue = F("Streitwalder Str.");
        break;
    }
    case 301145:
    {
        returnValue = F("Streitwaldweg");
        break;
    }
    case 301146:
    {
        returnValue = F("Streitweg");
        break;
    }
    case 301147:
    {
        returnValue = F("Streitwiesen");
        break;
    }
    case 301148:
    {
        returnValue = F("Streitwiesenweg");
        break;
    }
    case 301149:
    {
        returnValue = F("Streitwäldle");
        break;
    }
    case 301150:
    {
        returnValue = F("Streitäckerweg");
        break;
    }
    case 301151:
    {
        returnValue = F("Strelastr.");
        break;
    }
    case 301152:
    {
        returnValue = F("Strelasundblick");
        break;
    }
    case 301153:
    {
        returnValue = F("Strelgasse");
        break;
    }
    case 301154:
    {
        returnValue = F("Strelitzer Chaussee");
        break;
    }
    case 301155:
    {
        returnValue = F("Strelitzer Str.");
        break;
    }
    case 301156:
    {
        returnValue = F("Strelitzstr.");
        break;
    }
    case 301157:
    {
        returnValue = F("Strellner Park");
        break;
    }
    case 301158:
    {
        returnValue = F("Strellner Str.");
        break;
    }
    case 301159:
    {
        returnValue = F("Strelow");
        break;
    }
    case 301160:
    {
        returnValue = F("Strelower Weg");
        break;
    }
    case 301161:
    {
        returnValue = F("Stremel");
        break;
    }
    case 301162:
    {
        returnValue = F("Stremelweg");
        break;
    }
    case 301163:
    {
        returnValue = F("Stremmener Dorfstr.");
        break;
    }
    case 301164:
    {
        returnValue = F("Stremmener Weg");
        break;
    }
    case 301165:
    {
        returnValue = F("Stremmestr.");
        break;
    }
    case 301166:
    {
        returnValue = F("Stremmeweg");
        break;
    }
    case 301167:
    {
        returnValue = F("Strenberger Str.");
        break;
    }
    case 301168:
    {
        returnValue = F("Strenge Tür");
        break;
    }
    case 301169:
    {
        returnValue = F("Strenge-Furth-Flügel");
        break;
    }
    case 301170:
    {
        returnValue = F("Strengelweg");
        break;
    }
    case 301171:
    {
        returnValue = F("Strengenberg");
        break;
    }
    case 301172:
    {
        returnValue = F("Strengenbergstr.");
        break;
    }
    case 301173:
    {
        returnValue = F("Strenger Weg");
        break;
    }
    case 301174:
    {
        returnValue = F("Strengerstr.");
        break;
    }
    case 301175:
    {
        returnValue = F("Strengestr.");
        break;
    }
    case 301176:
    {
        returnValue = F("Strengstr.");
        break;
    }
    case 301177:
    {
        returnValue = F("Strenz Ausbau");
        break;
    }
    case 301178:
    {
        returnValue = F("Strenzer Weg");
        break;
    }
    case 301179:
    {
        returnValue = F("Strenznauendorfer Weg");
        break;
    }
    case 301180:
    {
        returnValue = F("Strepen");
        break;
    }
    case 301181:
    {
        returnValue = F("Streplingerode");
        break;
    }
    case 301182:
    {
        returnValue = F("Streppichweg");
        break;
    }
    case 301183:
    {
        returnValue = F("Stresdorf");
        break;
    }
    case 301184:
    {
        returnValue = F("Stresdorfer Weg");
        break;
    }
    case 301185:
    {
        returnValue = F("Stresemannallee");
        break;
    }
    case 301186:
    {
        returnValue = F("Stresemannplatz");
        break;
    }
    case 301187:
    {
        returnValue = F("Stresemannstr.");
        break;
    }
    case 301188:
    {
        returnValue = F("Stresemannweg");
        break;
    }
    case 301189:
    {
        returnValue = F("Stresendorfer Weg");
        break;
    }
    case 301190:
    {
        returnValue = F("Stresower Allee");
        break;
    }
    case 301191:
    {
        returnValue = F("Stresower Weg");
        break;
    }
    case 301192:
    {
        returnValue = F("Stressenhäuser Bahnhofstr.");
        break;
    }
    case 301193:
    {
        returnValue = F("Stressenhäuser Dorfstr.");
        break;
    }
    case 301194:
    {
        returnValue = F("Stressenhäuser Hintere Gasse");
        break;
    }
    case 301195:
    {
        returnValue = F("Stretense");
        break;
    }
    case 301196:
    {
        returnValue = F("Streu");
        break;
    }
    case 301197:
    {
        returnValue = F("Streuberg");
        break;
    }
    case 301198:
    {
        returnValue = F("Streuberger Weg");
        break;
    }
    case 301199:
    {
        returnValue = F("Streublick");
        break;
    }
    case 301200:
    {
        returnValue = F("Streudorfer Str.");
        break;
    }
    case 301201:
    {
        returnValue = F("Streuer Weg");
        break;
    }
    case 301202:
    {
        returnValue = F("Streuerwiese");
        break;
    }
    case 301203:
    {
        returnValue = F("Streufdorfer Bahnhofstr.");
        break;
    }
    case 301204:
    {
        returnValue = F("Streufdorfer Gartenstr.");
        break;
    }
    case 301205:
    {
        returnValue = F("Streufdorfer Str.");
        break;
    }
    case 301206:
    {
        returnValue = F("Streuffstr.");
        break;
    }
    case 301207:
    {
        returnValue = F("Streufleckhüttenweg");
        break;
    }
    case 301208:
    {
        returnValue = F("Streufsweg");
        break;
    }
    case 301209:
    {
        returnValue = F("Streufswiese");
        break;
    }
    case 301210:
    {
        returnValue = F("Streugarten");
        break;
    }
    case 301211:
    {
        returnValue = F("Streugasse");
        break;
    }
    case 301212:
    {
        returnValue = F("Streumener Str.");
        break;
    }
    case 301213:
    {
        returnValue = F("Streunthaler Weg");
        break;
    }
    case 301214:
    {
        returnValue = F("Streuobst");
        break;
    }
    case 301215:
    {
        returnValue = F("Streuobst-Erlebnispfad");
        break;
    }
    case 301216:
    {
        returnValue = F("Streuobsterlebnisgarten Panholling");
        break;
    }
    case 301217:
    {
        returnValue = F("Streuobstlehrpfad Waldorf");
        break;
    }
    case 301218:
    {
        returnValue = F("Streuobstmuseum am Mühlbach-Rundweg");
        break;
    }
    case 301219:
    {
        returnValue = F("Streuobstpflanzung \"Kesterter Schwarze");
        break;
    }
    case 301220:
    {
        returnValue = F("Streuobstwiese");
        break;
    }
    case 301221:
    {
        returnValue = F("Streuobstwiesen-Biotop");
        break;
    }
    case 301222:
    {
        returnValue = F("Streuobstwiesenweg");
        break;
    }
    case 301223:
    {
        returnValue = F("Streuobswiese Apfelweg");
        break;
    }
    case 301224:
    {
        returnValue = F("Streusandstr.");
        break;
    }
    case 301225:
    {
        returnValue = F("Streutalblick");
        break;
    }
    case 301226:
    {
        returnValue = F("Streuverwäch");
        break;
    }
    case 301227:
    {
        returnValue = F("Streuweg");
        break;
    }
    case 301228:
    {
        returnValue = F("Streußeläckerweg");
        break;
    }
    case 301229:
    {
        returnValue = F("Streystättenring");
        break;
    }
    case 301230:
    {
        returnValue = F("Streystättenweg");
        break;
    }
    case 301231:
    {
        returnValue = F("Strezerberg");
        break;
    }
    case 301232:
    {
        returnValue = F("Streßelfeld");
        break;
    }
    case 301233:
    {
        returnValue = F("Striblweg");
        break;
    }
    case 301234:
    {
        returnValue = F("Strich-Chapell-Str.");
        break;
    }
    case 301235:
    {
        returnValue = F("Stricher Weg");
        break;
    }
    case 301236:
    {
        returnValue = F("Strick");
        break;
    }
    case 301237:
    {
        returnValue = F("Stricke");
        break;
    }
    case 301238:
    {
        returnValue = F("Stricker");
        break;
    }
    case 301239:
    {
        returnValue = F("Stricker Str.");
        break;
    }
    case 301240:
    {
        returnValue = F("Strickerburg");
        break;
    }
    case 301241:
    {
        returnValue = F("Strickergasse");
        break;
    }
    case 301242:
    {
        returnValue = F("Strickers Höhe");
        break;
    }
    case 301243:
    {
        returnValue = F("Strickerstr.");
        break;
    }
    case 301244:
    {
        returnValue = F("Strickerweg");
        break;
    }
    case 301245:
    {
        returnValue = F("Strickgasse");
        break;
    }
    case 301246:
    {
        returnValue = F("Strickherdicker Weg");
        break;
    }
    case 301247:
    {
        returnValue = F("Strickholtstr.");
        break;
    }
    case 301248:
    {
        returnValue = F("Strickkamp");
        break;
    }
    case 301249:
    {
        returnValue = F("Strickleinsweg");
        break;
    }
    case 301250:
    {
        returnValue = F("Strickmühle");
        break;
    }
    case 301251:
    {
        returnValue = F("Stricksbrink");
        break;
    }
    case 301252:
    {
        returnValue = F("Strickstroot");
        break;
    }
    case 301253:
    {
        returnValue = F("Strickweg");
        break;
    }
    case 301254:
    {
        returnValue = F("Striddingsweg");
        break;
    }
    case 301255:
    {
        returnValue = F("Strieb'n");
        break;
    }
    case 301256:
    {
        returnValue = F("Striebing");
        break;
    }
    case 301257:
    {
        returnValue = F("Stried");
        break;
    }
    case 301258:
    {
        returnValue = F("Strieder Weg");
        break;
    }
    case 301259:
    {
        returnValue = F("Striedlstr.");
        break;
    }
    case 301260:
    {
        returnValue = F("Striedtmoorweg");
        break;
    }
    case 301261:
    {
        returnValue = F("Striegasse");
        break;
    }
    case 301262:
    {
        returnValue = F("Striegauer Str.");
        break;
    }
    case 301263:
    {
        returnValue = F("Striegauer Weg");
        break;
    }
    case 301264:
    {
        returnValue = F("Striegelgasse");
        break;
    }
    case 301265:
    {
        returnValue = F("Striegelsbungert");
        break;
    }
    case 301266:
    {
        returnValue = F("Striegelweg");
        break;
    }
    case 301267:
    {
        returnValue = F("Striegeläcker");
        break;
    }
    case 301268:
    {
        returnValue = F("Striegerstr.");
        break;
    }
    case 301269:
    {
        returnValue = F("Striegistalstr.");
        break;
    }
    case 301270:
    {
        returnValue = F("Striegistalweg");
        break;
    }
    case 301271:
    {
        returnValue = F("Striegisweg");
        break;
    }
    case 301272:
    {
        returnValue = F("Strieglberg");
        break;
    }
    case 301273:
    {
        returnValue = F("Striegnitzer Str.");
        break;
    }
    case 301274:
    {
        returnValue = F("Striehtweg");
        break;
    }
    case 301275:
    {
        returnValue = F("Striehweg");
        break;
    }
    case 301276:
    {
        returnValue = F("Striekeler Str.");
        break;
    }
    case 301277:
    {
        returnValue = F("Strielchenweg");
        break;
    }
    case 301278:
    {
        returnValue = F("Striemelsbergstr.");
        break;
    }
    case 301279:
    {
        returnValue = F("Striemende");
        break;
    }
    case 301280:
    {
        returnValue = F("Striep");
        break;
    }
    case 301281:
    {
        returnValue = F("Striepe");
        break;
    }
    case 301282:
    {
        returnValue = F("Striepen");
        break;
    }
    case 301283:
    {
        returnValue = F("Striepenweg");
        break;
    }
    case 301284:
    {
        returnValue = F("Strieper Diek");
        break;
    }
    case 301285:
    {
        returnValue = F("Striesa");
        break;
    }
    case 301286:
    {
        returnValue = F("Striesaer Weg");
        break;
    }
    case 301287:
    {
        returnValue = F("Striesterweg");
        break;
    }
    case 301288:
    {
        returnValue = F("Strietfeld");
        break;
    }
    case 301289:
    {
        returnValue = F("Strietfelder Str.");
        break;
    }
    case 301290:
    {
        returnValue = F("Striethmannstr.");
        break;
    }
    case 301291:
    {
        returnValue = F("Striethweg");
        break;
    }
    case 301292:
    {
        returnValue = F("Strietkamp");
        break;
    }
    case 301293:
    {
        returnValue = F("Strietland");
        break;
    }
    case 301294:
    {
        returnValue = F("Strietmersch");
        break;
    }
    case 301295:
    {
        returnValue = F("Strietstr.");
        break;
    }
    case 301296:
    {
        returnValue = F("Strietsträßle");
        break;
    }
    case 301297:
    {
        returnValue = F("Strietwaldstr.");
        break;
    }
    case 301298:
    {
        returnValue = F("Strietweg");
        break;
    }
    case 301299:
    {
        returnValue = F("Strietwiesenweg");
        break;
    }
    case 301300:
    {
        returnValue = F("Striewitzweg");
        break;
    }
    case 301301:
    {
        returnValue = F("Striezelweg");
        break;
    }
    case 301302:
    {
        returnValue = F("Strießener Str.");
        break;
    }
    case 301303:
    {
        returnValue = F("Strießener Weg");
        break;
    }
    case 301304:
    {
        returnValue = F("Strießhardt");
        break;
    }
    case 301305:
    {
        returnValue = F("Striggow");
        break;
    }
    case 301306:
    {
        returnValue = F("Strihnbarg");
        break;
    }
    case 301307:
    {
        returnValue = F("Strikers Einöde");
        break;
    }
    case 301308:
    {
        returnValue = F("Strindbergweg");
        break;
    }
    case 301309:
    {
        returnValue = F("Strinzer Weg");
        break;
    }
    case 301310:
    {
        returnValue = F("Strippenweg");
        break;
    }
    case 301311:
    {
        returnValue = F("Stripperhook");
        break;
    }
    case 301312:
    {
        returnValue = F("Strittberg");
        break;
    }
    case 301313:
    {
        returnValue = F("Stritterhofer Weg");
        break;
    }
    case 301314:
    {
        returnValue = F("Strittheidestr.");
        break;
    }
    case 301315:
    {
        returnValue = F("Strittig");
        break;
    }
    case 301316:
    {
        returnValue = F("Strittkamm");
        break;
    }
    case 301317:
    {
        returnValue = F("Strittmatt");
        break;
    }
    case 301318:
    {
        returnValue = F("Strittmatterstr.");
        break;
    }
    case 301319:
    {
        returnValue = F("Strittstr.");
        break;
    }
    case 301320:
    {
        returnValue = F("Strixnerweg");
        break;
    }
    case 301321:
    {
        returnValue = F("Strobandtstr.");
        break;
    }
    case 301322:
    {
        returnValue = F("Strobelallee");
        break;
    }
    case 301323:
    {
        returnValue = F("Strobelplatz");
        break;
    }
    case 301324:
    {
        returnValue = F("Strobels");
        break;
    }
    case 301325:
    {
        returnValue = F("Strobelstr.");
        break;
    }
    case 301326:
    {
        returnValue = F("Strobelweg");
        break;
    }
    case 301327:
    {
        returnValue = F("Strobenrieder Str.");
        break;
    }
    case 301328:
    {
        returnValue = F("Strobenweg");
        break;
    }
    case 301329:
    {
        returnValue = F("Stroblhofweg");
        break;
    }
    case 301330:
    {
        returnValue = F("Stroblstr.");
        break;
    }
    case 301331:
    {
        returnValue = F("Strochenweg");
        break;
    }
    case 301332:
    {
        returnValue = F("Strocken");
        break;
    }
    case 301333:
    {
        returnValue = F("Strodeweg");
        break;
    }
    case 301334:
    {
        returnValue = F("Strodtsweg");
        break;
    }
    case 301335:
    {
        returnValue = F("Stroen");
        break;
    }
    case 301336:
    {
        returnValue = F("Stroevenkamp");
        break;
    }
    case 301337:
    {
        returnValue = F("Strogaer Str.");
        break;
    }
    case 301338:
    {
        returnValue = F("Strogenstr.");
        break;
    }
    case 301339:
    {
        returnValue = F("Strogenweg");
        break;
    }
    case 301340:
    {
        returnValue = F("Strohbach");
        break;
    }
    case 301341:
    {
        returnValue = F("Strohberg");
        break;
    }
    case 301342:
    {
        returnValue = F("Strohbergstr.");
        break;
    }
    case 301343:
    {
        returnValue = F("Strohblumenweg");
        break;
    }
    case 301344:
    {
        returnValue = F("Strohbrede");
        break;
    }
    case 301345:
    {
        returnValue = F("Strohdeich");
        break;
    }
    case 301346:
    {
        returnValue = F("Strohdorf");
        break;
    }
    case 301347:
    {
        returnValue = F("Strohe");
        break;
    }
    case 301348:
    {
        returnValue = F("Stroheicher Str.");
        break;
    }
    case 301349:
    {
        returnValue = F("Strohen");
        break;
    }
    case 301350:
    {
        returnValue = F("Strohenweg");
        break;
    }
    case 301351:
    {
        returnValue = F("Stroher Damm");
        break;
    }
    case 301352:
    {
        returnValue = F("Strohgasse");
        break;
    }
    case 301353:
    {
        returnValue = F("Strohgäuring");
        break;
    }
    case 301354:
    {
        returnValue = F("Strohgäustr.");
        break;
    }
    case 301355:
    {
        returnValue = F("Strohhof");
        break;
    }
    case 301356:
    {
        returnValue = F("Strohhofstr.");
        break;
    }
    case 301357:
    {
        returnValue = F("Strohhut");
        break;
    }
    case 301358:
    {
        returnValue = F("Strohlauxenweg");
        break;
    }
    case 301359:
    {
        returnValue = F("Strohloch");
        break;
    }
    case 301360:
    {
        returnValue = F("Strohmaierstr.");
        break;
    }
    case 301361:
    {
        returnValue = F("Strohmannsorter Weg");
        break;
    }
    case 301362:
    {
        returnValue = F("Strohmarkt");
        break;
    }
    case 301363:
    {
        returnValue = F("Strohmathen");
        break;
    }
    case 301364:
    {
        returnValue = F("Strohmeier");
        break;
    }
    case 301365:
    {
        returnValue = F("Strohmeierweg");
        break;
    }
    case 301366:
    {
        returnValue = F("Strohmeyerweg");
        break;
    }
    case 301367:
    {
        returnValue = F("Strohmorgen");
        break;
    }
    case 301368:
    {
        returnValue = F("Strohmühleweg");
        break;
    }
    case 301369:
    {
        returnValue = F("Strohner Str.");
        break;
    }
    case 301370:
    {
        returnValue = F("Strohofer Feld");
        break;
    }
    case 301371:
    {
        returnValue = F("Strohpadd");
        break;
    }
    case 301372:
    {
        returnValue = F("Strohsack");
        break;
    }
    case 301373:
    {
        returnValue = F("Strohstiege");
        break;
    }
    case 301374:
    {
        returnValue = F("Strohstr.");
        break;
    }
    case 301375:
    {
        returnValue = F("Strohtempelweg");
        break;
    }
    case 301376:
    {
        returnValue = F("Strohwalder Str.");
        break;
    }
    case 301377:
    {
        returnValue = F("Strohwattweg");
        break;
    }
    case 301378:
    {
        returnValue = F("Strohweg");
        break;
    }
    case 301379:
    {
        returnValue = F("Strohweiler Str.");
        break;
    }
    case 301380:
    {
        returnValue = F("Strohwiese");
        break;
    }
    case 301381:
    {
        returnValue = F("Stroje Damm");
        break;
    }
    case 301382:
    {
        returnValue = F("Strombachstr.");
        break;
    }
    case 301383:
    {
        returnValue = F("Strombeckstr.");
        break;
    }
    case 301384:
    {
        returnValue = F("Stromberg");
        break;
    }
    case 301385:
    {
        returnValue = F("Stromberger Str.");
        break;
    }
    case 301386:
    {
        returnValue = F("Stromberger Tor");
        break;
    }
    case 301387:
    {
        returnValue = F("Strombergstr.");
        break;
    }
    case 301388:
    {
        returnValue = F("Strombergweg");
        break;
    }
    case 301389:
    {
        returnValue = F("Stromerstr.");
        break;
    }
    case 301390:
    {
        returnValue = F("Stromeyerstr.");
        break;
    }
    case 301391:
    {
        returnValue = F("Strompfad");
        break;
    }
    case 301392:
    {
        returnValue = F("Stromstr.");
        break;
    }
    case 301393:
    {
        returnValue = F("Stromweg");
        break;
    }
    case 301394:
    {
        returnValue = F("Strontianitstr.");
        break;
    }
    case 301395:
    {
        returnValue = F("Stroot");
        break;
    }
    case 301396:
    {
        returnValue = F("Strootbreede");
        break;
    }
    case 301397:
    {
        returnValue = F("Strootburg");
        break;
    }
    case 301398:
    {
        returnValue = F("Strooter Gast");
        break;
    }
    case 301399:
    {
        returnValue = F("Strooter Kampen");
        break;
    }
    case 301400:
    {
        returnValue = F("Strooter Weg");
        break;
    }
    case 301401:
    {
        returnValue = F("Strootfelde");
        break;
    }
    case 301402:
    {
        returnValue = F("Stroothof");
        break;
    }
    case 301403:
    {
        returnValue = F("Strootkamp");
        break;
    }
    case 301404:
    {
        returnValue = F("Stroppstr.");
        break;
    }
    case 301405:
    {
        returnValue = F("Strosberg");
        break;
    }
    case 301406:
    {
        returnValue = F("Strossenkamp");
        break;
    }
    case 301407:
    {
        returnValue = F("Strote");
        break;
    }
    case 301408:
    {
        returnValue = F("Strotenweg");
        break;
    }
    case 301409:
    {
        returnValue = F("Stroth");
        break;
    }
    case 301410:
    {
        returnValue = F("Strothakenweg");
        break;
    }
    case 301411:
    {
        returnValue = F("Strothe");
        break;
    }
    case 301412:
    {
        returnValue = F("Strother Heuweg");
        break;
    }
    case 301413:
    {
        returnValue = F("Strother Kamp");
        break;
    }
    case 301414:
    {
        returnValue = F("Strother Str.");
        break;
    }
    case 301415:
    {
        returnValue = F("Strother Weg");
        break;
    }
    case 301416:
    {
        returnValue = F("Strothestr.");
        break;
    }
    case 301417:
    {
        returnValue = F("Strotheweg");
        break;
    }
    case 301418:
    {
        returnValue = F("Strothheide");
        break;
    }
    case 301419:
    {
        returnValue = F("Strothjohann Weg");
        break;
    }
    case 301420:
    {
        returnValue = F("Strothmanns Kamp");
        break;
    }
    case 301421:
    {
        returnValue = F("Strothmannsdamm");
        break;
    }
    case 301422:
    {
        returnValue = F("Strothmannsweg");
        break;
    }
    case 301423:
    {
        returnValue = F("Strothmoor");
        break;
    }
    case 301424:
    {
        returnValue = F("Strothort");
        break;
    }
    case 301425:
    {
        returnValue = F("Strothweg");
        break;
    }
    case 301426:
    {
        returnValue = F("Strotkampweg");
        break;
    }
    case 301427:
    {
        returnValue = F("Strotweg");
        break;
    }
    case 301428:
    {
        returnValue = F("Strotwiesen");
        break;
    }
    case 301429:
    {
        returnValue = F("Stroudstr.");
        break;
    }
    case 301430:
    {
        returnValue = F("Strousbergstr.");
        break;
    }
    case 301431:
    {
        returnValue = F("Strouts Wai");
        break;
    }
    case 301432:
    {
        returnValue = F("Strubberg");
        break;
    }
    case 301433:
    {
        returnValue = F("Strubbergstr.");
        break;
    }
    case 301434:
    {
        returnValue = F("Strubenstr.");
        break;
    }
    case 301435:
    {
        returnValue = F("Struberberg");
        break;
    }
    case 301436:
    {
        returnValue = F("Strubering");
        break;
    }
    case 301437:
    {
        returnValue = F("Struchtrup");
        break;
    }
    case 301438:
    {
        returnValue = F("Struckberg");
        break;
    }
    case 301439:
    {
        returnValue = F("Struckbreite");
        break;
    }
    case 301440:
    {
        returnValue = F("Struckbrook");
        break;
    }
    case 301441:
    {
        returnValue = F("Struckenkamp");
        break;
    }
    case 301442:
    {
        returnValue = F("Struckerhof");
        break;
    }
    case 301443:
    {
        returnValue = F("Struckerweg");
        break;
    }
    case 301444:
    {
        returnValue = F("Struckhusen");
        break;
    }
    case 301445:
    {
        returnValue = F("Struckkoppel");
        break;
    }
    case 301446:
    {
        returnValue = F("Struckmanns Wiese");
        break;
    }
    case 301447:
    {
        returnValue = F("Strucksfeld");
        break;
    }
    case 301448:
    {
        returnValue = F("Struckslindenweg");
        break;
    }
    case 301449:
    {
        returnValue = F("Struckstr.");
        break;
    }
    case 301450:
    {
        returnValue = F("Strucksweg");
        break;
    }
    case 301451:
    {
        returnValue = F("Struckweg");
        break;
    }
    case 301452:
    {
        returnValue = F("Struckwiese");
        break;
    }
    case 301453:
    {
        returnValue = F("Strudder Weg");
        break;
    }
    case 301454:
    {
        returnValue = F("Strudelstr.");
        break;
    }
    case 301455:
    {
        returnValue = F("Strudelweg");
        break;
    }
    case 301456:
    {
        returnValue = F("Strudengaustr.");
        break;
    }
    case 301457:
    {
        returnValue = F("Strudthof");
        break;
    }
    case 301458:
    {
        returnValue = F("Strufestr.");
        break;
    }
    case 301459:
    {
        returnValue = F("Strugaweg");
        break;
    }
    case 301460:
    {
        returnValue = F("Struhbach");
        break;
    }
    case 301461:
    {
        returnValue = F("Strukbusch");
        break;
    }
    case 301462:
    {
        returnValue = F("Strukkamp");
        break;
    }
    case 301463:
    {
        returnValue = F("Strullendorfer Str.");
        break;
    }
    case 301464:
    {
        returnValue = F("Strullenweg");
        break;
    }
    case 301465:
    {
        returnValue = F("Strullerweg");
        break;
    }
    case 301466:
    {
        returnValue = F("Strullgasse");
        break;
    }
    case 301467:
    {
        returnValue = F("Strullstr.");
        break;
    }
    case 301468:
    {
        returnValue = F("Strumannstr.");
        break;
    }
    case 301469:
    {
        returnValue = F("Strummendorfer Weg");
        break;
    }
    case 301470:
    {
        returnValue = F("Strumpelburg");
        break;
    }
    case 301471:
    {
        returnValue = F("Strumpfgasse");
        break;
    }
    case 301472:
    {
        returnValue = F("Strumpfgrund");
        break;
    }
    case 301473:
    {
        returnValue = F("Strumpfwirkersteig");
        break;
    }
    case 301474:
    {
        returnValue = F("Strumpfwirkerweg");
        break;
    }
    case 301475:
    {
        returnValue = F("Strundener Str.");
        break;
    }
    case 301476:
    {
        returnValue = F("Strunkhausen");
        break;
    }
    case 301477:
    {
        returnValue = F("Strunkpfad");
        break;
    }
    case 301478:
    {
        returnValue = F("Strunksecken");
        break;
    }
    case 301479:
    {
        returnValue = F("Strunwai");
        break;
    }
    case 301480:
    {
        returnValue = F("Strunwoi");
        break;
    }
    case 301481:
    {
        returnValue = F("Strunzstr.");
        break;
    }
    case 301482:
    {
        returnValue = F("Strupfegasse");
        break;
    }
    case 301483:
    {
        returnValue = F("Struppener Str.");
        break;
    }
    case 301484:
    {
        returnValue = F("Struppenmossweg");
        break;
    }
    case 301485:
    {
        returnValue = F("Struppgasse");
        break;
    }
    case 301486:
    {
        returnValue = F("Struppiusstr.");
        break;
    }
    case 301487:
    {
        returnValue = F("Struppstr.");
        break;
    }
    case 301488:
    {
        returnValue = F("Strupselweg");
        break;
    }
    case 301489:
    {
        returnValue = F("Strusbekweg");
        break;
    }
    case 301490:
    {
        returnValue = F("Struskamp");
        break;
    }
    case 301491:
    {
        returnValue = F("Strut");
        break;
    }
    case 301492:
    {
        returnValue = F("Strutfeldstr.");
        break;
    }
    case 301493:
    {
        returnValue = F("Strutgasse");
        break;
    }
    case 301494:
    {
        returnValue = F("Struth");
        break;
    }
    case 301495:
    {
        returnValue = F("Struth-Mühle");
        break;
    }
    case 301496:
    {
        returnValue = F("Struthberg");
        break;
    }
    case 301497:
    {
        returnValue = F("Struthbergstr.");
        break;
    }
    case 301498:
    {
        returnValue = F("Struthblick");
        break;
    }
    case 301499:
    {
        returnValue = F("Struthbornweg");
        break;
    }
    case 301500:
    {
        returnValue = F("Struthbreite");
        break;
    }
    case 301501:
    {
        returnValue = F("Struther Str.");
        break;
    }
    case 301502:
    {
        returnValue = F("Struther Tor");
        break;
    }
    case 301503:
    {
        returnValue = F("Struther Weg");
        break;
    }
    case 301504:
    {
        returnValue = F("Struthgasse");
        break;
    }
    case 301505:
    {
        returnValue = F("Struthgrund");
        break;
    }
    case 301506:
    {
        returnValue = F("Struthmühle");
        break;
    }
    case 301507:
    {
        returnValue = F("Struthof");
        break;
    }
    case 301508:
    {
        returnValue = F("Struthofstr.");
        break;
    }
    case 301509:
    {
        returnValue = F("Struthrain");
        break;
    }
    case 301510:
    {
        returnValue = F("Struthsgasse");
        break;
    }
    case 301511:
    {
        returnValue = F("Struthstr.");
        break;
    }
    case 301512:
    {
        returnValue = F("Struthwaldstr.");
        break;
    }
    case 301513:
    {
        returnValue = F("Struthweg");
        break;
    }
    case 301514:
    {
        returnValue = F("Struthwiese");
        break;
    }
    case 301515:
    {
        returnValue = F("Struthäcker");
        break;
    }
    case 301516:
    {
        returnValue = F("Strutrain");
        break;
    }
    case 301517:
    {
        returnValue = F("Strutstr.");
        break;
    }
    case 301518:
    {
        returnValue = F("Struttfeld");
        break;
    }
    case 301519:
    {
        returnValue = F("Struttstr.");
        break;
    }
    case 301520:
    {
        returnValue = F("Struttweg");
        break;
    }
    case 301521:
    {
        returnValue = F("Strutweg");
        break;
    }
    case 301522:
    {
        returnValue = F("Strutzgasse");
        break;
    }
    case 301523:
    {
        returnValue = F("Struvenhüttener Str.");
        break;
    }
    case 301524:
    {
        returnValue = F("Struvestr.");
        break;
    }
    case 301525:
    {
        returnValue = F("Struveweg");
        break;
    }
    case 301526:
    {
        returnValue = F("Struwen-Patt");
        break;
    }
    case 301527:
    {
        returnValue = F("Struwenberger Str.");
        break;
    }
    case 301528:
    {
        returnValue = F("Struwepfad");
        break;
    }
    case 301529:
    {
        returnValue = F("Struwestr.");
        break;
    }
    case 301530:
    {
        returnValue = F("Stryckweg");
        break;
    }
    case 301531:
    {
        returnValue = F("Strählenwiesen");
        break;
    }
    case 301532:
    {
        returnValue = F("Sträkweg");
        break;
    }
    case 301533:
    {
        returnValue = F("Strängenweg");
        break;
    }
    case 301534:
    {
        returnValue = F("Stränger Str.");
        break;
    }
    case 301535:
    {
        returnValue = F("Strängle");
        break;
    }
    case 301536:
    {
        returnValue = F("Strängnäsweg");
        break;
    }
    case 301537:
    {
        returnValue = F("Strängstr.");
        break;
    }
    case 301538:
    {
        returnValue = F("Sträpel");
        break;
    }
    case 301539:
    {
        returnValue = F("Strässlesweg");
        break;
    }
    case 301540:
    {
        returnValue = F("Sträterstr.");
        break;
    }
    case 301541:
    {
        returnValue = F("Sträucher und Wildrosen der Schwäbischen Alb");
        break;
    }
    case 301542:
    {
        returnValue = F("Sträucherlehrgarten");
        break;
    }
    case 301543:
    {
        returnValue = F("Sträucherröhrenweg");
        break;
    }
    case 301544:
    {
        returnValue = F("Sträucherweg");
        break;
    }
    case 301545:
    {
        returnValue = F("Sträueichlesweg");
        break;
    }
    case 301546:
    {
        returnValue = F("Sträßchen");
        break;
    }
    case 301547:
    {
        returnValue = F("Sträßel");
        break;
    }
    case 301548:
    {
        returnValue = F("Sträßl");
        break;
    }
    case 301549:
    {
        returnValue = F("Sträßler Berg");
        break;
    }
    case 301550:
    {
        returnValue = F("Sträßler Str.");
        break;
    }
    case 301551:
    {
        returnValue = F("Sträßlerweg");
        break;
    }
    case 301552:
    {
        returnValue = F("Sträßlingerweg");
        break;
    }
    case 301553:
    {
        returnValue = F("Ströbecker Str.");
        break;
    }
    case 301554:
    {
        returnValue = F("Ströbecker Weg");
        break;
    }
    case 301555:
    {
        returnValue = F("Ströbing");
        break;
    }
    case 301556:
    {
        returnValue = F("Ströbinger Str.");
        break;
    }
    case 301557:
    {
        returnValue = F("Ströbitzer Str.");
        break;
    }
    case 301558:
    {
        returnValue = F("Ströbling");
        break;
    }
    case 301559:
    {
        returnValue = F("Ströetken");
        break;
    }
    case 301560:
    {
        returnValue = F("Ströhener Weg");
        break;
    }
    case 301561:
    {
        returnValue = F("Ströher Damm");
        break;
    }
    case 301562:
    {
        returnValue = F("Ströher Str.");
        break;
    }
    case 301563:
    {
        returnValue = F("Ströherstr.");
        break;
    }
    case 301564:
    {
        returnValue = F("Ströhlerweg");
        break;
    }
    case 301565:
    {
        returnValue = F("Ströhleweg");
        break;
    }
    case 301566:
    {
        returnValue = F("Ströhmfeldweg");
        break;
    }
    case 301567:
    {
        returnValue = F("Ströhnstr.");
        break;
    }
    case 301568:
    {
        returnValue = F("Ströhnweg");
        break;
    }
    case 301569:
    {
        returnValue = F("Strönfeldstr.");
        break;
    }
    case 301570:
    {
        returnValue = F("Strönstiege");
        break;
    }
    case 301571:
    {
        returnValue = F("Strönwai");
        break;
    }
    case 301572:
    {
        returnValue = F("Ströpel");
        break;
    }
    case 301573:
    {
        returnValue = F("Strössendorfer Weg");
        break;
    }
    case 301574:
    {
        returnValue = F("Ströther Börnchen");
        break;
    }
    case 301575:
    {
        returnValue = F("Ströther Weg");
        break;
    }
    case 301576:
    {
        returnValue = F("Strötzbacher Weg");
        break;
    }
    case 301577:
    {
        returnValue = F("Strößener Str.");
        break;
    }
    case 301578:
    {
        returnValue = F("Strößwitz");
        break;
    }
    case 301579:
    {
        returnValue = F("Ströätken");
        break;
    }
    case 301580:
    {
        returnValue = F("Strübecke");
        break;
    }
    case 301581:
    {
        returnValue = F("Strübelmühle");
        break;
    }
    case 301582:
    {
        returnValue = F("Strübelweg");
        break;
    }
    case 301583:
    {
        returnValue = F("Strübings Heide");
        break;
    }
    case 301584:
    {
        returnValue = F("Strübingsberg");
        break;
    }
    case 301585:
    {
        returnValue = F("Strübstr.");
        break;
    }
    case 301586:
    {
        returnValue = F("Strücher Weg");
        break;
    }
    case 301587:
    {
        returnValue = F("Strücken");
        break;
    }
    case 301588:
    {
        returnValue = F("Strückener Weg");
        break;
    }
    case 301589:
    {
        returnValue = F("Strückenstr.");
        break;
    }
    case 301590:
    {
        returnValue = F("Strücker Str.");
        break;
    }
    case 301591:
    {
        returnValue = F("Strücker Weg");
        break;
    }
    case 301592:
    {
        returnValue = F("Strückerberger Str.");
        break;
    }
    case 301593:
    {
        returnValue = F("Strückhauser Str.");
        break;
    }
    case 301594:
    {
        returnValue = F("Strückhausermoor");
        break;
    }
    case 301595:
    {
        returnValue = F("Strühe");
        break;
    }
    case 301596:
    {
        returnValue = F("Strüker Weg");
        break;
    }
    case 301597:
    {
        returnValue = F("Strümpelsweg");
        break;
    }
    case 301598:
    {
        returnValue = F("Strümper Berg");
        break;
    }
    case 301599:
    {
        returnValue = F("Strümper Str.");
        break;
    }
    case 301600:
    {
        returnValue = F("Strümpfelbacher Fußweg");
        break;
    }
    case 301601:
    {
        returnValue = F("Strümpfelbacher Str.");
        break;
    }
    case 301602:
    {
        returnValue = F("Strümpfelbacher Weg");
        break;
    }
    case 301603:
    {
        returnValue = F("Strümpfelbachweg");
        break;
    }
    case 301604:
    {
        returnValue = F("Strümpfelbrunner Str.");
        break;
    }
    case 301605:
    {
        returnValue = F("Strümpfelbrunner Weg");
        break;
    }
    case 301606:
    {
        returnValue = F("Strümpfelhof");
        break;
    }
    case 301607:
    {
        returnValue = F("Strümpfelplatz");
        break;
    }
    case 301608:
    {
        returnValue = F("Strümpfeweg");
        break;
    }
    case 301609:
    {
        returnValue = F("Strümploh");
        break;
    }
    case 301610:
    {
        returnValue = F("Strünkeder Heide");
        break;
    }
    case 301611:
    {
        returnValue = F("Strünkerhof");
        break;
    }
    case 301612:
    {
        returnValue = F("Strütchen");
        break;
    }
    case 301613:
    {
        returnValue = F("Strütchenweg");
        break;
    }
    case 301614:
    {
        returnValue = F("Strüth");
        break;
    }
    case 301615:
    {
        returnValue = F("Strüthbachweg");
        break;
    }
    case 301616:
    {
        returnValue = F("Strüther Str.");
        break;
    }
    case 301617:
    {
        returnValue = F("Strüthweg");
        break;
    }
    case 301618:
    {
        returnValue = F("Strütleweg");
        break;
    }
    case 301619:
    {
        returnValue = F("Strütstr.");
        break;
    }
    case 301620:
    {
        returnValue = F("Strütsweg");
        break;
    }
    case 301621:
    {
        returnValue = F("Strütweg");
        break;
    }
    case 301622:
    {
        returnValue = F("Strüvensiek");
        break;
    }
    case 301623:
    {
        returnValue = F("Strüvenweg");
        break;
    }
    case 301624:
    {
        returnValue = F("Strüvergasse");
        break;
    }
    case 301625:
    {
        returnValue = F("Strüvertweg");
        break;
    }
    case 301626:
    {
        returnValue = F("Strüwestr.");
        break;
    }
    case 301627:
    {
        returnValue = F("Strüweweg");
        break;
    }
    case 301628:
    {
        returnValue = F("Strüßendorf");
        break;
    }
    case 301629:
    {
        returnValue = F("StuBA-Hain");
        break;
    }
    case 301630:
    {
        returnValue = F("Stubbachweg");
        break;
    }
    case 301631:
    {
        returnValue = F("Stubbe");
        break;
    }
    case 301632:
    {
        returnValue = F("Stubbe-Siedlung");
        break;
    }
    case 301633:
    {
        returnValue = F("Stubbemanns Kampe");
        break;
    }
    case 301634:
    {
        returnValue = F("Stubbenberg");
        break;
    }
    case 301635:
    {
        returnValue = F("Stubbenbornweg");
        break;
    }
    case 301636:
    {
        returnValue = F("Stubbendorf");
        break;
    }
    case 301637:
    {
        returnValue = F("Stubbendorffweg");
        break;
    }
    case 301638:
    {
        returnValue = F("Stubbendorfstr.");
        break;
    }
    case 301639:
    {
        returnValue = F("Stubbendränk");
        break;
    }
    case 301640:
    {
        returnValue = F("Stubbenende");
        break;
    }
    case 301641:
    {
        returnValue = F("Stubbener Feld");
        break;
    }
    case 301642:
    {
        returnValue = F("Stubbener Landstr.");
        break;
    }
    case 301643:
    {
        returnValue = F("Stubbener Schulstr.");
        break;
    }
    case 301644:
    {
        returnValue = F("Stubbener Str.");
        break;
    }
    case 301645:
    {
        returnValue = F("Stubbenheide");
        break;
    }
    case 301646:
    {
        returnValue = F("Stubbenhof");
        break;
    }
    case 301647:
    {
        returnValue = F("Stubbenhuk");
        break;
    }
    case 301648:
    {
        returnValue = F("Stubbenkammerstr.");
        break;
    }
    case 301649:
    {
        returnValue = F("Stubbenkamp");
        break;
    }
    case 301650:
    {
        returnValue = F("Stubbenkoppel");
        break;
    }
    case 301651:
    {
        returnValue = F("Stubbenkuhle");
        break;
    }
    case 301652:
    {
        returnValue = F("Stubbenrode");
        break;
    }
    case 301653:
    {
        returnValue = F("Stubbenwallweg");
        break;
    }
    case 301654:
    {
        returnValue = F("Stubbenweg");
        break;
    }
    case 301655:
    {
        returnValue = F("Stubbenwiese");
        break;
    }
    case 301656:
    {
        returnValue = F("Stubber Chaussee");
        break;
    }
    case 301657:
    {
        returnValue = F("Stubber Dorfstr.");
        break;
    }
    case 301658:
    {
        returnValue = F("Stubber Weg");
        break;
    }
    case 301659:
    {
        returnValue = F("Stubberei");
        break;
    }
    case 301660:
    {
        returnValue = F("Stubberholz");
        break;
    }
    case 301661:
    {
        returnValue = F("Stubbeweg");
        break;
    }
    case 301662:
    {
        returnValue = F("Stubbig");
        break;
    }
    case 301663:
    {
        returnValue = F("Stubbigweg");
        break;
    }
    case 301664:
    {
        returnValue = F("Stubbsweg");
        break;
    }
    case 301665:
    {
        returnValue = F("Stubelitt");
        break;
    }
    case 301666:
    {
        returnValue = F("Stuben");
        break;
    }
    case 301667:
    {
        returnValue = F("Stubenanger");
        break;
    }
    case 301668:
    {
        returnValue = F("Stubenbachstr.");
        break;
    }
    case 301669:
    {
        returnValue = F("Stubenbergstr.");
        break;
    }
    case 301670:
    {
        returnValue = F("Stubenbergsweg");
        break;
    }
    case 301671:
    {
        returnValue = F("Stubener Str.");
        break;
    }
    case 301672:
    {
        returnValue = F("Stubenfelsenweg");
        break;
    }
    case 301673:
    {
        returnValue = F("Stubengasse");
        break;
    }
    case 301674:
    {
        returnValue = F("Stubenhof");
        break;
    }
    case 301675:
    {
        returnValue = F("Stubenkreuz");
        break;
    }
    case 301676:
    {
        returnValue = F("Stubenrauchstr.");
        break;
    }
    case 301677:
    {
        returnValue = F("Stubenrauchweg");
        break;
    }
    case 301678:
    {
        returnValue = F("Stubensiek");
        break;
    }
    case 301679:
    {
        returnValue = F("Stubenstr.");
        break;
    }
    case 301680:
    {
        returnValue = F("Stubentalstr.");
        break;
    }
    case 301681:
    {
        returnValue = F("Stubentalsträßchen");
        break;
    }
    case 301682:
    {
        returnValue = F("Stubentalweg");
        break;
    }
    case 301683:
    {
        returnValue = F("Stubentränk-Schneise");
        break;
    }
    case 301684:
    {
        returnValue = F("Stubenwald-Allee");
        break;
    }
    case 301685:
    {
        returnValue = F("Stubenwaldstr.");
        break;
    }
    case 301686:
    {
        returnValue = F("Stubenweg");
        break;
    }
    case 301687:
    {
        returnValue = F("Stubenweiherweg");
        break;
    }
    case 301688:
    {
        returnValue = F("Stubenäcker");
        break;
    }
    case 301689:
    {
        returnValue = F("Stubenäckerweg");
        break;
    }
    case 301690:
    {
        returnValue = F("Stuberweg");
        break;
    }
    case 301691:
    {
        returnValue = F("Stublanger Str.");
        break;
    }
    case 301692:
    {
        returnValue = F("Stuckbreite");
        break;
    }
    case 301693:
    {
        returnValue = F("Stucken");
        break;
    }
    case 301694:
    {
        returnValue = F("Stucken-Mühlen-Weg");
        break;
    }
    case 301695:
    {
        returnValue = F("Stuckenborsteler Str.");
        break;
    }
    case 301696:
    {
        returnValue = F("Stuckenborsteler Weg");
        break;
    }
    case 301697:
    {
        returnValue = F("Stuckenbuscher Weg");
        break;
    }
    case 301698:
    {
        returnValue = F("Stuckenfeld");
        break;
    }
    case 301699:
    {
        returnValue = F("Stuckengasse");
        break;
    }
    case 301700:
    {
        returnValue = F("Stuckenmarsch");
        break;
    }
    case 301701:
    {
        returnValue = F("Stuckenstr.");
        break;
    }
    case 301702:
    {
        returnValue = F("Stuckenweg");
        break;
    }
    case 301703:
    {
        returnValue = F("Stuckertstr.");
        break;
    }
    case 301704:
    {
        returnValue = F("Stuckertweg");
        break;
    }
    case 301705:
    {
        returnValue = F("Stuckgasse");
        break;
    }
    case 301706:
    {
        returnValue = F("Stucksdorf");
        break;
    }
    case 301707:
    {
        returnValue = F("Stuckstr.");
        break;
    }
    case 301708:
    {
        returnValue = F("Stuckwaldweg");
        break;
    }
    case 301709:
    {
        returnValue = F("Stuckweg");
        break;
    }
    case 301710:
    {
        returnValue = F("Stuckäckerstr.");
        break;
    }
    case 301711:
    {
        returnValue = F("Studentenallee");
        break;
    }
    case 301712:
    {
        returnValue = F("Studentenberg");
        break;
    }
    case 301713:
    {
        returnValue = F("Studentenpark");
        break;
    }
    case 301714:
    {
        returnValue = F("Studentenring");
        break;
    }
    case 301715:
    {
        returnValue = F("Studentensteig");
        break;
    }
    case 301716:
    {
        returnValue = F("Studentenweg");
        break;
    }
    case 301717:
    {
        returnValue = F("Studerbildstr.");
        break;
    }
    case 301718:
    {
        returnValue = F("Studernheimer Weg");
        break;
    }
    case 301719:
    {
        returnValue = F("Studerstr.");
        break;
    }
    case 301720:
    {
        returnValue = F("Studhof");
        break;
    }
    case 301721:
    {
        returnValue = F("Studieker Weg");
        break;
    }
    case 301722:
    {
        returnValue = F("Studierweg");
        break;
    }
    case 301723:
    {
        returnValue = F("Studionstr.");
        break;
    }
    case 301724:
    {
        returnValue = F("Studnicastr.");
        break;
    }
    case 301725:
    {
        returnValue = F("Studnitzer Weg");
        break;
    }
    case 301726:
    {
        returnValue = F("Studtmannshof");
        break;
    }
    case 301727:
    {
        returnValue = F("Studtriede");
        break;
    }
    case 301728:
    {
        returnValue = F("Stueckenfeldstr.");
        break;
    }
    case 301729:
    {
        returnValue = F("Stuerschestr.");
        break;
    }
    case 301730:
    {
        returnValue = F("Stufacker");
        break;
    }
    case 301731:
    {
        returnValue = F("Stufelweg");
        break;
    }
    case 301732:
    {
        returnValue = F("Stufenberg");
        break;
    }
    case 301733:
    {
        returnValue = F("Stufenburgstr.");
        break;
    }
    case 301734:
    {
        returnValue = F("Stufenpyramide");
        break;
    }
    case 301735:
    {
        returnValue = F("Stufenstr.");
        break;
    }
    case 301736:
    {
        returnValue = F("Stufenweg");
        break;
    }
    case 301737:
    {
        returnValue = F("Stufenweg nach Dornburg");
        break;
    }
    case 301738:
    {
        returnValue = F("Stuffelsgasse");
        break;
    }
    case 301739:
    {
        returnValue = F("Stuffwisch");
        break;
    }
    case 301740:
    {
        returnValue = F("Stuhl");
        break;
    }
    case 301741:
    {
        returnValue = F("Stuhlbergstr.");
        break;
    }
    case 301742:
    {
        returnValue = F("Stuhlbruderhofstr.");
        break;
    }
    case 301743:
    {
        returnValue = F("Stuhlbrüderweg");
        break;
    }
    case 301744:
    {
        returnValue = F("Stuhlenbergstr.");
        break;
    }
    case 301745:
    {
        returnValue = F("Stuhllindenstr.");
        break;
    }
    case 301746:
    {
        returnValue = F("Stuhlmüllerstr.");
        break;
    }
    case 301747:
    {
        returnValue = F("Stuhlreiterweg");
        break;
    }
    case 301748:
    {
        returnValue = F("Stuhlsebenen Weg");
        break;
    }
    case 301749:
    {
        returnValue = F("Stuhlsteige");
        break;
    }
    case 301750:
    {
        returnValue = F("Stuhlstr.");
        break;
    }
    case 301751:
    {
        returnValue = F("Stuhlweg");
        break;
    }
    case 301752:
    {
        returnValue = F("Stuhmer Str.");
        break;
    }
    case 301753:
    {
        returnValue = F("Stuhmer Weg");
        break;
    }
    case 301754:
    {
        returnValue = F("Stuhrbaum");
        break;
    }
    case 301755:
    {
        returnValue = F("Stuhrenweg");
        break;
    }
    case 301756:
    {
        returnValue = F("Stuhrer Feld");
        break;
    }
    case 301757:
    {
        returnValue = F("Stuhrer Landstr.");
        break;
    }
    case 301758:
    {
        returnValue = F("Stuhrreihe");
        break;
    }
    case 301759:
    {
        returnValue = F("Stuhrsredder");
        break;
    }
    case 301760:
    {
        returnValue = F("Stuhtmannweg");
        break;
    }
    case 301761:
    {
        returnValue = F("Stuibenblick");
        break;
    }
    case 301762:
    {
        returnValue = F("Stuibenstr.");
        break;
    }
    case 301763:
    {
        returnValue = F("Stuibenweg");
        break;
    }
    case 301764:
    {
        returnValue = F("Stuifenstr.");
        break;
    }
    case 301765:
    {
        returnValue = F("Stuifenweg");
        break;
    }
    case 301766:
    {
        returnValue = F("Stukemeyerstr.");
        break;
    }
    case 301767:
    {
        returnValue = F("Stukenbergstr.");
        break;
    }
    case 301768:
    {
        returnValue = F("Stukenborg");
        break;
    }
    case 301769:
    {
        returnValue = F("Stukenborger Querdamm");
        break;
    }
    case 301770:
    {
        returnValue = F("Stukenborngasse");
        break;
    }
    case 301771:
    {
        returnValue = F("Stukenbrocker Str.");
        break;
    }
    case 301772:
    {
        returnValue = F("Stukenbrocker Weg");
        break;
    }
    case 301773:
    {
        returnValue = F("Stukendamm");
        break;
    }
    case 301774:
    {
        returnValue = F("Stukenfeld");
        break;
    }
    case 301775:
    {
        returnValue = F("Stukenhecke");
        break;
    }
    case 301776:
    {
        returnValue = F("Stukenhöfener Str.");
        break;
    }
    case 301777:
    {
        returnValue = F("Stukenland");
        break;
    }
    case 301778:
    {
        returnValue = F("Stukenweg");
        break;
    }
    case 301779:
    {
        returnValue = F("Stukreithsweg");
        break;
    }
    case 301780:
    {
        returnValue = F("Stulkenkamp");
        break;
    }
    case 301781:
    {
        returnValue = F("Stulkenweg");
        break;
    }
    case 301782:
    {
        returnValue = F("Stull");
        break;
    }
    case 301783:
    {
        returnValue = F("Stulz");
        break;
    }
    case 301784:
    {
        returnValue = F("Stumbeckbreite");
        break;
    }
    case 301785:
    {
        returnValue = F("Stumbshofstr.");
        break;
    }
    case 301786:
    {
        returnValue = F("Stummelberg");
        break;
    }
    case 301787:
    {
        returnValue = F("Stummeldorf");
        break;
    }
    case 301788:
    {
        returnValue = F("Stummelriede");
        break;
    }
    case 301789:
    {
        returnValue = F("Stummelstr.");
        break;
    }
    case 301790:
    {
        returnValue = F("Stummengäßle");
        break;
    }
    case 301791:
    {
        returnValue = F("Stummerichsweg");
        break;
    }
    case 301792:
    {
        returnValue = F("Stummerweg");
        break;
    }
    case 301793:
    {
        returnValue = F("Stummeyerweg");
        break;
    }
    case 301794:
    {
        returnValue = F("Stummhausen");
        break;
    }
    case 301795:
    {
        returnValue = F("Stummrigestr.");
        break;
    }
    case 301796:
    {
        returnValue = F("Stumoweg");
        break;
    }
    case 301797:
    {
        returnValue = F("Stumpacher Weg");
        break;
    }
    case 301798:
    {
        returnValue = F("Stumpebergweg");
        break;
    }
    case 301799:
    {
        returnValue = F("Stumpenallee");
        break;
    }
    case 301800:
    {
        returnValue = F("Stumpengasse");
        break;
    }
    case 301801:
    {
        returnValue = F("Stumpengrubsträßle");
        break;
    }
    case 301802:
    {
        returnValue = F("Stumpengässle");
        break;
    }
    case 301803:
    {
        returnValue = F("Stumpenhagen");
        break;
    }
    case 301804:
    {
        returnValue = F("Stumpenhalde");
        break;
    }
    case 301805:
    {
        returnValue = F("Stumpenhof");
        break;
    }
    case 301806:
    {
        returnValue = F("Stumpenser Mühle");
        break;
    }
    case 301807:
    {
        returnValue = F("Stumpenstr.");
        break;
    }
    case 301808:
    {
        returnValue = F("Stumpenweg");
        break;
    }
    case 301809:
    {
        returnValue = F("Stumpenweg Schuttern");
        break;
    }
    case 301810:
    {
        returnValue = F("Stumpenwiesen");
        break;
    }
    case 301811:
    {
        returnValue = F("Stumpenäcker");
        break;
    }
    case 301812:
    {
        returnValue = F("Stumpertenröder Mini Park");
        break;
    }
    case 301813:
    {
        returnValue = F("Stumpertenröder Str.");
        break;
    }
    case 301814:
    {
        returnValue = F("Stumpertenröder Weg");
        break;
    }
    case 301815:
    {
        returnValue = F("Stumpf");
        break;
    }
    case 301816:
    {
        returnValue = F("Stumpfallee");
        break;
    }
    case 301817:
    {
        returnValue = F("Stumpfe Ecke");
        break;
    }
    case 301818:
    {
        returnValue = F("Stumpfe Gäßchen");
        break;
    }
    case 301819:
    {
        returnValue = F("Stumpfebiel");
        break;
    }
    case 301820:
    {
        returnValue = F("Stumpfelsgasse");
        break;
    }
    case 301821:
    {
        returnValue = F("Stumpfenweg");
        break;
    }
    case 301822:
    {
        returnValue = F("Stumpfeturmstr.");
        break;
    }
    case 301823:
    {
        returnValue = F("Stumpfgasse");
        break;
    }
    case 301824:
    {
        returnValue = F("Stumpfgrabenstr.");
        break;
    }
    case 301825:
    {
        returnValue = F("Stumpfschneise");
        break;
    }
    case 301826:
    {
        returnValue = F("Stumpfsgasse");
        break;
    }
    case 301827:
    {
        returnValue = F("Stumpfstr.");
        break;
    }
    case 301828:
    {
        returnValue = F("Stumpfwaldstr.");
        break;
    }
    case 301829:
    {
        returnValue = F("Stumpfweg");
        break;
    }
    case 301830:
    {
        returnValue = F("Stumpfwiesenweg");
        break;
    }
    case 301831:
    {
        returnValue = F("Stumpfäckerweg");
        break;
    }
    case 301832:
    {
        returnValue = F("Stumpsweg");
        break;
    }
    case 301833:
    {
        returnValue = F("Stumsdorfer Chaussee");
        break;
    }
    case 301834:
    {
        returnValue = F("Stumsdorfer Str.");
        break;
    }
    case 301835:
    {
        returnValue = F("Stundensäule");
        break;
    }
    case 301836:
    {
        returnValue = F("Stundenweg");
        break;
    }
    case 301837:
    {
        returnValue = F("Stungen");
        break;
    }
    case 301838:
    {
        returnValue = F("Stunzachstr.");
        break;
    }
    case 301839:
    {
        returnValue = F("Stunzachweg");
        break;
    }
    case 301840:
    {
        returnValue = F("Stunzbergstr.");
        break;
    }
    case 301841:
    {
        returnValue = F("Stunzengasse");
        break;
    }
    case 301842:
    {
        returnValue = F("Stunzinger Str.");
        break;
    }
    case 301843:
    {
        returnValue = F("Stupbach");
        break;
    }
    case 301844:
    {
        returnValue = F("Stupfericher Grenzweg");
        break;
    }
    case 301845:
    {
        returnValue = F("Stupfericher Richtstatt");
        break;
    }
    case 301846:
    {
        returnValue = F("Stupfericher Weg");
        break;
    }
    case 301847:
    {
        returnValue = F("Stuppacherweg");
        break;
    }
    case 301848:
    {
        returnValue = F("Stuppelau");
        break;
    }
    case 301849:
    {
        returnValue = F("Stuppenkreuz");
        break;
    }
    case 301850:
    {
        returnValue = F("Stuppheide");
        break;
    }
    case 301851:
    {
        returnValue = F("Sturenberg");
        break;
    }
    case 301852:
    {
        returnValue = F("Sturenhagener Weg");
        break;
    }
    case 301853:
    {
        returnValue = F("Sturheide");
        break;
    }
    case 301854:
    {
        returnValue = F("Sturknapp");
        break;
    }
    case 301855:
    {
        returnValue = F("Sturmbauers Eck");
        break;
    }
    case 301856:
    {
        returnValue = F("Sturmbergstr.");
        break;
    }
    case 301857:
    {
        returnValue = F("Sturmburg");
        break;
    }
    case 301858:
    {
        returnValue = F("Sturmbäume");
        break;
    }
    case 301859:
    {
        returnValue = F("Sturmbühlweg");
        break;
    }
    case 301860:
    {
        returnValue = F("Sturmenweg");
        break;
    }
    case 301861:
    {
        returnValue = F("Sturmfederring");
        break;
    }
    case 301862:
    {
        returnValue = F("Sturmfederstr.");
        break;
    }
    case 301863:
    {
        returnValue = F("Sturmfelder Str.");
        break;
    }
    case 301864:
    {
        returnValue = F("Sturmgasse");
        break;
    }
    case 301865:
    {
        returnValue = F("Sturmholzsiedlung");
        break;
    }
    case 301866:
    {
        returnValue = F("Sturmholzweg");
        break;
    }
    case 301867:
    {
        returnValue = F("Sturmiusstr.");
        break;
    }
    case 301868:
    {
        returnValue = F("Sturms Weg");
        break;
    }
    case 301869:
    {
        returnValue = F("Sturmstr.");
        break;
    }
    case 301870:
    {
        returnValue = F("Sturmweg");
        break;
    }
    case 301871:
    {
        returnValue = F("Sturnstr.");
        break;
    }
    case 301872:
    {
        returnValue = F("Sturz-Weg");
        break;
    }
    case 301873:
    {
        returnValue = F("Sturzbergstr.");
        break;
    }
    case 301874:
    {
        returnValue = F("Sturzenhofstr.");
        break;
    }
    case 301875:
    {
        returnValue = F("Sturzgrube");
        break;
    }
    case 301876:
    {
        returnValue = F("Sturzstr.");
        break;
    }
    case 301877:
    {
        returnValue = F("Sturzwaldweg");
        break;
    }
    case 301878:
    {
        returnValue = F("Sturzweg");
        break;
    }
    case 301879:
    {
        returnValue = F("Sturzäckerstr.");
        break;
    }
    case 301880:
    {
        returnValue = F("Stutebüll");
        break;
    }
    case 301881:
    {
        returnValue = F("Stutebüllfeld");
        break;
    }
    case 301882:
    {
        returnValue = F("Stuten");
        break;
    }
    case 301883:
    {
        returnValue = F("Stutenhausstr.");
        break;
    }
    case 301884:
    {
        returnValue = F("Stutenhof");
        break;
    }
    case 301885:
    {
        returnValue = F("Stutenseer Allee");
        break;
    }
    case 301886:
    {
        returnValue = F("Stutenseer Querallee");
        break;
    }
    case 301887:
    {
        returnValue = F("Stutenstraat");
        break;
    }
    case 301888:
    {
        returnValue = F("Stutenweg");
        break;
    }
    case 301889:
    {
        returnValue = F("Stuthagen");
        break;
    }
    case 301890:
    {
        returnValue = F("Stuthwiese");
        break;
    }
    case 301891:
    {
        returnValue = F("Stutkoppel");
        break;
    }
    case 301892:
    {
        returnValue = F("Stutte Weiher");
        break;
    }
    case 301893:
    {
        returnValue = F("Stuttgarten Str.");
        break;
    }
    case 301894:
    {
        returnValue = F("Stuttgarter Platz");
        break;
    }
    case 301895:
    {
        returnValue = F("Stuttgarter Str.");
        break;
    }
    case 301896:
    {
        returnValue = F("Stuttgarter Weg");
        break;
    }
    case 301897:
    {
        returnValue = F("Stuttgarterweg");
        break;
    }
    case 301898:
    {
        returnValue = F("Stuttpferchallee");
        break;
    }
    case 301899:
    {
        returnValue = F("Stutweg");
        break;
    }
    case 301900:
    {
        returnValue = F("Stutweider Weg");
        break;
    }
    case 301901:
    {
        returnValue = F("Stutz");
        break;
    }
    case 301902:
    {
        returnValue = F("Stutz Rundweg");
        break;
    }
    case 301903:
    {
        returnValue = F("Stutzelestr.");
        break;
    }
    case 301904:
    {
        returnValue = F("Stutzenflur");
        break;
    }
    case 301905:
    {
        returnValue = F("Stutzenklinge");
        break;
    }
    case 301906:
    {
        returnValue = F("Stutzstr.");
        break;
    }
    case 301907:
    {
        returnValue = F("Stutzweg");
        break;
    }
    case 301908:
    {
        returnValue = F("Stuven");
        break;
    }
    case 301909:
    {
        returnValue = F("Stuvenbergsweg");
        break;
    }
    case 301910:
    {
        returnValue = F("Stuvenborner Str.");
        break;
    }
    case 301911:
    {
        returnValue = F("Stuvenborner Weg");
        break;
    }
    case 301912:
    {
        returnValue = F("Stuxenberger Str.");
        break;
    }
    case 301913:
    {
        returnValue = F("Stuxhof");
        break;
    }
    case 301914:
    {
        returnValue = F("Stuxhöhe");
        break;
    }
    case 301915:
    {
        returnValue = F("Stußweg");
        break;
    }
    case 301916:
    {
        returnValue = F("Stylerstr.");
        break;
    }
    case 301917:
    {
        returnValue = F("Stynegasse");
        break;
    }
    case 301918:
    {
        returnValue = F("Styrumstr.");
        break;
    }
    case 301919:
    {
        returnValue = F("Stäbchener Weg");
        break;
    }
    case 301920:
    {
        returnValue = F("Stäbelower Str.");
        break;
    }
    case 301921:
    {
        returnValue = F("Stäbelower Weg");
        break;
    }
    case 301922:
    {
        returnValue = F("Stäbelstr.");
        break;
    }
    case 301923:
    {
        returnValue = F("Stäch");
        break;
    }
    case 301924:
    {
        returnValue = F("Stäckäcker-Richtstatt");
        break;
    }
    case 301925:
    {
        returnValue = F("Städelbachweg");
        break;
    }
    case 301926:
    {
        returnValue = F("Städelgasse");
        break;
    }
    case 301927:
    {
        returnValue = F("Städelgrundweg");
        break;
    }
    case 301928:
    {
        returnValue = F("Städeweg");
        break;
    }
    case 301929:
    {
        returnValue = F("Städt. Übernachtung");
        break;
    }
    case 301930:
    {
        returnValue = F("Städtchen");
        break;
    }
    case 301931:
    {
        returnValue = F("Städtelner Str.");
        break;
    }
    case 301932:
    {
        returnValue = F("Städten");
        break;
    }
    case 301933:
    {
        returnValue = F("Städterain");
        break;
    }
    case 301934:
    {
        returnValue = F("Städtermühle");
        break;
    }
    case 301935:
    {
        returnValue = F("Städtersweg");
        break;
    }
    case 301936:
    {
        returnValue = F("Städtgraben");
        break;
    }
    case 301937:
    {
        returnValue = F("Städtische Hufe");
        break;
    }
    case 301938:
    {
        returnValue = F("Städtische Parkanlage - Spielplatz");
        break;
    }
    case 301939:
    {
        returnValue = F("Städtischer Waldpark");
        break;
    }
    case 301940:
    {
        returnValue = F("Städtlerstr.");
        break;
    }
    case 301941:
    {
        returnValue = F("Städtlesberg");
        break;
    }
    case 301942:
    {
        returnValue = F("Städtleweg");
        break;
    }
    case 301943:
    {
        returnValue = F("Stäffele");
        break;
    }
    case 301944:
    {
        returnValue = F("Stäffelenstr.");
        break;
    }
    case 301945:
    {
        returnValue = F("Stäffelesbrunnenweg");
        break;
    }
    case 301946:
    {
        returnValue = F("Stäffelesrain");
        break;
    }
    case 301947:
    {
        returnValue = F("Stäffelesweg");
        break;
    }
    case 301948:
    {
        returnValue = F("Stäffelsbergstr.");
        break;
    }
    case 301949:
    {
        returnValue = F("Stäffelsesweg");
        break;
    }
    case 301950:
    {
        returnValue = F("Stähler Allee");
        break;
    }
    case 301951:
    {
        returnValue = F("Stählerwiese");
        break;
    }
    case 301952:
    {
        returnValue = F("Stählfeldstr.");
        break;
    }
    case 301953:
    {
        returnValue = F("Stähling");
        break;
    }
    case 301954:
    {
        returnValue = F("Stähling Str.");
        break;
    }
    case 301955:
    {
        returnValue = F("Stählingenstr.");
        break;
    }
    case 301956:
    {
        returnValue = F("Stählinstr.");
        break;
    }
    case 301957:
    {
        returnValue = F("Stäkamp");
        break;
    }
    case 301958:
    {
        returnValue = F("Stämmbauersweg");
        break;
    }
    case 301959:
    {
        returnValue = F("Stämmeckenberg");
        break;
    }
    case 301960:
    {
        returnValue = F("Stämmenberg");
        break;
    }
    case 301961:
    {
        returnValue = F("Stämmweg");
        break;
    }
    case 301962:
    {
        returnValue = F("Ständehausgarten");
        break;
    }
    case 301963:
    {
        returnValue = F("Ständelgärtlein");
        break;
    }
    case 301964:
    {
        returnValue = F("Ständelweg");
        break;
    }
    case 301965:
    {
        returnValue = F("Ständenhof");
        break;
    }
    case 301966:
    {
        returnValue = F("Ständleinsweg");
        break;
    }
    case 301967:
    {
        returnValue = F("Ständlerweg");
        break;
    }
    case 301968:
    {
        returnValue = F("Stänglachweg");
        break;
    }
    case 301969:
    {
        returnValue = F("Stärkemühle");
        break;
    }
    case 301970:
    {
        returnValue = F("Stärkewiesel");
        break;
    }
    case 301971:
    {
        returnValue = F("Stärkloser Str.");
        break;
    }
    case 301972:
    {
        returnValue = F("Stärkloser Weg");
        break;
    }
    case 301973:
    {
        returnValue = F("Stärkmühlweg");
        break;
    }
    case 301974:
    {
        returnValue = F("Stäte");
        break;
    }
    case 301975:
    {
        returnValue = F("Stätlerweg");
        break;
    }
    case 301976:
    {
        returnValue = F("Stätte");
        break;
    }
    case 301977:
    {
        returnValue = F("Stätteweg");
        break;
    }
    case 301978:
    {
        returnValue = F("Stäuchle");
        break;
    }
    case 301979:
    {
        returnValue = F("Stäudach");
        break;
    }
    case 301980:
    {
        returnValue = F("Stäudachstr.");
        break;
    }
    case 301981:
    {
        returnValue = F("Stäudachweg");
        break;
    }
    case 301982:
    {
        returnValue = F("Stäudachweg plus");
        break;
    }
    case 301983:
    {
        returnValue = F("Stäudlinstr.");
        break;
    }
    case 301984:
    {
        returnValue = F("Stäudlweg");
        break;
    }
    case 301985:
    {
        returnValue = F("Stääwens Weide");
        break;
    }
    case 301986:
    {
        returnValue = F("Stöbbenberg");
        break;
    }
    case 301987:
    {
        returnValue = F("Stöbberstr.");
        break;
    }
    case 301988:
    {
        returnValue = F("Stöbener Str.");
        break;
    }
    case 301989:
    {
        returnValue = F("Stöberhaier Fußweg");
        break;
    }
    case 301990:
    {
        returnValue = F("Stöbniger Str.");
        break;
    }
    case 301991:
    {
        returnValue = F("Stöbritz");
        break;
    }
    case 301992:
    {
        returnValue = F("Stöckacher Str.");
        break;
    }
    case 301993:
    {
        returnValue = F("Stöckachhalde");
        break;
    }
    case 301994:
    {
        returnValue = F("Stöckachstr.");
        break;
    }
    case 301995:
    {
        returnValue = F("Stöckachweg");
        break;
    }
    case 301996:
    {
        returnValue = F("Stöckackerstr.");
        break;
    }
    case 301997:
    {
        returnValue = F("Stöckelacker");
        break;
    }
    case 301998:
    {
        returnValue = F("Stöckelberg");
        break;
    }
    case 301999:
    {
        returnValue = F("Stöckelches Weg");
        break;
    }
    case 302000:
    {
        returnValue = F("Stöckelmoosweg");
        break;
    }
    case 302001:
    {
        returnValue = F("Stöckeln");
        break;
    }
    case 302002:
    {
        returnValue = F("Stöckelsberger Hauptstr.");
        break;
    }
    case 302003:
    {
        returnValue = F("Stöckelser Str.");
        break;
    }
    case 302004:
    {
        returnValue = F("Stöckelweg");
        break;
    }
    case 302005:
    {
        returnValue = F("Stöckemerweg");
        break;
    }
    case 302006:
    {
        returnValue = F("Stöcken");
        break;
    }
    case 302007:
    {
        returnValue = F("Stöckenburgstr.");
        break;
    }
    case 302008:
    {
        returnValue = F("Stöckener Str.");
        break;
    }
    case 302009:
    {
        returnValue = F("Stöckener Weg");
        break;
    }
    case 302010:
    {
        returnValue = F("Stöckenhalde");
        break;
    }
    case 302011:
    {
        returnValue = F("Stöckenhof");
        break;
    }
    case 302012:
    {
        returnValue = F("Stöckenhofer Str.");
        break;
    }
    case 302013:
    {
        returnValue = F("Stöckenhofstr.");
        break;
    }
    case 302014:
    {
        returnValue = F("Stöckenhoop");
        break;
    }
    case 302015:
    {
        returnValue = F("Stöckenhöfe");
        break;
    }
    case 302016:
    {
        returnValue = F("Stöckenweg");
        break;
    }
    case 302017:
    {
        returnValue = F("Stöcker Garten");
        break;
    }
    case 302018:
    {
        returnValue = F("Stöcker Weg");
        break;
    }
    case 302019:
    {
        returnValue = F("Stöcker-Damm");
        break;
    }
    case 302020:
    {
        returnValue = F("Stöcker-Erlebnispfad");
        break;
    }
    case 302021:
    {
        returnValue = F("Stöckerberge");
        break;
    }
    case 302022:
    {
        returnValue = F("Stöckereichen");
        break;
    }
    case 302023:
    {
        returnValue = F("Stöckergäßchen");
        break;
    }
    case 302024:
    {
        returnValue = F("Stöckersgasse");
        break;
    }
    case 302025:
    {
        returnValue = F("Stöckersoll");
        break;
    }
    case 302026:
    {
        returnValue = F("Stöckerstr.");
        break;
    }
    case 302027:
    {
        returnValue = F("Stöckerswiesen");
        break;
    }
    case 302028:
    {
        returnValue = F("Stöckertsweg");
        break;
    }
    case 302029:
    {
        returnValue = F("Stöckertwiete");
        break;
    }
    case 302030:
    {
        returnValue = F("Stöckerwaldweg");
        break;
    }
    case 302031:
    {
        returnValue = F("Stöckerweg");
        break;
    }
    case 302032:
    {
        returnValue = F("Stöckerwiesen");
        break;
    }
    case 302033:
    {
        returnValue = F("Stöckeyer Hauptstr.");
        break;
    }
    case 302034:
    {
        returnValue = F("Stöckfeldweg");
        break;
    }
    case 302035:
    {
        returnValue = F("Stöckheim");
        break;
    }
    case 302036:
    {
        returnValue = F("Stöckheimer Str.");
        break;
    }
    case 302037:
    {
        returnValue = F("Stöckhofstr.");
        break;
    }
    case 302038:
    {
        returnValue = F("Stöckich");
        break;
    }
    case 302039:
    {
        returnValue = F("Stöckichweg");
        break;
    }
    case 302040:
    {
        returnValue = F("Stöckigsteige");
        break;
    }
    case 302041:
    {
        returnValue = F("Stöckigstr.");
        break;
    }
    case 302042:
    {
        returnValue = F("Stöckigt");
        break;
    }
    case 302043:
    {
        returnValue = F("Stöckigter Str.");
        break;
    }
    case 302044:
    {
        returnValue = F("Stöckigter Weg");
        break;
    }
    case 302045:
    {
        returnValue = F("Stöckigweg");
        break;
    }
    case 302046:
    {
        returnValue = F("Stöcklbosch");
        break;
    }
    case 302047:
    {
        returnValue = F("Stöckle");
        break;
    }
    case 302048:
    {
        returnValue = F("Stöcklebergrundweg");
        break;
    }
    case 302049:
    {
        returnValue = F("Stöckleinsgraben");
        break;
    }
    case 302050:
    {
        returnValue = F("Stöckleinstr.");
        break;
    }
    case 302051:
    {
        returnValue = F("Stöckleinsweg");
        break;
    }
    case 302052:
    {
        returnValue = F("Stöcklenstr.");
        break;
    }
    case 302053:
    {
        returnValue = F("Stöckleplatzweg");
        break;
    }
    case 302054:
    {
        returnValue = F("Stöcklesbrunnenweg");
        break;
    }
    case 302055:
    {
        returnValue = F("Stöcklesbuche");
        break;
    }
    case 302056:
    {
        returnValue = F("Stöckleshecke");
        break;
    }
    case 302057:
    {
        returnValue = F("Stöcklestr.");
        break;
    }
    case 302058:
    {
        returnValue = F("Stöcklesweg");
        break;
    }
    case 302059:
    {
        returnValue = F("Stöcklesäcker");
        break;
    }
    case 302060:
    {
        returnValue = F("Stöckleweg");
        break;
    }
    case 302061:
    {
        returnValue = F("Stöcklhof");
        break;
    }
    case 302062:
    {
        returnValue = F("Stöcklholz");
        break;
    }
    case 302063:
    {
        returnValue = F("Stöcklitzer Str.");
        break;
    }
    case 302064:
    {
        returnValue = F("Stöcklkreuzweg");
        break;
    }
    case 302065:
    {
        returnValue = F("Stöcklstr.");
        break;
    }
    case 302066:
    {
        returnValue = F("Stöcklweg");
        break;
    }
    case 302067:
    {
        returnValue = F("Stöckmatt");
        break;
    }
    case 302068:
    {
        returnValue = F("Stöckmatten");
        break;
    }
    case 302069:
    {
        returnValue = F("Stöckring");
        break;
    }
    case 302070:
    {
        returnValue = F("Stöckser Str.");
        break;
    }
    case 302071:
    {
        returnValue = F("Stöckstr.");
        break;
    }
    case 302072:
    {
        returnValue = F("Stöcksweg");
        break;
    }
    case 302073:
    {
        returnValue = F("Stöckumer Str.");
        break;
    }
    case 302074:
    {
        returnValue = F("Stöckweg");
        break;
    }
    case 302075:
    {
        returnValue = F("Stöckwiese");
        break;
    }
    case 302076:
    {
        returnValue = F("Stöckwiesenstr.");
        break;
    }
    case 302077:
    {
        returnValue = F("Stödtner Weg");
        break;
    }
    case 302078:
    {
        returnValue = F("Stöfenpark");
        break;
    }
    case 302079:
    {
        returnValue = F("Stöffelbergstr.");
        break;
    }
    case 302080:
    {
        returnValue = F("Stöffelbergweg");
        break;
    }
    case 302081:
    {
        returnValue = F("Stöffelstr.");
        break;
    }
    case 302082:
    {
        returnValue = F("Stöffertstr.");
        break;
    }
    case 302083:
    {
        returnValue = F("Stöffiner Berg");
        break;
    }
    case 302084:
    {
        returnValue = F("Stöffiner Str.");
        break;
    }
    case 302085:
    {
        returnValue = F("Stöffiner Weg");
        break;
    }
    case 302086:
    {
        returnValue = F("Stöfflerstr.");
        break;
    }
    case 302087:
    {
        returnValue = F("Stöfflerweg");
        break;
    }
    case 302088:
    {
        returnValue = F("Stöfkensweg");
        break;
    }
    case 302089:
    {
        returnValue = F("Stöfsandkate");
        break;
    }
    case 302090:
    {
        returnValue = F("Stög");
        break;
    }
    case 302091:
    {
        returnValue = F("Stöger-Ostin-Str.");
        break;
    }
    case 302092:
    {
        returnValue = F("Stögeralm");
        break;
    }
    case 302093:
    {
        returnValue = F("Stögerberg");
        break;
    }
    case 302094:
    {
        returnValue = F("Stögerstr.");
        break;
    }
    case 302095:
    {
        returnValue = F("Stögerweg");
        break;
    }
    case 302096:
    {
        returnValue = F("Stögmeierweg");
        break;
    }
    case 302097:
    {
        returnValue = F("Stögnstr.");
        break;
    }
    case 302098:
    {
        returnValue = F("Stöhnaer Str.");
        break;
    }
    case 302099:
    {
        returnValue = F("Stöhnaer Weg");
        break;
    }
    case 302100:
    {
        returnValue = F("Stöhrengartenweg");
        break;
    }
    case 302101:
    {
        returnValue = F("Stöhrengrundweg");
        break;
    }
    case 302102:
    {
        returnValue = F("Stöhrenweg");
        break;
    }
    case 302103:
    {
        returnValue = F("Stöhrgasse");
        break;
    }
    case 302104:
    {
        returnValue = F("Stöhrstr.");
        break;
    }
    case 302105:
    {
        returnValue = F("Stöhrweg");
        break;
    }
    case 302106:
    {
        returnValue = F("Stökergang");
        break;
    }
    case 302107:
    {
        returnValue = F("Stölkenplan");
        break;
    }
    case 302108:
    {
        returnValue = F("Stölkenstr.");
        break;
    }
    case 302109:
    {
        returnValue = F("Stöllberg");
        break;
    }
    case 302110:
    {
        returnValue = F("Stölln");
        break;
    }
    case 302111:
    {
        returnValue = F("Stöllnitzer Str.");
        break;
    }
    case 302112:
    {
        returnValue = F("Stöllnitzer Weg");
        break;
    }
    case 302113:
    {
        returnValue = F("Stölpchener Str.");
        break;
    }
    case 302114:
    {
        returnValue = F("Stölpenhof");
        break;
    }
    case 302115:
    {
        returnValue = F("Stöltenstr.");
        break;
    }
    case 302116:
    {
        returnValue = F("Stöltingstr.");
        break;
    }
    case 302117:
    {
        returnValue = F("Stöltjestr.");
        break;
    }
    case 302118:
    {
        returnValue = F("Stölver");
        break;
    }
    case 302119:
    {
        returnValue = F("Stölzelstr.");
        break;
    }
    case 302120:
    {
        returnValue = F("Stölzingen");
        break;
    }
    case 302121:
    {
        returnValue = F("Stölzinger Str.");
        break;
    }
    case 302122:
    {
        returnValue = F("Stölzinger Weg");
        break;
    }
    case 302123:
    {
        returnValue = F("Stönkvitz");
        break;
    }
    case 302124:
    {
        returnValue = F("Stönneberg");
        break;
    }
    case 302125:
    {
        returnValue = F("Stöntzscher Str.");
        break;
    }
    case 302126:
    {
        returnValue = F("Stöpfertal");
        break;
    }
    case 302127:
    {
        returnValue = F("Stöpgeshof");
        break;
    }
    case 302128:
    {
        returnValue = F("Stöppacher Str.");
        break;
    }
    case 302129:
    {
        returnValue = F("Stöppelsbach");
        break;
    }
    case 302130:
    {
        returnValue = F("Stöppelsweg");
        break;
    }
    case 302131:
    {
        returnValue = F("Stöppelweg");
        break;
    }
    case 302132:
    {
        returnValue = F("Stöppengarten");
        break;
    }
    case 302133:
    {
        returnValue = F("Stöpplin");
        break;
    }
    case 302134:
    {
        returnValue = F("Störblick");
        break;
    }
    case 302135:
    {
        returnValue = F("Störbrink");
        break;
    }
    case 302136:
    {
        returnValue = F("Störchenriedstr.");
        break;
    }
    case 302137:
    {
        returnValue = F("Störcher Str.");
        break;
    }
    case 302138:
    {
        returnValue = F("Störchleinstr.");
        break;
    }
    case 302139:
    {
        returnValue = F("Störckstr.");
        break;
    }
    case 302140:
    {
        returnValue = F("Stördorf");
        break;
    }
    case 302141:
    {
        returnValue = F("Störeck");
        break;
    }
    case 302142:
    {
        returnValue = F("Störfischerstr.");
        break;
    }
    case 302143:
    {
        returnValue = F("Störingstr.");
        break;
    }
    case 302144:
    {
        returnValue = F("Störkamp");
        break;
    }
    case 302145:
    {
        returnValue = F("Störkelstr.");
        break;
    }
    case 302146:
    {
        returnValue = F("Störkoppel");
        break;
    }
    case 302147:
    {
        returnValue = F("Störmeder Str.");
        break;
    }
    case 302148:
    {
        returnValue = F("Störmerswiesen");
        break;
    }
    case 302149:
    {
        returnValue = F("Störmerweg");
        break;
    }
    case 302150:
    {
        returnValue = F("Störmthaler Str.");
        break;
    }
    case 302151:
    {
        returnValue = F("Störmthaler Weg");
        break;
    }
    case 302152:
    {
        returnValue = F("Störnhofer Berg");
        break;
    }
    case 302153:
    {
        returnValue = F("Störnsteiner Str.");
        break;
    }
    case 302154:
    {
        returnValue = F("Störort");
        break;
    }
    case 302155:
    {
        returnValue = F("Störrenstr.");
        break;
    }
    case 302156:
    {
        returnValue = F("Störringen");
        break;
    }
    case 302157:
    {
        returnValue = F("Störrmühle");
        break;
    }
    case 302158:
    {
        returnValue = F("Störstr.");
        break;
    }
    case 302159:
    {
        returnValue = F("Stört");
        break;
    }
    case 302160:
    {
        returnValue = F("Störtebeker Str.");
        break;
    }
    case 302161:
    {
        returnValue = F("Störtebeker Weg");
        break;
    }
    case 302162:
    {
        returnValue = F("Störtebekers Hörn");
        break;
    }
    case 302163:
    {
        returnValue = F("Störtebekerstieg");
        break;
    }
    case 302164:
    {
        returnValue = F("Störtebekerstr.");
        break;
    }
    case 302165:
    {
        returnValue = F("Störtebekerweg");
        break;
    }
    case 302166:
    {
        returnValue = F("Störtekopf");
        break;
    }
    case 302167:
    {
        returnValue = F("Störtelstr.");
        break;
    }
    case 302168:
    {
        returnValue = F("Störtenberg");
        break;
    }
    case 302169:
    {
        returnValue = F("Störtenbüttel");
        break;
    }
    case 302170:
    {
        returnValue = F("Störtenbütteler Weg");
        break;
    }
    case 302171:
    {
        returnValue = F("Störweg");
        break;
    }
    case 302172:
    {
        returnValue = F("Störwiesen");
        break;
    }
    case 302173:
    {
        returnValue = F("Störyer Str.");
        break;
    }
    case 302174:
    {
        returnValue = F("Störzelbach");
        break;
    }
    case 302175:
    {
        returnValue = F("Störzelbacher Weg");
        break;
    }
    case 302176:
    {
        returnValue = F("Stösitzer Hauptstr.");
        break;
    }
    case 302177:
    {
        returnValue = F("Stöterberg");
        break;
    }
    case 302178:
    {
        returnValue = F("Stöttebrügger Str.");
        break;
    }
    case 302179:
    {
        returnValue = F("Stötten");
        break;
    }
    case 302180:
    {
        returnValue = F("Stöttener Weg");
        break;
    }
    case 302181:
    {
        returnValue = F("Stötteritzer Str.");
        break;
    }
    case 302182:
    {
        returnValue = F("Stötthamer Str.");
        break;
    }
    case 302183:
    {
        returnValue = F("Stöttinghauser Str.");
        break;
    }
    case 302184:
    {
        returnValue = F("Stöttwanger Str.");
        break;
    }
    case 302185:
    {
        returnValue = F("Stöverdiek");
        break;
    }
    case 302186:
    {
        returnValue = F("Stövergasse");
        break;
    }
    case 302187:
    {
        returnValue = F("Stöversweg");
        break;
    }
    case 302188:
    {
        returnValue = F("Stövestr.");
        break;
    }
    case 302189:
    {
        returnValue = F("Stößelstr.");
        break;
    }
    case 302190:
    {
        returnValue = F("Stößener Str.");
        break;
    }
    case 302191:
    {
        returnValue = F("Stößener Weg");
        break;
    }
    case 302192:
    {
        returnValue = F("Stößerfelsenweg");
        break;
    }
    case 302193:
    {
        returnValue = F("Stößner Weg");
        break;
    }
    case 302194:
    {
        returnValue = F("Stübacher Str.");
        break;
    }
    case 302195:
    {
        returnValue = F("Stübacher Weg");
        break;
    }
    case 302196:
    {
        returnValue = F("Stübbecken");
        break;
    }
    case 302197:
    {
        returnValue = F("Stübbenhauser Str.");
        break;
    }
    case 302198:
    {
        returnValue = F("Stübbeweg");
        break;
    }
    case 302199:
    {
        returnValue = F("Stübchentalstr.");
        break;
    }
    case 302200:
    {
        returnValue = F("Stübchenweg");
        break;
    }
    case 302201:
    {
        returnValue = F("Stübecker Weg");
        break;
    }
    case 302202:
    {
        returnValue = F("Stübeckshorner Weg");
        break;
    }
    case 302203:
    {
        returnValue = F("Stübels");
        break;
    }
    case 302204:
    {
        returnValue = F("Stübelstr.");
        break;
    }
    case 302205:
    {
        returnValue = F("Stübenbachweg");
        break;
    }
    case 302206:
    {
        returnValue = F("Stübenkoppel");
        break;
    }
    case 302207:
    {
        returnValue = F("Stüberweg");
        break;
    }
    case 302208:
    {
        returnValue = F("Stübiger Weg");
        break;
    }
    case 302209:
    {
        returnValue = F("Stübkamp");
        break;
    }
    case 302210:
    {
        returnValue = F("Stübleinweg");
        break;
    }
    case 302211:
    {
        returnValue = F("Stüblhäuser");
        break;
    }
    case 302212:
    {
        returnValue = F("Stübnerstr.");
        break;
    }
    case 302213:
    {
        returnValue = F("Stückackerweg");
        break;
    }
    case 302214:
    {
        returnValue = F("Stückbaumweg");
        break;
    }
    case 302215:
    {
        returnValue = F("Stückbrunn");
        break;
    }
    case 302216:
    {
        returnValue = F("Stückbrunner Str.");
        break;
    }
    case 302217:
    {
        returnValue = F("Stückelbergweg");
        break;
    }
    case 302218:
    {
        returnValue = F("Stückelstr.");
        break;
    }
    case 302219:
    {
        returnValue = F("Stückelweg");
        break;
    }
    case 302220:
    {
        returnValue = F("Stückeläckerweg");
        break;
    }
    case 302221:
    {
        returnValue = F("Stücken");
        break;
    }
    case 302222:
    {
        returnValue = F("Stücken-Schneise");
        break;
    }
    case 302223:
    {
        returnValue = F("Stückenberg");
        break;
    }
    case 302224:
    {
        returnValue = F("Stückener Dorfstr.");
        break;
    }
    case 302225:
    {
        returnValue = F("Stückener Str.");
        break;
    }
    case 302226:
    {
        returnValue = F("Stückener Weg");
        break;
    }
    case 302227:
    {
        returnValue = F("Stückenfeldstr.");
        break;
    }
    case 302228:
    {
        returnValue = F("Stückenkoppel");
        break;
    }
    case 302229:
    {
        returnValue = F("Stückenstr.");
        break;
    }
    case 302230:
    {
        returnValue = F("Stückenweg");
        break;
    }
    case 302231:
    {
        returnValue = F("Stückenwiesen");
        break;
    }
    case 302232:
    {
        returnValue = F("Stückeplätze");
        break;
    }
    case 302233:
    {
        returnValue = F("Stücker Str.");
        break;
    }
    case 302234:
    {
        returnValue = F("Stücker Weg");
        break;
    }
    case 302235:
    {
        returnValue = F("Stückerbusch");
        break;
    }
    case 302236:
    {
        returnValue = F("Stückerweg");
        break;
    }
    case 302237:
    {
        returnValue = F("Stückfeld");
        break;
    }
    case 302238:
    {
        returnValue = F("Stückfeldstr.");
        break;
    }
    case 302239:
    {
        returnValue = F("Stückgasse");
        break;
    }
    case 302240:
    {
        returnValue = F("Stückgrubenweg");
        break;
    }
    case 302241:
    {
        returnValue = F("Stückhof");
        break;
    }
    case 302242:
    {
        returnValue = F("Stückhöhen");
        break;
    }
    case 302243:
    {
        returnValue = F("Stücklesweg");
        break;
    }
    case 302244:
    {
        returnValue = F("Stückrathstr.");
        break;
    }
    case 302245:
    {
        returnValue = F("Stücks");
        break;
    }
    case 302246:
    {
        returnValue = F("Stücksacker");
        break;
    }
    case 302247:
    {
        returnValue = F("Stückstr.");
        break;
    }
    case 302248:
    {
        returnValue = F("Stückweg");
        break;
    }
    case 302249:
    {
        returnValue = F("Stüden");
        break;
    }
    case 302250:
    {
        returnValue = F("Stüdenitzer Damm");
        break;
    }
    case 302251:
    {
        returnValue = F("Stüdenitzer Str.");
        break;
    }
    case 302252:
    {
        returnValue = F("Stüder Heudamm");
        break;
    }
    case 302253:
    {
        returnValue = F("Stüder Str.");
        break;
    }
    case 302254:
    {
        returnValue = F("Stüderweg");
        break;
    }
    case 302255:
    {
        returnValue = F("Stüdlestr.");
        break;
    }
    case 302256:
    {
        returnValue = F("Stüfgensweg");
        break;
    }
    case 302257:
    {
        returnValue = F("Stühberg");
        break;
    }
    case 302258:
    {
        returnValue = F("Stüher Str.");
        break;
    }
    case 302259:
    {
        returnValue = F("Stühfeld");
        break;
    }
    case 302260:
    {
        returnValue = F("Stühkamp");
        break;
    }
    case 302261:
    {
        returnValue = F("Stühl");
        break;
    }
    case 302262:
    {
        returnValue = F("Stühle-Egertenweg");
        break;
    }
    case 302263:
    {
        returnValue = F("Stühleckweg");
        break;
    }
    case 302264:
    {
        returnValue = F("Stühleshof");
        break;
    }
    case 302265:
    {
        returnValue = F("Stühleshofpfad");
        break;
    }
    case 302266:
    {
        returnValue = F("Stühleweg");
        break;
    }
    case 302267:
    {
        returnValue = F("Stühlinger");
        break;
    }
    case 302268:
    {
        returnValue = F("Stühlinger Str.");
        break;
    }
    case 302269:
    {
        returnValue = F("Stühlingerweg");
        break;
    }
    case 302270:
    {
        returnValue = F("Stühren");
        break;
    }
    case 302271:
    {
        returnValue = F("Stührener Weg");
        break;
    }
    case 302272:
    {
        returnValue = F("Stührfeld");
        break;
    }
    case 302273:
    {
        returnValue = F("Stührich");
        break;
    }
    case 302274:
    {
        returnValue = F("Stührmanns Höhe");
        break;
    }
    case 302275:
    {
        returnValue = F("Stühweg");
        break;
    }
    case 302276:
    {
        returnValue = F("Stülbergring");
        break;
    }
    case 302277:
    {
        returnValue = F("Stülower Dorfstr.");
        break;
    }
    case 302278:
    {
        returnValue = F("Stülower Weg");
        break;
    }
    case 302279:
    {
        returnValue = F("Stülpend");
        break;
    }
    case 302280:
    {
        returnValue = F("Stülpner-Steig");
        break;
    }
    case 302281:
    {
        returnValue = F("Stülpnerweg");
        break;
    }
    case 302282:
    {
        returnValue = F("Stümpel");
        break;
    }
    case 302283:
    {
        returnValue = F("Stümpelweg");
        break;
    }
    case 302284:
    {
        returnValue = F("Stümpenweg");
        break;
    }
    case 302285:
    {
        returnValue = F("Stümpfenweg");
        break;
    }
    case 302286:
    {
        returnValue = F("Stümpferweg");
        break;
    }
    case 302287:
    {
        returnValue = F("Stümpflingstr.");
        break;
    }
    case 302288:
    {
        returnValue = F("Stümpleweg");
        break;
    }
    case 302289:
    {
        returnValue = F("Stünkels Hof");
        break;
    }
    case 302290:
    {
        returnValue = F("Stünkelweg");
        break;
    }
    case 302291:
    {
        returnValue = F("Stünzgraben");
        break;
    }
    case 302292:
    {
        returnValue = F("Stünzhainer Str.");
        break;
    }
    case 302293:
    {
        returnValue = F("Stünzmühlenstr.");
        break;
    }
    case 302294:
    {
        returnValue = F("Stüppelsweg");
        break;
    }
    case 302295:
    {
        returnValue = F("Stüppenberg");
        break;
    }
    case 302296:
    {
        returnValue = F("Stürbergstr.");
        break;
    }
    case 302297:
    {
        returnValue = F("Stürholzgarten");
        break;
    }
    case 302298:
    {
        returnValue = F("Stüriede");
        break;
    }
    case 302299:
    {
        returnValue = F("Stüringsweg");
        break;
    }
    case 302300:
    {
        returnValue = F("Stürkergasse");
        break;
    }
    case 302301:
    {
        returnValue = F("Stürmannstrate");
        break;
    }
    case 302302:
    {
        returnValue = F("Stürmannsweg");
        break;
    }
    case 302303:
    {
        returnValue = F("Stürmerbühlweg");
        break;
    }
    case 302304:
    {
        returnValue = F("Stürmersweg");
        break;
    }
    case 302305:
    {
        returnValue = F("Stürmiger Weg");
        break;
    }
    case 302306:
    {
        returnValue = F("Stürmleslochweg");
        break;
    }
    case 302307:
    {
        returnValue = F("Stürscheep");
        break;
    }
    case 302308:
    {
        returnValue = F("Stürweg");
        break;
    }
    case 302309:
    {
        returnValue = F("Stürzebeinweg");
        break;
    }
    case 302310:
    {
        returnValue = F("Stürzelbach");
        break;
    }
    case 302311:
    {
        returnValue = F("Stürzelbacher Str.");
        break;
    }
    case 302312:
    {
        returnValue = F("Stürzelberg");
        break;
    }
    case 302313:
    {
        returnValue = F("Stürzelberger Lindenhof");
        break;
    }
    case 302314:
    {
        returnValue = F("Stürzelheimer Str.");
        break;
    }
    case 302315:
    {
        returnValue = F("Stürzelhof");
        break;
    }
    case 302316:
    {
        returnValue = F("Stürzelstr.");
        break;
    }
    case 302317:
    {
        returnValue = F("Stürzelweg");
        break;
    }
    case 302318:
    {
        returnValue = F("Stürzenberger Weg");
        break;
    }
    case 302319:
    {
        returnValue = F("Stürzenbrunnweg");
        break;
    }
    case 302320:
    {
        returnValue = F("Stürzenweg");
        break;
    }
    case 302321:
    {
        returnValue = F("Stürzerstr.");
        break;
    }
    case 302322:
    {
        returnValue = F("Stürzerweg");
        break;
    }
    case 302323:
    {
        returnValue = F("Stürzhaldeweg");
        break;
    }
    case 302324:
    {
        returnValue = F("Stürzlham");
        break;
    }
    case 302325:
    {
        returnValue = F("Stürzlhamer Str.");
        break;
    }
    case 302326:
    {
        returnValue = F("Stürzweg");
        break;
    }
    case 302327:
    {
        returnValue = F("Stüsserweg");
        break;
    }
    case 302328:
    {
        returnValue = F("Stüsskampsweg");
        break;
    }
    case 302329:
    {
        returnValue = F("Stütelberg");
        break;
    }
    case 302330:
    {
        returnValue = F("Stütensen");
        break;
    }
    case 302331:
    {
        returnValue = F("Stütensener Weg");
        break;
    }
    case 302332:
    {
        returnValue = F("Stüterhof");
        break;
    }
    case 302333:
    {
        returnValue = F("Stütgerhof");
        break;
    }
    case 302334:
    {
        returnValue = F("Stütingstr.");
        break;
    }
    case 302335:
    {
        returnValue = F("Stütlesweg");
        break;
    }
    case 302336:
    {
        returnValue = F("Stüttbergweg");
        break;
    }
    case 302337:
    {
        returnValue = F("Stüttem");
        break;
    }
    case 302338:
    {
        returnValue = F("Stüttgesgasse");
        break;
    }
    case 302339:
    {
        returnValue = F("Stüttinghauser Höfe");
        break;
    }
    case 302340:
    {
        returnValue = F("Stüttinghauser Ringstr.");
        break;
    }
    case 302341:
    {
        returnValue = F("Stützelgasse");
        break;
    }
    case 302342:
    {
        returnValue = F("Stützelstr.");
        break;
    }
    case 302343:
    {
        returnValue = F("Stützen");
        break;
    }
    case 302344:
    {
        returnValue = F("Stützenbergstr.");
        break;
    }
    case 302345:
    {
        returnValue = F("Stützenbergweg");
        break;
    }
    case 302346:
    {
        returnValue = F("Stützenfeldweg");
        break;
    }
    case 302347:
    {
        returnValue = F("Stützengasse");
        break;
    }
    case 302348:
    {
        returnValue = F("Stützengrüner Str.");
        break;
    }
    case 302349:
    {
        returnValue = F("Stützenhalde");
        break;
    }
    case 302350:
    {
        returnValue = F("Stützenstr.");
        break;
    }
    case 302351:
    {
        returnValue = F("Stützenweg");
        break;
    }
    case 302352:
    {
        returnValue = F("Stützerstr.");
        break;
    }
    case 302353:
    {
        returnValue = F("Stützlestr.");
        break;
    }
    case 302354:
    {
        returnValue = F("Stützlesweg");
        break;
    }
    case 302355:
    {
        returnValue = F("Stützpunkt");
        break;
    }
    case 302356:
    {
        returnValue = F("Stützpunktstr.");
        break;
    }
    case 302357:
    {
        returnValue = F("Stützpunktweg");
        break;
    }
    case 302358:
    {
        returnValue = F("Stützstr.");
        break;
    }
    case 302359:
    {
        returnValue = F("Stützweg");
        break;
    }
    case 302360:
    {
        returnValue = F("Stüve Str.");
        break;
    }
    case 302361:
    {
        returnValue = F("Stüvenstieg");
        break;
    }
    case 302362:
    {
        returnValue = F("Stüvenstr.");
        break;
    }
    case 302363:
    {
        returnValue = F("Stüverweg");
        break;
    }
    case 302364:
    {
        returnValue = F("Stüvestr.");
        break;
    }
    case 302365:
    {
        returnValue = F("Stüvkamp");
        break;
    }
    case 302366:
    {
        returnValue = F("Stüvvenweg");
        break;
    }
    case 302367:
    {
        returnValue = F("Stüwweplacken");
        break;
    }
    case 302368:
    {
        returnValue = F("Stüwwestr.");
        break;
    }
    case 302369:
    {
        returnValue = F("Stüwweweg");
        break;
    }
    case 302370:
    {
        returnValue = F("Stüßbrink");
        break;
    }
    case 302371:
    {
        returnValue = F("Suadicanistr.");
        break;
    }
    case 302372:
    {
        returnValue = F("Subachstr.");
        break;
    }
    case 302373:
    {
        returnValue = F("Subecksweg");
        break;
    }
    case 302374:
    {
        returnValue = F("Subeeksweg");
        break;
    }
    case 302375:
    {
        returnValue = F("Subziner Weidenweg");
        break;
    }
    case 302376:
    {
        returnValue = F("Sucherfeld");
        break;
    }
    case 302377:
    {
        returnValue = F("Suchsdorfer Weg");
        break;
    }
    case 302378:
    {
        returnValue = F("Suckelgasse");
        break;
    }
    case 302379:
    {
        returnValue = F("Suckenberg");
        break;
    }
    case 302380:
    {
        returnValue = F("Suckkoppel");
        break;
    }
    case 302381:
    {
        returnValue = F("Suckow");
        break;
    }
    case 302382:
    {
        returnValue = F("Suckower Platz");
        break;
    }
    case 302383:
    {
        returnValue = F("Suckower Str.");
        break;
    }
    case 302384:
    {
        returnValue = F("Suckowsweg");
        break;
    }
    case 302385:
    {
        returnValue = F("Suckwitz");
        break;
    }
    case 302386:
    {
        returnValue = F("Sucystr.");
        break;
    }
    case 302387:
    {
        returnValue = F("Sudbachtal");
        break;
    }
    case 302388:
    {
        returnValue = F("Sudberg");
        break;
    }
    case 302389:
    {
        returnValue = F("Sudbergstr.");
        break;
    }
    case 302390:
    {
        returnValue = F("Sudbergsweg");
        break;
    }
    case 302391:
    {
        returnValue = F("Sudbergweg");
        break;
    }
    case 302392:
    {
        returnValue = F("Sudbrink");
        break;
    }
    case 302393:
    {
        returnValue = F("Sudbruch");
        break;
    }
    case 302394:
    {
        returnValue = F("Sudbrucher Weg");
        break;
    }
    case 302395:
    {
        returnValue = F("Sudbury Str.");
        break;
    }
    case 302396:
    {
        returnValue = F("Suddelweg");
        break;
    }
    case 302397:
    {
        returnValue = F("Suddendorfer Str.");
        break;
    }
    case 302398:
    {
        returnValue = F("Suddenfeldweg");
        break;
    }
    case 302399:
    {
        returnValue = F("Suddenstr.");
        break;
    }
    case 302400:
    {
        returnValue = F("Suddenweg");
        break;
    }
    case 302401:
    {
        returnValue = F("Suddersdorf");
        break;
    }
    case 302402:
    {
        returnValue = F("Sudderweh");
        break;
    }
    case 302403:
    {
        returnValue = F("Sudeblick");
        break;
    }
    case 302404:
    {
        returnValue = F("Sudel");
        break;
    }
    case 302405:
    {
        returnValue = F("Sudelfeldstr.");
        break;
    }
    case 302406:
    {
        returnValue = F("Sudelweg");
        break;
    }
    case 302407:
    {
        returnValue = F("Sudenburger Str.");
        break;
    }
    case 302408:
    {
        returnValue = F("Sudende");
        break;
    }
    case 302409:
    {
        returnValue = F("Sudendorfallee");
        break;
    }
    case 302410:
    {
        returnValue = F("Sudendorfer Esch");
        break;
    }
    case 302411:
    {
        returnValue = F("Sudendorfer Str.");
        break;
    }
    case 302412:
    {
        returnValue = F("Sudenfelder Str.");
        break;
    }
    case 302413:
    {
        returnValue = F("Sudenhofer Damm");
        break;
    }
    case 302414:
    {
        returnValue = F("Sudenhofer Str.");
        break;
    }
    case 302415:
    {
        returnValue = F("Sudenmühle");
        break;
    }
    case 302416:
    {
        returnValue = F("Sudentenstr.");
        break;
    }
    case 302417:
    {
        returnValue = F("Sudentorstr.");
        break;
    }
    case 302418:
    {
        returnValue = F("Suder Allee");
        break;
    }
    case 302419:
    {
        returnValue = F("Suder Feld");
        break;
    }
    case 302420:
    {
        returnValue = F("Suder Höhe");
        break;
    }
    case 302421:
    {
        returnValue = F("Suderbrook");
        break;
    }
    case 302422:
    {
        returnValue = F("Suderburger Str.");
        break;
    }
    case 302423:
    {
        returnValue = F("Sudermann-Park");
        break;
    }
    case 302424:
    {
        returnValue = F("Sudermannhof");
        break;
    }
    case 302425:
    {
        returnValue = F("Sudermannstr.");
        break;
    }
    case 302426:
    {
        returnValue = F("Sudermannweg");
        break;
    }
    case 302427:
    {
        returnValue = F("Sudermühlen");
        break;
    }
    case 302428:
    {
        returnValue = F("Sudermühler Weg");
        break;
    }
    case 302429:
    {
        returnValue = F("Sudernweg");
        break;
    }
    case 302430:
    {
        returnValue = F("Suderoder Str.");
        break;
    }
    case 302431:
    {
        returnValue = F("Suderschneise");
        break;
    }
    case 302432:
    {
        returnValue = F("Sudershäuser Weg");
        break;
    }
    case 302433:
    {
        returnValue = F("Suderweg");
        break;
    }
    case 302434:
    {
        returnValue = F("Suderwicher Str.");
        break;
    }
    case 302435:
    {
        returnValue = F("Suderwicker Str.");
        break;
    }
    case 302436:
    {
        returnValue = F("Suderöder Chaussee");
        break;
    }
    case 302437:
    {
        returnValue = F("Suderöder Weg");
        break;
    }
    case 302438:
    {
        returnValue = F("Sudeten Str.");
        break;
    }
    case 302439:
    {
        returnValue = F("Sudeten Weg");
        break;
    }
    case 302440:
    {
        returnValue = F("Sudetendeutsche Str.");
        break;
    }
    case 302441:
    {
        returnValue = F("Sudetenhalde");
        break;
    }
    case 302442:
    {
        returnValue = F("Sudetenlandhof");
        break;
    }
    case 302443:
    {
        returnValue = F("Sudetenlandstr.");
        break;
    }
    case 302444:
    {
        returnValue = F("Sudetenlandweg");
        break;
    }
    case 302445:
    {
        returnValue = F("Sudetenplatz");
        break;
    }
    case 302446:
    {
        returnValue = F("Sudetenring");
        break;
    }
    case 302447:
    {
        returnValue = F("Sudetensiedlung");
        break;
    }
    case 302448:
    {
        returnValue = F("Sudetenstr.");
        break;
    }
    case 302449:
    {
        returnValue = F("Sudetenweg");
        break;
    }
    case 302450:
    {
        returnValue = F("Sudeweg");
        break;
    }
    case 302451:
    {
        returnValue = F("Sudewiese");
        break;
    }
    case 302452:
    {
        returnValue = F("Sudewiesenstr.");
        break;
    }
    case 302453:
    {
        returnValue = F("Sudfeld");
        break;
    }
    case 302454:
    {
        returnValue = F("Sudfeldstr.");
        break;
    }
    case 302455:
    {
        returnValue = F("Sudgasse");
        break;
    }
    case 302456:
    {
        returnValue = F("Sudhagener Str.");
        break;
    }
    case 302457:
    {
        returnValue = F("Sudhausgasse");
        break;
    }
    case 302458:
    {
        returnValue = F("Sudhausweg");
        break;
    }
    case 302459:
    {
        returnValue = F("Sudheide");
        break;
    }
    case 302460:
    {
        returnValue = F("Sudheim");
        break;
    }
    case 302461:
    {
        returnValue = F("Sudheimer Feld");
        break;
    }
    case 302462:
    {
        returnValue = F("Sudhoferweg");
        break;
    }
    case 302463:
    {
        returnValue = F("Sudhoffstr.");
        break;
    }
    case 302464:
    {
        returnValue = F("Sudholz");
        break;
    }
    case 302465:
    {
        returnValue = F("Sudholz Mittelweg");
        break;
    }
    case 302466:
    {
        returnValue = F("Sudholz-Weg");
        break;
    }
    case 302467:
    {
        returnValue = F("Sudholzer Weg");
        break;
    }
    case 302468:
    {
        returnValue = F("Sudholzerweg");
        break;
    }
    case 302469:
    {
        returnValue = F("Sudholzstr.");
        break;
    }
    case 302470:
    {
        returnValue = F("Sudholzweg");
        break;
    }
    case 302471:
    {
        returnValue = F("Sudhusen");
        break;
    }
    case 302472:
    {
        returnValue = F("Sudhäger Str.");
        break;
    }
    case 302473:
    {
        returnValue = F("Sudkamp");
        break;
    }
    case 302474:
    {
        returnValue = F("Sudlander");
        break;
    }
    case 302475:
    {
        returnValue = F("Sudmate");
        break;
    }
    case 302476:
    {
        returnValue = F("Sudmeyerstr.");
        break;
    }
    case 302477:
    {
        returnValue = F("Sudmoor");
        break;
    }
    case 302478:
    {
        returnValue = F("Sudrachshöhe");
        break;
    }
    case 302479:
    {
        returnValue = F("Sudrowshofer Damm");
        break;
    }
    case 302480:
    {
        returnValue = F("Sudwalder Str.");
        break;
    }
    case 302481:
    {
        returnValue = F("Sudweg");
        break;
    }
    case 302482:
    {
        returnValue = F("Sudweyher Beeke");
        break;
    }
    case 302483:
    {
        returnValue = F("Sudweyher Bruch");
        break;
    }
    case 302484:
    {
        returnValue = F("Sudweyher Heidfeld");
        break;
    }
    case 302485:
    {
        returnValue = F("Sudweyher Landstr.");
        break;
    }
    case 302486:
    {
        returnValue = F("Sudweyher Marschdamm");
        break;
    }
    case 302487:
    {
        returnValue = F("Sudweyher Str.");
        break;
    }
    case 302488:
    {
        returnValue = F("Sudweyher Wischdamm");
        break;
    }
    case 302489:
    {
        returnValue = F("Sudwiese");
        break;
    }
    case 302490:
    {
        returnValue = F("Sudwinkel");
        break;
    }
    case 302491:
    {
        returnValue = F("Suebenplatz");
        break;
    }
    case 302492:
    {
        returnValue = F("Suebenstr.");
        break;
    }
    case 302493:
    {
        returnValue = F("Suebenweg");
        break;
    }
    case 302494:
    {
        returnValue = F("Suederweg");
        break;
    }
    case 302495:
    {
        returnValue = F("Suendarper Weg");
        break;
    }
    case 302496:
    {
        returnValue = F("Suendorfweg");
        break;
    }
    case 302497:
    {
        returnValue = F("Suerbaumweg");
        break;
    }
    case 302498:
    {
        returnValue = F("Suerbrookweg");
        break;
    }
    case 302499:
    {
        returnValue = F("Suerbruch");
        break;
    }
    case 302500:
    {
        returnValue = F("Suerfeld");
        break;
    }
    case 302501:
    {
        returnValue = F("Suerhoper Brunnenweg");
        break;
    }
    case 302502:
    {
        returnValue = F("Suerhoper Koppelweg");
        break;
    }
    case 302503:
    {
        returnValue = F("Suerhoper Str.");
        break;
    }
    case 302504:
    {
        returnValue = F("Suerkamp");
        break;
    }
    case 302505:
    {
        returnValue = F("Suerschott");
        break;
    }
    case 302506:
    {
        returnValue = F("Suerser Weg");
        break;
    }
    case 302507:
    {
        returnValue = F("Suerweg");
        break;
    }
    case 302508:
    {
        returnValue = F("Suesshofweg");
        break;
    }
    case 302509:
    {
        returnValue = F("Suestr.");
        break;
    }
    case 302510:
    {
        returnValue = F("Suestrastr.");
        break;
    }
    case 302511:
    {
        returnValue = F("Suezkanal");
        break;
    }
    case 302512:
    {
        returnValue = F("Suezstr.");
        break;
    }
    case 302513:
    {
        returnValue = F("Sufeld");
        break;
    }
    case 302514:
    {
        returnValue = F("Sufeld-Ring");
        break;
    }
    case 302515:
    {
        returnValue = F("Sufferloh");
        break;
    }
    case 302516:
    {
        returnValue = F("Sufferloher Str.");
        break;
    }
    case 302517:
    {
        returnValue = F("Sugambrerstr.");
        break;
    }
    case 302518:
    {
        returnValue = F("Sugambrerweg");
        break;
    }
    case 302519:
    {
        returnValue = F("Suggentaler Weg");
        break;
    }
    case 302520:
    {
        returnValue = F("Suhbachweg");
        break;
    }
    case 302521:
    {
        returnValue = F("Suhkamp");
        break;
    }
    case 302522:
    {
        returnValue = F("Suhl-Schneise");
        break;
    }
    case 302523:
    {
        returnValue = F("Suhlawiesen");
        break;
    }
    case 302524:
    {
        returnValue = F("Suhlburger Str.");
        break;
    }
    case 302525:
    {
        returnValue = F("Suhlendorfer Berg");
        break;
    }
    case 302526:
    {
        returnValue = F("Suhlenkamp");
        break;
    }
    case 302527:
    {
        returnValue = F("Suhlenstr.");
        break;
    }
    case 302528:
    {
        returnValue = F("Suhlenweg");
        break;
    }
    case 302529:
    {
        returnValue = F("Suhler Landstr.");
        break;
    }
    case 302530:
    {
        returnValue = F("Suhler Mark");
        break;
    }
    case 302531:
    {
        returnValue = F("Suhler Str.");
        break;
    }
    case 302532:
    {
        returnValue = F("Suhlersgasse");
        break;
    }
    case 302533:
    {
        returnValue = F("Suhlesstr.");
        break;
    }
    case 302534:
    {
        returnValue = F("Suhlesweg");
        break;
    }
    case 302535:
    {
        returnValue = F("Suhlstr.");
        break;
    }
    case 302536:
    {
        returnValue = F("Suhltalstr.");
        break;
    }
    case 302537:
    {
        returnValue = F("Suhlweg");
        break;
    }
    case 302538:
    {
        returnValue = F("Suhlwiesen");
        break;
    }
    case 302539:
    {
        returnValue = F("Suhmsheide");
        break;
    }
    case 302540:
    {
        returnValue = F("Suhoper Weg");
        break;
    }
    case 302541:
    {
        returnValue = F("Suhorster Weg");
        break;
    }
    case 302542:
    {
        returnValue = F("Suhrbrook");
        break;
    }
    case 302543:
    {
        returnValue = F("Suhrenbrooksweg");
        break;
    }
    case 302544:
    {
        returnValue = F("Suhrendamm");
        break;
    }
    case 302545:
    {
        returnValue = F("Suhrenpohl");
        break;
    }
    case 302546:
    {
        returnValue = F("Suhrfeld");
        break;
    }
    case 302547:
    {
        returnValue = F("Suhrfeldstr.");
        break;
    }
    case 302548:
    {
        returnValue = F("Suhrhof");
        break;
    }
    case 302549:
    {
        returnValue = F("Suhring");
        break;
    }
    case 302550:
    {
        returnValue = F("Suhrkamp");
        break;
    }
    case 302551:
    {
        returnValue = F("Suhrkampen");
        break;
    }
    case 302552:
    {
        returnValue = F("Suhrlandtstr.");
        break;
    }
    case 302553:
    {
        returnValue = F("Suhrnkrog");
        break;
    }
    case 302554:
    {
        returnValue = F("Suhrstr.");
        break;
    }
    case 302555:
    {
        returnValue = F("Suhstr.");
        break;
    }
    case 302556:
    {
        returnValue = F("Suidbroekstr.");
        break;
    }
    case 302557:
    {
        returnValue = F("Suidgerstr.");
        break;
    }
    case 302558:
    {
        returnValue = F("Suisdonk");
        break;
    }
    case 302559:
    {
        returnValue = F("Suitbertusstr.");
        break;
    }
    case 302560:
    {
        returnValue = F("Suitbertusweg");
        break;
    }
    case 302561:
    {
        returnValue = F("Suiterweg");
        break;
    }
    case 302562:
    {
        returnValue = F("Suitgergasse");
        break;
    }
    case 302563:
    {
        returnValue = F("Sujendamm");
        break;
    }
    case 302564:
    {
        returnValue = F("Suke");
        break;
    }
    case 302565:
    {
        returnValue = F("Suki-Str.");
        break;
    }
    case 302566:
    {
        returnValue = F("Sukower Chaussee");
        break;
    }
    case 302567:
    {
        returnValue = F("Sukower Str.");
        break;
    }
    case 302568:
    {
        returnValue = F("Sulaweg");
        break;
    }
    case 302569:
    {
        returnValue = F("Sulburgring");
        break;
    }
    case 302570:
    {
        returnValue = F("Suldieck");
        break;
    }
    case 302571:
    {
        returnValue = F("Sulenbecker Grund");
        break;
    }
    case 302572:
    {
        returnValue = F("Sulenbecker Weg");
        break;
    }
    case 302573:
    {
        returnValue = F("Sulenstr.");
        break;
    }
    case 302574:
    {
        returnValue = F("Sulgauer Str.");
        break;
    }
    case 302575:
    {
        returnValue = F("Sulgener Str.");
        break;
    }
    case 302576:
    {
        returnValue = F("Sulgerberg");
        break;
    }
    case 302577:
    {
        returnValue = F("Sulinger Gärten");
        break;
    }
    case 302578:
    {
        returnValue = F("Sulinger Str.");
        break;
    }
    case 302579:
    {
        returnValue = F("Sulliggasse");
        break;
    }
    case 302580:
    {
        returnValue = F("Sulmaring");
        break;
    }
    case 302581:
    {
        returnValue = F("Sulmetinger Str.");
        break;
    }
    case 302582:
    {
        returnValue = F("Sulminger Str.");
        break;
    }
    case 302583:
    {
        returnValue = F("Sulmisheimer Weg");
        break;
    }
    case 302584:
    {
        returnValue = F("Sulmpark");
        break;
    }
    case 302585:
    {
        returnValue = F("Sulmstr.");
        break;
    }
    case 302586:
    {
        returnValue = F("Sulpacher Str.");
        break;
    }
    case 302587:
    {
        returnValue = F("Sultanshöhe");
        break;
    }
    case 302588:
    {
        returnValue = F("Sultenstr.");
        break;
    }
    case 302589:
    {
        returnValue = F("Sultitzer Platz");
        break;
    }
    case 302590:
    {
        returnValue = F("Sulz");
        break;
    }
    case 302591:
    {
        returnValue = F("Sulz Geräumt");
        break;
    }
    case 302592:
    {
        returnValue = F("Sulz-Geräumt");
        break;
    }
    case 302593:
    {
        returnValue = F("Sulzacher Str.");
        break;
    }
    case 302594:
    {
        returnValue = F("Sulzachweg");
        break;
    }
    case 302595:
    {
        returnValue = F("Sulzaer Str.");
        break;
    }
    case 302596:
    {
        returnValue = F("Sulzallee");
        break;
    }
    case 302597:
    {
        returnValue = F("Sulzaue");
        break;
    }
    case 302598:
    {
        returnValue = F("Sulzauer Weg");
        break;
    }
    case 302599:
    {
        returnValue = F("Sulzbach");
        break;
    }
    case 302600:
    {
        returnValue = F("Sulzbacher Eck");
        break;
    }
    case 302601:
    {
        returnValue = F("Sulzbacher Str.");
        break;
    }
    case 302602:
    {
        returnValue = F("Sulzbacher Weg");
        break;
    }
    case 302603:
    {
        returnValue = F("Sulzbacherweg");
        break;
    }
    case 302604:
    {
        returnValue = F("Sulzbachstr.");
        break;
    }
    case 302605:
    {
        returnValue = F("Sulzbachtalweg");
        break;
    }
    case 302606:
    {
        returnValue = F("Sulzbachweg");
        break;
    }
    case 302607:
    {
        returnValue = F("Sulzberg");
        break;
    }
    case 302608:
    {
        returnValue = F("Sulzberg See");
        break;
    }
    case 302609:
    {
        returnValue = F("Sulzberger Str.");
        break;
    }
    case 302610:
    {
        returnValue = F("Sulzbergstr.");
        break;
    }
    case 302611:
    {
        returnValue = F("Sulzbergweg");
        break;
    }
    case 302612:
    {
        returnValue = F("Sulzbrunnenstr.");
        break;
    }
    case 302613:
    {
        returnValue = F("Sulzburger Str.");
        break;
    }
    case 302614:
    {
        returnValue = F("Sulzburger Weg");
        break;
    }
    case 302615:
    {
        returnValue = F("Sulzburgerweg");
        break;
    }
    case 302616:
    {
        returnValue = F("Sulzburgstr.");
        break;
    }
    case 302617:
    {
        returnValue = F("Sulzbächle");
        break;
    }
    case 302618:
    {
        returnValue = F("Sulzbürger Str.");
        break;
    }
    case 302619:
    {
        returnValue = F("Sulzdorfer Str.");
        break;
    }
    case 302620:
    {
        returnValue = F("Sulzdorfer Weg");
        break;
    }
    case 302621:
    {
        returnValue = F("Sulzebeneweg");
        break;
    }
    case 302622:
    {
        returnValue = F("Sulzelhalde");
        break;
    }
    case 302623:
    {
        returnValue = F("Sulzemooser Str.");
        break;
    }
    case 302624:
    {
        returnValue = F("Sulzengarten");
        break;
    }
    case 302625:
    {
        returnValue = F("Sulzenstr.");
        break;
    }
    case 302626:
    {
        returnValue = F("Sulzenweg");
        break;
    }
    case 302627:
    {
        returnValue = F("Sulzer Eck");
        break;
    }
    case 302628:
    {
        returnValue = F("Sulzer Leimengrube");
        break;
    }
    case 302629:
    {
        returnValue = F("Sulzer Str.");
        break;
    }
    case 302630:
    {
        returnValue = F("Sulzer Weg");
        break;
    }
    case 302631:
    {
        returnValue = F("Sulzerkopfweg");
        break;
    }
    case 302632:
    {
        returnValue = F("Sulzerring");
        break;
    }
    case 302633:
    {
        returnValue = F("Sulzerstr.");
        break;
    }
    case 302634:
    {
        returnValue = F("Sulzerweg");
        break;
    }
    case 302635:
    {
        returnValue = F("Sulzerwiese");
        break;
    }
    case 302636:
    {
        returnValue = F("Sulzfelder Str.");
        break;
    }
    case 302637:
    {
        returnValue = F("Sulzfelder Weg");
        break;
    }
    case 302638:
    {
        returnValue = F("Sulzgasse");
        break;
    }
    case 302639:
    {
        returnValue = F("Sulzgeräumt");
        break;
    }
    case 302640:
    {
        returnValue = F("Sulzheimer Str.");
        break;
    }
    case 302641:
    {
        returnValue = F("Sulzhof");
        break;
    }
    case 302642:
    {
        returnValue = F("Sulzhofer Str.");
        break;
    }
    case 302643:
    {
        returnValue = F("Sulzhofstr.");
        break;
    }
    case 302644:
    {
        returnValue = F("Sulzkirchener Str.");
        break;
    }
    case 302645:
    {
        returnValue = F("Sulzleswasensträßchen");
        break;
    }
    case 302646:
    {
        returnValue = F("Sulzmahdweg");
        break;
    }
    case 302647:
    {
        returnValue = F("Sulzmühl");
        break;
    }
    case 302648:
    {
        returnValue = F("Sulzrichtstatt");
        break;
    }
    case 302649:
    {
        returnValue = F("Sulzschlagweg");
        break;
    }
    case 302650:
    {
        returnValue = F("Sulzsteige");
        break;
    }
    case 302651:
    {
        returnValue = F("Sulzstr.");
        break;
    }
    case 302652:
    {
        returnValue = F("Sulzsträßle");
        break;
    }
    case 302653:
    {
        returnValue = F("Sulztalstr.");
        break;
    }
    case 302654:
    {
        returnValue = F("Sulzteich-Richtstatt");
        break;
    }
    case 302655:
    {
        returnValue = F("Sulzthaler Str.");
        break;
    }
    case 302656:
    {
        returnValue = F("Sulzweg");
        break;
    }
    case 302657:
    {
        returnValue = F("Sulzwiesenstr.");
        break;
    }
    case 302658:
    {
        returnValue = F("Sulzwiesenweg");
        break;
    }
    case 302659:
    {
        returnValue = F("Sulzäcker");
        break;
    }
    case 302660:
    {
        returnValue = F("Sumbach");
        break;
    }
    case 302661:
    {
        returnValue = F("Sumbachweg");
        break;
    }
    case 302662:
    {
        returnValue = F("Sumbrink");
        break;
    }
    case 302663:
    {
        returnValue = F("Sumeraugasse");
        break;
    }
    case 302664:
    {
        returnValue = F("Sumgeilweg");
        break;
    }
    case 302665:
    {
        returnValue = F("Summapark");
        break;
    }
    case 302666:
    {
        returnValue = F("Summastr.");
        break;
    }
    case 302667:
    {
        returnValue = F("Summer-Breeze-Weg");
        break;
    }
    case 302668:
    {
        returnValue = F("Summer-Marley-Gedenkpark");
        break;
    }
    case 302669:
    {
        returnValue = F("Summererstr.");
        break;
    }
    case 302670:
    {
        returnValue = F("Summererweg");
        break;
    }
    case 302671:
    {
        returnValue = F("Summerhofstr.");
        break;
    }
    case 302672:
    {
        returnValue = F("Summermanweg");
        break;
    }
    case 302673:
    {
        returnValue = F("Summter Chaussee");
        break;
    }
    case 302674:
    {
        returnValue = F("Summter Str.");
        break;
    }
    case 302675:
    {
        returnValue = F("Sump's Weg");
        break;
    }
    case 302676:
    {
        returnValue = F("Sumpelweg");
        break;
    }
    case 302677:
    {
        returnValue = F("Sumperlande");
        break;
    }
    case 302678:
    {
        returnValue = F("Sumperweg");
        break;
    }
    case 302679:
    {
        returnValue = F("Sumpf");
        break;
    }
    case 302680:
    {
        returnValue = F("Sumpf-Schneise");
        break;
    }
    case 302681:
    {
        returnValue = F("Sumpf-Weg");
        break;
    }
    case 302682:
    {
        returnValue = F("Sumpfler");
        break;
    }
    case 302683:
    {
        returnValue = F("Sumpfmühlenweg");
        break;
    }
    case 302684:
    {
        returnValue = F("Sumpfohrener Str.");
        break;
    }
    case 302685:
    {
        returnValue = F("Sumpfpfad (nicht empfohlen)");
        break;
    }
    case 302686:
    {
        returnValue = F("Sumpfquerung");
        break;
    }
    case 302687:
    {
        returnValue = F("Sumpfstr.");
        break;
    }
    case 302688:
    {
        returnValue = F("Sumpftonbodenweg");
        break;
    }
    case 302689:
    {
        returnValue = F("Sumpfwald");
        break;
    }
    case 302690:
    {
        returnValue = F("Sumpfweg");
        break;
    }
    case 302691:
    {
        returnValue = F("Sumpweg");
        break;
    }
    case 302692:
    {
        returnValue = F("Sumter Hauptstr.");
        break;
    }
    case 302693:
    {
        returnValue = F("Sumter Str.");
        break;
    }
    case 302694:
    {
        returnValue = F("Sumter Weg");
        break;
    }
    case 302695:
    {
        returnValue = F("Sundahlstr.");
        break;
    }
    case 302696:
    {
        returnValue = F("Sundblick");
        break;
    }
    case 302697:
    {
        returnValue = F("Sundebrede");
        break;
    }
    case 302698:
    {
        returnValue = F("Sunder Str.");
        break;
    }
    case 302699:
    {
        returnValue = F("Sunderanger");
        break;
    }
    case 302700:
    {
        returnValue = F("Sunderbachstr.");
        break;
    }
    case 302701:
    {
        returnValue = F("Sunderbauer");
        break;
    }
    case 302702:
    {
        returnValue = F("Sunderberg");
        break;
    }
    case 302703:
    {
        returnValue = F("Sunderburgweg");
        break;
    }
    case 302704:
    {
        returnValue = F("Sunderfeld");
        break;
    }
    case 302705:
    {
        returnValue = F("Sunderhausstr.");
        break;
    }
    case 302706:
    {
        returnValue = F("Sunderhofstr.");
        break;
    }
    case 302707:
    {
        returnValue = F("Sunderholzer Weg");
        break;
    }
    case 302708:
    {
        returnValue = F("Sunderholzweg");
        break;
    }
    case 302709:
    {
        returnValue = F("Sunderhues Esch");
        break;
    }
    case 302710:
    {
        returnValue = F("Sundering");
        break;
    }
    case 302711:
    {
        returnValue = F("Sunderkamp");
        break;
    }
    case 302712:
    {
        returnValue = F("Sundermanns Knapp");
        break;
    }
    case 302713:
    {
        returnValue = F("Sundermannshof");
        break;
    }
    case 302714:
    {
        returnValue = F("Sundermannstr.");
        break;
    }
    case 302715:
    {
        returnValue = F("Sundern");
        break;
    }
    case 302716:
    {
        returnValue = F("Sundernblick");
        break;
    }
    case 302717:
    {
        returnValue = F("Sundernbrink");
        break;
    }
    case 302718:
    {
        returnValue = F("Sundernburg");
        break;
    }
    case 302719:
    {
        returnValue = F("Sunderndorferstr.");
        break;
    }
    case 302720:
    {
        returnValue = F("Sunderner Str.");
        break;
    }
    case 302721:
    {
        returnValue = F("Sundernkamp");
        break;
    }
    case 302722:
    {
        returnValue = F("Sundernkämpe");
        break;
    }
    case 302723:
    {
        returnValue = F("Sundernstege");
        break;
    }
    case 302724:
    {
        returnValue = F("Sundernstr.");
        break;
    }
    case 302725:
    {
        returnValue = F("Sundernweg");
        break;
    }
    case 302726:
    {
        returnValue = F("Sunderstr.");
        break;
    }
    case 302727:
    {
        returnValue = F("Sundertor");
        break;
    }
    case 302728:
    {
        returnValue = F("Sunderweg");
        break;
    }
    case 302729:
    {
        returnValue = F("Sunderwiese");
        break;
    }
    case 302730:
    {
        returnValue = F("Sundfeld");
        break;
    }
    case 302731:
    {
        returnValue = F("Sundgaustr.");
        break;
    }
    case 302732:
    {
        returnValue = F("Sundhalde");
        break;
    }
    case 302733:
    {
        returnValue = F("Sundhaldestr.");
        break;
    }
    case 302734:
    {
        returnValue = F("Sundhausstr.");
        break;
    }
    case 302735:
    {
        returnValue = F("Sundheller Str.");
        break;
    }
    case 302736:
    {
        returnValue = F("Sundhofweg");
        break;
    }
    case 302737:
    {
        returnValue = F("Sundhäuser Gasse");
        break;
    }
    case 302738:
    {
        returnValue = F("Sundhäuser Str.");
        break;
    }
    case 302739:
    {
        returnValue = F("Sundhäuser Weg");
        break;
    }
    case 302740:
    {
        returnValue = F("Sundische Str.");
        break;
    }
    case 302741:
    {
        returnValue = F("Sundpromenade");
        break;
    }
    case 302742:
    {
        returnValue = F("Sundremdaer Str.");
        break;
    }
    case 302743:
    {
        returnValue = F("Sundsacker");
        break;
    }
    case 302744:
    {
        returnValue = F("Sundstr.");
        break;
    }
    case 302745:
    {
        returnValue = F("Sundstraat");
        break;
    }
    case 302746:
    {
        returnValue = F("Sundweg");
        break;
    }
    case 302747:
    {
        returnValue = F("Sundwiger Weg");
        break;
    }
    case 302748:
    {
        returnValue = F("Sunger");
        break;
    }
    case 302749:
    {
        returnValue = F("Sunkenrotherstr.");
        break;
    }
    case 302750:
    {
        returnValue = F("Sunklergäßchen");
        break;
    }
    case 302751:
    {
        returnValue = F("Sunkländerweg");
        break;
    }
    case 302752:
    {
        returnValue = F("Sunnenbarg");
        break;
    }
    case 302753:
    {
        returnValue = F("Sunnenbrink");
        break;
    }
    case 302754:
    {
        returnValue = F("Sunnenkamp");
        break;
    }
    case 302755:
    {
        returnValue = F("Sunnerkampstege");
        break;
    }
    case 302756:
    {
        returnValue = F("Sunninger Weg");
        break;
    }
    case 302757:
    {
        returnValue = F("Sunstedter Str.");
        break;
    }
    case 302758:
    {
        returnValue = F("Sunsweiler Str.");
        break;
    }
    case 302759:
    {
        returnValue = F("Suntalstr.");
        break;
    }
    case 302760:
    {
        returnValue = F("Sunterwiesen");
        break;
    }
    case 302761:
    {
        returnValue = F("Sunthausener Str.");
        break;
    }
    case 302762:
    {
        returnValue = F("Sunthauser Str.");
        break;
    }
    case 302763:
    {
        returnValue = F("Sunthauserweg");
        break;
    }
    case 302764:
    {
        returnValue = F("Suntheimstr.");
        break;
    }
    case 302765:
    {
        returnValue = F("Sunthelle");
        break;
    }
    case 302766:
    {
        returnValue = F("Suomiweg");
        break;
    }
    case 302767:
    {
        returnValue = F("Superior-von-der-Sitt-Str.");
        break;
    }
    case 302768:
    {
        returnValue = F("Suppbrunnenweg");
        break;
    }
    case 302769:
    {
        returnValue = F("Suppelsgrundweg");
        break;
    }
    case 302770:
    {
        returnValue = F("Suppengasse");
        break;
    }
    case 302771:
    {
        returnValue = F("Suppenlochgasse");
        break;
    }
    case 302772:
    {
        returnValue = F("Suppenschlagweg");
        break;
    }
    case 302773:
    {
        returnValue = F("Suppensteige");
        break;
    }
    case 302774:
    {
        returnValue = F("Suppenstieg");
        break;
    }
    case 302775:
    {
        returnValue = F("Suppenstr.");
        break;
    }
    case 302776:
    {
        returnValue = F("Suppinger Str.");
        break;
    }
    case 302777:
    {
        returnValue = F("Suppinger Weg");
        break;
    }
    case 302778:
    {
        returnValue = F("Surahammarweg");
        break;
    }
    case 302779:
    {
        returnValue = F("Surbostel");
        break;
    }
    case 302780:
    {
        returnValue = F("Surdelweg");
        break;
    }
    case 302781:
    {
        returnValue = F("Surenburg");
        break;
    }
    case 302782:
    {
        returnValue = F("Surenburger Str.");
        break;
    }
    case 302783:
    {
        returnValue = F("Surend");
        break;
    }
    case 302784:
    {
        returnValue = F("Surende");
        break;
    }
    case 302785:
    {
        returnValue = F("Surendorf");
        break;
    }
    case 302786:
    {
        returnValue = F("Surenkamp");
        break;
    }
    case 302787:
    {
        returnValue = F("Surenstr.");
        break;
    }
    case 302788:
    {
        returnValue = F("Sureschenstr.");
        break;
    }
    case 302789:
    {
        returnValue = F("Sureweg");
        break;
    }
    case 302790:
    {
        returnValue = F("Surfeld");
        break;
    }
    case 302791:
    {
        returnValue = F("Surfelln");
        break;
    }
    case 302792:
    {
        returnValue = F("Surferweg");
        break;
    }
    case 302793:
    {
        returnValue = F("Surgaster Weg");
        break;
    }
    case 302794:
    {
        returnValue = F("Surgères-Platz");
        break;
    }
    case 302795:
    {
        returnValue = F("Surhaken");
        break;
    }
    case 302796:
    {
        returnValue = F("Surhalf");
        break;
    }
    case 302797:
    {
        returnValue = F("Surheimer Str.");
        break;
    }
    case 302798:
    {
        returnValue = F("Surkamp");
        break;
    }
    case 302799:
    {
        returnValue = F("Surkstamm");
        break;
    }
    case 302800:
    {
        returnValue = F("Surlacherweg");
        break;
    }
    case 302801:
    {
        returnValue = F("Surmanns Weg");
        break;
    }
    case 302802:
    {
        returnValue = F("Surmskamp");
        break;
    }
    case 302803:
    {
        returnValue = F("Suroide");
        break;
    }
    case 302804:
    {
        returnValue = F("Suroider Weg");
        break;
    }
    case 302805:
    {
        returnValue = F("Surrbachweg");
        break;
    }
    case 302806:
    {
        returnValue = F("Surredder");
        break;
    }
    case 302807:
    {
        returnValue = F("Surstr.");
        break;
    }
    case 302808:
    {
        returnValue = F("Surtal");
        break;
    }
    case 302809:
    {
        returnValue = F("Surweg");
        break;
    }
    case 302810:
    {
        returnValue = F("Surwisch");
        break;
    }
    case 302811:
    {
        returnValue = F("Surwolder Str.");
        break;
    }
    case 302812:
    {
        returnValue = F("Susanna-Haunschütz-Str.");
        break;
    }
    case 302813:
    {
        returnValue = F("Susanna-Waitzinger-Str.");
        break;
    }
    case 302814:
    {
        returnValue = F("Susannastr.");
        break;
    }
    case 302815:
    {
        returnValue = F("Susanne-Fischer-Weg");
        break;
    }
    case 302816:
    {
        returnValue = F("Susanne-Hamberg-Weg");
        break;
    }
    case 302817:
    {
        returnValue = F("Susanne-Ostendorf-Str.");
        break;
    }
    case 302818:
    {
        returnValue = F("Susanne-Reisacher-Str.");
        break;
    }
    case 302819:
    {
        returnValue = F("Susannenpfad");
        break;
    }
    case 302820:
    {
        returnValue = F("Susannenstr.");
        break;
    }
    case 302821:
    {
        returnValue = F("Susannenweg");
        break;
    }
    case 302822:
    {
        returnValue = F("Susastr.");
        break;
    }
    case 302823:
    {
        returnValue = F("Susbeeck");
        break;
    }
    case 302824:
    {
        returnValue = F("Susbergstr.");
        break;
    }
    case 302825:
    {
        returnValue = F("Susbrücke");
        break;
    }
    case 302826:
    {
        returnValue = F("Susekoppel");
        break;
    }
    case 302827:
    {
        returnValue = F("Susenbarg");
        break;
    }
    case 302828:
    {
        returnValue = F("Susenburger Str.");
        break;
    }
    case 302829:
    {
        returnValue = F("Susenburger Weg");
        break;
    }
    case 302830:
    {
        returnValue = F("Sushörn");
        break;
    }
    case 302831:
    {
        returnValue = F("Susi-Lauber-Str.");
        break;
    }
    case 302832:
    {
        returnValue = F("Sussargues Ring");
        break;
    }
    case 302833:
    {
        returnValue = F("Sustaplast-Str.");
        break;
    }
    case 302834:
    {
        returnValue = F("Sustrumer Str.");
        break;
    }
    case 302835:
    {
        returnValue = F("Sutelliusstr.");
        break;
    }
    case 302836:
    {
        returnValue = F("Suterballig");
        break;
    }
    case 302837:
    {
        returnValue = F("Suteroder Str.");
        break;
    }
    case 302838:
    {
        returnValue = F("Sutfeldweg");
        break;
    }
    case 302839:
    {
        returnValue = F("Suthaarstr.");
        break;
    }
    case 302840:
    {
        returnValue = F("Suthfeldring");
        break;
    }
    case 302841:
    {
        returnValue = F("Sutte");
        break;
    }
    case 302842:
    {
        returnValue = F("Sutten");
        break;
    }
    case 302843:
    {
        returnValue = F("Suttenbuckelweg");
        break;
    }
    case 302844:
    {
        returnValue = F("Suttengasse");
        break;
    }
    case 302845:
    {
        returnValue = F("Suttenweg");
        break;
    }
    case 302846:
    {
        returnValue = F("Suttergasse");
        break;
    }
    case 302847:
    {
        returnValue = F("Suttfeld");
        break;
    }
    case 302848:
    {
        returnValue = F("Suttfeldsweg");
        break;
    }
    case 302849:
    {
        returnValue = F("Sutthauser Str.");
        break;
    }
    case 302850:
    {
        returnValue = F("Suttnerstr.");
        break;
    }
    case 302851:
    {
        returnValue = F("Suttnerweg");
        break;
    }
    case 302852:
    {
        returnValue = F("Suttonstr.");
        break;
    }
    case 302853:
    {
        returnValue = F("Suttorf");
        break;
    }
    case 302854:
    {
        returnValue = F("Suttroper Weg");
        break;
    }
    case 302855:
    {
        returnValue = F("Suttruper Str.");
        break;
    }
    case 302856:
    {
        returnValue = F("Suttruper Weg");
        break;
    }
    case 302857:
    {
        returnValue = F("Sutumer Bruch");
        break;
    }
    case 302858:
    {
        returnValue = F("Suurbusch");
        break;
    }
    case 302859:
    {
        returnValue = F("Suurdiek");
        break;
    }
    case 302860:
    {
        returnValue = F("Suurend");
        break;
    }
    case 302861:
    {
        returnValue = F("Suurfeld");
        break;
    }
    case 302862:
    {
        returnValue = F("Suxdorf");
        break;
    }
    case 302863:
    {
        returnValue = F("Suxdorfer Str.");
        break;
    }
    case 302864:
    {
        returnValue = F("Suytingsweg");
        break;
    }
    case 302865:
    {
        returnValue = F("Suzanne-Valadon-Str.");
        break;
    }
    case 302866:
    {
        returnValue = F("Svantevitstr.");
        break;
    }
    case 302867:
    {
        returnValue = F("Sven-Hedin-Str.");
        break;
    }
    case 302868:
    {
        returnValue = F("Sven-Helander-Weg");
        break;
    }
    case 302869:
    {
        returnValue = F("Sven-Husted-Andersen-Weg");
        break;
    }
    case 302870:
    {
        returnValue = F("Sven-Kovacs-Str.");
        break;
    }
    case 302871:
    {
        returnValue = F("Svendborger Str.");
        break;
    }
    case 302872:
    {
        returnValue = F("Sventanaring");
        break;
    }
    case 302873:
    {
        returnValue = F("Svenweg");
        break;
    }
    case 302874:
    {
        returnValue = F("Svilengrader Str.");
        break;
    }
    case 302875:
    {
        returnValue = F("Swaffhamweg");
        break;
    }
    case 302876:
    {
        returnValue = F("Swager sin Grund");
        break;
    }
    case 302877:
    {
        returnValue = F("Swakopmund");
        break;
    }
    case 302878:
    {
        returnValue = F("Swalbensteert");
        break;
    }
    case 302879:
    {
        returnValue = F("Swalmener Str.");
        break;
    }
    case 302880:
    {
        returnValue = F("Swalmer Platz");
        break;
    }
    case 302881:
    {
        returnValue = F("Swannenbarch");
        break;
    }
    case 302882:
    {
        returnValue = F("Swantow");
        break;
    }
    case 302883:
    {
        returnValue = F("Swantönskamp");
        break;
    }
    case 302884:
    {
        returnValue = F("Swarte Riede");
        break;
    }
    case 302885:
    {
        returnValue = F("Swarte-Wall");
        break;
    }
    case 302886:
    {
        returnValue = F("Swarten Kamp");
        break;
    }
    case 302887:
    {
        returnValue = F("Swarten Pohl");
        break;
    }
    case 302888:
    {
        returnValue = F("Swarten Pool");
        break;
    }
    case 302889:
    {
        returnValue = F("Swartepapestr.");
        break;
    }
    case 302890:
    {
        returnValue = F("Swartfeldweg");
        break;
    }
    case 302891:
    {
        returnValue = F("Swartkopweg");
        break;
    }
    case 302892:
    {
        returnValue = F("Swartredder");
        break;
    }
    case 302893:
    {
        returnValue = F("Swartwolder Dwarsdeep");
        break;
    }
    case 302894:
    {
        returnValue = F("Swattdrosselweg");
        break;
    }
    case 302895:
    {
        returnValue = F("Swatte Bargen");
        break;
    }
    case 302896:
    {
        returnValue = F("Swatte Löhn");
        break;
    }
    case 302897:
    {
        returnValue = F("Swatten Weg");
        break;
    }
    case 302898:
    {
        returnValue = F("Swattputt");
        break;
    }
    case 302899:
    {
        returnValue = F("Swebenstr.");
        break;
    }
    case 302900:
    {
        returnValue = F("Sweder-Hopp-Str.");
        break;
    }
    case 302901:
    {
        returnValue = F("Swederstr.");
        break;
    }
    case 302902:
    {
        returnValue = F("Swemmuur");
        break;
    }
    case 302903:
    {
        returnValue = F("Swennastr.");
        break;
    }
    case 302904:
    {
        returnValue = F("Swenslop");
        break;
    }
    case 302905:
    {
        returnValue = F("Swenstr.");
        break;
    }
    case 302906:
    {
        returnValue = F("Swidmutstr.");
        break;
    }
    case 302907:
    {
        returnValue = F("Swieneweg");
        break;
    }
    case 302908:
    {
        returnValue = F("Swiensmarkt");
        break;
    }
    case 302909:
    {
        returnValue = F("Swienweid");
        break;
    }
    case 302910:
    {
        returnValue = F("Swiggerstr.");
        break;
    }
    case 302911:
    {
        returnValue = F("Swine Ende");
        break;
    }
    case 302912:
    {
        returnValue = F("Swinemünder Chaussee");
        break;
    }
    case 302913:
    {
        returnValue = F("Swinemünder Str.");
        break;
    }
    case 302914:
    {
        returnValue = F("Swinkestr.");
        break;
    }
    case 302915:
    {
        returnValue = F("Swinskjer");
        break;
    }
    case 302916:
    {
        returnValue = F("Swistaue");
        break;
    }
    case 302917:
    {
        returnValue = F("Swistbach");
        break;
    }
    case 302918:
    {
        returnValue = F("Swistbachstr.");
        break;
    }
    case 302919:
    {
        returnValue = F("Swister-Turm-Gelände");
        break;
    }
    case 302920:
    {
        returnValue = F("Swiststr.");
        break;
    }
    case 302921:
    {
        returnValue = F("Swisttaler Str.");
        break;
    }
    case 302922:
    {
        returnValue = F("Swoopallee");
        break;
    }
    case 302923:
    {
        returnValue = F("Swülkennest");
        break;
    }
    case 302924:
    {
        returnValue = F("Sybergstr.");
        break;
    }
    case 302925:
    {
        returnValue = F("Sybilla-Maurer-Allee");
        break;
    }
    case 302926:
    {
        returnValue = F("Sybillenburg");
        break;
    }
    case 302927:
    {
        returnValue = F("Sybillenstr.");
        break;
    }
    case 302928:
    {
        returnValue = F("Sybillenweg");
        break;
    }
    case 302929:
    {
        returnValue = F("Sybillesgrundweg");
        break;
    }
    case 302930:
    {
        returnValue = F("Sybkestr.");
        break;
    }
    case 302931:
    {
        returnValue = F("Sybrechtplatz");
        break;
    }
    case 302932:
    {
        returnValue = F("Syburger Str.");
        break;
    }
    case 302933:
    {
        returnValue = F("Syców Kreisel");
        break;
    }
    case 302934:
    {
        returnValue = F("Sydekumstr.");
        break;
    }
    case 302935:
    {
        returnValue = F("Sydow");
        break;
    }
    case 302936:
    {
        returnValue = F("Sydow Weg");
        break;
    }
    case 302937:
    {
        returnValue = F("Sydowshof");
        break;
    }
    case 302938:
    {
        returnValue = F("Sydowstr.");
        break;
    }
    case 302939:
    {
        returnValue = F("Sydowswiese");
        break;
    }
    case 302940:
    {
        returnValue = F("Syen-Venn-Str.");
        break;
    }
    case 302941:
    {
        returnValue = F("Sygiberg");
        break;
    }
    case 302942:
    {
        returnValue = F("Syhraer Allee");
        break;
    }
    case 302943:
    {
        returnValue = F("Syhraer Str.");
        break;
    }
    case 302944:
    {
        returnValue = F("Syker Str.");
        break;
    }
    case 302945:
    {
        returnValue = F("Sylbecker Berg");
        break;
    }
    case 302946:
    {
        returnValue = F("Sylbitzer Str.");
        break;
    }
    case 302947:
    {
        returnValue = F("Syldaer Weg");
        break;
    }
    case 302948:
    {
        returnValue = F("Sylhorstweg");
        break;
    }
    case 302949:
    {
        returnValue = F("Sylken");
        break;
    }
    case 302950:
    {
        returnValue = F("Sylkweg");
        break;
    }
    case 302951:
    {
        returnValue = F("Sylter Bogen");
        break;
    }
    case 302952:
    {
        returnValue = F("Sylter Ring");
        break;
    }
    case 302953:
    {
        returnValue = F("Sylter Str.");
        break;
    }
    case 302954:
    {
        returnValue = F("Sylter Weg");
        break;
    }
    case 302955:
    {
        returnValue = F("Syltring");
        break;
    }
    case 302956:
    {
        returnValue = F("Syltstr.");
        break;
    }
    case 302957:
    {
        returnValue = F("Syltweg");
        break;
    }
    case 302958:
    {
        returnValue = F("Sylvanerstr.");
        break;
    }
    case 302959:
    {
        returnValue = F("Sylvanerweg");
        break;
    }
    case 302960:
    {
        returnValue = F("Sylvenstal");
        break;
    }
    case 302961:
    {
        returnValue = F("Sylvensteinstr.");
        break;
    }
    case 302962:
    {
        returnValue = F("Sylvester-Hörndl-Str.");
        break;
    }
    case 302963:
    {
        returnValue = F("Sylvester-Lieb-Str.");
        break;
    }
    case 302964:
    {
        returnValue = F("Sylvesterstr.");
        break;
    }
    case 302965:
    {
        returnValue = F("Sylvesterweg");
        break;
    }
    case 302966:
    {
        returnValue = F("Sympherallee");
        break;
    }
    case 302967:
    {
        returnValue = F("Synagoge Bork mit Park");
        break;
    }
    case 302968:
    {
        returnValue = F("Synagogengasse");
        break;
    }
    case 302969:
    {
        returnValue = F("Synagogenplatz");
        break;
    }
    case 302970:
    {
        returnValue = F("Synagogenreulchen");
        break;
    }
    case 302971:
    {
        returnValue = F("Synagogenstr.");
        break;
    }
    case 302972:
    {
        returnValue = F("Synagogenweg");
        break;
    }
    case 302973:
    {
        returnValue = F("Syrgensteinring");
        break;
    }
    case 302974:
    {
        returnValue = F("Syringer Str.");
        break;
    }
    case 302975:
    {
        returnValue = F("Syrius-Eberle-Anlage");
        break;
    }
    case 302976:
    {
        returnValue = F("Syrius-Eberle-Weg");
        break;
    }
    case 302977:
    {
        returnValue = F("Syrlinstr.");
        break;
    }
    case 302978:
    {
        returnValue = F("Syrlinweg");
        break;
    }
    case 302979:
    {
        returnValue = F("Syrmienstr.");
        break;
    }
    case 302980:
    {
        returnValue = F("Sythener Str.");
        break;
    }
    case 302981:
    {
        returnValue = F("Sythener Weg");
        break;
    }
    case 302982:
    {
        returnValue = F("Syuggewarder Weg");
        break;
    }
    case 302983:
    {
        returnValue = F("Syvekier");
        break;
    }
    case 302984:
    {
        returnValue = F("Szamotuly-Str.");
        break;
    }
    case 302985:
    {
        returnValue = F("Szarstr.");
        break;
    }
    case 302986:
    {
        returnValue = F("Szczytnaer Weg");
        break;
    }
    case 302987:
    {
        returnValue = F("Szekszardstr.");
        break;
    }
    case 302988:
    {
        returnValue = F("Szerencsplatz");
        break;
    }
    case 302989:
    {
        returnValue = F("Szillaweg");
        break;
    }
    case 302990:
    {
        returnValue = F("Säbelberg");
        break;
    }
    case 302991:
    {
        returnValue = F("Säbelstr.");
        break;
    }
    case 302992:
    {
        returnValue = F("Säbelweg");
        break;
    }
    case 302993:
    {
        returnValue = F("Säbener Platz");
        break;
    }
    case 302994:
    {
        returnValue = F("Säbener Str.");
        break;
    }
    case 302995:
    {
        returnValue = F("Säbühl");
        break;
    }
    case 302996:
    {
        returnValue = F("Sächser Weg");
        break;
    }
    case 302997:
    {
        returnValue = F("Sächsische Str.");
        break;
    }
    case 302998:
    {
        returnValue = F("Sächsischer Ring");
        break;
    }
    case 302999:
    {
        returnValue = F("Sächsischer Weinwanderweg");
        break;
    }
    case 303000:
    {
        returnValue = F("Säcker Str.");
        break;
    }
    case 303001:
    {
        returnValue = F("Säckingenstr.");
        break;
    }
    case 303002:
    {
        returnValue = F("Säckinger Str.");
        break;
    }
    case 303003:
    {
        returnValue = F("Säcklerstr.");
        break;
    }
    case 303004:
    {
        returnValue = F("Sädeliweg");
        break;
    }
    case 303005:
    {
        returnValue = F("Säftgenriede");
        break;
    }
    case 303006:
    {
        returnValue = F("Sägackerweg");
        break;
    }
    case 303007:
    {
        returnValue = F("Sägader");
        break;
    }
    case 303008:
    {
        returnValue = F("Sägadern");
        break;
    }
    case 303009:
    {
        returnValue = F("Sägbaumdumpfweg");
        break;
    }
    case 303010:
    {
        returnValue = F("Sägbergweg");
        break;
    }
    case 303011:
    {
        returnValue = F("Sägbühlweg");
        break;
    }
    case 303012:
    {
        returnValue = F("Sägdöbel");
        break;
    }
    case 303013:
    {
        returnValue = F("Säge");
        break;
    }
    case 303014:
    {
        returnValue = F("Säge Müller Weg");
        break;
    }
    case 303015:
    {
        returnValue = F("Sägebachweg");
        break;
    }
    case 303016:
    {
        returnValue = F("Sägebarthstr.");
        break;
    }
    case 303017:
    {
        returnValue = F("Sägebeckweg");
        break;
    }
    case 303018:
    {
        returnValue = F("Sägeberg");
        break;
    }
    case 303019:
    {
        returnValue = F("Sägebergs-Heide");
        break;
    }
    case 303020:
    {
        returnValue = F("Sägebuckweg");
        break;
    }
    case 303021:
    {
        returnValue = F("Sägebühlweg");
        break;
    }
    case 303022:
    {
        returnValue = F("Sägefeldweg");
        break;
    }
    case 303023:
    {
        returnValue = F("Sägegasse");
        break;
    }
    case 303024:
    {
        returnValue = F("Sägegrabenweg");
        break;
    }
    case 303025:
    {
        returnValue = F("Sägegäßle");
        break;
    }
    case 303026:
    {
        returnValue = F("Sägekuhle");
        break;
    }
    case 303027:
    {
        returnValue = F("Sägeleithe");
        break;
    }
    case 303028:
    {
        returnValue = F("Sägematt");
        break;
    }
    case 303029:
    {
        returnValue = F("Sägematte");
        break;
    }
    case 303030:
    {
        returnValue = F("Sägemattenstr.");
        break;
    }
    case 303031:
    {
        returnValue = F("Sägemattstr.");
        break;
    }
    case 303032:
    {
        returnValue = F("Sägemättle");
        break;
    }
    case 303033:
    {
        returnValue = F("Sägemühle");
        break;
    }
    case 303034:
    {
        returnValue = F("Sägemühlenbrücke");
        break;
    }
    case 303035:
    {
        returnValue = F("Sägemühlendamm");
        break;
    }
    case 303036:
    {
        returnValue = F("Sägemühlengasse");
        break;
    }
    case 303037:
    {
        returnValue = F("Sägemühlenstr.");
        break;
    }
    case 303038:
    {
        returnValue = F("Sägemühlenweg");
        break;
    }
    case 303039:
    {
        returnValue = F("Sägemühlstr.");
        break;
    }
    case 303040:
    {
        returnValue = F("Sägemühlweg");
        break;
    }
    case 303041:
    {
        returnValue = F("Sägemüllerstr.");
        break;
    }
    case 303042:
    {
        returnValue = F("Sägenbach");
        break;
    }
    case 303043:
    {
        returnValue = F("Sägenberg");
        break;
    }
    case 303044:
    {
        returnValue = F("Sägendobel");
        break;
    }
    case 303045:
    {
        returnValue = F("Sägendobelweg");
        break;
    }
    case 303046:
    {
        returnValue = F("Sägenförth");
        break;
    }
    case 303047:
    {
        returnValue = F("Sägengrundweg");
        break;
    }
    case 303048:
    {
        returnValue = F("Sägenlochstr.");
        break;
    }
    case 303049:
    {
        returnValue = F("Sägenwaldweg");
        break;
    }
    case 303050:
    {
        returnValue = F("Sägenweg");
        break;
    }
    case 303051:
    {
        returnValue = F("Sägenöschle");
        break;
    }
    case 303052:
    {
        returnValue = F("Sägeplatz");
        break;
    }
    case 303053:
    {
        returnValue = F("Sägerainweg");
        break;
    }
    case 303054:
    {
        returnValue = F("Sägereckweg");
        break;
    }
    case 303055:
    {
        returnValue = F("Sägereigässchen");
        break;
    }
    case 303056:
    {
        returnValue = F("Sägereistr.");
        break;
    }
    case 303057:
    {
        returnValue = F("Sägereiweg");
        break;
    }
    case 303058:
    {
        returnValue = F("Sägereute");
        break;
    }
    case 303059:
    {
        returnValue = F("Sägergasse");
        break;
    }
    case 303060:
    {
        returnValue = F("Sägergrün");
        break;
    }
    case 303061:
    {
        returnValue = F("Sägerrothsweg");
        break;
    }
    case 303062:
    {
        returnValue = F("Sägerstr.");
        break;
    }
    case 303063:
    {
        returnValue = F("Sägersäcker");
        break;
    }
    case 303064:
    {
        returnValue = F("Sägertalstr.");
        break;
    }
    case 303065:
    {
        returnValue = F("Sägerweg");
        break;
    }
    case 303066:
    {
        returnValue = F("Sägestr.");
        break;
    }
    case 303067:
    {
        returnValue = F("Sägetalstr.");
        break;
    }
    case 303068:
    {
        returnValue = F("Sägeweg");
        break;
    }
    case 303069:
    {
        returnValue = F("Sägeweiher");
        break;
    }
    case 303070:
    {
        returnValue = F("Sägewerk");
        break;
    }
    case 303071:
    {
        returnValue = F("Sägewerk Gerhard");
        break;
    }
    case 303072:
    {
        returnValue = F("Sägewerker Weg");
        break;
    }
    case 303073:
    {
        returnValue = F("Sägewerkstr");
        break;
    }
    case 303074:
    {
        returnValue = F("Sägewerkstr.");
        break;
    }
    case 303075:
    {
        returnValue = F("Sägewerksweg");
        break;
    }
    case 303076:
    {
        returnValue = F("Sägewerkweg");
        break;
    }
    case 303077:
    {
        returnValue = F("Sägewiesen");
        break;
    }
    case 303078:
    {
        returnValue = F("Sägeäcker");
        break;
    }
    case 303079:
    {
        returnValue = F("Sägeösch");
        break;
    }
    case 303080:
    {
        returnValue = F("Sägfeld");
        break;
    }
    case 303081:
    {
        returnValue = F("Säggasse");
        break;
    }
    case 303082:
    {
        returnValue = F("Säggrabenweg");
        break;
    }
    case 303083:
    {
        returnValue = F("Säghalden");
        break;
    }
    case 303084:
    {
        returnValue = F("Säghaldenweg");
        break;
    }
    case 303085:
    {
        returnValue = F("Sägkopfweg");
        break;
    }
    case 303086:
    {
        returnValue = F("Säglebühlweg");
        break;
    }
    case 303087:
    {
        returnValue = F("Säglochstr.");
        break;
    }
    case 303088:
    {
        returnValue = F("Sägmattweg");
        break;
    }
    case 303089:
    {
        returnValue = F("Sägmeister");
        break;
    }
    case 303090:
    {
        returnValue = F("Sägmoosweg");
        break;
    }
    case 303091:
    {
        returnValue = F("Sägmosweg");
        break;
    }
    case 303092:
    {
        returnValue = F("Sägmühl");
        break;
    }
    case 303093:
    {
        returnValue = F("Sägmühle");
        break;
    }
    case 303094:
    {
        returnValue = F("Sägmühlenallee");
        break;
    }
    case 303095:
    {
        returnValue = F("Sägmühlengasse");
        break;
    }
    case 303096:
    {
        returnValue = F("Sägmühlenstr.");
        break;
    }
    case 303097:
    {
        returnValue = F("Sägmühlensträßle");
        break;
    }
    case 303098:
    {
        returnValue = F("Sägmühlenweg");
        break;
    }
    case 303099:
    {
        returnValue = F("Sägmühler Str.");
        break;
    }
    case 303100:
    {
        returnValue = F("Sägmühlesteig");
        break;
    }
    case 303101:
    {
        returnValue = F("Sägmühlesteige");
        break;
    }
    case 303102:
    {
        returnValue = F("Sägmühlestr.");
        break;
    }
    case 303103:
    {
        returnValue = F("Sägmühleweg");
        break;
    }
    case 303104:
    {
        returnValue = F("Sägmühlfuhr");
        break;
    }
    case 303105:
    {
        returnValue = F("Sägmühlplatz");
        break;
    }
    case 303106:
    {
        returnValue = F("Sägmühlstr.");
        break;
    }
    case 303107:
    {
        returnValue = F("Sägmühlweg");
        break;
    }
    case 303108:
    {
        returnValue = F("Sägmüllersträßle");
        break;
    }
    case 303109:
    {
        returnValue = F("Sägmüllerweg");
        break;
    }
    case 303110:
    {
        returnValue = F("Sägplatz");
        break;
    }
    case 303111:
    {
        returnValue = F("Sägrainhofweg");
        break;
    }
    case 303112:
    {
        returnValue = F("Sägrainweg");
        break;
    }
    case 303113:
    {
        returnValue = F("Sägstallstr.");
        break;
    }
    case 303114:
    {
        returnValue = F("Sägstr.");
        break;
    }
    case 303115:
    {
        returnValue = F("Sägwasenplatz");
        break;
    }
    case 303116:
    {
        returnValue = F("Sägweg");
        break;
    }
    case 303117:
    {
        returnValue = F("Sägweiherstr.");
        break;
    }
    case 303118:
    {
        returnValue = F("Sägwiesenstr.");
        break;
    }
    case 303119:
    {
        returnValue = F("Sägwiesenweg");
        break;
    }
    case 303120:
    {
        returnValue = F("Sähler Str.");
        break;
    }
    case 303121:
    {
        returnValue = F("Sählingstr.");
        break;
    }
    case 303122:
    {
        returnValue = F("Sählwiesenweg");
        break;
    }
    case 303123:
    {
        returnValue = F("Sälber Tor");
        break;
    }
    case 303124:
    {
        returnValue = F("Säleweg");
        break;
    }
    case 303125:
    {
        returnValue = F("Sälinger Str.");
        break;
    }
    case 303126:
    {
        returnValue = F("Sälleseite");
        break;
    }
    case 303127:
    {
        returnValue = F("Sälzer Str.");
        break;
    }
    case 303128:
    {
        returnValue = F("Sälzer Weg");
        break;
    }
    case 303129:
    {
        returnValue = F("Sälzershohle");
        break;
    }
    case 303130:
    {
        returnValue = F("Sälzerstr.");
        break;
    }
    case 303131:
    {
        returnValue = F("Sälzerweg");
        break;
    }
    case 303132:
    {
        returnValue = F("Sälzlstr.");
        break;
    }
    case 303133:
    {
        returnValue = F("Sämannstr.");
        break;
    }
    case 303134:
    {
        returnValue = F("Sämannweg");
        break;
    }
    case 303135:
    {
        returnValue = F("Sämgasse");
        break;
    }
    case 303136:
    {
        returnValue = F("Sämlingsstr.");
        break;
    }
    case 303137:
    {
        returnValue = F("Sämlingweg");
        break;
    }
    case 303138:
    {
        returnValue = F("Sändel");
        break;
    }
    case 303139:
    {
        returnValue = F("Sändlein");
        break;
    }
    case 303140:
    {
        returnValue = F("Sändleinweg");
        break;
    }
    case 303141:
    {
        returnValue = F("Sändleweg");
        break;
    }
    case 303142:
    {
        returnValue = F("Sängelbergweg");
        break;
    }
    case 303143:
    {
        returnValue = F("Sängelsrain");
        break;
    }
    case 303144:
    {
        returnValue = F("Sängerberg");
        break;
    }
    case 303145:
    {
        returnValue = F("Sängerbuchenweg");
        break;
    }
    case 303146:
    {
        returnValue = F("Sängereck");
        break;
    }
    case 303147:
    {
        returnValue = F("Sängergasse");
        break;
    }
    case 303148:
    {
        returnValue = F("Sängerhallenweg");
        break;
    }
    case 303149:
    {
        returnValue = F("Sängerheimweg");
        break;
    }
    case 303150:
    {
        returnValue = F("Sängerhof");
        break;
    }
    case 303151:
    {
        returnValue = F("Sängerlaube");
        break;
    }
    case 303152:
    {
        returnValue = F("Sängerlinde");
        break;
    }
    case 303153:
    {
        returnValue = F("Sängerloh");
        break;
    }
    case 303154:
    {
        returnValue = F("Sängermühle");
        break;
    }
    case 303155:
    {
        returnValue = F("Sängerpark");
        break;
    }
    case 303156:
    {
        returnValue = F("Sängerplatz");
        break;
    }
    case 303157:
    {
        returnValue = F("Sängersruh");
        break;
    }
    case 303158:
    {
        returnValue = F("Sängerstaffel");
        break;
    }
    case 303159:
    {
        returnValue = F("Sängersteig");
        break;
    }
    case 303160:
    {
        returnValue = F("Sängerstr.");
        break;
    }
    case 303161:
    {
        returnValue = F("Sängerswaldstr.");
        break;
    }
    case 303162:
    {
        returnValue = F("Sängersweg");
        break;
    }
    case 303163:
    {
        returnValue = F("Sängertshöhe");
        break;
    }
    case 303164:
    {
        returnValue = F("Sängertsweg");
        break;
    }
    case 303165:
    {
        returnValue = F("Sängerweg");
        break;
    }
    case 303166:
    {
        returnValue = F("Sängerwiese");
        break;
    }
    case 303167:
    {
        returnValue = F("Sängesweg");
        break;
    }
    case 303168:
    {
        returnValue = F("Sänsbrett");
        break;
    }
    case 303169:
    {
        returnValue = F("Säntisblick");
        break;
    }
    case 303170:
    {
        returnValue = F("Säntisblickstr.");
        break;
    }
    case 303171:
    {
        returnValue = F("Säntisstr.");
        break;
    }
    case 303172:
    {
        returnValue = F("Säntisweg");
        break;
    }
    case 303173:
    {
        returnValue = F("Särchener Str.");
        break;
    }
    case 303174:
    {
        returnValue = F("Särichener Str.");
        break;
    }
    case 303175:
    {
        returnValue = F("Särkover Str.");
        break;
    }
    case 303176:
    {
        returnValue = F("Sättelestr.");
        break;
    }
    case 303177:
    {
        returnValue = F("Sätteleweg");
        break;
    }
    case 303178:
    {
        returnValue = F("Sättelinstr.");
        break;
    }
    case 303179:
    {
        returnValue = F("Sättelstr.");
        break;
    }
    case 303180:
    {
        returnValue = F("Sätzweg");
        break;
    }
    case 303181:
    {
        returnValue = F("Säubergweg");
        break;
    }
    case 303182:
    {
        returnValue = F("Säuerhäuser");
        break;
    }
    case 303183:
    {
        returnValue = F("Säuerlingsgasse");
        break;
    }
    case 303184:
    {
        returnValue = F("Säuerlingstr.");
        break;
    }
    case 303185:
    {
        returnValue = F("Säuerlingsweg");
        break;
    }
    case 303186:
    {
        returnValue = F("Säufersteig");
        break;
    }
    case 303187:
    {
        returnValue = F("Säugrundweg");
        break;
    }
    case 303188:
    {
        returnValue = F("Säuhausstr.");
        break;
    }
    case 303189:
    {
        returnValue = F("Säuhohl");
        break;
    }
    case 303190:
    {
        returnValue = F("Säulenbüchle");
        break;
    }
    case 303191:
    {
        returnValue = F("Säulendornstr.");
        break;
    }
    case 303192:
    {
        returnValue = F("Säuleneichenallee");
        break;
    }
    case 303193:
    {
        returnValue = F("Säuleneichenweg");
        break;
    }
    case 303194:
    {
        returnValue = F("Säulenstr.");
        break;
    }
    case 303195:
    {
        returnValue = F("Säulenweg");
        break;
    }
    case 303196:
    {
        returnValue = F("Säulingsstr.");
        break;
    }
    case 303197:
    {
        returnValue = F("Säulingstr.");
        break;
    }
    case 303198:
    {
        returnValue = F("Säulingweg");
        break;
    }
    case 303199:
    {
        returnValue = F("Säulner Weg");
        break;
    }
    case 303200:
    {
        returnValue = F("Säulner-Staudenweg");
        break;
    }
    case 303201:
    {
        returnValue = F("Säulnhofer Weg");
        break;
    }
    case 303202:
    {
        returnValue = F("Säulstr.");
        break;
    }
    case 303203:
    {
        returnValue = F("Säumergasse");
        break;
    }
    case 303204:
    {
        returnValue = F("Säumerhügel");
        break;
    }
    case 303205:
    {
        returnValue = F("Säumersteig");
        break;
    }
    case 303206:
    {
        returnValue = F("Säumerstr.");
        break;
    }
    case 303207:
    {
        returnValue = F("Säumerweg");
        break;
    }
    case 303208:
    {
        returnValue = F("Säuritzer Str.");
        break;
    }
    case 303209:
    {
        returnValue = F("Säuritzer Str. Ost");
        break;
    }
    case 303210:
    {
        returnValue = F("Säuritzer Str. West");
        break;
    }
    case 303211:
    {
        returnValue = F("Säuwaidweg");
        break;
    }
    case 303212:
    {
        returnValue = F("Säuweg");
        break;
    }
    case 303213:
    {
        returnValue = F("Sèvres-Brücke");
        break;
    }
    case 303214:
    {
        returnValue = F("Sézanne-Weg");
        break;
    }
    case 303215:
    {
        returnValue = F("Sézanner Str.");
        break;
    }
    case 303216:
    {
        returnValue = F("Söbenackerskamp");
        break;
    }
    case 303217:
    {
        returnValue = F("Söbrigener Fläscherweg");
        break;
    }
    case 303218:
    {
        returnValue = F("Söbrigener Str.");
        break;
    }
    case 303219:
    {
        returnValue = F("Söbrigener Weg");
        break;
    }
    case 303220:
    {
        returnValue = F("Söby");
        break;
    }
    case 303221:
    {
        returnValue = F("Söby-Lange-Wohnung");
        break;
    }
    case 303222:
    {
        returnValue = F("Söby-Seeblick");
        break;
    }
    case 303223:
    {
        returnValue = F("Söcheringer Str.");
        break;
    }
    case 303224:
    {
        returnValue = F("Söchtiggasse");
        break;
    }
    case 303225:
    {
        returnValue = F("Söchtigweg");
        break;
    }
    case 303226:
    {
        returnValue = F("Söckinger Str.");
        break;
    }
    case 303227:
    {
        returnValue = F("Söcklerstr.");
        break;
    }
    case 303228:
    {
        returnValue = F("Södchen");
        break;
    }
    case 303229:
    {
        returnValue = F("Södekamp");
        break;
    }
    case 303230:
    {
        returnValue = F("Södeler Str.");
        break;
    }
    case 303231:
    {
        returnValue = F("Södeler Weg");
        break;
    }
    case 303232:
    {
        returnValue = F("Söderbergstr.");
        break;
    }
    case 303233:
    {
        returnValue = F("Söderblom-Weg");
        break;
    }
    case 303234:
    {
        returnValue = F("Söderblomstr.");
        break;
    }
    case 303235:
    {
        returnValue = F("Söderjaat");
        break;
    }
    case 303236:
    {
        returnValue = F("Söderweg");
        break;
    }
    case 303237:
    {
        returnValue = F("Söffleinsgasse");
        break;
    }
    case 303238:
    {
        returnValue = F("Sögeberg");
        break;
    }
    case 303239:
    {
        returnValue = F("Sögeborgsweg");
        break;
    }
    case 303240:
    {
        returnValue = F("Sögeler Str.");
        break;
    }
    case 303241:
    {
        returnValue = F("Sögeler Weg");
        break;
    }
    case 303242:
    {
        returnValue = F("Sögelner Allee");
        break;
    }
    case 303243:
    {
        returnValue = F("Sögelner Str.");
        break;
    }
    case 303244:
    {
        returnValue = F("Sögestr.");
        break;
    }
    case 303245:
    {
        returnValue = F("Söglinger Str.");
        break;
    }
    case 303246:
    {
        returnValue = F("Sögtrop");
        break;
    }
    case 303247:
    {
        returnValue = F("Söhestener Str.");
        break;
    }
    case 303248:
    {
        returnValue = F("Söhl");
        break;
    }
    case 303249:
    {
        returnValue = F("Söhlbacher Weg");
        break;
    }
    case 303250:
    {
        returnValue = F("Söhlekenweg");
        break;
    }
    case 303251:
    {
        returnValue = F("Söhlenredder");
        break;
    }
    case 303252:
    {
        returnValue = F("Söhlensträßle");
        break;
    }
    case 303253:
    {
        returnValue = F("Söhlenweg");
        break;
    }
    case 303254:
    {
        returnValue = F("Söhler Str.");
        break;
    }
    case 303255:
    {
        returnValue = F("Söhler Weg");
        break;
    }
    case 303256:
    {
        returnValue = F("Söhlinger Str.");
        break;
    }
    case 303257:
    {
        returnValue = F("Söhlstr.");
        break;
    }
    case 303258:
    {
        returnValue = F("Söhlweg");
        break;
    }
    case 303259:
    {
        returnValue = F("Söhnels Weg");
        break;
    }
    case 303260:
    {
        returnValue = F("Söhrberg");
        break;
    }
    case 303261:
    {
        returnValue = F("Söhrebahntrasse");
        break;
    }
    case 303262:
    {
        returnValue = F("Söhren");
        break;
    }
    case 303263:
    {
        returnValue = F("Söhrener Str.");
        break;
    }
    case 303264:
    {
        returnValue = F("Söhrenkamp");
        break;
    }
    case 303265:
    {
        returnValue = F("Söhrenredder");
        break;
    }
    case 303266:
    {
        returnValue = F("Söhrenweg");
        break;
    }
    case 303267:
    {
        returnValue = F("Söhrer Tor");
        break;
    }
    case 303268:
    {
        returnValue = F("Söhrestr.");
        break;
    }
    case 303269:
    {
        returnValue = F("Söhreweg");
        break;
    }
    case 303270:
    {
        returnValue = F("Söhringer Ring");
        break;
    }
    case 303271:
    {
        returnValue = F("Söhringer Str.");
        break;
    }
    case 303272:
    {
        returnValue = F("Sökelandstr.");
        break;
    }
    case 303273:
    {
        returnValue = F("Sökelandweg");
        break;
    }
    case 303274:
    {
        returnValue = F("Söker");
        break;
    }
    case 303275:
    {
        returnValue = F("Sökersweg");
        break;
    }
    case 303276:
    {
        returnValue = F("Sölber Str.");
        break;
    }
    case 303277:
    {
        returnValue = F("Sölchstr.");
        break;
    }
    case 303278:
    {
        returnValue = F("Söldenacker");
        break;
    }
    case 303279:
    {
        returnValue = F("Söldener Str.");
        break;
    }
    case 303280:
    {
        returnValue = F("Söldenerweg");
        break;
    }
    case 303281:
    {
        returnValue = F("Söldenhofstr.");
        break;
    }
    case 303282:
    {
        returnValue = F("Söldenpeterweg");
        break;
    }
    case 303283:
    {
        returnValue = F("Söldenweg");
        break;
    }
    case 303284:
    {
        returnValue = F("Sölder Str.");
        break;
    }
    case 303285:
    {
        returnValue = F("Söldholzweg");
        break;
    }
    case 303286:
    {
        returnValue = F("Söldnerfeld");
        break;
    }
    case 303287:
    {
        returnValue = F("Söldnergasse");
        break;
    }
    case 303288:
    {
        returnValue = F("Söldnerstr.");
        break;
    }
    case 303289:
    {
        returnValue = F("Söldnerweg");
        break;
    }
    case 303290:
    {
        returnValue = F("Söler Kaalkamp");
        break;
    }
    case 303291:
    {
        returnValue = F("Sölg");
        break;
    }
    case 303292:
    {
        returnValue = F("Sölker Str.");
        break;
    }
    case 303293:
    {
        returnValue = F("Sölkerweg");
        break;
    }
    case 303294:
    {
        returnValue = F("Söll");
        break;
    }
    case 303295:
    {
        returnValue = F("Söllbach");
        break;
    }
    case 303296:
    {
        returnValue = F("Söllbachdammweg");
        break;
    }
    case 303297:
    {
        returnValue = F("Söllbachrain");
        break;
    }
    case 303298:
    {
        returnValue = F("Söllbachweg");
        break;
    }
    case 303299:
    {
        returnValue = F("Söllbot");
        break;
    }
    case 303300:
    {
        returnValue = F("Sölle-Weg");
        break;
    }
    case 303301:
    {
        returnValue = F("Söllengasse");
        break;
    }
    case 303302:
    {
        returnValue = F("Söller Str.");
        break;
    }
    case 303303:
    {
        returnValue = F("Söllereckweg");
        break;
    }
    case 303304:
    {
        returnValue = F("Söllerhauweg");
        break;
    }
    case 303305:
    {
        returnValue = F("Söllerhohl");
        break;
    }
    case 303306:
    {
        returnValue = F("Söllershöhe");
        break;
    }
    case 303307:
    {
        returnValue = F("Söllerstr.");
        break;
    }
    case 303308:
    {
        returnValue = F("Söllerswiesen");
        break;
    }
    case 303309:
    {
        returnValue = F("Söllerweg");
        break;
    }
    case 303310:
    {
        returnValue = F("Söllhubener Str.");
        break;
    }
    case 303311:
    {
        returnValue = F("Söllichauer Str.");
        break;
    }
    case 303312:
    {
        returnValue = F("Sölling");
        break;
    }
    case 303313:
    {
        returnValue = F("Söllinge");
        break;
    }
    case 303314:
    {
        returnValue = F("Söllingeck");
        break;
    }
    case 303315:
    {
        returnValue = F("Söllinger Str.");
        break;
    }
    case 303316:
    {
        returnValue = F("Söllinger Winkel");
        break;
    }
    case 303317:
    {
        returnValue = F("Söllingstr.");
        break;
    }
    case 303318:
    {
        returnValue = F("Söllitzer Str.");
        break;
    }
    case 303319:
    {
        returnValue = F("Söllmnitzer Str.");
        break;
    }
    case 303320:
    {
        returnValue = F("Söllnerstr.");
        break;
    }
    case 303321:
    {
        returnValue = F("Söllnerweg");
        break;
    }
    case 303322:
    {
        returnValue = F("Söllstr.");
        break;
    }
    case 303323:
    {
        returnValue = F("Söltener Landweg");
        break;
    }
    case 303324:
    {
        returnValue = F("Sölterweg");
        break;
    }
    case 303325:
    {
        returnValue = F("Söltlstr.");
        break;
    }
    case 303326:
    {
        returnValue = F("Sölvesborger Str.");
        break;
    }
    case 303327:
    {
        returnValue = F("Sölvienstr.");
        break;
    }
    case 303328:
    {
        returnValue = F("Sölzenweg");
        break;
    }
    case 303329:
    {
        returnValue = F("Sölzerhöfe");
        break;
    }
    case 303330:
    {
        returnValue = F("Sölzfluß");
        break;
    }
    case 303331:
    {
        returnValue = F("Sömgesweg");
        break;
    }
    case 303332:
    {
        returnValue = F("Sömmerdaer Str.");
        break;
    }
    case 303333:
    {
        returnValue = F("Sömmerdaer Weg");
        break;
    }
    case 303334:
    {
        returnValue = F("Sömmerder Str.");
        break;
    }
    case 303335:
    {
        returnValue = F("Sömmerdieksweg");
        break;
    }
    case 303336:
    {
        returnValue = F("Sömmeringstr.");
        break;
    }
    case 303337:
    {
        returnValue = F("Sömmeringweg");
        break;
    }
    case 303338:
    {
        returnValue = F("Sömmeritzer Graseweg");
        break;
    }
    case 303339:
    {
        returnValue = F("Sömmerlingsweg");
        break;
    }
    case 303340:
    {
        returnValue = F("Sömmerpad");
        break;
    }
    case 303341:
    {
        returnValue = F("Sömmersdorfer Str.");
        break;
    }
    case 303342:
    {
        returnValue = F("Sömmiger Weg");
        break;
    }
    case 303343:
    {
        returnValue = F("Sömnitzer Ring");
        break;
    }
    case 303344:
    {
        returnValue = F("Sömnitzer Str.");
        break;
    }
    case 303345:
    {
        returnValue = F("Sönderbyer Weg");
        break;
    }
    case 303346:
    {
        returnValue = F("Söndle");
        break;
    }
    case 303347:
    {
        returnValue = F("Sönitz");
        break;
    }
    case 303348:
    {
        returnValue = F("Sönitzer Str.");
        break;
    }
    case 303349:
    {
        returnValue = F("Sönke-Matthiesen-Weg");
        break;
    }
    case 303350:
    {
        returnValue = F("Sönke-Nissen-Allee");
        break;
    }
    case 303351:
    {
        returnValue = F("Sönke-Nissen-Koog");
        break;
    }
    case 303352:
    {
        returnValue = F("Sönke-Nissen-Wäi");
        break;
    }
    case 303353:
    {
        returnValue = F("Sönkensbohlweg");
        break;
    }
    case 303354:
    {
        returnValue = F("Sönksenweg");
        break;
    }
    case 303355:
    {
        returnValue = F("Sönnebüller Weg");
        break;
    }
    case 303356:
    {
        returnValue = F("Sönnigeskoppel");
        break;
    }
    case 303357:
    {
        returnValue = F("Sönshörn");
        break;
    }
    case 303358:
    {
        returnValue = F("Söntgerath");
        break;
    }
    case 303359:
    {
        returnValue = F("Söntgerather Str.");
        break;
    }
    case 303360:
    {
        returnValue = F("Söntschau");
        break;
    }
    case 303361:
    {
        returnValue = F("Sönweg");
        break;
    }
    case 303362:
    {
        returnValue = F("Sören");
        break;
    }
    case 303363:
    {
        returnValue = F("Sörenberg");
        break;
    }
    case 303364:
    {
        returnValue = F("Sörener Holz");
        break;
    }
    case 303365:
    {
        returnValue = F("Sörgelstr.");
        break;
    }
    case 303366:
    {
        returnValue = F("Sörgenlocher Weg");
        break;
    }
    case 303367:
    {
        returnValue = F("Sörhausener Str.");
        break;
    }
    case 303368:
    {
        returnValue = F("Sörhauser Kämpe");
        break;
    }
    case 303369:
    {
        returnValue = F("Söringstr.");
        break;
    }
    case 303370:
    {
        returnValue = F("Sörmannstr.");
        break;
    }
    case 303371:
    {
        returnValue = F("Sörmitzer Str.");
        break;
    }
    case 303372:
    {
        returnValue = F("Sörmitzer Weg");
        break;
    }
    case 303373:
    {
        returnValue = F("Sörner");
        break;
    }
    case 303374:
    {
        returnValue = F("Sörnewitzer Str.");
        break;
    }
    case 303375:
    {
        returnValue = F("Sörnskamp");
        break;
    }
    case 303376:
    {
        returnValue = F("Sörnziger Str.");
        break;
    }
    case 303377:
    {
        returnValue = F("Sörnziger Weg");
        break;
    }
    case 303378:
    {
        returnValue = F("Sörup-Dingholz");
        break;
    }
    case 303379:
    {
        returnValue = F("Söruper Str.");
        break;
    }
    case 303380:
    {
        returnValue = F("Sörupholzhof");
        break;
    }
    case 303381:
    {
        returnValue = F("Sörupmühle");
        break;
    }
    case 303382:
    {
        returnValue = F("Sösarper Strunwai");
        break;
    }
    case 303383:
    {
        returnValue = F("Sösegrund");
        break;
    }
    case 303384:
    {
        returnValue = F("Sösepark");
        break;
    }
    case 303385:
    {
        returnValue = F("Sösepromenade");
        break;
    }
    case 303386:
    {
        returnValue = F("Sösetalstr.");
        break;
    }
    case 303387:
    {
        returnValue = F("Söseweg");
        break;
    }
    case 303388:
    {
        returnValue = F("Sösshusen");
        break;
    }
    case 303389:
    {
        returnValue = F("Söst");
        break;
    }
    case 303390:
    {
        returnValue = F("Sötenicher Str.");
        break;
    }
    case 303391:
    {
        returnValue = F("Söterner Str.");
        break;
    }
    case 303392:
    {
        returnValue = F("Söternfeld");
        break;
    }
    case 303393:
    {
        returnValue = F("Söternstr.");
        break;
    }
    case 303394:
    {
        returnValue = F("Söven Pölle");
        break;
    }
    case 303395:
    {
        returnValue = F("Sübenbargen");
        break;
    }
    case 303396:
    {
        returnValue = F("Süchtelner Str.");
        break;
    }
    case 303397:
    {
        returnValue = F("Süchtelner Weg");
        break;
    }
    case 303398:
    {
        returnValue = F("Süchtenkamp");
        break;
    }
    case 303399:
    {
        returnValue = F("Sückauer Str.");
        break;
    }
    case 303400:
    {
        returnValue = F("Süd");
        break;
    }
    case 303401:
    {
        returnValue = F("Süd-Contrescarpe");
        break;
    }
    case 303402:
    {
        returnValue = F("Süd-Dakota-Brücke");
        break;
    }
    case 303403:
    {
        returnValue = F("Süd-Dor");
        break;
    }
    case 303404:
    {
        returnValue = F("Süd-Erbach");
        break;
    }
    case 303405:
    {
        returnValue = F("Süd-Nord-Str.");
        break;
    }
    case 303406:
    {
        returnValue = F("Süd-Str.");
        break;
    }
    case 303407:
    {
        returnValue = F("Südallee");
        break;
    }
    case 303408:
    {
        returnValue = F("Südanbindung");
        break;
    }
    case 303409:
    {
        returnValue = F("Südarler Landstr.");
        break;
    }
    case 303410:
    {
        returnValue = F("Südaufstieg");
        break;
    }
    case 303411:
    {
        returnValue = F("Südbachstr.");
        break;
    }
    case 303412:
    {
        returnValue = F("Südbahnhof");
        break;
    }
    case 303413:
    {
        returnValue = F("Südbahnhofstr.");
        break;
    }
    case 303414:
    {
        returnValue = F("Südbahnstr.");
        break;
    }
    case 303415:
    {
        returnValue = F("Südbauernweg");
        break;
    }
    case 303416:
    {
        returnValue = F("Südbeeke");
        break;
    }
    case 303417:
    {
        returnValue = F("Südbergstr.");
        break;
    }
    case 303418:
    {
        returnValue = F("Südblick");
        break;
    }
    case 303419:
    {
        returnValue = F("Südbockhorn");
        break;
    }
    case 303420:
    {
        returnValue = F("Südbrede");
        break;
    }
    case 303421:
    {
        returnValue = F("Südbreede");
        break;
    }
    case 303422:
    {
        returnValue = F("Südbruch");
        break;
    }
    case 303423:
    {
        returnValue = F("Südbrücke");
        break;
    }
    case 303424:
    {
        returnValue = F("Südbäker Str.");
        break;
    }
    case 303425:
    {
        returnValue = F("Süddamm");
        break;
    }
    case 303426:
    {
        returnValue = F("Süddamm Eckartsweier");
        break;
    }
    case 303427:
    {
        returnValue = F("Süddorf");
        break;
    }
    case 303428:
    {
        returnValue = F("Süddorfer Str.");
        break;
    }
    case 303429:
    {
        returnValue = F("Süddunumer Weg");
        break;
    }
    case 303430:
    {
        returnValue = F("Süddünen");
        break;
    }
    case 303431:
    {
        returnValue = F("Südeck");
        break;
    }
    case 303432:
    {
        returnValue = F("Südeinfahrt");
        break;
    }
    case 303433:
    {
        returnValue = F("Südekumweg");
        break;
    }
    case 303434:
    {
        returnValue = F("Süden");
        break;
    }
    case 303435:
    {
        returnValue = F("Südenburg");
        break;
    }
    case 303436:
    {
        returnValue = F("Südenburger Str.");
        break;
    }
    case 303437:
    {
        returnValue = F("Südend");
        break;
    }
    case 303438:
    {
        returnValue = F("Südendamm");
        break;
    }
    case 303439:
    {
        returnValue = F("Südende");
        break;
    }
    case 303440:
    {
        returnValue = F("Südender Brink");
        break;
    }
    case 303441:
    {
        returnValue = F("Südender Gaste");
        break;
    }
    case 303442:
    {
        returnValue = F("Südender Grodenweg");
        break;
    }
    case 303443:
    {
        returnValue = F("Südender Str.");
        break;
    }
    case 303444:
    {
        returnValue = F("Südendstr.");
        break;
    }
    case 303445:
    {
        returnValue = F("Südenfeldmark");
        break;
    }
    case 303446:
    {
        returnValue = F("Südenstr.");
        break;
    }
    case 303447:
    {
        returnValue = F("Süder Block");
        break;
    }
    case 303448:
    {
        returnValue = F("Süder Gath");
        break;
    }
    case 303449:
    {
        returnValue = F("Süder Hook");
        break;
    }
    case 303450:
    {
        returnValue = F("Süder Markt");
        break;
    }
    case 303451:
    {
        returnValue = F("Süder Reihe");
        break;
    }
    case 303452:
    {
        returnValue = F("Süder Steinweg");
        break;
    }
    case 303453:
    {
        returnValue = F("Süder Thun");
        break;
    }
    case 303454:
    {
        returnValue = F("Süder Weg");
        break;
    }
    case 303455:
    {
        returnValue = F("Süder Wung");
        break;
    }
    case 303456:
    {
        returnValue = F("Süder-Kirchweg");
        break;
    }
    case 303457:
    {
        returnValue = F("Süderacker");
        break;
    }
    case 303458:
    {
        returnValue = F("Süderauer Riep");
        break;
    }
    case 303459:
    {
        returnValue = F("Süderauerdorfstr.");
        break;
    }
    case 303460:
    {
        returnValue = F("Süderballig");
        break;
    }
    case 303461:
    {
        returnValue = F("Süderbarg");
        break;
    }
    case 303462:
    {
        returnValue = F("Süderbargen");
        break;
    }
    case 303463:
    {
        returnValue = F("Süderberg");
        break;
    }
    case 303464:
    {
        returnValue = F("Süderbergweg");
        break;
    }
    case 303465:
    {
        returnValue = F("Süderbraruper Str.");
        break;
    }
    case 303466:
    {
        returnValue = F("Süderbusch");
        break;
    }
    case 303467:
    {
        returnValue = F("Süderdaal");
        break;
    }
    case 303468:
    {
        returnValue = F("Süderdeich");
        break;
    }
    case 303469:
    {
        returnValue = F("Süderdeich-West");
        break;
    }
    case 303470:
    {
        returnValue = F("Süderdeichsweg");
        break;
    }
    case 303471:
    {
        returnValue = F("Süderdiek");
        break;
    }
    case 303472:
    {
        returnValue = F("Süderdomstr.");
        break;
    }
    case 303473:
    {
        returnValue = F("Süderdoor");
        break;
    }
    case 303474:
    {
        returnValue = F("Süderdorf");
        break;
    }
    case 303475:
    {
        returnValue = F("Süderdünenring");
        break;
    }
    case 303476:
    {
        returnValue = F("Süderegge");
        break;
    }
    case 303477:
    {
        returnValue = F("Südereggenweg");
        break;
    }
    case 303478:
    {
        returnValue = F("Süderend");
        break;
    }
    case 303479:
    {
        returnValue = F("Süderende");
        break;
    }
    case 303480:
    {
        returnValue = F("Süderengweg");
        break;
    }
    case 303481:
    {
        returnValue = F("Süderenn");
        break;
    }
    case 303482:
    {
        returnValue = F("Süderesch");
        break;
    }
    case 303483:
    {
        returnValue = F("Süderfangweg");
        break;
    }
    case 303484:
    {
        returnValue = F("Süderfeld");
        break;
    }
    case 303485:
    {
        returnValue = F("Süderfelder Str.");
        break;
    }
    case 303486:
    {
        returnValue = F("Süderfeldweg");
        break;
    }
    case 303487:
    {
        returnValue = F("Süderfenne");
        break;
    }
    case 303488:
    {
        returnValue = F("Südergast");
        break;
    }
    case 303489:
    {
        returnValue = F("Südergaster Weg");
        break;
    }
    case 303490:
    {
        returnValue = F("Südergeest");
        break;
    }
    case 303491:
    {
        returnValue = F("Südergellerser Str.");
        break;
    }
    case 303492:
    {
        returnValue = F("Südergellerser Weg");
        break;
    }
    case 303493:
    {
        returnValue = F("Südergraben");
        break;
    }
    case 303494:
    {
        returnValue = F("Süderhafen");
        break;
    }
    case 303495:
    {
        returnValue = F("Süderhafenweg");
        break;
    }
    case 303496:
    {
        returnValue = F("Süderhammrich");
        break;
    }
    case 303497:
    {
        returnValue = F("Süderhammwurthsweg");
        break;
    }
    case 303498:
    {
        returnValue = F("Süderhang");
        break;
    }
    case 303499:
    {
        returnValue = F("Süderhausen");
        break;
    }
    case 303500:
    {
        returnValue = F("Süderheide");
        break;
    }
    case 303501:
    {
        returnValue = F("Süderheidetal");
        break;
    }
    case 303502:
    {
        returnValue = F("Süderheine");
        break;
    }
    case 303503:
    {
        returnValue = F("Süderheverkoog-Chaussee");
        break;
    }
    case 303504:
    {
        returnValue = F("Süderheversiel");
        break;
    }
    case 303505:
    {
        returnValue = F("Süderheverstr.");
        break;
    }
    case 303506:
    {
        returnValue = F("Süderhof");
        break;
    }
    case 303507:
    {
        returnValue = F("Süderholm");
        break;
    }
    case 303508:
    {
        returnValue = F("Süderholmer Weg");
        break;
    }
    case 303509:
    {
        returnValue = F("Süderholmstr.");
        break;
    }
    case 303510:
    {
        returnValue = F("Süderholz");
        break;
    }
    case 303511:
    {
        returnValue = F("Süderholzer Str.");
        break;
    }
    case 303512:
    {
        returnValue = F("Süderholzstr.");
        break;
    }
    case 303513:
    {
        returnValue = F("Süderhöfter Weg");
        break;
    }
    case 303514:
    {
        returnValue = F("Süderhörn");
        break;
    }
    case 303515:
    {
        returnValue = F("Süderhörner Gaste");
        break;
    }
    case 303516:
    {
        returnValue = F("Süderhörner Weg");
        break;
    }
    case 303517:
    {
        returnValue = F("Süderhövder Löhn");
        break;
    }
    case 303518:
    {
        returnValue = F("Süderinge");
        break;
    }
    case 303519:
    {
        returnValue = F("Süderkamp");
        break;
    }
    case 303520:
    {
        returnValue = F("Süderkampen");
        break;
    }
    case 303521:
    {
        returnValue = F("Süderkiefmoor");
        break;
    }
    case 303522:
    {
        returnValue = F("Süderkoppel");
        break;
    }
    case 303523:
    {
        returnValue = F("Süderkreuzstr.");
        break;
    }
    case 303524:
    {
        returnValue = F("Süderland");
        break;
    }
    case 303525:
    {
        returnValue = F("Süderlandstr.");
        break;
    }
    case 303526:
    {
        returnValue = F("Süderlandweg");
        break;
    }
    case 303527:
    {
        returnValue = F("Süderloog");
        break;
    }
    case 303528:
    {
        returnValue = F("Süderlund");
        break;
    }
    case 303529:
    {
        returnValue = F("Süderlück");
        break;
    }
    case 303530:
    {
        returnValue = F("Süderlücke");
        break;
    }
    case 303531:
    {
        returnValue = F("Süderlücken");
        break;
    }
    case 303532:
    {
        returnValue = F("Süderlücker Str.");
        break;
    }
    case 303533:
    {
        returnValue = F("Südermarkt");
        break;
    }
    case 303534:
    {
        returnValue = F("Südermarren");
        break;
    }
    case 303535:
    {
        returnValue = F("Südermarschstr.");
        break;
    }
    case 303536:
    {
        returnValue = F("Südermarschweg");
        break;
    }
    case 303537:
    {
        returnValue = F("Südermeedenweg");
        break;
    }
    case 303538:
    {
        returnValue = F("Südermeedlandsweg");
        break;
    }
    case 303539:
    {
        returnValue = F("Südermenss");
        break;
    }
    case 303540:
    {
        returnValue = F("Südermitteldeich");
        break;
    }
    case 303541:
    {
        returnValue = F("Südermoor");
        break;
    }
    case 303542:
    {
        returnValue = F("Südermoorland");
        break;
    }
    case 303543:
    {
        returnValue = F("Südermoorsweg");
        break;
    }
    case 303544:
    {
        returnValue = F("Südermoorwech");
        break;
    }
    case 303545:
    {
        returnValue = F("Südermoorweg");
        break;
    }
    case 303546:
    {
        returnValue = F("Südermühle");
        break;
    }
    case 303547:
    {
        returnValue = F("Süderohlfelderweg");
        break;
    }
    case 303548:
    {
        returnValue = F("Süderooger Str.");
        break;
    }
    case 303549:
    {
        returnValue = F("Süderoogstieg");
        break;
    }
    case 303550:
    {
        returnValue = F("Süderoogweg");
        break;
    }
    case 303551:
    {
        returnValue = F("Süderort");
        break;
    }
    case 303552:
    {
        returnValue = F("Süderpad");
        break;
    }
    case 303553:
    {
        returnValue = F("Süderpark");
        break;
    }
    case 303554:
    {
        returnValue = F("Süderpfad");
        break;
    }
    case 303555:
    {
        returnValue = F("Süderpiep");
        break;
    }
    case 303556:
    {
        returnValue = F("Süderport");
        break;
    }
    case 303557:
    {
        returnValue = F("Süderquerweg");
        break;
    }
    case 303558:
    {
        returnValue = F("Süderreihe");
        break;
    }
    case 303559:
    {
        returnValue = F("Süderreitlander Herrenweg");
        break;
    }
    case 303560:
    {
        returnValue = F("Süderriff");
        break;
    }
    case 303561:
    {
        returnValue = F("Südersand");
        break;
    }
    case 303562:
    {
        returnValue = F("Süderschmedebyer Str.");
        break;
    }
    case 303563:
    {
        returnValue = F("Südersiddeldeich");
        break;
    }
    case 303564:
    {
        returnValue = F("Süderstr.");
        break;
    }
    case 303565:
    {
        returnValue = F("Südertoft");
        break;
    }
    case 303566:
    {
        returnValue = F("Südertresker");
        break;
    }
    case 303567:
    {
        returnValue = F("Südertriangelweg");
        break;
    }
    case 303568:
    {
        returnValue = F("Süderup");
        break;
    }
    case 303569:
    {
        returnValue = F("Südervierthweg");
        break;
    }
    case 303570:
    {
        returnValue = F("Süderwall");
        break;
    }
    case 303571:
    {
        returnValue = F("Süderwalseder Str.");
        break;
    }
    case 303572:
    {
        returnValue = F("Süderwalseder Weg");
        break;
    }
    case 303573:
    {
        returnValue = F("Süderwarden");
        break;
    }
    case 303574:
    {
        returnValue = F("Süderwarft");
        break;
    }
    case 303575:
    {
        returnValue = F("Süderwaygaard");
        break;
    }
    case 303576:
    {
        returnValue = F("Süderweg");
        break;
    }
    case 303577:
    {
        returnValue = F("Süderweidenweg");
        break;
    }
    case 303578:
    {
        returnValue = F("Süderwieke I");
        break;
    }
    case 303579:
    {
        returnValue = F("Süderwieke II");
        break;
    }
    case 303580:
    {
        returnValue = F("Süderwieke Nord");
        break;
    }
    case 303581:
    {
        returnValue = F("Süderwieke Süd");
        break;
    }
    case 303582:
    {
        returnValue = F("Süderwisch");
        break;
    }
    case 303583:
    {
        returnValue = F("Süderwung");
        break;
    }
    case 303584:
    {
        returnValue = F("Süderwungweg");
        break;
    }
    case 303585:
    {
        returnValue = F("Süderwurth");
        break;
    }
    case 303586:
    {
        returnValue = F("Südesch");
        break;
    }
    case 303587:
    {
        returnValue = F("Südeschfeld");
        break;
    }
    case 303588:
    {
        returnValue = F("Südevierweg");
        break;
    }
    case 303589:
    {
        returnValue = F("Südfall");
        break;
    }
    case 303590:
    {
        returnValue = F("Südfeld");
        break;
    }
    case 303591:
    {
        returnValue = F("Südfeldstr.");
        break;
    }
    case 303592:
    {
        returnValue = F("Südfeldweg");
        break;
    }
    case 303593:
    {
        returnValue = F("Südfeldwiese");
        break;
    }
    case 303594:
    {
        returnValue = F("Südfennenweg");
        break;
    }
    case 303595:
    {
        returnValue = F("Südgasse");
        break;
    }
    case 303596:
    {
        returnValue = F("Südgeorgsfehner Str.");
        break;
    }
    case 303597:
    {
        returnValue = F("Südgraben");
        break;
    }
    case 303598:
    {
        returnValue = F("Südgrenzweg");
        break;
    }
    case 303599:
    {
        returnValue = F("Südgröninger Tor");
        break;
    }
    case 303600:
    {
        returnValue = F("Südhag");
        break;
    }
    case 303601:
    {
        returnValue = F("Südhagen");
        break;
    }
    case 303602:
    {
        returnValue = F("Südhagenweg");
        break;
    }
    case 303603:
    {
        returnValue = F("Südhalde");
        break;
    }
    case 303604:
    {
        returnValue = F("Südhang");
        break;
    }
    case 303605:
    {
        returnValue = F("Südhang Schlossberg");
        break;
    }
    case 303606:
    {
        returnValue = F("Südhang Schloßberg");
        break;
    }
    case 303607:
    {
        returnValue = F("Südhangstr.");
        break;
    }
    case 303608:
    {
        returnValue = F("Südhangweg");
        break;
    }
    case 303609:
    {
        returnValue = F("Südharde");
        break;
    }
    case 303610:
    {
        returnValue = F("Südharzstrecke");
        break;
    }
    case 303611:
    {
        returnValue = F("Südhedig");
        break;
    }
    case 303612:
    {
        returnValue = F("Südheide");
        break;
    }
    case 303613:
    {
        returnValue = F("Südhemmer Heide");
        break;
    }
    case 303614:
    {
        returnValue = F("Südhemmer Weg");
        break;
    }
    case 303615:
    {
        returnValue = F("Südhoek");
        break;
    }
    case 303616:
    {
        returnValue = F("Südhoffstr.");
        break;
    }
    case 303617:
    {
        returnValue = F("Südhoffsweg");
        break;
    }
    case 303618:
    {
        returnValue = F("Südhofsweg");
        break;
    }
    case 303619:
    {
        returnValue = F("Südholt");
        break;
    }
    case 303620:
    {
        returnValue = F("Südholter Str.");
        break;
    }
    case 303621:
    {
        returnValue = F("Südholz");
        break;
    }
    case 303622:
    {
        returnValue = F("Südholzer Ring");
        break;
    }
    case 303623:
    {
        returnValue = F("Südholzweg");
        break;
    }
    case 303624:
    {
        returnValue = F("Südhorster Str.");
        break;
    }
    case 303625:
    {
        returnValue = F("Südhöhe");
        break;
    }
    case 303626:
    {
        returnValue = F("Südhörn");
        break;
    }
    case 303627:
    {
        returnValue = F("Südhörner Str.");
        break;
    }
    case 303628:
    {
        returnValue = F("Südjartenweg");
        break;
    }
    case 303629:
    {
        returnValue = F("Südkamp");
        break;
    }
    case 303630:
    {
        returnValue = F("Südkampen");
        break;
    }
    case 303631:
    {
        returnValue = F("Südkamper Höhe");
        break;
    }
    case 303632:
    {
        returnValue = F("Südkamper Ring");
        break;
    }
    case 303633:
    {
        returnValue = F("Südkaten");
        break;
    }
    case 303634:
    {
        returnValue = F("Südkirchener Str.");
        break;
    }
    case 303635:
    {
        returnValue = F("Südklei");
        break;
    }
    case 303636:
    {
        returnValue = F("Südkorso");
        break;
    }
    case 303637:
    {
        returnValue = F("Südkreisel");
        break;
    }
    case 303638:
    {
        returnValue = F("Südkreuz");
        break;
    }
    case 303639:
    {
        returnValue = F("Südkämpe");
        break;
    }
    case 303640:
    {
        returnValue = F("Südl. Kuppenweg");
        break;
    }
    case 303641:
    {
        returnValue = F("Südlagerstr.");
        break;
    }
    case 303642:
    {
        returnValue = F("Südlengerner Weg");
        break;
    }
    case 303643:
    {
        returnValue = F("Südliche Alleenstr.");
        break;
    }
    case 303644:
    {
        returnValue = F("Südliche Alpenstr.");
        break;
    }
    case 303645:
    {
        returnValue = F("Südliche Deichverteidigungsstr.");
        break;
    }
    case 303646:
    {
        returnValue = F("Südliche Dorfstr.");
        break;
    }
    case 303647:
    {
        returnValue = F("Südliche Entlastungsstr.");
        break;
    }
    case 303648:
    {
        returnValue = F("Südliche Fraunhoferstr.");
        break;
    }
    case 303649:
    {
        returnValue = F("Südliche Friedrichstr.");
        break;
    }
    case 303650:
    {
        returnValue = F("Südliche Gewerbestr.");
        break;
    }
    case 303651:
    {
        returnValue = F("Südliche Halde");
        break;
    }
    case 303652:
    {
        returnValue = F("Südliche Hauptstr.");
        break;
    }
    case 303653:
    {
        returnValue = F("Südliche Ingolstädter Str.");
        break;
    }
    case 303654:
    {
        returnValue = F("Südliche Lippestr.");
        break;
    }
    case 303655:
    {
        returnValue = F("Südliche Münchner Str.");
        break;
    }
    case 303656:
    {
        returnValue = F("Südliche Paulinenstr.");
        break;
    }
    case 303657:
    {
        returnValue = F("Südliche Pestalozzistr.");
        break;
    }
    case 303658:
    {
        returnValue = F("Südliche Ringstr.");
        break;
    }
    case 303659:
    {
        returnValue = F("Südliche Salzstr.");
        break;
    }
    case 303660:
    {
        returnValue = F("Südliche Seestr.");
        break;
    }
    case 303661:
    {
        returnValue = F("Südliche Stadtmauer");
        break;
    }
    case 303662:
    {
        returnValue = F("Südliche Waldstr.");
        break;
    }
    case 303663:
    {
        returnValue = F("Südliche Wallstr.");
        break;
    }
    case 303664:
    {
        returnValue = F("Südliche Wambacher Str.");
        break;
    }
    case 303665:
    {
        returnValue = F("Südliche Wiesenstr.");
        break;
    }
    case 303666:
    {
        returnValue = F("Südliche Winzerstr.");
        break;
    }
    case 303667:
    {
        returnValue = F("Südliche Zufahrtstr.");
        break;
    }
    case 303668:
    {
        returnValue = F("Südlicher Anwachsweg");
        break;
    }
    case 303669:
    {
        returnValue = F("Südlicher Birkenweg");
        break;
    }
    case 303670:
    {
        returnValue = F("Südlicher Brastelweg");
        break;
    }
    case 303671:
    {
        returnValue = F("Südlicher Buchbergweg");
        break;
    }
    case 303672:
    {
        returnValue = F("Südlicher Deichverteidigungsweg");
        break;
    }
    case 303673:
    {
        returnValue = F("Südlicher Dorfweg");
        break;
    }
    case 303674:
    {
        returnValue = F("Südlicher Frauenberg");
        break;
    }
    case 303675:
    {
        returnValue = F("Südlicher Grenzweg");
        break;
    }
    case 303676:
    {
        returnValue = F("Südlicher Hauptweg");
        break;
    }
    case 303677:
    {
        returnValue = F("Südlicher Klosterweg");
        break;
    }
    case 303678:
    {
        returnValue = F("Südlicher Knick");
        break;
    }
    case 303679:
    {
        returnValue = F("Südlicher Küstenkanal");
        break;
    }
    case 303680:
    {
        returnValue = F("Südlicher Randweg");
        break;
    }
    case 303681:
    {
        returnValue = F("Südlicher Ringweg");
        break;
    }
    case 303682:
    {
        returnValue = F("Südlicher Rosengarten");
        break;
    }
    case 303683:
    {
        returnValue = F("Südlicher Rundweg");
        break;
    }
    case 303684:
    {
        returnValue = F("Südlicher Seeuferweg");
        break;
    }
    case 303685:
    {
        returnValue = F("Südlicher Siegelsberg");
        break;
    }
    case 303686:
    {
        returnValue = F("Südlicher Stadtgraben");
        break;
    }
    case 303687:
    {
        returnValue = F("Südlicher Traufweg");
        break;
    }
    case 303688:
    {
        returnValue = F("Südlicher Weg");
        break;
    }
    case 303689:
    {
        returnValue = F("Südliches Feld");
        break;
    }
    case 303690:
    {
        returnValue = F("Südliches Hauptgeräumt");
        break;
    }
    case 303691:
    {
        returnValue = F("Südliches Heimfeld");
        break;
    }
    case 303692:
    {
        returnValue = F("Südlingen");
        break;
    }
    case 303693:
    {
        returnValue = F("Südlingswiesen");
        break;
    }
    case 303694:
    {
        returnValue = F("Südlinie");
        break;
    }
    case 303695:
    {
        returnValue = F("Südlohne");
        break;
    }
    case 303696:
    {
        returnValue = F("Südlohner Bergmark");
        break;
    }
    case 303697:
    {
        returnValue = F("Südlohner Damm");
        break;
    }
    case 303698:
    {
        returnValue = F("Südlohner Diek");
        break;
    }
    case 303699:
    {
        returnValue = F("Südlohner Pickerweg");
        break;
    }
    case 303700:
    {
        returnValue = F("Südlohner Str.");
        break;
    }
    case 303701:
    {
        returnValue = F("Südlohner Weg");
        break;
    }
    case 303702:
    {
        returnValue = F("Südmauer");
        break;
    }
    case 303703:
    {
        returnValue = F("Südmauerstr.");
        break;
    }
    case 303704:
    {
        returnValue = F("Südmerzener Str.");
        break;
    }
    case 303705:
    {
        returnValue = F("Südmoorring");
        break;
    }
    case 303706:
    {
        returnValue = F("Südmährenstr.");
        break;
    }
    case 303707:
    {
        returnValue = F("Südmährer Str.");
        break;
    }
    case 303708:
    {
        returnValue = F("Südmährer Weg");
        break;
    }
    case 303709:
    {
        returnValue = F("Südmülendamm");
        break;
    }
    case 303710:
    {
        returnValue = F("Südobenende");
        break;
    }
    case 303711:
    {
        returnValue = F("Südostring");
        break;
    }
    case 303712:
    {
        returnValue = F("Südostspange");
        break;
    }
    case 303713:
    {
        returnValue = F("Südoststr.");
        break;
    }
    case 303714:
    {
        returnValue = F("Südostumfahrung Bad Krozingen");
        break;
    }
    case 303715:
    {
        returnValue = F("Südpadd");
        break;
    }
    case 303716:
    {
        returnValue = F("Südpark");
        break;
    }
    case 303717:
    {
        returnValue = F("Südperdweg");
        break;
    }
    case 303718:
    {
        returnValue = F("Südplan");
        break;
    }
    case 303719:
    {
        returnValue = F("Südplatz");
        break;
    }
    case 303720:
    {
        returnValue = F("Südpromenade");
        break;
    }
    case 303721:
    {
        returnValue = F("Südquebbe");
        break;
    }
    case 303722:
    {
        returnValue = F("Südrain");
        break;
    }
    case 303723:
    {
        returnValue = F("Südrand");
        break;
    }
    case 303724:
    {
        returnValue = F("Südrandstr.");
        break;
    }
    case 303725:
    {
        returnValue = F("Südredder");
        break;
    }
    case 303726:
    {
        returnValue = F("Südring");
        break;
    }
    case 303727:
    {
        returnValue = F("Südringweg");
        break;
    }
    case 303728:
    {
        returnValue = F("Südschleife");
        break;
    }
    case 303729:
    {
        returnValue = F("Südschwooger Weg");
        break;
    }
    case 303730:
    {
        returnValue = F("Südsee III");
        break;
    }
    case 303731:
    {
        returnValue = F("Südseite");
        break;
    }
    case 303732:
    {
        returnValue = F("Südsiedlung");
        break;
    }
    case 303733:
    {
        returnValue = F("Südspange");
        break;
    }
    case 303734:
    {
        returnValue = F("Südspitze");
        break;
    }
    case 303735:
    {
        returnValue = F("Südstadtpark");
        break;
    }
    case 303736:
    {
        returnValue = F("Südsteig");
        break;
    }
    case 303737:
    {
        returnValue = F("Südsteige");
        break;
    }
    case 303738:
    {
        returnValue = F("Südsteinbruchweg");
        break;
    }
    case 303739:
    {
        returnValue = F("Südstellenweg");
        break;
    }
    case 303740:
    {
        returnValue = F("Südstollen");
        break;
    }
    case 303741:
    {
        returnValue = F("Südstr.");
        break;
    }
    case 303742:
    {
        returnValue = F("Südstrand");
        break;
    }
    case 303743:
    {
        returnValue = F("Südstrandpromenade");
        break;
    }
    case 303744:
    {
        returnValue = F("Südtangente");
        break;
    }
    case 303745:
    {
        returnValue = F("Südtiroler Ring");
        break;
    }
    case 303746:
    {
        returnValue = F("Südtiroler Str.");
        break;
    }
    case 303747:
    {
        returnValue = F("Südtiroler Weg");
        break;
    }
    case 303748:
    {
        returnValue = F("Südtirolerstr.");
        break;
    }
    case 303749:
    {
        returnValue = F("Südtirolstr.");
        break;
    }
    case 303750:
    {
        returnValue = F("Südtor");
        break;
    }
    case 303751:
    {
        returnValue = F("Südtorfeld");
        break;
    }
    case 303752:
    {
        returnValue = F("Südtorstr.");
        break;
    }
    case 303753:
    {
        returnValue = F("Südtrasse");
        break;
    }
    case 303754:
    {
        returnValue = F("Südtrift");
        break;
    }
    case 303755:
    {
        returnValue = F("Südturmweg");
        break;
    }
    case 303756:
    {
        returnValue = F("Südufer");
        break;
    }
    case 303757:
    {
        returnValue = F("Süduferweg");
        break;
    }
    case 303758:
    {
        returnValue = F("Südumfahrung Schladitzer See");
        break;
    }
    case 303759:
    {
        returnValue = F("Südumgehung");
        break;
    }
    case 303760:
    {
        returnValue = F("Südumgehung Dreye");
        break;
    }
    case 303761:
    {
        returnValue = F("Südumgehung Maisach");
        break;
    }
    case 303762:
    {
        returnValue = F("Südviertel");
        break;
    }
    case 303763:
    {
        returnValue = F("Südwaldstr.");
        break;
    }
    case 303764:
    {
        returnValue = F("Südwall");
        break;
    }
    case 303765:
    {
        returnValue = F("Südwallschloot");
        break;
    }
    case 303766:
    {
        returnValue = F("Südweg");
        break;
    }
    case 303767:
    {
        returnValue = F("Südwerk");
        break;
    }
    case 303768:
    {
        returnValue = F("Südwest-Park");
        break;
    }
    case 303769:
    {
        returnValue = F("Südwesthörn");
        break;
    }
    case 303770:
    {
        returnValue = F("Südwesthörner Str.");
        break;
    }
    case 303771:
    {
        returnValue = F("Südwestring");
        break;
    }
    case 303772:
    {
        returnValue = F("Südweststr.");
        break;
    }
    case 303773:
    {
        returnValue = F("Südwiesenstr.");
        break;
    }
    case 303774:
    {
        returnValue = F("Südwinkel");
        break;
    }
    case 303775:
    {
        returnValue = F("Südwinsener Trift");
        break;
    }
    case 303776:
    {
        returnValue = F("Südwinsener Weg");
        break;
    }
    case 303777:
    {
        returnValue = F("Südwinser Kirchweg");
        break;
    }
    case 303778:
    {
        returnValue = F("Südzuweg");
        break;
    }
    case 303779:
    {
        returnValue = F("Südäckerstr.");
        break;
    }
    case 303780:
    {
        returnValue = F("Süeskoppel");
        break;
    }
    case 303781:
    {
        returnValue = F("Süffig");
        break;
    }
    case 303782:
    {
        returnValue = F("Süggelstr.");
        break;
    }
    case 303783:
    {
        returnValue = F("Süggerather Str.");
        break;
    }
    case 303784:
    {
        returnValue = F("Sühlener Str.");
        break;
    }
    case 303785:
    {
        returnValue = F("Sühnekreuzweg");
        break;
    }
    case 303786:
    {
        returnValue = F("Sükower Str.");
        break;
    }
    case 303787:
    {
        returnValue = F("Sükower Weg");
        break;
    }
    case 303788:
    {
        returnValue = F("Sülbecker Brand");
        break;
    }
    case 303789:
    {
        returnValue = F("Sülbecker Str.");
        break;
    }
    case 303790:
    {
        returnValue = F("Sülbecker Weg");
        break;
    }
    case 303791:
    {
        returnValue = F("Sülbeckerbrand");
        break;
    }
    case 303792:
    {
        returnValue = F("Süldsberg");
        break;
    }
    case 303793:
    {
        returnValue = F("Sülemicker Str.");
        break;
    }
    case 303794:
    {
        returnValue = F("Sülerter-Wääch");
        break;
    }
    case 303795:
    {
        returnValue = F("Sülfelder Brücke");
        break;
    }
    case 303796:
    {
        returnValue = F("Sülfelder Kamp");
        break;
    }
    case 303797:
    {
        returnValue = F("Sülfelder Str.");
        break;
    }
    case 303798:
    {
        returnValue = F("Sülfelder Tannen");
        break;
    }
    case 303799:
    {
        returnValue = F("Sülkampweg");
        break;
    }
    case 303800:
    {
        returnValue = F("Süllbergstr.");
        break;
    }
    case 303801:
    {
        returnValue = F("Süllbreede");
        break;
    }
    case 303802:
    {
        returnValue = F("Sülldorfer Mittelstr.");
        break;
    }
    case 303803:
    {
        returnValue = F("Sülldorfer Str.");
        break;
    }
    case 303804:
    {
        returnValue = F("Sülldorfer Weg");
        break;
    }
    case 303805:
    {
        returnValue = F("Süllhof");
        break;
    }
    case 303806:
    {
        returnValue = F("Süllwarden");
        break;
    }
    case 303807:
    {
        returnValue = F("Süllwarder Burg");
        break;
    }
    case 303808:
    {
        returnValue = F("Süllweg");
        break;
    }
    case 303809:
    {
        returnValue = F("Sülmer Str.");
        break;
    }
    case 303810:
    {
        returnValue = F("Sülpkeweg");
        break;
    }
    case 303811:
    {
        returnValue = F("Sülstorfer Str.");
        break;
    }
    case 303812:
    {
        returnValue = F("Sülstorfer Weg");
        break;
    }
    case 303813:
    {
        returnValue = F("Sülte");
        break;
    }
    case 303814:
    {
        returnValue = F("Sültebreite");
        break;
    }
    case 303815:
    {
        returnValue = F("Sülten");
        break;
    }
    case 303816:
    {
        returnValue = F("Sülten-Hof");
        break;
    }
    case 303817:
    {
        returnValue = F("Sültenberg");
        break;
    }
    case 303818:
    {
        returnValue = F("Sültenfeld");
        break;
    }
    case 303819:
    {
        returnValue = F("Sültenkamp");
        break;
    }
    case 303820:
    {
        returnValue = F("Sültenweg");
        break;
    }
    case 303821:
    {
        returnValue = F("Sülter Weg");
        break;
    }
    case 303822:
    {
        returnValue = F("Sülterkamp");
        break;
    }
    case 303823:
    {
        returnValue = F("Sülteweg");
        break;
    }
    case 303824:
    {
        returnValue = F("Sültkamp");
        break;
    }
    case 303825:
    {
        returnValue = F("Sültstr.");
        break;
    }
    case 303826:
    {
        returnValue = F("Sülwerklinke");
        break;
    }
    case 303827:
    {
        returnValue = F("Sülzaue");
        break;
    }
    case 303828:
    {
        returnValue = F("Sülzbach");
        break;
    }
    case 303829:
    {
        returnValue = F("Sülzbacher Str.");
        break;
    }
    case 303830:
    {
        returnValue = F("Sülzbacher Weg");
        break;
    }
    case 303831:
    {
        returnValue = F("Sülzberg");
        break;
    }
    case 303832:
    {
        returnValue = F("Sülzbergstr.");
        break;
    }
    case 303833:
    {
        returnValue = F("Sülzblick");
        break;
    }
    case 303834:
    {
        returnValue = F("Sülzbusch");
        break;
    }
    case 303835:
    {
        returnValue = F("Sülzbührener Str.");
        break;
    }
    case 303836:
    {
        returnValue = F("Sülzdamm");
        break;
    }
    case 303837:
    {
        returnValue = F("Sülze");
        break;
    }
    case 303838:
    {
        returnValue = F("Sülzeblick");
        break;
    }
    case 303839:
    {
        returnValue = F("Sülzenanger");
        break;
    }
    case 303840:
    {
        returnValue = F("Sülzenbrunnenweg");
        break;
    }
    case 303841:
    {
        returnValue = F("Sülzenbrücker Str.");
        break;
    }
    case 303842:
    {
        returnValue = F("Sülzenbrücker Weg");
        break;
    }
    case 303843:
    {
        returnValue = F("Sülzengasse");
        break;
    }
    case 303844:
    {
        returnValue = F("Sülzengäßchen");
        break;
    }
    case 303845:
    {
        returnValue = F("Sülzenheide");
        break;
    }
    case 303846:
    {
        returnValue = F("Sülzenweg");
        break;
    }
    case 303847:
    {
        returnValue = F("Sülzer Burg");
        break;
    }
    case 303848:
    {
        returnValue = F("Sülzer Chaussee");
        break;
    }
    case 303849:
    {
        returnValue = F("Sülzer Str.");
        break;
    }
    case 303850:
    {
        returnValue = F("Sülzer Weg");
        break;
    }
    case 303851:
    {
        returnValue = F("Sülzering");
        break;
    }
    case 303852:
    {
        returnValue = F("Sülzerweg");
        break;
    }
    case 303853:
    {
        returnValue = F("Sülzestr.");
        break;
    }
    case 303854:
    {
        returnValue = F("Sülzfelder Str.");
        break;
    }
    case 303855:
    {
        returnValue = F("Sülzfelder Weg");
        break;
    }
    case 303856:
    {
        returnValue = F("Sülzhayner Str.");
        break;
    }
    case 303857:
    {
        returnValue = F("Sülzlochweg");
        break;
    }
    case 303858:
    {
        returnValue = F("Sülzpfad");
        break;
    }
    case 303859:
    {
        returnValue = F("Sülzstr.");
        break;
    }
    case 303860:
    {
        returnValue = F("Sülztalplatz");
        break;
    }
    case 303861:
    {
        returnValue = F("Sülztalstr.");
        break;
    }
    case 303862:
    {
        returnValue = F("Sülzweg");
        break;
    }
    case 303863:
    {
        returnValue = F("Sümbergstr.");
        break;
    }
    case 303864:
    {
        returnValue = F("Sümmermannsweg");
        break;
    }
    case 303865:
    {
        returnValue = F("Sümpflein");
        break;
    }
    case 303866:
    {
        returnValue = F("Sümpflesbergweg");
        break;
    }
    case 303867:
    {
        returnValue = F("Sümpfleweg");
        break;
    }
    case 303868:
    {
        returnValue = F("Sümpfweg");
        break;
    }
    case 303869:
    {
        returnValue = F("Sünderbeeksweg");
        break;
    }
    case 303870:
    {
        returnValue = F("Sünderkämpe");
        break;
    }
    case 303871:
    {
        returnValue = F("Sünderlingstr.");
        break;
    }
    case 303872:
    {
        returnValue = F("Sünderwalder Weg");
        break;
    }
    case 303873:
    {
        returnValue = F("Sündstr.");
        break;
    }
    case 303874:
    {
        returnValue = F("Sünkenberg");
        break;
    }
    case 303875:
    {
        returnValue = F("Sünnaer Str.");
        break;
    }
    case 303876:
    {
        returnValue = F("Sünneby");
        break;
    }
    case 303877:
    {
        returnValue = F("Sünnekamp");
        break;
    }
    case 303878:
    {
        returnValue = F("Sünnekampstr.");
        break;
    }
    case 303879:
    {
        returnValue = F("Sünnenberg");
        break;
    }
    case 303880:
    {
        returnValue = F("Sünnenblink");
        break;
    }
    case 303881:
    {
        returnValue = F("Sünnenkringel");
        break;
    }
    case 303882:
    {
        returnValue = F("Sünnerholm");
        break;
    }
    case 303883:
    {
        returnValue = F("Sünnerlandsweg");
        break;
    }
    case 303884:
    {
        returnValue = F("Sünnerschau");
        break;
    }
    case 303885:
    {
        returnValue = F("Sünnopgangsweg");
        break;
    }
    case 303886:
    {
        returnValue = F("Sünnslag");
        break;
    }
    case 303887:
    {
        returnValue = F("Sünnwisch");
        break;
    }
    case 303888:
    {
        returnValue = F("Sünsbruch");
        break;
    }
    case 303889:
    {
        returnValue = F("Sünte-Rendel-Str.");
        break;
    }
    case 303890:
    {
        returnValue = F("Süntelblick");
        break;
    }
    case 303891:
    {
        returnValue = F("Süntelring");
        break;
    }
    case 303892:
    {
        returnValue = F("Süntelsteinweg");
        break;
    }
    case 303893:
    {
        returnValue = F("Süntelstr.");
        break;
    }
    case 303894:
    {
        returnValue = F("Süntelweg");
        break;
    }
    case 303895:
    {
        returnValue = F("Süntruper Feld");
        break;
    }
    case 303896:
    {
        returnValue = F("Sünzlweg");
        break;
    }
    case 303897:
    {
        returnValue = F("Süpkenhörn");
        break;
    }
    case 303898:
    {
        returnValue = F("Süplinger Str.");
        break;
    }
    case 303899:
    {
        returnValue = F("Süplinger Weg");
        break;
    }
    case 303900:
    {
        returnValue = F("Süpplingenburger Str.");
        break;
    }
    case 303901:
    {
        returnValue = F("Süptitzer Weg");
        break;
    }
    case 303902:
    {
        returnValue = F("Sürderspick");
        break;
    }
    case 303903:
    {
        returnValue = F("Sürenbrede");
        break;
    }
    case 303904:
    {
        returnValue = F("Sürenbrink");
        break;
    }
    case 303905:
    {
        returnValue = F("Sürenhagen");
        break;
    }
    case 303906:
    {
        returnValue = F("Sürenstr.");
        break;
    }
    case 303907:
    {
        returnValue = F("Sürgen");
        break;
    }
    case 303908:
    {
        returnValue = F("Sürgensteinstr.");
        break;
    }
    case 303909:
    {
        returnValue = F("Sürgenstr.");
        break;
    }
    case 303910:
    {
        returnValue = F("Sürgstück");
        break;
    }
    case 303911:
    {
        returnValue = F("Sürhalvenweg");
        break;
    }
    case 303912:
    {
        returnValue = F("Süringstr.");
        break;
    }
    case 303913:
    {
        returnValue = F("Sürlandweg");
        break;
    }
    case 303914:
    {
        returnValue = F("Sürst");
        break;
    }
    case 303915:
    {
        returnValue = F("Sürstedt");
        break;
    }
    case 303916:
    {
        returnValue = F("Sürster Weg");
        break;
    }
    case 303917:
    {
        returnValue = F("Sürwürder Deich");
        break;
    }
    case 303918:
    {
        returnValue = F("Sürwürder Hellmer");
        break;
    }
    case 303919:
    {
        returnValue = F("Sürwürder Str.");
        break;
    }
    case 303920:
    {
        returnValue = F("Sürßen");
        break;
    }
    case 303921:
    {
        returnValue = F("Süseler Feld");
        break;
    }
    case 303922:
    {
        returnValue = F("Süseler Moor");
        break;
    }
    case 303923:
    {
        returnValue = F("Süskenbrock");
        break;
    }
    case 303924:
    {
        returnValue = F("Süssenackerstr.");
        break;
    }
    case 303925:
    {
        returnValue = F("Süsser-Eck-Sträßchen");
        break;
    }
    case 303926:
    {
        returnValue = F("Süssetellchen-Weg");
        break;
    }
    case 303927:
    {
        returnValue = F("Süsskind-Weg");
        break;
    }
    case 303928:
    {
        returnValue = F("Süstedter Dorfstr.");
        break;
    }
    case 303929:
    {
        returnValue = F("Süsterstr.");
        break;
    }
    case 303930:
    {
        returnValue = F("Süthfeld");
        break;
    }
    case 303931:
    {
        returnValue = F("Sütjerstig");
        break;
    }
    case 303932:
    {
        returnValue = F("Süttenbach");
        break;
    }
    case 303933:
    {
        returnValue = F("Sütterlinstr.");
        break;
    }
    case 303934:
    {
        returnValue = F("Süttorfer Weg");
        break;
    }
    case 303935:
    {
        returnValue = F("Sützelstr.");
        break;
    }
    case 303936:
    {
        returnValue = F("Süßackerweg");
        break;
    }
    case 303937:
    {
        returnValue = F("Süßbach");
        break;
    }
    case 303938:
    {
        returnValue = F("Süßbacher Str.");
        break;
    }
    case 303939:
    {
        returnValue = F("Süßbächle");
        break;
    }
    case 303940:
    {
        returnValue = F("Süße Back");
        break;
    }
    case 303941:
    {
        returnValue = F("Süße Ecke");
        break;
    }
    case 303942:
    {
        returnValue = F("Süße Lötte");
        break;
    }
    case 303943:
    {
        returnValue = F("Süßebacher Str.");
        break;
    }
    case 303944:
    {
        returnValue = F("Süßenbach");
        break;
    }
    case 303945:
    {
        returnValue = F("Süßenborner Weg");
        break;
    }
    case 303946:
    {
        returnValue = F("Süßener Str.");
        break;
    }
    case 303947:
    {
        returnValue = F("Süßenrainstr.");
        break;
    }
    case 303948:
    {
        returnValue = F("Süßer Bühl");
        break;
    }
    case 303949:
    {
        returnValue = F("Süßer Grund");
        break;
    }
    case 303950:
    {
        returnValue = F("Süßer Weg");
        break;
    }
    case 303951:
    {
        returnValue = F("Süßer Winkel");
        break;
    }
    case 303952:
    {
        returnValue = F("Süßes Gründchen");
        break;
    }
    case 303953:
    {
        returnValue = F("Süßhübelstr.");
        break;
    }
    case 303954:
    {
        returnValue = F("Süßkindgasse");
        break;
    }
    case 303955:
    {
        returnValue = F("Süßkirschenallee");
        break;
    }
    case 303956:
    {
        returnValue = F("Süßkofen");
        break;
    }
    case 303957:
    {
        returnValue = F("Süßkofener Str.");
        break;
    }
    case 303958:
    {
        returnValue = F("Süßlingswiesenweg");
        break;
    }
    case 303959:
    {
        returnValue = F("Süßmilchring");
        break;
    }
    case 303960:
    {
        returnValue = F("Süßmilchstr.");
        break;
    }
    case 303961:
    {
        returnValue = F("Süßweg");
        break;
    }
    case 303962:
    {
        returnValue = F("Süßwiese");
        break;
    }
    case 303963:
    {
        returnValue = F("Süßwiesenstr.");
        break;
    }
    case 303964:
    {
        returnValue = F("Süßwinkel");
        break;
    }
    case 303965:
    {
        returnValue = F("Süüderwoi");
        break;
    }
    case 303966:
    {
        returnValue = F("Słupsk-Park");
        break;
    }
    }
    return returnValue;
}
