#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameO2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 240024:
    {
        returnValue = F("Obstbaumallee");
        break;
    }
    case 240025:
    {
        returnValue = F("Obstbaumlehrpfad");
        break;
    }
    case 240026:
    {
        returnValue = F("Obstbaumlehrpfad \"Ilfer Beem");
        break;
    }
    case 240027:
    {
        returnValue = F("Obstbaumweg");
        break;
    }
    case 240028:
    {
        returnValue = F("Obstbaumwiese");
        break;
    }
    case 240029:
    {
        returnValue = F("Obstberg");
        break;
    }
    case 240030:
    {
        returnValue = F("Obstbild");
        break;
    }
    case 240031:
    {
        returnValue = F("Obstblütenweg");
        break;
    }
    case 240032:
    {
        returnValue = F("Obstflussweg");
        break;
    }
    case 240033:
    {
        returnValue = F("Obstgarten");
        break;
    }
    case 240034:
    {
        returnValue = F("Obstgarten Arbeitskreis Naturschutz");
        break;
    }
    case 240035:
    {
        returnValue = F("Obstgartenstr.");
        break;
    }
    case 240036:
    {
        returnValue = F("Obstgartenweg");
        break;
    }
    case 240037:
    {
        returnValue = F("Obstgasse");
        break;
    }
    case 240038:
    {
        returnValue = F("Obstgut");
        break;
    }
    case 240039:
    {
        returnValue = F("Obstgutgarten");
        break;
    }
    case 240040:
    {
        returnValue = F("Obstgärten");
        break;
    }
    case 240041:
    {
        returnValue = F("Obsthalde");
        break;
    }
    case 240042:
    {
        returnValue = F("Obsthof");
        break;
    }
    case 240043:
    {
        returnValue = F("Obsthof Gerd Jentsch");
        break;
    }
    case 240044:
    {
        returnValue = F("Obstland-Str.");
        break;
    }
    case 240045:
    {
        returnValue = F("Obstlehrpfad");
        break;
    }
    case 240046:
    {
        returnValue = F("Obstlehrpfad Altdorf b. Nürnberg");
        break;
    }
    case 240047:
    {
        returnValue = F("Obstlehrpfad Dieterskirchen");
        break;
    }
    case 240048:
    {
        returnValue = F("Obstlehrpfad Nenzenheim");
        break;
    }
    case 240049:
    {
        returnValue = F("Obstleite");
        break;
    }
    case 240050:
    {
        returnValue = F("Obstmarkt");
        break;
    }
    case 240051:
    {
        returnValue = F("Obstmarschenweg");
        break;
    }
    case 240052:
    {
        returnValue = F("Obstmühle");
        break;
    }
    case 240053:
    {
        returnValue = F("Obstsammelwiese");
        break;
    }
    case 240054:
    {
        returnValue = F("Obstschützenhäusleweg");
        break;
    }
    case 240055:
    {
        returnValue = F("Obstsorten Lehrpfad Gingen an der Fils");
        break;
    }
    case 240056:
    {
        returnValue = F("Obststr.");
        break;
    }
    case 240057:
    {
        returnValue = F("Obstwarthaus");
        break;
    }
    case 240058:
    {
        returnValue = F("Obstweg");
        break;
    }
    case 240059:
    {
        returnValue = F("Obstwegle");
        break;
    }
    case 240060:
    {
        returnValue = F("Obstwiese");
        break;
    }
    case 240061:
    {
        returnValue = F("Obstwiesengasse");
        break;
    }
    case 240062:
    {
        returnValue = F("Obstwiesenweg");
        break;
    }
    case 240063:
    {
        returnValue = F("Obstwinkel");
        break;
    }
    case 240064:
    {
        returnValue = F("Obstzüchterstr.");
        break;
    }
    case 240065:
    {
        returnValue = F("Obweg");
        break;
    }
    case 240066:
    {
        returnValue = F("Obwieser Str.");
        break;
    }
    case 240067:
    {
        returnValue = F("Obüzstr.");
        break;
    }
    case 240068:
    {
        returnValue = F("Occamstr.");
        break;
    }
    case 240069:
    {
        returnValue = F("Occostr.");
        break;
    }
    case 240070:
    {
        returnValue = F("Oceanus-Str.");
        break;
    }
    case 240071:
    {
        returnValue = F("Ochelmitzer Str.");
        break;
    }
    case 240072:
    {
        returnValue = F("Ochelweg");
        break;
    }
    case 240073:
    {
        returnValue = F("Ochenbrucker Str.");
        break;
    }
    case 240074:
    {
        returnValue = F("Ochhermen");
        break;
    }
    case 240075:
    {
        returnValue = F("Ochholter Str.");
        break;
    }
    case 240076:
    {
        returnValue = F("Ocholter Str.");
        break;
    }
    case 240077:
    {
        returnValue = F("Ochsenallee");
        break;
    }
    case 240078:
    {
        returnValue = F("Ochsenanger");
        break;
    }
    case 240079:
    {
        returnValue = F("Ochsenangerweg");
        break;
    }
    case 240080:
    {
        returnValue = F("Ochsenbach");
        break;
    }
    case 240081:
    {
        returnValue = F("Ochsenbacher Mühle");
        break;
    }
    case 240082:
    {
        returnValue = F("Ochsenbacher Str.");
        break;
    }
    case 240083:
    {
        returnValue = F("Ochsenbacher Weg");
        break;
    }
    case 240084:
    {
        returnValue = F("Ochsenbachstr.");
        break;
    }
    case 240085:
    {
        returnValue = F("Ochsenbachweg");
        break;
    }
    case 240086:
    {
        returnValue = F("Ochsenbastei");
        break;
    }
    case 240087:
    {
        returnValue = F("Ochsenbend");
        break;
    }
    case 240088:
    {
        returnValue = F("Ochsenbendchen");
        break;
    }
    case 240089:
    {
        returnValue = F("Ochsenberg");
        break;
    }
    case 240090:
    {
        returnValue = F("Ochsenberger Str.");
        break;
    }
    case 240091:
    {
        returnValue = F("Ochsenberger Weg");
        break;
    }
    case 240092:
    {
        returnValue = F("Ochsenbergrundweg");
        break;
    }
    case 240093:
    {
        returnValue = F("Ochsenbergsteige");
        break;
    }
    case 240094:
    {
        returnValue = F("Ochsenbergstr.");
        break;
    }
    case 240095:
    {
        returnValue = F("Ochsenbergweg");
        break;
    }
    case 240096:
    {
        returnValue = F("Ochsenbitze");
        break;
    }
    case 240097:
    {
        returnValue = F("Ochsenbrunnen");
        break;
    }
    case 240098:
    {
        returnValue = F("Ochsenbrunnenstr.");
        break;
    }
    case 240099:
    {
        returnValue = F("Ochsenbrunnenweg");
        break;
    }
    case 240100:
    {
        returnValue = F("Ochsenbrücke");
        break;
    }
    case 240101:
    {
        returnValue = F("Ochsenbrückle");
        break;
    }
    case 240102:
    {
        returnValue = F("Ochsenbrünnlesweg");
        break;
    }
    case 240103:
    {
        returnValue = F("Ochsenbuck");
        break;
    }
    case 240104:
    {
        returnValue = F("Ochsenburg");
        break;
    }
    case 240105:
    {
        returnValue = F("Ochsenburger Str.");
        break;
    }
    case 240106:
    {
        returnValue = F("Ochsenburger Weg");
        break;
    }
    case 240107:
    {
        returnValue = F("Ochsenbusch");
        break;
    }
    case 240108:
    {
        returnValue = F("Ochsenbuschweg");
        break;
    }
    case 240109:
    {
        returnValue = F("Ochsenbühlweg");
        break;
    }
    case 240110:
    {
        returnValue = F("Ochsendamm");
        break;
    }
    case 240111:
    {
        returnValue = F("Ochsendorfer Str.");
        break;
    }
    case 240112:
    {
        returnValue = F("Ochsendrehe");
        break;
    }
    case 240113:
    {
        returnValue = F("Ochsendrift");
        break;
    }
    case 240114:
    {
        returnValue = F("Ochsenfelder Str.");
        break;
    }
    case 240115:
    {
        returnValue = F("Ochsenfurt");
        break;
    }
    case 240116:
    {
        returnValue = F("Ochsenfurter Str.");
        break;
    }
    case 240117:
    {
        returnValue = F("Ochsenfurther Str.");
        break;
    }
    case 240118:
    {
        returnValue = F("Ochsengarten");
        break;
    }
    case 240119:
    {
        returnValue = F("Ochsengarten Nattheim");
        break;
    }
    case 240120:
    {
        returnValue = F("Ochsengasse");
        break;
    }
    case 240121:
    {
        returnValue = F("Ochsengraben");
        break;
    }
    case 240122:
    {
        returnValue = F("Ochsengrundweg");
        break;
    }
    case 240123:
    {
        returnValue = F("Ochsengründlweg");
        break;
    }
    case 240124:
    {
        returnValue = F("Ochsengängle");
        break;
    }
    case 240125:
    {
        returnValue = F("Ochsengässle");
        break;
    }
    case 240126:
    {
        returnValue = F("Ochsengäßchen");
        break;
    }
    case 240127:
    {
        returnValue = F("Ochsengäßle");
        break;
    }
    case 240128:
    {
        returnValue = F("Ochsenhammer Weg");
        break;
    }
    case 240129:
    {
        returnValue = F("Ochsenhammsweg");
        break;
    }
    case 240130:
    {
        returnValue = F("Ochsenhardtweg");
        break;
    }
    case 240131:
    {
        returnValue = F("Ochsenharter Triebweg");
        break;
    }
    case 240132:
    {
        returnValue = F("Ochsenhauplanie");
        break;
    }
    case 240133:
    {
        returnValue = F("Ochsenhausener Str.");
        break;
    }
    case 240134:
    {
        returnValue = F("Ochsenhausenweg");
        break;
    }
    case 240135:
    {
        returnValue = F("Ochsenhauser Str.");
        break;
    }
    case 240136:
    {
        returnValue = F("Ochsenhausstr.");
        break;
    }
    case 240137:
    {
        returnValue = F("Ochsenhausträßle");
        break;
    }
    case 240138:
    {
        returnValue = F("Ochsenhauweg");
        break;
    }
    case 240139:
    {
        returnValue = F("Ochsenhof");
        break;
    }
    case 240140:
    {
        returnValue = F("Ochsenhofweg");
        break;
    }
    case 240141:
    {
        returnValue = F("Ochsenholz");
        break;
    }
    case 240142:
    {
        returnValue = F("Ochsenhut");
        break;
    }
    case 240143:
    {
        returnValue = F("Ochsenhäusleweg");
        break;
    }
    case 240144:
    {
        returnValue = F("Ochsenhülbweg");
        break;
    }
    case 240145:
    {
        returnValue = F("Ochsenkamp");
        break;
    }
    case 240146:
    {
        returnValue = F("Ochsenkampsweg");
        break;
    }
    case 240147:
    {
        returnValue = F("Ochsenkopf");
        break;
    }
    case 240148:
    {
        returnValue = F("Ochsenkopfring");
        break;
    }
    case 240149:
    {
        returnValue = F("Ochsenkopfstr.");
        break;
    }
    case 240150:
    {
        returnValue = F("Ochsenkopfweg");
        break;
    }
    case 240151:
    {
        returnValue = F("Ochsenkoppelritt");
        break;
    }
    case 240152:
    {
        returnValue = F("Ochsenlagerschneise");
        break;
    }
    case 240153:
    {
        returnValue = F("Ochsenlagerweg");
        break;
    }
    case 240154:
    {
        returnValue = F("Ochsenlägerweg");
        break;
    }
    case 240155:
    {
        returnValue = F("Ochsenmahdsträßle");
        break;
    }
    case 240156:
    {
        returnValue = F("Ochsenmarkt");
        break;
    }
    case 240157:
    {
        returnValue = F("Ochsenmarktskamp");
        break;
    }
    case 240158:
    {
        returnValue = F("Ochsenmatte");
        break;
    }
    case 240159:
    {
        returnValue = F("Ochsenmattstr.");
        break;
    }
    case 240160:
    {
        returnValue = F("Ochsenmauer");
        break;
    }
    case 240161:
    {
        returnValue = F("Ochsenmoorsweg");
        break;
    }
    case 240162:
    {
        returnValue = F("Ochsenmoorswiesen");
        break;
    }
    case 240163:
    {
        returnValue = F("Ochsenmoorweg");
        break;
    }
    case 240164:
    {
        returnValue = F("Ochsenmühle");
        break;
    }
    case 240165:
    {
        returnValue = F("Ochsenmühlentrift");
        break;
    }
    case 240166:
    {
        returnValue = F("Ochsenpfad");
        break;
    }
    case 240167:
    {
        returnValue = F("Ochsenpferchweg");
        break;
    }
    case 240168:
    {
        returnValue = F("Ochsenpfuhl");
        break;
    }
    case 240169:
    {
        returnValue = F("Ochsenpohl");
        break;
    }
    case 240170:
    {
        returnValue = F("Ochsenredder");
        break;
    }
    case 240171:
    {
        returnValue = F("Ochsenrutsch");
        break;
    }
    case 240172:
    {
        returnValue = F("Ochsensaalbrücke");
        break;
    }
    case 240173:
    {
        returnValue = F("Ochsensaaler Str.");
        break;
    }
    case 240174:
    {
        returnValue = F("Ochsenschachenhangweg");
        break;
    }
    case 240175:
    {
        returnValue = F("Ochsenschachensträßchen");
        break;
    }
    case 240176:
    {
        returnValue = F("Ochsenstall");
        break;
    }
    case 240177:
    {
        returnValue = F("Ochsenstallweg");
        break;
    }
    case 240178:
    {
        returnValue = F("Ochsensteg");
        break;
    }
    case 240179:
    {
        returnValue = F("Ochsensteig");
        break;
    }
    case 240180:
    {
        returnValue = F("Ochsensteige");
        break;
    }
    case 240181:
    {
        returnValue = F("Ochsensteigle");
        break;
    }
    case 240182:
    {
        returnValue = F("Ochsensteigstr.");
        break;
    }
    case 240183:
    {
        returnValue = F("Ochsensteinstr.");
        break;
    }
    case 240184:
    {
        returnValue = F("Ochsenstr.");
        break;
    }
    case 240185:
    {
        returnValue = F("Ochsenstruth");
        break;
    }
    case 240186:
    {
        returnValue = F("Ochsensüperweg");
        break;
    }
    case 240187:
    {
        returnValue = F("Ochsental");
        break;
    }
    case 240188:
    {
        returnValue = F("Ochsentaler Str.");
        break;
    }
    case 240189:
    {
        returnValue = F("Ochsentalstr.");
        break;
    }
    case 240190:
    {
        returnValue = F("Ochsentalweg");
        break;
    }
    case 240191:
    {
        returnValue = F("Ochsenteichstr.");
        break;
    }
    case 240192:
    {
        returnValue = F("Ochsenteichweg");
        break;
    }
    case 240193:
    {
        returnValue = F("Ochsenthaler Str.");
        break;
    }
    case 240194:
    {
        returnValue = F("Ochsentor");
        break;
    }
    case 240195:
    {
        returnValue = F("Ochsentorstr.");
        break;
    }
    case 240196:
    {
        returnValue = F("Ochsentradweg");
        break;
    }
    case 240197:
    {
        returnValue = F("Ochsentrift");
        break;
    }
    case 240198:
    {
        returnValue = F("Ochsentrogweg");
        break;
    }
    case 240199:
    {
        returnValue = F("Ochsenwaldstr.");
        break;
    }
    case 240200:
    {
        returnValue = F("Ochsenwaldweg");
        break;
    }
    case 240201:
    {
        returnValue = F("Ochsenwall");
        break;
    }
    case 240202:
    {
        returnValue = F("Ochsenwanger Steige");
        break;
    }
    case 240203:
    {
        returnValue = F("Ochsenwanger Str.");
        break;
    }
    case 240204:
    {
        returnValue = F("Ochsenweg");
        break;
    }
    case 240205:
    {
        returnValue = F("Ochsenweg-Ost");
        break;
    }
    case 240206:
    {
        returnValue = F("Ochsenwegle");
        break;
    }
    case 240207:
    {
        returnValue = F("Ochsenweid");
        break;
    }
    case 240208:
    {
        returnValue = F("Ochsenweide");
        break;
    }
    case 240209:
    {
        returnValue = F("Ochsenweidendamm");
        break;
    }
    case 240210:
    {
        returnValue = F("Ochsenwiese");
        break;
    }
    case 240211:
    {
        returnValue = F("Ochsenwiesen");
        break;
    }
    case 240212:
    {
        returnValue = F("Ochsenwiesenstr.");
        break;
    }
    case 240213:
    {
        returnValue = F("Ochsenwiesenweg");
        break;
    }
    case 240214:
    {
        returnValue = F("Ochsenwinkel");
        break;
    }
    case 240215:
    {
        returnValue = F("Ochsenwäldlesweg");
        break;
    }
    case 240216:
    {
        returnValue = F("Ochsenzoller Str.");
        break;
    }
    case 240217:
    {
        returnValue = F("Ochsenzug");
        break;
    }
    case 240218:
    {
        returnValue = F("Ochsenäcker");
        break;
    }
    case 240219:
    {
        returnValue = F("Ochsenäckerstr.");
        break;
    }
    case 240220:
    {
        returnValue = F("Ochsewaadweg");
        break;
    }
    case 240221:
    {
        returnValue = F("Ochshäuser Dorfstr.");
        break;
    }
    case 240222:
    {
        returnValue = F("Ochshäuser Str.");
        break;
    }
    case 240223:
    {
        returnValue = F("Ochshäuser Weg");
        break;
    }
    case 240224:
    {
        returnValue = F("Ochslergasse");
        break;
    }
    case 240225:
    {
        returnValue = F("Ochtelburer Weg");
        break;
    }
    case 240226:
    {
        returnValue = F("Ochtendunger Str.");
        break;
    }
    case 240227:
    {
        returnValue = F("Ochterstr.");
        break;
    }
    case 240228:
    {
        returnValue = F("Ochtersumer Weg");
        break;
    }
    case 240229:
    {
        returnValue = F("Ochtmannier Dorfstr.");
        break;
    }
    case 240230:
    {
        returnValue = F("Ochtmannsbruch-Siedlung");
        break;
    }
    case 240231:
    {
        returnValue = F("Ochtmannsbrucher Weg");
        break;
    }
    case 240232:
    {
        returnValue = F("Ochtmerlseber Weg");
        break;
    }
    case 240233:
    {
        returnValue = F("Ochtmersleber Weg");
        break;
    }
    case 240234:
    {
        returnValue = F("Ochtmisser Kirchsteig");
        break;
    }
    case 240235:
    {
        returnValue = F("Ochtmisser Str.");
        break;
    }
    case 240236:
    {
        returnValue = F("Ochtmisser Weg");
        break;
    }
    case 240237:
    {
        returnValue = F("Ochtropshof");
        break;
    }
    case 240238:
    {
        returnValue = F("Ochtruper Damm");
        break;
    }
    case 240239:
    {
        returnValue = F("Ochtruper Diek");
        break;
    }
    case 240240:
    {
        returnValue = F("Ochtruper Landstr.");
        break;
    }
    case 240241:
    {
        returnValue = F("Ochtruper Str.");
        break;
    }
    case 240242:
    {
        returnValue = F("Ochtruperdamm");
        break;
    }
    case 240243:
    {
        returnValue = F("Ochtrupweg");
        break;
    }
    case 240244:
    {
        returnValue = F("Ochtumdeich");
        break;
    }
    case 240245:
    {
        returnValue = F("Ochtumer Str.");
        break;
    }
    case 240246:
    {
        returnValue = F("Ochtumstr.");
        break;
    }
    case 240247:
    {
        returnValue = F("Ochtumweg");
        break;
    }
    case 240248:
    {
        returnValue = F("Ocke-Nerong-Str.");
        break;
    }
    case 240249:
    {
        returnValue = F("Ockel-Weg");
        break;
    }
    case 240250:
    {
        returnValue = F("Ockelbuhr - Octelbuhrsjass");
        break;
    }
    case 240251:
    {
        returnValue = F("Ockelsbach");
        break;
    }
    case 240252:
    {
        returnValue = F("Ockelstr.");
        break;
    }
    case 240253:
    {
        returnValue = F("Ockemase");
        break;
    }
    case 240254:
    {
        returnValue = F("Ockenauer Weg");
        break;
    }
    case 240255:
    {
        returnValue = F("Ockendorf");
        break;
    }
    case 240256:
    {
        returnValue = F("Ockenhausener Str.");
        break;
    }
    case 240257:
    {
        returnValue = F("Ockenheimer Chaussee");
        break;
    }
    case 240258:
    {
        returnValue = F("Ockenheimer Str.");
        break;
    }
    case 240259:
    {
        returnValue = F("Ockersdorf");
        break;
    }
    case 240260:
    {
        returnValue = F("Ockershäuser Allee");
        break;
    }
    case 240261:
    {
        returnValue = F("Ockershäuser Schulgasse");
        break;
    }
    case 240262:
    {
        returnValue = F("Ockershäuser Str.");
        break;
    }
    case 240263:
    {
        returnValue = F("Ockerstr.");
        break;
    }
    case 240264:
    {
        returnValue = F("Ockerweg");
        break;
    }
    case 240265:
    {
        returnValue = F("Ockerwitzer Allee");
        break;
    }
    case 240266:
    {
        returnValue = F("Ockerwitzer Dorfstr.");
        break;
    }
    case 240267:
    {
        returnValue = F("Ockerwitzer Ring");
        break;
    }
    case 240268:
    {
        returnValue = F("Ockerwitzer Str.");
        break;
    }
    case 240269:
    {
        returnValue = F("Ockerwitzer Weg");
        break;
    }
    case 240270:
    {
        returnValue = F("Ockethun");
        break;
    }
    case 240271:
    {
        returnValue = F("Ockfener Str.");
        break;
    }
    case 240272:
    {
        returnValue = F("Ockfener Weg");
        break;
    }
    case 240273:
    {
        returnValue = F("Ockhorst");
        break;
    }
    case 240274:
    {
        returnValue = F("Ocklenburgs Ried");
        break;
    }
    case 240275:
    {
        returnValue = F("Ocko-Janssen-Str.");
        break;
    }
    case 240276:
    {
        returnValue = F("Ocko-tom-Broek-Str.");
        break;
    }
    case 240277:
    {
        returnValue = F("Ocko-tom-Brook-Str.");
        break;
    }
    case 240278:
    {
        returnValue = F("Ockrillaer Str.");
        break;
    }
    case 240279:
    {
        returnValue = F("Ockstädter Str.");
        break;
    }
    case 240280:
    {
        returnValue = F("OdF-Platz");
        break;
    }
    case 240281:
    {
        returnValue = F("OdF-Str.");
        break;
    }
    case 240282:
    {
        returnValue = F("Odackerweg");
        break;
    }
    case 240283:
    {
        returnValue = F("Odagser Hauptstr.");
        break;
    }
    case 240284:
    {
        returnValue = F("Odakerstr.");
        break;
    }
    case 240285:
    {
        returnValue = F("Odamm");
        break;
    }
    case 240286:
    {
        returnValue = F("Odastr.");
        break;
    }
    case 240287:
    {
        returnValue = F("Odde-Wei");
        break;
    }
    case 240288:
    {
        returnValue = F("Odder");
        break;
    }
    case 240289:
    {
        returnValue = F("Odebornsweg");
        break;
    }
    case 240290:
    {
        returnValue = F("Odebrechtsstiftung");
        break;
    }
    case 240291:
    {
        returnValue = F("Odelshofener Str.");
        break;
    }
    case 240292:
    {
        returnValue = F("Odelweg");
        break;
    }
    case 240293:
    {
        returnValue = F("Odelzhausener Str.");
        break;
    }
    case 240294:
    {
        returnValue = F("Odelzhauser Str.");
        break;
    }
    case 240295:
    {
        returnValue = F("Odemshofallee");
        break;
    }
    case 240296:
    {
        returnValue = F("Odenbach");
        break;
    }
    case 240297:
    {
        returnValue = F("Odenbacher Str.");
        break;
    }
    case 240298:
    {
        returnValue = F("Odenbachstr.");
        break;
    }
    case 240299:
    {
        returnValue = F("Odenbachweg");
        break;
    }
    case 240300:
    {
        returnValue = F("Odenberg");
        break;
    }
    case 240301:
    {
        returnValue = F("Odenbergstr.");
        break;
    }
    case 240302:
    {
        returnValue = F("Odendorfer Weg");
        break;
    }
    case 240303:
    {
        returnValue = F("Odenhauser Weg");
        break;
    }
    case 240304:
    {
        returnValue = F("Odenheimer Str.");
        break;
    }
    case 240305:
    {
        returnValue = F("Odenheimstr.");
        break;
    }
    case 240306:
    {
        returnValue = F("Odenhäuser Str.");
        break;
    }
    case 240307:
    {
        returnValue = F("Odenkirchener Str.");
        break;
    }
    case 240308:
    {
        returnValue = F("Odenkopf");
        break;
    }
    case 240309:
    {
        returnValue = F("Odenricht");
        break;
    }
    case 240310:
    {
        returnValue = F("Odenschneise");
        break;
    }
    case 240311:
    {
        returnValue = F("Odensehof");
        break;
    }
    case 240312:
    {
        returnValue = F("Odensestr.");
        break;
    }
    case 240313:
    {
        returnValue = F("Odenspieler Str.");
        break;
    }
    case 240314:
    {
        returnValue = F("Odentaler Weg");
        break;
    }
    case 240315:
    {
        returnValue = F("Odenthaler Markweg");
        break;
    }
    case 240316:
    {
        returnValue = F("Odenthaler Str.");
        break;
    }
    case 240317:
    {
        returnValue = F("Odenthaler Weg");
        break;
    }
    case 240318:
    {
        returnValue = F("Odenthalstr.");
        break;
    }
    case 240319:
    {
        returnValue = F("Odenthalweg");
        break;
    }
    case 240320:
    {
        returnValue = F("Odenwald");
        break;
    }
    case 240321:
    {
        returnValue = F("Odenwaldallee");
        break;
    }
    case 240322:
    {
        returnValue = F("Odenwaldbaumstr.");
        break;
    }
    case 240323:
    {
        returnValue = F("Odenwaldblick");
        break;
    }
    case 240324:
    {
        returnValue = F("Odenwaldbrücke");
        break;
    }
    case 240325:
    {
        returnValue = F("Odenwaldhöhe");
        break;
    }
    case 240326:
    {
        returnValue = F("Odenwaldring");
        break;
    }
    case 240327:
    {
        returnValue = F("Odenwaldschneise");
        break;
    }
    case 240328:
    {
        returnValue = F("Odenwaldstr.");
        break;
    }
    case 240329:
    {
        returnValue = F("Odenwaldweg");
        break;
    }
    case 240330:
    {
        returnValue = F("Odenwälder Landstr.");
        break;
    }
    case 240331:
    {
        returnValue = F("Odenwälder Str.");
        break;
    }
    case 240332:
    {
        returnValue = F("Odenwälder Weg");
        break;
    }
    case 240333:
    {
        returnValue = F("Odeonsplatz");
        break;
    }
    case 240334:
    {
        returnValue = F("Odeonstr.");
        break;
    }
    case 240335:
    {
        returnValue = F("Oder-Havel-Kanal");
        break;
    }
    case 240336:
    {
        returnValue = F("Oder-Havel-Radweg");
        break;
    }
    case 240337:
    {
        returnValue = F("Oder-Lausitz-Trasse");
        break;
    }
    case 240338:
    {
        returnValue = F("Oder-Neiße");
        break;
    }
    case 240339:
    {
        returnValue = F("Oder-Neiße-Str.");
        break;
    }
    case 240340:
    {
        returnValue = F("Oder-Neiße-Trasse");
        break;
    }
    case 240341:
    {
        returnValue = F("Oder-Neiße-Weg");
        break;
    }
    case 240342:
    {
        returnValue = F("Oder-Welse-Rundweg");
        break;
    }
    case 240343:
    {
        returnValue = F("Oderberg Neuendorf");
        break;
    }
    case 240344:
    {
        returnValue = F("Oderberge");
        break;
    }
    case 240345:
    {
        returnValue = F("Oderberger Str.");
        break;
    }
    case 240346:
    {
        returnValue = F("Oderberger Weg");
        break;
    }
    case 240347:
    {
        returnValue = F("Oderbergstr.");
        break;
    }
    case 240348:
    {
        returnValue = F("Oderbergweg");
        break;
    }
    case 240349:
    {
        returnValue = F("Oderblick");
        break;
    }
    case 240350:
    {
        returnValue = F("Oderbruchbahn-Radweg");
        break;
    }
    case 240351:
    {
        returnValue = F("Oderbruchstr.");
        break;
    }
    case 240352:
    {
        returnValue = F("Oderbrück");
        break;
    }
    case 240353:
    {
        returnValue = F("Oderbrück Nord");
        break;
    }
    case 240354:
    {
        returnValue = F("Oderbrück-Süd");
        break;
    }
    case 240355:
    {
        returnValue = F("Oderbrücke");
        break;
    }
    case 240356:
    {
        returnValue = F("Oderbrücke Fürstenberg");
        break;
    }
    case 240357:
    {
        returnValue = F("Oderchaussee");
        break;
    }
    case 240358:
    {
        returnValue = F("Oderdamm");
        break;
    }
    case 240359:
    {
        returnValue = F("Oderdeich");
        break;
    }
    case 240360:
    {
        returnValue = F("Oderdinger Str.");
        break;
    }
    case 240361:
    {
        returnValue = F("Oderfelder Str.");
        break;
    }
    case 240362:
    {
        returnValue = F("Oderlandstr.");
        break;
    }
    case 240363:
    {
        returnValue = F("Odermannstr.");
        break;
    }
    case 240364:
    {
        returnValue = F("Odermarkplatz");
        break;
    }
    case 240365:
    {
        returnValue = F("Odermisser Str.");
        break;
    }
    case 240366:
    {
        returnValue = F("Odernheimer Str.");
        break;
    }
    case 240367:
    {
        returnValue = F("Odernheimer Wanderweg O2");
        break;
    }
    case 240368:
    {
        returnValue = F("Odernheimer Weg");
        break;
    }
    case 240369:
    {
        returnValue = F("Oderplatz");
        break;
    }
    case 240370:
    {
        returnValue = F("Oderpromenade");
        break;
    }
    case 240371:
    {
        returnValue = F("Oderring");
        break;
    }
    case 240372:
    {
        returnValue = F("Odersbacher Weg");
        break;
    }
    case 240373:
    {
        returnValue = F("Oderscheiderfeld");
        break;
    }
    case 240374:
    {
        returnValue = F("Odershäuser Str.");
        break;
    }
    case 240375:
    {
        returnValue = F("Oderstr.");
        break;
    }
    case 240376:
    {
        returnValue = F("Odertal");
        break;
    }
    case 240377:
    {
        returnValue = F("Odertalbahn");
        break;
    }
    case 240378:
    {
        returnValue = F("Odertaler Sägemühle");
        break;
    }
    case 240379:
    {
        returnValue = F("Odertaler Weg");
        break;
    }
    case 240380:
    {
        returnValue = F("Odertalstr.");
        break;
    }
    case 240381:
    {
        returnValue = F("Odertalweg");
        break;
    }
    case 240382:
    {
        returnValue = F("Oderteichweg");
        break;
    }
    case 240383:
    {
        returnValue = F("Odervorstadt");
        break;
    }
    case 240384:
    {
        returnValue = F("Oderwaldblick");
        break;
    }
    case 240385:
    {
        returnValue = F("Oderwaldstr.");
        break;
    }
    case 240386:
    {
        returnValue = F("Oderweg");
        break;
    }
    case 240387:
    {
        returnValue = F("Oderwitzer Str.");
        break;
    }
    case 240388:
    {
        returnValue = F("Oderwitzer Str.-Ninive");
        break;
    }
    case 240389:
    {
        returnValue = F("Odesheimer Weg");
        break;
    }
    case 240390:
    {
        returnValue = F("Odessa-Ring");
        break;
    }
    case 240391:
    {
        returnValue = F("Odessaer Str.");
        break;
    }
    case 240392:
    {
        returnValue = F("Odeweger Dorfstr.");
        break;
    }
    case 240393:
    {
        returnValue = F("Odfeldstr.");
        break;
    }
    case 240394:
    {
        returnValue = F("Odigallweg");
        break;
    }
    case 240395:
    {
        returnValue = F("Odilgard-Menke-Eden-Weg");
        break;
    }
    case 240396:
    {
        returnValue = F("Odiliastr.");
        break;
    }
    case 240397:
    {
        returnValue = F("Odilienbergstr.");
        break;
    }
    case 240398:
    {
        returnValue = F("Odiliengarten");
        break;
    }
    case 240399:
    {
        returnValue = F("Odilienplatz");
        break;
    }
    case 240400:
    {
        returnValue = F("Odilienstr.");
        break;
    }
    case 240401:
    {
        returnValue = F("Odilostr.");
        break;
    }
    case 240402:
    {
        returnValue = F("Odina-Bott-Platz");
        break;
    }
    case 240403:
    {
        returnValue = F("Odinspfad");
        break;
    }
    case 240404:
    {
        returnValue = F("Odinstalweg");
        break;
    }
    case 240405:
    {
        returnValue = F("Odinstr.");
        break;
    }
    case 240406:
    {
        returnValue = F("Odinsweg");
        break;
    }
    case 240407:
    {
        returnValue = F("Odinweg");
        break;
    }
    case 240408:
    {
        returnValue = F("Odlerweg");
        break;
    }
    case 240409:
    {
        returnValue = F("Odoakerstr.");
        break;
    }
    case 240410:
    {
        returnValue = F("Odorfsweg");
        break;
    }
    case 240411:
    {
        returnValue = F("Odraustr.");
        break;
    }
    case 240412:
    {
        returnValue = F("Odrellstr.");
        break;
    }
    case 240413:
    {
        returnValue = F("Oebel");
        break;
    }
    case 240414:
    {
        returnValue = F("Oebeler Heide");
        break;
    }
    case 240415:
    {
        returnValue = F("Oebeler Str.");
        break;
    }
    case 240416:
    {
        returnValue = F("Oebisfelder Str.");
        break;
    }
    case 240417:
    {
        returnValue = F("Oebisfelder Weg");
        break;
    }
    case 240418:
    {
        returnValue = F("Oebkenbrink");
        break;
    }
    case 240419:
    {
        returnValue = F("Oebleser Str.");
        break;
    }
    case 240420:
    {
        returnValue = F("Oechelhaeuserstr.");
        break;
    }
    case 240421:
    {
        returnValue = F("Oechelhäuserstr.");
        break;
    }
    case 240422:
    {
        returnValue = F("Oechlitzer Str.");
        break;
    }
    case 240423:
    {
        returnValue = F("Oechsenbergstr.");
        break;
    }
    case 240424:
    {
        returnValue = F("Oechslestr.");
        break;
    }
    case 240425:
    {
        returnValue = F("Oechslinstr.");
        break;
    }
    case 240426:
    {
        returnValue = F("Oechsnerstr.");
        break;
    }
    case 240427:
    {
        returnValue = F("Oeckinghausen");
        break;
    }
    case 240428:
    {
        returnValue = F("Oed");
        break;
    }
    case 240429:
    {
        returnValue = F("Oedackerweg");
        break;
    }
    case 240430:
    {
        returnValue = F("Oede-Schlenke");
        break;
    }
    case 240431:
    {
        returnValue = F("Oedekovener Str.");
        break;
    }
    case 240432:
    {
        returnValue = F("Oedelsheimer Str.");
        break;
    }
    case 240433:
    {
        returnValue = F("Oedelsheimer Weg");
        break;
    }
    case 240434:
    {
        returnValue = F("Oedelumer Str.");
        break;
    }
    case 240435:
    {
        returnValue = F("Oedemer Busch");
        break;
    }
    case 240436:
    {
        returnValue = F("Oedemer Weg");
        break;
    }
    case 240437:
    {
        returnValue = F("Oedenberg");
        break;
    }
    case 240438:
    {
        returnValue = F("Oedenberger Hauptstr.");
        break;
    }
    case 240439:
    {
        returnValue = F("Oedenberger Str.");
        break;
    }
    case 240440:
    {
        returnValue = F("Oedenberger Weg");
        break;
    }
    case 240441:
    {
        returnValue = F("Oedenburger Str.");
        break;
    }
    case 240442:
    {
        returnValue = F("Oedenburgstr.");
        break;
    }
    case 240443:
    {
        returnValue = F("Oedenfeld");
        break;
    }
    case 240444:
    {
        returnValue = F("Oedenfelder Str.");
        break;
    }
    case 240445:
    {
        returnValue = F("Oedenfeldstr.");
        break;
    }
    case 240446:
    {
        returnValue = F("Oedenreuther Hauptstr.");
        break;
    }
    case 240447:
    {
        returnValue = F("Oedenstockacher Str.");
        break;
    }
    case 240448:
    {
        returnValue = F("Oedenthaler Str.");
        break;
    }
    case 240449:
    {
        returnValue = F("Oedenthalerhagen");
        break;
    }
    case 240450:
    {
        returnValue = F("Oeder Weg");
        break;
    }
    case 240451:
    {
        returnValue = F("Oederallee");
        break;
    }
    case 240452:
    {
        returnValue = F("Oederaner Str.");
        break;
    }
    case 240453:
    {
        returnValue = F("Oederichgasse");
        break;
    }
    case 240454:
    {
        returnValue = F("Oederstr.");
        break;
    }
    case 240455:
    {
        returnValue = F("Oedesser Str.");
        break;
    }
    case 240456:
    {
        returnValue = F("Oedeweg");
        break;
    }
    case 240457:
    {
        returnValue = F("Oedheimer Str.");
        break;
    }
    case 240458:
    {
        returnValue = F("Oedheimer Weg");
        break;
    }
    case 240459:
    {
        returnValue = F("Oedigerplatz");
        break;
    }
    case 240460:
    {
        returnValue = F("Oedinger Str.");
        break;
    }
    case 240461:
    {
        returnValue = F("Oedingerberg");
        break;
    }
    case 240462:
    {
        returnValue = F("Oedingermühle");
        break;
    }
    case 240463:
    {
        returnValue = F("Oedingkamp");
        break;
    }
    case 240464:
    {
        returnValue = F("Oedkarspitzstr.");
        break;
    }
    case 240465:
    {
        returnValue = F("Oedler Weg");
        break;
    }
    case 240466:
    {
        returnValue = F("Oedstr.");
        break;
    }
    case 240467:
    {
        returnValue = F("Oedter Str.");
        break;
    }
    case 240468:
    {
        returnValue = F("Oedter Weg");
        break;
    }
    case 240469:
    {
        returnValue = F("Oefelestr.");
        break;
    }
    case 240470:
    {
        returnValue = F("Oeffenkamp");
        break;
    }
    case 240471:
    {
        returnValue = F("Oeffentlicher Wirtschaftsweg 37");
        break;
    }
    case 240472:
    {
        returnValue = F("Oeffingener Str.");
        break;
    }
    case 240473:
    {
        returnValue = F("Oeffinger Str.");
        break;
    }
    case 240474:
    {
        returnValue = F("Oefte");
        break;
    }
    case 240475:
    {
        returnValue = F("Oefter Str.");
        break;
    }
    case 240476:
    {
        returnValue = F("Oegenbosteler Str.");
        break;
    }
    case 240477:
    {
        returnValue = F("Oegenser Weg");
        break;
    }
    case 240478:
    {
        returnValue = F("Oeger Str.");
        break;
    }
    case 240479:
    {
        returnValue = F("Oeggstr.");
        break;
    }
    case 240480:
    {
        returnValue = F("Oehder Weg");
        break;
    }
    case 240481:
    {
        returnValue = F("Oehe");
        break;
    }
    case 240482:
    {
        returnValue = F("Oeher Ring");
        break;
    }
    case 240483:
    {
        returnValue = F("Oeher Weg");
        break;
    }
    case 240484:
    {
        returnValue = F("Oehlener Weg");
        break;
    }
    case 240485:
    {
        returnValue = F("Oehlerstr.");
        break;
    }
    case 240486:
    {
        returnValue = F("Oehlisch");
        break;
    }
    case 240487:
    {
        returnValue = F("Oehlischer Weg");
        break;
    }
    case 240488:
    {
        returnValue = F("Oehlkersweg");
        break;
    }
    case 240489:
    {
        returnValue = F("Oehlmannstr.");
        break;
    }
    case 240490:
    {
        returnValue = F("Oehlmannsweg");
        break;
    }
    case 240491:
    {
        returnValue = F("Oehlstr.");
        break;
    }
    case 240492:
    {
        returnValue = F("Oehmchenstr.");
        break;
    }
    case 240493:
    {
        returnValue = F("Oehmestr.");
        break;
    }
    case 240494:
    {
        returnValue = F("Oehna");
        break;
    }
    case 240495:
    {
        returnValue = F("Oehndorfstr.");
        break;
    }
    case 240496:
    {
        returnValue = F("Oehrenstocker Weg");
        break;
    }
    case 240497:
    {
        returnValue = F("Oehrenstöcker Chaussee");
        break;
    }
    case 240498:
    {
        returnValue = F("Oehrenstöcker Landstr.");
        break;
    }
    case 240499:
    {
        returnValue = F("Oehrenstöcker Str.");
        break;
    }
    case 240500:
    {
        returnValue = F("Oehrensweg");
        break;
    }
    case 240501:
    {
        returnValue = F("Oehretalstr.");
        break;
    }
    case 240502:
    {
        returnValue = F("Oehrkstr.");
        break;
    }
    case 240503:
    {
        returnValue = F("Oeings Kamp");
        break;
    }
    case 240504:
    {
        returnValue = F("Oekentorpsweg");
        break;
    }
    case 240505:
    {
        returnValue = F("Oekonomenweg");
        break;
    }
    case 240506:
    {
        returnValue = F("Oekovener Weg");
        break;
    }
    case 240507:
    {
        returnValue = F("Oelbachtal");
        break;
    }
    case 240508:
    {
        returnValue = F("Oelbecker Str.");
        break;
    }
    case 240509:
    {
        returnValue = F("Oelber Weg");
        break;
    }
    case 240510:
    {
        returnValue = F("Oelberg");
        break;
    }
    case 240511:
    {
        returnValue = F("Oelberg-Rundweg");
        break;
    }
    case 240512:
    {
        returnValue = F("Oelbergblick");
        break;
    }
    case 240513:
    {
        returnValue = F("Oelbergringweg");
        break;
    }
    case 240514:
    {
        returnValue = F("Oelbergskamp");
        break;
    }
    case 240515:
    {
        returnValue = F("Oelbergstr.");
        break;
    }
    case 240516:
    {
        returnValue = F("Oelbermannstr.");
        break;
    }
    case 240517:
    {
        returnValue = F("Oelbrink");
        break;
    }
    case 240518:
    {
        returnValue = F("Oelbrinkstr.");
        break;
    }
    case 240519:
    {
        returnValue = F("Oelchensweg");
        break;
    }
    case 240520:
    {
        returnValue = F("Oelchenweg");
        break;
    }
    case 240521:
    {
        returnValue = F("Oelder Str.");
        break;
    }
    case 240522:
    {
        returnValue = F("Oelder Tor");
        break;
    }
    case 240523:
    {
        returnValue = F("Oelder Weg");
        break;
    }
    case 240524:
    {
        returnValue = F("Oeldestr.");
        break;
    }
    case 240525:
    {
        returnValue = F("Oeldorf");
        break;
    }
    case 240526:
    {
        returnValue = F("Oelegemer Str.");
        break;
    }
    case 240527:
    {
        returnValue = F("Oelendiek");
        break;
    }
    case 240528:
    {
        returnValue = F("Oelenhainzweg");
        break;
    }
    case 240529:
    {
        returnValue = F("Oelentrup");
        break;
    }
    case 240530:
    {
        returnValue = F("Oelerother Str.");
        break;
    }
    case 240531:
    {
        returnValue = F("Oelerser Str.");
        break;
    }
    case 240532:
    {
        returnValue = F("Oelerser Weg");
        break;
    }
    case 240533:
    {
        returnValue = F("Oelewegle");
        break;
    }
    case 240534:
    {
        returnValue = F("Oelfabrik");
        break;
    }
    case 240535:
    {
        returnValue = F("Oelfirstweg");
        break;
    }
    case 240536:
    {
        returnValue = F("Oelgarten");
        break;
    }
    case 240537:
    {
        returnValue = F("Oelgartenstr.");
        break;
    }
    case 240538:
    {
        returnValue = F("Oelgasse");
        break;
    }
    case 240539:
    {
        returnValue = F("Oelgershausener Str.");
        break;
    }
    case 240540:
    {
        returnValue = F("Oelhausenweg");
        break;
    }
    case 240541:
    {
        returnValue = F("Oelheimer Str.");
        break;
    }
    case 240542:
    {
        returnValue = F("Oelheimer Weg");
        break;
    }
    case 240543:
    {
        returnValue = F("Oelhof");
        break;
    }
    case 240544:
    {
        returnValue = F("Oeliedenweg");
        break;
    }
    case 240545:
    {
        returnValue = F("Oelinger Str.");
        break;
    }
    case 240546:
    {
        returnValue = F("Oelinghauser Heide");
        break;
    }
    case 240547:
    {
        returnValue = F("Oelinghauser Mühle");
        break;
    }
    case 240548:
    {
        returnValue = F("Oelinghauser Weg");
        break;
    }
    case 240549:
    {
        returnValue = F("Oelinghovener Str.");
        break;
    }
    case 240550:
    {
        returnValue = F("Oelingrath");
        break;
    }
    case 240551:
    {
        returnValue = F("Oelixdorfer Str.");
        break;
    }
    case 240552:
    {
        returnValue = F("Oelkasser Str.");
        break;
    }
    case 240553:
    {
        returnValue = F("Oelkersstr.");
        break;
    }
    case 240554:
    {
        returnValue = F("Oelkerstr.");
        break;
    }
    case 240555:
    {
        returnValue = F("Oelkersweg");
        break;
    }
    case 240556:
    {
        returnValue = F("Oelkinghauser Str.");
        break;
    }
    case 240557:
    {
        returnValue = F("Oelknitzer Grund");
        break;
    }
    case 240558:
    {
        returnValue = F("Oelkofner Feld");
        break;
    }
    case 240559:
    {
        returnValue = F("Oelkörnlein");
        break;
    }
    case 240560:
    {
        returnValue = F("Oellersstr.");
        break;
    }
    case 240561:
    {
        returnValue = F("Oellien Tannen");
        break;
    }
    case 240562:
    {
        returnValue = F("Oellienbarg");
        break;
    }
    case 240563:
    {
        returnValue = F("Oellinger Str.");
        break;
    }
    case 240564:
    {
        returnValue = F("Oellschütz");
        break;
    }
    case 240565:
    {
        returnValue = F("Oelmannsallee");
        break;
    }
    case 240566:
    {
        returnValue = F("Oelmesgrubstr.");
        break;
    }
    case 240567:
    {
        returnValue = F("Oelmühle");
        break;
    }
    case 240568:
    {
        returnValue = F("Oelmühlenstr.");
        break;
    }
    case 240569:
    {
        returnValue = F("Oelmühlenweg");
        break;
    }
    case 240570:
    {
        returnValue = F("Oelmühlerweg");
        break;
    }
    case 240571:
    {
        returnValue = F("Oelmühlgasse");
        break;
    }
    case 240572:
    {
        returnValue = F("Oelmühlweg");
        break;
    }
    case 240573:
    {
        returnValue = F("Oelmüllers Esch");
        break;
    }
    case 240574:
    {
        returnValue = F("Oelmüllers Feld");
        break;
    }
    case 240575:
    {
        returnValue = F("Oelmüllerstr.");
        break;
    }
    case 240576:
    {
        returnValue = F("Oelmüllerweg");
        break;
    }
    case 240577:
    {
        returnValue = F("Oelpfad");
        break;
    }
    case 240578:
    {
        returnValue = F("Oelpfannerweg");
        break;
    }
    case 240579:
    {
        returnValue = F("Oelsa");
        break;
    }
    case 240580:
    {
        returnValue = F("Oelsaer Str.");
        break;
    }
    case 240581:
    {
        returnValue = F("Oelsberg");
        break;
    }
    case 240582:
    {
        returnValue = F("Oelsbergsteig");
        break;
    }
    case 240583:
    {
        returnValue = F("Oelschlägerei");
        break;
    }
    case 240584:
    {
        returnValue = F("Oelschlägerstr.");
        break;
    }
    case 240585:
    {
        returnValue = F("Oelschnitz");
        break;
    }
    case 240586:
    {
        returnValue = F("Oelschröte");
        break;
    }
    case 240587:
    {
        returnValue = F("Oelschützer Str.");
        break;
    }
    case 240588:
    {
        returnValue = F("Oelsen");
        break;
    }
    case 240589:
    {
        returnValue = F("Oelsener Landstr.");
        break;
    }
    case 240590:
    {
        returnValue = F("Oelsener Str.");
        break;
    }
    case 240591:
    {
        returnValue = F("Oelsener Weg");
        break;
    }
    case 240592:
    {
        returnValue = F("Oelser Str.");
        break;
    }
    case 240593:
    {
        returnValue = F("Oelser Weg");
        break;
    }
    case 240594:
    {
        returnValue = F("Oelshäuserstr.");
        break;
    }
    case 240595:
    {
        returnValue = F("Oelsig");
        break;
    }
    case 240596:
    {
        returnValue = F("Oelsiger Gasse");
        break;
    }
    case 240597:
    {
        returnValue = F("Oelsiger Karl-Loh-Weg");
        break;
    }
    case 240598:
    {
        returnValue = F("Oelsiger Str.");
        break;
    }
    case 240599:
    {
        returnValue = F("Oelsiger Waldstr.");
        break;
    }
    case 240600:
    {
        returnValue = F("Oelsitzer Weg");
        break;
    }
    case 240601:
    {
        returnValue = F("Oelsniger Weg");
        break;
    }
    case 240602:
    {
        returnValue = F("Oelsnitzer Hauptstr.");
        break;
    }
    case 240603:
    {
        returnValue = F("Oelsnitzer Landstr.");
        break;
    }
    case 240604:
    {
        returnValue = F("Oelsnitzer Steig");
        break;
    }
    case 240605:
    {
        returnValue = F("Oelsnitzer Str.");
        break;
    }
    case 240606:
    {
        returnValue = F("Oelsnitzer Weg");
        break;
    }
    case 240607:
    {
        returnValue = F("Oelsnitztal");
        break;
    }
    case 240608:
    {
        returnValue = F("Oelsstr.");
        break;
    }
    case 240609:
    {
        returnValue = F("Oelstorfer Landstr.");
        break;
    }
    case 240610:
    {
        returnValue = F("Oelstr.");
        break;
    }
    case 240611:
    {
        returnValue = F("Oelsweg");
        break;
    }
    case 240612:
    {
        returnValue = F("Oeltingsallee");
        break;
    }
    case 240613:
    {
        returnValue = F("Oeltzenstr.");
        break;
    }
    case 240614:
    {
        returnValue = F("Oeltzschner Str.");
        break;
    }
    case 240615:
    {
        returnValue = F("Oeltzschweg");
        break;
    }
    case 240616:
    {
        returnValue = F("Oelverhof");
        break;
    }
    case 240617:
    {
        returnValue = F("Oelweg");
        break;
    }
    case 240618:
    {
        returnValue = F("Oelwiese");
        break;
    }
    case 240619:
    {
        returnValue = F("Oelzenstr.");
        break;
    }
    case 240620:
    {
        returnValue = F("Oelzer Str.");
        break;
    }
    case 240621:
    {
        returnValue = F("Oelzeweg");
        break;
    }
    case 240622:
    {
        returnValue = F("Oelzschauer Str.");
        break;
    }
    case 240623:
    {
        returnValue = F("Oelzschauer Weg");
        break;
    }
    case 240624:
    {
        returnValue = F("Oelßners Hof");
        break;
    }
    case 240625:
    {
        returnValue = F("Oelßnerstr.");
        break;
    }
    case 240626:
    {
        returnValue = F("Oemberg");
        break;
    }
    case 240627:
    {
        returnValue = F("Oemkenstr.");
        break;
    }
    case 240628:
    {
        returnValue = F("Oeneking");
        break;
    }
    case 240629:
    {
        returnValue = F("Oenekinger Hang");
        break;
    }
    case 240630:
    {
        returnValue = F("Oenekinger Weg");
        break;
    }
    case 240631:
    {
        returnValue = F("Oenestr.");
        break;
    }
    case 240632:
    {
        returnValue = F("Oening A");
        break;
    }
    case 240633:
    {
        returnValue = F("Oening B");
        break;
    }
    case 240634:
    {
        returnValue = F("Oening C");
        break;
    }
    case 240635:
    {
        returnValue = F("Oening D");
        break;
    }
    case 240636:
    {
        returnValue = F("Oeningen");
        break;
    }
    case 240637:
    {
        returnValue = F("Oeninger Moorweg");
        break;
    }
    case 240638:
    {
        returnValue = F("Oeninger Weg");
        break;
    }
    case 240639:
    {
        returnValue = F("Oepfershäuser Str.");
        break;
    }
    case 240640:
    {
        returnValue = F("Oeppenstr.");
        break;
    }
    case 240641:
    {
        returnValue = F("Oeppings Feld");
        break;
    }
    case 240642:
    {
        returnValue = F("Oeppings Heide");
        break;
    }
    case 240643:
    {
        returnValue = F("Oer");
        break;
    }
    case 240644:
    {
        returnValue = F("Oerath");
        break;
    }
    case 240645:
    {
        returnValue = F("Oerather Weg");
        break;
    }
    case 240646:
    {
        returnValue = F("Oerbker Berg");
        break;
    }
    case 240647:
    {
        returnValue = F("Oerdinghauser Str.");
        break;
    }
    case 240648:
    {
        returnValue = F("Oerenburger Str.");
        break;
    }
    case 240649:
    {
        returnValue = F("Oerenstr.");
        break;
    }
    case 240650:
    {
        returnValue = F("Oerfeld");
        break;
    }
    case 240651:
    {
        returnValue = F("Oerier Str.");
        break;
    }
    case 240652:
    {
        returnValue = F("Oerier Weg");
        break;
    }
    case 240653:
    {
        returnValue = F("Oeringer Brücke");
        break;
    }
    case 240654:
    {
        returnValue = F("Oeringer Damm");
        break;
    }
    case 240655:
    {
        returnValue = F("Oeringer Str.");
        break;
    }
    case 240656:
    {
        returnValue = F("Oeringer Weg");
        break;
    }
    case 240657:
    {
        returnValue = F("Oerkenkrug");
        break;
    }
    case 240658:
    {
        returnValue = F("Oerkhaus");
        break;
    }
    case 240659:
    {
        returnValue = F("Oerkhaushof");
        break;
    }
    case 240660:
    {
        returnValue = F("Oerkuser Hof");
        break;
    }
    case 240661:
    {
        returnValue = F("Oerlenbacher Str.");
        break;
    }
    case 240662:
    {
        returnValue = F("Oerlinghauser Str.");
        break;
    }
    case 240663:
    {
        returnValue = F("Oerlsdorfer Str.");
        break;
    }
    case 240664:
    {
        returnValue = F("Oermter Kirchweg");
        break;
    }
    case 240665:
    {
        returnValue = F("Oermter Weg");
        break;
    }
    case 240666:
    {
        returnValue = F("Oerreler Dorfstr.");
        break;
    }
    case 240667:
    {
        returnValue = F("Oerreler Str.");
        break;
    }
    case 240668:
    {
        returnValue = F("Oerreler Weg");
        break;
    }
    case 240669:
    {
        returnValue = F("Oerschbachstr.");
        break;
    }
    case 240670:
    {
        returnValue = F("Oersdorfer Stieg");
        break;
    }
    case 240671:
    {
        returnValue = F("Oersdorfer Str.");
        break;
    }
    case 240672:
    {
        returnValue = F("Oersdorfer Weg");
        break;
    }
    case 240673:
    {
        returnValue = F("Oershäuser Str.");
        break;
    }
    case 240674:
    {
        returnValue = F("Oerstedstr.");
        break;
    }
    case 240675:
    {
        returnValue = F("Oerstr.");
        break;
    }
    case 240676:
    {
        returnValue = F("Oertberg");
        break;
    }
    case 240677:
    {
        returnValue = F("Oertbühlring");
        break;
    }
    case 240678:
    {
        returnValue = F("Oertbühlstr.");
        break;
    }
    case 240679:
    {
        returnValue = F("Oertelbergstr.");
        break;
    }
    case 240680:
    {
        returnValue = F("Oertelplatz");
        break;
    }
    case 240681:
    {
        returnValue = F("Oertelsberg");
        break;
    }
    case 240682:
    {
        returnValue = F("Oertelshainer Str.");
        break;
    }
    case 240683:
    {
        returnValue = F("Oertelstr.");
        break;
    }
    case 240684:
    {
        returnValue = F("Oertelufer");
        break;
    }
    case 240685:
    {
        returnValue = F("Oertelweg");
        break;
    }
    case 240686:
    {
        returnValue = F("Oerter Pütt");
        break;
    }
    case 240687:
    {
        returnValue = F("Oertgering");
        break;
    }
    case 240688:
    {
        returnValue = F("Oerthweg");
        break;
    }
    case 240689:
    {
        returnValue = F("Oertlinweg");
        break;
    }
    case 240690:
    {
        returnValue = F("Oertrief");
        break;
    }
    case 240691:
    {
        returnValue = F("Oertzenhof");
        break;
    }
    case 240692:
    {
        returnValue = F("Oertzeweg");
        break;
    }
    case 240693:
    {
        returnValue = F("Oerweg");
        break;
    }
    case 240694:
    {
        returnValue = F("Oerzer Str.");
        break;
    }
    case 240695:
    {
        returnValue = F("Oerzer Weg");
        break;
    }
    case 240696:
    {
        returnValue = F("Oesbachweg");
        break;
    }
    case 240697:
    {
        returnValue = F("Oesbergstr.");
        break;
    }
    case 240698:
    {
        returnValue = F("Oeschberg");
        break;
    }
    case 240699:
    {
        returnValue = F("Oeschlestr.");
        break;
    }
    case 240700:
    {
        returnValue = F("Oeschleweg");
        break;
    }
    case 240701:
    {
        returnValue = F("Oeschländerweg");
        break;
    }
    case 240702:
    {
        returnValue = F("Oeschweg");
        break;
    }
    case 240703:
    {
        returnValue = F("Oesdorfer Str.");
        break;
    }
    case 240704:
    {
        returnValue = F("Oeseder Feld");
        break;
    }
    case 240705:
    {
        returnValue = F("Oeseder Str.");
        break;
    }
    case 240706:
    {
        returnValue = F("Oesedum");
        break;
    }
    case 240707:
    {
        returnValue = F("Oeserstr.");
        break;
    }
    case 240708:
    {
        returnValue = F("Oesestr.");
        break;
    }
    case 240709:
    {
        returnValue = F("Oesfelder Str.");
        break;
    }
    case 240710:
    {
        returnValue = F("Oesfeldstr.");
        break;
    }
    case 240711:
    {
        returnValue = F("Oesgrundring");
        break;
    }
    case 240712:
    {
        returnValue = F("Oesigweg");
        break;
    }
    case 240713:
    {
        returnValue = F("Oesinger Str.");
        break;
    }
    case 240714:
    {
        returnValue = F("Oesinger Weg");
        break;
    }
    case 240715:
    {
        returnValue = F("Oeslauer Str.");
        break;
    }
    case 240716:
    {
        returnValue = F("Oesmecke");
        break;
    }
    case 240717:
    {
        returnValue = F("Oespeler Dorfstr.");
        break;
    }
    case 240718:
    {
        returnValue = F("Oespeler Kirchweg");
        break;
    }
    case 240719:
    {
        returnValue = F("Oesselmannstr.");
        break;
    }
    case 240720:
    {
        returnValue = F("Oesselser Str.");
        break;
    }
    case 240721:
    {
        returnValue = F("Oester");
        break;
    }
    case 240722:
    {
        returnValue = F("Oesterberg");
        break;
    }
    case 240723:
    {
        returnValue = F("Oesterbornbreite");
        break;
    }
    case 240724:
    {
        returnValue = F("Oesterborstelstr.");
        break;
    }
    case 240725:
    {
        returnValue = F("Oesterdeich");
        break;
    }
    case 240726:
    {
        returnValue = F("Oesterdieken");
        break;
    }
    case 240727:
    {
        returnValue = F("Oesterecke");
        break;
    }
    case 240728:
    {
        returnValue = F("Oesterende");
        break;
    }
    case 240729:
    {
        returnValue = F("Oesterfeld");
        break;
    }
    case 240730:
    {
        returnValue = F("Oesterfeldweg");
        break;
    }
    case 240731:
    {
        returnValue = F("Oestergaard");
        break;
    }
    case 240732:
    {
        returnValue = F("Oesterhausstr.");
        break;
    }
    case 240733:
    {
        returnValue = F("Oesterhausweg");
        break;
    }
    case 240734:
    {
        returnValue = F("Oesterhege");
        break;
    }
    case 240735:
    {
        returnValue = F("Oesterheide");
        break;
    }
    case 240736:
    {
        returnValue = F("Oesterheidestr.");
        break;
    }
    case 240737:
    {
        returnValue = F("Oesterheltbücke");
        break;
    }
    case 240738:
    {
        returnValue = F("Oesterhelwegstr.");
        break;
    }
    case 240739:
    {
        returnValue = F("Oesterholzstr.");
        break;
    }
    case 240740:
    {
        returnValue = F("Oesterkoppel");
        break;
    }
    case 240741:
    {
        returnValue = F("Oesterleyplatz (Pétanque)");
        break;
    }
    case 240742:
    {
        returnValue = F("Oesterleystr.");
        break;
    }
    case 240743:
    {
        returnValue = F("Oesterlingweg");
        break;
    }
    case 240744:
    {
        returnValue = F("Oestermannstr.");
        break;
    }
    case 240745:
    {
        returnValue = F("Oestermärsch");
        break;
    }
    case 240746:
    {
        returnValue = F("Oesternforth");
        break;
    }
    case 240747:
    {
        returnValue = F("Oesternforth-West");
        break;
    }
    case 240748:
    {
        returnValue = F("Oesternstr.");
        break;
    }
    case 240749:
    {
        returnValue = F("Oesterntor");
        break;
    }
    case 240750:
    {
        returnValue = F("Oesterreicherstr.");
        break;
    }
    case 240751:
    {
        returnValue = F("Oesterriedstr.");
        break;
    }
    case 240752:
    {
        returnValue = F("Oesterröden");
        break;
    }
    case 240753:
    {
        returnValue = F("Oesterstr.");
        break;
    }
    case 240754:
    {
        returnValue = F("Oestertalstr.");
        break;
    }
    case 240755:
    {
        returnValue = F("Oestervenn");
        break;
    }
    case 240756:
    {
        returnValue = F("Oesterweg");
        break;
    }
    case 240757:
    {
        returnValue = F("Oesterweger Str.");
        break;
    }
    case 240758:
    {
        returnValue = F("Oesterwindweg");
        break;
    }
    case 240759:
    {
        returnValue = F("Oesteröda");
        break;
    }
    case 240760:
    {
        returnValue = F("Oestinger Weg");
        break;
    }
    case 240761:
    {
        returnValue = F("Oestinghausener Str.");
        break;
    }
    case 240762:
    {
        returnValue = F("Oestinghauser Landstr.");
        break;
    }
    case 240763:
    {
        returnValue = F("Oestinghauser Str.");
        break;
    }
    case 240764:
    {
        returnValue = F("Oestingstr.");
        break;
    }
    case 240765:
    {
        returnValue = F("Oestlestr.");
        break;
    }
    case 240766:
    {
        returnValue = F("Oestlingstalweg");
        break;
    }
    case 240767:
    {
        returnValue = F("Oestlingsweg");
        break;
    }
    case 240768:
    {
        returnValue = F("Oestmannstr.");
        break;
    }
    case 240769:
    {
        returnValue = F("Oestmannsweg");
        break;
    }
    case 240770:
    {
        returnValue = F("Oestreichstr.");
        break;
    }
    case 240771:
    {
        returnValue = F("Oestricher Maar");
        break;
    }
    case 240772:
    {
        returnValue = F("Oestricher Str.");
        break;
    }
    case 240773:
    {
        returnValue = F("Oestricher Weg");
        break;
    }
    case 240774:
    {
        returnValue = F("Oestringer Str.");
        break;
    }
    case 240775:
    {
        returnValue = F("Oestringer Weg");
        break;
    }
    case 240776:
    {
        returnValue = F("Oestrumer Str.");
        break;
    }
    case 240777:
    {
        returnValue = F("Oeststr.");
        break;
    }
    case 240778:
    {
        returnValue = F("Oetelsbachstr.");
        break;
    }
    case 240779:
    {
        returnValue = F("Oetenhauser Str.");
        break;
    }
    case 240780:
    {
        returnValue = F("Oetingerstr.");
        break;
    }
    case 240781:
    {
        returnValue = F("Oetinghauser Kirchweg");
        break;
    }
    case 240782:
    {
        returnValue = F("Oetinghauser Str.");
        break;
    }
    case 240783:
    {
        returnValue = F("Oetinghauser Weg");
        break;
    }
    case 240784:
    {
        returnValue = F("Oetjendorfer Kirchenweg");
        break;
    }
    case 240785:
    {
        returnValue = F("Oetjendorfer Landstr.");
        break;
    }
    case 240786:
    {
        returnValue = F("Oetjendorfer Weg");
        break;
    }
    case 240787:
    {
        returnValue = F("Oetkerstr.");
        break;
    }
    case 240788:
    {
        returnValue = F("Oetlinger Weg");
        break;
    }
    case 240789:
    {
        returnValue = F("Oetringhauser Str.");
        break;
    }
    case 240790:
    {
        returnValue = F("Oetteliner Weg");
        break;
    }
    case 240791:
    {
        returnValue = F("Oettelsweg");
        break;
    }
    case 240792:
    {
        returnValue = F("Oetternbachstr.");
        break;
    }
    case 240793:
    {
        returnValue = F("Oetternberg");
        break;
    }
    case 240794:
    {
        returnValue = F("Oetternstr.");
        break;
    }
    case 240795:
    {
        returnValue = F("Oettersdorfer Str.");
        break;
    }
    case 240796:
    {
        returnValue = F("Oetterstal");
        break;
    }
    case 240797:
    {
        returnValue = F("Oetterstaler Str.");
        break;
    }
    case 240798:
    {
        returnValue = F("Oettingen-Wallerstein-Str.");
        break;
    }
    case 240799:
    {
        returnValue = F("Oettingenstr.");
        break;
    }
    case 240800:
    {
        returnValue = F("Oettinger Str.");
        break;
    }
    case 240801:
    {
        returnValue = F("Oettinger Weg");
        break;
    }
    case 240802:
    {
        returnValue = F("Oettingerstr.");
        break;
    }
    case 240803:
    {
        returnValue = F("Oettingshäuser Str.");
        break;
    }
    case 240804:
    {
        returnValue = F("Oettingshäuser Weg");
        break;
    }
    case 240805:
    {
        returnValue = F("Oettl-Weg");
        break;
    }
    case 240806:
    {
        returnValue = F("Oettlerstr.");
        break;
    }
    case 240807:
    {
        returnValue = F("Oettlstr.");
        break;
    }
    case 240808:
    {
        returnValue = F("Oetwiler Str.");
        break;
    }
    case 240809:
    {
        returnValue = F("Oetwiler Weg");
        break;
    }
    case 240810:
    {
        returnValue = F("Oetz");
        break;
    }
    case 240811:
    {
        returnValue = F("Oetz-Geräumt");
        break;
    }
    case 240812:
    {
        returnValue = F("Oetzelsweg");
        break;
    }
    case 240813:
    {
        returnValue = F("Oetzendorf");
        break;
    }
    case 240814:
    {
        returnValue = F("Oetzendorfer Weg");
        break;
    }
    case 240815:
    {
        returnValue = F("Oetzener Str.");
        break;
    }
    case 240816:
    {
        returnValue = F("Oetzer Str.");
        break;
    }
    case 240817:
    {
        returnValue = F("Oetzer Weg");
        break;
    }
    case 240818:
    {
        returnValue = F("Oetzfelder Str.");
        break;
    }
    case 240819:
    {
        returnValue = F("Oetzschener Str.");
        break;
    }
    case 240820:
    {
        returnValue = F("Oetzscher Weg");
        break;
    }
    case 240821:
    {
        returnValue = F("Oetzstr.");
        break;
    }
    case 240822:
    {
        returnValue = F("Oetztaler Str.");
        break;
    }
    case 240823:
    {
        returnValue = F("Oevelgünde");
        break;
    }
    case 240824:
    {
        returnValue = F("Oevelgünne");
        break;
    }
    case 240825:
    {
        returnValue = F("Oevenscheider Stall");
        break;
    }
    case 240826:
    {
        returnValue = F("Oeventroper Str.");
        break;
    }
    case 240827:
    {
        returnValue = F("Oeverdieker Weg");
        break;
    }
    case 240828:
    {
        returnValue = F("Oevericher Str.");
        break;
    }
    case 240829:
    {
        returnValue = F("Oeveringer Feldweg");
        break;
    }
    case 240830:
    {
        returnValue = F("Oeveringer Str.");
        break;
    }
    case 240831:
    {
        returnValue = F("Oeversberg");
        break;
    }
    case 240832:
    {
        returnValue = F("Oeverseer Str.");
        break;
    }
    case 240833:
    {
        returnValue = F("Oeverseering");
        break;
    }
    case 240834:
    {
        returnValue = F("Oeverseestr.");
        break;
    }
    case 240835:
    {
        returnValue = F("Oeverwisch");
        break;
    }
    case 240836:
    {
        returnValue = F("Oevinghauser Pfad");
        break;
    }
    case 240837:
    {
        returnValue = F("Oewerweg");
        break;
    }
    case 240838:
    {
        returnValue = F("Oexen");
        break;
    }
    case 240839:
    {
        returnValue = F("Oexener Rottkamp");
        break;
    }
    case 240840:
    {
        returnValue = F("Oexener Str.");
        break;
    }
    case 240841:
    {
        returnValue = F("Oexer Wiesen");
        break;
    }
    case 240842:
    {
        returnValue = F("Oeynhausener Str.");
        break;
    }
    case 240843:
    {
        returnValue = F("Oeynhausenstr.");
        break;
    }
    case 240844:
    {
        returnValue = F("Oeynhauser Schweiz");
        break;
    }
    case 240845:
    {
        returnValue = F("Oeynhauser Str.");
        break;
    }
    case 240846:
    {
        returnValue = F("Oeynhauser Weg");
        break;
    }
    case 240847:
    {
        returnValue = F("Ofdener Gracht");
        break;
    }
    case 240848:
    {
        returnValue = F("Ofeld");
        break;
    }
    case 240849:
    {
        returnValue = F("Ofeldblick");
        break;
    }
    case 240850:
    {
        returnValue = F("Ofen");
        break;
    }
    case 240851:
    {
        returnValue = F("Ofenackerstr.");
        break;
    }
    case 240852:
    {
        returnValue = F("Ofenbank");
        break;
    }
    case 240853:
    {
        returnValue = F("Ofenbauerstr.");
        break;
    }
    case 240854:
    {
        returnValue = F("Ofenbergstr.");
        break;
    }
    case 240855:
    {
        returnValue = F("Ofenbergweg");
        break;
    }
    case 240856:
    {
        returnValue = F("Ofener Bergland");
        break;
    }
    case 240857:
    {
        returnValue = F("Ofener Str.");
        break;
    }
    case 240858:
    {
        returnValue = F("Ofener Weg");
        break;
    }
    case 240859:
    {
        returnValue = F("Ofenerdieker Str.");
        break;
    }
    case 240860:
    {
        returnValue = F("Ofenerfelder Ring");
        break;
    }
    case 240861:
    {
        returnValue = F("Ofenerfelder Str.");
        break;
    }
    case 240862:
    {
        returnValue = F("Ofenfeld");
        break;
    }
    case 240863:
    {
        returnValue = F("Ofengasse");
        break;
    }
    case 240864:
    {
        returnValue = F("Ofenküche");
        break;
    }
    case 240865:
    {
        returnValue = F("Ofenlainweg");
        break;
    }
    case 240866:
    {
        returnValue = F("Ofenloch");
        break;
    }
    case 240867:
    {
        returnValue = F("Ofenlocher Weg");
        break;
    }
    case 240868:
    {
        returnValue = F("Ofenskaul");
        break;
    }
    case 240869:
    {
        returnValue = F("Ofenstr.");
        break;
    }
    case 240870:
    {
        returnValue = F("Ofental");
        break;
    }
    case 240871:
    {
        returnValue = F("Ofenthaler Weg");
        break;
    }
    case 240872:
    {
        returnValue = F("Ofenwiesen");
        break;
    }
    case 240873:
    {
        returnValue = F("Ofenäcker");
        break;
    }
    case 240874:
    {
        returnValue = F("Ofenäckerweg");
        break;
    }
    case 240875:
    {
        returnValue = F("Oferdinger Str.");
        break;
    }
    case 240876:
    {
        returnValue = F("Off Road");
        break;
    }
    case 240877:
    {
        returnValue = F("Offdillner Str.");
        break;
    }
    case 240878:
    {
        returnValue = F("Offelter Dorfstr.");
        break;
    }
    case 240879:
    {
        returnValue = F("Offelter Weg");
        break;
    }
    case 240880:
    {
        returnValue = F("Offenau");
        break;
    }
    case 240881:
    {
        returnValue = F("Offenauer Str.");
        break;
    }
    case 240882:
    {
        returnValue = F("Offenauer Weg");
        break;
    }
    case 240883:
    {
        returnValue = F("Offenbach");
        break;
    }
    case 240884:
    {
        returnValue = F("Offenbach Weg");
        break;
    }
    case 240885:
    {
        returnValue = F("Offenbacher Landstr.");
        break;
    }
    case 240886:
    {
        returnValue = F("Offenbacher Str.");
        break;
    }
    case 240887:
    {
        returnValue = F("Offenbacher Weg");
        break;
    }
    case 240888:
    {
        returnValue = F("Offenbacher Wegschneise");
        break;
    }
    case 240889:
    {
        returnValue = F("Offenbachplatz");
        break;
    }
    case 240890:
    {
        returnValue = F("Offenbachstr.");
        break;
    }
    case 240891:
    {
        returnValue = F("Offenbachweg");
        break;
    }
    case 240892:
    {
        returnValue = F("Offenbau");
        break;
    }
    case 240893:
    {
        returnValue = F("Offenbergstr.");
        break;
    }
    case 240894:
    {
        returnValue = F("Offenbornstr.");
        break;
    }
    case 240895:
    {
        returnValue = F("Offenburger Allee");
        break;
    }
    case 240896:
    {
        returnValue = F("Offenburger Staffel");
        break;
    }
    case 240897:
    {
        returnValue = F("Offenburger Str.");
        break;
    }
    case 240898:
    {
        returnValue = F("Offenburger Weg");
        break;
    }
    case 240899:
    {
        returnValue = F("Offenbühl");
        break;
    }
    case 240900:
    {
        returnValue = F("Offendeicher Weg");
        break;
    }
    case 240901:
    {
        returnValue = F("Offendorfer Str.");
        break;
    }
    case 240902:
    {
        returnValue = F("Offene Gasse");
        break;
    }
    case 240903:
    {
        returnValue = F("Offener Heuweg");
        break;
    }
    case 240904:
    {
        returnValue = F("Offener Str.");
        break;
    }
    case 240905:
    {
        returnValue = F("Offenhainer Str.");
        break;
    }
    case 240906:
    {
        returnValue = F("Offenhauser Str.");
        break;
    }
    case 240907:
    {
        returnValue = F("Offenheimer Str.");
        break;
    }
    case 240908:
    {
        returnValue = F("Offenheimerstr.");
        break;
    }
    case 240909:
    {
        returnValue = F("Offenhäuser Weg");
        break;
    }
    case 240910:
    {
        returnValue = F("Offensberg");
        break;
    }
    case 240911:
    {
        returnValue = F("Offensener Str.");
        break;
    }
    case 240912:
    {
        returnValue = F("Offenser Grund");
        break;
    }
    case 240913:
    {
        returnValue = F("Offenser Str.");
        break;
    }
    case 240914:
    {
        returnValue = F("Offenser Weg");
        break;
    }
    case 240915:
    {
        returnValue = F("Offenstallweg");
        break;
    }
    case 240916:
    {
        returnValue = F("Offensteinstr.");
        break;
    }
    case 240917:
    {
        returnValue = F("Offentalstr.");
        break;
    }
    case 240918:
    {
        returnValue = F("Offenthaler Landstr.");
        break;
    }
    case 240919:
    {
        returnValue = F("Offenthaler Schneise");
        break;
    }
    case 240920:
    {
        returnValue = F("Offenthaler Str.");
        break;
    }
    case 240921:
    {
        returnValue = F("Offenthaler Viehtrieb");
        break;
    }
    case 240922:
    {
        returnValue = F("Offenthaler Weg");
        break;
    }
    case 240923:
    {
        returnValue = F("Offenwarder Str.");
        break;
    }
    case 240924:
    {
        returnValue = F("Offerbachstr.");
        break;
    }
    case 240925:
    {
        returnValue = F("Offerbusch");
        break;
    }
    case 240926:
    {
        returnValue = F("Offerhausweg");
        break;
    }
    case 240927:
    {
        returnValue = F("Offerkampweg");
        break;
    }
    case 240928:
    {
        returnValue = F("Offerkämpe");
        break;
    }
    case 240929:
    {
        returnValue = F("Offermanns Wiese");
        break;
    }
    case 240930:
    {
        returnValue = F("Offermannsberg");
        break;
    }
    case 240931:
    {
        returnValue = F("Offermannsheider Str.");
        break;
    }
    case 240932:
    {
        returnValue = F("Offermannsstr.");
        break;
    }
    case 240933:
    {
        returnValue = F("Offermannstr.");
        break;
    }
    case 240934:
    {
        returnValue = F("Offers Wech");
        break;
    }
    case 240935:
    {
        returnValue = F("Offerstr.");
        break;
    }
    case 240936:
    {
        returnValue = F("Offerweg");
        break;
    }
    case 240937:
    {
        returnValue = F("Offheimer Str.");
        break;
    }
    case 240938:
    {
        returnValue = F("Offheimer Weg");
        break;
    }
    case 240939:
    {
        returnValue = F("Offhäuser Weg");
        break;
    }
    case 240940:
    {
        returnValue = F("Offinger Schulstr.");
        break;
    }
    case 240941:
    {
        returnValue = F("Offinger Str.");
        break;
    }
    case 240942:
    {
        returnValue = F("Offizial-Schmid-Str.");
        break;
    }
    case 240943:
    {
        returnValue = F("Offlebener Str.");
        break;
    }
    case 240944:
    {
        returnValue = F("Offleber Str.");
        break;
    }
    case 240945:
    {
        returnValue = F("Offlum");
        break;
    }
    case 240946:
    {
        returnValue = F("Offlumer Str.");
        break;
    }
    case 240947:
    {
        returnValue = F("Offnadinger Str.");
        break;
    }
    case 240948:
    {
        returnValue = F("Offnadinger Weg");
        break;
    }
    case 240949:
    {
        returnValue = F("Offostr.");
        break;
    }
    case 240950:
    {
        returnValue = F("Offroad-Fahrgelände");
        break;
    }
    case 240951:
    {
        returnValue = F("Offroadpark Magdeburg");
        break;
    }
    case 240952:
    {
        returnValue = F("Offsteiner Ruh");
        break;
    }
    case 240953:
    {
        returnValue = F("Offsteiner Str.");
        break;
    }
    case 240954:
    {
        returnValue = F("Offsteiner Weg");
        break;
    }
    case 240955:
    {
        returnValue = F("Offäcker");
        break;
    }
    case 240956:
    {
        returnValue = F("Oflingser Weg");
        break;
    }
    case 240957:
    {
        returnValue = F("Ofm. Weiß-Str.");
        break;
    }
    case 240958:
    {
        returnValue = F("Ofnetstr.");
        break;
    }
    case 240959:
    {
        returnValue = F("Ofterdingenstr.");
        break;
    }
    case 240960:
    {
        returnValue = F("Ofterdinger Str.");
        break;
    }
    case 240961:
    {
        returnValue = F("Ofteringer Str.");
        break;
    }
    case 240962:
    {
        returnValue = F("Oftersheimer Landstr.");
        break;
    }
    case 240963:
    {
        returnValue = F("Oftersheimer Str.");
        break;
    }
    case 240964:
    {
        returnValue = F("Oftersheimer Weg");
        break;
    }
    case 240965:
    {
        returnValue = F("Oftlfinger Str.");
        break;
    }
    case 240966:
    {
        returnValue = F("Ogelweg");
        break;
    }
    case 240967:
    {
        returnValue = F("Ogenbarger Dorfweg");
        break;
    }
    case 240968:
    {
        returnValue = F("Ogenbarger Kirchstr.");
        break;
    }
    case 240969:
    {
        returnValue = F("Oger Weg");
        break;
    }
    case 240970:
    {
        returnValue = F("Oggelsbeurer Str.");
        break;
    }
    case 240971:
    {
        returnValue = F("Oggelshauser Str.");
        break;
    }
    case 240972:
    {
        returnValue = F("Oggelshauser Weg");
        break;
    }
    case 240973:
    {
        returnValue = F("Oggenhauser Hauptstr.");
        break;
    }
    case 240974:
    {
        returnValue = F("Oggenhauser Str.");
        break;
    }
    case 240975:
    {
        returnValue = F("Oggenrieder Weg");
        break;
    }
    case 240976:
    {
        returnValue = F("Oggersheimer Str.");
        break;
    }
    case 240977:
    {
        returnValue = F("Oggetal");
        break;
    }
    case 240978:
    {
        returnValue = F("Oha");
        break;
    }
    case 240979:
    {
        returnValue = F("Ohagenstr.");
        break;
    }
    case 240980:
    {
        returnValue = F("Ohausener Str.");
        break;
    }
    case 240981:
    {
        returnValue = F("Ohbaumsfeld");
        break;
    }
    case 240982:
    {
        returnValue = F("Ohe");
        break;
    }
    case 240983:
    {
        returnValue = F("Ohe-Weg");
        break;
    }
    case 240984:
    {
        returnValue = F("Ohebergstr.");
        break;
    }
    case 240985:
    {
        returnValue = F("Oheblick");
        break;
    }
    case 240986:
    {
        returnValue = F("Ohebruchstr.");
        break;
    }
    case 240987:
    {
        returnValue = F("Ohebrücke");
        break;
    }
    case 240988:
    {
        returnValue = F("Ohechaussee");
        break;
    }
    case 240989:
    {
        returnValue = F("Ohedamm");
        break;
    }
    case 240990:
    {
        returnValue = F("Ohedammweg");
        break;
    }
    case 240991:
    {
        returnValue = F("Ohefeld");
        break;
    }
    case 240992:
    {
        returnValue = F("Ohefeldweg");
        break;
    }
    case 240993:
    {
        returnValue = F("Ohekamp");
        break;
    }
    case 240994:
    {
        returnValue = F("Oheleiten");
        break;
    }
    case 240995:
    {
        returnValue = F("Ohepark");
        break;
    }
    case 240996:
    {
        returnValue = F("Oher Str.");
        break;
    }
    case 240997:
    {
        returnValue = F("Oher Tannen");
        break;
    }
    case 240998:
    {
        returnValue = F("Oher Weg");
        break;
    }
    case 240999:
    {
        returnValue = F("Oher-Weg-Brücke");
        break;
    }
    case 241000:
    {
        returnValue = F("Oheriedenpark");
        break;
    }
    case 241001:
    {
        returnValue = F("Oheriedentrift");
        break;
    }
    case 241002:
    {
        returnValue = F("Ohering");
        break;
    }
    case 241003:
    {
        returnValue = F("Ohestr.");
        break;
    }
    case 241004:
    {
        returnValue = F("Ohetal");
        break;
    }
    case 241005:
    {
        returnValue = F("Ohetalradweg");
        break;
    }
    case 241006:
    {
        returnValue = F("Ohetalstr.");
        break;
    }
    case 241007:
    {
        returnValue = F("Ohetwiete");
        break;
    }
    case 241008:
    {
        returnValue = F("Oheweg");
        break;
    }
    case 241009:
    {
        returnValue = F("Ohewiesen");
        break;
    }
    case 241010:
    {
        returnValue = F("Ohfeldring");
        break;
    }
    case 241011:
    {
        returnValue = F("Ohfeldstr.");
        break;
    }
    case 241012:
    {
        returnValue = F("Ohfeldtweg");
        break;
    }
    case 241013:
    {
        returnValue = F("Ohfeldweg");
        break;
    }
    case 241014:
    {
        returnValue = F("Ohgangsweg");
        break;
    }
    case 241015:
    {
        returnValue = F("Ohiostr.");
        break;
    }
    case 241016:
    {
        returnValue = F("Ohkamp");
        break;
    }
    case 241017:
    {
        returnValue = F("Ohl");
        break;
    }
    case 241018:
    {
        returnValue = F("Ohl Koppel");
        break;
    }
    case 241019:
    {
        returnValue = F("Ohl Lühr");
        break;
    }
    case 241020:
    {
        returnValue = F("Ohl-Dörp");
        break;
    }
    case 241021:
    {
        returnValue = F("Ohlacker");
        break;
    }
    case 241022:
    {
        returnValue = F("Ohland");
        break;
    }
    case 241023:
    {
        returnValue = F("Ohlandbogen");
        break;
    }
    case 241024:
    {
        returnValue = F("Ohlanden");
        break;
    }
    case 241025:
    {
        returnValue = F("Ohlandgasse");
        break;
    }
    case 241026:
    {
        returnValue = F("Ohlandstr.");
        break;
    }
    case 241027:
    {
        returnValue = F("Ohlangen");
        break;
    }
    case 241028:
    {
        returnValue = F("Ohlangener Str.");
        break;
    }
    case 241029:
    {
        returnValue = F("Ohlanger Str.");
        break;
    }
    case 241030:
    {
        returnValue = F("Ohlauer Str.");
        break;
    }
    case 241031:
    {
        returnValue = F("Ohlauer Weg");
        break;
    }
    case 241032:
    {
        returnValue = F("Ohlaustieg");
        break;
    }
    case 241033:
    {
        returnValue = F("Ohlaustr.");
        break;
    }
    case 241034:
    {
        returnValue = F("Ohlbachweg");
        break;
    }
    case 241035:
    {
        returnValue = F("Ohlberg");
        break;
    }
    case 241036:
    {
        returnValue = F("Ohlbergstr.");
        break;
    }
    case 241037:
    {
        returnValue = F("Ohlbrocksweg");
        break;
    }
    case 241038:
    {
        returnValue = F("Ohlbühlerstr.");
        break;
    }
    case 241039:
    {
        returnValue = F("Ohldieksholt");
        break;
    }
    case 241040:
    {
        returnValue = F("Ohldorpsweg");
        break;
    }
    case 241041:
    {
        returnValue = F("Ohldörp");
        break;
    }
    case 241042:
    {
        returnValue = F("Ohle Drift");
        break;
    }
    case 241043:
    {
        returnValue = F("Ohle Kamp");
        break;
    }
    case 241044:
    {
        returnValue = F("Ohle Ring");
        break;
    }
    case 241045:
    {
        returnValue = F("Ohlebergsweg");
        break;
    }
    case 241046:
    {
        returnValue = F("Ohlegasse");
        break;
    }
    case 241047:
    {
        returnValue = F("Ohlei");
        break;
    }
    case 241048:
    {
        returnValue = F("Ohlekamp");
        break;
    }
    case 241049:
    {
        returnValue = F("Ohlen Brook");
        break;
    }
    case 241050:
    {
        returnValue = F("Ohlen Fladen");
        break;
    }
    case 241051:
    {
        returnValue = F("Ohlen Inn");
        break;
    }
    case 241052:
    {
        returnValue = F("Ohlen Kamp");
        break;
    }
    case 241053:
    {
        returnValue = F("Ohlen-Dieks-Weg");
        break;
    }
    case 241054:
    {
        returnValue = F("Ohlenberger Weg");
        break;
    }
    case 241055:
    {
        returnValue = F("Ohlenbergschneise");
        break;
    }
    case 241056:
    {
        returnValue = F("Ohlenbergweg");
        break;
    }
    case 241057:
    {
        returnValue = F("Ohlenborger Redder");
        break;
    }
    case 241058:
    {
        returnValue = F("Ohlenbuschweg");
        break;
    }
    case 241059:
    {
        returnValue = F("Ohlenbütteler Stadtweg");
        break;
    }
    case 241060:
    {
        returnValue = F("Ohlenbütteler Str.");
        break;
    }
    case 241061:
    {
        returnValue = F("Ohlendamm");
        break;
    }
    case 241062:
    {
        returnValue = F("Ohlendiek");
        break;
    }
    case 241063:
    {
        returnValue = F("Ohlendorf");
        break;
    }
    case 241064:
    {
        returnValue = F("Ohlendorfer Stieg");
        break;
    }
    case 241065:
    {
        returnValue = F("Ohlendorfer Str.");
        break;
    }
    case 241066:
    {
        returnValue = F("Ohlendorfer Weg");
        break;
    }
    case 241067:
    {
        returnValue = F("Ohlendorfweg");
        break;
    }
    case 241068:
    {
        returnValue = F("Ohlendörp");
        break;
    }
    case 241069:
    {
        returnValue = F("Ohlendörpsweg");
        break;
    }
    case 241070:
    {
        returnValue = F("Ohlenfeldstr.");
        break;
    }
    case 241071:
    {
        returnValue = F("Ohlengarten");
        break;
    }
    case 241072:
    {
        returnValue = F("Ohlengasse");
        break;
    }
    case 241073:
    {
        returnValue = F("Ohlengäßchen");
        break;
    }
    case 241074:
    {
        returnValue = F("Ohlenhardt");
        break;
    }
    case 241075:
    {
        returnValue = F("Ohlenhof");
        break;
    }
    case 241076:
    {
        returnValue = F("Ohlenhoff");
        break;
    }
    case 241077:
    {
        returnValue = F("Ohlenhofstr.");
        break;
    }
    case 241078:
    {
        returnValue = F("Ohlenhohnstr.");
        break;
    }
    case 241079:
    {
        returnValue = F("Ohlenhorstkamp");
        break;
    }
    case 241080:
    {
        returnValue = F("Ohlenkamp");
        break;
    }
    case 241081:
    {
        returnValue = F("Ohlenkopfstr.");
        break;
    }
    case 241082:
    {
        returnValue = F("Ohlenlandestr.");
        break;
    }
    case 241083:
    {
        returnValue = F("Ohlenredder");
        break;
    }
    case 241084:
    {
        returnValue = F("Ohlenrod");
        break;
    }
    case 241085:
    {
        returnValue = F("Ohlenroder Str.");
        break;
    }
    case 241086:
    {
        returnValue = F("Ohlenstedter Str.");
        break;
    }
    case 241087:
    {
        returnValue = F("Ohlenstr.");
        break;
    }
    case 241088:
    {
        returnValue = F("Ohlenstücken");
        break;
    }
    case 241089:
    {
        returnValue = F("Ohler Berg");
        break;
    }
    case 241090:
    {
        returnValue = F("Ohler Str.");
        break;
    }
    case 241091:
    {
        returnValue = F("Ohler Weg");
        break;
    }
    case 241092:
    {
        returnValue = F("Ohler Wiesen");
        break;
    }
    case 241093:
    {
        returnValue = F("Ohlerfeldstr.");
        break;
    }
    case 241094:
    {
        returnValue = F("Ohlerhammer");
        break;
    }
    case 241095:
    {
        returnValue = F("Ohlerhof");
        break;
    }
    case 241096:
    {
        returnValue = F("Ohlerkirchweg");
        break;
    }
    case 241097:
    {
        returnValue = F("Ohlertstr.");
        break;
    }
    case 241098:
    {
        returnValue = F("Ohlerweg");
        break;
    }
    case 241099:
    {
        returnValue = F("Ohlesweg");
        break;
    }
    case 241100:
    {
        returnValue = F("Ohlfeld");
        break;
    }
    case 241101:
    {
        returnValue = F("Ohlfeldweg");
        break;
    }
    case 241102:
    {
        returnValue = F("Ohlgasse");
        break;
    }
    case 241103:
    {
        returnValue = F("Ohlhagen-Steinweg");
        break;
    }
    case 241104:
    {
        returnValue = F("Ohlhagener Str.");
        break;
    }
    case 241105:
    {
        returnValue = F("Ohlhofbreite");
        break;
    }
    case 241106:
    {
        returnValue = F("Ohlhoffs Hof");
        break;
    }
    case 241107:
    {
        returnValue = F("Ohlhoffsweg");
        break;
    }
    case 241108:
    {
        returnValue = F("Ohlhorststr.");
        break;
    }
    case 241109:
    {
        returnValue = F("Ohlhäger Moor");
        break;
    }
    case 241110:
    {
        returnValue = F("Ohliger Tor");
        break;
    }
    case 241111:
    {
        returnValue = F("Ohliggasse");
        break;
    }
    case 241112:
    {
        returnValue = F("Ohligmühle");
        break;
    }
    case 241113:
    {
        returnValue = F("Ohligsborn");
        break;
    }
    case 241114:
    {
        returnValue = F("Ohligsdeich");
        break;
    }
    case 241115:
    {
        returnValue = F("Ohligser Feld");
        break;
    }
    case 241116:
    {
        returnValue = F("Ohligser Schützenplatz");
        break;
    }
    case 241117:
    {
        returnValue = F("Ohligser Stadtpark");
        break;
    }
    case 241118:
    {
        returnValue = F("Ohligser Str.");
        break;
    }
    case 241119:
    {
        returnValue = F("Ohligser Weg");
        break;
    }
    case 241120:
    {
        returnValue = F("Ohligsköpfchen");
        break;
    }
    case 241121:
    {
        returnValue = F("Ohligsmühle");
        break;
    }
    case 241122:
    {
        returnValue = F("Ohligstr.");
        break;
    }
    case 241123:
    {
        returnValue = F("Ohligsweg");
        break;
    }
    case 241124:
    {
        returnValue = F("Ohlingslohne");
        break;
    }
    case 241125:
    {
        returnValue = F("Ohlkasterhohl");
        break;
    }
    case 241126:
    {
        returnValue = F("Ohlkenbergsweg");
        break;
    }
    case 241127:
    {
        returnValue = F("Ohlkoppel");
        break;
    }
    case 241128:
    {
        returnValue = F("Ohllegen");
        break;
    }
    case 241129:
    {
        returnValue = F("Ohlmannstr.");
        break;
    }
    case 241130:
    {
        returnValue = F("Ohlmöhlenweg");
        break;
    }
    case 241131:
    {
        returnValue = F("Ohlmüllerstr.");
        break;
    }
    case 241132:
    {
        returnValue = F("Ohlrade");
        break;
    }
    case 241133:
    {
        returnValue = F("Ohlrattweg");
        break;
    }
    case 241134:
    {
        returnValue = F("Ohlsbachstr.");
        break;
    }
    case 241135:
    {
        returnValue = F("Ohlsche");
        break;
    }
    case 241136:
    {
        returnValue = F("Ohlstedter Str.");
        break;
    }
    case 241137:
    {
        returnValue = F("Ohlstr.");
        break;
    }
    case 241138:
    {
        returnValue = F("Ohlsweg");
        break;
    }
    case 241139:
    {
        returnValue = F("Ohlthaverstr.");
        break;
    }
    case 241140:
    {
        returnValue = F("Ohlumer Str.");
        break;
    }
    case 241141:
    {
        returnValue = F("Ohlung");
        break;
    }
    case 241142:
    {
        returnValue = F("Ohlweg");
        break;
    }
    case 241143:
    {
        returnValue = F("Ohlwiese");
        break;
    }
    case 241144:
    {
        returnValue = F("Ohlwisch");
        break;
    }
    case 241145:
    {
        returnValue = F("Ohlwühren");
        break;
    }
    case 241146:
    {
        returnValue = F("Ohlystr.");
        break;
    }
    case 241147:
    {
        returnValue = F("Ohmannweg");
        break;
    }
    case 241148:
    {
        returnValue = F("Ohmayerstr.");
        break;
    }
    case 241149:
    {
        returnValue = F("Ohmbach");
        break;
    }
    case 241150:
    {
        returnValue = F("Ohmbacher Weg");
        break;
    }
    case 241151:
    {
        returnValue = F("Ohmbachsgasse");
        break;
    }
    case 241152:
    {
        returnValue = F("Ohmbachstr.");
        break;
    }
    case 241153:
    {
        returnValue = F("Ohmbergstr.");
        break;
    }
    case 241154:
    {
        returnValue = F("Ohmdbachweg");
        break;
    }
    case 241155:
    {
        returnValue = F("Ohmdener Str.");
        break;
    }
    case 241156:
    {
        returnValue = F("Ohmder Str.");
        break;
    }
    case 241157:
    {
        returnValue = F("Ohmenbergweg");
        break;
    }
    case 241158:
    {
        returnValue = F("Ohmenheim Siedlung");
        break;
    }
    case 241159:
    {
        returnValue = F("Ohmenheimer Str.");
        break;
    }
    case 241160:
    {
        returnValue = F("Ohmenheimer Weg");
        break;
    }
    case 241161:
    {
        returnValue = F("Ohmenhäuser Str.");
        break;
    }
    case 241162:
    {
        returnValue = F("Ohmentalstr.");
        break;
    }
    case 241163:
    {
        returnValue = F("Ohmeweg");
        break;
    }
    case 241164:
    {
        returnValue = F("Ohmeyers Damm");
        break;
    }
    case 241165:
    {
        returnValue = F("Ohmgasse");
        break;
    }
    case 241166:
    {
        returnValue = F("Ohmiger Str.");
        break;
    }
    case 241167:
    {
        returnValue = F("Ohmigskamp");
        break;
    }
    case 241168:
    {
        returnValue = F("Ohmishaldeweg");
        break;
    }
    case 241169:
    {
        returnValue = F("Ohmplatz");
        break;
    }
    case 241170:
    {
        returnValue = F("Ohms Weg");
        break;
    }
    case 241171:
    {
        returnValue = F("Ohmsmühle");
        break;
    }
    case 241172:
    {
        returnValue = F("Ohmsstiege");
        break;
    }
    case 241173:
    {
        returnValue = F("Ohmsteder Esch");
        break;
    }
    case 241174:
    {
        returnValue = F("Ohmsteg");
        break;
    }
    case 241175:
    {
        returnValue = F("Ohmstr.");
        break;
    }
    case 241176:
    {
        returnValue = F("Ohmtalhof");
        break;
    }
    case 241177:
    {
        returnValue = F("Ohmtalstr.");
        break;
    }
    case 241178:
    {
        returnValue = F("Ohmtalweg");
        break;
    }
    case 241179:
    {
        returnValue = F("Ohmweg");
        break;
    }
    case 241180:
    {
        returnValue = F("Ohnastetter Str.");
        break;
    }
    case 241181:
    {
        returnValue = F("Ohndorfer Str.");
        break;
    }
    case 241182:
    {
        returnValue = F("Ohndorfer Weg");
        break;
    }
    case 241183:
    {
        returnValue = F("Ohne Namen");
        break;
    }
    case 241184:
    {
        returnValue = F("Ohner Str.");
        break;
    }
    case 241185:
    {
        returnValue = F("Ohner Weg");
        break;
    }
    case 241186:
    {
        returnValue = F("Ohnesorgestr.");
        break;
    }
    case 241187:
    {
        returnValue = F("Ohnewende");
        break;
    }
    case 241188:
    {
        returnValue = F("Ohnewitz");
        break;
    }
    case 241189:
    {
        returnValue = F("Ohnholdstr.");
        break;
    }
    case 241190:
    {
        returnValue = F("Ohnhorstblick");
        break;
    }
    case 241191:
    {
        returnValue = F("Ohnhorster Weg");
        break;
    }
    case 241192:
    {
        returnValue = F("Ohnhülber Weg");
        break;
    }
    case 241193:
    {
        returnValue = F("Ohni");
        break;
    }
    case 241194:
    {
        returnValue = F("Ohnrastr.");
        break;
    }
    case 241195:
    {
        returnValue = F("Ohnreineweg");
        break;
    }
    case 241196:
    {
        returnValue = F("Ohnsanger Str.");
        break;
    }
    case 241197:
    {
        returnValue = F("Ohnsorgstr.");
        break;
    }
    case 241198:
    {
        returnValue = F("Ohof");
        break;
    }
    case 241199:
    {
        returnValue = F("Ohofer Weg");
        break;
    }
    case 241200:
    {
        returnValue = F("Oholz");
        break;
    }
    case 241201:
    {
        returnValue = F("Ohorner Siedlung");
        break;
    }
    case 241202:
    {
        returnValue = F("Ohorner Str.");
        break;
    }
    case 241203:
    {
        returnValue = F("Ohorner Weg");
        break;
    }
    case 241204:
    {
        returnValue = F("Ohrastr.");
        break;
    }
    case 241205:
    {
        returnValue = F("Ohrbecker Str.");
        break;
    }
    case 241206:
    {
        returnValue = F("Ohrbecker Weg");
        break;
    }
    case 241207:
    {
        returnValue = F("Ohrberg");
        break;
    }
    case 241208:
    {
        returnValue = F("Ohrbergpark");
        break;
    }
    case 241209:
    {
        returnValue = F("Ohrbreite");
        break;
    }
    case 241210:
    {
        returnValue = F("Ohrbült");
        break;
    }
    case 241211:
    {
        returnValue = F("Ohrdrufer Rasenweg");
        break;
    }
    case 241212:
    {
        returnValue = F("Ohrdrufer Str.");
        break;
    }
    case 241213:
    {
        returnValue = F("Ohrdrufer Weg");
        break;
    }
    case 241214:
    {
        returnValue = F("Ohregarten");
        break;
    }
    case 241215:
    {
        returnValue = F("Ohreler Str.");
        break;
    }
    case 241216:
    {
        returnValue = F("Ohrenbach-Siedlung");
        break;
    }
    case 241217:
    {
        returnValue = F("Ohrenbacher Str.");
        break;
    }
    case 241218:
    {
        returnValue = F("Ohrenbacherweg");
        break;
    }
    case 241219:
    {
        returnValue = F("Ohrenbergstr.");
        break;
    }
    case 241220:
    {
        returnValue = F("Ohrenbrücke");
        break;
    }
    case 241221:
    {
        returnValue = F("Ohrener Str.");
        break;
    }
    case 241222:
    {
        returnValue = F("Ohrener Weg");
        break;
    }
    case 241223:
    {
        returnValue = F("Ohrenfeld");
        break;
    }
    case 241224:
    {
        returnValue = F("Ohrengasse");
        break;
    }
    case 241225:
    {
        returnValue = F("Ohrenköpfleweg");
        break;
    }
    case 241226:
    {
        returnValue = F("Ohrensberg");
        break;
    }
    case 241227:
    {
        returnValue = F("Ohrensener Weg");
        break;
    }
    case 241228:
    {
        returnValue = F("Ohrenweiden-der flüsternde Garten");
        break;
    }
    case 241229:
    {
        returnValue = F("Ohrestr.");
        break;
    }
    case 241230:
    {
        returnValue = F("Ohreweg");
        break;
    }
    case 241231:
    {
        returnValue = F("Ohrfeld");
        break;
    }
    case 241232:
    {
        returnValue = F("Ohrgasse");
        break;
    }
    case 241233:
    {
        returnValue = F("Ohrlochsweg");
        break;
    }
    case 241234:
    {
        returnValue = F("Ohrmühle");
        break;
    }
    case 241235:
    {
        returnValue = F("Ohrnbach");
        break;
    }
    case 241236:
    {
        returnValue = F("Ohrnbachtal");
        break;
    }
    case 241237:
    {
        returnValue = F("Ohrnbachtalstr.");
        break;
    }
    case 241238:
    {
        returnValue = F("Ohrnberger Steige");
        break;
    }
    case 241239:
    {
        returnValue = F("Ohrnberger Str.");
        break;
    }
    case 241240:
    {
        returnValue = F("Ohrnberger Weg");
        break;
    }
    case 241241:
    {
        returnValue = F("Ohrnblick");
        break;
    }
    case 241242:
    {
        returnValue = F("Ohrnstr.");
        break;
    }
    case 241243:
    {
        returnValue = F("Ohrntal-Ring");
        break;
    }
    case 241244:
    {
        returnValue = F("Ohrntalstr.");
        break;
    }
    case 241245:
    {
        returnValue = F("Ohrsbergweg");
        break;
    }
    case 241246:
    {
        returnValue = F("Ohrsche Landstr.");
        break;
    }
    case 241247:
    {
        returnValue = F("Ohrsche Str.");
        break;
    }
    case 241248:
    {
        returnValue = F("Ohrser Str.");
        break;
    }
    case 241249:
    {
        returnValue = F("Ohrslebener Str.");
        break;
    }
    case 241250:
    {
        returnValue = F("Ohrsleber Weg");
        break;
    }
    case 241251:
    {
        returnValue = F("Ohrstedt-Bhf-Feld");
        break;
    }
    case 241252:
    {
        returnValue = F("Ohrstedt-Bhf-Nord");
        break;
    }
    case 241253:
    {
        returnValue = F("Ohrstedt-Bhf-Süd");
        break;
    }
    case 241254:
    {
        returnValue = F("Ohrstedter Str.");
        break;
    }
    case 241255:
    {
        returnValue = F("Ohrtalweg");
        break;
    }
    case 241256:
    {
        returnValue = F("Ohrtbrook");
        break;
    }
    case 241257:
    {
        returnValue = F("Ohrter Str.");
        break;
    }
    case 241258:
    {
        returnValue = F("Ohrtstr.");
        break;
    }
    case 241259:
    {
        returnValue = F("Ohrtweg");
        break;
    }
    case 241260:
    {
        returnValue = F("Ohrumer Weg");
        break;
    }
    case 241261:
    {
        returnValue = F("Ohrwaschelweg");
        break;
    }
    case 241262:
    {
        returnValue = F("Ohrwaschlbrücke");
        break;
    }
    case 241263:
    {
        returnValue = F("Ohrweg");
        break;
    }
    case 241264:
    {
        returnValue = F("Ohrweger Str.");
        break;
    }
    case 241265:
    {
        returnValue = F("Ohsener Str.");
        break;
    }
    case 241266:
    {
        returnValue = F("Ohsenstr.");
        break;
    }
    case 241267:
    {
        returnValue = F("Ohsenwinkel");
        break;
    }
    case 241268:
    {
        returnValue = F("Ohserstr.");
        break;
    }
    case 241269:
    {
        returnValue = F("Ohsten Barg");
        break;
    }
    case 241270:
    {
        returnValue = F("Ohweg");
        break;
    }
    case 241271:
    {
        returnValue = F("Oibweg");
        break;
    }
    case 241272:
    {
        returnValue = F("Oidtmannhof");
        break;
    }
    case 241273:
    {
        returnValue = F("Oidtmannstr.");
        break;
    }
    case 241274:
    {
        returnValue = F("Oidtweiler Teller");
        break;
    }
    case 241275:
    {
        returnValue = F("Oidtweiler Weg");
        break;
    }
    case 241276:
    {
        returnValue = F("Oidtweilerweg");
        break;
    }
    case 241277:
    {
        returnValue = F("Oiestr.");
        break;
    }
    case 241278:
    {
        returnValue = F("Oirlich");
        break;
    }
    case 241279:
    {
        returnValue = F("Oirlicher Str.");
        break;
    }
    case 241280:
    {
        returnValue = F("Oislerweg");
        break;
    }
    case 241281:
    {
        returnValue = F("Oisseler Str.");
        break;
    }
    case 241282:
    {
        returnValue = F("Oister Dorfstr.");
        break;
    }
    case 241283:
    {
        returnValue = F("Oister Weg");
        break;
    }
    case 241284:
    {
        returnValue = F("Oisterwijker Str.");
        break;
    }
    case 241285:
    {
        returnValue = F("Oistinger Feld");
        break;
    }
    case 241286:
    {
        returnValue = F("Oistingweg");
        break;
    }
    case 241287:
    {
        returnValue = F("Ojenberg");
        break;
    }
    case 241288:
    {
        returnValue = F("Okapiweg");
        break;
    }
    case 241289:
    {
        returnValue = F("Okatreute");
        break;
    }
    case 241290:
    {
        returnValue = F("Oke-Boysen-Brücke");
        break;
    }
    case 241291:
    {
        returnValue = F("Okeler Damm");
        break;
    }
    case 241292:
    {
        returnValue = F("Okeler Heide");
        break;
    }
    case 241293:
    {
        returnValue = F("Okeler Schlatt");
        break;
    }
    case 241294:
    {
        returnValue = F("Okeler Str.");
        break;
    }
    case 241295:
    {
        returnValue = F("Okeler Weg");
        break;
    }
    case 241296:
    {
        returnValue = F("Oken");
        break;
    }
    case 241297:
    {
        returnValue = F("Okendorfer Weg");
        break;
    }
    case 241298:
    {
        returnValue = F("Okenstr.");
        break;
    }
    case 241299:
    {
        returnValue = F("Okeraue");
        break;
    }
    case 241300:
    {
        returnValue = F("Okerblick");
        break;
    }
    case 241301:
    {
        returnValue = F("Okereistr.");
        break;
    }
    case 241302:
    {
        returnValue = F("Okerfurt");
        break;
    }
    case 241303:
    {
        returnValue = F("Okerhang");
        break;
    }
    case 241304:
    {
        returnValue = F("Okerpromenade");
        break;
    }
    case 241305:
    {
        returnValue = F("Okerring");
        break;
    }
    case 241306:
    {
        returnValue = F("Okerscher Kirchweg");
        break;
    }
    case 241307:
    {
        returnValue = F("Okerstr.");
        break;
    }
    case 241308:
    {
        returnValue = F("Okertal");
        break;
    }
    case 241309:
    {
        returnValue = F("Okerweg");
        break;
    }
    case 241310:
    {
        returnValue = F("Okkewehrstr.");
        break;
    }
    case 241311:
    {
        returnValue = F("Okko-ten-Broek-Str.");
        break;
    }
    case 241312:
    {
        returnValue = F("Okko-tom-Brook-Ring");
        break;
    }
    case 241313:
    {
        returnValue = F("Okko-tom-Brook-Str.");
        break;
    }
    case 241314:
    {
        returnValue = F("Oklahoma-Str.");
        break;
    }
    case 241315:
    {
        returnValue = F("Oklahomastr.");
        break;
    }
    case 241316:
    {
        returnValue = F("Oklahomaweg");
        break;
    }
    case 241317:
    {
        returnValue = F("Okonek-Str.");
        break;
    }
    case 241318:
    {
        returnValue = F("Okrifteler Schneise");
        break;
    }
    case 241319:
    {
        returnValue = F("Okrifteler Str.");
        break;
    }
    case 241320:
    {
        returnValue = F("Oktavianstr.");
        break;
    }
    case 241321:
    {
        returnValue = F("Oktavienstr.");
        break;
    }
    case 241322:
    {
        returnValue = F("Oktoberfestplatz");
        break;
    }
    case 241323:
    {
        returnValue = F("Oktobersiedlung");
        break;
    }
    case 241324:
    {
        returnValue = F("Okwerweg");
        break;
    }
    case 241325:
    {
        returnValue = F("Ol Dörp");
        break;
    }
    case 241326:
    {
        returnValue = F("Ol Streek");
        break;
    }
    case 241327:
    {
        returnValue = F("Olaf-Gulbransson-Str.");
        break;
    }
    case 241328:
    {
        returnValue = F("Olaf-Gulbransson-Weg");
        break;
    }
    case 241329:
    {
        returnValue = F("Olaf-Lange-Weg");
        break;
    }
    case 241330:
    {
        returnValue = F("Olafstr.");
        break;
    }
    case 241331:
    {
        returnValue = F("Olakenweg");
        break;
    }
    case 241332:
    {
        returnValue = F("Oland");
        break;
    }
    case 241333:
    {
        returnValue = F("Olande");
        break;
    }
    case 241334:
    {
        returnValue = F("Olandstieg");
        break;
    }
    case 241335:
    {
        returnValue = F("Olandstr.");
        break;
    }
    case 241336:
    {
        returnValue = F("Olandsweg");
        break;
    }
    case 241337:
    {
        returnValue = F("Olandweg");
        break;
    }
    case 241338:
    {
        returnValue = F("Olandwinkel");
        break;
    }
    case 241339:
    {
        returnValue = F("Olav-Brennhovd-Eck");
        break;
    }
    case 241340:
    {
        returnValue = F("Olbarg");
        break;
    }
    case 241341:
    {
        returnValue = F("Olbaweg");
        break;
    }
    case 241342:
    {
        returnValue = F("Olbe-Hopfenteich-Weg");
        break;
    }
    case 241343:
    {
        returnValue = F("Olbergsholz");
        break;
    }
    case 241344:
    {
        returnValue = F("Olbergstr.");
        break;
    }
    case 241345:
    {
        returnValue = F("Olbergsweg");
        break;
    }
    case 241346:
    {
        returnValue = F("Olbernhauer Str.");
        break;
    }
    case 241347:
    {
        returnValue = F("Olbers Kamp");
        break;
    }
    case 241348:
    {
        returnValue = F("Olbersdorfer Flügelweg");
        break;
    }
    case 241349:
    {
        returnValue = F("Olbersdorfer Str.");
        break;
    }
    case 241350:
    {
        returnValue = F("Olberslebener Str.");
        break;
    }
    case 241351:
    {
        returnValue = F("Olbersstr.");
        break;
    }
    case 241352:
    {
        returnValue = F("Olbertsweg");
        break;
    }
    case 241353:
    {
        returnValue = F("Olberöder Str.");
        break;
    }
    case 241354:
    {
        returnValue = F("Olberöder Weg");
        break;
    }
    case 241355:
    {
        returnValue = F("Olbeschhof");
        break;
    }
    case 241356:
    {
        returnValue = F("Olbetal");
        break;
    }
    case 241357:
    {
        returnValue = F("Olbrichstr.");
        break;
    }
    case 241358:
    {
        returnValue = F("Olbrichtplatz");
        break;
    }
    case 241359:
    {
        returnValue = F("Olbrichtstr.");
        break;
    }
    case 241360:
    {
        returnValue = F("Olbrichtweg");
        break;
    }
    case 241361:
    {
        returnValue = F("Olbrichweg");
        break;
    }
    case 241362:
    {
        returnValue = F("Olbrücker Burgpanorama (Geo M)");
        break;
    }
    case 241363:
    {
        returnValue = F("Olbrücker Str.");
        break;
    }
    case 241364:
    {
        returnValue = F("Olbrücker Weg");
        break;
    }
    case 241365:
    {
        returnValue = F("Olchinger Str.");
        break;
    }
    case 241366:
    {
        returnValue = F("Old Dörp");
        break;
    }
    case 241367:
    {
        returnValue = F("Oldauer Heuweg");
        break;
    }
    case 241368:
    {
        returnValue = F("Oldauer Str.");
        break;
    }
    case 241369:
    {
        returnValue = F("Oldauer Weg");
        break;
    }
    case 241370:
    {
        returnValue = F("Oldaustr.");
        break;
    }
    case 241371:
    {
        returnValue = F("Oldbargsmoorweg");
        break;
    }
    case 241372:
    {
        returnValue = F("Olde Dyk");
        break;
    }
    case 241373:
    {
        returnValue = F("Olde Dyk - bi de Kolken");
        break;
    }
    case 241374:
    {
        returnValue = F("Olde Feld");
        break;
    }
    case 241375:
    {
        returnValue = F("Olde Melkstee");
        break;
    }
    case 241376:
    {
        returnValue = F("Olde Reent Str.");
        break;
    }
    case 241377:
    {
        returnValue = F("Olde Schaulweg");
        break;
    }
    case 241378:
    {
        returnValue = F("Oldeborger Moorweg");
        break;
    }
    case 241379:
    {
        returnValue = F("Oldeborger Str.");
        break;
    }
    case 241380:
    {
        returnValue = F("Oldebrüggestr.");
        break;
    }
    case 241381:
    {
        returnValue = F("Oldecopstr.");
        break;
    }
    case 241382:
    {
        returnValue = F("Oldehaver Weg");
        break;
    }
    case 241383:
    {
        returnValue = F("Oldehl");
        break;
    }
    case 241384:
    {
        returnValue = F("Oldehoffshof");
        break;
    }
    case 241385:
    {
        returnValue = F("Oldehorst");
        break;
    }
    case 241386:
    {
        returnValue = F("Oldehusen");
        break;
    }
    case 241387:
    {
        returnValue = F("Oldekampsweg");
        break;
    }
    case 241388:
    {
        returnValue = F("Oldekopstr.");
        break;
    }
    case 241389:
    {
        returnValue = F("Oldemeppener Weg");
        break;
    }
    case 241390:
    {
        returnValue = F("Oldemeyerstr.");
        break;
    }
    case 241391:
    {
        returnValue = F("Oldenaustr.");
        break;
    }
    case 241392:
    {
        returnValue = F("Oldenbarg");
        break;
    }
    case 241393:
    {
        returnValue = F("Oldenbroker Str.");
        break;
    }
    case 241394:
    {
        returnValue = F("Oldenburger Allee");
        break;
    }
    case 241395:
    {
        returnValue = F("Oldenburger Damm");
        break;
    }
    case 241396:
    {
        returnValue = F("Oldenburger Koppel");
        break;
    }
    case 241397:
    {
        returnValue = F("Oldenburger Landstr.");
        break;
    }
    case 241398:
    {
        returnValue = F("Oldenburger Ring");
        break;
    }
    case 241399:
    {
        returnValue = F("Oldenburger Str.");
        break;
    }
    case 241400:
    {
        returnValue = F("Oldenburger Weg");
        break;
    }
    case 241401:
    {
        returnValue = F("Oldenburgische Str.");
        break;
    }
    case 241402:
    {
        returnValue = F("Oldenburgstr.");
        break;
    }
    case 241403:
    {
        returnValue = F("Oldenburgweg");
        break;
    }
    case 241404:
    {
        returnValue = F("Oldenbütteler Str.");
        break;
    }
    case 241405:
    {
        returnValue = F("Oldendorf");
        break;
    }
    case 241406:
    {
        returnValue = F("Oldendorf II");
        break;
    }
    case 241407:
    {
        returnValue = F("Oldendorf-Dorfstr.");
        break;
    }
    case 241408:
    {
        returnValue = F("Oldendorfer Dorfstr.");
        break;
    }
    case 241409:
    {
        returnValue = F("Oldendorfer Landstr.");
        break;
    }
    case 241410:
    {
        returnValue = F("Oldendorfer Str.");
        break;
    }
    case 241411:
    {
        returnValue = F("Oldendorfer Weg");
        break;
    }
    case 241412:
    {
        returnValue = F("Oldendorffstr.");
        break;
    }
    case 241413:
    {
        returnValue = F("Oldendorper Str.");
        break;
    }
    case 241414:
    {
        returnValue = F("Oldendorper Weg");
        break;
    }
    case 241415:
    {
        returnValue = F("Oldendorperhammrich");
        break;
    }
    case 241416:
    {
        returnValue = F("Oldendorpstr.");
        break;
    }
    case 241417:
    {
        returnValue = F("Oldendörpsfeld");
        break;
    }
    case 241418:
    {
        returnValue = F("Oldenhäger Weg");
        break;
    }
    case 241419:
    {
        returnValue = F("Oldenhöfen");
        break;
    }
    case 241420:
    {
        returnValue = F("Oldenhöfener Weg");
        break;
    }
    case 241421:
    {
        returnValue = F("Oldenhörn");
        break;
    }
    case 241422:
    {
        returnValue = F("Oldenhüttener Weg");
        break;
    }
    case 241423:
    {
        returnValue = F("Oldenkamp");
        break;
    }
    case 241424:
    {
        returnValue = F("Oldenkooger Ring");
        break;
    }
    case 241425:
    {
        returnValue = F("Oldenkotter Str.");
        break;
    }
    case 241426:
    {
        returnValue = F("Oldenkottstr.");
        break;
    }
    case 241427:
    {
        returnValue = F("Oldenland");
        break;
    }
    case 241428:
    {
        returnValue = F("Oldenroder Str.");
        break;
    }
    case 241429:
    {
        returnValue = F("Oldenrome");
        break;
    }
    case 241430:
    {
        returnValue = F("Oldenstädter Str.");
        break;
    }
    case 241431:
    {
        returnValue = F("Oldensworth");
        break;
    }
    case 241432:
    {
        returnValue = F("Oldentruper Park");
        break;
    }
    case 241433:
    {
        returnValue = F("Oldentruper Str.");
        break;
    }
    case 241434:
    {
        returnValue = F("Oldenweg");
        break;
    }
    case 241435:
    {
        returnValue = F("Oldenzaaler Str.");
        break;
    }
    case 241436:
    {
        returnValue = F("Oldenzaalstr.");
        break;
    }
    case 241437:
    {
        returnValue = F("Oldeoog");
        break;
    }
    case 241438:
    {
        returnValue = F("Oldeoogestr.");
        break;
    }
    case 241439:
    {
        returnValue = F("Oldeoogstr.");
        break;
    }
    case 241440:
    {
        returnValue = F("Oldeoogweg");
        break;
    }
    case 241441:
    {
        returnValue = F("Oldershausener Hauptstr.");
        break;
    }
    case 241442:
    {
        returnValue = F("Oldershäuser Str.");
        break;
    }
    case 241443:
    {
        returnValue = F("Olderstiege");
        break;
    }
    case 241444:
    {
        returnValue = F("Oldersumer Str.");
        break;
    }
    case 241445:
    {
        returnValue = F("Oldersumer Weg");
        break;
    }
    case 241446:
    {
        returnValue = F("Olderuper Str.");
        break;
    }
    case 241447:
    {
        returnValue = F("Oldesloer Platz");
        break;
    }
    case 241448:
    {
        returnValue = F("Oldesloer Str.");
        break;
    }
    case 241449:
    {
        returnValue = F("Oldestr.");
        break;
    }
    case 241450:
    {
        returnValue = F("Oldewager Str.");
        break;
    }
    case 241451:
    {
        returnValue = F("Oldeweg");
        break;
    }
    case 241452:
    {
        returnValue = F("Oldgras");
        break;
    }
    case 241453:
    {
        returnValue = F("Oldhamstr.");
        break;
    }
    case 241454:
    {
        returnValue = F("Oldhorst");
        break;
    }
    case 241455:
    {
        returnValue = F("Oldhorster Moor");
        break;
    }
    case 241456:
    {
        returnValue = F("Oldhorster Weg");
        break;
    }
    case 241457:
    {
        returnValue = F("Oldigskamp");
        break;
    }
    case 241458:
    {
        returnValue = F("Oldinger Mark");
        break;
    }
    case 241459:
    {
        returnValue = F("Oldislebener Str.");
        break;
    }
    case 241460:
    {
        returnValue = F("Oldislebener Weg");
        break;
    }
    case 241461:
    {
        returnValue = F("Oldorf");
        break;
    }
    case 241462:
    {
        returnValue = F("Oldorfer Baum");
        break;
    }
    case 241463:
    {
        returnValue = F("Oldorfer Busch");
        break;
    }
    case 241464:
    {
        returnValue = F("Oldorfer Mühle");
        break;
    }
    case 241465:
    {
        returnValue = F("Oldorfer Str.");
        break;
    }
    case 241466:
    {
        returnValue = F("Oldorfer Warf");
        break;
    }
    case 241467:
    {
        returnValue = F("Oldrade");
        break;
    }
    case 241468:
    {
        returnValue = F("Oldrott");
        break;
    }
    case 241469:
    {
        returnValue = F("Oldstückenstr.");
        break;
    }
    case 241470:
    {
        returnValue = F("Oldwardstr.");
        break;
    }
    case 241471:
    {
        returnValue = F("Oldörp");
        break;
    }
    case 241472:
    {
        returnValue = F("Oldörpenweg");
        break;
    }
    case 241473:
    {
        returnValue = F("Ole Abdieck");
        break;
    }
    case 241474:
    {
        returnValue = F("Ole Anewang");
        break;
    }
    case 241475:
    {
        returnValue = F("Ole Au");
        break;
    }
    case 241476:
    {
        returnValue = F("Ole Bahndamm");
        break;
    }
    case 241477:
    {
        returnValue = F("Ole Drift");
        break;
    }
    case 241478:
    {
        returnValue = F("Ole Dörpstraat");
        break;
    }
    case 241479:
    {
        returnValue = F("Ole Dörpstroot");
        break;
    }
    case 241480:
    {
        returnValue = F("Ole Hoffwisch");
        break;
    }
    case 241481:
    {
        returnValue = F("Ole Huskoppel");
        break;
    }
    case 241482:
    {
        returnValue = F("Ole Kamp");
        break;
    }
    case 241483:
    {
        returnValue = F("Ole Karkenweg");
        break;
    }
    case 241484:
    {
        returnValue = F("Ole Karkweg");
        break;
    }
    case 241485:
    {
        returnValue = F("Ole Klaus-Groth-Straat");
        break;
    }
    case 241486:
    {
        returnValue = F("Ole Koppel");
        break;
    }
    case 241487:
    {
        returnValue = F("Ole Land");
        break;
    }
    case 241488:
    {
        returnValue = F("Ole Landstraat");
        break;
    }
    case 241489:
    {
        returnValue = F("Ole Schoolweg");
        break;
    }
    case 241490:
    {
        returnValue = F("Ole Sportplatz");
        break;
    }
    case 241491:
    {
        returnValue = F("Ole Tann");
        break;
    }
    case 241492:
    {
        returnValue = F("Ole Twiete");
        break;
    }
    case 241493:
    {
        returnValue = F("Ole Weg");
        break;
    }
    case 241494:
    {
        returnValue = F("Ole Wisch");
        break;
    }
    case 241495:
    {
        returnValue = F("Oleanderhof");
        break;
    }
    case 241496:
    {
        returnValue = F("Oleanderplatz");
        break;
    }
    case 241497:
    {
        returnValue = F("Oleanderstr.");
        break;
    }
    case 241498:
    {
        returnValue = F("Oleanderweg");
        break;
    }
    case 241499:
    {
        returnValue = F("Oleariusstr.");
        break;
    }
    case 241500:
    {
        returnValue = F("Olebachweg");
        break;
    }
    case 241501:
    {
        returnValue = F("Olefant");
        break;
    }
    case 241502:
    {
        returnValue = F("Olefeld");
        break;
    }
    case 241503:
    {
        returnValue = F("Olefsgasse");
        break;
    }
    case 241504:
    {
        returnValue = F("Olefstr.");
        break;
    }
    case 241505:
    {
        returnValue = F("Oleftal");
        break;
    }
    case 241506:
    {
        returnValue = F("Oleftalstr.");
        break;
    }
    case 241507:
    {
        returnValue = F("Olekamp");
        break;
    }
    case 241508:
    {
        returnValue = F("Olen Diek");
        break;
    }
    case 241509:
    {
        returnValue = F("Olen Hof");
        break;
    }
    case 241510:
    {
        returnValue = F("Olen Hoff");
        break;
    }
    case 241511:
    {
        returnValue = F("Olen Kamp");
        break;
    }
    case 241512:
    {
        returnValue = F("Olen Redder");
        break;
    }
    case 241513:
    {
        returnValue = F("Olendamm");
        break;
    }
    case 241514:
    {
        returnValue = F("Olendersweg");
        break;
    }
    case 241515:
    {
        returnValue = F("Olendiek");
        break;
    }
    case 241516:
    {
        returnValue = F("Olendieksbarg");
        break;
    }
    case 241517:
    {
        returnValue = F("Olendiekskamp");
        break;
    }
    case 241518:
    {
        returnValue = F("Olendorp");
        break;
    }
    case 241519:
    {
        returnValue = F("Olenesch");
        break;
    }
    case 241520:
    {
        returnValue = F("Olenhof");
        break;
    }
    case 241521:
    {
        returnValue = F("Olenhoffweg");
        break;
    }
    case 241522:
    {
        returnValue = F("Olenhusen");
        break;
    }
    case 241523:
    {
        returnValue = F("Olenhuser Landstr.");
        break;
    }
    case 241524:
    {
        returnValue = F("Olenhuser Weg");
        break;
    }
    case 241525:
    {
        returnValue = F("Olenmoorweg");
        break;
    }
    case 241526:
    {
        returnValue = F("Olevianweg");
        break;
    }
    case 241527:
    {
        returnValue = F("Olewiger Str.");
        break;
    }
    case 241528:
    {
        returnValue = F("Olfener Landweg");
        break;
    }
    case 241529:
    {
        returnValue = F("Olfener Str.");
        break;
    }
    case 241530:
    {
        returnValue = F("Olfener Weg");
        break;
    }
    case 241531:
    {
        returnValue = F("Olfenweg");
        break;
    }
    case 241532:
    {
        returnValue = F("Olfermannstr.");
        break;
    }
    case 241533:
    {
        returnValue = F("Olfersstr.");
        break;
    }
    case 241534:
    {
        returnValue = F("Olfestiege");
        break;
    }
    case 241535:
    {
        returnValue = F("Olga Benario Str.");
        break;
    }
    case 241536:
    {
        returnValue = F("Olga-Benario-Str.");
        break;
    }
    case 241537:
    {
        returnValue = F("Olga-Benario-Weg");
        break;
    }
    case 241538:
    {
        returnValue = F("Olga-Eckstein-Str.");
        break;
    }
    case 241539:
    {
        returnValue = F("Olga-Heubeck-Weg");
        break;
    }
    case 241540:
    {
        returnValue = F("Olga-Pöhlmann-Str.");
        break;
    }
    case 241541:
    {
        returnValue = F("Olga-Pöhlmann-Weg");
        break;
    }
    case 241542:
    {
        returnValue = F("Olga-Schwindt-Weg");
        break;
    }
    case 241543:
    {
        returnValue = F("Olga-Zimmermann-Str.");
        break;
    }
    case 241544:
    {
        returnValue = F("Olga-von-Wedelstaedt-Str.");
        break;
    }
    case 241545:
    {
        returnValue = F("Olgahainweg");
        break;
    }
    case 241546:
    {
        returnValue = F("Olgahöhenweg");
        break;
    }
    case 241547:
    {
        returnValue = F("Olgalindenweg");
        break;
    }
    case 241548:
    {
        returnValue = F("Olganitzer Str.");
        break;
    }
    case 241549:
    {
        returnValue = F("Olgaplatz");
        break;
    }
    case 241550:
    {
        returnValue = F("Olgastr.");
        break;
    }
    case 241551:
    {
        returnValue = F("Olgaweg");
        break;
    }
    case 241552:
    {
        returnValue = F("Olgishofer Str.");
        break;
    }
    case 241553:
    {
        returnValue = F("Olhenbergschneise");
        break;
    }
    case 241554:
    {
        returnValue = F("Olhörnstieg");
        break;
    }
    case 241555:
    {
        returnValue = F("Olhörnweg");
        break;
    }
    case 241556:
    {
        returnValue = F("Oliggasse");
        break;
    }
    case 241557:
    {
        returnValue = F("Oligsbendengasse");
        break;
    }
    case 241558:
    {
        returnValue = F("Oligsberg");
        break;
    }
    case 241559:
    {
        returnValue = F("Oligschlägerweg");
        break;
    }
    case 241560:
    {
        returnValue = F("Oligsdriesch");
        break;
    }
    case 241561:
    {
        returnValue = F("Oligstr.");
        break;
    }
    case 241562:
    {
        returnValue = F("Oligsweg");
        break;
    }
    case 241563:
    {
        returnValue = F("Oligswiese");
        break;
    }
    case 241564:
    {
        returnValue = F("Oling");
        break;
    }
    case 241565:
    {
        returnValue = F("Olinger Weg");
        break;
    }
    case 241566:
    {
        returnValue = F("Olischweg");
        break;
    }
    case 241567:
    {
        returnValue = F("Olivaer Str.");
        break;
    }
    case 241568:
    {
        returnValue = F("Olivaer Weg");
        break;
    }
    case 241569:
    {
        returnValue = F("Olivastr.");
        break;
    }
    case 241570:
    {
        returnValue = F("Olivaweg");
        break;
    }
    case 241571:
    {
        returnValue = F("Olivengasse");
        break;
    }
    case 241572:
    {
        returnValue = F("Olivenstr.");
        break;
    }
    case 241573:
    {
        returnValue = F("Olivenweg");
        break;
    }
    case 241574:
    {
        returnValue = F("Oliverstr.");
        break;
    }
    case 241575:
    {
        returnValue = F("Olivet-Allee");
        break;
    }
    case 241576:
    {
        returnValue = F("Olivia & Eva Weg");
        break;
    }
    case 241577:
    {
        returnValue = F("Olivinweg");
        break;
    }
    case 241578:
    {
        returnValue = F("Olke Wai");
        break;
    }
    case 241579:
    {
        returnValue = F("Olkenbreder Weg");
        break;
    }
    case 241580:
    {
        returnValue = F("Olkenstr.");
        break;
    }
    case 241581:
    {
        returnValue = F("Olkenweg");
        break;
    }
    case 241582:
    {
        returnValue = F("Olkgasse");
        break;
    }
    case 241583:
    {
        returnValue = F("Olkstr.");
        break;
    }
    case 241584:
    {
        returnValue = F("Olkuszstr.");
        break;
    }
    case 241585:
    {
        returnValue = F("Oll Deep");
        break;
    }
    case 241586:
    {
        returnValue = F("Oll Diek");
        break;
    }
    case 241587:
    {
        returnValue = F("Oll Hofweg");
        break;
    }
    case 241588:
    {
        returnValue = F("Oll Kamp");
        break;
    }
    case 241589:
    {
        returnValue = F("Oll Melkpadd");
        break;
    }
    case 241590:
    {
        returnValue = F("Oll Moellerweg");
        break;
    }
    case 241591:
    {
        returnValue = F("Oll Pastorei");
        break;
    }
    case 241592:
    {
        returnValue = F("Oll Schoolpad");
        break;
    }
    case 241593:
    {
        returnValue = F("Oll Schoolpadd");
        break;
    }
    case 241594:
    {
        returnValue = F("Oll Tuun");
        break;
    }
    case 241595:
    {
        returnValue = F("Oll-Daniel-Weg");
        break;
    }
    case 241596:
    {
        returnValue = F("Oll-Päsel-Weg");
        break;
    }
    case 241597:
    {
        returnValue = F("Ollacker");
        break;
    }
    case 241598:
    {
        returnValue = F("Ollackerpad");
        break;
    }
    case 241599:
    {
        returnValue = F("Ollaweg");
        break;
    }
    case 241600:
    {
        returnValue = F("Ollborgsweg");
        break;
    }
    case 241601:
    {
        returnValue = F("Ollbörg");
        break;
    }
    case 241602:
    {
        returnValue = F("Olle Beek");
        break;
    }
    case 241603:
    {
        returnValue = F("Olle Dieksweg");
        break;
    }
    case 241604:
    {
        returnValue = F("Olle Kamp");
        break;
    }
    case 241605:
    {
        returnValue = F("Ollen Kamp");
        break;
    }
    case 241606:
    {
        returnValue = F("Ollendamm");
        break;
    }
    case 241607:
    {
        returnValue = F("Ollendorf");
        break;
    }
    case 241608:
    {
        returnValue = F("Ollendorfer Str.");
        break;
    }
    case 241609:
    {
        returnValue = F("Ollendorfer Weg");
        break;
    }
    case 241610:
    {
        returnValue = F("Ollener Str.");
        break;
    }
    case 241611:
    {
        returnValue = F("Ollenflag");
        break;
    }
    case 241612:
    {
        returnValue = F("Ollengroden");
        break;
    }
    case 241613:
    {
        returnValue = F("Ollenharder Str.");
        break;
    }
    case 241614:
    {
        returnValue = F("Ollenhauer Str.");
        break;
    }
    case 241615:
    {
        returnValue = F("Ollenhauerring");
        break;
    }
    case 241616:
    {
        returnValue = F("Ollenhauerstr.");
        break;
    }
    case 241617:
    {
        returnValue = F("Ollenhelmer");
        break;
    }
    case 241618:
    {
        returnValue = F("Ollenhof");
        break;
    }
    case 241619:
    {
        returnValue = F("Ollenkamp");
        break;
    }
    case 241620:
    {
        returnValue = F("Ollenweg");
        break;
    }
    case 241621:
    {
        returnValue = F("Ollerkamp");
        break;
    }
    case 241622:
    {
        returnValue = F("Ollerlohstr.");
        break;
    }
    case 241623:
    {
        returnValue = F("Olleweg");
        break;
    }
    case 241624:
    {
        returnValue = F("Ollheimer Str.");
        break;
    }
    case 241625:
    {
        returnValue = F("Olligsgasse");
        break;
    }
    case 241626:
    {
        returnValue = F("Olligsschlägergasse");
        break;
    }
    case 241627:
    {
        returnValue = F("Ollikstr.");
        break;
    }
    case 241628:
    {
        returnValue = F("Ollinger Str.");
        break;
    }
    case 241629:
    {
        returnValue = F("Ollmuther Str.");
        break;
    }
    case 241630:
    {
        returnValue = F("Ollndorfer Hufe");
        break;
    }
    case 241631:
    {
        returnValue = F("Ollnsstr.");
        break;
    }
    case 241632:
    {
        returnValue = F("Ollrieden");
        break;
    }
    case 241633:
    {
        returnValue = F("Ollsener Heide");
        break;
    }
    case 241634:
    {
        returnValue = F("Ollsener Str.");
        break;
    }
    case 241635:
    {
        returnValue = F("Ollweg");
        break;
    }
    case 241636:
    {
        returnValue = F("Ollwiesenweg");
        break;
    }
    case 241637:
    {
        returnValue = F("Olmberg");
        break;
    }
    case 241638:
    {
        returnValue = F("Olmerich");
        break;
    }
    case 241639:
    {
        returnValue = F("Olmerstr.");
        break;
    }
    case 241640:
    {
        returnValue = F("Olmes Kamp");
        break;
    }
    case 241641:
    {
        returnValue = F("Olmesberg");
        break;
    }
    case 241642:
    {
        returnValue = F("Olmesfeld");
        break;
    }
    case 241643:
    {
        returnValue = F("Olmesweg");
        break;
    }
    case 241644:
    {
        returnValue = F("Olmsruh");
        break;
    }
    case 241645:
    {
        returnValue = F("Olmsweg");
        break;
    }
    case 241646:
    {
        returnValue = F("Olmöhlen");
        break;
    }
    case 241647:
    {
        returnValue = F("Olmützer Str.");
        break;
    }
    case 241648:
    {
        returnValue = F("Olmützer Weg");
        break;
    }
    case 241649:
    {
        returnValue = F("Oln Esch");
        break;
    }
    case 241650:
    {
        returnValue = F("Oln Hoff");
        break;
    }
    case 241651:
    {
        returnValue = F("Oln Kamp");
        break;
    }
    case 241652:
    {
        returnValue = F("Olnhausenstr.");
        break;
    }
    case 241653:
    {
        returnValue = F("Olnhäuser Weg");
        break;
    }
    case 241654:
    {
        returnValue = F("Olof-Palme-Allee");
        break;
    }
    case 241655:
    {
        returnValue = F("Olof-Palme-Hain");
        break;
    }
    case 241656:
    {
        returnValue = F("Olof-Palme-Park");
        break;
    }
    case 241657:
    {
        returnValue = F("Olof-Palme-Platz");
        break;
    }
    case 241658:
    {
        returnValue = F("Olof-Palme-Ring");
        break;
    }
    case 241659:
    {
        returnValue = F("Olof-Palme-Str.");
        break;
    }
    case 241660:
    {
        returnValue = F("Olof-Palme-Weg");
        break;
    }
    case 241661:
    {
        returnValue = F("Olpe");
        break;
    }
    case 241662:
    {
        returnValue = F("Olpener Str.");
        break;
    }
    case 241663:
    {
        returnValue = F("Olpenitzer Dorfstr.");
        break;
    }
    case 241664:
    {
        returnValue = F("Olpenitzer Str.");
        break;
    }
    case 241665:
    {
        returnValue = F("Olpensgut");
        break;
    }
    case 241666:
    {
        returnValue = F("Olper Höhe");
        break;
    }
    case 241667:
    {
        returnValue = F("Olper Hütte");
        break;
    }
    case 241668:
    {
        returnValue = F("Olper Str.");
        break;
    }
    case 241669:
    {
        returnValue = F("Olper Weg");
        break;
    }
    case 241670:
    {
        returnValue = F("Olperhof");
        break;
    }
    case 241671:
    {
        returnValue = F("Olperör Weg");
        break;
    }
    case 241672:
    {
        returnValue = F("Olpketalstr.");
        break;
    }
    case 241673:
    {
        returnValue = F("Olsberger Str.");
        break;
    }
    case 241674:
    {
        returnValue = F("Olsbrücker Str.");
        break;
    }
    case 241675:
    {
        returnValue = F("Olsdorf");
        break;
    }
    case 241676:
    {
        returnValue = F("Olsdorfer Str.");
        break;
    }
    case 241677:
    {
        returnValue = F("Olsenstr.");
        break;
    }
    case 241678:
    {
        returnValue = F("Olshausenstr.");
        break;
    }
    case 241679:
    {
        returnValue = F("Olterberg Weg");
        break;
    }
    case 241680:
    {
        returnValue = F("Oltersteinweg");
        break;
    }
    case 241681:
    {
        returnValue = F("Olthausweg");
        break;
    }
    case 241682:
    {
        returnValue = F("Olthorntalweg");
        break;
    }
    case 241683:
    {
        returnValue = F("Olthüserhok");
        break;
    }
    case 241684:
    {
        returnValue = F("Oltje Diek");
        break;
    }
    case 241685:
    {
        returnValue = F("Oltmann-Beecken-Str.");
        break;
    }
    case 241686:
    {
        returnValue = F("Oltmann-Strenge-Str.");
        break;
    }
    case 241687:
    {
        returnValue = F("Oltmanns Kamp");
        break;
    }
    case 241688:
    {
        returnValue = F("Oltmannsfehner Str.");
        break;
    }
    case 241689:
    {
        returnValue = F("Oltmannsstr.");
        break;
    }
    case 241690:
    {
        returnValue = F("Oltmannstr.");
        break;
    }
    case 241691:
    {
        returnValue = F("Oltmannsweg");
        break;
    }
    case 241692:
    {
        returnValue = F("Oltrogge-Platz");
        break;
    }
    case 241693:
    {
        returnValue = F("Oltschlotter Damm");
        break;
    }
    case 241694:
    {
        returnValue = F("Oltschstr.");
        break;
    }
    case 241695:
    {
        returnValue = F("Olvengraben");
        break;
    }
    case 241696:
    {
        returnValue = F("Olvenstedter Chaussee");
        break;
    }
    case 241697:
    {
        returnValue = F("Olvenstedter Graseweg");
        break;
    }
    case 241698:
    {
        returnValue = F("Olvenstedter Grund");
        break;
    }
    case 241699:
    {
        returnValue = F("Olvenstedter Platz");
        break;
    }
    case 241700:
    {
        returnValue = F("Olvenstedter Scheid");
        break;
    }
    case 241701:
    {
        returnValue = F("Olvenstedter Str.");
        break;
    }
    case 241702:
    {
        returnValue = F("Olvenstedter Weg");
        break;
    }
    case 241703:
    {
        returnValue = F("Olversumer Str.");
        break;
    }
    case 241704:
    {
        returnValue = F("Olxheim");
        break;
    }
    case 241705:
    {
        returnValue = F("Olympia-Morata-Str.");
        break;
    }
    case 241706:
    {
        returnValue = F("Olympiapromenade");
        break;
    }
    case 241707:
    {
        returnValue = F("Olympiaring");
        break;
    }
    case 241708:
    {
        returnValue = F("Olympiasiegerstr.");
        break;
    }
    case 241709:
    {
        returnValue = F("Olympiastr.");
        break;
    }
    case 241710:
    {
        returnValue = F("Olympiaweg");
        break;
    }
    case 241711:
    {
        returnValue = F("Olympischer Weg");
        break;
    }
    case 241712:
    {
        returnValue = F("Olzheimer Str.");
        break;
    }
    case 241713:
    {
        returnValue = F("Olzmannstr.");
        break;
    }
    case 241714:
    {
        returnValue = F("Olzreuter Str.");
        break;
    }
    case 241715:
    {
        returnValue = F("Om Dönz");
        break;
    }
    case 241716:
    {
        returnValue = F("Om Jeeßeberch");
        break;
    }
    case 241717:
    {
        returnValue = F("Om Jellert");
        break;
    }
    case 241718:
    {
        returnValue = F("Om Knupp");
        break;
    }
    case 241719:
    {
        returnValue = F("Om Rodde");
        break;
    }
    case 241720:
    {
        returnValue = F("Om di Huk");
        break;
    }
    case 241721:
    {
        returnValue = F("Omagener Str.");
        break;
    }
    case 241722:
    {
        returnValue = F("Ombornstr.");
        break;
    }
    case 241723:
    {
        returnValue = F("Omersackweg");
        break;
    }
    case 241724:
    {
        returnValue = F("Omersbach");
        break;
    }
    case 241725:
    {
        returnValue = F("Omersbachweg");
        break;
    }
    case 241726:
    {
        returnValue = F("Omerskopfstr.");
        break;
    }
    case 241727:
    {
        returnValue = F("Omerweg");
        break;
    }
    case 241728:
    {
        returnValue = F("Ommer");
        break;
    }
    case 241729:
    {
        returnValue = F("Ommerbornstr.");
        break;
    }
    case 241730:
    {
        returnValue = F("Ommerbornweg");
        break;
    }
    case 241731:
    {
        returnValue = F("Ommerichstr.");
        break;
    }
    case 241732:
    {
        returnValue = F("Ommersheimer Str.");
        break;
    }
    case 241733:
    {
        returnValue = F("Ommersheimer Weg");
        break;
    }
    case 241734:
    {
        returnValue = F("Ommoweg");
        break;
    }
    case 241735:
    {
        returnValue = F("Omorikastr.");
        break;
    }
    case 241736:
    {
        returnValue = F("Omorikaweg");
        break;
    }
    case 241737:
    {
        returnValue = F("Omorikenweg");
        break;
    }
    case 241738:
    {
        returnValue = F("Omperter Weg");
        break;
    }
    case 241739:
    {
        returnValue = F("Omptedastr.");
        break;
    }
    case 241740:
    {
        returnValue = F("Omsdorfer Hang");
        break;
    }
    case 241741:
    {
        returnValue = F("Omsewitzer Grund");
        break;
    }
    case 241742:
    {
        returnValue = F("Omsewitzer Höhe");
        break;
    }
    case 241743:
    {
        returnValue = F("Omsewitzer Ring");
        break;
    }
    case 241744:
    {
        returnValue = F("Omsewitzer Str.");
        break;
    }
    case 241745:
    {
        returnValue = F("Omsstr.");
        break;
    }
    case 241746:
    {
        returnValue = F("Onatsbachstr.");
        break;
    }
    case 241747:
    {
        returnValue = F("Onckenstr.");
        break;
    }
    case 241748:
    {
        returnValue = F("Onckenweg");
        break;
    }
    case 241749:
    {
        returnValue = F("Ondelweg");
        break;
    }
    case 241750:
    {
        returnValue = F("Ondereyckstr.");
        break;
    }
    case 241751:
    {
        returnValue = F("Ondermarkstr.");
        break;
    }
    case 241752:
    {
        returnValue = F("Ondrup");
        break;
    }
    case 241753:
    {
        returnValue = F("Ondrup-Mayknap");
        break;
    }
    case 241754:
    {
        returnValue = F("Ondrup-Nordicker Str.");
        break;
    }
    case 241755:
    {
        returnValue = F("Ondrup-Ondruper Str.");
        break;
    }
    case 241756:
    {
        returnValue = F("Ondrup-Südgeist");
        break;
    }
    case 241757:
    {
        returnValue = F("Ondruper Kamp");
        break;
    }
    case 241758:
    {
        returnValue = F("One Community Road");
        break;
    }
    case 241759:
    {
        returnValue = F("Oner Salwert");
        break;
    }
    case 241760:
    {
        returnValue = F("Oner Taarep");
        break;
    }
    case 241761:
    {
        returnValue = F("Onersdorf");
        break;
    }
    case 241762:
    {
        returnValue = F("Onesimastr.");
        break;
    }
    case 241763:
    {
        returnValue = F("Onger Lamisch");
        break;
    }
    case 241764:
    {
        returnValue = F("Onkel-Bräsig-Str.");
        break;
    }
    case 241765:
    {
        returnValue = F("Onkel-Bräsig-Weg");
        break;
    }
    case 241766:
    {
        returnValue = F("Onkel-Fritz-Weg");
        break;
    }
    case 241767:
    {
        returnValue = F("Onkel-Stoot-Weg");
        break;
    }
    case 241768:
    {
        returnValue = F("Onkel-Toms-Hütte");
        break;
    }
    case 241769:
    {
        returnValue = F("Onkensruh");
        break;
    }
    case 241770:
    {
        returnValue = F("Onnebrinksfeld");
        break;
    }
    case 241771:
    {
        returnValue = F("Onnen-Visser-Platz");
        break;
    }
    case 241772:
    {
        returnValue = F("Onnengaweg");
        break;
    }
    case 241773:
    {
        returnValue = F("Onnert");
        break;
    }
    case 241774:
    {
        returnValue = F("Onnhamm");
        break;
    }
    case 241775:
    {
        returnValue = F("Onno-Klopp-Str.");
        break;
    }
    case 241776:
    {
        returnValue = F("Onolzheimer Hauptstr.");
        break;
    }
    case 241777:
    {
        returnValue = F("Onsdorfer Str.");
        break;
    }
    case 241778:
    {
        returnValue = F("Onstmettinger Str.");
        break;
    }
    case 241779:
    {
        returnValue = F("Onstmettinger Teich");
        break;
    }
    case 241780:
    {
        returnValue = F("Ontario Court");
        break;
    }
    case 241781:
    {
        returnValue = F("Ontario-Str.");
        break;
    }
    case 241782:
    {
        returnValue = F("Ontariogrund");
        break;
    }
    case 241783:
    {
        returnValue = F("Ontariostr.");
        break;
    }
    case 241784:
    {
        returnValue = F("Ontarioweg I");
        break;
    }
    case 241785:
    {
        returnValue = F("Ontarioweg II");
        break;
    }
    case 241786:
    {
        returnValue = F("Ontekampsweg");
        break;
    }
    case 241787:
    {
        returnValue = F("Onyxweg");
        break;
    }
    case 241788:
    {
        returnValue = F("Onzainstr.");
        break;
    }
    case 241789:
    {
        returnValue = F("Oodwai");
        break;
    }
    case 241790:
    {
        returnValue = F("Oolde Seedelsbierich");
        break;
    }
    case 241791:
    {
        returnValue = F("Oolenhof");
        break;
    }
    case 241792:
    {
        returnValue = F("Oolenhofstieg");
        break;
    }
    case 241793:
    {
        returnValue = F("Oonwai");
        break;
    }
    case 241794:
    {
        returnValue = F("Oorder Weg");
        break;
    }
    case 241795:
    {
        returnValue = F("Oorstr.");
        break;
    }
    case 241796:
    {
        returnValue = F("Oortmanns Maate");
        break;
    }
    case 241797:
    {
        returnValue = F("Oosbachstr.");
        break;
    }
    case 241798:
    {
        returnValue = F("Oosbachweg");
        break;
    }
    case 241799:
    {
        returnValue = F("Oose Wall");
        break;
    }
    case 241800:
    {
        returnValue = F("Ooser Bahnhofstr.");
        break;
    }
    case 241801:
    {
        returnValue = F("Ooser Burgstr.");
        break;
    }
    case 241802:
    {
        returnValue = F("Ooser Friedrichstr.");
        break;
    }
    case 241803:
    {
        returnValue = F("Ooser Gartenstr.");
        break;
    }
    case 241804:
    {
        returnValue = F("Ooser Hauptstr.");
        break;
    }
    case 241805:
    {
        returnValue = F("Ooser Inselstr.");
        break;
    }
    case 241806:
    {
        returnValue = F("Ooser Karlstr.");
        break;
    }
    case 241807:
    {
        returnValue = F("Ooser Kirchstr.");
        break;
    }
    case 241808:
    {
        returnValue = F("Ooser Leopoldsplatz");
        break;
    }
    case 241809:
    {
        returnValue = F("Ooser Luisenstr.");
        break;
    }
    case 241810:
    {
        returnValue = F("Ooser Sophienstr.");
        break;
    }
    case 241811:
    {
        returnValue = F("Ooser Sternstr.");
        break;
    }
    case 241812:
    {
        returnValue = F("Ooser Str.");
        break;
    }
    case 241813:
    {
        returnValue = F("Ooser Waldstr.");
        break;
    }
    case 241814:
    {
        returnValue = F("Oosstr.");
        break;
    }
    case 241815:
    {
        returnValue = F("Oostalstr.");
        break;
    }
    case 241816:
    {
        returnValue = F("Oostalweg westlich");
        break;
    }
    case 241817:
    {
        returnValue = F("Oostalweg östlich");
        break;
    }
    case 241818:
    {
        returnValue = F("Oostduinkerker Str.");
        break;
    }
    case 241819:
    {
        returnValue = F("Oostkamp-Platz");
        break;
    }
    case 241820:
    {
        returnValue = F("Oostkampstr.");
        break;
    }
    case 241821:
    {
        returnValue = F("Oosweg");
        break;
    }
    case 241822:
    {
        returnValue = F("Ootmarsumer Str.");
        break;
    }
    case 241823:
    {
        returnValue = F("Ootmarsumer Weg");
        break;
    }
    case 241824:
    {
        returnValue = F("Op 'n Barweg");
        break;
    }
    case 241825:
    {
        returnValue = F("Op De Brüggen");
        break;
    }
    case 241826:
    {
        returnValue = F("Op De Stöp");
        break;
    }
    case 241827:
    {
        returnValue = F("Op Dörp");
        break;
    }
    case 241828:
    {
        returnValue = F("Op Kerstingskamp");
        break;
    }
    case 241829:
    {
        returnValue = F("Op Lückenkamp");
        break;
    }
    case 241830:
    {
        returnValue = F("Op Rölkens");
        break;
    }
    case 241831:
    {
        returnValue = F("Op Schultenkamp");
        break;
    }
    case 241832:
    {
        returnValue = F("Op Stolp");
        break;
    }
    case 241833:
    {
        returnValue = F("Op d'r Scheet");
        break;
    }
    case 241834:
    {
        returnValue = F("Op dan Brink");
        break;
    }
    case 241835:
    {
        returnValue = F("Op de Baerbet");
        break;
    }
    case 241836:
    {
        returnValue = F("Op de Barg");
        break;
    }
    case 241837:
    {
        returnValue = F("Op de Berg");
        break;
    }
    case 241838:
    {
        returnValue = F("Op de Blök");
        break;
    }
    case 241839:
    {
        returnValue = F("Op de Borg");
        break;
    }
    case 241840:
    {
        returnValue = F("Op de Botter");
        break;
    }
    case 241841:
    {
        returnValue = F("Op de Bredde");
        break;
    }
    case 241842:
    {
        returnValue = F("Op de Breede");
        break;
    }
    case 241843:
    {
        returnValue = F("Op de Bult");
        break;
    }
    case 241844:
    {
        returnValue = F("Op de Bünt");
        break;
    }
    case 241845:
    {
        returnValue = F("Op de Camp");
        break;
    }
    case 241846:
    {
        returnValue = F("Op de Diek");
        break;
    }
    case 241847:
    {
        returnValue = F("Op de Drift");
        break;
    }
    case 241848:
    {
        returnValue = F("Op de Dös");
        break;
    }
    case 241849:
    {
        returnValue = F("Op de Dün");
        break;
    }
    case 241850:
    {
        returnValue = F("Op de Eck");
        break;
    }
    case 241851:
    {
        returnValue = F("Op de Fleet");
        break;
    }
    case 241852:
    {
        returnValue = F("Op de Fuar");
        break;
    }
    case 241853:
    {
        returnValue = F("Op de Geest");
        break;
    }
    case 241854:
    {
        returnValue = F("Op de Gehren");
        break;
    }
    case 241855:
    {
        returnValue = F("Op de Grow");
        break;
    }
    case 241856:
    {
        returnValue = F("Op de Göten");
        break;
    }
    case 241857:
    {
        returnValue = F("Op de Haag");
        break;
    }
    case 241858:
    {
        returnValue = F("Op de Haare");
        break;
    }
    case 241859:
    {
        returnValue = F("Op de Haisch");
        break;
    }
    case 241860:
    {
        returnValue = F("Op de Heck");
        break;
    }
    case 241861:
    {
        returnValue = F("Op de Heid");
        break;
    }
    case 241862:
    {
        returnValue = F("Op de Heij");
        break;
    }
    case 241863:
    {
        returnValue = F("Op de Heuch");
        break;
    }
    case 241864:
    {
        returnValue = F("Op de Hoof");
        break;
    }
    case 241865:
    {
        returnValue = F("Op de Horst");
        break;
    }
    case 241866:
    {
        returnValue = F("Op de Huuskoppel");
        break;
    }
    case 241867:
    {
        returnValue = F("Op de Höch");
        break;
    }
    case 241868:
    {
        returnValue = F("Op de Höchde");
        break;
    }
    case 241869:
    {
        returnValue = F("Op de Höchte");
        break;
    }
    case 241870:
    {
        returnValue = F("Op de Högt");
        break;
    }
    case 241871:
    {
        returnValue = F("Op de Höh");
        break;
    }
    case 241872:
    {
        returnValue = F("Op de Hütt");
        break;
    }
    case 241873:
    {
        returnValue = F("Op de Kamp");
        break;
    }
    case 241874:
    {
        returnValue = F("Op de Koort");
        break;
    }
    case 241875:
    {
        returnValue = F("Op de Koppel");
        break;
    }
    case 241876:
    {
        returnValue = F("Op de Koth");
        break;
    }
    case 241877:
    {
        returnValue = F("Op de Kuhlen");
        break;
    }
    case 241878:
    {
        returnValue = F("Op de Loh");
        break;
    }
    case 241879:
    {
        returnValue = F("Op de Lohe");
        break;
    }
    case 241880:
    {
        returnValue = F("Op de Lost");
        break;
    }
    case 241881:
    {
        returnValue = F("Op de Lust");
        break;
    }
    case 241882:
    {
        returnValue = F("Op de Marsch");
        break;
    }
    case 241883:
    {
        returnValue = F("Op de Meent");
        break;
    }
    case 241884:
    {
        returnValue = F("Op de Moelensteen");
        break;
    }
    case 241885:
    {
        returnValue = F("Op de Nachtigall");
        break;
    }
    case 241886:
    {
        returnValue = F("Op de Notteln");
        break;
    }
    case 241887:
    {
        returnValue = F("Op de Pley");
        break;
    }
    case 241888:
    {
        returnValue = F("Op de Pütten");
        break;
    }
    case 241889:
    {
        returnValue = F("Op de Quell");
        break;
    }
    case 241890:
    {
        returnValue = F("Op de Ramp");
        break;
    }
    case 241891:
    {
        returnValue = F("Op de Reeg");
        break;
    }
    case 241892:
    {
        returnValue = F("Op de Rüm");
        break;
    }
    case 241893:
    {
        returnValue = F("Op de Schanz");
        break;
    }
    case 241894:
    {
        returnValue = F("Op de Schanzen");
        break;
    }
    case 241895:
    {
        returnValue = F("Op de Schapdick");
        break;
    }
    case 241896:
    {
        returnValue = F("Op de Schonz");
        break;
    }
    case 241897:
    {
        returnValue = F("Op de Sicht");
        break;
    }
    case 241898:
    {
        returnValue = F("Op de Siek");
        break;
    }
    case 241899:
    {
        returnValue = F("Op de Veih");
        break;
    }
    case 241900:
    {
        returnValue = F("Op de Wacht");
        break;
    }
    case 241901:
    {
        returnValue = F("Op de Weddern");
        break;
    }
    case 241902:
    {
        returnValue = F("Op de Wei");
        break;
    }
    case 241903:
    {
        returnValue = F("Op de Weid");
        break;
    }
    case 241904:
    {
        returnValue = F("Op de Wellen");
        break;
    }
    case 241905:
    {
        returnValue = F("Op de Wenden");
        break;
    }
    case 241906:
    {
        returnValue = F("Op de Wisch");
        break;
    }
    case 241907:
    {
        returnValue = F("Op de Wohm");
        break;
    }
    case 241908:
    {
        returnValue = F("Op de Worth");
        break;
    }
    case 241909:
    {
        returnValue = F("Op de Wurt");
        break;
    }
    case 241910:
    {
        returnValue = F("Op de Wurth");
        break;
    }
    case 241911:
    {
        returnValue = F("Op de Wöhr");
        break;
    }
    case 241912:
    {
        returnValue = F("Op dem Dümmer");
        break;
    }
    case 241913:
    {
        returnValue = F("Op dem Felde");
        break;
    }
    case 241914:
    {
        returnValue = F("Op dem Lehmbarg");
        break;
    }
    case 241915:
    {
        returnValue = F("Op den Acker");
        break;
    }
    case 241916:
    {
        returnValue = F("Op den Barg");
        break;
    }
    case 241917:
    {
        returnValue = F("Op den Dahl");
        break;
    }
    case 241918:
    {
        returnValue = F("Op den Dries");
        break;
    }
    case 241919:
    {
        returnValue = F("Op den Dwarsblock");
        break;
    }
    case 241920:
    {
        returnValue = F("Op den Finkenbarg");
        break;
    }
    case 241921:
    {
        returnValue = F("Op den Högen");
        break;
    }
    case 241922:
    {
        returnValue = F("Op den Höpen");
        break;
    }
    case 241923:
    {
        returnValue = F("Op den Kamp");
        break;
    }
    case 241924:
    {
        returnValue = F("Op den Knust");
        break;
    }
    case 241925:
    {
        returnValue = F("Op den Marschall");
        break;
    }
    case 241926:
    {
        returnValue = F("Op den Streek");
        break;
    }
    case 241927:
    {
        returnValue = F("Op den Stüben");
        break;
    }
    case 241928:
    {
        returnValue = F("Op den Tupp");
        break;
    }
    case 241929:
    {
        returnValue = F("Op der Dell");
        break;
    }
    case 241930:
    {
        returnValue = F("Op der Heide");
        break;
    }
    case 241931:
    {
        returnValue = F("Op der Heyde");
        break;
    }
    case 241932:
    {
        returnValue = F("Op em Opperzfeld");
        break;
    }
    case 241933:
    {
        returnValue = F("Op et Haddere");
        break;
    }
    case 241934:
    {
        returnValue = F("Op et Klöster");
        break;
    }
    case 241935:
    {
        returnValue = F("Op me Planken");
        break;
    }
    case 241936:
    {
        returnValue = F("Op te Schmaltberg");
        break;
    }
    case 241937:
    {
        returnValue = F("Op'de Wohrt");
        break;
    }
    case 241938:
    {
        returnValue = F("Op'm Block");
        break;
    }
    case 241939:
    {
        returnValue = F("Op'm Holm");
        break;
    }
    case 241940:
    {
        returnValue = F("Op'm Rüschhort");
        break;
    }
    case 241941:
    {
        returnValue = F("Op'm Stupper");
        break;
    }
    case 241942:
    {
        returnValue = F("Op'n Barg");
        break;
    }
    case 241943:
    {
        returnValue = F("Op'n Block");
        break;
    }
    case 241944:
    {
        returnValue = F("Op'n Bouhlen");
        break;
    }
    case 241945:
    {
        returnValue = F("Op'n Clev");
        break;
    }
    case 241946:
    {
        returnValue = F("Op'n Damm");
        break;
    }
    case 241947:
    {
        returnValue = F("Op'n Deel");
        break;
    }
    case 241948:
    {
        returnValue = F("Op'n Diek");
        break;
    }
    case 241949:
    {
        returnValue = F("Op'n Donnerloh");
        break;
    }
    case 241950:
    {
        returnValue = F("Op'n Dörp");
        break;
    }
    case 241951:
    {
        returnValue = F("Op'n Ellerhoop");
        break;
    }
    case 241952:
    {
        returnValue = F("Op'n Haidbarg");
        break;
    }
    case 241953:
    {
        returnValue = F("Op'n Hegbarg");
        break;
    }
    case 241954:
    {
        returnValue = F("Op'n Hoff");
        break;
    }
    case 241955:
    {
        returnValue = F("Op'n Kamp");
        break;
    }
    case 241956:
    {
        returnValue = F("Op'n Klint");
        break;
    }
    case 241957:
    {
        returnValue = F("Op'n Knüll");
        break;
    }
    case 241958:
    {
        returnValue = F("Op'n Pasterkroog");
        break;
    }
    case 241959:
    {
        returnValue = F("Op'n Sand");
        break;
    }
    case 241960:
    {
        returnValue = F("Op'n Sandn");
        break;
    }
    case 241961:
    {
        returnValue = F("Op'n Soren");
        break;
    }
    case 241962:
    {
        returnValue = F("Op'n Spitol");
        break;
    }
    case 241963:
    {
        returnValue = F("Op'n Steenbarg");
        break;
    }
    case 241964:
    {
        returnValue = F("Op'n Stiegen");
        break;
    }
    case 241965:
    {
        returnValue = F("Op'n Tempel");
        break;
    }
    case 241966:
    {
        returnValue = F("Op'n Wiehbusch");
        break;
    }
    case 241967:
    {
        returnValue = F("Op'n Wischhof");
        break;
    }
    case 241968:
    {
        returnValue = F("Op'n Wischhoff");
        break;
    }
    case 241969:
    {
        returnValue = F("Op-de-Luhr-Weg");
        break;
    }
    case 241970:
    {
        returnValue = F("Op`n Barg");
        break;
    }
    case 241971:
    {
        returnValue = F("Opalstr.");
        break;
    }
    case 241972:
    {
        returnValue = F("Opalweg");
        break;
    }
    case 241973:
    {
        returnValue = F("Opderbeckstr.");
        break;
    }
    case 241974:
    {
        returnValue = F("Opderbeckweg");
        break;
    }
    case 241975:
    {
        returnValue = F("Opelkreisel");
        break;
    }
    case 241976:
    {
        returnValue = F("Opelplatz");
        break;
    }
    case 241977:
    {
        returnValue = F("Opelring");
        break;
    }
    case 241978:
    {
        returnValue = F("Opelstr.");
        break;
    }
    case 241979:
    {
        returnValue = F("Opelweg");
        break;
    }
    case 241980:
    {
        returnValue = F("Open-Air-Gelände an der Südbrücke");
        break;
    }
    case 241981:
    {
        returnValue = F("Oper");
        break;
    }
    case 241982:
    {
        returnValue = F("Oper Heed (Auf der Heide)");
        break;
    }
    case 241983:
    {
        returnValue = F("Opern-Passage");
        break;
    }
    case 241984:
    {
        returnValue = F("Opernplatz");
        break;
    }
    case 241985:
    {
        returnValue = F("Opernstr.");
        break;
    }
    case 241986:
    {
        returnValue = F("Opfenrieder Str.");
        break;
    }
    case 241987:
    {
        returnValue = F("Opfenwangweg");
        break;
    }
    case 241988:
    {
        returnValue = F("Opferbach");
        break;
    }
    case 241989:
    {
        returnValue = F("Opferbaumer Str.");
        break;
    }
    case 241990:
    {
        returnValue = F("Opferbaumer Weg");
        break;
    }
    case 241991:
    {
        returnValue = F("Opferberg");
        break;
    }
    case 241992:
    {
        returnValue = F("Opferdamm");
        break;
    }
    case 241993:
    {
        returnValue = F("Opferdinger Str.");
        break;
    }
    case 241994:
    {
        returnValue = F("Opferfelder Str.");
        break;
    }
    case 241995:
    {
        returnValue = F("Opferfeldstr.");
        break;
    }
    case 241996:
    {
        returnValue = F("Opfergasse");
        break;
    }
    case 241997:
    {
        returnValue = F("Opferhof");
        break;
    }
    case 241998:
    {
        returnValue = F("Opferhöfe");
        break;
    }
    case 241999:
    {
        returnValue = F("Opferkamp");
        break;
    }
    case 242000:
    {
        returnValue = F("Opferrain");
        break;
    }
    case 242001:
    {
        returnValue = F("Opfersteg");
        break;
    }
    case 242002:
    {
        returnValue = F("Opfersteinstr.");
        break;
    }
    case 242003:
    {
        returnValue = F("Opfersteinweg");
        break;
    }
    case 242004:
    {
        returnValue = F("Opferstr.");
        break;
    }
    case 242005:
    {
        returnValue = F("Opfertriesch");
        break;
    }
    case 242006:
    {
        returnValue = F("Opfertwete");
        break;
    }
    case 242007:
    {
        returnValue = F("Opferweg");
        break;
    }
    case 242008:
    {
        returnValue = F("Opferwiese");
        break;
    }
    case 242009:
    {
        returnValue = F("Opfinger Str.");
        break;
    }
    case 242010:
    {
        returnValue = F("Opfingerstr.");
        break;
    }
    case 242011:
    {
        returnValue = F("Ophausen");
        break;
    }
    case 242012:
    {
        returnValue = F("Opheimer Benden");
        break;
    }
    case 242013:
    {
        returnValue = F("Opherdicker Str.");
        break;
    }
    case 242014:
    {
        returnValue = F("Ophertener Str.");
        break;
    }
    case 242015:
    {
        returnValue = F("Ophof");
        break;
    }
    case 242016:
    {
        returnValue = F("Ophoffstr.");
        break;
    }
    case 242017:
    {
        returnValue = F("Ophofstr.");
        break;
    }
    case 242018:
    {
        returnValue = F("Ophofstwiete");
        break;
    }
    case 242019:
    {
        returnValue = F("Opholtsweg");
        break;
    }
    case 242020:
    {
        returnValue = F("Ophovener Graben");
        break;
    }
    case 242021:
    {
        returnValue = F("Ophovener Str.");
        break;
    }
    case 242022:
    {
        returnValue = F("Ophovenstr.");
        break;
    }
    case 242023:
    {
        returnValue = F("Ophover Weg");
        break;
    }
    case 242024:
    {
        returnValue = F("Ophusum");
        break;
    }
    case 242025:
    {
        returnValue = F("Ophöverweg");
        break;
    }
    case 242026:
    {
        returnValue = F("Opi-Huck-Stroot");
        break;
    }
    case 242027:
    {
        returnValue = F("Opitzer Str.");
        break;
    }
    case 242028:
    {
        returnValue = F("Opitzer Weg");
        break;
    }
    case 242029:
    {
        returnValue = F("Opitzer Weg - Fahrweg");
        break;
    }
    case 242030:
    {
        returnValue = F("Opitzer Weg - Fahrweg (ehemalig)");
        break;
    }
    case 242031:
    {
        returnValue = F("Opitzer Weg - Fußweg");
        break;
    }
    case 242032:
    {
        returnValue = F("Opitzstr.");
        break;
    }
    case 242033:
    {
        returnValue = F("Opketal");
        break;
    }
    case 242034:
    {
        returnValue = F("Opkeweg");
        break;
    }
    case 242035:
    {
        returnValue = F("Opladener Platz");
        break;
    }
    case 242036:
    {
        returnValue = F("Opladener Str.");
        break;
    }
    case 242037:
    {
        returnValue = F("Opladenstr.");
        break;
    }
    case 242038:
    {
        returnValue = F("Opm Blockhorn");
        break;
    }
    case 242039:
    {
        returnValue = F("Opmünder Weg");
        break;
    }
    case 242040:
    {
        returnValue = F("Opn Barg");
        break;
    }
    case 242041:
    {
        returnValue = F("Opn Feld");
        break;
    }
    case 242042:
    {
        returnValue = F("Opn Kamp");
        break;
    }
    case 242043:
    {
        returnValue = F("Opn Plack");
        break;
    }
    case 242044:
    {
        returnValue = F("Opn Toppeesch");
        break;
    }
    case 242045:
    {
        returnValue = F("Opolestr.");
        break;
    }
    case 242046:
    {
        returnValue = F("Opolonyweg");
        break;
    }
    case 242047:
    {
        returnValue = F("Oppacher Str.");
        break;
    }
    case 242048:
    {
        returnValue = F("Oppacher Weg");
        break;
    }
    case 242049:
    {
        returnValue = F("Oppauer Kreuzweg");
        break;
    }
    case 242050:
    {
        returnValue = F("Oppauer Stadtpark");
        break;
    }
    case 242051:
    {
        returnValue = F("Oppauer Str.");
        break;
    }
    case 242052:
    {
        returnValue = F("Oppauer Weg");
        break;
    }
    case 242053:
    {
        returnValue = F("Oppaustr.");
        break;
    }
    case 242054:
    {
        returnValue = F("Oppelhainer Str.");
        break;
    }
    case 242055:
    {
        returnValue = F("Oppeln");
        break;
    }
    case 242056:
    {
        returnValue = F("Oppelner Bahn");
        break;
    }
    case 242057:
    {
        returnValue = F("Oppelner Hauptstr.");
        break;
    }
    case 242058:
    {
        returnValue = F("Oppelner Ring");
        break;
    }
    case 242059:
    {
        returnValue = F("Oppelner Schleife");
        break;
    }
    case 242060:
    {
        returnValue = F("Oppelner Str.");
        break;
    }
    case 242061:
    {
        returnValue = F("Oppelner Weg");
        break;
    }
    case 242062:
    {
        returnValue = F("Oppelnstr.");
        break;
    }
    case 242063:
    {
        returnValue = F("Oppelnweg");
        break;
    }
    case 242064:
    {
        returnValue = F("Oppelsbohmer Str.");
        break;
    }
    case 242065:
    {
        returnValue = F("Oppelshäuser Weg");
        break;
    }
    case 242066:
    {
        returnValue = F("Oppelstr.");
        break;
    }
    case 242067:
    {
        returnValue = F("Oppeltshofer Weg");
        break;
    }
    case 242068:
    {
        returnValue = F("Oppeltweg");
        break;
    }
    case 242069:
    {
        returnValue = F("Oppelweg");
        break;
    }
    case 242070:
    {
        returnValue = F("Oppen");
        break;
    }
    case 242071:
    {
        returnValue = F("Oppenbergstr.");
        break;
    }
    case 242072:
    {
        returnValue = F("Oppenbornstr.");
        break;
    }
    case 242073:
    {
        returnValue = F("Oppendorfer Str.");
        break;
    }
    case 242074:
    {
        returnValue = F("Oppendorfer Weg");
        break;
    }
    case 242075:
    {
        returnValue = F("Oppener Str.");
        break;
    }
    case 242076:
    {
        returnValue = F("Oppenheimer Graben");
        break;
    }
    case 242077:
    {
        returnValue = F("Oppenheimer Landstr.");
        break;
    }
    case 242078:
    {
        returnValue = F("Oppenheimer Platz");
        break;
    }
    case 242079:
    {
        returnValue = F("Oppenheimer Ring");
        break;
    }
    case 242080:
    {
        returnValue = F("Oppenheimer Str.");
        break;
    }
    case 242081:
    {
        returnValue = F("Oppenheimer Torgasse");
        break;
    }
    case 242082:
    {
        returnValue = F("Oppenheimer Weg");
        break;
    }
    case 242083:
    {
        returnValue = F("Oppenheimstr.");
        break;
    }
    case 242084:
    {
        returnValue = F("Oppenhof");
        break;
    }
    case 242085:
    {
        returnValue = F("Oppenhoffallee");
        break;
    }
    case 242086:
    {
        returnValue = F("Oppenhoffstr.");
        break;
    }
    case 242087:
    {
        returnValue = F("Oppenkampstr.");
        break;
    }
    case 242088:
    {
        returnValue = F("Oppenlochweg");
        break;
    }
    case 242089:
    {
        returnValue = F("Oppenländerstr.");
        break;
    }
    case 242090:
    {
        returnValue = F("Oppenried");
        break;
    }
    case 242091:
    {
        returnValue = F("Oppenroth");
        break;
    }
    case 242092:
    {
        returnValue = F("Oppenröder Str.");
        break;
    }
    case 242093:
    {
        returnValue = F("Oppenröder Weg");
        break;
    }
    case 242094:
    {
        returnValue = F("Oppenweher Str.");
        break;
    }
    case 242095:
    {
        returnValue = F("Oppenweiler Str.");
        break;
    }
    case 242096:
    {
        returnValue = F("Oppenweilerweg");
        break;
    }
    case 242097:
    {
        returnValue = F("Opper Weg");
        break;
    }
    case 242098:
    {
        returnValue = F("Oppergärten");
        break;
    }
    case 242099:
    {
        returnValue = F("Opperhusen");
        break;
    }
    case 242100:
    {
        returnValue = F("Opperhusener Str.");
        break;
    }
    case 242101:
    {
        returnValue = F("Opperkamp");
        break;
    }
    case 242102:
    {
        returnValue = F("Opperklappe");
        break;
    }
    case 242103:
    {
        returnValue = F("Oppermanns Mühle");
        break;
    }
    case 242104:
    {
        returnValue = F("Oppermanns Winkel");
        break;
    }
    case 242105:
    {
        returnValue = F("Oppermanns-Wiesen-Schneise");
        break;
    }
    case 242106:
    {
        returnValue = F("Oppermannspad");
        break;
    }
    case 242107:
    {
        returnValue = F("Oppermannstr.");
        break;
    }
    case 242108:
    {
        returnValue = F("Oppermannweg");
        break;
    }
    case 242109:
    {
        returnValue = F("Oppermannwiesenschneise");
        break;
    }
    case 242110:
    {
        returnValue = F("Oppernweg");
        break;
    }
    case 242111:
    {
        returnValue = F("Opperoder Weg");
        break;
    }
    case 242112:
    {
        returnValue = F("Oppersdorfer Str.");
        break;
    }
    case 242113:
    {
        returnValue = F("Oppersgasse");
        break;
    }
    case 242114:
    {
        returnValue = F("Oppersheide");
        break;
    }
    case 242115:
    {
        returnValue = F("Oppershofener Str.");
        break;
    }
    case 242116:
    {
        returnValue = F("Oppershofener Weg");
        break;
    }
    case 242117:
    {
        returnValue = F("Oppershäuser Str.");
        break;
    }
    case 242118:
    {
        returnValue = F("Opperweg");
        break;
    }
    case 242119:
    {
        returnValue = F("Opperzauer Str.");
        break;
    }
    case 242120:
    {
        returnValue = F("Opphofer Str.");
        break;
    }
    case 242121:
    {
        returnValue = F("Oppin");
        break;
    }
    case 242122:
    {
        returnValue = F("Oppiner Str.");
        break;
    }
    case 242123:
    {
        returnValue = F("Oppiner Weg");
        break;
    }
    case 242124:
    {
        returnValue = F("Oppinger Str.");
        break;
    }
    case 242125:
    {
        returnValue = F("Oppinger-Tal-Weg");
        break;
    }
    case 242126:
    {
        returnValue = F("Oppitzscher Weg");
        break;
    }
    case 242127:
    {
        returnValue = F("Oppsalstr.");
        break;
    }
    case 242128:
    {
        returnValue = F("Oppspring");
        break;
    }
    case 242129:
    {
        returnValue = F("Oppumer Str.");
        break;
    }
    case 242130:
    {
        returnValue = F("Oppurger Weg");
        break;
    }
    case 242131:
    {
        returnValue = F("Oprielshof");
        break;
    }
    case 242132:
    {
        returnValue = F("Opschlag");
        break;
    }
    case 242133:
    {
        returnValue = F("Opschlagweg");
        break;
    }
    case 242134:
    {
        returnValue = F("Opsener Str.");
        break;
    }
    case 242135:
    {
        returnValue = F("Opti-Str.");
        break;
    }
    case 242136:
    {
        returnValue = F("Optikstr.");
        break;
    }
    case 242137:
    {
        returnValue = F("Optimaweg");
        break;
    }
    case 242138:
    {
        returnValue = F("Optimistenweg");
        break;
    }
    case 242139:
    {
        returnValue = F("Orafolstr.");
        break;
    }
    case 242140:
    {
        returnValue = F("Orakelweg");
        break;
    }
    case 242141:
    {
        returnValue = F("Orange Kugel");
        break;
    }
    case 242142:
    {
        returnValue = F("Orangeplatz");
        break;
    }
    case 242143:
    {
        returnValue = F("Orangerie");
        break;
    }
    case 242144:
    {
        returnValue = F("Orangerieallee");
        break;
    }
    case 242145:
    {
        returnValue = F("Orangeriegarten");
        break;
    }
    case 242146:
    {
        returnValue = F("Orangeriegasse");
        break;
    }
    case 242147:
    {
        returnValue = F("Orangerieplatz");
        break;
    }
    case 242148:
    {
        returnValue = F("Orangeriesteg");
        break;
    }
    case 242149:
    {
        returnValue = F("Orangeriestr.");
        break;
    }
    case 242150:
    {
        returnValue = F("Oraniaweg");
        break;
    }
    case 242151:
    {
        returnValue = F("Oranienbaumer Chaussee");
        break;
    }
    case 242152:
    {
        returnValue = F("Oranienbaumer Str.");
        break;
    }
    case 242153:
    {
        returnValue = F("Oranienbaumer Weg");
        break;
    }
    case 242154:
    {
        returnValue = F("Oranienburger Chaussee");
        break;
    }
    case 242155:
    {
        returnValue = F("Oranienburger Str.");
        break;
    }
    case 242156:
    {
        returnValue = F("Oranienburger Weg");
        break;
    }
    case 242157:
    {
        returnValue = F("Oraniendeich");
        break;
    }
    case 242158:
    {
        returnValue = F("Oranienpark");
        break;
    }
    case 242159:
    {
        returnValue = F("Oranienplatz");
        break;
    }
    case 242160:
    {
        returnValue = F("Oranienring");
        break;
    }
    case 242161:
    {
        returnValue = F("Oraniensteiner Str.");
        break;
    }
    case 242162:
    {
        returnValue = F("Oraniensteiner Weg");
        break;
    }
    case 242163:
    {
        returnValue = F("Oranienstr.");
        break;
    }
    case 242164:
    {
        returnValue = F("Oranienweg");
        break;
    }
    case 242165:
    {
        returnValue = F("Oranier-Str.");
        break;
    }
    case 242166:
    {
        returnValue = F("Oranierring");
        break;
    }
    case 242167:
    {
        returnValue = F("Oranierrondell");
        break;
    }
    case 242168:
    {
        returnValue = F("Oranierstr.");
        break;
    }
    case 242169:
    {
        returnValue = F("Oranjehofstr.");
        break;
    }
    case 242170:
    {
        returnValue = F("Oranjeweg");
        break;
    }
    case 242171:
    {
        returnValue = F("Orannastr.");
        break;
    }
    case 242172:
    {
        returnValue = F("Orannaweg");
        break;
    }
    case 242173:
    {
        returnValue = F("Orazio-Giamblanco-Platz");
        break;
    }
    case 242174:
    {
        returnValue = F("Orbachstr.");
        break;
    }
    case 242175:
    {
        returnValue = F("Orbanstr.");
        break;
    }
    case 242176:
    {
        returnValue = F("Orbecer Str.");
        break;
    }
    case 242177:
    {
        returnValue = F("Orber Gasse");
        break;
    }
    case 242178:
    {
        returnValue = F("Orber Str.");
        break;
    }
    case 242179:
    {
        returnValue = F("Orber Weg");
        break;
    }
    case 242180:
    {
        returnValue = F("Orbertalsweg");
        break;
    }
    case 242181:
    {
        returnValue = F("Orbesweg");
        break;
    }
    case 242182:
    {
        returnValue = F("Orbinstr.");
        break;
    }
    case 242183:
    {
        returnValue = F("Orbiser Weg");
        break;
    }
    case 242184:
    {
        returnValue = F("Orbisstr.");
        break;
    }
    case 242185:
    {
        returnValue = F("Orbker Str.");
        break;
    }
    case 242186:
    {
        returnValue = F("Orbroicher Mühlenweg");
        break;
    }
    case 242187:
    {
        returnValue = F("Orbroicher Str.");
        break;
    }
    case 242188:
    {
        returnValue = F("Orbweg");
        break;
    }
    case 242189:
    {
        returnValue = F("Orchesterstr.");
        break;
    }
    case 242190:
    {
        returnValue = F("Orchestriongässle-Weber-Gäßli");
        break;
    }
    case 242191:
    {
        returnValue = F("Orchheimer Str.");
        break;
    }
    case 242192:
    {
        returnValue = F("Orchideen-Weg");
        break;
    }
    case 242193:
    {
        returnValue = F("Orchideenbogen");
        break;
    }
    case 242194:
    {
        returnValue = F("Orchideeneck");
        break;
    }
    case 242195:
    {
        returnValue = F("Orchideenpfad");
        break;
    }
    case 242196:
    {
        returnValue = F("Orchideenplatz");
        break;
    }
    case 242197:
    {
        returnValue = F("Orchideenring");
        break;
    }
    case 242198:
    {
        returnValue = F("Orchideenrundweg");
        break;
    }
    case 242199:
    {
        returnValue = F("Orchideenstr.");
        break;
    }
    case 242200:
    {
        returnValue = F("Orchideenweg");
        break;
    }
    case 242201:
    {
        returnValue = F("Orchideenwiese");
        break;
    }
    case 242202:
    {
        returnValue = F("Orchideering");
        break;
    }
    case 242203:
    {
        returnValue = F("Ordalweg");
        break;
    }
    case 242204:
    {
        returnValue = F("Orde");
        break;
    }
    case 242205:
    {
        returnValue = F("Ordemannstr.");
        break;
    }
    case 242206:
    {
        returnValue = F("Ordenhof");
        break;
    }
    case 242207:
    {
        returnValue = F("Ordeniederung");
        break;
    }
    case 242208:
    {
        returnValue = F("Ordensbreite");
        break;
    }
    case 242209:
    {
        returnValue = F("Ordenslandstr.");
        break;
    }
    case 242210:
    {
        returnValue = F("Ordenslandweg");
        break;
    }
    case 242211:
    {
        returnValue = F("Ordensmeisterstr.");
        break;
    }
    case 242212:
    {
        returnValue = F("Ordenspfad");
        break;
    }
    case 242213:
    {
        returnValue = F("Ordensritterstr.");
        break;
    }
    case 242214:
    {
        returnValue = F("Ordensritterweg");
        break;
    }
    case 242215:
    {
        returnValue = F("Ordensstr.");
        break;
    }
    case 242216:
    {
        returnValue = F("Ordensweg");
        break;
    }
    case 242217:
    {
        returnValue = F("Orderweg");
        break;
    }
    case 242218:
    {
        returnValue = F("Ordorfer Str.");
        break;
    }
    case 242219:
    {
        returnValue = F("Oreertsweg");
        break;
    }
    case 242220:
    {
        returnValue = F("Oreganoweg");
        break;
    }
    case 242221:
    {
        returnValue = F("Oregonweg");
        break;
    }
    case 242222:
    {
        returnValue = F("Orenberg");
        break;
    }
    case 242223:
    {
        returnValue = F("Orenborn");
        break;
    }
    case 242224:
    {
        returnValue = F("Orenburger Str.");
        break;
    }
    case 242225:
    {
        returnValue = F("Orenburger Weg");
        break;
    }
    case 242226:
    {
        returnValue = F("Orendarper Weg");
        break;
    }
    case 242227:
    {
        returnValue = F("Orendelsaller Weg");
        break;
    }
    case 242228:
    {
        returnValue = F("Orendelstr.");
        break;
    }
    case 242229:
    {
        returnValue = F("Orenhofener Str.");
        break;
    }
    case 242230:
    {
        returnValue = F("Orenrundweg");
        break;
    }
    case 242231:
    {
        returnValue = F("Orensfelsstr.");
        break;
    }
    case 242232:
    {
        returnValue = F("Orenstein-&-Koppel-Str.");
        break;
    }
    case 242233:
    {
        returnValue = F("Orensteinstr.");
        break;
    }
    case 242234:
    {
        returnValue = F("Orenweg");
        break;
    }
    case 242235:
    {
        returnValue = F("Oresfeld");
        break;
    }
    case 242236:
    {
        returnValue = F("Orestiadastr.");
        break;
    }
    case 242237:
    {
        returnValue = F("Orfelder Rod Schneise");
        break;
    }
    case 242238:
    {
        returnValue = F("Orfenweg");
        break;
    }
    case 242239:
    {
        returnValue = F("Orff-Str.");
        break;
    }
    case 242240:
    {
        returnValue = F("Orffstr.");
        break;
    }
    case 242241:
    {
        returnValue = F("Orffweg");
        break;
    }
    case 242242:
    {
        returnValue = F("Organistenkamp");
        break;
    }
    case 242243:
    {
        returnValue = F("Organistenstr.");
        break;
    }
    case 242244:
    {
        returnValue = F("Organistenweg");
        break;
    }
    case 242245:
    {
        returnValue = F("Orgelbauerpark");
        break;
    }
    case 242246:
    {
        returnValue = F("Orgelbauers Kamp");
        break;
    }
    case 242247:
    {
        returnValue = F("Orgelbauerweg");
        break;
    }
    case 242248:
    {
        returnValue = F("Orgelbornstr.");
        break;
    }
    case 242249:
    {
        returnValue = F("Orgeletstr.");
        break;
    }
    case 242250:
    {
        returnValue = F("Orgelgasse");
        break;
    }
    case 242251:
    {
        returnValue = F("Orgelmachergasse");
        break;
    }
    case 242252:
    {
        returnValue = F("Orgelsgarten");
        break;
    }
    case 242253:
    {
        returnValue = F("Orgelspiel");
        break;
    }
    case 242254:
    {
        returnValue = F("Orgelstr.");
        break;
    }
    case 242255:
    {
        returnValue = F("Orgelsweg");
        break;
    }
    case 242256:
    {
        returnValue = F("Orgelweg");
        break;
    }
    case 242257:
    {
        returnValue = F("Orgängschneise");
        break;
    }
    case 242258:
    {
        returnValue = F("Orhalmer Weg");
        break;
    }
    case 242259:
    {
        returnValue = F("Oria-Platz");
        break;
    }
    case 242260:
    {
        returnValue = F("Orient");
        break;
    }
    case 242261:
    {
        returnValue = F("Orionhof");
        break;
    }
    case 242262:
    {
        returnValue = F("Orionstr.");
        break;
    }
    case 242263:
    {
        returnValue = F("Orionweg");
        break;
    }
    case 242264:
    {
        returnValue = F("Orkener Str.");
        break;
    }
    case 242265:
    {
        returnValue = F("Orker Str.");
        break;
    }
    case 242266:
    {
        returnValue = F("Orkestr.");
        break;
    }
    case 242267:
    {
        returnValue = F("Orketalstr.");
        break;
    }
    case 242268:
    {
        returnValue = F("Orkneyweg");
        break;
    }
    case 242269:
    {
        returnValue = F("Orkotten");
        break;
    }
    case 242270:
    {
        returnValue = F("Orkstr.");
        break;
    }
    case 242271:
    {
        returnValue = F("Orlacher Str.");
        break;
    }
    case 242272:
    {
        returnValue = F("Orlagasse");
        break;
    }
    case 242273:
    {
        returnValue = F("Orlamünder Str.");
        break;
    }
    case 242274:
    {
        returnValue = F("Orlamünder Weg");
        break;
    }
    case 242275:
    {
        returnValue = F("Orlamünderstr.");
        break;
    }
    case 242276:
    {
        returnValue = F("Orlamündeweg");
        break;
    }
    case 242277:
    {
        returnValue = F("Orlando-Di-Lasso-Str.");
        break;
    }
    case 242278:
    {
        returnValue = F("Orlando-di-Lasso-Str.");
        break;
    }
    case 242279:
    {
        returnValue = F("Orlando-di-Lasso-Weg");
        break;
    }
    case 242280:
    {
        returnValue = F("Orlandostr.");
        break;
    }
    case 242281:
    {
        returnValue = F("Orlasstr.");
        break;
    }
    case 242282:
    {
        returnValue = F("Orlastr.");
        break;
    }
    case 242283:
    {
        returnValue = F("Orlaweg");
        break;
    }
    case 242284:
    {
        returnValue = F("Orleanderweg");
        break;
    }
    case 242285:
    {
        returnValue = F("Orleansstr.");
        break;
    }
    case 242286:
    {
        returnValue = F("Orleitenweg");
        break;
    }
    case 242287:
    {
        returnValue = F("Orlenbacher Str.");
        break;
    }
    case 242288:
    {
        returnValue = F("Orles-Siemen-Str.");
        break;
    }
    case 242289:
    {
        returnValue = F("Orleshäuser Hauptstr.");
        break;
    }
    case 242290:
    {
        returnValue = F("Orleshäuser Str.");
        break;
    }
    case 242291:
    {
        returnValue = F("Orlesstr.");
        break;
    }
    case 242292:
    {
        returnValue = F("Orli-Torgau-Str.");
        break;
    }
    case 242293:
    {
        returnValue = F("Orli-Wald-Allee");
        break;
    }
    case 242294:
    {
        returnValue = F("Orlishausener Str.");
        break;
    }
    case 242295:
    {
        returnValue = F("Orloff");
        break;
    }
    case 242296:
    {
        returnValue = F("Orloffweg");
        break;
    }
    case 242297:
    {
        returnValue = F("Orlweg");
        break;
    }
    case 242298:
    {
        returnValue = F("Ormersweilerstr.");
        break;
    }
    case 242299:
    {
        returnValue = F("Ormesheimer Str.");
        break;
    }
    case 242300:
    {
        returnValue = F("Ormessonstr.");
        break;
    }
    case 242301:
    {
        returnValue = F("Ormonter Str.");
        break;
    }
    case 242302:
    {
        returnValue = F("Ormsheimer Hof");
        break;
    }
    case 242303:
    {
        returnValue = F("Ormsheimer Weg");
        break;
    }
    case 242304:
    {
        returnValue = F("Ornachrundweg");
        break;
    }
    case 242305:
    {
        returnValue = F("Ornachstr.");
        break;
    }
    case 242306:
    {
        returnValue = F("Ornans-Ring");
        break;
    }
    case 242307:
    {
        returnValue = F("Ornauring");
        break;
    }
    case 242308:
    {
        returnValue = F("Ornbauer Str.");
        break;
    }
    case 242309:
    {
        returnValue = F("Orningstr.");
        break;
    }
    case 242310:
    {
        returnValue = F("Ornissteg");
        break;
    }
    case 242311:
    {
        returnValue = F("Ornithologischer Lehrpfad");
        break;
    }
    case 242312:
    {
        returnValue = F("Ornitologischer Lehrpfad");
        break;
    }
    case 242313:
    {
        returnValue = F("Ornsweg");
        break;
    }
    case 242314:
    {
        returnValue = F("Ornum Holz");
        break;
    }
    case 242315:
    {
        returnValue = F("Oro-Textil-Platz");
        break;
    }
    case 242316:
    {
        returnValue = F("Oroszlány Weg");
        break;
    }
    case 242317:
    {
        returnValue = F("Orpestr.");
        break;
    }
    case 242318:
    {
        returnValue = F("Orpethaler Str.");
        break;
    }
    case 242319:
    {
        returnValue = F("Orphaler Weg");
        break;
    }
    case 242320:
    {
        returnValue = F("Orpheus-Platz");
        break;
    }
    case 242321:
    {
        returnValue = F("Orpheusstr.");
        break;
    }
    case 242322:
    {
        returnValue = F("Orpheusweg");
        break;
    }
    case 242323:
    {
        returnValue = F("Orpingstr.");
        break;
    }
    case 242324:
    {
        returnValue = F("Orplid Frankfurt");
        break;
    }
    case 242325:
    {
        returnValue = F("Orrer Str.");
        break;
    }
    case 242326:
    {
        returnValue = F("Orrer Weg");
        break;
    }
    case 242327:
    {
        returnValue = F("Orrotstr.");
        break;
    }
    case 242328:
    {
        returnValue = F("Orsaystr.");
        break;
    }
    case 242329:
    {
        returnValue = F("Orsbacher Str.");
        break;
    }
    case 242330:
    {
        returnValue = F("Orsbeckstr.");
        break;
    }
    case 242331:
    {
        returnValue = F("Orsberger Str.");
        break;
    }
    case 242332:
    {
        returnValue = F("Orscheider Str.");
        break;
    }
    case 242333:
    {
        returnValue = F("Orschelsweg");
        break;
    }
    case 242334:
    {
        returnValue = F("Orschelweg");
        break;
    }
    case 242335:
    {
        returnValue = F("Orscholzer Str.");
        break;
    }
    case 242336:
    {
        returnValue = F("Orschweierer Str.");
        break;
    }
    case 242337:
    {
        returnValue = F("Orschweiererweg");
        break;
    }
    case 242338:
    {
        returnValue = F("Orsenhauser Str.");
        break;
    }
    case 242339:
    {
        returnValue = F("Orsenhauser Weg");
        break;
    }
    case 242340:
    {
        returnValue = F("Orsfelder Str.");
        break;
    }
    case 242341:
    {
        returnValue = F("Orsfelder Weg");
        break;
    }
    case 242342:
    {
        returnValue = F("Orsfeldweg");
        break;
    }
    case 242343:
    {
        returnValue = F("Orsinger Str.");
        break;
    }
    case 242344:
    {
        returnValue = F("Orsinistr.");
        break;
    }
    case 242345:
    {
        returnValue = F("Orsoyer Allee");
        break;
    }
    case 242346:
    {
        returnValue = F("Orsoyer Str.");
        break;
    }
    case 242347:
    {
        returnValue = F("Orspachweg");
        break;
    }
    case 242348:
    {
        returnValue = F("Ort");
        break;
    }
    case 242349:
    {
        returnValue = F("Ort Arnimswalde");
        break;
    }
    case 242350:
    {
        returnValue = F("Ort Berkenlatten");
        break;
    }
    case 242351:
    {
        returnValue = F("Ort Buchholz");
        break;
    }
    case 242352:
    {
        returnValue = F("Ort Böckenberg");
        break;
    }
    case 242353:
    {
        returnValue = F("Ort Fergitz");
        break;
    }
    case 242354:
    {
        returnValue = F("Ort Friedenfelde");
        break;
    }
    case 242355:
    {
        returnValue = F("Ort Groß Fredenwalde");
        break;
    }
    case 242356:
    {
        returnValue = F("Ort Gustavsruh");
        break;
    }
    case 242357:
    {
        returnValue = F("Ort Herrenstein");
        break;
    }
    case 242358:
    {
        returnValue = F("Ort Kaakstedt");
        break;
    }
    case 242359:
    {
        returnValue = F("Ort Klein Fredenwalde");
        break;
    }
    case 242360:
    {
        returnValue = F("Ort Krohnhorst");
        break;
    }
    case 242361:
    {
        returnValue = F("Ort Neudorf");
        break;
    }
    case 242362:
    {
        returnValue = F("Ort Pinnow");
        break;
    }
    case 242363:
    {
        returnValue = F("Ort Weiler");
        break;
    }
    case 242364:
    {
        returnValue = F("Ort Willmine");
        break;
    }
    case 242365:
    {
        returnValue = F("Ortbauerweg");
        break;
    }
    case 242366:
    {
        returnValue = F("Ortbeckstr.");
        break;
    }
    case 242367:
    {
        returnValue = F("Ortberg");
        break;
    }
    case 242368:
    {
        returnValue = F("Ortbergstr.");
        break;
    }
    case 242369:
    {
        returnValue = F("Ortbrookweg");
        break;
    }
    case 242370:
    {
        returnValue = F("Ortbruch");
        break;
    }
    case 242371:
    {
        returnValue = F("Ortdieck");
        break;
    }
    case 242372:
    {
        returnValue = F("Ortegastr.");
        break;
    }
    case 242373:
    {
        returnValue = F("Ortegaweg");
        break;
    }
    case 242374:
    {
        returnValue = F("Ortelbruch");
        break;
    }
    case 242375:
    {
        returnValue = F("Ortelsburger Ring");
        break;
    }
    case 242376:
    {
        returnValue = F("Ortelsburger Str.");
        break;
    }
    case 242377:
    {
        returnValue = F("Ortelsburger Weg");
        break;
    }
    case 242378:
    {
        returnValue = F("Ortelsburgweg");
        break;
    }
    case 242379:
    {
        returnValue = F("Ortelsdorfer Str.");
        break;
    }
    case 242380:
    {
        returnValue = F("Ortenau Park");
        break;
    }
    case 242381:
    {
        returnValue = F("Ortenauer Str.");
        break;
    }
    case 242382:
    {
        returnValue = F("Ortenauer Weg");
        break;
    }
    case 242383:
    {
        returnValue = F("Ortenauring");
        break;
    }
    case 242384:
    {
        returnValue = F("Ortenaustr.");
        break;
    }
    case 242385:
    {
        returnValue = F("Ortenauweg");
        break;
    }
    case 242386:
    {
        returnValue = F("Ortenberger Kreisel");
        break;
    }
    case 242387:
    {
        returnValue = F("Ortenberger Str.");
        break;
    }
    case 242388:
    {
        returnValue = F("Ortenbergplatz");
        break;
    }
    case 242389:
    {
        returnValue = F("Ortenbergsteg");
        break;
    }
    case 242390:
    {
        returnValue = F("Ortenbergstr.");
        break;
    }
    case 242391:
    {
        returnValue = F("Ortenbergweg");
        break;
    }
    case 242392:
    {
        returnValue = F("Ortenburger Ring");
        break;
    }
    case 242393:
    {
        returnValue = F("Ortenburger Str.");
        break;
    }
    case 242394:
    {
        returnValue = F("Ortenburgerstr.");
        break;
    }
    case 242395:
    {
        returnValue = F("Ortenburgerweg");
        break;
    }
    case 242396:
    {
        returnValue = F("Ortenburgring");
        break;
    }
    case 242397:
    {
        returnValue = F("Ortenburgstr.");
        break;
    }
    case 242398:
    {
        returnValue = F("Ortende");
        break;
    }
    case 242399:
    {
        returnValue = F("Ortenleite");
        break;
    }
    case 242400:
    {
        returnValue = F("Ortenshof");
        break;
    }
    case 242401:
    {
        returnValue = F("Orter Ringweg");
        break;
    }
    case 242402:
    {
        returnValue = F("Orter Str.");
        break;
    }
    case 242403:
    {
        returnValue = F("Orter Winkel");
        break;
    }
    case 242404:
    {
        returnValue = F("Ortererstr.");
        break;
    }
    case 242405:
    {
        returnValue = F("Ortermersch");
        break;
    }
    case 242406:
    {
        returnValue = F("Ortesweg");
        break;
    }
    case 242407:
    {
        returnValue = F("Ortfeld");
        break;
    }
    case 242408:
    {
        returnValue = F("Ortfelder Weg");
        break;
    }
    case 242409:
    {
        returnValue = F("Ortfeldstr.");
        break;
    }
    case 242410:
    {
        returnValue = F("Ortfeldweg");
        break;
    }
    case 242411:
    {
        returnValue = F("Ortfort");
        break;
    }
    case 242412:
    {
        returnValue = F("Orth-ab-Hagen-Str.");
        break;
    }
    case 242413:
    {
        returnValue = F("Orthagen");
        break;
    }
    case 242414:
    {
        returnValue = F("Orthalde");
        break;
    }
    case 242415:
    {
        returnValue = F("Orthaldenweg");
        break;
    }
    case 242416:
    {
        returnValue = F("Orthauser Moorweg");
        break;
    }
    case 242417:
    {
        returnValue = F("Ortheck");
        break;
    }
    case 242418:
    {
        returnValue = F("Ortheide");
        break;
    }
    case 242419:
    {
        returnValue = F("Ortheimer Weg");
        break;
    }
    case 242420:
    {
        returnValue = F("Orther Weg");
        break;
    }
    case 242421:
    {
        returnValue = F("Orthfeld");
        break;
    }
    case 242422:
    {
        returnValue = F("Orthleut");
        break;
    }
    case 242423:
    {
        returnValue = F("Orthof");
        break;
    }
    case 242424:
    {
        returnValue = F("Orthofener Str.");
        break;
    }
    case 242425:
    {
        returnValue = F("Ortholen");
        break;
    }
    case 242426:
    {
        returnValue = F("Ortholz");
        break;
    }
    case 242427:
    {
        returnValue = F("Ortholzweg");
        break;
    }
    case 242428:
    {
        returnValue = F("Orthstr.");
        break;
    }
    case 242429:
    {
        returnValue = F("Orthweg");
        break;
    }
    case 242430:
    {
        returnValue = F("Orthwiesen");
        break;
    }
    case 242431:
    {
        returnValue = F("Orthöve");
        break;
    }
    case 242432:
    {
        returnValue = F("Orthöver Weg");
        break;
    }
    case 242433:
    {
        returnValue = F("Ortinstr.");
        break;
    }
    case 242434:
    {
        returnValue = F("Ortkamp");
        break;
    }
    case 242435:
    {
        returnValue = F("Ortkampstr.");
        break;
    }
    case 242436:
    {
        returnValue = F("Ortkampsweg");
        break;
    }
    case 242437:
    {
        returnValue = F("Ortland");
        break;
    }
    case 242438:
    {
        returnValue = F("Ortlandsweg");
        break;
    }
    case 242439:
    {
        returnValue = F("Ortlerstr.");
        break;
    }
    case 242440:
    {
        returnValue = F("Ortlerweg");
        break;
    }
    case 242441:
    {
        returnValue = F("Ortlfinger Str.");
        break;
    }
    case 242442:
    {
        returnValue = F("Ortli");
        break;
    }
    case 242443:
    {
        returnValue = F("Ortliebstr.");
        break;
    }
    case 242444:
    {
        returnValue = F("Ortliebweg");
        break;
    }
    case 242445:
    {
        returnValue = F("Ortloffweg");
        break;
    }
    case 242446:
    {
        returnValue = F("Ortlohnpark");
        break;
    }
    case 242447:
    {
        returnValue = F("Ortlohnstr.");
        break;
    }
    case 242448:
    {
        returnValue = F("Ortlohstr.");
        break;
    }
    case 242449:
    {
        returnValue = F("Ortmannsdorfer Steig");
        break;
    }
    case 242450:
    {
        returnValue = F("Ortmannsdorfer Str.");
        break;
    }
    case 242451:
    {
        returnValue = F("Ortmannsheide");
        break;
    }
    case 242452:
    {
        returnValue = F("Ortmannsweg");
        break;
    }
    case 242453:
    {
        returnValue = F("Ortmannweg");
        break;
    }
    case 242454:
    {
        returnValue = F("Ortmaringer Str.");
        break;
    }
    case 242455:
    {
        returnValue = F("Ortmattstr.");
        break;
    }
    case 242456:
    {
        returnValue = F("Ortmühlenweg");
        break;
    }
    case 242457:
    {
        returnValue = F("Ortnergasse");
        break;
    }
    case 242458:
    {
        returnValue = F("Ortnerstr.");
        break;
    }
    case 242459:
    {
        returnValue = F("Ortnerweg");
        break;
    }
    case 242460:
    {
        returnValue = F("Ortrander Str.");
        break;
    }
    case 242461:
    {
        returnValue = F("Ortrudstr.");
        break;
    }
    case 242462:
    {
        returnValue = F("Ortrudweg");
        break;
    }
    case 242463:
    {
        returnValue = F("Ortrunweg");
        break;
    }
    case 242464:
    {
        returnValue = F("Ortsallee");
        break;
    }
    case 242465:
    {
        returnValue = F("Ortsanschluss Süd");
        break;
    }
    case 242466:
    {
        returnValue = F("Ortsberingweg");
        break;
    }
    case 242467:
    {
        returnValue = F("Ortsbitze");
        break;
    }
    case 242468:
    {
        returnValue = F("Ortsbruchstr.");
        break;
    }
    case 242469:
    {
        returnValue = F("Ortschmiedeweg");
        break;
    }
    case 242470:
    {
        returnValue = F("Ortseck");
        break;
    }
    case 242471:
    {
        returnValue = F("Ortseestr.");
        break;
    }
    case 242472:
    {
        returnValue = F("Ortseifener Str.");
        break;
    }
    case 242473:
    {
        returnValue = F("Ortsentlastungsstr.-West");
        break;
    }
    case 242474:
    {
        returnValue = F("Ortsetterweg");
        break;
    }
    case 242475:
    {
        returnValue = F("Ortsfeld");
        break;
    }
    case 242476:
    {
        returnValue = F("Ortsfelde");
        break;
    }
    case 242477:
    {
        returnValue = F("Ortsfelder Str.");
        break;
    }
    case 242478:
    {
        returnValue = F("Ortsfelsen");
        break;
    }
    case 242479:
    {
        returnValue = F("Ortsgarten");
        break;
    }
    case 242480:
    {
        returnValue = F("Ortsgasse");
        break;
    }
    case 242481:
    {
        returnValue = F("Ortsgraben");
        break;
    }
    case 242482:
    {
        returnValue = F("Ortsgrubenweg");
        break;
    }
    case 242483:
    {
        returnValue = F("Ortsheide");
        break;
    }
    case 242484:
    {
        returnValue = F("Ortshof");
        break;
    }
    case 242485:
    {
        returnValue = F("Ortshofstr.");
        break;
    }
    case 242486:
    {
        returnValue = F("Ortshäuser Str.");
        break;
    }
    case 242487:
    {
        returnValue = F("Ortsiedlung");
        break;
    }
    case 242488:
    {
        returnValue = F("Ortsiefen");
        break;
    }
    case 242489:
    {
        returnValue = F("Ortsiefer Str.");
        break;
    }
    case 242490:
    {
        returnValue = F("Ortskamp");
        break;
    }
    case 242491:
    {
        returnValue = F("Ortskern");
        break;
    }
    case 242492:
    {
        returnValue = F("Ortskernentlastungsstr.");
        break;
    }
    case 242493:
    {
        returnValue = F("Ortslietsbrücke");
        break;
    }
    case 242494:
    {
        returnValue = F("Ortsmitte");
        break;
    }
    case 242495:
    {
        returnValue = F("Ortspark");
        break;
    }
    case 242496:
    {
        returnValue = F("Ortspitz");
        break;
    }
    case 242497:
    {
        returnValue = F("Ortspitze");
        break;
    }
    case 242498:
    {
        returnValue = F("Ortsplatz");
        break;
    }
    case 242499:
    {
        returnValue = F("Ortspoth");
        break;
    }
    case 242500:
    {
        returnValue = F("Ortsrand");
        break;
    }
    case 242501:
    {
        returnValue = F("Ortsrand-Süd");
        break;
    }
    case 242502:
    {
        returnValue = F("Ortsrandsiedlung");
        break;
    }
    case 242503:
    {
        returnValue = F("Ortsrandstr.");
        break;
    }
    case 242504:
    {
        returnValue = F("Ortsrandstr. Ost");
        break;
    }
    case 242505:
    {
        returnValue = F("Ortsrandweg");
        break;
    }
    case 242506:
    {
        returnValue = F("Ortsriede");
        break;
    }
    case 242507:
    {
        returnValue = F("Ortsring");
        break;
    }
    case 242508:
    {
        returnValue = F("Ortsringweg");
        break;
    }
    case 242509:
    {
        returnValue = F("Ortsstr.");
        break;
    }
    case 242510:
    {
        returnValue = F("Ortsteil Peißel");
        break;
    }
    case 242511:
    {
        returnValue = F("Ortsteinstr.");
        break;
    }
    case 242512:
    {
        returnValue = F("Ortsteinweg");
        break;
    }
    case 242513:
    {
        returnValue = F("Ortstr.");
        break;
    }
    case 242514:
    {
        returnValue = F("Ortsumfahrung Benningen");
        break;
    }
    case 242515:
    {
        returnValue = F("Ortsumfahrung Schriesheim");
        break;
    }
    case 242516:
    {
        returnValue = F("Ortsumfahrung Sömmerda");
        break;
    }
    case 242517:
    {
        returnValue = F("Ortsumgehung");
        break;
    }
    case 242518:
    {
        returnValue = F("Ortsumgehung Aerzen");
        break;
    }
    case 242519:
    {
        returnValue = F("Ortsumgehung Bad Köstritz");
        break;
    }
    case 242520:
    {
        returnValue = F("Ortsumgehung Cottbus");
        break;
    }
    case 242521:
    {
        returnValue = F("Ortsumgehung Cottbus - Netzergänzung");
        break;
    }
    case 242522:
    {
        returnValue = F("Ortsumgehung Cottbus B 168n");
        break;
    }
    case 242523:
    {
        returnValue = F("Ortsumgehung Günnigfeld");
        break;
    }
    case 242524:
    {
        returnValue = F("Ortsumgehung Holzhausen");
        break;
    }
    case 242525:
    {
        returnValue = F("Ortsumgehung Kirchweyhe");
        break;
    }
    case 242526:
    {
        returnValue = F("Ortsumgehung Loyerberg");
        break;
    }
    case 242527:
    {
        returnValue = F("Ortsumgehung Münchberg B 289 neu");
        break;
    }
    case 242528:
    {
        returnValue = F("Ortsumgehung Rödemis");
        break;
    }
    case 242529:
    {
        returnValue = F("Ortsumgehung Zusmarshausen");
        break;
    }
    case 242530:
    {
        returnValue = F("Ortsverbindung Ohmenhausen");
        break;
    }
    case 242531:
    {
        returnValue = F("Ortsverbindungstr. Ahrensdorf-Gröben");
        break;
    }
    case 242532:
    {
        returnValue = F("Ortsweg");
        break;
    }
    case 242533:
    {
        returnValue = F("Ortswiesenweg");
        break;
    }
    case 242534:
    {
        returnValue = F("Ortszentrum");
        break;
    }
    case 242535:
    {
        returnValue = F("Orttal");
        break;
    }
    case 242536:
    {
        returnValue = F("Orttobelstr.");
        break;
    }
    case 242537:
    {
        returnValue = F("Ortwaldstr.");
        break;
    }
    case 242538:
    {
        returnValue = F("Ortwanger Au");
        break;
    }
    case 242539:
    {
        returnValue = F("Ortwanger Buind");
        break;
    }
    case 242540:
    {
        returnValue = F("Ortwanger Esch");
        break;
    }
    case 242541:
    {
        returnValue = F("Ortwanger Flur");
        break;
    }
    case 242542:
    {
        returnValue = F("Ortweg");
        break;
    }
    case 242543:
    {
        returnValue = F("Ortwehr-Str.");
        break;
    }
    case 242544:
    {
        returnValue = F("Ortweinstr.");
        break;
    }
    case 242545:
    {
        returnValue = F("Ortwicker Str.");
        break;
    }
    case 242546:
    {
        returnValue = F("Ortwiesenweg");
        break;
    }
    case 242547:
    {
        returnValue = F("Ortwiger Dorfstr.");
        break;
    }
    case 242548:
    {
        returnValue = F("Ortwiger Hauptstr.");
        break;
    }
    case 242549:
    {
        returnValue = F("Ortwiger Hehl");
        break;
    }
    case 242550:
    {
        returnValue = F("Ortwiger Kruschke");
        break;
    }
    case 242551:
    {
        returnValue = F("Ortwinstr.");
        break;
    }
    case 242552:
    {
        returnValue = F("Ortwinweg");
        break;
    }
    case 242553:
    {
        returnValue = F("Ortwisch");
        break;
    }
    case 242554:
    {
        returnValue = F("Ortäcker");
        break;
    }
    case 242555:
    {
        returnValue = F("Orvennsbahn");
        break;
    }
    case 242556:
    {
        returnValue = F("Orville-Wright-Str.");
        break;
    }
    case 242557:
    {
        returnValue = F("Orxhausen");
        break;
    }
    case 242558:
    {
        returnValue = F("Orzenstr.");
        break;
    }
    case 242559:
    {
        returnValue = F("Osangweg");
        break;
    }
    case 242560:
    {
        returnValue = F("Osannstr.");
        break;
    }
    case 242561:
    {
        returnValue = F("Osbek");
        break;
    }
    case 242562:
    {
        returnValue = F("Osberghausweg");
        break;
    }
    case 242563:
    {
        returnValue = F("Osburger Weg");
        break;
    }
    case 242564:
    {
        returnValue = F("Osburgerweg");
        break;
    }
    case 242565:
    {
        returnValue = F("Osbüsch");
        break;
    }
    case 242566:
    {
        returnValue = F("Oscar-Abisch-Weg");
        break;
    }
    case 242567:
    {
        returnValue = F("Oscar-Barnack-Str.");
        break;
    }
    case 242568:
    {
        returnValue = F("Oscar-Behrens-Str.");
        break;
    }
    case 242569:
    {
        returnValue = F("Oscar-Fehr-Weg");
        break;
    }
    case 242570:
    {
        returnValue = F("Oscar-Fichtner-Str.");
        break;
    }
    case 242571:
    {
        returnValue = F("Oscar-Fuckel-Weg");
        break;
    }
    case 242572:
    {
        returnValue = F("Oscar-Gans-Str.");
        break;
    }
    case 242573:
    {
        returnValue = F("Oscar-Grether-Str.");
        break;
    }
    case 242574:
    {
        returnValue = F("Oscar-Gross-Weg");
        break;
    }
    case 242575:
    {
        returnValue = F("Oscar-Kjelberg-Str.");
        break;
    }
    case 242576:
    {
        returnValue = F("Oscar-Kjellberg-Str.");
        break;
    }
    case 242577:
    {
        returnValue = F("Oscar-Paret-Str.");
        break;
    }
    case 242578:
    {
        returnValue = F("Oscar-Pletsch-Str.");
        break;
    }
    case 242579:
    {
        returnValue = F("Oscar-Romero-Allee");
        break;
    }
    case 242580:
    {
        returnValue = F("Oscar-Schlegelmilch-Weg");
        break;
    }
    case 242581:
    {
        returnValue = F("Oscar-Stalf-Ring");
        break;
    }
    case 242582:
    {
        returnValue = F("Oscar-Straus-Str.");
        break;
    }
    case 242583:
    {
        returnValue = F("Oscar-Struve-Weg");
        break;
    }
    case 242584:
    {
        returnValue = F("Oscar-Walcker-Str.");
        break;
    }
    case 242585:
    {
        returnValue = F("Oscar-Wilde-Str.");
        break;
    }
    case 242586:
    {
        returnValue = F("Oschatzer Str.");
        break;
    }
    case 242587:
    {
        returnValue = F("Oschatzer Weg");
        break;
    }
    case 242588:
    {
        returnValue = F("Oschatzweg");
        break;
    }
    case 242589:
    {
        returnValue = F("Oschenberg");
        break;
    }
    case 242590:
    {
        returnValue = F("Oschenbergweg");
        break;
    }
    case 242591:
    {
        returnValue = F("Oscherslebener Str.");
        break;
    }
    case 242592:
    {
        returnValue = F("Oschersleber Str.");
        break;
    }
    case 242593:
    {
        returnValue = F("Oschgasse");
        break;
    }
    case 242594:
    {
        returnValue = F("Oschitzer Str.");
        break;
    }
    case 242595:
    {
        returnValue = F("Oschwitz");
        break;
    }
    case 242596:
    {
        returnValue = F("Oschätzchener Str.");
        break;
    }
    case 242597:
    {
        returnValue = F("Oschützweg");
        break;
    }
    case 242598:
    {
        returnValue = F("Osdorfer Landstr.");
        break;
    }
    case 242599:
    {
        returnValue = F("Osdorfer Stieg");
        break;
    }
    case 242600:
    {
        returnValue = F("Osdorfer Str.");
        break;
    }
    case 242601:
    {
        returnValue = F("Ose-Weg");
        break;
    }
    case 242602:
    {
        returnValue = F("Oselbachstr.");
        break;
    }
    case 242603:
    {
        returnValue = F("Oselohfeld");
        break;
    }
    case 242604:
    {
        returnValue = F("Oselohweg");
        break;
    }
    case 242605:
    {
        returnValue = F("Osemundstr.");
        break;
    }
    case 242606:
    {
        returnValue = F("Osemundweg");
        break;
    }
    case 242607:
    {
        returnValue = F("Osenahamer Str.");
        break;
    }
    case 242608:
    {
        returnValue = F("Osenauer Str.");
        break;
    }
    case 242609:
    {
        returnValue = F("Osenbachstr.");
        break;
    }
    case 242610:
    {
        returnValue = F("Osendorf");
        break;
    }
    case 242611:
    {
        returnValue = F("Osendorfer Str.");
        break;
    }
    case 242612:
    {
        returnValue = F("Osendorferstr.");
        break;
    }
    case 242613:
    {
        returnValue = F("Osenstr.");
        break;
    }
    case 242614:
    {
        returnValue = F("Osenstätten");
        break;
    }
    case 242615:
    {
        returnValue = F("Oserstr.");
        break;
    }
    case 242616:
    {
        returnValue = F("Oserweg");
        break;
    }
    case 242617:
    {
        returnValue = F("Osetal");
        break;
    }
    case 242618:
    {
        returnValue = F("Osewoldter-Koog");
        break;
    }
    case 242619:
    {
        returnValue = F("Osianderstr.");
        break;
    }
    case 242620:
    {
        returnValue = F("Osianderweg");
        break;
    }
    case 242621:
    {
        returnValue = F("Osidweg");
        break;
    }
    case 242622:
    {
        returnValue = F("Osinger Weg");
        break;
    }
    case 242623:
    {
        returnValue = F("Osingstr.");
        break;
    }
    case 242624:
    {
        returnValue = F("Osingweg");
        break;
    }
    case 242625:
    {
        returnValue = F("Oskamp");
        break;
    }
    case 242626:
    {
        returnValue = F("Oskar Scheerer Platz");
        break;
    }
    case 242627:
    {
        returnValue = F("Oskar-Alexander-Str.");
        break;
    }
    case 242628:
    {
        returnValue = F("Oskar-Arnold-Str.");
        break;
    }
    case 242629:
    {
        returnValue = F("Oskar-Auster-Weg");
        break;
    }
    case 242630:
    {
        returnValue = F("Oskar-Bamberg-Str.");
        break;
    }
    case 242631:
    {
        returnValue = F("Oskar-Barnack-Str.");
        break;
    }
    case 242632:
    {
        returnValue = F("Oskar-Bauhardt-Str.");
        break;
    }
    case 242633:
    {
        returnValue = F("Oskar-Baumann-Str.");
        break;
    }
    case 242634:
    {
        returnValue = F("Oskar-Baur-Str.");
        break;
    }
    case 242635:
    {
        returnValue = F("Oskar-Bier-Str.");
        break;
    }
    case 242636:
    {
        returnValue = F("Oskar-Blödner-Str.");
        break;
    }
    case 242637:
    {
        returnValue = F("Oskar-Breitenborn-Str.");
        break;
    }
    case 242638:
    {
        returnValue = F("Oskar-Brückner-Ring");
        break;
    }
    case 242639:
    {
        returnValue = F("Oskar-Böttcher-Str.");
        break;
    }
    case 242640:
    {
        returnValue = F("Oskar-Bürkle-Str.");
        break;
    }
    case 242641:
    {
        returnValue = F("Oskar-Calov-Str.");
        break;
    }
    case 242642:
    {
        returnValue = F("Oskar-Coester-Str.");
        break;
    }
    case 242643:
    {
        returnValue = F("Oskar-Cohn-Str.");
        break;
    }
    case 242644:
    {
        returnValue = F("Oskar-Dietlmeier-Str.");
        break;
    }
    case 242645:
    {
        returnValue = F("Oskar-Dost-Str.");
        break;
    }
    case 242646:
    {
        returnValue = F("Oskar-Dreher-Weg");
        break;
    }
    case 242647:
    {
        returnValue = F("Oskar-Eckert-Str.");
        break;
    }
    case 242648:
    {
        returnValue = F("Oskar-Enslin-Str.");
        break;
    }
    case 242649:
    {
        returnValue = F("Oskar-Erb-Str.");
        break;
    }
    case 242650:
    {
        returnValue = F("Oskar-Erbslöh-Str.");
        break;
    }
    case 242651:
    {
        returnValue = F("Oskar-Faller-Str.");
        break;
    }
    case 242652:
    {
        returnValue = F("Oskar-Farny-Str.");
        break;
    }
    case 242653:
    {
        returnValue = F("Oskar-Fleischer-Str.");
        break;
    }
    case 242654:
    {
        returnValue = F("Oskar-Franz-Str.");
        break;
    }
    case 242655:
    {
        returnValue = F("Oskar-Frech-Platz");
        break;
    }
    case 242656:
    {
        returnValue = F("Oskar-Frech-Str.");
        break;
    }
    case 242657:
    {
        returnValue = F("Oskar-Frey-Str.");
        break;
    }
    case 242658:
    {
        returnValue = F("Oskar-Gebhardt-Str.");
        break;
    }
    case 242659:
    {
        returnValue = F("Oskar-Graemer-Str.");
        break;
    }
    case 242660:
    {
        returnValue = F("Oskar-Groll-Anlagen");
        break;
    }
    case 242661:
    {
        returnValue = F("Oskar-Großer-Str.");
        break;
    }
    case 242662:
    {
        returnValue = F("Oskar-Gründler-Str.");
        break;
    }
    case 242663:
    {
        returnValue = F("Oskar-Hartmann-Str.");
        break;
    }
    case 242664:
    {
        returnValue = F("Oskar-Hasenclever-Str.");
        break;
    }
    case 242665:
    {
        returnValue = F("Oskar-Heinze-Str.");
        break;
    }
    case 242666:
    {
        returnValue = F("Oskar-Hoffmann-Str.");
        break;
    }
    case 242667:
    {
        returnValue = F("Oskar-Hubl-Str.");
        break;
    }
    case 242668:
    {
        returnValue = F("Oskar-Hölzel-Str.");
        break;
    }
    case 242669:
    {
        returnValue = F("Oskar-Jenner-Weg");
        break;
    }
    case 242670:
    {
        returnValue = F("Oskar-Joos-Str.");
        break;
    }
    case 242671:
    {
        returnValue = F("Oskar-Jäger-Str.");
        break;
    }
    case 242672:
    {
        returnValue = F("Oskar-Jähner-Ring");
        break;
    }
    case 242673:
    {
        returnValue = F("Oskar-Jünger-Str.");
        break;
    }
    case 242674:
    {
        returnValue = F("Oskar-Kalbfell-Platz");
        break;
    }
    case 242675:
    {
        returnValue = F("Oskar-Kiefer-Str.");
        break;
    }
    case 242676:
    {
        returnValue = F("Oskar-Klein-Str.");
        break;
    }
    case 242677:
    {
        returnValue = F("Oskar-Klumpp-Str.");
        break;
    }
    case 242678:
    {
        returnValue = F("Oskar-Knufinke-Weg");
        break;
    }
    case 242679:
    {
        returnValue = F("Oskar-Kokoschka-Str.");
        break;
    }
    case 242680:
    {
        returnValue = F("Oskar-Krause-Str.");
        break;
    }
    case 242681:
    {
        returnValue = F("Oskar-Kreibich-Weg");
        break;
    }
    case 242682:
    {
        returnValue = F("Oskar-Kusch-Str.");
        break;
    }
    case 242683:
    {
        returnValue = F("Oskar-Kösters-Str.");
        break;
    }
    case 242684:
    {
        returnValue = F("Oskar-Kühlen-Str.");
        break;
    }
    case 242685:
    {
        returnValue = F("Oskar-Laredo-Platz");
        break;
    }
    case 242686:
    {
        returnValue = F("Oskar-Leistikow-Str.");
        break;
    }
    case 242687:
    {
        returnValue = F("Oskar-Lier-Str.");
        break;
    }
    case 242688:
    {
        returnValue = F("Oskar-Loew-Str.");
        break;
    }
    case 242689:
    {
        returnValue = F("Oskar-Lorenz-Str.");
        break;
    }
    case 242690:
    {
        returnValue = F("Oskar-Mai-Str.");
        break;
    }
    case 242691:
    {
        returnValue = F("Oskar-Maria-Graf-Str.");
        break;
    }
    case 242692:
    {
        returnValue = F("Oskar-Maria-Graf-Weg");
        break;
    }
    case 242693:
    {
        returnValue = F("Oskar-Maune-Str.");
        break;
    }
    case 242694:
    {
        returnValue = F("Oskar-Mayer-Str.");
        break;
    }
    case 242695:
    {
        returnValue = F("Oskar-Meixner-Str.");
        break;
    }
    case 242696:
    {
        returnValue = F("Oskar-Messter-Str.");
        break;
    }
    case 242697:
    {
        returnValue = F("Oskar-Metz-Str.");
        break;
    }
    case 242698:
    {
        returnValue = F("Oskar-Mey-Weg");
        break;
    }
    case 242699:
    {
        returnValue = F("Oskar-Meyer-Platz");
        break;
    }
    case 242700:
    {
        returnValue = F("Oskar-Meyrer-Str.");
        break;
    }
    case 242701:
    {
        returnValue = F("Oskar-Meßter-Str.");
        break;
    }
    case 242702:
    {
        returnValue = F("Oskar-Moll-Str.");
        break;
    }
    case 242703:
    {
        returnValue = F("Oskar-Moritz-Park");
        break;
    }
    case 242704:
    {
        returnValue = F("Oskar-Moritz-Str.");
        break;
    }
    case 242705:
    {
        returnValue = F("Oskar-Muser-Str.");
        break;
    }
    case 242706:
    {
        returnValue = F("Oskar-Märker-Str.");
        break;
    }
    case 242707:
    {
        returnValue = F("Oskar-Müller-Str.");
        break;
    }
    case 242708:
    {
        returnValue = F("Oskar-Picht-Str.");
        break;
    }
    case 242709:
    {
        returnValue = F("Oskar-Pletsch-Str.");
        break;
    }
    case 242710:
    {
        returnValue = F("Oskar-Pollner-Str.");
        break;
    }
    case 242711:
    {
        returnValue = F("Oskar-Popp-Str.");
        break;
    }
    case 242712:
    {
        returnValue = F("Oskar-Reime-Str.");
        break;
    }
    case 242713:
    {
        returnValue = F("Oskar-Rieß-Str.");
        break;
    }
    case 242714:
    {
        returnValue = F("Oskar-Rosenfelder-Str.");
        break;
    }
    case 242715:
    {
        returnValue = F("Oskar-Röder-Str.");
        break;
    }
    case 242716:
    {
        returnValue = F("Oskar-Sala-Str.");
        break;
    }
    case 242717:
    {
        returnValue = F("Oskar-Scherrer-Str.");
        break;
    }
    case 242718:
    {
        returnValue = F("Oskar-Schimmrohn-Str.");
        break;
    }
    case 242719:
    {
        returnValue = F("Oskar-Schindler-Str.");
        break;
    }
    case 242720:
    {
        returnValue = F("Oskar-Schlemmer-Ring");
        break;
    }
    case 242721:
    {
        returnValue = F("Oskar-Schlemmer-Str.");
        break;
    }
    case 242722:
    {
        returnValue = F("Oskar-Schlemmer-Weg");
        break;
    }
    case 242723:
    {
        returnValue = F("Oskar-Schlitter-Ring");
        break;
    }
    case 242724:
    {
        returnValue = F("Oskar-Schrade-Str.");
        break;
    }
    case 242725:
    {
        returnValue = F("Oskar-Schramm-Str.");
        break;
    }
    case 242726:
    {
        returnValue = F("Oskar-Schulz-Str.");
        break;
    }
    case 242727:
    {
        returnValue = F("Oskar-Schwenk-Str.");
        break;
    }
    case 242728:
    {
        returnValue = F("Oskar-Schüler-Str.");
        break;
    }
    case 242729:
    {
        returnValue = F("Oskar-Seifert-Str.");
        break;
    }
    case 242730:
    {
        returnValue = F("Oskar-Sembach-Ring");
        break;
    }
    case 242731:
    {
        returnValue = F("Oskar-Sembach-Str.");
        break;
    }
    case 242732:
    {
        returnValue = F("Oskar-Serrand-Str.");
        break;
    }
    case 242733:
    {
        returnValue = F("Oskar-Seyffert-Str.");
        break;
    }
    case 242734:
    {
        returnValue = F("Oskar-Stahl-Str.");
        break;
    }
    case 242735:
    {
        returnValue = F("Oskar-Stalf-Str.");
        break;
    }
    case 242736:
    {
        returnValue = F("Oskar-Stiefvater-Str.");
        break;
    }
    case 242737:
    {
        returnValue = F("Oskar-Stübinger-Str.");
        break;
    }
    case 242738:
    {
        returnValue = F("Oskar-Sänger-Str.");
        break;
    }
    case 242739:
    {
        returnValue = F("Oskar-Tenge-Weg");
        break;
    }
    case 242740:
    {
        returnValue = F("Oskar-Thein-Str.");
        break;
    }
    case 242741:
    {
        returnValue = F("Oskar-Then-Str.");
        break;
    }
    case 242742:
    {
        returnValue = F("Oskar-Trautmann-Str.");
        break;
    }
    case 242743:
    {
        returnValue = F("Oskar-Trinks-Str.");
        break;
    }
    case 242744:
    {
        returnValue = F("Oskar-Uhlmann-Str.");
        break;
    }
    case 242745:
    {
        returnValue = F("Oskar-Ursinus-Str.");
        break;
    }
    case 242746:
    {
        returnValue = F("Oskar-Volk-Str.");
        break;
    }
    case 242747:
    {
        returnValue = F("Oskar-Von-Miller-Str.");
        break;
    }
    case 242748:
    {
        returnValue = F("Oskar-Wachler-Weg");
        break;
    }
    case 242749:
    {
        returnValue = F("Oskar-Waldrich-Weg");
        break;
    }
    case 242750:
    {
        returnValue = F("Oskar-Walzel-Str.");
        break;
    }
    case 242751:
    {
        returnValue = F("Oskar-Weise-Str.");
        break;
    }
    case 242752:
    {
        returnValue = F("Oskar-Weitbrecht-Weg");
        break;
    }
    case 242753:
    {
        returnValue = F("Oskar-Wermann-Gasse");
        break;
    }
    case 242754:
    {
        returnValue = F("Oskar-Wettstein-Str.");
        break;
    }
    case 242755:
    {
        returnValue = F("Oskar-Wiederholz-Str.");
        break;
    }
    case 242756:
    {
        returnValue = F("Oskar-Winter-Str.");
        break;
    }
    case 242757:
    {
        returnValue = F("Oskar-Wittmann-Str.");
        break;
    }
    case 242758:
    {
        returnValue = F("Oskar-Wolff-Str.");
        break;
    }
    case 242759:
    {
        returnValue = F("Oskar-Zachau-Str.");
        break;
    }
    case 242760:
    {
        returnValue = F("Oskar-Zeller-Str.");
        break;
    }
    case 242761:
    {
        returnValue = F("Oskar-Zimper-Str.");
        break;
    }
    case 242762:
    {
        returnValue = F("Oskar-Zwintscher-Str.");
        break;
    }
    case 242763:
    {
        returnValue = F("Oskar-von-Arnim-Str.");
        break;
    }
    case 242764:
    {
        returnValue = F("Oskar-von-Brock-Str.");
        break;
    }
    case 242765:
    {
        returnValue = F("Oskar-von-Miller-Platz");
        break;
    }
    case 242766:
    {
        returnValue = F("Oskar-von-Miller-Str.");
        break;
    }
    case 242767:
    {
        returnValue = F("Oskar-von-Redwitz-Str.");
        break;
    }
    case 242768:
    {
        returnValue = F("Oskarstr.");
        break;
    }
    case 242769:
    {
        returnValue = F("Oskerheide");
        break;
    }
    case 242770:
    {
        returnValue = F("Oslang");
        break;
    }
    case 242771:
    {
        returnValue = F("Oslebshauser Landstr.");
        break;
    }
    case 242772:
    {
        returnValue = F("Osloer Str.");
        break;
    }
    case 242773:
    {
        returnValue = F("Osloer Weg");
        break;
    }
    case 242774:
    {
        returnValue = F("Osloring");
        break;
    }
    case 242775:
    {
        returnValue = F("Osloweg");
        break;
    }
    case 242776:
    {
        returnValue = F("Osloßer Str.");
        break;
    }
    case 242777:
    {
        returnValue = F("Osloßer Weg");
        break;
    }
    case 242778:
    {
        returnValue = F("Oslweg");
        break;
    }
    case 242779:
    {
        returnValue = F("Osmannsberg");
        break;
    }
    case 242780:
    {
        returnValue = F("Osmar-Schindler-Str.");
        break;
    }
    case 242781:
    {
        returnValue = F("Osmarslebener Gasse");
        break;
    }
    case 242782:
    {
        returnValue = F("Osmarslebener Weg");
        break;
    }
    case 242783:
    {
        returnValue = F("Osmecke");
        break;
    }
    case 242784:
    {
        returnValue = F("Osmersstr.");
        break;
    }
    case 242785:
    {
        returnValue = F("Osmiastr.");
        break;
    }
    case 242786:
    {
        returnValue = F("Osminghausen");
        break;
    }
    case 242787:
    {
        returnValue = F("Osmünder Str.");
        break;
    }
    case 242788:
    {
        returnValue = F("Osnabrücker Landstr.");
        break;
    }
    case 242789:
    {
        returnValue = F("Osnabrücker Ring");
        break;
    }
    case 242790:
    {
        returnValue = F("Osnabrücker Str.");
        break;
    }
    case 242791:
    {
        returnValue = F("Osnabrücker Weg");
        break;
    }
    case 242792:
    {
        returnValue = F("Osnabrückstr.");
        break;
    }
    case 242793:
    {
        returnValue = F("Osnabrückweg");
        break;
    }
    case 242794:
    {
        returnValue = F("Osningstr.");
        break;
    }
    case 242795:
    {
        returnValue = F("Osningweg");
        break;
    }
    case 242796:
    {
        returnValue = F("Osniweg");
        break;
    }
    case 242797:
    {
        returnValue = F("Osolfstr.");
        break;
    }
    case 242798:
    {
        returnValue = F("Ospelewaldweg");
        break;
    }
    case 242799:
    {
        returnValue = F("Ospelstr.");
        break;
    }
    case 242800:
    {
        returnValue = F("Ospenke");
        break;
    }
    case 242801:
    {
        returnValue = F("Osperfeld");
        break;
    }
    case 242802:
    {
        returnValue = F("Osquarder Weg");
        break;
    }
    case 242803:
    {
        returnValue = F("Osramplatz");
        break;
    }
    case 242804:
    {
        returnValue = F("Osramstr.");
        break;
    }
    case 242805:
    {
        returnValue = F("Osramweg");
        break;
    }
    case 242806:
    {
        returnValue = F("Oss-Peter-Weg");
        break;
    }
    case 242807:
    {
        returnValue = F("Ossa");
        break;
    }
    case 242808:
    {
        returnValue = F("Ossaer Weg");
        break;
    }
    case 242809:
    {
        returnValue = F("Ossangerweg");
        break;
    }
    case 242810:
    {
        returnValue = F("Ossaweg");
        break;
    }
    case 242811:
    {
        returnValue = F("Osselbruchweg");
        break;
    }
    case 242812:
    {
        returnValue = F("Ossenbarg");
        break;
    }
    case 242813:
    {
        returnValue = F("Ossenbeck");
        break;
    }
    case 242814:
    {
        returnValue = F("Ossenbecker Str.");
        break;
    }
    case 242815:
    {
        returnValue = F("Ossenbeeke");
        break;
    }
    case 242816:
    {
        returnValue = F("Ossenberg");
        break;
    }
    case 242817:
    {
        returnValue = F("Ossenberger Str.");
        break;
    }
    case 242818:
    {
        returnValue = F("Ossenbergweg");
        break;
    }
    case 242819:
    {
        returnValue = F("Ossenblink");
        break;
    }
    case 242820:
    {
        returnValue = F("Ossenbrink");
        break;
    }
    case 242821:
    {
        returnValue = F("Ossenbruch");
        break;
    }
    case 242822:
    {
        returnValue = F("Ossenbrucher Weg");
        break;
    }
    case 242823:
    {
        returnValue = F("Ossendamm");
        break;
    }
    case 242824:
    {
        returnValue = F("Ossendorfer Chaussee");
        break;
    }
    case 242825:
    {
        returnValue = F("Ossendorfer Str.");
        break;
    }
    case 242826:
    {
        returnValue = F("Ossendorfer Weg");
        break;
    }
    case 242827:
    {
        returnValue = F("Ossendrift");
        break;
    }
    case 242828:
    {
        returnValue = F("Ossenfelder Weg");
        break;
    }
    case 242829:
    {
        returnValue = F("Ossenfort");
        break;
    }
    case 242830:
    {
        returnValue = F("Ossengoot");
        break;
    }
    case 242831:
    {
        returnValue = F("Ossenheimer Str.");
        break;
    }
    case 242832:
    {
        returnValue = F("Ossenholm");
        break;
    }
    case 242833:
    {
        returnValue = F("Ossenhöfe");
        break;
    }
    case 242834:
    {
        returnValue = F("Ossenkamp");
        break;
    }
    case 242835:
    {
        returnValue = F("Ossenkampweg");
        break;
    }
    case 242836:
    {
        returnValue = F("Ossenkoppweg");
        break;
    }
    case 242837:
    {
        returnValue = F("Ossenkuhle");
        break;
    }
    case 242838:
    {
        returnValue = F("Ossenkämpers Ufer");
        break;
    }
    case 242839:
    {
        returnValue = F("Ossenmoor");
        break;
    }
    case 242840:
    {
        returnValue = F("Ossenmoorring");
        break;
    }
    case 242841:
    {
        returnValue = F("Ossenohr");
        break;
    }
    case 242842:
    {
        returnValue = F("Ossenpadd");
        break;
    }
    case 242843:
    {
        returnValue = F("Ossenpadd-Nebenweg");
        break;
    }
    case 242844:
    {
        returnValue = F("Ossenpaß");
        break;
    }
    case 242845:
    {
        returnValue = F("Ossenrehn");
        break;
    }
    case 242846:
    {
        returnValue = F("Ossenrüher Weg");
        break;
    }
    case 242847:
    {
        returnValue = F("Ossenschloge");
        break;
    }
    case 242848:
    {
        returnValue = F("Ossensetmoorweg");
        break;
    }
    case 242849:
    {
        returnValue = F("Ossensettweg");
        break;
    }
    case 242850:
    {
        returnValue = F("Ossensetweg");
        break;
    }
    case 242851:
    {
        returnValue = F("Ossensteg");
        break;
    }
    case 242852:
    {
        returnValue = F("Ossenstege");
        break;
    }
    case 242853:
    {
        returnValue = F("Ossenstieg");
        break;
    }
    case 242854:
    {
        returnValue = F("Ossenstücken");
        break;
    }
    case 242855:
    {
        returnValue = F("Ossenweg");
        break;
    }
    case 242856:
    {
        returnValue = F("Ossenwende");
        break;
    }
    case 242857:
    {
        returnValue = F("Ossenzhausen");
        break;
    }
    case 242858:
    {
        returnValue = F("Osser-Riesen-Steig");
        break;
    }
    case 242859:
    {
        returnValue = F("Osserhäng");
        break;
    }
    case 242860:
    {
        returnValue = F("Osserich");
        break;
    }
    case 242861:
    {
        returnValue = F("Osserpfad");
        break;
    }
    case 242862:
    {
        returnValue = F("Ossersattelstr.");
        break;
    }
    case 242863:
    {
        returnValue = F("Osserstr.");
        break;
    }
    case 242864:
    {
        returnValue = F("Osserweg");
        break;
    }
    case 242865:
    {
        returnValue = F("Osserwiese");
        break;
    }
    case 242866:
    {
        returnValue = F("Ossestr.");
        break;
    }
    case 242867:
    {
        returnValue = F("Osseweg");
        break;
    }
    case 242868:
    {
        returnValue = F("Ossiacher Weg");
        break;
    }
    case 242869:
    {
        returnValue = F("Ossianweg");
        break;
    }
    case 242870:
    {
        returnValue = F("Ossietzkyallee");
        break;
    }
    case 242871:
    {
        returnValue = F("Ossietzkyplatz");
        break;
    }
    case 242872:
    {
        returnValue = F("Ossietzkyring");
        break;
    }
    case 242873:
    {
        returnValue = F("Ossietzkystr.");
        break;
    }
    case 242874:
    {
        returnValue = F("Ossietzkyweg");
        break;
    }
    case 242875:
    {
        returnValue = F("Ossiger Str.");
        break;
    }
    case 242876:
    {
        returnValue = F("Ossingerstr.");
        break;
    }
    case 242877:
    {
        returnValue = F("Ossingerweg");
        break;
    }
    case 242878:
    {
        returnValue = F("Ossip-Mandelstam-Str.");
        break;
    }
    case 242879:
    {
        returnValue = F("Ossostr.");
        break;
    }
    case 242880:
    {
        returnValue = F("Ossum");
        break;
    }
    case 242881:
    {
        returnValue = F("Ossumer Str.");
        break;
    }
    case 242882:
    {
        returnValue = F("Ost");
        break;
    }
    case 242883:
    {
        returnValue = F("Ost-6");
        break;
    }
    case 242884:
    {
        returnValue = F("Ost-Bordelumfeld");
        break;
    }
    case 242885:
    {
        returnValue = F("Ost-Contrescarpe");
        break;
    }
    case 242886:
    {
        returnValue = F("Ost-Weg");
        break;
    }
    case 242887:
    {
        returnValue = F("Ost-West Schneise");
        break;
    }
    case 242888:
    {
        returnValue = F("Ost-West-Brücke");
        break;
    }
    case 242889:
    {
        returnValue = F("Ost-West-Passage");
        break;
    }
    case 242890:
    {
        returnValue = F("Ost-West-Ring");
        break;
    }
    case 242891:
    {
        returnValue = F("Ost-West-Spange");
        break;
    }
    case 242892:
    {
        returnValue = F("Ost-West-Str.");
        break;
    }
    case 242893:
    {
        returnValue = F("Ost-West-Weg");
        break;
    }
    case 242894:
    {
        returnValue = F("Ostackerweg");
        break;
    }
    case 242895:
    {
        returnValue = F("Ostafrikastr.");
        break;
    }
    case 242896:
    {
        returnValue = F("Ostalbstr.");
        break;
    }
    case 242897:
    {
        returnValue = F("Ostallee");
        break;
    }
    case 242898:
    {
        returnValue = F("Ostanger");
        break;
    }
    case 242899:
    {
        returnValue = F("Ostanlage");
        break;
    }
    case 242900:
    {
        returnValue = F("Ostarastr.");
        break;
    }
    case 242901:
    {
        returnValue = F("Ostaraweg");
        break;
    }
    case 242902:
    {
        returnValue = F("Ostaring");
        break;
    }
    case 242903:
    {
        returnValue = F("Ostarler Weg");
        break;
    }
    case 242904:
    {
        returnValue = F("Ostastr.");
        break;
    }
    case 242905:
    {
        returnValue = F("Ostauweg");
        break;
    }
    case 242906:
    {
        returnValue = F("Ostbaarstr.");
        break;
    }
    case 242907:
    {
        returnValue = F("Ostbachtal");
        break;
    }
    case 242908:
    {
        returnValue = F("Ostbachweg");
        break;
    }
    case 242909:
    {
        returnValue = F("Ostbahn");
        break;
    }
    case 242910:
    {
        returnValue = F("Ostbahnhof");
        break;
    }
    case 242911:
    {
        returnValue = F("Ostbahnhofstr.");
        break;
    }
    case 242912:
    {
        returnValue = F("Ostbahnstr.");
        break;
    }
    case 242913:
    {
        returnValue = F("Ostbarger Weg");
        break;
    }
    case 242914:
    {
        returnValue = F("Ostbense an der L 5");
        break;
    }
    case 242915:
    {
        returnValue = F("Ostberg");
        break;
    }
    case 242916:
    {
        returnValue = F("Ostberger Str.");
        break;
    }
    case 242917:
    {
        returnValue = F("Ostbeverner Damm");
        break;
    }
    case 242918:
    {
        returnValue = F("Ostbeverner Str.");
        break;
    }
    case 242919:
    {
        returnValue = F("Ostbezirk");
        break;
    }
    case 242920:
    {
        returnValue = F("Ostbleiche");
        break;
    }
    case 242921:
    {
        returnValue = F("Ostblick");
        break;
    }
    case 242922:
    {
        returnValue = F("Ostbredenstr.");
        break;
    }
    case 242923:
    {
        returnValue = F("Ostbrink");
        break;
    }
    case 242924:
    {
        returnValue = F("Ostbusch");
        break;
    }
    case 242925:
    {
        returnValue = F("Ostbürener Str.");
        break;
    }
    case 242926:
    {
        returnValue = F("Ostbürener Weg");
        break;
    }
    case 242927:
    {
        returnValue = F("Ostcharweg");
        break;
    }
    case 242928:
    {
        returnValue = F("Ostdamm");
        break;
    }
    case 242929:
    {
        returnValue = F("Ostdeutsche Allee");
        break;
    }
    case 242930:
    {
        returnValue = F("Ostdeutsche Siedlung");
        break;
    }
    case 242931:
    {
        returnValue = F("Ostdeutsche Str.");
        break;
    }
    case 242932:
    {
        returnValue = F("Ostdeutscher Ring");
        break;
    }
    case 242933:
    {
        returnValue = F("Ostdeutscher Weg");
        break;
    }
    case 242934:
    {
        returnValue = F("Ostdolberger Weg");
        break;
    }
    case 242935:
    {
        returnValue = F("Ostdorf");
        break;
    }
    case 242936:
    {
        returnValue = F("Ostdorfer Str.");
        break;
    }
    case 242937:
    {
        returnValue = F("Ostdorfer Süderweg");
        break;
    }
    case 242938:
    {
        returnValue = F("Ostdorfstr.");
        break;
    }
    case 242939:
    {
        returnValue = F("Ostdreeskweg");
        break;
    }
    case 242940:
    {
        returnValue = F("Osteau");
        break;
    }
    case 242941:
    {
        returnValue = F("Osteaue");
        break;
    }
    case 242942:
    {
        returnValue = F("Osteblick");
        break;
    }
    case 242943:
    {
        returnValue = F("Osteck");
        break;
    }
    case 242944:
    {
        returnValue = F("Ostedeich");
        break;
    }
    case 242945:
    {
        returnValue = F("Osteeler Altendeich");
        break;
    }
    case 242946:
    {
        returnValue = F("Osteeler Campen");
        break;
    }
    case 242947:
    {
        returnValue = F("Ostegrund");
        break;
    }
    case 242948:
    {
        returnValue = F("Ostehallenstr.");
        break;
    }
    case 242949:
    {
        returnValue = F("Osteinstr.");
        break;
    }
    case 242950:
    {
        returnValue = F("Osteinunterführung");
        break;
    }
    case 242951:
    {
        returnValue = F("Ostelsheimer Str.");
        break;
    }
    case 242952:
    {
        returnValue = F("Ostelweg");
        break;
    }
    case 242953:
    {
        returnValue = F("Osten de Kark");
        break;
    }
    case 242954:
    {
        returnValue = F("Osten-Sacken-Weg");
        break;
    }
    case 242955:
    {
        returnValue = F("Ostenallee");
        break;
    }
    case 242956:
    {
        returnValue = F("Ostenau Dorf");
        break;
    }
    case 242957:
    {
        returnValue = F("Ostenauer Weg");
        break;
    }
    case 242958:
    {
        returnValue = F("Ostenbachstr.");
        break;
    }
    case 242959:
    {
        returnValue = F("Ostenbeck");
        break;
    }
    case 242960:
    {
        returnValue = F("Ostenbergstr.");
        break;
    }
    case 242961:
    {
        returnValue = F("Ostenbrunnenstr.");
        break;
    }
    case 242962:
    {
        returnValue = F("Ostend");
        break;
    }
    case 242963:
    {
        returnValue = F("Ostendahl");
        break;
    }
    case 242964:
    {
        returnValue = F("Ostendallee");
        break;
    }
    case 242965:
    {
        returnValue = F("Ostendamm");
        break;
    }
    case 242966:
    {
        returnValue = F("Ostendarper Str.");
        break;
    }
    case 242967:
    {
        returnValue = F("Ostendarpweg");
        break;
    }
    case 242968:
    {
        returnValue = F("Ostende");
        break;
    }
    case 242969:
    {
        returnValue = F("Ostender Höhen");
        break;
    }
    case 242970:
    {
        returnValue = F("Ostender Str.");
        break;
    }
    case 242971:
    {
        returnValue = F("Ostender Weg");
        break;
    }
    case 242972:
    {
        returnValue = F("Ostendestr.");
        break;
    }
    case 242973:
    {
        returnValue = F("Ostendeweg");
        break;
    }
    case 242974:
    {
        returnValue = F("Ostendgasse");
        break;
    }
    case 242975:
    {
        returnValue = F("Ostendorf");
        break;
    }
    case 242976:
    {
        returnValue = F("Ostendorfallee");
        break;
    }
    case 242977:
    {
        returnValue = F("Ostendorfer Str.");
        break;
    }
    case 242978:
    {
        returnValue = F("Ostendorfer Utdamm");
        break;
    }
    case 242979:
    {
        returnValue = F("Ostendorferstr.");
        break;
    }
    case 242980:
    {
        returnValue = F("Ostendorfplatz");
        break;
    }
    case 242981:
    {
        returnValue = F("Ostendorfs Hof");
        break;
    }
    case 242982:
    {
        returnValue = F("Ostendorfstr.");
        break;
    }
    case 242983:
    {
        returnValue = F("Ostendorfweg");
        break;
    }
    case 242984:
    {
        returnValue = F("Ostendorphskamp");
        break;
    }
    case 242985:
    {
        returnValue = F("Ostendplatz");
        break;
    }
    case 242986:
    {
        returnValue = F("Ostendsiedlung");
        break;
    }
    case 242987:
    {
        returnValue = F("Ostendstaffel");
        break;
    }
    case 242988:
    {
        returnValue = F("Ostendstr.");
        break;
    }
    case 242989:
    {
        returnValue = F("Ostendweg");
        break;
    }
    case 242990:
    {
        returnValue = F("Ostener Feldweg");
        break;
    }
    case 242991:
    {
        returnValue = F("Ostener Kuften");
        break;
    }
    case 242992:
    {
        returnValue = F("Ostener Ring");
        break;
    }
    case 242993:
    {
        returnValue = F("Ostener Str.");
        break;
    }
    case 242994:
    {
        returnValue = F("Ostenfeld");
        break;
    }
    case 242995:
    {
        returnValue = F("Ostenfelde");
        break;
    }
    case 242996:
    {
        returnValue = F("Ostenfelder Landstr.");
        break;
    }
    case 242997:
    {
        returnValue = F("Ostenfelder Str.");
        break;
    }
    case 242998:
    {
        returnValue = F("Ostenfelder Weg");
        break;
    }
    case 242999:
    {
        returnValue = F("Ostenfeldmark");
        break;
    }
    case 243000:
    {
        returnValue = F("Ostengarten");
        break;
    }
    case 243001:
    {
        returnValue = F("Ostengasse");
        break;
    }
    case 243002:
    {
        returnValue = F("Ostengraben");
        break;
    }
    case 243003:
    {
        returnValue = F("Ostenheide");
        break;
    }
    case 243004:
    {
        returnValue = F("Ostenhellweg");
        break;
    }
    case 243005:
    {
        returnValue = F("Ostenholz");
        break;
    }
    case 243006:
    {
        returnValue = F("Ostenholzer Str.");
        break;
    }
    case 243007:
    {
        returnValue = F("Ostenkamp");
        break;
    }
    case 243008:
    {
        returnValue = F("Ostenkoppel");
        break;
    }
    case 243009:
    {
        returnValue = F("Ostenländer Str.");
        break;
    }
    case 243010:
    {
        returnValue = F("Ostenmauer");
        break;
    }
    case 243011:
    {
        returnValue = F("Ostenmayerstr.");
        break;
    }
    case 243012:
    {
        returnValue = F("Ostenmeer");
        break;
    }
    case 243013:
    {
        returnValue = F("Ostenpforte");
        break;
    }
    case 243014:
    {
        returnValue = F("Ostenriederstr.");
        break;
    }
    case 243015:
    {
        returnValue = F("Ostenring");
        break;
    }
    case 243016:
    {
        returnValue = F("Ostenschlahstr.");
        break;
    }
    case 243017:
    {
        returnValue = F("Ostensieker Weg");
        break;
    }
    case 243018:
    {
        returnValue = F("Ostenstr.");
        break;
    }
    case 243019:
    {
        returnValue = F("Ostenthann");
        break;
    }
    case 243020:
    {
        returnValue = F("Ostentor");
        break;
    }
    case 243021:
    {
        returnValue = F("Ostenwalder Str.");
        break;
    }
    case 243022:
    {
        returnValue = F("Ostenwalder Weg");
        break;
    }
    case 243023:
    {
        returnValue = F("Ostenwall");
        break;
    }
    case 243024:
    {
        returnValue = F("Ostenweg");
        break;
    }
    case 243025:
    {
        returnValue = F("Ostenwende");
        break;
    }
    case 243026:
    {
        returnValue = F("Oster");
        break;
    }
    case 243027:
    {
        returnValue = F("Oster Dör");
        break;
    }
    case 243028:
    {
        returnValue = F("Oster Thun");
        break;
    }
    case 243029:
    {
        returnValue = F("Oster Toft");
        break;
    }
    case 243030:
    {
        returnValue = F("Oster-Liederweg");
        break;
    }
    case 243031:
    {
        returnValue = F("Osteracker");
        break;
    }
    case 243032:
    {
        returnValue = F("Osterackerweg");
        break;
    }
    case 243033:
    {
        returnValue = F("Osteraden");
        break;
    }
    case 243034:
    {
        returnValue = F("Osterallee");
        break;
    }
    case 243035:
    {
        returnValue = F("Osteranger");
        break;
    }
    case 243036:
    {
        returnValue = F("Osterangerstr.");
        break;
    }
    case 243037:
    {
        returnValue = F("Osterangerweg");
        break;
    }
    case 243038:
    {
        returnValue = F("Osteranwand");
        break;
    }
    case 243039:
    {
        returnValue = F("Osterather Str.");
        break;
    }
    case 243040:
    {
        returnValue = F("Osterather Weg");
        break;
    }
    case 243041:
    {
        returnValue = F("Osterbach");
        break;
    }
    case 243042:
    {
        returnValue = F("Osterbach weg");
        break;
    }
    case 243043:
    {
        returnValue = F("Osterbacher Weg");
        break;
    }
    case 243044:
    {
        returnValue = F("Osterbachgasse");
        break;
    }
    case 243045:
    {
        returnValue = F("Osterbachstr.");
        break;
    }
    case 243046:
    {
        returnValue = F("Osterbachtal");
        break;
    }
    case 243047:
    {
        returnValue = F("Osterbachweg");
        break;
    }
    case 243048:
    {
        returnValue = F("Osterbahn");
        break;
    }
    case 243049:
    {
        returnValue = F("Osterbahnstr.");
        break;
    }
    case 243050:
    {
        returnValue = F("Osterballig");
        break;
    }
    case 243051:
    {
        returnValue = F("Osterbauer");
        break;
    }
    case 243052:
    {
        returnValue = F("Osterbeckbrücke");
        break;
    }
    case 243053:
    {
        returnValue = F("Osterbeek");
        break;
    }
    case 243054:
    {
        returnValue = F("Osterbeeke");
        break;
    }
    case 243055:
    {
        returnValue = F("Osterbegrweg");
        break;
    }
    case 243056:
    {
        returnValue = F("Osterbeke");
        break;
    }
    case 243057:
    {
        returnValue = F("Osterbekstr.");
        break;
    }
    case 243058:
    {
        returnValue = F("Osterberg");
        break;
    }
    case 243059:
    {
        returnValue = F("Osterbergacker");
        break;
    }
    case 243060:
    {
        returnValue = F("Osterberger Str.");
        break;
    }
    case 243061:
    {
        returnValue = F("Osterbergfeld");
        break;
    }
    case 243062:
    {
        returnValue = F("Osterbergs Feld");
        break;
    }
    case 243063:
    {
        returnValue = F("Osterbergstr.");
        break;
    }
    case 243064:
    {
        returnValue = F("Osterbergsweg");
        break;
    }
    case 243065:
    {
        returnValue = F("Osterbergweg");
        break;
    }
    case 243066:
    {
        returnValue = F("Osterbichlstr.");
        break;
    }
    case 243067:
    {
        returnValue = F("Osterbinde");
        break;
    }
    case 243068:
    {
        returnValue = F("Osterbinder Str.");
        break;
    }
    case 243069:
    {
        returnValue = F("Osterbitz");
        break;
    }
    case 243070:
    {
        returnValue = F("Osterblenze");
        break;
    }
    case 243071:
    {
        returnValue = F("Osterblumenweg");
        break;
    }
    case 243072:
    {
        returnValue = F("Osterbollhaus");
        break;
    }
    case 243073:
    {
        returnValue = F("Osterborn");
        break;
    }
    case 243074:
    {
        returnValue = F("Osterbornweg");
        break;
    }
    case 243075:
    {
        returnValue = F("Osterbrak");
        break;
    }
    case 243076:
    {
        returnValue = F("Osterbraker Str.");
        break;
    }
    case 243077:
    {
        returnValue = F("Osterbreede");
        break;
    }
    case 243078:
    {
        returnValue = F("Osterbrei");
        break;
    }
    case 243079:
    {
        returnValue = F("Osterbreite");
        break;
    }
    case 243080:
    {
        returnValue = F("Osterbrink");
        break;
    }
    case 243081:
    {
        returnValue = F("Osterbrinkstr.");
        break;
    }
    case 243082:
    {
        returnValue = F("Osterbrocker Str.");
        break;
    }
    case 243083:
    {
        returnValue = F("Osterbroksand");
        break;
    }
    case 243084:
    {
        returnValue = F("Osterbrook");
        break;
    }
    case 243085:
    {
        returnValue = F("Osterbrookstr.");
        break;
    }
    case 243086:
    {
        returnValue = F("Osterbrookweg");
        break;
    }
    case 243087:
    {
        returnValue = F("Osterbruch");
        break;
    }
    case 243088:
    {
        returnValue = F("Osterbruchdamm");
        break;
    }
    case 243089:
    {
        returnValue = F("Osterbruchweg");
        break;
    }
    case 243090:
    {
        returnValue = F("Osterbrunnen");
        break;
    }
    case 243091:
    {
        returnValue = F("Osterbrunnenweg");
        break;
    }
    case 243092:
    {
        returnValue = F("Osterbrückenweg");
        break;
    }
    case 243093:
    {
        returnValue = F("Osterbrücker Weg");
        break;
    }
    case 243094:
    {
        returnValue = F("Osterbrünneleweg");
        break;
    }
    case 243095:
    {
        returnValue = F("Osterbrünnlstr.");
        break;
    }
    case 243096:
    {
        returnValue = F("Osterbuch");
        break;
    }
    case 243097:
    {
        returnValue = F("Osterbuchberger Weg");
        break;
    }
    case 243098:
    {
        returnValue = F("Osterbucher Steige");
        break;
    }
    case 243099:
    {
        returnValue = F("Osterbucher Str.");
        break;
    }
    case 243100:
    {
        returnValue = F("Osterbuchweg");
        break;
    }
    case 243101:
    {
        returnValue = F("Osterbultsweg");
        break;
    }
    case 243102:
    {
        returnValue = F("Osterburger Privatweg");
        break;
    }
    case 243103:
    {
        returnValue = F("Osterburger Str.");
        break;
    }
    case 243104:
    {
        returnValue = F("Osterburger Weg");
        break;
    }
    case 243105:
    {
        returnValue = F("Osterburgstr.");
        break;
    }
    case 243106:
    {
        returnValue = F("Osterburkener Str.");
        break;
    }
    case 243107:
    {
        returnValue = F("Osterburker Str.");
        break;
    }
    case 243108:
    {
        returnValue = F("Osterbusch");
        break;
    }
    case 243109:
    {
        returnValue = F("Osterbutvenne");
        break;
    }
    case 243110:
    {
        returnValue = F("Osterbyer Str.");
        break;
    }
    case 243111:
    {
        returnValue = F("Osterbylund");
        break;
    }
    case 243112:
    {
        returnValue = F("Osterbönener Weg");
        break;
    }
    case 243113:
    {
        returnValue = F("Osterbühlstr.");
        break;
    }
    case 243114:
    {
        returnValue = F("Osterbünge-Nord");
        break;
    }
    case 243115:
    {
        returnValue = F("Osterbünge-Süd");
        break;
    }
    case 243116:
    {
        returnValue = F("Osterbünte");
        break;
    }
    case 243117:
    {
        returnValue = F("Osterbüttel");
        break;
    }
    case 243118:
    {
        returnValue = F("Ostercadewisch");
        break;
    }
    case 243119:
    {
        returnValue = F("Ostercappelner Str.");
        break;
    }
    case 243120:
    {
        returnValue = F("Osterdahl");
        break;
    }
    case 243121:
    {
        returnValue = F("Osterdamm");
        break;
    }
    case 243122:
    {
        returnValue = F("Osterdammer Str.");
        break;
    }
    case 243123:
    {
        returnValue = F("Osterdeich");
        break;
    }
    case 243124:
    {
        returnValue = F("Osterdeicher Weg");
        break;
    }
    case 243125:
    {
        returnValue = F("Osterdeichweg");
        break;
    }
    case 243126:
    {
        returnValue = F("Osterdieck");
        break;
    }
    case 243127:
    {
        returnValue = F("Osterdiecksfeld");
        break;
    }
    case 243128:
    {
        returnValue = F("Osterdiek");
        break;
    }
    case 243129:
    {
        returnValue = F("Osterdieksweg");
        break;
    }
    case 243130:
    {
        returnValue = F("Osterdoor");
        break;
    }
    case 243131:
    {
        returnValue = F("Osterdorf");
        break;
    }
    case 243132:
    {
        returnValue = F("Osterehlbeck");
        break;
    }
    case 243133:
    {
        returnValue = F("Ostereiche");
        break;
    }
    case 243134:
    {
        returnValue = F("Ostereichen");
        break;
    }
    case 243135:
    {
        returnValue = F("Ostereichfeld");
        break;
    }
    case 243136:
    {
        returnValue = F("Ostereistedter Str.");
        break;
    }
    case 243137:
    {
        returnValue = F("Osteren");
        break;
    }
    case 243138:
    {
        returnValue = F("Osterend");
        break;
    }
    case 243139:
    {
        returnValue = F("Osterende");
        break;
    }
    case 243140:
    {
        returnValue = F("Osterender Chaussee");
        break;
    }
    case 243141:
    {
        returnValue = F("Osterender Weg");
        break;
    }
    case 243142:
    {
        returnValue = F("Osterendeweide");
        break;
    }
    case 243143:
    {
        returnValue = F("Osteresch");
        break;
    }
    case 243144:
    {
        returnValue = F("Ostereschstr.");
        break;
    }
    case 243145:
    {
        returnValue = F("Ostereschweg");
        break;
    }
    case 243146:
    {
        returnValue = F("Osterfeld");
        break;
    }
    case 243147:
    {
        returnValue = F("Osterfeld Chaussee");
        break;
    }
    case 243148:
    {
        returnValue = F("Osterfeldbergredder");
        break;
    }
    case 243149:
    {
        returnValue = F("Osterfelddamm");
        break;
    }
    case 243150:
    {
        returnValue = F("Osterfelde");
        break;
    }
    case 243151:
    {
        returnValue = F("Osterfelder Str.");
        break;
    }
    case 243152:
    {
        returnValue = F("Osterfelder Weg");
        break;
    }
    case 243153:
    {
        returnValue = F("Osterfelderstr.");
        break;
    }
    case 243154:
    {
        returnValue = F("Osterfeldpark");
        break;
    }
    case 243155:
    {
        returnValue = F("Osterfeldsberg");
        break;
    }
    case 243156:
    {
        returnValue = F("Osterfeldstr.");
        break;
    }
    case 243157:
    {
        returnValue = F("Osterfeldweg");
        break;
    }
    case 243158:
    {
        returnValue = F("Osterfenne");
        break;
    }
    case 243159:
    {
        returnValue = F("Osterfennenweg");
        break;
    }
    case 243160:
    {
        returnValue = F("Osterfeuer Ramlingen");
        break;
    }
    case 243161:
    {
        returnValue = F("Osterfeuerberg");
        break;
    }
    case 243162:
    {
        returnValue = F("Osterfeuerplatz");
        break;
    }
    case 243163:
    {
        returnValue = F("Osterfeuerplatz Isernhagen H.B.");
        break;
    }
    case 243164:
    {
        returnValue = F("Osterfeuerplatz Klecken");
        break;
    }
    case 243165:
    {
        returnValue = F("Osterfeuerweg");
        break;
    }
    case 243166:
    {
        returnValue = F("Osterfing");
        break;
    }
    case 243167:
    {
        returnValue = F("Osterfinger Str.");
        break;
    }
    case 243168:
    {
        returnValue = F("Osterfliericher Weg");
        break;
    }
    case 243169:
    {
        returnValue = F("Osterforth");
        break;
    }
    case 243170:
    {
        returnValue = F("Ostergaar");
        break;
    }
    case 243171:
    {
        returnValue = F("Ostergaard");
        break;
    }
    case 243172:
    {
        returnValue = F("Ostergarten");
        break;
    }
    case 243173:
    {
        returnValue = F("Ostergartenstr.");
        break;
    }
    case 243174:
    {
        returnValue = F("Ostergasse");
        break;
    }
    case 243175:
    {
        returnValue = F("Ostergast");
        break;
    }
    case 243176:
    {
        returnValue = F("Ostergaster Weg");
        break;
    }
    case 243177:
    {
        returnValue = F("Ostergeest");
        break;
    }
    case 243178:
    {
        returnValue = F("Osterglockenweg");
        break;
    }
    case 243179:
    {
        returnValue = F("Ostergraben");
        break;
    }
    case 243180:
    {
        returnValue = F("Ostergrabenstr.");
        break;
    }
    case 243181:
    {
        returnValue = F("Ostergreed");
        break;
    }
    case 243182:
    {
        returnValue = F("Ostergroden");
        break;
    }
    case 243183:
    {
        returnValue = F("Ostergrube");
        break;
    }
    case 243184:
    {
        returnValue = F("Ostergrund");
        break;
    }
    case 243185:
    {
        returnValue = F("Ostergrundweg");
        break;
    }
    case 243186:
    {
        returnValue = F("Ostergärten");
        break;
    }
    case 243187:
    {
        returnValue = F("Osterhagen");
        break;
    }
    case 243188:
    {
        returnValue = F("Osterhagener Str.");
        break;
    }
    case 243189:
    {
        returnValue = F("Osterhagenweg");
        break;
    }
    case 243190:
    {
        returnValue = F("Osterhahlen");
        break;
    }
    case 243191:
    {
        returnValue = F("Osterhalde");
        break;
    }
    case 243192:
    {
        returnValue = F("Osterhaldeweg");
        break;
    }
    case 243193:
    {
        returnValue = F("Osterhamer Leite");
        break;
    }
    case 243194:
    {
        returnValue = F("Osterhamer Str.");
        break;
    }
    case 243195:
    {
        returnValue = F("Osterhamm");
        break;
    }
    case 243196:
    {
        returnValue = F("Osterhammer");
        break;
    }
    case 243197:
    {
        returnValue = F("Osterhammer Weg");
        break;
    }
    case 243198:
    {
        returnValue = F("Osterhammsweg");
        break;
    }
    case 243199:
    {
        returnValue = F("Osterhangstr.");
        break;
    }
    case 243200:
    {
        returnValue = F("Osterhardt");
        break;
    }
    case 243201:
    {
        returnValue = F("Osterhau Weg");
        break;
    }
    case 243202:
    {
        returnValue = F("Osterhaun");
        break;
    }
    case 243203:
    {
        returnValue = F("Osterhausstr.");
        break;
    }
    case 243204:
    {
        returnValue = F("Osterheck");
        break;
    }
    case 243205:
    {
        returnValue = F("Osterheese");
        break;
    }
    case 243206:
    {
        returnValue = F("Osterheeslinger Str.");
        break;
    }
    case 243207:
    {
        returnValue = F("Osterheide");
        break;
    }
    case 243208:
    {
        returnValue = F("Osterheider Str.");
        break;
    }
    case 243209:
    {
        returnValue = F("Osterheideweg");
        break;
    }
    case 243210:
    {
        returnValue = F("Osterheldweg");
        break;
    }
    case 243211:
    {
        returnValue = F("Osterheuweg");
        break;
    }
    case 243212:
    {
        returnValue = F("Osterheverstr.");
        break;
    }
    case 243213:
    {
        returnValue = F("Osterhof");
        break;
    }
    case 243214:
    {
        returnValue = F("Osterhof Park");
        break;
    }
    case 243215:
    {
        returnValue = F("Osterhofen");
        break;
    }
    case 243216:
    {
        returnValue = F("Osterhofener Str.");
        break;
    }
    case 243217:
    {
        returnValue = F("Osterhofer Str.");
        break;
    }
    case 243218:
    {
        returnValue = F("Osterhofer Weg");
        break;
    }
    case 243219:
    {
        returnValue = F("Osterhofstr.");
        break;
    }
    case 243220:
    {
        returnValue = F("Osterhofweg");
        break;
    }
    case 243221:
    {
        returnValue = F("Osterholder Allee");
        break;
    }
    case 243222:
    {
        returnValue = F("Osterholder Str.");
        break;
    }
    case 243223:
    {
        returnValue = F("Osterholdweg");
        break;
    }
    case 243224:
    {
        returnValue = F("Osterholten");
        break;
    }
    case 243225:
    {
        returnValue = F("Osterholtstr.");
        break;
    }
    case 243226:
    {
        returnValue = F("Osterholz");
        break;
    }
    case 243227:
    {
        returnValue = F("Osterholzallee");
        break;
    }
    case 243228:
    {
        returnValue = F("Osterholzen");
        break;
    }
    case 243229:
    {
        returnValue = F("Osterholzer Str.");
        break;
    }
    case 243230:
    {
        returnValue = F("Osterholzfeld");
        break;
    }
    case 243231:
    {
        returnValue = F("Osterholzfelde");
        break;
    }
    case 243232:
    {
        returnValue = F("Osterholzstr.");
        break;
    }
    case 243233:
    {
        returnValue = F("Osterholzteich");
        break;
    }
    case 243234:
    {
        returnValue = F("Osterholzweg");
        break;
    }
    case 243235:
    {
        returnValue = F("Osterhome");
        break;
    }
    case 243236:
    {
        returnValue = F("Osterhoop");
        break;
    }
    case 243237:
    {
        returnValue = F("Osterhop");
        break;
    }
    case 243238:
    {
        returnValue = F("Osterhopweg");
        break;
    }
    case 243239:
    {
        returnValue = F("Osterhornstr.");
        break;
    }
    case 243240:
    {
        returnValue = F("Osterhornweg");
        break;
    }
    case 243241:
    {
        returnValue = F("Osterhorst");
        break;
    }
    case 243242:
    {
        returnValue = F("Osterhus Pad");
        break;
    }
    case 243243:
    {
        returnValue = F("Osterhusen");
        break;
    }
    case 243244:
    {
        returnValue = F("Osterhuser Siel");
        break;
    }
    case 243245:
    {
        returnValue = F("Osterhuser Str.");
        break;
    }
    case 243246:
    {
        returnValue = F("Osterhusumer Str.");
        break;
    }
    case 243247:
    {
        returnValue = F("Osterhäuleweg");
        break;
    }
    case 243248:
    {
        returnValue = F("Osterhäuser Str.");
        break;
    }
    case 243249:
    {
        returnValue = F("Osterhäuser Weg");
        break;
    }
    case 243250:
    {
        returnValue = F("Osterhöfe");
        break;
    }
    case 243251:
    {
        returnValue = F("Osterhöhe");
        break;
    }
    case 243252:
    {
        returnValue = F("Osterhörn");
        break;
    }
    case 243253:
    {
        returnValue = F("Osterhügel");
        break;
    }
    case 243254:
    {
        returnValue = F("Osteriede");
        break;
    }
    case 243255:
    {
        returnValue = F("Osteries");
        break;
    }
    case 243256:
    {
        returnValue = F("Ostering");
        break;
    }
    case 243257:
    {
        returnValue = F("Osterjork");
        break;
    }
    case 243258:
    {
        returnValue = F("Osterkam");
        break;
    }
    case 243259:
    {
        returnValue = F("Osterkamerweg");
        break;
    }
    case 243260:
    {
        returnValue = F("Osterkamnp");
        break;
    }
    case 243261:
    {
        returnValue = F("Osterkamp");
        break;
    }
    case 243262:
    {
        returnValue = F("Osterkamps Kamp");
        break;
    }
    case 243263:
    {
        returnValue = F("Osterkampsredder");
        break;
    }
    case 243264:
    {
        returnValue = F("Osterkampstr.");
        break;
    }
    case 243265:
    {
        returnValue = F("Osterkampsweg");
        break;
    }
    case 243266:
    {
        returnValue = F("Osterkampweg");
        break;
    }
    case 243267:
    {
        returnValue = F("Osterkanal");
        break;
    }
    case 243268:
    {
        returnValue = F("Osterkerf");
        break;
    }
    case 243269:
    {
        returnValue = F("Osterklanxbüll");
        break;
    }
    case 243270:
    {
        returnValue = F("Osterkoog");
        break;
    }
    case 243271:
    {
        returnValue = F("Osterkoogesweg");
        break;
    }
    case 243272:
    {
        returnValue = F("Osterkoogsdeich");
        break;
    }
    case 243273:
    {
        returnValue = F("Osterkoogstr.");
        break;
    }
    case 243274:
    {
        returnValue = F("Osterkopf");
        break;
    }
    case 243275:
    {
        returnValue = F("Osterkoppel");
        break;
    }
    case 243276:
    {
        returnValue = F("Osterkoppeln");
        break;
    }
    case 243277:
    {
        returnValue = F("Osterkreuzweg");
        break;
    }
    case 243278:
    {
        returnValue = F("Osterkrug");
        break;
    }
    case 243279:
    {
        returnValue = F("Osterkuppe");
        break;
    }
    case 243280:
    {
        returnValue = F("Osterkämpe");
        break;
    }
    case 243281:
    {
        returnValue = F("Osterlachstr.");
        break;
    }
    case 243282:
    {
        returnValue = F("Osterladekop");
        break;
    }
    case 243283:
    {
        returnValue = F("Osterladekoper Minnerweg");
        break;
    }
    case 243284:
    {
        returnValue = F("Osterlage");
        break;
    }
    case 243285:
    {
        returnValue = F("Osterland");
        break;
    }
    case 243286:
    {
        returnValue = F("Osterlandstr.");
        break;
    }
    case 243287:
    {
        returnValue = F("Osterlandsweg");
        break;
    }
    case 243288:
    {
        returnValue = F("Osterlandweg");
        break;
    }
    case 243289:
    {
        returnValue = F("Osterlangen");
        break;
    }
    case 243290:
    {
        returnValue = F("Osterlangstedt");
        break;
    }
    case 243291:
    {
        returnValue = F("Osterledder Str.");
        break;
    }
    case 243292:
    {
        returnValue = F("Osterleye");
        break;
    }
    case 243293:
    {
        returnValue = F("Osterlieth");
        break;
    }
    case 243294:
    {
        returnValue = F("Osterlilienstr.");
        break;
    }
    case 243295:
    {
        returnValue = F("Osterlinder Str.");
        break;
    }
    case 243296:
    {
        returnValue = F("Osterlochweg");
        break;
    }
    case 243297:
    {
        returnValue = F("Osterloh");
        break;
    }
    case 243298:
    {
        returnValue = F("Osterloh Em. Franzosenweg");
        break;
    }
    case 243299:
    {
        returnValue = F("Osterloher Feld");
        break;
    }
    case 243300:
    {
        returnValue = F("Osterloher Landstr.");
        break;
    }
    case 243301:
    {
        returnValue = F("Osterloher Str.");
        break;
    }
    case 243302:
    {
        returnValue = F("Osterloher Weg");
        break;
    }
    case 243303:
    {
        returnValue = F("Osterlohne");
        break;
    }
    case 243304:
    {
        returnValue = F("Osterlohsweg");
        break;
    }
    case 243305:
    {
        returnValue = F("Osterlooger Kleiweg");
        break;
    }
    case 243306:
    {
        returnValue = F("Osterlooger Str.");
        break;
    }
    case 243307:
    {
        returnValue = F("Osterlooger Weg");
        break;
    }
    case 243308:
    {
        returnValue = F("Osterlämmchen");
        break;
    }
    case 243309:
    {
        returnValue = F("Osterlänge");
        break;
    }
    case 243310:
    {
        returnValue = F("Osterlängstr.");
        break;
    }
    case 243311:
    {
        returnValue = F("Osterlängweg");
        break;
    }
    case 243312:
    {
        returnValue = F("Osterlücke");
        break;
    }
    case 243313:
    {
        returnValue = F("Osterlükken");
        break;
    }
    case 243314:
    {
        returnValue = F("Ostermahdweg");
        break;
    }
    case 243315:
    {
        returnValue = F("Ostermairstr.");
        break;
    }
    case 243316:
    {
        returnValue = F("Ostermanns Feld");
        break;
    }
    case 243317:
    {
        returnValue = F("Ostermanns Holz");
        break;
    }
    case 243318:
    {
        returnValue = F("Ostermannstr.");
        break;
    }
    case 243319:
    {
        returnValue = F("Ostermannsweg");
        break;
    }
    case 243320:
    {
        returnValue = F("Ostermannweg");
        break;
    }
    case 243321:
    {
        returnValue = F("Ostermark");
        break;
    }
    case 243322:
    {
        returnValue = F("Ostermarkelsdorf");
        break;
    }
    case 243323:
    {
        returnValue = F("Ostermarksweg");
        break;
    }
    case 243324:
    {
        returnValue = F("Ostermarktstr.");
        break;
    }
    case 243325:
    {
        returnValue = F("Ostermarsch");
        break;
    }
    case 243326:
    {
        returnValue = F("Ostermarscher Str.");
        break;
    }
    case 243327:
    {
        returnValue = F("Ostermasch");
        break;
    }
    case 243328:
    {
        returnValue = F("Ostermayerstr.");
        break;
    }
    case 243329:
    {
        returnValue = F("Ostermeede");
        break;
    }
    case 243330:
    {
        returnValue = F("Ostermeedenweg");
        break;
    }
    case 243331:
    {
        returnValue = F("Ostermeedlandsweg");
        break;
    }
    case 243332:
    {
        returnValue = F("Ostermeiers Hof");
        break;
    }
    case 243333:
    {
        returnValue = F("Ostermeiersfeld");
        break;
    }
    case 243334:
    {
        returnValue = F("Ostermeierstr.");
        break;
    }
    case 243335:
    {
        returnValue = F("Ostermenghusen");
        break;
    }
    case 243336:
    {
        returnValue = F("Ostermeyerstr.");
        break;
    }
    case 243337:
    {
        returnValue = F("Osterminnerweg");
        break;
    }
    case 243338:
    {
        returnValue = F("Ostermoor");
        break;
    }
    case 243339:
    {
        returnValue = F("Ostermoorer Str.");
        break;
    }
    case 243340:
    {
        returnValue = F("Ostermooringer Str.");
        break;
    }
    case 243341:
    {
        returnValue = F("Ostermoorstr.");
        break;
    }
    case 243342:
    {
        returnValue = F("Ostermoorsweg");
        break;
    }
    case 243343:
    {
        returnValue = F("Ostermoorweg");
        break;
    }
    case 243344:
    {
        returnValue = F("Ostermunzeler Str.");
        break;
    }
    case 243345:
    {
        returnValue = F("Ostermühle");
        break;
    }
    case 243346:
    {
        returnValue = F("Ostermühlen");
        break;
    }
    case 243347:
    {
        returnValue = F("Ostermühler Str.");
        break;
    }
    case 243348:
    {
        returnValue = F("Ostermühlstr.");
        break;
    }
    case 243349:
    {
        returnValue = F("Ostermünchener Str.");
        break;
    }
    case 243350:
    {
        returnValue = F("Ostermünsterweg");
        break;
    }
    case 243351:
    {
        returnValue = F("Osternacher Weg");
        break;
    }
    case 243352:
    {
        returnValue = F("Osternbrink");
        break;
    }
    case 243353:
    {
        returnValue = F("Osternburgweg");
        break;
    }
    case 243354:
    {
        returnValue = F("Osterndorf");
        break;
    }
    case 243355:
    {
        returnValue = F("Osterndorfer Str.");
        break;
    }
    case 243356:
    {
        returnValue = F("Osterndorffsweg");
        break;
    }
    case 243357:
    {
        returnValue = F("Osterner Weg");
        break;
    }
    case 243358:
    {
        returnValue = F("Osternheide");
        break;
    }
    case 243359:
    {
        returnValue = F("Osternienburger Str.");
        break;
    }
    case 243360:
    {
        returnValue = F("Osternoher Weg");
        break;
    }
    case 243361:
    {
        returnValue = F("Osternohstr.");
        break;
    }
    case 243362:
    {
        returnValue = F("Osternordysweg");
        break;
    }
    case 243363:
    {
        returnValue = F("Osternstr.");
        break;
    }
    case 243364:
    {
        returnValue = F("Osterode-Kalefeld-Kreiensen");
        break;
    }
    case 243365:
    {
        returnValue = F("Osterodener Weg");
        break;
    }
    case 243366:
    {
        returnValue = F("Osteroder Landstr.");
        break;
    }
    case 243367:
    {
        returnValue = F("Osteroder Str.");
        break;
    }
    case 243368:
    {
        returnValue = F("Osteroder Weg");
        break;
    }
    case 243369:
    {
        returnValue = F("Osteroher Feld");
        break;
    }
    case 243370:
    {
        returnValue = F("Osteroldendorf");
        break;
    }
    case 243371:
    {
        returnValue = F("Osterort");
        break;
    }
    case 243372:
    {
        returnValue = F("Osterpfad");
        break;
    }
    case 243373:
    {
        returnValue = F("Osterpiep");
        break;
    }
    case 243374:
    {
        returnValue = F("Osterplatz");
        break;
    }
    case 243375:
    {
        returnValue = F("Osterport");
        break;
    }
    case 243376:
    {
        returnValue = F("Osterrade");
        break;
    }
    case 243377:
    {
        returnValue = F("Osterrader Weg");
        break;
    }
    case 243378:
    {
        returnValue = F("Osterrathstr.");
        break;
    }
    case 243379:
    {
        returnValue = F("Osterree");
        break;
    }
    case 243380:
    {
        returnValue = F("Osterreide");
        break;
    }
    case 243381:
    {
        returnValue = F("Osterreideweg");
        break;
    }
    case 243382:
    {
        returnValue = F("Osterreihe");
        break;
    }
    case 243383:
    {
        returnValue = F("Osterreiterweg");
        break;
    }
    case 243384:
    {
        returnValue = F("Osterreuten");
        break;
    }
    case 243385:
    {
        returnValue = F("Osterried");
        break;
    }
    case 243386:
    {
        returnValue = F("Osterriede");
        break;
    }
    case 243387:
    {
        returnValue = F("Osterriedergasse");
        break;
    }
    case 243388:
    {
        returnValue = F("Osterriedestr.");
        break;
    }
    case 243389:
    {
        returnValue = F("Osterriehe");
        break;
    }
    case 243390:
    {
        returnValue = F("Osterriete");
        break;
    }
    case 243391:
    {
        returnValue = F("Osterring");
        break;
    }
    case 243392:
    {
        returnValue = F("Osterrönfelder Ring");
        break;
    }
    case 243393:
    {
        returnValue = F("Osterröschweg");
        break;
    }
    case 243394:
    {
        returnValue = F("Ostersahlfeld");
        break;
    }
    case 243395:
    {
        returnValue = F("Ostersand");
        break;
    }
    case 243396:
    {
        returnValue = F("Ostersandweg");
        break;
    }
    case 243397:
    {
        returnValue = F("Ostersbaum");
        break;
    }
    case 243398:
    {
        returnValue = F("Osterschepser Str.");
        break;
    }
    case 243399:
    {
        returnValue = F("Osterschlah");
        break;
    }
    case 243400:
    {
        returnValue = F("Osterschlede");
        break;
    }
    case 243401:
    {
        returnValue = F("Osterschütting");
        break;
    }
    case 243402:
    {
        returnValue = F("Ostersee");
        break;
    }
    case 243403:
    {
        returnValue = F("Osterseefeld");
        break;
    }
    case 243404:
    {
        returnValue = F("Osterseenstr.");
        break;
    }
    case 243405:
    {
        returnValue = F("Osterseeon");
        break;
    }
    case 243406:
    {
        returnValue = F("Osterseeoner Str.");
        break;
    }
    case 243407:
    {
        returnValue = F("Osterseestr.");
        break;
    }
    case 243408:
    {
        returnValue = F("Osterseeweg");
        break;
    }
    case 243409:
    {
        returnValue = F("Ostersiek");
        break;
    }
    case 243410:
    {
        returnValue = F("Ostersiel");
        break;
    }
    case 243411:
    {
        returnValue = F("Ostersoder Str.");
        break;
    }
    case 243412:
    {
        returnValue = F("Ostersoof");
        break;
    }
    case 243413:
    {
        returnValue = F("Osterstader Str.");
        break;
    }
    case 243414:
    {
        returnValue = F("Ostersteder Str.");
        break;
    }
    case 243415:
    {
        returnValue = F("Osterstedter Str.");
        break;
    }
    case 243416:
    {
        returnValue = F("Ostersteg");
        break;
    }
    case 243417:
    {
        returnValue = F("Ostersteig");
        break;
    }
    case 243418:
    {
        returnValue = F("Ostersteige");
        break;
    }
    case 243419:
    {
        returnValue = F("Ostersteigstr.");
        break;
    }
    case 243420:
    {
        returnValue = F("Ostersteinstr.");
        break;
    }
    case 243421:
    {
        returnValue = F("Osterstetten");
        break;
    }
    case 243422:
    {
        returnValue = F("Osterstetter Str.");
        break;
    }
    case 243423:
    {
        returnValue = F("Osterstiege");
        break;
    }
    case 243424:
    {
        returnValue = F("Osterstr.");
        break;
    }
    case 243425:
    {
        returnValue = F("Osterstraat");
        break;
    }
    case 243426:
    {
        returnValue = F("Osterstücke");
        break;
    }
    case 243427:
    {
        returnValue = F("Ostert");
        break;
    }
    case 243428:
    {
        returnValue = F("Ostertagsgasse");
        break;
    }
    case 243429:
    {
        returnValue = F("Ostertagstr.");
        break;
    }
    case 243430:
    {
        returnValue = F("Ostertal");
        break;
    }
    case 243431:
    {
        returnValue = F("Ostertalstr.");
        break;
    }
    case 243432:
    {
        returnValue = F("Ostertalweg");
        break;
    }
    case 243433:
    {
        returnValue = F("Osterteil");
        break;
    }
    case 243434:
    {
        returnValue = F("Osterterp");
        break;
    }
    case 243435:
    {
        returnValue = F("Ostertill");
        break;
    }
    case 243436:
    {
        returnValue = F("Ostertilli");
        break;
    }
    case 243437:
    {
        returnValue = F("Ostertoft");
        break;
    }
    case 243438:
    {
        returnValue = F("Ostertogstr.");
        break;
    }
    case 243439:
    {
        returnValue = F("Ostertor");
        break;
    }
    case 243440:
    {
        returnValue = F("Ostertorkreisel");
        break;
    }
    case 243441:
    {
        returnValue = F("Ostertorstr.");
        break;
    }
    case 243442:
    {
        returnValue = F("Ostertorwall");
        break;
    }
    case 243443:
    {
        returnValue = F("Ostertresker");
        break;
    }
    case 243444:
    {
        returnValue = F("Osterupganter Str.");
        break;
    }
    case 243445:
    {
        returnValue = F("Osterupganter Warft");
        break;
    }
    case 243446:
    {
        returnValue = F("Osterupganter-Äcker-Weg");
        break;
    }
    case 243447:
    {
        returnValue = F("Osterveseder Weg");
        break;
    }
    case 243448:
    {
        returnValue = F("Ostervordeel");
        break;
    }
    case 243449:
    {
        returnValue = F("Ostervordels");
        break;
    }
    case 243450:
    {
        returnValue = F("Osterwald");
        break;
    }
    case 243451:
    {
        returnValue = F("Osterwaldblick");
        break;
    }
    case 243452:
    {
        returnValue = F("Osterwalder Str.");
        break;
    }
    case 243453:
    {
        returnValue = F("Osterwalder Weg");
        break;
    }
    case 243454:
    {
        returnValue = F("Osterwalderweg");
        break;
    }
    case 243455:
    {
        returnValue = F("Osterwaldstr.");
        break;
    }
    case 243456:
    {
        returnValue = F("Osterwaldweg");
        break;
    }
    case 243457:
    {
        returnValue = F("Osterwarf");
        break;
    }
    case 243458:
    {
        returnValue = F("Osterwarfer Weg");
        break;
    }
    case 243459:
    {
        returnValue = F("Osterwechtern");
        break;
    }
    case 243460:
    {
        returnValue = F("Osterwedde");
        break;
    }
    case 243461:
    {
        returnValue = F("Osterweddinger Chaussee");
        break;
    }
    case 243462:
    {
        returnValue = F("Osterweddinger Str.");
        break;
    }
    case 243463:
    {
        returnValue = F("Osterwede");
        break;
    }
    case 243464:
    {
        returnValue = F("Osterweder Schulweg");
        break;
    }
    case 243465:
    {
        returnValue = F("Osterweder Str.");
        break;
    }
    case 243466:
    {
        returnValue = F("Osterweg");
        break;
    }
    case 243467:
    {
        returnValue = F("Osterweide");
        break;
    }
    case 243468:
    {
        returnValue = F("Osterweidenweg");
        break;
    }
    case 243469:
    {
        returnValue = F("Osterweiher");
        break;
    }
    case 243470:
    {
        returnValue = F("Osterweihstr.");
        break;
    }
    case 243471:
    {
        returnValue = F("Osterwicker Str.");
        break;
    }
    case 243472:
    {
        returnValue = F("Osterwiecker Heerstr.");
        break;
    }
    case 243473:
    {
        returnValue = F("Osterwiecker Str.");
        break;
    }
    case 243474:
    {
        returnValue = F("Osterwiede");
        break;
    }
    case 243475:
    {
        returnValue = F("Osterwieke");
        break;
    }
    case 243476:
    {
        returnValue = F("Osterwieker Str.");
        break;
    }
    case 243477:
    {
        returnValue = F("Osterwies");
        break;
    }
    case 243478:
    {
        returnValue = F("Osterwiese");
        break;
    }
    case 243479:
    {
        returnValue = F("Osterwiesen");
        break;
    }
    case 243480:
    {
        returnValue = F("Osterwiesenstr.");
        break;
    }
    case 243481:
    {
        returnValue = F("Osterwiesenweg");
        break;
    }
    case 243482:
    {
        returnValue = F("Osterwiesweg");
        break;
    }
    case 243483:
    {
        returnValue = F("Osterwinklstr.");
        break;
    }
    case 243484:
    {
        returnValue = F("Osterwinsumer Str.");
        break;
    }
    case 243485:
    {
        returnValue = F("Osterwinsumer Weg");
        break;
    }
    case 243486:
    {
        returnValue = F("Osterwisch");
        break;
    }
    case 243487:
    {
        returnValue = F("Osterwittbekfeld");
        break;
    }
    case 243488:
    {
        returnValue = F("Osterwohld");
        break;
    }
    case 243489:
    {
        returnValue = F("Osterwohle");
        break;
    }
    case 243490:
    {
        returnValue = F("Osterworth");
        break;
    }
    case 243491:
    {
        returnValue = F("Osterwung");
        break;
    }
    case 243492:
    {
        returnValue = F("Osterwungweg");
        break;
    }
    case 243493:
    {
        returnValue = F("Osterzeller Str.");
        break;
    }
    case 243494:
    {
        returnValue = F("Osterzuschlag");
        break;
    }
    case 243495:
    {
        returnValue = F("Osteröder Hauptstr.");
        break;
    }
    case 243496:
    {
        returnValue = F("Osteröder Landstr.");
        break;
    }
    case 243497:
    {
        returnValue = F("Osteröder Str.");
        break;
    }
    case 243498:
    {
        returnValue = F("Ostesch");
        break;
    }
    case 243499:
    {
        returnValue = F("Ostestr.");
        break;
    }
    case 243500:
    {
        returnValue = F("Ostetal");
        break;
    }
    case 243501:
    {
        returnValue = F("Osteweg");
        break;
    }
    case 243502:
    {
        returnValue = F("Ostfalenstr.");
        break;
    }
    case 243503:
    {
        returnValue = F("Ostfalenweg");
        break;
    }
    case 243504:
    {
        returnValue = F("Ostfeld");
        break;
    }
    case 243505:
    {
        returnValue = F("Ostfeldmark");
        break;
    }
    case 243506:
    {
        returnValue = F("Ostfeldring");
        break;
    }
    case 243507:
    {
        returnValue = F("Ostfeldstr.");
        break;
    }
    case 243508:
    {
        returnValue = F("Ostfeldweg");
        break;
    }
    case 243509:
    {
        returnValue = F("Ostfleth");
        break;
    }
    case 243510:
    {
        returnValue = F("Ostfreesenstraat");
        break;
    }
    case 243511:
    {
        returnValue = F("Ostfriesenstr.");
        break;
    }
    case 243512:
    {
        returnValue = F("Ostfriesenweg");
        break;
    }
    case 243513:
    {
        returnValue = F("Ostfrieslandstr.");
        break;
    }
    case 243514:
    {
        returnValue = F("Ostgasse");
        break;
    }
    case 243515:
    {
        returnValue = F("Ostgaster Weg");
        break;
    }
    case 243516:
    {
        returnValue = F("Ostgatternstr.");
        break;
    }
    case 243517:
    {
        returnValue = F("Ostgotenallee");
        break;
    }
    case 243518:
    {
        returnValue = F("Ostgotenstr.");
        break;
    }
    case 243519:
    {
        returnValue = F("Ostgraben");
        break;
    }
    case 243520:
    {
        returnValue = F("Osthafenstr.");
        break;
    }
    case 243521:
    {
        returnValue = F("Osthagen");
        break;
    }
    case 243522:
    {
        returnValue = F("Osthang Project");
        break;
    }
    case 243523:
    {
        returnValue = F("Osthangweg");
        break;
    }
    case 243524:
    {
        returnValue = F("Osthedig");
        break;
    }
    case 243525:
    {
        returnValue = F("Ostheerener Feld");
        break;
    }
    case 243526:
    {
        returnValue = F("Ostheerener Str.");
        break;
    }
    case 243527:
    {
        returnValue = F("Ostheide");
        break;
    }
    case 243528:
    {
        returnValue = F("Ostheim");
        break;
    }
    case 243529:
    {
        returnValue = F("Ostheim-vor-der-Rhön-Str.");
        break;
    }
    case 243530:
    {
        returnValue = F("Ostheimer Allee");
        break;
    }
    case 243531:
    {
        returnValue = F("Ostheimer Feld");
        break;
    }
    case 243532:
    {
        returnValue = F("Ostheimer Hauptstr.");
        break;
    }
    case 243533:
    {
        returnValue = F("Ostheimer Str.");
        break;
    }
    case 243534:
    {
        returnValue = F("Ostheimer Weg");
        break;
    }
    case 243535:
    {
        returnValue = F("Ostheimergrund");
        break;
    }
    case 243536:
    {
        returnValue = F("Ostheimerstr.");
        break;
    }
    case 243537:
    {
        returnValue = F("Ostheimstr.");
        break;
    }
    case 243538:
    {
        returnValue = F("Ostheldener Str.");
        break;
    }
    case 243539:
    {
        returnValue = F("Osthelle");
        break;
    }
    case 243540:
    {
        returnValue = F("Osthellen");
        break;
    }
    case 243541:
    {
        returnValue = F("Osthellenweg");
        break;
    }
    case 243542:
    {
        returnValue = F("Osthellermark");
        break;
    }
    case 243543:
    {
        returnValue = F("Osthellweg");
        break;
    }
    case 243544:
    {
        returnValue = F("Osthofen-Thomä-Wallstr.");
        break;
    }
    case 243545:
    {
        returnValue = F("Osthofener Landstr.");
        break;
    }
    case 243546:
    {
        returnValue = F("Osthofener Str.");
        break;
    }
    case 243547:
    {
        returnValue = F("Osthofenstr.");
        break;
    }
    case 243548:
    {
        returnValue = F("Osthofentor");
        break;
    }
    case 243549:
    {
        returnValue = F("Osthoff");
        break;
    }
    case 243550:
    {
        returnValue = F("Osthoffsgarten");
        break;
    }
    case 243551:
    {
        returnValue = F("Osthoffstr.");
        break;
    }
    case 243552:
    {
        returnValue = F("Osthofstr.");
        break;
    }
    case 243553:
    {
        returnValue = F("Ostholtweg");
        break;
    }
    case 243554:
    {
        returnValue = F("Ostholz");
        break;
    }
    case 243555:
    {
        returnValue = F("Ostholzer Hang");
        break;
    }
    case 243556:
    {
        returnValue = F("Osthover Weg");
        break;
    }
    case 243557:
    {
        returnValue = F("Osthueshof");
        break;
    }
    case 243558:
    {
        returnValue = F("Osthusener Str.");
        break;
    }
    case 243559:
    {
        returnValue = F("Osthushenrichstr.");
        break;
    }
    case 243560:
    {
        returnValue = F("Osthusweg");
        break;
    }
    case 243561:
    {
        returnValue = F("Osthäuser Str.");
        break;
    }
    case 243562:
    {
        returnValue = F("Osthöf");
        break;
    }
    case 243563:
    {
        returnValue = F("Osthöhe");
        break;
    }
    case 243564:
    {
        returnValue = F("Osthörn");
        break;
    }
    case 243565:
    {
        returnValue = F("Osticker Berg");
        break;
    }
    case 243566:
    {
        returnValue = F("Ostiemer Weg");
        break;
    }
    case 243567:
    {
        returnValue = F("Ostingerslebener Str.");
        break;
    }
    case 243568:
    {
        returnValue = F("Ostingersleber Weg");
        break;
    }
    case 243569:
    {
        returnValue = F("Ostinghauser Str.");
        break;
    }
    case 243570:
    {
        returnValue = F("Ostkamp");
        break;
    }
    case 243571:
    {
        returnValue = F("Ostkampstr.");
        break;
    }
    case 243572:
    {
        returnValue = F("Ostkilverstr.");
        break;
    }
    case 243573:
    {
        returnValue = F("Ostkinberg");
        break;
    }
    case 243574:
    {
        returnValue = F("Ostkirchstr.");
        break;
    }
    case 243575:
    {
        returnValue = F("Ostklüne");
        break;
    }
    case 243576:
    {
        returnValue = F("Ostkorso");
        break;
    }
    case 243577:
    {
        returnValue = F("Ostkreuz");
        break;
    }
    case 243578:
    {
        returnValue = F("Ostland");
        break;
    }
    case 243579:
    {
        returnValue = F("Ostlandkamp");
        break;
    }
    case 243580:
    {
        returnValue = F("Ostlandplatz");
        break;
    }
    case 243581:
    {
        returnValue = F("Ostlandring");
        break;
    }
    case 243582:
    {
        returnValue = F("Ostlandsiedlung");
        break;
    }
    case 243583:
    {
        returnValue = F("Ostlandstr.");
        break;
    }
    case 243584:
    {
        returnValue = F("Ostlandweg");
        break;
    }
    case 243585:
    {
        returnValue = F("Ostlandwehr");
        break;
    }
    case 243586:
    {
        returnValue = F("Ostler-Forstweg");
        break;
    }
    case 243587:
    {
        returnValue = F("Ostlerstr.");
        break;
    }
    case 243588:
    {
        returnValue = F("Ostlevener Weg");
        break;
    }
    case 243589:
    {
        returnValue = F("Ostlohne");
        break;
    }
    case 243590:
    {
        returnValue = F("Ostlähdener Str.");
        break;
    }
    case 243591:
    {
        returnValue = F("Ostmann-Ulm-Str.");
        break;
    }
    case 243592:
    {
        returnValue = F("Ostmannstr.");
        break;
    }
    case 243593:
    {
        returnValue = F("Ostmark");
        break;
    }
    case 243594:
    {
        returnValue = F("Ostmark Str.");
        break;
    }
    case 243595:
    {
        returnValue = F("Ostmarkstr.");
        break;
    }
    case 243596:
    {
        returnValue = F("Ostmauer");
        break;
    }
    case 243597:
    {
        returnValue = F("Ostmauerstr.");
        break;
    }
    case 243598:
    {
        returnValue = F("Ostmilte");
        break;
    }
    case 243599:
    {
        returnValue = F("Ostmilter Str.");
        break;
    }
    case 243600:
    {
        returnValue = F("Ostmole");
        break;
    }
    case 243601:
    {
        returnValue = F("Ostmoorweg");
        break;
    }
    case 243602:
    {
        returnValue = F("Ostnerstr.");
        break;
    }
    case 243603:
    {
        returnValue = F("Ostorfer Ufer");
        break;
    }
    case 243604:
    {
        returnValue = F("Ostortstr.");
        break;
    }
    case 243605:
    {
        returnValue = F("Ostpark");
        break;
    }
    case 243606:
    {
        returnValue = F("Ostplatz");
        break;
    }
    case 243607:
    {
        returnValue = F("Ostpoterne");
        break;
    }
    case 243608:
    {
        returnValue = F("Ostpreussenstr.");
        break;
    }
    case 243609:
    {
        returnValue = F("Ostpreussenweg");
        break;
    }
    case 243610:
    {
        returnValue = F("Ostpreußen Str.");
        break;
    }
    case 243611:
    {
        returnValue = F("Ostpreußenallee");
        break;
    }
    case 243612:
    {
        returnValue = F("Ostpreußenanlage");
        break;
    }
    case 243613:
    {
        returnValue = F("Ostpreußendamm");
        break;
    }
    case 243614:
    {
        returnValue = F("Ostpreußenplatz");
        break;
    }
    case 243615:
    {
        returnValue = F("Ostpreußenring");
        break;
    }
    case 243616:
    {
        returnValue = F("Ostpreußenstr.");
        break;
    }
    case 243617:
    {
        returnValue = F("Ostpreußenweg");
        break;
    }
    case 243618:
    {
        returnValue = F("Ostpreußische Str.");
        break;
    }
    case 243619:
    {
        returnValue = F("Ostpromenade");
        break;
    }
    case 243620:
    {
        returnValue = F("Ostracher Str.");
        break;
    }
    case 243621:
    {
        returnValue = F("Ostrachstr.");
        break;
    }
    case 243622:
    {
        returnValue = F("Ostrachweg");
        break;
    }
    case 243623:
    {
        returnValue = F("Ostrampe");
        break;
    }
    case 243624:
    {
        returnValue = F("Ostrand");
        break;
    }
    case 243625:
    {
        returnValue = F("Ostrandsiedlung");
        break;
    }
    case 243626:
    {
        returnValue = F("Ostrandstr.");
        break;
    }
    case 243627:
    {
        returnValue = F("Ostranger Str.");
        break;
    }
    case 243628:
    {
        returnValue = F("Ostrau");
        break;
    }
    case 243629:
    {
        returnValue = F("Ostrauer Anger");
        break;
    }
    case 243630:
    {
        returnValue = F("Ostrauer Berg");
        break;
    }
    case 243631:
    {
        returnValue = F("Ostrauer Ring");
        break;
    }
    case 243632:
    {
        returnValue = F("Ostrauer Str.");
        break;
    }
    case 243633:
    {
        returnValue = F("Ostrauer Weg");
        break;
    }
    case 243634:
    {
        returnValue = F("Ostredder");
        break;
    }
    case 243635:
    {
        returnValue = F("Ostring");
        break;
    }
    case 243636:
    {
        returnValue = F("Ostringhausen");
        break;
    }
    case 243637:
    {
        returnValue = F("Ostringhauser Gasse");
        break;
    }
    case 243638:
    {
        returnValue = F("Ostringplatz");
        break;
    }
    case 243639:
    {
        returnValue = F("Ostringstr.");
        break;
    }
    case 243640:
    {
        returnValue = F("Ostrittrumer Str.");
        break;
    }
    case 243641:
    {
        returnValue = F("Ostritzer Allee");
        break;
    }
    case 243642:
    {
        returnValue = F("Ostritzer Str.");
        break;
    }
    case 243643:
    {
        returnValue = F("Ostroher Str.");
        break;
    }
    case 243644:
    {
        returnValue = F("Ostrower Damm");
        break;
    }
    case 243645:
    {
        returnValue = F("Ostrower Platz");
        break;
    }
    case 243646:
    {
        returnValue = F("Ostrower Str.");
        break;
    }
    case 243647:
    {
        returnValue = F("Ostrower Wohnpark");
        break;
    }
    case 243648:
    {
        returnValue = F("Ostrowskistr.");
        break;
    }
    case 243649:
    {
        returnValue = F("Ostrowskiweg");
        break;
    }
    case 243650:
    {
        returnValue = F("Ostrzeszów-Platz");
        break;
    }
    case 243651:
    {
        returnValue = F("Ostschacht");
        break;
    }
    case 243652:
    {
        returnValue = F("Ostschachtstr.");
        break;
    }
    case 243653:
    {
        returnValue = F("Ostschneise");
        break;
    }
    case 243654:
    {
        returnValue = F("Ostsee- ObByn / Altmühltal Radweg");
        break;
    }
    case 243655:
    {
        returnValue = F("Ostsee-Ferienpark");
        break;
    }
    case 243656:
    {
        returnValue = F("Ostsee-Park-Str.");
        break;
    }
    case 243657:
    {
        returnValue = F("Ostseeallee");
        break;
    }
    case 243658:
    {
        returnValue = F("Ostseebadweg");
        break;
    }
    case 243659:
    {
        returnValue = F("Ostseeblick");
        break;
    }
    case 243660:
    {
        returnValue = F("Ostseepark");
        break;
    }
    case 243661:
    {
        returnValue = F("Ostseerennbahn");
        break;
    }
    case 243662:
    {
        returnValue = F("Ostseering");
        break;
    }
    case 243663:
    {
        returnValue = F("Ostseestr.");
        break;
    }
    case 243664:
    {
        returnValue = F("Ostseeweg");
        break;
    }
    case 243665:
    {
        returnValue = F("Ostsid");
        break;
    }
    case 243666:
    {
        returnValue = F("Ostsiedlung");
        break;
    }
    case 243667:
    {
        returnValue = F("Ostsiek");
        break;
    }
    case 243668:
    {
        returnValue = F("Ostspange");
        break;
    }
    case 243669:
    {
        returnValue = F("Oststadtpark");
        break;
    }
    case 243670:
    {
        returnValue = F("Oststiege");
        break;
    }
    case 243671:
    {
        returnValue = F("Oststr.");
        break;
    }
    case 243672:
    {
        returnValue = F("Oststr. OBI");
        break;
    }
    case 243673:
    {
        returnValue = F("Osttangente");
        break;
    }
    case 243674:
    {
        returnValue = F("Ostterrasse");
        break;
    }
    case 243675:
    {
        returnValue = F("Osttor");
        break;
    }
    case 243676:
    {
        returnValue = F("Osttorstr.");
        break;
    }
    case 243677:
    {
        returnValue = F("Osttunnel");
        break;
    }
    case 243678:
    {
        returnValue = F("Ostufer");
        break;
    }
    case 243679:
    {
        returnValue = F("Ostuferhafen");
        break;
    }
    case 243680:
    {
        returnValue = F("Ostumer Weg");
        break;
    }
    case 243681:
    {
        returnValue = F("Ostumfahrung Asperg");
        break;
    }
    case 243682:
    {
        returnValue = F("Ostumgehung");
        break;
    }
    case 243683:
    {
        returnValue = F("Ostunterführung");
        break;
    }
    case 243684:
    {
        returnValue = F("Ostuzzistr.");
        break;
    }
    case 243685:
    {
        returnValue = F("Ostverbinder");
        break;
    }
    case 243686:
    {
        returnValue = F("Ostvictorburer Str.");
        break;
    }
    case 243687:
    {
        returnValue = F("Ostvorstadt");
        break;
    }
    case 243688:
    {
        returnValue = F("Ostvöhde");
        break;
    }
    case 243689:
    {
        returnValue = F("Ostwaldstr.");
        break;
    }
    case 243690:
    {
        returnValue = F("Ostwaldweg");
        break;
    }
    case 243691:
    {
        returnValue = F("Ostwall");
        break;
    }
    case 243692:
    {
        returnValue = F("Ostwall Park");
        break;
    }
    case 243693:
    {
        returnValue = F("Ostweg");
        break;
    }
    case 243694:
    {
        returnValue = F("Ostwestfalen-Platz");
        break;
    }
    case 243695:
    {
        returnValue = F("Ostwestfalenstr.");
        break;
    }
    case 243696:
    {
        returnValue = F("Ostwieke");
        break;
    }
    case 243697:
    {
        returnValue = F("Ostwier Höhe");
        break;
    }
    case 243698:
    {
        returnValue = F("Ostwier Str.");
        break;
    }
    case 243699:
    {
        returnValue = F("Ostwiese");
        break;
    }
    case 243700:
    {
        returnValue = F("Ostwinkel");
        break;
    }
    case 243701:
    {
        returnValue = F("Ostönner Weg");
        break;
    }
    case 243702:
    {
        returnValue = F("Oswald-Achenbach-Str.");
        break;
    }
    case 243703:
    {
        returnValue = F("Oswald-Ackermann-Weg");
        break;
    }
    case 243704:
    {
        returnValue = F("Oswald-Andrae-Str.");
        break;
    }
    case 243705:
    {
        returnValue = F("Oswald-Anger-Siedlung");
        break;
    }
    case 243706:
    {
        returnValue = F("Oswald-Barthel-Str.");
        break;
    }
    case 243707:
    {
        returnValue = F("Oswald-Berkhan-Str.");
        break;
    }
    case 243708:
    {
        returnValue = F("Oswald-Blank-Weg");
        break;
    }
    case 243709:
    {
        returnValue = F("Oswald-Bleier-Str.");
        break;
    }
    case 243710:
    {
        returnValue = F("Oswald-Boelcke-Str.");
        break;
    }
    case 243711:
    {
        returnValue = F("Oswald-Gerhard-Weg");
        break;
    }
    case 243712:
    {
        returnValue = F("Oswald-Greb-Str.");
        break;
    }
    case 243713:
    {
        returnValue = F("Oswald-Greiner-Str.");
        break;
    }
    case 243714:
    {
        returnValue = F("Oswald-Grimb-Str.");
        break;
    }
    case 243715:
    {
        returnValue = F("Oswald-Haug-Str.");
        break;
    }
    case 243716:
    {
        returnValue = F("Oswald-Haug-Weg");
        break;
    }
    case 243717:
    {
        returnValue = F("Oswald-Heck-Str.");
        break;
    }
    case 243718:
    {
        returnValue = F("Oswald-Kahnt-Ring");
        break;
    }
    case 243719:
    {
        returnValue = F("Oswald-Kahnt-Str.");
        break;
    }
    case 243720:
    {
        returnValue = F("Oswald-Klein-Str.");
        break;
    }
    case 243721:
    {
        returnValue = F("Oswald-Läuterer-Str.");
        break;
    }
    case 243722:
    {
        returnValue = F("Oswald-Markert-Ring");
        break;
    }
    case 243723:
    {
        returnValue = F("Oswald-Matheis-Str.");
        break;
    }
    case 243724:
    {
        returnValue = F("Oswald-Meder-Str.");
        break;
    }
    case 243725:
    {
        returnValue = F("Oswald-Merz-Str.");
        break;
    }
    case 243726:
    {
        returnValue = F("Oswald-Neumann-Str.");
        break;
    }
    case 243727:
    {
        returnValue = F("Oswald-Richter-Str.");
        break;
    }
    case 243728:
    {
        returnValue = F("Oswald-Schmidt-Str.");
        break;
    }
    case 243729:
    {
        returnValue = F("Oswald-Spengler-Str.");
        break;
    }
    case 243730:
    {
        returnValue = F("Oswald-Wagner-Str.");
        break;
    }
    case 243731:
    {
        returnValue = F("Oswald-Wiersich-Str.");
        break;
    }
    case 243732:
    {
        returnValue = F("Oswald-Zobel-Str.");
        break;
    }
    case 243733:
    {
        returnValue = F("Oswald-von-Nell-Breuning-Allee");
        break;
    }
    case 243734:
    {
        returnValue = F("Oswald-von-Nell-Breuning-Str.");
        break;
    }
    case 243735:
    {
        returnValue = F("Oswaldgasse");
        break;
    }
    case 243736:
    {
        returnValue = F("Oswaldplatz");
        break;
    }
    case 243737:
    {
        returnValue = F("Oswaldstr.");
        break;
    }
    case 243738:
    {
        returnValue = F("Oswaldtalstr.");
        break;
    }
    case 243739:
    {
        returnValue = F("Oswaldweg");
        break;
    }
    case 243740:
    {
        returnValue = F("Oswaltstr.");
        break;
    }
    case 243741:
    {
        returnValue = F("Oswin-Brunner-Weg");
        break;
    }
    case 243742:
    {
        returnValue = F("Oswin-Rost-Str.");
        break;
    }
    case 243743:
    {
        returnValue = F("Otawistr.");
        break;
    }
    case 243744:
    {
        returnValue = F("Otbertstr.");
        break;
    }
    case 243745:
    {
        returnValue = F("Otenbergweg");
        break;
    }
    case 243746:
    {
        returnValue = F("Otersen");
        break;
    }
    case 243747:
    {
        returnValue = F("Otersener Dorfstr.");
        break;
    }
    case 243748:
    {
        returnValue = F("Otfrid-von-Weißenburg-Str.");
        break;
    }
    case 243749:
    {
        returnValue = F("Otfried-Müller-Str.");
        break;
    }
    case 243750:
    {
        returnValue = F("Otfried-Müller-Weg");
        break;
    }
    case 243751:
    {
        returnValue = F("Otfried-Preußler-Allee");
        break;
    }
    case 243752:
    {
        returnValue = F("Otfried-Preußler-Ring");
        break;
    }
    case 243753:
    {
        returnValue = F("Otfried-Preußler-Str.");
        break;
    }
    case 243754:
    {
        returnValue = F("Otfried-Preußler-Weg");
        break;
    }
    case 243755:
    {
        returnValue = F("Otfriedpfad");
        break;
    }
    case 243756:
    {
        returnValue = F("Otgartstr.");
        break;
    }
    case 243757:
    {
        returnValue = F("Otgeristr.");
        break;
    }
    case 243758:
    {
        returnValue = F("Othaler Str.");
        break;
    }
    case 243759:
    {
        returnValue = F("Othaler Weg");
        break;
    }
    case 243760:
    {
        returnValue = F("Othbergstr.");
        break;
    }
    case 243761:
    {
        returnValue = F("Othelloweg");
        break;
    }
    case 243762:
    {
        returnValue = F("Othenbergstr.");
        break;
    }
    case 243763:
    {
        returnValue = F("Othestr.");
        break;
    }
    case 243764:
    {
        returnValue = F("Othlinghauser Kamp");
        break;
    }
    case 243765:
    {
        returnValue = F("Othlinghauser Str.");
        break;
    }
    case 243766:
    {
        returnValue = F("Othmar-Weis-Str.");
        break;
    }
    case 243767:
    {
        returnValue = F("Othmaringhausen");
        break;
    }
    case 243768:
    {
        returnValue = F("Othmarsplatz");
        break;
    }
    case 243769:
    {
        returnValue = F("Othmarstr.");
        break;
    }
    case 243770:
    {
        returnValue = F("Othmarsweg");
        break;
    }
    case 243771:
    {
        returnValue = F("Othmayrstr.");
        break;
    }
    case 243772:
    {
        returnValue = F("Othmundstr.");
        break;
    }
    case 243773:
    {
        returnValue = F("Othrichstr.");
        break;
    }
    case 243774:
    {
        returnValue = F("Otilostr.");
        break;
    }
    case 243775:
    {
        returnValue = F("Otimarstr.");
        break;
    }
    case 243776:
    {
        returnValue = F("Otis");
        break;
    }
    case 243777:
    {
        returnValue = F("Otkarstr.");
        break;
    }
    case 243778:
    {
        returnValue = F("Otkerstr.");
        break;
    }
    case 243779:
    {
        returnValue = F("Otlerstr.");
        break;
    }
    case 243780:
    {
        returnValue = F("Otlohstr.");
        break;
    }
    case 243781:
    {
        returnValue = F("Otmar-Schaller-Allee");
        break;
    }
    case 243782:
    {
        returnValue = F("Otmarweg");
        break;
    }
    case 243783:
    {
        returnValue = F("Otmerschstr.");
        break;
    }
    case 243784:
    {
        returnValue = F("Otnistr.");
        break;
    }
    case 243785:
    {
        returnValue = F("Otolfstr.");
        break;
    }
    case 243786:
    {
        returnValue = F("Otostr.");
        break;
    }
    case 243787:
    {
        returnValue = F("Otranger Str.");
        break;
    }
    case 243788:
    {
        returnValue = F("Otratring");
        break;
    }
    case 243789:
    {
        returnValue = F("Otsustr.");
        break;
    }
    case 243790:
    {
        returnValue = F("Ott-Heinrich-Str.");
        break;
    }
    case 243791:
    {
        returnValue = F("Ottacher Str.");
        break;
    }
    case 243792:
    {
        returnValue = F("Ottacker");
        break;
    }
    case 243793:
    {
        returnValue = F("Ottawa-Str.");
        break;
    }
    case 243794:
    {
        returnValue = F("Ottawa-Weg");
        break;
    }
    case 243795:
    {
        returnValue = F("Ottberger Str.");
        break;
    }
    case 243796:
    {
        returnValue = F("Ottberger Weg");
        break;
    }
    case 243797:
    {
        returnValue = F("Otte-von-Stetzlingen-Str.");
        break;
    }
    case 243798:
    {
        returnValue = F("Ottegasse");
        break;
    }
    case 243799:
    {
        returnValue = F("Ottegrafenstr.");
        break;
    }
    case 243800:
    {
        returnValue = F("Ottelmannshäuser Str.");
        break;
    }
    case 243801:
    {
        returnValue = F("Ottelsbergstr.");
        break;
    }
    case 243802:
    {
        returnValue = F("Otten");
        break;
    }
    case 243803:
    {
        returnValue = F("Ottenauer Str.");
        break;
    }
    case 243804:
    {
        returnValue = F("Ottenbacher Str.");
        break;
    }
    case 243805:
    {
        returnValue = F("Ottenbecker Damm");
        break;
    }
    case 243806:
    {
        returnValue = F("Ottenberg");
        break;
    }
    case 243807:
    {
        returnValue = F("Ottenberghalde");
        break;
    }
    case 243808:
    {
        returnValue = F("Ottenbergkamp");
        break;
    }
    case 243809:
    {
        returnValue = F("Ottenbergstr.");
        break;
    }
    case 243810:
    {
        returnValue = F("Ottenbergweg");
        break;
    }
    case 243811:
    {
        returnValue = F("Ottenbohlstr.");
        break;
    }
    case 243812:
    {
        returnValue = F("Ottenbronner Hof");
        break;
    }
    case 243813:
    {
        returnValue = F("Ottenbronner Str.");
        break;
    }
    case 243814:
    {
        returnValue = F("Ottenbrucher Str.");
        break;
    }
    case 243815:
    {
        returnValue = F("Ottenbrunnenweg");
        break;
    }
    case 243816:
    {
        returnValue = F("Ottenbrücke");
        break;
    }
    case 243817:
    {
        returnValue = F("Ottenburger Str.");
        break;
    }
    case 243818:
    {
        returnValue = F("Ottenburger Weg");
        break;
    }
    case 243819:
    {
        returnValue = F("Ottenburgstr.");
        break;
    }
    case 243820:
    {
        returnValue = F("Ottenbühl");
        break;
    }
    case 243821:
    {
        returnValue = F("Ottendichler Str.");
        break;
    }
    case 243822:
    {
        returnValue = F("Ottendinger Str.");
        break;
    }
    case 243823:
    {
        returnValue = F("Ottendorf");
        break;
    }
    case 243824:
    {
        returnValue = F("Ottendorfer Gemeindeweg");
        break;
    }
    case 243825:
    {
        returnValue = F("Ottendorfer Hang");
        break;
    }
    case 243826:
    {
        returnValue = F("Ottendorfer Steig");
        break;
    }
    case 243827:
    {
        returnValue = F("Ottendorfer Str.");
        break;
    }
    case 243828:
    {
        returnValue = F("Ottendorfer Weg");
        break;
    }
    case 243829:
    {
        returnValue = F("Ottener Str.");
        break;
    }
    case 243830:
    {
        returnValue = F("Ottenfelder Str.");
        break;
    }
    case 243831:
    {
        returnValue = F("Ottengasse");
        break;
    }
    case 243832:
    {
        returnValue = F("Ottengrubenweg");
        break;
    }
    case 243833:
    {
        returnValue = F("Ottengrüner Heide");
        break;
    }
    case 243834:
    {
        returnValue = F("Ottengrüner Str.");
        break;
    }
    case 243835:
    {
        returnValue = F("Ottenhagen");
        break;
    }
    case 243836:
    {
        returnValue = F("Ottenhai");
        break;
    }
    case 243837:
    {
        returnValue = F("Ottenhainer Str.");
        break;
    }
    case 243838:
    {
        returnValue = F("Ottenhau");
        break;
    }
    case 243839:
    {
        returnValue = F("Ottenhausener Str.");
        break;
    }
    case 243840:
    {
        returnValue = F("Ottenhauser Str.");
        break;
    }
    case 243841:
    {
        returnValue = F("Ottenhauser Weg");
        break;
    }
    case 243842:
    {
        returnValue = F("Ottenheide");
        break;
    }
    case 243843:
    {
        returnValue = F("Ottenheider Weg");
        break;
    }
    case 243844:
    {
        returnValue = F("Ottenheimer Str.");
        break;
    }
    case 243845:
    {
        returnValue = F("Ottenheimer Weg");
        break;
    }
    case 243846:
    {
        returnValue = F("Ottenhof");
        break;
    }
    case 243847:
    {
        returnValue = F("Ottenhofener Str.");
        break;
    }
    case 243848:
    {
        returnValue = F("Ottenhäuser Str.");
        break;
    }
    case 243849:
    {
        returnValue = F("Ottenhäuser Weg");
        break;
    }
    case 243850:
    {
        returnValue = F("Ottenhöfer Str.");
        break;
    }
    case 243851:
    {
        returnValue = F("Ottenjansstr.");
        break;
    }
    case 243852:
    {
        returnValue = F("Ottenkamp");
        break;
    }
    case 243853:
    {
        returnValue = F("Ottenkofen");
        break;
    }
    case 243854:
    {
        returnValue = F("Ottenkrogsweg");
        break;
    }
    case 243855:
    {
        returnValue = F("Ottenlock");
        break;
    }
    case 243856:
    {
        returnValue = F("Ottenmahdweg");
        break;
    }
    case 243857:
    {
        returnValue = F("Ottennab");
        break;
    }
    case 243858:
    {
        returnValue = F("Ottenrain");
        break;
    }
    case 243859:
    {
        returnValue = F("Ottenried");
        break;
    }
    case 243860:
    {
        returnValue = F("Ottenrieth");
        break;
    }
    case 243861:
    {
        returnValue = F("Ottenroder Str.");
        break;
    }
    case 243862:
    {
        returnValue = F("Ottens Garten");
        break;
    }
    case 243863:
    {
        returnValue = F("Ottens Weg");
        break;
    }
    case 243864:
    {
        returnValue = F("Ottensberg");
        break;
    }
    case 243865:
    {
        returnValue = F("Ottenschlag");
        break;
    }
    case 243866:
    {
        returnValue = F("Ottenschölstr.");
        break;
    }
    case 243867:
    {
        returnValue = F("Ottensener Weg");
        break;
    }
    case 243868:
    {
        returnValue = F("Ottenser Str.");
        break;
    }
    case 243869:
    {
        returnValue = F("Ottensgasse");
        break;
    }
    case 243870:
    {
        returnValue = F("Ottenskamp");
        break;
    }
    case 243871:
    {
        returnValue = F("Ottensooser Str.");
        break;
    }
    case 243872:
    {
        returnValue = F("Ottensooser Weg");
        break;
    }
    case 243873:
    {
        returnValue = F("Ottenspitz");
        break;
    }
    case 243874:
    {
        returnValue = F("Ottensstr.");
        break;
    }
    case 243875:
    {
        returnValue = F("Ottensteg");
        break;
    }
    case 243876:
    {
        returnValue = F("Ottensteig");
        break;
    }
    case 243877:
    {
        returnValue = F("Ottensteiner Brook");
        break;
    }
    case 243878:
    {
        returnValue = F("Ottensteiner Str.");
        break;
    }
    case 243879:
    {
        returnValue = F("Ottenstr.");
        break;
    }
    case 243880:
    {
        returnValue = F("Ottensweg");
        break;
    }
    case 243881:
    {
        returnValue = F("Ottental");
        break;
    }
    case 243882:
    {
        returnValue = F("Ottenthal");
        break;
    }
    case 243883:
    {
        returnValue = F("Ottenweg");
        break;
    }
    case 243884:
    {
        returnValue = F("Ottenweier");
        break;
    }
    case 243885:
    {
        returnValue = F("Ottenäcker");
        break;
    }
    case 243886:
    {
        returnValue = F("Otterbach");
        break;
    }
    case 243887:
    {
        returnValue = F("Otterbachbrücke");
        break;
    }
    case 243888:
    {
        returnValue = F("Otterbache");
        break;
    }
    case 243889:
    {
        returnValue = F("Otterbacher Str.");
        break;
    }
    case 243890:
    {
        returnValue = F("Otterbachstr.");
        break;
    }
    case 243891:
    {
        returnValue = F("Otterbachweg");
        break;
    }
    case 243892:
    {
        returnValue = F("Otterbeckstr.");
        break;
    }
    case 243893:
    {
        returnValue = F("Otterberger Hohl");
        break;
    }
    case 243894:
    {
        returnValue = F("Otterberger Str.");
        break;
    }
    case 243895:
    {
        returnValue = F("Otterbornweg");
        break;
    }
    case 243896:
    {
        returnValue = F("Otterbraack");
        break;
    }
    case 243897:
    {
        returnValue = F("Otterbreite");
        break;
    }
    case 243898:
    {
        returnValue = F("Otterbäkenweg");
        break;
    }
    case 243899:
    {
        returnValue = F("Otterdriesch");
        break;
    }
    case 243900:
    {
        returnValue = F("Otterer Holzweg");
        break;
    }
    case 243901:
    {
        returnValue = F("Otterer Mühlenweg");
        break;
    }
    case 243902:
    {
        returnValue = F("Otterfinger Str.");
        break;
    }
    case 243903:
    {
        returnValue = F("Otterfinger Weg");
        break;
    }
    case 243904:
    {
        returnValue = F("Otterfleck");
        break;
    }
    case 243905:
    {
        returnValue = F("Otterfurt");
        break;
    }
    case 243906:
    {
        returnValue = F("Ottergasse");
        break;
    }
    case 243907:
    {
        returnValue = F("Otterheider Weg");
        break;
    }
    case 243908:
    {
        returnValue = F("Otteringer Str.");
        break;
    }
    case 243909:
    {
        returnValue = F("Otterkamp");
        break;
    }
    case 243910:
    {
        returnValue = F("Otterkiez");
        break;
    }
    case 243911:
    {
        returnValue = F("Otterklingenweg");
        break;
    }
    case 243912:
    {
        returnValue = F("Otterkring");
        break;
    }
    case 243913:
    {
        returnValue = F("Otterkuhle");
        break;
    }
    case 243914:
    {
        returnValue = F("Otterkuhlen");
        break;
    }
    case 243915:
    {
        returnValue = F("Otterloh");
        break;
    }
    case 243916:
    {
        returnValue = F("Otterloher Kirchenweg");
        break;
    }
    case 243917:
    {
        returnValue = F("Otterloher Str.");
        break;
    }
    case 243918:
    {
        returnValue = F("Ottermeerstr.");
        break;
    }
    case 243919:
    {
        returnValue = F("Ottermoorer Weg");
        break;
    }
    case 243920:
    {
        returnValue = F("Ottermoosweg");
        break;
    }
    case 243921:
    {
        returnValue = F("Ottermühle");
        break;
    }
    case 243922:
    {
        returnValue = F("Otternbergkamp");
        break;
    }
    case 243923:
    {
        returnValue = F("Otternbuschweg");
        break;
    }
    case 243924:
    {
        returnValue = F("Otterndorfer Str.");
        break;
    }
    case 243925:
    {
        returnValue = F("Otterngasse");
        break;
    }
    case 243926:
    {
        returnValue = F("Otterngrub");
        break;
    }
    case 243927:
    {
        returnValue = F("Otterngässchen");
        break;
    }
    case 243928:
    {
        returnValue = F("Otternhagener Str.");
        break;
    }
    case 243929:
    {
        returnValue = F("Otternhägener Str.");
        break;
    }
    case 243930:
    {
        returnValue = F("Otternkamp");
        break;
    }
    case 243931:
    {
        returnValue = F("Otternsteig");
        break;
    }
    case 243932:
    {
        returnValue = F("Otternweg");
        break;
    }
    case 243933:
    {
        returnValue = F("Otternwiese");
        break;
    }
    case 243934:
    {
        returnValue = F("Otterpfad");
        break;
    }
    case 243935:
    {
        returnValue = F("Ottersbacher Str.");
        break;
    }
    case 243936:
    {
        returnValue = F("Ottersbachtalstr.");
        break;
    }
    case 243937:
    {
        returnValue = F("Ottersberger Str.");
        break;
    }
    case 243938:
    {
        returnValue = F("Ottersberger Weg");
        break;
    }
    case 243939:
    {
        returnValue = F("Ottersbergstr.");
        break;
    }
    case 243940:
    {
        returnValue = F("Ottersbergweg");
        break;
    }
    case 243941:
    {
        returnValue = F("Ottersburger Dorfstr.");
        break;
    }
    case 243942:
    {
        returnValue = F("Ottersburger Gutshof");
        break;
    }
    case 243943:
    {
        returnValue = F("Otterschütz");
        break;
    }
    case 243944:
    {
        returnValue = F("Ottersdorfer Hauptstr.");
        break;
    }
    case 243945:
    {
        returnValue = F("Ottersdorfer Str.");
        break;
    }
    case 243946:
    {
        returnValue = F("Ottersfuhrstr.");
        break;
    }
    case 243947:
    {
        returnValue = F("Ottersheimer Str.");
        break;
    }
    case 243948:
    {
        returnValue = F("Ottersitz");
        break;
    }
    case 243949:
    {
        returnValue = F("Ottersleber Chaussee");
        break;
    }
    case 243950:
    {
        returnValue = F("Ottersleber Str.");
        break;
    }
    case 243951:
    {
        returnValue = F("Ottersleber Tor");
        break;
    }
    case 243952:
    {
        returnValue = F("Ottersleber Weg");
        break;
    }
    case 243953:
    {
        returnValue = F("Ottersried");
        break;
    }
    case 243954:
    {
        returnValue = F("Ottersrieder Str.");
        break;
    }
    case 243955:
    {
        returnValue = F("Ottersring");
        break;
    }
    case 243956:
    {
        returnValue = F("Otterstadter Str.");
        break;
    }
    case 243957:
    {
        returnValue = F("Otterstadter Weg");
        break;
    }
    case 243958:
    {
        returnValue = F("Otterstal");
        break;
    }
    case 243959:
    {
        returnValue = F("Otterstedter Str.");
        break;
    }
    case 243960:
    {
        returnValue = F("Ottersteg");
        break;
    }
    case 243961:
    {
        returnValue = F("Ottersteig");
        break;
    }
    case 243962:
    {
        returnValue = F("Ottersteiner Vorweide");
        break;
    }
    case 243963:
    {
        returnValue = F("Ottersteinstr.");
        break;
    }
    case 243964:
    {
        returnValue = F("Otterstr.");
        break;
    }
    case 243965:
    {
        returnValue = F("Otterstädter Str.");
        break;
    }
    case 243966:
    {
        returnValue = F("Otterstädter Weg");
        break;
    }
    case 243967:
    {
        returnValue = F("Otterswanger Str.");
        break;
    }
    case 243968:
    {
        returnValue = F("Otterswanger Weg");
        break;
    }
    case 243969:
    {
        returnValue = F("Ottersweg");
        break;
    }
    case 243970:
    {
        returnValue = F("Ottertal Geräumt");
        break;
    }
    case 243971:
    {
        returnValue = F("Ottertalweg");
        break;
    }
    case 243972:
    {
        returnValue = F("Ottertellenweg");
        break;
    }
    case 243973:
    {
        returnValue = F("Otterweg");
        break;
    }
    case 243974:
    {
        returnValue = F("Otterwerk");
        break;
    }
    case 243975:
    {
        returnValue = F("Otterwinkel");
        break;
    }
    case 243976:
    {
        returnValue = F("Otterwischer Str.");
        break;
    }
    case 243977:
    {
        returnValue = F("Otteshudestr.");
        break;
    }
    case 243978:
    {
        returnValue = F("Ottestr.");
        break;
    }
    case 243979:
    {
        returnValue = F("Otteweg");
        break;
    }
    case 243980:
    {
        returnValue = F("Ottewiger Park");
        break;
    }
    case 243981:
    {
        returnValue = F("Ottewiger Str.");
        break;
    }
    case 243982:
    {
        returnValue = F("Ottfinger Str.");
        break;
    }
    case 243983:
    {
        returnValue = F("Ottfried-Möller-Str.");
        break;
    }
    case 243984:
    {
        returnValue = F("Ottfried-Schmidt-Str.");
        break;
    }
    case 243985:
    {
        returnValue = F("Ottheinrich-Philipp-Str.");
        break;
    }
    case 243986:
    {
        returnValue = F("Ottheinrichplatz");
        break;
    }
    case 243987:
    {
        returnValue = F("Ottheinrichstr.");
        break;
    }
    case 243988:
    {
        returnValue = F("Ottheinrichweg");
        break;
    }
    case 243989:
    {
        returnValue = F("Otti-Werner-Str.");
        break;
    }
    case 243990:
    {
        returnValue = F("Otticha");
        break;
    }
    case 243991:
    {
        returnValue = F("Ottigsweg");
        break;
    }
    case 243992:
    {
        returnValue = F("Ottilia-Asperger-Str.");
        break;
    }
    case 243993:
    {
        returnValue = F("Ottilia-Carolina-Moufang-Str.");
        break;
    }
    case 243994:
    {
        returnValue = F("Ottilie-Baader-Str.");
        break;
    }
    case 243995:
    {
        returnValue = F("Ottilie-Baader-Weg");
        break;
    }
    case 243996:
    {
        returnValue = F("Ottilie-Dirr-Str.");
        break;
    }
    case 243997:
    {
        returnValue = F("Ottilie-Kuhn-Str.");
        break;
    }
    case 243998:
    {
        returnValue = F("Ottilie-Metzger-Weg");
        break;
    }
    case 243999:
    {
        returnValue = F("Ottilie-Rady-Weg");
        break;
    }
    case 244000:
    {
        returnValue = F("Ottilie-Roederstein-Platz");
        break;
    }
    case 244001:
    {
        returnValue = F("Ottilie-Schoenewald-Str.");
        break;
    }
    case 244002:
    {
        returnValue = F("Ottilie-Wildermuth-Str.");
        break;
    }
    case 244003:
    {
        returnValue = F("Ottilie-Wildermuth-Weg");
        break;
    }
    case 244004:
    {
        returnValue = F("Ottilienau");
        break;
    }
    case 244005:
    {
        returnValue = F("Ottilienaustr.");
        break;
    }
    case 244006:
    {
        returnValue = F("Ottilienberg");
        break;
    }
    case 244007:
    {
        returnValue = F("Ottilienbergstr.");
        break;
    }
    case 244008:
    {
        returnValue = F("Ottilienbergweg");
        break;
    }
    case 244009:
    {
        returnValue = F("Ottiliengasse");
        break;
    }
    case 244010:
    {
        returnValue = F("Ottilienhof");
        break;
    }
    case 244011:
    {
        returnValue = F("Ottilienplatz");
        break;
    }
    case 244012:
    {
        returnValue = F("Ottilienquelle");
        break;
    }
    case 244013:
    {
        returnValue = F("Ottilienstr.");
        break;
    }
    case 244014:
    {
        returnValue = F("Ottilienweg");
        break;
    }
    case 244015:
    {
        returnValue = F("Otting");
        break;
    }
    case 244016:
    {
        returnValue = F("Ottinger Dorfstr.");
        break;
    }
    case 244017:
    {
        returnValue = F("Ottinger Ring");
        break;
    }
    case 244018:
    {
        returnValue = F("Ottinger Str.");
        break;
    }
    case 244019:
    {
        returnValue = F("Ottinger-Kirchweg");
        break;
    }
    case 244020:
    {
        returnValue = F("Ottisrieder Str.");
        break;
    }
    case 244021:
    {
        returnValue = F("Ottken Tannen");
        break;
    }
    case 244022:
    {
        returnValue = F("Ottlandring");
        break;
    }
    case 244023:
    {
        returnValue = F("Ottlarer Str.");
        break;
    }
    case 244024:
    {
        returnValue = F("Ottlebener Str.");
        break;
    }
    case 244025:
    {
        returnValue = F("Ottmachauer Str.");
        break;
    }
    case 244026:
    {
        returnValue = F("Ottmachauer Weg");
        break;
    }
    case 244027:
    {
        returnValue = F("Ottmannsdorf");
        break;
    }
    case 244028:
    {
        returnValue = F("Ottmannsdorfer Str.");
        break;
    }
    case 244029:
    {
        returnValue = F("Ottmannshausen");
        break;
    }
    case 244030:
    {
        returnValue = F("Ottmannshauser Gasse");
        break;
    }
    case 244031:
    {
        returnValue = F("Ottmannshauser Str.");
        break;
    }
    case 244032:
    {
        returnValue = F("Ottmannshofen");
        break;
    }
    case 244033:
    {
        returnValue = F("Ottmannshofer Str.");
        break;
    }
    case 244034:
    {
        returnValue = F("Ottmannshofer Weg");
        break;
    }
    case 244035:
    {
        returnValue = F("Ottmannshäuser Str.");
        break;
    }
    case 244036:
    {
        returnValue = F("Ottmannskamp");
        break;
    }
    case 244037:
    {
        returnValue = F("Ottmannsreuth");
        break;
    }
    case 244038:
    {
        returnValue = F("Ottmar-Flor-Platz");
        break;
    }
    case 244039:
    {
        returnValue = F("Ottmar-Mattil-Str.");
        break;
    }
    case 244040:
    {
        returnValue = F("Ottmar-Mergenthaler-Str.");
        break;
    }
    case 244041:
    {
        returnValue = F("Ottmar-Nädele-Str.");
        break;
    }
    case 244042:
    {
        returnValue = F("Ottmar-Reger-Str.");
        break;
    }
    case 244043:
    {
        returnValue = F("Ottmar-Schönhuth-Str.");
        break;
    }
    case 244044:
    {
        returnValue = F("Ottmaringer Str.");
        break;
    }
    case 244045:
    {
        returnValue = F("Ottmaringhäuser Weg");
        break;
    }
    case 244046:
    {
        returnValue = F("Ottmarsbocholter Str.");
        break;
    }
    case 244047:
    {
        returnValue = F("Ottmarsfeld");
        break;
    }
    case 244048:
    {
        returnValue = F("Ottmarsfelder Weg");
        break;
    }
    case 244049:
    {
        returnValue = F("Ottmarsgäßchen");
        break;
    }
    case 244050:
    {
        returnValue = F("Ottmarshauser Str.");
        break;
    }
    case 244051:
    {
        returnValue = F("Ottmarshauser Weg");
        break;
    }
    case 244052:
    {
        returnValue = F("Ottmarsheimer Str.");
        break;
    }
    case 244053:
    {
        returnValue = F("Ottmarstr.");
        break;
    }
    case 244054:
    {
        returnValue = F("Ottmartalstr.");
        break;
    }
    case 244055:
    {
        returnValue = F("Ottmarweg");
        break;
    }
    case 244056:
    {
        returnValue = F("Ottmerstr.");
        break;
    }
    case 244057:
    {
        returnValue = F("Ottmuther Weg");
        break;
    }
    case 244058:
    {
        returnValue = F("Otto Böhme Weg");
        break;
    }
    case 244059:
    {
        returnValue = F("Otto Gampper Park");
        break;
    }
    case 244060:
    {
        returnValue = F("Otto Kirchhoff-Weg");
        break;
    }
    case 244061:
    {
        returnValue = F("Otto Ochner Weg (Kawäldlesweg)");
        break;
    }
    case 244062:
    {
        returnValue = F("Otto Ochner Weg(Kawäldlesweg)");
        break;
    }
    case 244063:
    {
        returnValue = F("Otto Sanner-Platz");
        break;
    }
    case 244064:
    {
        returnValue = F("Otto Speirer Weg");
        break;
    }
    case 244065:
    {
        returnValue = F("Otto Steiert Weg");
        break;
    }
    case 244066:
    {
        returnValue = F("Otto-Adam-Str.");
        break;
    }
    case 244067:
    {
        returnValue = F("Otto-Aichele-Str.");
        break;
    }
    case 244068:
    {
        returnValue = F("Otto-Albrecht-Weg");
        break;
    }
    case 244069:
    {
        returnValue = F("Otto-Altenkirch-Str.");
        break;
    }
    case 244070:
    {
        returnValue = F("Otto-Ammann-Platz");
        break;
    }
    case 244071:
    {
        returnValue = F("Otto-Anspach-Str.");
        break;
    }
    case 244072:
    {
        returnValue = F("Otto-Arndt-Str.");
        break;
    }
    case 244073:
    {
        returnValue = F("Otto-Aulbach-Str.");
        break;
    }
    case 244074:
    {
        returnValue = F("Otto-Baab-Str.");
        break;
    }
    case 244075:
    {
        returnValue = F("Otto-Backens-Weg");
        break;
    }
    case 244076:
    {
        returnValue = F("Otto-Backhaus-Str.");
        break;
    }
    case 244077:
    {
        returnValue = F("Otto-Bader-Str.");
        break;
    }
    case 244078:
    {
        returnValue = F("Otto-Baer-Str.");
        break;
    }
    case 244079:
    {
        returnValue = F("Otto-Bahrenburg-Weg");
        break;
    }
    case 244080:
    {
        returnValue = F("Otto-Balkenholl-Weg");
        break;
    }
    case 244081:
    {
        returnValue = F("Otto-Balzer-Str.");
        break;
    }
    case 244082:
    {
        returnValue = F("Otto-Barthelmes-Weg");
        break;
    }
    case 244083:
    {
        returnValue = F("Otto-Bartning-Str.");
        break;
    }
    case 244084:
    {
        returnValue = F("Otto-Bauer-Str.");
        break;
    }
    case 244085:
    {
        returnValue = F("Otto-Baumann-Str.");
        break;
    }
    case 244086:
    {
        returnValue = F("Otto-Baumbusch-Str.");
        break;
    }
    case 244087:
    {
        returnValue = F("Otto-Bayer-Str.");
        break;
    }
    case 244088:
    {
        returnValue = F("Otto-Beche-Str.");
        break;
    }
    case 244089:
    {
        returnValue = F("Otto-Becher-Weg");
        break;
    }
    case 244090:
    {
        returnValue = F("Otto-Beck-Str.");
        break;
    }
    case 244091:
    {
        returnValue = F("Otto-Becker-Weg");
        break;
    }
    case 244092:
    {
        returnValue = F("Otto-Beckmann-Str.");
        break;
    }
    case 244093:
    {
        returnValue = F("Otto-Behaghel-Str.");
        break;
    }
    case 244094:
    {
        returnValue = F("Otto-Benecke-Weg");
        break;
    }
    case 244095:
    {
        returnValue = F("Otto-Benöhr-Weg");
        break;
    }
    case 244096:
    {
        returnValue = F("Otto-Bepler-Str.");
        break;
    }
    case 244097:
    {
        returnValue = F("Otto-Bergner-Str.");
        break;
    }
    case 244098:
    {
        returnValue = F("Otto-Berthold-Str.");
        break;
    }
    case 244099:
    {
        returnValue = F("Otto-Bihlmaier-Steig");
        break;
    }
    case 244100:
    {
        returnValue = F("Otto-Blesch-Str.");
        break;
    }
    case 244101:
    {
        returnValue = F("Otto-Blum-Str.");
        break;
    }
    case 244102:
    {
        returnValue = F("Otto-Blumenthal-Str.");
        break;
    }
    case 244103:
    {
        returnValue = F("Otto-Blüse-Str.");
        break;
    }
    case 244104:
    {
        returnValue = F("Otto-Bock-Str.");
        break;
    }
    case 244105:
    {
        returnValue = F("Otto-Boelitz-Weg");
        break;
    }
    case 244106:
    {
        returnValue = F("Otto-Boessneck-Str.");
        break;
    }
    case 244107:
    {
        returnValue = F("Otto-Bohnert-Str.");
        break;
    }
    case 244108:
    {
        returnValue = F("Otto-Boll-Str.");
        break;
    }
    case 244109:
    {
        returnValue = F("Otto-Brackel-Weg");
        break;
    }
    case 244110:
    {
        returnValue = F("Otto-Braun-Str.");
        break;
    }
    case 244111:
    {
        returnValue = F("Otto-Braune-Str.");
        break;
    }
    case 244112:
    {
        returnValue = F("Otto-Brauner-Str.");
        break;
    }
    case 244113:
    {
        returnValue = F("Otto-Braungardt-Str.");
        break;
    }
    case 244114:
    {
        returnValue = F("Otto-Bremer-Str.");
        break;
    }
    case 244115:
    {
        returnValue = F("Otto-Brenner-Platz");
        break;
    }
    case 244116:
    {
        returnValue = F("Otto-Brenner-Str.");
        break;
    }
    case 244117:
    {
        returnValue = F("Otto-Brindl-Str.");
        break;
    }
    case 244118:
    {
        returnValue = F("Otto-Brosowski-Str.");
        break;
    }
    case 244119:
    {
        returnValue = F("Otto-Bruchholz-Str.");
        break;
    }
    case 244120:
    {
        returnValue = F("Otto-Bruchwitz-Str.");
        break;
    }
    case 244121:
    {
        returnValue = F("Otto-Bruder-Str.");
        break;
    }
    case 244122:
    {
        returnValue = F("Otto-Brunfels-Schneise");
        break;
    }
    case 244123:
    {
        returnValue = F("Otto-Brunfels-Str.");
        break;
    }
    case 244124:
    {
        returnValue = F("Otto-Brües-Str.");
        break;
    }
    case 244125:
    {
        returnValue = F("Otto-Brües-Weg");
        break;
    }
    case 244126:
    {
        returnValue = F("Otto-Brügmann-Str.");
        break;
    }
    case 244127:
    {
        returnValue = F("Otto-Buchwitz-Platz");
        break;
    }
    case 244128:
    {
        returnValue = F("Otto-Buchwitz-Ring");
        break;
    }
    case 244129:
    {
        returnValue = F("Otto-Buchwitz-Str.");
        break;
    }
    case 244130:
    {
        returnValue = F("Otto-Buckenmaier-Str.");
        break;
    }
    case 244131:
    {
        returnValue = F("Otto-Burger-Str.");
        break;
    }
    case 244132:
    {
        returnValue = F("Otto-Burrmeister-Allee");
        break;
    }
    case 244133:
    {
        returnValue = F("Otto-Busse-Str.");
        break;
    }
    case 244134:
    {
        returnValue = F("Otto-Butz-Str.");
        break;
    }
    case 244135:
    {
        returnValue = F("Otto-Bußmann-Str.");
        break;
    }
    case 244136:
    {
        returnValue = F("Otto-Bähr-Str.");
        break;
    }
    case 244137:
    {
        returnValue = F("Otto-Bätke-Weg");
        break;
    }
    case 244138:
    {
        returnValue = F("Otto-Bödecker-Str.");
        break;
    }
    case 244139:
    {
        returnValue = F("Otto-Bögeholz-Str.");
        break;
    }
    case 244140:
    {
        returnValue = F("Otto-Böhne-Platz");
        break;
    }
    case 244141:
    {
        returnValue = F("Otto-Böner-Weg");
        break;
    }
    case 244142:
    {
        returnValue = F("Otto-Böttinger-Str.");
        break;
    }
    case 244143:
    {
        returnValue = F("Otto-Carl-Schulz-Str.");
        break;
    }
    case 244144:
    {
        returnValue = F("Otto-Conrad-Str.");
        break;
    }
    case 244145:
    {
        returnValue = F("Otto-Damerau-Str.");
        break;
    }
    case 244146:
    {
        returnValue = F("Otto-Dangelmaier-Platz");
        break;
    }
    case 244147:
    {
        returnValue = F("Otto-Decker-Str.");
        break;
    }
    case 244148:
    {
        returnValue = F("Otto-Denk-Str.");
        break;
    }
    case 244149:
    {
        returnValue = F("Otto-Devrient-Str.");
        break;
    }
    case 244150:
    {
        returnValue = F("Otto-Deyßing-Weg");
        break;
    }
    case 244151:
    {
        returnValue = F("Otto-Dibelius-Str.");
        break;
    }
    case 244152:
    {
        returnValue = F("Otto-Dick-Str.");
        break;
    }
    case 244153:
    {
        returnValue = F("Otto-Dienst-Str.");
        break;
    }
    case 244154:
    {
        returnValue = F("Otto-Dietrich-Str.");
        break;
    }
    case 244155:
    {
        returnValue = F("Otto-Dill-Str.");
        break;
    }
    case 244156:
    {
        returnValue = F("Otto-Ditscher-Str.");
        break;
    }
    case 244157:
    {
        returnValue = F("Otto-Dix-Hof");
        break;
    }
    case 244158:
    {
        returnValue = F("Otto-Dix-Ring");
        break;
    }
    case 244159:
    {
        returnValue = F("Otto-Dix-Str.");
        break;
    }
    case 244160:
    {
        returnValue = F("Otto-Dix-Weg");
        break;
    }
    case 244161:
    {
        returnValue = F("Otto-Doringer-Str.");
        break;
    }
    case 244162:
    {
        returnValue = F("Otto-Drescher-Str.");
        break;
    }
    case 244163:
    {
        returnValue = F("Otto-Dressler-Str.");
        break;
    }
    case 244164:
    {
        returnValue = F("Otto-Dreyer-Str.");
        break;
    }
    case 244165:
    {
        returnValue = F("Otto-Dölle-Str.");
        break;
    }
    case 244166:
    {
        returnValue = F("Otto-Dörffer-Str.");
        break;
    }
    case 244167:
    {
        returnValue = F("Otto-Dünkelsbühler-Weg");
        break;
    }
    case 244168:
    {
        returnValue = F("Otto-Ebner-Str.");
        break;
    }
    case 244169:
    {
        returnValue = F("Otto-Eckerle-Str.");
        break;
    }
    case 244170:
    {
        returnValue = F("Otto-Eckstein-Str.");
        break;
    }
    case 244171:
    {
        returnValue = F("Otto-Efferenn-Str.");
        break;
    }
    case 244172:
    {
        returnValue = F("Otto-Ehrhardt-Str.");
        break;
    }
    case 244173:
    {
        returnValue = F("Otto-Ehrhart-Str.");
        break;
    }
    case 244174:
    {
        returnValue = F("Otto-Ehrl-Str.");
        break;
    }
    case 244175:
    {
        returnValue = F("Otto-Eichel-Str.");
        break;
    }
    case 244176:
    {
        returnValue = F("Otto-Eichhorn-Str.");
        break;
    }
    case 244177:
    {
        returnValue = F("Otto-Eißfeldt-Str.");
        break;
    }
    case 244178:
    {
        returnValue = F("Otto-Elster-Platz");
        break;
    }
    case 244179:
    {
        returnValue = F("Otto-Engau-Str.");
        break;
    }
    case 244180:
    {
        returnValue = F("Otto-Engelking-Str.");
        break;
    }
    case 244181:
    {
        returnValue = F("Otto-Engelmann-Str.");
        break;
    }
    case 244182:
    {
        returnValue = F("Otto-Engert-Str.");
        break;
    }
    case 244183:
    {
        returnValue = F("Otto-Enke-Str.");
        break;
    }
    case 244184:
    {
        returnValue = F("Otto-Eppenstein-Str.");
        break;
    }
    case 244185:
    {
        returnValue = F("Otto-Erbe-Weg");
        break;
    }
    case 244186:
    {
        returnValue = F("Otto-Erbert-Str.");
        break;
    }
    case 244187:
    {
        returnValue = F("Otto-Erdmann-Str.");
        break;
    }
    case 244188:
    {
        returnValue = F("Otto-Erich-Str.");
        break;
    }
    case 244189:
    {
        returnValue = F("Otto-Ernst-Schweizer-Str.");
        break;
    }
    case 244190:
    {
        returnValue = F("Otto-Ernst-Sutter-Weg");
        break;
    }
    case 244191:
    {
        returnValue = F("Otto-Ernst-Weg");
        break;
    }
    case 244192:
    {
        returnValue = F("Otto-Escher-Str.");
        break;
    }
    case 244193:
    {
        returnValue = F("Otto-Esser-Str.");
        break;
    }
    case 244194:
    {
        returnValue = F("Otto-F.-Scharr-Str.");
        break;
    }
    case 244195:
    {
        returnValue = F("Otto-Faber-Weg");
        break;
    }
    case 244196:
    {
        returnValue = F("Otto-Falckenberg-Str.");
        break;
    }
    case 244197:
    {
        returnValue = F("Otto-Feick-Weg");
        break;
    }
    case 244198:
    {
        returnValue = F("Otto-Feldmann-Str.");
        break;
    }
    case 244199:
    {
        returnValue = F("Otto-Feucht-Weg");
        break;
    }
    case 244200:
    {
        returnValue = F("Otto-Fielitz-Str.");
        break;
    }
    case 244201:
    {
        returnValue = F("Otto-Fikentscher-Weg");
        break;
    }
    case 244202:
    {
        returnValue = F("Otto-Filitz-Str.");
        break;
    }
    case 244203:
    {
        returnValue = F("Otto-Findeisen-Str.");
        break;
    }
    case 244204:
    {
        returnValue = F("Otto-Finsch-Str.");
        break;
    }
    case 244205:
    {
        returnValue = F("Otto-Fischer-Str.");
        break;
    }
    case 244206:
    {
        returnValue = F("Otto-Fischer-Weg");
        break;
    }
    case 244207:
    {
        returnValue = F("Otto-Flake-Str.");
        break;
    }
    case 244208:
    {
        returnValue = F("Otto-Flake-Weg");
        break;
    }
    case 244209:
    {
        returnValue = F("Otto-Flath-Str.");
        break;
    }
    case 244210:
    {
        returnValue = F("Otto-Fleischhauer-Str.");
        break;
    }
    case 244211:
    {
        returnValue = F("Otto-Fliesen-Str.");
        break;
    }
    case 244212:
    {
        returnValue = F("Otto-Fock-Str.");
        break;
    }
    case 244213:
    {
        returnValue = F("Otto-Fohl-Str.");
        break;
    }
    case 244214:
    {
        returnValue = F("Otto-Follmann-Str.");
        break;
    }
    case 244215:
    {
        returnValue = F("Otto-Frank-Str.");
        break;
    }
    case 244216:
    {
        returnValue = F("Otto-Franke-Str.");
        break;
    }
    case 244217:
    {
        returnValue = F("Otto-Franzius-Str.");
        break;
    }
    case 244218:
    {
        returnValue = F("Otto-Freundl-Str.");
        break;
    }
    case 244219:
    {
        returnValue = F("Otto-Fricke-Str.");
        break;
    }
    case 244220:
    {
        returnValue = F("Otto-Fries-Str.");
        break;
    }
    case 244221:
    {
        returnValue = F("Otto-Fritz-Str.");
        break;
    }
    case 244222:
    {
        returnValue = F("Otto-Fuchs-Str.");
        break;
    }
    case 244223:
    {
        returnValue = F("Otto-Fuhr-Str.");
        break;
    }
    case 244224:
    {
        returnValue = F("Otto-Fuhrhop-Weg");
        break;
    }
    case 244225:
    {
        returnValue = F("Otto-Förschner-Weg");
        break;
    }
    case 244226:
    {
        returnValue = F("Otto-Garber-Str.");
        break;
    }
    case 244227:
    {
        returnValue = F("Otto-Garber-Weg");
        break;
    }
    case 244228:
    {
        returnValue = F("Otto-Gartz-Str.");
        break;
    }
    case 244229:
    {
        returnValue = F("Otto-Gauß-Str.");
        break;
    }
    case 244230:
    {
        returnValue = F("Otto-Gaßner-Str.");
        break;
    }
    case 244231:
    {
        returnValue = F("Otto-Gebhardt-Str.");
        break;
    }
    case 244232:
    {
        returnValue = F("Otto-Gebühr-Platz");
        break;
    }
    case 244233:
    {
        returnValue = F("Otto-Gebühr-Weg");
        break;
    }
    case 244234:
    {
        returnValue = F("Otto-Gedlich-Str.");
        break;
    }
    case 244235:
    {
        returnValue = F("Otto-Geiselhart-Str.");
        break;
    }
    case 244236:
    {
        returnValue = F("Otto-Geiselhart-Weg");
        break;
    }
    case 244237:
    {
        returnValue = F("Otto-Geist-Str.");
        break;
    }
    case 244238:
    {
        returnValue = F("Otto-Geithner-Str.");
        break;
    }
    case 244239:
    {
        returnValue = F("Otto-Geräumt");
        break;
    }
    case 244240:
    {
        returnValue = F("Otto-Geyer-Str.");
        break;
    }
    case 244241:
    {
        returnValue = F("Otto-Geßler-Str.");
        break;
    }
    case 244242:
    {
        returnValue = F("Otto-Gittinger-Weg");
        break;
    }
    case 244243:
    {
        returnValue = F("Otto-Gladel-Weg");
        break;
    }
    case 244244:
    {
        returnValue = F("Otto-Gleue-Weg");
        break;
    }
    case 244245:
    {
        returnValue = F("Otto-Goetze-Str.");
        break;
    }
    case 244246:
    {
        returnValue = F("Otto-Gratzki-Str.");
        break;
    }
    case 244247:
    {
        returnValue = F("Otto-Grotewohl-Ring");
        break;
    }
    case 244248:
    {
        returnValue = F("Otto-Grotewohl-Str.");
        break;
    }
    case 244249:
    {
        returnValue = F("Otto-Grothewohl-Str.");
        break;
    }
    case 244250:
    {
        returnValue = F("Otto-Gruber-Str.");
        break;
    }
    case 244251:
    {
        returnValue = F("Otto-Gruoner-Weg");
        break;
    }
    case 244252:
    {
        returnValue = F("Otto-Grün-Str.");
        break;
    }
    case 244253:
    {
        returnValue = F("Otto-Gutmann-Str.");
        break;
    }
    case 244254:
    {
        returnValue = F("Otto-Gußmann-Str.");
        break;
    }
    case 244255:
    {
        returnValue = F("Otto-Gänsicke-Siedlung");
        break;
    }
    case 244256:
    {
        returnValue = F("Otto-Göhner-Str.");
        break;
    }
    case 244257:
    {
        returnValue = F("Otto-Göller-Str.");
        break;
    }
    case 244258:
    {
        returnValue = F("Otto-Gönnenwein-Str.");
        break;
    }
    case 244259:
    {
        returnValue = F("Otto-Güther-Str.");
        break;
    }
    case 244260:
    {
        returnValue = F("Otto-Haarmann-Str.");
        break;
    }
    case 244261:
    {
        returnValue = F("Otto-Haberlandt-Str.");
        break;
    }
    case 244262:
    {
        returnValue = F("Otto-Haese-Str.");
        break;
    }
    case 244263:
    {
        returnValue = F("Otto-Haesler-Str.");
        break;
    }
    case 244264:
    {
        returnValue = F("Otto-Hafner-Str.");
        break;
    }
    case 244265:
    {
        returnValue = F("Otto-Hagemann-Str.");
        break;
    }
    case 244266:
    {
        returnValue = F("Otto-Hahn-Allee");
        break;
    }
    case 244267:
    {
        returnValue = F("Otto-Hahn-Bogen");
        break;
    }
    case 244268:
    {
        returnValue = F("Otto-Hahn-Hügel");
        break;
    }
    case 244269:
    {
        returnValue = F("Otto-Hahn-Platz");
        break;
    }
    case 244270:
    {
        returnValue = F("Otto-Hahn-Ring");
        break;
    }
    case 244271:
    {
        returnValue = F("Otto-Hahn-Stieg");
        break;
    }
    case 244272:
    {
        returnValue = F("Otto-Hahn-Str.");
        break;
    }
    case 244273:
    {
        returnValue = F("Otto-Hahn-Weg");
        break;
    }
    case 244274:
    {
        returnValue = F("Otto-Halser-Str.");
        break;
    }
    case 244275:
    {
        returnValue = F("Otto-Haltenberger-Str.");
        break;
    }
    case 244276:
    {
        returnValue = F("Otto-Hartenstein-Str.");
        break;
    }
    case 244277:
    {
        returnValue = F("Otto-Haseloff-Str.");
        break;
    }
    case 244278:
    {
        returnValue = F("Otto-Haug-Str.");
        break;
    }
    case 244279:
    {
        returnValue = F("Otto-Hausmann-Ring");
        break;
    }
    case 244280:
    {
        returnValue = F("Otto-Heck-Str.");
        break;
    }
    case 244281:
    {
        returnValue = F("Otto-Heese-Str.");
        break;
    }
    case 244282:
    {
        returnValue = F("Otto-Hefner-Str.");
        break;
    }
    case 244283:
    {
        returnValue = F("Otto-Heichele-Str.");
        break;
    }
    case 244284:
    {
        returnValue = F("Otto-Heil-Weg");
        break;
    }
    case 244285:
    {
        returnValue = F("Otto-Heilmann-Str.");
        break;
    }
    case 244286:
    {
        returnValue = F("Otto-Hein-Str.");
        break;
    }
    case 244287:
    {
        returnValue = F("Otto-Heinig-Str.");
        break;
    }
    case 244288:
    {
        returnValue = F("Otto-Heinrich-Engel-Bogen");
        break;
    }
    case 244289:
    {
        returnValue = F("Otto-Heinrich-Kühner-Str.");
        break;
    }
    case 244290:
    {
        returnValue = F("Otto-Heinrich-Str.");
        break;
    }
    case 244291:
    {
        returnValue = F("Otto-Heinrich-Warburg-Str.");
        break;
    }
    case 244292:
    {
        returnValue = F("Otto-Heinrichs-Str.");
        break;
    }
    case 244293:
    {
        returnValue = F("Otto-Heins-Weg");
        break;
    }
    case 244294:
    {
        returnValue = F("Otto-Heintze-Str.");
        break;
    }
    case 244295:
    {
        returnValue = F("Otto-Heinzmann-Str.");
        break;
    }
    case 244296:
    {
        returnValue = F("Otto-Heise-Str.");
        break;
    }
    case 244297:
    {
        returnValue = F("Otto-Hellwig-Str.");
        break;
    }
    case 244298:
    {
        returnValue = F("Otto-Hemmer-Platz");
        break;
    }
    case 244299:
    {
        returnValue = F("Otto-Hensel-Str.");
        break;
    }
    case 244300:
    {
        returnValue = F("Otto-Hergt-Str.");
        break;
    }
    case 244301:
    {
        returnValue = F("Otto-Hersing-Str.");
        break;
    }
    case 244302:
    {
        returnValue = F("Otto-Hertel-Str.");
        break;
    }
    case 244303:
    {
        returnValue = F("Otto-Hesse-Str.");
        break;
    }
    case 244304:
    {
        returnValue = F("Otto-Hesse-Weg");
        break;
    }
    case 244305:
    {
        returnValue = F("Otto-Heuer-Str.");
        break;
    }
    case 244306:
    {
        returnValue = F("Otto-Heß-Str.");
        break;
    }
    case 244307:
    {
        returnValue = F("Otto-Hiendl-Str.");
        break;
    }
    case 244308:
    {
        returnValue = F("Otto-Himmel-Weg");
        break;
    }
    case 244309:
    {
        returnValue = F("Otto-Hinsberg-Str.");
        break;
    }
    case 244310:
    {
        returnValue = F("Otto-Hinze-Weg");
        break;
    }
    case 244311:
    {
        returnValue = F("Otto-Hirsch-Str.");
        break;
    }
    case 244312:
    {
        returnValue = F("Otto-Hirth-Str.");
        break;
    }
    case 244313:
    {
        returnValue = F("Otto-Hofmann-Str.");
        break;
    }
    case 244314:
    {
        returnValue = F("Otto-Holst-Str.");
        break;
    }
    case 244315:
    {
        returnValue = F("Otto-Holzapfel-Str.");
        break;
    }
    case 244316:
    {
        returnValue = F("Otto-Hue-Str.");
        break;
    }
    case 244317:
    {
        returnValue = F("Otto-Hue-Weg");
        break;
    }
    case 244318:
    {
        returnValue = F("Otto-Hupp-Str.");
        break;
    }
    case 244319:
    {
        returnValue = F("Otto-Hurraß-Str.");
        break;
    }
    case 244320:
    {
        returnValue = F("Otto-Husemann-Str.");
        break;
    }
    case 244321:
    {
        returnValue = F("Otto-Häcker-Str.");
        break;
    }
    case 244322:
    {
        returnValue = F("Otto-Härdle-Weg");
        break;
    }
    case 244323:
    {
        returnValue = F("Otto-Häussler-Str.");
        break;
    }
    case 244324:
    {
        returnValue = F("Otto-Höflich-Weg");
        break;
    }
    case 244325:
    {
        returnValue = F("Otto-Höfliger-Str.");
        break;
    }
    case 244326:
    {
        returnValue = F("Otto-Hübner-Ring");
        break;
    }
    case 244327:
    {
        returnValue = F("Otto-Hühn-Str.");
        break;
    }
    case 244328:
    {
        returnValue = F("Otto-Intze-Str.");
        break;
    }
    case 244329:
    {
        returnValue = F("Otto-Jaeger-Str.");
        break;
    }
    case 244330:
    {
        returnValue = F("Otto-Jahn-Weg");
        break;
    }
    case 244331:
    {
        returnValue = F("Otto-Jarchov-Weg");
        break;
    }
    case 244332:
    {
        returnValue = F("Otto-Jaritz-Str.");
        break;
    }
    case 244333:
    {
        returnValue = F("Otto-Jens-Weg");
        break;
    }
    case 244334:
    {
        returnValue = F("Otto-Jenzok-Str.");
        break;
    }
    case 244335:
    {
        returnValue = F("Otto-Jessing-Str.");
        break;
    }
    case 244336:
    {
        returnValue = F("Otto-Jochum-Str.");
        break;
    }
    case 244337:
    {
        returnValue = F("Otto-Johannsen-Str.");
        break;
    }
    case 244338:
    {
        returnValue = F("Otto-John-Str.");
        break;
    }
    case 244339:
    {
        returnValue = F("Otto-Johnsen-Str.");
        break;
    }
    case 244340:
    {
        returnValue = F("Otto-Jordan-Weg");
        break;
    }
    case 244341:
    {
        returnValue = F("Otto-Joschko-Str.");
        break;
    }
    case 244342:
    {
        returnValue = F("Otto-Jung-Weg");
        break;
    }
    case 244343:
    {
        returnValue = F("Otto-Junker-Str.");
        break;
    }
    case 244344:
    {
        returnValue = F("Otto-Jäger-Str.");
        break;
    }
    case 244345:
    {
        returnValue = F("Otto-Kahrens-Str.");
        break;
    }
    case 244346:
    {
        returnValue = F("Otto-Kaiser-Weg");
        break;
    }
    case 244347:
    {
        returnValue = F("Otto-Kalbskopf-Str.");
        break;
    }
    case 244348:
    {
        returnValue = F("Otto-Kaltenbach-Str.");
        break;
    }
    case 244349:
    {
        returnValue = F("Otto-Kanning-Str.");
        break;
    }
    case 244350:
    {
        returnValue = F("Otto-Kanzler-Weg");
        break;
    }
    case 244351:
    {
        returnValue = F("Otto-Karch-Str.");
        break;
    }
    case 244352:
    {
        returnValue = F("Otto-Karrer-Str.");
        break;
    }
    case 244353:
    {
        returnValue = F("Otto-Kaysel-Str.");
        break;
    }
    case 244354:
    {
        returnValue = F("Otto-Keck-Str.");
        break;
    }
    case 244355:
    {
        returnValue = F("Otto-Keidel-Str.");
        break;
    }
    case 244356:
    {
        returnValue = F("Otto-Keil-Str.");
        break;
    }
    case 244357:
    {
        returnValue = F("Otto-Keiner-Str.");
        break;
    }
    case 244358:
    {
        returnValue = F("Otto-Keller-Str.");
        break;
    }
    case 244359:
    {
        returnValue = F("Otto-Kemper-Ring");
        break;
    }
    case 244360:
    {
        returnValue = F("Otto-Kiep-Str.");
        break;
    }
    case 244361:
    {
        returnValue = F("Otto-Kießling-Str.");
        break;
    }
    case 244362:
    {
        returnValue = F("Otto-Kilian-Str.");
        break;
    }
    case 244363:
    {
        returnValue = F("Otto-Kind-Str.");
        break;
    }
    case 244364:
    {
        returnValue = F("Otto-Kirchheimer-Str.");
        break;
    }
    case 244365:
    {
        returnValue = F("Otto-Kirchhof-Str.");
        break;
    }
    case 244366:
    {
        returnValue = F("Otto-Kirschmer-Weg");
        break;
    }
    case 244367:
    {
        returnValue = F("Otto-Klug-Weg");
        break;
    }
    case 244368:
    {
        returnValue = F("Otto-Knecht-Str.");
        break;
    }
    case 244369:
    {
        returnValue = F("Otto-Knöpfer-Str.");
        break;
    }
    case 244370:
    {
        returnValue = F("Otto-Kobel-Str.");
        break;
    }
    case 244371:
    {
        returnValue = F("Otto-Koch-Str.");
        break;
    }
    case 244372:
    {
        returnValue = F("Otto-Kocher-Str.");
        break;
    }
    case 244373:
    {
        returnValue = F("Otto-Kohlhofer-Weg");
        break;
    }
    case 244374:
    {
        returnValue = F("Otto-Kohlsaat-Weg");
        break;
    }
    case 244375:
    {
        returnValue = F("Otto-Koke-Weg");
        break;
    }
    case 244376:
    {
        returnValue = F("Otto-Kolb-Str.");
        break;
    }
    case 244377:
    {
        returnValue = F("Otto-Kollmar-Str.");
        break;
    }
    case 244378:
    {
        returnValue = F("Otto-Konz-Brücke");
        break;
    }
    case 244379:
    {
        returnValue = F("Otto-Konz-Str.");
        break;
    }
    case 244380:
    {
        returnValue = F("Otto-Korn-Str.");
        break;
    }
    case 244381:
    {
        returnValue = F("Otto-Kornweg");
        break;
    }
    case 244382:
    {
        returnValue = F("Otto-Kraffke-Str.");
        break;
    }
    case 244383:
    {
        returnValue = F("Otto-Kraft-Str.");
        break;
    }
    case 244384:
    {
        returnValue = F("Otto-Krahmann-Str.");
        break;
    }
    case 244385:
    {
        returnValue = F("Otto-Krasa-Weg");
        break;
    }
    case 244386:
    {
        returnValue = F("Otto-Krauss-Weg");
        break;
    }
    case 244387:
    {
        returnValue = F("Otto-Krawehl-Str.");
        break;
    }
    case 244388:
    {
        returnValue = F("Otto-Krebs-Weg");
        break;
    }
    case 244389:
    {
        returnValue = F("Otto-Kreibaum-Str.");
        break;
    }
    case 244390:
    {
        returnValue = F("Otto-Kreitz-Str.");
        break;
    }
    case 244391:
    {
        returnValue = F("Otto-Krenz-Str.");
        break;
    }
    case 244392:
    {
        returnValue = F("Otto-Kreutzmann-Str.");
        break;
    }
    case 244393:
    {
        returnValue = F("Otto-Krien-Platz");
        break;
    }
    case 244394:
    {
        returnValue = F("Otto-Krien-Str.");
        break;
    }
    case 244395:
    {
        returnValue = F("Otto-Kroll-Weg");
        break;
    }
    case 244396:
    {
        returnValue = F("Otto-Kubel-Str.");
        break;
    }
    case 244397:
    {
        returnValue = F("Otto-Kunzler-Str.");
        break;
    }
    case 244398:
    {
        returnValue = F("Otto-Kuwilsky-Str.");
        break;
    }
    case 244399:
    {
        returnValue = F("Otto-Kähni-Weg");
        break;
    }
    case 244400:
    {
        returnValue = F("Otto-Kämper-Ring");
        break;
    }
    case 244401:
    {
        returnValue = F("Otto-Kögl-Str.");
        break;
    }
    case 244402:
    {
        returnValue = F("Otto-König-Platz");
        break;
    }
    case 244403:
    {
        returnValue = F("Otto-Kühne-Platz");
        break;
    }
    case 244404:
    {
        returnValue = F("Otto-Künne-Promenade");
        break;
    }
    case 244405:
    {
        returnValue = F("Otto-Lages-Str.");
        break;
    }
    case 244406:
    {
        returnValue = F("Otto-Laible-Str.");
        break;
    }
    case 244407:
    {
        returnValue = F("Otto-Lampart-Str.");
        break;
    }
    case 244408:
    {
        returnValue = F("Otto-Landmann-Weg");
        break;
    }
    case 244409:
    {
        returnValue = F("Otto-Langbehn-Str.");
        break;
    }
    case 244410:
    {
        returnValue = F("Otto-Langenbach-Ring");
        break;
    }
    case 244411:
    {
        returnValue = F("Otto-Laue-Str.");
        break;
    }
    case 244412:
    {
        returnValue = F("Otto-Lauffer-Str.");
        break;
    }
    case 244413:
    {
        returnValue = F("Otto-Lederer-Weg");
        break;
    }
    case 244414:
    {
        returnValue = F("Otto-Leege-Str.");
        break;
    }
    case 244415:
    {
        returnValue = F("Otto-Lehmann-Str.");
        break;
    }
    case 244416:
    {
        returnValue = F("Otto-Leimer-Str.");
        break;
    }
    case 244417:
    {
        returnValue = F("Otto-Leininger-Str.");
        break;
    }
    case 244418:
    {
        returnValue = F("Otto-Lemcke-Str.");
        break;
    }
    case 244419:
    {
        returnValue = F("Otto-Lenk-Str.");
        break;
    }
    case 244420:
    {
        returnValue = F("Otto-Lenz-Str.");
        break;
    }
    case 244421:
    {
        returnValue = F("Otto-Leonhard-Str.");
        break;
    }
    case 244422:
    {
        returnValue = F("Otto-Leutkircher-Str.");
        break;
    }
    case 244423:
    {
        returnValue = F("Otto-Leuß-Weg");
        break;
    }
    case 244424:
    {
        returnValue = F("Otto-Leybold-Ring");
        break;
    }
    case 244425:
    {
        returnValue = F("Otto-Leybold-Str.");
        break;
    }
    case 244426:
    {
        returnValue = F("Otto-Liebing-Weg");
        break;
    }
    case 244427:
    {
        returnValue = F("Otto-Liebmann-Ring");
        break;
    }
    case 244428:
    {
        returnValue = F("Otto-Liebmann-Str.");
        break;
    }
    case 244429:
    {
        returnValue = F("Otto-Lilienthal-Allee");
        break;
    }
    case 244430:
    {
        returnValue = F("Otto-Lilienthal-Kaserne");
        break;
    }
    case 244431:
    {
        returnValue = F("Otto-Lilienthal-Str.");
        break;
    }
    case 244432:
    {
        returnValue = F("Otto-Lilienthal-Weg");
        break;
    }
    case 244433:
    {
        returnValue = F("Otto-Linck-Str.");
        break;
    }
    case 244434:
    {
        returnValue = F("Otto-Lindemann-Str.");
        break;
    }
    case 244435:
    {
        returnValue = F("Otto-Lindenmeyer-Str.");
        break;
    }
    case 244436:
    {
        returnValue = F("Otto-Lindig-Weg");
        break;
    }
    case 244437:
    {
        returnValue = F("Otto-Linne-Str.");
        break;
    }
    case 244438:
    {
        returnValue = F("Otto-Lohmann-Weg");
        break;
    }
    case 244439:
    {
        returnValue = F("Otto-Ludwig-Garten");
        break;
    }
    case 244440:
    {
        returnValue = F("Otto-Ludwig-Str.");
        break;
    }
    case 244441:
    {
        returnValue = F("Otto-Ludwig-Weg");
        break;
    }
    case 244442:
    {
        returnValue = F("Otto-Lummer-Str.");
        break;
    }
    case 244443:
    {
        returnValue = F("Otto-Lunz-Str.");
        break;
    }
    case 244444:
    {
        returnValue = F("Otto-Löffler-Weg");
        break;
    }
    case 244445:
    {
        returnValue = F("Otto-Löw-Str.");
        break;
    }
    case 244446:
    {
        returnValue = F("Otto-Löwe-Str.");
        break;
    }
    case 244447:
    {
        returnValue = F("Otto-Maier-Weg");
        break;
    }
    case 244448:
    {
        returnValue = F("Otto-Mair-Ring");
        break;
    }
    case 244449:
    {
        returnValue = F("Otto-Mangold-Str.");
        break;
    }
    case 244450:
    {
        returnValue = F("Otto-Marquard-Str.");
        break;
    }
    case 244451:
    {
        returnValue = F("Otto-Martin-Str.");
        break;
    }
    case 244452:
    {
        returnValue = F("Otto-Marx-Platz");
        break;
    }
    case 244453:
    {
        returnValue = F("Otto-Marx-Str.");
        break;
    }
    case 244454:
    {
        returnValue = F("Otto-Mauel-Platz");
        break;
    }
    case 244455:
    {
        returnValue = F("Otto-Maurer-Str.");
        break;
    }
    case 244456:
    {
        returnValue = F("Otto-Mayer Weg");
        break;
    }
    case 244457:
    {
        returnValue = F("Otto-Mayer-Str.");
        break;
    }
    case 244458:
    {
        returnValue = F("Otto-Meckler-Str.");
        break;
    }
    case 244459:
    {
        returnValue = F("Otto-Meentz-Str.");
        break;
    }
    case 244460:
    {
        returnValue = F("Otto-Meffert-Str.");
        break;
    }
    case 244461:
    {
        returnValue = F("Otto-Meier-Str.");
        break;
    }
    case 244462:
    {
        returnValue = F("Otto-Meier-Weg");
        break;
    }
    case 244463:
    {
        returnValue = F("Otto-Meister-Str.");
        break;
    }
    case 244464:
    {
        returnValue = F("Otto-Meißner-Weg");
        break;
    }
    case 244465:
    {
        returnValue = F("Otto-Menth-Str.");
        break;
    }
    case 244466:
    {
        returnValue = F("Otto-Merkt-Str.");
        break;
    }
    case 244467:
    {
        returnValue = F("Otto-Merz-Str.");
        break;
    }
    case 244468:
    {
        returnValue = F("Otto-Merz-Weg");
        break;
    }
    case 244469:
    {
        returnValue = F("Otto-Metzenthin-Str.");
        break;
    }
    case 244470:
    {
        returnValue = F("Otto-Militzer-Str.");
        break;
    }
    case 244471:
    {
        returnValue = F("Otto-Modersohn-Str.");
        break;
    }
    case 244472:
    {
        returnValue = F("Otto-Modersohn-Weg");
        break;
    }
    case 244473:
    {
        returnValue = F("Otto-Mojen-Weg");
        break;
    }
    case 244474:
    {
        returnValue = F("Otto-Molz-Str.");
        break;
    }
    case 244475:
    {
        returnValue = F("Otto-Moritz-Weg");
        break;
    }
    case 244476:
    {
        returnValue = F("Otto-Muck-Str.");
        break;
    }
    case 244477:
    {
        returnValue = F("Otto-Mucke-Str.");
        break;
    }
    case 244478:
    {
        returnValue = F("Otto-Mueller-Str.");
        break;
    }
    case 244479:
    {
        returnValue = F("Otto-Murr-Str.");
        break;
    }
    case 244480:
    {
        returnValue = F("Otto-Möbius-Str.");
        break;
    }
    case 244481:
    {
        returnValue = F("Otto-Mörike-Str.");
        break;
    }
    case 244482:
    {
        returnValue = F("Otto-Mörike-Weg");
        break;
    }
    case 244483:
    {
        returnValue = F("Otto-Müller-Str.");
        break;
    }
    case 244484:
    {
        returnValue = F("Otto-Nagel-Allee");
        break;
    }
    case 244485:
    {
        returnValue = F("Otto-Nagel-Str.");
        break;
    }
    case 244486:
    {
        returnValue = F("Otto-Nagler-Str.");
        break;
    }
    case 244487:
    {
        returnValue = F("Otto-Neidhart-Platz");
        break;
    }
    case 244488:
    {
        returnValue = F("Otto-Neumeister-Str.");
        break;
    }
    case 244489:
    {
        returnValue = F("Otto-Nicolai-Str.");
        break;
    }
    case 244490:
    {
        returnValue = F("Otto-Nielk-Str.");
        break;
    }
    case 244491:
    {
        returnValue = F("Otto-Niemann-Weg");
        break;
    }
    case 244492:
    {
        returnValue = F("Otto-Nietsch-Weg");
        break;
    }
    case 244493:
    {
        returnValue = F("Otto-Nord-Str.");
        break;
    }
    case 244494:
    {
        returnValue = F("Otto-Nuschke Str.");
        break;
    }
    case 244495:
    {
        returnValue = F("Otto-Nuschke-Siedlung");
        break;
    }
    case 244496:
    {
        returnValue = F("Otto-Nuschke-Str.");
        break;
    }
    case 244497:
    {
        returnValue = F("Otto-Oellerich-Str.");
        break;
    }
    case 244498:
    {
        returnValue = F("Otto-Oettel-Str.");
        break;
    }
    case 244499:
    {
        returnValue = F("Otto-Osterwald-Str.");
        break;
    }
    case 244500:
    {
        returnValue = F("Otto-Ottsen-Str.");
        break;
    }
    case 244501:
    {
        returnValue = F("Otto-Paes-Str.");
        break;
    }
    case 244502:
    {
        returnValue = F("Otto-Palm-Str.");
        break;
    }
    case 244503:
    {
        returnValue = F("Otto-Pankok-Str.");
        break;
    }
    case 244504:
    {
        returnValue = F("Otto-Pankok-Weg");
        break;
    }
    case 244505:
    {
        returnValue = F("Otto-Passarge-Str.");
        break;
    }
    case 244506:
    {
        returnValue = F("Otto-Perutz-Str.");
        break;
    }
    case 244507:
    {
        returnValue = F("Otto-Peschau-Str.");
        break;
    }
    case 244508:
    {
        returnValue = F("Otto-Peschel-Str.");
        break;
    }
    case 244509:
    {
        returnValue = F("Otto-Peuschel-Str.");
        break;
    }
    case 244510:
    {
        returnValue = F("Otto-Pfeifer-Str.");
        break;
    }
    case 244511:
    {
        returnValue = F("Otto-Pfeiffer-Weg");
        break;
    }
    case 244512:
    {
        returnValue = F("Otto-Pippel-Str.");
        break;
    }
    case 244513:
    {
        returnValue = F("Otto-Plagge-Weg");
        break;
    }
    case 244514:
    {
        returnValue = F("Otto-Planer-Str.");
        break;
    }
    case 244515:
    {
        returnValue = F("Otto-Pleißner Str.");
        break;
    }
    case 244516:
    {
        returnValue = F("Otto-Pogge-Weg");
        break;
    }
    case 244517:
    {
        returnValue = F("Otto-Ponath-Weg");
        break;
    }
    case 244518:
    {
        returnValue = F("Otto-Porath-Platz");
        break;
    }
    case 244519:
    {
        returnValue = F("Otto-Prager-Weg");
        break;
    }
    case 244520:
    {
        returnValue = F("Otto-Prein-Str.");
        break;
    }
    case 244521:
    {
        returnValue = F("Otto-Preuße-Weg");
        break;
    }
    case 244522:
    {
        returnValue = F("Otto-Punk-Str.");
        break;
    }
    case 244523:
    {
        returnValue = F("Otto-Pöhling-Str.");
        break;
    }
    case 244524:
    {
        returnValue = F("Otto-Quandt-Str.");
        break;
    }
    case 244525:
    {
        returnValue = F("Otto-Raggenbass-Str.");
        break;
    }
    case 244526:
    {
        returnValue = F("Otto-Ralfs-Str.");
        break;
    }
    case 244527:
    {
        returnValue = F("Otto-Rambach-Weg");
        break;
    }
    case 244528:
    {
        returnValue = F("Otto-Raupp-Str.");
        break;
    }
    case 244529:
    {
        returnValue = F("Otto-Rehder-Str.");
        break;
    }
    case 244530:
    {
        returnValue = F("Otto-Reimann-Str.");
        break;
    }
    case 244531:
    {
        returnValue = F("Otto-Reinbold-Str.");
        break;
    }
    case 244532:
    {
        returnValue = F("Otto-Reiniger-Weg");
        break;
    }
    case 244533:
    {
        returnValue = F("Otto-Reinwald-Str.");
        break;
    }
    case 244534:
    {
        returnValue = F("Otto-Reith-Weg");
        break;
    }
    case 244535:
    {
        returnValue = F("Otto-Reitz-Weg");
        break;
    }
    case 244536:
    {
        returnValue = F("Otto-Renner-Str.");
        break;
    }
    case 244537:
    {
        returnValue = F("Otto-Rentzing-Str.");
        break;
    }
    case 244538:
    {
        returnValue = F("Otto-Resch-Ring");
        break;
    }
    case 244539:
    {
        returnValue = F("Otto-Rettenmaier-Str.");
        break;
    }
    case 244540:
    {
        returnValue = F("Otto-Reubold-Str.");
        break;
    }
    case 244541:
    {
        returnValue = F("Otto-Reutter-Platz");
        break;
    }
    case 244542:
    {
        returnValue = F("Otto-Reutter-Str.");
        break;
    }
    case 244543:
    {
        returnValue = F("Otto-Reutter-Weg");
        break;
    }
    case 244544:
    {
        returnValue = F("Otto-Richtberg-Str.");
        break;
    }
    case 244545:
    {
        returnValue = F("Otto-Richter-Str.");
        break;
    }
    case 244546:
    {
        returnValue = F("Otto-Riecker-Str.");
        break;
    }
    case 244547:
    {
        returnValue = F("Otto-Riedel-Str.");
        break;
    }
    case 244548:
    {
        returnValue = F("Otto-Riedl-Weg");
        break;
    }
    case 244549:
    {
        returnValue = F("Otto-Rieger-Platz");
        break;
    }
    case 244550:
    {
        returnValue = F("Otto-Rieger-Str.");
        break;
    }
    case 244551:
    {
        returnValue = F("Otto-Rienecker-Str.");
        break;
    }
    case 244552:
    {
        returnValue = F("Otto-Rindfleisch-Weg");
        break;
    }
    case 244553:
    {
        returnValue = F("Otto-Ritter-Str.");
        break;
    }
    case 244554:
    {
        returnValue = F("Otto-Rodehorst-Str.");
        break;
    }
    case 244555:
    {
        returnValue = F("Otto-Roelen-Str.");
        break;
    }
    case 244556:
    {
        returnValue = F("Otto-Rost-Str.");
        break;
    }
    case 244557:
    {
        returnValue = F("Otto-Roth-Str.");
        break;
    }
    case 244558:
    {
        returnValue = F("Otto-Rothe-Str.");
        break;
    }
    case 244559:
    {
        returnValue = F("Otto-Rudolph-Str.");
        break;
    }
    case 244560:
    {
        returnValue = F("Otto-Ruhe-Str.");
        break;
    }
    case 244561:
    {
        returnValue = F("Otto-Rump-Str.");
        break;
    }
    case 244562:
    {
        returnValue = F("Otto-Röhm-Str.");
        break;
    }
    case 244563:
    {
        returnValue = F("Otto-Römer-Str.");
        break;
    }
    case 244564:
    {
        returnValue = F("Otto-Rüdel-Str.");
        break;
    }
    case 244565:
    {
        returnValue = F("Otto-Rüdiger-Str.");
        break;
    }
    case 244566:
    {
        returnValue = F("Otto-Sachs-Str.");
        break;
    }
    case 244567:
    {
        returnValue = F("Otto-Saffran-Str.");
        break;
    }
    case 244568:
    {
        returnValue = F("Otto-Sander-Str.");
        break;
    }
    case 244569:
    {
        returnValue = F("Otto-Sattler-Str.");
        break;
    }
    case 244570:
    {
        returnValue = F("Otto-Sauer-Str.");
        break;
    }
    case 244571:
    {
        returnValue = F("Otto-Sauler-Str.");
        break;
    }
    case 244572:
    {
        returnValue = F("Otto-Schalk-Str.");
        break;
    }
    case 244573:
    {
        returnValue = F("Otto-Schauer-Str.");
        break;
    }
    case 244574:
    {
        returnValue = F("Otto-Scheugenpflug-Str.");
        break;
    }
    case 244575:
    {
        returnValue = F("Otto-Schicker-Str.");
        break;
    }
    case 244576:
    {
        returnValue = F("Otto-Schimmel-Str.");
        break;
    }
    case 244577:
    {
        returnValue = F("Otto-Schlag Str.");
        break;
    }
    case 244578:
    {
        returnValue = F("Otto-Schlag-Str.");
        break;
    }
    case 244579:
    {
        returnValue = F("Otto-Schlecht-Str.");
        break;
    }
    case 244580:
    {
        returnValue = F("Otto-Schließler-Str.");
        break;
    }
    case 244581:
    {
        returnValue = F("Otto-Schlütken-Str.");
        break;
    }
    case 244582:
    {
        returnValue = F("Otto-Schmeil-Weg");
        break;
    }
    case 244583:
    {
        returnValue = F("Otto-Schmerbach-Str.");
        break;
    }
    case 244584:
    {
        returnValue = F("Otto-Schmid-Str.");
        break;
    }
    case 244585:
    {
        returnValue = F("Otto-Schmidmayer-Str.");
        break;
    }
    case 244586:
    {
        returnValue = F("Otto-Schmidt-Pfad");
        break;
    }
    case 244587:
    {
        returnValue = F("Otto-Schmidt-Ring");
        break;
    }
    case 244588:
    {
        returnValue = F("Otto-Schmidt-Str.");
        break;
    }
    case 244589:
    {
        returnValue = F("Otto-Schmitt-Groß-Str.");
        break;
    }
    case 244590:
    {
        returnValue = F("Otto-Schmitz-Str.");
        break;
    }
    case 244591:
    {
        returnValue = F("Otto-Schneider-Str.");
        break;
    }
    case 244592:
    {
        returnValue = F("Otto-Schnorr-Weg");
        break;
    }
    case 244593:
    {
        returnValue = F("Otto-Schott-Str.");
        break;
    }
    case 244594:
    {
        returnValue = F("Otto-Schröder-Str.");
        break;
    }
    case 244595:
    {
        returnValue = F("Otto-Schulenberg-Str.");
        break;
    }
    case 244596:
    {
        returnValue = F("Otto-Schulte-Str.");
        break;
    }
    case 244597:
    {
        returnValue = F("Otto-Schumann-Str.");
        break;
    }
    case 244598:
    {
        returnValue = F("Otto-Schuster-Str.");
        break;
    }
    case 244599:
    {
        returnValue = F("Otto-Schwartz-Weg");
        break;
    }
    case 244600:
    {
        returnValue = F("Otto-Schwarz-Weg");
        break;
    }
    case 244601:
    {
        returnValue = F("Otto-Schweiger-Str.");
        break;
    }
    case 244602:
    {
        returnValue = F("Otto-Schäffler-Str.");
        break;
    }
    case 244603:
    {
        returnValue = F("Otto-Schön-Str.");
        break;
    }
    case 244604:
    {
        returnValue = F("Otto-Schönermark-Str.");
        break;
    }
    case 244605:
    {
        returnValue = F("Otto-Schönhagen-Str.");
        break;
    }
    case 244606:
    {
        returnValue = F("Otto-Schöpfer-Str.");
        break;
    }
    case 244607:
    {
        returnValue = F("Otto-Schüngel-Str.");
        break;
    }
    case 244608:
    {
        returnValue = F("Otto-Schürzinger-Weg");
        break;
    }
    case 244609:
    {
        returnValue = F("Otto-Seeling-Promenade");
        break;
    }
    case 244610:
    {
        returnValue = F("Otto-Seeling-Str.");
        break;
    }
    case 244611:
    {
        returnValue = F("Otto-Seiter-Str.");
        break;
    }
    case 244612:
    {
        returnValue = F("Otto-Selz-Str.");
        break;
    }
    case 244613:
    {
        returnValue = F("Otto-Selzer-Str.");
        break;
    }
    case 244614:
    {
        returnValue = F("Otto-Seng-Str.");
        break;
    }
    case 244615:
    {
        returnValue = F("Otto-Sidow-Platz");
        break;
    }
    case 244616:
    {
        returnValue = F("Otto-Sidow-Str.");
        break;
    }
    case 244617:
    {
        returnValue = F("Otto-Siege-Str.");
        break;
    }
    case 244618:
    {
        returnValue = F("Otto-Siffling-Str.");
        break;
    }
    case 244619:
    {
        returnValue = F("Otto-Simm-Str.");
        break;
    }
    case 244620:
    {
        returnValue = F("Otto-Snell-Str.");
        break;
    }
    case 244621:
    {
        returnValue = F("Otto-Sorg-Weg");
        break;
    }
    case 244622:
    {
        returnValue = F("Otto-Spanier-Str.");
        break;
    }
    case 244623:
    {
        returnValue = F("Otto-Spanner-Str.");
        break;
    }
    case 244624:
    {
        returnValue = F("Otto-Spelsberg-Str.");
        break;
    }
    case 244625:
    {
        returnValue = F("Otto-Speßhardt-Str.");
        break;
    }
    case 244626:
    {
        returnValue = F("Otto-Stabel-Str.");
        break;
    }
    case 244627:
    {
        returnValue = F("Otto-Stadler-Str.");
        break;
    }
    case 244628:
    {
        returnValue = F("Otto-Stahl-Str.");
        break;
    }
    case 244629:
    {
        returnValue = F("Otto-Stang-Str.");
        break;
    }
    case 244630:
    {
        returnValue = F("Otto-Stange-Str.");
        break;
    }
    case 244631:
    {
        returnValue = F("Otto-Staudinger-Str.");
        break;
    }
    case 244632:
    {
        returnValue = F("Otto-Stegerer-Weg");
        break;
    }
    case 244633:
    {
        returnValue = F("Otto-Stegmüller-Weg");
        break;
    }
    case 244634:
    {
        returnValue = F("Otto-Steiff-Weg");
        break;
    }
    case 244635:
    {
        returnValue = F("Otto-Stein-Str.");
        break;
    }
    case 244636:
    {
        returnValue = F("Otto-Steinwachs-Weg");
        break;
    }
    case 244637:
    {
        returnValue = F("Otto-Stemmler-Str.");
        break;
    }
    case 244638:
    {
        returnValue = F("Otto-Stern-Str.");
        break;
    }
    case 244639:
    {
        returnValue = F("Otto-Stich-Str.");
        break;
    }
    case 244640:
    {
        returnValue = F("Otto-Stichart-Str.");
        break;
    }
    case 244641:
    {
        returnValue = F("Otto-Stoelcker-Str.");
        break;
    }
    case 244642:
    {
        returnValue = F("Otto-Stolpp-Str.");
        break;
    }
    case 244643:
    {
        returnValue = F("Otto-Str.");
        break;
    }
    case 244644:
    {
        returnValue = F("Otto-Strobl-Weg");
        break;
    }
    case 244645:
    {
        returnValue = F("Otto-Struck-Str.");
        break;
    }
    case 244646:
    {
        returnValue = F("Otto-Ströbel-Weg");
        break;
    }
    case 244647:
    {
        returnValue = F("Otto-Strützel-Str.");
        break;
    }
    case 244648:
    {
        returnValue = F("Otto-Stumpf-Weg");
        break;
    }
    case 244649:
    {
        returnValue = F("Otto-Sturmfels-Str.");
        break;
    }
    case 244650:
    {
        returnValue = F("Otto-Suhr-Ring");
        break;
    }
    case 244651:
    {
        returnValue = F("Otto-Suhr-Str.");
        break;
    }
    case 244652:
    {
        returnValue = F("Otto-Thalmann-Str.");
        break;
    }
    case 244653:
    {
        returnValue = F("Otto-Thiele-Str.");
        break;
    }
    case 244654:
    {
        returnValue = F("Otto-Thielemann-Str.");
        break;
    }
    case 244655:
    {
        returnValue = F("Otto-Thörner-Str.");
        break;
    }
    case 244656:
    {
        returnValue = F("Otto-Timme-Str.");
        break;
    }
    case 244657:
    {
        returnValue = F("Otto-Toussaint-Str.");
        break;
    }
    case 244658:
    {
        returnValue = F("Otto-Toussaint-Str. L119");
        break;
    }
    case 244659:
    {
        returnValue = F("Otto-Tröbs-Str.");
        break;
    }
    case 244660:
    {
        returnValue = F("Otto-Türpe-Str.");
        break;
    }
    case 244661:
    {
        returnValue = F("Otto-Ubbelohde-Weg");
        break;
    }
    case 244662:
    {
        returnValue = F("Otto-Uhlig-Str.");
        break;
    }
    case 244663:
    {
        returnValue = F("Otto-Ulinski-Str.");
        break;
    }
    case 244664:
    {
        returnValue = F("Otto-Varnhagen-Str.");
        break;
    }
    case 244665:
    {
        returnValue = F("Otto-Vatter-Str.");
        break;
    }
    case 244666:
    {
        returnValue = F("Otto-Voge-Str.");
        break;
    }
    case 244667:
    {
        returnValue = F("Otto-Von-Born-Str.");
        break;
    }
    case 244668:
    {
        returnValue = F("Otto-Vorberg-Str.");
        break;
    }
    case 244669:
    {
        returnValue = F("Otto-Voss-Str.");
        break;
    }
    case 244670:
    {
        returnValue = F("Otto-Voß-Str.");
        break;
    }
    case 244671:
    {
        returnValue = F("Otto-Wagner-Str.");
        break;
    }
    case 244672:
    {
        returnValue = F("Otto-Wallach-Weg");
        break;
    }
    case 244673:
    {
        returnValue = F("Otto-Walle-Str.");
        break;
    }
    case 244674:
    {
        returnValue = F("Otto-Walter-Best-Weg");
        break;
    }
    case 244675:
    {
        returnValue = F("Otto-Walther-Str.");
        break;
    }
    case 244676:
    {
        returnValue = F("Otto-Wanner-Str.");
        break;
    }
    case 244677:
    {
        returnValue = F("Otto-Weddigen-Str.");
        break;
    }
    case 244678:
    {
        returnValue = F("Otto-Wehner-Str.");
        break;
    }
    case 244679:
    {
        returnValue = F("Otto-Wehrle-Str.");
        break;
    }
    case 244680:
    {
        returnValue = F("Otto-Weik-Str.");
        break;
    }
    case 244681:
    {
        returnValue = F("Otto-Weil-Str.");
        break;
    }
    case 244682:
    {
        returnValue = F("Otto-Weinstein-Weg");
        break;
    }
    case 244683:
    {
        returnValue = F("Otto-Weiß-Str.");
        break;
    }
    case 244684:
    {
        returnValue = F("Otto-Wels-Platz");
        break;
    }
    case 244685:
    {
        returnValue = F("Otto-Wels-Str.");
        break;
    }
    case 244686:
    {
        returnValue = F("Otto-Wels-Weg");
        break;
    }
    case 244687:
    {
        returnValue = F("Otto-Weltzien-Str.");
        break;
    }
    case 244688:
    {
        returnValue = F("Otto-Wicht-Str.");
        break;
    }
    case 244689:
    {
        returnValue = F("Otto-Wickenhöfer-Str.");
        break;
    }
    case 244690:
    {
        returnValue = F("Otto-Wiegand-Str.");
        break;
    }
    case 244691:
    {
        returnValue = F("Otto-Wiegele-Weg");
        break;
    }
    case 244692:
    {
        returnValue = F("Otto-Wiegers-Weg");
        break;
    }
    case 244693:
    {
        returnValue = F("Otto-Wiesner-Str.");
        break;
    }
    case 244694:
    {
        returnValue = F("Otto-Wiesner-Weg");
        break;
    }
    case 244695:
    {
        returnValue = F("Otto-Willach-Str.");
        break;
    }
    case 244696:
    {
        returnValue = F("Otto-Winzer-Str.");
        break;
    }
    case 244697:
    {
        returnValue = F("Otto-Wirsching-Str.");
        break;
    }
    case 244698:
    {
        returnValue = F("Otto-Witte-Str.");
        break;
    }
    case 244699:
    {
        returnValue = F("Otto-Wohlgemuth-Weg");
        break;
    }
    case 244700:
    {
        returnValue = F("Otto-Wolff-Str.");
        break;
    }
    case 244701:
    {
        returnValue = F("Otto-Wolter-Str.");
        break;
    }
    case 244702:
    {
        returnValue = F("Otto-Worms-Str.");
        break;
    }
    case 244703:
    {
        returnValue = F("Otto-Wurster-Anlage");
        break;
    }
    case 244704:
    {
        returnValue = F("Otto-Wöhlert-Weg");
        break;
    }
    case 244705:
    {
        returnValue = F("Otto-Wörner-Str.");
        break;
    }
    case 244706:
    {
        returnValue = F("Otto-Zieske-Str.");
        break;
    }
    case 244707:
    {
        returnValue = F("Otto-Zinßer-Str.");
        break;
    }
    case 244708:
    {
        returnValue = F("Otto-Zirnbauer-Str.");
        break;
    }
    case 244709:
    {
        returnValue = F("Otto-Zöckler-Str.");
        break;
    }
    case 244710:
    {
        returnValue = F("Otto-und-Erna-Kreuzer-Str.");
        break;
    }
    case 244711:
    {
        returnValue = F("Otto-und-Quantz-Str.");
        break;
    }
    case 244712:
    {
        returnValue = F("Otto-von-Bamberg Str.");
        break;
    }
    case 244713:
    {
        returnValue = F("Otto-von-Bismarck-Str.");
        break;
    }
    case 244714:
    {
        returnValue = F("Otto-von-Boehn-Str.");
        break;
    }
    case 244715:
    {
        returnValue = F("Otto-von-Corvin-Str.");
        break;
    }
    case 244716:
    {
        returnValue = F("Otto-von-Dandl-Ring");
        break;
    }
    case 244717:
    {
        returnValue = F("Otto-von-Feury-Str.");
        break;
    }
    case 244718:
    {
        returnValue = F("Otto-von-Guericke-Allee");
        break;
    }
    case 244719:
    {
        returnValue = F("Otto-von-Guericke-Ring");
        break;
    }
    case 244720:
    {
        returnValue = F("Otto-von-Guericke-Str.");
        break;
    }
    case 244721:
    {
        returnValue = F("Otto-von-Hubach-Str.");
        break;
    }
    case 244722:
    {
        returnValue = F("Otto-von-Lilienthal-Str.");
        break;
    }
    case 244723:
    {
        returnValue = F("Otto-von-Ottenfeld-Platz");
        break;
    }
    case 244724:
    {
        returnValue = F("Otto-von-Puchberg-Str.");
        break;
    }
    case 244725:
    {
        returnValue = F("Otto-von-Ravensberg-Str.");
        break;
    }
    case 244726:
    {
        returnValue = F("Otto-von-Scheyern-Weg");
        break;
    }
    case 244727:
    {
        returnValue = F("Otto-von-Steinbeis-Str.");
        break;
    }
    case 244728:
    {
        returnValue = F("Otto-von-Waldstein-Ring");
        break;
    }
    case 244729:
    {
        returnValue = F("Ottobadstr.");
        break;
    }
    case 244730:
    {
        returnValue = F("Ottoberg");
        break;
    }
    case 244731:
    {
        returnValue = F("Ottobeurer Str.");
        break;
    }
    case 244732:
    {
        returnValue = F("Ottobeurergasse");
        break;
    }
    case 244733:
    {
        returnValue = F("Ottobrunnen");
        break;
    }
    case 244734:
    {
        returnValue = F("Ottobrunner Str.");
        break;
    }
    case 244735:
    {
        returnValue = F("Ottobüchlweg");
        break;
    }
    case 244736:
    {
        returnValue = F("Ottogasse");
        break;
    }
    case 244737:
    {
        returnValue = F("Ottogerd-Mühlmann-Str.");
        break;
    }
    case 244738:
    {
        returnValue = F("Ottoheinrichstr.");
        break;
    }
    case 244739:
    {
        returnValue = F("Ottoherscheid");
        break;
    }
    case 244740:
    {
        returnValue = F("Ottohof");
        break;
    }
    case 244741:
    {
        returnValue = F("Ottokar-Wüst-Platz");
        break;
    }
    case 244742:
    {
        returnValue = F("Ottokarplatz");
        break;
    }
    case 244743:
    {
        returnValue = F("Ottokarstr.");
        break;
    }
    case 244744:
    {
        returnValue = F("Ottokarweg");
        break;
    }
    case 244745:
    {
        returnValue = F("Ottolinie");
        break;
    }
    case 244746:
    {
        returnValue = F("Ottomar-Enking-Str.");
        break;
    }
    case 244747:
    {
        returnValue = F("Ottomar-Geschke-Platz");
        break;
    }
    case 244748:
    {
        returnValue = F("Ottomar-von-Reden-Park");
        break;
    }
    case 244749:
    {
        returnValue = F("Ottomarsplatz");
        break;
    }
    case 244750:
    {
        returnValue = F("Ottomeyerstr.");
        break;
    }
    case 244751:
    {
        returnValue = F("Ottomühle");
        break;
    }
    case 244752:
    {
        returnValue = F("Ottonenstr.");
        break;
    }
    case 244753:
    {
        returnValue = F("Ottonenweg");
        break;
    }
    case 244754:
    {
        returnValue = F("Ottorieder Weg");
        break;
    }
    case 244755:
    {
        returnValue = F("Ottosau");
        break;
    }
    case 244756:
    {
        returnValue = F("Ottoschacht");
        break;
    }
    case 244757:
    {
        returnValue = F("Ottoscher Garten");
        break;
    }
    case 244758:
    {
        returnValue = F("Ottostr.");
        break;
    }
    case 244759:
    {
        returnValue = F("Ottosweg");
        break;
    }
    case 244760:
    {
        returnValue = F("Ottoweg");
        break;
    }
    case 244761:
    {
        returnValue = F("Ottowind");
        break;
    }
    case 244762:
    {
        returnValue = F("Ottowinder Str.");
        break;
    }
    case 244763:
    {
        returnValue = F("Otto–Wels–Str.");
        break;
    }
    case 244764:
    {
        returnValue = F("Ottrauer Str.");
        break;
    }
    case 244765:
    {
        returnValue = F("Ottrauer Weg");
        break;
    }
    case 244766:
    {
        returnValue = F("Ottrichstr.");
        break;
    }
    case 244767:
    {
        returnValue = F("Ottstedter Str.");
        break;
    }
    case 244768:
    {
        returnValue = F("Ottstedter Weg");
        break;
    }
    case 244769:
    {
        returnValue = F("Ottstr.");
        break;
    }
    case 244770:
    {
        returnValue = F("Ottweg");
        break;
    }
    case 244771:
    {
        returnValue = F("Ottweiler Str.");
        break;
    }
    case 244772:
    {
        returnValue = F("Ottweilerstr.");
        break;
    }
    case 244773:
    {
        returnValue = F("Ottwin-Saupe-Weg");
        break;
    }
    case 244774:
    {
        returnValue = F("Otzbachweg");
        break;
    }
    case 244775:
    {
        returnValue = F("Otzbergring");
        break;
    }
    case 244776:
    {
        returnValue = F("Otzbergstr.");
        break;
    }
    case 244777:
    {
        returnValue = F("Otzbergweg");
        break;
    }
    case 244778:
    {
        returnValue = F("Otzdorfer Str.");
        break;
    }
    case 244779:
    {
        returnValue = F("Otzdorfer Weg");
        break;
    }
    case 244780:
    {
        returnValue = F("Otzemicker Weg");
        break;
    }
    case 244781:
    {
        returnValue = F("Otzendorfer Str.");
        break;
    }
    case 244782:
    {
        returnValue = F("Otzer Landstr.");
        break;
    }
    case 244783:
    {
        returnValue = F("Otzhusumweg");
        break;
    }
    case 244784:
    {
        returnValue = F("Otzinger Str.");
        break;
    }
    case 244785:
    {
        returnValue = F("Otzlberg");
        break;
    }
    case 244786:
    {
        returnValue = F("Otzumer Balje");
        break;
    }
    case 244787:
    {
        returnValue = F("Otzumer Weg");
        break;
    }
    case 244788:
    {
        returnValue = F("Oude Kleefsebaan");
        break;
    }
    case 244789:
    {
        returnValue = F("Oudenburger Ring");
        break;
    }
    case 244790:
    {
        returnValue = F("Ouderkerkplatz");
        break;
    }
    case 244791:
    {
        returnValue = F("Ouessantschafe");
        break;
    }
    case 244792:
    {
        returnValue = F("Oulchy-Le-Chateau-Ring");
        break;
    }
    case 244793:
    {
        returnValue = F("Oulustr.");
        break;
    }
    case 244794:
    {
        returnValue = F("Ourtalstr.");
        break;
    }
    case 244795:
    {
        returnValue = F("Outdoor-Fitness-Anlage");
        break;
    }
    case 244796:
    {
        returnValue = F("Outdoor-Fitnesspark");
        break;
    }
    case 244797:
    {
        returnValue = F("Ouzo Platz");
        break;
    }
    case 244798:
    {
        returnValue = F("Ovelackerstr.");
        break;
    }
    case 244799:
    {
        returnValue = F("Ovelgönne");
        break;
    }
    case 244800:
    {
        returnValue = F("Ovelgönner Str.");
        break;
    }
    case 244801:
    {
        returnValue = F("Ovelgönner Weg");
        break;
    }
    case 244802:
    {
        returnValue = F("Ovelgönnestr.");
        break;
    }
    case 244803:
    {
        returnValue = F("Ovelgönneweg");
        break;
    }
    case 244804:
    {
        returnValue = F("Ovelgünne");
        break;
    }
    case 244805:
    {
        returnValue = F("Ovelgünner Bahnhofstr.");
        break;
    }
    case 244806:
    {
        returnValue = F("Ovelgünner Chaussee");
        break;
    }
    case 244807:
    {
        returnValue = F("Ovelgünner Hauptstr.");
        break;
    }
    case 244808:
    {
        returnValue = F("Ovelgünner Schulstr.");
        break;
    }
    case 244809:
    {
        returnValue = F("Ovelgünner Str.");
        break;
    }
    case 244810:
    {
        returnValue = F("Ovelheider Weg");
        break;
    }
    case 244811:
    {
        returnValue = F("Ovellackerhof");
        break;
    }
    case 244812:
    {
        returnValue = F("Ovendorf");
        break;
    }
    case 244813:
    {
        returnValue = F("Ovendorfer Redder");
        break;
    }
    case 244814:
    {
        returnValue = F("Ovendorfer Str.");
        break;
    }
    case 244815:
    {
        returnValue = F("Oveneystr.");
        break;
    }
    case 244816:
    {
        returnValue = F("Ovenhäuser Str.");
        break;
    }
    case 244817:
    {
        returnValue = F("Ovenstädter Str.");
        break;
    }
    case 244818:
    {
        returnValue = F("Oventrop");
        break;
    }
    case 244819:
    {
        returnValue = F("Over-Acker");
        break;
    }
    case 244820:
    {
        returnValue = F("Overather Feld");
        break;
    }
    case 244821:
    {
        returnValue = F("Overather Str.");
        break;
    }
    case 244822:
    {
        returnValue = F("Overbacher Weg");
        break;
    }
    case 244823:
    {
        returnValue = F("Overbachstr.");
        break;
    }
    case 244824:
    {
        returnValue = F("Overbecker Damm");
        break;
    }
    case 244825:
    {
        returnValue = F("Overbecker Str.");
        break;
    }
    case 244826:
    {
        returnValue = F("Overbeckstr.");
        break;
    }
    case 244827:
    {
        returnValue = F("Overbeckweg");
        break;
    }
    case 244828:
    {
        returnValue = F("Overberg Schulhof");
        break;
    }
    case 244829:
    {
        returnValue = F("Overberg-Passage");
        break;
    }
    case 244830:
    {
        returnValue = F("Overberger Str.");
        break;
    }
    case 244831:
    {
        returnValue = F("Overberger Weg");
        break;
    }
    case 244832:
    {
        returnValue = F("Overbergplatz");
        break;
    }
    case 244833:
    {
        returnValue = F("Overbergring");
        break;
    }
    case 244834:
    {
        returnValue = F("Overbergstr.");
        break;
    }
    case 244835:
    {
        returnValue = F("Overbergweg");
        break;
    }
    case 244836:
    {
        returnValue = F("Overdamm");
        break;
    }
    case 244837:
    {
        returnValue = F("Overdeich");
        break;
    }
    case 244838:
    {
        returnValue = F("Overdickshof");
        break;
    }
    case 244839:
    {
        returnValue = F("Overdyker Str.");
        break;
    }
    case 244840:
    {
        returnValue = F("Overfeldsweg");
        break;
    }
    case 244841:
    {
        returnValue = F("Overfeldweg");
        break;
    }
    case 244842:
    {
        returnValue = F("Overgünnestr.");
        break;
    }
    case 244843:
    {
        returnValue = F("Overhagen");
        break;
    }
    case 244844:
    {
        returnValue = F("Overhagener Str.");
        break;
    }
    case 244845:
    {
        returnValue = F("Overhagenweg");
        break;
    }
    case 244846:
    {
        returnValue = F("Overhege");
        break;
    }
    case 244847:
    {
        returnValue = F("Overhetfelder Str.");
        break;
    }
    case 244848:
    {
        returnValue = F("Overhoffstr.");
        break;
    }
    case 244849:
    {
        returnValue = F("Overhofstr.");
        break;
    }
    case 244850:
    {
        returnValue = F("Overhove");
        break;
    }
    case 244851:
    {
        returnValue = F("Overhuesweg");
        break;
    }
    case 244852:
    {
        returnValue = F("Overkamps Hof");
        break;
    }
    case 244853:
    {
        returnValue = F("Overkampstr.");
        break;
    }
    case 244854:
    {
        returnValue = F("Overlaher Str.");
        break;
    }
    case 244855:
    {
        returnValue = F("Overland Park-Garten");
        break;
    }
    case 244856:
    {
        returnValue = F("Overledinger Str.");
        break;
    }
    case 244857:
    {
        returnValue = F("Overling");
        break;
    }
    case 244858:
    {
        returnValue = F("Overmannstr.");
        break;
    }
    case 244859:
    {
        returnValue = F("Overmannweg");
        break;
    }
    case 244860:
    {
        returnValue = F("Overndorfer Str.");
        break;
    }
    case 244861:
    {
        returnValue = F("Overnkamp");
        break;
    }
    case 244862:
    {
        returnValue = F("Oversand");
        break;
    }
    case 244863:
    {
        returnValue = F("Overschlagbahn");
        break;
    }
    case 244864:
    {
        returnValue = F("Oversheimer Weg");
        break;
    }
    case 244865:
    {
        returnValue = F("Overstedter Weg");
        break;
    }
    case 244866:
    {
        returnValue = F("Overstieg");
        break;
    }
    case 244867:
    {
        returnValue = F("Overstolzenplatz");
        break;
    }
    case 244868:
    {
        returnValue = F("Overt Höcht");
        break;
    }
    case 244869:
    {
        returnValue = F("Overtfeldweg");
        break;
    }
    case 244870:
    {
        returnValue = F("Overweg");
        break;
    }
    case 244871:
    {
        returnValue = F("Overwegstr.");
        break;
    }
    case 244872:
    {
        returnValue = F("Ovid-Str.");
        break;
    }
    case 244873:
    {
        returnValue = F("Ovidweg");
        break;
    }
    case 244874:
    {
        returnValue = F("Owener Teichweg");
        break;
    }
    case 244875:
    {
        returnValue = F("Owersgasse");
        break;
    }
    case 244876:
    {
        returnValue = F("Owiesen");
        break;
    }
    case 244877:
    {
        returnValue = F("Owinger Halde");
        break;
    }
    case 244878:
    {
        returnValue = F("Owinger Str.");
        break;
    }
    case 244879:
    {
        returnValue = F("Owschlager Damm");
        break;
    }
    case 244880:
    {
        returnValue = F("Owschlager Moor");
        break;
    }
    case 244881:
    {
        returnValue = F("Owwering");
        break;
    }
    case 244882:
    {
        returnValue = F("Ox Automobile");
        break;
    }
    case 244883:
    {
        returnValue = F("Oxbüll-Nord");
        break;
    }
    case 244884:
    {
        returnValue = F("Oxbüll-Süd");
        break;
    }
    case 244885:
    {
        returnValue = F("Oxelbeerweg");
        break;
    }
    case 244886:
    {
        returnValue = F("Oxenbronner Str.");
        break;
    }
    case 244887:
    {
        returnValue = F("Oxforder Str.");
        break;
    }
    case 244888:
    {
        returnValue = F("Oxfordstr.");
        break;
    }
    case 244889:
    {
        returnValue = F("Oxlund");
        break;
    }
    case 244890:
    {
        returnValue = F("Oxlunder Weg");
        break;
    }
    case 244891:
    {
        returnValue = F("Oxstedter Str.");
        break;
    }
    case 244892:
    {
        returnValue = F("Oxstedter Weg");
        break;
    }
    case 244893:
    {
        returnValue = F("Oxter Flage");
        break;
    }
    case 244894:
    {
        returnValue = F("Oxter Weg");
        break;
    }
    case 244895:
    {
        returnValue = F("Oybiner Str.");
        break;
    }
    case 244896:
    {
        returnValue = F("Oyensburg");
        break;
    }
    case 244897:
    {
        returnValue = F("Oyenstr.");
        break;
    }
    case 244898:
    {
        returnValue = F("Oyhofer Str.");
        break;
    }
    case 244899:
    {
        returnValue = F("Oykenflag");
        break;
    }
    case 244900:
    {
        returnValue = F("Oyler Berg");
        break;
    }
    case 244901:
    {
        returnValue = F("Oyler Landstr.");
        break;
    }
    case 244902:
    {
        returnValue = F("Oyler Str.");
        break;
    }
    case 244903:
    {
        returnValue = F("Oyler Weg");
        break;
    }
    case 244904:
    {
        returnValue = F("Oymühlenstr.");
        break;
    }
    case 244905:
    {
        returnValue = F("Oynhausen");
        break;
    }
    case 244906:
    {
        returnValue = F("Oytalstr.");
        break;
    }
    case 244907:
    {
        returnValue = F("Oyter Str.");
        break;
    }
    case 244908:
    {
        returnValue = F("Oyterdamm");
        break;
    }
    case 244909:
    {
        returnValue = F("Oytermühle");
        break;
    }
    case 244910:
    {
        returnValue = F("Oythe");
        break;
    }
    case 244911:
    {
        returnValue = F("Oyther Str.");
        break;
    }
    case 244912:
    {
        returnValue = F("Oyweg");
        break;
    }
    case 244913:
    {
        returnValue = F("Oywiesenweg");
        break;
    }
    case 244914:
    {
        returnValue = F("Ozark Way");
        break;
    }
    case 244915:
    {
        returnValue = F("Ozenriedweg");
        break;
    }
    case 244916:
    {
        returnValue = F("Ozetweiherstr.");
        break;
    }
    case 244917:
    {
        returnValue = F("Oßhaldener Str.");
        break;
    }
    case 244918:
    {
        returnValue = F("Oßla");
        break;
    }
    case 244919:
    {
        returnValue = F("Oßlaberg");
        break;
    }
    case 244920:
    {
        returnValue = F("Oßlaweg");
        break;
    }
    case 244921:
    {
        returnValue = F("Oßlinger Str.");
        break;
    }
    case 244922:
    {
        returnValue = F("Oßmannsgrund");
        break;
    }
    case 244923:
    {
        returnValue = F("Oßmannstedter Str.");
        break;
    }
    case 244924:
    {
        returnValue = F("Oßmannstedter Weg");
        break;
    }
    case 244925:
    {
        returnValue = F("Oßmannsweiler");
        break;
    }
    case 244926:
    {
        returnValue = F("Oßmaritz");
        break;
    }
    case 244927:
    {
        returnValue = F("Oßmaritzer Str.");
        break;
    }
    case 244928:
    {
        returnValue = F("Oßniger Dorfstr.");
        break;
    }
    case 244929:
    {
        returnValue = F("Oßwaldstr.");
        break;
    }
    case 244930:
    {
        returnValue = F("Oßweiler Weg");
        break;
    }
    }
    return returnValue;
}
